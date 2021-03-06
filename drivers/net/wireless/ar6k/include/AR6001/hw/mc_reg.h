//------------------------------------------------------------------------------
// <copyright file="mc_reg.h" company="Atheros">
//    Copyright (c) 2004-2007 Atheros Corporation.  All rights reserved.
// 
// The software source and binaries included in this development package are
// licensed, not sold. You, or your company, received the package under one
// or more license agreements. The rights granted to you are specifically
// listed in these license agreement(s). All other rights remain with Atheros
// Communications, Inc., its subsidiaries, or the respective owner including
// those listed on the included copyright notices.  Distribution of any
// portion of this package must be in strict compliance with the license
// agreement(s) terms.
// </copyright>
// 
// <summary>
// 	Wifi driver for AR6002
// </summary>
//
//------------------------------------------------------------------------------
//==============================================================================
// Author(s): ="Atheros"
//==============================================================================

#ifndef _MC_REG_H_
#define _MC_REG_H_

#define BANK0_ADDR_ADDRESS                       0x0c004000
#define BANK0_ADDR_OFFSET                        0x00000000
#define BANK0_ADDR_SIZE_MSB                      31
#define BANK0_ADDR_SIZE_LSB                      28
#define BANK0_ADDR_SIZE_MASK                     0xf0000000
#define BANK0_ADDR_SIZE_GET(x)                   (((x) & BANK0_ADDR_SIZE_MASK) >> BANK0_ADDR_SIZE_LSB)
#define BANK0_ADDR_SIZE_SET(x)                   (((x) << BANK0_ADDR_SIZE_LSB) & BANK0_ADDR_SIZE_MASK)
#define BANK0_ADDR_BASE_MSB                      27
#define BANK0_ADDR_BASE_LSB                      10
#define BANK0_ADDR_BASE_MASK                     0x0ffffc00
#define BANK0_ADDR_BASE_GET(x)                   (((x) & BANK0_ADDR_BASE_MASK) >> BANK0_ADDR_BASE_LSB)
#define BANK0_ADDR_BASE_SET(x)                   (((x) << BANK0_ADDR_BASE_LSB) & BANK0_ADDR_BASE_MASK)

#define BANK0_CONFIG_ADDRESS                     0x0c004004
#define BANK0_CONFIG_OFFSET                      0x00000004
#define BANK0_CONFIG_ENABLE_MSB                  31
#define BANK0_CONFIG_ENABLE_LSB                  31
#define BANK0_CONFIG_ENABLE_MASK                 0x80000000
#define BANK0_CONFIG_ENABLE_GET(x)               (((x) & BANK0_CONFIG_ENABLE_MASK) >> BANK0_CONFIG_ENABLE_LSB)
#define BANK0_CONFIG_ENABLE_SET(x)               (((x) << BANK0_CONFIG_ENABLE_LSB) & BANK0_CONFIG_ENABLE_MASK)
#define BANK0_CONFIG_WIDTH_MSB                   28
#define BANK0_CONFIG_WIDTH_LSB                   28
#define BANK0_CONFIG_WIDTH_MASK                  0x10000000
#define BANK0_CONFIG_WIDTH_GET(x)                (((x) & BANK0_CONFIG_WIDTH_MASK) >> BANK0_CONFIG_WIDTH_LSB)
#define BANK0_CONFIG_WIDTH_SET(x)                (((x) << BANK0_CONFIG_WIDTH_LSB) & BANK0_CONFIG_WIDTH_MASK)
#define BANK0_CONFIG_PROTECT_MSB                 26
#define BANK0_CONFIG_PROTECT_LSB                 26
#define BANK0_CONFIG_PROTECT_MASK                0x04000000
#define BANK0_CONFIG_PROTECT_GET(x)              (((x) & BANK0_CONFIG_PROTECT_MASK) >> BANK0_CONFIG_PROTECT_LSB)
#define BANK0_CONFIG_PROTECT_SET(x)              (((x) << BANK0_CONFIG_PROTECT_LSB) & BANK0_CONFIG_PROTECT_MASK)
#define BANK0_CONFIG_WB_ENABLE_MSB               25
#define BANK0_CONFIG_WB_ENABLE_LSB               25
#define BANK0_CONFIG_WB_ENABLE_MASK              0x02000000
#define BANK0_CONFIG_WB_ENABLE_GET(x)            (((x) & BANK0_CONFIG_WB_ENABLE_MASK) >> BANK0_CONFIG_WB_ENABLE_LSB)
#define BANK0_CONFIG_WB_ENABLE_SET(x)            (((x) << BANK0_CONFIG_WB_ENABLE_LSB) & BANK0_CONFIG_WB_ENABLE_MASK)
#define BANK0_CONFIG_WB_FLUSH_MSB                24
#define BANK0_CONFIG_WB_FLUSH_LSB                24
#define BANK0_CONFIG_WB_FLUSH_MASK               0x01000000
#define BANK0_CONFIG_WB_FLUSH_GET(x)             (((x) & BANK0_CONFIG_WB_FLUSH_MASK) >> BANK0_CONFIG_WB_FLUSH_LSB)
#define BANK0_CONFIG_WB_FLUSH_SET(x)             (((x) << BANK0_CONFIG_WB_FLUSH_LSB) & BANK0_CONFIG_WB_FLUSH_MASK)
#define BANK0_CONFIG_SCALE_MSB                   21
#define BANK0_CONFIG_SCALE_LSB                   20
#define BANK0_CONFIG_SCALE_MASK                  0x00300000
#define BANK0_CONFIG_SCALE_GET(x)                (((x) & BANK0_CONFIG_SCALE_MASK) >> BANK0_CONFIG_SCALE_LSB)
#define BANK0_CONFIG_SCALE_SET(x)                (((x) << BANK0_CONFIG_SCALE_LSB) & BANK0_CONFIG_SCALE_MASK)
#define BANK0_CONFIG_HOLDOFF_MSB                 19
#define BANK0_CONFIG_HOLDOFF_LSB                 16
#define BANK0_CONFIG_HOLDOFF_MASK                0x000f0000
#define BANK0_CONFIG_HOLDOFF_GET(x)              (((x) & BANK0_CONFIG_HOLDOFF_MASK) >> BANK0_CONFIG_HOLDOFF_LSB)
#define BANK0_CONFIG_HOLDOFF_SET(x)              (((x) << BANK0_CONFIG_HOLDOFF_LSB) & BANK0_CONFIG_HOLDOFF_MASK)
#define BANK0_CONFIG_TIMER3_MSB                  15
#define BANK0_CONFIG_TIMER3_LSB                  12
#define BANK0_CONFIG_TIMER3_MASK                 0x0000f000
#define BANK0_CONFIG_TIMER3_GET(x)               (((x) & BANK0_CONFIG_TIMER3_MASK) >> BANK0_CONFIG_TIMER3_LSB)
#define BANK0_CONFIG_TIMER3_SET(x)               (((x) << BANK0_CONFIG_TIMER3_LSB) & BANK0_CONFIG_TIMER3_MASK)
#define BANK0_CONFIG_TIMER2_MSB                  11
#define BANK0_CONFIG_TIMER2_LSB                  8
#define BANK0_CONFIG_TIMER2_MASK                 0x00000f00
#define BANK0_CONFIG_TIMER2_GET(x)               (((x) & BANK0_CONFIG_TIMER2_MASK) >> BANK0_CONFIG_TIMER2_LSB)
#define BANK0_CONFIG_TIMER2_SET(x)               (((x) << BANK0_CONFIG_TIMER2_LSB) & BANK0_CONFIG_TIMER2_MASK)
#define BANK0_CONFIG_TIMER1_MSB                  7
#define BANK0_CONFIG_TIMER1_LSB                  4
#define BANK0_CONFIG_TIMER1_MASK                 0x000000f0
#define BANK0_CONFIG_TIMER1_GET(x)               (((x) & BANK0_CONFIG_TIMER1_MASK) >> BANK0_CONFIG_TIMER1_LSB)
#define BANK0_CONFIG_TIMER1_SET(x)               (((x) << BANK0_CONFIG_TIMER1_LSB) & BANK0_CONFIG_TIMER1_MASK)
#define BANK0_CONFIG_TIMER0_MSB                  3
#define BANK0_CONFIG_TIMER0_LSB                  0
#define BANK0_CONFIG_TIMER0_MASK                 0x0000000f
#define BANK0_CONFIG_TIMER0_GET(x)               (((x) & BANK0_CONFIG_TIMER0_MASK) >> BANK0_CONFIG_TIMER0_LSB)
#define BANK0_CONFIG_TIMER0_SET(x)               (((x) << BANK0_CONFIG_TIMER0_LSB) & BANK0_CONFIG_TIMER0_MASK)

#define BANK0_READ_ADDRESS                       0x0c004008
#define BANK0_READ_OFFSET                        0x00000008
#define BANK0_READ_ENABLE_WAIT_MSB               31
#define BANK0_READ_ENABLE_WAIT_LSB               31
#define BANK0_READ_ENABLE_WAIT_MASK              0x80000000
#define BANK0_READ_ENABLE_WAIT_GET(x)            (((x) & BANK0_READ_ENABLE_WAIT_MASK) >> BANK0_READ_ENABLE_WAIT_LSB)
#define BANK0_READ_ENABLE_WAIT_SET(x)            (((x) << BANK0_READ_ENABLE_WAIT_LSB) & BANK0_READ_ENABLE_WAIT_MASK)
#define BANK0_READ_WAIT_EVENT_MSB                30
#define BANK0_READ_WAIT_EVENT_LSB                28
#define BANK0_READ_WAIT_EVENT_MASK               0x70000000
#define BANK0_READ_WAIT_EVENT_GET(x)             (((x) & BANK0_READ_WAIT_EVENT_MASK) >> BANK0_READ_WAIT_EVENT_LSB)
#define BANK0_READ_WAIT_EVENT_SET(x)             (((x) << BANK0_READ_WAIT_EVENT_LSB) & BANK0_READ_WAIT_EVENT_MASK)
#define BANK0_READ_END_EVENT_MSB                 26
#define BANK0_READ_END_EVENT_LSB                 24
#define BANK0_READ_END_EVENT_MASK                0x07000000
#define BANK0_READ_END_EVENT_GET(x)              (((x) & BANK0_READ_END_EVENT_MASK) >> BANK0_READ_END_EVENT_LSB)
#define BANK0_READ_END_EVENT_SET(x)              (((x) << BANK0_READ_END_EVENT_LSB) & BANK0_READ_END_EVENT_MASK)
#define BANK0_READ_BURST_END_EVENT_MSB           22
#define BANK0_READ_BURST_END_EVENT_LSB           20
#define BANK0_READ_BURST_END_EVENT_MASK          0x00700000
#define BANK0_READ_BURST_END_EVENT_GET(x)        (((x) & BANK0_READ_BURST_END_EVENT_MASK) >> BANK0_READ_BURST_END_EVENT_LSB)
#define BANK0_READ_BURST_END_EVENT_SET(x)        (((x) << BANK0_READ_BURST_END_EVENT_LSB) & BANK0_READ_BURST_END_EVENT_MASK)
#define BANK0_READ_BURST_START_EVENT_MSB         18
#define BANK0_READ_BURST_START_EVENT_LSB         16
#define BANK0_READ_BURST_START_EVENT_MASK        0x00070000
#define BANK0_READ_BURST_START_EVENT_GET(x)      (((x) & BANK0_READ_BURST_START_EVENT_MASK) >> BANK0_READ_BURST_START_EVENT_LSB)
#define BANK0_READ_BURST_START_EVENT_SET(x)      (((x) << BANK0_READ_BURST_START_EVENT_LSB) & BANK0_READ_BURST_START_EVENT_MASK)
#define BANK0_READ_EVENT3_DC_MSB                 15
#define BANK0_READ_EVENT3_DC_LSB                 15
#define BANK0_READ_EVENT3_DC_MASK                0x00008000
#define BANK0_READ_EVENT3_DC_GET(x)              (((x) & BANK0_READ_EVENT3_DC_MASK) >> BANK0_READ_EVENT3_DC_LSB)
#define BANK0_READ_EVENT3_DC_SET(x)              (((x) << BANK0_READ_EVENT3_DC_LSB) & BANK0_READ_EVENT3_DC_MASK)
#define BANK0_READ_EVENT3_BE_MSB                 14
#define BANK0_READ_EVENT3_BE_LSB                 14
#define BANK0_READ_EVENT3_BE_MASK                0x00004000
#define BANK0_READ_EVENT3_BE_GET(x)              (((x) & BANK0_READ_EVENT3_BE_MASK) >> BANK0_READ_EVENT3_BE_LSB)
#define BANK0_READ_EVENT3_BE_SET(x)              (((x) << BANK0_READ_EVENT3_BE_LSB) & BANK0_READ_EVENT3_BE_MASK)
#define BANK0_READ_EVENT3_OE_MSB                 13
#define BANK0_READ_EVENT3_OE_LSB                 13
#define BANK0_READ_EVENT3_OE_MASK                0x00002000
#define BANK0_READ_EVENT3_OE_GET(x)              (((x) & BANK0_READ_EVENT3_OE_MASK) >> BANK0_READ_EVENT3_OE_LSB)
#define BANK0_READ_EVENT3_OE_SET(x)              (((x) << BANK0_READ_EVENT3_OE_LSB) & BANK0_READ_EVENT3_OE_MASK)
#define BANK0_READ_EVENT3_CS_MSB                 12
#define BANK0_READ_EVENT3_CS_LSB                 12
#define BANK0_READ_EVENT3_CS_MASK                0x00001000
#define BANK0_READ_EVENT3_CS_GET(x)              (((x) & BANK0_READ_EVENT3_CS_MASK) >> BANK0_READ_EVENT3_CS_LSB)
#define BANK0_READ_EVENT3_CS_SET(x)              (((x) << BANK0_READ_EVENT3_CS_LSB) & BANK0_READ_EVENT3_CS_MASK)
#define BANK0_READ_EVENT2_DC_MSB                 11
#define BANK0_READ_EVENT2_DC_LSB                 11
#define BANK0_READ_EVENT2_DC_MASK                0x00000800
#define BANK0_READ_EVENT2_DC_GET(x)              (((x) & BANK0_READ_EVENT2_DC_MASK) >> BANK0_READ_EVENT2_DC_LSB)
#define BANK0_READ_EVENT2_DC_SET(x)              (((x) << BANK0_READ_EVENT2_DC_LSB) & BANK0_READ_EVENT2_DC_MASK)
#define BANK0_READ_EVENT2_BE_MSB                 10
#define BANK0_READ_EVENT2_BE_LSB                 10
#define BANK0_READ_EVENT2_BE_MASK                0x00000400
#define BANK0_READ_EVENT2_BE_GET(x)              (((x) & BANK0_READ_EVENT2_BE_MASK) >> BANK0_READ_EVENT2_BE_LSB)
#define BANK0_READ_EVENT2_BE_SET(x)              (((x) << BANK0_READ_EVENT2_BE_LSB) & BANK0_READ_EVENT2_BE_MASK)
#define BANK0_READ_EVENT2_OE_MSB                 9
#define BANK0_READ_EVENT2_OE_LSB                 9
#define BANK0_READ_EVENT2_OE_MASK                0x00000200
#define BANK0_READ_EVENT2_OE_GET(x)              (((x) & BANK0_READ_EVENT2_OE_MASK) >> BANK0_READ_EVENT2_OE_LSB)
#define BANK0_READ_EVENT2_OE_SET(x)              (((x) << BANK0_READ_EVENT2_OE_LSB) & BANK0_READ_EVENT2_OE_MASK)
#define BANK0_READ_EVENT2_CS_MSB                 8
#define BANK0_READ_EVENT2_CS_LSB                 8
#define BANK0_READ_EVENT2_CS_MASK                0x00000100
#define BANK0_READ_EVENT2_CS_GET(x)              (((x) & BANK0_READ_EVENT2_CS_MASK) >> BANK0_READ_EVENT2_CS_LSB)
#define BANK0_READ_EVENT2_CS_SET(x)              (((x) << BANK0_READ_EVENT2_CS_LSB) & BANK0_READ_EVENT2_CS_MASK)
#define BANK0_READ_EVENT1_DC_MSB                 7
#define BANK0_READ_EVENT1_DC_LSB                 7
#define BANK0_READ_EVENT1_DC_MASK                0x00000080
#define BANK0_READ_EVENT1_DC_GET(x)              (((x) & BANK0_READ_EVENT1_DC_MASK) >> BANK0_READ_EVENT1_DC_LSB)
#define BANK0_READ_EVENT1_DC_SET(x)              (((x) << BANK0_READ_EVENT1_DC_LSB) & BANK0_READ_EVENT1_DC_MASK)
#define BANK0_READ_EVENT1_BE_MSB                 6
#define BANK0_READ_EVENT1_BE_LSB                 6
#define BANK0_READ_EVENT1_BE_MASK                0x00000040
#define BANK0_READ_EVENT1_BE_GET(x)              (((x) & BANK0_READ_EVENT1_BE_MASK) >> BANK0_READ_EVENT1_BE_LSB)
#define BANK0_READ_EVENT1_BE_SET(x)              (((x) << BANK0_READ_EVENT1_BE_LSB) & BANK0_READ_EVENT1_BE_MASK)
#define BANK0_READ_EVENT1_OE_MSB                 5
#define BANK0_READ_EVENT1_OE_LSB                 5
#define BANK0_READ_EVENT1_OE_MASK                0x00000020
#define BANK0_READ_EVENT1_OE_GET(x)              (((x) & BANK0_READ_EVENT1_OE_MASK) >> BANK0_READ_EVENT1_OE_LSB)
#define BANK0_READ_EVENT1_OE_SET(x)              (((x) << BANK0_READ_EVENT1_OE_LSB) & BANK0_READ_EVENT1_OE_MASK)
#define BANK0_READ_EVENT1_CS_MSB                 4
#define BANK0_READ_EVENT1_CS_LSB                 4
#define BANK0_READ_EVENT1_CS_MASK                0x00000010
#define BANK0_READ_EVENT1_CS_GET(x)              (((x) & BANK0_READ_EVENT1_CS_MASK) >> BANK0_READ_EVENT1_CS_LSB)
#define BANK0_READ_EVENT1_CS_SET(x)              (((x) << BANK0_READ_EVENT1_CS_LSB) & BANK0_READ_EVENT1_CS_MASK)
#define BANK0_READ_EVENT0_DC_MSB                 3
#define BANK0_READ_EVENT0_DC_LSB                 3
#define BANK0_READ_EVENT0_DC_MASK                0x00000008
#define BANK0_READ_EVENT0_DC_GET(x)              (((x) & BANK0_READ_EVENT0_DC_MASK) >> BANK0_READ_EVENT0_DC_LSB)
#define BANK0_READ_EVENT0_DC_SET(x)              (((x) << BANK0_READ_EVENT0_DC_LSB) & BANK0_READ_EVENT0_DC_MASK)
#define BANK0_READ_EVENT0_BE_MSB                 2
#define BANK0_READ_EVENT0_BE_LSB                 2
#define BANK0_READ_EVENT0_BE_MASK                0x00000004
#define BANK0_READ_EVENT0_BE_GET(x)              (((x) & BANK0_READ_EVENT0_BE_MASK) >> BANK0_READ_EVENT0_BE_LSB)
#define BANK0_READ_EVENT0_BE_SET(x)              (((x) << BANK0_READ_EVENT0_BE_LSB) & BANK0_READ_EVENT0_BE_MASK)
#define BANK0_READ_EVENT0_OE_MSB                 1
#define BANK0_READ_EVENT0_OE_LSB                 1
#define BANK0_READ_EVENT0_OE_MASK                0x00000002
#define BANK0_READ_EVENT0_OE_GET(x)              (((x) & BANK0_READ_EVENT0_OE_MASK) >> BANK0_READ_EVENT0_OE_LSB)
#define BANK0_READ_EVENT0_OE_SET(x)              (((x) << BANK0_READ_EVENT0_OE_LSB) & BANK0_READ_EVENT0_OE_MASK)
#define BANK0_READ_EVENT0_CS_MSB                 0
#define BANK0_READ_EVENT0_CS_LSB                 0
#define BANK0_READ_EVENT0_CS_MASK                0x00000001
#define BANK0_READ_EVENT0_CS_GET(x)              (((x) & BANK0_READ_EVENT0_CS_MASK) >> BANK0_READ_EVENT0_CS_LSB)
#define BANK0_READ_EVENT0_CS_SET(x)              (((x) << BANK0_READ_EVENT0_CS_LSB) & BANK0_READ_EVENT0_CS_MASK)

