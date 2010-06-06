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
 * $brcm_Workfile: bchp_pri_rts_l2_regs_2.h $
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
 * Date:           Generated on         Fri Jul 17 19:42:20 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_pri_rts_l2_regs_2.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:17p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_PRI_RTS_L2_REGS_2_H__
#define BCHP_PRI_RTS_L2_REGS_2_H__

/***************************************************************************
 *PRI_RTS_L2_REGS_2 - PRIMARY_ARB_CLIENTS L2 (Mips) rts interrupt controller 2 registers
 ***************************************************************************/
#define BCHP_PRI_RTS_L2_REGS_2_CPU_STATUS        0x0040c500 /* CPU interrupt Status Register */
#define BCHP_PRI_RTS_L2_REGS_2_CPU_SET           0x0040c504 /* CPU interrupt Set Register */
#define BCHP_PRI_RTS_L2_REGS_2_CPU_CLEAR         0x0040c508 /* CPU interrupt Clear Register */
#define BCHP_PRI_RTS_L2_REGS_2_CPU_MASK_STATUS   0x0040c50c /* CPU interrupt Mask Status Register */
#define BCHP_PRI_RTS_L2_REGS_2_CPU_MASK_SET      0x0040c510 /* CPU interrupt Mask Set Register */
#define BCHP_PRI_RTS_L2_REGS_2_CPU_MASK_CLEAR    0x0040c514 /* CPU interrupt Mask Clear Register */
#define BCHP_PRI_RTS_L2_REGS_2_PCI_STATUS        0x0040c518 /* PCI interrupt Status Register */
#define BCHP_PRI_RTS_L2_REGS_2_PCI_SET           0x0040c51c /* PCI interrupt Set Register */
#define BCHP_PRI_RTS_L2_REGS_2_PCI_CLEAR         0x0040c520 /* PCI interrupt Clear Register */
#define BCHP_PRI_RTS_L2_REGS_2_PCI_MASK_STATUS   0x0040c524 /* PCI interrupt Mask Status Register */
#define BCHP_PRI_RTS_L2_REGS_2_PCI_MASK_SET      0x0040c528 /* PCI interrupt Mask Set Register */
#define BCHP_PRI_RTS_L2_REGS_2_PCI_MASK_CLEAR    0x0040c52c /* PCI interrupt Mask Clear Register */

#endif /* #ifndef BCHP_PRI_RTS_L2_REGS_2_H__ */

/* End of File */
