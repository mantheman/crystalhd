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
 * $brcm_Workfile: bchp_pri_crit_l2_regs_2.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:16p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:09 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_pri_crit_l2_regs_2.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:16p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_PRI_CRIT_L2_REGS_2_H__
#define BCHP_PRI_CRIT_L2_REGS_2_H__

/***************************************************************************
 *PRI_CRIT_L2_REGS_2 - PRIMARY_ARB_CLIENTS L2 (Mips) critical interrupt controller 2 registers
 ***************************************************************************/
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_STATUS       0x0040c440 /* CPU interrupt Status Register */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_SET          0x0040c444 /* CPU interrupt Set Register */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_CLEAR        0x0040c448 /* CPU interrupt Clear Register */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_STATUS  0x0040c44c /* CPU interrupt Mask Status Register */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_SET     0x0040c450 /* CPU interrupt Mask Set Register */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_CLEAR   0x0040c454 /* CPU interrupt Mask Clear Register */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_STATUS       0x0040c458 /* PCI interrupt Status Register */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_SET          0x0040c45c /* PCI interrupt Set Register */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_CLEAR        0x0040c460 /* PCI interrupt Clear Register */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_STATUS  0x0040c464 /* PCI interrupt Mask Status Register */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_SET     0x0040c468 /* PCI interrupt Mask Set Register */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_CLEAR   0x0040c46c /* PCI interrupt Mask Clear Register */

/***************************************************************************
 *CPU_STATUS - CPU interrupt Status Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: CPU_STATUS :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_STATUS_reserved0_MASK          0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_STATUS_reserved0_SHIFT         0

/***************************************************************************
 *CPU_SET - CPU interrupt Set Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: CPU_SET :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_SET_reserved0_MASK             0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_SET_reserved0_SHIFT            0

/***************************************************************************
 *CPU_CLEAR - CPU interrupt Clear Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: CPU_CLEAR :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_CLEAR_reserved0_MASK           0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_CLEAR_reserved0_SHIFT          0

/***************************************************************************
 *CPU_MASK_STATUS - CPU interrupt Mask Status Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: CPU_MASK_STATUS :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_STATUS_reserved0_MASK     0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_STATUS_reserved0_SHIFT    0

/***************************************************************************
 *CPU_MASK_SET - CPU interrupt Mask Set Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: CPU_MASK_SET :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_SET_reserved0_MASK        0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_SET_reserved0_SHIFT       0

/***************************************************************************
 *CPU_MASK_CLEAR - CPU interrupt Mask Clear Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: CPU_MASK_CLEAR :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_CLEAR_reserved0_MASK      0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_CPU_MASK_CLEAR_reserved0_SHIFT     0

/***************************************************************************
 *PCI_STATUS - PCI interrupt Status Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: PCI_STATUS :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_STATUS_reserved0_MASK          0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_STATUS_reserved0_SHIFT         0

/***************************************************************************
 *PCI_SET - PCI interrupt Set Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: PCI_SET :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_SET_reserved0_MASK             0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_SET_reserved0_SHIFT            0

/***************************************************************************
 *PCI_CLEAR - PCI interrupt Clear Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: PCI_CLEAR :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_CLEAR_reserved0_MASK           0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_CLEAR_reserved0_SHIFT          0

/***************************************************************************
 *PCI_MASK_STATUS - PCI interrupt Mask Status Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: PCI_MASK_STATUS :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_STATUS_reserved0_MASK     0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_STATUS_reserved0_SHIFT    0

/***************************************************************************
 *PCI_MASK_SET - PCI interrupt Mask Set Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: PCI_MASK_SET :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_SET_reserved0_MASK        0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_SET_reserved0_SHIFT       0

/***************************************************************************
 *PCI_MASK_CLEAR - PCI interrupt Mask Clear Register
 ***************************************************************************/
/* PRI_CRIT_L2_REGS_2 :: PCI_MASK_CLEAR :: reserved0 [31:00] */
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_CLEAR_reserved0_MASK      0xffffffff
#define BCHP_PRI_CRIT_L2_REGS_2_PCI_MASK_CLEAR_reserved0_SHIFT     0

#endif /* #ifndef BCHP_PRI_CRIT_L2_REGS_2_H__ */

/* End of File */