#define BANK0_WRITE_ADDRESS                      0x0c00400c
#define BANK0_WRITE_OFFSET                       0x0000000c
#define BANK0_WRITE_ENABLE_WAIT_MSB              31
#define BANK0_WRITE_ENABLE_WAIT_LSB              31
#define BANK0_WRITE_ENABLE_WAIT_MASK             0x80000000
#define BANK0_WRITE_ENABLE_WAIT_GET(x)           (((x) & BANK0_WRITE_ENABLE_WAIT_MASK) >> BANK0_WRITE_ENABLE_WAIT_LSB)
#define BANK0_WRITE_ENABLE_WAIT_SET(x)           (((x) << BANK0_WRITE_ENABLE_WAIT_LSB) & BANK0_WRITE_ENABLE_WAIT_MASK)
#define BANK0_WRITE_WAIT_EVENT_MSB               30
#define BANK0_WRITE_WAIT_EVENT_LSB               28
#define BANK0_WRITE_WAIT_EVENT_MASK              0x70000000
#define BANK0_WRITE_WAIT_EVENT_GET(x)            (((x) & BANK0_WRITE_WAIT_EVENT_MASK) >> BANK0_WRITE_WAIT_EVENT_LSB)
#define BANK0_WRITE_WAIT_EVENT_SET(x)            (((x) << BANK0_WRITE_WAIT_EVENT_LSB) & BANK0_WRITE_WAIT_EVENT_MASK)
#define BANK0_WRITE_END_EVENT_MSB                26
#define BANK0_WRITE_END_EVENT_LSB                24
#define BANK0_WRITE_END_EVENT_MASK               0x07000000
#define BANK0_WRITE_END_EVENT_GET(x)             (((x) & BANK0_WRITE_END_EVENT_MASK) >> BANK0_WRITE_END_EVENT_LSB)
#define BANK0_WRITE_END_EVENT_SET(x)             (((x) << BANK0_WRITE_END_EVENT_LSB) & BANK0_WRITE_END_EVENT_MASK)
#define BANK0_WRITE_BURST_END_EVENT_MSB          22
#define BANK0_WRITE_BURST_END_EVENT_LSB          20
#define BANK0_WRITE_BURST_END_EVENT_MASK         0x00700000
#define BANK0_WRITE_BURST_END_EVENT_GET(x)       (((x) & BANK0_WRITE_BURST_END_EVENT_MASK) >> BANK0_WRITE_BURST_END_EVENT_LSB)
#define BANK0_WRITE_BURST_END_EVENT_SET(x)       (((x) << BANK0_WRITE_BURST_END_EVENT_LSB) & BANK0_WRITE_BURST_END_EVENT_MASK)
#define BANK0_WRITE_BURST_START_EVENT_MSB        18
#define BANK0_WRITE_BURST_START_EVENT_LSB        16
#define BANK0_WRITE_BURST_START_EVENT_MASK       0x00070000
#define BANK0_WRITE_BURST_START_EVENT_GET(x)     (((x) & BANK0_WRITE_BURST_START_EVENT_MASK) >> BANK0_WRITE_BURST_START_EVENT_LSB)
#define BANK0_WRITE_BURST_START_EVENT_SET(x)     (((x) << BANK0_WRITE_BURST_START_EVENT_LSB) & BANK0_WRITE_BURST_START_EVENT_MASK)
#define BANK0_WRITE_EVENT3_BE_MSB                14
#define BANK0_WRITE_EVENT3_BE_LSB                14
#define BANK0_WRITE_EVENT3_BE_MASK               0x00004000
#define BANK0_WRITE_EVENT3_BE_GET(x)             (((x) & BANK0_WRITE_EVENT3_BE_MASK) >> BANK0_WRITE_EVENT3_BE_LSB)
#define BANK0_WRITE_EVENT3_BE_SET(x)             (((x) << BANK0_WRITE_EVENT3_BE_LSB) & BANK0_WRITE_EVENT3_BE_MASK)
#define BANK0_WRITE_EVENT3_WE_MSB                13
#define BANK0_WRITE_EVENT3_WE_LSB                13
#define BANK0_WRITE_EVENT3_WE_MASK               0x00002000
#define BANK0_WRITE_EVENT3_WE_GET(x)             (((x) & BANK0_WRITE_EVENT3_WE_MASK) >> BANK0_WRITE_EVENT3_WE_LSB)
#define BANK0_WRITE_EVENT3_WE_SET(x)             (((x) << BANK0_WRITE_EVENT3_WE_LSB) & BANK0_WRITE_EVENT3_WE_MASK)
#define BANK0_WRITE_EVENT3_CS_MSB                12
#define BANK0_WRITE_EVENT3_CS_LSB                12
#define BANK0_WRITE_EVENT3_CS_MASK               0x00001000
#define BANK0_WRITE_EVENT3_CS_GET(x)             (((x) & BANK0_WRITE_EVENT3_CS_MASK) >> BANK0_WRITE_EVENT3_CS_LSB)
#define BANK0_WRITE_EVENT3_CS_SET(x)             (((x) << BANK0_WRITE_EVENT3_CS_LSB) & BANK0_WRITE_EVENT3_CS_MASK)
#define BANK0_WRITE_EVENT2_BE_MSB                10
#define BANK0_WRITE_EVENT2_BE_LSB                10
#define BANK0_WRITE_EVENT2_BE_MASK               0x00000400
#define BANK0_WRITE_EVENT2_BE_GET(x)             (((x) & BANK0_WRITE_EVENT2_BE_MASK) >> BANK0_WRITE_EVENT2_BE_LSB)
#define BANK0_WRITE_EVENT2_BE_SET(x)             (((x) << BANK0_WRITE_EVENT2_BE_LSB) & BANK0_WRITE_EVENT2_BE_MASK)
#define BANK0_WRITE_EVENT2_WE_MSB                9
#define BANK0_WRITE_EVENT2_WE_LSB                9
#define BANK0_WRITE_EVENT2_WE_MASK               0x00000200
#define BANK0_WRITE_EVENT2_WE_GET(x)             (((x) & BANK0_WRITE_EVENT2_WE_MASK) >> BANK0_WRITE_EVENT2_WE_LSB)
#define BANK0_WRITE_EVENT2_WE_SET(x)             (((x) << BANK0_WRITE_EVENT2_WE_LSB) & BANK0_WRITE_EVENT2_WE_MASK)
#define BANK0_WRITE_EVENT2_CS_MSB                8
#define BANK0_WRITE_EVENT2_CS_LSB                8
#define BANK0_WRITE_EVENT2_CS_MASK               0x00000100
#define BANK0_WRITE_EVENT2_CS_GET(x)             (((x) & BANK0_WRITE_EVENT2_CS_MASK) >> BANK0_WRITE_EVENT2_CS_LSB)
#define BANK0_WRITE_EVENT2_CS_SET(x)             (((x) << BANK0_WRITE_EVENT2_CS_LSB) & BANK0_WRITE_EVENT2_CS_MASK)
#define BANK0_WRITE_EVENT1_BE_MSB                6
#define BANK0_WRITE_EVENT1_BE_LSB                6
#define BANK0_WRITE_EVENT1_BE_MASK               0x00000040
#define BANK0_WRITE_EVENT1_BE_GET(x)             (((x) & BANK0_WRITE_EVENT1_BE_MASK) >> BANK0_WRITE_EVENT1_BE_LSB)
#define BANK0_WRITE_EVENT1_BE_SET(x)             (((x) << BANK0_WRITE_EVENT1_BE_LSB) & BANK0_WRITE_EVENT1_BE_MASK)
#define BANK0_WRITE_EVENT1_WE_MSB                5
#define BANK0_WRITE_EVENT1_WE_LSB                5
#define BANK0_WRITE_EVENT1_WE_MASK               0x00000020
#define BANK0_WRITE_EVENT1_WE_GET(x)             (((x) & BANK0_WRITE_EVENT1_WE_MASK) >> BANK0_WRITE_EVENT1_WE_LSB)
#define BANK0_WRITE_EVENT1_WE_SET(x)             (((x) << BANK0_WRITE_EVENT1_WE_LSB) & BANK0_WRITE_EVENT1_WE_MASK)
#define BANK0_WRITE_EVENT1_CS_MSB                4
#define BANK0_WRITE_EVENT1_CS_LSB                4
#define BANK0_WRITE_EVENT1_CS_MASK               0x00000010
#define BANK0_WRITE_EVENT1_CS_GET(x)             (((x) & BANK0_WRITE_EVENT1_CS_MASK) >> BANK0_WRITE_EVENT1_CS_LSB)
#define BANK0_WRITE_EVENT1_CS_SET(x)             (((x) << BANK0_WRITE_EVENT1_CS_LSB) & BANK0_WRITE_EVENT1_CS_MASK)
#define BANK0_WRITE_EVENT0_BE_MSB                2
#define BANK0_WRITE_EVENT0_BE_LSB                2
#define BANK0_WRITE_EVENT0_BE_MASK               0x00000004
#define BANK0_WRITE_EVENT0_BE_GET(x)             (((x) & BANK0_WRITE_EVENT0_BE_MASK) >> BANK0_WRITE_EVENT0_BE_LSB)
#define BANK0_WRITE_EVENT0_BE_SET(x)             (((x) << BANK0_WRITE_EVENT0_BE_LSB) & BANK0_WRITE_EVENT0_BE_MASK)
#define BANK0_WRITE_EVENT0_WE_MSB                1
#define BANK0_WRITE_EVENT0_WE_LSB                1
#define BANK0_WRITE_EVENT0_WE_MASK               0x00000002
#define BANK0_WRITE_EVENT0_WE_GET(x)             (((x) & BANK0_WRITE_EVENT0_WE_MASK) >> BANK0_WRITE_EVENT0_WE_LSB)
#define BANK0_WRITE_EVENT0_WE_SET(x)             (((x) << BANK0_WRITE_EVENT0_WE_LSB) & BANK0_WRITE_EVENT0_WE_MASK)
#define BANK0_WRITE_EVENT0_CS_MSB                0
#define BANK0_WRITE_EVENT0_CS_LSB                0
#define BANK0_WRITE_EVENT0_CS_MASK               0x00000001
#define BANK0_WRITE_EVENT0_CS_GET(x)             (((x) & BANK0_WRITE_EVENT0_CS_MASK) >> BANK0_WRITE_EVENT0_CS_LSB)
#define BANK0_WRITE_EVENT0_CS_SET(x)             (((x) << BANK0_WRITE_EVENT0_CS_LSB) & BANK0_WRITE_EVENT0_CS_MASK)

