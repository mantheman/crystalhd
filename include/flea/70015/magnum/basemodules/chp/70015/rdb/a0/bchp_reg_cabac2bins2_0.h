/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: bchp_reg_cabac2bins2_0.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:17p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:59 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_reg_cabac2bins2_0.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:17p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_REG_CABAC2BINS2_0_H__
#define BCHP_REG_CABAC2BINS2_0_H__

/***************************************************************************
 *REG_CABAC2BINS2_0
 ***************************************************************************/
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_ADDR 0x00802588 /* REG_CABAC2BINS_RD_BUFF_ADDR */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL 0x0080258c /* REG_CABAC2BINS_RD_BUFF_CTL */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_START_ADDR 0x00802594 /* REG_CABAC2BINS_RD_BUFF_START_ADDR */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_END_ADDR 0x00802598 /* REG_CABAC2BINS_RD_BUFF_END_ADDR */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_STALL_CNT 0x0080259c /* REG_CABAC2BINS_RD_BUFF_STALL_CNT */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_START_ADDR 0x008025a8 /* REG_CABAC2BINS_WR_BUFF_START_ADDR */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL 0x008025ac /* REG_CABAC2BINS_WR_BUFF_CTL */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_END_ADDR 0x008025b0 /* REG_CABAC2BINS_WR_BUFF_END_ADDR */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_MARK_ADDR 0x008025b4 /* REG_CABAC2BINS_WR_BUFF_MARK_ADDR */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_STALL_CNT 0x008025b8 /* REG_CABAC2BINS_WR_BUFF_STALL_CNT */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_ADDR 0x008025bc /* REG_CABAC2BINS_WR_BUFF_ADDR */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_ID 0x008025c0 /* REG_CABAC2BINS_CHANNEL_ID */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_NOT_IDLE_CYCLES 0x00802620 /* REG_CABAC2BINS_NOT_IDLE_CYCLES */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE0 0x00802630 /* REG_CABAC2BINS_STATE0 */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE1 0x00802634 /* REG_CABAC2BINS_STATE1 */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_INIT_TBL_CTL 0x00802640 /* REG_CABAC2BINS_INIT_TBL_CTL */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_COMMAND_ADDR 0x00802710 /* REG_CABAC2BINS_PICTURE_COMMAND_ADDR */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_LITTLE_ENDIAN 0x00802714 /* REG_CABAC2BINS_LITTLE_ENDIAN */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS 0x00802718 /* REG_CABAC2BINS_PICTURE_STATUS */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL 0x0080272c /* REG_CABAC2BINS_CTL */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_END_END_1 0x008027fc /* REG_CABAC2BINS_END_END_1 */

/***************************************************************************
 *REG_CABAC2BINS_CHANNEL_WR_POSITION_%i - REG_CABAC2BINS_CHANNEL_WR_POSITION_0..31
 ***************************************************************************/
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_WR_POSITION_i_ARRAY_BASE 0x00802400
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_WR_POSITION_i_ARRAY_START 0
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_WR_POSITION_i_ARRAY_END 31
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_WR_POSITION_i_ARRAY_ELEMENT_SIZE 32

