/* arch/arm/mach-msm/qdsp6/dal.c
 *
 * Copyright (C) 2009 Google, Inc.
 * Author: Brian Swetland <swetland@google.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/kernel.h>
#include <linux/spinlock.h>
#include <linux/mutex.h>
#include <linux/list.h>
#include <linux/sched.h>
#include <linux/wait.h>
#include <linux/errno.h>

#include <linux/delay.h>

#include <mach/msm_smd.h>

#include "dal.h"

#define DAL_TRACE 0

struct dal_hdr {
	uint32_t length:16;	/* message length (header inclusive) */
	uint32_t version:8;	/* DAL protocol version */
	uint32_t priority:7;
	uint32_t async:1;
	uint32_t ddi:16;	/* DDI method number */
	uint32_t prototype:8;	/* DDI serialization format */
	uint32_t msgid:8;	/* message id (DDI, ATTACH, DETACH, ...) */
	void *from;
	void *to;
} __attribute__((packed));

#define DAL_HDR_SIZE		(sizeof(struct dal_hdr))
#define DAL_DATA_MAX		512
#define DAL_MSG_MAX		(DAL_HDR_SIZE + DAL_DATA_MAX)

#define DAL_VERSION		0x11

#define DAL_MSGID_DDI		0x00
#define DAL_MSGID_ATTACH	0x01
#define DAL_MSGID_DETACH	0x02
#define DAL_MSGID_ASYNCH	0xC0
#define DAL_MSGID_REPLY		0x80

struct dal_channel {
	struct list_head list;
	struct list_head clients;

	/* synchronization for changing channel state,
	 * adding/removing clients, smd callbacks, etc
	 */
	spinlock_t lock;

	struct smd_channel *sch;
	char *name;

	/* events are delivered at IRQ context immediately, so
	 * we only need one assembly buffer for the entire channel
	 */
	struct dal_hdr hdr;
	unsigned char data[DAL_DATA_MAX];

	unsigned count;
	void *ptr;

	/* client which the current inbound message is for */
	struct dal_client *active;
};

struct dal_client {
	struct list_head list;
	struct dal_channel *dch;
	void *cookie;
	dal_event_func_t event;

	/* opaque handle for the far side */
	void *remote;

	/* dal rpc calls are fully synchronous -- only one call may be
	 * active per client at a time
	 */
	struct mutex write_lock;
	wait_queue_head_t wait;

	unsigned char data[DAL_DATA_MAX];

	void *reply;
	int reply_max;
	int status;
	unsigned msgid; /* msgid of expected reply */
};

static void dal_channel_notify(void *priv, unsigned event)
{
	struct dal_channel *dch = priv;
	struct dal_hdr *hdr = &dch->hdr;
	struct dal_client *client;
	unsigned long flags;
	int len;
	int r;

	spin_lock_irqsave(&dch->lock, flags);

again:
	if (dch->count == 0) {
		if (smd_read_avail(dch->sch) < DAL_HDR_SIZE)
			goto done;

		smd_read(dch->sch, hdr, DAL_HDR_SIZE);

		if (hdr->length < DAL_HDR_SIZE)
			goto done;

		if (hdr->length > DAL_MSG_MAX)
			panic("oversize message");

		dch->count = hdr->length - DAL_HDR_SIZE;

		/* locate the client this message is targeted to */
		list_for_each_entry(client, &dch->clients, list) {
			if (dch->hdr.to == client) {
				dch->active = client;
				dch->ptr = client->data;
				goto check_data;
			}
		}
		pr_err("$$$ receiving unknown message len = %d $$$\n",
		       dch->count);
		dch->active = 0;
		dch->ptr = dch->data;
	}

check_data:
	len = dch->count;
	if (len > 0) {
		if (smd_read_avail(dch->sch) < len)
			goto done;

		r = smd_read(dch->sch, dch->ptr, len);
		if (r != len)
			panic("invalid read");

#if DAL_TRACE
		pr_info("dal recv %p <- %p %02x:%04x:%02x %d\n",
			hdr->to, hdr->from, hdr->msgid, hdr->ddi,
			hdr->prototype, hdr->length - sizeof(*hdr));
		print_hex_dump_bytes("", DUMP_PREFIX_OFFSET, dch->ptr, len);
#endif
		dch->count = 0;

		client = dch->active;
		if (!client) {
			pr_err("dal: message to %p discarded\n", dch->hdr.to);
			goto again;
		}

		if (hdr->msgid == DAL_MSGID_ASYNCH) {
			if (client->event)
				client->event(dch->ptr, len, client->cookie);
			else
				pr_err("dal: client %p has no event handler\n",
				       client);
			goto again;
		}

		if (hdr->msgid == client->msgid) {
			if (!client->remote)
				client->remote = hdr->from;
			if (len > client->reply_max)
				len = client->reply_max;
			memcpy(client->reply, client->data, len);
			client->status = len;
			wake_up(&client->wait);
			goto again;
		}

		pr_err("dal: cannot find client %p\n", dch->hdr.to);
		goto again;
	}

done:
	spin_unlock_irqrestore(&dch->lock, flags);
}