#define BANK1_ADDR_ADDRESS                       0x0c004010
#define BANK1_ADDR_OFFSET                        0x00000010
#define BANK1_ADDR_SIZE_MSB                      31
#define BANK1_ADDR_SIZE_LSB                      28
#define BANK1_ADDR_SIZE_MASK                     0xf0000000
#define BANK1_ADDR_SIZE_GET(x)                   (((x) & BANK1_ADDR_SIZE_MASK) >> BANK1_ADDR_SIZE_LSB)
#define BANK1_ADDR_SIZE_SET(x)                   (((x) << BANK1_ADDR_SIZE_LSB) & BANK1_ADDR_SIZE_MASK)
#define BANK1_ADDR_BASE_MSB                      27
#define BANK1_ADDR_BASE_LSB                      10
#define BANK1_ADDR_BASE_MASK                     0x0ffffc00
#define BANK1_ADDR_BASE_GET(x)                   (((x) & BANK1_ADDR_BASE_MASK) >> BANK1_ADDR_BASE_LSB)
#define BANK1_ADDR_BASE_SET(x)                   (((x) << BANK1_ADDR_BASE_LSB) & BANK1_ADDR_BASE_MASK)

#define BANK1_CONFIG_ADDRESS                     0x0c004014
#define BANK1_CONFIG_OFFSET                      0x00000014
#define BANK1_CONFIG_ENABLE_MSB                  31
#define BANK1_CONFIG_ENABLE_LSB                  31
#define BANK1_CONFIG_ENABLE_MASK                 0x80000000
#define BANK1_CONFIG_ENABLE_GET(x)               (((x) & BANK1_CONFIG_ENABLE_MASK) >> BANK1_CONFIG_ENABLE_LSB)
#define BANK1_CONFIG_ENABLE_SET(x)               (((x) << BANK1_CONFIG_ENABLE_LSB) & BANK1_CONFIG_ENABLE_MASK)
#define BANK1_CONFIG_WIDTH_MSB                   28
#define BANK1_CONFIG_WIDTH_LSB                   28
#define BANK1_CONFIG_WIDTH_MASK                  0x10000000
#define BANK1_CONFIG_WIDTH_GET(x)                (((x) & BANK1_CONFIG_WIDTH_MASK) >> BANK1_CONFIG_WIDTH_LSB)
#define BANK1_CONFIG_WIDTH_SET(x)                (((x) << BANK1_CONFIG_WIDTH_LSB) & BANK1_CONFIG_WIDTH_MASK)
#define BANK1_CONFIG_PROTECT_MSB                 26
#define BANK1_CONFIG_PROTECT_LSB                 26
#define BANK1_CONFIG_PROTECT_MASK                0x04000000
#define BANK1_CONFIG_PROTECT_GET(x)              (((x) & BANK1_CONFIG_PROTECT_MASK) >> BANK1_CONFIG_PROTECT_LSB)
#define BANK1_CONFIG_PROTECT_SET(x)              (((x) << BANK1_CONFIG_PROTECT_LSB) & BANK1_CONFIG_PROTECT_MASK)
#define BANK1_CONFIG_WB_ENABLE_MSB               25
#define BANK1_CONFIG_WB_ENABLE_LSB               25
#define BANK1_CONFIG_WB_ENABLE_MASK              0x02000000
#define BANK1_CONFIG_WB_ENABLE_GET(x)            (((x) & BANK1_CONFIG_WB_ENABLE_MASK) >> BANK1_CONFIG_WB_ENABLE_LSB)
#define BANK1_CONFIG_WB_ENABLE_SET(x)            (((x) << BANK1_CONFIG_WB_ENABLE_LSB) & BANK1_CONFIG_WB_ENABLE_MASK)
#define BANK1_CONFIG_WB_FLUSH_MSB                24
#define BANK1_CONFIG_WB_FLUSH_LSB                24
#define BANK1_CONFIG_WB_FLUSH_MASK               0x01000000
#define BANK1_CONFIG_WB_FLUSH_GET(x)             (((x) & BANK1_CONFIG_WB_FLUSH_MASK) >> BANK1_CONFIG_WB_FLUSH_LSB)
#define BANK1_CONFIG_WB_FLUSH_SET(x)             (((x) << BANK1_CONFIG_WB_FLUSH_LSB) & BANK1_CONFIG_WB_FLUSH_MASK)
#define BANK1_CONFIG_SCALE_MSB                   21
#define BANK1_CONFIG_SCALE_LSB                   20
#define BANK1_CONFIG_SCALE_MASK                  0x00300000
#define BANK1_CONFIG_SCALE_GET(x)                (((x) & BANK1_CONFIG_SCALE_MASK) >> BANK1_CONFIG_SCALE_LSB)
#define BANK1_CONFIG_SCALE_SET(x)                (((x) << BANK1_CONFIG_SCALE_LSB) & BANK1_CONFIG_SCALE_MASK)
#define BANK1_CONFIG_HOLDOFF_MSB                 19
#define BANK1_CONFIG_HOLDOFF_LSB                 16
#define BANK1_CONFIG_HOLDOFF_MASK                0x000f0000
#define BANK1_CONFIG_HOLDOFF_GET(x)              (((x) & BANK1_CONFIG_HOLDOFF_MASK) >> BANK1_CONFIG_HOLDOFF_LSB)
#define BANK1_CONFIG_HOLDOFF_SET(x)              (((x) << BANK1_CONFIG_HOLDOFF_LSB) & BANK1_CONFIG_HOLDOFF_MASK)
#define BANK1_CONFIG_TIMER3_MSB                  15
#define BANK1_CONFIG_TIMER3_LSB                  12
#define BANK1_CONFIG_TIMER3_MASK                 0x0000f000
#define BANK1_CONFIG_TIMER3_GET(x)               (((x) & BANK1_CONFIG_TIMER3_MASK) >> BANK1_CONFIG_TIMER3_LSB)
#define BANK1_CONFIG_TIMER3_SET(x)               (((x) << BANK1_CONFIG_TIMER3_LSB) & BANK1_CONFIG_TIMER3_MASK)
#define BANK1_CONFIG_TIMER2_MSB                  11
#define BANK1_CONFIG_TIMER2_LSB                  8
#define BANK1_CONFIG_TIMER2_MASK                 0x00000f00
#define BANK1_CONFIG_TIMER2_GET(x)               (((x) & BANK1_CONFIG_TIMER2_MASK) >> BANK1_CONFIG_TIMER2_LSB)
#define BANK1_CONFIG_TIMER2_SET(x)               (((x) << BANK1_CONFIG_TIMER2_LSB) & BANK1_CONFIG_TIMER2_MASK)
#define BANK1_CONFIG_TIMER1_MSB                  7
#define BANK1_CONFIG_TIMER1_LSB                  4
#define BANK1_CONFIG_TIMER1_MASK                 0x000000f0
#define BANK1_CONFIG_TIMER1_GET(x)               (((x) & BANK1_CONFIG_TIMER1_MASK) >> BANK1_CONFIG_TIMER1_LSB)
#define BANK1_CONFIG_TIMER1_SET(x)               (((x) << BANK1_CONFIG_TIMER1_LSB) & BANK1_CONFIG_TIMER1_MASK)
#define BANK1_CONFIG_TIMER0_MSB                  3
#define BANK1_CONFIG_TIMER0_LSB                  0
#define BANK1_CONFIG_TIMER0_MASK                 0x0000000f
#define BANK1_CONFIG_TIMER0_GET(x)               (((x) & BANK1_CONFIG_TIMER0_MASK) >> BANK1_CONFIG_TIMER0_LSB)
#define BANK1_CONFIG_TIMER0_SET(x)               (((x) << BANK1_CONFIG_TIMER0_LSB) & BANK1_CONFIG_TIMER0_MASK)

#define BANK1_READ_ADDRESS                       0x0c004018
#define BANK1_READ_OFFSET                        0x00000018
#define BANK1_READ_ENABLE_WAIT_MSB               31
#define BANK1_READ_ENABLE_WAIT_LSB               31
#define BANK1_READ_ENABLE_WAIT_MASK              0x80000000
#define BANK1_READ_ENABLE_WAIT_GET(x)            (((x) & BANK1_READ_ENABLE_WAIT_MASK) >> BANK1_READ_ENABLE_WAIT_LSB)
#define BANK1_READ_ENABLE_WAIT_SET(x)            (((x) << BANK1_READ_ENABLE_WAIT_LSB) & BANK1_READ_ENABLE_WAIT_MASK)
#define BANK1_READ_WAIT_EVENT_MSB                30
#define BANK1_READ_WAIT_EVENT_LSB                28
#define BANK1_READ_WAIT_EVENT_MASK               0x70000000
#define BANK1_READ_WAIT_EVENT_GET(x)             (((x) & BANK1_READ_WAIT_EVENT_MASK) >> BANK1_READ_WAIT_EVENT_LSB)
#define BANK1_READ_WAIT_EVENT_SET(x)             (((x) << BANK1_READ_WAIT_EVENT_LSB) & BANK1_READ_WAIT_EVENT_MASK)
#define BANK1_READ_END_EVENT_MSB                 26
#define BANK1_READ_END_EVENT_LSB                 24
#define BANK1_READ_END_EVENT_MASK                0x07000000
#define BANK1_READ_END_EVENT_GET(x)              (((x) & BANK1_READ_END_EVENT_MASK) >> BANK1_READ_END_EVENT_LSB)
#define BANK1_READ_END_EVENT_SET(x)              (((x) << BANK1_READ_END_EVENT_LSB) & BANK1_READ_END_EVENT_MASK)
#define BANK1_READ_BURST_END_EVENT_MSB           22
#define BANK1_READ_BURST_END_EVENT_LSB           20
#define BANK1_READ_BURST_END_EVENT_MASK          0x00700000
#define BANK1_READ_BURST_END_EVENT_GET(x)        (((x) & BANK1_READ_BURST_END_EVENT_MASK) >> BANK1_READ_BURST_END_EVENT_LSB)
#define BANK1_READ_BURST_END_EVENT_SET(x)        (((x) << BANK1_READ_BURST_END_EVENT_LSB) & BANK1_READ_BURST_END_EVENT_MASK)
#define BANK1_READ_BURST_START_EVENT_MSB         18
#define BANK1_READ_BURST_START_EVENT_LSB         16
#define BANK1_READ_BURST_START_EVENT_MASK        0x00070000
#define BANK1_READ_BURST_START_EVENT_GET(x)      (((x) & BANK1_READ_BURST_START_EVENT_MASK) >> BANK1_READ_BURST_START_EVENT_LSB)
#define BANK1_READ_BURST_START_EVENT_SET(x)      (((x) << BANK1_READ_BURST_START_EVENT_LSB) & BANK1_READ_BURST_START_EVENT_MASK)
#define BANK1_READ_EVENT3_DC_MSB                 15
#define BANK1_READ_EVENT3_DC_LSB                 15
#define BANK1_READ_EVENT3_DC_MASK                0x00008000
#define BANK1_READ_EVENT3_DC_GET(x)              (((x) & BANK1_READ_EVENT3_DC_MASK) >> BANK1_READ_EVENT3_DC_LSB)
#define BANK1_READ_EVENT3_DC_SET(x)              (((x) << BANK1_READ_EVENT3_DC_LSB) & BANK1_READ_EVENT3_DC_MASK)
#define BANK1_READ_EVENT3_BE_MSB                 14
#define BANK1_READ_EVENT3_BE_LSB                 14
#define BANK1_READ_EVENT3_BE_MASK                0x00004000
#define BANK1_READ_EVENT3_BE_GET(x)              (((x) & BANK1_READ_EVENT3_BE_MASK) >> BANK1_READ_EVENT3_BE_LSB)
#define BANK1_READ_EVENT3_BE_SET(x)              (((x) << BANK1_READ_EVENT3_BE_LSB) & BANK1_READ_EVENT3_BE_MASK)
#define BANK1_READ_EVENT3_OE_MSB                 13
#define BANK1_READ_EVENT3_OE_LSB                 13
#define BANK1_READ_EVENT3_OE_MASK                0x00002000
#define BANK1_READ_EVENT3_OE_GET(x)              (((x) & BANK1_READ_EVENT3_OE_MASK) >> BANK1_READ_EVENT3_OE_LSB)
#define BANK1_READ_EVENT3_OE_SET(x)              (((x) << BANK1_READ_EVENT3_OE_LSB) & BANK1_READ_EVENT3_OE_MASK)
#define BANK1_READ_EVENT3_CS_MSB                 12
#define BANK1_READ_EVENT3_CS_LSB                 12
#define BANK1_READ_EVENT3_CS_MASK                0x00001000
#define BANK1_READ_EVENT3_CS_GET(x)              (((x) & BANK1_READ_EVENT3_CS_MASK) >> BANK1_READ_EVENT3_CS_LSB)
#define BANK1_READ_EVENT3_CS_SET(x)              (((x) << BANK1_READ_EVENT3_CS_LSB) & BANK1_READ_EVENT3_CS_MASK)
#define BANK1_READ_EVENT2_DC_MSB                 11
#define BANK1_READ_EVENT2_DC_LSB                 11
#define BANK1_READ_EVENT2_DC_MASK                0x00000800
#define BANK1_READ_EVENT2_DC_GET(x)              (((x) & BANK1_READ_EVENT2_DC_MASK) >> BANK1_READ_EVENT2_DC_LSB)
#define BANK1_READ_EVENT2_DC_SET(x)              (((x) << BANK1_READ_EVENT2_DC_LSB) & BANK1_READ_EVENT2_DC_MASK)
#define BANK1_READ_EVENT2_BE_MSB                 10
#define BANK1_READ_EVENT2_BE_LSB                 10
#define BANK1_READ_EVENT2_BE_MASK                0x00000400
#define BANK1_READ_EVENT2_BE_GET(x)              (((x) & BANK1_READ_EVENT2_BE_MASK) >> BANK1_READ_EVENT2_BE_LSB)
#define BANK1_READ_EVENT2_BE_SET(x)              (((x) << BANK1_READ_EVENT2_BE_LSB) & BANK1_READ_EVENT2_BE_MASK)
#define BANK1_READ_EVENT2_OE_MSB                 9
#define BANK1_READ_EVENT2_OE_LSB                 9
#define BANK1_READ_EVENT2_OE_MASK                0x00000200
#define BANK1_READ_EVENT2_OE_GET(x)              (((x) & BANK1_READ_EVENT2_OE_MASK) >> BANK1_READ_EVENT2_OE_LSB)
#define BANK1_READ_EVENT2_OE_SET(x)              (((x) << BANK1_READ_EVENT2_OE_LSB) & BANK1_READ_EVENT2_OE_MASK)
#define BANK1_READ_EVENT2_CS_MSB                 8
#define BANK1_READ_EVENT2_CS_LSB                 8
#define BANK1_READ_EVENT2_CS_MASK                0x00000100
#define BANK1_READ_EVENT2_CS_GET(x)              (((x) & BANK1_READ_EVENT2_CS_MASK) >> BANK1_READ_EVENT2_CS_LSB)
#define BANK1_READ_EVENT2_CS_SET(x)              (((x) << BANK1_READ_EVENT2_CS_LSB) & BANK1_READ_EVENT2_CS_MASK)
#define BANK1_READ_EVENT1_DC_MSB                 7
#define BANK1_READ_EVENT1_DC_LSB                 7
#define BANK1_READ_EVENT1_DC_MASK                0x00000080
#define BANK1_READ_EVENT1_DC_GET(x)              (((x) & BANK1_READ_EVENT1_DC_MASK) >> BANK1_READ_EVENT1_DC_LSB)
#define BANK1_READ_EVENT1_DC_SET(x)              (((x) << BANK1_READ_EVENT1_DC_LSB) & BANK1_READ_EVENT1_DC_MASK)
#define BANK1_READ_EVENT1_BE_MSB                 6
#define BANK1_READ_EVENT1_BE_LSB                 6
#define BANK1_READ_EVENT1_BE_MASK                0x00000040
#define BANK1_READ_EVENT1_BE_GET(x)              (((x) & BANK1_READ_EVENT1_BE_MASK) >> BANK1_READ_EVENT1_BE_LSB)
#define BANK1_READ_EVENT1_BE_SET(x)              (((x) << BANK1_READ_EVENT1_BE_LSB) & BANK1_READ_EVENT1_BE_MASK)
#define BANK1_READ_EVENT1_OE_MSB                 5
#define BANK1_READ_EVENT1_OE_LSB                 5
#define BANK1_READ_EVENT1_OE_MASK                0x00000020
#define BANK1_READ_EVENT1_OE_GET(x)              (((x) & BANK1_READ_EVENT1_OE_MASK) >> BANK1_READ_EVENT1_OE_LSB)
#define BANK1_READ_EVENT1_OE_SET(x)              (((x) << BANK1_READ_EVENT1_OE_LSB) & BANK1_READ_EVENT1_OE_MASK)
#define BANK1_READ_EVENT1_CS_MSB                 4
#define BANK1_READ_EVENT1_CS_LSB                 4
#define BANK1_READ_EVENT1_CS_MASK                0x00000010
#define BANK1_READ_EVENT1_CS_GET(x)              (((x) & BANK1_READ_EVENT1_CS_MASK) >> BANK1_READ_EVENT1_CS_LSB)
#define BANK1_READ_EVENT1_CS_SET(x)              (((x) << BANK1_READ_EVENT1_CS_LSB) & BANK1_READ_EVENT1_CS_MASK)
#define BANK1_READ_EVENT0_DC_MSB                 3
#define BANK1_READ_EVENT0_DC_LSB                 3
#define BANK1_READ_EVENT0_DC_MASK                0x00000008
#define BANK1_READ_EVENT0_DC_GET(x)              (((x) & BANK1_READ_EVENT0_DC_MASK) >> BANK1_READ_EVENT0_DC_LSB)
#define BANK1_READ_EVENT0_DC_SET(x)              (((x) << BANK1_READ_EVENT0_DC_LSB) & BANK1_READ_EVENT0_DC_MASK)
#define BANK1_READ_EVENT0_BE_MSB                 2
#define BANK1_READ_EVENT0_BE_LSB                 2
#define BANK1_READ_EVENT0_BE_MASK                0x00000004
#define BANK1_READ_EVENT0_BE_GET(x)              (((x) & BANK1_READ_EVENT0_BE_MASK) >> BANK1_READ_EVENT0_BE_LSB)
#define BANK1_READ_EVENT0_BE_SET(x)              (((x) << BANK1_READ_EVENT0_BE_LSB) & BANK1_READ_EVENT0_BE_MASK)
#define BANK1_READ_EVENT0_OE_MSB                 1
#define BANK1_READ_EVENT0_OE_LSB                 1
#define BANK1_READ_EVENT0_OE_MASK                0x00000002
#define BANK1_READ_EVENT0_OE_GET(x)              (((x) & BANK1_READ_EVENT0_OE_MASK) >> BANK1_READ_EVENT0_OE_LSB)
#define BANK1_READ_EVENT0_OE_SET(x)              (((x) << BANK1_READ_EVENT0_OE_LSB) & BANK1_READ_EVENT0_OE_MASK)
#define BANK1_READ_EVENT0_CS_MSB                 0
#define BANK1_READ_EVENT0_CS_LSB                 0
#define BANK1_READ_EVENT0_CS_MASK                0x00000001
#define BANK1_READ_EVENT0_CS_GET(x)              (((x) & BANK1_READ_EVENT0_CS_MASK) >> BANK1_READ_EVENT0_CS_LSB)
#define BANK1_READ_EVENT0_CS_SET(x)              (((x) << BANK1_READ_EVENT0_CS_LSB) & BANK1_READ_EVENT0_CS_MASK)