/***************************************************************************
 *REG_CABAC2BINS_CHANNEL_WR_POSITION_%i - REG_CABAC2BINS_CHANNEL_WR_POSITION_0..31
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CHANNEL_WR_POSITION_i :: Addr [31:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_WR_POSITION_i_Addr_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_WR_POSITION_i_Addr_SHIFT 0


/***************************************************************************
 *REG_CABAC2BINS_RD_BUFF_ADDR - REG_CABAC2BINS_RD_BUFF_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_ADDR :: Addr [31:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_ADDR_Addr_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_ADDR_Addr_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_RD_BUFF_CTL - REG_CABAC2BINS_RD_BUFF_CTL
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_CTL :: reserved0 [31:05] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_reserved0_MASK 0xffffffe0
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_reserved0_SHIFT 5

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_CTL :: At_mark [04:04] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_At_mark_MASK 0x00000010
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_At_mark_SHIFT 4

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_CTL :: Not_Rdy [03:03] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_Not_Rdy_MASK 0x00000008
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_Not_Rdy_SHIFT 3

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_CTL :: Wrap_En [02:02] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_Wrap_En_MASK 0x00000004
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_Wrap_En_SHIFT 2

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_CTL :: Init [01:01] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_Init_MASK 0x00000002
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_Init_SHIFT 1

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_CTL :: Buff_En [00:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_Buff_En_MASK 0x00000001
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_CTL_Buff_En_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_RD_BUFF_START_ADDR - REG_CABAC2BINS_RD_BUFF_START_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_START_ADDR :: Addr [31:07] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_START_ADDR_Addr_MASK 0xffffff80
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_START_ADDR_Addr_SHIFT 7

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_START_ADDR :: reserved0 [06:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_START_ADDR_reserved0_MASK 0x0000007f
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_START_ADDR_reserved0_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_RD_BUFF_END_ADDR - REG_CABAC2BINS_RD_BUFF_END_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_END_ADDR :: Addr [31:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_END_ADDR_Addr_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_END_ADDR_Addr_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_RD_BUFF_STALL_CNT - REG_CABAC2BINS_RD_BUFF_STALL_CNT
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_RD_BUFF_STALL_CNT :: Count [31:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_STALL_CNT_Count_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_RD_BUFF_STALL_CNT_Count_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_WR_BUFF_START_ADDR - REG_CABAC2BINS_WR_BUFF_START_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_START_ADDR :: Addr [31:07] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_START_ADDR_Addr_MASK 0xffffff80
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_START_ADDR_Addr_SHIFT 7

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_START_ADDR :: reserved0 [06:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_START_ADDR_reserved0_MASK 0x0000007f
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_START_ADDR_reserved0_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_WR_BUFF_CTL - REG_CABAC2BINS_WR_BUFF_CTL
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_CTL :: reserved0 [31:05] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_reserved0_MASK 0xffffffe0
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_reserved0_SHIFT 5

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_CTL :: At_mark [04:04] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_At_mark_MASK 0x00000010
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_At_mark_SHIFT 4

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_CTL :: Not_Rdy [03:03] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_Not_Rdy_MASK 0x00000008
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_Not_Rdy_SHIFT 3

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_CTL :: Buff_close [02:02] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_Buff_close_MASK 0x00000004
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_Buff_close_SHIFT 2

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_CTL :: Init [01:01] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_Init_MASK 0x00000002
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_Init_SHIFT 1

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_CTL :: Buff_En [00:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_Buff_En_MASK 0x00000001
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_CTL_Buff_En_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_WR_BUFF_END_ADDR - REG_CABAC2BINS_WR_BUFF_END_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_END_ADDR :: Addr [31:07] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_END_ADDR_Addr_MASK 0xffffff80
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_END_ADDR_Addr_SHIFT 7

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_END_ADDR :: reserved0 [06:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_END_ADDR_reserved0_MASK 0x0000007f
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_END_ADDR_reserved0_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_WR_BUFF_MARK_ADDR - REG_CABAC2BINS_WR_BUFF_MARK_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_MARK_ADDR :: Addr [31:07] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_MARK_ADDR_Addr_MASK 0xffffff80
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_MARK_ADDR_Addr_SHIFT 7

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_MARK_ADDR :: reserved0 [06:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_MARK_ADDR_reserved0_MASK 0x0000007f
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_MARK_ADDR_reserved0_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_WR_BUFF_STALL_CNT - REG_CABAC2BINS_WR_BUFF_STALL_CNT
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_STALL_CNT :: Count [31:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_STALL_CNT_Count_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_STALL_CNT_Count_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_WR_BUFF_ADDR - REG_CABAC2BINS_WR_BUFF_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_WR_BUFF_ADDR :: Addr [31:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_ADDR_Addr_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_WR_BUFF_ADDR_Addr_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_CHANNEL_ID - REG_CABAC2BINS_CHANNEL_ID
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CHANNEL_ID :: reserved0 [31:05] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_ID_reserved0_MASK 0xffffffe0
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_ID_reserved0_SHIFT 5

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CHANNEL_ID :: ID [04:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_ID_ID_MASK   0x0000001f
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CHANNEL_ID_ID_SHIFT  0

/***************************************************************************
 *REG_CABAC2BINS_NOT_IDLE_CYCLES - REG_CABAC2BINS_NOT_IDLE_CYCLES
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_NOT_IDLE_CYCLES :: Cycle_Count [31:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_NOT_IDLE_CYCLES_Cycle_Count_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_NOT_IDLE_CYCLES_Cycle_Count_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_STATE0 - REG_CABAC2BINS_STATE0
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_STATE0 :: reserved0 [31:10] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE0_reserved0_MASK 0xfffffc00
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE0_reserved0_SHIFT 10

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_STATE0 :: State [09:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE0_State_MASK    0x000003ff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE0_State_SHIFT   0

/***************************************************************************
 *REG_CABAC2BINS_STATE1 - REG_CABAC2BINS_STATE1
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_STATE1 :: reserved0 [31:10] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE1_reserved0_MASK 0xfffffc00
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE1_reserved0_SHIFT 10

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_STATE1 :: State [09:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE1_State_MASK    0x000003ff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_STATE1_State_SHIFT   0

/***************************************************************************
 *REG_CABAC2BINS_INIT_TBL_CTL - REG_CABAC2BINS_INIT_TBL_CTL
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_INIT_TBL_CTL :: reserved0 [31:13] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_INIT_TBL_CTL_reserved0_MASK 0xffffe000
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_INIT_TBL_CTL_reserved0_SHIFT 13

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_INIT_TBL_CTL :: Enable [12:12] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_INIT_TBL_CTL_Enable_MASK 0x00001000
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_INIT_TBL_CTL_Enable_SHIFT 12

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_INIT_TBL_CTL :: reserved1 [11:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_INIT_TBL_CTL_reserved1_MASK 0x00000fff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_INIT_TBL_CTL_reserved1_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_PICTURE_COMMAND_ADDR - REG_CABAC2BINS_PICTURE_COMMAND_ADDR
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_PICTURE_COMMAND_ADDR :: Addr [31:02] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_COMMAND_ADDR_Addr_MASK 0xfffffffc
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_COMMAND_ADDR_Addr_SHIFT 2

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_PICTURE_COMMAND_ADDR :: reserved0 [01:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_COMMAND_ADDR_reserved0_MASK 0x00000003
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_COMMAND_ADDR_reserved0_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_LITTLE_ENDIAN - REG_CABAC2BINS_LITTLE_ENDIAN
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_LITTLE_ENDIAN :: reserved0 [31:01] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_LITTLE_ENDIAN_reserved0_MASK 0xfffffffe
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_LITTLE_ENDIAN_reserved0_SHIFT 1

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_LITTLE_ENDIAN :: Little_Endian [00:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_LITTLE_ENDIAN_Little_Endian_MASK 0x00000001
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_LITTLE_ENDIAN_Little_Endian_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_PICTURE_STATUS - REG_CABAC2BINS_PICTURE_STATUS
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_PICTURE_STATUS :: reserved0 [31:04] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS_reserved0_MASK 0xfffffff0
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS_reserved0_SHIFT 4

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_PICTURE_STATUS :: Picture_Cmd_Count [03:02] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS_Picture_Cmd_Count_MASK 0x0000000c
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS_Picture_Cmd_Count_SHIFT 2

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_PICTURE_STATUS :: Full [01:01] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS_Full_MASK 0x00000002
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS_Full_SHIFT 1

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_PICTURE_STATUS :: Busy [00:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS_Busy_MASK 0x00000001
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_PICTURE_STATUS_Busy_SHIFT 0

/***************************************************************************
 *REG_CABAC2BINS_CTL - REG_CABAC2BINS_CTL
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: reserved0 [31:12] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_reserved0_MASK   0xfffff000
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_reserved0_SHIFT  12

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: Int [11:11] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_Int_MASK         0x00000800
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_Int_SHIFT        11

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: Active [10:10] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_Active_MASK      0x00000400
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_Active_SHIFT     10

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: WrNR [09:09] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_WrNR_MASK        0x00000200
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_WrNR_SHIFT       9

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: RdNR [08:08] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_RdNR_MASK        0x00000100
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_RdNR_SHIFT       8

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: WrMk [07:07] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_WrMk_MASK        0x00000080
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_WrMk_SHIFT       7

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: RdMk [06:06] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_RdMk_MASK        0x00000040
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_RdMk_SHIFT       6

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: reserved1 [05:05] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_reserved1_MASK   0x00000020
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_reserved1_SHIFT  5

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: SdQ [04:04] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_SdQ_MASK         0x00000010
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_SdQ_SHIFT        4

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: SdWr [03:03] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_SdWr_MASK        0x00000008
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_SdWr_SHIFT       3

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: SdAct [02:02] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_SdAct_MASK       0x00000004
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_SdAct_SHIFT      2

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: SdReq [01:01] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_SdReq_MASK       0x00000002
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_SdReq_SHIFT      1

/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_CTL :: Reset [00:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_Reset_MASK       0x00000001
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_CTL_Reset_SHIFT      0

/***************************************************************************
 *REG_CABAC2BINS_END_END_1 - REG_CABAC2BINS_END_END_1
 ***************************************************************************/
/* REG_CABAC2BINS2_0 :: REG_CABAC2BINS_END_END_1 :: reserved0 [31:00] */
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_END_END_1_reserved0_MASK 0xffffffff
#define BCHP_REG_CABAC2BINS2_0_REG_CABAC2BINS_END_END_1_reserved0_SHIFT 0

#endif /* #ifndef BCHP_REG_CABAC2BINS2_0_H__ */

/* End of File */