static LIST_HEAD(dal_channel_list);
static DEFINE_MUTEX(dal_channel_list_lock);

static struct dal_channel *dal_open_channel(const char *name, uint32_t cpu)
{
	struct dal_channel *dch;

	mutex_lock(&dal_channel_list_lock);

	list_for_each_entry(dch, &dal_channel_list, list) {
		if (!strcmp(dch->name, name))
			goto found_it;
	}

	dch = kzalloc(sizeof(*dch) + strlen(name) + 1, GFP_KERNEL);
	if (!dch)
		goto fail;

	dch->name = (char *) (dch + 1);
	strcpy(dch->name, name);
	spin_lock_init(&dch->lock);
	INIT_LIST_HEAD(&dch->clients);

	list_add(&dch->list, &dal_channel_list);

found_it:
	if (!dch->sch) {
		if (smd_named_open_on_edge(name, cpu, &dch->sch,
					dch, dal_channel_notify)) {
			pr_err("smd open failed\n");
			dch = NULL;
		}
		/* FIXME: wait for channel to open before returning */
		msleep(100);
	}

fail:
	mutex_unlock(&dal_channel_list_lock);

	return dch;
}

int dal_call_raw(struct dal_client *client,
		 struct dal_hdr *hdr,
		 void *data, int data_len,
		 void *reply, int reply_max)
{
	struct dal_channel *dch = client->dch;
	unsigned long flags;

	client->reply = reply;
	client->reply_max = reply_max;
	client->msgid = hdr->msgid | DAL_MSGID_REPLY;
	client->status = -EBUSY;

#if DAL_TRACE
	pr_info("dal send %p -> %p %02x:%04x:%02x %d\n",
		hdr->from, hdr->to, hdr->msgid, hdr->ddi,
		hdr->prototype, hdr->length - sizeof(*hdr));
	print_hex_dump_bytes("", DUMP_PREFIX_OFFSET, data, data_len);
#endif

	spin_lock_irqsave(&dch->lock, flags);
	/* FIXME: ensure entire message is written or none. */
	smd_write(dch->sch, hdr, sizeof(*hdr));
	smd_write(dch->sch, data, data_len);
	spin_unlock_irqrestore(&dch->lock, flags);

	wait_event(client->wait, (client->status != -EBUSY));

	return client->status;
}

int dal_call(struct dal_client *client,
	     unsigned ddi, unsigned prototype,
	     void *data, int data_len,
	     void *reply, int reply_max)
{
	struct dal_hdr hdr;
	int r;

	memset(&hdr, 0, sizeof(hdr));

	hdr.length = data_len + sizeof(hdr);
	hdr.version = DAL_VERSION;
	hdr.msgid = DAL_MSGID_DDI;
	hdr.ddi = ddi;
	hdr.prototype = prototype;
	hdr.from = client;
	hdr.to = client->remote;

	if (hdr.length > DAL_MSG_MAX)
		return -EINVAL;

	mutex_lock(&client->write_lock);
	r = dal_call_raw(client, &hdr, data, data_len, reply, reply_max);
	mutex_unlock(&client->write_lock);

	return r;
}