#define BANK1_WRITE_ADDRESS                      0x0c00401c
#define BANK1_WRITE_OFFSET                       0x0000001c
#define BANK1_WRITE_ENABLE_WAIT_MSB              31
#define BANK1_WRITE_ENABLE_WAIT_LSB              31
#define BANK1_WRITE_ENABLE_WAIT_MASK             0x80000000
#define BANK1_WRITE_ENABLE_WAIT_GET(x)           (((x) & BANK1_WRITE_ENABLE_WAIT_MASK) >> BANK1_WRITE_ENABLE_WAIT_LSB)
#define BANK1_WRITE_ENABLE_WAIT_SET(x)           (((x) << BANK1_WRITE_ENABLE_WAIT_LSB) & BANK1_WRITE_ENABLE_WAIT_MASK)
#define BANK1_WRITE_WAIT_EVENT_MSB               30
#define BANK1_WRITE_WAIT_EVENT_LSB               28
#define BANK1_WRITE_WAIT_EVENT_MASK              0x70000000
#define BANK1_WRITE_WAIT_EVENT_GET(x)            (((x) & BANK1_WRITE_WAIT_EVENT_MASK) >> BANK1_WRITE_WAIT_EVENT_LSB)
#define BANK1_WRITE_WAIT_EVENT_SET(x)            (((x) << BANK1_WRITE_WAIT_EVENT_LSB) & BANK1_WRITE_WAIT_EVENT_MASK)
#define BANK1_WRITE_END_EVENT_MSB                26
#define BANK1_WRITE_END_EVENT_LSB                24
#define BANK1_WRITE_END_EVENT_MASK               0x07000000
#define BANK1_WRITE_END_EVENT_GET(x)             (((x) & BANK1_WRITE_END_EVENT_MASK) >> BANK1_WRITE_END_EVENT_LSB)
#define BANK1_WRITE_END_EVENT_SET(x)             (((x) << BANK1_WRITE_END_EVENT_LSB) & BANK1_WRITE_END_EVENT_MASK)
#define BANK1_WRITE_BURST_END_EVENT_MSB          22
#define BANK1_WRITE_BURST_END_EVENT_LSB          20
#define BANK1_WRITE_BURST_END_EVENT_MASK         0x00700000
#define BANK1_WRITE_BURST_END_EVENT_GET(x)       (((x) & BANK1_WRITE_BURST_END_EVENT_MASK) >> BANK1_WRITE_BURST_END_EVENT_LSB)
#define BANK1_WRITE_BURST_END_EVENT_SET(x)       (((x) << BANK1_WRITE_BURST_END_EVENT_LSB) & BANK1_WRITE_BURST_END_EVENT_MASK)
#define BANK1_WRITE_BURST_START_EVENT_MSB        18
#define BANK1_WRITE_BURST_START_EVENT_LSB        16
#define BANK1_WRITE_BURST_START_EVENT_MASK       0x00070000
#define BANK1_WRITE_BURST_START_EVENT_GET(x)     (((x) & BANK1_WRITE_BURST_START_EVENT_MASK) >> BANK1_WRITE_BURST_START_EVENT_LSB)
#define BANK1_WRITE_BURST_START_EVENT_SET(x)     (((x) << BANK1_WRITE_BURST_START_EVENT_LSB) & BANK1_WRITE_BURST_START_EVENT_MASK)
#define BANK1_WRITE_EVENT3_BE_MSB                14
#define BANK1_WRITE_EVENT3_BE_LSB                14
#define BANK1_WRITE_EVENT3_BE_MASK               0x00004000
#define BANK1_WRITE_EVENT3_BE_GET(x)             (((x) & BANK1_WRITE_EVENT3_BE_MASK) >> BANK1_WRITE_EVENT3_BE_LSB)
#define BANK1_WRITE_EVENT3_BE_SET(x)             (((x) << BANK1_WRITE_EVENT3_BE_LSB) & BANK1_WRITE_EVENT3_BE_MASK)
#define BANK1_WRITE_EVENT3_WE_MSB                13
#define BANK1_WRITE_EVENT3_WE_LSB                13
#define BANK1_WRITE_EVENT3_WE_MASK               0x00002000
#define BANK1_WRITE_EVENT3_WE_GET(x)             (((x) & BANK1_WRITE_EVENT3_WE_MASK) >> BANK1_WRITE_EVENT3_WE_LSB)
#define BANK1_WRITE_EVENT3_WE_SET(x)             (((x) << BANK1_WRITE_EVENT3_WE_LSB) & BANK1_WRITE_EVENT3_WE_MASK)
#define BANK1_WRITE_EVENT3_CS_MSB                12
#define BANK1_WRITE_EVENT3_CS_LSB                12
#define BANK1_WRITE_EVENT3_CS_MASK               0x00001000
#define BANK1_WRITE_EVENT3_CS_GET(x)             (((x) & BANK1_WRITE_EVENT3_CS_MASK) >> BANK1_WRITE_EVENT3_CS_LSB)
#define BANK1_WRITE_EVENT3_CS_SET(x)             (((x) << BANK1_WRITE_EVENT3_CS_LSB) & BANK1_WRITE_EVENT3_CS_MASK)
#define BANK1_WRITE_EVENT2_BE_MSB                10
#define BANK1_WRITE_EVENT2_BE_LSB                10
#define BANK1_WRITE_EVENT2_BE_MASK               0x00000400
#define BANK1_WRITE_EVENT2_BE_GET(x)             (((x) & BANK1_WRITE_EVENT2_BE_MASK) >> BANK1_WRITE_EVENT2_BE_LSB)
#define BANK1_WRITE_EVENT2_BE_SET(x)             (((x) << BANK1_WRITE_EVENT2_BE_LSB) & BANK1_WRITE_EVENT2_BE_MASK)
#define BANK1_WRITE_EVENT2_WE_MSB                9
#define BANK1_WRITE_EVENT2_WE_LSB                9
#define BANK1_WRITE_EVENT2_WE_MASK               0x00000200
#define BANK1_WRITE_EVENT2_WE_GET(x)             (((x) & BANK1_WRITE_EVENT2_WE_MASK) >> BANK1_WRITE_EVENT2_WE_LSB)
#define BANK1_WRITE_EVENT2_WE_SET(x)             (((x) << BANK1_WRITE_EVENT2_WE_LSB) & BANK1_WRITE_EVENT2_WE_MASK)
#define BANK1_WRITE_EVENT2_CS_MSB                8
#define BANK1_WRITE_EVENT2_CS_LSB                8
#define BANK1_WRITE_EVENT2_CS_MASK               0x00000100
#define BANK1_WRITE_EVENT2_CS_GET(x)             (((x) & BANK1_WRITE_EVENT2_CS_MASK) >> BANK1_WRITE_EVENT2_CS_LSB)
#define BANK1_WRITE_EVENT2_CS_SET(x)             (((x) << BANK1_WRITE_EVENT2_CS_LSB) & BANK1_WRITE_EVENT2_CS_MASK)
#define BANK1_WRITE_EVENT1_BE_MSB                6
#define BANK1_WRITE_EVENT1_BE_LSB                6
#define BANK1_WRITE_EVENT1_BE_MASK               0x00000040
#define BANK1_WRITE_EVENT1_BE_GET(x)             (((x) & BANK1_WRITE_EVENT1_BE_MASK) >> BANK1_WRITE_EVENT1_BE_LSB)
#define BANK1_WRITE_EVENT1_BE_SET(x)             (((x) << BANK1_WRITE_EVENT1_BE_LSB) & BANK1_WRITE_EVENT1_BE_MASK)
#define BANK1_WRITE_EVENT1_WE_MSB                5
#define BANK1_WRITE_EVENT1_WE_LSB                5
#define BANK1_WRITE_EVENT1_WE_MASK               0x00000020
#define BANK1_WRITE_EVENT1_WE_GET(x)             (((x) & BANK1_WRITE_EVENT1_WE_MASK) >> BANK1_WRITE_EVENT1_WE_LSB)
#define BANK1_WRITE_EVENT1_WE_SET(x)             (((x) << BANK1_WRITE_EVENT1_WE_LSB) & BANK1_WRITE_EVENT1_WE_MASK)
#define BANK1_WRITE_EVENT1_CS_MSB                4
#define BANK1_WRITE_EVENT1_CS_LSB                4
#define BANK1_WRITE_EVENT1_CS_MASK               0x00000010
#define BANK1_WRITE_EVENT1_CS_GET(x)             (((x) & BANK1_WRITE_EVENT1_CS_MASK) >> BANK1_WRITE_EVENT1_CS_LSB)
#define BANK1_WRITE_EVENT1_CS_SET(x)             (((x) << BANK1_WRITE_EVENT1_CS_LSB) & BANK1_WRITE_EVENT1_CS_MASK)
#define BANK1_WRITE_EVENT0_BE_MSB                2
#define BANK1_WRITE_EVENT0_BE_LSB                2
#define BANK1_WRITE_EVENT0_BE_MASK               0x00000004
#define BANK1_WRITE_EVENT0_BE_GET(x)             (((x) & BANK1_WRITE_EVENT0_BE_MASK) >> BANK1_WRITE_EVENT0_BE_LSB)
#define BANK1_WRITE_EVENT0_BE_SET(x)             (((x) << BANK1_WRITE_EVENT0_BE_LSB) & BANK1_WRITE_EVENT0_BE_MASK)
#define BANK1_WRITE_EVENT0_WE_MSB                1
#define BANK1_WRITE_EVENT0_WE_LSB                1
#define BANK1_WRITE_EVENT0_WE_MASK               0x00000002
#define BANK1_WRITE_EVENT0_WE_GET(x)             (((x) & BANK1_WRITE_EVENT0_WE_MASK) >> BANK1_WRITE_EVENT0_WE_LSB)
#define BANK1_WRITE_EVENT0_WE_SET(x)             (((x) << BANK1_WRITE_EVENT0_WE_LSB) & BANK1_WRITE_EVENT0_WE_MASK)
#define BANK1_WRITE_EVENT0_CS_MSB                0
#define BANK1_WRITE_EVENT0_CS_LSB                0
#define BANK1_WRITE_EVENT0_CS_MASK               0x00000001
#define BANK1_WRITE_EVENT0_CS_GET(x)             (((x) & BANK1_WRITE_EVENT0_CS_MASK) >> BANK1_WRITE_EVENT0_CS_LSB)
#define BANK1_WRITE_EVENT0_CS_SET(x)             (((x) << BANK1_WRITE_EVENT0_CS_LSB) & BANK1_WRITE_EVENT0_CS_MASK)

