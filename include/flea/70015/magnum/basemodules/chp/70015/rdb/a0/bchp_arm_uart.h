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
 * $brcm_Workfile: bchp_arm_uart.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:28p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:25 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_arm_uart.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:28p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_ARM_UART_H__
#define BCHP_ARM_UART_H__

/***************************************************************************
 *ARM_UART - ARM UART
 ***************************************************************************/
#define BCHP_ARM_UART_DATA                       0x000f3000 /* Transmit/receive data */
#define BCHP_ARM_UART_CTL                        0x000f3004 /* Control register and Clock Divider */
#define BCHP_ARM_UART_STATUS                     0x000f3008 /* Status register */

/***************************************************************************
 *DATA - Transmit/receive data
 ***************************************************************************/
/* ARM_UART :: DATA :: reserved0 [31:09] */
#define BCHP_ARM_UART_DATA_reserved0_MASK                          0xfffffe00
#define BCHP_ARM_UART_DATA_reserved0_SHIFT                         9

/* ARM_UART :: DATA :: PErr [08:08] */
#define BCHP_ARM_UART_DATA_PErr_MASK                               0x00000100
#define BCHP_ARM_UART_DATA_PErr_SHIFT                              8

/* ARM_UART :: DATA :: Data [07:00] */
#define BCHP_ARM_UART_DATA_Data_MASK                               0x000000ff
#define BCHP_ARM_UART_DATA_Data_SHIFT                              0

/***************************************************************************
 *CTL - Control register and Clock Divider
 ***************************************************************************/
/* ARM_UART :: CTL :: ClkDiv [31:16] */
#define BCHP_ARM_UART_CTL_ClkDiv_MASK                              0xffff0000
#define BCHP_ARM_UART_CTL_ClkDiv_SHIFT                             16

/* ARM_UART :: CTL :: reserved0 [15:05] */
#define BCHP_ARM_UART_CTL_reserved0_MASK                           0x0000ffe0
#define BCHP_ARM_UART_CTL_reserved0_SHIFT                          5

/* ARM_UART :: CTL :: RcvIntEna [04:04] */
#define BCHP_ARM_UART_CTL_RcvIntEna_MASK                           0x00000010
#define BCHP_ARM_UART_CTL_RcvIntEna_SHIFT                          4

/* ARM_UART :: CTL :: XmitIntEna [03:03] */
#define BCHP_ARM_UART_CTL_XmitIntEna_MASK                          0x00000008
#define BCHP_ARM_UART_CTL_XmitIntEna_SHIFT                         3

/* ARM_UART :: CTL :: EvenParity [02:02] */
#define BCHP_ARM_UART_CTL_EvenParity_MASK                          0x00000004
#define BCHP_ARM_UART_CTL_EvenParity_SHIFT                         2

/* ARM_UART :: CTL :: UseParity [01:01] */
#define BCHP_ARM_UART_CTL_UseParity_MASK                           0x00000002
#define BCHP_ARM_UART_CTL_UseParity_SHIFT                          1

/* ARM_UART :: CTL :: UartEna [00:00] */
#define BCHP_ARM_UART_CTL_UartEna_MASK                             0x00000001
#define BCHP_ARM_UART_CTL_UartEna_SHIFT                            0

/***************************************************************************
 *STATUS - Status register
 ***************************************************************************/
/* ARM_UART :: STATUS :: reserved0 [31:05] */
#define BCHP_ARM_UART_STATUS_reserved0_MASK                        0xffffffe0
#define BCHP_ARM_UART_STATUS_reserved0_SHIFT                       5

/* ARM_UART :: STATUS :: XmitOverflow [04:04] */
#define BCHP_ARM_UART_STATUS_XmitOverflow_MASK                     0x00000010
#define BCHP_ARM_UART_STATUS_XmitOverflow_SHIFT                    4

/* ARM_UART :: STATUS :: XmitActive [03:03] */
#define BCHP_ARM_UART_STATUS_XmitActive_MASK                       0x00000008
#define BCHP_ARM_UART_STATUS_XmitActive_SHIFT                      3

/* ARM_UART :: STATUS :: RcvOverflow [02:02] */
#define BCHP_ARM_UART_STATUS_RcvOverflow_MASK                      0x00000004
#define BCHP_ARM_UART_STATUS_RcvOverflow_SHIFT                     2

/* ARM_UART :: STATUS :: reserved1 [01:01] */
#define BCHP_ARM_UART_STATUS_reserved1_MASK                        0x00000002
#define BCHP_ARM_UART_STATUS_reserved1_SHIFT                       1

/* ARM_UART :: STATUS :: RcvFifoEmpty [00:00] */
#define BCHP_ARM_UART_STATUS_RcvFifoEmpty_MASK                     0x00000001
#define BCHP_ARM_UART_STATUS_RcvFifoEmpty_SHIFT                    0

#endif /* #ifndef BCHP_ARM_UART_H__ */

/* End of File */