struct dal_msg_attach {
	uint32_t device_id;
	char attach[64];
	char service_name[32];
} __attribute__((packed));

struct dal_reply_attach {
	uint32_t status;
	char name[64];
};

struct dal_client *dal_attach(uint32_t device_id, const char *name,
			      uint32_t cpu, dal_event_func_t func, void *cookie)
{
	struct dal_hdr hdr;
	struct dal_msg_attach msg;
	struct dal_reply_attach reply;
	struct dal_channel *dch;
	struct dal_client *client;
	unsigned long flags;
	int r;

	dch = dal_open_channel(name, cpu);
	if (!dch)
		return 0;

	client = kzalloc(sizeof(*client), GFP_KERNEL);
	if (!client)
		return 0;

	client->dch = dch;
	client->event = func;
	client->cookie = cookie;
	mutex_init(&client->write_lock);
	init_waitqueue_head(&client->wait);

	spin_lock_irqsave(&dch->lock, flags);
	list_add(&client->list, &dch->clients);
	spin_unlock_irqrestore(&dch->lock, flags);

	memset(&hdr, 0, sizeof(hdr));
	memset(&msg, 0, sizeof(msg));

	hdr.length = sizeof(hdr) + sizeof(msg);
	hdr.version = DAL_VERSION;
	hdr.msgid = DAL_MSGID_ATTACH;
	hdr.from = client;
	msg.device_id = device_id;

	r = dal_call_raw(client, &hdr, &msg, sizeof(msg),
			 &reply, sizeof(reply));

	if ((r == sizeof(reply)) && (reply.status == 0)) {
		reply.name[63] = 0;
		pr_info("dal_attach: status = %d, name = '%s'\n",
			reply.status, reply.name);
		return client;
	}

	pr_err("dal_attach: failure\n");

	dal_detach(client);
	return 0;
}

int dal_detach(struct dal_client *client)
{
	struct dal_channel *dch;
	unsigned long flags;

	mutex_lock(&client->write_lock);
	if (client->remote) {
		struct dal_hdr hdr;
		uint32_t data;

		memset(&hdr, 0, sizeof(hdr));
		hdr.length = sizeof(hdr) + sizeof(data);
		hdr.version = DAL_VERSION;
		hdr.msgid = DAL_MSGID_DETACH;
		hdr.from = client;
		hdr.to = client->remote;
		data = (uint32_t) client;

		dal_call_raw(client, &hdr, &data, sizeof(data),
			     &data, sizeof(data));
	}

	dch = client->dch;
	spin_lock_irqsave(&dch->lock, flags);
	if (dch->active == client) {
		/* We have received a message header for this client
		 * but not the body of the message.  Ensure that when
		 * the body arrives we don't write it into the now-closed
		 * client.  In *theory* this should never happen.
		 */
		dch->active = 0;
		dch->ptr = dch->data;
	}
	list_del(&client->list);
	spin_unlock_irqrestore(&dch->lock, flags);

	mutex_unlock(&client->write_lock);

	kfree(client);
	return 0;
}

void *dal_get_remote_handle(struct dal_client *client)
{
	return client->remote;
}

/* convenience wrappers */

int dal_call_f0(struct dal_client *client, uint32_t ddi, uint32_t arg1)
{
	uint32_t tmp = arg1;
	int res;
	res = dal_call(client, ddi, 0, &tmp, sizeof(tmp), &tmp, sizeof(tmp));
	if (res >= 4)
		return (int) tmp;
	return res;
}

int dal_call_f1(struct dal_client *client, uint32_t ddi, uint32_t arg1,
		uint32_t arg2)
{
	uint32_t tmp[2];
	int res;
	tmp[0] = arg1;
	tmp[1] = arg2;
	res = dal_call(client, ddi, 1, tmp, sizeof(tmp), tmp, sizeof(uint32_t));
	if (res >= 4)
		return (int) tmp[0];
	return res;
}