#define BANK2_ADDR_ADDRESS                       0x0c004020
#define BANK2_ADDR_OFFSET                        0x00000020
#define BANK2_ADDR_SIZE_MSB                      31
#define BANK2_ADDR_SIZE_LSB                      28
#define BANK2_ADDR_SIZE_MASK                     0xf0000000
#define BANK2_ADDR_SIZE_GET(x)                   (((x) & BANK2_ADDR_SIZE_MASK) >> BANK2_ADDR_SIZE_LSB)
#define BANK2_ADDR_SIZE_SET(x)                   (((x) << BANK2_ADDR_SIZE_LSB) & BANK2_ADDR_SIZE_MASK)
#define BANK2_ADDR_BASE_MSB                      27
#define BANK2_ADDR_BASE_LSB                      10
#define BANK2_ADDR_BASE_MASK                     0x0ffffc00
#define BANK2_ADDR_BASE_GET(x)                   (((x) & BANK2_ADDR_BASE_MASK) >> BANK2_ADDR_BASE_LSB)
#define BANK2_ADDR_BASE_SET(x)                   (((x) << BANK2_ADDR_BASE_LSB) & BANK2_ADDR_BASE_MASK)

#define BANK2_CONFIG_ADDRESS                     0x0c004024
#define BANK2_CONFIG_OFFSET                      0x00000024
#define BANK2_CONFIG_ENABLE_MSB                  31
#define BANK2_CONFIG_ENABLE_LSB                  31
#define BANK2_CONFIG_ENABLE_MASK                 0x80000000
#define BANK2_CONFIG_ENABLE_GET(x)               (((x) & BANK2_CONFIG_ENABLE_MASK) >> BANK2_CONFIG_ENABLE_LSB)
#define BANK2_CONFIG_ENABLE_SET(x)               (((x) << BANK2_CONFIG_ENABLE_LSB) & BANK2_CONFIG_ENABLE_MASK)
#define BANK2_CONFIG_WIDTH_MSB                   28
#define BANK2_CONFIG_WIDTH_LSB                   28
#define BANK2_CONFIG_WIDTH_MASK                  0x10000000
#define BANK2_CONFIG_WIDTH_GET(x)                (((x) & BANK2_CONFIG_WIDTH_MASK) >> BANK2_CONFIG_WIDTH_LSB)
#define BANK2_CONFIG_WIDTH_SET(x)                (((x) << BANK2_CONFIG_WIDTH_LSB) & BANK2_CONFIG_WIDTH_MASK)
#define BANK2_CONFIG_PROTECT_MSB                 26
#define BANK2_CONFIG_PROTECT_LSB                 26
#define BANK2_CONFIG_PROTECT_MASK                0x04000000
#define BANK2_CONFIG_PROTECT_GET(x)              (((x) & BANK2_CONFIG_PROTECT_MASK) >> BANK2_CONFIG_PROTECT_LSB)
#define BANK2_CONFIG_PROTECT_SET(x)              (((x) << BANK2_CONFIG_PROTECT_LSB) & BANK2_CONFIG_PROTECT_MASK)
#define BANK2_CONFIG_WB_ENABLE_MSB               25
#define BANK2_CONFIG_WB_ENABLE_LSB               25
#define BANK2_CONFIG_WB_ENABLE_MASK              0x02000000
#define BANK2_CONFIG_WB_ENABLE_GET(x)            (((x) & BANK2_CONFIG_WB_ENABLE_MASK) >> BANK2_CONFIG_WB_ENABLE_LSB)
#define BANK2_CONFIG_WB_ENABLE_SET(x)            (((x) << BANK2_CONFIG_WB_ENABLE_LSB) & BANK2_CONFIG_WB_ENABLE_MASK)
#define BANK2_CONFIG_WB_FLUSH_MSB                24
#define BANK2_CONFIG_WB_FLUSH_LSB                24
#define BANK2_CONFIG_WB_FLUSH_MASK               0x01000000
#define BANK2_CONFIG_WB_FLUSH_GET(x)             (((x) & BANK2_CONFIG_WB_FLUSH_MASK) >> BANK2_CONFIG_WB_FLUSH_LSB)
#define BANK2_CONFIG_WB_FLUSH_SET(x)             (((x) << BANK2_CONFIG_WB_FLUSH_LSB) & BANK2_CONFIG_WB_FLUSH_MASK)
#define BANK2_CONFIG_SCALE_MSB                   21
#define BANK2_CONFIG_SCALE_LSB                   20
#define BANK2_CONFIG_SCALE_MASK                  0x00300000
#define BANK2_CONFIG_SCALE_GET(x)                (((x) & BANK2_CONFIG_SCALE_MASK) >> BANK2_CONFIG_SCALE_LSB)
#define BANK2_CONFIG_SCALE_SET(x)                (((x) << BANK2_CONFIG_SCALE_LSB) & BANK2_CONFIG_SCALE_MASK)
#define BANK2_CONFIG_HOLDOFF_MSB                 19
#define BANK2_CONFIG_HOLDOFF_LSB                 16
#define BANK2_CONFIG_HOLDOFF_MASK                0x000f0000
#define BANK2_CONFIG_HOLDOFF_GET(x)              (((x) & BANK2_CONFIG_HOLDOFF_MASK) >> BANK2_CONFIG_HOLDOFF_LSB)
#define BANK2_CONFIG_HOLDOFF_SET(x)              (((x) << BANK2_CONFIG_HOLDOFF_LSB) & BANK2_CONFIG_HOLDOFF_MASK)
#define BANK2_CONFIG_TIMER3_MSB                  15
#define BANK2_CONFIG_TIMER3_LSB                  12
#define BANK2_CONFIG_TIMER3_MASK                 0x0000f000
#define BANK2_CONFIG_TIMER3_GET(x)               (((x) & BANK2_CONFIG_TIMER3_MASK) >> BANK2_CONFIG_TIMER3_LSB)
#define BANK2_CONFIG_TIMER3_SET(x)               (((x) << BANK2_CONFIG_TIMER3_LSB) & BANK2_CONFIG_TIMER3_MASK)
#define BANK2_CONFIG_TIMER2_MSB                  11
#define BANK2_CONFIG_TIMER2_LSB                  8
#define BANK2_CONFIG_TIMER2_MASK                 0x00000f00
#define BANK2_CONFIG_TIMER2_GET(x)               (((x) & BANK2_CONFIG_TIMER2_MASK) >> BANK2_CONFIG_TIMER2_LSB)
#define BANK2_CONFIG_TIMER2_SET(x)               (((x) << BANK2_CONFIG_TIMER2_LSB) & BANK2_CONFIG_TIMER2_MASK)
#define BANK2_CONFIG_TIMER1_MSB                  7
#define BANK2_CONFIG_TIMER1_LSB                  4
#define BANK2_CONFIG_TIMER1_MASK                 0x000000f0
#define BANK2_CONFIG_TIMER1_GET(x)               (((x) & BANK2_CONFIG_TIMER1_MASK) >> BANK2_CONFIG_TIMER1_LSB)
#define BANK2_CONFIG_TIMER1_SET(x)               (((x) << BANK2_CONFIG_TIMER1_LSB) & BANK2_CONFIG_TIMER1_MASK)
#define BANK2_CONFIG_TIMER0_MSB                  3
#define BANK2_CONFIG_TIMER0_LSB                  0
#define BANK2_CONFIG_TIMER0_MASK                 0x0000000f
#define BANK2_CONFIG_TIMER0_GET(x)               (((x) & BANK2_CONFIG_TIMER0_MASK) >> BANK2_CONFIG_TIMER0_LSB)
#define BANK2_CONFIG_TIMER0_SET(x)               (((x) << BANK2_CONFIG_TIMER0_LSB) & BANK2_CONFIG_TIMER0_MASK)

#define BANK2_READ_ADDRESS                       0x0c004028
#define BANK2_READ_OFFSET                        0x00000028
#define BANK2_READ_ENABLE_WAIT_MSB               31
#define BANK2_READ_ENABLE_WAIT_LSB               31
#define BANK2_READ_ENABLE_WAIT_MASK              0x80000000
#define BANK2_READ_ENABLE_WAIT_GET(x)            (((x) & BANK2_READ_ENABLE_WAIT_MASK) >> BANK2_READ_ENABLE_WAIT_LSB)
#define BANK2_READ_ENABLE_WAIT_SET(x)            (((x) << BANK2_READ_ENABLE_WAIT_LSB) & BANK2_READ_ENABLE_WAIT_MASK)
#define BANK2_READ_WAIT_EVENT_MSB                30
#define BANK2_READ_WAIT_EVENT_LSB                28
#define BANK2_READ_WAIT_EVENT_MASK               0x70000000
#define BANK2_READ_WAIT_EVENT_GET(x)             (((x) & BANK2_READ_WAIT_EVENT_MASK) >> BANK2_READ_WAIT_EVENT_LSB)
#define BANK2_READ_WAIT_EVENT_SET(x)             (((x) << BANK2_READ_WAIT_EVENT_LSB) & BANK2_READ_WAIT_EVENT_MASK)
#define BANK2_READ_END_EVENT_MSB                 26
#define BANK2_READ_END_EVENT_LSB                 24
#define BANK2_READ_END_EVENT_MASK                0x07000000
#define BANK2_READ_END_EVENT_GET(x)              (((x) & BANK2_READ_END_EVENT_MASK) >> BANK2_READ_END_EVENT_LSB)
#define BANK2_READ_END_EVENT_SET(x)              (((x) << BANK2_READ_END_EVENT_LSB) & BANK2_READ_END_EVENT_MASK)
#define BANK2_READ_BURST_END_EVENT_MSB           22
#define BANK2_READ_BURST_END_EVENT_LSB           20
#define BANK2_READ_BURST_END_EVENT_MASK          0x00700000
#define BANK2_READ_BURST_END_EVENT_GET(x)        (((x) & BANK2_READ_BURST_END_EVENT_MASK) >> BANK2_READ_BURST_END_EVENT_LSB)
#define BANK2_READ_BURST_END_EVENT_SET(x)        (((x) << BANK2_READ_BURST_END_EVENT_LSB) & BANK2_READ_BURST_END_EVENT_MASK)
#define BANK2_READ_BURST_START_EVENT_MSB         18
#define BANK2_READ_BURST_START_EVENT_LSB         16
#define BANK2_READ_BURST_START_EVENT_MASK        0x00070000
#define BANK2_READ_BURST_START_EVENT_GET(x)      (((x) & BANK2_READ_BURST_START_EVENT_MASK) >> BANK2_READ_BURST_START_EVENT_LSB)
#define BANK2_READ_BURST_START_EVENT_SET(x)      (((x) << BANK2_READ_BURST_START_EVENT_LSB) & BANK2_READ_BURST_START_EVENT_MASK)
#define BANK2_READ_EVENT3_DC_MSB                 15
#define BANK2_READ_EVENT3_DC_LSB                 15
#define BANK2_READ_EVENT3_DC_MASK                0x00008000
#define BANK2_READ_EVENT3_DC_GET(x)              (((x) & BANK2_READ_EVENT3_DC_MASK) >> BANK2_READ_EVENT3_DC_LSB)
#define BANK2_READ_EVENT3_DC_SET(x)              (((x) << BANK2_READ_EVENT3_DC_LSB) & BANK2_READ_EVENT3_DC_MASK)
#define BANK2_READ_EVENT3_BE_MSB                 14
#define BANK2_READ_EVENT3_BE_LSB                 14
#define BANK2_READ_EVENT3_BE_MASK                0x00004000
#define BANK2_READ_EVENT3_BE_GET(x)              (((x) & BANK2_READ_EVENT3_BE_MASK) >> BANK2_READ_EVENT3_BE_LSB)
#define BANK2_READ_EVENT3_BE_SET(x)              (((x) << BANK2_READ_EVENT3_BE_LSB) & BANK2_READ_EVENT3_BE_MASK)
#define BANK2_READ_EVENT3_OE_MSB                 13
#define BANK2_READ_EVENT3_OE_LSB                 13
#define BANK2_READ_EVENT3_OE_MASK                0x00002000
#define BANK2_READ_EVENT3_OE_GET(x)              (((x) & BANK2_READ_EVENT3_OE_MASK) >> BANK2_READ_EVENT3_OE_LSB)
#define BANK2_READ_EVENT3_OE_SET(x)              (((x) << BANK2_READ_EVENT3_OE_LSB) & BANK2_READ_EVENT3_OE_MASK)
#define BANK2_READ_EVENT3_CS_MSB                 12
#define BANK2_READ_EVENT3_CS_LSB                 12
#define BANK2_READ_EVENT3_CS_MASK                0x00001000
#define BANK2_READ_EVENT3_CS_GET(x)              (((x) & BANK2_READ_EVENT3_CS_MASK) >> BANK2_READ_EVENT3_CS_LSB)
#define BANK2_READ_EVENT3_CS_SET(x)              (((x) << BANK2_READ_EVENT3_CS_LSB) & BANK2_READ_EVENT3_CS_MASK)
#define BANK2_READ_EVENT2_DC_MSB                 11
#define BANK2_READ_EVENT2_DC_LSB                 11
#define BANK2_READ_EVENT2_DC_MASK                0x00000800
#define BANK2_READ_EVENT2_DC_GET(x)              (((x) & BANK2_READ_EVENT2_DC_MASK) >> BANK2_READ_EVENT2_DC_LSB)
#define BANK2_READ_EVENT2_DC_SET(x)              (((x) << BANK2_READ_EVENT2_DC_LSB) & BANK2_READ_EVENT2_DC_MASK)
#define BANK2_READ_EVENT2_BE_MSB                 10
#define BANK2_READ_EVENT2_BE_LSB                 10
#define BANK2_READ_EVENT2_BE_MASK                0x00000400
#define BANK2_READ_EVENT2_BE_GET(x)              (((x) & BANK2_READ_EVENT2_BE_MASK) >> BANK2_READ_EVENT2_BE_LSB)
#define BANK2_READ_EVENT2_BE_SET(x)              (((x) << BANK2_READ_EVENT2_BE_LSB) & BANK2_READ_EVENT2_BE_MASK)
#define BANK2_READ_EVENT2_OE_MSB                 9
#define BANK2_READ_EVENT2_OE_LSB                 9
#define BANK2_READ_EVENT2_OE_MASK                0x00000200
#define BANK2_READ_EVENT2_OE_GET(x)              (((x) & BANK2_READ_EVENT2_OE_MASK) >> BANK2_READ_EVENT2_OE_LSB)
#define BANK2_READ_EVENT2_OE_SET(x)              (((x) << BANK2_READ_EVENT2_OE_LSB) & BANK2_READ_EVENT2_OE_MASK)
#define BANK2_READ_EVENT2_CS_MSB                 8
#define BANK2_READ_EVENT2_CS_LSB                 8
#define BANK2_READ_EVENT2_CS_MASK                0x00000100
#define BANK2_READ_EVENT2_CS_GET(x)              (((x) & BANK2_READ_EVENT2_CS_MASK) >> BANK2_READ_EVENT2_CS_LSB)
#define BANK2_READ_EVENT2_CS_SET(x)              (((x) << BANK2_READ_EVENT2_CS_LSB) & BANK2_READ_EVENT2_CS_MASK)
#define BANK2_READ_EVENT1_DC_MSB                 7
#define BANK2_READ_EVENT1_DC_LSB                 7
#define BANK2_READ_EVENT1_DC_MASK                0x00000080
#define BANK2_READ_EVENT1_DC_GET(x)              (((x) & BANK2_READ_EVENT1_DC_MASK) >> BANK2_READ_EVENT1_DC_LSB)
#define BANK2_READ_EVENT1_DC_SET(x)              (((x) << BANK2_READ_EVENT1_DC_LSB) & BANK2_READ_EVENT1_DC_MASK)
#define BANK2_READ_EVENT1_BE_MSB                 6
#define BANK2_READ_EVENT1_BE_LSB                 6
#define BANK2_READ_EVENT1_BE_MASK                0x00000040
#define BANK2_READ_EVENT1_BE_GET(x)              (((x) & BANK2_READ_EVENT1_BE_MASK) >> BANK2_READ_EVENT1_BE_LSB)
#define BANK2_READ_EVENT1_BE_SET(x)              (((x) << BANK2_READ_EVENT1_BE_LSB) & BANK2_READ_EVENT1_BE_MASK)
#define BANK2_READ_EVENT1_OE_MSB                 5
#define BANK2_READ_EVENT1_OE_LSB                 5
#define BANK2_READ_EVENT1_OE_MASK                0x00000020
#define BANK2_READ_EVENT1_OE_GET(x)              (((x) & BANK2_READ_EVENT1_OE_MASK) >> BANK2_READ_EVENT1_OE_LSB)
#define BANK2_READ_EVENT1_OE_SET(x)              (((x) << BANK2_READ_EVENT1_OE_LSB) & BANK2_READ_EVENT1_OE_MASK)
#define BANK2_READ_EVENT1_CS_MSB                 4
#define BANK2_READ_EVENT1_CS_LSB                 4
#define BANK2_READ_EVENT1_CS_MASK                0x00000010
#define BANK2_READ_EVENT1_CS_GET(x)              (((x) & BANK2_READ_EVENT1_CS_MASK) >> BANK2_READ_EVENT1_CS_LSB)
#define BANK2_READ_EVENT1_CS_SET(x)              (((x) << BANK2_READ_EVENT1_CS_LSB) & BANK2_READ_EVENT1_CS_MASK)
#define BANK2_READ_EVENT0_DC_MSB                 3
#define BANK2_READ_EVENT0_DC_LSB                 3
#define BANK2_READ_EVENT0_DC_MASK                0x00000008
#define BANK2_READ_EVENT0_DC_GET(x)              (((x) & BANK2_READ_EVENT0_DC_MASK) >> BANK2_READ_EVENT0_DC_LSB)
#define BANK2_READ_EVENT0_DC_SET(x)              (((x) << BANK2_READ_EVENT0_DC_LSB) & BANK2_READ_EVENT0_DC_MASK)
#define BANK2_READ_EVENT0_BE_MSB                 2
#define BANK2_READ_EVENT0_BE_LSB                 2
#define BANK2_READ_EVENT0_BE_MASK                0x00000004
#define BANK2_READ_EVENT0_BE_GET(x)              (((x) & BANK2_READ_EVENT0_BE_MASK) >> BANK2_READ_EVENT0_BE_LSB)
#define BANK2_READ_EVENT0_BE_SET(x)              (((x) << BANK2_READ_EVENT0_BE_LSB) & BANK2_READ_EVENT0_BE_MASK)
#define BANK2_READ_EVENT0_OE_MSB                 1
#define BANK2_READ_EVENT0_OE_LSB                 1
#define BANK2_READ_EVENT0_OE_MASK                0x00000002
#define BANK2_READ_EVENT0_OE_GET(x)              (((x) & BANK2_READ_EVENT0_OE_MASK) >> BANK2_READ_EVENT0_OE_LSB)
#define BANK2_READ_EVENT0_OE_SET(x)              (((x) << BANK2_READ_EVENT0_OE_LSB) & BANK2_READ_EVENT0_OE_MASK)
#define BANK2_READ_EVENT0_CS_MSB                 0
#define BANK2_READ_EVENT0_CS_LSB                 0
#define BANK2_READ_EVENT0_CS_MASK                0x00000001
#define BANK2_READ_EVENT0_CS_GET(x)              (((x) & BANK2_READ_EVENT0_CS_MASK) >> BANK2_READ_EVENT0_CS_LSB)
#define BANK2_READ_EVENT0_CS_SET(x)              (((x) << BANK2_READ_EVENT0_CS_LSB) & BANK2_READ_EVENT0_CS_MASK)

