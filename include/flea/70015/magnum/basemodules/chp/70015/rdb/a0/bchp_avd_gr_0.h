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
 * $brcm_Workfile: bchp_avd_gr_0.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 7:56p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:03 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_avd_gr_0.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 7:56p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_AVD_GR_0_H__
#define BCHP_AVD_GR_0_H__

/***************************************************************************
 *AVD_GR_0
 ***************************************************************************/
#define BCHP_AVD_GR_0_REVISION                   0x00900400 /* GR Bridge Revision */
#define BCHP_AVD_GR_0_CTRL                       0x00900404 /* GR Bridge Control Register */
#define BCHP_AVD_GR_0_SW_RESET_0                 0x00900408 /* GR Bridge Software Reset 0 Register */
#define BCHP_AVD_GR_0_SW_RESET_1                 0x0090040c /* GR Bridge Software Reset 1 Register */

/***************************************************************************
 *REVISION - GR Bridge Revision
 ***************************************************************************/
/* AVD_GR_0 :: REVISION :: reserved0 [31:16] */
#define BCHP_AVD_GR_0_REVISION_reserved0_MASK                      0xffff0000
#define BCHP_AVD_GR_0_REVISION_reserved0_SHIFT                     16

/* AVD_GR_0 :: REVISION :: MAJOR [15:08] */
#define BCHP_AVD_GR_0_REVISION_MAJOR_MASK                          0x0000ff00
#define BCHP_AVD_GR_0_REVISION_MAJOR_SHIFT                         8

/* AVD_GR_0 :: REVISION :: MINOR [07:00] */
#define BCHP_AVD_GR_0_REVISION_MINOR_MASK                          0x000000ff
#define BCHP_AVD_GR_0_REVISION_MINOR_SHIFT                         0

/***************************************************************************
 *CTRL - GR Bridge Control Register
 ***************************************************************************/
/* AVD_GR_0 :: CTRL :: reserved0 [31:01] */
#define BCHP_AVD_GR_0_CTRL_reserved0_MASK                          0xfffffffe
#define BCHP_AVD_GR_0_CTRL_reserved0_SHIFT                         1

/* AVD_GR_0 :: CTRL :: gisb_error_intr [00:00] */
#define BCHP_AVD_GR_0_CTRL_gisb_error_intr_MASK                    0x00000001
#define BCHP_AVD_GR_0_CTRL_gisb_error_intr_SHIFT                   0
#define BCHP_AVD_GR_0_CTRL_gisb_error_intr_INTR_DISABLE            0
#define BCHP_AVD_GR_0_CTRL_gisb_error_intr_INTR_ENABLE             1

/***************************************************************************
 *SW_RESET_0 - GR Bridge Software Reset 0 Register
 ***************************************************************************/
/* AVD_GR_0 :: SW_RESET_0 :: reserved0 [31:00] */
#define BCHP_AVD_GR_0_SW_RESET_0_reserved0_MASK                    0xffffffff
#define BCHP_AVD_GR_0_SW_RESET_0_reserved0_SHIFT                   0

/***************************************************************************
 *SW_RESET_1 - GR Bridge Software Reset 1 Register
 ***************************************************************************/
/* AVD_GR_0 :: SW_RESET_1 :: reserved0 [31:00] */
#define BCHP_AVD_GR_0_SW_RESET_1_reserved0_MASK                    0xffffffff
#define BCHP_AVD_GR_0_SW_RESET_1_reserved0_SHIFT                   0

#endif /* #ifndef BCHP_AVD_GR_0_H__ */

/* End of File */