int dal_call_f5(struct dal_client *client, uint32_t ddi, void *ibuf, uint32_t ilen)
{
	uint32_t tmp[128];
	int res;
	int param_idx = 0;

	if (ilen + 4 > DAL_DATA_MAX)
		return -EINVAL;

	tmp[param_idx] = ilen;
	param_idx++;

	memcpy(&tmp[param_idx], ibuf, ilen);
	param_idx += DIV_ROUND_UP(ilen, 4);

	res = dal_call(client, ddi, 5, tmp, param_idx * 4, tmp, sizeof(tmp));

	if (res >= 4)
		return (int) tmp[0];
	return res;
}

int dal_call_f9(struct dal_client *client, uint32_t ddi, void *obuf,
		uint32_t olen)
{
	uint32_t tmp[128];
	int res;

	if (olen > sizeof(tmp) - 8)
		return -EINVAL;
	tmp[0] = olen;

	res = dal_call(client, ddi, 9, tmp, sizeof(uint32_t), tmp,
		sizeof(tmp));

	if (res >= 4)
		res = (int)tmp[0];

	if (!res) {
		if (tmp[1] > olen)
			return -EIO;
		memcpy(obuf, &tmp[2], tmp[1]);
	}
	return res;
}

int dal_call_f13(struct dal_client *client, uint32_t ddi, void *ibuf1,
		 uint32_t ilen1, void *ibuf2, uint32_t ilen2, void *obuf,
		 uint32_t olen)
{
	uint32_t tmp[128];
	int res;
	int param_idx = 0;

	if (ilen1 + ilen2 + 8 > DAL_DATA_MAX)
		return -EINVAL;

	tmp[param_idx] = ilen1;
	param_idx++;

	memcpy(&tmp[param_idx], ibuf1, ilen1);
	param_idx += DIV_ROUND_UP(ilen1, 4);

	tmp[param_idx++] = ilen2;
	memcpy(&tmp[param_idx], ibuf2, ilen2);
	param_idx += DIV_ROUND_UP(ilen2, 4);

	tmp[param_idx++] = olen;
	res = dal_call(client, ddi, 13, tmp, param_idx * 4, tmp,
			sizeof(tmp));

	if (res >= 4)
		res = (int)tmp[0];

	if (!res) {
		if (tmp[1] > olen)
			return -EIO;
		memcpy(obuf, &tmp[2], tmp[1]);
	}
	return res;
}
int dal_call_f14(struct dal_client *client, uint32_t ddi, void *ibuf,
		 uint32_t ilen, void *obuf1, uint32_t olen1, void *obuf2,
		 uint32_t olen2, uint32_t *oalen2)
{
	uint32_t tmp[128];
	int res;
	int param_idx = 0;

	if (olen1 + olen2 + 8 > DAL_DATA_MAX ||
		ilen + 12 > DAL_DATA_MAX)
		return -EINVAL;

	tmp[param_idx] = ilen;
	param_idx++;

	memcpy(&tmp[param_idx], ibuf, ilen);
	param_idx += DIV_ROUND_UP(ilen, 4);

	tmp[param_idx++] = olen1;
	tmp[param_idx++] = olen2;
	res = dal_call(client, ddi, 14, tmp, param_idx * 4, tmp, sizeof(tmp));

	if (res >= 4)
		res = (int)tmp[0];

	if (!res) {
		if (tmp[1] > olen1)
			return -EIO;
		param_idx = DIV_ROUND_UP(tmp[1], 4) + 2;
		if (tmp[param_idx] > olen2)
			return -EIO;

		memcpy(obuf1, &tmp[2], tmp[1]);
		memcpy(obuf2, &tmp[param_idx+1], tmp[param_idx]);
		*oalen2 = tmp[param_idx];
	}
	return res;
}