#define BANK2_WRITE_ADDRESS                      0x0c00402c
#define BANK2_WRITE_OFFSET                       0x0000002c
#define BANK2_WRITE_ENABLE_WAIT_MSB              31
#define BANK2_WRITE_ENABLE_WAIT_LSB              31
#define BANK2_WRITE_ENABLE_WAIT_MASK             0x80000000
#define BANK2_WRITE_ENABLE_WAIT_GET(x)           (((x) & BANK2_WRITE_ENABLE_WAIT_MASK) >> BANK2_WRITE_ENABLE_WAIT_LSB)
#define BANK2_WRITE_ENABLE_WAIT_SET(x)           (((x) << BANK2_WRITE_ENABLE_WAIT_LSB) & BANK2_WRITE_ENABLE_WAIT_MASK)
#define BANK2_WRITE_WAIT_EVENT_MSB               30
#define BANK2_WRITE_WAIT_EVENT_LSB               28
#define BANK2_WRITE_WAIT_EVENT_MASK              0x70000000
#define BANK2_WRITE_WAIT_EVENT_GET(x)            (((x) & BANK2_WRITE_WAIT_EVENT_MASK) >> BANK2_WRITE_WAIT_EVENT_LSB)
#define BANK2_WRITE_WAIT_EVENT_SET(x)            (((x) << BANK2_WRITE_WAIT_EVENT_LSB) & BANK2_WRITE_WAIT_EVENT_MASK)
#define BANK2_WRITE_END_EVENT_MSB                26
#define BANK2_WRITE_END_EVENT_LSB                24
#define BANK2_WRITE_END_EVENT_MASK               0x07000000
#define BANK2_WRITE_END_EVENT_GET(x)             (((x) & BANK2_WRITE_END_EVENT_MASK) >> BANK2_WRITE_END_EVENT_LSB)
#define BANK2_WRITE_END_EVENT_SET(x)             (((x) << BANK2_WRITE_END_EVENT_LSB) & BANK2_WRITE_END_EVENT_MASK)
#define BANK2_WRITE_BURST_END_EVENT_MSB          22
#define BANK2_WRITE_BURST_END_EVENT_LSB          20
#define BANK2_WRITE_BURST_END_EVENT_MASK         0x00700000
#define BANK2_WRITE_BURST_END_EVENT_GET(x)       (((x) & BANK2_WRITE_BURST_END_EVENT_MASK) >> BANK2_WRITE_BURST_END_EVENT_LSB)
#define BANK2_WRITE_BURST_END_EVENT_SET(x)       (((x) << BANK2_WRITE_BURST_END_EVENT_LSB) & BANK2_WRITE_BURST_END_EVENT_MASK)
#define BANK2_WRITE_BURST_START_EVENT_MSB        18
#define BANK2_WRITE_BURST_START_EVENT_LSB        16
#define BANK2_WRITE_BURST_START_EVENT_MASK       0x00070000
#define BANK2_WRITE_BURST_START_EVENT_GET(x)     (((x) & BANK2_WRITE_BURST_START_EVENT_MASK) >> BANK2_WRITE_BURST_START_EVENT_LSB)
#define BANK2_WRITE_BURST_START_EVENT_SET(x)     (((x) << BANK2_WRITE_BURST_START_EVENT_LSB) & BANK2_WRITE_BURST_START_EVENT_MASK)
#define BANK2_WRITE_EVENT3_BE_MSB                14
#define BANK2_WRITE_EVENT3_BE_LSB                14
#define BANK2_WRITE_EVENT3_BE_MASK               0x00004000
#define BANK2_WRITE_EVENT3_BE_GET(x)             (((x) & BANK2_WRITE_EVENT3_BE_MASK) >> BANK2_WRITE_EVENT3_BE_LSB)
#define BANK2_WRITE_EVENT3_BE_SET(x)             (((x) << BANK2_WRITE_EVENT3_BE_LSB) & BANK2_WRITE_EVENT3_BE_MASK)
#define BANK2_WRITE_EVENT3_WE_MSB                13
#define BANK2_WRITE_EVENT3_WE_LSB                13
#define BANK2_WRITE_EVENT3_WE_MASK               0x00002000
#define BANK2_WRITE_EVENT3_WE_GET(x)             (((x) & BANK2_WRITE_EVENT3_WE_MASK) >> BANK2_WRITE_EVENT3_WE_LSB)
#define BANK2_WRITE_EVENT3_WE_SET(x)             (((x) << BANK2_WRITE_EVENT3_WE_LSB) & BANK2_WRITE_EVENT3_WE_MASK)
#define BANK2_WRITE_EVENT3_CS_MSB                12
#define BANK2_WRITE_EVENT3_CS_LSB                12
#define BANK2_WRITE_EVENT3_CS_MASK               0x00001000
#define BANK2_WRITE_EVENT3_CS_GET(x)             (((x) & BANK2_WRITE_EVENT3_CS_MASK) >> BANK2_WRITE_EVENT3_CS_LSB)
#define BANK2_WRITE_EVENT3_CS_SET(x)             (((x) << BANK2_WRITE_EVENT3_CS_LSB) & BANK2_WRITE_EVENT3_CS_MASK)
#define BANK2_WRITE_EVENT2_BE_MSB                10
#define BANK2_WRITE_EVENT2_BE_LSB                10
#define BANK2_WRITE_EVENT2_BE_MASK               0x00000400
#define BANK2_WRITE_EVENT2_BE_GET(x)             (((x) & BANK2_WRITE_EVENT2_BE_MASK) >> BANK2_WRITE_EVENT2_BE_LSB)
#define BANK2_WRITE_EVENT2_BE_SET(x)             (((x) << BANK2_WRITE_EVENT2_BE_LSB) & BANK2_WRITE_EVENT2_BE_MASK)
#define BANK2_WRITE_EVENT2_WE_MSB                9
#define BANK2_WRITE_EVENT2_WE_LSB                9
#define BANK2_WRITE_EVENT2_WE_MASK               0x00000200
#define BANK2_WRITE_EVENT2_WE_GET(x)             (((x) & BANK2_WRITE_EVENT2_WE_MASK) >> BANK2_WRITE_EVENT2_WE_LSB)
#define BANK2_WRITE_EVENT2_WE_SET(x)             (((x) << BANK2_WRITE_EVENT2_WE_LSB) & BANK2_WRITE_EVENT2_WE_MASK)
#define BANK2_WRITE_EVENT2_CS_MSB                8
#define BANK2_WRITE_EVENT2_CS_LSB                8
#define BANK2_WRITE_EVENT2_CS_MASK               0x00000100
#define BANK2_WRITE_EVENT2_CS_GET(x)             (((x) & BANK2_WRITE_EVENT2_CS_MASK) >> BANK2_WRITE_EVENT2_CS_LSB)
#define BANK2_WRITE_EVENT2_CS_SET(x)             (((x) << BANK2_WRITE_EVENT2_CS_LSB) & BANK2_WRITE_EVENT2_CS_MASK)
#define BANK2_WRITE_EVENT1_BE_MSB                6
#define BANK2_WRITE_EVENT1_BE_LSB                6
#define BANK2_WRITE_EVENT1_BE_MASK               0x00000040
#define BANK2_WRITE_EVENT1_BE_GET(x)             (((x) & BANK2_WRITE_EVENT1_BE_MASK) >> BANK2_WRITE_EVENT1_BE_LSB)
#define BANK2_WRITE_EVENT1_BE_SET(x)             (((x) << BANK2_WRITE_EVENT1_BE_LSB) & BANK2_WRITE_EVENT1_BE_MASK)
#define BANK2_WRITE_EVENT1_WE_MSB                5
#define BANK2_WRITE_EVENT1_WE_LSB                5
#define BANK2_WRITE_EVENT1_WE_MASK               0x00000020
#define BANK2_WRITE_EVENT1_WE_GET(x)             (((x) & BANK2_WRITE_EVENT1_WE_MASK) >> BANK2_WRITE_EVENT1_WE_LSB)
#define BANK2_WRITE_EVENT1_WE_SET(x)             (((x) << BANK2_WRITE_EVENT1_WE_LSB) & BANK2_WRITE_EVENT1_WE_MASK)
#define BANK2_WRITE_EVENT1_CS_MSB                4
#define BANK2_WRITE_EVENT1_CS_LSB                4
#define BANK2_WRITE_EVENT1_CS_MASK               0x00000010
#define BANK2_WRITE_EVENT1_CS_GET(x)             (((x) & BANK2_WRITE_EVENT1_CS_MASK) >> BANK2_WRITE_EVENT1_CS_LSB)
#define BANK2_WRITE_EVENT1_CS_SET(x)             (((x) << BANK2_WRITE_EVENT1_CS_LSB) & BANK2_WRITE_EVENT1_CS_MASK)
#define BANK2_WRITE_EVENT0_BE_MSB                2
#define BANK2_WRITE_EVENT0_BE_LSB                2
#define BANK2_WRITE_EVENT0_BE_MASK               0x00000004
#define BANK2_WRITE_EVENT0_BE_GET(x)             (((x) & BANK2_WRITE_EVENT0_BE_MASK) >> BANK2_WRITE_EVENT0_BE_LSB)
#define BANK2_WRITE_EVENT0_BE_SET(x)             (((x) << BANK2_WRITE_EVENT0_BE_LSB) & BANK2_WRITE_EVENT0_BE_MASK)
#define BANK2_WRITE_EVENT0_WE_MSB                1
#define BANK2_WRITE_EVENT0_WE_LSB                1
#define BANK2_WRITE_EVENT0_WE_MASK               0x00000002
#define BANK2_WRITE_EVENT0_WE_GET(x)             (((x) & BANK2_WRITE_EVENT0_WE_MASK) >> BANK2_WRITE_EVENT0_WE_LSB)
#define BANK2_WRITE_EVENT0_WE_SET(x)             (((x) << BANK2_WRITE_EVENT0_WE_LSB) & BANK2_WRITE_EVENT0_WE_MASK)
#define BANK2_WRITE_EVENT0_CS_MSB                0
#define BANK2_WRITE_EVENT0_CS_LSB                0
#define BANK2_WRITE_EVENT0_CS_MASK               0x00000001
#define BANK2_WRITE_EVENT0_CS_GET(x)             (((x) & BANK2_WRITE_EVENT0_CS_MASK) >> BANK2_WRITE_EVENT0_CS_LSB)
#define BANK2_WRITE_EVENT0_CS_SET(x)             (((x) << BANK2_WRITE_EVENT0_CS_LSB) & BANK2_WRITE_EVENT0_CS_MASK)

#define MC_REMAP_VALID_ADDRESS                   0x0c004080
#define MC_REMAP_VALID_OFFSET                    0x00000080
#define MC_REMAP_VALID_BIT_MSB                   0
#define MC_REMAP_VALID_BIT_LSB                   0
#define MC_REMAP_VALID_BIT_MASK                  0x00000001
#define MC_REMAP_VALID_BIT_GET(x)                (((x) & MC_REMAP_VALID_BIT_MASK) >> MC_REMAP_VALID_BIT_LSB)
#define MC_REMAP_VALID_BIT_SET(x)                (((x) << MC_REMAP_VALID_BIT_LSB) & MC_REMAP_VALID_BIT_MASK)

#define MC_REMAP_SIZE_ADDRESS                    0x0c004100
#define MC_REMAP_SIZE_OFFSET                     0x00000100
#define MC_REMAP_SIZE_VALUE_MSB                  2
#define MC_REMAP_SIZE_VALUE_LSB                  0
#define MC_REMAP_SIZE_VALUE_MASK                 0x00000007
#define MC_REMAP_SIZE_VALUE_GET(x)               (((x) & MC_REMAP_SIZE_VALUE_MASK) >> MC_REMAP_SIZE_VALUE_LSB)
#define MC_REMAP_SIZE_VALUE_SET(x)               (((x) << MC_REMAP_SIZE_VALUE_LSB) & MC_REMAP_SIZE_VALUE_MASK)

#define MC_REMAP_COMPARE_ADDRESS                 0x0c004180
#define MC_REMAP_COMPARE_OFFSET                  0x00000180
#define MC_REMAP_COMPARE_ADDRESS_MSB             17
#define MC_REMAP_COMPARE_ADDRESS_LSB             4
#define MC_REMAP_COMPARE_ADDRESS_MASK            0x0003fff0
#define MC_REMAP_COMPARE_ADDRESS_GET(x)          (((x) & MC_REMAP_COMPARE_ADDRESS_MASK) >> MC_REMAP_COMPARE_ADDRESS_LSB)
#define MC_REMAP_COMPARE_ADDRESS_SET(x)          (((x) << MC_REMAP_COMPARE_ADDRESS_LSB) & MC_REMAP_COMPARE_ADDRESS_MASK)

#define MC_REMAP_TARGET_ADDRESS                  0x0c004200
#define MC_REMAP_TARGET_OFFSET                   0x00000200
#define MC_REMAP_TARGET_ADDRESS_MSB              16
#define MC_REMAP_TARGET_ADDRESS_LSB              4
#define MC_REMAP_TARGET_ADDRESS_MASK             0x0001fff0
#define MC_REMAP_TARGET_ADDRESS_GET(x)           (((x) & MC_REMAP_TARGET_ADDRESS_MASK) >> MC_REMAP_TARGET_ADDRESS_LSB)
#define MC_REMAP_TARGET_ADDRESS_SET(x)           (((x) << MC_REMAP_TARGET_ADDRESS_LSB) & MC_REMAP_TARGET_ADDRESS_MASK)

#define G729_ROM_ADDRESS                         0x0c004280
#define G729_ROM_OFFSET                          0x00000280
#define G729_ROM_ENABLE_MSB                      0
#define G729_ROM_ENABLE_LSB                      0
#define G729_ROM_ENABLE_MASK                     0x00000001
#define G729_ROM_ENABLE_GET(x)                   (((x) & G729_ROM_ENABLE_MASK) >> G729_ROM_ENABLE_LSB)
#define G729_ROM_ENABLE_SET(x)                   (((x) << G729_ROM_ENABLE_LSB) & G729_ROM_ENABLE_MASK)

#define ERROR_VALID_ADDRESS                      0x0c004284
#define ERROR_VALID_OFFSET                       0x00000284
#define ERROR_VALID_ERROR_CAPTURE_ENABLE_MSB     8
#define ERROR_VALID_ERROR_CAPTURE_ENABLE_LSB     8
#define ERROR_VALID_ERROR_CAPTURE_ENABLE_MASK    0x00000100
#define ERROR_VALID_ERROR_CAPTURE_ENABLE_GET(x)  (((x) & ERROR_VALID_ERROR_CAPTURE_ENABLE_MASK) >> ERROR_VALID_ERROR_CAPTURE_ENABLE_LSB)
#define ERROR_VALID_ERROR_CAPTURE_ENABLE_SET(x)  (((x) << ERROR_VALID_ERROR_CAPTURE_ENABLE_LSB) & ERROR_VALID_ERROR_CAPTURE_ENABLE_MASK)
#define ERROR_VALID_APB_ERROR_OVERFLOW_MSB       5
#define ERROR_VALID_APB_ERROR_OVERFLOW_LSB       5
#define ERROR_VALID_APB_ERROR_OVERFLOW_MASK      0x00000020
#define ERROR_VALID_APB_ERROR_OVERFLOW_GET(x)    (((x) & ERROR_VALID_APB_ERROR_OVERFLOW_MASK) >> ERROR_VALID_APB_ERROR_OVERFLOW_LSB)
#define ERROR_VALID_APB_ERROR_OVERFLOW_SET(x)    (((x) << ERROR_VALID_APB_ERROR_OVERFLOW_LSB) & ERROR_VALID_APB_ERROR_OVERFLOW_MASK)
#define ERROR_VALID_APB_ERROR_VALID_MSB          4
#define ERROR_VALID_APB_ERROR_VALID_LSB          4
#define ERROR_VALID_APB_ERROR_VALID_MASK         0x00000010
#define ERROR_VALID_APB_ERROR_VALID_GET(x)       (((x) & ERROR_VALID_APB_ERROR_VALID_MASK) >> ERROR_VALID_APB_ERROR_VALID_LSB)
#define ERROR_VALID_APB_ERROR_VALID_SET(x)       (((x) << ERROR_VALID_APB_ERROR_VALID_LSB) & ERROR_VALID_APB_ERROR_VALID_MASK)
#define ERROR_VALID_AHB_ERROR_OVERFLOW_MSB       1
#define ERROR_VALID_AHB_ERROR_OVERFLOW_LSB       1
#define ERROR_VALID_AHB_ERROR_OVERFLOW_MASK      0x00000002
#define ERROR_VALID_AHB_ERROR_OVERFLOW_GET(x)    (((x) & ERROR_VALID_AHB_ERROR_OVERFLOW_MASK) >> ERROR_VALID_AHB_ERROR_OVERFLOW_LSB)
#define ERROR_VALID_AHB_ERROR_OVERFLOW_SET(x)    (((x) << ERROR_VALID_AHB_ERROR_OVERFLOW_LSB) & ERROR_VALID_AHB_ERROR_OVERFLOW_MASK)
#define ERROR_VALID_AHB_ERROR_VALID_MSB          0
#define ERROR_VALID_AHB_ERROR_VALID_LSB          0
#define ERROR_VALID_AHB_ERROR_VALID_MASK         0x00000001
#define ERROR_VALID_AHB_ERROR_VALID_GET(x)       (((x) & ERROR_VALID_AHB_ERROR_VALID_MASK) >> ERROR_VALID_AHB_ERROR_VALID_LSB)
#define ERROR_VALID_AHB_ERROR_VALID_SET(x)       (((x) << ERROR_VALID_AHB_ERROR_VALID_LSB) & ERROR_VALID_AHB_ERROR_VALID_MASK)

#define AHB_ERROR_ADDRESS                        0x0c004288
#define AHB_ERROR_OFFSET                         0x00000288
#define AHB_ERROR_HMASTER_MSB                    31
#define AHB_ERROR_HMASTER_LSB                    30
#define AHB_ERROR_HMASTER_MASK                   0xc0000000
#define AHB_ERROR_HMASTER_GET(x)                 (((x) & AHB_ERROR_HMASTER_MASK) >> AHB_ERROR_HMASTER_LSB)
#define AHB_ERROR_HMASTER_SET(x)                 (((x) << AHB_ERROR_HMASTER_LSB) & AHB_ERROR_HMASTER_MASK)
#define AHB_ERROR_HTRANS_MSB                     29
#define AHB_ERROR_HTRANS_LSB                     28
#define AHB_ERROR_HTRANS_MASK                    0x30000000
#define AHB_ERROR_HTRANS_GET(x)                  (((x) & AHB_ERROR_HTRANS_MASK) >> AHB_ERROR_HTRANS_LSB)
#define AHB_ERROR_HTRANS_SET(x)                  (((x) << AHB_ERROR_HTRANS_LSB) & AHB_ERROR_HTRANS_MASK)
#define AHB_ERROR_HWRITE_MSB                     27
#define AHB_ERROR_HWRITE_LSB                     27
#define AHB_ERROR_HWRITE_MASK                    0x08000000
#define AHB_ERROR_HWRITE_GET(x)                  (((x) & AHB_ERROR_HWRITE_MASK) >> AHB_ERROR_HWRITE_LSB)
#define AHB_ERROR_HWRITE_SET(x)                  (((x) << AHB_ERROR_HWRITE_LSB) & AHB_ERROR_HWRITE_MASK)
#define AHB_ERROR_HBURST_MSB                     26
#define AHB_ERROR_HBURST_LSB                     24
#define AHB_ERROR_HBURST_MASK                    0x07000000
#define AHB_ERROR_HBURST_GET(x)                  (((x) & AHB_ERROR_HBURST_MASK) >> AHB_ERROR_HBURST_LSB)
#define AHB_ERROR_HBURST_SET(x)                  (((x) << AHB_ERROR_HBURST_LSB) & AHB_ERROR_HBURST_MASK)
#define AHB_ERROR_HADDR_MSB                      23
#define AHB_ERROR_HADDR_LSB                      0
#define AHB_ERROR_HADDR_MASK                     0x00ffffff
#define AHB_ERROR_HADDR_GET(x)                   (((x) & AHB_ERROR_HADDR_MASK) >> AHB_ERROR_HADDR_LSB)
#define AHB_ERROR_HADDR_SET(x)                   (((x) << AHB_ERROR_HADDR_LSB) & AHB_ERROR_HADDR_MASK)

#define APB_ERROR_ADDRESS                        0x0c00428c
#define APB_ERROR_OFFSET                         0x0000028c
#define APB_ERROR_PADDR_MSB                      31
#define APB_ERROR_PADDR_LSB                      2
#define APB_ERROR_PADDR_MASK                     0xfffffffc
#define APB_ERROR_PADDR_GET(x)                   (((x) & APB_ERROR_PADDR_MASK) >> APB_ERROR_PADDR_LSB)
#define APB_ERROR_PADDR_SET(x)                   (((x) << APB_ERROR_PADDR_LSB) & APB_ERROR_PADDR_MASK)
#define APB_ERROR_PVALID_MSB                     1
#define APB_ERROR_PVALID_LSB                     1
#define APB_ERROR_PVALID_MASK                    0x00000002
#define APB_ERROR_PVALID_GET(x)                  (((x) & APB_ERROR_PVALID_MASK) >> APB_ERROR_PVALID_LSB)
#define APB_ERROR_PVALID_SET(x)                  (((x) << APB_ERROR_PVALID_LSB) & APB_ERROR_PVALID_MASK)
#define APB_ERROR_PWRITE_MSB                     0
#define APB_ERROR_PWRITE_LSB                     0
#define APB_ERROR_PWRITE_MASK                    0x00000001
#define APB_ERROR_PWRITE_GET(x)                  (((x) & APB_ERROR_PWRITE_MASK) >> APB_ERROR_PWRITE_LSB)
#define APB_ERROR_PWRITE_SET(x)                  (((x) << APB_ERROR_PWRITE_LSB) & APB_ERROR_PWRITE_MASK)

#define PERF_CONFIG_ADDRESS                      0x0c004290
#define PERF_CONFIG_OFFSET                       0x00000290
#define PERF_CONFIG_ENABLE_MSB                   20
#define PERF_CONFIG_ENABLE_LSB                   20
#define PERF_CONFIG_ENABLE_MASK                  0x00100000
#define PERF_CONFIG_ENABLE_GET(x)                (((x) & PERF_CONFIG_ENABLE_MASK) >> PERF_CONFIG_ENABLE_LSB)
#define PERF_CONFIG_ENABLE_SET(x)                (((x) << PERF_CONFIG_ENABLE_LSB) & PERF_CONFIG_ENABLE_MASK)
#define PERF_CONFIG_RESET_MSB                    19
#define PERF_CONFIG_RESET_LSB                    16
#define PERF_CONFIG_RESET_MASK                   0x000f0000
#define PERF_CONFIG_RESET_GET(x)                 (((x) & PERF_CONFIG_RESET_MASK) >> PERF_CONFIG_RESET_LSB)
#define PERF_CONFIG_RESET_SET(x)                 (((x) << PERF_CONFIG_RESET_LSB) & PERF_CONFIG_RESET_MASK)
#define PERF_CONFIG_COUNTER3_MSB                 15
#define PERF_CONFIG_COUNTER3_LSB                 12
#define PERF_CONFIG_COUNTER3_MASK                0x0000f000
#define PERF_CONFIG_COUNTER3_GET(x)              (((x) & PERF_CONFIG_COUNTER3_MASK) >> PERF_CONFIG_COUNTER3_LSB)
#define PERF_CONFIG_COUNTER3_SET(x)              (((x) << PERF_CONFIG_COUNTER3_LSB) & PERF_CONFIG_COUNTER3_MASK)
#define PERF_CONFIG_COUNTER2_MSB                 11
#define PERF_CONFIG_COUNTER2_LSB                 8
#define PERF_CONFIG_COUNTER2_MASK                0x00000f00
#define PERF_CONFIG_COUNTER2_GET(x)              (((x) & PERF_CONFIG_COUNTER2_MASK) >> PERF_CONFIG_COUNTER2_LSB)
#define PERF_CONFIG_COUNTER2_SET(x)              (((x) << PERF_CONFIG_COUNTER2_LSB) & PERF_CONFIG_COUNTER2_MASK)
#define PERF_CONFIG_COUNTER1_MSB                 7
#define PERF_CONFIG_COUNTER1_LSB                 4
#define PERF_CONFIG_COUNTER1_MASK                0x000000f0
#define PERF_CONFIG_COUNTER1_GET(x)              (((x) & PERF_CONFIG_COUNTER1_MASK) >> PERF_CONFIG_COUNTER1_LSB)
#define PERF_CONFIG_COUNTER1_SET(x)              (((x) << PERF_CONFIG_COUNTER1_LSB) & PERF_CONFIG_COUNTER1_MASK)
#define PERF_CONFIG_COUNTER0_MSB                 3
#define PERF_CONFIG_COUNTER0_LSB                 0
#define PERF_CONFIG_COUNTER0_MASK                0x0000000f
#define PERF_CONFIG_COUNTER0_GET(x)              (((x) & PERF_CONFIG_COUNTER0_MASK) >> PERF_CONFIG_COUNTER0_LSB)
#define PERF_CONFIG_COUNTER0_SET(x)              (((x) << PERF_CONFIG_COUNTER0_LSB) & PERF_CONFIG_COUNTER0_MASK)

#define PERF_COUNTER_ADDRESS                     0x0c0042a0
#define PERF_COUNTER_OFFSET                      0x000002a0
#define PERF_COUNTER_VALUE_MSB                   19
#define PERF_COUNTER_VALUE_LSB                   0
#define PERF_COUNTER_VALUE_MASK                  0x000fffff
#define PERF_COUNTER_VALUE_GET(x)                (((x) & PERF_COUNTER_VALUE_MASK) >> PERF_COUNTER_VALUE_LSB)
#define PERF_COUNTER_VALUE_SET(x)                (((x) << PERF_COUNTER_VALUE_LSB) & PERF_COUNTER_VALUE_MASK)

#define CPU_SETUP_CONFIG_ADDRESS                 0x0c0042b0
#define CPU_SETUP_CONFIG_OFFSET                  0x000002b0
#define CPU_SETUP_CONFIG_ENABLE_MSB              1
#define CPU_SETUP_CONFIG_ENABLE_LSB              1
#define CPU_SETUP_CONFIG_ENABLE_MASK             0x00000002
#define CPU_SETUP_CONFIG_ENABLE_GET(x)           (((x) & CPU_SETUP_CONFIG_ENABLE_MASK) >> CPU_SETUP_CONFIG_ENABLE_LSB)
#define CPU_SETUP_CONFIG_ENABLE_SET(x)           (((x) << CPU_SETUP_CONFIG_ENABLE_LSB) & CPU_SETUP_CONFIG_ENABLE_MASK)
#define CPU_SETUP_CONFIG_CLEAR_MSB               0
#define CPU_SETUP_CONFIG_CLEAR_LSB               0
#define CPU_SETUP_CONFIG_CLEAR_MASK              0x00000001
#define CPU_SETUP_CONFIG_CLEAR_GET(x)            (((x) & CPU_SETUP_CONFIG_CLEAR_MASK) >> CPU_SETUP_CONFIG_CLEAR_LSB)
#define CPU_SETUP_CONFIG_CLEAR_SET(x)            (((x) << CPU_SETUP_CONFIG_CLEAR_LSB) & CPU_SETUP_CONFIG_CLEAR_MASK)

#define MC_SETUP_CONFIG_ADDRESS                  0x0c0042b4
#define MC_SETUP_CONFIG_OFFSET                   0x000002b4
#define MC_SETUP_CONFIG_ENABLE_MSB               1
#define MC_SETUP_CONFIG_ENABLE_LSB               1
#define MC_SETUP_CONFIG_ENABLE_MASK              0x00000002
#define MC_SETUP_CONFIG_ENABLE_GET(x)            (((x) & MC_SETUP_CONFIG_ENABLE_MASK) >> MC_SETUP_CONFIG_ENABLE_LSB)
#define MC_SETUP_CONFIG_ENABLE_SET(x)            (((x) << MC_SETUP_CONFIG_ENABLE_LSB) & MC_SETUP_CONFIG_ENABLE_MASK)
#define MC_SETUP_CONFIG_CLEAR_MSB                0
#define MC_SETUP_CONFIG_CLEAR_LSB                0
#define MC_SETUP_CONFIG_CLEAR_MASK               0x00000001
#define MC_SETUP_CONFIG_CLEAR_GET(x)             (((x) & MC_SETUP_CONFIG_CLEAR_MASK) >> MC_SETUP_CONFIG_CLEAR_LSB)
#define MC_SETUP_CONFIG_CLEAR_SET(x)             (((x) << MC_SETUP_CONFIG_CLEAR_LSB) & MC_SETUP_CONFIG_CLEAR_MASK)

#define BB_SETUP_CONFIG_ADDRESS                  0x0c0042b8
#define BB_SETUP_CONFIG_OFFSET                   0x000002b8
#define BB_SETUP_CONFIG_ENABLE_MSB               1
#define BB_SETUP_CONFIG_ENABLE_LSB               1
#define BB_SETUP_CONFIG_ENABLE_MASK              0x00000002
#define BB_SETUP_CONFIG_ENABLE_GET(x)            (((x) & BB_SETUP_CONFIG_ENABLE_MASK) >> BB_SETUP_CONFIG_ENABLE_LSB)
#define BB_SETUP_CONFIG_ENABLE_SET(x)            (((x) << BB_SETUP_CONFIG_ENABLE_LSB) & BB_SETUP_CONFIG_ENABLE_MASK)
#define BB_SETUP_CONFIG_CLEAR_MSB                0
#define BB_SETUP_CONFIG_CLEAR_LSB                0
#define BB_SETUP_CONFIG_CLEAR_MASK               0x00000001
#define BB_SETUP_CONFIG_CLEAR_GET(x)             (((x) & BB_SETUP_CONFIG_CLEAR_MASK) >> BB_SETUP_CONFIG_CLEAR_LSB)
#define BB_SETUP_CONFIG_CLEAR_SET(x)             (((x) << BB_SETUP_CONFIG_CLEAR_LSB) & BB_SETUP_CONFIG_CLEAR_MASK)

#define SDIO_SETUP_CONFIG_ADDRESS                0x0c0042bc
#define SDIO_SETUP_CONFIG_OFFSET                 0x000002bc
#define SDIO_SETUP_CONFIG_ENABLE_MSB             1
#define SDIO_SETUP_CONFIG_ENABLE_LSB             1
#define SDIO_SETUP_CONFIG_ENABLE_MASK            0x00000002
#define SDIO_SETUP_CONFIG_ENABLE_GET(x)          (((x) & SDIO_SETUP_CONFIG_ENABLE_MASK) >> SDIO_SETUP_CONFIG_ENABLE_LSB)
#define SDIO_SETUP_CONFIG_ENABLE_SET(x)          (((x) << SDIO_SETUP_CONFIG_ENABLE_LSB) & SDIO_SETUP_CONFIG_ENABLE_MASK)
#define SDIO_SETUP_CONFIG_CLEAR_MSB              0
#define SDIO_SETUP_CONFIG_CLEAR_LSB              0
#define SDIO_SETUP_CONFIG_CLEAR_MASK             0x00000001
#define SDIO_SETUP_CONFIG_CLEAR_GET(x)           (((x) & SDIO_SETUP_CONFIG_CLEAR_MASK) >> SDIO_SETUP_CONFIG_CLEAR_LSB)
#define SDIO_SETUP_CONFIG_CLEAR_SET(x)           (((x) << SDIO_SETUP_CONFIG_CLEAR_LSB) & SDIO_SETUP_CONFIG_CLEAR_MASK)

#define CPU_SETUP_CIRCUIT_ADDRESS                0x0c0042c0
#define CPU_SETUP_CIRCUIT_OFFSET                 0x000002c0
#define CPU_SETUP_CIRCUIT_VECTOR_MSB             7
#define CPU_SETUP_CIRCUIT_VECTOR_LSB             0
#define CPU_SETUP_CIRCUIT_VECTOR_MASK            0x000000ff
#define CPU_SETUP_CIRCUIT_VECTOR_GET(x)          (((x) & CPU_SETUP_CIRCUIT_VECTOR_MASK) >> CPU_SETUP_CIRCUIT_VECTOR_LSB)
#define CPU_SETUP_CIRCUIT_VECTOR_SET(x)          (((x) << CPU_SETUP_CIRCUIT_VECTOR_LSB) & CPU_SETUP_CIRCUIT_VECTOR_MASK)

#define MC_SETUP_CIRCUIT_ADDRESS                 0x0c0042e0
#define MC_SETUP_CIRCUIT_OFFSET                  0x000002e0
#define MC_SETUP_CIRCUIT_VECTOR_MSB              7
#define MC_SETUP_CIRCUIT_VECTOR_LSB              0
#define MC_SETUP_CIRCUIT_VECTOR_MASK             0x000000ff
#define MC_SETUP_CIRCUIT_VECTOR_GET(x)           (((x) & MC_SETUP_CIRCUIT_VECTOR_MASK) >> MC_SETUP_CIRCUIT_VECTOR_LSB)
#define MC_SETUP_CIRCUIT_VECTOR_SET(x)           (((x) << MC_SETUP_CIRCUIT_VECTOR_LSB) & MC_SETUP_CIRCUIT_VECTOR_MASK)

#define BB_SETUP_CIRCUIT_ADDRESS                 0x0c004300
#define BB_SETUP_CIRCUIT_OFFSET                  0x00000300
#define BB_SETUP_CIRCUIT_VECTOR_MSB              7
#define BB_SETUP_CIRCUIT_VECTOR_LSB              0
#define BB_SETUP_CIRCUIT_VECTOR_MASK             0x000000ff
#define BB_SETUP_CIRCUIT_VECTOR_GET(x)           (((x) & BB_SETUP_CIRCUIT_VECTOR_MASK) >> BB_SETUP_CIRCUIT_VECTOR_LSB)
#define BB_SETUP_CIRCUIT_VECTOR_SET(x)           (((x) << BB_SETUP_CIRCUIT_VECTOR_LSB) & BB_SETUP_CIRCUIT_VECTOR_MASK)

#define SDIO_SETUP_CIRCUIT_ADDRESS               0x0c004320
#define SDIO_SETUP_CIRCUIT_OFFSET                0x00000320
#define SDIO_SETUP_CIRCUIT_VECTOR_MSB            7
#define SDIO_SETUP_CIRCUIT_VECTOR_LSB            0
#define SDIO_SETUP_CIRCUIT_VECTOR_MASK           0x000000ff
#define SDIO_SETUP_CIRCUIT_VECTOR_GET(x)         (((x) & SDIO_SETUP_CIRCUIT_VECTOR_MASK) >> SDIO_SETUP_CIRCUIT_VECTOR_LSB)
#define SDIO_SETUP_CIRCUIT_VECTOR_SET(x)         (((x) << SDIO_SETUP_CIRCUIT_VECTOR_LSB) & SDIO_SETUP_CIRCUIT_VECTOR_MASK)

#define TIMING_SUMMARY_ADDRESS                   0x0c004340
#define TIMING_SUMMARY_OFFSET                    0x00000340
#define TIMING_SUMMARY_VECTOR_MSB                7
#define TIMING_SUMMARY_VECTOR_LSB                0
#define TIMING_SUMMARY_VECTOR_MASK               0x000000ff
#define TIMING_SUMMARY_VECTOR_GET(x)             (((x) & TIMING_SUMMARY_VECTOR_MASK) >> TIMING_SUMMARY_VECTOR_LSB)
#define TIMING_SUMMARY_VECTOR_SET(x)             (((x) << TIMING_SUMMARY_VECTOR_LSB) & TIMING_SUMMARY_VECTOR_MASK)

#define TIMING_INT_ENABLE_ADDRESS                0x0c004344
#define TIMING_INT_ENABLE_OFFSET                 0x00000344
#define TIMING_INT_ENABLE_VECTOR_MSB             7
#define TIMING_INT_ENABLE_VECTOR_LSB             0
#define TIMING_INT_ENABLE_VECTOR_MASK            0x000000ff
#define TIMING_INT_ENABLE_VECTOR_GET(x)          (((x) & TIMING_INT_ENABLE_VECTOR_MASK) >> TIMING_INT_ENABLE_VECTOR_LSB)
#define TIMING_INT_ENABLE_VECTOR_SET(x)          (((x) << TIMING_INT_ENABLE_VECTOR_LSB) & TIMING_INT_ENABLE_VECTOR_MASK)

#define MC_ERROR_STATUS_ADDRESS                  0x0c004348
#define MC_ERROR_STATUS_OFFSET                   0x00000348
#define MC_ERROR_STATUS_AHB_MSB                  1
#define MC_ERROR_STATUS_AHB_LSB                  1
#define MC_ERROR_STATUS_AHB_MASK                 0x00000002
#define MC_ERROR_STATUS_AHB_GET(x)               (((x) & MC_ERROR_STATUS_AHB_MASK) >> MC_ERROR_STATUS_AHB_LSB)
#define MC_ERROR_STATUS_AHB_SET(x)               (((x) << MC_ERROR_STATUS_AHB_LSB) & MC_ERROR_STATUS_AHB_MASK)
#define MC_ERROR_STATUS_TIMING_MSB               0
#define MC_ERROR_STATUS_TIMING_LSB               0
#define MC_ERROR_STATUS_TIMING_MASK              0x00000001
#define MC_ERROR_STATUS_TIMING_GET(x)            (((x) & MC_ERROR_STATUS_TIMING_MASK) >> MC_ERROR_STATUS_TIMING_LSB)
#define MC_ERROR_STATUS_TIMING_SET(x)            (((x) << MC_ERROR_STATUS_TIMING_LSB) & MC_ERROR_STATUS_TIMING_MASK)

#ifndef __ASSEMBLER__
typedef struct mc_reg_s {
  volatile unsigned int bank0_addr;
  volatile unsigned int bank0_config;
  volatile unsigned int bank0_read;
  volatile unsigned int bank0_write;
  volatile unsigned int bank1_addr;
  volatile unsigned int bank1_config;
  volatile unsigned int bank1_read;
  volatile unsigned int bank1_write;
  volatile unsigned int bank2_addr;
  volatile unsigned int bank2_config;
  volatile unsigned int bank2_read;
  volatile unsigned int bank2_write;
  unsigned char pad0[80]; /* pad to 0x80 */
  volatile unsigned int mc_remap_valid[32];
  volatile unsigned int mc_remap_size[32];
  volatile unsigned int mc_remap_compare[32];
  volatile unsigned int mc_remap_target[32];
  volatile unsigned int g729_rom;
  volatile unsigned int error_valid;
  volatile unsigned int ahb_error;
  volatile unsigned int apb_error;
  volatile unsigned int perf_config;
  unsigned char pad1[12]; /* pad to 0x2a0 */
  volatile unsigned int perf_counter[4];
  volatile unsigned int cpu_setup_config;
  volatile unsigned int mc_setup_config;
  volatile unsigned int bb_setup_config;
  volatile unsigned int sdio_setup_config;
  volatile unsigned int cpu_setup_circuit[8];
  volatile unsigned int mc_setup_circuit[8];
  volatile unsigned int bb_setup_circuit[8];
  volatile unsigned int sdio_setup_circuit[8];
  volatile unsigned int timing_summary;
  volatile unsigned int timing_int_enable;
  volatile unsigned int mc_error_status;
} mc_reg_t;
#endif /* __ASSEMBLER__ */

#endif /* _MC_H_ */
