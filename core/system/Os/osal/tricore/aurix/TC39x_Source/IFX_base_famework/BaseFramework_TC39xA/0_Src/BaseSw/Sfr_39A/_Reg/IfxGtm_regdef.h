
/**
 * \file IfxGtm_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: tc39x_its_SFR_V1.0.1_1.3_230715.xml dated 28.07.2015
 * Specification: its_V1.0.1_1.3.pdf
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Gtm Gtm
 * \ingroup IfxLld
 *
 * \defgroup IfxLld_Gtm_Bitfields Bitfields
 * \ingroup IfxLld_Gtm
 *
 * \defgroup IfxLld_Gtm_union Union
 * \ingroup IfxLld_Gtm
 *
 * \defgroup IfxLld_Gtm_struct Struct
 * \ingroup IfxLld_Gtm
 *
 */
#ifndef IFXGTM_REGDEF_H
#define IFXGTM_REGDEF_H 1
/******************************************************************************/
#if defined(__TASKING__)
#pragma warning 586
#endif
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_Bitfields
 * \{  */

/** \\brief  ADC Trigger 3Output Select 1 Register */
typedef struct _Ifx_GTM_ADCTRIG4OUT0_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for ADC4 GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for ADC5 GTM connection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Output Selection for ADC6 GTM connection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Output Selection for ADC7 GTM connection (rw) */
} Ifx_GTM_ADCTRIG4OUT0_Bits;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef struct _Ifx_GTM_ADCTRIG4OUT1_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_ADCTRIG4OUT1_Bits;

/** \\brief  GTM AEI Timeout exception address register */
typedef struct _Ifx_GTM_AEI_ADDR_XPT_Bits
{
    Ifx_Strict_32Bit TO_ADDR : 20;            /**< \brief [19:0] AEI timeout address. (r) */
    Ifx_Strict_32Bit TO_W1R0 : 1;             /**< \brief [20:20] AEI timeout Read/Write flag. (r) */
    Ifx_Strict_32Bit reserved_21 : 11;        /**< \brief \internal Reserved */
} Ifx_GTM_AEI_ADDR_XPT_Bits;

/** \\brief  GTM AEI Non zero status register */
typedef struct _Ifx_GTM_AEI_STA_XPT_Bits
{
    Ifx_Strict_32Bit ADDR : 20;               /**< \brief [19:0] AEI exception address. (r) */
    Ifx_Strict_32Bit W1R0 : 1;                /**< \brief [20:20] AEI exception Read/Write flag. (r) */
    Ifx_Strict_32Bit reserved_21 : 11;        /**< \brief \internal Reserved */
} Ifx_GTM_AEI_STA_XPT_Bits;

/** \\brief  AFD 0 FIFO 0 buffer access register */
typedef struct _Ifx_GTM_AFD_CH_BUF_ACC_Bits
{
    Ifx_Strict_32Bit DATA : 29;               /**< \brief [28:0] Read/write data from/to FIFO (rw) */
    Ifx_Strict_32Bit Reserved : 3;            /**< \brief [31:29] reserved (r) */
} Ifx_GTM_AFD_CH_BUF_ACC_Bits;

/** \\brief  ARU 0 dynamic routing control register */
typedef struct _Ifx_GTM_ARU_0_DYN_CTRL_Bits
{
    Ifx_Strict_32Bit DYN_ARU_UPDATE_EN : 1;   /**< \brief [0:0] enable reload of DYN_ROUTE register from ARU itself (rw) */
    Ifx_Strict_32Bit DYN_ROUTE_SWAP : 1;      /**< \brief [1:1] enable swapping DYN_ROUTE_SR with DYN_ROUTE register (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_0_DYN_CTRL_Bits;

/** \\brief  ARU 0 read ID for dynamic routing */
typedef struct _Ifx_GTM_ARU_0_DYN_RDADDR_Bits
{
    Ifx_Strict_32Bit DYN_ARU_RDADDR : 9;      /**< \brief [8:0] ARU read address ID to reload the DYN_ROUTE register (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_0_DYN_RDADDR_Bits;

/** \\brief  ARU 0 higher bits of DYN_ROUTE register */
typedef struct _Ifx_GTM_ARU_0_DYN_ROUTE_HIGH_Bits
{
    Ifx_Strict_32Bit DYN_READ_ID3 : 8;        /**< \brief [7:0] ARU read ID 3 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID4 : 8;        /**< \brief [15:8] ARU read ID 4 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID5 : 8;        /**< \brief [23:16] ARU read ID 5 (rw) */
    Ifx_Strict_32Bit DYN_CLK_WAIT : 4;        /**< \brief [27:24] number of clk cycles for dynamic routing (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_0_DYN_ROUTE_HIGH_Bits;

/** \\brief  ARU 0 lower bits of DYN_ROUTE register */
typedef struct _Ifx_GTM_ARU_0_DYN_ROUTE_LOW_Bits
{
    Ifx_Strict_32Bit DYN_READ_ID0 : 8;        /**< \brief [7:0] ARU read ID 0 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID1 : 8;        /**< \brief [15:8] ARU read ID 2 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID2 : 8;        /**< \brief [23:16] ARU read ID 2 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_0_DYN_ROUTE_LOW_Bits;

/** \\brief  ARU 0 shadow register for ARU_[z]_DYN_ROUTE_HIGH */
typedef struct _Ifx_GTM_ARU_0_DYN_ROUTE_SR_HIGH_Bits
{
    Ifx_Strict_32Bit DYN_READ_ID9 : 8;        /**< \brief [7:0] ARU read ID 9 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID10 : 8;       /**< \brief [15:8] ARU read ID 10 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID11 : 8;       /**< \brief [23:16] ARU read ID 11 (rw) */
    Ifx_Strict_32Bit DYN_CLK_WAIT : 4;        /**< \brief [27:24] number of clk cycles for dynamic routing (rw) */
    Ifx_Strict_32Bit DYN_UPDATE_EN : 1;       /**< \brief [28:28] update enable from shadow register (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_0_DYN_ROUTE_SR_HIGH_Bits;

/** \\brief  ARU 0 shadow register for ARU_[z]_DYN_ROUTE_LOW */
typedef struct _Ifx_GTM_ARU_0_DYN_ROUTE_SR_LOW_Bits
{
    Ifx_Strict_32Bit DYN_READ_ID6 : 8;        /**< \brief [7:0] ARU read ID 6 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID7 : 8;        /**< \brief [15:8] ARU read ID 7 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID8 : 8;        /**< \brief [23:16] ARU read ID 8 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_0_DYN_ROUTE_SR_LOW_Bits;

/** \\brief  ARU 1 dynamic routing control register */
typedef struct _Ifx_GTM_ARU_1_DYN_CTRL_Bits
{
    Ifx_Strict_32Bit DYN_ARU_UPDATE_EN : 1;   /**< \brief [0:0] enable reload of DYN_ROUTE register from ARU itself (rw) */
    Ifx_Strict_32Bit DYN_ROUTE_SWAP : 1;      /**< \brief [1:1] enable swapping DYN_ROUTE_SR with DYN_ROUTE register (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_1_DYN_CTRL_Bits;

/** \\brief  ARU 1 read ID for dynamic routing */
typedef struct _Ifx_GTM_ARU_1_DYN_RDADDR_Bits
{
    Ifx_Strict_32Bit DYN_ARU_RDADDR : 9;      /**< \brief [8:0] ARU read address ID to reload the DYN_ROUTE register (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_1_DYN_RDADDR_Bits;

/** \\brief  ARU 1 higher bits of DYN_ROUTE register */
typedef struct _Ifx_GTM_ARU_1_DYN_ROUTE_HIGH_Bits
{
    Ifx_Strict_32Bit DYN_READ_ID3 : 8;        /**< \brief [7:0] ARU read ID 3 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID4 : 8;        /**< \brief [15:8] ARU read ID 4 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID5 : 8;        /**< \brief [23:16] ARU read ID 5 (rw) */
    Ifx_Strict_32Bit DYN_CLK_WAIT : 4;        /**< \brief [27:24] number of clk cycles for dynamic routing (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_1_DYN_ROUTE_HIGH_Bits;

/** \\brief  ARU 1 lower bits of DYN_ROUTE register */
typedef struct _Ifx_GTM_ARU_1_DYN_ROUTE_LOW_Bits
{
    Ifx_Strict_32Bit DYN_READ_ID0 : 8;        /**< \brief [7:0] ARU read ID 0 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID1 : 8;        /**< \brief [15:8] ARU read ID 2 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID2 : 8;        /**< \brief [23:16] ARU read ID 2 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_1_DYN_ROUTE_LOW_Bits;

/** \\brief  ARU 1 shadow register for ARU_[z]_DYN_ROUTE_HIGH */
typedef struct _Ifx_GTM_ARU_1_DYN_ROUTE_SR_HIGH_Bits
{
    Ifx_Strict_32Bit DYN_READ_ID9 : 8;        /**< \brief [7:0] ARU read ID 9 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID10 : 8;       /**< \brief [15:8] ARU read ID 10 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID11 : 8;       /**< \brief [23:16] ARU read ID 11 (rw) */
    Ifx_Strict_32Bit DYN_CLK_WAIT : 4;        /**< \brief [27:24] number of clk cycles for dynamic routing (rw) */
    Ifx_Strict_32Bit DYN_UPDATE_EN : 1;       /**< \brief [28:28] update enable from shadow register (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_1_DYN_ROUTE_SR_HIGH_Bits;

/** \\brief  ARU 1 shadow register for ARU_[z]_DYN_ROUTE_LOW */
typedef struct _Ifx_GTM_ARU_1_DYN_ROUTE_SR_LOW_Bits
{
    Ifx_Strict_32Bit DYN_READ_ID6 : 8;        /**< \brief [7:0] ARU read ID 6 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID7 : 8;        /**< \brief [15:8] ARU read ID 7 (rw) */
    Ifx_Strict_32Bit DYN_READ_ID8 : 8;        /**< \brief [23:16] ARU read ID 8 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_1_DYN_ROUTE_SR_LOW_Bits;

/** \\brief  ARU access register */
typedef struct _Ifx_GTM_ARU_ARU_ACCESS_Bits
{
    Ifx_Strict_32Bit ADDR : 9;                /**< \brief [8:0] ARU address (rw) */
    Ifx_Strict_32Bit reserved_9 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RREQ : 1;                /**< \brief [12:12] Initiate read request (rw) */
    Ifx_Strict_32Bit WREQ : 1;                /**< \brief [13:13] Initiate write request (rw) */
    Ifx_Strict_32Bit reserved_14 : 18;        /**< \brief \internal Reserved */
} Ifx_GTM_ARU_ARU_ACCESS_Bits;

/** \\brief  ARU caddr counter value */
typedef struct _Ifx_GTM_ARU_CADDR_Bits
{
    Ifx_Strict_32Bit CADDR_0 : 7;             /**< \brief [6:0] value of ARU-0 caddr counter (r) */
    Ifx_Strict_32Bit reserved_7 : 9;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CADDR_1 : 7;             /**< \brief [22:16] value of ARU-1 caddr counter (r) */
    Ifx_Strict_32Bit reserved_23 : 9;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_CADDR_Bits;

/** \\brief  ARU caddr counter end value */
typedef struct _Ifx_GTM_ARU_CADDR_END_Bits
{
    Ifx_Strict_32Bit CADDR_END : 7;           /**< \brief [6:0] set end value of ARU caddr counter (rw) */
    Ifx_Strict_32Bit reserved_7 : 25;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_CADDR_END_Bits;

/** \\brief  ARU enable dynamic routing */
typedef struct _Ifx_GTM_ARU_CTRL_Bits
{
    Ifx_Strict_32Bit ARU_0_DYN_EN : 2;        /**< \brief [1:0] enable dynamic routing for ARU-0 (rw) */
    Ifx_Strict_32Bit ARU_1_DYN_EN : 2;        /**< \brief [3:2] enable dynamic routing for ARU-1 (rw) */
    Ifx_Strict_32Bit ARU_DYN_RING_MODE : 1;   /**< \brief [4:4] enable dynamic routing ring mode (rw) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_CTRL_Bits;

/** \\brief  ARU access register upper data word */
typedef struct _Ifx_GTM_ARU_DATA_H_Bits
{
    Ifx_Strict_32Bit DATA : 29;               /**< \brief [28:0] Upper ARU data word (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_DATA_H_Bits;

/** \\brief  ARU access register lower data word */
typedef struct _Ifx_GTM_ARU_DATA_L_Bits
{
    Ifx_Strict_32Bit DATA : 29;               /**< \brief [28:0] Lower ARU data word (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_DATA_L_Bits;

/** \\brief  ARU debug access channel 0 */
typedef struct _Ifx_GTM_ARU_DBG_ACCESS0_Bits
{
    Ifx_Strict_32Bit ADDR : 9;                /**< \brief [8:0] ARU debugging address (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_DBG_ACCESS0_Bits;

/** \\brief  ARU debug access channel 1 */
typedef struct _Ifx_GTM_ARU_DBG_ACCESS1_Bits
{
    Ifx_Strict_32Bit ADDR : 9;                /**< \brief [8:0] ARU debugging address (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_DBG_ACCESS1_Bits;

/** \\brief  ARU debug access 0 transfer register upper data word */
typedef struct _Ifx_GTM_ARU_DBG_DATA0_H_Bits
{
    Ifx_Strict_32Bit DATA : 29;               /**< \brief [28:0] Upper debug data word (r) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_DBG_DATA0_H_Bits;

/** \\brief  ARU debug access 0 transfer register lower data word */
typedef struct _Ifx_GTM_ARU_DBG_DATA0_L_Bits
{
    Ifx_Strict_32Bit DATA : 29;               /**< \brief [28:0] Lower debug data word (r) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_DBG_DATA0_L_Bits;

/** \\brief  ARU debug access 1 transfer register upper data word */
typedef struct _Ifx_GTM_ARU_DBG_DATA1_H_Bits
{
    Ifx_Strict_32Bit DATA : 29;               /**< \brief [28:0] Upper debug data word (r) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_DBG_DATA1_H_Bits;

/** \\brief  ARU debug access 1 transfer register lower data word */
typedef struct _Ifx_GTM_ARU_DBG_DATA1_L_Bits
{
    Ifx_Strict_32Bit DATA : 29;               /**< \brief [28:0] Lower debug data word (r) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_DBG_DATA1_L_Bits;

/** \\brief  ARU interrupt enable register */
typedef struct _Ifx_GTM_ARU_IRQ_EN_Bits
{
    Ifx_Strict_32Bit NEW_DATA0_IRQ_EN : 1;    /**< \brief [0:0] ARU_NEW_DATA0_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit NEW_DATA1_IRQ_EN : 1;    /**< \brief [1:1] ARU_NEW_DATA1_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit ACC_ACK_IRQ_EN : 1;      /**< \brief [2:2] ACC_ACK_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_3 : 29;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_IRQ_EN_Bits;

/** \\brief  ARU force interrupt register */
typedef struct _Ifx_GTM_ARU_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_NEW_DATA0 : 1;       /**< \brief [0:0] Trigger new data 0 interrupt (rw) */
    Ifx_Strict_32Bit TRG_NEW_DATA1 : 1;       /**< \brief [1:1] 1: Trigger new data 1 interrupt (rw) */
    Ifx_Strict_32Bit TRG_ACC_ACK : 1;         /**< \brief [2:2] Trigger ACC_ACK interrupt (rw) */
    Ifx_Strict_32Bit reserved_3 : 29;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_IRQ_FORCINT_Bits;

/** \\brief  ARU interrupt mode register */
typedef struct _Ifx_GTM_ARU_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_IRQ_MODE_Bits;

/** \\brief  ARU interrupt notification register */
typedef struct _Ifx_GTM_ARU_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit NEW_DATA0 : 1;           /**< \brief [0:0] Data was transferred for addr ARU_DBG_ACCESS0 (rw) */
    Ifx_Strict_32Bit NEW_DATA1 : 1;           /**< \brief [1:1] Data was transferred for addr ARU_DBG_ACCESS1 (rw) */
    Ifx_Strict_32Bit ACC_ACK : 1;             /**< \brief [2:2] AEI to ARU access finished, on read access data are valid (rw) */
    Ifx_Strict_32Bit reserved_3 : 29;         /**< \brief \internal Reserved */
} Ifx_GTM_ARU_IRQ_NOTIFY_Bits;

/** \\brief  GTM ATOM 10 Output Level */
typedef struct _Ifx_GTM_ATOM10_OUT_Bits
{
    Ifx_Strict_32Bit ATOM_I_OUT : 8;          /**< \brief [7:0] Output level snapshot of ATOM[i]_OUT all channels (i=0,2,4,6,8,10) (r) */
    Ifx_Strict_32Bit ATOM_I_OUT_N : 8;        /**< \brief [15:8] Output level snapshot of ATOM[i]_OUT_N all channels (i=0,2,4,6,8,10) (r) */
    Ifx_Strict_32Bit ATOM_IP1_OUT : 8;        /**< \brief [23:16] Output level snapshot of ATOM[i+1]_OUT all channels (i=0,2,4,6,8,10) (r) */
    Ifx_Strict_32Bit ATOM_IP1_OUT_N : 8;      /**< \brief [31:24] Output level snapshot of ATOM[i+1]_OUT_N all channels (i=0,2,4,6,8,10) (r) */
} Ifx_GTM_ATOM10_OUT_Bits;

/** \\brief  ATOM AGC action time base register */
typedef struct _Ifx_GTM_ATOM_AGC_ACT_TB_Bits
{
    Ifx_Strict_32Bit ACT_TB : 24;             /**< \brief [23:0] Time base value (rw) */
    Ifx_Strict_32Bit TB_TRIG : 1;             /**< \brief [24:24] Set trigger request (rw) */
    Ifx_Strict_32Bit TBU_SEL : 2;             /**< \brief [26:25] Selection of time base used for comparison (rw) */
    Ifx_Strict_32Bit reserved_27 : 5;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_AGC_ACT_TB_Bits;

/** \\brief  ATOM AGC enable/disable control register */
typedef struct _Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits
{
    Ifx_Strict_32Bit ENDIS_CTRL0 : 2;         /**< \brief [1:0] ATOM channel 0 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL1 : 2;         /**< \brief [3:2] ATOM channel 1 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL2 : 2;         /**< \brief [5:4] ATOM channel 2 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL3 : 2;         /**< \brief [7:6] ATOM channel 3 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL4 : 2;         /**< \brief [9:8] ATOM channel 4 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL5 : 2;         /**< \brief [11:10] ATOM channel 5 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL6 : 2;         /**< \brief [13:12] ATOM channel 6 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL7 : 2;         /**< \brief [15:14] ATOM channel 7 enable/disable update value (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits;

/** \\brief  ATOM AGC enable/disable status register */
typedef struct _Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits
{
    Ifx_Strict_32Bit ENDIS_CTRL0 : 2;         /**< \brief [1:0] ATOM channel 0 enable/disable (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL1 : 2;         /**< \brief [3:2] ATOM channel 1 enable/disable (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL2 : 2;         /**< \brief [5:4] ATOM channel 2 enable/disable (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL3 : 2;         /**< \brief [7:6] ATOM channel 3 enable/disable (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL4 : 2;         /**< \brief [9:8] ATOM channel 4 enable/disable (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL5 : 2;         /**< \brief [11:10] ATOM channel 5 enable/disable (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL6 : 2;         /**< \brief [13:12] ATOM channel 6 enable/disable (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL7 : 2;         /**< \brief [15:14] ATOM channel 7 enable/disable (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits;

/** \\brief  ATOM AGC force update control register */
typedef struct _Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits
{
    Ifx_Strict_32Bit FUPD_CTRL0 : 2;          /**< \brief [1:0] Force update of ATOM channel 0 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL1 : 2;          /**< \brief [3:2] Force update of ATOM channel 1 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL2 : 2;          /**< \brief [5:4] Force update of ATOM channel 2 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL3 : 2;          /**< \brief [7:6] Force update of ATOM channel 3 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL4 : 2;          /**< \brief [9:8] Force update of ATOM channel 4 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL5 : 2;          /**< \brief [11:10] Force update of ATOM channel 5 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL6 : 2;          /**< \brief [13:12] Force update of ATOM channel 6 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL7 : 2;          /**< \brief [15:14] Force update of ATOM channel 7 operation registers (rw) */
    Ifx_Strict_32Bit RSTCN0_CH0 : 2;          /**< \brief [17:16] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH1 : 2;          /**< \brief [19:18] Reset CN0 of channel 1 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH2 : 2;          /**< \brief [21:20] Reset CN0 of channel 2 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH3 : 2;          /**< \brief [23:22] Reset CN0 of channel 3 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH4 : 2;          /**< \brief [25:24] Reset CN0 of channel 4 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH5 : 2;          /**< \brief [27:26] Reset CN0 of channel 5 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH6 : 2;          /**< \brief [29:28] Reset CN0 of channel 6 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH7 : 2;          /**< \brief [31:30] Reset CN0 of channel 7 on force update event (rw) */
} Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits;

/** \\brief  ATOM AGC global control register */
typedef struct _Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits
{
    Ifx_Strict_32Bit HOST_TRIG : 1;           /**< \brief [0:0] Trigger request signal (see AGC) to update the register ENDIS_STAT and OUTEN_StTAT (w) */
    Ifx_Strict_32Bit reserved_1 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RST_CH00 : 1;            /**< \brief [8:8] Software reset of channel 0 - RST_CH0 (w) */
    Ifx_Strict_32Bit RST_CH01 : 1;            /**< \brief [9:9] Software reset of channel 1 - RST_CH0 (w) */
    Ifx_Strict_32Bit RST_CH02 : 1;            /**< \brief [10:10] Software reset of channel 2 - RST_CH0 (w) */
    Ifx_Strict_32Bit RST_CH03 : 1;            /**< \brief [11:11] Software reset of channel 3 - RST_CH0 (w) */
    Ifx_Strict_32Bit RST_CH04 : 1;            /**< \brief [12:12] Software reset of channel 4 - RST_CH0 (w) */
    Ifx_Strict_32Bit RST_CH05 : 1;            /**< \brief [13:13] Software reset of channel 5 - RST_CH0 (w) */
    Ifx_Strict_32Bit RST_CH06 : 1;            /**< \brief [14:14] Software reset of channel 6 - RST_CH0 (w) */
    Ifx_Strict_32Bit RST_CH07 : 1;            /**< \brief [15:15] Software reset of channel 7 - RST_CH0 (w) */
    Ifx_Strict_32Bit UPEN_CTRL0 : 2;          /**< \brief [17:16] ATOM channel 0 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR (rw) */
    Ifx_Strict_32Bit UPEN_CTRL1 : 2;          /**< \brief [19:18] ATOM channel 1 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR (rw) */
    Ifx_Strict_32Bit UPEN_CTRL2 : 2;          /**< \brief [21:20] ATOM channel 2 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR (rw) */
    Ifx_Strict_32Bit UPEN_CTRL3 : 2;          /**< \brief [23:22] ATOM channel 3 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR (rw) */
    Ifx_Strict_32Bit UPEN_CTRL4 : 2;          /**< \brief [25:24] ATOM channel 4 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR (rw) */
    Ifx_Strict_32Bit UPEN_CTRL5 : 2;          /**< \brief [27:26] ATOM channel 5 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR (rw) */
    Ifx_Strict_32Bit UPEN_CTRL6 : 2;          /**< \brief [29:28] ATOM channel 6 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR (rw) */
    Ifx_Strict_32Bit UPEN_CTRL7 : 2;          /**< \brief [31:30] ATOM channel 7 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR (rw) */
} Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits;

/** \\brief  ATOM AGC internal trigger control register */
typedef struct _Ifx_GTM_ATOM_AGC_INT_TRIG_Bits
{
    Ifx_Strict_32Bit INT_TRIG0 : 2;           /**< \brief [1:0] Select input signal TRIG_0 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG1 : 2;           /**< \brief [3:2] Select input signal TRIG_1 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG2 : 2;           /**< \brief [5:4] Select input signal TRIG_2 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG3 : 2;           /**< \brief [7:6] Select input signal TRIG_3 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG4 : 2;           /**< \brief [9:8] Select input signal TRIG_4 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG5 : 2;           /**< \brief [11:10] Select input signal TRIG_5 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG6 : 2;           /**< \brief [13:12] Select input signal TRIG_6 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG7 : 2;           /**< \brief [15:14] Select input signal TRIG_7 as a trigger source (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_AGC_INT_TRIG_Bits;

/** \\brief  ATOM AGC output enable control register */
typedef struct _Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits
{
    Ifx_Strict_32Bit OUTEN_CTRL0 : 2;         /**< \brief [1:0] Output ATOM_OUT0 enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL1 : 2;         /**< \brief [3:2] Output ATOM_OUT1 enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL2 : 2;         /**< \brief [5:4] Output ATOM_OUT2 enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL3 : 2;         /**< \brief [7:6] Output ATOM_OUT3 enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL4 : 2;         /**< \brief [9:8] Output ATOM_OUT4 enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL5 : 2;         /**< \brief [11:10] Output ATOM_OUT5 enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL6 : 2;         /**< \brief [13:12] Output ATOM_OUT6 enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL7 : 2;         /**< \brief [15:14] Output ATOM_OUT7 enable/disable update value (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits;

/** \\brief  ATOM AGC output enable status register */
typedef struct _Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits
{
    Ifx_Strict_32Bit OUTEN_STAT0 : 2;         /**< \brief [1:0] Control/status of output ATOM_OUT0 (rw) */
    Ifx_Strict_32Bit OUTEN_STAT1 : 2;         /**< \brief [3:2] Control/status of output ATOM_OUT1 (rw) */
    Ifx_Strict_32Bit OUTEN_STAT2 : 2;         /**< \brief [5:4] Control/status of output ATOM_OUT2 (rw) */
    Ifx_Strict_32Bit OUTEN_STAT3 : 2;         /**< \brief [7:6] Control/status of output ATOM_OUT3 (rw) */
    Ifx_Strict_32Bit OUTEN_STAT4 : 2;         /**< \brief [9:8] Control/status of output ATOM_OUT4 (rw) */
    Ifx_Strict_32Bit OUTEN_STAT5 : 2;         /**< \brief [11:10] Control/status of output ATOM_OUT5 (rw) */
    Ifx_Strict_32Bit OUTEN_STAT6 : 2;         /**< \brief [13:12] Control/status of output ATOM_OUT6 (rw) */
    Ifx_Strict_32Bit OUTEN_STAT7 : 2;         /**< \brief [15:14] Control/status of output ATOM_OUT7 (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits;

/** \\brief  ATOM channel 0 CCU0 compare register */
typedef struct _Ifx_GTM_ATOM_CH_CM0_Bits
{
    Ifx_Strict_32Bit CM0 : 24;                /**< \brief [23:0] ATOM CCU0 compare register (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_CM0_Bits;

/** \\brief  ATOM channel 0 CCU1 compare register */
typedef struct _Ifx_GTM_ATOM_CH_CM1_Bits
{
    Ifx_Strict_32Bit CM1 : 24;                /**< \brief [23:0] ATOM CCU1 compare register (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_CM1_Bits;

/** \\brief  ATOM channel 0 CCU0 counter register */
typedef struct _Ifx_GTM_ATOM_CH_CN0_Bits
{
    Ifx_Strict_32Bit CN0 : 24;                /**< \brief [23:0] ATOM CCU0 counter register (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_CN0_Bits;

/** \\brief  ATOM Channel Control Register in SOMI Mode */
typedef struct _Ifx_GTM_ATOM_CH_CTRL_Bits
{
    Ifx_Strict_32Bit MODE : 2;           /**< \brief [1:0] ATOM channel mode select. (rw) */
    Ifx_Strict_32Bit TB12_SEL : 1;       /**< \brief [2:2] Select time base value TBU_TS1 or TBU_TS2. (rw) */
    Ifx_Strict_32Bit ARU_EN : 1;         /**< \brief [3:3] ARU Input stream enable (rw) */
    Ifx_Strict_32Bit ACB : 5;            /**< \brief [8:4] ATOM Mode control bits (rw) */
    Ifx_Strict_32Bit CMP_CTRL : 1;       /**< \brief [9:9] CCUx compare strategy select (rw) */
    Ifx_Strict_32Bit EUPM : 1;           /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SL : 1;             /**< \brief [11:11] Initial signal level after channel is enabled (rw) */
    Ifx_Strict_32Bit CLK_SRC_SR : 3;     /**< \brief [14:12] actual CMU clock source (SOMS)/ shadow register for CMU clock source (SOMP) (rw) */
    Ifx_Strict_32Bit ECLK_SRC : 1;       /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WR_REQ : 1;         /**< \brief [16:16] CPU Write request bit for late compare register update (rw) */
    Ifx_Strict_32Bit TRIG_PULSE : 1;     /**< \brief \internal Reserved */
    Ifx_Strict_32Bit UDMODE : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RST_CCU0 : 1;       /**< \brief [20:20] Reset source of CCU0 (rw) */
    Ifx_Strict_32Bit OSM_TRIG : 1;       /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXT_TRIG : 1;       /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXT_TRIGOUT : 1;    /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TRIGOUT : 1;        /**< \brief [24:24] Trigger output selection (output signal TRIG_CHx) of module ATOM_CHx. (rw) */
    Ifx_Strict_32Bit SLA : 1;            /**< \brief [25:25] Serve last ARU communication strategy (rw) */
    Ifx_Strict_32Bit OSM : 1;            /**< \brief [26:26] One-shot mode (rw) */
    Ifx_Strict_32Bit ABM : 1;            /**< \brief [27:27] ARU blocking mode (rw) */
    Ifx_Strict_32Bit reserved_28 : 1;    /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXT_FUPD : 1;       /**< \brief [27:27] ARU blocking mode (rw) */
    Ifx_Strict_32Bit SOMB : 1;           /**< \brief [27:27] ARU blocking mode (rw) */
    Ifx_Strict_32Bit FREEZE : 1;         /**< \brief [31:31] FREEZE (rw) */
} Ifx_GTM_ATOM_CH_CTRL_Bits;

/** \\brief  ATOM channel 0 interrupt enable register */
typedef struct _Ifx_GTM_ATOM_CH_IRQ_EN_Bits
{
    Ifx_Strict_32Bit CCU0TC_IRQ_EN : 1;       /**< \brief [0:0] ATOM_CCU0TC_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit CCU1TC_IRQ_EN : 1;       /**< \brief [1:1] ATOM_CCU1TC_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_IRQ_EN_Bits;

/** \\brief  ATOM channel 0 software interrupt generation */
typedef struct _Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_CCU0TC : 1;          /**< \brief [0:0] Trigger ATOM_CCU0TC_IRQ interrupt by software (rw) */
    Ifx_Strict_32Bit TRG_CCU1TC : 1;          /**< \brief [1:1] Trigger ATOM_CCU1TC_IRQ interrupt by software (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits;

/** \\brief  ATOM channel 0 interrupt mode configuration register */
typedef struct _Ifx_GTM_ATOM_CH_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_IRQ_MODE_Bits;

/** \\brief  ATOM channel 0 interrupt notification register */
typedef struct _Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit CCU0TC : 1;              /**< \brief [0:0] CCU0 Trigger condition interrupt for channel x (rw) */
    Ifx_Strict_32Bit CCU1TC : 1;              /**< \brief [1:1] CCU1TC: CCU1 Trigger condition interrupt for channel x. (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits;

/** \\brief  ATOM channel 0 ARU read address register */
typedef struct _Ifx_GTM_ATOM_CH_RDADDR_Bits
{
    Ifx_Strict_32Bit RDADDR0 : 9;             /**< \brief [8:0] ARU Read address 0 (rw) */
    Ifx_Strict_32Bit reserved_9 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RDADDR1 : 9;             /**< \brief [24:16] ARU Read address 1 (rw) */
    Ifx_Strict_32Bit reserved_25 : 7;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_RDADDR_Bits;

/** \\brief  ATOM Channel Control Register in SOMI Mode */
typedef struct _Ifx_GTM_ATOM_CH_SOMI_Bits
{
    Ifx_Strict_32Bit MODE : 2;                /**< \brief [1:0] ATOM channel mode select. (rw) */
    Ifx_Strict_32Bit reserved_2 : 1;          /**< \brief [2:2] Not used (rw) */
    Ifx_Strict_32Bit ARU_EN : 1;              /**< \brief [3:3] ARU Input stream enable (rw) */
    Ifx_Strict_32Bit ACB0 : 1;                /**< \brief [4:4] ACB bit 0 (rw) */
    Ifx_Strict_32Bit reserved_5 : 6;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SL : 1;                  /**< \brief [11:11] Initial signal level after channel is enabled (rw) */
    Ifx_Strict_32Bit reserved_12 : 19;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FREEZE : 1;              /**< \brief [31:31] FREEZE (rw) */
} Ifx_GTM_ATOM_CH_SOMI_Bits;

/** \brief  ATOM Channel Control in SOMC mode Register */
typedef struct _Ifx_GTM_ATOM_CH_SOMC_Bits
{
    Ifx_Strict_32Bit MODE : 2;                /**< \brief [1:0] ATOM channel mode select (rw) */
    Ifx_Strict_32Bit TB12_SEL : 1;            /**< \brief [2:2] Select time base value TBU_TS1 or TBU_TS2. (rw) */
    Ifx_Strict_32Bit ARU_EN : 1;              /**< \brief [3:3] ARU Input stream enable (rw) */
    Ifx_Strict_32Bit ACB10 : 2;               /**< \brief [5:4] Signal level control bits (rw) */
    Ifx_Strict_32Bit ACB42 : 3;               /**< \brief [8:6] ATOM control bits ACB(4), ACB(3), ACB(2) (rw) */
    Ifx_Strict_32Bit CMP_CTRL : 1;            /**< \brief [9:9] CCUx compare strategy select (rw) */
    Ifx_Strict_32Bit EUPM : 1;                /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SL : 1;                  /**< \brief [11:11] Initial signal level after channel enable (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WR_REQ : 1;              /**< \brief [16:16] CPU write request bit (rw) */
    Ifx_Strict_32Bit reserved_17 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXT_TRIGOUT : 1;         /**< \brief [23:23] External Trigger output selection (output signal TRIG_CHx) of module ATOM_CHx (rw) */
    Ifx_Strict_32Bit TRIGOUT : 1;             /**< \brief [24:24] Trigger output selection (output signal TRIG_CHx) of module ATOM_CHx (rw) */
    Ifx_Strict_32Bit SLA : 1;                 /**< \brief [25:25] Serve last ARU communication strategy (rw) */
    Ifx_Strict_32Bit reserved_26 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ABM : 1;                 /**< \brief [27:27] ARU blocking mode (rw) */
    Ifx_Strict_32Bit reserved_28 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FREEZE : 1;              /**< \brief [31:31] FREEZE (rw) */
} Ifx_GTM_ATOM_CH_SOMC_Bits;

/** \brief  ATOM Channel Control in SOMP mode Register */
typedef struct _Ifx_GTM_ATOM_CH_SOMP_Bits
{
    Ifx_Strict_32Bit MODE : 2;                /**< \brief [1:0] ATOM channel mode select (rw) */
    Ifx_Strict_32Bit reserved_2 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ARU_EN : 1;              /**< \brief [3:3] ARU Input stream enable (rw) */
    Ifx_Strict_32Bit ADL : 2;                 /**< \brief [5:4] ARU data select for SOMP (r) */
    Ifx_Strict_32Bit BITREV : 1;              /**< \brief [6:6] Bit-reversing of output of counter register CN0 (rw) */
    Ifx_Strict_32Bit SR0_TRIG : 1;            /**< \brief [7:7] SR0 is used to generate a trigger on output ATOM[i]_CH[x]_OUT_T if equal to CN0 (rw) */
    Ifx_Strict_32Bit reserved_8 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SL : 1;                  /**< \brief [11:11] Signal level for pulse of PWM (rw) */
    Ifx_Strict_32Bit CLK_SRC_SR : 3;          /**< \brief [14:12] Shadow register for CMU clock source register CLK_SRC (rw) */
    Ifx_Strict_32Bit ECLK_SRC : 1;            /**< \brief [15:15] Extend CLK_SRC (rw) */
    Ifx_Strict_32Bit reserved_16 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TRIG_PULSE : 1;          /**< \brief [17:17] Trigger output pulse length of one SYS_CLK period */
    Ifx_Strict_32Bit UDMODE : 2;              /**< \brief [19:18] Up/down counter mode (rw) */
    Ifx_Strict_32Bit RST_CCU0 : 1;            /**< \brief [20:20] Reset source of CCU0 (rw) */
    Ifx_Strict_32Bit OSM_TRIG : 1;            /**< \brief [21:21] Enable trigger of one-shot pulse by trigger signal OSM_TRIG (rw) */
    Ifx_Strict_32Bit EXT_TRIG : 1;            /**< \brief [22:22] Select TIM_EXT_CAPTURE(x) as trigger signal (rw) */
    Ifx_Strict_32Bit EXT_TRIGOUT : 1;         /**< \brief [23:23] Select TIM_EXT_CAPTURE(x) as potential output signal TRIG_[x] (rw) */
    Ifx_Strict_32Bit TRIGOUT : 1;             /**< \brief [24:24] Trigger output selection (output signal TRIG_CHx) of module ATOM_CHx. (rw) */
    Ifx_Strict_32Bit reserved_25 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OSM : 1;                 /**< \brief [26:26] One-shot mode (rw) */
    Ifx_Strict_32Bit reserved_27 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXT_FUPD : 1;            /**< \brief [29:29] External forced update (rw) */
    Ifx_Strict_32Bit reserved_30 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FREEZE : 1;              /**< \brief [31:31] FREEZE (rw) */
} Ifx_GTM_ATOM_CH_SOMP_Bits;

/** \brief  ATOM Channel Control in SOMS mode Register */
typedef struct _Ifx_GTM_ATOM_CH_SOMS_Bits
{
    Ifx_Strict_32Bit MODE : 2;                /**< \brief [1:0] ATOM channel mode select (rw) */
    Ifx_Strict_32Bit reserved_2 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ARU_EN : 1;              /**< \brief [3:3] ARU Input stream enable (rw) */
    Ifx_Strict_32Bit ACB0 : 1;                /**< \brief [4:4] Shift direction for CM1 register (rw) */
    Ifx_Strict_32Bit reserved_5 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DCO : 1;                 /**< \brief [7:7] Double Shift Output (rw) */
    Ifx_Strict_32Bit reserved_8 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SL : 1;                  /**< \brief [11:11] Defines signal level when channel and output is disable (rw) */
    Ifx_Strict_32Bit CLK_SRC : 3;             /**< \brief [14:12] Shift frequency select for channel (rw) */
    Ifx_Strict_32Bit ECLK_SRC : 1;            /**< \brief [15:15] Extend CLK_SRC (rw) */
    Ifx_Strict_32Bit reserved_16 : 10;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OSM : 1;                 /**< \brief [26:26] One-shot mode (rw) */
    Ifx_Strict_32Bit reserved_27 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXT_FUPD : 1;            /**< \brief [29:29] External forced update (rw) */
    Ifx_Strict_32Bit reserved_30 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FREEZE : 1;              /**< \brief [31:31] FREEZE (rw) */
} Ifx_GTM_ATOM_CH_SOMS_Bits;

/** \brief  ATOM Channel Control in SOMB mode Register */
typedef struct _Ifx_GTM_ATOM_CH_SOMB_Bits
{
    Ifx_Strict_32Bit MODE : 2;                /**< \brief [1:0] ATOM channel mode select (rw) */
    Ifx_Strict_32Bit TB12_SEL : 1;            /**< \brief [2:2] Select time base value TBU_TS1 or TBU_TS2. (rw) */
    Ifx_Strict_32Bit ARU_EN : 1;              /**< \brief [3:3] ARU Input stream enable (rw) */
    Ifx_Strict_32Bit ACB10 : 2;               /**< \brief [5:4] Signal level control bits (rw) */
    Ifx_Strict_32Bit ACB42 : 3;               /**< \brief [8:6] ATOM control bits ACB(4), ACB(3), ACB(2) (rw) */
    Ifx_Strict_32Bit CMP_CTRL : 1;            /**< \brief [9:9] CCUx compare strategy select (rw) */
    Ifx_Strict_32Bit EUPM : 1;                /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SL : 1;                  /**< \brief [11:11] Initial signal level after channel enable (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WR_REQ : 1;              /**< \brief [16:16] CPU write request bit (rw) */
    Ifx_Strict_32Bit reserved_17 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXT_TRIGOUT : 1;         /**< \brief [23:23] External Trigger output selection (output signal TRIG_CHx) of module ATOM_CHx (rw) */
    Ifx_Strict_32Bit TRIGOUT : 1;             /**< \brief [24:24] Trigger output selection (output signal TRIG_CHx) of module ATOM_CHx (rw) */
    Ifx_Strict_32Bit reserved_25 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ABM : 1;                 /**< \brief [27:27] ARU blocking mode (rw) */
    Ifx_Strict_32Bit reserved_28 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SOMB : 1;                /**< \brief [30:30] ARU blocking mode (rw) */
    Ifx_Strict_32Bit FREEZE : 1;              /**< \brief [31:31] FREEZE (rw) */
} Ifx_GTM_ATOM_CH_SOMB_Bits;

/** \\brief  ATOM channel 0 CCU0 compare shadow register */
typedef struct _Ifx_GTM_ATOM_CH_SR0_Bits
{
    Ifx_Strict_32Bit SR0 : 24;                /**< \brief [23:0] ATOM channel x shadow register SR0 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_SR0_Bits;

/** \\brief  ATOM channel 0 CCU1 compare shadow register */
typedef struct _Ifx_GTM_ATOM_CH_SR1_Bits
{
    Ifx_Strict_32Bit SR1 : 24;                /**< \brief [23:0] ATOM channel x shadow register SR0 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_SR1_Bits;

/** \\brief  ATOM channel 0 status register */
typedef struct _Ifx_GTM_ATOM_CH_STAT_Bits
{
    Ifx_Strict_32Bit OL : 1;                  /**< \brief [0:0] Actual output signal level of ATOM_CHx_OUT (r) */
    Ifx_Strict_32Bit reserved_1 : 15;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACBI : 5;                /**< \brief [20:16] ATOM Mode control bits (r) */
    Ifx_Strict_32Bit DV : 1;                  /**< \brief [21:21] Valid ARU Data stored in compare registers (r) */
    Ifx_Strict_32Bit WRF : 1;                 /**< \brief [22:22] Write request of CPU failed for late update (rw) */
    Ifx_Strict_32Bit DR : 1;                  /**< \brief [23:23] ARU data rejected flag (r) */
    Ifx_Strict_32Bit ACBO : 5;                /**< \brief [28:24] ATOM Internal status bits (r) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_ATOM_CH_STAT_Bits;

/** \\brief  GTM ATOM   Output Level */
typedef struct _Ifx_GTM_ATOM_OUT_Bits
{
    Ifx_Strict_32Bit ATOM_I_OUT : 8;          /**< \brief [7:0] Output level snapshot of ATOM[i]_OUT all channels (i=0,2,4,6,8,10) (r) */
    Ifx_Strict_32Bit ATOM_I_OUT_N : 8;        /**< \brief [15:8] Output level snapshot of ATOM[i]_OUT_N all channels (i=0,2,4,6,8,10) (r) */
    Ifx_Strict_32Bit ATOM_IP1_OUT : 8;        /**< \brief [23:16] Output level snapshot of ATOM[i+1]_OUT all channels (i=0,2,4,6,8,10) (r) */
    Ifx_Strict_32Bit ATOM_IP1_OUT_N : 8;      /**< \brief [31:24] Output level snapshot of ATOM[i+1]_OUT_N all channels (i=0,2,4,6,8,10) (r) */
} Ifx_GTM_ATOM_OUT_Bits;

/** \\brief  BRC error interrupt enable register */
typedef struct _Ifx_GTM_BRC_EIRQ_EN_Bits
{
    Ifx_Strict_32Bit DEST_ERR_EIRQ_EN : 1;    /**< \brief [0:0] BRC_DEST_ERR_EIRQ error interrupt enable (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN0 : 1;        /**< \brief [1:1] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN1 : 1;        /**< \brief [2:2] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN2 : 1;        /**< \brief [3:3] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN3 : 1;        /**< \brief [4:4] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN4 : 1;        /**< \brief [5:5] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN5 : 1;        /**< \brief [6:6] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN6 : 1;        /**< \brief [7:7] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN7 : 1;        /**< \brief [8:8] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN8 : 1;        /**< \brief [9:9] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN9 : 1;        /**< \brief [10:10] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN10 : 1;       /**< \brief [11:11] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_EIRQ_EN11 : 1;       /**< \brief [12:12] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit Reserved : 19;           /**< \brief [31:13] Reserved: Reserved (r) */
} Ifx_GTM_BRC_EIRQ_EN_Bits;

/** \\brief  BRC interrupt enable register */
typedef struct _Ifx_GTM_BRC_IRQ_EN_Bits
{
    Ifx_Strict_32Bit DEST_ERR_IRQ_EN : 1;     /**< \brief [0:0] BRC_DEST_ERR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN0 : 1;         /**< \brief [1:1] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN1 : 1;         /**< \brief [2:2] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN2 : 1;         /**< \brief [3:3] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN3 : 1;         /**< \brief [4:4] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN4 : 1;         /**< \brief [5:5] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN5 : 1;         /**< \brief [6:6] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN6 : 1;         /**< \brief [7:7] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN7 : 1;         /**< \brief [8:8] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN8 : 1;         /**< \brief [9:9] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN9 : 1;         /**< \brief [10:10] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN10 : 1;        /**< \brief [11:11] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit DID_IRQ_EN11 : 1;        /**< \brief [12:12] Enable DID interrupt (rw) */
    Ifx_Strict_32Bit Reserved : 19;           /**< \brief [31:13] Reserved: Reserved (r) */
} Ifx_GTM_BRC_IRQ_EN_Bits;

/** \\brief  BRC force interrupt register */
typedef struct _Ifx_GTM_BRC_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_DEST_ERR : 1;        /**< \brief [0:0] Trigger destination error interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID0 : 1;            /**< \brief [1:1] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID1 : 1;            /**< \brief [2:2] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID2 : 1;            /**< \brief [3:3] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID3 : 1;            /**< \brief [4:4] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID4 : 1;            /**< \brief [5:5] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID5 : 1;            /**< \brief [6:6] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID6 : 1;            /**< \brief [7:7] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID7 : 1;            /**< \brief [8:8] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID8 : 1;            /**< \brief [9:9] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID9 : 1;            /**< \brief [10:10] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID10 : 1;           /**< \brief [11:11] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit TRG_DID11 : 1;           /**< \brief [12:12] Trigger DID interrupt (rw) */
    Ifx_Strict_32Bit Reserved : 19;           /**< \brief [31:13] Reserved: Reserved (r) */
} Ifx_GTM_BRC_IRQ_FORCINT_Bits;

/** \\brief  BRC interrupt mode configuration register */
typedef struct _Ifx_GTM_BRC_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_BRC_IRQ_MODE_Bits;

/** \\brief  BRC interrupt notification register */
typedef struct _Ifx_GTM_BRC_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit DEST_ERR : 1;            /**< \brief [0:0] Configuration error interrupt for BRC sub-module (rw) */
    Ifx_Strict_32Bit DID0 : 1;                /**< \brief [1:1] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID1 : 1;                /**< \brief [2:2] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID2 : 1;                /**< \brief [3:3] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID3 : 1;                /**< \brief [4:4] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID4 : 1;                /**< \brief [5:5] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID5 : 1;                /**< \brief [6:6] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID6 : 1;                /**< \brief [7:7] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID7 : 1;                /**< \brief [8:8] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID8 : 1;                /**< \brief [9:9] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID9 : 1;                /**< \brief [10:10] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID10 : 1;               /**< \brief [11:11] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit DID11 : 1;               /**< \brief [12:12] Data inconsistency occurred in MTM mode (rw) */
    Ifx_Strict_32Bit Reserved : 19;           /**< \brief [31:13] Reserved: Reserved (r) */
} Ifx_GTM_BRC_IRQ_NOTIFY_Bits;

/** \\brief  BRC software reset register */
typedef struct _Ifx_GTM_BRC_RST_Bits
{
    Ifx_Strict_32Bit RST : 1;                 /**< \brief [0:0] Software reset (rw) */
    Ifx_Strict_32Bit reserved_1 : 31;         /**< \brief \internal Reserved */
} Ifx_GTM_BRC_RST_Bits;

/** \\brief  BRC read address for input channel 0 */
typedef struct _Ifx_GTM_BRC_SRC_ADDR_Bits
{
    Ifx_Strict_32Bit ADDR : 9;                /**< \brief [8:0] Source ARU address. Define an ARU read address used as data source for input channel z (rw) */
    Ifx_Strict_32Bit reserved_9 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit BRC_MODE : 1;            /**< \brief [12:12] BRC_MODE: BRC Operation mode select. (rw) */
    Ifx_Strict_32Bit reserved_13 : 19;        /**< \brief \internal Reserved */
} Ifx_GTM_BRC_SRC_ADDR_Bits;

/** \\brief  BRC destination channels for input channel 0 */
typedef struct _Ifx_GTM_BRC_SRC_DEST_Bits
{
    Ifx_Strict_32Bit EN_DEST0 : 1;            /**< \brief [0:0] Enable BRC destination address 0 (rw) */
    Ifx_Strict_32Bit EN_DEST1 : 1;            /**< \brief [1:1] Enable BRC destination address 1 (rw) */
    Ifx_Strict_32Bit EN_DEST2 : 1;            /**< \brief [2:2] Enable BRC destination address 2 (rw) */
    Ifx_Strict_32Bit EN_DEST3 : 1;            /**< \brief [3:3] Enable BRC destination address 3 (rw) */
    Ifx_Strict_32Bit EN_DEST4 : 1;            /**< \brief [4:4] Enable BRC destination address 4 (rw) */
    Ifx_Strict_32Bit EN_DEST5 : 1;            /**< \brief [5:5] Enable BRC destination address 5 (rw) */
    Ifx_Strict_32Bit EN_DEST6 : 1;            /**< \brief [6:6] Enable BRC destination address 6 (rw) */
    Ifx_Strict_32Bit EN_DEST7 : 1;            /**< \brief [7:7] Enable BRC destination address 7 (rw) */
    Ifx_Strict_32Bit EN_DEST8 : 1;            /**< \brief [8:8] Enable BRC destination address 8 (rw) */
    Ifx_Strict_32Bit EN_DEST9 : 1;            /**< \brief [9:9] Enable BRC destination address 9 (rw) */
    Ifx_Strict_32Bit EN_DEST10 : 1;           /**< \brief [10:10] Enable BRC destination address 10 (rw) */
    Ifx_Strict_32Bit EN_DEST11 : 1;           /**< \brief [11:11] Enable BRC destination address 11 (rw) */
    Ifx_Strict_32Bit EN_DEST12 : 1;           /**< \brief [12:12] Enable BRC destination address 12 (rw) */
    Ifx_Strict_32Bit EN_DEST13 : 1;           /**< \brief [13:13] Enable BRC destination address 13 (rw) */
    Ifx_Strict_32Bit EN_DEST14 : 1;           /**< \brief [14:14] Enable BRC destination address 14 (rw) */
    Ifx_Strict_32Bit EN_DEST15 : 1;           /**< \brief [15:15] Enable BRC destination address 15 (rw) */
    Ifx_Strict_32Bit EN_DEST16 : 1;           /**< \brief [16:16] Enable BRC destination address 16 (rw) */
    Ifx_Strict_32Bit EN_DEST17 : 1;           /**< \brief [17:17] Enable BRC destination address 17 (rw) */
    Ifx_Strict_32Bit EN_DEST18 : 1;           /**< \brief [18:18] Enable BRC destination address 18 (rw) */
    Ifx_Strict_32Bit EN_DEST19 : 1;           /**< \brief [19:19] Enable BRC destination address 19 (rw) */
    Ifx_Strict_32Bit EN_DEST20 : 1;           /**< \brief [20:20] Enable BRC destination address 20 (rw) */
    Ifx_Strict_32Bit EN_DEST21 : 1;           /**< \brief [21:21] Enable BRC destination address 21 (rw) */
    Ifx_Strict_32Bit EN_TRASHBIN : 1;         /**< \brief [22:22] EN_TRASHBIN: Control trash bin functionality. (rw) */
    Ifx_Strict_32Bit Reserved : 9;            /**< \brief [31:23] Reserved: Reserved (r) */
} Ifx_GTM_BRC_SRC_DEST_Bits;

/** \\brief  GTM AEI bridge mode register */
typedef struct _Ifx_GTM_BRIDGE_MODE_Bits
{
    Ifx_Strict_32Bit BRG_MODE : 1;            /**< \brief [0:0] Defines the operation mode for the AEI bridge. (rw) */
    Ifx_Strict_32Bit MSK_WR_RSP : 1;          /**< \brief [1:1] Mask write response. (rw) */
    Ifx_Strict_32Bit BYPASS_SYNC : 1;         /**< \brief [2:2] Bypass synchronizer flip-flops. (rw) */
    Ifx_Strict_32Bit reserved_3 : 5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit MODE_UP_PGR : 1;         /**< \brief [8:8] Mode update in progress. (r) */
    Ifx_Strict_32Bit BUFF_OVL : 1;            /**< \brief [9:9] Buffer overflow register. (rw) */
    Ifx_Strict_32Bit reserved_10 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SYNC_INPUT_REG : 1;      /**< \brief [12:12] additional pipelined stage in synchronous bridge mode (r) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit BRG_RST : 1;             /**< \brief [16:16] Bridge software reset. (rw) */
    Ifx_Strict_32Bit reserved_17 : 7;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit BUFF_DPT : 8;            /**< \brief [31:24] Buffer depth of AEI bridge. (r) */
} Ifx_GTM_BRIDGE_MODE_Bits;

/** \\brief  GTM AEI bridge pointer 1 register */
typedef struct _Ifx_GTM_BRIDGE_PTR1_Bits
{
    Ifx_Strict_32Bit NEW_TRAN_PTR : 5;        /**< \brief [4:0] New transaction pointer. (r) */
    Ifx_Strict_32Bit FIRST_RSP_PTR : 5;       /**< \brief [9:5] First response pointer. (r) */
    Ifx_Strict_32Bit TRAN_IN_PGR : 5;         /**< \brief [14:10] Transaction in progress pointer (acquire) (r) */
    Ifx_Strict_32Bit ABT_TRAN_PGR : 5;        /**< \brief [19:15] Aborted transaction in progress pointer. (r) */
    Ifx_Strict_32Bit FBC : 6;                 /**< \brief [25:20] Free buffer count. (r) */
    Ifx_Strict_32Bit RSP_TRAN_RDY : 6;        /**< \brief [31:26] Response transactions ready. (r) */
} Ifx_GTM_BRIDGE_PTR1_Bits;

/** \\brief  GTM AEI bridge pointer 2 register */
typedef struct _Ifx_GTM_BRIDGE_PTR2_Bits
{
    Ifx_Strict_32Bit TRAN_IN_PGR2 : 5;        /**< \brief [4:0] Transaction in progress pointer (aquire2) (r) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_BRIDGE_PTR2_Bits;

/** \\brief  CCM10 Configuration Register */
typedef struct _Ifx_GTM_CCM10_CFG_Bits
{
    Ifx_Strict_32Bit EN_TIM : 1;              /**< \brief [0:0] Enable TIM (rw) */
    Ifx_Strict_32Bit EN_TOM_SPE_TDTM : 1;     /**< \brief [1:1] Enable TOM, SPE and TDTM (rw) */
    Ifx_Strict_32Bit EN_ATOM_ADTM : 1;        /**< \brief [2:2] Enable ATOM and ADTM (rw) */
    Ifx_Strict_32Bit EN_MCS : 1;              /**< \brief [3:3] Enable MCS (rw) */
    Ifx_Strict_32Bit EN_DPLL_MAP : 1;         /**< \brief [4:4] Enable DPLL and MAP (rw) */
    Ifx_Strict_32Bit EN_BRC : 1;              /**< \brief [5:5] Enable BRC (rw) */
    Ifx_Strict_32Bit EN_PSM : 1;              /**< \brief [6:6] Enable PSM (rw) */
    Ifx_Strict_32Bit EN_CMP_MON : 1;          /**< \brief [7:7] Enable CMP and MON (rw) */
    Ifx_Strict_32Bit reserved_8 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLS_CLK_DIV : 2;         /**< \brief [17:16] Cluster Clock Divider (r) */
    Ifx_Strict_32Bit reserved_18 : 12;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBU_DIR1 : 1;            /**< \brief [30:30] DIR1 input signal of module TBU (r) */
    Ifx_Strict_32Bit TBU_DIR2 : 1;            /**< \brief [31:31] DIR2 input signal of module TBU (r) */
} Ifx_GTM_CCM10_CFG_Bits;

/** \\brief  CCM10 CMU Clock Configuration Register */
typedef struct _Ifx_GTM_CCM10_CMU_CLK_CFG_Bits
{
    Ifx_Strict_32Bit CLK0_SRC : 2;            /**< \brief [1:0] Clock 0 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_2 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK1_SRC : 2;            /**< \brief [5:4] Clock 1 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_6 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK2_SRC : 2;            /**< \brief [9:8] Clock 2 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_10 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK3_SRC : 2;            /**< \brief [13:12] Clock 3 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_14 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK4_SRC : 2;            /**< \brief [17:16] Clock 4 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_18 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK5_SRC : 2;            /**< \brief [21:20] Clock 5 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_22 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK6_SRC : 2;            /**< \brief [25:24] Clock 6 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_26 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK7_SRC : 2;            /**< \brief [29:28] Clock 7 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM10_CMU_CLK_CFG_Bits;

/** \\brief  CCM10 CMU Fixed Clock Configuration Register */
typedef struct _Ifx_GTM_CCM10_CMU_FXCLK_CFG_Bits
{
    Ifx_Strict_32Bit FXCLK0_SRC : 4;          /**< \brief [3:0] Fixed clock 0 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM10_CMU_FXCLK_CFG_Bits;

/** \\brief  CCM10 Hardware Configuration */
typedef struct _Ifx_GTM_CCM10_HW_CONF_Bits
{
    Ifx_Strict_32Bit GRSTEN : 1;                /**< \brief [0:0] Global Reset Enable (r) */
    Ifx_Strict_32Bit BRIDGE_MODE_RST : 1;       /**< \brief [1:1] Bridge mode after reset (r) */
    Ifx_Strict_32Bit SYNC_INPUT_REG : 1;        /**< \brief [2:2] Additional pipelined stage in synchronous bridge mode (r) */
    Ifx_Strict_32Bit CFG_CLOCK_RATE : 1;        /**< \brief [3:3] Clocks per ARU transfer (r) */
    Ifx_Strict_32Bit ATOM_OUT_RST : 1;          /**< \brief [4:4] ATOM_OUT reset level (r) */
    Ifx_Strict_32Bit ATOM_TRIG_CHAIN : 3;       /**< \brief [7:5] ATOM trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit TOM_OUT_RST : 1;           /**< \brief [8:8] TOM_OUT reset level (r) */
    Ifx_Strict_32Bit TOM_TRIG_CHAIN : 3;        /**< \brief [11:9] TOM trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit RAM_INIT_RST : 1;          /**< \brief [12:12] RAM initialization from reset (r) */
    Ifx_Strict_32Bit ERM : 1;                   /**< \brief [13:13] enable RAM1 MSB for available MCS modules (r) */
    Ifx_Strict_32Bit ARU_CONNECT_CONFIG : 1;    /**< \brief [14:14] Defines number of parallel ARU ports (r) */
    Ifx_Strict_32Bit reserved_15 : 1;           /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IRQ_MODE_LEVEL : 1;        /**< \brief [16:16] IRQ_MODE_LEVEL (r) */
    Ifx_Strict_32Bit IRQ_MODE_PULSE : 1;        /**< \brief [17:17] IRQ_MODE_PULSE (r) */
    Ifx_Strict_32Bit IRQ_MODE_PULSE_NOTIFY : 1; /**< \brief [18:18] IRQ_MODE_PULSE_NOTIFY (r) */
    Ifx_Strict_32Bit IRQ_MODE_SINGLE_PULSE : 1; /**< \brief [19:19] IRQ_MODE_SINGLE_PULSE (r) */
    Ifx_Strict_32Bit ATOM_TRIG_INTCHAIN : 4;    /**< \brief [23:20] ATOM internal trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit TOM_TRIG_INTCHAIN : 5;     /**< \brief [28:24] TOM internal trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit INT_CLK_EN_GEN : 1;        /**< \brief [29:29] Internal clock enable generation (r) */
    Ifx_Strict_32Bit reserved_30 : 2;           /**< \brief \internal Reserved */
} Ifx_GTM_CCM10_HW_CONF_Bits;

/** \\brief  CCM10 Protection Register */
typedef struct _Ifx_GTM_CCM10_PROT_Bits
{
    Ifx_Strict_32Bit CLS_PROT : 1;            /**< \brief [0:0] Cluster Protection (rw) */
    Ifx_Strict_32Bit Reserved : 31;           /**< \brief [31:1] Read as zero, should be written as zero. (r) */
} Ifx_GTM_CCM10_PROT_Bits;

/** \\brief  CCM11 Configuration Register */
typedef struct _Ifx_GTM_CCM11_CFG_Bits
{
    Ifx_Strict_32Bit EN_TIM : 1;              /**< \brief [0:0] Enable TIM (rw) */
    Ifx_Strict_32Bit EN_TOM_SPE_TDTM : 1;     /**< \brief [1:1] Enable TOM, SPE and TDTM (rw) */
    Ifx_Strict_32Bit EN_ATOM_ADTM : 1;        /**< \brief [2:2] Enable ATOM and ADTM (rw) */
    Ifx_Strict_32Bit EN_MCS : 1;              /**< \brief [3:3] Enable MCS (rw) */
    Ifx_Strict_32Bit EN_DPLL_MAP : 1;         /**< \brief [4:4] Enable DPLL and MAP (rw) */
    Ifx_Strict_32Bit EN_BRC : 1;              /**< \brief [5:5] Enable BRC (rw) */
    Ifx_Strict_32Bit EN_PSM : 1;              /**< \brief [6:6] Enable PSM (rw) */
    Ifx_Strict_32Bit EN_CMP_MON : 1;          /**< \brief [7:7] Enable CMP and MON (rw) */
    Ifx_Strict_32Bit reserved_8 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLS_CLK_DIV : 2;         /**< \brief [17:16] Cluster Clock Divider (r) */
    Ifx_Strict_32Bit reserved_18 : 12;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBU_DIR1 : 1;            /**< \brief [30:30] DIR1 input signal of module TBU (r) */
    Ifx_Strict_32Bit TBU_DIR2 : 1;            /**< \brief [31:31] DIR2 input signal of module TBU (r) */
} Ifx_GTM_CCM11_CFG_Bits;

/** \\brief  CCM11 CMU Clock Configuration Register */
typedef struct _Ifx_GTM_CCM11_CMU_CLK_CFG_Bits
{
    Ifx_Strict_32Bit CLK0_SRC : 2;            /**< \brief [1:0] Clock 0 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_2 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK1_SRC : 2;            /**< \brief [5:4] Clock 1 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_6 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK2_SRC : 2;            /**< \brief [9:8] Clock 2 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_10 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK3_SRC : 2;            /**< \brief [13:12] Clock 3 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_14 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK4_SRC : 2;            /**< \brief [17:16] Clock 4 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_18 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK5_SRC : 2;            /**< \brief [21:20] Clock 5 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_22 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK6_SRC : 2;            /**< \brief [25:24] Clock 6 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_26 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK7_SRC : 2;            /**< \brief [29:28] Clock 7 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM11_CMU_CLK_CFG_Bits;

/** \\brief  CCM11 CMU Fixed Clock Configuration Register */
typedef struct _Ifx_GTM_CCM11_CMU_FXCLK_CFG_Bits
{
    Ifx_Strict_32Bit FXCLK0_SRC : 4;          /**< \brief [3:0] Fixed clock 0 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM11_CMU_FXCLK_CFG_Bits;

/** \\brief  CCM11 Hardware Configuration */
typedef struct _Ifx_GTM_CCM11_HW_CONF_Bits
{
    Ifx_Strict_32Bit GRSTEN : 1;                /**< \brief [0:0] Global Reset Enable (r) */
    Ifx_Strict_32Bit BRIDGE_MODE_RST : 1;       /**< \brief [1:1] Bridge mode after reset (r) */
    Ifx_Strict_32Bit SYNC_INPUT_REG : 1;        /**< \brief [2:2] Additional pipelined stage in synchronous bridge mode (r) */
    Ifx_Strict_32Bit CFG_CLOCK_RATE : 1;        /**< \brief [3:3] Clocks per ARU transfer (r) */
    Ifx_Strict_32Bit ATOM_OUT_RST : 1;          /**< \brief [4:4] ATOM_OUT reset level (r) */
    Ifx_Strict_32Bit ATOM_TRIG_CHAIN : 3;       /**< \brief [7:5] ATOM trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit TOM_OUT_RST : 1;           /**< \brief [8:8] TOM_OUT reset level (r) */
    Ifx_Strict_32Bit TOM_TRIG_CHAIN : 3;        /**< \brief [11:9] TOM trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit RAM_INIT_RST : 1;          /**< \brief [12:12] RAM initialization from reset (r) */
    Ifx_Strict_32Bit ERM : 1;                   /**< \brief [13:13] enable RAM1 MSB for available MCS modules (r) */
    Ifx_Strict_32Bit ARU_CONNECT_CONFIG : 1;    /**< \brief [14:14] Defines number of parallel ARU ports (r) */
    Ifx_Strict_32Bit reserved_15 : 1;           /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IRQ_MODE_LEVEL : 1;        /**< \brief [16:16] IRQ_MODE_LEVEL (r) */
    Ifx_Strict_32Bit IRQ_MODE_PULSE : 1;        /**< \brief [17:17] IRQ_MODE_PULSE (r) */
    Ifx_Strict_32Bit IRQ_MODE_PULSE_NOTIFY : 1; /**< \brief [18:18] IRQ_MODE_PULSE_NOTIFY (r) */
    Ifx_Strict_32Bit IRQ_MODE_SINGLE_PULSE : 1; /**< \brief [19:19] IRQ_MODE_SINGLE_PULSE (r) */
    Ifx_Strict_32Bit ATOM_TRIG_INTCHAIN : 4;    /**< \brief [23:20] ATOM internal trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit TOM_TRIG_INTCHAIN : 5;     /**< \brief [28:24] TOM internal trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit INT_CLK_EN_GEN : 1;        /**< \brief [29:29] Internal clock enable generation (r) */
    Ifx_Strict_32Bit reserved_30 : 2;           /**< \brief \internal Reserved */
} Ifx_GTM_CCM11_HW_CONF_Bits;

/** \\brief  CCM11 Protection Register */
typedef struct _Ifx_GTM_CCM11_PROT_Bits
{
    Ifx_Strict_32Bit CLS_PROT : 1;            /**< \brief [0:0] Cluster Protection (rw) */
    Ifx_Strict_32Bit Reserved : 31;           /**< \brief [31:1] Read as zero, should be written as zero. (r) */
} Ifx_GTM_CCM11_PROT_Bits;

/** \\brief  CCM MCS Bus Master Status Register */
typedef struct _Ifx_GTM_CCM_AEIM_STA_Bits
{
    Ifx_Strict_32Bit AEIM_XPT_ADDR : 16;      /**< \brief [15:0] Exception Address (rw) */
    Ifx_Strict_32Bit reserved_16 : 8;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AEIM_XPT_STA : 2;        /**< \brief [25:24] AEIM Exception status (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_AEIM_STA_Bits;

/** \\brief  CCM Address Range Protector 0 Control Register */
typedef struct _Ifx_GTM_CCM_ARP0_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP0_CTRL_Bits;

/** \\brief  CCM Address Range Protector 0 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP0_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP0_PROT_Bits;

/** \\brief  CCM Address Range Protector 1 Control Register */
typedef struct _Ifx_GTM_CCM_ARP1_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP1_CTRL_Bits;

/** \\brief  CCM Address Range Protector 1 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP1_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP1_PROT_Bits;

/** \\brief  CCM Address Range Protector 2 Control Register */
typedef struct _Ifx_GTM_CCM_ARP2_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP2_CTRL_Bits;

/** \\brief  CCM Address Range Protector 2 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP2_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP2_PROT_Bits;

/** \\brief  CCM Address Range Protector 3 Control Register */
typedef struct _Ifx_GTM_CCM_ARP3_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP3_CTRL_Bits;

/** \\brief  CCM Address Range Protector 3 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP3_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP3_PROT_Bits;

/** \\brief  CCM Address Range Protector 4 Control Register */
typedef struct _Ifx_GTM_CCM_ARP4_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP4_CTRL_Bits;

/** \\brief  CCM Address Range Protector 4 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP4_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP4_PROT_Bits;

/** \\brief  CCM Address Range Protector 5 Control Register */
typedef struct _Ifx_GTM_CCM_ARP5_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP5_CTRL_Bits;

/** \\brief  CCM Address Range Protector 5 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP5_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP5_PROT_Bits;

/** \\brief  CCM Address Range Protector 6 Control Register */
typedef struct _Ifx_GTM_CCM_ARP6_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP6_CTRL_Bits;

/** \\brief  CCM Address Range Protector 6 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP6_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP6_PROT_Bits;

/** \\brief  CCM Address Range Protector 7 Control Register */
typedef struct _Ifx_GTM_CCM_ARP7_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP7_CTRL_Bits;

/** \\brief  CCM Address Range Protector 7 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP7_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP7_PROT_Bits;

/** \\brief  CCM Address Range Protector 8 Control Register */
typedef struct _Ifx_GTM_CCM_ARP8_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP8_CTRL_Bits;

/** \\brief  CCM Address Range Protector 8 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP8_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP8_PROT_Bits;

/** \\brief  CCM Address Range Protector 9 Control Register */
typedef struct _Ifx_GTM_CCM_ARP9_CTRL_Bits
{
    Ifx_Strict_32Bit ADDR : 16;               /**< \brief [15:0] ARP base address (rw) */
    Ifx_Strict_32Bit SIZE : 4;                /**< \brief [19:16] Size of ARP (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DIS_PROT : 1;            /**< \brief [24:24] Disable ARP protection. (rw) */
    Ifx_Strict_32Bit reserved_25 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WPROT_AEI : 1;           /**< \brief [31:31] AEI slave write protection. (rw) */
} Ifx_GTM_CCM_ARP9_CTRL_Bits;

/** \\brief  CCM Address Range Protector 9 Protection Register */
typedef struct _Ifx_GTM_CCM_ARP9_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 1;              /**< \brief [0:0] Write Protection MCS channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 1;              /**< \brief [1:1] Write Protection MCS channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 1;              /**< \brief [2:2] Write Protection MCS channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 1;              /**< \brief [3:3] Write Protection MCS channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 1;              /**< \brief [4:4] Write Protection MCS channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 1;              /**< \brief [5:5] Write Protection MCS channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 1;              /**< \brief [6:6] Write Protection MCS channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 1;              /**< \brief [7:7] Write Protection MCS channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_ARP9_PROT_Bits;

/** \\brief  GTM CCM ATOM Output Level */
typedef struct _Ifx_GTM_CCM_ATOM_OUT_Bits
{
    Ifx_Strict_32Bit ATOM_I_OUT : 8;          /**< \brief [7:0] Output level snapshot of ATOM[i]_OUT all channels (r) */
    Ifx_Strict_32Bit ATOM_I_OUT_N : 8;        /**< \brief [15:8] Output level snapshot of ATOM[i]_OUT_N all channels (r) */
    Ifx_Strict_32Bit ATOM_IP1_OUT : 8;        /**< \brief [23:16] Output level snapshot of ATOM[i+1]_OUT all channels (r) */
    Ifx_Strict_32Bit ATOM_IP1_OUT_N : 8;      /**< \brief [31:24] Output level snapshot of ATOM[i+1]_OUT_N all channels (r) */
} Ifx_GTM_CCM_ATOM_OUT_Bits;

/** \\brief  CCM Configuration Register */
typedef struct _Ifx_GTM_CCM_CFG_Bits
{
    Ifx_Strict_32Bit EN_TIM : 1;              /**< \brief [0:0] Enable TIM (rw) */
    Ifx_Strict_32Bit EN_TOM_SPE_TDTM : 1;     /**< \brief [1:1] Enable TOM, SPE and TDTM (rw) */
    Ifx_Strict_32Bit EN_ATOM_ADTM : 1;        /**< \brief [2:2] Enable ATOM and ADTM (rw) */
    Ifx_Strict_32Bit EN_MCS : 1;              /**< \brief [3:3] Enable MCS (rw) */
    Ifx_Strict_32Bit EN_DPLL_MAP : 1;         /**< \brief [4:4] Enable DPLL and MAP (rw) */
    Ifx_Strict_32Bit EN_BRC : 1;              /**< \brief [5:5] Enable BRC (rw) */
    Ifx_Strict_32Bit EN_PSM : 1;              /**< \brief [6:6] Enable PSM (rw) */
    Ifx_Strict_32Bit EN_CMP_MON : 1;          /**< \brief [7:7] Enable CMP and MON (rw) */
    Ifx_Strict_32Bit reserved_8 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLS_CLK_DIV : 2;         /**< \brief [17:16] Cluster Clock Divider (r) */
    Ifx_Strict_32Bit reserved_18 : 12;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBU_DIR1 : 1;            /**< \brief [30:30] DIR1 input signal of module TBU (r) */
    Ifx_Strict_32Bit TBU_DIR2 : 1;            /**< \brief [31:31] DIR2 input signal of module TBU (r) */
} Ifx_GTM_CCM_CFG_Bits;

/** \\brief  CCM CMU Clock Configuration Register */
typedef struct _Ifx_GTM_CCM_CMU_CLK_CFG_Bits
{
    Ifx_Strict_32Bit CLK0_SRC : 2;            /**< \brief [1:0] Clock 0 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_2 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK1_SRC : 2;            /**< \brief [5:4] Clock 1 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_6 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK2_SRC : 2;            /**< \brief [9:8] Clock 2 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_10 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK3_SRC : 2;            /**< \brief [13:12] Clock 3 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_14 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK4_SRC : 2;            /**< \brief [17:16] Clock 4 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_18 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK5_SRC : 2;            /**< \brief [21:20] Clock 5 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_22 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK6_SRC : 2;            /**< \brief [25:24] Clock 6 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_26 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK7_SRC : 2;            /**< \brief [29:28] Clock 7 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_CMU_CLK_CFG_Bits;

/** \\brief  CCM CMU Fixed Clock Configuration Register */
typedef struct _Ifx_GTM_CCM_CMU_FXCLK_CFG_Bits
{
    Ifx_Strict_32Bit FXCLK0_SRC : 4;          /**< \brief [3:0] Fixed clock 0 source signal selector (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_CMU_FXCLK_CFG_Bits;

/** \\brief  CCM external capture trigger enable */
typedef struct _Ifx_GTM_CCM_EXT_CAP_EN_Bits
{
    Ifx_Strict_32Bit TIM_I_EXT_CAP_EN : 8;    /**< \brief [7:0] TIM[i]_EXT_CAPTURE signal forwarding enable (rw) */
    Ifx_Strict_32Bit TIM_IP1_EXT_CAP_EN : 8;  /**< \brief [15:8] TIM[i+1]_EXT_CAPTURE signal forwarding enable (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_CCM_EXT_CAP_EN_Bits;

/** \\brief  CCM Hardware Configuration */
typedef struct _Ifx_GTM_CCM_HW_CONF_Bits
{
    Ifx_Strict_32Bit GRSTEN : 1;                /**< \brief [0:0] Global Reset Enable (r) */
    Ifx_Strict_32Bit BRIDGE_MODE_RST : 1;       /**< \brief [1:1] Bridge mode after reset (r) */
    Ifx_Strict_32Bit SYNC_INPUT_REG : 1;        /**< \brief [2:2] Additional pipelined stage in synchronous bridge mode (r) */
    Ifx_Strict_32Bit CFG_CLOCK_RATE : 1;        /**< \brief [3:3] Clocks per ARU transfer (r) */
    Ifx_Strict_32Bit ATOM_OUT_RST : 1;          /**< \brief [4:4] ATOM_OUT reset level (r) */
    Ifx_Strict_32Bit ATOM_TRIG_CHAIN : 3;       /**< \brief [7:5] ATOM trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit TOM_OUT_RST : 1;           /**< \brief [8:8] TOM_OUT reset level (r) */
    Ifx_Strict_32Bit TOM_TRIG_CHAIN : 3;        /**< \brief [11:9] TOM trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit RAM_INIT_RST : 1;          /**< \brief [12:12] RAM initialization from reset (r) */
    Ifx_Strict_32Bit ERM : 1;                   /**< \brief [13:13] enable RAM1 MSB for available MCS modules (r) */
    Ifx_Strict_32Bit ARU_CONNECT_CONFIG : 1;    /**< \brief [14:14] Defines number of parallel ARU ports (r) */
    Ifx_Strict_32Bit reserved_15 : 1;           /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IRQ_MODE_LEVEL : 1;        /**< \brief [16:16] IRQ_MODE_LEVEL (r) */
    Ifx_Strict_32Bit IRQ_MODE_PULSE : 1;        /**< \brief [17:17] IRQ_MODE_PULSE (r) */
    Ifx_Strict_32Bit IRQ_MODE_PULSE_NOTIFY : 1; /**< \brief [18:18] IRQ_MODE_PULSE_NOTIFY (r) */
    Ifx_Strict_32Bit IRQ_MODE_SINGLE_PULSE : 1; /**< \brief [19:19] IRQ_MODE_SINGLE_PULSE (r) */
    Ifx_Strict_32Bit ATOM_TRIG_INTCHAIN : 4;    /**< \brief [23:20] ATOM internal trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit TOM_TRIG_INTCHAIN : 5;     /**< \brief [28:24] TOM internal trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit INT_CLK_EN_GEN : 1;        /**< \brief [29:29] Internal clock enable generation (r) */
    Ifx_Strict_32Bit reserved_30 : 2;           /**< \brief \internal Reserved */
} Ifx_GTM_CCM_HW_CONF_Bits;

/** \\brief  CCM Protection Register */
typedef struct _Ifx_GTM_CCM_PROT_Bits
{
    Ifx_Strict_32Bit CLS_PROT : 1;            /**< \brief [0:0] Cluster Protection (rw) */
    Ifx_Strict_32Bit Reserved : 31;           /**< \brief [31:1] Read as zero, should be written as zero. (r) */
} Ifx_GTM_CCM_PROT_Bits;

/** \\brief  CCM TIM module AUX_IN source selection register */
typedef struct _Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits
{
    Ifx_Strict_32Bit SRC_CH0 : 1;             /**< \brief [0:0] Defines AUX_IN source of TIM[i] channel 0 (rw) */
    Ifx_Strict_32Bit SRC_CH1 : 1;             /**< \brief [1:1] Defines AUX_IN source of TIM[i] channel 1 (rw) */
    Ifx_Strict_32Bit SRC_CH2 : 1;             /**< \brief [2:2] Defines AUX_IN source of TIM[i] channel 2 (rw) */
    Ifx_Strict_32Bit SRC_CH3 : 1;             /**< \brief [3:3] Defines AUX_IN source of TIM[i] channel 3 (rw) */
    Ifx_Strict_32Bit SRC_CH4 : 1;             /**< \brief [4:4] Defines AUX_IN source of TIM[i] channel 4 (rw) */
    Ifx_Strict_32Bit SRC_CH5 : 1;             /**< \brief [5:5] Defines AUX_IN source of TIM[i] channel 5 (rw) */
    Ifx_Strict_32Bit SRC_CH6 : 1;             /**< \brief [6:6] Defines AUX_IN source of TIM[i] channel 6 (rw) */
    Ifx_Strict_32Bit SRC_CH7 : 1;             /**< \brief [7:7] Defines AUX_IN source of TIM[i] channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL_OUT_N_CH0 : 1;       /**< \brief [16:16] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 0 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH1 : 1;       /**< \brief [17:17] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 1 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH2 : 1;       /**< \brief [18:18] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 2 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH3 : 1;       /**< \brief [19:19] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 3 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH4 : 1;       /**< \brief [20:20] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 4 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH5 : 1;       /**< \brief [21:21] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 5 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH6 : 1;       /**< \brief [22:22] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 6 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH7 : 1;       /**< \brief [23:23] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 7 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits;

/** \\brief  GTM CCM TOM output level */
typedef struct _Ifx_GTM_CCM_TOM_OUT_Bits
{
    Ifx_Strict_32Bit TOM_OUT : 16;            /**< \brief [15:0] Output level snapshot of TOM[i]_OUT all channels (r) */
    Ifx_Strict_32Bit TOM_OUT_N : 16;          /**< \brief [31:16] Output level snapshot of TOM[i]_OUT_N all channels (r) */
} Ifx_GTM_CCM_TOM_OUT_Bits;

/** \\brief  CDTM5 DTM4 channel 0 dead time reload values */
typedef struct _Ifx_GTM_CDTM5_DTM4_CH0_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM4_CH0_DTV_Bits;

/** \\brief  CDTM5 DTM4 channel 1 dead t5me reload values */
typedef struct _Ifx_GTM_CDTM5_DTM4_CH1_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM4_CH1_DTV_Bits;

/** \\brief  CDTM5 DTM4 channel 2 dead t5me reload values */
typedef struct _Ifx_GTM_CDTM5_DTM4_CH2_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM4_CH2_DTV_Bits;

/** \\brief  CDTM5 DTM4 channel 3 dead t5me reload values */
typedef struct _Ifx_GTM_CDTM5_DTM4_CH3_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM4_CH3_DTV_Bits;

/** \\brief  CDTM5 DTM4 channel control register 2 shadow */
typedef struct _Ifx_GTM_CDTM5_DTM4_CH_CTRL2_SR_Bits
{
    Ifx_Strict_32Bit POL0_0_SR : 1;           /**< \brief [0:0] Polarity on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC0_0_SR : 1;            /**< \brief [1:1] Output 0 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL0_0_SR : 1;            /**< \brief [2:2] Signal level on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT0_0_SR : 1;            /**< \brief [3:3] Dead time path enable on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL1_0_SR : 1;           /**< \brief [4:4] Polarity on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC1_0_SR : 1;            /**< \brief [5:5] Output 1 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL1_0_SR : 1;            /**< \brief [6:6] Signal level on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT1_0_SR : 1;            /**< \brief [7:7] Dead time path enable on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL0_1_SR : 1;           /**< \brief [8:8] Polarity on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC0_1_SR : 1;            /**< \brief [9:9] Output 0 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL0_1_SR : 1;            /**< \brief [10:10] Signal level on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT0_1_SR : 1;            /**< \brief [11:11] Dead time path enable on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL1_1_SR : 1;           /**< \brief [12:12] Polarity on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC1_1_SR : 1;            /**< \brief [13:13] Output 1 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL1_1_SR : 1;            /**< \brief [14:14] Signal level on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT1_1_SR : 1;            /**< \brief [15:15] Dead time path enable on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL0_2_SR : 1;           /**< \brief [16:16] Polarity on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC0_2_SR : 1;            /**< \brief [17:17] Output 0 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL0_2_SR : 1;            /**< \brief [18:18] Signal level on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT0_2_SR : 1;            /**< \brief [19:19] Dead time path enable on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL1_2_SR : 1;           /**< \brief [20:20] Polarity on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC1_2_SR : 1;            /**< \brief [21:21] Output 1 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL1_2_SR : 1;            /**< \brief [22:22] Signal level on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT1_2_SR : 1;            /**< \brief [23:23] Dead time path enable on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL0_3_SR : 1;           /**< \brief [24:24] Polarity on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC0_3_SR : 1;            /**< \brief [25:25] Output 0 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL0_3_SR : 1;            /**< \brief [26:26] Signal level on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT0_3_SR : 1;            /**< \brief [27:27] Dead time path enable on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit POL1_3_SR : 1;           /**< \brief [28:28] Polarity on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC1_3_SR : 1;            /**< \brief [29:29] Output 1 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL1_3_SR : 1;            /**< \brief [30:30] Signal level on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT1_3_SR : 1;            /**< \brief [31:31] Dead time path enable on output 1 channel 3 shadow register (rw) */
} Ifx_GTM_CDTM5_DTM4_CH_CTRL2_SR_Bits;

/** \\brief  CDTM5 DTM4 channel control register 3 */
typedef struct _Ifx_GTM_CDTM5_DTM4_CH_CTRL3_Bits
{
    Ifx_Strict_32Bit CII0 : 1;                /**< \brief [0:0] Combinational input invert channel 0 (rw) */
    Ifx_Strict_32Bit CIS0 : 1;                /**< \brief [1:1] Combinational input select channel 0 (rw) */
    Ifx_Strict_32Bit TSEL0_0 : 1;             /**< \brief [2:2] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_0 : 1;             /**< \brief [3:3] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII1 : 1;                /**< \brief [8:8] Combinational input invert channel 1 (rw) */
    Ifx_Strict_32Bit CIS1 : 1;                /**< \brief [9:9] Combinational input select channel 1 (rw) */
    Ifx_Strict_32Bit TSEL0_1 : 1;             /**< \brief [10:10] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_1 : 1;             /**< \brief [11:11] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII2 : 1;                /**< \brief [16:16] Combinational input invert channel 2 (rw) */
    Ifx_Strict_32Bit CIS2 : 1;                /**< \brief [17:17] Combinational input select channel 2 (rw) */
    Ifx_Strict_32Bit TSEL0_2 : 1;             /**< \brief [18:18] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_2 : 1;             /**< \brief [19:19] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII3 : 1;                /**< \brief [24:24] Combinational input invert channel 3 (rw) */
    Ifx_Strict_32Bit CIS3 : 1;                /**< \brief [25:25] Combinational input select channel 3 (rw) */
    Ifx_Strict_32Bit TSEL0_3 : 1;             /**< \brief [26:26] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_3 : 1;             /**< \brief [27:27] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM4_CH_CTRL3_Bits;

/** \\brief  CDTM5 DTM4 channel shadow register */
typedef struct _Ifx_GTM_CDTM5_DTM4_CH_SR_Bits
{
    Ifx_Strict_32Bit SL0_0_SR_SR : 1;         /**< \brief [0:0] Shadow register for bit SL0_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_0_SR_SR : 1;         /**< \brief [1:1] Shadow register for bit SL1_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_1_SR_SR : 1;         /**< \brief [2:2] Shadow register for bit SL0_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_1_SR_SR : 1;         /**< \brief [3:3] Shadow register for bit SL1_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_2_SR_SR : 1;         /**< \brief [4:4] Shadow register for bit SL0_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_2_SR_SR : 1;         /**< \brief [5:5] Shadow register for bit SL1_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_3_SR_SR : 1;         /**< \brief [6:6] Shadow register for bit SL0_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_3_SR_SR : 1;         /**< \brief [7:7] Shadow register for bit SL1_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM4_CH_SR_Bits;

/** \\brief  CDTM5 DTM4 global configuration and control register */
typedef struct _Ifx_GTM_CDTM5_DTM4_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_SEL : 2;             /**< \brief [1:0] Clock source select (rw) */
    Ifx_Strict_32Bit DTM_SEL : 2;             /**< \brief [3:2] Select DTM update and SHUT_OFF reset signal (rw) */
    Ifx_Strict_32Bit UPD_MODE : 3;            /**< \brief [6:4] Update mode (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SR_UPD_EN : 1;           /**< \brief [8:8] shadow register update enable (rw) */
    Ifx_Strict_32Bit reserved_9 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHUT_OFF_RST : 1;        /**< \brief [16:16] Shut off reset (rw) */
    Ifx_Strict_32Bit reserved_17 : 15;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM4_CTRL_Bits;

/** \\brief  CDTM5 DTM4 phase shift unit configuration and control register */
typedef struct _Ifx_GTM_CDTM5_DTM4_PS_CTRL_Bits
{
    Ifx_Strict_32Bit RELBLK : 10;             /**< \brief [9:0] reload value blanking window (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PSU_IN_SEL : 1;          /**< \brief [16:16] PSU input select (rw) */
    Ifx_Strict_32Bit IN_POL : 1;              /**< \brief [17:17] input polarity (rw) */
    Ifx_Strict_32Bit TIM_SEL : 1;             /**< \brief [18:18] TIM input select (rw) */
    Ifx_Strict_32Bit reserved_19 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHIFT_SEL : 2;           /**< \brief [21:20] shift select (rw) */
    Ifx_Strict_32Bit reserved_22 : 10;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM4_PS_CTRL_Bits;

/** \\brief  CDTM5 DTM5 channel 0 dead time reload values */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH0_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_CH0_DTV_Bits;

/** \\brief  CDTM5 DTM5 channel 1 dead t5me reload values */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH1_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_CH1_DTV_Bits;

/** \\brief  CDTM5 DTM5 channel 2 dead t5me reload values */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH2_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_CH2_DTV_Bits;

/** \\brief  CDTM5 DTM5 channel 3 dead t5me reload values */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH3_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_CH3_DTV_Bits;

/** \\brief  CDTM5 DTM5 channel control register 1 */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH_CTRL1_Bits
{
    Ifx_Strict_32Bit O1SEL_0 : 1;             /**< \brief [0:0] Output 1 select channel 0 (rw) */
    Ifx_Strict_32Bit I1SEL_0 : 1;             /**< \brief [1:1] Input 1 select channel 0 (rw) */
    Ifx_Strict_32Bit reserved_2 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SWAP_0 : 1;              /**< \brief [3:3] Swap outputs DTM[i]_CH[0]_OUT0 and DTM[i]_CH[0]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_0 : 2;               /**< \brief [5:4] Output 1 function channel 0 (rw) */
    Ifx_Strict_32Bit XDT_EN_0_1 : 1;          /**< \brief [6:6] Cross dead time enable on channel 0 and 1 (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_1 : 1;             /**< \brief [8:8] Output 1 select channel 1 (rw) */
    Ifx_Strict_32Bit I1SEL_1 : 1;             /**< \brief [9:9] Input 1 select channel 1 (rw) */
    Ifx_Strict_32Bit SH_EN_1 : 1;             /**< \brief [10:10] Shift enable channel 1 (rw) */
    Ifx_Strict_32Bit SWAP_1 : 1;              /**< \brief [11:11] Swap outputs DTM[i]_CH[1]_OUT0 and DTM[i]_CH[1]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_1 : 2;               /**< \brief [13:12] Output 1 function channel 1 (rw) */
    Ifx_Strict_32Bit reserved_14 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_2 : 1;             /**< \brief [16:16] Output 1 select channel 2 (rw) */
    Ifx_Strict_32Bit I1SEL_2 : 1;             /**< \brief [17:17] Input 1 select channel 2 (rw) */
    Ifx_Strict_32Bit SH_EN_2 : 1;             /**< \brief [18:18] Shift enable channel 2 (rw) */
    Ifx_Strict_32Bit SWAP_2 : 1;              /**< \brief [19:19] Swap outputs DTM[i]_CH[2]_OUT0 and DTM[i]_CH[2]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_2 : 2;               /**< \brief [21:20] Output 1 function channel 2 (rw) */
    Ifx_Strict_32Bit XDT_EN_2_3 : 1;          /**< \brief [22:22] Cross dead time enable on channel 0 and 1 (rw) */
    Ifx_Strict_32Bit reserved_23 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_3 : 1;             /**< \brief [24:24] Output 1 select channel 3 (rw) */
    Ifx_Strict_32Bit I1SEL_3 : 1;             /**< \brief [25:25] Input 1 select channel 3 (rw) */
    Ifx_Strict_32Bit SH_EN_3 : 1;             /**< \brief [26:26] Shift enable channel 3 (rw) */
    Ifx_Strict_32Bit SWAP_3 : 1;              /**< \brief [27:27] Swap outputs DTM[i]_CH[3]_OUT0 and DTM[i]_CH[3]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_3 : 2;               /**< \brief [29:28] Output 1 function channel 3 (rw) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_CH_CTRL1_Bits;

/** \\brief  CDTM5 DTM5 channel control register 2 */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH_CTRL2_Bits
{
    Ifx_Strict_32Bit POL0_0 : 1;              /**< \brief [0:0] Polarity on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit OC0_0 : 1;               /**< \brief [1:1] Output 0 control channel 0 (rw) */
    Ifx_Strict_32Bit SL0_0 : 1;               /**< \brief [2:2] Signal level on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit DT0_0 : 1;               /**< \brief [3:3] Dead time path enable on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit POL1_0 : 1;              /**< \brief [4:4] Polarity on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit OC1_0 : 1;               /**< \brief [5:5] Output 1 control channel 0 (rw) */
    Ifx_Strict_32Bit SL1_0 : 1;               /**< \brief [6:6] Signal level on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit DT1_0 : 1;               /**< \brief [7:7] Dead time path enable on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit POL0_1 : 1;              /**< \brief [8:8] Polarity on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit OC0_1 : 1;               /**< \brief [9:9] Output 0 control channel 1 (rw) */
    Ifx_Strict_32Bit SL0_1 : 1;               /**< \brief [10:10] Signal level on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit DT0_1 : 1;               /**< \brief [11:11] Dead time path enable on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit POL1_1 : 1;              /**< \brief [12:12] Polarity on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit OC1_1 : 1;               /**< \brief [13:13] Output 1 control channel 1 (rw) */
    Ifx_Strict_32Bit SL1_1 : 1;               /**< \brief [14:14] Signal level on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit DT1_1 : 1;               /**< \brief [15:15] Dead time path enable on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit POL0_2 : 1;              /**< \brief [16:16] Polarity on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit OC0_2 : 1;               /**< \brief [17:17] Output 0 control channel 2 (rw) */
    Ifx_Strict_32Bit SL0_2 : 1;               /**< \brief [18:18] Signal level on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit DT0_2 : 1;               /**< \brief [19:19] Dead time path enable on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit POL1_2 : 1;              /**< \brief [20:20] Polarity on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit OC1_2 : 1;               /**< \brief [21:21] Output 1 control channel 2 (rw) */
    Ifx_Strict_32Bit SL1_2 : 1;               /**< \brief [22:22] Signal level on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit DT1_2 : 1;               /**< \brief [23:23] Dead time path enable on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit POL0_3 : 1;              /**< \brief [24:24] Polarity on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit OC0_3 : 1;               /**< \brief [25:25] Output 0 control channel 3 (rw) */
    Ifx_Strict_32Bit SL0_3 : 1;               /**< \brief [26:26] Signal level on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit DT0_3 : 1;               /**< \brief [27:27] Dead time path enable on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit POL1_3 : 1;              /**< \brief [28:28] Polarity on output 1 channel 3 (rw) */
    Ifx_Strict_32Bit OC1_3 : 1;               /**< \brief [29:29] Output 1 control channel 3 (rw) */
    Ifx_Strict_32Bit SL1_3 : 1;               /**< \brief [30:30] Signal level on output 1 channel 3 (rw) */
    Ifx_Strict_32Bit DT1_3 : 1;               /**< \brief [31:31] Dead time path enable on output 1 channel 3 (rw) */
} Ifx_GTM_CDTM5_DTM5_CH_CTRL2_Bits;

/** \\brief  CDTM5 DTM5 channel control register 2 shadow */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH_CTRL2_SR_Bits
{
    Ifx_Strict_32Bit POL0_0_SR : 1;           /**< \brief [0:0] Polarity on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC0_0_SR : 1;            /**< \brief [1:1] Output 0 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL0_0_SR : 1;            /**< \brief [2:2] Signal level on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT0_0_SR : 1;            /**< \brief [3:3] Dead time path enable on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL1_0_SR : 1;           /**< \brief [4:4] Polarity on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC1_0_SR : 1;            /**< \brief [5:5] Output 1 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL1_0_SR : 1;            /**< \brief [6:6] Signal level on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT1_0_SR : 1;            /**< \brief [7:7] Dead time path enable on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL0_1_SR : 1;           /**< \brief [8:8] Polarity on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC0_1_SR : 1;            /**< \brief [9:9] Output 0 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL0_1_SR : 1;            /**< \brief [10:10] Signal level on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT0_1_SR : 1;            /**< \brief [11:11] Dead time path enable on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL1_1_SR : 1;           /**< \brief [12:12] Polarity on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC1_1_SR : 1;            /**< \brief [13:13] Output 1 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL1_1_SR : 1;            /**< \brief [14:14] Signal level on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT1_1_SR : 1;            /**< \brief [15:15] Dead time path enable on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL0_2_SR : 1;           /**< \brief [16:16] Polarity on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC0_2_SR : 1;            /**< \brief [17:17] Output 0 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL0_2_SR : 1;            /**< \brief [18:18] Signal level on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT0_2_SR : 1;            /**< \brief [19:19] Dead time path enable on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL1_2_SR : 1;           /**< \brief [20:20] Polarity on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC1_2_SR : 1;            /**< \brief [21:21] Output 1 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL1_2_SR : 1;            /**< \brief [22:22] Signal level on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT1_2_SR : 1;            /**< \brief [23:23] Dead time path enable on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL0_3_SR : 1;           /**< \brief [24:24] Polarity on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC0_3_SR : 1;            /**< \brief [25:25] Output 0 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL0_3_SR : 1;            /**< \brief [26:26] Signal level on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT0_3_SR : 1;            /**< \brief [27:27] Dead time path enable on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit POL1_3_SR : 1;           /**< \brief [28:28] Polarity on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC1_3_SR : 1;            /**< \brief [29:29] Output 1 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL1_3_SR : 1;            /**< \brief [30:30] Signal level on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT1_3_SR : 1;            /**< \brief [31:31] Dead time path enable on output 1 channel 3 shadow register (rw) */
} Ifx_GTM_CDTM5_DTM5_CH_CTRL2_SR_Bits;

/** \\brief  CDTM5 DTM5 channel control register 3 */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH_CTRL3_Bits
{
    Ifx_Strict_32Bit CII0 : 1;                /**< \brief [0:0] Combinational input invert channel 0 (rw) */
    Ifx_Strict_32Bit CIS0 : 1;                /**< \brief [1:1] Combinational input select channel 0 (rw) */
    Ifx_Strict_32Bit TSEL0_0 : 1;             /**< \brief [2:2] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_0 : 1;             /**< \brief [3:3] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII1 : 1;                /**< \brief [8:8] Combinational input invert channel 1 (rw) */
    Ifx_Strict_32Bit CIS1 : 1;                /**< \brief [9:9] Combinational input select channel 1 (rw) */
    Ifx_Strict_32Bit TSEL0_1 : 1;             /**< \brief [10:10] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_1 : 1;             /**< \brief [11:11] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII2 : 1;                /**< \brief [16:16] Combinational input invert channel 2 (rw) */
    Ifx_Strict_32Bit CIS2 : 1;                /**< \brief [17:17] Combinational input select channel 2 (rw) */
    Ifx_Strict_32Bit TSEL0_2 : 1;             /**< \brief [18:18] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_2 : 1;             /**< \brief [19:19] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII3 : 1;                /**< \brief [24:24] Combinational input invert channel 3 (rw) */
    Ifx_Strict_32Bit CIS3 : 1;                /**< \brief [25:25] Combinational input select channel 3 (rw) */
    Ifx_Strict_32Bit TSEL0_3 : 1;             /**< \brief [26:26] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_3 : 1;             /**< \brief [27:27] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_CH_CTRL3_Bits;

/** \\brief  CDTM5 DTM5 channel shadow register */
typedef struct _Ifx_GTM_CDTM5_DTM5_CH_SR_Bits
{
    Ifx_Strict_32Bit SL0_0_SR_SR : 1;         /**< \brief [0:0] Shadow register for bit SL0_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_0_SR_SR : 1;         /**< \brief [1:1] Shadow register for bit SL1_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_1_SR_SR : 1;         /**< \brief [2:2] Shadow register for bit SL0_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_1_SR_SR : 1;         /**< \brief [3:3] Shadow register for bit SL1_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_2_SR_SR : 1;         /**< \brief [4:4] Shadow register for bit SL0_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_2_SR_SR : 1;         /**< \brief [5:5] Shadow register for bit SL1_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_3_SR_SR : 1;         /**< \brief [6:6] Shadow register for bit SL0_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_3_SR_SR : 1;         /**< \brief [7:7] Shadow register for bit SL1_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_CH_SR_Bits;

/** \\brief  CDTM5 DTM5 global configuration and control register */
typedef struct _Ifx_GTM_CDTM5_DTM5_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_SEL : 2;             /**< \brief [1:0] Clock source select (rw) */
    Ifx_Strict_32Bit DTM_SEL : 2;             /**< \brief [3:2] Select DTM update and SHUT_OFF reset signal (rw) */
    Ifx_Strict_32Bit UPD_MODE : 3;            /**< \brief [6:4] Update mode (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SR_UPD_EN : 1;           /**< \brief [8:8] shadow register update enable (rw) */
    Ifx_Strict_32Bit reserved_9 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHUT_OFF_RST : 1;        /**< \brief [16:16] Shut off reset (rw) */
    Ifx_Strict_32Bit reserved_17 : 15;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_CTRL_Bits;

/** \\brief  CDTM5 DTM5 phase shift unit configuration and control register */
typedef struct _Ifx_GTM_CDTM5_DTM5_PS_CTRL_Bits
{
    Ifx_Strict_32Bit RELBLK : 10;             /**< \brief [9:0] reload value blanking window (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PSU_IN_SEL : 1;          /**< \brief [16:16] PSU input select (rw) */
    Ifx_Strict_32Bit IN_POL : 1;              /**< \brief [17:17] input polarity (rw) */
    Ifx_Strict_32Bit TIM_SEL : 1;             /**< \brief [18:18] TIM input select (rw) */
    Ifx_Strict_32Bit reserved_19 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHIFT_SEL : 2;           /**< \brief [21:20] shift select (rw) */
    Ifx_Strict_32Bit reserved_22 : 10;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM5_DTM5_PS_CTRL_Bits;

/** \\brief  CDTM6 DTM4 channel 0 dead time reload values */
typedef struct _Ifx_GTM_CDTM6_DTM4_CH0_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM4_CH0_DTV_Bits;

/** \\brief  CDTM6 DTM4 channel 1 dead time reload values */
typedef struct _Ifx_GTM_CDTM6_DTM4_CH1_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM4_CH1_DTV_Bits;

/** \\brief  CDTM6 DTM4 channel 2 dead time reload values */
typedef struct _Ifx_GTM_CDTM6_DTM4_CH2_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM4_CH2_DTV_Bits;

/** \\brief  CDTM6 DTM4 channel 3 dead time reload values */
typedef struct _Ifx_GTM_CDTM6_DTM4_CH3_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM4_CH3_DTV_Bits;

/** \\brief  CDTM6 DTM4 channel control register 2 shadow */
typedef struct _Ifx_GTM_CDTM6_DTM4_CH_CTRL2_SR_Bits
{
    Ifx_Strict_32Bit POL0_0_SR : 1;           /**< \brief [0:0] Polarity on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC0_0_SR : 1;            /**< \brief [1:1] Output 0 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL0_0_SR : 1;            /**< \brief [2:2] Signal level on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT0_0_SR : 1;            /**< \brief [3:3] Dead time path enable on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL1_0_SR : 1;           /**< \brief [4:4] Polarity on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC1_0_SR : 1;            /**< \brief [5:5] Output 1 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL1_0_SR : 1;            /**< \brief [6:6] Signal level on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT1_0_SR : 1;            /**< \brief [7:7] Dead time path enable on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL0_1_SR : 1;           /**< \brief [8:8] Polarity on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC0_1_SR : 1;            /**< \brief [9:9] Output 0 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL0_1_SR : 1;            /**< \brief [10:10] Signal level on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT0_1_SR : 1;            /**< \brief [11:11] Dead time path enable on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL1_1_SR : 1;           /**< \brief [12:12] Polarity on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC1_1_SR : 1;            /**< \brief [13:13] Output 1 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL1_1_SR : 1;            /**< \brief [14:14] Signal level on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT1_1_SR : 1;            /**< \brief [15:15] Dead time path enable on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL0_2_SR : 1;           /**< \brief [16:16] Polarity on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC0_2_SR : 1;            /**< \brief [17:17] Output 0 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL0_2_SR : 1;            /**< \brief [18:18] Signal level on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT0_2_SR : 1;            /**< \brief [19:19] Dead time path enable on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL1_2_SR : 1;           /**< \brief [20:20] Polarity on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC1_2_SR : 1;            /**< \brief [21:21] Output 1 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL1_2_SR : 1;            /**< \brief [22:22] Signal level on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT1_2_SR : 1;            /**< \brief [23:23] Dead time path enable on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL0_3_SR : 1;           /**< \brief [24:24] Polarity on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC0_3_SR : 1;            /**< \brief [25:25] Output 0 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL0_3_SR : 1;            /**< \brief [26:26] Signal level on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT0_3_SR : 1;            /**< \brief [27:27] Dead time path enable on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit POL1_3_SR : 1;           /**< \brief [28:28] Polarity on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC1_3_SR : 1;            /**< \brief [29:29] Output 1 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL1_3_SR : 1;            /**< \brief [30:30] Signal level on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT1_3_SR : 1;            /**< \brief [31:31] Dead time path enable on output 1 channel 3 shadow register (rw) */
} Ifx_GTM_CDTM6_DTM4_CH_CTRL2_SR_Bits;

/** \\brief  CDTM6 DTM4 channel control register 3 */
typedef struct _Ifx_GTM_CDTM6_DTM4_CH_CTRL3_Bits
{
    Ifx_Strict_32Bit CII0 : 1;                /**< \brief [0:0] Combinational input invert channel 0 (rw) */
    Ifx_Strict_32Bit CIS0 : 1;                /**< \brief [1:1] Combinational input select channel 0 (rw) */
    Ifx_Strict_32Bit TSEL0_0 : 1;             /**< \brief [2:2] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_0 : 1;             /**< \brief [3:3] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII1 : 1;                /**< \brief [8:8] Combinational input invert channel 1 (rw) */
    Ifx_Strict_32Bit CIS1 : 1;                /**< \brief [9:9] Combinational input select channel 1 (rw) */
    Ifx_Strict_32Bit TSEL0_1 : 1;             /**< \brief [10:10] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_1 : 1;             /**< \brief [11:11] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII2 : 1;                /**< \brief [16:16] Combinational input invert channel 2 (rw) */
    Ifx_Strict_32Bit CIS2 : 1;                /**< \brief [17:17] Combinational input select channel 2 (rw) */
    Ifx_Strict_32Bit TSEL0_2 : 1;             /**< \brief [18:18] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_2 : 1;             /**< \brief [19:19] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII3 : 1;                /**< \brief [24:24] Combinational input invert channel 3 (rw) */
    Ifx_Strict_32Bit CIS3 : 1;                /**< \brief [25:25] Combinational input select channel 3 (rw) */
    Ifx_Strict_32Bit TSEL0_3 : 1;             /**< \brief [26:26] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_3 : 1;             /**< \brief [27:27] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM4_CH_CTRL3_Bits;

/** \\brief  CDTM6 DTM4 channel shadow register */
typedef struct _Ifx_GTM_CDTM6_DTM4_CH_SR_Bits
{
    Ifx_Strict_32Bit SL0_0_SR_SR : 1;         /**< \brief [0:0] Shadow register for bit SL0_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_0_SR_SR : 1;         /**< \brief [1:1] Shadow register for bit SL1_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_1_SR_SR : 1;         /**< \brief [2:2] Shadow register for bit SL0_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_1_SR_SR : 1;         /**< \brief [3:3] Shadow register for bit SL1_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_2_SR_SR : 1;         /**< \brief [4:4] Shadow register for bit SL0_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_2_SR_SR : 1;         /**< \brief [5:5] Shadow register for bit SL1_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_3_SR_SR : 1;         /**< \brief [6:6] Shadow register for bit SL0_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_3_SR_SR : 1;         /**< \brief [7:7] Shadow register for bit SL1_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM4_CH_SR_Bits;

/** \\brief  CDTM6 DTM4 global configuration and control register */
typedef struct _Ifx_GTM_CDTM6_DTM4_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_SEL : 2;             /**< \brief [1:0] Clock source select (rw) */
    Ifx_Strict_32Bit DTM_SEL : 2;             /**< \brief [3:2] Select DTM update and SHUT_OFF reset signal (rw) */
    Ifx_Strict_32Bit UPD_MODE : 3;            /**< \brief [6:4] Update mode (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SR_UPD_EN : 1;           /**< \brief [8:8] shadow register update enable (rw) */
    Ifx_Strict_32Bit reserved_9 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHUT_OFF_RST : 1;        /**< \brief [16:16] Shut off reset (rw) */
    Ifx_Strict_32Bit reserved_17 : 15;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM4_CTRL_Bits;

/** \\brief  CDTM6 DTM4 phase shift unit configuration and control register */
typedef struct _Ifx_GTM_CDTM6_DTM4_PS_CTRL_Bits
{
    Ifx_Strict_32Bit RELBLK : 10;             /**< \brief [9:0] reload value blanking window (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PSU_IN_SEL : 1;          /**< \brief [16:16] PSU input select (rw) */
    Ifx_Strict_32Bit IN_POL : 1;              /**< \brief [17:17] input polarity (rw) */
    Ifx_Strict_32Bit TIM_SEL : 1;             /**< \brief [18:18] TIM input select (rw) */
    Ifx_Strict_32Bit reserved_19 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHIFT_SEL : 2;           /**< \brief [21:20] shift select (rw) */
    Ifx_Strict_32Bit reserved_22 : 10;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM4_PS_CTRL_Bits;

/** \\brief  CDTM6 DTM5 channel 0 dead time reload values */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH0_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_CH0_DTV_Bits;

/** \\brief  CDTM6 DTM5 channel 1 dead time reload values */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH1_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_CH1_DTV_Bits;

/** \\brief  CDTM6 DTM5 channel 2 dead time reload values */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH2_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_CH2_DTV_Bits;

/** \\brief  CDTM6 DTM5 channel 3 dead time reload values */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH3_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_CH3_DTV_Bits;

/** \\brief  CDTM6 DTM5 channel control register 1 */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH_CTRL1_Bits
{
    Ifx_Strict_32Bit O1SEL_0 : 1;             /**< \brief [0:0] Output 1 select channel 0 (rw) */
    Ifx_Strict_32Bit I1SEL_0 : 1;             /**< \brief [1:1] Input 1 select channel 0 (rw) */
    Ifx_Strict_32Bit reserved_2 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SWAP_0 : 1;              /**< \brief [3:3] Swap outputs DTM[i]_CH[0]_OUT0 and DTM[i]_CH[0]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_0 : 2;               /**< \brief [5:4] Output 1 function channel 0 (rw) */
    Ifx_Strict_32Bit XDT_EN_0_1 : 1;          /**< \brief [6:6] Cross dead time enable on channel 0 and 1 (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_1 : 1;             /**< \brief [8:8] Output 1 select channel 1 (rw) */
    Ifx_Strict_32Bit I1SEL_1 : 1;             /**< \brief [9:9] Input 1 select channel 1 (rw) */
    Ifx_Strict_32Bit SH_EN_1 : 1;             /**< \brief [10:10] Shift enable channel 1 (rw) */
    Ifx_Strict_32Bit SWAP_1 : 1;              /**< \brief [11:11] Swap outputs DTM[i]_CH[1]_OUT0 and DTM[i]_CH[1]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_1 : 2;               /**< \brief [13:12] Output 1 function channel 1 (rw) */
    Ifx_Strict_32Bit reserved_14 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_2 : 1;             /**< \brief [16:16] Output 1 select channel 2 (rw) */
    Ifx_Strict_32Bit I1SEL_2 : 1;             /**< \brief [17:17] Input 1 select channel 2 (rw) */
    Ifx_Strict_32Bit SH_EN_2 : 1;             /**< \brief [18:18] Shift enable channel 2 (rw) */
    Ifx_Strict_32Bit SWAP_2 : 1;              /**< \brief [19:19] Swap outputs DTM[i]_CH[2]_OUT0 and DTM[i]_CH[2]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_2 : 2;               /**< \brief [21:20] Output 1 function channel 2 (rw) */
    Ifx_Strict_32Bit XDT_EN_2_3 : 1;          /**< \brief [22:22] Cross dead time enable on channel 0 and 1 (rw) */
    Ifx_Strict_32Bit reserved_23 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_3 : 1;             /**< \brief [24:24] Output 1 select channel 3 (rw) */
    Ifx_Strict_32Bit I1SEL_3 : 1;             /**< \brief [25:25] Input 1 select channel 3 (rw) */
    Ifx_Strict_32Bit SH_EN_3 : 1;             /**< \brief [26:26] Shift enable channel 3 (rw) */
    Ifx_Strict_32Bit SWAP_3 : 1;              /**< \brief [27:27] Swap outputs DTM[i]_CH[3]_OUT0 and DTM[i]_CH[3]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_3 : 2;               /**< \brief [29:28] Output 1 function channel 3 (rw) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_CH_CTRL1_Bits;

/** \\brief  CDTM6 DTM5 channel control register 2 */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH_CTRL2_Bits
{
    Ifx_Strict_32Bit POL0_0 : 1;              /**< \brief [0:0] Polarity on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit OC0_0 : 1;               /**< \brief [1:1] Output 0 control channel 0 (rw) */
    Ifx_Strict_32Bit SL0_0 : 1;               /**< \brief [2:2] Signal level on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit DT0_0 : 1;               /**< \brief [3:3] Dead time path enable on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit POL1_0 : 1;              /**< \brief [4:4] Polarity on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit OC1_0 : 1;               /**< \brief [5:5] Output 1 control channel 0 (rw) */
    Ifx_Strict_32Bit SL1_0 : 1;               /**< \brief [6:6] Signal level on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit DT1_0 : 1;               /**< \brief [7:7] Dead time path enable on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit POL0_1 : 1;              /**< \brief [8:8] Polarity on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit OC0_1 : 1;               /**< \brief [9:9] Output 0 control channel 1 (rw) */
    Ifx_Strict_32Bit SL0_1 : 1;               /**< \brief [10:10] Signal level on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit DT0_1 : 1;               /**< \brief [11:11] Dead time path enable on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit POL1_1 : 1;              /**< \brief [12:12] Polarity on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit OC1_1 : 1;               /**< \brief [13:13] Output 1 control channel 1 (rw) */
    Ifx_Strict_32Bit SL1_1 : 1;               /**< \brief [14:14] Signal level on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit DT1_1 : 1;               /**< \brief [15:15] Dead time path enable on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit POL0_2 : 1;              /**< \brief [16:16] Polarity on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit OC0_2 : 1;               /**< \brief [17:17] Output 0 control channel 2 (rw) */
    Ifx_Strict_32Bit SL0_2 : 1;               /**< \brief [18:18] Signal level on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit DT0_2 : 1;               /**< \brief [19:19] Dead time path enable on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit POL1_2 : 1;              /**< \brief [20:20] Polarity on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit OC1_2 : 1;               /**< \brief [21:21] Output 1 control channel 2 (rw) */
    Ifx_Strict_32Bit SL1_2 : 1;               /**< \brief [22:22] Signal level on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit DT1_2 : 1;               /**< \brief [23:23] Dead time path enable on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit POL0_3 : 1;              /**< \brief [24:24] Polarity on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit OC0_3 : 1;               /**< \brief [25:25] Output 0 control channel 3 (rw) */
    Ifx_Strict_32Bit SL0_3 : 1;               /**< \brief [26:26] Signal level on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit DT0_3 : 1;               /**< \brief [27:27] Dead time path enable on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit POL1_3 : 1;              /**< \brief [28:28] Polarity on output 1 channel 3 (rw) */
    Ifx_Strict_32Bit OC1_3 : 1;               /**< \brief [29:29] Output 1 control channel 3 (rw) */
    Ifx_Strict_32Bit SL1_3 : 1;               /**< \brief [30:30] Signal level on output 1 channel 3 (rw) */
    Ifx_Strict_32Bit DT1_3 : 1;               /**< \brief [31:31] Dead time path enable on output 1 channel 3 (rw) */
} Ifx_GTM_CDTM6_DTM5_CH_CTRL2_Bits;

/** \\brief  CDTM6 DTM5 channel control register 2 shadow */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH_CTRL2_SR_Bits
{
    Ifx_Strict_32Bit POL0_0_SR : 1;           /**< \brief [0:0] Polarity on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC0_0_SR : 1;            /**< \brief [1:1] Output 0 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL0_0_SR : 1;            /**< \brief [2:2] Signal level on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT0_0_SR : 1;            /**< \brief [3:3] Dead time path enable on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL1_0_SR : 1;           /**< \brief [4:4] Polarity on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC1_0_SR : 1;            /**< \brief [5:5] Output 1 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL1_0_SR : 1;            /**< \brief [6:6] Signal level on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT1_0_SR : 1;            /**< \brief [7:7] Dead time path enable on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL0_1_SR : 1;           /**< \brief [8:8] Polarity on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC0_1_SR : 1;            /**< \brief [9:9] Output 0 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL0_1_SR : 1;            /**< \brief [10:10] Signal level on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT0_1_SR : 1;            /**< \brief [11:11] Dead time path enable on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL1_1_SR : 1;           /**< \brief [12:12] Polarity on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC1_1_SR : 1;            /**< \brief [13:13] Output 1 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL1_1_SR : 1;            /**< \brief [14:14] Signal level on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT1_1_SR : 1;            /**< \brief [15:15] Dead time path enable on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL0_2_SR : 1;           /**< \brief [16:16] Polarity on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC0_2_SR : 1;            /**< \brief [17:17] Output 0 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL0_2_SR : 1;            /**< \brief [18:18] Signal level on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT0_2_SR : 1;            /**< \brief [19:19] Dead time path enable on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL1_2_SR : 1;           /**< \brief [20:20] Polarity on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC1_2_SR : 1;            /**< \brief [21:21] Output 1 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL1_2_SR : 1;            /**< \brief [22:22] Signal level on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT1_2_SR : 1;            /**< \brief [23:23] Dead time path enable on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL0_3_SR : 1;           /**< \brief [24:24] Polarity on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC0_3_SR : 1;            /**< \brief [25:25] Output 0 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL0_3_SR : 1;            /**< \brief [26:26] Signal level on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT0_3_SR : 1;            /**< \brief [27:27] Dead time path enable on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit POL1_3_SR : 1;           /**< \brief [28:28] Polarity on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC1_3_SR : 1;            /**< \brief [29:29] Output 1 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL1_3_SR : 1;            /**< \brief [30:30] Signal level on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT1_3_SR : 1;            /**< \brief [31:31] Dead time path enable on output 1 channel 3 shadow register (rw) */
} Ifx_GTM_CDTM6_DTM5_CH_CTRL2_SR_Bits;

/** \\brief  CDTM6 DTM5 channel control register 3 */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH_CTRL3_Bits
{
    Ifx_Strict_32Bit CII0 : 1;                /**< \brief [0:0] Combinational input invert channel 0 (rw) */
    Ifx_Strict_32Bit CIS0 : 1;                /**< \brief [1:1] Combinational input select channel 0 (rw) */
    Ifx_Strict_32Bit TSEL0_0 : 1;             /**< \brief [2:2] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_0 : 1;             /**< \brief [3:3] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII1 : 1;                /**< \brief [8:8] Combinational input invert channel 1 (rw) */
    Ifx_Strict_32Bit CIS1 : 1;                /**< \brief [9:9] Combinational input select channel 1 (rw) */
    Ifx_Strict_32Bit TSEL0_1 : 1;             /**< \brief [10:10] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_1 : 1;             /**< \brief [11:11] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII2 : 1;                /**< \brief [16:16] Combinational input invert channel 2 (rw) */
    Ifx_Strict_32Bit CIS2 : 1;                /**< \brief [17:17] Combinational input select channel 2 (rw) */
    Ifx_Strict_32Bit TSEL0_2 : 1;             /**< \brief [18:18] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_2 : 1;             /**< \brief [19:19] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII3 : 1;                /**< \brief [24:24] Combinational input invert channel 3 (rw) */
    Ifx_Strict_32Bit CIS3 : 1;                /**< \brief [25:25] Combinational input select channel 3 (rw) */
    Ifx_Strict_32Bit TSEL0_3 : 1;             /**< \brief [26:26] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_3 : 1;             /**< \brief [27:27] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_CH_CTRL3_Bits;

/** \\brief  CDTM6 DTM5 channel shadow register */
typedef struct _Ifx_GTM_CDTM6_DTM5_CH_SR_Bits
{
    Ifx_Strict_32Bit SL0_0_SR_SR : 1;         /**< \brief [0:0] Shadow register for bit SL0_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_0_SR_SR : 1;         /**< \brief [1:1] Shadow register for bit SL1_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_1_SR_SR : 1;         /**< \brief [2:2] Shadow register for bit SL0_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_1_SR_SR : 1;         /**< \brief [3:3] Shadow register for bit SL1_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_2_SR_SR : 1;         /**< \brief [4:4] Shadow register for bit SL0_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_2_SR_SR : 1;         /**< \brief [5:5] Shadow register for bit SL1_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_3_SR_SR : 1;         /**< \brief [6:6] Shadow register for bit SL0_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_3_SR_SR : 1;         /**< \brief [7:7] Shadow register for bit SL1_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_CH_SR_Bits;

/** \\brief  CDTM6 DTM5 global configuration and control register */
typedef struct _Ifx_GTM_CDTM6_DTM5_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_SEL : 2;             /**< \brief [1:0] Clock source select (rw) */
    Ifx_Strict_32Bit DTM_SEL : 2;             /**< \brief [3:2] Select DTM update and SHUT_OFF reset signal (rw) */
    Ifx_Strict_32Bit UPD_MODE : 3;            /**< \brief [6:4] Update mode (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SR_UPD_EN : 1;           /**< \brief [8:8] shadow register update enable (rw) */
    Ifx_Strict_32Bit reserved_9 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHUT_OFF_RST : 1;        /**< \brief [16:16] Shut off reset (rw) */
    Ifx_Strict_32Bit reserved_17 : 15;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_CTRL_Bits;

/** \\brief  CDTM6 DTM5 phase shift unit configuration and control register */
typedef struct _Ifx_GTM_CDTM6_DTM5_PS_CTRL_Bits
{
    Ifx_Strict_32Bit RELBLK : 10;             /**< \brief [9:0] reload value blanking window (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PSU_IN_SEL : 1;          /**< \brief [16:16] PSU input select (rw) */
    Ifx_Strict_32Bit IN_POL : 1;              /**< \brief [17:17] input polarity (rw) */
    Ifx_Strict_32Bit TIM_SEL : 1;             /**< \brief [18:18] TIM input select (rw) */
    Ifx_Strict_32Bit reserved_19 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHIFT_SEL : 2;           /**< \brief [21:20] shift select (rw) */
    Ifx_Strict_32Bit reserved_22 : 10;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM6_DTM5_PS_CTRL_Bits;

/** \\brief  CDTM0 DTM2 global configuration and control register */
typedef struct _Ifx_GTM_CDTM_DTM2_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_SEL : 2;             /**< \brief [1:0] Clock source select (rw) */
    Ifx_Strict_32Bit DTM_SEL : 2;             /**< \brief [3:2] Select DTM update and SHUT_OFF reset signal (rw) */
    Ifx_Strict_32Bit UPD_MODE : 3;            /**< \brief [6:4] Update mode (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SR_UPD_EN : 1;           /**< \brief [8:8] shadow register update enable (rw) */
    Ifx_Strict_32Bit reserved_9 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHUT_OFF_RST : 1;        /**< \brief [16:16] Shut off reset (rw) */
    Ifx_Strict_32Bit reserved_17 : 15;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM_DTM2_CTRL_Bits;

/** \\brief  CDTM0 DTM3 global configuration and control register */
typedef struct _Ifx_GTM_CDTM_DTM3_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_SEL : 2;             /**< \brief [1:0] Clock source select (rw) */
    Ifx_Strict_32Bit DTM_SEL : 2;             /**< \brief [3:2] Select DTM update and SHUT_OFF reset signal (rw) */
    Ifx_Strict_32Bit UPD_MODE : 3;            /**< \brief [6:4] Update mode (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SR_UPD_EN : 1;           /**< \brief [8:8] shadow register update enable (rw) */
    Ifx_Strict_32Bit reserved_9 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHUT_OFF_RST : 1;        /**< \brief [16:16] Shut off reset (rw) */
    Ifx_Strict_32Bit reserved_17 : 15;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM_DTM3_CTRL_Bits;

/** \\brief  CDTM0 DTM0 channel control register 1 */
typedef struct _Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits
{
    Ifx_Strict_32Bit O1SEL_0 : 1;             /**< \brief [0:0] Output 1 select channel 0 (rw) */
    Ifx_Strict_32Bit I1SEL_0 : 1;             /**< \brief [1:1] Input 1 select channel 0 (rw) */
    Ifx_Strict_32Bit reserved_2 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SWAP_0 : 1;              /**< \brief [3:3] Swap outputs DTM[i]_CH[0]_OUT0 and DTM[i]_CH[0]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_0 : 2;               /**< \brief [5:4] Output 1 function channel 0 (rw) */
    Ifx_Strict_32Bit XDT_EN_0_1 : 1;          /**< \brief [6:6] Cross dead time enable on channel 0 and 1 (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_1 : 1;             /**< \brief [8:8] Output 1 select channel 1 (rw) */
    Ifx_Strict_32Bit I1SEL_1 : 1;             /**< \brief [9:9] Input 1 select channel 1 (rw) */
    Ifx_Strict_32Bit SH_EN_1 : 1;             /**< \brief [10:10] Shift enable channel 1 (rw) */
    Ifx_Strict_32Bit SWAP_1 : 1;              /**< \brief [11:11] Swap outputs DTM[i]_CH[1]_OUT0 and DTM[i]_CH[1]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_1 : 2;               /**< \brief [13:12] Output 1 function channel 1 (rw) */
    Ifx_Strict_32Bit reserved_14 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_2 : 1;             /**< \brief [16:16] Output 1 select channel 2 (rw) */
    Ifx_Strict_32Bit I1SEL_2 : 1;             /**< \brief [17:17] Input 1 select channel 2 (rw) */
    Ifx_Strict_32Bit SH_EN_2 : 1;             /**< \brief [18:18] Shift enable channel 2 (rw) */
    Ifx_Strict_32Bit SWAP_2 : 1;              /**< \brief [19:19] Swap outputs DTM[i]_CH[2]_OUT0 and DTM[i]_CH[2]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_2 : 2;               /**< \brief [21:20] Output 1 function channel 2 (rw) */
    Ifx_Strict_32Bit XDT_EN_2_3 : 1;          /**< \brief [22:22] Cross dead time enable on channel 0 and 1 (rw) */
    Ifx_Strict_32Bit reserved_23 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit O1SEL_3 : 1;             /**< \brief [24:24] Output 1 select channel 3 (rw) */
    Ifx_Strict_32Bit I1SEL_3 : 1;             /**< \brief [25:25] Input 1 select channel 3 (rw) */
    Ifx_Strict_32Bit SH_EN_3 : 1;             /**< \brief [26:26] Shift enable channel 3 (rw) */
    Ifx_Strict_32Bit SWAP_3 : 1;              /**< \brief [27:27] Swap outputs DTM[i]_CH[3]_OUT0 and DTM[i]_CH[3]_OUT1 (before final output register) (rw) */
    Ifx_Strict_32Bit O1F_3 : 2;               /**< \brief [29:28] Output 1 function channel 3 (rw) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits;

/** \\brief  CDTM0 DTM0 channel control register 2 */
typedef struct _Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits
{
    Ifx_Strict_32Bit POL0_0 : 1;              /**< \brief [0:0] Polarity on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit OC0_0 : 1;               /**< \brief [1:1] Output 0 control channel 0 (rw) */
    Ifx_Strict_32Bit SL0_0 : 1;               /**< \brief [2:2] Signal level on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit DT0_0 : 1;               /**< \brief [3:3] Dead time path enable on output 0 channel 0 (rw) */
    Ifx_Strict_32Bit POL1_0 : 1;              /**< \brief [4:4] Polarity on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit OC1_0 : 1;               /**< \brief [5:5] Output 1 control channel 0 (rw) */
    Ifx_Strict_32Bit SL1_0 : 1;               /**< \brief [6:6] Signal level on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit DT1_0 : 1;               /**< \brief [7:7] Dead time path enable on output 1 channel 0 (rw) */
    Ifx_Strict_32Bit POL0_1 : 1;              /**< \brief [8:8] Polarity on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit OC0_1 : 1;               /**< \brief [9:9] Output 0 control channel 1 (rw) */
    Ifx_Strict_32Bit SL0_1 : 1;               /**< \brief [10:10] Signal level on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit DT0_1 : 1;               /**< \brief [11:11] Dead time path enable on output 0 channel 1 (rw) */
    Ifx_Strict_32Bit POL1_1 : 1;              /**< \brief [12:12] Polarity on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit OC1_1 : 1;               /**< \brief [13:13] Output 1 control channel 1 (rw) */
    Ifx_Strict_32Bit SL1_1 : 1;               /**< \brief [14:14] Signal level on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit DT1_1 : 1;               /**< \brief [15:15] Dead time path enable on output 1 channel 1 (rw) */
    Ifx_Strict_32Bit POL0_2 : 1;              /**< \brief [16:16] Polarity on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit OC0_2 : 1;               /**< \brief [17:17] Output 0 control channel 2 (rw) */
    Ifx_Strict_32Bit SL0_2 : 1;               /**< \brief [18:18] Signal level on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit DT0_2 : 1;               /**< \brief [19:19] Dead time path enable on output 0 channel 2 (rw) */
    Ifx_Strict_32Bit POL1_2 : 1;              /**< \brief [20:20] Polarity on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit OC1_2 : 1;               /**< \brief [21:21] Output 1 control channel 2 (rw) */
    Ifx_Strict_32Bit SL1_2 : 1;               /**< \brief [22:22] Signal level on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit DT1_2 : 1;               /**< \brief [23:23] Dead time path enable on output 1 channel 2 (rw) */
    Ifx_Strict_32Bit POL0_3 : 1;              /**< \brief [24:24] Polarity on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit OC0_3 : 1;               /**< \brief [25:25] Output 0 control channel 3 (rw) */
    Ifx_Strict_32Bit SL0_3 : 1;               /**< \brief [26:26] Signal level on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit DT0_3 : 1;               /**< \brief [27:27] Dead time path enable on output 0 channel 3 (rw) */
    Ifx_Strict_32Bit POL1_3 : 1;              /**< \brief [28:28] Polarity on output 1 channel 3 (rw) */
    Ifx_Strict_32Bit OC1_3 : 1;               /**< \brief [29:29] Output 1 control channel 3 (rw) */
    Ifx_Strict_32Bit SL1_3 : 1;               /**< \brief [30:30] Signal level on output 1 channel 3 (rw) */
    Ifx_Strict_32Bit DT1_3 : 1;               /**< \brief [31:31] Dead time path enable on output 1 channel 3 (rw) */
} Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits;

/** \\brief  CDTM0 DTM0 channel control register 2 shadow */
typedef struct _Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits
{
    Ifx_Strict_32Bit POL0_0_SR : 1;           /**< \brief [0:0] Polarity on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC0_0_SR : 1;            /**< \brief [1:1] Output 0 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL0_0_SR : 1;            /**< \brief [2:2] Signal level on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT0_0_SR : 1;            /**< \brief [3:3] Dead time path enable on output 0 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL1_0_SR : 1;           /**< \brief [4:4] Polarity on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit OC1_0_SR : 1;            /**< \brief [5:5] Output 1 control channel 0 shadow register (rw) */
    Ifx_Strict_32Bit SL1_0_SR : 1;            /**< \brief [6:6] Signal level on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit DT1_0_SR : 1;            /**< \brief [7:7] Dead time path enable on output 1 channel 0 shadow register (rw) */
    Ifx_Strict_32Bit POL0_1_SR : 1;           /**< \brief [8:8] Polarity on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC0_1_SR : 1;            /**< \brief [9:9] Output 0 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL0_1_SR : 1;            /**< \brief [10:10] Signal level on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT0_1_SR : 1;            /**< \brief [11:11] Dead time path enable on output 0 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL1_1_SR : 1;           /**< \brief [12:12] Polarity on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit OC1_1_SR : 1;            /**< \brief [13:13] Output 1 control channel 1 shadow register (rw) */
    Ifx_Strict_32Bit SL1_1_SR : 1;            /**< \brief [14:14] Signal level on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit DT1_1_SR : 1;            /**< \brief [15:15] Dead time path enable on output 1 channel 1 shadow register (rw) */
    Ifx_Strict_32Bit POL0_2_SR : 1;           /**< \brief [16:16] Polarity on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC0_2_SR : 1;            /**< \brief [17:17] Output 0 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL0_2_SR : 1;            /**< \brief [18:18] Signal level on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT0_2_SR : 1;            /**< \brief [19:19] Dead time path enable on output 0 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL1_2_SR : 1;           /**< \brief [20:20] Polarity on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit OC1_2_SR : 1;            /**< \brief [21:21] Output 1 control channel 2 shadow register (rw) */
    Ifx_Strict_32Bit SL1_2_SR : 1;            /**< \brief [22:22] Signal level on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit DT1_2_SR : 1;            /**< \brief [23:23] Dead time path enable on output 1 channel 2 shadow register (rw) */
    Ifx_Strict_32Bit POL0_3_SR : 1;           /**< \brief [24:24] Polarity on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC0_3_SR : 1;            /**< \brief [25:25] Output 0 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL0_3_SR : 1;            /**< \brief [26:26] Signal level on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT0_3_SR : 1;            /**< \brief [27:27] Dead time path enable on output 0 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit POL1_3_SR : 1;           /**< \brief [28:28] Polarity on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit OC1_3_SR : 1;            /**< \brief [29:29] Output 1 control channel 3 shadow register (rw) */
    Ifx_Strict_32Bit SL1_3_SR : 1;            /**< \brief [30:30] Signal level on output 1 channel 3 shadow register (rw) */
    Ifx_Strict_32Bit DT1_3_SR : 1;            /**< \brief [31:31] Dead time path enable on output 1 channel 3 shadow register (rw) */
} Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits;

/** \\brief  CDTM0 DTM0 channel control register 3 */
typedef struct _Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits
{
    Ifx_Strict_32Bit CII0 : 1;                /**< \brief [0:0] Combinational input invert channel 0 (rw) */
    Ifx_Strict_32Bit CIS0 : 1;                /**< \brief [1:1] Combinational input select channel 0 (rw) */
    Ifx_Strict_32Bit TSEL0_0 : 1;             /**< \brief [2:2] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_0 : 1;             /**< \brief [3:3] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII1 : 1;                /**< \brief [8:8] Combinational input invert channel 1 (rw) */
    Ifx_Strict_32Bit CIS1 : 1;                /**< \brief [9:9] Combinational input select channel 1 (rw) */
    Ifx_Strict_32Bit TSEL0_1 : 1;             /**< \brief [10:10] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_1 : 1;             /**< \brief [11:11] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII2 : 1;                /**< \brief [16:16] Combinational input invert channel 2 (rw) */
    Ifx_Strict_32Bit CIS2 : 1;                /**< \brief [17:17] Combinational input select channel 2 (rw) */
    Ifx_Strict_32Bit TSEL0_2 : 1;             /**< \brief [18:18] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_2 : 1;             /**< \brief [19:19] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CII3 : 1;                /**< \brief [24:24] Combinational input invert channel 3 (rw) */
    Ifx_Strict_32Bit CIS3 : 1;                /**< \brief [25:25] Combinational input select channel 3 (rw) */
    Ifx_Strict_32Bit TSEL0_3 : 1;             /**< \brief [26:26] Input selection for dead time / edge trigger generation (rw) */
    Ifx_Strict_32Bit TSEL1_3 : 1;             /**< \brief [27:27] Input selection combinational logic path (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits;

/** \\brief  CDTM0 DTM0 channel 0 dead time reload values */
typedef struct _Ifx_GTM_CDTM_DTM_CH_DTV_Bits
{
    Ifx_Strict_32Bit RELRISE : 10;            /**< \brief [9:0] Reload value for rising edge dead time (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RELFALL : 10;            /**< \brief [25:16] Reload value for falling edge dead time (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM_DTM_CH_DTV_Bits;

/** \\brief  CDTM DTM0 channel shadow reg0ster */
typedef struct _Ifx_GTM_CDTM_DTM_CH_SR_Bits
{
    Ifx_Strict_32Bit SL0_0_SR_SR : 1;         /**< \brief [0:0] Shadow register for bit SL0_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_0_SR_SR : 1;         /**< \brief [1:1] Shadow register for bit SL1_0_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_1_SR_SR : 1;         /**< \brief [2:2] Shadow register for bit SL0_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_1_SR_SR : 1;         /**< \brief [3:3] Shadow register for bit SL1_1_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_2_SR_SR : 1;         /**< \brief [4:4] Shadow register for bit SL0_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_2_SR_SR : 1;         /**< \brief [5:5] Shadow register for bit SL1_2_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL0_3_SR_SR : 1;         /**< \brief [6:6] Shadow register for bit SL0_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit SL1_3_SR_SR : 1;         /**< \brief [7:7] Shadow register for bit SL1_3_SR of register DTM[i]_CH_CTRL2_SR (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_CDTM_DTM_CH_SR_Bits;

/** \\brief  CDTM0 DTM0 global configuration and control register */
typedef struct _Ifx_GTM_CDTM_DTM_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_SEL : 2;             /**< \brief [1:0] Clock source select (rw) */
    Ifx_Strict_32Bit DTM_SEL : 2;             /**< \brief [3:2] Select DTM update and SHUT_OFF reset signal (rw) */
    Ifx_Strict_32Bit UPD_MODE : 3;            /**< \brief [6:4] Update mode (rw) */
    Ifx_Strict_32Bit reserved_7 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SR_UPD_EN : 1;           /**< \brief [8:8] shadow register update enable (rw) */
    Ifx_Strict_32Bit reserved_9 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHUT_OFF_RST : 1;        /**< \brief [16:16] Shut off reset (rw) */
    Ifx_Strict_32Bit reserved_17 : 15;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM_DTM_CTRL_Bits;

/** \\brief  CDTM0 DTM0 phase shift unit configuration and control register */
typedef struct _Ifx_GTM_CDTM_DTM_PS_CTRL_Bits
{
    Ifx_Strict_32Bit RELBLK : 10;             /**< \brief [9:0] reload value blanking window (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PSU_IN_SEL : 1;          /**< \brief [16:16] PSU input select (rw) */
    Ifx_Strict_32Bit IN_POL : 1;              /**< \brief [17:17] input polarity (rw) */
    Ifx_Strict_32Bit TIM_SEL : 1;             /**< \brief [18:18] TIM input select (rw) */
    Ifx_Strict_32Bit reserved_19 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SHIFT_SEL : 2;           /**< \brief [21:20] shift select (rw) */
    Ifx_Strict_32Bit reserved_22 : 10;        /**< \brief \internal Reserved */
} Ifx_GTM_CDTM_DTM_PS_CTRL_Bits;

/** \\brief  GTM Configuration register */
typedef struct _Ifx_GTM_CFG_Bits
{
    Ifx_Strict_32Bit SRC_IN_MUX : 1;          /**< \brief [0:0] GTM_TIM[i]_AUX_IN input source selection (rw) */
    Ifx_Strict_32Bit reserved_1 : 31;         /**< \brief \internal Reserved */
} Ifx_GTM_CFG_Bits;

/** \\brief  Clock Control Register */
typedef struct _Ifx_GTM_CLC_Bits
{
    Ifx_Strict_32Bit DISR : 1;                /**< \brief [0:0] Module Disable Request Bit (rw) */
    Ifx_Strict_32Bit DISS : 1;                /**< \brief [1:1] Module Disable Status Bit (r) */
    Ifx_Strict_32Bit reserved_2 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EDIS : 1;                /**< \brief [3:3] Sleep Mode Enable Control (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_CLC_Bits;

/** \\brief  GTM Cluster Clock Configuration */
typedef struct _Ifx_GTM_CLS_CLK_CFG_Bits
{
    Ifx_Strict_32Bit CLS0_CLK_DIV : 2;        /**< \brief [1:0] Cluster 0 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS1_CLK_DIV : 2;        /**< \brief [3:2] Cluster 1 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS2_CLK_DIV : 2;        /**< \brief [5:4] Cluster 2 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS3_CLK_DIV : 2;        /**< \brief [7:6] Cluster 3 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS4_CLK_DIV : 2;        /**< \brief [9:8] Cluster 4 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS5_CLK_DIV : 2;        /**< \brief [11:10] Cluster 5 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS6_CLK_DIV : 2;        /**< \brief [13:12] Cluster 6 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS7_CLK_DIV : 2;        /**< \brief [15:14] Cluster 7 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS8_CLK_DIV : 2;        /**< \brief [17:16] Cluster 8 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS9_CLK_DIV : 2;        /**< \brief [19:18] Cluster 9 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS10_CLK_DIV : 2;       /**< \brief [21:20] Cluster 10 Clock Divider (rw) */
    Ifx_Strict_32Bit CLS11_CLK_DIV : 2;       /**< \brief [23:22] Cluster 11 Clock Divider (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CLS_CLK_CFG_Bits;

/** \\brief  CMP error interrupt enable register */
typedef struct _Ifx_GTM_CMP_EIRQ_EN_Bits
{
    Ifx_Strict_32Bit ABWC0_EN_EIRQ : 1;       /**< \brief [0:0] enable ABWC0 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC1_EN_EIRQ : 1;       /**< \brief [1:1] enable ABWC1 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC2_EN_EIRQ : 1;       /**< \brief [2:2] enable ABWC2 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC3_EN_EIRQ : 1;       /**< \brief [3:3] enable ABWC3 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC4_EN_EIRQ : 1;       /**< \brief [4:4] enable ABWC4 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC5_EN_EIRQ : 1;       /**< \brief [5:5] enable ABWC5 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC6_EN_EIRQ : 1;       /**< \brief [6:6] enable ABWC6 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC7_EN_EIRQ : 1;       /**< \brief [7:7] enable ABWC7 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC8_EN_EIRQ : 1;       /**< \brief [8:8] enable ABWC8 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC9_EN_EIRQ : 1;       /**< \brief [9:9] enable ABWC9 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC10_EN_EIRQ : 1;      /**< \brief [10:10] enable ABWC10 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit ABWC11_EN_EIRQ : 1;      /**< \brief [11:11] enable ABWC11 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC0_EN_EIRQ : 1;       /**< \brief [12:12] enable TBWC0 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC1_EN_EIRQ : 1;       /**< \brief [13:13] enable TBWC1 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC2_EN_EIRQ : 1;       /**< \brief [14:14] enable TBWC2 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC3_EN_EIRQ : 1;       /**< \brief [15:15] enable TBWC3 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC4_EN_EIRQ : 1;       /**< \brief [16:16] enable TBWC4 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC5_EN_EIRQ : 1;       /**< \brief [17:17] enable TBWC5 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC6_EN_EIRQ : 1;       /**< \brief [18:18] enable TBWC6 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC7_EN_EIRQ : 1;       /**< \brief [19:19] enable TBWC7 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC8_EN_EIRQ : 1;       /**< \brief [20:20] enable TBWC8 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC9_EN_EIRQ : 1;       /**< \brief [21:21] enable TBWC9 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC10_EN_EIRQ : 1;      /**< \brief [22:22] enable TBWC10 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit TBWC11_EN_EIRQ : 1;      /**< \brief [23:23] enable TBWC11 interrupt source for CMP_EIRQ line (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMP_EIRQ_EN_Bits;

/** \\brief  CMP comparator enable register */
typedef struct _Ifx_GTM_CMP_EN_Bits
{
    Ifx_Strict_32Bit ABWC0_EN : 1;            /**< \brief [0:0] Enable comparator 0 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC1_EN : 1;            /**< \brief [1:1] Enable comparator 1 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC2_EN : 1;            /**< \brief [2:2] Enable comparator 2 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC3_EN : 1;            /**< \brief [3:3] Enable comparator 3 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC4_EN : 1;            /**< \brief [4:4] Enable comparator 4 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC5_EN : 1;            /**< \brief [5:5] Enable comparator 5 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC6_EN : 1;            /**< \brief [6:6] Enable comparator 6 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC7_EN : 1;            /**< \brief [7:7] Enable comparator 7 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC8_EN : 1;            /**< \brief [8:8] Enable comparator 8 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC9_EN : 1;            /**< \brief [9:9] Enable comparator 9 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC10_EN : 1;           /**< \brief [10:10] Enable comparator 10 in ABWC (rw) */
    Ifx_Strict_32Bit ABWC11_EN : 1;           /**< \brief [11:11] Enable comparator 11 in ABWC (rw) */
    Ifx_Strict_32Bit TBWC0_EN : 1;            /**< \brief [12:12] Enable comparator 0 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC1_EN : 1;            /**< \brief [13:13] Enable comparator 1 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC2_EN : 1;            /**< \brief [14:14] Enable comparator 2 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC3_EN : 1;            /**< \brief [15:15] Enable comparator 3 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC4_EN : 1;            /**< \brief [16:16] Enable comparator 4 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC5_EN : 1;            /**< \brief [17:17] Enable comparator 5 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC6_EN : 1;            /**< \brief [18:18] Enable comparator 6 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC7_EN : 1;            /**< \brief [19:19] Enable comparator 7 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC8_EN : 1;            /**< \brief [20:20] Enable comparator 8 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC9_EN : 1;            /**< \brief [21:21] Enable comparator 9 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC10_EN : 1;           /**< \brief [22:22] Enable comparator 10 in TBWC (rw) */
    Ifx_Strict_32Bit TBWC11_EN : 1;           /**< \brief [23:23] Enable comparator 11 in TBWC (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMP_EN_Bits;

/** \\brief  CMP interrupt enable register */
typedef struct _Ifx_GTM_CMP_IRQ_EN_Bits
{
    Ifx_Strict_32Bit ABWC0_EN_IRQ : 1;        /**< \brief [0:0] Enable ABWC0 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC1_EN_IRQ : 1;        /**< \brief [1:1] Enable ABWC1 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC2_EN_IRQ : 1;        /**< \brief [2:2] Enable ABWC2 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC3_EN_IRQ : 1;        /**< \brief [3:3] Enable ABWC3 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC4_EN_IRQ : 1;        /**< \brief [4:4] Enable ABWC4 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC5_EN_IRQ : 1;        /**< \brief [5:5] Enable ABWC5 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC6_EN_IRQ : 1;        /**< \brief [6:6] Enable ABWC6 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC7_EN_IRQ : 1;        /**< \brief [7:7] Enable ABWC7 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC8_EN_IRQ : 1;        /**< \brief [8:8] Enable ABWC8 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC9_EN_IRQ : 1;        /**< \brief [9:9] Enable ABWC9 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC10_EN_IRQ : 1;       /**< \brief [10:10] Enable ABWC10 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit ABWC11_EN_IRQ : 1;       /**< \brief [11:11] Enable ABWC11 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC0_EN_IRQ : 1;        /**< \brief [12:12] Enable TBWC0 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC1_EN_IRQ : 1;        /**< \brief [13:13] Enable TBWC1 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC2_EN_IRQ : 1;        /**< \brief [14:14] Enable TBWC2 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC3_EN_IRQ : 1;        /**< \brief [15:15] Enable TBWC3 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC4_EN_IRQ : 1;        /**< \brief [16:16] Enable TBWC4 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC5_EN_IRQ : 1;        /**< \brief [17:17] Enable TBWC5 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC6_EN_IRQ : 1;        /**< \brief [18:18] Enable TBWC6 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC7_EN_IRQ : 1;        /**< \brief [19:19] Enable TBWC7 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC8_EN_IRQ : 1;        /**< \brief [20:20] Enable TBWC8 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC9_EN_IRQ : 1;        /**< \brief [21:21] Enable TBWC9 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC10_EN_IRQ : 1;       /**< \brief [22:22] Enable TBWC10 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit TBWC11_EN_IRQ : 1;       /**< \brief [23:23] Enable TBWC11 interrupt source for CMP_IRQ line (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMP_IRQ_EN_Bits;

/** \\brief  CMP interrupt force register */
typedef struct _Ifx_GTM_CMP_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_ABWC0 : 1;           /**< \brief [0:0] Trigger ABWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC1 : 1;           /**< \brief [1:1] Trigger ABWC1 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC2 : 1;           /**< \brief [2:2] Trigger ABWC2 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC3 : 1;           /**< \brief [3:3] Trigger ABWC3 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC4 : 1;           /**< \brief [4:4] Trigger ABWC4 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC5 : 1;           /**< \brief [5:5] Trigger ABWC5 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC6 : 1;           /**< \brief [6:6] Trigger ABWC6 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC7 : 1;           /**< \brief [7:7] Trigger ABWC7 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC8 : 1;           /**< \brief [8:8] Trigger ABWC8 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC9 : 1;           /**< \brief [9:9] Trigger ABWC9 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC10 : 1;          /**< \brief [10:10] Trigger ABWC10 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ABWC11 : 1;          /**< \brief [11:11] Trigger ABWC11 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC0 : 1;           /**< \brief [12:12] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC1 : 1;           /**< \brief [13:13] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC2 : 1;           /**< \brief [14:14] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC3 : 1;           /**< \brief [15:15] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC4 : 1;           /**< \brief [16:16] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC5 : 1;           /**< \brief [17:17] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC6 : 1;           /**< \brief [18:18] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC7 : 1;           /**< \brief [19:19] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC8 : 1;           /**< \brief [20:20] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC9 : 1;           /**< \brief [21:21] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC10 : 1;          /**< \brief [22:22] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TBWC11 : 1;          /**< \brief [23:23] Trigger TBWC0 bit in CMP_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMP_IRQ_FORCINT_Bits;

/** \\brief  CMP interrupt mode configuration register */
typedef struct _Ifx_GTM_CMP_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_CMP_IRQ_MODE_Bits;

/** \\brief  CMP event notification register */
typedef struct _Ifx_GTM_CMP_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit ABWC0 : 1;               /**< \brief [0:0] Error indication for ABWC0 (rw) */
    Ifx_Strict_32Bit ABWC1 : 1;               /**< \brief [1:1] Error indication for ABWC1 (rw) */
    Ifx_Strict_32Bit ABWC2 : 1;               /**< \brief [2:2] Error indication for ABWC2 (rw) */
    Ifx_Strict_32Bit ABWC3 : 1;               /**< \brief [3:3] Error indication for ABWC3 (rw) */
    Ifx_Strict_32Bit ABWC4 : 1;               /**< \brief [4:4] Error indication for ABWC4 (rw) */
    Ifx_Strict_32Bit ABWC5 : 1;               /**< \brief [5:5] Error indication for ABWC5 (rw) */
    Ifx_Strict_32Bit ABWC6 : 1;               /**< \brief [6:6] Error indication for ABWC6 (rw) */
    Ifx_Strict_32Bit ABWC7 : 1;               /**< \brief [7:7] Error indication for ABWC7 (rw) */
    Ifx_Strict_32Bit ABWC8 : 1;               /**< \brief [8:8] Error indication for ABWC8 (rw) */
    Ifx_Strict_32Bit ABWC9 : 1;               /**< \brief [9:9] Error indication for ABWC9 (rw) */
    Ifx_Strict_32Bit ABWC10 : 1;              /**< \brief [10:10] Error indication for ABWC10 (rw) */
    Ifx_Strict_32Bit ABWC11 : 1;              /**< \brief [11:11] Error indication for ABWC11 (rw) */
    Ifx_Strict_32Bit TBWC0 : 1;               /**< \brief [12:12] TOM sub-modules outputs bitwise comparator 0 error indication (rw) */
    Ifx_Strict_32Bit TBWC1 : 1;               /**< \brief [13:13] TOM sub-modules outputs bitwise comparator 1 error indication (rw) */
    Ifx_Strict_32Bit TBWC2 : 1;               /**< \brief [14:14] TOM sub-modules outputs bitwise comparator 2 error indication (rw) */
    Ifx_Strict_32Bit TBWC3 : 1;               /**< \brief [15:15] TOM sub-modules outputs bitwise comparator 3 error indication (rw) */
    Ifx_Strict_32Bit TBWC4 : 1;               /**< \brief [16:16] TOM sub-modules outputs bitwise comparator 4 error indication (rw) */
    Ifx_Strict_32Bit TBWC5 : 1;               /**< \brief [17:17] TOM sub-modules outputs bitwise comparator 5 error indication (rw) */
    Ifx_Strict_32Bit TBWC6 : 1;               /**< \brief [18:18] TOM sub-modules outputs bitwise comparator 6 error indication (rw) */
    Ifx_Strict_32Bit TBWC7 : 1;               /**< \brief [19:19] TOM sub-modules outputs bitwise comparator 7 error indication (rw) */
    Ifx_Strict_32Bit TBWC8 : 1;               /**< \brief [20:20] TOM sub-modules outputs bitwise comparator 8 error indication (rw) */
    Ifx_Strict_32Bit TBWC9 : 1;               /**< \brief [21:21] TOM sub-modules outputs bitwise comparator 9 error indication (rw) */
    Ifx_Strict_32Bit TBWC10 : 1;              /**< \brief [22:22] TOM sub-modules outputs bitwise comparator 10 error indication (rw) */
    Ifx_Strict_32Bit TBWC11 : 1;              /**< \brief [23:23] TOM sub-modules outputs bitwise comparator 11 error indication (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMP_IRQ_NOTIFY_Bits;

/** \\brief  CMU control for clock source 0 */
typedef struct _Ifx_GTM_CMU_CLK0_5_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_CNT : 24;            /**< \brief [23:0] Clock count (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_CLK0_5_CTRL_Bits;

/** \\brief  CMU control for clock source 6 */
typedef struct _Ifx_GTM_CMU_CLK_6_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_CNT : 24;            /**< \brief [23:0] Clock count. (rw) */
    Ifx_Strict_32Bit CLK6_SEL : 2;            /**< \brief [25:24] Clock source selection for CMU_CLK6 (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_CLK_6_CTRL_Bits;

/** \\brief  CMU control for clock source 7 */
typedef struct _Ifx_GTM_CMU_CLK_7_CTRL_Bits
{
    Ifx_Strict_32Bit CLK_CNT : 24;            /**< \brief [23:0] Clock count (rw) */
    Ifx_Strict_32Bit CLK7_SEL : 2;            /**< \brief [25:24] Clock source selection for CMU_CLK7. (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_CLK_7_CTRL_Bits;

/** \\brief  CMU control for clock source selection */
typedef struct _Ifx_GTM_CMU_CLK_CTRL_Bits
{
    Ifx_Strict_32Bit CLK0_EXT_DIVIDER : 1;    /**< \brief [0:0] Clock source selection for CMU_CLK_0_CTRL (rw) */
    Ifx_Strict_32Bit CLK1_EXT_DIVIDER : 1;    /**< \brief [1:1] Clock source selection for CMU_CLK_1_CTRL (rw) */
    Ifx_Strict_32Bit CLK2_EXT_DIVIDER : 1;    /**< \brief [2:2] Clock source selection for CMU_CLK_2_CTRL (rw) */
    Ifx_Strict_32Bit CLK3_EXT_DIVIDER : 1;    /**< \brief [3:3] Clock source selection for CMU_CLK_3_CTRL (rw) */
    Ifx_Strict_32Bit CLK4_EXT_DIVIDER : 1;    /**< \brief [4:4] Clock source selection for CMU_CLK_4_CTRL (rw) */
    Ifx_Strict_32Bit CLK5_EXT_DIVIDER : 1;    /**< \brief [5:5] Clock source selection for CMU_CLK_5_CTRL (rw) */
    Ifx_Strict_32Bit CLK6_EXT_DIVIDER : 1;    /**< \brief [6:6] Clock source selection for CMU_CLK_6_CTRL (rw) */
    Ifx_Strict_32Bit CLK7_EXT_DIVIDER : 1;    /**< \brief [7:7] Clock source selection for CMU_CLK_7_CTRL (rw) */
    Ifx_Strict_32Bit CLK8_EXT_DIVIDER : 1;    /**< \brief [8:8] Clock source selection for CMU_CLK8 (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_CLK_CTRL_Bits;

/** \\brief  CMU clock enable */
typedef struct _Ifx_GTM_CMU_CLK_EN_Bits
{
    Ifx_Strict_32Bit EN_CLK0 : 2;             /**< \brief [1:0] Enable clock source 0 (rw) */
    Ifx_Strict_32Bit EN_CLK1 : 2;             /**< \brief [3:2] Enable clock source 0 (rw) */
    Ifx_Strict_32Bit EN_CLK2 : 2;             /**< \brief [5:4] Enable clock source 0 (rw) */
    Ifx_Strict_32Bit EN_CLK3 : 2;             /**< \brief [7:6] Enable clock source 0 (rw) */
    Ifx_Strict_32Bit EN_CLK4 : 2;             /**< \brief [9:8] Enable clock source 0 (rw) */
    Ifx_Strict_32Bit EN_CLK5 : 2;             /**< \brief [11:10] Enable clock source 0 (rw) */
    Ifx_Strict_32Bit EN_CLK6 : 2;             /**< \brief [13:12] Enable clock source 0 (rw) */
    Ifx_Strict_32Bit EN_CLK7 : 2;             /**< \brief [15:14] Enable clock source 0 (rw) */
    Ifx_Strict_32Bit EN_ECLK0 : 2;            /**< \brief [17:16] Enable ECLK 0 generation sub-unit (rw) */
    Ifx_Strict_32Bit EN_ECLK1 : 2;            /**< \brief [19:18] Enable ECLK 1 generation sub-unit (rw) */
    Ifx_Strict_32Bit EN_ECLK2 : 2;            /**< \brief [21:20] Enable ECLK 2 generation sub-unit (rw) */
    Ifx_Strict_32Bit EN_FXCLK : 2;            /**< \brief [23:22] Enable all CMU_FXCLK, see bits 1:0 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_CLK_EN_Bits;

/** \\brief  CMU external clock 0 control denominator */
typedef struct _Ifx_GTM_CMU_ECLK_DEN_Bits
{
    Ifx_Strict_32Bit ECLK_DEN : 24;           /**< \brief [23:0] ECLK_DEN (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_ECLK_DEN_Bits;

/** \\brief  CMU external clock 0 control numerator */
typedef struct _Ifx_GTM_CMU_ECLK_NUM_Bits
{
    Ifx_Strict_32Bit ECLK_NUM : 24;           /**< \brief [23:0] ECLK_NUM (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_ECLK_NUM_Bits;

/** \\brief  CMU control FXCLK sub-unit input clock */
typedef struct _Ifx_GTM_CMU_FXCLK_CTRL_Bits
{
    Ifx_Strict_32Bit FXCLK_SEL : 4;           /**< \brief [3:0] Input clock selection for EN_FXCLK line. (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_FXCLK_CTRL_Bits;

/** \\brief  CMU global clock control denominator */
typedef struct _Ifx_GTM_CMU_GCLK_DEN_Bits
{
    Ifx_Strict_32Bit GCLK_DEN : 24;           /**< \brief [23:0] GCLK_DEN (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_GCLK_DEN_Bits;

/** \\brief  CMU global clock control numerator */
typedef struct _Ifx_GTM_CMU_GCLK_NUM_Bits
{
    Ifx_Strict_32Bit GCLK_NUM : 24;           /**< \brief [23:0] GCLK_NUM (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_GCLK_NUM_Bits;

/** \\brief  CMU synchronizing ARU and clock source */
typedef struct _Ifx_GTM_CMU_GLB_CTRL_Bits
{
    Ifx_Strict_32Bit ARU_ADDR_RSTGLB : 1;     /**< \brief [0:0] Reset ARU caddr counter and ARU dynamic route counter (rw) */
    Ifx_Strict_32Bit reserved_1 : 31;         /**< \brief \internal Reserved */
} Ifx_GTM_CMU_GLB_CTRL_Bits;

/** \\brief  GTM Global control register */
typedef struct _Ifx_GTM_CTRL_Bits
{
    Ifx_Strict_32Bit RF_PROT : 1;             /**< \brief [0:0] RST and FORCINT protection (rw) */
    Ifx_Strict_32Bit TO_MODE : 1;             /**< \brief [1:1] AEI timeout mode (rw) */
    Ifx_Strict_32Bit reserved_2 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TO_VAL : 5;              /**< \brief [8:4] AEI timeout value. (rw) */
    Ifx_Strict_32Bit reserved_9 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AEIM_CLUSTER : 4;        /**< \brief [15:12] AEIM cluster number (r) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_CTRL_Bits;

/** \\brief  DPLL Control Bits Register 0 for up to 32 Actions */
typedef struct _Ifx_GTM_DPLL_ACB_0_Bits
{
    Ifx_Strict_32Bit ACB_0 : 5;               /**< \brief [4:0] Action Control Bits of ACTION_z (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_1 : 5;               /**< \brief [12:8] Action Control Bits of ACTION_(i + 1) (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_2 : 5;               /**< \brief [20:16] Action Control Bits of ACTION_(i + 2) (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_3 : 5;               /**< \brief [28:24] Action Control Bits of ACTION_(i + 3) (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ACB_0_Bits;

/** \\brief  DPLL Control Bits Register 1 for up to 32 Actions */
typedef struct _Ifx_GTM_DPLL_ACB_1_Bits
{
    Ifx_Strict_32Bit ACB_0 : 5;               /**< \brief [4:0] Action Control Bits of ACTION_z (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_1 : 5;               /**< \brief [12:8] Action Control Bits of ACTION_(i + 1) (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_2 : 5;               /**< \brief [20:16] Action Control Bits of ACTION_(i + 2) (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_3 : 5;               /**< \brief [28:24] Action Control Bits of ACTION_(i + 3) (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ACB_1_Bits;

/** \\brief  DPLL Control Bits Register 2 for up to 32 Actions */
typedef struct _Ifx_GTM_DPLL_ACB_2_Bits
{
    Ifx_Strict_32Bit ACB_0 : 5;               /**< \brief [4:0] Action Control Bits of ACTION_z (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_1 : 5;               /**< \brief [12:8] Action Control Bits of ACTION_(i + 1) (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_2 : 5;               /**< \brief [20:16] Action Control Bits of ACTION_(i + 2) (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_3 : 5;               /**< \brief [28:24] Action Control Bits of ACTION_(i + 3) (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ACB_2_Bits;

/** \\brief  DPLL Control Bits Register 3 for up to 32 Actions */
typedef struct _Ifx_GTM_DPLL_ACB_3_Bits
{
    Ifx_Strict_32Bit ACB_0 : 5;               /**< \brief [4:0] Action Control Bits of ACTION_z (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_1 : 5;               /**< \brief [12:8] Action Control Bits of ACTION_(i + 1) (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_2 : 5;               /**< \brief [20:16] Action Control Bits of ACTION_(i + 2) (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_3 : 5;               /**< \brief [28:24] Action Control Bits of ACTION_(i + 3) (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ACB_3_Bits;

/** \\brief  DPLL Control Bits Register 4 for up to 32 Actions */
typedef struct _Ifx_GTM_DPLL_ACB_4_Bits
{
    Ifx_Strict_32Bit ACB_0 : 5;               /**< \brief [4:0] Action Control Bits of ACTION_z (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_1 : 5;               /**< \brief [12:8] Action Control Bits of ACTION_(i + 1) (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_2 : 5;               /**< \brief [20:16] Action Control Bits of ACTION_(i + 2) (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_3 : 5;               /**< \brief [28:24] Action Control Bits of ACTION_(i + 3) (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ACB_4_Bits;

/** \\brief  DPLL Control Bits Register 5 for up to 32 Actions */
typedef struct _Ifx_GTM_DPLL_ACB_5_Bits
{
    Ifx_Strict_32Bit ACB_0 : 5;               /**< \brief [4:0] Action Control Bits of ACTION_z (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_1 : 5;               /**< \brief [12:8] Action Control Bits of ACTION_(i + 1) (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_2 : 5;               /**< \brief [20:16] Action Control Bits of ACTION_(i + 2) (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_3 : 5;               /**< \brief [28:24] Action Control Bits of ACTION_(i + 3) (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ACB_5_Bits;

/** \\brief  DPLL Control Bits Register 6 for up to 32 Actions */
typedef struct _Ifx_GTM_DPLL_ACB_6_Bits
{
    Ifx_Strict_32Bit ACB_0 : 5;               /**< \brief [4:0] Action Control Bits of ACTION_z (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_1 : 5;               /**< \brief [12:8] Action Control Bits of ACTION_(i + 1) (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_2 : 5;               /**< \brief [20:16] Action Control Bits of ACTION_(i + 2) (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_3 : 5;               /**< \brief [28:24] Action Control Bits of ACTION_(i + 3) (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ACB_6_Bits;

/** \\brief  DPLL Control Bits Register 7 for up to 32 Actions */
typedef struct _Ifx_GTM_DPLL_ACB_7_Bits
{
    Ifx_Strict_32Bit ACB_0 : 5;               /**< \brief [4:0] Action Control Bits of ACTION_z (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_1 : 5;               /**< \brief [12:8] Action Control Bits of ACTION_(i + 1) (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_2 : 5;               /**< \brief [20:16] Action Control Bits of ACTION_(i + 2) (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACB_3 : 5;               /**< \brief [28:24] Action Control Bits of ACTION_(i + 3) (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ACB_7_Bits;

/** \\brief  DPLL ACTION Status Register with connected shadow register */
typedef struct _Ifx_GTM_DPLL_ACT_STA_Bits
{
    Ifx_Strict_32Bit ACT_N : 32;              /**< \brief [31:0] New output data values concerning to action i provided (rw) */
} Ifx_GTM_DPLL_ACT_STA_Bits;

/** \\brief  DPLL Calculated ADD_IN Value for SUB_INC1 Generation */
typedef struct _Ifx_GTM_DPLL_ADD_IN_CAL1_Bits
{
    Ifx_Strict_32Bit ADD_IN_CAL1 : 24;        /**< \brief [23:0] Calculated input value for SUB_INC1 generation, calculated by the DPLL (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ADD_IN_CAL1_Bits;

/** \\brief  DPLL Calculated ADD_IN Value for SUB_INC2 Generation */
typedef struct _Ifx_GTM_DPLL_ADD_IN_CAL2_Bits
{
    Ifx_Strict_32Bit ADD_IN_CAL2 : 24;        /**< \brief [23:0] Input value for SUB_INC2 generation, calculated by the DPLL for SMC=RMO=1 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ADD_IN_CAL2_Bits;

/** \\brief  DPLL Direct Load Input Value for SUB_INC1 */
typedef struct _Ifx_GTM_DPLL_ADD_IN_LD1_Bits
{
    Ifx_Strict_32Bit ADD_IN_LD1 : 24;         /**< \brief [23:0] Input value for SUB_INC1 generation (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ADD_IN_LD1_Bits;

/** \\brief  DPLL Direct Load Input Value for SUB_INC2 */
typedef struct _Ifx_GTM_DPLL_ADD_IN_LD2_Bits
{
    Ifx_Strict_32Bit ADD_IN_LD2 : 24;         /**< \brief [23:0] Input value for SUB_INC2 generation (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ADD_IN_LD2_Bits;

/** \\brief  DPLL Adapt and Profile Values of the STATE Increments in FULL_SCALE */
typedef struct _Ifx_GTM_DPLL_ADT_S_Bits
{
    Ifx_Strict_32Bit PD_S : 16;               /**< \brief [15:0] Physical deviation of STATE (rw) */
    Ifx_Strict_32Bit NS : 6;                  /**< \brief [21:16] Number of STATEs (rw) */
    Ifx_Strict_32Bit NOT_USED : 2;            /**< \brief [23:22] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ADT_S_Bits;

/** \\brief  DPLL Address Offset Register of RAM 2 Regions */
typedef struct _Ifx_GTM_DPLL_AOSV_2_Bits
{
    Ifx_Strict_32Bit AOSV_2A : 8;             /**< \brief [7:0] Address offset value of the RAM 2A region (r) */
    Ifx_Strict_32Bit AOSV_2B : 8;             /**< \brief [15:8] Address offset value of the RAM 2B region (r) */
    Ifx_Strict_32Bit AOSV_2C : 8;             /**< \brief [23:16] Address offset value of the RAM 2C region (r) */
    Ifx_Strict_32Bit AOSV_2D : 8;             /**< \brief [31:24] Address offset value of the RAM 2D region (r) */
} Ifx_GTM_DPLL_AOSV_2_Bits;

/** \\brief  DPLL Actual RAM Pointer for RAM Region 1C3 */
typedef struct _Ifx_GTM_DPLL_APS_1C3_Bits
{
    Ifx_Strict_32Bit reserved_0 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit APS_1C3 : 6;             /**< \brief [7:2] Address pointer STATE for RAM region 1c3 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APS_1C3_Bits;

/** \\brief  DPLL Extension register for DPLL_APS_1C3) */
typedef struct _Ifx_GTM_DPLL_APS_1C3_EXT_Bits
{
    Ifx_Strict_32Bit reserved_0 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit APS_1C3 : 7;             /**< \brief [8:2] Actual RAM pointer address value for ADT_S[i] (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APS_1C3_EXT_Bits;

/** \\brief  DPLL Actual RAM Pointer Address for STATE */
typedef struct _Ifx_GTM_DPLL_APS_Bits
{
    Ifx_Strict_32Bit reserved_0 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WAPS : 1;                /**< \brief [1:1] Write bit for address pointer APS (rw) */
    Ifx_Strict_32Bit APS : 6;                 /**< \brief [7:2] Address pointer STATE (rw) */
    Ifx_Strict_32Bit reserved_8 : 5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WAPS_1C2 : 1;            /**< \brief [13:13] Write bit for address pointer APS_1C2 (rw) */
    Ifx_Strict_32Bit APS_1C2 : 6;             /**< \brief [19:14] Address pointer STATE for RAM region 1c2 (rw) */
    Ifx_Strict_32Bit reserved_20 : 12;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APS_Bits;

/** \\brief  DPLL Extension register for DPLL_APS 4) */
typedef struct _Ifx_GTM_DPLL_APS_EXT_Bits
{
    Ifx_Strict_32Bit reserved_0 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WAPS : 1;                /**< \brief [1:1] Write bit for address pointer APS (rw) */
    Ifx_Strict_32Bit APS : 7;                 /**< \brief [8:2] Actual RAM pointer address value for DT_S[i] and RDT_S[i] (rw) */
    Ifx_Strict_32Bit reserved_9 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WAPS_1C2 : 1;            /**< \brief [13:13] Write bit for address pointer APS_1C2 (rw) */
    Ifx_Strict_32Bit APS_1C2 : 7;             /**< \brief [20:14] Actual RAM pointer address value for TSF_S[i] (rw) */
    Ifx_Strict_32Bit reserved_21 : 11;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APS_EXT_Bits;

/** \\brief  DPLL Old RAM Pointer and Offset Value for STATE */
typedef struct _Ifx_GTM_DPLL_APS_SYNC_Bits
{
    Ifx_Strict_32Bit APS_1C2_EXT : 6;         /**< \brief [5:0] Address pointer 1c2 extension (rw) */
    Ifx_Strict_32Bit APS_1C2_STATUS : 1;      /**< \brief [6:6] Address pointer 1c2 status (rw) */
    Ifx_Strict_32Bit reserved_7 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit APS_1C2_OLD : 6;         /**< \brief [19:14] Address pointer STATE for RAM region 1c2 at synchronization time (rw) */
    Ifx_Strict_32Bit reserved_20 : 12;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APS_SYNC_Bits;

/** \\brief  DPLL Extension register for DPLL_APS_SYNC) */
typedef struct _Ifx_GTM_DPLL_APS_SYNC_EXT_Bits
{
    Ifx_Strict_32Bit APS_1C2_EXT : 7;         /**< \brief [6:0] Address pointer 1c2 extension; (rw) */
    Ifx_Strict_32Bit reserved_7 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit APS_1C2_STATUS : 1;      /**< \brief [15:15] Address pointer 1c2 status; (rw) */
    Ifx_Strict_32Bit APS_1C2_OLD : 7;         /**< \brief [22:16] Address pointer STATE for RAM region 1c2 at synchronization time; (rw) */
    Ifx_Strict_32Bit reserved_23 : 9;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APS_SYNC_EXT_Bits;

/** \\brief  DPLL Actual RAM Pointer for Region 2C */
typedef struct _Ifx_GTM_DPLL_APT_2C_Bits
{
    Ifx_Strict_32Bit reserved_0 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit APT_2C : 10;             /**< \brief [11:2] Address pointer TRIGGER for RAM region 2c; Actual RAM pointer address value for ADT_T[i]. (rw) */
    Ifx_Strict_32Bit reserved_12 : 20;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APT_2C_Bits;

/** \\brief  DPLL Actual RAM Pointer Address for TRIGGER */
typedef struct _Ifx_GTM_DPLL_APT_Bits
{
    Ifx_Strict_32Bit reserved_0 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WAPT : 1;                /**< \brief [1:1] Write bit for address pointer APT (rw) */
    Ifx_Strict_32Bit APT : 10;                /**< \brief [11:2] Address pointer TRIGGER (rw) */
    Ifx_Strict_32Bit reserved_12 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WAPT_2B : 1;             /**< \brief [13:13] Write bit for address pointer APT_2B, read as zero. (rw) */
    Ifx_Strict_32Bit APT_2B : 10;             /**< \brief [23:14] Address pointer TRIGGER for RAM region 2b (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APT_Bits;

/** \\brief  DPLL Old RAM Pointer and Offset Value for TRIGGER */
typedef struct _Ifx_GTM_DPLL_APT_SYNC_Bits
{
    Ifx_Strict_32Bit APT_2B_EXT : 6;          /**< \brief [5:0] Address pointer 2b extension (rw) */
    Ifx_Strict_32Bit APT_2B_STATUS : 1;       /**< \brief [6:6] Address pointer 2b status (rw) */
    Ifx_Strict_32Bit reserved_7 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit APT_2B_OLD : 10;         /**< \brief [23:14] Address pointer TRIGGER for RAM region 2b at synchronization time (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_APT_SYNC_Bits;

/** \\brief  DPLL Prediction of the Actual STATE Increment Duration */
typedef struct _Ifx_GTM_DPLL_CDT_SX_Bits
{
    Ifx_Strict_32Bit CDT_SX : 24;             /**< \brief [23:0] Calculated duration of the current STATE increment (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CDT_SX_Bits;

/** \\brief  DPLL Prediction of the Nominal STATE Increment Duration */
typedef struct _Ifx_GTM_DPLL_CDT_SX_NOM_Bits
{
    Ifx_Strict_32Bit CDT_SX_NOM : 24;         /**< \brief [23:0] Calculated duration of the current nominal STATE event (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CDT_SX_NOM_Bits;

/** \\brief  DPLL Prediction of the Actual TRIGGER Increment Duration */
typedef struct _Ifx_GTM_DPLL_CDT_TX_Bits
{
    Ifx_Strict_32Bit CDT_TX : 24;             /**< \brief [23:0] Calculated duration of the current TRIGGER increment (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CDT_TX_Bits;

/** \\brief  DPLL Prediction of the Nominal TRIGGER Increment Duration */
typedef struct _Ifx_GTM_DPLL_CDT_TX_NOM_Bits
{
    Ifx_Strict_32Bit CDT_TX_NOM : 24;         /**< \brief [23:0] Calculated duration of the current nominal TRIGGER event (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CDT_TX_NOM_Bits;

/** \\brief  DPLL Number of Sub-Pulses of SUB_INC1 in Continuous Mode */
typedef struct _Ifx_GTM_DPLL_CNT_NUM_1_Bits
{
    Ifx_Strict_32Bit CNT_NUM_1 : 24;          /**< \brief [23:0] Counter for number of SUB_INC1 pulses (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CNT_NUM_1_Bits;

/** \\brief  DPLL Number of Sub-Pulses of SUB_INC2 in Continuous Mode */
typedef struct _Ifx_GTM_DPLL_CNT_NUM_2_Bits
{
    Ifx_Strict_32Bit CNT_NUM_2 : 24;          /**< \brief [23:0] Counter for number of SUB_INC2 pulses (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CNT_NUM_2_Bits;

/** \\brief  DPLL Maximum CDT_S Nominal Value Register */
typedef struct _Ifx_GTM_DPLL_CSN_MAX_Bits
{
    Ifx_Strict_32Bit CSN_MAX : 24;            /**< \brief [23:0] CDT_S_NOM max value (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CSN_MAX_Bits;

/** \\brief  DPLL Minimum CDT_S Nominal Value Register */
typedef struct _Ifx_GTM_DPLL_CSN_MIN_Bits
{
    Ifx_Strict_32Bit CSN_MIN : 24;            /**< \brief [23:0] CDT_S_NOM min value (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CSN_MIN_Bits;

/** \\brief  DPLL Maximum CDT_T Nominal Value Register */
typedef struct _Ifx_GTM_DPLL_CTN_MAX_Bits
{
    Ifx_Strict_32Bit CTN_MAX : 24;            /**< \brief [23:0] CDT_T_NOM max value (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTN_MAX_Bits;

/** \\brief  DPLL Minimum CDT_T Nominal Value Register */
typedef struct _Ifx_GTM_DPLL_CTN_MIN_Bits
{
    Ifx_Strict_32Bit CTN_MIN : 24;            /**< \brief [23:0] CDT_T_NOM min value (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTN_MIN_Bits;

/** \\brief  DPLL Control Register 0 */
typedef struct _Ifx_GTM_DPLL_CTRL_0_Bits
{
    Ifx_Strict_32Bit MLT : 10;                /**< \brief [9:0] Multiplier for TRIGGER (rw) */
    Ifx_Strict_32Bit IFP : 1;                 /**< \brief [10:10] Input filter position (rw) */
    Ifx_Strict_32Bit SNU : 5;                 /**< \brief [15:11] STATE number (rw) */
    Ifx_Strict_32Bit TNU : 9;                 /**< \brief [24:16] TRIGGER number (rw) */
    Ifx_Strict_32Bit AMS : 1;                 /**< \brief [25:25] Adapt mode STATE (rw) */
    Ifx_Strict_32Bit AMT : 1;                 /**< \brief [26:26] Adapt mode TRIGGER (rw) */
    Ifx_Strict_32Bit IDS : 1;                 /**< \brief [27:27] Input delay STATE (rw) */
    Ifx_Strict_32Bit IDT : 1;                 /**< \brief [28:28] Input delay TRIGGER (rw) */
    Ifx_Strict_32Bit SEN : 1;                 /**< \brief [29:29] STATE enable (rw) */
    Ifx_Strict_32Bit TEN : 1;                 /**< \brief [30:30] TRIGGER enable (rw) */
    Ifx_Strict_32Bit RMO : 1;                 /**< \brief [31:31] Reference mode (rw) */
} Ifx_GTM_DPLL_CTRL_0_Bits;

/** \\brief  DPLL Control 0 Shadow STATE Register */
typedef struct _Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits
{
    Ifx_Strict_32Bit reserved_0 : 10;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IFP : 1;                 /**< \brief [10:10] Input filter position (r) */
    Ifx_Strict_32Bit reserved_11 : 14;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AMS : 1;                 /**< \brief [25:25] Adapt mode STATE (r) */
    Ifx_Strict_32Bit reserved_26 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IDS : 1;                 /**< \brief [27:27] Input delay STATE (r) */
    Ifx_Strict_32Bit reserved_28 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RMO : 1;                 /**< \brief [31:31] Reference mode (r) */
} Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits;

/** \\brief  DPLL Control 0 Shadow Trigger Register */
typedef struct _Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits
{
    Ifx_Strict_32Bit MLT : 10;                /**< \brief [9:0] Multiplier for TRIGGER (r) */
    Ifx_Strict_32Bit IFP : 1;                 /**< \brief [10:10] Input filter position (r) */
    Ifx_Strict_32Bit reserved_11 : 15;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AMT : 1;                 /**< \brief [26:26] Adapt mode TRIGGER (r) */
    Ifx_Strict_32Bit reserved_27 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IDT : 1;                 /**< \brief [28:28] Input delay TRIGGER (r) */
    Ifx_Strict_32Bit reserved_29 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RMO : 1;                 /**< \brief [31:31] Reference mode (r) */
} Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits;

/** \\brief  DPLL Control Register 11 */
typedef struct _Ifx_GTM_DPLL_CTRL_11_Bits
{
    Ifx_Strict_32Bit SIP1 : 1;                /**< \brief [0:0] Simplified increment prediction in normal mode and for the first engine in the case SMC=1. (rw) */
    Ifx_Strict_32Bit ERZ1 : 1;                /**< \brief [1:1] Error is assumed as zero in normal mode and for the first engine for SMC=1. (rw) */
    Ifx_Strict_32Bit PCMF1 : 1;               /**< \brief [2:2] Pulse correction mode fast for INC_CNT1 (rw) */
    Ifx_Strict_32Bit FSYL1 : 1;               /**< \brief [3:3] Force Synchronization Loss of LOCK1. (rw) */
    Ifx_Strict_32Bit INCF1 : 1;               /**< \brief [4:4] INC_CNT1 fast correction (rw) */
    Ifx_Strict_32Bit PCMF1_INCCNT_B : 1;      /**< \brief [5:5] No increment of INC_CNT1 when PCMF1 active (automatic end mode). (rw) */
    Ifx_Strict_32Bit ADT : 1;                 /**< \brief [6:6] Correction of DT_T_ACTUAL,CDT_TX_nom_corr by PD_T (r) */
    Ifx_Strict_32Bit ADS : 1;                 /**< \brief [7:7] Correction of DT_S_ACTUAL, CDT_SX_nom_corr by PD_S (r) */
    Ifx_Strict_32Bit SIP2 : 1;                /**< \brief [8:8] Simplified increment prediction in emergency mode and for the second engine in the case RMO=1. (rw) */
    Ifx_Strict_32Bit ERZ2 : 1;                /**< \brief [9:9] Error is assumed as zero in emergency mode and for the second engine for SMC=1. (rw) */
    Ifx_Strict_32Bit PCMF2 : 1;               /**< \brief [10:10] Pulse correction mode fast for INC_CNT2 (rw) */
    Ifx_Strict_32Bit FSYL2 : 1;               /**< \brief [11:11] Force Synchronization Loss of LOCK2. (rw) */
    Ifx_Strict_32Bit INCF2 : 1;               /**< \brief [12:12] INC_CNT2 fast (rw) */
    Ifx_Strict_32Bit PCMF2_INCCNT_B : 1;      /**< \brief [13:13] No increment of INC_CNT2 when PCMF2 active (automatic end mode). (rw) */
    Ifx_Strict_32Bit STATE_EXT : 1;           /**< \brief [14:14] Use of STATE engine extension (rw) */
    Ifx_Strict_32Bit ACBU : 1;                /**< \brief [15:15] ACB use; the ACB values of PMTR are used to decide if an action is in the past (rw) */
    Ifx_Strict_32Bit WSIP1 : 1;               /**< \brief [16:16] Write enable for simplified increment prediction 1. (rw) */
    Ifx_Strict_32Bit WERZ1 : 1;               /**< \brief [17:17] Write enable for error zero 1. (rw) */
    Ifx_Strict_32Bit WPCMF1 : 1;              /**< \brief [18:18] Write enable for pulse correction mode fast 1 (rw) */
    Ifx_Strict_32Bit WFSYL1 : 1;              /**< \brief [19:19] Write enable for Force Synchronization Loss 1. (rw) */
    Ifx_Strict_32Bit WINCF1 : 1;              /**< \brief [20:20] Write enable for INC_CNT1 fast (rw) */
    Ifx_Strict_32Bit WPCMF1_INCCNT_B : 1;     /**< \brief [21:21] Write enable of PCMF1_INCCNT_B (rw) */
    Ifx_Strict_32Bit WADT : 1;                /**< \brief [22:22] Write enable of ADT (r) */
    Ifx_Strict_32Bit WADS : 1;                /**< \brief [23:23] Write enable of ADS. (r) */
    Ifx_Strict_32Bit WSIP2 : 1;               /**< \brief [24:24] Write enable for simplified increment prediction 2. (rw) */
    Ifx_Strict_32Bit WERZ2 : 1;               /**< \brief [25:25] Write enable for error zero 2. (rw) */
    Ifx_Strict_32Bit WPCMF2 : 1;              /**< \brief [26:26] Write enable for pulse correction mode fast 2 (rw) */
    Ifx_Strict_32Bit WFSYL2 : 1;              /**< \brief [27:27] Write enable for Force Synchronization Loss 2. (rw) */
    Ifx_Strict_32Bit WINCF2 : 1;              /**< \brief [28:28] Write enable for INC_CNT2 fast (rw) */
    Ifx_Strict_32Bit WPCMF2_INCCNT_B : 1;     /**< \brief [29:29] Write enable of PCMF2_INCCNT_B (rw) */
    Ifx_Strict_32Bit WSTATE_EXT : 1;          /**< \brief [30:30] Write enable of STATE_EXT (rw) */
    Ifx_Strict_32Bit WACBU : 1;               /**< \brief [31:31] Write enable for ACB use (rw) */
} Ifx_GTM_DPLL_CTRL_11_Bits;

/** \\brief  DPLL Control Register 1 */
typedef struct _Ifx_GTM_DPLL_CTRL_1_Bits
{
    Ifx_Strict_32Bit DMO : 1;                 /**< \brief [0:0] DPLL mode select (rw) */
    Ifx_Strict_32Bit DEN : 1;                 /**< \brief [1:1] DPLL enable (rw) */
    Ifx_Strict_32Bit IDDS : 1;                /**< \brief [2:2] Input direction detection strategy in the case of SMC=0 (rw) */
    Ifx_Strict_32Bit COA : 1;                 /**< \brief [3:3] Correction strategy in automatic end mode (DMO=0) (rw) */
    Ifx_Strict_32Bit PIT : 1;                 /**< \brief [4:4] Plausibility value PVT to next active TRIGGER is time related (rw) */
    Ifx_Strict_32Bit SGE1 : 1;                /**< \brief [5:5] SUB_INC1 generator enable (rw) */
    Ifx_Strict_32Bit DLM1 : 1;                /**< \brief [6:6] Direct Load Mode for SUB_INC1 generation (rw) */
    Ifx_Strict_32Bit PCM1 : 1;                /**< \brief [7:7] Pulse Correction Mode for SUB_INC1 generation (rw) */
    Ifx_Strict_32Bit SGE2 : 1;                /**< \brief [8:8] SUB_INC2 generator enable (rw) */
    Ifx_Strict_32Bit DLM2 : 1;                /**< \brief [9:9] Direct Load Mode for SUB_INC2 generation (rw) */
    Ifx_Strict_32Bit PCM2 : 1;                /**< \brief [10:10] Pulse Correction Mode for SUB_INC2 generation (rw) */
    Ifx_Strict_32Bit SYN_NS : 5;              /**< \brief [15:11] Synchronization number of STATE (rw) */
    Ifx_Strict_32Bit SYN_NT : 6;              /**< \brief [21:16] Synchronization number of TRIGGER (rw) */
    Ifx_Strict_32Bit LCD : 1;                 /**< \brief [22:22] Locking condition definition (rw) */
    Ifx_Strict_32Bit SWR : 1;                 /**< \brief [23:23] Software reset (rw) */
    Ifx_Strict_32Bit SYSF : 1;                /**< \brief [24:24] SYN_NS for FULL_SCALE (rw) */
    Ifx_Strict_32Bit TS0_HRS : 1;             /**< \brief [25:25] Time stamp high resolution STATE (rw) */
    Ifx_Strict_32Bit TS0_HRT : 1;             /**< \brief [26:26] Time stamp high resolution TRIGGER (rw) */
    Ifx_Strict_32Bit SMC : 1;                 /**< \brief [27:27] Synchronous Motor Control (rw) */
    Ifx_Strict_32Bit SSL : 2;                 /**< \brief [29:28] STATE slope select (rw) */
    Ifx_Strict_32Bit TSL : 2;                 /**< \brief [31:30] TRIGGER slope select (rw) */
} Ifx_GTM_DPLL_CTRL_1_Bits;

/** \\brief  DPLL Control 1 Shadow STATE Register */
typedef struct _Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits
{
    Ifx_Strict_32Bit DMO : 1;                 /**< \brief [0:0] DPLL mode select (r) */
    Ifx_Strict_32Bit reserved_1 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit COA : 1;                 /**< \brief [3:3] Correction strategy in automatic end mode (DMO=0) (r) */
    Ifx_Strict_32Bit reserved_4 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SGE1 : 1;                /**< \brief [5:5] SUB_INC1 generator enable (r) */
    Ifx_Strict_32Bit DLM1 : 1;                /**< \brief [6:6] Direct Load Mode for SUB_INC1 generation (r) */
    Ifx_Strict_32Bit PCM1 : 1;                /**< \brief [7:7] Pulse Correction Mode for SUB_INC1 generation (r) */
    Ifx_Strict_32Bit SGE2 : 1;                /**< \brief [8:8] SUB_INC2 generator enable (r) */
    Ifx_Strict_32Bit DLM2 : 1;                /**< \brief [9:9] Direct Load Mode for SUB_INC2 generation (r) */
    Ifx_Strict_32Bit PCM2 : 1;                /**< \brief [10:10] Pulse Correction Mode for SUB_INC2 generation (r) */
    Ifx_Strict_32Bit reserved_11 : 21;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits;

/** \\brief  DPLL Control 1 Shadow TRIGGER Register */
typedef struct _Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits
{
    Ifx_Strict_32Bit DMO : 1;                 /**< \brief [0:0] DPLL mode select (r) */
    Ifx_Strict_32Bit reserved_1 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit COA : 1;                 /**< \brief [3:3] Correction strategy in automatic end mode (DMO=0). (r) */
    Ifx_Strict_32Bit PIT : 1;                 /**< \brief [4:4] Plausibility value PVT to next valid TRIGGER is time related (r) */
    Ifx_Strict_32Bit SGE1 : 1;                /**< \brief [5:5] SUB_INC1 generator enable. (r) */
    Ifx_Strict_32Bit DLM1 : 1;                /**< \brief [6:6] Direct Load Mode for SUB_INC1 generation (r) */
    Ifx_Strict_32Bit PCM1 : 1;                /**< \brief [7:7] Pulse Correction Mode for SUB_INC1 generation. (r) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits;

/** \\brief  DPLL Control Register 2 */
typedef struct _Ifx_GTM_DPLL_CTRL_2_Bits
{
    Ifx_Strict_32Bit reserved_0 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AEN0 : 1;                /**< \brief [8:8] ACTION_0 enable (rw) */
    Ifx_Strict_32Bit AEN1 : 1;                /**< \brief [9:9] ACTION_1 enable (rw) */
    Ifx_Strict_32Bit AEN2 : 1;                /**< \brief [10:10] ACTION_2 enable (rw) */
    Ifx_Strict_32Bit AEN3 : 1;                /**< \brief [11:11] ACTION_3 enable (rw) */
    Ifx_Strict_32Bit AEN4 : 1;                /**< \brief [12:12] ACTION_4 enable (rw) */
    Ifx_Strict_32Bit AEN5 : 1;                /**< \brief [13:13] ACTION_5 enable (rw) */
    Ifx_Strict_32Bit AEN6 : 1;                /**< \brief [14:14] ACTION_6 enable (rw) */
    Ifx_Strict_32Bit AEN7 : 1;                /**< \brief [15:15] ACTION_7 enable (rw) */
    Ifx_Strict_32Bit WAD0 : 1;                /**< \brief [16:16] Write control bit of Action_0 (rw) */
    Ifx_Strict_32Bit WAD1 : 1;                /**< \brief [17:17] Write control bit of Action_1 (rw) */
    Ifx_Strict_32Bit WAD2 : 1;                /**< \brief [18:18] Write control bit of Action_2 (rw) */
    Ifx_Strict_32Bit WAD3 : 1;                /**< \brief [19:19] Write control bit of Action_3 (rw) */
    Ifx_Strict_32Bit WAD4 : 1;                /**< \brief [20:20] Write control bit of Action_4 (rw) */
    Ifx_Strict_32Bit WAD5 : 1;                /**< \brief [21:21] Write control bit of Action_5 (rw) */
    Ifx_Strict_32Bit WAD6 : 1;                /**< \brief [22:22] Write control bit of Action_6 (rw) */
    Ifx_Strict_32Bit WAD7 : 1;                /**< \brief [23:23] Write control bit of Action_7 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTRL_2_Bits;

/** \\brief  DPLL Control Register 3 */
typedef struct _Ifx_GTM_DPLL_CTRL_3_Bits
{
    Ifx_Strict_32Bit reserved_0 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AEN8 : 1;                /**< \brief [8:8] ACTION_8 enable (rw) */
    Ifx_Strict_32Bit AEN9 : 1;                /**< \brief [9:9] ACTION_9 enable (rw) */
    Ifx_Strict_32Bit AEN10 : 1;               /**< \brief [10:10] ACTION_10 enable (rw) */
    Ifx_Strict_32Bit AEN11 : 1;               /**< \brief [11:11] ACTION_11 enable (rw) */
    Ifx_Strict_32Bit AEN12 : 1;               /**< \brief [12:12] ACTION_12 enable (rw) */
    Ifx_Strict_32Bit AEN13 : 1;               /**< \brief [13:13] ACTION_13 enable (rw) */
    Ifx_Strict_32Bit AEN14 : 1;               /**< \brief [14:14] ACTION_14 enable (rw) */
    Ifx_Strict_32Bit AEN15 : 1;               /**< \brief [15:15] ACTION_15 enable (rw) */
    Ifx_Strict_32Bit WAD8 : 1;                /**< \brief [16:16] Write control bit of Action_8 (rw) */
    Ifx_Strict_32Bit WAD9 : 1;                /**< \brief [17:17] Write control bit of Action_9 (rw) */
    Ifx_Strict_32Bit WAD10 : 1;               /**< \brief [18:18] Write control bit of Action_10 (rw) */
    Ifx_Strict_32Bit WAD11 : 1;               /**< \brief [19:19] Write control bit of Action_11 (rw) */
    Ifx_Strict_32Bit WAD12 : 1;               /**< \brief [20:20] Write control bit of Action_12 (rw) */
    Ifx_Strict_32Bit WAD13 : 1;               /**< \brief [21:21] Write control bit of Action_13 (rw) */
    Ifx_Strict_32Bit WAD14 : 1;               /**< \brief [22:22] Write control bit of Action_14 (rw) */
    Ifx_Strict_32Bit WAD15 : 1;               /**< \brief [23:23] Write control bit of Action_15 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTRL_3_Bits;

/** \\brief  DPLL Control Register 4 */
typedef struct _Ifx_GTM_DPLL_CTRL_4_Bits
{
    Ifx_Strict_32Bit reserved_0 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AEN16 : 1;               /**< \brief [8:8] ACTION_16 enable (rw) */
    Ifx_Strict_32Bit AEN17 : 1;               /**< \brief [9:9] ACTION_17 enable (rw) */
    Ifx_Strict_32Bit AEN18 : 1;               /**< \brief [10:10] ACTION_18 enable (rw) */
    Ifx_Strict_32Bit AEN19 : 1;               /**< \brief [11:11] ACTION_19 enable (rw) */
    Ifx_Strict_32Bit AEN20 : 1;               /**< \brief [12:12] ACTION_20 enable (rw) */
    Ifx_Strict_32Bit AEN21 : 1;               /**< \brief [13:13] ACTION_21 enable (rw) */
    Ifx_Strict_32Bit AEN22 : 1;               /**< \brief [14:14] ACTION_22 enable (rw) */
    Ifx_Strict_32Bit AEN23 : 1;               /**< \brief [15:15] ACTION_23 enable (rw) */
    Ifx_Strict_32Bit WAD16 : 1;               /**< \brief [16:16] Write control bit of Action_16 (rw) */
    Ifx_Strict_32Bit WAD17 : 1;               /**< \brief [17:17] Write control bit of Action_17 (rw) */
    Ifx_Strict_32Bit WAD18 : 1;               /**< \brief [18:18] Write control bit of Action_18 (rw) */
    Ifx_Strict_32Bit WAD19 : 1;               /**< \brief [19:19] Write control bit of Action_19 (rw) */
    Ifx_Strict_32Bit WAD20 : 1;               /**< \brief [20:20] Write control bit of Action_20 (rw) */
    Ifx_Strict_32Bit WAD21 : 1;               /**< \brief [21:21] Write control bit of Action_21 (rw) */
    Ifx_Strict_32Bit WAD22 : 1;               /**< \brief [22:22] Write control bit of Action_22 (rw) */
    Ifx_Strict_32Bit WAD23 : 1;               /**< \brief [23:23] Write control bit of Action_23 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTRL_4_Bits;

/** \\brief  DPLL Control Register 5 */
typedef struct _Ifx_GTM_DPLL_CTRL_5_Bits
{
    Ifx_Strict_32Bit reserved_0 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AEN24 : 1;               /**< \brief [8:8] ACTION_24 enable (rw) */
    Ifx_Strict_32Bit AEN25 : 1;               /**< \brief [9:9] ACTION_25 enable (rw) */
    Ifx_Strict_32Bit AEN26 : 1;               /**< \brief [10:10] ACTION_26 enable (rw) */
    Ifx_Strict_32Bit AEN27 : 1;               /**< \brief [11:11] ACTION_27 enable (rw) */
    Ifx_Strict_32Bit AEN28 : 1;               /**< \brief [12:12] ACTION_28 enable (rw) */
    Ifx_Strict_32Bit AEN29 : 1;               /**< \brief [13:13] ACTION_29 enable (rw) */
    Ifx_Strict_32Bit AEN30 : 1;               /**< \brief [14:14] ACTION_30 enable (rw) */
    Ifx_Strict_32Bit AEN31 : 1;               /**< \brief [15:15] ACTION_31 enable (rw) */
    Ifx_Strict_32Bit WAD24 : 1;               /**< \brief [16:16] Write control bit of Action_24 (rw) */
    Ifx_Strict_32Bit WAD25 : 1;               /**< \brief [17:17] Write control bit of Action_25 (rw) */
    Ifx_Strict_32Bit WAD26 : 1;               /**< \brief [18:18] Write control bit of Action_26 (rw) */
    Ifx_Strict_32Bit WAD27 : 1;               /**< \brief [19:19] Write control bit of Action_27 (rw) */
    Ifx_Strict_32Bit WAD28 : 1;               /**< \brief [20:20] Write control bit of Action_28 (rw) */
    Ifx_Strict_32Bit WAD29 : 1;               /**< \brief [21:21] Write control bit of Action_29 (rw) */
    Ifx_Strict_32Bit WAD30 : 1;               /**< \brief [22:22] Write control bit of Action_30 (rw) */
    Ifx_Strict_32Bit WAD31 : 1;               /**< \brief [23:23] Write control bit of Action_31 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTRL_5_Bits;

/** \\brief  DPLL Extension register for DPLL_CTRL) */
typedef struct _Ifx_GTM_DPLL_CTRL_EXT_Bits
{
    Ifx_Strict_32Bit SNU : 6;                 /**< \brief [5:0] STATE number (rw) */
    Ifx_Strict_32Bit reserved_6 : 10;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SYN_NS : 6;              /**< \brief [21:16] Synchronization number of STATE (rw) */
    Ifx_Strict_32Bit reserved_22 : 10;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_CTRL_EXT_Bits;

/** \\brief  DPLL ACTION Time To React Before PSAz */
typedef struct _Ifx_GTM_DPLL_DLA_Bits
{
    Ifx_Strict_32Bit DLA : 24;                /**< \brief [23:0] Time to react before the corresponding position value of a desired action is reached (z=0-31) (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_DLA_Bits;

/** \\brief  DPLL Duration of the Last STATE Increment */
typedef struct _Ifx_GTM_DPLL_DT_S_ACT_Bits
{
    Ifx_Strict_32Bit DT_S_ACT : 24;           /**< \brief [23:0] Calculated duration of the last STATE increment. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_DT_S_ACT_Bits;

/** \\brief  DPLL Nominal STATE Increment Duration in FULL_SCALE */
typedef struct _Ifx_GTM_DPLL_DT_S_Bits
{
    Ifx_Strict_32Bit DT_S : 24;               /**< \brief [23:0] Difference time of STATE (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_DT_S_Bits;

/** \\brief  DPLL Start Value of DPLL_DT_S_ACT for the first Increment after
 * SIP2 is set to 1 */
typedef struct _Ifx_GTM_DPLL_DT_S_START_Bits
{
    Ifx_Strict_32Bit DPLL_DT_S_START : 24;    /**< \brief [23:0] Start value of DPLL_DT_S_ACT for the first increment after SIP2 is set to 1 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_DT_S_START_Bits;

/** \\brief  DPLL Duration of the Last TRIGGER Increment */
typedef struct _Ifx_GTM_DPLL_DT_T_ACT_Bits
{
    Ifx_Strict_32Bit DT_T_ACT : 24;           /**< \brief [23:0] Calculated duration of the last TRIGGER increment. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_DT_T_ACT_Bits;

/** \\brief  DPLL Start Value of DPLL_DT_T_ACT for the first Increment after
 * SIP1 is set to 1 */
typedef struct _Ifx_GTM_DPLL_DT_T_START_Bits
{
    Ifx_Strict_32Bit DPLL_DT_T_START : 24;    /**< \brief [23:0] Start value of DPLL_DT_T_ACT for the first increment after SIP1 is set to 1 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_DT_T_START_Bits;

/** \\brief  DPLL Calculated Relative TIME To ACTION */
typedef struct _Ifx_GTM_DPLL_DTA_Bits
{
    Ifx_Strict_32Bit DTA : 24;                /**< \brief [23:0] Calculated relative time to ACTION_z (z=0-31) (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_DTA_Bits;

/** \\brief  DPLL Difference of Prediction to Actual Value of the Last STATE
 * Increment */
typedef struct _Ifx_GTM_DPLL_EDT_S_Bits
{
    Ifx_Strict_32Bit EDT_S : 24;              /**< \brief [23:0] Signed difference between actual value and prediction of the last STATE increment: sint24 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_EDT_S_Bits;

/** \\brief  DPLL Difference of Prediction to Actual Value of the Last TRIGGER
 * Increment */
typedef struct _Ifx_GTM_DPLL_EDT_T_Bits
{
    Ifx_Strict_32Bit EDT_T : 24;              /**< \brief [23:0] Signed difference between actual value and a simple prediction of the last TRIGGER increment: sint24 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_EDT_T_Bits;

/** \\brief  DPLL Error Interrupt Enable Register */
typedef struct _Ifx_GTM_DPLL_EIRQ_EN_Bits
{
    Ifx_Strict_32Bit PDI_EIRQ_EN : 1;         /**< \brief [0:0] DPLL disable interrupt enable, when switch off of the DEN bit. (rw) */
    Ifx_Strict_32Bit PEI_EIRQ_EN : 1;         /**< \brief [1:1] DPLL enable interrupt enable, when switch on of the DEN bit. (rw) */
    Ifx_Strict_32Bit TINI_EIRQ_EN : 1;        /**< \brief [2:2] TRIGGER minimum hold time violation interrupt enable bit. (rw) */
    Ifx_Strict_32Bit TAXI_EIRQ_EN : 1;        /**< \brief [3:3] TRIGGER maximum hold time violation interrupt enable bit. (rw) */
    Ifx_Strict_32Bit SISI_EIRQ_EN : 1;        /**< \brief [4:4] STATE inactive slope interrupt enable bit. (rw) */
    Ifx_Strict_32Bit TISI_EIRQ_EN : 1;        /**< \brief [5:5] TRIGGER inactive slope interrupt enable bit. (rw) */
    Ifx_Strict_32Bit MSI_EIRQ_EN : 1;         /**< \brief [6:6] Missing STATE interrupt enable. (rw) */
    Ifx_Strict_32Bit MTI_EIRQ_EN : 1;         /**< \brief [7:7] Missing TRIGGER interrupt enable. (rw) */
    Ifx_Strict_32Bit SASI_EIRQ_EN : 1;        /**< \brief [8:8] STATE active slope interrupt enable. (rw) */
    Ifx_Strict_32Bit TASI_EIRQ_EN : 1;        /**< \brief [9:9] TRIGGER active slope interrupt enable. (rw) */
    Ifx_Strict_32Bit PWI_EIRQ_EN : 1;         /**< \brief [10:10] Plausibility window (PVT) violation interrupt of TRIGGER enable. (rw) */
    Ifx_Strict_32Bit W2I_EIRQ_EN : 1;         /**< \brief [11:11] RAM write access to RAM region 2 interrupt enable. (rw) */
    Ifx_Strict_32Bit W1I_EIRQ_EN : 1;         /**< \brief [12:12] Write access to RAM region 1b or 1c interrupt. (rw) */
    Ifx_Strict_32Bit GL1I_EIRQ_EN : 1;        /**< \brief [13:13] Get of lock interrupt enable, when lock arises. (rw) */
    Ifx_Strict_32Bit LL1I_EIRQ_EN : 1;        /**< \brief [14:14] Loss of lock interrupt enable. (rw) */
    Ifx_Strict_32Bit EI_EIRQ_EN : 1;          /**< \brief [15:15] Error interrupt enable (see status register). (rw) */
    Ifx_Strict_32Bit GL2I_EIRQ_EN : 1;        /**< \brief [16:16] Get of lock interrupt enable for SUB_INC2. (rw) */
    Ifx_Strict_32Bit LL2I_EIRQ_EN : 1;        /**< \brief [17:17] Loss of lock interrupt enable for SUB_INC2. (rw) */
    Ifx_Strict_32Bit TE0I_EIRQ_EN : 1;        /**< \brief [18:18] TRIGGER event interrupt 0 enable. (rw) */
    Ifx_Strict_32Bit TE1I_EIRQ_EN : 1;        /**< \brief [19:19] TRIGGER event interrupt 1 enable. (rw) */
    Ifx_Strict_32Bit TE2I_EIRQ_EN : 1;        /**< \brief [20:20] TRIGGER event interrupt 2 enable. (rw) */
    Ifx_Strict_32Bit TE3I_EIRQ_EN : 1;        /**< \brief [21:21] TRIGGER event interrupt 3 enable. (rw) */
    Ifx_Strict_32Bit TE4I_EIRQ_EN : 1;        /**< \brief [22:22] TRIGGER event interrupt 4 enable. (rw) */
    Ifx_Strict_32Bit CDTI_EIRQ_EN : 1;        /**< \brief [23:23] Enable interrupt when calculation of TRIGGER duration done (rw) */
    Ifx_Strict_32Bit CDSI_EIRQ_EN : 1;        /**< \brief [24:24] Enable interrupt when calculation of TRIGGER duration done (rw) */
    Ifx_Strict_32Bit TORI_EIRQ_EN : 1;        /**< \brief [25:25] TRIGGER out of range interrupt (rw) */
    Ifx_Strict_32Bit SORI_EIRQ_EN : 1;        /**< \brief [26:26] STATE out of range (rw) */
    Ifx_Strict_32Bit DCGI_EIRQ_EN : 1;        /**< \brief [27:27] Direction change interrupt (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_EIRQ_EN_Bits;

/** \\brief  DPLL Actual STATE Filter Value */
typedef struct _Ifx_GTM_DPLL_FTV_S_Bits
{
    Ifx_Strict_32Bit STATE_FT : 24;           /**< \brief [23:0] Filter value of the last active STATE input. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_FTV_S_Bits;

/** \\brief  DPLL Actual TRIGGER Filter Value */
typedef struct _Ifx_GTM_DPLL_FTV_T_Bits
{
    Ifx_Strict_32Bit TRIGGER_FT : 24;         /**< \brief [23:0] Filter value of the last active TRIGGER input. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_FTV_T_Bits;

/** \\brief  DPLL ID Information For Input Signal PMT 0 Register */
typedef struct _Ifx_GTM_DPLL_ID_PMTR_Bits
{
    Ifx_Strict_32Bit ID_PMTR_X : 9;           /**< \brief [8:0] ID information to the input signal PMTR[i] from the ARU (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_ID_PMTR_Bits;

/** \\brief  DPLL Counter for Pulses for TBU_CH1_BASE to be sent in Automatic
 * End Mode */
typedef struct _Ifx_GTM_DPLL_INC_CNT1_Bits
{
    Ifx_Strict_32Bit INC_CNT1 : 24;           /**< \brief [23:0] Actual number of pulses to be still sent out at the current increment until the next active input signal in automatic end mode; (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_INC_CNT1_Bits;

/** \\brief  DPLL INC_CNT1 Trigger Mask */
typedef struct _Ifx_GTM_DPLL_INC_CNT1_MASK_Bits
{
    Ifx_Strict_32Bit INC_CNT1_NOTIFY : 24;    /**< \brief [23:0] Notify value for INC_CNT1 of register DPLL_INC_CNT1 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_INC_CNT1_MASK_Bits;

/** \\brief  DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic End
 * Mode */
typedef struct _Ifx_GTM_DPLL_INC_CNT2_Bits
{
    Ifx_Strict_32Bit INC_CNT2 : 24;           /**< \brief [23:0] Actual number of pulses to be still sent out at the current increment until the next active input signal in automatic end mode; (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_INC_CNT2_Bits;

/** \\brief  DPLL INC_CNT2 Trigger Mask */
typedef struct _Ifx_GTM_DPLL_INC_CNT2_MASK_Bits
{
    Ifx_Strict_32Bit INC_CNT2_NOTIFY : 24;    /**< \brief [23:0] Notify value for INC_CNT2 of register DPLL_INC_CNT2 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_INC_CNT2_MASK_Bits;

/** \\brief  DPLL Start Value of the ADD_IN_ADDER1 Register */
typedef struct _Ifx_GTM_DPLL_INCF1_OFFSET_Bits
{
    Ifx_Strict_32Bit DPLL_INCF1_OFFSET : 24;  /**< \brief [23:0] Start value of the ADD_IN_ADDER1 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_INCF1_OFFSET_Bits;

/** \\brief  DPLL Start Value of the ADD_IN_ADDER2 Register */
typedef struct _Ifx_GTM_DPLL_INCF2_OFFSET_Bits
{
    Ifx_Strict_32Bit DPLL_INCF2_OFFSET : 24;  /**< \brief [23:0] Start value of the ADD_IN_ADDER2 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_INCF2_OFFSET_Bits;

/** \\brief  DPLL Interrupt Enable Register */
typedef struct _Ifx_GTM_DPLL_IRQ_EN_Bits
{
    Ifx_Strict_32Bit PDI_IRQ_EN : 1;          /**< \brief [0:0] DPLL disable interrupt enable, when switch off of the DEN bit. (rw) */
    Ifx_Strict_32Bit PEI_IRQ_EN : 1;          /**< \brief [1:1] DPLL enable interrupt enable, when switch on of the DEN bit. (rw) */
    Ifx_Strict_32Bit TINI_IRQ_EN : 1;         /**< \brief [2:2] TRIGGER minimum hold time violation interrupt enable bit. (rw) */
    Ifx_Strict_32Bit TAXI_IRQ_EN : 1;         /**< \brief [3:3] TRIGGER maximum hold time violation interrupt enable bit. (rw) */
    Ifx_Strict_32Bit SISI_IRQ_EN : 1;         /**< \brief [4:4] STATE inactive slope interrupt enable bit. (rw) */
    Ifx_Strict_32Bit TISI_IRQ_EN : 1;         /**< \brief [5:5] TRIGGER inactive slope interrupt enable bit. (rw) */
    Ifx_Strict_32Bit MSI_IRQ_EN : 1;          /**< \brief [6:6] Missing STATE interrupt enable. (rw) */
    Ifx_Strict_32Bit MTI_IRQ_EN : 1;          /**< \brief [7:7] Missing TRIGGER interrupt enable. (rw) */
    Ifx_Strict_32Bit SASI_IRQ_EN : 1;         /**< \brief [8:8] STATE active slope interrupt enable. (rw) */
    Ifx_Strict_32Bit TASI_IRQ_EN : 1;         /**< \brief [9:9] TRIGGER active slope interrupt enable. (rw) */
    Ifx_Strict_32Bit PWI_IRQ_EN : 1;          /**< \brief [10:10] Plausibility window (PVT) violation interrupt of TRIGGER enable. (rw) */
    Ifx_Strict_32Bit W2I_IRQ_EN : 1;          /**< \brief [11:11] RAM write access to RAM region 2 interrupt enable. (rw) */
    Ifx_Strict_32Bit W1I_IRQ_EN : 1;          /**< \brief [12:12] Write access to RAM region 1b or 1c interrupt. (rw) */
    Ifx_Strict_32Bit GL1I_IRQ_EN : 1;         /**< \brief [13:13] Get of lock interrupt enable, when lock arises. (rw) */
    Ifx_Strict_32Bit LL1I_IRQ_EN : 1;         /**< \brief [14:14] Loss of lock interrupt enable. (rw) */
    Ifx_Strict_32Bit EI_IRQ_EN : 1;           /**< \brief [15:15] Error interrupt enable (see status register). (rw) */
    Ifx_Strict_32Bit GL2I_IRQ_EN : 1;         /**< \brief [16:16] Get of lock interrupt enable for SUB_INC2. (rw) */
    Ifx_Strict_32Bit LL2I_IRQ_EN : 1;         /**< \brief [17:17] Loss of lock interrupt enable for SUB_INC2. (rw) */
    Ifx_Strict_32Bit TE0I_IRQ_EN : 1;         /**< \brief [18:18] TRIGGER event interrupt 0 enable. (rw) */
    Ifx_Strict_32Bit TE1I_IRQ_EN : 1;         /**< \brief [19:19] TRIGGER event interrupt 1 enable. (rw) */
    Ifx_Strict_32Bit TE2I_IRQ_EN : 1;         /**< \brief [20:20] TRIGGER event interrupt 2 enable. (rw) */
    Ifx_Strict_32Bit TE3I_IRQ_EN : 1;         /**< \brief [21:21] TRIGGER event interrupt 3 enable. (rw) */
    Ifx_Strict_32Bit TE4I_IRQ_EN : 1;         /**< \brief [22:22] TRIGGER event interrupt 4 enable. (rw) */
    Ifx_Strict_32Bit CDTI_IRQ_EN : 1;         /**< \brief [23:23] Enable interrupt when calculation of TRIGGER duration done (rw) */
    Ifx_Strict_32Bit CDSI_IRQ_EN : 1;         /**< \brief [24:24] Enable interrupt when calculation of TRIGGER duration done (rw) */
    Ifx_Strict_32Bit TORI_IRQ_EN : 1;         /**< \brief [25:25] TRIGGER out of range interrupt (rw) */
    Ifx_Strict_32Bit SORI_IRQ_EN : 1;         /**< \brief [26:26] STATE out of range (rw) */
    Ifx_Strict_32Bit DCGI_IRQ_EN : 1;         /**< \brief [27:27] Direction change interrupt (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_IRQ_EN_Bits;

/** \\brief  DPLL Interrupt Force Register */
typedef struct _Ifx_GTM_DPLL_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_PDI : 1;             /**< \brief [0:0] Force Interrupt PDI (rw) */
    Ifx_Strict_32Bit TRG_PEI : 1;             /**< \brief [1:1] Force Interrupt PEI (rw) */
    Ifx_Strict_32Bit TRG_TINI : 1;            /**< \brief [2:2] Force Interrupt TINI (rw) */
    Ifx_Strict_32Bit TRG_TAXI : 1;            /**< \brief [3:3] Force Interrupt TAXI (rw) */
    Ifx_Strict_32Bit TRG_SISI : 1;            /**< \brief [4:4] Force Interrupt SISI (rw) */
    Ifx_Strict_32Bit TRG_TISI : 1;            /**< \brief [5:5] Force Interrupt TISI (rw) */
    Ifx_Strict_32Bit TRG_MSI : 1;             /**< \brief [6:6] Force Interrupt MSI (rw) */
    Ifx_Strict_32Bit TRG_MTI : 1;             /**< \brief [7:7] Force Interrupt MTI (rw) */
    Ifx_Strict_32Bit TRG_SASI : 1;            /**< \brief [8:8] Force Interrupt SASI (rw) */
    Ifx_Strict_32Bit TRG_TASI : 1;            /**< \brief [9:9] Force Interrupt TASI (rw) */
    Ifx_Strict_32Bit TRG_PWI : 1;             /**< \brief [10:10] Force Interrupt PWI (rw) */
    Ifx_Strict_32Bit TRG_W2I : 1;             /**< \brief [11:11] Force Interrupt W2IF (rw) */
    Ifx_Strict_32Bit TRG_W1I : 1;             /**< \brief [12:12] Force Interrupt W1I (rw) */
    Ifx_Strict_32Bit TRG_GL1I : 1;            /**< \brief [13:13] Force Interrupt GL1I (rw) */
    Ifx_Strict_32Bit TRG_LL1I : 1;            /**< \brief [14:14] Force Interrupt LL1I (rw) */
    Ifx_Strict_32Bit TRG_EI : 1;              /**< \brief [15:15] Force Interrupt EI (rw) */
    Ifx_Strict_32Bit TRG_GL2I : 1;            /**< \brief [16:16] Force Interrupt GL2I (rw) */
    Ifx_Strict_32Bit TRG_LL2I : 1;            /**< \brief [17:17] Force Interrupt LL2I (rw) */
    Ifx_Strict_32Bit TRG_TE0I : 1;            /**< \brief [18:18] Force Interrupt TE0I (rw) */
    Ifx_Strict_32Bit TRG_TE1I : 1;            /**< \brief [19:19] Force Interrupt TE1I (rw) */
    Ifx_Strict_32Bit TRG_TE2I : 1;            /**< \brief [20:20] Force Interrupt TE2I (rw) */
    Ifx_Strict_32Bit TRG_TE3I : 1;            /**< \brief [21:21] Force Interrupt TE3I (rw) */
    Ifx_Strict_32Bit TRG_TE4I : 1;            /**< \brief [22:22] Force Interrupt TE4I (rw) */
    Ifx_Strict_32Bit TRG_CDTI : 1;            /**< \brief [23:23] Force Interrupt CDTI (rw) */
    Ifx_Strict_32Bit TRG_CDSI : 1;            /**< \brief [24:24] Force Interrupt CDSI (rw) */
    Ifx_Strict_32Bit TRG_TORI : 1;            /**< \brief [25:25] Force Interrupt TORI (rw) */
    Ifx_Strict_32Bit TRG_SORI : 1;            /**< \brief [26:26] Force Interrupt SORI (rw) */
    Ifx_Strict_32Bit TRG_DCGI : 1;            /**< \brief [27:27] Force interrupt DCGI (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_IRQ_FORCINT_Bits;

/** \\brief  DPLL Interrupt Mode Register */
typedef struct _Ifx_GTM_DPLL_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_IRQ_MODE_Bits;

/** \\brief  DPLL Interrupt Notification Register */
typedef struct _Ifx_GTM_DPLL_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit PDI : 1;                 /**< \brief [0:0] DPLL disable interrupt; announces the switch off of the DEN bit. (rw) */
    Ifx_Strict_32Bit PEI : 1;                 /**< \brief [1:1] DPLL enable interrupt (rw) */
    Ifx_Strict_32Bit TINI : 1;                /**< \brief [2:2] TRIGGER minimum hold time violation interrupt (dt <= THMI > 0). (rw) */
    Ifx_Strict_32Bit TAXI : 1;                /**< \brief [3:3] TRIGGER maximum hold time violation interrupt (dt > THMA > 0). (rw) */
    Ifx_Strict_32Bit SISI : 1;                /**< \brief [4:4] STATE inactive slope interrupt. (rw) */
    Ifx_Strict_32Bit TISI : 1;                /**< \brief [5:5] TRIGGER inactive slope interrupt. (rw) */
    Ifx_Strict_32Bit MSI : 1;                 /**< \brief [6:6] Missing STATE interrupt. (rw) */
    Ifx_Strict_32Bit MTI : 1;                 /**< \brief [7:7] Missing TRIGGER interrupt. (rw) */
    Ifx_Strict_32Bit SASI : 1;                /**< \brief [8:8] STATE active slope interrupt. (rw) */
    Ifx_Strict_32Bit TASI : 1;                /**< \brief [9:9] TRIGGER active slope interrupt. (rw) */
    Ifx_Strict_32Bit PWI : 1;                 /**< \brief [10:10] Plausibility window (PVT) violation interrupt of TRIGGER. (rw) */
    Ifx_Strict_32Bit W2I : 1;                 /**< \brief [11:11] RAM write access to RAM region 2 interrupt. (rw) */
    Ifx_Strict_32Bit W1I : 1;                 /**< \brief [12:12] Write access to RAM region 1b or 1c interrupt. (rw) */
    Ifx_Strict_32Bit GL1I : 1;                /**< \brief [13:13] Get of lock interrupt, for SUB_INC1. (rw) */
    Ifx_Strict_32Bit LL1I : 1;                /**< \brief [14:14] Loss of lock interrupt for SUB_INC1. (rw) */
    Ifx_Strict_32Bit EI : 1;                  /**< \brief [15:15] Error interrupt (see status register bit 31). (rw) */
    Ifx_Strict_32Bit GL2I : 1;                /**< \brief [16:16] Get of lock interrupt, for SUB_INC2. (rw) */
    Ifx_Strict_32Bit LL2I : 1;                /**< \brief [17:17] Loss of lock interrupt for SUB_INC2. (rw) */
    Ifx_Strict_32Bit TE0I : 1;                /**< \brief [18:18] TRIGGER event interrupt 0. (rw) */
    Ifx_Strict_32Bit TE1I : 1;                /**< \brief [19:19] TRIGGER event interrupt 1. (rw) */
    Ifx_Strict_32Bit TE2I : 1;                /**< \brief [20:20] TRIGGER event interrupt 2. (rw) */
    Ifx_Strict_32Bit TE3I : 1;                /**< \brief [21:21] TRIGGER event interrupt 3. (rw) */
    Ifx_Strict_32Bit TE4I : 1;                /**< \brief [22:22] TRIGGER event interrupt 4. (rw) */
    Ifx_Strict_32Bit CDTI : 1;                /**< \brief [23:23] Calculation of TRIGGER duration done, only while NTI_CNT is zero. (rw) */
    Ifx_Strict_32Bit CDSI : 1;                /**< \brief [24:24] Calculation of STATE duration done (rw) */
    Ifx_Strict_32Bit TORI : 1;                /**< \brief [25:25] TRIGGER out of range interrupt (rw) */
    Ifx_Strict_32Bit SORI : 1;                /**< \brief [26:26] STATE out of range (rw) */
    Ifx_Strict_32Bit DCGI : 1;                /**< \brief [27:27] Direction change interrupt (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_IRQ_NOTIFY_Bits;

/** \\brief  DPLL Weighted Difference of Prediction Errors of STATE */
typedef struct _Ifx_GTM_DPLL_MEDT_S_Bits
{
    Ifx_Strict_32Bit MEDT_S : 24;             /**< \brief [23:0] Signed middle weighted difference between actual value and prediction of the last STATE increments: sint24; only calculated for SYS=1 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_MEDT_S_Bits;

/** \\brief  DPLL Weighted Difference of Prediction Errors of TRIGGER */
typedef struct _Ifx_GTM_DPLL_MEDT_T_Bits
{
    Ifx_Strict_32Bit MEDT_T : 24;             /**< \brief [23:0] Signed middle weighted difference between actual value and prediction of the last TRIGGER increments: sint24 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_MEDT_T_Bits;

/** \\brief  DPLL Calculated Number of Sub-Pulses between two nominal STATE
 * Events for SMC=0 */
typedef struct _Ifx_GTM_DPLL_MLS1_Bits
{
    Ifx_Strict_32Bit MLS1 : 18;               /**< \brief [17:0] Number of pulses between two STATE events (rw) */
    Ifx_Strict_32Bit NOT_USED : 6;            /**< \brief [23:18] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_MLS1_Bits;

/** \\brief  DPLL Calculated Number of Sub-Pulses between two nominal STATE
 * Events for SMC=1 and RMO=1 */
typedef struct _Ifx_GTM_DPLL_MLS2_Bits
{
    Ifx_Strict_32Bit MLS2 : 18;               /**< \brief [17:0] number of pulses between two STATE events (to be set and updated by the CPU). (rw) */
    Ifx_Strict_32Bit NOT_USED : 6;            /**< \brief [23:18] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_MLS2_Bits;

/** \\brief  DPLL Missing Pulses to be Added or Subtracted Directly 1 */
typedef struct _Ifx_GTM_DPLL_MPVAL1_Bits
{
    Ifx_Strict_32Bit MPVAL1 : 16;             /**< \brief [15:0] Missing pulses for direct correction of SUB_INC1 pulses by the CPU (sint16) (rw) */
    Ifx_Strict_32Bit SIX1 : 8;                /**< \brief [23:16] Sign extension for MPVAL1 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_MPVAL1_Bits;

/** \\brief  DPLL Missing Pulses to be Added or Subtracted Directly 2 */
typedef struct _Ifx_GTM_DPLL_MPVAL2_Bits
{
    Ifx_Strict_32Bit MPVAL2 : 16;             /**< \brief [15:0] Missing pulses for direct correction of SUB_INC2 pulses by the CPU (sint16) (rw) */
    Ifx_Strict_32Bit SIX2 : 8;                /**< \brief [23:16] Sign extension for MPVAL2 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_MPVAL2_Bits;

/** \\brief  DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
typedef struct _Ifx_GTM_DPLL_NA_Bits
{
    Ifx_Strict_32Bit DB : 10;                 /**< \brief [9:0] Number of events to Action_z (fractional part, z=0-31) (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [19:10] Number of events to Action_z (integer part, z=0-31) (rw) */
    Ifx_Strict_32Bit NOT_USED : 4;            /**< \brief [23:20] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NA_Bits;

/** \\brief  DPLL Number of Pulses to be Sent in Emergency Mode */
typedef struct _Ifx_GTM_DPLL_NMB_S_Bits
{
    Ifx_Strict_32Bit NMB_S : 20;              /**< \brief [19:0] Number of pulses for STATE (rw) */
    Ifx_Strict_32Bit NOT_USED : 4;            /**< \brief [23:20] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NMB_S_Bits;

/** \\brief  DPLL Target Number of Pulses to be Sent in Emergency Mode */
typedef struct _Ifx_GTM_DPLL_NMB_S_TAR_Bits
{
    Ifx_Strict_32Bit NMB_S_TAR : 20;          /**< \brief [19:0] Target Number of pulses for STATE (rw) */
    Ifx_Strict_32Bit NOT_USED : 4;            /**< \brief [23:20] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NMB_S_TAR_Bits;

/** \\brief  DPLL Last but one Target Number of Pulses to be Sent in Emergency
 * Mode */
typedef struct _Ifx_GTM_DPLL_NMB_S_TAR_OLD_Bits
{
    Ifx_Strict_32Bit NMB_S_TAR_OLD : 20;      /**< \brief [19:0] Target Number of pulses for STATE (rw) */
    Ifx_Strict_32Bit NOT_USED : 4;            /**< \brief [23:20] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NMB_S_TAR_OLD_Bits;

/** \\brief  DPLL Number of Pulses to be Sent in Normal Mode */
typedef struct _Ifx_GTM_DPLL_NMB_T_Bits
{
    Ifx_Strict_32Bit NMB_T : 16;              /**< \brief [15:0] Number of pulses for TRIGGER (rw) */
    Ifx_Strict_32Bit NOT_USED : 8;            /**< \brief [23:16] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NMB_T_Bits;

/** \\brief  DPLL Target Number of Pulses to be Sent in Normal Mode */
typedef struct _Ifx_GTM_DPLL_NMB_T_TAR_Bits
{
    Ifx_Strict_32Bit NMB_T_TAR : 16;          /**< \brief [15:0] Target Number of pulses for TRIGGER (rw) */
    Ifx_Strict_32Bit NOT_USED : 8;            /**< \brief [23:16] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NMB_T_TAR_Bits;

/** \\brief  DPLL Last but one Target Number of Pulses to be Sent in Normal Mode */
typedef struct _Ifx_GTM_DPLL_NMB_T_TAR_OLD_Bits
{
    Ifx_Strict_32Bit NMB_T_TAR_OLD : 16;      /**< \brief [15:0] Target Number of pulses for TRIGGER (rw) */
    Ifx_Strict_32Bit NOT_USED : 8;            /**< \brief [23:16] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NMB_T_TAR_OLD_Bits;

/** \\brief  DPLL Number of Active TRIGGER Events to Interrupt */
typedef struct _Ifx_GTM_DPLL_NTI_CNT_Bits
{
    Ifx_Strict_32Bit NTI_CNT : 10;            /**< \brief [9:0] Number of TRIGGERs to interrupt (rw) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NTI_CNT_Bits;

/** \\brief  DPLL Number of Recent STATE Events Used for Calculations */
typedef struct _Ifx_GTM_DPLL_NUSC_Bits
{
    Ifx_Strict_32Bit NUSE : 6;                /**< \brief [5:0] Number of recent STATE events used for SUB_INCx calculations modulo 2*(SNUmax+1). (rw) */
    Ifx_Strict_32Bit FSS : 1;                 /**< \brief [6:6] FULL_SCALE of STATE (rw) */
    Ifx_Strict_32Bit SYN_S : 6;               /**< \brief [12:7] Number of real and virtual events to be considered for the current increment. (rw) */
    Ifx_Strict_32Bit SYN_S_OLD : 6;           /**< \brief [18:13] Number of real and virtual events to be considered for the last increment. (rw) */
    Ifx_Strict_32Bit VSN : 6;                 /**< \brief [24:19] Virtual STATE number (rw) */
    Ifx_Strict_32Bit reserved_25 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WNUS : 1;                /**< \brief [29:29] Write control bit for NUSE (rw) */
    Ifx_Strict_32Bit WSYN : 1;                /**< \brief [30:30] Write control bit for SYN_S and SYN_S_OLD (rw) */
    Ifx_Strict_32Bit WVSN : 1;                /**< \brief [31:31] Write control bit for VS (rw) */
} Ifx_GTM_DPLL_NUSC_Bits;

/** \\brief  DPLL Extension register number 1 for DPLL_NUSC 4 */
typedef struct _Ifx_GTM_DPLL_NUSC_EXT1_Bits
{
    Ifx_Strict_32Bit SYN_S : 7;               /**< \brief [6:0] Number of real and virtual events to be considered for the current increment. (rw) */
    Ifx_Strict_32Bit reserved_7 : 9;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SYN_S_OLD : 7;           /**< \brief [22:16] Number of real and virtual events to be considered for the last increment. (rw) */
    Ifx_Strict_32Bit reserved_23 : 7;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WSYN : 1;                /**< \brief [30:30] Write control bit for SYN_S and SYN_S_OLD (rw) */
    Ifx_Strict_32Bit reserved_31 : 1;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_NUSC_EXT1_Bits;

/** \\brief  DPLL Extension register number 2 for DPLL_NUSC 4 */
typedef struct _Ifx_GTM_DPLL_NUSC_EXT2_Bits
{
    Ifx_Strict_32Bit NUSE : 7;                /**< \brief [6:0] Number of recent STATE events used for SUB_INCx calculations modulo 2*(SNUmax+1). (rw) */
    Ifx_Strict_32Bit reserved_7 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FSS : 1;                 /**< \brief [15:15] this value is to be set, when NUSE is set to FULL_SCALE (rw) */
    Ifx_Strict_32Bit VSN : 7;                 /**< \brief [22:16] Number of virtual state increments in the current NUSE region. (rw) */
    Ifx_Strict_32Bit reserved_23 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WNUS : 1;                /**< \brief [29:29] Write control bit for NUSE (rw) */
    Ifx_Strict_32Bit reserved_30 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WVSN : 1;                /**< \brief [31:31] write control bit for VSN (rw) */
} Ifx_GTM_DPLL_NUSC_EXT2_Bits;

/** \\brief  DPLL Number of Recent TRIGGER Events Used for Calculations */
typedef struct _Ifx_GTM_DPLL_NUTC_Bits
{
    Ifx_Strict_32Bit NUTE : 10;               /**< \brief [9:0] Number of recent TRIGGER events used for SUB_INC1 and action calculations modulo 2*(TNUmax+1) (rw) */
    Ifx_Strict_32Bit FST : 1;                 /**< \brief [10:10] FULL_SCALE of TRIGGER (rw) */
    Ifx_Strict_32Bit reserved_11 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SYN_T : 3;               /**< \brief [15:13] Number of real and virtual events to be considered for the current increment. (rw) */
    Ifx_Strict_32Bit SYN_T_OLD : 3;           /**< \brief [18:16] Number of real and virtual events to be considered for the last increment (rw) */
    Ifx_Strict_32Bit VTN : 6;                 /**< \brief [24:19] Virtual TRIGGER number (rw) */
    Ifx_Strict_32Bit reserved_25 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit WNUT : 1;                /**< \brief [29:29] Write control bit for NUTE and FST (rw) */
    Ifx_Strict_32Bit WSYN : 1;                /**< \brief [30:30] Write control bit for SYN_T and SYN_T_OLD (rw) */
    Ifx_Strict_32Bit WVTN : 1;                /**< \brief [31:31] Write control bit for VTN (rw) */
} Ifx_GTM_DPLL_NUTC_Bits;

/** \\brief  DPLL Offset And Switch Old/New Address Register */
typedef struct _Ifx_GTM_DPLL_OSW_Bits
{
    Ifx_Strict_32Bit SWON_S : 1;              /**< \brief [0:0] Switch of new STATE (r) */
    Ifx_Strict_32Bit SWON_T : 1;              /**< \brief [1:1] Switch of new TRIGGER (r) */
    Ifx_Strict_32Bit reserved_2 : 6;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OSS : 2;                 /**< \brief [9:8] Offset size of RAM region 2 (rw) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_OSW_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 0 */
typedef struct _Ifx_GTM_DPLL_PDT_0_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_0_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 10 */
typedef struct _Ifx_GTM_DPLL_PDT_10_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_10_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 11 */
typedef struct _Ifx_GTM_DPLL_PDT_11_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_11_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 12 */
typedef struct _Ifx_GTM_DPLL_PDT_12_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_12_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 13 */
typedef struct _Ifx_GTM_DPLL_PDT_13_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_13_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 14 */
typedef struct _Ifx_GTM_DPLL_PDT_14_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_14_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 15 */
typedef struct _Ifx_GTM_DPLL_PDT_15_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_15_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 16 */
typedef struct _Ifx_GTM_DPLL_PDT_16_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_16_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 17 */
typedef struct _Ifx_GTM_DPLL_PDT_17_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_17_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 18 */
typedef struct _Ifx_GTM_DPLL_PDT_18_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_18_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 19 */
typedef struct _Ifx_GTM_DPLL_PDT_19_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_19_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 1 */
typedef struct _Ifx_GTM_DPLL_PDT_1_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_1_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 20 */
typedef struct _Ifx_GTM_DPLL_PDT_20_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_20_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 21 */
typedef struct _Ifx_GTM_DPLL_PDT_21_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_21_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 22 */
typedef struct _Ifx_GTM_DPLL_PDT_22_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_22_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 23 */
typedef struct _Ifx_GTM_DPLL_PDT_23_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_23_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 24 */
typedef struct _Ifx_GTM_DPLL_PDT_24_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_24_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 25 */
typedef struct _Ifx_GTM_DPLL_PDT_25_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_25_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 26 */
typedef struct _Ifx_GTM_DPLL_PDT_26_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_26_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 27 */
typedef struct _Ifx_GTM_DPLL_PDT_27_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_27_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 28 */
typedef struct _Ifx_GTM_DPLL_PDT_28_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_28_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 29 */
typedef struct _Ifx_GTM_DPLL_PDT_29_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_29_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 2 */
typedef struct _Ifx_GTM_DPLL_PDT_2_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_2_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 30 */
typedef struct _Ifx_GTM_DPLL_PDT_30_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_30_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 31 */
typedef struct _Ifx_GTM_DPLL_PDT_31_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_31_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 3 */
typedef struct _Ifx_GTM_DPLL_PDT_3_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_3_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 4 */
typedef struct _Ifx_GTM_DPLL_PDT_4_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_4_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 5 */
typedef struct _Ifx_GTM_DPLL_PDT_5_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_5_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 6 */
typedef struct _Ifx_GTM_DPLL_PDT_6_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_6_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 7 */
typedef struct _Ifx_GTM_DPLL_PDT_7_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_7_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 8 */
typedef struct _Ifx_GTM_DPLL_PDT_8_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_8_Bits;

/** \\brief  DPLL Projected Increment Sum Relations for Action 9 */
typedef struct _Ifx_GTM_DPLL_PDT_9_Bits
{
    Ifx_Strict_32Bit DB : 14;                 /**< \brief [13:0] Fractional part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit DW : 10;                 /**< \brief [23:14] Integer part of relation between TRIGGER or STATE increments. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PDT_9_Bits;

/** \\brief  DPLL ACTION Position/Value Request */
typedef struct _Ifx_GTM_DPLL_PSA_Bits
{
    Ifx_Strict_32Bit PSA : 24;                /**< \brief [23:0] Position information of a desired action (z=0-31) (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PSA_Bits;

/** \\brief  DPLL ACTION Position/Value Action 0 Request Register */
typedef struct _Ifx_GTM_DPLL_PSAC_Bits
{
    Ifx_Strict_32Bit PSAC : 24;               /**< \brief [23:0] Calculated position value for the start of ACTION_z in normal or emergency mode according to equations DPLL-17 or DPLL-20 respectively (z=0-31). (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PSAC_Bits;

/** \\brief  DPLL Actual Calculated Position Stamp of STATE */
typedef struct _Ifx_GTM_DPLL_PSSC_Bits
{
    Ifx_Strict_32Bit PSSC : 24;               /**< \brief [23:0] Calculated position stamp for the last STATE input; (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PSSC_Bits;

/** \\brief  DPLL Measured Position Stamp at Last STATE Input */
typedef struct _Ifx_GTM_DPLL_PSSM_Bits
{
    Ifx_Strict_32Bit PSSM : 24;               /**< \brief [23:0] Position stamp of STATE, measured (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PSSM_Bits;

/** \\brief  DPLL Measured Position Stamp at Last but one STATE Input */
typedef struct _Ifx_GTM_DPLL_PSSM_OLD_Bits
{
    Ifx_Strict_32Bit PSSM_OLD : 24;           /**< \brief [23:0] Last but one position stamp of STATE, measured (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PSSM_OLD_Bits;

/** \\brief  DPLL Actual Calculated Position Stamp of TRIGGER */
typedef struct _Ifx_GTM_DPLL_PSTC_Bits
{
    Ifx_Strict_32Bit PSTC : 24;               /**< \brief [23:0] Calculated position stamp of last TRIGGER input (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PSTC_Bits;

/** \\brief  DPLL Measured Position Stamp at Last TRIGGER Input */
typedef struct _Ifx_GTM_DPLL_PSTM_Bits
{
    Ifx_Strict_32Bit PSTM : 24;               /**< \brief [23:0] Position stamp of TRIGGER, measured (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PSTM_Bits;

/** \\brief  DPLL Measured Position Stamp at Last but one TRIGGER Input */
typedef struct _Ifx_GTM_DPLL_PSTM_OLD_Bits
{
    Ifx_Strict_32Bit PSTM_OLD : 24;           /**< \brief [23:0] Last but one position stamp of TRIGGER, measured (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PSTM_OLD_Bits;

/** \\brief  DPLL Plausibility Value of Next TRIGGER Slope */
typedef struct _Ifx_GTM_DPLL_PVT_Bits
{
    Ifx_Strict_32Bit PVT : 24;                /**< \brief [23:0] Plausibility value of next active TRIGGER slope (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_PVT_Bits;

/** \\brief  DPLL RAM Initialization Register */
typedef struct _Ifx_GTM_DPLL_RAM_INI_Bits
{
    Ifx_Strict_32Bit INIT_1A : 1;             /**< \brief [0:0] RAM region 1a initialization in progress (r) */
    Ifx_Strict_32Bit INIT_1BC : 1;            /**< \brief [1:1] RAM region 1b and 1c initialization in progress (r) */
    Ifx_Strict_32Bit INIT_2 : 1;              /**< \brief [2:2] RAM region 2 initialization in progress (r) */
    Ifx_Strict_32Bit reserved_3 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit INIT_RAM : 1;            /**< \brief [4:4] RAM regions 1a, 1b and 2 are to be initialized. (rw) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_RAM_INI_Bits;

/** \\brief  DPLL Reciprocal Value of the Expected Increment Duration of STATE */
typedef struct _Ifx_GTM_DPLL_RCDT_SX_Bits
{
    Ifx_Strict_32Bit RCDT_SX : 24;            /**< \brief [23:0] Reciprocal value of expected increment duration *2while only the lower 24 bits are used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_RCDT_SX_Bits;

/** \\brief  DPLL Reciprocal Value of the Expected Nominal Increment Duration of
 * STATE */
typedef struct _Ifx_GTM_DPLL_RCDT_SX_NOM_Bits
{
    Ifx_Strict_32Bit RCDT_SX_NOM : 24;        /**< \brief [23:0] Reciprocal value of nominal increment duration *2while only the lower 24 bits are used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_RCDT_SX_NOM_Bits;

/** \\brief  DPLL Reciprocal Value of the Expected Increment Duration of TRIGGER */
typedef struct _Ifx_GTM_DPLL_RCDT_TX_Bits
{
    Ifx_Strict_32Bit RCDT_TX : 24;            /**< \brief [23:0] Reciprocal value of expected increment duration *2while only the lower 24 bits are used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_RCDT_TX_Bits;

/** \\brief  DPLL Reciprocal Value of the Expected Nominal Increment Duration of
 * TRIGGER */
typedef struct _Ifx_GTM_DPLL_RCDT_TX_NOM_Bits
{
    Ifx_Strict_32Bit RCDT_TX_NOM : 24;        /**< \brief [23:0] Reciprocal value of nominal increment duration *2while only the lower 24 bits are used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_RCDT_TX_NOM_Bits;

/** \\brief  DPLL Reciprocal Value of the Last Increment of STATE */
typedef struct _Ifx_GTM_DPLL_RDT_S_ACT_Bits
{
    Ifx_Strict_32Bit RDT_S_ACT : 24;          /**< \brief [23:0] Reciprocal value of last STATE increment *2, only the lower 24 bits are used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_RDT_S_ACT_Bits;

/** \\brief  DPLL Reciprocal Values of the Nominal STATE Increment Duration in
 * FULL_SCALE */
typedef struct _Ifx_GTM_DPLL_RDT_S_Bits
{
    Ifx_Strict_32Bit RDT_S : 24;              /**< \brief [23:0] Reciprocal difference time of STATE (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_RDT_S_Bits;

/** \\brief  DPLL Reciprocal Value of the Last Increment of TRIGGER */
typedef struct _Ifx_GTM_DPLL_RDT_T_ACT_Bits
{
    Ifx_Strict_32Bit RDT_T_ACT : 24;          /**< \brief [23:0] Reciprocal value of last TRIGGER increment *2, only the lower 24 bits are used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_RDT_T_ACT_Bits;

/** \\brief  DPLL Additional STATE Input Delay Register */
typedef struct _Ifx_GTM_DPLL_SIDEL_Bits
{
    Ifx_Strict_32Bit SIDEL : 24;              /**< \brief [23:0] STATE input delay (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_SIDEL_Bits;

/** \\brief  DPLL STATE Locking Range */
typedef struct _Ifx_GTM_DPLL_SLR_Bits
{
    Ifx_Strict_32Bit SLR : 8;                 /**< \brief [7:0] Value is to be multiplied with the last nominal STATE duration in order to get the range for the next STATE event without setting SOR in the DPLL_STATUS register (rw) */
    Ifx_Strict_32Bit NOT_USED : 16;           /**< \brief [23:8] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_SLR_Bits;

/** \\brief  DPLL Status of the State Machine States Register */
typedef struct _Ifx_GTM_DPLL_STA_Bits
{
    Ifx_Strict_32Bit STA_T : 8;               /**< \brief [7:0] Status of TRIGGER state machine; state binary coded (r) */
    Ifx_Strict_32Bit reserved_8 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CNT_T : 3;               /**< \brief [11:9] Count TRIGGER (r) */
    Ifx_Strict_32Bit STA_S : 8;               /**< \brief [19:12] Status of STATE state machine (r) */
    Ifx_Strict_32Bit reserved_20 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CNT_S : 3;               /**< \brief [23:21] Count STATE (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_STA_Bits;

/** \\brief  DPLL STA Flag Register */
typedef struct _Ifx_GTM_DPLL_STA_FLAG_Bits
{
    Ifx_Strict_32Bit STA_FLAG_T : 1;          /**< \brief [0:0] Flag according to DPLL_MASK.STA_NOTIFY_T (rw) */
    Ifx_Strict_32Bit reserved_1 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit STA_FLAG_S : 1;          /**< \brief [8:8] Flag according to DPLL_STA_MASK.STA_NOTIFY_S (rw) */
    Ifx_Strict_32Bit INC_CNT1_FLAG : 1;       /**< \brief [9:9] Flag according to DPLL_INC_CNT1_MASK.INC_CNT1_NOTIFY (rw) */
    Ifx_Strict_32Bit INC_CNT2_FLAG : 1;       /**< \brief [10:10] Flag according to DPLL_INC_CNT2_MASK.INC_CNT2_NOTIFY (rw) */
    Ifx_Strict_32Bit reserved_11 : 21;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_STA_FLAG_Bits;

/** \\brief  DPLL Trigger Masks for Signals DPLL_STA_T and DPLL_STA_S */
typedef struct _Ifx_GTM_DPLL_STA_MASK_Bits
{
    Ifx_Strict_32Bit STA_NOTIFY_T : 8;        /**< \brief [7:0] Notify value for STA_T of register DPLL_STA. (rw) */
    Ifx_Strict_32Bit STA_NOTIFY_S : 8;        /**< \brief [15:8] Notify value for STA_S of register DPLL_STA. (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_STA_MASK_Bits;

/** \\brief  DPLL Status Register */
typedef struct _Ifx_GTM_DPLL_STATUS_Bits
{
    Ifx_Strict_32Bit FPCE : 1;                /**< \brief [0:0] Fast pulse correction error (rw) */
    Ifx_Strict_32Bit CSO : 1;                 /**< \brief [1:1] Calculated STATE duration overflow (rw) */
    Ifx_Strict_32Bit reserved_2 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CTO : 1;                 /**< \brief [3:3] Calculated TRIGGER duration overflow (rw) */
    Ifx_Strict_32Bit CRO : 1;                 /**< \brief [4:4] Calculated Reciprocal value overflow (rw) */
    Ifx_Strict_32Bit RCS : 1;                 /**< \brief [5:5] Resolution conflict STATE. (r) */
    Ifx_Strict_32Bit RCT : 1;                 /**< \brief [6:6] Resolution conflict TRIGGER. (r) */
    Ifx_Strict_32Bit PSE : 1;                 /**< \brief [7:7] Prediction space configuration error (r) */
    Ifx_Strict_32Bit SOR : 1;                 /**< \brief [8:8] STATE out of range (rw) */
    Ifx_Strict_32Bit MS : 1;                  /**< \brief [9:9] Missing STATE detected according to SOV. (rw) */
    Ifx_Strict_32Bit TOR : 1;                 /**< \brief [10:10] TRIGGER out of range (rw) */
    Ifx_Strict_32Bit MT : 1;                  /**< \brief [11:11] Missing TRIGGER detected according to TOV (rw) */
    Ifx_Strict_32Bit RAM2_ERR : 1;            /**< \brief [12:12] DPLL internal access to not configured RAM2 memory space (rw) */
    Ifx_Strict_32Bit reserved_13 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit LOW_RES : 1;             /**< \brief [15:15] Low resolution of TBU_TS0 is used for DPLL input (r) */
    Ifx_Strict_32Bit CSVS : 1;                /**< \brief [16:16] Current signal value STATE (r) */
    Ifx_Strict_32Bit CSVT : 1;                /**< \brief [17:17] Current signal value TRIGGER (r) */
    Ifx_Strict_32Bit CAIP2 : 1;               /**< \brief [18:18] Calculation of upper half actions in progress (r) */
    Ifx_Strict_32Bit CAIP1 : 1;               /**< \brief [19:19] Calculation of lower half actions in progress (r) */
    Ifx_Strict_32Bit ISN : 1;                 /**< \brief [20:20] Increment number of STATE is not plausible (r) */
    Ifx_Strict_32Bit ITN : 1;                 /**< \brief [21:21] Increment number of TRIGGER is not plausible (r) */
    Ifx_Strict_32Bit BWD2 : 1;                /**< \brief [22:22] Backwards drive of SUB_INC2 (r) */
    Ifx_Strict_32Bit BWD1 : 1;                /**< \brief [23:23] Backwards drive of SUB_INC1 (r) */
    Ifx_Strict_32Bit reserved_24 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit LOCK2 : 1;               /**< \brief [25:25] DPLL Lock status concerning SUB_INC2 (r) */
    Ifx_Strict_32Bit SYS : 1;                 /**< \brief [26:26] Synchronization condition of STATE fixed. (r) */
    Ifx_Strict_32Bit SYT : 1;                 /**< \brief [27:27] Synchronization condition of TRIGGER fixed. (r) */
    Ifx_Strict_32Bit FSD : 1;                 /**< \brief [28:28] First STATE detected. (r) */
    Ifx_Strict_32Bit FTD : 1;                 /**< \brief [29:29] First TRIGGER detected. (r) */
    Ifx_Strict_32Bit LOCK1 : 1;               /**< \brief [30:30] DPLL Lock status concerning SUB_INC1 (r) */
    Ifx_Strict_32Bit ERR : 1;                 /**< \brief [31:31] Error during configuration or operation resulting in unexpected values. (r) */
} Ifx_GTM_DPLL_STATUS_Bits;

/** \\brief  DPLL TBU_TS0 Value at last STATE Event */
typedef struct _Ifx_GTM_DPLL_TBU_TS0_S_Bits
{
    Ifx_Strict_32Bit TBU_TS0_S : 24;          /**< \brief [23:0] Value of TBU_TS0 at the last STATE event; (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TBU_TS0_S_Bits;

/** \\brief  DPLL TBU_TS0 Value at last TRIGGER Event */
typedef struct _Ifx_GTM_DPLL_TBU_TS0_T_Bits
{
    Ifx_Strict_32Bit TBU_TS0_T : 24;          /**< \brief [23:0] Value of TBU_TS0 at the last TRIGGER event; (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TBU_TS0_T_Bits;

/** \\brief  DPLL TRIGGER Hold Time Maximum Value */
typedef struct _Ifx_GTM_DPLL_THMA_Bits
{
    Ifx_Strict_32Bit THMA : 16;               /**< \brief [15:0] Maximal time between active and inactive TRIGGER slope (uint16) (rw) */
    Ifx_Strict_32Bit NOT_USED : 8;            /**< \brief [23:16] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_THMA_Bits;

/** \\brief  DPLL TRIGGER Hold Time Minimum Value */
typedef struct _Ifx_GTM_DPLL_THMI_Bits
{
    Ifx_Strict_32Bit THMI : 16;               /**< \brief [15:0] Minimal time between active and inactive TRIGGER slope (uint16) (rw) */
    Ifx_Strict_32Bit NOT_USED : 8;            /**< \brief [23:16] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_THMI_Bits;

/** \\brief  DPLL Immediate THVAL Value Register */
typedef struct _Ifx_GTM_DPLL_THVAL2_Bits
{
    Ifx_Strict_32Bit THVAL : 24;              /**< \brief [23:0] Measured last pulse time from active to inactive slope of TRIGGER after correction of input slope filter delays (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_THVAL2_Bits;

/** \\brief  DPLL Measured TRIGGER Hold Time Value */
typedef struct _Ifx_GTM_DPLL_THVAL_Bits
{
    Ifx_Strict_32Bit THVAL : 24;              /**< \brief [23:0] Measured time from the last active slope to the next inactive TRIGGER slope in time stamp clock counts: this does mean the clock selected for the TBU_CH0_BASE (uint16) (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_THVAL_Bits;

/** \\brief  DPLL Additional TRIGGER Input Register */
typedef struct _Ifx_GTM_DPLL_TIDEL_Bits
{
    Ifx_Strict_32Bit TIDEL : 24;              /**< \brief [23:0] TRIGGER input delay (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TIDEL_Bits;

/** \\brief  DPLL TRIGGER Locking Range */
typedef struct _Ifx_GTM_DPLL_TLR_Bits
{
    Ifx_Strict_32Bit TLR : 8;                 /**< \brief [7:0] Value is to be multiplied with the last nominal TRIGGER duration in order to get the range for the next TRIGGER event without setting TOR in the DPLL_STATUS register (rw) */
    Ifx_Strict_32Bit NOT_USED : 16;           /**< \brief [23:8] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TLR_Bits;

/** \\brief  DPLL Time Out Value of Active TRIGGER Slope */
typedef struct _Ifx_GTM_DPLL_TOV_Bits
{
    Ifx_Strict_32Bit TOV_DB : 10;             /**< \brief [9:0] Decision value (fractional part) for missing TRIGGER interrupt (rw) */
    Ifx_Strict_32Bit TOV_DW : 6;              /**< \brief [15:10] Decision value (integer part) for missing TRIGGER interrupt (rw) */
    Ifx_Strict_32Bit NOT_USED : 8;            /**< \brief [23:16] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TOV_Bits;

/** \\brief  DPLL Time Out Value of active STATE Slope */
typedef struct _Ifx_GTM_DPLL_TOV_S_Bits
{
    Ifx_Strict_32Bit DB : 10;                 /**< \brief [9:0] Decision value (fractional part) for missing STATE interrupt. (rw) */
    Ifx_Strict_32Bit DW : 6;                  /**< \brief [15:10] Decision value (integer part) for missing STATE interrupt. (rw) */
    Ifx_Strict_32Bit NOT_USED : 8;            /**< \brief [23:16] Not used (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TOV_S_Bits;

/** \\brief  DPLL Actual STATE Time Stamp */
typedef struct _Ifx_GTM_DPLL_TS_S_Bits
{
    Ifx_Strict_32Bit STATE_TS : 24;           /**< \brief [23:0] Time stamp value of the last active STATE input. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TS_S_Bits;

/** \\brief  DPLL Previous STATE Time Stamp */
typedef struct _Ifx_GTM_DPLL_TS_S_OLD_Bits
{
    Ifx_Strict_32Bit STATE_TS_OLD : 24;       /**< \brief [23:0] Time stamp value of the last active STATE input. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TS_S_OLD_Bits;

/** \\brief  DPLL Actual TRIGGER Time Stamp Value */
typedef struct _Ifx_GTM_DPLL_TS_T_Bits
{
    Ifx_Strict_32Bit TRIGGER_TS : 24;         /**< \brief [23:0] Time stamp value of the last active TRIGGER input. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TS_T_Bits;

/** \\brief  DPLL Previous TRIGGER Time Stamp Value */
typedef struct _Ifx_GTM_DPLL_TS_T_OLD_Bits
{
    Ifx_Strict_32Bit TRIGGER_TS_OLD : 24;     /**< \brief [23:0] Time stamp value of the last but one active TRIGGER input. (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TS_T_OLD_Bits;

/** \\brief  DPLL Calculated Time Value to start Action 0 Register */
typedef struct _Ifx_GTM_DPLL_TSAC_Bits
{
    Ifx_Strict_32Bit TSAC : 24;               /**< \brief [23:0] Calculated time stamp for ACTION_z (z=0-31) (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TSAC_Bits;

/** \\brief  DPLL Time Stamp Values of the Nominal STATE Events in FULL_SCALE */
typedef struct _Ifx_GTM_DPLL_TSF_S_Bits
{
    Ifx_Strict_32Bit TSF_S : 24;              /**< \brief [23:0] Time stamp field of STATE (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_DPLL_TSF_S_Bits;

/** \\brief  DTM_AUX Input Selection Register */
typedef struct _Ifx_GTM_DTMAUXINSEL_Bits
{
    Ifx_Strict_32Bit ASEL0 : 2;               /**< \brief [1:0] CDTM0_DTM4_AUX Input Selection (ATOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit ASEL1 : 2;               /**< \brief [3:2] CDTM1_DTM4_AUX Input Selection (ATOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit ASEL2 : 2;               /**< \brief [5:4] CDTM2_DTM4_AUX Input Selection (ATOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit ASEL3 : 2;               /**< \brief [7:6] CDTM3_DTM4_AUX Input Selection (ATOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit ASEL4 : 2;               /**< \brief [9:8] CDTM4_DTM4_AUX Input Selection (ATOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit ASEL5 : 2;               /**< \brief [11:10] CDTM5_DTM4_AUX Input Selection (ATOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit ASEL6 : 2;               /**< \brief [13:12] CDTM6_DTM4_AUX Input Selection (ATOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit reserved_14 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TSEL0 : 2;               /**< \brief [17:16] CDTM0_DTM0_AUX Input Selection (TOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit TSEL1 : 2;               /**< \brief [19:18] CDTM1_DTM0_AUX Input Selection (TOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit TSEL2 : 2;               /**< \brief [21:20] CDTM2_DTM0_AUX Input Selection (TOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit TSEL3 : 2;               /**< \brief [23:22] CDTM3_DTM0_AUX Input Selection (TOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit TSEL4 : 2;               /**< \brief [25:24] CDTM4_DTM0_AUX Input Selection (TOMx_CH0...3) (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_DTMAUXINSEL_Bits;

/** \\brief  GTM Error interrupt enable register */
typedef struct _Ifx_GTM_EIRQ_EN_Bits
{
    Ifx_Strict_32Bit AEI_TO_XPT_EIRQ_EN : 1;    /**< \brief [0:0] AEI_TO_XPT_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit AEI_USP_ADDR_EIRQ_EN : 1;  /**< \brief [1:1] AEI_USP_ADDR_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit AEI_IM_ADDR_EIRQ_EN : 1;   /**< \brief [2:2] AEI_IM_ADDR_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit AEI_USP_BE_EIRQ_EN : 1;    /**< \brief [3:3] AEI_USP_BE_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit AEIM_USP_ADDR_EIRQ_EN : 1; /**< \brief [4:4] AEIM_USP_ADDR_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit AEIM_IM_ADDR_EIRQ_EN : 1;  /**< \brief [5:5] AEIM_IM_ADDR_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit AEIM_USP_BE_EIRQ_EN : 1;   /**< \brief [6:6] AEIM_USP_BE_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit CLK_EN_ERR_EIRQ_EN : 1;    /**< \brief [7:7] CLK_EN_ERR_EIRQ interrupt enable. (rw) */
    Ifx_Strict_32Bit CLK_PER_ERR_EIRQ_EN : 1;   /**< \brief [8:8] CLK_PER_ERR_EIRQ interrupt enable. (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;           /**< \brief \internal Reserved */
} Ifx_GTM_EIRQ_EN_Bits;

/** \\brief  GTM external capture trigger enable 0 */
typedef struct _Ifx_GTM_EXT_CAP_EN_Bits
{
    Ifx_Strict_32Bit TIM_I_EXT_CAP_EN : 8;    /**< \brief [7:0] TIM[i]_EXT_CAPTURE signal forwarding enable (rw) */
    Ifx_Strict_32Bit TIM_IP1_EXT_CAP_EN : 8;  /**< \brief [15:8] TIM[i+1]_EXT_CAPTURE signal forwarding enable (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_EXT_CAP_EN_Bits;

/** \\brief  F2A0 stream control register */
typedef struct _Ifx_GTM_F2A_CTRL_Bits
{
    Ifx_Strict_32Bit STR4_CONF : 2;           /**< \brief [1:0] Reconfiguration of stream 4 to FIFO channel 0 (rw) */
    Ifx_Strict_32Bit STR5_CONF : 2;           /**< \brief [3:2] Reconfiguration of stream 5 to FIFO channel 1 (rw) */
    Ifx_Strict_32Bit STR6_CONF : 2;           /**< \brief [5:4] Reconfiguration of stream 6 to FIFO channel 2 (rw) */
    Ifx_Strict_32Bit STR7_CONF : 2;           /**< \brief [7:6] Reconfiguration of stream 7 to FIFO channel 3 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_F2A_CTRL_Bits;

/** \\brief  F2A0 stream activation register */
typedef struct _Ifx_GTM_F2A_ENABLE_Bits
{
    Ifx_Strict_32Bit STR0_EN : 2;             /**< \brief [1:0] Enable/disable stream 0 (rw) */
    Ifx_Strict_32Bit STR1_EN : 2;             /**< \brief [3:2] Enable/disable stream 1 (rw) */
    Ifx_Strict_32Bit STR2_EN : 2;             /**< \brief [5:4] Enable/disable stream 2 (rw) */
    Ifx_Strict_32Bit STR3_EN : 2;             /**< \brief [7:6] Enable/disable stream 3 (rw) */
    Ifx_Strict_32Bit STR4_EN : 2;             /**< \brief [9:8] Enable/disable stream 4 (rw) */
    Ifx_Strict_32Bit STR5_EN : 2;             /**< \brief [11:10] Enable/disable stream 5 (rw) */
    Ifx_Strict_32Bit STR6_EN : 2;             /**< \brief [13:12] Enable/disable stream 6 (rw) */
    Ifx_Strict_32Bit STR7_EN : 2;             /**< \brief [15:14] Enable/disable stream 7 (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_F2A_ENABLE_Bits;

/** \\brief  F2A0 stream 0 read address register */
typedef struct _Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO_Bits
{
    Ifx_Strict_32Bit ADDR : 9;                /**< \brief [8:0] ARU Read address (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO_Bits;

/** \\brief  F2A0 stream 0 configuration register */
typedef struct _Ifx_GTM_F2A_STR_CH_STR_CFG_Bits
{
    Ifx_Strict_32Bit reserved_0 : 16;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TMODE : 2;               /**< \brief [17:16] Transfer mode for 53 bit ARU data from/to FIFO (rw) */
    Ifx_Strict_32Bit DIR : 1;                 /**< \brief [18:18] Data transfer direction (rw) */
    Ifx_Strict_32Bit reserved_19 : 13;        /**< \brief \internal Reserved */
} Ifx_GTM_F2A_STR_CH_STR_CFG_Bits;

/** \\brief  FIFO0 channel 0 control register */
typedef struct _Ifx_GTM_FIFO_CH_CTRL_Bits
{
    Ifx_Strict_32Bit RBM : 1;                 /**< \brief [0:0] Ring buffer mode enable (rw) */
    Ifx_Strict_32Bit RAP : 1;                 /**< \brief [1:1] RAM access priority (rw) */
    Ifx_Strict_32Bit FLUSH : 1;               /**< \brief [2:2] FIFO Flush control (rw) */
    Ifx_Strict_32Bit WULOCK : 1;              /**< \brief [3:3] RAM write unlock. (rw) */
    Ifx_Strict_32Bit Reserved : 28;           /**< \brief [31:4] reserved (r) */
} Ifx_GTM_FIFO_CH_CTRL_Bits;

/** \\brief  FIFO0 channel 0 error interrupt enable register */
typedef struct _Ifx_GTM_FIFO_CH_EIRQ_EN_Bits
{
    Ifx_Strict_32Bit FIFO_EMPTY_EIRQ_EN : 1;  /**< \brief [0:0] FIFO empty error interrupt enable (rw) */
    Ifx_Strict_32Bit FIFO_FULL_EIRQ_EN : 1;   /**< \brief [1:1] FIFO full error interrupt enable (rw) */
    Ifx_Strict_32Bit FIFO_LWM_EIRQ_EN : 1;    /**< \brief [2:2] FIFO low watermark error interrupt enable (rw) */
    Ifx_Strict_32Bit FIFO_UWM_EIRQ_EN : 1;    /**< \brief [3:3] FIFO upper watermark error interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_EIRQ_EN_Bits;

/** \\brief  FIFO0 channel 0 end address register */
typedef struct _Ifx_GTM_FIFO_CH_END_ADDR_Bits
{
    Ifx_Strict_32Bit ADDR : 10;               /**< \brief [9:0] End address for FIFO channel z (rw) */
    Ifx_Strict_32Bit Reserved : 22;           /**< \brief [31:10] Reserved: reserved (r) */
} Ifx_GTM_FIFO_CH_END_ADDR_Bits;

/** \\brief  FIFO0 channel 0 fill level register */
typedef struct _Ifx_GTM_FIFO_CH_FILL_LEVEL_Bits
{
    Ifx_Strict_32Bit LEVEL : 11;              /**< \brief [10:0] Fill level of the current FIFO (r) */
    Ifx_Strict_32Bit reserved_11 : 21;        /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_FILL_LEVEL_Bits;

/** \\brief  FIFO0 channel 0 interrupt enable register */
typedef struct _Ifx_GTM_FIFO_CH_IRQ_EN_Bits
{
    Ifx_Strict_32Bit FIFO_EMPTY_IRQ_EN : 1;   /**< \brief [0:0] interrupt enable (rw) */
    Ifx_Strict_32Bit FIFO_FULL_IRQ_EN : 1;    /**< \brief [1:1] Interrupt enable (rw) */
    Ifx_Strict_32Bit FIFO_LWM_IRQ_EN : 1;     /**< \brief [2:2] Interrupt enable (rw) */
    Ifx_Strict_32Bit FIFO_UWM_IRQ_EN : 1;     /**< \brief [3:3] Interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_IRQ_EN_Bits;

/** \\brief  FIFO0 channel 0 force interrupt register */
typedef struct _Ifx_GTM_FIFO_CH_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_FIFO_EMPTY : 1;      /**< \brief [0:0] Force interrupt of FIFO empty status (rw) */
    Ifx_Strict_32Bit TRG_FIFO_FULL : 1;       /**< \brief [1:1] Force interrupt of FIFO full status (rw) */
    Ifx_Strict_32Bit TRG_FIFO_LWM : 1;        /**< \brief [2:2] Force interrupt of lower watermark (rw) */
    Ifx_Strict_32Bit TRG_FIFO_UWM : 1;        /**< \brief [3:3] Force interrupt of upper watermark (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_IRQ_FORCINT_Bits;

/** \\brief  FIFO0 channel 0 interrupt mode control register */
typedef struct _Ifx_GTM_FIFO_CH_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit DMA_HYSTERESIS : 1;      /**< \brief [2:2] Enable DMA hysteresis mode. (rw) */
    Ifx_Strict_32Bit DMA_HYST_DIR : 1;        /**< \brief [3:3] DMA direction in hysteresis mode (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_IRQ_MODE_Bits;

/** \\brief  FIFO0 channel 0 interrupt notification register */
typedef struct _Ifx_GTM_FIFO_CH_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit FIFO_EMPTY : 1;          /**< \brief [0:0] FIFO is empty (rw) */
    Ifx_Strict_32Bit FIFO_FULL : 1;           /**< \brief [1:1] FIFO is full (rw) */
    Ifx_Strict_32Bit FIFO_LWM : 1;            /**< \brief [2:2] FIFO Lower watermark was under-run (rw) */
    Ifx_Strict_32Bit FIFO_UWM : 1;            /**< \brief [3:3] FIFO Upper watermark was over-run (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_IRQ_NOTIFY_Bits;

/** \\brief  FIFO0 channel 0 lower watermark register */
typedef struct _Ifx_GTM_FIFO_CH_LOWER_WM_Bits
{
    Ifx_Strict_32Bit ADDR : 10;               /**< \brief [9:0] Lower watermark address (rw) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_LOWER_WM_Bits;

/** \\brief  FIFO0 channel 0 read pointer register */
typedef struct _Ifx_GTM_FIFO_CH_RD_PTR_Bits
{
    Ifx_Strict_32Bit ADDR : 10;               /**< \brief [9:0] Position of the read pointer (r) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_RD_PTR_Bits;

/** \\brief  FIFO0 channel 0 start address register */
typedef struct _Ifx_GTM_FIFO_CH_START_ADDR_Bits
{
    Ifx_Strict_32Bit ADDR : 10;               /**< \brief [9:0] Start address for FIFO channel z, (z:0...7) (rw) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_START_ADDR_Bits;

/** \\brief  FIFO0 channel 0 status register */
typedef struct _Ifx_GTM_FIFO_CH_STATUS_Bits
{
    Ifx_Strict_32Bit EMPTY : 1;               /**< \brief [0:0] FIFO is empty (r) */
    Ifx_Strict_32Bit FULL : 1;                /**< \brief [1:1] FIFO is full (r) */
    Ifx_Strict_32Bit LOW_WM : 1;              /**< \brief [2:2] Lower watermark reached (r) */
    Ifx_Strict_32Bit UP_WM : 1;               /**< \brief [3:3] Upper watermark reached (r) */
    Ifx_Strict_32Bit Reserved : 28;           /**< \brief [31:4] Reserved: reserved (r) */
} Ifx_GTM_FIFO_CH_STATUS_Bits;

/** \\brief  FIFO0 channel 0 upper watermark register */
typedef struct _Ifx_GTM_FIFO_CH_UPPER_WM_Bits
{
    Ifx_Strict_32Bit ADDR : 10;               /**< \brief [9:0] Upper watermark address (rw) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_UPPER_WM_Bits;

/** \\brief  FIFO0 channel 0 write pointer register */
typedef struct _Ifx_GTM_FIFO_CH_WR_PTR_Bits
{
    Ifx_Strict_32Bit ADDR : 10;               /**< \brief [9:0] Position of the write pointer (r) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_FIFO_CH_WR_PTR_Bits;

/** \\brief  GTM Hardware Configuration */
typedef struct _Ifx_GTM_HW_CONF_Bits
{
    Ifx_Strict_32Bit GRSTEN : 1;                /**< \brief [0:0] Global Reset Enable (r) */
    Ifx_Strict_32Bit BRIDGE_MODE_RST : 1;       /**< \brief [1:1] Bridge mode after reset (r) */
    Ifx_Strict_32Bit SYNC_INPUT_REG : 1;        /**< \brief [2:2] additional pipelined stage in synchronous bridge mode (r) */
    Ifx_Strict_32Bit CFG_CLOCK_RATE : 1;        /**< \brief [3:3] clocks per ARU transfer (r) */
    Ifx_Strict_32Bit ATOM_OUT_RST : 1;          /**< \brief [4:4] ATOM_OUT reset level (r) */
    Ifx_Strict_32Bit ATOM_TRIG_CHAIN : 3;       /**< \brief [7:5] ATOM trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit TOM_OUT_RST : 1;           /**< \brief [8:8] TOM_OUT reset level (r) */
    Ifx_Strict_32Bit TOM_TRIG_CHAIN : 3;        /**< \brief [11:9] TOM trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit RAM_INIT_RST : 1;          /**< \brief [12:12] RAM initialization from reset (r) */
    Ifx_Strict_32Bit ERM : 1;                   /**< \brief [13:13] enable RAM1 MSB for available MCS modules (r) */
    Ifx_Strict_32Bit ARU_CONNECT_CONFIG : 1;    /**< \brief [14:14] Defines number of parallel ARU ports (r) */
    Ifx_Strict_32Bit reserved_15 : 1;           /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IRQ_MODE_LEVEL : 1;        /**< \brief [16:16] IRQ_MODE_LEVEL (r) */
    Ifx_Strict_32Bit IRQ_MODE_PULSE : 1;        /**< \brief [17:17] IRQ_MODE_PULSE (r) */
    Ifx_Strict_32Bit IRQ_MODE_PULSE_NOTIFY : 1; /**< \brief [18:18] IRQ_MODE_PULSE_NOTIFY (r) */
    Ifx_Strict_32Bit IRQ_MODE_SINGLE_PULSE : 1; /**< \brief [19:19] IRQ_MODE_SINGLE_PULSE (r) */
    Ifx_Strict_32Bit ATOM_TRIG_INTCHAIN : 4;    /**< \brief [23:20] ATOM internal trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit TOM_TRIG_INTCHAIN : 5;     /**< \brief [28:24] TOM internal trigger chain length without synchronization register (r) */
    Ifx_Strict_32Bit INT_CLK_EN_GEN : 1;        /**< \brief [29:29] Internal clock enable generation (r) */
    Ifx_Strict_32Bit reserved_30 : 2;           /**< \brief \internal Reserved */
} Ifx_GTM_HW_CONF_Bits;

/** \\brief  ICM Interrupt group register covering infrastructure and safety
 * components ARU, BRC, AEI, PSM0, PSM1, MAP, CMP,SPE */
typedef struct _Ifx_GTM_ICM_IRQG_0_Bits
{
    Ifx_Strict_32Bit ARU_NEW_DATA0_IRQ : 1;   /**< \brief [0:0] ARU_NEW_DATA0 interrupt (r) */
    Ifx_Strict_32Bit ARU_NEW_DATA1_IRQ : 1;   /**< \brief [1:1] ARU_NEW_DATA1 interrupt (r) */
    Ifx_Strict_32Bit ARU_ACC_ACK_IRQ : 1;     /**< \brief [2:2] ARU_ACC_ACK interrupt (r) */
    Ifx_Strict_32Bit BRC_IRQ : 1;             /**< \brief [3:3] BRC shared sub-module interrupt (r) */
    Ifx_Strict_32Bit AEI_IRQ : 1;             /**< \brief [4:4] AEI_IRQ interrupt (r) */
    Ifx_Strict_32Bit CMP_IRQ : 1;             /**< \brief [5:5] CMP shared sub-module interrupt (r) */
    Ifx_Strict_32Bit SPE0_IRQ : 1;            /**< \brief [6:6] SPE0 shared sub-module interrupt (r) */
    Ifx_Strict_32Bit SPE1_IRQ : 1;            /**< \brief [7:7] SPE1 shared sub-module interrupt (r) */
    Ifx_Strict_32Bit SPE2_IRQ : 1;            /**< \brief [8:8] SPE2 shared sub-module interrupt (r) */
    Ifx_Strict_32Bit SPE3_IRQ : 1;            /**< \brief [9:9] SPE3 shared sub-module interrupt (r) */
    Ifx_Strict_32Bit SPE4_IRQ : 1;            /**< \brief [10:10] SPE4 shared sub-module interrupt (r) */
    Ifx_Strict_32Bit SPE5_IRQ : 1;            /**< \brief [11:11] SPE5 shared sub-module interrupt (r) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PSM0_CH0_IRQ : 1;        /**< \brief [16:16] PSM0 shared sub-module channel 0 interrupt (r) */
    Ifx_Strict_32Bit PSM0_CH1_IRQ : 1;        /**< \brief [17:17] PSM0 shared sub-module channel 1 interrupt (r) */
    Ifx_Strict_32Bit PSM0_CH2_IRQ : 1;        /**< \brief [18:18] PSM0 shared sub-module channel 2 interrupt (r) */
    Ifx_Strict_32Bit PSM0_CH3_IRQ : 1;        /**< \brief [19:19] PSM0 shared sub-module channel 3 interrupt (r) */
    Ifx_Strict_32Bit PSM0_CH4_IRQ : 1;        /**< \brief [20:20] PSM0 shared sub-module channel 4 interrupt (r) */
    Ifx_Strict_32Bit PSM0_CH5_IRQ : 1;        /**< \brief [21:21] PSM0 shared sub-module channel 5 interrupt (r) */
    Ifx_Strict_32Bit PSM0_CH6_IRQ : 1;        /**< \brief [22:22] PSM0 shared sub-module channel 6 interrupt (r) */
    Ifx_Strict_32Bit PSM0_CH7_IRQ : 1;        /**< \brief [23:23] PSM0 shared sub-module channel 7 interrupt (r) */
    Ifx_Strict_32Bit PSM1_CH0_IRQ : 1;        /**< \brief [24:24] PSM1 shared sub-module channel 0 interrupt (r) */
    Ifx_Strict_32Bit PSM1_CH1_IRQ : 1;        /**< \brief [25:25] PSM1 shared sub-module channel 1 interrupt (r) */
    Ifx_Strict_32Bit PSM1_CH2_IRQ : 1;        /**< \brief [26:26] PSM1 shared sub-module channel 2 interrupt (r) */
    Ifx_Strict_32Bit PSM1_CH3_IRQ : 1;        /**< \brief [27:27] PSM1 shared sub-module channel 3 interrupt (r) */
    Ifx_Strict_32Bit PSM1_CH4_IRQ : 1;        /**< \brief [28:28] PSM1 shared sub-module channel 4 interrupt (r) */
    Ifx_Strict_32Bit PSM1_CH5_IRQ : 1;        /**< \brief [29:29] PSM1 shared sub-module channel 5 interrupt (r) */
    Ifx_Strict_32Bit PSM1_CH6_IRQ : 1;        /**< \brief [30:30] PSM1 shared sub-module channel 6 interrupt (r) */
    Ifx_Strict_32Bit PSM1_CH7_IRQ : 1;        /**< \brief [31:31] PSM1 shared sub-module channel 7 interrupt (r) */
} Ifx_GTM_ICM_IRQG_0_Bits;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules ATOM4
 * to ATOM7 */
typedef struct _Ifx_GTM_ICM_IRQG_10_Bits
{
    Ifx_Strict_32Bit ATOM4_CH0_IRQ : 1;       /**< \brief [0:0] ATOM4 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM4_CH1_IRQ : 1;       /**< \brief [1:1] ATOM4 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM4_CH2_IRQ : 1;       /**< \brief [2:2] ATOM4 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM4_CH3_IRQ : 1;       /**< \brief [3:3] ATOM4 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM4_CH4_IRQ : 1;       /**< \brief [4:4] ATOM4 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM4_CH5_IRQ : 1;       /**< \brief [5:5] ATOM4 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM4_CH6_IRQ : 1;       /**< \brief [6:6] ATOM4 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM4_CH7_IRQ : 1;       /**< \brief [7:7] ATOM4 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM5_CH0_IRQ : 1;       /**< \brief [8:8] ATOM5 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM5_CH1_IRQ : 1;       /**< \brief [9:9] ATOM5 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM5_CH2_IRQ : 1;       /**< \brief [10:10] ATOM5 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM5_CH3_IRQ : 1;       /**< \brief [11:11] ATOM5 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM5_CH4_IRQ : 1;       /**< \brief [12:12] ATOM5 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM5_CH5_IRQ : 1;       /**< \brief [13:13] ATOM5 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM5_CH6_IRQ : 1;       /**< \brief [14:14] ATOM5 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM5_CH7_IRQ : 1;       /**< \brief [15:15] ATOM5 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM6_CH0_IRQ : 1;       /**< \brief [16:16] ATOM6 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM6_CH1_IRQ : 1;       /**< \brief [17:17] ATOM6 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM6_CH2_IRQ : 1;       /**< \brief [18:18] ATOM6 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM6_CH3_IRQ : 1;       /**< \brief [19:19] ATOM6 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM6_CH4_IRQ : 1;       /**< \brief [20:20] ATOM6 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM6_CH5_IRQ : 1;       /**< \brief [21:21] ATOM6 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM6_CH6_IRQ : 1;       /**< \brief [22:22] ATOM6 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM6_CH7_IRQ : 1;       /**< \brief [23:23] ATOM6 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM7_CH0_IRQ : 1;       /**< \brief [24:24] ATOM7 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM7_CH1_IRQ : 1;       /**< \brief [25:25] ATOM7 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM7_CH2_IRQ : 1;       /**< \brief [26:26] ATOM7 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM7_CH3_IRQ : 1;       /**< \brief [27:27] ATOM7 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM7_CH4_IRQ : 1;       /**< \brief [28:28] ATOM7 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM7_CH5_IRQ : 1;       /**< \brief [29:29] ATOM7 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM7_CH6_IRQ : 1;       /**< \brief [30:30] ATOM7 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM7_CH7_IRQ : 1;       /**< \brief [31:31] ATOM7 channel 7 shared interrupt (r) */
} Ifx_GTM_ICM_IRQG_10_Bits;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules ATOM8
 * to ATOM11 */
typedef struct _Ifx_GTM_ICM_IRQG_11_Bits
{
    Ifx_Strict_32Bit ATOM8_CH0_IRQ : 1;       /**< \brief [0:0] ATOM8 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM8_CH1_IRQ : 1;       /**< \brief [1:1] ATOM8 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM8_CH2_IRQ : 1;       /**< \brief [2:2] ATOM8 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM8_CH3_IRQ : 1;       /**< \brief [3:3] ATOM8 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM8_CH4_IRQ : 1;       /**< \brief [4:4] ATOM8 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM8_CH5_IRQ : 1;       /**< \brief [5:5] ATOM8 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM8_CH6_IRQ : 1;       /**< \brief [6:6] ATOM8 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM8_CH7_IRQ : 1;       /**< \brief [7:7] ATOM8 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM9_CH0_IRQ : 1;       /**< \brief [8:8] ATOM9 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM9_CH1_IRQ : 1;       /**< \brief [9:9] ATOM9 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM9_CH2_IRQ : 1;       /**< \brief [10:10] ATOM9 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM9_CH3_IRQ : 1;       /**< \brief [11:11] ATOM9 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM9_CH4_IRQ : 1;       /**< \brief [12:12] ATOM9 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM9_CH5_IRQ : 1;       /**< \brief [13:13] ATOM9 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM9_CH6_IRQ : 1;       /**< \brief [14:14] ATOM9 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM9_CH7_IRQ : 1;       /**< \brief [15:15] ATOM9 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM10_CH0_IRQ : 1;      /**< \brief [16:16] ATOM10 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM10_CH1_IRQ : 1;      /**< \brief [17:17] ATOM10 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM10_CH2_IRQ : 1;      /**< \brief [18:18] ATOM10 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM10_CH3_IRQ : 1;      /**< \brief [19:19] ATOM10 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM10_CH4_IRQ : 1;      /**< \brief [20:20] ATOM10 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM10_CH5_IRQ : 1;      /**< \brief [21:21] ATOM10 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM10_CH6_IRQ : 1;      /**< \brief [22:22] ATOM10 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM10_CH7_IRQ : 1;      /**< \brief [23:23] ATOM10 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM11_CH0_IRQ : 1;      /**< \brief [24:24] ATOM11 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM11_CH1_IRQ : 1;      /**< \brief [25:25] ATOM11 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM11_CH2_IRQ : 1;      /**< \brief [26:26] ATOM11 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM11_CH3_IRQ : 1;      /**< \brief [27:27] ATOM11 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM11_CH4_IRQ : 1;      /**< \brief [28:28] ATOM11 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM11_CH5_IRQ : 1;      /**< \brief [29:29] ATOM11 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM11_CH6_IRQ : 1;      /**< \brief [30:30] ATOM11 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM11_CH7_IRQ : 1;      /**< \brief [31:31] ATOM11 channel 7 shared interrupt (r) */
} Ifx_GTM_ICM_IRQG_11_Bits;

/** \\brief  ICM Interrupt group register covering DPLL */
typedef struct _Ifx_GTM_ICM_IRQG_1_Bits
{
    Ifx_Strict_32Bit DPLL_DCGI_IRQ : 1;       /**< \brief [0:0] TRIGGER direction change detected. (r) */
    Ifx_Strict_32Bit DPLL_EDI_IRQ : 1;        /**< \brief [1:1] DPLL enable/disable interrupt (r) */
    Ifx_Strict_32Bit DPLL_TINI_IRQ : 1;       /**< \brief [2:2] TRIGGER minimum hold time (THMI) violation detected interrupt (r) */
    Ifx_Strict_32Bit DPLL_TAXI_IRQ : 1;       /**< \brief [3:3] TRIGGER maximum hold time (THMA) violation detected interrupt (r) */
    Ifx_Strict_32Bit DPLL_SISI_IRQ : 1;       /**< \brief [4:4] STATE inactive slope detected interrupt (r) */
    Ifx_Strict_32Bit DPLL_TISI_IRQ : 1;       /**< \brief [5:5] TRIGGER inactive slope detected interrupt (r) */
    Ifx_Strict_32Bit DPLL_MSI_IRQ : 1;        /**< \brief [6:6] Missing STATE interrupt (r) */
    Ifx_Strict_32Bit DPLL_MTI_IRQ : 1;        /**< \brief [7:7] Missing TRIGGER interrupt (r) */
    Ifx_Strict_32Bit DPLL_SASI_IRQ : 1;       /**< \brief [8:8] STATE active slope detected (r) */
    Ifx_Strict_32Bit DPLL_TASI_IRQ : 1;       /**< \brief [9:9] TRIGGER active slope detected while NTI_CNT is zero (r) */
    Ifx_Strict_32Bit DPLL_PWI_IRQ : 1;        /**< \brief [10:10] Plausibility window (PVT) violation interrupt of TRIGGER (r) */
    Ifx_Strict_32Bit DPLL_W2I_IRQ : 1;        /**< \brief [11:11] Write access to RAM region 2 interrupt (r) */
    Ifx_Strict_32Bit DPLL_W1I_IRQ : 1;        /**< \brief [12:12] Write access to RAM region 1b or 1c interrupt (r) */
    Ifx_Strict_32Bit DPLL_GL1I_IRQ : 1;       /**< \brief [13:13] Get of lock interrupt for SUB_INC1 (r) */
    Ifx_Strict_32Bit DPLL_LL1I_IRQ : 1;       /**< \brief [14:14] Lost of lock interrupt for SUB_INC1 (r) */
    Ifx_Strict_32Bit DPLL_EI_IRQ : 1;         /**< \brief [15:15] Error interrupt (r) */
    Ifx_Strict_32Bit DPLL_GL2I_IRQ : 1;       /**< \brief [16:16] Get of lock interrupt for SUB_INC2 (r) */
    Ifx_Strict_32Bit DPLL_LL2I_IRQ : 1;       /**< \brief [17:17] Lost of lock interrupt for SUB_INC2 (r) */
    Ifx_Strict_32Bit DPLL_TE0I_IRQ : 1;       /**< \brief [18:18] TRIGGER event interrupt 0 (r) */
    Ifx_Strict_32Bit DPLL_TE1I_IRQ : 1;       /**< \brief [19:19] TRIGGER event interrupt 1 (r) */
    Ifx_Strict_32Bit DPLL_TE2I_IRQ : 1;       /**< \brief [20:20] TRIGGER event interrupt 2 (r) */
    Ifx_Strict_32Bit DPLL_TE3I_IRQ : 1;       /**< \brief [21:21] TRIGGER event interrupt 3 (r) */
    Ifx_Strict_32Bit DPLL_TE4I_IRQ : 1;       /**< \brief [22:22] TRIGGER event interrupt 4 (r) */
    Ifx_Strict_32Bit DPLL_CDTI_IRQ : 1;       /**< \brief [23:23] DPLL calculated duration interrupt for trigger (r) */
    Ifx_Strict_32Bit DPLL_CDSI_IRQ : 1;       /**< \brief [24:24] DPLL calculated duration interrupt for state (r) */
    Ifx_Strict_32Bit DPLL_TORI_IRQ : 1;       /**< \brief [25:25] DPLL calculated duration interrupt for state (r) */
    Ifx_Strict_32Bit DPLL_SORI_IRQ : 1;       /**< \brief [26:26] DPLL calculated duration interrupt for state. (r) */
    Ifx_Strict_32Bit reserved_27 : 5;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_1_Bits;

/** \\brief  ICM Interrupt group register covering TIM0, TIM1, TIM2, TIM3 */
typedef struct _Ifx_GTM_ICM_IRQG_2_Bits
{
    Ifx_Strict_32Bit TIM0_CH0_IRQ : 1;        /**< \brief [0:0] TIM0 shared interrupt channel 0 (r) */
    Ifx_Strict_32Bit TIM0_CH1_IRQ : 1;        /**< \brief [1:1] TIM0 shared interrupt channel 1 (r) */
    Ifx_Strict_32Bit TIM0_CH2_IRQ : 1;        /**< \brief [2:2] TIM0 shared interrupt channel 2 (r) */
    Ifx_Strict_32Bit TIM0_CH3_IRQ : 1;        /**< \brief [3:3] TIM0 shared interrupt channel 3 (r) */
    Ifx_Strict_32Bit TIM0_CH4_IRQ : 1;        /**< \brief [4:4] TIM0 shared interrupt channel 4 (r) */
    Ifx_Strict_32Bit TIM0_CH5_IRQ : 1;        /**< \brief [5:5] TIM0 shared interrupt channel 5 (r) */
    Ifx_Strict_32Bit TIM0_CH6_IRQ : 1;        /**< \brief [6:6] TIM0 shared interrupt channel 6 (r) */
    Ifx_Strict_32Bit TIM0_CH7_IRQ : 1;        /**< \brief [7:7] TIM0 shared interrupt channel 7 (r) */
    Ifx_Strict_32Bit TIM1_CH0_IRQ : 1;        /**< \brief [8:8] TIM1 shared interrupt channel 0 (r) */
    Ifx_Strict_32Bit TIM1_CH1_IRQ : 1;        /**< \brief [9:9] TIM1 shared interrupt channel 1 (r) */
    Ifx_Strict_32Bit TIM1_CH2_IRQ : 1;        /**< \brief [10:10] TIM1 shared interrupt channel 2 (r) */
    Ifx_Strict_32Bit TIM1_CH3_IRQ : 1;        /**< \brief [11:11] TIM1 shared interrupt channel 3 (r) */
    Ifx_Strict_32Bit TIM1_CH4_IRQ : 1;        /**< \brief [12:12] TIM1 shared interrupt channel 4 (r) */
    Ifx_Strict_32Bit TIM1_CH5_IRQ : 1;        /**< \brief [13:13] TIM1 shared interrupt channel 5 (r) */
    Ifx_Strict_32Bit TIM1_CH6_IRQ : 1;        /**< \brief [14:14] TIM1 shared interrupt channel 6 (r) */
    Ifx_Strict_32Bit TIM1_CH7_IRQ : 1;        /**< \brief [15:15] TIM1 shared interrupt channel 7 (r) */
    Ifx_Strict_32Bit TIM2_CH0_IRQ : 1;        /**< \brief [16:16] TIM2 shared interrupt channel 0 (r) */
    Ifx_Strict_32Bit TIM2_CH1_IRQ : 1;        /**< \brief [17:17] TIM2 shared interrupt channel 1 (r) */
    Ifx_Strict_32Bit TIM2_CH2_IRQ : 1;        /**< \brief [18:18] TIM2 shared interrupt channel 2 (r) */
    Ifx_Strict_32Bit TIM2_CH3_IRQ : 1;        /**< \brief [19:19] TIM2 shared interrupt channel 3 (r) */
    Ifx_Strict_32Bit TIM2_CH4_IRQ : 1;        /**< \brief [20:20] TIM2 shared interrupt channel 4 (r) */
    Ifx_Strict_32Bit TIM2_CH5_IRQ : 1;        /**< \brief [21:21] TIM2 shared interrupt channel 5 (r) */
    Ifx_Strict_32Bit TIM2_CH6_IRQ : 1;        /**< \brief [22:22] TIM2 shared interrupt channel 6 (r) */
    Ifx_Strict_32Bit TIM2_CH7_IRQ : 1;        /**< \brief [23:23] TIM2 shared interrupt channel 7 (r) */
    Ifx_Strict_32Bit TIM3_CH0_IRQ : 1;        /**< \brief [24:24] TIM2 shared interrupt channel 0 (r) */
    Ifx_Strict_32Bit TIM3_CH1_IRQ : 1;        /**< \brief [25:25] TIM2 shared interrupt channel 1 (r) */
    Ifx_Strict_32Bit TIM3_CH2_IRQ : 1;        /**< \brief [26:26] TIM2 shared interrupt channel 2 (r) */
    Ifx_Strict_32Bit TIM3_CH3_IRQ : 1;        /**< \brief [27:27] TIM2 shared interrupt channel 3 (r) */
    Ifx_Strict_32Bit TIM3_CH4_IRQ : 1;        /**< \brief [28:28] TIM2 shared interrupt channel 4 (r) */
    Ifx_Strict_32Bit TIM3_CH5_IRQ : 1;        /**< \brief [29:29] TIM2 shared interrupt channel 5 (r) */
    Ifx_Strict_32Bit TIM3_CH6_IRQ : 1;        /**< \brief [30:30] TIM2 shared interrupt channel 6 (r) */
    Ifx_Strict_32Bit TIM3_CH7_IRQ : 1;        /**< \brief [31:31] TIM2 shared interrupt channel 7 (r) */
} Ifx_GTM_ICM_IRQG_2_Bits;

/** \\brief  ICM Interrupt group register covering TIM4, TIM5, TIM6, TIM7 */
typedef struct _Ifx_GTM_ICM_IRQG_3_Bits
{
    Ifx_Strict_32Bit TIM4_CH0_IRQ : 1;        /**< \brief [0:0] TIM4 shared interrupt channel 0 (r) */
    Ifx_Strict_32Bit TIM4_CH1_IRQ : 1;        /**< \brief [1:1] TIM4 shared interrupt channel 1 (r) */
    Ifx_Strict_32Bit TIM4_CH2_IRQ : 1;        /**< \brief [2:2] TIM4 shared interrupt channel 2 (r) */
    Ifx_Strict_32Bit TIM4_CH3_IRQ : 1;        /**< \brief [3:3] TIM4 shared interrupt channel 3 (r) */
    Ifx_Strict_32Bit TIM4_CH4_IRQ : 1;        /**< \brief [4:4] TIM4 shared interrupt channel 4 (r) */
    Ifx_Strict_32Bit TIM4_CH5_IRQ : 1;        /**< \brief [5:5] TIM4 shared interrupt channel 5 (r) */
    Ifx_Strict_32Bit TIM4_CH6_IRQ : 1;        /**< \brief [6:6] TIM4 shared interrupt channel 6 (r) */
    Ifx_Strict_32Bit TIM4_CH7_IRQ : 1;        /**< \brief [7:7] TIM4 shared interrupt channel 7 (r) */
    Ifx_Strict_32Bit TIM5_CH0_IRQ : 1;        /**< \brief [8:8] TIM5 shared interrupt channel 0 (r) */
    Ifx_Strict_32Bit TIM5_CH1_IRQ : 1;        /**< \brief [9:9] TIM5 shared interrupt channel 1 (r) */
    Ifx_Strict_32Bit TIM5_CH2_IRQ : 1;        /**< \brief [10:10] TIM5 shared interrupt channel 2 (r) */
    Ifx_Strict_32Bit TIM5_CH3_IRQ : 1;        /**< \brief [11:11] TIM5 shared interrupt channel 3 (r) */
    Ifx_Strict_32Bit TIM5_CH4_IRQ : 1;        /**< \brief [12:12] TIM5 shared interrupt channel 4 (r) */
    Ifx_Strict_32Bit TIM5_CH5_IRQ : 1;        /**< \brief [13:13] TIM5 shared interrupt channel 5 (r) */
    Ifx_Strict_32Bit TIM5_CH6_IRQ : 1;        /**< \brief [14:14] TIM5 shared interrupt channel 6 (r) */
    Ifx_Strict_32Bit TIM5_CH7_IRQ : 1;        /**< \brief [15:15] TIM5 shared interrupt channel 7 (r) */
    Ifx_Strict_32Bit TIM6_CH0_IRQ : 1;        /**< \brief [16:16] TIM6 shared interrupt channel 0 (r) */
    Ifx_Strict_32Bit TIM6_CH1_IRQ : 1;        /**< \brief [17:17] TIM6 shared interrupt channel 1 (r) */
    Ifx_Strict_32Bit TIM6_CH2_IRQ : 1;        /**< \brief [18:18] TIM6 shared interrupt channel 2 (r) */
    Ifx_Strict_32Bit TIM6_CH3_IRQ : 1;        /**< \brief [19:19] TIM6 shared interrupt channel 3 (r) */
    Ifx_Strict_32Bit TIM6_CH4_IRQ : 1;        /**< \brief [20:20] TIM6 shared interrupt channel 4 (r) */
    Ifx_Strict_32Bit TIM6_CH5_IRQ : 1;        /**< \brief [21:21] TIM6 shared interrupt channel 5 (r) */
    Ifx_Strict_32Bit TIM6_CH6_IRQ : 1;        /**< \brief [22:22] TIM6 shared interrupt channel 6 (r) */
    Ifx_Strict_32Bit TIM6_CH7_IRQ : 1;        /**< \brief [23:23] TIM6 shared interrupt channel 7 (r) */
    Ifx_Strict_32Bit TIM7_CH0_IRQ : 1;        /**< \brief [24:24] TIM7 shared interrupt channel 0 (r) */
    Ifx_Strict_32Bit TIM7_CH1_IRQ : 1;        /**< \brief [25:25] TIM7 shared interrupt channel 1 (r) */
    Ifx_Strict_32Bit TIM7_CH2_IRQ : 1;        /**< \brief [26:26] TIM7 shared interrupt channel 2 (r) */
    Ifx_Strict_32Bit TIM7_CH3_IRQ : 1;        /**< \brief [27:27] TIM7 shared interrupt channel 3 (r) */
    Ifx_Strict_32Bit TIM7_CH4_IRQ : 1;        /**< \brief [28:28] TIM7 shared interrupt channel 4 (r) */
    Ifx_Strict_32Bit TIM7_CH5_IRQ : 1;        /**< \brief [29:29] TIM7 shared interrupt channel 5 (r) */
    Ifx_Strict_32Bit TIM7_CH6_IRQ : 1;        /**< \brief [30:30] TIM7 shared interrupt channel 6 (r) */
    Ifx_Strict_32Bit TIM7_CH7_IRQ : 1;        /**< \brief [31:31] TIM7 shared interrupt channel 7 (r) */
} Ifx_GTM_ICM_IRQG_3_Bits;

/** \\brief  ICM Interrupt group register covering MCS0 to MCS3 sub-modules */
typedef struct _Ifx_GTM_ICM_IRQG_4_Bits
{
    Ifx_Strict_32Bit MCS0_CH0_IRQ : 1;        /**< \brief [0:0] MCS0 channel 0 interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH1_IRQ : 1;        /**< \brief [1:1] MCS0 channel 1 interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH2_IRQ : 1;        /**< \brief [2:2] MCS0 channel 2 interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH3_IRQ : 1;        /**< \brief [3:3] MCS0 channel 3 interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH4_IRQ : 1;        /**< \brief [4:4] MCS0 channel 4 interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH5_IRQ : 1;        /**< \brief [5:5] MCS0 channel 5 interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH6_IRQ : 1;        /**< \brief [6:6] MCS0 channel 6 interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH7_IRQ : 1;        /**< \brief [7:7] MCS0 channel 7 interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH0_IRQ : 1;        /**< \brief [8:8] MCS1 channel 0 interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH1_IRQ : 1;        /**< \brief [9:9] MCS1 channel 1 interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH2_IRQ : 1;        /**< \brief [10:10] MCS1 channel 2 interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH3_IRQ : 1;        /**< \brief [11:11] MCS1 channel 3 interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH4_IRQ : 1;        /**< \brief [12:12] MCS1 channel 4 interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH5_IRQ : 1;        /**< \brief [13:13] MCS1 channel 5 interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH6_IRQ : 1;        /**< \brief [14:14] MCS1 channel 6 interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH7_IRQ : 1;        /**< \brief [15:15] MCS1 channel 7 interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH0_IRQ : 1;        /**< \brief [16:16] MCS2 channel 0 interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH1_IRQ : 1;        /**< \brief [17:17] MCS2 channel 1 interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH2_IRQ : 1;        /**< \brief [18:18] MCS2 channel 2 interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH3_IRQ : 1;        /**< \brief [19:19] MCS2 channel 3 interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH4_IRQ : 1;        /**< \brief [20:20] MCS2 channel 4 interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH5_IRQ : 1;        /**< \brief [21:21] MCS2 channel 5 interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH6_IRQ : 1;        /**< \brief [22:22] MCS2 channel 6 interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH7_IRQ : 1;        /**< \brief [23:23] MCS2 channel 7 interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH0_IRQ : 1;        /**< \brief [24:24] MCS3 channel 0 interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH1_IRQ : 1;        /**< \brief [25:25] MCS3 channel 1 interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH2_IRQ : 1;        /**< \brief [26:26] MCS3 channel 2 interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH3_IRQ : 1;        /**< \brief [27:27] MCS3 channel 3 interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH4_IRQ : 1;        /**< \brief [28:28] MCS3 channel 4 interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH5_IRQ : 1;        /**< \brief [29:29] MCS3 channel 5 interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH6_IRQ : 1;        /**< \brief [30:30] MCS3 channel 6 interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH7_IRQ : 1;        /**< \brief [31:31] MCS3 channel 7 interrupt (r) */
} Ifx_GTM_ICM_IRQG_4_Bits;

/** \\brief  ICM Interrupt group register covering MCS4 to MCS6 sub-modules */
typedef struct _Ifx_GTM_ICM_IRQG_5_Bits
{
    Ifx_Strict_32Bit MCS4_CH0_IRQ : 1;        /**< \brief [0:0] MCS4 channel 0 interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH1_IRQ : 1;        /**< \brief [1:1] MCS4 channel 1 interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH2_IRQ : 1;        /**< \brief [2:2] MCS4 channel 2 interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH3_IRQ : 1;        /**< \brief [3:3] MCS4 channel 3 interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH4_IRQ : 1;        /**< \brief [4:4] MCS4 channel 4 interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH5_IRQ : 1;        /**< \brief [5:5] MCS4 channel 5 interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH6_IRQ : 1;        /**< \brief [6:6] MCS4 channel 6 interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH7_IRQ : 1;        /**< \brief [7:7] MCS4 channel 7 interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH0_IRQ : 1;        /**< \brief [8:8] MCS5 channel 0 interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH1_IRQ : 1;        /**< \brief [9:9] MCS5 channel 1 interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH2_IRQ : 1;        /**< \brief [10:10] MCS5 channel 2 interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH3_IRQ : 1;        /**< \brief [11:11] MCS5 channel 3 interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH4_IRQ : 1;        /**< \brief [12:12] MCS5 channel 4 interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH5_IRQ : 1;        /**< \brief [13:13] MCS5 channel 5 interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH6_IRQ : 1;        /**< \brief [14:14] MCS5 channel 6 interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH7_IRQ : 1;        /**< \brief [15:15] MCS5 channel 7 interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH0_IRQ : 1;        /**< \brief [16:16] MCS6 channel 0 interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH1_IRQ : 1;        /**< \brief [17:17] MCS6 channel 1 interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH2_IRQ : 1;        /**< \brief [18:18] MCS6 channel 2 interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH3_IRQ : 1;        /**< \brief [19:19] MCS6 channel 3 interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH4_IRQ : 1;        /**< \brief [20:20] MCS6 channel 4 interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH5_IRQ : 1;        /**< \brief [21:21] MCS6 channel 5 interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH6_IRQ : 1;        /**< \brief [22:22] MCS6 channel 6 interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH7_IRQ : 1;        /**< \brief [23:23] MCS6 channel 7 interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH0_IRQ : 1;        /**< \brief [24:24] MCS7 channel 0 interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH1_IRQ : 1;        /**< \brief [25:25] MCS7 channel 1 interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH2_IRQ : 1;        /**< \brief [26:26] MCS7 channel 2 interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH3_IRQ : 1;        /**< \brief [27:27] MCS7 channel 3 interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH4_IRQ : 1;        /**< \brief [28:28] MCS7 channel 4 interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH5_IRQ : 1;        /**< \brief [29:29] MCS7 channel 5 interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH6_IRQ : 1;        /**< \brief [30:30] MCS7 channel 6 interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH7_IRQ : 1;        /**< \brief [31:31] MCS7 channel 7 interrupt (r) */
} Ifx_GTM_ICM_IRQG_5_Bits;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules TOM0
 * to TOM1 */
typedef struct _Ifx_GTM_ICM_IRQG_6_Bits
{
    Ifx_Strict_32Bit TOM0_CH0_IRQ : 1;        /**< \brief [0:0] TOM0 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH1_IRQ : 1;        /**< \brief [1:1] TOM0 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH2_IRQ : 1;        /**< \brief [2:2] TOM0 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH3_IRQ : 1;        /**< \brief [3:3] TOM0 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH4_IRQ : 1;        /**< \brief [4:4] TOM0 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH5_IRQ : 1;        /**< \brief [5:5] TOM0 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH6_IRQ : 1;        /**< \brief [6:6] TOM0 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH7_IRQ : 1;        /**< \brief [7:7] TOM0 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH8_IRQ : 1;        /**< \brief [8:8] TOM0 channel 8 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH9_IRQ : 1;        /**< \brief [9:9] TOM0 channel 9 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH10_IRQ : 1;       /**< \brief [10:10] TOM0 channel 10 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH11_IRQ : 1;       /**< \brief [11:11] TOM0 channel 11 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH12_IRQ : 1;       /**< \brief [12:12] TOM0 channel 12 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH13_IRQ : 1;       /**< \brief [13:13] TOM0 channel 13 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH14_IRQ : 1;       /**< \brief [14:14] TOM0 channel 14 shared interrupt (r) */
    Ifx_Strict_32Bit TOM0_CH15_IRQ : 1;       /**< \brief [15:15] TOM0 channel 15 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH0_IRQ : 1;        /**< \brief [16:16] TOM1 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH1_IRQ : 1;        /**< \brief [17:17] TOM1 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH2_IRQ : 1;        /**< \brief [18:18] TOM1 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH3_IRQ : 1;        /**< \brief [19:19] TOM1 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH4_IRQ : 1;        /**< \brief [20:20] TOM1 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH5_IRQ : 1;        /**< \brief [21:21] TOM1 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH6_IRQ : 1;        /**< \brief [22:22] TOM1 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH7_IRQ : 1;        /**< \brief [23:23] TOM1 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH8_IRQ : 1;        /**< \brief [24:24] TOM1 channel 8 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH9_IRQ : 1;        /**< \brief [25:25] TOM1 channel 9 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH10_IRQ : 1;       /**< \brief [26:26] TOM1 channel 10 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH11_IRQ : 1;       /**< \brief [27:27] TOM1 channel 11 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH12_IRQ : 1;       /**< \brief [28:28] TOM1 channel 12 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH13_IRQ : 1;       /**< \brief [29:29] TOM1 channel 13 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH14_IRQ : 1;       /**< \brief [30:30] TOM1 channel 14 shared interrupt (r) */
    Ifx_Strict_32Bit TOM1_CH15_IRQ : 1;       /**< \brief [31:31] TOM1 channel 15 shared interrupt (r) */
} Ifx_GTM_ICM_IRQG_6_Bits;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules TOM2
 * to TOM3 */
typedef struct _Ifx_GTM_ICM_IRQG_7_Bits
{
    Ifx_Strict_32Bit TOM2_CH0_IRQ : 1;        /**< \brief [0:0] TOM2 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH1_IRQ : 1;        /**< \brief [1:1] TOM2 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH2_IRQ : 1;        /**< \brief [2:2] TOM2 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH3_IRQ : 1;        /**< \brief [3:3] TOM2 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH4_IRQ : 1;        /**< \brief [4:4] TOM2 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH5_IRQ : 1;        /**< \brief [5:5] TOM2 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH6_IRQ : 1;        /**< \brief [6:6] TOM2 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH7_IRQ : 1;        /**< \brief [7:7] TOM2 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH8_IRQ : 1;        /**< \brief [8:8] TOM2 channel 8 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH9_IRQ : 1;        /**< \brief [9:9] TOM2 channel 9 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH10_IRQ : 1;       /**< \brief [10:10] TOM2 channel 10 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH11_IRQ : 1;       /**< \brief [11:11] TOM2 channel 11 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH12_IRQ : 1;       /**< \brief [12:12] TOM2 channel 12 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH13_IRQ : 1;       /**< \brief [13:13] TOM2 channel 13 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH14_IRQ : 1;       /**< \brief [14:14] TOM2 channel 14 shared interrupt (r) */
    Ifx_Strict_32Bit TOM2_CH15_IRQ : 1;       /**< \brief [15:15] TOM2 channel 15 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH0_IRQ : 1;        /**< \brief [16:16] TOM3 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH1_IRQ : 1;        /**< \brief [17:17] TOM3 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH2_IRQ : 1;        /**< \brief [18:18] TOM3 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH3_IRQ : 1;        /**< \brief [19:19] TOM3 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH4_IRQ : 1;        /**< \brief [20:20] TOM3 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH5_IRQ : 1;        /**< \brief [21:21] TOM3 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH6_IRQ : 1;        /**< \brief [22:22] TOM3 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH7_IRQ : 1;        /**< \brief [23:23] TOM3 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH8_IRQ : 1;        /**< \brief [24:24] TOM3 channel 8 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH9_IRQ : 1;        /**< \brief [25:25] TOM3 channel 9 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH10_IRQ : 1;       /**< \brief [26:26] TOM3 channel 10 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH11_IRQ : 1;       /**< \brief [27:27] TOM3 channel 11 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH12_IRQ : 1;       /**< \brief [28:28] TOM3 channel 12 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH13_IRQ : 1;       /**< \brief [29:29] TOM3 channel 13 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH14_IRQ : 1;       /**< \brief [30:30] TOM3 channel 14 shared interrupt (r) */
    Ifx_Strict_32Bit TOM3_CH15_IRQ : 1;       /**< \brief [31:31] TOM3 channel 15 shared interrupt (r) */
} Ifx_GTM_ICM_IRQG_7_Bits;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules TOM4
 * to TOM5 */
typedef struct _Ifx_GTM_ICM_IRQG_8_Bits
{
    Ifx_Strict_32Bit TOM4_CH0_IRQ : 1;        /**< \brief [0:0] TOM4 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH1_IRQ : 1;        /**< \brief [1:1] TOM4 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH2_IRQ : 1;        /**< \brief [2:2] TOM4 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH3_IRQ : 1;        /**< \brief [3:3] TOM4 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH4_IRQ : 1;        /**< \brief [4:4] TOM4 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH5_IRQ : 1;        /**< \brief [5:5] TOM4 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH6_IRQ : 1;        /**< \brief [6:6] TOM4 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH7_IRQ : 1;        /**< \brief [7:7] TOM4 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH8_IRQ : 1;        /**< \brief [8:8] TOM4 channel 8 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH9_IRQ : 1;        /**< \brief [9:9] TOM4 channel 9 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH10_IRQ : 1;       /**< \brief [10:10] TOM4 channel 10 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH11_IRQ : 1;       /**< \brief [11:11] TOM4 channel 11 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH12_IRQ : 1;       /**< \brief [12:12] TOM4 channel 12 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH13_IRQ : 1;       /**< \brief [13:13] TOM4 channel 13 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH14_IRQ : 1;       /**< \brief [14:14] TOM4 channel 14 shared interrupt (r) */
    Ifx_Strict_32Bit TOM4_CH15_IRQ : 1;       /**< \brief [15:15] TOM4 channel 15 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH0_IRQ : 1;        /**< \brief [16:16] TOM5 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH1_IRQ : 1;        /**< \brief [17:17] TOM5 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH2_IRQ : 1;        /**< \brief [18:18] TOM5 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH3_IRQ : 1;        /**< \brief [19:19] TOM5 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH4_IRQ : 1;        /**< \brief [20:20] TOM5 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH5_IRQ : 1;        /**< \brief [21:21] TOM5 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH6_IRQ : 1;        /**< \brief [22:22] TOM5 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH7_IRQ : 1;        /**< \brief [23:23] TOM5 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH8_IRQ : 1;        /**< \brief [24:24] TOM5 channel 8 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH9_IRQ : 1;        /**< \brief [25:25] TOM5 channel 9 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH10_IRQ : 1;       /**< \brief [26:26] TOM5 channel 10 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH11_IRQ : 1;       /**< \brief [27:27] TOM5 channel 11 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH12_IRQ : 1;       /**< \brief [28:28] TOM5 channel 12 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH13_IRQ : 1;       /**< \brief [29:29] TOM5 channel 13 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH14_IRQ : 1;       /**< \brief [30:30] TOM5 channel 14 shared interrupt (r) */
    Ifx_Strict_32Bit TOM5_CH15_IRQ : 1;       /**< \brief [31:31] TOM5 channel 15 shared interrupt (r) */
} Ifx_GTM_ICM_IRQG_8_Bits;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules ATOM0,
 * ATOM1, ATOM2 and ATOM3 */
typedef struct _Ifx_GTM_ICM_IRQG_9_Bits
{
    Ifx_Strict_32Bit ATOM0_CH0_IRQ : 1;       /**< \brief [0:0] ATOM0 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM0_CH1_IRQ : 1;       /**< \brief [1:1] ATOM0 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM0_CH2_IRQ : 1;       /**< \brief [2:2] ATOM0 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM0_CH3_IRQ : 1;       /**< \brief [3:3] ATOM0 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM0_CH4_IRQ : 1;       /**< \brief [4:4] ATOM0 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM0_CH5_IRQ : 1;       /**< \brief [5:5] ATOM0 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM0_CH6_IRQ : 1;       /**< \brief [6:6] ATOM0 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM0_CH7_IRQ : 1;       /**< \brief [7:7] ATOM0 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM1_CH0_IRQ : 1;       /**< \brief [8:8] ATOM1 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM1_CH1_IRQ : 1;       /**< \brief [9:9] ATOM1 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM1_CH2_IRQ : 1;       /**< \brief [10:10] ATOM1 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM1_CH3_IRQ : 1;       /**< \brief [11:11] ATOM1 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM1_CH4_IRQ : 1;       /**< \brief [12:12] ATOM1 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM1_CH5_IRQ : 1;       /**< \brief [13:13] ATOM1 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM1_CH6_IRQ : 1;       /**< \brief [14:14] ATOM1 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM1_CH7_IRQ : 1;       /**< \brief [15:15] ATOM1 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM2_CH0_IRQ : 1;       /**< \brief [16:16] ATOM2 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM2_CH1_IRQ : 1;       /**< \brief [17:17] ATOM2 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM2_CH2_IRQ : 1;       /**< \brief [18:18] ATOM2 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM2_CH3_IRQ : 1;       /**< \brief [19:19] ATOM2 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM2_CH4_IRQ : 1;       /**< \brief [20:20] ATOM2 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM2_CH5_IRQ : 1;       /**< \brief [21:21] ATOM2 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM2_CH6_IRQ : 1;       /**< \brief [22:22] ATOM2 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM2_CH7_IRQ : 1;       /**< \brief [23:23] ATOM2 channel 7 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM3_CH0_IRQ : 1;       /**< \brief [24:24] ATOM3 channel 0 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM3_CH1_IRQ : 1;       /**< \brief [25:25] ATOM3 channel 1 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM3_CH2_IRQ : 1;       /**< \brief [26:26] ATOM3 channel 2 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM3_CH3_IRQ : 1;       /**< \brief [27:27] ATOM3 channel 3 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM3_CH4_IRQ : 1;       /**< \brief [28:28] ATOM3 channel 4 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM3_CH5_IRQ : 1;       /**< \brief [29:29] ATOM3 channel 5 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM3_CH6_IRQ : 1;       /**< \brief [30:30] ATOM3 channel 6 shared interrupt (r) */
    Ifx_Strict_32Bit ATOM3_CH7_IRQ : 1;       /**< \brief [31:31] ATOM3 channel 7 shared interrupt (r) */
} Ifx_GTM_ICM_IRQG_9_Bits;

/** \\brief  ICM Interrupt group ATOM 0 for Channel Interrupt information of
 * ATOMm */
typedef struct _Ifx_GTM_ICM_IRQG_ATOM_0_CI_Bits
{
    Ifx_Strict_32Bit ATOM_M0_CH0_IRQ : 1;     /**< \brief [0:0] ATOM0 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH1_IRQ : 1;     /**< \brief [1:1] ATOM0 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH2_IRQ : 1;     /**< \brief [2:2] ATOM0 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH3_IRQ : 1;     /**< \brief [3:3] ATOM0 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH4_IRQ : 1;     /**< \brief [4:4] ATOM0 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH5_IRQ : 1;     /**< \brief [5:5] ATOM0 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH6_IRQ : 1;     /**< \brief [6:6] ATOM0 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH7_IRQ : 1;     /**< \brief [7:7] ATOM0 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH0_IRQ : 1;     /**< \brief [8:8] ATOM1 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH1_IRQ : 1;     /**< \brief [9:9] ATOM1 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH2_IRQ : 1;     /**< \brief [10:10] ATOM1 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH3_IRQ : 1;     /**< \brief [11:11] ATOM1 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH4_IRQ : 1;     /**< \brief [12:12] ATOM1 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH5_IRQ : 1;     /**< \brief [13:13] ATOM1 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH6_IRQ : 1;     /**< \brief [14:14] ATOM1 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH7_IRQ : 1;     /**< \brief [15:15] ATOM1 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH0_IRQ : 1;     /**< \brief [16:16] ATOM2 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH1_IRQ : 1;     /**< \brief [17:17] ATOM2 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH2_IRQ : 1;     /**< \brief [18:18] ATOM2 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH3_IRQ : 1;     /**< \brief [19:19] ATOM2 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH4_IRQ : 1;     /**< \brief [20:20] ATOM2 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH5_IRQ : 1;     /**< \brief [21:21] ATOM2 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH6_IRQ : 1;     /**< \brief [22:22] ATOM2 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH7_IRQ : 1;     /**< \brief [23:23] ATOM2 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH0_IRQ : 1;     /**< \brief [24:24] ATOM3 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH1_IRQ : 1;     /**< \brief [25:25] ATOM3 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH2_IRQ : 1;     /**< \brief [26:26] ATOM3 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH3_IRQ : 1;     /**< \brief [27:27] ATOM3 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH4_IRQ : 1;     /**< \brief [28:28] ATOM3 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH5_IRQ : 1;     /**< \brief [29:29] ATOM3 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH6_IRQ : 1;     /**< \brief [30:30] ATOM3 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH7_IRQ : 1;     /**< \brief [31:31] ATOM3 channel 7 interrupt (m=4*k+0) (r) */
} Ifx_GTM_ICM_IRQG_ATOM_0_CI_Bits;

/** \\brief  ICM Interrupt group ATOM 1 for Channel Interrupt information of
 * ATOMm */
typedef struct _Ifx_GTM_ICM_IRQG_ATOM_1_CI_Bits
{
    Ifx_Strict_32Bit ATOM_M0_CH0_IRQ : 1;     /**< \brief [0:0] ATOM0 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH1_IRQ : 1;     /**< \brief [1:1] ATOM0 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH2_IRQ : 1;     /**< \brief [2:2] ATOM0 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH3_IRQ : 1;     /**< \brief [3:3] ATOM0 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH4_IRQ : 1;     /**< \brief [4:4] ATOM0 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH5_IRQ : 1;     /**< \brief [5:5] ATOM0 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH6_IRQ : 1;     /**< \brief [6:6] ATOM0 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH7_IRQ : 1;     /**< \brief [7:7] ATOM0 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH0_IRQ : 1;     /**< \brief [8:8] ATOM1 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH1_IRQ : 1;     /**< \brief [9:9] ATOM1 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH2_IRQ : 1;     /**< \brief [10:10] ATOM1 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH3_IRQ : 1;     /**< \brief [11:11] ATOM1 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH4_IRQ : 1;     /**< \brief [12:12] ATOM1 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH5_IRQ : 1;     /**< \brief [13:13] ATOM1 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH6_IRQ : 1;     /**< \brief [14:14] ATOM1 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH7_IRQ : 1;     /**< \brief [15:15] ATOM1 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH0_IRQ : 1;     /**< \brief [16:16] ATOM2 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH1_IRQ : 1;     /**< \brief [17:17] ATOM2 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH2_IRQ : 1;     /**< \brief [18:18] ATOM2 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH3_IRQ : 1;     /**< \brief [19:19] ATOM2 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH4_IRQ : 1;     /**< \brief [20:20] ATOM2 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH5_IRQ : 1;     /**< \brief [21:21] ATOM2 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH6_IRQ : 1;     /**< \brief [22:22] ATOM2 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH7_IRQ : 1;     /**< \brief [23:23] ATOM2 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH0_IRQ : 1;     /**< \brief [24:24] ATOM3 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH1_IRQ : 1;     /**< \brief [25:25] ATOM3 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH2_IRQ : 1;     /**< \brief [26:26] ATOM3 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH3_IRQ : 1;     /**< \brief [27:27] ATOM3 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH4_IRQ : 1;     /**< \brief [28:28] ATOM3 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH5_IRQ : 1;     /**< \brief [29:29] ATOM3 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH6_IRQ : 1;     /**< \brief [30:30] ATOM3 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH7_IRQ : 1;     /**< \brief [31:31] ATOM3 channel 7 interrupt (m=4*k+0) (r) */
} Ifx_GTM_ICM_IRQG_ATOM_1_CI_Bits;

/** \\brief  ICM Interrupt group ATOM 2 for Channel Interrupt information of
 * ATOMm */
typedef struct _Ifx_GTM_ICM_IRQG_ATOM_2_CI_Bits
{
    Ifx_Strict_32Bit ATOM_M0_CH0_IRQ : 1;     /**< \brief [0:0] ATOM0 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH1_IRQ : 1;     /**< \brief [1:1] ATOM0 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH2_IRQ : 1;     /**< \brief [2:2] ATOM0 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH3_IRQ : 1;     /**< \brief [3:3] ATOM0 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH4_IRQ : 1;     /**< \brief [4:4] ATOM0 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH5_IRQ : 1;     /**< \brief [5:5] ATOM0 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH6_IRQ : 1;     /**< \brief [6:6] ATOM0 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M0_CH7_IRQ : 1;     /**< \brief [7:7] ATOM0 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH0_IRQ : 1;     /**< \brief [8:8] ATOM1 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH1_IRQ : 1;     /**< \brief [9:9] ATOM1 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH2_IRQ : 1;     /**< \brief [10:10] ATOM1 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH3_IRQ : 1;     /**< \brief [11:11] ATOM1 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH4_IRQ : 1;     /**< \brief [12:12] ATOM1 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH5_IRQ : 1;     /**< \brief [13:13] ATOM1 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH6_IRQ : 1;     /**< \brief [14:14] ATOM1 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M1_CH7_IRQ : 1;     /**< \brief [15:15] ATOM1 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH0_IRQ : 1;     /**< \brief [16:16] ATOM2 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH1_IRQ : 1;     /**< \brief [17:17] ATOM2 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH2_IRQ : 1;     /**< \brief [18:18] ATOM2 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH3_IRQ : 1;     /**< \brief [19:19] ATOM2 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH4_IRQ : 1;     /**< \brief [20:20] ATOM2 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH5_IRQ : 1;     /**< \brief [21:21] ATOM2 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH6_IRQ : 1;     /**< \brief [22:22] ATOM2 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M2_CH7_IRQ : 1;     /**< \brief [23:23] ATOM2 channel 7 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH0_IRQ : 1;     /**< \brief [24:24] ATOM3 channel 0 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH1_IRQ : 1;     /**< \brief [25:25] ATOM3 channel 1 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH2_IRQ : 1;     /**< \brief [26:26] ATOM3 channel 2 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH3_IRQ : 1;     /**< \brief [27:27] ATOM3 channel 3 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH4_IRQ : 1;     /**< \brief [28:28] ATOM3 channel 4 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH5_IRQ : 1;     /**< \brief [29:29] ATOM3 channel 5 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH6_IRQ : 1;     /**< \brief [30:30] ATOM3 channel 6 interrupt (m=4*k+0) (r) */
    Ifx_Strict_32Bit ATOM_M3_CH7_IRQ : 1;     /**< \brief [31:31] ATOM3 channel 7 interrupt (m=4*k+0) (r) */
} Ifx_GTM_ICM_IRQG_ATOM_2_CI_Bits;

/** \\brief  ICM Interrupt group register 0 for channel error interrupt
 * information */
typedef struct _Ifx_GTM_ICM_IRQG_CEI0_Bits
{
    Ifx_Strict_32Bit FIFO0_CH0_EIRQ : 1;      /**< \brief [0:0] FIFO0 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit FIFO0_CH1_EIRQ : 1;      /**< \brief [1:1] FIFO0 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit FIFO0_CH2_EIRQ : 1;      /**< \brief [2:2] FIFO0 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit FIFO0_CH3_EIRQ : 1;      /**< \brief [3:3] FIFO0 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit FIFO0_CH4_EIRQ : 1;      /**< \brief [4:4] FIFO0 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit FIFO0_CH5_EIRQ : 1;      /**< \brief [5:5] FIFO0 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit FIFO0_CH6_EIRQ : 1;      /**< \brief [6:6] FIFO0 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit FIFO0_CH7_EIRQ : 1;      /**< \brief [7:7] FIFO0 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_CH0_EIRQ : 1;      /**< \brief [8:8] FIFO1 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_CH1_EIRQ : 1;      /**< \brief [9:9] FIFO1 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_CH2_EIRQ : 1;      /**< \brief [10:10] FIFO1 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_CH3_EIRQ : 1;      /**< \brief [11:11] FIFO1 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_CH4_EIRQ : 1;      /**< \brief [12:12] FIFO1 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_CH5_EIRQ : 1;      /**< \brief [13:13] FIFO1 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_CH6_EIRQ : 1;      /**< \brief [14:14] FIFO1 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_CH7_EIRQ : 1;      /**< \brief [15:15] FIFO1 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit FIFO2_CH0_EIRQ : 1;      /**< \brief [16:16] FIFO2 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit FIFO2_CH1_EIRQ : 1;      /**< \brief [17:17] FIFO2 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit FIFO2_CH2_EIRQ : 1;      /**< \brief [18:18] FIFO2 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit FIFO2_CH3_EIRQ : 1;      /**< \brief [19:19] FIFO2 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit FIFO2_CH4_EIRQ : 1;      /**< \brief [20:20] FIFO2 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit FIFO2_CH5_EIRQ : 1;      /**< \brief [21:21] FIFO2 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit FIFO2_CH6_EIRQ : 1;      /**< \brief [22:22] FIFO2 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit FIFO2_CH7_EIRQ : 1;      /**< \brief [23:23] FIFO2 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_CEI0_Bits;

/** \\brief  ICM Interrupt group register 1 for channel error interrupt
 * information */
typedef struct _Ifx_GTM_ICM_IRQG_CEI1_Bits
{
    Ifx_Strict_32Bit TIM0_CH0_EIRQ : 1;       /**< \brief [0:0] TIM0 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit TIM0_CH1_EIRQ : 1;       /**< \brief [1:1] TIM0 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit TIM0_CH2_EIRQ : 1;       /**< \brief [2:2] TIM0 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit TIM0_CH3_EIRQ : 1;       /**< \brief [3:3] TIM0 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit TIM0_CH4_EIRQ : 1;       /**< \brief [4:4] TIM0 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit TIM0_CH5_EIRQ : 1;       /**< \brief [5:5] TIM0 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit TIM0_CH6_EIRQ : 1;       /**< \brief [6:6] TIM0 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit TIM0_CH7_EIRQ : 1;       /**< \brief [7:7] TIM0 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_CH0_EIRQ : 1;       /**< \brief [8:8] TIM1 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_CH1_EIRQ : 1;       /**< \brief [9:9] TIM1 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_CH2_EIRQ : 1;       /**< \brief [10:10] TIM1 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_CH3_EIRQ : 1;       /**< \brief [11:11] TIM1 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_CH4_EIRQ : 1;       /**< \brief [12:12] TIM1 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_CH5_EIRQ : 1;       /**< \brief [13:13] TIM1 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_CH6_EIRQ : 1;       /**< \brief [14:14] TIM1 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_CH7_EIRQ : 1;       /**< \brief [15:15] TIM1 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_CH0_EIRQ : 1;       /**< \brief [16:16] TIM2 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_CH1_EIRQ : 1;       /**< \brief [17:17] TIM2 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_CH2_EIRQ : 1;       /**< \brief [18:18] TIM2 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_CH3_EIRQ : 1;       /**< \brief [19:19] TIM2 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_CH4_EIRQ : 1;       /**< \brief [20:20] TIM2 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_CH5_EIRQ : 1;       /**< \brief [21:21] TIM2 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_CH6_EIRQ : 1;       /**< \brief [22:22] TIM2 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_CH7_EIRQ : 1;       /**< \brief [23:23] TIM2 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_CH0_EIRQ : 1;       /**< \brief [24:24] TIM3 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_CH1_EIRQ : 1;       /**< \brief [25:25] TIM3 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_CH2_EIRQ : 1;       /**< \brief [26:26] TIM3 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_CH3_EIRQ : 1;       /**< \brief [27:27] TIM3 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_CH4_EIRQ : 1;       /**< \brief [28:28] TIM3 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_CH5_EIRQ : 1;       /**< \brief [29:29] TIM3 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_CH6_EIRQ : 1;       /**< \brief [30:30] TIM3 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_CH7_EIRQ : 1;       /**< \brief [31:31] TIM3 channel 7 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_CEI1_Bits;

/** \\brief  ICM Interrupt group register 2 for channel error interrupt
 * information */
typedef struct _Ifx_GTM_ICM_IRQG_CEI2_Bits
{
    Ifx_Strict_32Bit TIM4_CH0_EIRQ : 1;       /**< \brief [0:0] TIM4 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit TIM4_CH1_EIRQ : 1;       /**< \brief [1:1] TIM4 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit TIM4_CH2_EIRQ : 1;       /**< \brief [2:2] TIM4 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit TIM4_CH3_EIRQ : 1;       /**< \brief [3:3] TIM4 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit TIM4_CH4_EIRQ : 1;       /**< \brief [4:4] TIM4 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit TIM4_CH5_EIRQ : 1;       /**< \brief [5:5] TIM4 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit TIM4_CH6_EIRQ : 1;       /**< \brief [6:6] TIM4 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit TIM4_CH7_EIRQ : 1;       /**< \brief [7:7] TIM4 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_CH0_EIRQ : 1;       /**< \brief [8:8] TIM5 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_CH1_EIRQ : 1;       /**< \brief [9:9] TIM5 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_CH2_EIRQ : 1;       /**< \brief [10:10] TIM5 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_CH3_EIRQ : 1;       /**< \brief [11:11] TIM5 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_CH4_EIRQ : 1;       /**< \brief [12:12] TIM5 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_CH5_EIRQ : 1;       /**< \brief [13:13] TIM5 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_CH6_EIRQ : 1;       /**< \brief [14:14] TIM5 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_CH7_EIRQ : 1;       /**< \brief [15:15] TIM5 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_CH0_EIRQ : 1;       /**< \brief [16:16] TIM6 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_CH1_EIRQ : 1;       /**< \brief [17:17] TIM6 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_CH2_EIRQ : 1;       /**< \brief [18:18] TIM6 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_CH3_EIRQ : 1;       /**< \brief [19:19] TIM6 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_CH4_EIRQ : 1;       /**< \brief [20:20] TIM6 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_CH5_EIRQ : 1;       /**< \brief [21:21] TIM6 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_CH6_EIRQ : 1;       /**< \brief [22:22] TIM6 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_CH7_EIRQ : 1;       /**< \brief [23:23] TIM6 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_CH0_EIRQ : 1;       /**< \brief [24:24] TIM7 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_CH1_EIRQ : 1;       /**< \brief [25:25] TIM7 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_CH2_EIRQ : 1;       /**< \brief [26:26] TIM7 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_CH3_EIRQ : 1;       /**< \brief [27:27] TIM7 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_CH4_EIRQ : 1;       /**< \brief [28:28] TIM7 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_CH5_EIRQ : 1;       /**< \brief [29:29] TIM7 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_CH6_EIRQ : 1;       /**< \brief [30:30] TIM7 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_CH7_EIRQ : 1;       /**< \brief [31:31] TIM7 channel 7 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_CEI2_Bits;

/** \\brief  ICM Interrupt group register 3 for channel error interrupt
 * information */
typedef struct _Ifx_GTM_ICM_IRQG_CEI3_Bits
{
    Ifx_Strict_32Bit MCS0_CH0_EIRQ : 1;       /**< \brief [0:0] MCS0 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH1_EIRQ : 1;       /**< \brief [1:1] MCS0 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH2_EIRQ : 1;       /**< \brief [2:2] MCS0 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH3_EIRQ : 1;       /**< \brief [3:3] MCS0 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH4_EIRQ : 1;       /**< \brief [4:4] MCS0 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH5_EIRQ : 1;       /**< \brief [5:5] MCS0 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH6_EIRQ : 1;       /**< \brief [6:6] MCS0 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS0_CH7_EIRQ : 1;       /**< \brief [7:7] MCS0 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH0_EIRQ : 1;       /**< \brief [8:8] MCS1 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH1_EIRQ : 1;       /**< \brief [9:9] MCS1 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH2_EIRQ : 1;       /**< \brief [10:10] MCS1 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH3_EIRQ : 1;       /**< \brief [11:11] MCS1 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH4_EIRQ : 1;       /**< \brief [12:12] MCS1 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH5_EIRQ : 1;       /**< \brief [13:13] MCS1 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH6_EIRQ : 1;       /**< \brief [14:14] MCS1 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_CH7_EIRQ : 1;       /**< \brief [15:15] MCS1 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH0_EIRQ : 1;       /**< \brief [16:16] MCS2 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH1_EIRQ : 1;       /**< \brief [17:17] MCS2 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH2_EIRQ : 1;       /**< \brief [18:18] MCS2 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH3_EIRQ : 1;       /**< \brief [19:19] MCS2 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH4_EIRQ : 1;       /**< \brief [20:20] MCS2 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH5_EIRQ : 1;       /**< \brief [21:21] MCS2 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH6_EIRQ : 1;       /**< \brief [22:22] MCS2 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_CH7_EIRQ : 1;       /**< \brief [23:23] MCS2 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH0_EIRQ : 1;       /**< \brief [24:24] MCS3 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH1_EIRQ : 1;       /**< \brief [25:25] MCS3 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH2_EIRQ : 1;       /**< \brief [26:26] MCS3 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH3_EIRQ : 1;       /**< \brief [27:27] MCS3 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH4_EIRQ : 1;       /**< \brief [28:28] MCS3 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH5_EIRQ : 1;       /**< \brief [29:29] MCS3 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH6_EIRQ : 1;       /**< \brief [30:30] MCS3 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_CH7_EIRQ : 1;       /**< \brief [31:31] MCS3 channel 7 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_CEI3_Bits;

/** \\brief  ICM Interrupt group register 4 for channel error interrupt
 * information */
typedef struct _Ifx_GTM_ICM_IRQG_CEI4_Bits
{
    Ifx_Strict_32Bit MCS4_CH0_EIRQ : 1;       /**< \brief [0:0] MCS4 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH1_EIRQ : 1;       /**< \brief [1:1] MCS4 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH2_EIRQ : 1;       /**< \brief [2:2] MCS4 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH3_EIRQ : 1;       /**< \brief [3:3] MCS4 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH4_EIRQ : 1;       /**< \brief [4:4] MCS4 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH5_EIRQ : 1;       /**< \brief [5:5] MCS4 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH6_EIRQ : 1;       /**< \brief [6:6] MCS4 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS4_CH7_EIRQ : 1;       /**< \brief [7:7] MCS4 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH0_EIRQ : 1;       /**< \brief [8:8] MCS5 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH1_EIRQ : 1;       /**< \brief [9:9] MCS5 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH2_EIRQ : 1;       /**< \brief [10:10] MCS5 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH3_EIRQ : 1;       /**< \brief [11:11] MCS5 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH4_EIRQ : 1;       /**< \brief [12:12] MCS5 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH5_EIRQ : 1;       /**< \brief [13:13] MCS5 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH6_EIRQ : 1;       /**< \brief [14:14] MCS5 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_CH7_EIRQ : 1;       /**< \brief [15:15] MCS5 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH0_EIRQ : 1;       /**< \brief [16:16] MCS6 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH1_EIRQ : 1;       /**< \brief [17:17] MCS6 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH2_EIRQ : 1;       /**< \brief [18:18] MCS6 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH3_EIRQ : 1;       /**< \brief [19:19] MCS6 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH4_EIRQ : 1;       /**< \brief [20:20] MCS6 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH5_EIRQ : 1;       /**< \brief [21:21] MCS6 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH6_EIRQ : 1;       /**< \brief [22:22] MCS6 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_CH7_EIRQ : 1;       /**< \brief [23:23] MCS6 channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH0_EIRQ : 1;       /**< \brief [24:24] MCS7 channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH1_EIRQ : 1;       /**< \brief [25:25] MCS7 channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH2_EIRQ : 1;       /**< \brief [26:26] MCS7 channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH3_EIRQ : 1;       /**< \brief [27:27] MCS7 channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH4_EIRQ : 1;       /**< \brief [28:28] MCS7 channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH5_EIRQ : 1;       /**< \brief [29:29] MCS7 channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH6_EIRQ : 1;       /**< \brief [30:30] MCS7 channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_CH7_EIRQ : 1;       /**< \brief [31:31] MCS7 channel 7 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_CEI4_Bits;

/** \\brief  ICM Interrupt group for module Error Interrupt information for each
 * TIMm, MCSm, SPEm, FIFOm */
typedef struct _Ifx_GTM_ICM_IRQG_CLS_0_MEI_Bits
{
    Ifx_Strict_32Bit TIM_M0_EIRQ : 1;         /**< \brief [0:0] Error interrupt TIMm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit MCS_M0_EIRQ : 1;         /**< \brief [1:1] Error interrupt MCSm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit SPE_M0_EIRQ : 1;         /**< \brief [2:2] Error interrupt SPEm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit FIFO_M0_EIRQ : 1;        /**< \brief [3:3] Error interrupt FIFOm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M1_EIRQ : 1;         /**< \brief [8:8] Error interrupt TIMm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit MCS_M1_EIRQ : 1;         /**< \brief [9:9] Error interrupt MCSm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit SPE_M1_EIRQ : 1;         /**< \brief [10:10] Error interrupt SPEm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit FIFO_M1_EIRQ : 1;        /**< \brief [11:11] Error interrupt FIFOm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M2_EIRQ : 1;         /**< \brief [16:16] Error interrupt TIMm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit MCS_M2_EIRQ : 1;         /**< \brief [17:17] Error interrupt MCSm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit SPE_M2_EIRQ : 1;         /**< \brief [18:18] Error interrupt SPEm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit FIFO_M2_EIRQ : 1;        /**< \brief [19:19] Error interrupt FIFOm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M3_EIRQ : 1;         /**< \brief [24:24] Error interrupt TIMm_EIRQ (m=4*k+3) (r) */
    Ifx_Strict_32Bit MCS_M3_EIRQ : 1;         /**< \brief [25:25] Error interrupt MCSm_EIRQ (m=4*k+3 (r) */
    Ifx_Strict_32Bit SPE_M3_EIRQ : 1;         /**< \brief [26:26] Error interrupt SPEm_EIRQ (m=4*k+3) (r) */
    Ifx_Strict_32Bit FIFO_M3_EIRQ : 1;        /**< \brief [27:27] Error interrupt FIFOm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_CLS_0_MEI_Bits;

/** \\brief  ICM Interrupt group for module Error Interrupt information for each
 * TIMm, MCSm, SPEm, FIFOm */
typedef struct _Ifx_GTM_ICM_IRQG_CLS_1_MEI_Bits
{
    Ifx_Strict_32Bit TIM_M0_EIRQ : 1;         /**< \brief [0:0] Error interrupt TIMm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit MCS_M0_EIRQ : 1;         /**< \brief [1:1] Error interrupt MCSm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit SPE_M0_EIRQ : 1;         /**< \brief [2:2] Error interrupt SPEm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit FIFO_M0_EIRQ : 1;        /**< \brief [3:3] Error interrupt FIFOm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M1_EIRQ : 1;         /**< \brief [8:8] Error interrupt TIMm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit MCS_M1_EIRQ : 1;         /**< \brief [9:9] Error interrupt MCSm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit SPE_M1_EIRQ : 1;         /**< \brief [10:10] Error interrupt SPEm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit FIFO_M1_EIRQ : 1;        /**< \brief [11:11] Error interrupt FIFOm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M2_EIRQ : 1;         /**< \brief [16:16] Error interrupt TIMm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit MCS_M2_EIRQ : 1;         /**< \brief [17:17] Error interrupt MCSm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit SPE_M2_EIRQ : 1;         /**< \brief [18:18] Error interrupt SPEm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit FIFO_M2_EIRQ : 1;        /**< \brief [19:19] Error interrupt FIFOm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M3_EIRQ : 1;         /**< \brief [24:24] Error interrupt TIMm_EIRQ (m=4*k+3) (r) */
    Ifx_Strict_32Bit MCS_M3_EIRQ : 1;         /**< \brief [25:25] Error interrupt MCSm_EIRQ (m=4*k+3 (r) */
    Ifx_Strict_32Bit SPE_M3_EIRQ : 1;         /**< \brief [26:26] Error interrupt SPEm_EIRQ (m=4*k+3) (r) */
    Ifx_Strict_32Bit FIFO_M3_EIRQ : 1;        /**< \brief [27:27] Error interrupt FIFOm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_CLS_1_MEI_Bits;

/** \\brief  ICM Interrupt group for module Error Interrupt information for each
 * TIMm, MCSm, SPEm, FIFOm */
typedef struct _Ifx_GTM_ICM_IRQG_CLS_2_MEI_Bits
{
    Ifx_Strict_32Bit TIM_M0_EIRQ : 1;         /**< \brief [0:0] Error interrupt TIMm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit MCS_M0_EIRQ : 1;         /**< \brief [1:1] Error interrupt MCSm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit SPE_M0_EIRQ : 1;         /**< \brief [2:2] Error interrupt SPEm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit FIFO_M0_EIRQ : 1;        /**< \brief [3:3] Error interrupt FIFOm_EIRQ (m=4*k+0) (r) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M1_EIRQ : 1;         /**< \brief [8:8] Error interrupt TIMm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit MCS_M1_EIRQ : 1;         /**< \brief [9:9] Error interrupt MCSm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit SPE_M1_EIRQ : 1;         /**< \brief [10:10] Error interrupt SPEm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit FIFO_M1_EIRQ : 1;        /**< \brief [11:11] Error interrupt FIFOm_EIRQ (m=4*k+1) (r) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M2_EIRQ : 1;         /**< \brief [16:16] Error interrupt TIMm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit MCS_M2_EIRQ : 1;         /**< \brief [17:17] Error interrupt MCSm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit SPE_M2_EIRQ : 1;         /**< \brief [18:18] Error interrupt SPEm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit FIFO_M2_EIRQ : 1;        /**< \brief [19:19] Error interrupt FIFOm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TIM_M3_EIRQ : 1;         /**< \brief [24:24] Error interrupt TIMm_EIRQ (m=4*k+3) (r) */
    Ifx_Strict_32Bit MCS_M3_EIRQ : 1;         /**< \brief [25:25] Error interrupt MCSm_EIRQ (m=4*k+3 (r) */
    Ifx_Strict_32Bit SPE_M3_EIRQ : 1;         /**< \brief [26:26] Error interrupt SPEm_EIRQ (m=4*k+3) (r) */
    Ifx_Strict_32Bit FIFO_M3_EIRQ : 1;        /**< \brief [27:27] Error interrupt FIFOm_EIRQ (m=4*k+2) (r) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_CLS_2_MEI_Bits;

/** \\brief  ICM Interrupt group MCS 0 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS0_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS0_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 0 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS0_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS0_CI_Bits;

/** \\brief  ICM Interrupt group MCS 1 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS1_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS1_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 1 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS1_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS1_CI_Bits;

/** \\brief  ICM Interrupt group MCS 2 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS2_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS2_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 2 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS2_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS2_CI_Bits;

/** \\brief  ICM Interrupt group MCS 3 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS3_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS3_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 3 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS3_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS3_CI_Bits;

/** \\brief  ICM Interrupt group MCS 4 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS4_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS4_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 4 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS4_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS4_CI_Bits;

/** \\brief  ICM Interrupt group MCS 5 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS5_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS5_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 5 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS5_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS5_CI_Bits;

/** \\brief  ICM Interrupt group MCS 6 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS6_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS6_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 6 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS6_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS6_CI_Bits;

/** \\brief  ICM Interrupt group MCS 7 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS7_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS7_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 7 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS7_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS7_CI_Bits;

/** \\brief  ICM Interrupt group MCS 8 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS8_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS8_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 8 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS8_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS8_CI_Bits;

/** \\brief  ICM Interrupt group MCS 9 for Channel Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS9_CEI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_EIRQ : 1;        /**< \brief [0:0] MCS channel 0 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH1_EIRQ : 1;        /**< \brief [1:1] MCS channel 1 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH2_EIRQ : 1;        /**< \brief [2:2] MCS channel 2 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH3_EIRQ : 1;        /**< \brief [3:3] MCS channel 3 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH4_EIRQ : 1;        /**< \brief [4:4] MCS channel 4 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH5_EIRQ : 1;        /**< \brief [5:5] MCS channel 5 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH6_EIRQ : 1;        /**< \brief [6:6] MCS channel 6 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH7_EIRQ : 1;        /**< \brief [7:7] MCS channel 7 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH8_EIRQ : 1;        /**< \brief [8:8] MCS channel 8 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH9_EIRQ : 1;        /**< \brief [9:9] MCS channel 9 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH10_EIRQ : 1;       /**< \brief [10:10] MCS channel 10 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH11_EIRQ : 1;       /**< \brief [11:11] MCS channel 11 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH12_EIRQ : 1;       /**< \brief [12:12] MCS channel 12 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH13_EIRQ : 1;       /**< \brief [13:13] MCS channel 13 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH14_EIRQ : 1;       /**< \brief [14:14] MCS channel 14 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH15_EIRQ : 1;       /**< \brief [15:15] MCS channel 15 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH16_EIRQ : 1;       /**< \brief [16:16] MCS channel 16 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH17_EIRQ : 1;       /**< \brief [17:17] MCS channel 17 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH18_EIRQ : 1;       /**< \brief [18:18] MCS channel 18 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH19_EIRQ : 1;       /**< \brief [19:19] MCS channel 19 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH20_EIRQ : 1;       /**< \brief [20:20] MCS channel 20 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH21_EIRQ : 1;       /**< \brief [21:21] MCS channel 21 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH22_EIRQ : 1;       /**< \brief [22:22] MCS channel 22 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH23_EIRQ : 1;       /**< \brief [23:23] MCS channel 23 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH24_EIRQ : 1;       /**< \brief [24:24] MCS channel 24 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH25_EIRQ : 1;       /**< \brief [25:25] MCS channel 25 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH26_EIRQ : 1;       /**< \brief [26:26] MCS channel 26 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH27_EIRQ : 1;       /**< \brief [27:27] MCS channel 27 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH28_EIRQ : 1;       /**< \brief [28:28] MCS channel 28 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH29_EIRQ : 1;       /**< \brief [29:29] MCS channel 29 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH30_EIRQ : 1;       /**< \brief [30:30] MCS channel 30 error interrupt (r) */
    Ifx_Strict_32Bit MCS_CH31_EIRQ : 1;       /**< \brief [31:31] MCS channel 31 error interrupt (r) */
} Ifx_GTM_ICM_IRQG_MCS9_CEI_Bits;

/** \\brief  ICM Interrupt group MCS 9 for Channel Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MCS9_CI_Bits
{
    Ifx_Strict_32Bit MCS_CH0_IRQ : 1;         /**< \brief [0:0] MCS channel 0 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH1_IRQ : 1;         /**< \brief [1:1] MCS channel 1 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH2_IRQ : 1;         /**< \brief [2:2] MCS channel 2 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH3_IRQ : 1;         /**< \brief [3:3] MCS channel 3 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH4_IRQ : 1;         /**< \brief [4:4] MCS channel 4 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH5_IRQ : 1;         /**< \brief [5:5] MCS channel 5 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH6_IRQ : 1;         /**< \brief [6:6] MCS channel 6 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH7_IRQ : 1;         /**< \brief [7:7] MCS channel 7 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH8_IRQ : 1;         /**< \brief [8:8] MCS channel 8 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH9_IRQ : 1;         /**< \brief [9:9] MCS channel 9 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH10_IRQ : 1;        /**< \brief [10:10] MCS channel 10 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH11_IRQ : 1;        /**< \brief [11:11] MCS channel 11 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH12_IRQ : 1;        /**< \brief [12:12] MCS channel 12 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH13_IRQ : 1;        /**< \brief [13:13] MCS channel 13 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH14_IRQ : 1;        /**< \brief [14:14] MCS channel 14 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH15_IRQ : 1;        /**< \brief [15:15] MCS channel 15 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH16_IRQ : 1;        /**< \brief [16:16] MCS channel 16 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH17_IRQ : 1;        /**< \brief [17:17] MCS channel 17 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH18_IRQ : 1;        /**< \brief [18:18] MCS channel 18 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH19_IRQ : 1;        /**< \brief [19:19] MCS channel 19 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH20_IRQ : 1;        /**< \brief [20:20] MCS channel 20 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH21_IRQ : 1;        /**< \brief [21:21] MCS channel 21 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH22_IRQ : 1;        /**< \brief [22:22] MCS channel 22 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH23_IRQ : 1;        /**< \brief [23:23] MCS channel 23 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH24_IRQ : 1;        /**< \brief [24:24] MCS channel 24 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH25_IRQ : 1;        /**< \brief [25:25] MCS channel 25 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH26_IRQ : 1;        /**< \brief [26:26] MCS channel 26 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH27_IRQ : 1;        /**< \brief [27:27] MCS channel 27 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH28_IRQ : 1;        /**< \brief [28:28] MCS channel 28 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH29_IRQ : 1;        /**< \brief [29:29] MCS channel 29 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH30_IRQ : 1;        /**< \brief [30:30] MCS channel 30 interrupt. (r) */
    Ifx_Strict_32Bit MCS_CH31_IRQ : 1;        /**< \brief [31:31] MCS channel 31 interrupt. (r) */
} Ifx_GTM_ICM_IRQG_MCS9_CI_Bits;

/** \\brief  ICM Interrupt group register for module error interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_MEI_Bits
{
    Ifx_Strict_32Bit GTM_EIRQ : 1;            /**< \brief [0:0] AEI Error interrupt request (r) */
    Ifx_Strict_32Bit BRC_EIRQ : 1;            /**< \brief [1:1] BRC error interrupt (r) */
    Ifx_Strict_32Bit FIFO0_EIRQ : 1;          /**< \brief [2:2] FIFO0 error interrupt (r) */
    Ifx_Strict_32Bit FIFO1_EIRQ : 1;          /**< \brief [3:3] FIFO1 error interrupt (r) */
    Ifx_Strict_32Bit TIM0_EIRQ : 1;           /**< \brief [4:4] TIM0 error interrupt (r) */
    Ifx_Strict_32Bit TIM1_EIRQ : 1;           /**< \brief [5:5] TIM1 error interrupt (r) */
    Ifx_Strict_32Bit TIM2_EIRQ : 1;           /**< \brief [6:6] TIM2 error interrupt (r) */
    Ifx_Strict_32Bit TIM3_EIRQ : 1;           /**< \brief [7:7] TIM3 error interrupt (r) */
    Ifx_Strict_32Bit TIM4_EIRQ : 1;           /**< \brief [8:8] TIM4 error interrupt (r) */
    Ifx_Strict_32Bit TIM5_EIRQ : 1;           /**< \brief [9:9] TIM5 error interrupt (r) */
    Ifx_Strict_32Bit TIM6_EIRQ : 1;           /**< \brief [10:10] TIM6 error interrupt (r) */
    Ifx_Strict_32Bit TIM7_EIRQ : 1;           /**< \brief [11:11] TIM7 error interrupt (r) */
    Ifx_Strict_32Bit MCS0_EIRQ : 1;           /**< \brief [12:12] MCS0 error interrupt (r) */
    Ifx_Strict_32Bit MCS1_EIRQ : 1;           /**< \brief [13:13] MCS1 error interrupt (r) */
    Ifx_Strict_32Bit MCS2_EIRQ : 1;           /**< \brief [14:14] MCS2 error interrupt (r) */
    Ifx_Strict_32Bit MCS3_EIRQ : 1;           /**< \brief [15:15] MCS3 error interrupt (r) */
    Ifx_Strict_32Bit MCS4_EIRQ : 1;           /**< \brief [16:16] MCS4 error interrupt (r) */
    Ifx_Strict_32Bit MCS5_EIRQ : 1;           /**< \brief [17:17] MCS5 error interrupt (r) */
    Ifx_Strict_32Bit MCS6_EIRQ : 1;           /**< \brief [18:18] MCS6 error interrupt (r) */
    Ifx_Strict_32Bit MCS7_EIRQ : 1;           /**< \brief [19:19] MCS7 error interrupt (r) */
    Ifx_Strict_32Bit SPE0_EIRQ : 1;           /**< \brief [20:20] SPE0 error interrupt (r) */
    Ifx_Strict_32Bit SPE1_EIRQ : 1;           /**< \brief [21:21] SPE1 error interrupt (r) */
    Ifx_Strict_32Bit SPE2_EIRQ : 1;           /**< \brief [22:22] SPE2 error interrupt (r) */
    Ifx_Strict_32Bit SPE3_EIRQ : 1;           /**< \brief [23:23] SPE3 error interrupt (r) */
    Ifx_Strict_32Bit CMP_EIRQ : 1;            /**< \brief [24:24] CMP error interrupt (r) */
    Ifx_Strict_32Bit DPLL_EIRQ : 1;           /**< \brief [25:25] DPLL error interrupt (r) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_MEI_Bits;

/** \\brief  ICM Interrupt group PSM 0 for Channel Error Interrupt information
 * of FIFO0, FIFO1, FIFO2 */
typedef struct _Ifx_GTM_ICM_IRQG_PSM_0_CEI_Bits
{
    Ifx_Strict_32Bit PSM_M0_CH0_EIRQ : 1;     /**< \brief [0:0] PSM0 channel 0 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M0_CH1_EIRQ : 1;     /**< \brief [1:1] PSM0 channel 1 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M0_CH2_EIRQ : 1;     /**< \brief [2:2] PSM0 channel 2 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M0_CH3_EIRQ : 1;     /**< \brief [3:3] PSM0 channel 3 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M0_CH4_EIRQ : 1;     /**< \brief [4:4] PSM0 channel 4 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M0_CH5_EIRQ : 1;     /**< \brief [5:5] PSM0 channel 5 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M0_CH6_EIRQ : 1;     /**< \brief [6:6] PSM0 channel 6 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M0_CH7_EIRQ : 1;     /**< \brief [7:7] PSM0 channel 7 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M1_CH0_EIRQ : 1;     /**< \brief [8:8] PSM1 channel 0 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M1_CH1_EIRQ : 1;     /**< \brief [9:9] PSM1 channel 1 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M1_CH2_EIRQ : 1;     /**< \brief [10:10] PSM1 channel 2 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M1_CH3_EIRQ : 1;     /**< \brief [11:11] PSM1 channel 3 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M1_CH4_EIRQ : 1;     /**< \brief [12:12] PSM1 channel 4 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M1_CH5_EIRQ : 1;     /**< \brief [13:13] PSM1 channel 5 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M1_CH6_EIRQ : 1;     /**< \brief [14:14] PSM1 channel 6 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M1_CH7_EIRQ : 1;     /**< \brief [15:15] PSM1 channel 7 error interrupt (m=4*0+0). (r) */
    Ifx_Strict_32Bit PSM_M3_CH0_EIRQ : 1;     /**< \brief [16:16] PSM2 channel 0 error interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M3_CH1_EIRQ : 1;     /**< \brief [17:17] PSM2 channel 1 error interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M3_CH2_EIRQ : 1;     /**< \brief [18:18] PSM2 channel 2 error interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M3_CH3_EIRQ : 1;     /**< \brief [19:19] PSM2 channel 3 error interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M3_CH4_EIRQ : 1;     /**< \brief [20:20] PSM2 channel 4 error interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M3_CH5_EIRQ : 1;     /**< \brief [21:21] PSM2 channel 5 error interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M3_CH6_EIRQ : 1;     /**< \brief [22:22] PSM2 channel 6 error interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M3_CH7_EIRQ : 1;     /**< \brief [23:23] PSM2 channel 7 error interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_PSM_0_CEI_Bits;

/** \\brief  ICM Interrupt group PSM 0 for Channel Interrupt information of
 * FIFO0, FIFO1, FIFO2 */
typedef struct _Ifx_GTM_ICM_IRQG_PSM_0_CI_Bits
{
    Ifx_Strict_32Bit PSM_M0_CH0_IRQ : 1;      /**< \brief [0:0] PSM0 channel 0 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M0_CH1_IRQ : 1;      /**< \brief [1:1] PSM0 channel 1 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M0_CH2_IRQ : 1;      /**< \brief [2:2] PSM0 channel 2 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M0_CH3_IRQ : 1;      /**< \brief [3:3] PSM0 channel 3 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M0_CH4_IRQ : 1;      /**< \brief [4:4] PSM0 channel 4 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M0_CH5_IRQ : 1;      /**< \brief [5:5] PSM0 channel 5 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M0_CH6_IRQ : 1;      /**< \brief [6:6] PSM0 channel 6 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M0_CH7_IRQ : 1;      /**< \brief [7:7] PSM0 channel 7 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M1_CH0_IRQ : 1;      /**< \brief [8:8] PSM1 channel 0 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M1_CH1_IRQ : 1;      /**< \brief [9:9] PSM1 channel 1 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M1_CH2_IRQ : 1;      /**< \brief [10:10] PSM1 channel 2 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M1_CH3_IRQ : 1;      /**< \brief [11:11] PSM1 channel 3 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M1_CH4_IRQ : 1;      /**< \brief [12:12] PSM1 channel 4 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M1_CH5_IRQ : 1;      /**< \brief [13:13] PSM1 channel 5 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M1_CH6_IRQ : 1;      /**< \brief [14:14] PSM1 channel 6 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M1_CH7_IRQ : 1;      /**< \brief [15:15] PSM1 channel 7 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M2_CH0_IRQ : 1;      /**< \brief [16:16] PSM2 channel 0 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M2_CH1_IRQ : 1;      /**< \brief [17:17] PSM2 channel 1 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M2_CH2_IRQ : 1;      /**< \brief [18:18] PSM2 channel 2 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M2_CH3_IRQ : 1;      /**< \brief [19:19] PSM2 channel 3 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M2_CH4_IRQ : 1;      /**< \brief [20:20] PSM2 channel 4 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M2_CH5_IRQ : 1;      /**< \brief [21:21] PSM2 channel 5 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M2_CH6_IRQ : 1;      /**< \brief [22:22] PSM2 channel 6 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit PSM_M2_CH7_IRQ : 1;      /**< \brief [23:23] PSM2 channel 7 shared interrupt (m=4*0+0) (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_PSM_0_CI_Bits;

/** \\brief  ICM Interrupt group SPE for module Error Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_SPE_CEI_Bits
{
    Ifx_Strict_32Bit SPE0_EIRQ : 1;           /**< \brief [0:0] SPE channel 0 error interrupt (r) */
    Ifx_Strict_32Bit SPE1_EIRQ : 1;           /**< \brief [1:1] SPE channel 1 error interrupt (r) */
    Ifx_Strict_32Bit SPE2_EIRQ : 1;           /**< \brief [2:2] SPE channel 2 error interrupt (r) */
    Ifx_Strict_32Bit SPE3_EIRQ : 1;           /**< \brief [3:3] SPE channel 3 error interrupt (r) */
    Ifx_Strict_32Bit SPE4_EIRQ : 1;           /**< \brief [4:4] SPE channel 4 error interrupt (r) */
    Ifx_Strict_32Bit SPE5_EIRQ : 1;           /**< \brief [5:5] SPE channel 5 error interrupt (r) */
    Ifx_Strict_32Bit reserved_6 : 26;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_SPE_CEI_Bits;

/** \\brief  ICM Interrupt group SPE for module Interrupt information */
typedef struct _Ifx_GTM_ICM_IRQG_SPE_CI_Bits
{
    Ifx_Strict_32Bit SPE0_IRQ : 1;            /**< \brief [0:0] SPE channel 0 interrupt (r) */
    Ifx_Strict_32Bit SPE1_IRQ : 1;            /**< \brief [1:1] SPE channel 1 interrupt (r) */
    Ifx_Strict_32Bit SPE2_IRQ : 1;            /**< \brief [2:2] SPE channel 2 interrupt (r) */
    Ifx_Strict_32Bit SPE3_IRQ : 1;            /**< \brief [3:3] SPE channel 3 interrupt (r) */
    Ifx_Strict_32Bit SPE4_IRQ : 1;            /**< \brief [4:4] SPE channel 4 interrupt (r) */
    Ifx_Strict_32Bit SPE5_IRQ : 1;            /**< \brief [5:5] SPE channel 5 interrupt (r) */
    Ifx_Strict_32Bit reserved_6 : 26;         /**< \brief \internal Reserved */
} Ifx_GTM_ICM_IRQG_SPE_CI_Bits;

/** \\brief  ICM Interrupt group TOM 0 for Channel Interrupt information of TOMm */
typedef struct _Ifx_GTM_ICM_IRQG_TOM_0_CI_Bits
{
    Ifx_Strict_32Bit TOM_M0_CH0_IRQ : 1;      /**< \brief [0:0] TOM0 channel 0 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH1_IRQ : 1;      /**< \brief [1:1] TOM0 channel 1 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH2_IRQ : 1;      /**< \brief [2:2] TOM0 channel 2 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH3_IRQ : 1;      /**< \brief [3:3] TOM0 channel 3 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH4_IRQ : 1;      /**< \brief [4:4] TOM0 channel 4 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH5_IRQ : 1;      /**< \brief [5:5] TOM0 channel 5 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH6_IRQ : 1;      /**< \brief [6:6] TOM0 channel 6 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH7_IRQ : 1;      /**< \brief [7:7] TOM0 channel 7 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH8_IRQ : 1;      /**< \brief [8:8] TOM0 channel 8 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH9_IRQ : 1;      /**< \brief [9:9] TOM0 channel 9 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH10_IRQ : 1;     /**< \brief [10:10] TOM0 channel 10 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH11_IRQ : 1;     /**< \brief [11:11] TOM0 channel 11 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH12_IRQ : 1;     /**< \brief [12:12] TOM0 channel 12 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH13_IRQ : 1;     /**< \brief [13:13] TOM0 channel 13 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH14_IRQ : 1;     /**< \brief [14:14] TOM0 channel 14 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH15_IRQ : 1;     /**< \brief [15:15] TOM0 channel 15 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH0_IRQ : 1;      /**< \brief [16:16] TOM1 channel 0 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH1_IRQ : 1;      /**< \brief [17:17] TOM1 channel 1 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH2_IRQ : 1;      /**< \brief [18:18] TOM1 channel 2 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH3_IRQ : 1;      /**< \brief [19:19] TOM1 channel 3 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH4_IRQ : 1;      /**< \brief [20:20] TOM1 channel 4 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH5_IRQ : 1;      /**< \brief [21:21] TOM1 channel 5 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH6_IRQ : 1;      /**< \brief [22:22] TOM1 channel 6 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH7_IRQ : 1;      /**< \brief [23:23] TOM1 channel 7 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH8_IRQ : 1;      /**< \brief [24:24] TOM1 channel 8 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH9_IRQ : 1;      /**< \brief [25:25] TOM1 channel 9 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH10_IRQ : 1;     /**< \brief [26:26] TOM1 channel 10 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH11_IRQ : 1;     /**< \brief [27:27] TOM1 channel 11 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH12_IRQ : 1;     /**< \brief [28:28] TOM1 channel 12 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH13_IRQ : 1;     /**< \brief [29:29] TOM1 channel 13 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH14_IRQ : 1;     /**< \brief [30:30] TOM1 channel 14 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH15_IRQ : 1;     /**< \brief [31:31] TOM1 channel 15 interrupt (m=2*k+0). (r) */
} Ifx_GTM_ICM_IRQG_TOM_0_CI_Bits;

/** \\brief  ICM Interrupt group TOM 1 for Channel Interrupt information of TOMm */
typedef struct _Ifx_GTM_ICM_IRQG_TOM_1_CI_Bits
{
    Ifx_Strict_32Bit TOM_M0_CH0_IRQ : 1;      /**< \brief [0:0] TOM0 channel 0 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH1_IRQ : 1;      /**< \brief [1:1] TOM0 channel 1 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH2_IRQ : 1;      /**< \brief [2:2] TOM0 channel 2 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH3_IRQ : 1;      /**< \brief [3:3] TOM0 channel 3 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH4_IRQ : 1;      /**< \brief [4:4] TOM0 channel 4 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH5_IRQ : 1;      /**< \brief [5:5] TOM0 channel 5 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH6_IRQ : 1;      /**< \brief [6:6] TOM0 channel 6 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH7_IRQ : 1;      /**< \brief [7:7] TOM0 channel 7 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH8_IRQ : 1;      /**< \brief [8:8] TOM0 channel 8 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH9_IRQ : 1;      /**< \brief [9:9] TOM0 channel 9 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH10_IRQ : 1;     /**< \brief [10:10] TOM0 channel 10 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH11_IRQ : 1;     /**< \brief [11:11] TOM0 channel 11 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH12_IRQ : 1;     /**< \brief [12:12] TOM0 channel 12 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH13_IRQ : 1;     /**< \brief [13:13] TOM0 channel 13 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH14_IRQ : 1;     /**< \brief [14:14] TOM0 channel 14 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH15_IRQ : 1;     /**< \brief [15:15] TOM0 channel 15 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH0_IRQ : 1;      /**< \brief [16:16] TOM1 channel 0 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH1_IRQ : 1;      /**< \brief [17:17] TOM1 channel 1 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH2_IRQ : 1;      /**< \brief [18:18] TOM1 channel 2 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH3_IRQ : 1;      /**< \brief [19:19] TOM1 channel 3 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH4_IRQ : 1;      /**< \brief [20:20] TOM1 channel 4 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH5_IRQ : 1;      /**< \brief [21:21] TOM1 channel 5 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH6_IRQ : 1;      /**< \brief [22:22] TOM1 channel 6 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH7_IRQ : 1;      /**< \brief [23:23] TOM1 channel 7 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH8_IRQ : 1;      /**< \brief [24:24] TOM1 channel 8 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH9_IRQ : 1;      /**< \brief [25:25] TOM1 channel 9 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH10_IRQ : 1;     /**< \brief [26:26] TOM1 channel 10 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH11_IRQ : 1;     /**< \brief [27:27] TOM1 channel 11 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH12_IRQ : 1;     /**< \brief [28:28] TOM1 channel 12 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH13_IRQ : 1;     /**< \brief [29:29] TOM1 channel 13 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH14_IRQ : 1;     /**< \brief [30:30] TOM1 channel 14 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH15_IRQ : 1;     /**< \brief [31:31] TOM1 channel 15 interrupt (m=2*k+0). (r) */
} Ifx_GTM_ICM_IRQG_TOM_1_CI_Bits;

/** \\brief  ICM Interrupt group TOM 2 for Channel Interrupt information of TOMm */
typedef struct _Ifx_GTM_ICM_IRQG_TOM_2_CI_Bits
{
    Ifx_Strict_32Bit TOM_M0_CH0_IRQ : 1;      /**< \brief [0:0] TOM0 channel 0 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH1_IRQ : 1;      /**< \brief [1:1] TOM0 channel 1 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH2_IRQ : 1;      /**< \brief [2:2] TOM0 channel 2 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH3_IRQ : 1;      /**< \brief [3:3] TOM0 channel 3 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH4_IRQ : 1;      /**< \brief [4:4] TOM0 channel 4 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH5_IRQ : 1;      /**< \brief [5:5] TOM0 channel 5 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH6_IRQ : 1;      /**< \brief [6:6] TOM0 channel 6 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH7_IRQ : 1;      /**< \brief [7:7] TOM0 channel 7 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH8_IRQ : 1;      /**< \brief [8:8] TOM0 channel 8 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH9_IRQ : 1;      /**< \brief [9:9] TOM0 channel 9 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH10_IRQ : 1;     /**< \brief [10:10] TOM0 channel 10 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH11_IRQ : 1;     /**< \brief [11:11] TOM0 channel 11 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH12_IRQ : 1;     /**< \brief [12:12] TOM0 channel 12 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH13_IRQ : 1;     /**< \brief [13:13] TOM0 channel 13 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH14_IRQ : 1;     /**< \brief [14:14] TOM0 channel 14 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M0_CH15_IRQ : 1;     /**< \brief [15:15] TOM0 channel 15 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH0_IRQ : 1;      /**< \brief [16:16] TOM1 channel 0 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH1_IRQ : 1;      /**< \brief [17:17] TOM1 channel 1 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH2_IRQ : 1;      /**< \brief [18:18] TOM1 channel 2 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH3_IRQ : 1;      /**< \brief [19:19] TOM1 channel 3 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH4_IRQ : 1;      /**< \brief [20:20] TOM1 channel 4 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH5_IRQ : 1;      /**< \brief [21:21] TOM1 channel 5 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH6_IRQ : 1;      /**< \brief [22:22] TOM1 channel 6 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH7_IRQ : 1;      /**< \brief [23:23] TOM1 channel 7 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH8_IRQ : 1;      /**< \brief [24:24] TOM1 channel 8 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH9_IRQ : 1;      /**< \brief [25:25] TOM1 channel 9 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH10_IRQ : 1;     /**< \brief [26:26] TOM1 channel 10 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH11_IRQ : 1;     /**< \brief [27:27] TOM1 channel 11 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH12_IRQ : 1;     /**< \brief [28:28] TOM1 channel 12 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH13_IRQ : 1;     /**< \brief [29:29] TOM1 channel 13 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH14_IRQ : 1;     /**< \brief [30:30] TOM1 channel 14 interrupt (m=2*k+0). (r) */
    Ifx_Strict_32Bit TOM_M1_CH15_IRQ : 1;     /**< \brief [31:31] TOM1 channel 15 interrupt (m=2*k+0). (r) */
} Ifx_GTM_ICM_IRQG_TOM_2_CI_Bits;

/** \\brief  Access Enable Register 0 */
typedef struct _Ifx_GTM_INOUTSEL_ACCEN0_Bits
{
    Ifx_Strict_32Bit EN0 : 1;                 /**< \brief [0:0] Access E0able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN1 : 1;                 /**< \brief [1:1] Access E1able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN2 : 1;                 /**< \brief [2:2] Access E2able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN3 : 1;                 /**< \brief [3:3] Access E3able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN4 : 1;                 /**< \brief [4:4] Access E4able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN5 : 1;                 /**< \brief [5:5] Access E5able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN6 : 1;                 /**< \brief [6:6] Access E6able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN7 : 1;                 /**< \brief [7:7] Access E7able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN8 : 1;                 /**< \brief [8:8] Access E8able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN9 : 1;                 /**< \brief [9:9] Access E9able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN10 : 1;                /**< \brief [10:10] Access E10able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN11 : 1;                /**< \brief [11:11] Access E11able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN12 : 1;                /**< \brief [12:12] Access E12able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN13 : 1;                /**< \brief [13:13] Access E13able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN14 : 1;                /**< \brief [14:14] Access E14able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN15 : 1;                /**< \brief [15:15] Access E15able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN16 : 1;                /**< \brief [16:16] Access E16able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN17 : 1;                /**< \brief [17:17] Access E17able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN18 : 1;                /**< \brief [18:18] Access E18able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN19 : 1;                /**< \brief [19:19] Access E19able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN20 : 1;                /**< \brief [20:20] Access E20able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN21 : 1;                /**< \brief [21:21] Access E21able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN22 : 1;                /**< \brief [22:22] Access E22able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN23 : 1;                /**< \brief [23:23] Access E23able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN24 : 1;                /**< \brief [24:24] Access E24able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN25 : 1;                /**< \brief [25:25] Access E25able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN26 : 1;                /**< \brief [26:26] Access E26able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN27 : 1;                /**< \brief [27:27] Access E27able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN28 : 1;                /**< \brief [28:28] Access E28able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN29 : 1;                /**< \brief [29:29] Access E29able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN30 : 1;                /**< \brief [30:30] Access E30able for Master TAG ID n (rw) */
    Ifx_Strict_32Bit EN31 : 1;                /**< \brief [31:31] Access E31able for Master TAG ID n (rw) */
} Ifx_GTM_INOUTSEL_ACCEN0_Bits;

/** \\brief  Access Enable Register 1 */
typedef struct _Ifx_GTM_INOUTSEL_ACCEN1_Bits
{
    Ifx_Strict_32Bit reserved_0 : 32;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_ACCEN1_Bits;

/** \\brief  ADC Trigger 0 Output Select 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_ADCTRIG_OUT00_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for ADC4 GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for ADC5 GTM connection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Output Selection for ADC6 GTM connection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Output Selection for ADC7 GTM connection (rw) */
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT00_Bits;

/** \\brief  ADC Trigger 0 Output Select 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_ADCTRIG_OUT01_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT01_Bits;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_ADCTRIG_OUT10_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for ADC4 GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for ADC5 GTM connection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Output Selection for ADC6 GTM connection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Output Selection for ADC7 GTM connection (rw) */
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT10_Bits;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_ADCTRIG_OUT11_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT11_Bits;

/** \\brief  ADC Trigger 2 Output Select 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_ADCTRIG_OUT20_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for ADC4 GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for ADC5 GTM connection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Output Selection for ADC6 GTM connection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Output Selection for ADC7 GTM connection (rw) */
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT20_Bits;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_ADCTRIG_OUT21_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT21_Bits;

/** \\brief  ADC Trigger 3Output Select 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_ADCTRIG_OUT30_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for ADC4 GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for ADC5 GTM connection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Output Selection for ADC6 GTM connection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Output Selection for ADC7 GTM connection (rw) */
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT30_Bits;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_ADCTRIG_OUT31_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for ADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for ADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for ADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for ADC3 GTM connection (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT31_Bits;

/** \\brief  CAN Output Select Register */
typedef struct _Ifx_GTM_INOUTSEL_CAN_OUTSEL_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for (TT)CAN GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for (TT)CAN GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for CAN GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for CAN GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for CAN GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for CAN GTM connection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Output Selection for CAN GTM connection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Output Selection for CAN GTM connection (rw) */
} Ifx_GTM_INOUTSEL_CAN_OUTSEL_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN0_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN0_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN1_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN1_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN2_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN2_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN3_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN3_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN4_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN4_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN5_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN5_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN6_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN6_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN7_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN7_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN8_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN8_Bits;

/** \\brief  Data Input n Register */
typedef struct _Ifx_GTM_INOUTSEL_DATA_IN9_Bits
{
    Ifx_Strict_32Bit DATA : 32;               /**< \brief [31:0] Data (rw) */
} Ifx_GTM_INOUTSEL_DATA_IN9_Bits;

/** \\brief  DSADC Input Select Register */
typedef struct _Ifx_GTM_INOUTSEL_DSADC_INSEL_Bits
{
    Ifx_Strict_32Bit INSEL0 : 4;              /**< \brief [3:0] In Selection for DSADCn GTM connection (rw) */
    Ifx_Strict_32Bit INSEL1 : 4;              /**< \brief [7:4] In Selection for EDSADCn GTM connection (rw) */
    Ifx_Strict_32Bit INSEL2 : 4;              /**< \brief [11:8] In Selection for DSADCn GTM connection (rw) */
    Ifx_Strict_32Bit INSEL3 : 4;              /**< \brief [15:12] In Selection for DSADCn GTM connection (rw) */
    Ifx_Strict_32Bit INSEL4 : 4;              /**< \brief [19:16] In Selection for DSADCn GTM connection (rw) */
    Ifx_Strict_32Bit INSEL5 : 4;              /**< \brief [23:20] In Selection for DSADCn GTM connection (rw) */
    Ifx_Strict_32Bit INSEL6 : 4;              /**< \brief [27:24] In Selection for DSADCn GTM connection (rw) */
    Ifx_Strict_32Bit INSEL7 : 4;              /**< \brief [31:28] In Selection for DSADCn GTM connection (rw) */
} Ifx_GTM_INOUTSEL_DSADC_INSEL_Bits;

/** \\brief  DSADC Output Select Register */
typedef struct _Ifx_GTM_INOUTSEL_DSADC_OUTSEL0_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for DSADC0 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for DSADC1 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for DSADC2 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for DSADC3 GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for DSADC4 GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for DSADC5 GTM connection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Output Selection for DSADC6 GTM connection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Output Selection for DSADC7 GTM connection (rw) */
} Ifx_GTM_INOUTSEL_DSADC_OUTSEL0_Bits;

/** \\brief  DSADC Output Select Register */
typedef struct _Ifx_GTM_INOUTSEL_DSADC_OUTSEL1_Bits
{
    Ifx_Strict_32Bit SEL8 : 4;                /**< \brief [3:0] Output Selection for DSADC8 GTM connection (rw) */
    Ifx_Strict_32Bit SEL9 : 4;                /**< \brief [7:4] Output Selection for DSADC9 GTM connection (rw) */
    Ifx_Strict_32Bit SEL10 : 4;               /**< \brief [11:8] Output Selection for DSADC10 GTM connection (rw) */
    Ifx_Strict_32Bit SEL11 : 4;               /**< \brief [15:12] Output Selection for DSADC11 GTM connection (rw) */
    Ifx_Strict_32Bit SEL12 : 4;               /**< \brief [19:16] Output Selection for DSADC12 GTM connection (rw) */
    Ifx_Strict_32Bit SEL13 : 4;               /**< \brief [23:20] Output Selection for DSADC13 GTM connection (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_DSADC_OUTSEL1_Bits;

/** \\brief  Data Exchange Input Control Register */
typedef struct _Ifx_GTM_INOUTSEL_DXINCON_Bits
{
    Ifx_Strict_32Bit IN0 : 1;                 /**< \brief [0:0] Input 00 Control (rw) */
    Ifx_Strict_32Bit IN1 : 1;                 /**< \brief [1:1] Input 01 Control (rw) */
    Ifx_Strict_32Bit IN2 : 1;                 /**< \brief [2:2] Input 02 Control (rw) */
    Ifx_Strict_32Bit IN3 : 1;                 /**< \brief [3:3] Input 03 Control (rw) */
    Ifx_Strict_32Bit IN4 : 1;                 /**< \brief [4:4] Input 04 Control (rw) */
    Ifx_Strict_32Bit IN5 : 1;                 /**< \brief [5:5] Input 05 Control (rw) */
    Ifx_Strict_32Bit IN6 : 1;                 /**< \brief [6:6] Input 06 Control (rw) */
    Ifx_Strict_32Bit IN7 : 1;                 /**< \brief [7:7] Input 07 Control (rw) */
    Ifx_Strict_32Bit IN8 : 1;                 /**< \brief [8:8] Input 08 Control (rw) */
    Ifx_Strict_32Bit IN9 : 1;                 /**< \brief [9:9] Input 09 Control (rw) */
    Ifx_Strict_32Bit reserved_10 : 6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DSS0 : 1;                /**< \brief [16:16] Data Source Select 00 Control (rw) */
    Ifx_Strict_32Bit DSS1 : 1;                /**< \brief [17:17] Data Source Select 01 Control (rw) */
    Ifx_Strict_32Bit DSS2 : 1;                /**< \brief [18:18] Data Source Select 02 Control (rw) */
    Ifx_Strict_32Bit DSS3 : 1;                /**< \brief [19:19] Data Source Select 03 Control (rw) */
    Ifx_Strict_32Bit DSS4 : 1;                /**< \brief [20:20] Data Source Select 04 Control (rw) */
    Ifx_Strict_32Bit DSS5 : 1;                /**< \brief [21:21] Data Source Select 05 Control (rw) */
    Ifx_Strict_32Bit DSS6 : 1;                /**< \brief [22:22] Data Source Select 06 Control (rw) */
    Ifx_Strict_32Bit DSS7 : 1;                /**< \brief [23:23] Data Source Select 07 Control (rw) */
    Ifx_Strict_32Bit DSS8 : 1;                /**< \brief [24:24] Data Source Select 08 Control (rw) */
    Ifx_Strict_32Bit DSS9 : 1;                /**< \brief [25:25] Data Source Select 09 Control (rw) */
    Ifx_Strict_32Bit reserved_26 : 6;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_DXINCON_Bits;

/** \\brief  Data Exchange Output Control Register */
typedef struct _Ifx_GTM_INOUTSEL_DXOUTCON_Bits
{
    Ifx_Strict_32Bit OUT0 : 1;                /**< \brief [0:0] Output 00 Control (rw) */
    Ifx_Strict_32Bit OUT1 : 1;                /**< \brief [1:1] Output 01 Control (rw) */
    Ifx_Strict_32Bit OUT2 : 1;                /**< \brief [2:2] Output 02 Control (rw) */
    Ifx_Strict_32Bit OUT3 : 1;                /**< \brief [3:3] Output 03 Control (rw) */
    Ifx_Strict_32Bit OUT4 : 1;                /**< \brief [4:4] Output 04 Control (rw) */
    Ifx_Strict_32Bit OUT5 : 1;                /**< \brief [5:5] Output 05 Control (rw) */
    Ifx_Strict_32Bit OUT6 : 1;                /**< \brief [6:6] Output 06 Control (rw) */
    Ifx_Strict_32Bit OUT7 : 1;                /**< \brief [7:7] Output 07 Control (rw) */
    Ifx_Strict_32Bit OUT8 : 1;                /**< \brief [8:8] Output 08 Control (rw) */
    Ifx_Strict_32Bit OUT9 : 1;                /**< \brief [9:9] Output 09 Control (rw) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_DXOUTCON_Bits;

/** \\brief  I0terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT0_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT0_Bits;

/** \\brief  I1terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT1_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT1_Bits;

/** \\brief  I2terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT2_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT2_Bits;

/** \\brief  I3terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT3_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT3_Bits;

/** \\brief  I4terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT4_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT4_Bits;

/** \\brief  I5terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT5_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT5_Bits;

/** \\brief  I6terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT6_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT6_Bits;

/** \\brief  I7terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT7_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT7_Bits;

/** \\brief  I8terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT8_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT8_Bits;

/** \\brief  I9terrupt Output Register n */
typedef struct _Ifx_GTM_INOUTSEL_INT_OUT9_Bits
{
    Ifx_Strict_32Bit INT0 : 2;                /**< \brief [1:0] Interrupt Trigger Request 0 (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_INT_OUT9_Bits;

/** \\brief  MCS Interrupt Clear Register */
typedef struct _Ifx_GTM_INOUTSEL_MCSINTCLR_Bits
{
    Ifx_Strict_32Bit MCS0 : 1;                /**< \brief [0:0] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS1 : 1;                /**< \brief [1:1] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS2 : 1;                /**< \brief [2:2] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS3 : 1;                /**< \brief [3:3] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS4 : 1;                /**< \brief [4:4] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS5 : 1;                /**< \brief [5:5] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS6 : 1;                /**< \brief [6:6] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS7 : 1;                /**< \brief [7:7] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS8 : 1;                /**< \brief [8:8] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit MCS9 : 1;                /**< \brief [9:9] MCSn RAM0 Interrupt 0 Status Clear (w) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MCSINTCLR_Bits;

/** \\brief  MCS Interrupt Status Register */
typedef struct _Ifx_GTM_INOUTSEL_MCSINTSTAT_Bits
{
    Ifx_Strict_32Bit MCS00 : 1;               /**< \brief [0:0] MCS0 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS10 : 1;               /**< \brief [1:1] MCS1 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS20 : 1;               /**< \brief [2:2] MCS2 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS30 : 1;               /**< \brief [3:3] MCS3 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS40 : 1;               /**< \brief [4:4] MCS4 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS50 : 1;               /**< \brief [5:5] MCS5 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS60 : 1;               /**< \brief [6:6] MCS6 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS70 : 1;               /**< \brief [7:7] MCS7 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS80 : 1;               /**< \brief [8:8] MCS8 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit MCS90 : 1;               /**< \brief [9:9] MCS9 RAM0 Interrupt 0 Status (rh) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MCSINTSTAT_Bits;

/** \\brief  Trigger Output Sel Register */
typedef struct _Ifx_GTM_INOUTSEL_MCSTRIGOUTSEL_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Select which MCS triggers go to G12BFDAT /SEL (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Select which MCS triggers go to G13BFDAT /SEL (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Select which MCS triggers go to G14BFDAT /SEL (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Select which MCS triggers go to G15BFDAT /SEL (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Select which MCS triggers go to G16BFDAT /SEL (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Select which MCS triggers go to G17BFDAT /SEL (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Select which MCS triggers go to G18BFDAT /SEL (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Select which MCS triggers go to G19BFDAT /SEL (rw) */
} Ifx_GTM_INOUTSEL_MCSTRIGOUTSEL_Bits;

/** \\brief  MSC0 Input High Control Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_IN_INHCON_Bits
{
    Ifx_Strict_32Bit SEL0 : 2;                /**< \brief [1:0]  (rw) */
    Ifx_Strict_32Bit SEL1 : 2;                /**< \brief [3:2]  (rw) */
    Ifx_Strict_32Bit SEL2 : 2;                /**< \brief [5:4]  (rw) */
    Ifx_Strict_32Bit SEL3 : 2;                /**< \brief [7:6]  (rw) */
    Ifx_Strict_32Bit SEL4 : 2;                /**< \brief [9:8]  (rw) */
    Ifx_Strict_32Bit SEL5 : 2;                /**< \brief [11:10]  (rw) */
    Ifx_Strict_32Bit SEL6 : 2;                /**< \brief [13:12]  (rw) */
    Ifx_Strict_32Bit SEL7 : 2;                /**< \brief [15:14]  (rw) */
    Ifx_Strict_32Bit SEL8 : 2;                /**< \brief [17:16]  (rw) */
    Ifx_Strict_32Bit SEL9 : 2;                /**< \brief [19:18]  (rw) */
    Ifx_Strict_32Bit SEL10 : 2;               /**< \brief [21:20]  (rw) */
    Ifx_Strict_32Bit SEL11 : 2;               /**< \brief [23:22]  (rw) */
    Ifx_Strict_32Bit SEL12 : 2;               /**< \brief [25:24]  (rw) */
    Ifx_Strict_32Bit SEL13 : 2;               /**< \brief [27:26]  (rw) */
    Ifx_Strict_32Bit SEL14 : 2;               /**< \brief [29:28]  (rw) */
    Ifx_Strict_32Bit SEL15 : 2;               /**< \brief [31:30]  (rw) */
} Ifx_GTM_INOUTSEL_MSC_IN_INHCON_Bits;

/** \\brief  MSC0 Input Low Control Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_IN_INLCON_Bits
{
    Ifx_Strict_32Bit SEL0 : 2;                /**< \brief [1:0]  (rw) */
    Ifx_Strict_32Bit SEL1 : 2;                /**< \brief [3:2]  (rw) */
    Ifx_Strict_32Bit SEL2 : 2;                /**< \brief [5:4]  (rw) */
    Ifx_Strict_32Bit SEL3 : 2;                /**< \brief [7:6]  (rw) */
    Ifx_Strict_32Bit SEL4 : 2;                /**< \brief [9:8]  (rw) */
    Ifx_Strict_32Bit SEL5 : 2;                /**< \brief [11:10]  (rw) */
    Ifx_Strict_32Bit SEL6 : 2;                /**< \brief [13:12]  (rw) */
    Ifx_Strict_32Bit SEL7 : 2;                /**< \brief [15:14]  (rw) */
    Ifx_Strict_32Bit SEL8 : 2;                /**< \brief [17:16]  (rw) */
    Ifx_Strict_32Bit SEL9 : 2;                /**< \brief [19:18]  (rw) */
    Ifx_Strict_32Bit SEL10 : 2;               /**< \brief [21:20]  (rw) */
    Ifx_Strict_32Bit SEL11 : 2;               /**< \brief [23:22]  (rw) */
    Ifx_Strict_32Bit SEL12 : 2;               /**< \brief [25:24]  (rw) */
    Ifx_Strict_32Bit SEL13 : 2;               /**< \brief [27:26]  (rw) */
    Ifx_Strict_32Bit SEL14 : 2;               /**< \brief [29:28]  (rw) */
    Ifx_Strict_32Bit SEL15 : 2;               /**< \brief [31:30]  (rw) */
} Ifx_GTM_INOUTSEL_MSC_IN_INLCON_Bits;

/** \\brief  MSC0 Input Low Extended Control Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_IN_INLEXTCON_Bits
{
    Ifx_Strict_32Bit SEL0 : 2;                /**< \brief [1:0] GTM MSC0 LowE0tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL1 : 2;                /**< \brief [3:2] GTM MSC0 LowE1tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL2 : 2;                /**< \brief [5:4] GTM MSC0 LowE2tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL3 : 2;                /**< \brief [7:6] GTM MSC0 LowE3tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL4 : 2;                /**< \brief [9:8] GTM MSC0 LowE4tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL5 : 2;                /**< \brief [11:10] GTM MSC0 LowE5tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL6 : 2;                /**< \brief [13:12] GTM MSC0 LowE6tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL7 : 2;                /**< \brief [15:14] GTM MSC0 LowE7tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL8 : 2;                /**< \brief [17:16] GTM MSC0 LowE8tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL9 : 2;                /**< \brief [19:18] GTM MSC0 LowE9tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL10 : 2;               /**< \brief [21:20] GTM MSC0 LowE10tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL11 : 2;               /**< \brief [23:22] GTM MSC0 LowE11tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL12 : 2;               /**< \brief [25:24] GTM MSC0 LowE12tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL13 : 2;               /**< \brief [27:26] GTM MSC0 LowE13tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL14 : 2;               /**< \brief [29:28] GTM MSC0 LowE14tended x Output Selection (rw) */
    Ifx_Strict_32Bit SEL15 : 2;               /**< \brief [31:30] GTM MSC0 LowE15tended x Output Selection (rw) */
} Ifx_GTM_INOUTSEL_MSC_IN_INLEXTCON_Bits;

/** \\brief  MSC Set 1 Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET1CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET1CON0_Bits;

/** \\brief  MSC Set 1 Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET1CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET1CON1_Bits;

/** \\brief  MSC Set 1 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET1CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET1CON2_Bits;

/** \\brief  MSC Set 1 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET1CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET1CON3_Bits;

/** \\brief  MSC Set 2 Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET2CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET2CON0_Bits;

/** \\brief  MSC Set 2 Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET2CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET2CON1_Bits;

/** \\brief  MSC Set 2 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET2CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET2CON2_Bits;

/** \\brief  MSC Set 2 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET2CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET2CON3_Bits;

/** \\brief  MSC Set 3Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET3CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET3CON0_Bits;

/** \\brief  MSC Set 3Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET3CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET3CON1_Bits;

/** \\brief  MSC Set 3 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET3CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET3CON2_Bits;

/** \\brief  MSC Set 3 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET3CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET3CON3_Bits;

/** \\brief  MSC Set 4 Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET4CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET4CON0_Bits;

/** \\brief  MSC Set 4 Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET4CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET4CON1_Bits;

/** \\brief  MSC Set 4 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET4CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET4CON2_Bits;

/** \\brief  MSC Set 4 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET4CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0]  (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8]  (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16]  (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24]  (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET4CON3_Bits;

/** \\brief  MSC Set 5 Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET5CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0] Set 5[0] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8] Set 5[1] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16] Set 5[2] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24] Set 5[3] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET5CON0_Bits;

/** \\brief  MSC Set 5 Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET5CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0] Set 5[4] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8] Set 5[5] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16] Set 5[6] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24] Set 5[7] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET5CON1_Bits;

/** \\brief  MSC Set 5 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET5CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0] Set 5[8] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8] Set 5[9] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16] Set 5[10] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24] Set 5[11] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET5CON2_Bits;

/** \\brief  MSC Set 5 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET5CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0] Set 5[12] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8] Set 5[13] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16] Set 5[14] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24] Set 5[15] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET5CON3_Bits;

/** \\brief  MSC Set 6 Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET6CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0] Set 6[0] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8] Set 6[1] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16] Set 6[2] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24] Set 6[3] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET6CON0_Bits;

/** \\brief  MSC Set 6 Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET6CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0] Set 6[4] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8] Set 6[5] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16] Set 6[6] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24] Set 6[7] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET6CON1_Bits;

/** \\brief  MSC Set 6 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET6CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0] Set 6[8] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8] Set 6[9] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16] Set 6[10] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24] Set 6[11] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET6CON2_Bits;

/** \\brief  MSC Set 6 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET6CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0] Set 6[12] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8] Set 6[13] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16] Set 6[14] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24] Set 6[15] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET6CON3_Bits;

/** \\brief  MSC Set 7Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET7CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0] Set 7[0] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8] Set 7[1] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16] Set 7[2] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24] Set 7[3] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET7CON0_Bits;

/** \\brief  MSC Set 7 Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET7CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0] Set 7[4] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8] Set 7[5] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16] Set 7[6] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24] Set 7[7] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET7CON1_Bits;

/** \\brief  MSC Set 7 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET7CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0] Set 7[8] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8] Set 7[9] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16] Set 7[10] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24] Set 7[11] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET7CON2_Bits;

/** \\brief  MSC Set 7 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET7CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0] Set 7[12] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8] Set 7[13] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16] Set 7[14] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24] Set 7[15] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET7CON3_Bits;

/** \\brief  MSC Set 8Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET8CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0] Set 8[0] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8] Set 8[1] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16] Set 8[2] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24] Set 8[3] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET8CON0_Bits;

/** \\brief  MSC Set 8 Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET8CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0] Set 8[4] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8] Set 8[5] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16] Set 8[6] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24] Set 8[7] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET8CON1_Bits;

/** \\brief  MSC Set 8 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET8CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0] Set 8[8] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8] Set 8[9] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16] Set 8[10] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24] Set 8[11] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET8CON2_Bits;

/** \\brief  MSC Set 8 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET8CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0] Set 8[12] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8] Set 8[13] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16] Set 8[14] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24] Set 8[15] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET8CON3_Bits;

/** \\brief  MSC Set 9Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET9CON0_Bits
{
    Ifx_Strict_32Bit SEL0 : 5;                /**< \brief [4:0] Set 9[0] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL1 : 5;                /**< \brief [12:8] Set 9[1] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL2 : 5;                /**< \brief [20:16] Set 9[2] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL3 : 5;                /**< \brief [28:24] Set 9[3] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET9CON0_Bits;

/** \\brief  MSC Set 9 Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET9CON1_Bits
{
    Ifx_Strict_32Bit SEL4 : 5;                /**< \brief [4:0] Set 9[4] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL5 : 5;                /**< \brief [12:8] Set 9[5] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL6 : 5;                /**< \brief [20:16] Set 9[6] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL7 : 5;                /**< \brief [28:24] Set 9[7] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET9CON1_Bits;

/** \\brief  MSC Set 9 Control 2 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET9CON2_Bits
{
    Ifx_Strict_32Bit SEL8 : 5;                /**< \brief [4:0] Set 9[8] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL9 : 5;                /**< \brief [12:8] Set 9[9] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL10 : 5;               /**< \brief [20:16] Set 9[10] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL11 : 5;               /**< \brief [28:24] Set 9[11] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET9CON2_Bits;

/** \\brief  MSC Set 9 Control 3 Register */
typedef struct _Ifx_GTM_INOUTSEL_MSC_SET9CON3_Bits
{
    Ifx_Strict_32Bit SEL12 : 5;               /**< \brief [4:0] Set 9[12] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL13 : 5;               /**< \brief [12:8] Set 9[13] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_13 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL14 : 5;               /**< \brief [20:16] Set 9[14] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_21 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL15 : 5;               /**< \brief [28:24] Set 9[15] Input Selection (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_MSC_SET9CON3_Bits;

/** \\brief  OCDS Control and Status */
typedef struct _Ifx_GTM_INOUTSEL_OCS_Bits
{
    Ifx_Strict_32Bit reserved_0 : 24;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SUS : 4;                 /**< \brief [27:24] OCDS Suspend Control (rw) */
    Ifx_Strict_32Bit SUS_P : 1;               /**< \brief [28:28] SUS Write Protection (w) */
    Ifx_Strict_32Bit SUSSTA : 1;              /**< \brief [29:29] Suspend State (rh) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_OCS_Bits;

/** \\brief  OCDS Debug Access Register */
typedef struct _Ifx_GTM_INOUTSEL_ODA_Bits
{
    Ifx_Strict_32Bit DRAC : 2;                /**< \brief [1:0] Destructive Read Access Control (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_ODA_Bits;

/** \\brief  OCDS TBU0 Trigger Register */
typedef struct _Ifx_GTM_INOUTSEL_OTBU0T_Bits
{
    Ifx_Strict_32Bit CV : 27;                 /**< \brief [26:0] Compare Value (rw) */
    Ifx_Strict_32Bit reserved_27 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CM : 2;                  /**< \brief [29:28] Compare Mode (rw) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_OTBU0T_Bits;

/** \\brief  OCDS TBU1 Trigger Register */
typedef struct _Ifx_GTM_INOUTSEL_OTBU1T_Bits
{
    Ifx_Strict_32Bit CV : 24;                 /**< \brief [23:0] Compare Value (rw) */
    Ifx_Strict_32Bit reserved_24 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EN : 1;                  /**< \brief [28:28] Enable (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_OTBU1T_Bits;

/** \\brief  OCDS TBU2 Trigger Register */
typedef struct _Ifx_GTM_INOUTSEL_OTBU2T_Bits
{
    Ifx_Strict_32Bit CV : 24;                 /**< \brief [23:0] Compare Value (rw) */
    Ifx_Strict_32Bit reserved_24 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EN : 1;                  /**< \brief [28:28] Enable (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_OTBU2T_Bits;

/** \\brief  OCDS Trigger Set Control 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_OTSC0_Bits
{
    Ifx_Strict_32Bit B0LMT : 3;               /**< \brief [2:0] OTGB0 TS16_IOS Low Byte Module Type (rw) */
    Ifx_Strict_32Bit reserved_3 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit B0LMI : 4;               /**< \brief [7:4] OTGB0 TS16_IOS Low Byte Module Instance (rw) */
    Ifx_Strict_32Bit B0HMT : 3;               /**< \brief [10:8] OTGB0 TS16_IOS High Byte Module Type (rw) */
    Ifx_Strict_32Bit reserved_11 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit B0HMI : 4;               /**< \brief [15:12] OTGB0 TS16_IOS High Byte Module Instance (rw) */
    Ifx_Strict_32Bit B1LMT : 3;               /**< \brief [18:16] OTGB1 TS16_IOS Low Byte Module Type (rw) */
    Ifx_Strict_32Bit reserved_19 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit B1LMI : 4;               /**< \brief [23:20] OTGB1 TS16_IOS Low Byte Module Instance (rw) */
    Ifx_Strict_32Bit B1HMT : 3;               /**< \brief [26:24] OTGB1 TS16_IOS High Byte Module Type (rw) */
    Ifx_Strict_32Bit reserved_27 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit B1HMI : 4;               /**< \brief [31:28] OTGB1 TS16_IOS High Byte Module Instance (rw) */
} Ifx_GTM_INOUTSEL_OTSC0_Bits;

/** \\brief  OCDS Trigger Set Control 1 Register */
typedef struct _Ifx_GTM_INOUTSEL_OTSC1_Bits
{
    Ifx_Strict_32Bit MCS : 4;                 /**< \brief [3:0] MCS Channel Select (rw) */
    Ifx_Strict_32Bit MI : 4;                  /**< \brief [7:4] MCS Instance (rw) */
    Ifx_Strict_32Bit reserved_8 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit MOE : 1;                 /**< \brief [9:9] MCS Opcode Trace Enable (rw) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_OTSC1_Bits;

/** \\brief  OCDS Trigger Set Select Register */
typedef struct _Ifx_GTM_INOUTSEL_OTSS_Bits
{
    Ifx_Strict_32Bit OTGB0 : 4;               /**< \brief [3:0] Trigger Set for OTGB0 (rw) */
    Ifx_Strict_32Bit reserved_4 : 4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OTGB1 : 4;               /**< \brief [11:8] Trigger Set for OTGB1 (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OTGBM0 : 4;              /**< \brief [19:16] Trigger Set for OTGBM0 (rw) */
    Ifx_Strict_32Bit reserved_20 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OTGBM1 : 4;              /**< \brief [27:24] Trigger Set for OTGBM1 (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_OTSS_Bits;

/** \\brief  PSI5 Output Select 0 Register */
typedef struct _Ifx_GTM_INOUTSEL_PSI5OUTSEL_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for PSI50 GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for PSI51 GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for PSI52 GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for PSI53 GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for PSI54 GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for PSI55 GTM connection (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_PSI5OUTSEL_Bits;

/** \\brief  PSI5-S Output Select Register */
typedef struct _Ifx_GTM_INOUTSEL_PSI5S_OUTSEL_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] Output Selection for PSI5-S GTM connection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] Output Selection for PSI5-S GTM connection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] Output Selection for PSI5-S GTM connection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] Output Selection for PSI5-S GTM connection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] Output Selection for PSI5-S GTM connection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] Output Selection for PSI5-S GTM connection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] Output Selection for PSI5-S GTM connection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] Output Selection for PSI5-S GTM connection (rw) */
} Ifx_GTM_INOUTSEL_PSI5S_OUTSEL_Bits;

/** \\brief  Kernel Reset Register 0 */
typedef struct _Ifx_GTM_INOUTSEL_RESET1_Bits
{
    Ifx_Strict_32Bit RST : 1;                 /**< \brief [0:0] Kernel Reset (rwh) */
    Ifx_Strict_32Bit RSTSTAT : 1;             /**< \brief [1:1] Kernel Reset Status (rh) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_RESET1_Bits;

/** \\brief  Kernel Reset Register 1 */
typedef struct _Ifx_GTM_INOUTSEL_RESET2_Bits
{
    Ifx_Strict_32Bit RST : 1;                 /**< \brief [0:0] Kernel Reset (rwh) */
    Ifx_Strict_32Bit reserved_1 : 31;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_RESET2_Bits;

/** \\brief  Kernel Reset Status Clear Register */
typedef struct _Ifx_GTM_INOUTSEL_RESET_CLR_Bits
{
    Ifx_Strict_32Bit CLR : 1;                 /**< \brief [0:0] Kernel Reset Status Clear (w) */
    Ifx_Strict_32Bit reserved_1 : 31;         /**< \brief \internal Reserved */
} Ifx_GTM_INOUTSEL_RESET_CLR_Bits;

/** \\brief  Timer Output Select Register */
typedef struct _Ifx_GTM_INOUTSEL_T_OUTSEL_Bits
{
    Ifx_Strict_32Bit SEL0 : 4;                /**< \brief [3:0] TOUT(n*8+0) Output Selection (rw) */
    Ifx_Strict_32Bit SEL1 : 4;                /**< \brief [7:4] TOUT(n*8+1) Output Selection (rw) */
    Ifx_Strict_32Bit SEL2 : 4;                /**< \brief [11:8] TOUT(n*8+2) Output Selection (rw) */
    Ifx_Strict_32Bit SEL3 : 4;                /**< \brief [15:12] TOUT(n*8+3) Output Selection (rw) */
    Ifx_Strict_32Bit SEL4 : 4;                /**< \brief [19:16] TOUT(n*8+4) Output Selection (rw) */
    Ifx_Strict_32Bit SEL5 : 4;                /**< \brief [23:20] TOUT(n*8+5) Output Selection (rw) */
    Ifx_Strict_32Bit SEL6 : 4;                /**< \brief [27:24] TOUT(n*8+6) Output Selection (rw) */
    Ifx_Strict_32Bit SEL7 : 4;                /**< \brief [31:28] TOUT(n*8+7) Output Selection (rw) */
} Ifx_GTM_INOUTSEL_T_OUTSEL_Bits;

/** \\brief  TIM Input Select Register */
typedef struct _Ifx_GTM_INOUTSEL_TIM_INSEL_Bits
{
    Ifx_Strict_32Bit CH0SEL : 4;              /**< \brief [3:0] TIM Channel 0 Input Selection (rw) */
    Ifx_Strict_32Bit CH1SEL : 4;              /**< \brief [7:4] TIM Channel 1 Input Selection (rw) */
    Ifx_Strict_32Bit CH2SEL : 4;              /**< \brief [11:8] TIM Channel 2 Input Selection (rw) */
    Ifx_Strict_32Bit CH3SEL : 4;              /**< \brief [15:12] TIM Channel 3 Input Selection (rw) */
    Ifx_Strict_32Bit CH4SEL : 4;              /**< \brief [19:16] TIM Channel 4 Input Selection (rw) */
    Ifx_Strict_32Bit CH5SEL : 4;              /**< \brief [23:20] TIM Channel 5 Input Selection (rw) */
    Ifx_Strict_32Bit CH6SEL : 4;              /**< \brief [27:24] TIM Channel 6 Input Selection (rw) */
    Ifx_Strict_32Bit CH7SEL : 4;              /**< \brief [31:28] TIM Channel 7 Input Selection (rw) */
} Ifx_GTM_INOUTSEL_TIM_INSEL_Bits;

/** \\brief  Trigger Output Register 0 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT0_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT0_Bits;

/** \\brief  Trigger Output Register 1 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT1_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT1_Bits;

/** \\brief  Trigger Output Register 2 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT2_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT2_Bits;

/** \\brief  Trigger Output Register 3 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT3_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT3_Bits;

/** \\brief  Trigger Output Register 4 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT4_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT4_Bits;

/** \\brief  Trigger Output Register 5 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT5_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT5_Bits;

/** \\brief  Trigger Output Register 6 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT6_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT6_Bits;

/** \\brief  Trigger Output Register 7 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT7_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT7_Bits;

/** \\brief  Trigger Output Register 8 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT8_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT8_Bits;

/** \\brief  Trigger Output Register 9 */
typedef struct _Ifx_GTM_INOUTSEL_TRIG_OUT9_Bits
{
    Ifx_Strict_32Bit TRIG0 : 2;               /**< \brief [1:0] Trigger 0 (rw) */
    Ifx_Strict_32Bit TRIG1 : 2;               /**< \brief [3:2] Trigger 1 (rw) */
    Ifx_Strict_32Bit TRIG2 : 2;               /**< \brief [5:4] Trigger 2 (rw) */
    Ifx_Strict_32Bit TRIG3 : 2;               /**< \brief [7:6] Trigger 3 (rw) */
    Ifx_Strict_32Bit TRIG4 : 2;               /**< \brief [9:8] Trigger 4 (rw) */
    Ifx_Strict_32Bit TRIG5 : 2;               /**< \brief [11:10] Trigger 5 (rw) */
    Ifx_Strict_32Bit TRIG6 : 2;               /**< \brief [13:12] Trigger 6 (rw) */
    Ifx_Strict_32Bit TRIG7 : 2;               /**< \brief [15:14] Trigger 7 (rw) */
    Ifx_Strict_32Bit TRIG8 : 2;               /**< \brief [17:16] Trigger 8 (rw) */
    Ifx_Strict_32Bit TRIG9 : 2;               /**< \brief [19:18] Trigger 9 (rw) */
    Ifx_Strict_32Bit TRIG10 : 2;              /**< \brief [21:20] Trigger 10 (rw) */
    Ifx_Strict_32Bit TRIG11 : 2;              /**< \brief [23:22] Trigger 11 (rw) */
    Ifx_Strict_32Bit TRIG12 : 2;              /**< \brief [25:24] Trigger 12 (rw) */
    Ifx_Strict_32Bit TRIG13 : 2;              /**< \brief [27:26] Trigger 13 (rw) */
    Ifx_Strict_32Bit TRIG14 : 2;              /**< \brief [29:28] Trigger 14 (rw) */
    Ifx_Strict_32Bit TRIG15 : 2;              /**< \brief [31:30] Trigger 15 (rw) */
} Ifx_GTM_INOUTSEL_TRIG_OUT9_Bits;

/** \\brief  GTM Interrupt enable register */
typedef struct _Ifx_GTM_IRQ_EN_Bits
{
    Ifx_Strict_32Bit AEI_TO_XPT_IRQ_EN : 1;    /**< \brief [0:0] AEI_TO_XPT_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit AEI_USP_ADDR_IRQ_EN : 1;  /**< \brief [1:1] AEI_USP_ADDR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit AEI_IM_ADDR_IRQ_EN : 1;   /**< \brief [2:2] AEI_IM_ADDR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit AEI_USP_BE_IRQ_EN : 1;    /**< \brief [3:3] AEI_USP_BE_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit AEIM_USP_ADDR_IRQ_EN : 1; /**< \brief [4:4] AEI_MUSP_ADDR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit AEIM_IM_ADDR_IRQ_EN : 1;  /**< \brief [5:5] AEIM_IM_ADDR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit AEIM_USP_BE_IRQ_EN : 1;   /**< \brief [6:6] AEIM_USP_BE_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit CLK_EN_ERR_IRQ_EN : 1;    /**< \brief [7:7] CLK_EN_ERR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit CLK_PER_ERR_IRQ_EN : 1;   /**< \brief [8:8] CLK_PER_ERR_IRQ interrupt enable. (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;          /**< \brief \internal Reserved */
} Ifx_GTM_IRQ_EN_Bits;

/** \\brief  GTM Software interrupt generation register */
typedef struct _Ifx_GTM_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_AEI_TO_XPT : 1;      /**< \brief [0:0] Trigger AEI_TO_XPT_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit TRG_AEI_USP_ADDR : 1;    /**< \brief [1:1] Trigger AEI_USP_ADDR_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit TRG_AEI_IM_ADDR : 1;     /**< \brief [2:2] Trigger AEI_IM_ADDR_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit TRG_AEI_USP_BE : 1;      /**< \brief [3:3] Trigger AEI_USP_BE_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit TRG_AEIM_USP_ADDR : 1;   /**< \brief [4:4] Trigger AEIM_USP_ADDR_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit TRG_AEIM_IM_ADDR : 1;    /**< \brief [5:5] Trigger AEIM_IM_ADDR_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit TRG_AEIM_USP_BE : 1;     /**< \brief [6:6] Trigger AEIM_USP_BE_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit TRG_CLK_EN_ERR : 1;      /**< \brief [7:7] Trigger CLK_EN_ERR_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit TRG_CLK_PER_ERR : 1;     /**< \brief [8:8] Trigger CLK_PER_ERR_IRQ interrupt by software. (rw) */
    Ifx_Strict_32Bit reserved_9 : 23;         /**< \brief \internal Reserved */
} Ifx_GTM_IRQ_FORCINT_Bits;

/** \\brief  GTM top level interrupts mode selection */
typedef struct _Ifx_GTM_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] Interrupt strategy mode selection for the AEI timeout and address monitoring interrupts. (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_IRQ_MODE_Bits;

/** \\brief  GTM Interrupt notification register */
typedef struct _Ifx_GTM_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit AEI_TO_XPT : 1;          /**< \brief [0:0] AEI timeout exception occurred. (rw) */
    Ifx_Strict_32Bit AEI_USP_ADDR : 1;        /**< \brief [1:1] AEI unsupported address interrupt. (rw) */
    Ifx_Strict_32Bit AEI_IM_ADDR : 1;         /**< \brief [2:2] AEI illegal Module address interrupt. (rw) */
    Ifx_Strict_32Bit AEI_USP_BE : 1;          /**< \brief [3:3] AEI unsupported byte enable interrupt. (rw) */
    Ifx_Strict_32Bit AEIM_USP_ADDR : 1;       /**< \brief [4:4] AEI master port unsupported address interrupt. (rw) */
    Ifx_Strict_32Bit AEIM_IM_ADDR : 1;        /**< \brief [5:5] AEI master port illegal Module address interrupt (rw) */
    Ifx_Strict_32Bit AEIM_USP_BE : 1;         /**< \brief [6:6] AEI master port unsupported byte enable interrupt (rw) */
    Ifx_Strict_32Bit CLK_EN_ERR : 1;          /**< \brief [7:7] Clock enable error interrupt (rw) */
    Ifx_Strict_32Bit CLK_PER_ERR : 1;         /**< \brief [8:8] Clock period error interrupt (rw) */
    Ifx_Strict_32Bit reserved_9 : 15;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CLK_EN_ERR_STATE : 4;    /**< \brief [27:24] Erroneous clock enable state (r) */
    Ifx_Strict_32Bit CLK_EN_EXP_STATE : 4;    /**< \brief [31:28] Expected clock enable state (r) */
} Ifx_GTM_IRQ_NOTIFY_Bits;

/** \\brief  LCDCDC Output Select Register */
typedef struct _Ifx_GTM_LCDCDCOUTSEL_Bits
{
    Ifx_Strict_32Bit SEL : 4;                 /**< \brief [3:0] Output Selection for LCDCDC GTM connection (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_LCDCDCOUTSEL_Bits;

/** \\brief  MAP Control register */
typedef struct _Ifx_GTM_MAP_CTRL_Bits
{
    Ifx_Strict_32Bit TSEL : 1;                /**< \brief [0:0] TRIGGER signal output select (rw) */
    Ifx_Strict_32Bit SSL : 3;                 /**< \brief [3:1] STATE signal output select (rw) */
    Ifx_Strict_32Bit LSEL : 1;                /**< \brief [4:4] TIM0_IN6 input level selection (rw) */
    Ifx_Strict_32Bit reserved_5 : 11;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TSPP0_EN : 1;            /**< \brief [16:16] Enable of TSPP0 subunit (rw) */
    Ifx_Strict_32Bit TSPP0_DLD : 1;           /**< \brief [17:17] DIR level definition bit (rw) */
    Ifx_Strict_32Bit reserved_18 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TSPP0_I0V : 1;           /**< \brief [20:20] Disable of TSPP0 TIM0_CHx(48) input line (rw) */
    Ifx_Strict_32Bit TSPP0_I1V : 1;           /**< \brief [21:21] Disable of TSPP0 TIM0_CHy(48) input line (rw) */
    Ifx_Strict_32Bit TSPP0_I2V : 1;           /**< \brief [22:22] Disable of TSPP0 TIM0_CHz(48) input line (rw) */
    Ifx_Strict_32Bit reserved_23 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TSPP1_EN : 1;            /**< \brief [24:24] Enable of TSPP1 subunit (rw) */
    Ifx_Strict_32Bit TSPP1_DLD : 1;           /**< \brief [25:25] DIR level definition bit (rw) */
    Ifx_Strict_32Bit reserved_26 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TSPP1_I0V : 1;           /**< \brief [28:28] Disable of TSPP1 TIM0_CHx(48) input line (rw) */
    Ifx_Strict_32Bit TSPP1_I1V : 1;           /**< \brief [29:29] Disable of TSPP1 TIM0_CHy(48) input line (rw) */
    Ifx_Strict_32Bit TSPP1_I2V : 1;           /**< \brief [30:30] Disable of TSPP1 TIM0_CHz(48) input line (rw) */
    Ifx_Strict_32Bit reserved_31 : 1;         /**< \brief \internal Reserved */
} Ifx_GTM_MAP_CTRL_Bits;

/** \\brief  MCFG Memory layout configuration. */
typedef struct _Ifx_GTM_MCFG_CTRL_Bits
{
    Ifx_Strict_32Bit MEM0 : 2;                /**< \brief [1:0] Configure Memory pages for MCS-instance MCS0 (rw) */
    Ifx_Strict_32Bit MEM1 : 2;                /**< \brief [3:2] Configure Memory pages for MCS-instance MCS1 (rw) */
    Ifx_Strict_32Bit MEM2 : 2;                /**< \brief [5:4] Configure Memory pages for MCS-instance MCS2 (rw) */
    Ifx_Strict_32Bit MEM3 : 2;                /**< \brief [7:6] Configure Memory pages for MCS-instance MCS3 (rw) */
    Ifx_Strict_32Bit MEM4 : 2;                /**< \brief [9:8] Configure Memory pages for MCS-instance MCS4 (rw) */
    Ifx_Strict_32Bit MEM5 : 2;                /**< \brief [11:10] Configure Memory pages for MCS-instance MCS5 (rw) */
    Ifx_Strict_32Bit MEM6 : 2;                /**< \brief [13:12] Configure Memory pages for MCS-instance MCS6 (rw) */
    Ifx_Strict_32Bit MEM7 : 2;                /**< \brief [15:14] Configure Memory pages for MCS-instance MCS7 (rw) */
    Ifx_Strict_32Bit MEM8 : 2;                /**< \brief [17:16] Configure Memory pages for MCS-instance MCS8 (rw) */
    Ifx_Strict_32Bit MEM9 : 2;                /**< \brief [19:18] Configure Memory pages for MCS-instance MCS9 (rw) */
    Ifx_Strict_32Bit reserved_20 : 12;        /**< \brief \internal Reserved */
} Ifx_GTM_MCFG_CTRL_Bits;

/** \\brief  MCS to DPLL Data Exchange Buffer 0 */
typedef struct _Ifx_GTM_MCS2DPLL_DEB_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data exchange buffer 0 (rw) */
    Ifx_Strict_32Bit na : 8;                  /**< \brief [31:24] Not applicable (r) */
} Ifx_GTM_MCS2DPLL_DEB_Bits;

/** \\brief  GTM MCS master port disable register */
typedef struct _Ifx_GTM_MCS_AEM_DIS_Bits
{
    Ifx_Strict_32Bit DIS_CLS0 : 2;            /**< \brief [1:0] Disable MCS AEIM access in cluster 0 (r) */
    Ifx_Strict_32Bit DIS_CLS1 : 2;            /**< \brief [3:2] Disable MCS AEIM access in cluster 1, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS2 : 2;            /**< \brief [5:4] Disable MCS AEIM access in cluster 2, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS3 : 2;            /**< \brief [7:6] Disable MCS AEIM access in cluster 3, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS4 : 2;            /**< \brief [9:8] Disable MCS AEIM access in cluster 4, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS5 : 2;            /**< \brief [11:10] Disable MCS AEIM access in cluster 5, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS6 : 2;            /**< \brief [13:12] Disable MCS AEIM access in cluster 6, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS7 : 2;            /**< \brief [15:14] Disable MCS AEIM access in cluster 7, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS8 : 2;            /**< \brief [17:16] Disable MCS AEIM access in cluster 8, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS9 : 2;            /**< \brief [19:18] Disable MCS AEIM access in cluster 9, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS10 : 2;           /**< \brief [21:20] Disable MCS AEIM access in cluster 10, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit DIS_CLS11 : 2;           /**< \brief [23:22] Disable MCS AEIM access in cluster 11, see bit DIS_CLS0 (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_AEM_DIS_Bits;

/** \\brief  MCS cancel ARU transfer instruction */
typedef struct _Ifx_GTM_MCS_CAT_Bits
{
    Ifx_Strict_32Bit CAT0 : 1;                /**< \brief [0:0] Cancel ARU transfer for channel 0 (rw) */
    Ifx_Strict_32Bit CAT1 : 1;                /**< \brief [1:1] Cancel ARU transfer for channel 1 (rw) */
    Ifx_Strict_32Bit CAT2 : 1;                /**< \brief [2:2] Cancel ARU transfer for channel 2 (rw) */
    Ifx_Strict_32Bit CAT3 : 1;                /**< \brief [3:3] Cancel ARU transfer for channel 3 (rw) */
    Ifx_Strict_32Bit CAT4 : 1;                /**< \brief [4:4] Cancel ARU transfer for channel 4 (rw) */
    Ifx_Strict_32Bit CAT5 : 1;                /**< \brief [5:5] Cancel ARU transfer for channel 5 (rw) */
    Ifx_Strict_32Bit CAT6 : 1;                /**< \brief [6:6] Cancel ARU transfer for channel 6 (rw) */
    Ifx_Strict_32Bit CAT7 : 1;                /**< \brief [7:7] Cancel ARU transfer for channel 7 (rw) */
    Ifx_Strict_32Bit Reserved : 24;           /**< \brief [31:8] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CAT_Bits;

/** \\brief  MCS clear trigger control register */
typedef struct _Ifx_GTM_MCS_CH0_CTRG_Bits
{
    Ifx_Strict_32Bit TRG0 : 1;                /**< \brief [0:0] Trigger bit 0 (rw) */
    Ifx_Strict_32Bit TRG1 : 1;                /**< \brief [1:1] Trigger bit 1 (rw) */
    Ifx_Strict_32Bit TRG2 : 1;                /**< \brief [2:2] Trigger bit 2 (rw) */
    Ifx_Strict_32Bit TRG3 : 1;                /**< \brief [3:3] Trigger bit 3 (rw) */
    Ifx_Strict_32Bit TRG4 : 1;                /**< \brief [4:4] Trigger bit 4 (rw) */
    Ifx_Strict_32Bit TRG5 : 1;                /**< \brief [5:5] Trigger bit 5 (rw) */
    Ifx_Strict_32Bit TRG6 : 1;                /**< \brief [6:6] Trigger bit 6 (rw) */
    Ifx_Strict_32Bit TRG7 : 1;                /**< \brief [7:7] Trigger bit 7 (rw) */
    Ifx_Strict_32Bit TRG8 : 1;                /**< \brief [8:8] Trigger bit 8 (rw) */
    Ifx_Strict_32Bit TRG9 : 1;                /**< \brief [9:9] Trigger bit 9 (rw) */
    Ifx_Strict_32Bit TRG10 : 1;               /**< \brief [10:10] Trigger bit 10 (rw) */
    Ifx_Strict_32Bit TRG11 : 1;               /**< \brief [11:11] Trigger bit 11 (rw) */
    Ifx_Strict_32Bit TRG12 : 1;               /**< \brief [12:12] Trigger bit 12 (rw) */
    Ifx_Strict_32Bit TRG13 : 1;               /**< \brief [13:13] Trigger bit 13 (rw) */
    Ifx_Strict_32Bit TRG14 : 1;               /**< \brief [14:14] Trigger bit 14 (rw) */
    Ifx_Strict_32Bit TRG15 : 1;               /**< \brief [15:15] Trigger bit 15 (rw) */
    Ifx_Strict_32Bit TRG16 : 1;               /**< \brief [16:16] Trigger bit 16 (rw) */
    Ifx_Strict_32Bit TRG17 : 1;               /**< \brief [17:17] Trigger bit 17 (rw) */
    Ifx_Strict_32Bit TRG18 : 1;               /**< \brief [18:18] Trigger bit 18 (rw) */
    Ifx_Strict_32Bit TRG19 : 1;               /**< \brief [19:19] Trigger bit 19 (rw) */
    Ifx_Strict_32Bit TRG20 : 1;               /**< \brief [20:20] Trigger bit 20 (rw) */
    Ifx_Strict_32Bit TRG21 : 1;               /**< \brief [21:21] Trigger bit 21 (rw) */
    Ifx_Strict_32Bit TRG22 : 1;               /**< \brief [22:22] Trigger bit 22 (rw) */
    Ifx_Strict_32Bit TRG23 : 1;               /**< \brief [23:23] Trigger bit 23 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH0_CTRG_Bits;

/** \\brief  MCS set trigger control register */
typedef struct _Ifx_GTM_MCS_CH0_STRG_Bits
{
    Ifx_Strict_32Bit TRG0 : 1;                /**< \brief [0:0] Trigger bit 0 (rw) */
    Ifx_Strict_32Bit TRG1 : 1;                /**< \brief [1:1] Trigger bit 1 (rw) */
    Ifx_Strict_32Bit TRG2 : 1;                /**< \brief [2:2] Trigger bit 2 (rw) */
    Ifx_Strict_32Bit TRG3 : 1;                /**< \brief [3:3] Trigger bit 3 (rw) */
    Ifx_Strict_32Bit TRG4 : 1;                /**< \brief [4:4] Trigger bit 4 (rw) */
    Ifx_Strict_32Bit TRG5 : 1;                /**< \brief [5:5] Trigger bit 5 (rw) */
    Ifx_Strict_32Bit TRG6 : 1;                /**< \brief [6:6] Trigger bit 6 (rw) */
    Ifx_Strict_32Bit TRG7 : 1;                /**< \brief [7:7] Trigger bit 7 (rw) */
    Ifx_Strict_32Bit TRG8 : 1;                /**< \brief [8:8] Trigger bit 8 (rw) */
    Ifx_Strict_32Bit TRG9 : 1;                /**< \brief [9:9] Trigger bit 9 (rw) */
    Ifx_Strict_32Bit TRG10 : 1;               /**< \brief [10:10] Trigger bit 10 (rw) */
    Ifx_Strict_32Bit TRG11 : 1;               /**< \brief [11:11] Trigger bit 11 (rw) */
    Ifx_Strict_32Bit TRG12 : 1;               /**< \brief [12:12] Trigger bit 12 (rw) */
    Ifx_Strict_32Bit TRG13 : 1;               /**< \brief [13:13] Trigger bit 13 (rw) */
    Ifx_Strict_32Bit TRG14 : 1;               /**< \brief [14:14] Trigger bit 14 (rw) */
    Ifx_Strict_32Bit TRG15 : 1;               /**< \brief [15:15] Trigger bit 15 (rw) */
    Ifx_Strict_32Bit TRG16 : 1;               /**< \brief [16:16] Trigger bit 16 (rw) */
    Ifx_Strict_32Bit TRG17 : 1;               /**< \brief [17:17] Trigger bit 17 (rw) */
    Ifx_Strict_32Bit TRG18 : 1;               /**< \brief [18:18] Trigger bit 18 (rw) */
    Ifx_Strict_32Bit TRG19 : 1;               /**< \brief [19:19] Trigger bit 19 (rw) */
    Ifx_Strict_32Bit TRG20 : 1;               /**< \brief [20:20] Trigger bit 20 (rw) */
    Ifx_Strict_32Bit TRG21 : 1;               /**< \brief [21:21] Trigger bit 21 (rw) */
    Ifx_Strict_32Bit TRG22 : 1;               /**< \brief [22:22] Trigger bit 22 (rw) */
    Ifx_Strict_32Bit TRG23 : 1;               /**< \brief [23:23] Trigger bit 23 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH0_STRG_Bits;

/** \\brief  MCS channel 0 ARU control Bit register */
typedef struct _Ifx_GTM_MCS_CH_ACB_Bits
{
    Ifx_Strict_32Bit ACB0 : 1;                /**< \brief [0:0] ARU Control bit 0 (r) */
    Ifx_Strict_32Bit ACB1 : 1;                /**< \brief [1:1] ARU Control bit 1 (r) */
    Ifx_Strict_32Bit ACB2 : 1;                /**< \brief [2:2] ARU Control bit 2 (r) */
    Ifx_Strict_32Bit ACB3 : 1;                /**< \brief [3:3] ARU Control bit 3 (r) */
    Ifx_Strict_32Bit ACB4 : 1;                /**< \brief [4:4] ARU Control bit 4 (r) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_ACB_Bits;

/** \\brief  MCS channel 0 control register */
typedef struct _Ifx_GTM_MCS_CH_CTRL_Bits
{
    Ifx_Strict_32Bit EN : 1;                  /**< \brief [0:0] Enable MCS-channel (rw) */
    Ifx_Strict_32Bit IRQ : 1;                 /**< \brief [1:1] Interrupt state (r) */
    Ifx_Strict_32Bit ERR : 1;                 /**< \brief [2:2] Error state (r) */
    Ifx_Strict_32Bit reserved_3 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CY : 1;                  /**< \brief [4:4] Carry bit state (r) */
    Ifx_Strict_32Bit Z : 1;                   /**< \brief [5:5] Zero bit state (r) */
    Ifx_Strict_32Bit V : 1;                   /**< \brief [6:6] Overflow bit state (r) */
    Ifx_Strict_32Bit N : 1;                   /**< \brief [7:7] Negative bit state (r) */
    Ifx_Strict_32Bit CAT : 1;                 /**< \brief [8:8] Cancel ARU transfer state (r) */
    Ifx_Strict_32Bit CWT : 1;                 /**< \brief [9:9] Cancel WURM instruction state (r) */
    Ifx_Strict_32Bit SAT : 1;                 /**< \brief [10:10] Successful ARU transfer bit (r) */
    Ifx_Strict_32Bit reserved_11 : 5;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SP_CNT : 3;              /**< \brief [18:16] Stack pointer counter value (r) */
    Ifx_Strict_32Bit reserved_19 : 13;        /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_CTRL_Bits;

/** \\brief  MCS channel 0 error interrupt enable register */
typedef struct _Ifx_GTM_MCS_CH_EIRQ_EN_Bits
{
    Ifx_Strict_32Bit MCS_EIRQ_EN0 : 1;        /**< \brief [0:0] MCS channel x MCS_EIRQ error interrupt enable (rw) */
    Ifx_Strict_32Bit STK_ERR_EIRQ_EN : 1;     /**< \brief [1:1] MCS channel x STK_ERR_IRQ error interrupt enable (rw) */
    Ifx_Strict_32Bit ERR_EIRQ_EN : 1;         /**< \brief [2:2] MCS channel x ERR_EIRQ error interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_3 : 29;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_EIRQ_EN_Bits;

/** \\brief  MCS channel 0 interrupt enable register */
typedef struct _Ifx_GTM_MCS_CH_IRQ_EN_Bits
{
    Ifx_Strict_32Bit MCS_IRQ_EN : 1;          /**< \brief [0:0] MCS channel x MCS_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit STK_ERR_IRQ_EN : 1;      /**< \brief [1:1] MCS channel x STK_ERR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit ERR_IRQ_EN : 1;          /**< \brief [2:2] MCS channel x ERR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_3 : 29;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_IRQ_EN_Bits;

/** \\brief  MCS channel 0 force interrupt register */
typedef struct _Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_MCS_IRQ : 1;         /**< \brief [0:0] Trigger IRQ bit in MCS_CH_[x]_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_STK_ERR_IRQ : 1;     /**< \brief [1:1] Trigger IRQ bit in MCS_CH_[x]_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ERR_IRQ : 1;         /**< \brief [2:2] Trigger IRQ bit in MCS_CH_[x]_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit reserved_3 : 29;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits;

/** \\brief  MCS channel 0 IRQ mode configuration register */
typedef struct _Ifx_GTM_MCS_CH_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_IRQ_MODE_Bits;

/** \\brief  MCS channel 0 interrupt notification register */
typedef struct _Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit MCS_IRQ : 1;             /**< \brief [0:0] Interrupt request by MCS-channel x (rw) */
    Ifx_Strict_32Bit STK_ERR_IRQ : 1;         /**< \brief [1:1] Stack counter overflow/underflow of channel x (rw) */
    Ifx_Strict_32Bit ERR_IRQ : 1;             /**< \brief [2:2] MCS channel x ERR interrupt (rw) */
    Ifx_Strict_32Bit reserved_3 : 29;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits;

/** \\brief  MCS channel 0 memory high byte register */
typedef struct _Ifx_GTM_MCS_CH_MHB_Bits
{
    Ifx_Strict_32Bit DATA : 8;                /**< \brief [7:0] Data of memory high bit register MHB (r) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_MHB_Bits;

/** \\brief  MCS channel 0 program counter register */
typedef struct _Ifx_GTM_MCS_CH_PC_Bits
{
    Ifx_Strict_32Bit PC : 16;                 /**< \brief [15:0] Current Program Counter (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CH_PC_Bits;

/** \\brief  MCS channel 0 general purpose register 0 */
typedef struct _Ifx_GTM_MCS_CH_R0_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data of general purpose register R[y]. (rw) */
    Ifx_Strict_32Bit Reserved : 8;            /**< \brief [31:24] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CH_R0_Bits;

/** \\brief  MCS channel 0 general purpose register 1 */
typedef struct _Ifx_GTM_MCS_CH_R1_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data of general purpose register R[y]. (rw) */
    Ifx_Strict_32Bit Reserved : 8;            /**< \brief [31:24] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CH_R1_Bits;

/** \\brief  MCS channel 0 general purpose register 2 */
typedef struct _Ifx_GTM_MCS_CH_R2_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data of general purpose register R[y]. (rw) */
    Ifx_Strict_32Bit Reserved : 8;            /**< \brief [31:24] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CH_R2_Bits;

/** \\brief  MCS channel 0 general purpose register 3 */
typedef struct _Ifx_GTM_MCS_CH_R3_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data of general purpose register R[y]. (rw) */
    Ifx_Strict_32Bit Reserved : 8;            /**< \brief [31:24] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CH_R3_Bits;

/** \\brief  MCS channel 0 general purpose register 4 */
typedef struct _Ifx_GTM_MCS_CH_R4_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data of general purpose register R[y]. (rw) */
    Ifx_Strict_32Bit Reserved : 8;            /**< \brief [31:24] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CH_R4_Bits;

/** \\brief  MCS channel 0 general purpose register 5 */
typedef struct _Ifx_GTM_MCS_CH_R5_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data of general purpose register R[y]. (rw) */
    Ifx_Strict_32Bit Reserved : 8;            /**< \brief [31:24] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CH_R5_Bits;

/** \\brief  MCS channel 0 general purpose register 6 */
typedef struct _Ifx_GTM_MCS_CH_R6_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data of general purpose register R[y]. (rw) */
    Ifx_Strict_32Bit Reserved : 8;            /**< \brief [31:24] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CH_R6_Bits;

/** \\brief  MCS channel 0 general purpose register 7 */
typedef struct _Ifx_GTM_MCS_CH_R7_Bits
{
    Ifx_Strict_32Bit DATA : 24;               /**< \brief [23:0] Data of general purpose register R[y]. (rw) */
    Ifx_Strict_32Bit Reserved : 8;            /**< \brief [31:24] Read as zero, should be written as zero. (r) */
} Ifx_GTM_MCS_CH_R7_Bits;

/** \\brief  MCS control and status register */
typedef struct _Ifx_GTM_MCS_CTRL_STAT_Bits
{
    Ifx_Strict_32Bit SCD_MODE : 2;            /**< \brief [1:0] Select MCS scheduling mode (rw) */
    Ifx_Strict_32Bit reserved_2 : 6;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SCD_CH : 4;              /**< \brief [11:8] Channel selection for scheduling algorithm. (rw) */
    Ifx_Strict_32Bit reserved_12 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RAM_RST : 1;             /**< \brief [16:16] RAM reset bit (rw) */
    Ifx_Strict_32Bit HLT_SP_OFL : 1;          /**< \brief [17:17] Halt on stack pointer overflow (rw) */
    Ifx_Strict_32Bit reserved_18 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ERR_SRC_ID : 3;          /**< \brief [22:20] Error source identifier (r) */
    Ifx_Strict_32Bit reserved_23 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EN_TIM_FOUT : 1;         /**< \brief [24:24] Enable routing of TIM[i]_CH[x]_F_OUT signal (rw) */
    Ifx_Strict_32Bit EN_XOREG : 1;            /**< \brief [25:25] Enable extended register set (rw) */
    Ifx_Strict_32Bit HLT_AEIM_ERR : 1;        /**< \brief [26:26] Halt on AEI bus master error (rw) */
    Ifx_Strict_32Bit reserved_27 : 5;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CTRL_STAT_Bits;

/** \\brief  MCS cancel WURM instruction */
typedef struct _Ifx_GTM_MCS_CWT_Bits
{
    Ifx_Strict_32Bit CWT0 : 1;                /**< \brief [0:0] Cancel WURM instruction for channel 0 (rw) */
    Ifx_Strict_32Bit CWT1 : 1;                /**< \brief [1:1] Cancel WURM instruction for channel 1 (rw) */
    Ifx_Strict_32Bit CWT2 : 1;                /**< \brief [2:2] Cancel WURM instruction for channel 2 (rw) */
    Ifx_Strict_32Bit CWT3 : 1;                /**< \brief [3:3] Cancel WURM instruction for channel 3 (rw) */
    Ifx_Strict_32Bit CWT4 : 1;                /**< \brief [4:4] Cancel WURM instruction for channel 4 (rw) */
    Ifx_Strict_32Bit CWT5 : 1;                /**< \brief [5:5] Cancel WURM instruction for channel 5 (rw) */
    Ifx_Strict_32Bit CWT6 : 1;                /**< \brief [6:6] Cancel WURM instruction for channel 6 (rw) */
    Ifx_Strict_32Bit CWT7 : 1;                /**< \brief [7:7] Cancel WURM instruction for channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_CWT_Bits;

/** \\brief  MCS error register */
typedef struct _Ifx_GTM_MCS_ERR_Bits
{
    Ifx_Strict_32Bit ERR0 : 1;                /**< \brief [0:0] Error State of MCS-channel 0 (rw) */
    Ifx_Strict_32Bit ERR1 : 1;                /**< \brief [1:1] Error State of MCS-channel 1 (rw) */
    Ifx_Strict_32Bit ERR2 : 1;                /**< \brief [2:2] Error State of MCS-channel 2 (rw) */
    Ifx_Strict_32Bit ERR3 : 1;                /**< \brief [3:3] Error State of MCS-channel 3 (rw) */
    Ifx_Strict_32Bit ERR4 : 1;                /**< \brief [4:4] Error State of MCS-channel 4 (rw) */
    Ifx_Strict_32Bit ERR5 : 1;                /**< \brief [5:5] Error State of MCS-channel 5 (rw) */
    Ifx_Strict_32Bit ERR6 : 1;                /**< \brief [6:6] Error State of MCS-channel 6 (rw) */
    Ifx_Strict_32Bit ERR7 : 1;                /**< \brief [7:7] Error State of MCS-channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_ERR_Bits;

/** \\brief  MCS write protection register */
typedef struct _Ifx_GTM_MCS_REG_PROT_Bits
{
    Ifx_Strict_32Bit WPROT0 : 2;              /**< \brief [1:0] Register Write Protection of MCS-channel 0 (rw) */
    Ifx_Strict_32Bit WPROT1 : 2;              /**< \brief [3:2] Register Write Protection of MCS-channel 1 (rw) */
    Ifx_Strict_32Bit WPROT2 : 2;              /**< \brief [5:4] Register Write Protection of MCS-channel 2 (rw) */
    Ifx_Strict_32Bit WPROT3 : 2;              /**< \brief [7:6] Register Write Protection of MCS-channel 3 (rw) */
    Ifx_Strict_32Bit WPROT4 : 2;              /**< \brief [9:8] Register Write Protection of MCS-channel 4 (rw) */
    Ifx_Strict_32Bit WPROT5 : 2;              /**< \brief [11:10] Register Write Protection of MCS-channel 5 (rw) */
    Ifx_Strict_32Bit WPROT6 : 2;              /**< \brief [13:12] Register Write Protection of MCS-channel 6 (rw) */
    Ifx_Strict_32Bit WPROT7 : 2;              /**< \brief [15:14] Register Write Protection of MCS-channel 7 (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_MCS_REG_PROT_Bits;

/** \\brief  MCS reset register */
typedef struct _Ifx_GTM_MCS_RESET_Bits
{
    Ifx_Strict_32Bit RST0 : 1;                /**< \brief [0:0] Software reset of channel 0 (rw) */
    Ifx_Strict_32Bit RST1 : 1;                /**< \brief [1:1] Software reset of channel 1 (rw) */
    Ifx_Strict_32Bit RST2 : 1;                /**< \brief [2:2] Software reset of channel 2 (rw) */
    Ifx_Strict_32Bit RST3 : 1;                /**< \brief [3:3] Software reset of channel 3 (rw) */
    Ifx_Strict_32Bit RST4 : 1;                /**< \brief [4:4] Software reset of channel 4 (rw) */
    Ifx_Strict_32Bit RST5 : 1;                /**< \brief [5:5] Software reset of channel 5 (rw) */
    Ifx_Strict_32Bit RST6 : 1;                /**< \brief [6:6] Software reset of channel 6 (rw) */
    Ifx_Strict_32Bit RST7 : 1;                /**< \brief [7:7] Software reset of channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MCS_RESET_Bits;

/** \\brief  Monitor activity register 0 */
typedef struct _Ifx_GTM_MON_ACTIVITY_0_Bits
{
    Ifx_Strict_32Bit MCA_0_0 : 1;             /**< \brief [0:0] Activity of check performed in module MCS 0 at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_0_1 : 1;             /**< \brief [1:1] Activity of check performed in module MCS 0 at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_0_2 : 1;             /**< \brief [2:2] Activity of check performed in module MCS 0 at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_0_3 : 1;             /**< \brief [3:3] Activity of check performed in module MCS 0 at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_0_4 : 1;             /**< \brief [4:4] Activity of check performed in module MCS 0 at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_0_5 : 1;             /**< \brief [5:5] Activity of check performed in module MCS 0 at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_0_6 : 1;             /**< \brief [6:6] Activity of check performed in module MCS 0 at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_0_7 : 1;             /**< \brief [7:7] Activity of check performed in module MCS 0 at channel 7 (rw) */
    Ifx_Strict_32Bit MCA_1_0 : 1;             /**< \brief [8:8] Activity of check performed in module MCS 1 at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1_1 : 1;             /**< \brief [9:9] Activity of check performed in module MCS 1 at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_1_2 : 1;             /**< \brief [10:10] Activity of check performed in module MCS 1 at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_1_3 : 1;             /**< \brief [11:11] Activity of check performed in module MCS 1 at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_1_4 : 1;             /**< \brief [12:12] Activity of check performed in module MCS 1 at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_1_5 : 1;             /**< \brief [13:13] Activity of check performed in module MCS 1 at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_1_6 : 1;             /**< \brief [14:14] Activity of check performed in module MCS 1 at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_1_7 : 1;             /**< \brief [15:15] Activity of check performed in module MCS 1 at channel 7 (rw) */
    Ifx_Strict_32Bit MCA_2_00 : 1;            /**< \brief [16:16] Activity of check performed in module MCS 2 at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_2_01 : 1;            /**< \brief [17:17] Activity of check performed in module MCS 2 at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2_02 : 1;            /**< \brief [18:18] Activity of check performed in module MCS 2 at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_2_03 : 1;            /**< \brief [19:19] Activity of check performed in module MCS 2 at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_2_04 : 1;            /**< \brief [20:20] Activity of check performed in module MCS 2 at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_2_05 : 1;            /**< \brief [21:21] Activity of check performed in module MCS 2 at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_2_06 : 1;            /**< \brief [22:22] Activity of check performed in module MCS 2 at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_2_07 : 1;            /**< \brief [23:23] Activity of check performed in module MCS 2 at channel 7 (rw) */
    Ifx_Strict_32Bit MCA_3_00 : 1;            /**< \brief [24:24] Activity of check performed in module MCS 3 at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_3_01 : 1;            /**< \brief [25:25] Activity of check performed in module MCS 3 at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_3_02 : 1;            /**< \brief [26:26] Activity of check performed in module MCS 3 at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3_03 : 1;            /**< \brief [27:27] Activity of check performed in module MCS 3 at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_3_04 : 1;            /**< \brief [28:28] Activity of check performed in module MCS 3 at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_3_05 : 1;            /**< \brief [29:29] Activity of check performed in module MCS 3 at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_3_06 : 1;            /**< \brief [30:30] Activity of check performed in module MCS 3 at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_3_07 : 1;            /**< \brief [31:31] Activity of check performed in module MCS 3 at channel 7 (rw) */
} Ifx_GTM_MON_ACTIVITY_0_Bits;

/** \\brief  Monitor activity register 1 */
typedef struct _Ifx_GTM_MON_ACTIVITY_1_Bits
{
    Ifx_Strict_32Bit MCA_4_0 : 1;             /**< \brief [0:0] Activity of check performed in module MCS 4 at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_4_1 : 1;             /**< \brief [1:1] Activity of check performed in module MCS 4 at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_4_2 : 1;             /**< \brief [2:2] Activity of check performed in module MCS 4 at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_4_3 : 1;             /**< \brief [3:3] Activity of check performed in module MCS 4 at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4_4 : 1;             /**< \brief [4:4] Activity of check performed in module MCS 4 at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_4_5 : 1;             /**< \brief [5:5] Activity of check performed in module MCS 4 at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_4_6 : 1;             /**< \brief [6:6] Activity of check performed in module MCS 4 at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_4_7 : 1;             /**< \brief [7:7] Activity of check performed in module MCS 4 at channel 7 (rw) */
    Ifx_Strict_32Bit MCA_5_0 : 1;             /**< \brief [8:8] Activity of check performed in module MCS 5 at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_5_1 : 1;             /**< \brief [9:9] Activity of check performed in module MCS 5 at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_5_2 : 1;             /**< \brief [10:10] Activity of check performed in module MCS 5 at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_5_3 : 1;             /**< \brief [11:11] Activity of check performed in module MCS 5 at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_5_4 : 1;             /**< \brief [12:12] Activity of check performed in module MCS 5 at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5_5 : 1;             /**< \brief [13:13] Activity of check performed in module MCS 5 at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_5_6 : 1;             /**< \brief [14:14] Activity of check performed in module MCS 5 at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_5_7 : 1;             /**< \brief [15:15] Activity of check performed in module MCS 5 at channel 7 (rw) */
    Ifx_Strict_32Bit MCA_6_0 : 1;             /**< \brief [16:16] Activity of check performed in module MCS 6 at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_6_1 : 1;             /**< \brief [17:17] Activity of check performed in module MCS 6 at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_6_2 : 1;             /**< \brief [18:18] Activity of check performed in module MCS 6 at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_6_3 : 1;             /**< \brief [19:19] Activity of check performed in module MCS 6 at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_6_4 : 1;             /**< \brief [20:20] Activity of check performed in module MCS 6 at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_6_5 : 1;             /**< \brief [21:21] Activity of check performed in module MCS 6 at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6_6 : 1;             /**< \brief [22:22] Activity of check performed in module MCS 6 at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_6_7 : 1;             /**< \brief [23:23] Activity of check performed in module MCS 6 at channel 7 (rw) */
    Ifx_Strict_32Bit MCA_7_0 : 1;             /**< \brief [24:24] Activity of check performed in module MCS 7 at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_7_1 : 1;             /**< \brief [25:25] Activity of check performed in module MCS 7 at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_7_2 : 1;             /**< \brief [26:26] Activity of check performed in module MCS 7 at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_7_3 : 1;             /**< \brief [27:27] Activity of check performed in module MCS 7 at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_7_4 : 1;             /**< \brief [28:28] Activity of check performed in module MCS 7 at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_7_5 : 1;             /**< \brief [29:29] Activity of check performed in module MCS 7 at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_7_6 : 1;             /**< \brief [30:30] Activity of check performed in module MCS 7 at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7_7 : 1;             /**< \brief [31:31] Activity of check performed in module MCS 7 at channel 7 (rw) */
} Ifx_GTM_MON_ACTIVITY_1_Bits;

/** \\brief  Monitor activity register for MCS 0 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS0_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS0_Bits;

/** \\brief  Monitor activity register for MCS 1 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS1_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS1_Bits;

/** \\brief  Monitor activity register for MCS 2 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS2_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS2_Bits;

/** \\brief  Monitor activity register for MCS 3 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS3_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS3_Bits;

/** \\brief  Monitor activity register for MCS 4 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS4_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS4_Bits;

/** \\brief  Monitor activity register for MCS 5 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS5_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS5_Bits;

/** \\brief  Monitor activity register for MCS 6 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS6_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS6_Bits;

/** \\brief  Monitor activity register for MCS 7 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS7_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS7_Bits;

/** \\brief  Monitor activity register for MCS 8 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS8_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS8_Bits;

/** \\brief  Monitor activity register for MCS 9 */
typedef struct _Ifx_GTM_MON_ACTIVITY_MCS9_Bits
{
    Ifx_Strict_32Bit MCA_0 : 1;               /**< \brief [0:0] Activity of check performed in module MCS[z] at channel 0 (rw) */
    Ifx_Strict_32Bit MCA_1 : 1;               /**< \brief [1:1] Activity of check performed in module MCS[z] at channel 1 (rw) */
    Ifx_Strict_32Bit MCA_2 : 1;               /**< \brief [2:2] Activity of check performed in module MCS[z] at channel 2 (rw) */
    Ifx_Strict_32Bit MCA_3 : 1;               /**< \brief [3:3] Activity of check performed in module MCS[z] at channel 3 (rw) */
    Ifx_Strict_32Bit MCA_4 : 1;               /**< \brief [4:4] Activity of check performed in module MCS[z] at channel 4 (rw) */
    Ifx_Strict_32Bit MCA_5 : 1;               /**< \brief [5:5] Activity of check performed in module MCS[z] at channel 5 (rw) */
    Ifx_Strict_32Bit MCA_6 : 1;               /**< \brief [6:6] Activity of check performed in module MCS[z] at channel 6 (rw) */
    Ifx_Strict_32Bit MCA_7 : 1;               /**< \brief [7:7] Activity of check performed in module MCS[z] at channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_ACTIVITY_MCS9_Bits;

/** \\brief  Monitor status register */
typedef struct _Ifx_GTM_MON_STATUS_Bits
{
    Ifx_Strict_32Bit ACT_CMU0 : 1;            /**< \brief [0:0] CMU_CLK0 activity (rw) */
    Ifx_Strict_32Bit ACT_CMU1 : 1;            /**< \brief [1:1] CMU_CLK1 activity (rw) */
    Ifx_Strict_32Bit ACT_CMU2 : 1;            /**< \brief [2:2] CMU_CLK2 activity (rw) */
    Ifx_Strict_32Bit ACT_CMU3 : 1;            /**< \brief [3:3] CMU_CLK3 activity (rw) */
    Ifx_Strict_32Bit ACT_CMU4 : 1;            /**< \brief [4:4] CMU_CLK4 activity (rw) */
    Ifx_Strict_32Bit ACT_CMU5 : 1;            /**< \brief [5:5] CMU_CLK5 activity (rw) */
    Ifx_Strict_32Bit ACT_CMU6 : 1;            /**< \brief [6:6] CMU_CLK6 activity (rw) */
    Ifx_Strict_32Bit ACT_CMU7 : 1;            /**< \brief [7:7] CMU_CLK7 activity (rw) */
    Ifx_Strict_32Bit ACT_CMUFX0 : 1;          /**< \brief [8:8] CMU_CLKFX0 activity (rw) */
    Ifx_Strict_32Bit ACT_CMUFX1 : 1;          /**< \brief [9:9] CMU_CLKFX1 activity (rw) */
    Ifx_Strict_32Bit ACT_CMUFX2 : 1;          /**< \brief [10:10] CMU_CLKFX2 activity (rw) */
    Ifx_Strict_32Bit ACT_CMUFX3 : 1;          /**< \brief [11:11] CMU_CLKFX3 activity (rw) */
    Ifx_Strict_32Bit ACT_CMUFX4 : 1;          /**< \brief [12:12] CMU_CLKFX4 activity (rw) */
    Ifx_Strict_32Bit reserved_13 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ACT_CMU8 : 1;            /**< \brief [14:14] CMU_CLK8 activity (rw) */
    Ifx_Strict_32Bit reserved_15 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CMP_ERR : 1;             /**< \brief [16:16] Error detected at CMP (r) */
    Ifx_Strict_32Bit reserved_17 : 3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit MCS0_ERR : 1;            /**< \brief [20:20] Error detected at MCS0 (r) */
    Ifx_Strict_32Bit MCS1_ERR : 1;            /**< \brief [21:21] Error detected at MCS1 (r) */
    Ifx_Strict_32Bit MCS2_ERR : 1;            /**< \brief [22:22] Error detected at MCS2 (r) */
    Ifx_Strict_32Bit MCS3_ERR : 1;            /**< \brief [23:23] Error detected at MCS3 (r) */
    Ifx_Strict_32Bit MCS4_ERR : 1;            /**< \brief [24:24] Error detected at MCS4 (r) */
    Ifx_Strict_32Bit MCS5_ERR : 1;            /**< \brief [25:25] Error detected at MCS5 (r) */
    Ifx_Strict_32Bit MCS6_ERR : 1;            /**< \brief [26:26] Error detected at MCS6 (r) */
    Ifx_Strict_32Bit MCS7_ERR : 1;            /**< \brief [27:27] Error detected at MCS7 (r) */
    Ifx_Strict_32Bit MCS8_ERR : 1;            /**< \brief [28:28] Error detected at MCS8 (r) */
    Ifx_Strict_32Bit MCS9_ERR : 1;            /**< \brief [29:29] Error detected at MCS9 (r) */
    Ifx_Strict_32Bit reserved_30 : 2;         /**< \brief \internal Reserved */
} Ifx_GTM_MON_STATUS_Bits;

/** \\brief  OCDS TBU3 Trigger Register */
typedef struct _Ifx_GTM_OTBU3T_Bits
{
    Ifx_Strict_32Bit CV : 24;                 /**< \brief [23:0] Compare Value (rw) */
    Ifx_Strict_32Bit reserved_24 : 4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EN : 1;                  /**< \brief [28:28] Enable (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_GTM_OTBU3T_Bits;

/** \\brief  GTM Version control register */
typedef struct _Ifx_GTM_REV_Bits
{
    Ifx_Strict_32Bit STEP : 8;                /**< \brief [7:0] Release step (r) */
    Ifx_Strict_32Bit NO : 4;                  /**< \brief [11:8] Delivery number (r) */
    Ifx_Strict_32Bit MINOR : 4;               /**< \brief [15:12] Minor version number (r) */
    Ifx_Strict_32Bit MAJOR : 4;               /**< \brief [19:16] Major version number (r) */
    Ifx_Strict_32Bit DEV_CODE0 : 4;           /**< \brief [23:20] Device encoding digit 0 (r) */
    Ifx_Strict_32Bit DEV_CODE1 : 4;           /**< \brief [27:24] Device encoding digit 1 (r) */
    Ifx_Strict_32Bit DEV_CODE2 : 4;           /**< \brief [31:28] Device encoding digit 2 (r) */
} Ifx_GTM_REV_Bits;

/** \\brief  GTM Global reset register */
typedef struct _Ifx_GTM_RST_Bits
{
    Ifx_Strict_32Bit RST : 1;                 /**< \brief [0:0] GTM Reset (rw) */
    Ifx_Strict_32Bit reserved_1 : 26;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit BRIDGE_MODE_WRDIS : 1;   /**< \brief [27:27] GTM_BRIDGE_MODE write disable (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_GTM_RST_Bits;

/** \\brief  SPE Command register */
typedef struct _Ifx_GTM_SPE_CMD_Bits
{
    Ifx_Strict_32Bit SPE_CTRL_CMD : 2;        /**< \brief [1:0] SPE control command (rw) */
    Ifx_Strict_32Bit reserved_2 : 14;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SPE_UPD_TRIG : 1;        /**< \brief [16:16] SPE update trigger (rw) */
    Ifx_Strict_32Bit reserved_17 : 15;        /**< \brief \internal Reserved */
} Ifx_GTM_SPE_CMD_Bits;

/** \\brief  SPE Control status register 2 */
typedef struct _Ifx_GTM_SPE_CTRL_STAT2_Bits
{
    Ifx_Strict_32Bit reserved_0 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SPE_PAT_PTR_BWD : 3;     /**< \brief [10:8] Pattern selector for TOM output signals in case of SPE_CTRL_CMD = 0b01 (e.g. backward direction) (rw) */
    Ifx_Strict_32Bit reserved_11 : 21;        /**< \brief \internal Reserved */
} Ifx_GTM_SPE_CTRL_STAT2_Bits;

/** \\brief  SPE Control status register */
typedef struct _Ifx_GTM_SPE_CTRL_STAT_Bits
{
    Ifx_Strict_32Bit EN : 1;                  /**< \brief [0:0] SPE Submodule enable (rw) */
    Ifx_Strict_32Bit SIE0 : 1;                /**< \brief [1:1] SPE Input enable for TIM_CHx(48) (rw) */
    Ifx_Strict_32Bit SIE1 : 1;                /**< \brief [2:2] SPE Input enable for TIM_CHy(48) (rw) */
    Ifx_Strict_32Bit SIE2 : 1;                /**< \brief [3:3] SPE Input enable for TIM_CHz(48) (rw) */
    Ifx_Strict_32Bit TRIG_SEL : 2;            /**< \brief [5:4] Select trigger input signal (rw) */
    Ifx_Strict_32Bit TIM_SEL : 1;             /**< \brief [6:6] Select TIM input signal (rw) */
    Ifx_Strict_32Bit FSOM : 1;                /**< \brief [7:7] Fast Shutoff Mode (rw) */
    Ifx_Strict_32Bit SPE_PAT_PTR : 3;         /**< \brief [10:8] Pattern selector for TOM output signals (rw) */
    Ifx_Strict_32Bit reserved_11 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AIP : 3;                 /**< \brief [14:12] Actual input pattern that was detected by a regular input pattern change. (rw) */
    Ifx_Strict_32Bit ADIR : 1;                /**< \brief [15:15] Actual rotation direction (rw) */
    Ifx_Strict_32Bit PIP : 3;                 /**< \brief [18:16] Previous input pattern that was detected by a regular input pattern change. (rw) */
    Ifx_Strict_32Bit PDIR : 1;                /**< \brief [19:19] Previous rotation direction (rw) */
    Ifx_Strict_32Bit NIP : 3;                 /**< \brief [22:20] New input pattern that was detected (r) */
    Ifx_Strict_32Bit ETRIG_SEL : 1;           /**< \brief [23:23] Extended TRIG_SEL (rw) */
    Ifx_Strict_32Bit FSOL : 8;                /**< \brief [31:24] Fast Shutoff Level for TOM[i] channel 0 to 7 (rw) */
} Ifx_GTM_SPE_CTRL_STAT_Bits;

/** \\brief  SPE Error interrupt enable register. */
typedef struct _Ifx_GTM_SPE_EIRQ_EN_Bits
{
    Ifx_Strict_32Bit SPE_NIPD_EIRQ_EN : 1;    /**< \brief [0:0] SPE_NIPD_EIRQ interrupt enable. (rw) */
    Ifx_Strict_32Bit SPE_DCHG_EIRQ_EN : 1;    /**< \brief [1:1] SPE_DCHG_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit SPE_PERR_EIRQ_EN : 1;    /**< \brief [2:2] SPE_PERR_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit SPE_BIS_EIRQ_EN : 1;     /**< \brief [3:3] SPE_BIS_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit SPE_RCMP_EIRQ_EN : 1;    /**< \brief [4:4] SPE_RCMP_EIRQ error interrupt enable. (rw) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_SPE_EIRQ_EN_Bits;

/** \\brief  SPE Interrupt enable register. */
typedef struct _Ifx_GTM_SPE_IRQ_EN_Bits
{
    Ifx_Strict_32Bit SPE_NIPD_IRQ_EN : 1;     /**< \brief [0:0] SPE_NIPD_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit SPE_DCHG_IRQ_EN : 1;     /**< \brief [1:1] SPE_DCHG_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit SPE_PERR_IRQ_EN : 1;     /**< \brief [2:2] SPE_PERR_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit SPE_BIS_IRQ_EN : 1;      /**< \brief [3:3] SPE_BIS_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit SPE_RCMP_IRQ_EN : 1;     /**< \brief [4:4] SPE_RCMP_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_SPE_IRQ_EN_Bits;

/** \\brief  SPE Interrupt generation by software. */
typedef struct _Ifx_GTM_SPE_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_SPE_NIPD : 1;        /**< \brief [0:0] Force interrupt of SPE_NIPD (rw) */
    Ifx_Strict_32Bit TRG_SPE_DCHG : 1;        /**< \brief [1:1] Force interrupt of SPE_DCHG (rw) */
    Ifx_Strict_32Bit TRG_SPE_PERR : 1;        /**< \brief [2:2] Force interrupt of SPE_PERR (rw) */
    Ifx_Strict_32Bit TRG_SPE_BIS : 1;         /**< \brief [3:3] Force interrupt of SPE_BIS (rw) */
    Ifx_Strict_32Bit TRG_SPE_RCMP : 1;        /**< \brief [4:4] Force interrupt of SPE_RCMP (rw) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_SPE_IRQ_FORCINT_Bits;

/** \\brief  SPE Interrupt mode configuration register */
typedef struct _Ifx_GTM_SPE_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_SPE_IRQ_MODE_Bits;

/** \\brief  SPE Interrupt notification register. */
typedef struct _Ifx_GTM_SPE_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit SPE_NIPD : 1;            /**< \brief [0:0] New input pattern interrupt occurred (rw) */
    Ifx_Strict_32Bit SPE_DCHG : 1;            /**< \brief [1:1] SPE_DIR bit changed on behalf of new input pattern (rw) */
    Ifx_Strict_32Bit SPE_PERR : 1;            /**< \brief [2:2] Wrong or invalid pattern detected at input (rw) */
    Ifx_Strict_32Bit SPE_BIS : 1;             /**< \brief [3:3] Bouncing input signal detected (rw) */
    Ifx_Strict_32Bit SPE_RCMP : 1;            /**< \brief [4:4] SPE revolution counter match event (rw) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_SPE_IRQ_NOTIFY_Bits;

/** \\brief  SPE output control register */
typedef struct _Ifx_GTM_SPE_OUT_CTRL_Bits
{
    Ifx_Strict_32Bit SPE_OUT_CTRL : 16;       /**< \brief [15:0] SPE output control value for TOM_CH0 to TOM_CH7 (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_SPE_OUT_CTRL_Bits;

/** \\brief  SPE Output definition register */
typedef struct _Ifx_GTM_SPE_OUT_PAT_Bits
{
    Ifx_Strict_32Bit SPE_OUT_PAT : 16;        /**< \brief [15:0] SPE output control value for TOM_CH0 to TOM_CH7 (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_SPE_OUT_PAT_Bits;

/** \\brief  SPE Input pattern definition register. */
typedef struct _Ifx_GTM_SPE_PAT_Bits
{
    Ifx_Strict_32Bit IP0_VAL : 1;             /**< \brief [0:0] Input pattern 0 is a valid pattern. (rw) */
    Ifx_Strict_32Bit IP0_PAT : 3;             /**< \brief [3:1] Input pattern 0 (rw) */
    Ifx_Strict_32Bit IP1_VAL : 1;             /**< \brief [4:4] Input pattern 1 is a valid pattern. (rw) */
    Ifx_Strict_32Bit IP1_PAT : 3;             /**< \brief [7:5] Input pattern 1 (rw) */
    Ifx_Strict_32Bit IP2_VAL : 1;             /**< \brief [8:8] Input pattern 2 is a valid pattern. (rw) */
    Ifx_Strict_32Bit IP2_PAT : 3;             /**< \brief [11:9] Input pattern 2 (rw) */
    Ifx_Strict_32Bit IP3_VAL : 1;             /**< \brief [12:12] Input pattern 3 is a valid pattern. (rw) */
    Ifx_Strict_32Bit IP3_PAT : 3;             /**< \brief [15:13] Input pattern 3 (rw) */
    Ifx_Strict_32Bit IP4_VAL : 1;             /**< \brief [16:16] Input pattern 4 is a valid pattern. (rw) */
    Ifx_Strict_32Bit IP4_PAT : 3;             /**< \brief [19:17] Input pattern 4 (rw) */
    Ifx_Strict_32Bit IP5_VAL : 1;             /**< \brief [20:20] Input pattern 5 is a valid pattern. (rw) */
    Ifx_Strict_32Bit IP5_PAT : 3;             /**< \brief [23:21] Input pattern 5 (rw) */
    Ifx_Strict_32Bit IP6_VAL : 1;             /**< \brief [24:24] Input pattern 6 is a valid pattern. (rw) */
    Ifx_Strict_32Bit IP6_PAT : 3;             /**< \brief [27:25] Input pattern 6 (rw) */
    Ifx_Strict_32Bit IP7_VAL : 1;             /**< \brief [28:28] Input pattern 7 is a valid pattern. (rw) */
    Ifx_Strict_32Bit IP7_PAT : 3;             /**< \brief [31:29] Input pattern 7 (rw) */
} Ifx_GTM_SPE_PAT_Bits;

/** \\brief  SPE Revolution counter compare value */
typedef struct _Ifx_GTM_SPE_REV_CMP_Bits
{
    Ifx_Strict_32Bit REV_CMP : 24;            /**< \brief [23:0] Input signal revolution counter compare value (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_SPE_REV_CMP_Bits;

/** \\brief  SPE input revolution counter */
typedef struct _Ifx_GTM_SPE_REV_CNT_Bits
{
    Ifx_Strict_32Bit REV_CNT : 24;            /**< \brief [23:0] Input signal revolution counter (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_SPE_REV_CNT_Bits;

/** \\brief  TBU channel 0 base */
typedef struct _Ifx_GTM_TBU_CH0_BASE_Bits
{
    Ifx_Strict_32Bit BASE : 27;               /**< \brief [26:0] Time base value for channel 0. (rw) */
    Ifx_Strict_32Bit reserved_27 : 5;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH0_BASE_Bits;

/** \\brief  TBU channel 0 control */
typedef struct _Ifx_GTM_TBU_CH0_CTRL_Bits
{
    Ifx_Strict_32Bit LOW_RES : 1;             /**< \brief [0:0] TBU_CH0_BASE register resolution. (rw) */
    Ifx_Strict_32Bit CH_CLK_SRC : 3;          /**< \brief [3:1] Clock source for channel x (x:0...2) time base counter (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH0_CTRL_Bits;

/** \\brief  TBU Channel 1 Base Register */
typedef struct _Ifx_GTM_TBU_CH1_BASE_Bits
{
    Ifx_Strict_32Bit BASE : 24;               /**< \brief [23:0] Time base value for channel y (y: 1, 2) (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH1_BASE_Bits;

/** \\brief  TBU channel 1 control */
typedef struct _Ifx_GTM_TBU_CH1_CTRL_Bits
{
    Ifx_Strict_32Bit CH_MODE : 1;             /**< \brief [0:0] Channel mode (rw) */
    Ifx_Strict_32Bit CH_CLK_SRC : 3;          /**< \brief [3:1] Clock source for channel 1 time base counter (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH1_CTRL_Bits;

/** \\brief  TBU Channel 2 Base Register */
typedef struct _Ifx_GTM_TBU_CH2_BASE_Bits
{
    Ifx_Strict_32Bit BASE : 24;               /**< \brief [23:0] Time base value for channel y (y: 1, 2) (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH2_BASE_Bits;

/** \\brief  TBU channel 2 control */
typedef struct _Ifx_GTM_TBU_CH2_CTRL_Bits
{
    Ifx_Strict_32Bit CH_MODE : 1;             /**< \brief [0:0] Channel mode (rw) */
    Ifx_Strict_32Bit CH_CLK_SRC : 3;          /**< \brief [3:1] Clock source for channel 2 time base counter (rw) */
    Ifx_Strict_32Bit reserved_4 : 28;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH2_CTRL_Bits;

/** \\brief  TBU channel 3 base */
typedef struct _Ifx_GTM_TBU_CH3_BASE_Bits
{
    Ifx_Strict_32Bit BASE : 24;               /**< \brief [23:0] Time base value for channel 3 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH3_BASE_Bits;

/** \\brief  TBU channel 3 base captured */
typedef struct _Ifx_GTM_TBU_CH3_BASE_CAPTURE_Bits
{
    Ifx_Strict_32Bit BASE_CAPTURE : 24;       /**< \brief [23:0] Captured value of time base channel 1 or 2 (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH3_BASE_CAPTURE_Bits;

/** \\brief  TBU channel 3 modulo value */
typedef struct _Ifx_GTM_TBU_CH3_BASE_MARK_Bits
{
    Ifx_Strict_32Bit BASE_MARK : 24;          /**< \brief [23:0] Modulo value for channel 3 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH3_BASE_MARK_Bits;

/** \\brief  TBU channel 3 control */
typedef struct _Ifx_GTM_TBU_CH3_CTRL_Bits
{
    Ifx_Strict_32Bit CH_MODE : 1;             /**< \brief [0:0] Channel mode (r) */
    Ifx_Strict_32Bit reserved_1 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit USE_CH2 : 1;             /**< \brief [4:4] Channel selector for modulo counter (rw) */
    Ifx_Strict_32Bit reserved_5 : 27;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CH3_CTRL_Bits;

/** \\brief  TBU global channel enable */
typedef struct _Ifx_GTM_TBU_CHEN_Bits
{
    Ifx_Strict_32Bit ENDIS_CH0 : 2;           /**< \brief [1:0] TBU channel 0 enable/disable control (rw) */
    Ifx_Strict_32Bit ENDIS_CH1 : 2;           /**< \brief [3:2] TBU channel 1 enable/disable control (rw) */
    Ifx_Strict_32Bit ENDIS_CH2 : 2;           /**< \brief [5:4] TBU channel 2 enable/disable control (rw) */
    Ifx_Strict_32Bit ENDIS_CH3 : 2;           /**< \brief [7:6] TBU channel 3 enable/disable control (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_TBU_CHEN_Bits;

/** \\brief  GTM TIM   module AUX_IN source selection register */
typedef struct _Ifx_GTM_TIM_AUX_IN_SRC_Bits
{
    Ifx_Strict_32Bit SRC_CH0 : 1;             /**< \brief [0:0] Defines AUX_IN source of TIM[i] channel 0 (rw) */
    Ifx_Strict_32Bit SRC_CH1 : 1;             /**< \brief [1:1] Defines AUX_IN source of TIM[i] channel 1 (rw) */
    Ifx_Strict_32Bit SRC_CH2 : 1;             /**< \brief [2:2] Defines AUX_IN source of TIM[i] channel 2 (rw) */
    Ifx_Strict_32Bit SRC_CH3 : 1;             /**< \brief [3:3] Defines AUX_IN source of TIM[i] channel 3 (rw) */
    Ifx_Strict_32Bit SRC_CH4 : 1;             /**< \brief [4:4] Defines AUX_IN source of TIM[i] channel 4 (rw) */
    Ifx_Strict_32Bit SRC_CH5 : 1;             /**< \brief [5:5] Defines AUX_IN source of TIM[i] channel 5 (rw) */
    Ifx_Strict_32Bit SRC_CH6 : 1;             /**< \brief [6:6] Defines AUX_IN source of TIM[i] channel 6 (rw) */
    Ifx_Strict_32Bit SRC_CH7 : 1;             /**< \brief [7:7] Defines AUX_IN source of TIM[i] channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 8;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SEL_OUT_N_CH0 : 1;       /**< \brief [16:16] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 0 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH1 : 1;       /**< \brief [17:17] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 1 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH2 : 1;       /**< \brief [18:18] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 2 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH3 : 1;       /**< \brief [19:19] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 3 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH4 : 1;       /**< \brief [20:20] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 4 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH5 : 1;       /**< \brief [21:21] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 5 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH6 : 1;       /**< \brief [22:22] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 6 (rw) */
    Ifx_Strict_32Bit SEL_OUT_N_CH7 : 1;       /**< \brief [23:23] Use DTM_OUT or DTM_OUT_N signals as AUX_IN source of TIM[i] channel 7 (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_AUX_IN_SRC_Bits;

/** \\brief  TIM channel 0 SMU counter register */
typedef struct _Ifx_GTM_TIM_CH_CNT_Bits
{
    Ifx_Strict_32Bit CNT : 24;                /**< \brief [23:0] Actual SMU counter value (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_CNT_Bits;

/** \\brief  TIM channel 0 SMU shadow counter register */
typedef struct _Ifx_GTM_TIM_CH_CNTS_Bits
{
    Ifx_Strict_32Bit CNTS : 24;               /**< \brief [23:0] Counter shadow register (rw) */
    Ifx_Strict_32Bit ECNT : 8;                /**< \brief [31:24] Edge counter (r) */
} Ifx_GTM_TIM_CH_CNTS_Bits;

/** \\brief  TIM channel 0 control register */
typedef struct _Ifx_GTM_TIM_CH_CTRL_Bits
{
    Ifx_Strict_32Bit TIM_EN : 1;              /**< \brief [0:0] TIM channel x enable (rw) */
    Ifx_Strict_32Bit TIM_MODE : 3;            /**< \brief [3:1] TIM channel x mode (rw) */
    Ifx_Strict_32Bit OSM : 1;                 /**< \brief [4:4] One-shot mode (rw) */
    Ifx_Strict_32Bit ARU_EN : 1;              /**< \brief [5:5] GPR0 and GPR1 register values routed to ARU (rw) */
    Ifx_Strict_32Bit CICTRL : 1;              /**< \brief [6:6] Channel Input Control. (rw) */
    Ifx_Strict_32Bit TBU0_SEL : 1;            /**< \brief [7:7] TBU_TS0 bits input select for TIM0_CH[x]_GPRz (z: 0, 1) (rw) */
    Ifx_Strict_32Bit GPR0_SEL : 2;            /**< \brief [9:8] Selection for GPR0 register (rw) */
    Ifx_Strict_32Bit GPR1_SEL : 2;            /**< \brief [11:10] Selection for GPR1 register (rw) */
    Ifx_Strict_32Bit CNTS_SEL : 1;            /**< \brief [12:12] Selection for CNTS register (rw) */
    Ifx_Strict_32Bit DSL : 1;                 /**< \brief [13:13] Signal level control (rw) */
    Ifx_Strict_32Bit ISL : 1;                 /**< \brief [14:14] Ignore signal level (rw) */
    Ifx_Strict_32Bit ECNT_RESET : 1;          /**< \brief [15:15] Enables resetting of counter in certain modes (rw) */
    Ifx_Strict_32Bit FLT_EN : 1;              /**< \brief [16:16] Filter enable for channel x (rw) */
    Ifx_Strict_32Bit FLT_CNT_FRQ : 2;         /**< \brief [18:17] Filter counter frequency select (rw) */
    Ifx_Strict_32Bit EXT_CAP_EN : 1;          /**< \brief [19:19] Enables external capture mode (rw) */
    Ifx_Strict_32Bit FLT_MODE_RE : 1;         /**< \brief [20:20] Filter mode for rising edge (rw) */
    Ifx_Strict_32Bit FLT_CTR_RE : 1;          /**< \brief [21:21] Filter counter mode for rising edge (rw) */
    Ifx_Strict_32Bit FLT_MODE_FE : 1;         /**< \brief [22:22] Filter mode for falling edge (rw) */
    Ifx_Strict_32Bit FLT_CTR_FE : 1;          /**< \brief [23:23] Filter counter mode for falling edge (rw) */
    Ifx_Strict_32Bit CLK_SEL : 3;             /**< \brief [26:24] CMU clock source select for channel (rw) */
    Ifx_Strict_32Bit FR_ECNT_OFL : 1;         /**< \brief [27:27] Extended Edge counter overflow behavior (rw) */
    Ifx_Strict_32Bit EGPR0_SEL : 1;           /**< \brief [28:28] Extension of GPR0_SEL bit field (rw) */
    Ifx_Strict_32Bit EGPR1_SEL : 1;           /**< \brief [29:29] Extension of GPR1_SEL bit field (rw) */
    Ifx_Strict_32Bit TOCTRL : 2;              /**< \brief [31:30] Timeout control (rw) */
} Ifx_GTM_TIM_CH_CTRL_Bits;

/** \\brief  TIM channel 0 SMU edge counter register */
typedef struct _Ifx_GTM_TIM_CH_ECNT_Bits
{
    Ifx_Strict_32Bit ECNT : 16;               /**< \brief [15:0] Edge counter (r) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_ECNT_Bits;

/** \\brief  TIM channel 0 extended control register */
typedef struct _Ifx_GTM_TIM_CH_ECTRL_Bits
{
    Ifx_Strict_32Bit EXT_CAP_SRC : 4;         /**< \brief [3:0] Defines selected source for triggering the EXT_CAPTURE functionality (rw) */
    Ifx_Strict_32Bit reserved_4 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit USE_PREV_TDU_IN : 1;     /**< \brief [5:5] Select input data source for TDU. (rw) */
    Ifx_Strict_32Bit TODET_IRQ_SRC : 2;       /**< \brief [7:6] selection of source for TODET_IRQ (rw) */
    Ifx_Strict_32Bit TDU_START : 3;           /**< \brief [10:8] Defines condition which will start the TDU unit. (rw) */
    Ifx_Strict_32Bit reserved_11 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TDU_STOP : 3;            /**< \brief [14:12] Defines condition which will stop the TDU unit (rw) */
    Ifx_Strict_32Bit reserved_15 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TDU_RESYNC : 4;          /**< \brief [19:16] Defines condition which will resynchronize the TDU unit (rw) */
    Ifx_Strict_32Bit reserved_20 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit USE_LUT : 2;             /**< \brief [23:22] generate Filter input by lookup table (rw) */
    Ifx_Strict_32Bit EFLT_CTR_RE : 1;         /**< \brief [24:24] Extension of bit field FLT_CTR_RE (rw) */
    Ifx_Strict_32Bit EFLT_CTR_FE : 1;         /**< \brief [25:25] Extension of bit field FLT_CTR_FE (rw) */
    Ifx_Strict_32Bit reserved_26 : 2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SWAP_CAPTURE : 1;        /**< \brief [28:28] swap point of time of capturing CNTS and GPR1 (rw) */
    Ifx_Strict_32Bit IMM_START : 1;           /**< \brief [29:29] Start immediately the measurement (rw) */
    Ifx_Strict_32Bit ECLK_SEL : 1;            /**< \brief [30:30] Extension of bit field CLK_SEL (rw) */
    Ifx_Strict_32Bit USE_PREV_CH_IN : 1;      /**< \brief [31:31] Select input data source for TIM channel. (rw) */
} Ifx_GTM_TIM_CH_ECTRL_Bits;

/** \\brief  TIM channel 0 error interrupt enable register */
typedef struct _Ifx_GTM_TIM_CH_EIRQ_EN_Bits
{
    Ifx_Strict_32Bit NEWVAL_EIRQ_EN : 1;      /**< \brief [0:0] TIM_NEWVALx_EIRQ error interrupt enable (rw) */
    Ifx_Strict_32Bit ECNTOFL_EIRQ_EN : 1;     /**< \brief [1:1] TIM_ECNTOFLx_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit CNTOFL_EIRQ_EN : 1;      /**< \brief [2:2] TIM_CNTOFLx_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit GPROFL_EIRQ_EN : 1;      /**< \brief [3:3] TIM_GPROFL_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit TODET_EIRQ_EN : 1;       /**< \brief [4:4] TIM_TODETx_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit GLITCHDET_EIRQ_EN : 1;   /**< \brief [5:5] TIM_GLITCHDETx_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_6 : 26;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_EIRQ_EN_Bits;

/** \\brief  TIM channel 0 filter parameter 1 register */
typedef struct _Ifx_GTM_TIM_CH_FLT_FE_Bits
{
    Ifx_Strict_32Bit FLT_FE : 24;             /**< \brief [23:0] Filter parameter for falling edge (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_FLT_FE_Bits;

/** \\brief  TIM channel 0 filter parameter 0 register */
typedef struct _Ifx_GTM_TIM_CH_FLT_RE_Bits
{
    Ifx_Strict_32Bit FLT_RE : 24;             /**< \brief [23:0] Filter parameter for rising edge (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_FLT_RE_Bits;

/** \\brief  TIM channel 0 general purpose 0 register */
typedef struct _Ifx_GTM_TIM_CH_GPR0_Bits
{
    Ifx_Strict_32Bit GPR0 : 24;               /**< \brief [23:0] Input signal characteristic parameter 0 (r) */
    Ifx_Strict_32Bit ECNT : 8;                /**< \brief [31:24] Edge counter (r) */
} Ifx_GTM_TIM_CH_GPR0_Bits;

/** \\brief  TIM channel 0 general purpose 1 register */
typedef struct _Ifx_GTM_TIM_CH_GPR1_Bits
{
    Ifx_Strict_32Bit GPR1 : 24;               /**< \brief [23:0] Input signal characteristic parameter 1 (rw) */
    Ifx_Strict_32Bit ECNT : 8;                /**< \brief [31:24] Edge counter (r) */
} Ifx_GTM_TIM_CH_GPR1_Bits;

/** \\brief  TIM channel 0 interrupt enable register */
typedef struct _Ifx_GTM_TIM_CH_IRQ_EN_Bits
{
    Ifx_Strict_32Bit NEWVAL_IRQ_EN : 1;       /**< \brief [0:0] TIM_NEWVALx_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit ECNTOFL_IRQ_EN : 1;      /**< \brief [1:1] TIM_ECNTOFLx_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit CNTOFL_IRQ_EN : 1;       /**< \brief [2:2] TIM_CNTOFLx_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit GPROFL_IRQ_EN : 1;       /**< \brief [3:3] TIM_GPROFL_IRQ interrupt enable, see bit 0 (rw) */
    Ifx_Strict_32Bit TODET_IRQ_EN : 1;        /**< \brief [4:4] TIM_TODETx_IRQ interrupt enable, see bit 0 (rw) */
    Ifx_Strict_32Bit GLITCHDET_IRQ_EN : 1;    /**< \brief [5:5] TIM_GLITCHDETx_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_6 : 26;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_IRQ_EN_Bits;

/** \\brief  TIM channel 0 force interrupt register */
typedef struct _Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_NEWVAL : 1;          /**< \brief [0:0] Trigger NEWVAL bit in TIM_CHx_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_ECNTOFL : 1;         /**< \brief [1:1] Trigger ECNTOFL bit in TIM_CHx_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_CNTOFL : 1;          /**< \brief [2:2] Trigger CNTOFL bit in TIM_CHx_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_GPROFL : 1;          /**< \brief [3:3] Trigger GPROFL bit in TIM_CH[x]_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_TODET : 1;           /**< \brief [4:4] Trigger TODET bit in TIM_CHx_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit TRG_GLITCHDET : 1;       /**< \brief [5:5] Trigger GLITCHDET bit in TIM_CHx_IRQ_NOTIFY register by software (rw) */
    Ifx_Strict_32Bit reserved_6 : 26;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits;

/** \\brief  TIM channel 0 interrupt mode configuration register */
typedef struct _Ifx_GTM_TIM_CH_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_IRQ_MODE_Bits;

/** \\brief  TIM channel 0 interrupt notification register */
typedef struct _Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit NEWVAL : 1;              /**< \brief [0:0] New measurement value detected by in channel x (rw) */
    Ifx_Strict_32Bit ECNTOFL : 1;             /**< \brief [1:1] counter overflow of channel x (rw) */
    Ifx_Strict_32Bit CNTOFL : 1;              /**< \brief [2:2] SMU CNT counter overflow of channel x (rw) */
    Ifx_Strict_32Bit GPROFL : 1;              /**< \brief [3:3] and GPR1 data overflow (rw) */
    Ifx_Strict_32Bit TODET : 1;               /**< \brief [4:4] Timeout reached for input signal of channel x (rw) */
    Ifx_Strict_32Bit GLITCHDET : 1;           /**< \brief [5:5] Glitch detected on channel x, (x:0...m-1). (rw) */
    Ifx_Strict_32Bit reserved_6 : 26;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits;

/** \\brief  TIM channel 0 TDU counter register */
typedef struct _Ifx_GTM_TIM_CH_TDUC_Bits
{
    Ifx_Strict_32Bit TO_CNT : 8;              /**< \brief [7:0] Current Timeout value slice0 for channel x (rw) */
    Ifx_Strict_32Bit TO_CNT1 : 8;             /**< \brief [15:8] Current Timeout value slice1 for channel x (rw) */
    Ifx_Strict_32Bit TO_CNT2 : 8;             /**< \brief [23:16] Current Timeout value slice2 for channel x (rw) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_TDUC_Bits;

/** \\brief  TIM channel 0 TDU control register */
typedef struct _Ifx_GTM_TIM_CH_TDUV_Bits
{
    Ifx_Strict_32Bit TOV : 8;                 /**< \brief [7:0] Time out compare value slice0 for channel x (rw) */
    Ifx_Strict_32Bit TOV1 : 8;                /**< \brief [15:8] Time out compare value slice1 for channel x (rw) */
    Ifx_Strict_32Bit TOV2 : 8;                /**< \brief [23:16] Time out compare value slice2 for channel x (rw) */
    Ifx_Strict_32Bit SLICING : 2;             /**< \brief [25:24] Cascading of counter slices (rw) */
    Ifx_Strict_32Bit TCS_USE_SAMPLE_EVT : 1;  /**< \brief [26:26] Use tdu_sample_evt as Timeout Clock (rw) */
    Ifx_Strict_32Bit TDU_SAME_CNT_CLK : 1;    /**< \brief [27:27] Define clocking of TO_CNT, TO_CNT1. (rw) */
    Ifx_Strict_32Bit TCS : 3;                 /**< \brief [30:28] Timeout Clock selection (rw) */
    Ifx_Strict_32Bit reserved_31 : 1;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_CH_TDUV_Bits;

/** \\brief  TIM channel x AUX IN source selection register */
typedef struct _Ifx_GTM_TIM_IN_SRC_Bits
{
    Ifx_Strict_32Bit VAL_0 : 2;               /**< \brief [1:0] Value to be fed to Channel 0 (rw) */
    Ifx_Strict_32Bit MODE_0 : 2;              /**< \brief [3:2] Input source to Channel 0 (rw) */
    Ifx_Strict_32Bit VAL_1 : 2;               /**< \brief [5:4] Value to be fed to Channel 1 (rw) */
    Ifx_Strict_32Bit MODE_1 : 2;              /**< \brief [7:6] Input source to Channel 1 (rw) */
    Ifx_Strict_32Bit VAL_2 : 2;               /**< \brief [9:8] Value to be fed to Channel 2 (rw) */
    Ifx_Strict_32Bit MODE_2 : 2;              /**< \brief [11:10] Input source to Channel 2 (rw) */
    Ifx_Strict_32Bit VAL_3 : 2;               /**< \brief [13:12] Value to be fed to Channel 3 (rw) */
    Ifx_Strict_32Bit MODE_3 : 2;              /**< \brief [15:14] Input source to Channel 3 (rw) */
    Ifx_Strict_32Bit VAL_4 : 2;               /**< \brief [17:16] Value to be fed to Channel 4 (rw) */
    Ifx_Strict_32Bit MODE_4 : 2;              /**< \brief [19:18] Input source to Channel 4 (rw) */
    Ifx_Strict_32Bit VAL_5 : 2;               /**< \brief [21:20] Value to be fed to Channel 5 (rw) */
    Ifx_Strict_32Bit MODE_5 : 2;              /**< \brief [23:22] Input source to Channel 5 (rw) */
    Ifx_Strict_32Bit VAL_6 : 2;               /**< \brief [25:24] Value to be fed to Channel 6 (rw) */
    Ifx_Strict_32Bit MODE_6 : 2;              /**< \brief [27:26] Input source to Channel 6 (rw) */
    Ifx_Strict_32Bit VAL_7 : 2;               /**< \brief [29:28] Value to be fed to Channel 7 (rw) */
    Ifx_Strict_32Bit MODE_7 : 2;              /**< \brief [31:30] Input source to Channel 7 (rw) */
} Ifx_GTM_TIM_IN_SRC_Bits;

/** \\brief  TIM input value observation register */
typedef struct _Ifx_GTM_TIM_INP_VAL_Bits
{
    Ifx_Strict_32Bit F_OUT : 8;               /**< \brief [7:0] Signals after TIM FLT unit (r) */
    Ifx_Strict_32Bit F_IN : 8;                /**< \brief [15:8] Signals after INPSRC selection, before TIM FLT unit (r) */
    Ifx_Strict_32Bit TIM_IN : 8;              /**< \brief [23:16] Signals after TIM input signal synchronization (r) */
    Ifx_Strict_32Bit reserved_24 : 8;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_INP_VAL_Bits;

/** \\brief  TIM global software reset register */
typedef struct _Ifx_GTM_TIM_RST_Bits
{
    Ifx_Strict_32Bit RST_CH0 : 1;             /**< \brief [0:0] Software reset of channel 0 (rw) */
    Ifx_Strict_32Bit RST_CH1 : 1;             /**< \brief [1:1] Software reset of channel 1 (rw) */
    Ifx_Strict_32Bit RST_CH2 : 1;             /**< \brief [2:2] Software reset of channel 2 (rw) */
    Ifx_Strict_32Bit RST_CH3 : 1;             /**< \brief [3:3] Software reset of channel 3 (rw) */
    Ifx_Strict_32Bit RST_CH4 : 1;             /**< \brief [4:4] Software reset of channel 4 (rw) */
    Ifx_Strict_32Bit RST_CH5 : 1;             /**< \brief [5:5] Software reset of channel 5 (rw) */
    Ifx_Strict_32Bit RST_CH6 : 1;             /**< \brief [6:6] Software reset of channel 6 (rw) */
    Ifx_Strict_32Bit RST_CH7 : 1;             /**< \brief [7:7] Software reset of channel 7 (rw) */
    Ifx_Strict_32Bit reserved_8 : 24;         /**< \brief \internal Reserved */
} Ifx_GTM_TIM_RST_Bits;

/** \\brief  TOM channel 0 CCU0 compare register */
typedef struct _Ifx_GTM_TOM_CH_CM0_Bits
{
    Ifx_Strict_32Bit CM0 : 16;                /**< \brief [15:0] TOM CCU0 compare register (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_CM0_Bits;

/** \\brief  TOM channel 0 CCU1 compare register */
typedef struct _Ifx_GTM_TOM_CH_CM1_Bits
{
    Ifx_Strict_32Bit CM1 : 16;                /**< \brief [15:0] TOM CCU1 compare register (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_CM1_Bits;

/** \\brief  TOM channel 0 CCU0 counter register */
typedef struct _Ifx_GTM_TOM_CH_CN0_Bits
{
    Ifx_Strict_32Bit CN0 : 16;                /**< \brief [15:0] TOM CCU0 counter register (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_CN0_Bits;

/** \\brief  TOM channel 0 control register */
typedef struct _Ifx_GTM_TOM_CH_CTRL_Bits
{
    Ifx_Strict_32Bit reserved_0 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SR0_TRIG : 1;            /**< \brief [7:7] SR0 is used to generate a trigger on output TOM[i]_CH[x]_OUT_T if equal to CN0. (rw) */
    Ifx_Strict_32Bit reserved_8 : 3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SL : 1;                  /**< \brief [11:11] Signal level for duty cycle (rw) */
    Ifx_Strict_32Bit CLK_SRC_SR : 3;          /**< \brief [14:12] Clock source select for channel (rw) */
    Ifx_Strict_32Bit ECLK_SRC : 1;            /**< \brief [15:15] Extend CLK_SRC (rw) */
    Ifx_Strict_32Bit reserved_16 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TRIG_PULSE : 1;          /**< \brief [17:17] Trigger output pulse length of one SYS_CLK period (rw) */
    Ifx_Strict_32Bit UDMODE : 2;              /**< \brief [19:18] Up-down counter mode (rw) */
    Ifx_Strict_32Bit RST_CCU0 : 1;            /**< \brief [20:20] Reset source of CCU0 (rw) */
    Ifx_Strict_32Bit OSM_TRIG : 1;            /**< \brief [21:21] Enable trigger of one-shot pulse by trigger signal OSM_TRIG (rw) */
    Ifx_Strict_32Bit EXT_TRIG : 1;            /**< \brief [22:22] Select TIM_EXT_CAPTURE(x) as trigger signal (rw) */
    Ifx_Strict_32Bit EXTTRIGOUT : 1;          /**< \brief [23:23] TIM_EXT_CAPTURE(x) as potential output signal TRIG_[x] (rw) */
    Ifx_Strict_32Bit TRIGOUT : 1;             /**< \brief [24:24] Trigger output selection (output signal TRIG_[x]) of module TOM_CH[x] (rw) */
    Ifx_Strict_32Bit SPE_TRIG : 1;            /**< \brief [25:25] SPE trigger to reset CN0 (rw) */
    Ifx_Strict_32Bit OSM : 1;                 /**< \brief [26:26] One-shot mode (rw) */
    Ifx_Strict_32Bit BITREV : 1;              /**< \brief [27:27] Bit-reversing of output of counter register CN0. (rw) */
    Ifx_Strict_32Bit SPEM : 1;                /**< \brief [28:28] SPE output mode enable for channel. (rw) */
    Ifx_Strict_32Bit GCM : 1;                 /**< \brief [29:29] Gated Counter Mode enable (rw) */
    Ifx_Strict_32Bit reserved_30 : 1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FREEZE : 1;              /**< \brief [31:31] FREEZE (rw) */
} Ifx_GTM_TOM_CH_CTRL_Bits;

/** \\brief  TOM channel 0 interrupt enable register */
typedef struct _Ifx_GTM_TOM_CH_IRQ_EN_Bits
{
    Ifx_Strict_32Bit CCU0TC_IRQ_EN : 1;       /**< \brief [0:0] TOM_CCU0TC_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit CCU1TC_IRQ_EN : 1;       /**< \brief [1:1] TOM_CCU1TC_IRQ interrupt enable (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_IRQ_EN_Bits;

/** \\brief  TOM channel 0 force interrupt register */
typedef struct _Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits
{
    Ifx_Strict_32Bit TRG_CCU0TC0 : 1;         /**< \brief [0:0] Trigger TOM_CCU0TC0_IRQ interrupt by software (rw) */
    Ifx_Strict_32Bit TRG_CCU1TC0 : 1;         /**< \brief [1:1] Trigger TOM_CCU1TC0_IRQ interrupt by software (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits;

/** \\brief  TOM channel 0 interrupt mode register */
typedef struct _Ifx_GTM_TOM_CH_IRQ_MODE_Bits
{
    Ifx_Strict_32Bit IRQ_MODE : 2;            /**< \brief [1:0] IRQ mode selection (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_IRQ_MODE_Bits;

/** \\brief  TOM channel 0 interrupt notification register */
typedef struct _Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits
{
    Ifx_Strict_32Bit CCU0TC : 1;              /**< \brief [0:0] CCU0 Trigger condition interrupt for channel x (rw) */
    Ifx_Strict_32Bit CCU1TC : 1;              /**< \brief [1:1] CCU1 Trigger condition interrupt for channel x (rw) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits;

/** \\brief  TOM channel 0 CCU0 compare shadow register */
typedef struct _Ifx_GTM_TOM_CH_SR0_Bits
{
    Ifx_Strict_32Bit SR0 : 16;                /**< \brief [15:0] TOM channel x shadow register SR0 for update of compare register CM0 (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_SR0_Bits;

/** \\brief  TOM channel 0 CCU1 compare shadow register */
typedef struct _Ifx_GTM_TOM_CH_SR1_Bits
{
    Ifx_Strict_32Bit SR1 : 16;                /**< \brief [15:0] TOM channel x shadow register SR1 for update of compare register CM1 (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_SR1_Bits;

/** \\brief  TOM channel 0 status register */
typedef struct _Ifx_GTM_TOM_CH_STAT_Bits
{
    Ifx_Strict_32Bit OL : 1;                  /**< \brief [0:0] Output level of output TOM_OUT(x) (r) */
    Ifx_Strict_32Bit reserved_1 : 31;         /**< \brief \internal Reserved */
} Ifx_GTM_TOM_CH_STAT_Bits;

/** \\brief  GTM TOM   output level */
typedef struct _Ifx_GTM_TOM_OUT_Bits
{
    Ifx_Strict_32Bit TOM_OUT : 16;            /**< \brief [15:0] Output level snapshot of TOM[i]_OUT all channels (r) */
    Ifx_Strict_32Bit TOM_OUT_N : 16;          /**< \brief [31:16] Output level snapshot of TOM[i]_OUT_N all channels (r) */
} Ifx_GTM_TOM_OUT_Bits;

/** \\brief  TOM TGC 0 action time base register */
typedef struct _Ifx_GTM_TOM_TGC0_ACT_TB_Bits
{
    Ifx_Strict_32Bit ACT_TB : 24;             /**< \brief [23:0] Time base value (rw) */
    Ifx_Strict_32Bit TB_TRIG : 1;             /**< \brief [24:24] Set trigger request (rw) */
    Ifx_Strict_32Bit TBU_SEL : 2;             /**< \brief [26:25] Selection of time base used for comparison (rw) */
    Ifx_Strict_32Bit reserved_27 : 5;         /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC0_ACT_TB_Bits;

/** \\brief  TOM TGC 0 enable/disable control register */
typedef struct _Ifx_GTM_TOM_TGC0_ENDIS_CTRL_Bits
{
    Ifx_Strict_32Bit ENDIS_CTRL0 : 2;         /**< \brief [1:0] TOM channel 0 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL1 : 2;         /**< \brief [3:2] TOM channel 1 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL2 : 2;         /**< \brief [5:4] TOM channel 2 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL3 : 2;         /**< \brief [7:6] TOM channel 3 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL4 : 2;         /**< \brief [9:8] TOM channel 4 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL5 : 2;         /**< \brief [11:10] TOM channel 5 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL6 : 2;         /**< \brief [13:12] TOM channel 6 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL7 : 2;         /**< \brief [15:14] TOM channel 7 enable/disable update value (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC0_ENDIS_CTRL_Bits;

/** \\brief  TOM TGC 0 enable/disable status register */
typedef struct _Ifx_GTM_TOM_TGC0_ENDIS_STAT_Bits
{
    Ifx_Strict_32Bit ENDIS_STAT0 : 2;         /**< \brief [1:0] TOM channel 0 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT1 : 2;         /**< \brief [3:2] TOM channel 1 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT2 : 2;         /**< \brief [5:4] TOM channel 2 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT3 : 2;         /**< \brief [7:6] TOM channel 3 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT4 : 2;         /**< \brief [9:8] TOM channel 4 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT5 : 2;         /**< \brief [11:10] TOM channel 5 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT6 : 2;         /**< \brief [13:12] TOM channel 6 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT7 : 2;         /**< \brief [15:14] TOM channel 7 enable/disable update value (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC0_ENDIS_STAT_Bits;

/** \\brief  TOM TGC 0 force update control register */
typedef struct _Ifx_GTM_TOM_TGC0_FUPD_CTRL_Bits
{
    Ifx_Strict_32Bit FUPD_CTRL0 : 2;          /**< \brief [1:0] Force update of TOM channel 0 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL1 : 2;          /**< \brief [3:2] Force update of TOM channel 1 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL2 : 2;          /**< \brief [5:4] Force update of TOM channel 2 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL3 : 2;          /**< \brief [7:6] Force update of TOM channel 3 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL4 : 2;          /**< \brief [9:8] Force update of TOM channel 4 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL5 : 2;          /**< \brief [11:10] Force update of TOM channel 5 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL6 : 2;          /**< \brief [13:12] Force update of TOM channel 6 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL7 : 2;          /**< \brief [15:14] Force update of TOM channel 7 operation registers (rw) */
    Ifx_Strict_32Bit RSTCN0_CH0 : 2;          /**< \brief [17:16] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH1 : 2;          /**< \brief [19:18] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH2 : 2;          /**< \brief [21:20] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH3 : 2;          /**< \brief [23:22] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH4 : 2;          /**< \brief [25:24] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH5 : 2;          /**< \brief [27:26] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH6 : 2;          /**< \brief [29:28] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH7 : 2;          /**< \brief [31:30] Reset CN0 of channel 0 on force update event (rw) */
} Ifx_GTM_TOM_TGC0_FUPD_CTRL_Bits;

/** \\brief  TOM TGC 0 global control register */
typedef struct _Ifx_GTM_TOM_TGC0_GLB_CTRL_Bits
{
    Ifx_Strict_32Bit HOST_TRIG : 1;           /**< \brief [0:0] Trigger request signal (see TGC0, TGC1) to update the register ENDIS_STAT and OUTEN_STAT (w) */
    Ifx_Strict_32Bit reserved_1 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RST_CH0 : 1;             /**< \brief [8:8] Software reset of channel 0 (w) */
    Ifx_Strict_32Bit RST_CH1 : 1;             /**< \brief [9:9] Software reset of channel 1 (w) */
    Ifx_Strict_32Bit RST_CH2 : 1;             /**< \brief [10:10] Software reset of channel 2 (w) */
    Ifx_Strict_32Bit RST_CH3 : 1;             /**< \brief [11:11] Software reset of channel 3 (w) */
    Ifx_Strict_32Bit RST_CH4 : 1;             /**< \brief [12:12] Software reset of channel 4 (w) */
    Ifx_Strict_32Bit RST_CH5 : 1;             /**< \brief [13:13] Software reset of channel 5 (w) */
    Ifx_Strict_32Bit RST_CH6 : 1;             /**< \brief [14:14] Software reset of channel 6 (w) */
    Ifx_Strict_32Bit RST_CH7 : 1;             /**< \brief [15:15] Software reset of channel 7 (w) */
    Ifx_Strict_32Bit UPEN_CTRL0 : 2;          /**< \brief [17:16] TOM channel 0 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL1 : 2;          /**< \brief [19:18] TOM channel 1 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL2 : 2;          /**< \brief [21:20] TOM channel 2 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL3 : 2;          /**< \brief [23:22] TOM channel 3 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL4 : 2;          /**< \brief [25:24] TOM channel 4 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL5 : 2;          /**< \brief [27:26] TOM channel 5 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL6 : 2;          /**< \brief [29:28] TOM channel 6 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL7 : 2;          /**< \brief [31:30] TOM channel 7 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
} Ifx_GTM_TOM_TGC0_GLB_CTRL_Bits;

/** \\brief  TOM TGC 0 internal trigger control register */
typedef struct _Ifx_GTM_TOM_TGC0_INT_TRIG_Bits
{
    Ifx_Strict_32Bit INT_TRIG0 : 2;           /**< \brief [1:0] Select input signal TRIG_0 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG1 : 2;           /**< \brief [3:2] Select input signal TRIG_1 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG2 : 2;           /**< \brief [5:4] Select input signal TRIG_2 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG3 : 2;           /**< \brief [7:6] Select input signal TRIG_3 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG4 : 2;           /**< \brief [9:8] Select input signal TRIG_4 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG5 : 2;           /**< \brief [11:10] Select input signal TRIG_5 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG6 : 2;           /**< \brief [13:12] Select input signal TRIG_6 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG7 : 2;           /**< \brief [15:14] Select input signal TRIG_7 as a trigger source (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC0_INT_TRIG_Bits;

/** \\brief  TOM TGC 0 output enable control register */
typedef struct _Ifx_GTM_TOM_TGC0_OUTEN_CTRL_Bits
{
    Ifx_Strict_32Bit OUTEN_CTRL0 : 2;         /**< \brief [1:0] Output TOM[i]_CH0_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL1 : 2;         /**< \brief [3:2] Output TOM[i]_CH1_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL2 : 2;         /**< \brief [5:4] Output TOM[i]_CH2_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL3 : 2;         /**< \brief [7:6] Output TOM[i]_CH3_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL4 : 2;         /**< \brief [9:8] Output TOM[i]_CH4_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL5 : 2;         /**< \brief [11:10] Output TOM[i]_CH5_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL6 : 2;         /**< \brief [13:12] Output TOM[i]_CH6_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL7 : 2;         /**< \brief [15:14] Output TOM[i]_CH7_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC0_OUTEN_CTRL_Bits;

/** \\brief  TOM TGC 0 output enable status register */
typedef struct _Ifx_GTM_TOM_TGC0_OUTEN_STAT_Bits
{
    Ifx_Strict_32Bit OUTEN_STAT0 : 2;         /**< \brief [1:0] Control/status of output TOM[i]_CH0_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT1 : 2;         /**< \brief [3:2] Control/status of output TOM[i]_CH1_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT2 : 2;         /**< \brief [5:4] Control/status of output TOM[i]_CH2_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT3 : 2;         /**< \brief [7:6] Control/status of output TOM[i]_CH3_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT4 : 2;         /**< \brief [9:8] Control/status of output TOM[i]_CH4_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT5 : 2;         /**< \brief [11:10] Control/status of output TOM[i]_CH5_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT6 : 2;         /**< \brief [13:12] Control/status of output TOM[i]_CH6_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT7 : 2;         /**< \brief [15:14] Control/status of output TOM[i]_CH7_OUT (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC0_OUTEN_STAT_Bits;

/** \\brief  TOM TGC 1 action time base register */
typedef struct _Ifx_GTM_TOM_TGC1_ACT_TB_Bits
{
    Ifx_Strict_32Bit ACT_TB : 24;             /**< \brief [23:0] Time base value (rw) */
    Ifx_Strict_32Bit TB_TRIG : 1;             /**< \brief [24:24] Set trigger request (rw) */
    Ifx_Strict_32Bit TBU_SEL : 2;             /**< \brief [26:25] Selection of time base used for comparison (rw) */
    Ifx_Strict_32Bit reserved_27 : 5;         /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC1_ACT_TB_Bits;

/** \\brief  TOM TGC 1 enable/disable control register */
typedef struct _Ifx_GTM_TOM_TGC1_ENDIS_CTRL_Bits
{
    Ifx_Strict_32Bit ENDIS_CTRL0 : 2;         /**< \brief [1:0] TOM channel 0 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL1 : 2;         /**< \brief [3:2] TOM channel 1 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL2 : 2;         /**< \brief [5:4] TOM channel 2 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL3 : 2;         /**< \brief [7:6] TOM channel 3 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL4 : 2;         /**< \brief [9:8] TOM channel 4 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL5 : 2;         /**< \brief [11:10] TOM channel 5 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL6 : 2;         /**< \brief [13:12] TOM channel 6 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_CTRL7 : 2;         /**< \brief [15:14] TOM channel 7 enable/disable update value (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC1_ENDIS_CTRL_Bits;

/** \\brief  TOM TGC 1 enable/disable status register */
typedef struct _Ifx_GTM_TOM_TGC1_ENDIS_STAT_Bits
{
    Ifx_Strict_32Bit ENDIS_STAT0 : 2;         /**< \brief [1:0] TOM channel 0 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT1 : 2;         /**< \brief [3:2] TOM channel 1 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT2 : 2;         /**< \brief [5:4] TOM channel 2 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT3 : 2;         /**< \brief [7:6] TOM channel 3 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT4 : 2;         /**< \brief [9:8] TOM channel 4 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT5 : 2;         /**< \brief [11:10] TOM channel 5 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT6 : 2;         /**< \brief [13:12] TOM channel 6 enable/disable update value (rw) */
    Ifx_Strict_32Bit ENDIS_STAT7 : 2;         /**< \brief [15:14] TOM channel 7 enable/disable update value (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC1_ENDIS_STAT_Bits;

/** \\brief  TOM TGC 1 force update control register */
typedef struct _Ifx_GTM_TOM_TGC1_FUPD_CTRL_Bits
{
    Ifx_Strict_32Bit FUPD_CTRL0 : 2;          /**< \brief [1:0] Force update of TOM channel 0 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL1 : 2;          /**< \brief [3:2] Force update of TOM channel 1 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL2 : 2;          /**< \brief [5:4] Force update of TOM channel 2 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL3 : 2;          /**< \brief [7:6] Force update of TOM channel 3 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL4 : 2;          /**< \brief [9:8] Force update of TOM channel 4 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL5 : 2;          /**< \brief [11:10] Force update of TOM channel 5 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL6 : 2;          /**< \brief [13:12] Force update of TOM channel 6 operation registers (rw) */
    Ifx_Strict_32Bit FUPD_CTRL7 : 2;          /**< \brief [15:14] Force update of TOM channel 7 operation registers (rw) */
    Ifx_Strict_32Bit RSTCN0_CH0 : 2;          /**< \brief [17:16] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH1 : 2;          /**< \brief [19:18] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH2 : 2;          /**< \brief [21:20] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH3 : 2;          /**< \brief [23:22] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH4 : 2;          /**< \brief [25:24] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH5 : 2;          /**< \brief [27:26] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH6 : 2;          /**< \brief [29:28] Reset CN0 of channel 0 on force update event (rw) */
    Ifx_Strict_32Bit RSTCN0_CH7 : 2;          /**< \brief [31:30] Reset CN0 of channel 0 on force update event (rw) */
} Ifx_GTM_TOM_TGC1_FUPD_CTRL_Bits;

/** \\brief  TOM TGC 1 global control register */
typedef struct _Ifx_GTM_TOM_TGC1_GLB_CTRL_Bits
{
    Ifx_Strict_32Bit HOST_TRIG : 1;           /**< \brief [0:0] Trigger request signal (see TGC0, TGC1) to update the register ENDIS_STAT and OUTEN_STAT (w) */
    Ifx_Strict_32Bit reserved_1 : 7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RST_CH0 : 1;             /**< \brief [8:8] Software reset of channel 0 (w) */
    Ifx_Strict_32Bit RST_CH1 : 1;             /**< \brief [9:9] Software reset of channel 1 (w) */
    Ifx_Strict_32Bit RST_CH2 : 1;             /**< \brief [10:10] Software reset of channel 2 (w) */
    Ifx_Strict_32Bit RST_CH3 : 1;             /**< \brief [11:11] Software reset of channel 3 (w) */
    Ifx_Strict_32Bit RST_CH4 : 1;             /**< \brief [12:12] Software reset of channel 4 (w) */
    Ifx_Strict_32Bit RST_CH5 : 1;             /**< \brief [13:13] Software reset of channel 5 (w) */
    Ifx_Strict_32Bit RST_CH6 : 1;             /**< \brief [14:14] Software reset of channel 6 (w) */
    Ifx_Strict_32Bit RST_CH7 : 1;             /**< \brief [15:15] Software reset of channel 7 (w) */
    Ifx_Strict_32Bit UPEN_CTRL0 : 2;          /**< \brief [17:16] TOM channel 0 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL1 : 2;          /**< \brief [19:18] TOM channel 1 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL2 : 2;          /**< \brief [21:20] TOM channel 2 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL3 : 2;          /**< \brief [23:22] TOM channel 3 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL4 : 2;          /**< \brief [25:24] TOM channel 4 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL5 : 2;          /**< \brief [27:26] TOM channel 5 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL6 : 2;          /**< \brief [29:28] TOM channel 6 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
    Ifx_Strict_32Bit UPEN_CTRL7 : 2;          /**< \brief [31:30] TOM channel 7 enable update of register CM0, CM1 and CLK_SRC from SR0, SR1 and CLK_SRC_SR. (rw) */
} Ifx_GTM_TOM_TGC1_GLB_CTRL_Bits;

/** \\brief  TOM TGC 1 internal trigger control register */
typedef struct _Ifx_GTM_TOM_TGC1_INT_TRIG_Bits
{
    Ifx_Strict_32Bit INT_TRIG0 : 2;           /**< \brief [1:0] Select input signal TRIG_0 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG1 : 2;           /**< \brief [3:2] Select input signal TRIG_1 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG2 : 2;           /**< \brief [5:4] Select input signal TRIG_2 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG3 : 2;           /**< \brief [7:6] Select input signal TRIG_3 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG4 : 2;           /**< \brief [9:8] Select input signal TRIG_4 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG5 : 2;           /**< \brief [11:10] Select input signal TRIG_5 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG6 : 2;           /**< \brief [13:12] Select input signal TRIG_6 as a trigger source (rw) */
    Ifx_Strict_32Bit INT_TRIG7 : 2;           /**< \brief [15:14] Select input signal TRIG_7 as a trigger source (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC1_INT_TRIG_Bits;

/** \\brief  TOM TGC 1 output enable control register */
typedef struct _Ifx_GTM_TOM_TGC1_OUTEN_CTRL_Bits
{
    Ifx_Strict_32Bit OUTEN_CTRL0 : 2;         /**< \brief [1:0] Output TOM[i]_CH0_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL1 : 2;         /**< \brief [3:2] Output TOM[i]_CH1_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL2 : 2;         /**< \brief [5:4] Output TOM[i]_CH2_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL3 : 2;         /**< \brief [7:6] Output TOM[i]_CH3_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL4 : 2;         /**< \brief [9:8] Output TOM[i]_CH4_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL5 : 2;         /**< \brief [11:10] Output TOM[i]_CH5_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL6 : 2;         /**< \brief [13:12] Output TOM[i]_CH6_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit OUTEN_CTRL7 : 2;         /**< \brief [15:14] Output TOM[i]_CH7_OUT enable/disable update value (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC1_OUTEN_CTRL_Bits;

/** \\brief  TOM TGC 1 output enable status register */
typedef struct _Ifx_GTM_TOM_TGC1_OUTEN_STAT_Bits
{
    Ifx_Strict_32Bit OUTEN_STAT0 : 2;         /**< \brief [1:0] Control/status of output TOM[i]_CH0_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT1 : 2;         /**< \brief [3:2] Control/status of output TOM[i]_CH1_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT2 : 2;         /**< \brief [5:4] Control/status of output TOM[i]_CH2_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT3 : 2;         /**< \brief [7:6] Control/status of output TOM[i]_CH3_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT4 : 2;         /**< \brief [9:8] Control/status of output TOM[i]_CH4_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT5 : 2;         /**< \brief [11:10] Control/status of output TOM[i]_CH5_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT6 : 2;         /**< \brief [13:12] Control/status of output TOM[i]_CH6_OUT (rw) */
    Ifx_Strict_32Bit OUTEN_STAT7 : 2;         /**< \brief [15:14] Control/status of output TOM[i]_CH7_OUT (rw) */
    Ifx_Strict_32Bit reserved_16 : 16;        /**< \brief \internal Reserved */
} Ifx_GTM_TOM_TGC1_OUTEN_STAT_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_union
 * \{  */

/** \\brief  ADC Trigger 3Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ADCTRIG4OUT0_Bits B;
} Ifx_GTM_ADCTRIG4OUT0;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ADCTRIG4OUT1_Bits B;
} Ifx_GTM_ADCTRIG4OUT1;

/** \\brief  GTM AEI Timeout exception address register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_AEI_ADDR_XPT_Bits B;
} Ifx_GTM_AEI_ADDR_XPT;

/** \\brief  GTM AEI Non zero status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_AEI_STA_XPT_Bits B;
} Ifx_GTM_AEI_STA_XPT;

/** \\brief  AFD 0 FIFO 0 buffer access register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_AFD_CH_BUF_ACC_Bits B;
} Ifx_GTM_AFD_CH_BUF_ACC;

/** \\brief  ARU 0 dynamic routing control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_0_DYN_CTRL_Bits B;
} Ifx_GTM_ARU_0_DYN_CTRL;

/** \\brief  ARU 0 read ID for dynamic routing */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_0_DYN_RDADDR_Bits B;
} Ifx_GTM_ARU_0_DYN_RDADDR;

/** \\brief  ARU 0 higher bits of DYN_ROUTE register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                      U;
    /** \brief Signed access */
    signed int                        I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_0_DYN_ROUTE_HIGH_Bits B;
} Ifx_GTM_ARU_0_DYN_ROUTE_HIGH;

/** \\brief  ARU 0 lower bits of DYN_ROUTE register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_0_DYN_ROUTE_LOW_Bits B;
} Ifx_GTM_ARU_0_DYN_ROUTE_LOW;

/** \\brief  ARU 0 shadow register for ARU_[z]_DYN_ROUTE_HIGH */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                         U;
    /** \brief Signed access */
    signed int                           I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_0_DYN_ROUTE_SR_HIGH_Bits B;
} Ifx_GTM_ARU_0_DYN_ROUTE_SR_HIGH;

/** \\brief  ARU 0 shadow register for ARU_[z]_DYN_ROUTE_LOW */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_0_DYN_ROUTE_SR_LOW_Bits B;
} Ifx_GTM_ARU_0_DYN_ROUTE_SR_LOW;

/** \\brief  ARU 1 dynamic routing control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_1_DYN_CTRL_Bits B;
} Ifx_GTM_ARU_1_DYN_CTRL;

/** \\brief  ARU 1 read ID for dynamic routing */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_1_DYN_RDADDR_Bits B;
} Ifx_GTM_ARU_1_DYN_RDADDR;

/** \\brief  ARU 1 higher bits of DYN_ROUTE register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                      U;
    /** \brief Signed access */
    signed int                        I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_1_DYN_ROUTE_HIGH_Bits B;
} Ifx_GTM_ARU_1_DYN_ROUTE_HIGH;

/** \\brief  ARU 1 lower bits of DYN_ROUTE register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_1_DYN_ROUTE_LOW_Bits B;
} Ifx_GTM_ARU_1_DYN_ROUTE_LOW;

/** \\brief  ARU 1 shadow register for ARU_[z]_DYN_ROUTE_HIGH */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                         U;
    /** \brief Signed access */
    signed int                           I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_1_DYN_ROUTE_SR_HIGH_Bits B;
} Ifx_GTM_ARU_1_DYN_ROUTE_SR_HIGH;

/** \\brief  ARU 1 shadow register for ARU_[z]_DYN_ROUTE_LOW */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_1_DYN_ROUTE_SR_LOW_Bits B;
} Ifx_GTM_ARU_1_DYN_ROUTE_SR_LOW;

/** \\brief  ARU access register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_ARU_ACCESS_Bits B;
} Ifx_GTM_ARU_ARU_ACCESS;

/** \\brief  ARU caddr counter value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_CADDR_Bits B;
} Ifx_GTM_ARU_CADDR;

/** \\brief  ARU caddr counter end value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_CADDR_END_Bits B;
} Ifx_GTM_ARU_CADDR_END;

/** \\brief  ARU enable dynamic routing */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_CTRL_Bits B;
} Ifx_GTM_ARU_CTRL;

/** \\brief  ARU access register upper data word */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_DATA_H_Bits B;
} Ifx_GTM_ARU_DATA_H;

/** \\brief  ARU access register lower data word */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_DATA_L_Bits B;
} Ifx_GTM_ARU_DATA_L;

/** \\brief  ARU debug access channel 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_DBG_ACCESS0_Bits B;
} Ifx_GTM_ARU_DBG_ACCESS0;

/** \\brief  ARU debug access channel 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_DBG_ACCESS1_Bits B;
} Ifx_GTM_ARU_DBG_ACCESS1;

/** \\brief  ARU debug access 0 transfer register upper data word */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_DBG_DATA0_H_Bits B;
} Ifx_GTM_ARU_DBG_DATA0_H;

/** \\brief  ARU debug access 0 transfer register lower data word */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_DBG_DATA0_L_Bits B;
} Ifx_GTM_ARU_DBG_DATA0_L;

/** \\brief  ARU debug access 1 transfer register upper data word */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_DBG_DATA1_H_Bits B;
} Ifx_GTM_ARU_DBG_DATA1_H;

/** \\brief  ARU debug access 1 transfer register lower data word */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_DBG_DATA1_L_Bits B;
} Ifx_GTM_ARU_DBG_DATA1_L;

/** \\brief  ARU interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_IRQ_EN_Bits B;
} Ifx_GTM_ARU_IRQ_EN;

/** \\brief  ARU force interrupt register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_IRQ_FORCINT_Bits B;
} Ifx_GTM_ARU_IRQ_FORCINT;

/** \\brief  ARU interrupt mode register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_IRQ_MODE_Bits B;
} Ifx_GTM_ARU_IRQ_MODE;

/** \\brief  ARU interrupt notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_ARU_IRQ_NOTIFY_Bits B;
} Ifx_GTM_ARU_IRQ_NOTIFY;

/** \\brief  GTM ATOM 10 Output Level */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM10_OUT_Bits B;
} Ifx_GTM_ATOM10_OUT;

/** \\brief  ATOM AGC action time base register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_AGC_ACT_TB_Bits B;
} Ifx_GTM_ATOM_AGC_ACT_TB;

/** \\brief  ATOM AGC enable/disable control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_AGC_ENDIS_CTRL_Bits B;
} Ifx_GTM_ATOM_AGC_ENDIS_CTRL;

/** \\brief  ATOM AGC enable/disable status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_AGC_ENDIS_STAT_Bits B;
} Ifx_GTM_ATOM_AGC_ENDIS_STAT;

/** \\brief  ATOM AGC force update control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_AGC_FUPD_CTRL_Bits B;
} Ifx_GTM_ATOM_AGC_FUPD_CTRL;

/** \\brief  ATOM AGC global control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_AGC_GLB_CTRL_Bits B;
} Ifx_GTM_ATOM_AGC_GLB_CTRL;

/** \\brief  ATOM AGC internal trigger control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_AGC_INT_TRIG_Bits B;
} Ifx_GTM_ATOM_AGC_INT_TRIG;

/** \\brief  ATOM AGC output enable control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_AGC_OUTEN_CTRL_Bits B;
} Ifx_GTM_ATOM_AGC_OUTEN_CTRL;

/** \\brief  ATOM AGC output enable status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_AGC_OUTEN_STAT_Bits B;
} Ifx_GTM_ATOM_AGC_OUTEN_STAT;

/** \\brief  ATOM channel 0 CCU0 compare register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_CM0_Bits B;
} Ifx_GTM_ATOM_CH_CM0;

/** \\brief  ATOM channel 0 CCU1 compare register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_CM1_Bits B;
} Ifx_GTM_ATOM_CH_CM1;

/** \\brief  ATOM channel 0 CCU0 counter register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_CN0_Bits B;
} Ifx_GTM_ATOM_CH_CN0;

/** \\brief  ATOM Channel Control Register in SOMI Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_CTRL_Bits B;
} Ifx_GTM_ATOM_CH_CTRL;

/** \\brief  ATOM channel 0 interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_IRQ_EN_Bits B;
} Ifx_GTM_ATOM_CH_IRQ_EN;

/** \\brief  ATOM channel 0 software interrupt generation */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_ATOM_CH_IRQ_FORCINT;

/** \\brief  ATOM channel 0 interrupt mode configuration register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_IRQ_MODE_Bits B;
} Ifx_GTM_ATOM_CH_IRQ_MODE;

/** \\brief  ATOM channel 0 interrupt notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_ATOM_CH_IRQ_NOTIFY;

/** \\brief  ATOM channel 0 ARU read address register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_RDADDR_Bits B;
} Ifx_GTM_ATOM_CH_RDADDR;

/** \\brief  ATOM Channel Control Register in SOMI Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_SOMI_Bits B;
} Ifx_GTM_ATOM_CH_SOMI;

/** \brief  ATOM Channel Control in SOMC mode Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_SOMC_Bits B;
} Ifx_GTM_ATOM_CH_SOMC;

/** \brief  ATOM Channel Control in SOMP mode Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_SOMP_Bits B;
} Ifx_GTM_ATOM_CH_SOMP;

/** \brief  ATOM Channel Control in SOMS mode Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_SOMS_Bits B;
} Ifx_GTM_ATOM_CH_SOMS;

/** \brief  ATOM Channel Control in SOMB mode Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_SOMB_Bits B;
} Ifx_GTM_ATOM_CH_SOMB;

/** \\brief  ATOM channel 0 CCU0 compare shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_SR0_Bits B;
} Ifx_GTM_ATOM_CH_SR0;

/** \\brief  ATOM channel 0 CCU1 compare shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_SR1_Bits B;
} Ifx_GTM_ATOM_CH_SR1;

/** \\brief  ATOM channel 0 status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_CH_STAT_Bits B;
} Ifx_GTM_ATOM_CH_STAT;

/** \\brief  GTM ATOM   Output Level */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_ATOM_OUT_Bits B;
} Ifx_GTM_ATOM_OUT;

/** \\brief  BRC error interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_BRC_EIRQ_EN_Bits B;
} Ifx_GTM_BRC_EIRQ_EN;

/** \\brief  BRC interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_BRC_IRQ_EN_Bits B;
} Ifx_GTM_BRC_IRQ_EN;

/** \\brief  BRC force interrupt register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_BRC_IRQ_FORCINT_Bits B;
} Ifx_GTM_BRC_IRQ_FORCINT;

/** \\brief  BRC interrupt mode configuration register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_BRC_IRQ_MODE_Bits B;
} Ifx_GTM_BRC_IRQ_MODE;

/** \\brief  BRC interrupt notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_BRC_IRQ_NOTIFY_Bits B;
} Ifx_GTM_BRC_IRQ_NOTIFY;

/** \\brief  BRC software reset register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_BRC_RST_Bits B;
} Ifx_GTM_BRC_RST;

/** \\brief  BRC read address for input channel 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_BRC_SRC_ADDR_Bits B;
} Ifx_GTM_BRC_SRC_ADDR;

/** \\brief  BRC destination channels for input channel 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_BRC_SRC_DEST_Bits B;
} Ifx_GTM_BRC_SRC_DEST;

/** \\brief  GTM AEI bridge mode register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_BRIDGE_MODE_Bits B;
} Ifx_GTM_BRIDGE_MODE;

/** \\brief  GTM AEI bridge pointer 1 register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_BRIDGE_PTR1_Bits B;
} Ifx_GTM_BRIDGE_PTR1;

/** \\brief  GTM AEI bridge pointer 2 register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_BRIDGE_PTR2_Bits B;
} Ifx_GTM_BRIDGE_PTR2;

/** \\brief  CCM10 Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM10_CFG_Bits B;
} Ifx_GTM_CCM10_CFG;

/** \\brief  CCM10 CMU Clock Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM10_CMU_CLK_CFG_Bits B;
} Ifx_GTM_CCM10_CMU_CLK_CFG;

/** \\brief  CCM10 CMU Fixed Clock Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM10_CMU_FXCLK_CFG_Bits B;
} Ifx_GTM_CCM10_CMU_FXCLK_CFG;

/** \\brief  CCM10 Hardware Configuration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM10_HW_CONF_Bits B;
} Ifx_GTM_CCM10_HW_CONF;

/** \\brief  CCM10 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM10_PROT_Bits B;
} Ifx_GTM_CCM10_PROT;

/** \\brief  CCM11 Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM11_CFG_Bits B;
} Ifx_GTM_CCM11_CFG;

/** \\brief  CCM11 CMU Clock Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM11_CMU_CLK_CFG_Bits B;
} Ifx_GTM_CCM11_CMU_CLK_CFG;

/** \\brief  CCM11 CMU Fixed Clock Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM11_CMU_FXCLK_CFG_Bits B;
} Ifx_GTM_CCM11_CMU_FXCLK_CFG;

/** \\brief  CCM11 Hardware Configuration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM11_HW_CONF_Bits B;
} Ifx_GTM_CCM11_HW_CONF;

/** \\brief  CCM11 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM11_PROT_Bits B;
} Ifx_GTM_CCM11_PROT;

/** \\brief  CCM MCS Bus Master Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_AEIM_STA_Bits B;
} Ifx_GTM_CCM_AEIM_STA;

/** \\brief  CCM Address Range Protector 0 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP0_CTRL_Bits B;
} Ifx_GTM_CCM_ARP0_CTRL;

/** \\brief  CCM Address Range Protector 0 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP0_PROT_Bits B;
} Ifx_GTM_CCM_ARP0_PROT;

/** \\brief  CCM Address Range Protector 1 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP1_CTRL_Bits B;
} Ifx_GTM_CCM_ARP1_CTRL;

/** \\brief  CCM Address Range Protector 1 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP1_PROT_Bits B;
} Ifx_GTM_CCM_ARP1_PROT;

/** \\brief  CCM Address Range Protector 2 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP2_CTRL_Bits B;
} Ifx_GTM_CCM_ARP2_CTRL;

/** \\brief  CCM Address Range Protector 2 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP2_PROT_Bits B;
} Ifx_GTM_CCM_ARP2_PROT;

/** \\brief  CCM Address Range Protector 3 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP3_CTRL_Bits B;
} Ifx_GTM_CCM_ARP3_CTRL;

/** \\brief  CCM Address Range Protector 3 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP3_PROT_Bits B;
} Ifx_GTM_CCM_ARP3_PROT;

/** \\brief  CCM Address Range Protector 4 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP4_CTRL_Bits B;
} Ifx_GTM_CCM_ARP4_CTRL;

/** \\brief  CCM Address Range Protector 4 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP4_PROT_Bits B;
} Ifx_GTM_CCM_ARP4_PROT;

/** \\brief  CCM Address Range Protector 5 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP5_CTRL_Bits B;
} Ifx_GTM_CCM_ARP5_CTRL;

/** \\brief  CCM Address Range Protector 5 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP5_PROT_Bits B;
} Ifx_GTM_CCM_ARP5_PROT;

/** \\brief  CCM Address Range Protector 6 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP6_CTRL_Bits B;
} Ifx_GTM_CCM_ARP6_CTRL;

/** \\brief  CCM Address Range Protector 6 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP6_PROT_Bits B;
} Ifx_GTM_CCM_ARP6_PROT;

/** \\brief  CCM Address Range Protector 7 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP7_CTRL_Bits B;
} Ifx_GTM_CCM_ARP7_CTRL;

/** \\brief  CCM Address Range Protector 7 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP7_PROT_Bits B;
} Ifx_GTM_CCM_ARP7_PROT;

/** \\brief  CCM Address Range Protector 8 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP8_CTRL_Bits B;
} Ifx_GTM_CCM_ARP8_CTRL;

/** \\brief  CCM Address Range Protector 8 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP8_PROT_Bits B;
} Ifx_GTM_CCM_ARP8_PROT;

/** \\brief  CCM Address Range Protector 9 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP9_CTRL_Bits B;
} Ifx_GTM_CCM_ARP9_CTRL;

/** \\brief  CCM Address Range Protector 9 Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ARP9_PROT_Bits B;
} Ifx_GTM_CCM_ARP9_PROT;

/** \\brief  GTM CCM ATOM Output Level */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_ATOM_OUT_Bits B;
} Ifx_GTM_CCM_ATOM_OUT;

/** \\brief  CCM Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_CFG_Bits B;
} Ifx_GTM_CCM_CFG;

/** \\brief  CCM CMU Clock Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_CMU_CLK_CFG_Bits B;
} Ifx_GTM_CCM_CMU_CLK_CFG;

/** \\brief  CCM CMU Fixed Clock Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_CMU_FXCLK_CFG_Bits B;
} Ifx_GTM_CCM_CMU_FXCLK_CFG;

/** \\brief  CCM external capture trigger enable */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_EXT_CAP_EN_Bits B;
} Ifx_GTM_CCM_EXT_CAP_EN;

/** \\brief  CCM Hardware Configuration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_HW_CONF_Bits B;
} Ifx_GTM_CCM_HW_CONF;

/** \\brief  CCM Protection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_PROT_Bits B;
} Ifx_GTM_CCM_PROT;

/** \\brief  CCM TIM module AUX_IN source selection register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_TIM_AUX_IN_SRC_Bits B;
} Ifx_GTM_CCM_TIM_AUX_IN_SRC;

/** \\brief  GTM CCM TOM output level */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_CCM_TOM_OUT_Bits B;
} Ifx_GTM_CCM_TOM_OUT;

/** \\brief  CDTM5 DTM4 channel 0 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_CH0_DTV_Bits B;
} Ifx_GTM_CDTM5_DTM4_CH0_DTV;

/** \\brief  CDTM5 DTM4 channel 1 dead t5me reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_CH1_DTV_Bits B;
} Ifx_GTM_CDTM5_DTM4_CH1_DTV;

/** \\brief  CDTM5 DTM4 channel 2 dead t5me reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_CH2_DTV_Bits B;
} Ifx_GTM_CDTM5_DTM4_CH2_DTV;

/** \\brief  CDTM5 DTM4 channel 3 dead t5me reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_CH3_DTV_Bits B;
} Ifx_GTM_CDTM5_DTM4_CH3_DTV;

/** \\brief  CDTM5 DTM4 channel control register 2 shadow */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_CH_CTRL2_SR_Bits B;
} Ifx_GTM_CDTM5_DTM4_CH_CTRL2_SR;

/** \\brief  CDTM5 DTM4 channel control register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_CH_CTRL3_Bits B;
} Ifx_GTM_CDTM5_DTM4_CH_CTRL3;

/** \\brief  CDTM5 DTM4 channel shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_CH_SR_Bits B;
} Ifx_GTM_CDTM5_DTM4_CH_SR;

/** \\brief  CDTM5 DTM4 global configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_CTRL_Bits B;
} Ifx_GTM_CDTM5_DTM4_CTRL;

/** \\brief  CDTM5 DTM4 phase shift unit configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM4_PS_CTRL_Bits B;
} Ifx_GTM_CDTM5_DTM4_PS_CTRL;

/** \\brief  CDTM5 DTM5 channel 0 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH0_DTV_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH0_DTV;

/** \\brief  CDTM5 DTM5 channel 1 dead t5me reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH1_DTV_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH1_DTV;

/** \\brief  CDTM5 DTM5 channel 2 dead t5me reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH2_DTV_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH2_DTV;

/** \\brief  CDTM5 DTM5 channel 3 dead t5me reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH3_DTV_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH3_DTV;

/** \\brief  CDTM5 DTM5 channel control register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH_CTRL1_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH_CTRL1;

/** \\brief  CDTM5 DTM5 channel control register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH_CTRL2_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH_CTRL2;

/** \\brief  CDTM5 DTM5 channel control register 2 shadow */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH_CTRL2_SR_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH_CTRL2_SR;

/** \\brief  CDTM5 DTM5 channel control register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH_CTRL3_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH_CTRL3;

/** \\brief  CDTM5 DTM5 channel shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CH_SR_Bits B;
} Ifx_GTM_CDTM5_DTM5_CH_SR;

/** \\brief  CDTM5 DTM5 global configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_CTRL_Bits B;
} Ifx_GTM_CDTM5_DTM5_CTRL;

/** \\brief  CDTM5 DTM5 phase shift unit configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM5_DTM5_PS_CTRL_Bits B;
} Ifx_GTM_CDTM5_DTM5_PS_CTRL;

/** \\brief  CDTM6 DTM4 channel 0 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_CH0_DTV_Bits B;
} Ifx_GTM_CDTM6_DTM4_CH0_DTV;

/** \\brief  CDTM6 DTM4 channel 1 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_CH1_DTV_Bits B;
} Ifx_GTM_CDTM6_DTM4_CH1_DTV;

/** \\brief  CDTM6 DTM4 channel 2 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_CH2_DTV_Bits B;
} Ifx_GTM_CDTM6_DTM4_CH2_DTV;

/** \\brief  CDTM6 DTM4 channel 3 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_CH3_DTV_Bits B;
} Ifx_GTM_CDTM6_DTM4_CH3_DTV;

/** \\brief  CDTM6 DTM4 channel control register 2 shadow */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_CH_CTRL2_SR_Bits B;
} Ifx_GTM_CDTM6_DTM4_CH_CTRL2_SR;

/** \\brief  CDTM6 DTM4 channel control register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_CH_CTRL3_Bits B;
} Ifx_GTM_CDTM6_DTM4_CH_CTRL3;

/** \\brief  CDTM6 DTM4 channel shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_CH_SR_Bits B;
} Ifx_GTM_CDTM6_DTM4_CH_SR;

/** \\brief  CDTM6 DTM4 global configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_CTRL_Bits B;
} Ifx_GTM_CDTM6_DTM4_CTRL;

/** \\brief  CDTM6 DTM4 phase shift unit configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM4_PS_CTRL_Bits B;
} Ifx_GTM_CDTM6_DTM4_PS_CTRL;

/** \\brief  CDTM6 DTM5 channel 0 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH0_DTV_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH0_DTV;

/** \\brief  CDTM6 DTM5 channel 1 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH1_DTV_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH1_DTV;

/** \\brief  CDTM6 DTM5 channel 2 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH2_DTV_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH2_DTV;

/** \\brief  CDTM6 DTM5 channel 3 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH3_DTV_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH3_DTV;

/** \\brief  CDTM6 DTM5 channel control register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH_CTRL1_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH_CTRL1;

/** \\brief  CDTM6 DTM5 channel control register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH_CTRL2_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH_CTRL2;

/** \\brief  CDTM6 DTM5 channel control register 2 shadow */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH_CTRL2_SR_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH_CTRL2_SR;

/** \\brief  CDTM6 DTM5 channel control register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH_CTRL3_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH_CTRL3;

/** \\brief  CDTM6 DTM5 channel shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CH_SR_Bits B;
} Ifx_GTM_CDTM6_DTM5_CH_SR;

/** \\brief  CDTM6 DTM5 global configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_CTRL_Bits B;
} Ifx_GTM_CDTM6_DTM5_CTRL;

/** \\brief  CDTM6 DTM5 phase shift unit configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM6_DTM5_PS_CTRL_Bits B;
} Ifx_GTM_CDTM6_DTM5_PS_CTRL;

/** \\brief  CDTM0 DTM2 global configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM2_CTRL_Bits B;
} Ifx_GTM_CDTM_DTM2_CTRL;

/** \\brief  CDTM0 DTM3 global configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM3_CTRL_Bits B;
} Ifx_GTM_CDTM_DTM3_CTRL;

/** \\brief  CDTM0 DTM0 channel control register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM_CH_CTRL1_Bits B;
} Ifx_GTM_CDTM_DTM_CH_CTRL1;

/** \\brief  CDTM0 DTM0 channel control register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM_CH_CTRL2_Bits B;
} Ifx_GTM_CDTM_DTM_CH_CTRL2;

/** \\brief  CDTM0 DTM0 channel control register 2 shadow */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                      U;
    /** \brief Signed access */
    signed int                        I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM_CH_CTRL2_SR_Bits B;
} Ifx_GTM_CDTM_DTM_CH_CTRL2_SR;

/** \\brief  CDTM0 DTM0 channel control register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM_CH_CTRL3_Bits B;
} Ifx_GTM_CDTM_DTM_CH_CTRL3;

/** \\brief  CDTM0 DTM0 channel 0 dead time reload values */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM_CH_DTV_Bits B;
} Ifx_GTM_CDTM_DTM_CH_DTV;

/** \\brief  CDTM DTM0 channel shadow reg0ster */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM_CH_SR_Bits B;
} Ifx_GTM_CDTM_DTM_CH_SR;

/** \\brief  CDTM0 DTM0 global configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM_CTRL_Bits B;
} Ifx_GTM_CDTM_DTM_CTRL;

/** \\brief  CDTM0 DTM0 phase shift unit configuration and control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_CDTM_DTM_PS_CTRL_Bits B;
} Ifx_GTM_CDTM_DTM_PS_CTRL;

/** \\brief  GTM Configuration register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_GTM_CFG_Bits B;
} Ifx_GTM_CFG;

/** \\brief  Clock Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_GTM_CLC_Bits B;
} Ifx_GTM_CLC;

/** \\brief  GTM Cluster Clock Configuration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_CLS_CLK_CFG_Bits B;
} Ifx_GTM_CLS_CLK_CFG;

/** \\brief  CMP error interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_CMP_EIRQ_EN_Bits B;
} Ifx_GTM_CMP_EIRQ_EN;

/** \\brief  CMP comparator enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_GTM_CMP_EN_Bits B;
} Ifx_GTM_CMP_EN;

/** \\brief  CMP interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_CMP_IRQ_EN_Bits B;
} Ifx_GTM_CMP_IRQ_EN;

/** \\brief  CMP interrupt force register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_CMP_IRQ_FORCINT_Bits B;
} Ifx_GTM_CMP_IRQ_FORCINT;

/** \\brief  CMP interrupt mode configuration register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CMP_IRQ_MODE_Bits B;
} Ifx_GTM_CMP_IRQ_MODE;

/** \\brief  CMP event notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_CMP_IRQ_NOTIFY_Bits B;
} Ifx_GTM_CMP_IRQ_NOTIFY;

/** \\brief  CMU control for clock source 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_CLK0_5_CTRL_Bits B;
} Ifx_GTM_CMU_CLK0_5_CTRL;

/** \\brief  CMU control for clock source 6 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_CLK_6_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_6_CTRL;

/** \\brief  CMU control for clock source 7 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_CLK_7_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_7_CTRL;

/** \\brief  CMU control for clock source selection */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_CLK_CTRL_Bits B;
} Ifx_GTM_CMU_CLK_CTRL;

/** \\brief  CMU clock enable */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_CLK_EN_Bits B;
} Ifx_GTM_CMU_CLK_EN;

/** \\brief  CMU external clock 0 control denominator */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_ECLK_DEN_Bits B;
} Ifx_GTM_CMU_ECLK_DEN;

/** \\brief  CMU external clock 0 control numerator */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_ECLK_NUM_Bits B;
} Ifx_GTM_CMU_ECLK_NUM;

/** \\brief  CMU control FXCLK sub-unit input clock */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_FXCLK_CTRL_Bits B;
} Ifx_GTM_CMU_FXCLK_CTRL;

/** \\brief  CMU global clock control denominator */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_GCLK_DEN_Bits B;
} Ifx_GTM_CMU_GCLK_DEN;

/** \\brief  CMU global clock control numerator */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_GCLK_NUM_Bits B;
} Ifx_GTM_CMU_GCLK_NUM;

/** \\brief  CMU synchronizing ARU and clock source */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_CMU_GLB_CTRL_Bits B;
} Ifx_GTM_CMU_GLB_CTRL;

/** \\brief  GTM Global control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int      U;
    /** \brief Signed access */
    signed int        I;
    /** \brief Bitfield access */
    Ifx_GTM_CTRL_Bits B;
} Ifx_GTM_CTRL;

/** \\brief  DPLL Control Bits Register 0 for up to 32 Actions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACB_0_Bits B;
} Ifx_GTM_DPLL_ACB_0;

/** \\brief  DPLL Control Bits Register 1 for up to 32 Actions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACB_1_Bits B;
} Ifx_GTM_DPLL_ACB_1;

/** \\brief  DPLL Control Bits Register 2 for up to 32 Actions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACB_2_Bits B;
} Ifx_GTM_DPLL_ACB_2;

/** \\brief  DPLL Control Bits Register 3 for up to 32 Actions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACB_3_Bits B;
} Ifx_GTM_DPLL_ACB_3;

/** \\brief  DPLL Control Bits Register 4 for up to 32 Actions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACB_4_Bits B;
} Ifx_GTM_DPLL_ACB_4;

/** \\brief  DPLL Control Bits Register 5 for up to 32 Actions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACB_5_Bits B;
} Ifx_GTM_DPLL_ACB_5;

/** \\brief  DPLL Control Bits Register 6 for up to 32 Actions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACB_6_Bits B;
} Ifx_GTM_DPLL_ACB_6;

/** \\brief  DPLL Control Bits Register 7 for up to 32 Actions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACB_7_Bits B;
} Ifx_GTM_DPLL_ACB_7;

/** \\brief  DPLL ACTION Status Register with connected shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ACT_STA_Bits B;
} Ifx_GTM_DPLL_ACT_STA;

/** \\brief  DPLL Calculated ADD_IN Value for SUB_INC1 Generation */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ADD_IN_CAL1_Bits B;
} Ifx_GTM_DPLL_ADD_IN_CAL1;

/** \\brief  DPLL Calculated ADD_IN Value for SUB_INC2 Generation */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ADD_IN_CAL2_Bits B;
} Ifx_GTM_DPLL_ADD_IN_CAL2;

/** \\brief  DPLL Direct Load Input Value for SUB_INC1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ADD_IN_LD1_Bits B;
} Ifx_GTM_DPLL_ADD_IN_LD1;

/** \\brief  DPLL Direct Load Input Value for SUB_INC2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ADD_IN_LD2_Bits B;
} Ifx_GTM_DPLL_ADD_IN_LD2;

/** \\brief  DPLL Adapt and Profile Values of the STATE Increments in FULL_SCALE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ADT_S_Bits B;
} Ifx_GTM_DPLL_ADT_S;

/** \\brief  DPLL Address Offset Register of RAM 2 Regions */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_AOSV_2_Bits B;
} Ifx_GTM_DPLL_AOSV_2;

/** \\brief  DPLL Actual RAM Pointer Address for STATE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APS_Bits B;
} Ifx_GTM_DPLL_APS;

/** \\brief  DPLL Actual RAM Pointer for RAM Region 1C3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APS_1C3_Bits B;
} Ifx_GTM_DPLL_APS_1C3;

/** \\brief  DPLL Extension register for DPLL_APS_1C3) */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APS_1C3_EXT_Bits B;
} Ifx_GTM_DPLL_APS_1C3_EXT;

/** \\brief  DPLL Extension register for DPLL_APS 4) */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APS_EXT_Bits B;
} Ifx_GTM_DPLL_APS_EXT;

/** \\brief  DPLL Old RAM Pointer and Offset Value for STATE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APS_SYNC_Bits B;
} Ifx_GTM_DPLL_APS_SYNC;

/** \\brief  DPLL Extension register for DPLL_APS_SYNC) */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APS_SYNC_EXT_Bits B;
} Ifx_GTM_DPLL_APS_SYNC_EXT;

/** \\brief  DPLL Actual RAM Pointer Address for TRIGGER */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APT_Bits B;
} Ifx_GTM_DPLL_APT;

/** \\brief  DPLL Actual RAM Pointer for Region 2C */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APT_2C_Bits B;
} Ifx_GTM_DPLL_APT_2C;

/** \\brief  DPLL Old RAM Pointer and Offset Value for TRIGGER */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_APT_SYNC_Bits B;
} Ifx_GTM_DPLL_APT_SYNC;

/** \\brief  DPLL Prediction of the Actual STATE Increment Duration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CDT_SX_Bits B;
} Ifx_GTM_DPLL_CDT_SX;

/** \\brief  DPLL Prediction of the Nominal STATE Increment Duration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CDT_SX_NOM_Bits B;
} Ifx_GTM_DPLL_CDT_SX_NOM;

/** \\brief  DPLL Prediction of the Actual TRIGGER Increment Duration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CDT_TX_Bits B;
} Ifx_GTM_DPLL_CDT_TX;

/** \\brief  DPLL Prediction of the Nominal TRIGGER Increment Duration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CDT_TX_NOM_Bits B;
} Ifx_GTM_DPLL_CDT_TX_NOM;

/** \\brief  DPLL Number of Sub-Pulses of SUB_INC1 in Continuous Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CNT_NUM_1_Bits B;
} Ifx_GTM_DPLL_CNT_NUM_1;

/** \\brief  DPLL Number of Sub-Pulses of SUB_INC2 in Continuous Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CNT_NUM_2_Bits B;
} Ifx_GTM_DPLL_CNT_NUM_2;

/** \\brief  DPLL Maximum CDT_S Nominal Value Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CSN_MAX_Bits B;
} Ifx_GTM_DPLL_CSN_MAX;

/** \\brief  DPLL Minimum CDT_S Nominal Value Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CSN_MIN_Bits B;
} Ifx_GTM_DPLL_CSN_MIN;

/** \\brief  DPLL Maximum CDT_T Nominal Value Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTN_MAX_Bits B;
} Ifx_GTM_DPLL_CTN_MAX;

/** \\brief  DPLL Minimum CDT_T Nominal Value Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTN_MIN_Bits B;
} Ifx_GTM_DPLL_CTN_MIN;

/** \\brief  DPLL Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_0_Bits B;
} Ifx_GTM_DPLL_CTRL_0;

/** \\brief  DPLL Control 0 Shadow STATE Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                          U;
    /** \brief Signed access */
    signed int                            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE_Bits B;
} Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE;

/** \\brief  DPLL Control 0 Shadow Trigger Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                            U;
    /** \brief Signed access */
    signed int                              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER_Bits B;
} Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER;

/** \\brief  DPLL Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_1_Bits B;
} Ifx_GTM_DPLL_CTRL_1;

/** \\brief  DPLL Control Register 11 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_11_Bits B;
} Ifx_GTM_DPLL_CTRL_11;

/** \\brief  DPLL Control 1 Shadow STATE Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                          U;
    /** \brief Signed access */
    signed int                            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE_Bits B;
} Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE;

/** \\brief  DPLL Control 1 Shadow TRIGGER Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                            U;
    /** \brief Signed access */
    signed int                              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER_Bits B;
} Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER;

/** \\brief  DPLL Control Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_2_Bits B;
} Ifx_GTM_DPLL_CTRL_2;

/** \\brief  DPLL Control Register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_3_Bits B;
} Ifx_GTM_DPLL_CTRL_3;

/** \\brief  DPLL Control Register 4 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_4_Bits B;
} Ifx_GTM_DPLL_CTRL_4;

/** \\brief  DPLL Control Register 5 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_5_Bits B;
} Ifx_GTM_DPLL_CTRL_5;

/** \\brief  DPLL Extension register for DPLL_CTRL) */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_CTRL_EXT_Bits B;
} Ifx_GTM_DPLL_CTRL_EXT;

/** \\brief  DPLL ACTION Time To React Before PSAz */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_DLA_Bits B;
} Ifx_GTM_DPLL_DLA;

/** \\brief  DPLL Nominal STATE Increment Duration in FULL_SCALE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_DT_S_Bits B;
} Ifx_GTM_DPLL_DT_S;

/** \\brief  DPLL Duration of the Last STATE Increment */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_DT_S_ACT_Bits B;
} Ifx_GTM_DPLL_DT_S_ACT;

/** \\brief  DPLL Start Value of DPLL_DT_S_ACT for the first Increment after
 * SIP2 is set to 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_DT_S_START_Bits B;
} Ifx_GTM_DPLL_DT_S_START;

/** \\brief  DPLL Duration of the Last TRIGGER Increment */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_DT_T_ACT_Bits B;
} Ifx_GTM_DPLL_DT_T_ACT;

/** \\brief  DPLL Start Value of DPLL_DT_T_ACT for the first Increment after
 * SIP1 is set to 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_DT_T_START_Bits B;
} Ifx_GTM_DPLL_DT_T_START;

/** \\brief  DPLL Calculated Relative TIME To ACTION */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_DTA_Bits B;
} Ifx_GTM_DPLL_DTA;

/** \\brief  DPLL Difference of Prediction to Actual Value of the Last STATE
 * Increment */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_EDT_S_Bits B;
} Ifx_GTM_DPLL_EDT_S;

/** \\brief  DPLL Difference of Prediction to Actual Value of the Last TRIGGER
 * Increment */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_EDT_T_Bits B;
} Ifx_GTM_DPLL_EDT_T;

/** \\brief  DPLL Error Interrupt Enable Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_EIRQ_EN_Bits B;
} Ifx_GTM_DPLL_EIRQ_EN;

/** \\brief  DPLL Actual STATE Filter Value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_FTV_S_Bits B;
} Ifx_GTM_DPLL_FTV_S;

/** \\brief  DPLL Actual TRIGGER Filter Value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_FTV_T_Bits B;
} Ifx_GTM_DPLL_FTV_T;

/** \\brief  DPLL ID Information For Input Signal PMT 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_ID_PMTR_Bits B;
} Ifx_GTM_DPLL_ID_PMTR;

/** \\brief  DPLL Counter for Pulses for TBU_CH1_BASE to be sent in Automatic
 * End Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_INC_CNT1_Bits B;
} Ifx_GTM_DPLL_INC_CNT1;

/** \\brief  DPLL INC_CNT1 Trigger Mask */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_INC_CNT1_MASK_Bits B;
} Ifx_GTM_DPLL_INC_CNT1_MASK;

/** \\brief  DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic End
 * Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_INC_CNT2_Bits B;
} Ifx_GTM_DPLL_INC_CNT2;

/** \\brief  DPLL INC_CNT2 Trigger Mask */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_INC_CNT2_MASK_Bits B;
} Ifx_GTM_DPLL_INC_CNT2_MASK;

/** \\brief  DPLL Start Value of the ADD_IN_ADDER1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_INCF1_OFFSET_Bits B;
} Ifx_GTM_DPLL_INCF1_OFFSET;

/** \\brief  DPLL Start Value of the ADD_IN_ADDER2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_INCF2_OFFSET_Bits B;
} Ifx_GTM_DPLL_INCF2_OFFSET;

/** \\brief  DPLL Interrupt Enable Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_IRQ_EN_Bits B;
} Ifx_GTM_DPLL_IRQ_EN;

/** \\brief  DPLL Interrupt Force Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_IRQ_FORCINT_Bits B;
} Ifx_GTM_DPLL_IRQ_FORCINT;

/** \\brief  DPLL Interrupt Mode Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_IRQ_MODE_Bits B;
} Ifx_GTM_DPLL_IRQ_MODE;

/** \\brief  DPLL Interrupt Notification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_IRQ_NOTIFY_Bits B;
} Ifx_GTM_DPLL_IRQ_NOTIFY;

/** \\brief  DPLL Weighted Difference of Prediction Errors of STATE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_MEDT_S_Bits B;
} Ifx_GTM_DPLL_MEDT_S;

/** \\brief  DPLL Weighted Difference of Prediction Errors of TRIGGER */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_MEDT_T_Bits B;
} Ifx_GTM_DPLL_MEDT_T;

/** \\brief  DPLL Calculated Number of Sub-Pulses between two nominal STATE
 * Events for SMC=0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_MLS1_Bits B;
} Ifx_GTM_DPLL_MLS1;

/** \\brief  DPLL Calculated Number of Sub-Pulses between two nominal STATE
 * Events for SMC=1 and RMO=1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_MLS2_Bits B;
} Ifx_GTM_DPLL_MLS2;

/** \\brief  DPLL Missing Pulses to be Added or Subtracted Directly 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_MPVAL1_Bits B;
} Ifx_GTM_DPLL_MPVAL1;

/** \\brief  DPLL Missing Pulses to be Added or Subtracted Directly 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_MPVAL2_Bits B;
} Ifx_GTM_DPLL_MPVAL2;

/** \\brief  DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NA_Bits B;
} Ifx_GTM_DPLL_NA;

/** \\brief  DPLL Number of Pulses to be Sent in Emergency Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NMB_S_Bits B;
} Ifx_GTM_DPLL_NMB_S;

/** \\brief  DPLL Target Number of Pulses to be Sent in Emergency Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NMB_S_TAR_Bits B;
} Ifx_GTM_DPLL_NMB_S_TAR;

/** \\brief  DPLL Last but one Target Number of Pulses to be Sent in Emergency
 * Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NMB_S_TAR_OLD_Bits B;
} Ifx_GTM_DPLL_NMB_S_TAR_OLD;

/** \\brief  DPLL Number of Pulses to be Sent in Normal Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NMB_T_Bits B;
} Ifx_GTM_DPLL_NMB_T;

/** \\brief  DPLL Target Number of Pulses to be Sent in Normal Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NMB_T_TAR_Bits B;
} Ifx_GTM_DPLL_NMB_T_TAR;

/** \\brief  DPLL Last but one Target Number of Pulses to be Sent in Normal Mode */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NMB_T_TAR_OLD_Bits B;
} Ifx_GTM_DPLL_NMB_T_TAR_OLD;

/** \\brief  DPLL Number of Active TRIGGER Events to Interrupt */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NTI_CNT_Bits B;
} Ifx_GTM_DPLL_NTI_CNT;

/** \\brief  DPLL Number of Recent STATE Events Used for Calculations */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NUSC_Bits B;
} Ifx_GTM_DPLL_NUSC;

/** \\brief  DPLL Extension register number 1 for DPLL_NUSC 4 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NUSC_EXT1_Bits B;
} Ifx_GTM_DPLL_NUSC_EXT1;

/** \\brief  DPLL Extension register number 2 for DPLL_NUSC 4 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NUSC_EXT2_Bits B;
} Ifx_GTM_DPLL_NUSC_EXT2;

/** \\brief  DPLL Number of Recent TRIGGER Events Used for Calculations */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_NUTC_Bits B;
} Ifx_GTM_DPLL_NUTC;

/** \\brief  DPLL Offset And Switch Old/New Address Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_OSW_Bits B;
} Ifx_GTM_DPLL_OSW;

/** \\brief  DPLL Projected Increment Sum Relations for Action 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_0_Bits B;
} Ifx_GTM_DPLL_PDT_0;

/** \\brief  DPLL Projected Increment Sum Relations for Action 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_1_Bits B;
} Ifx_GTM_DPLL_PDT_1;

/** \\brief  DPLL Projected Increment Sum Relations for Action 10 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_10_Bits B;
} Ifx_GTM_DPLL_PDT_10;

/** \\brief  DPLL Projected Increment Sum Relations for Action 11 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_11_Bits B;
} Ifx_GTM_DPLL_PDT_11;

/** \\brief  DPLL Projected Increment Sum Relations for Action 12 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_12_Bits B;
} Ifx_GTM_DPLL_PDT_12;

/** \\brief  DPLL Projected Increment Sum Relations for Action 13 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_13_Bits B;
} Ifx_GTM_DPLL_PDT_13;

/** \\brief  DPLL Projected Increment Sum Relations for Action 14 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_14_Bits B;
} Ifx_GTM_DPLL_PDT_14;

/** \\brief  DPLL Projected Increment Sum Relations for Action 15 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_15_Bits B;
} Ifx_GTM_DPLL_PDT_15;

/** \\brief  DPLL Projected Increment Sum Relations for Action 16 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_16_Bits B;
} Ifx_GTM_DPLL_PDT_16;

/** \\brief  DPLL Projected Increment Sum Relations for Action 17 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_17_Bits B;
} Ifx_GTM_DPLL_PDT_17;

/** \\brief  DPLL Projected Increment Sum Relations for Action 18 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_18_Bits B;
} Ifx_GTM_DPLL_PDT_18;

/** \\brief  DPLL Projected Increment Sum Relations for Action 19 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_19_Bits B;
} Ifx_GTM_DPLL_PDT_19;

/** \\brief  DPLL Projected Increment Sum Relations for Action 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_2_Bits B;
} Ifx_GTM_DPLL_PDT_2;

/** \\brief  DPLL Projected Increment Sum Relations for Action 20 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_20_Bits B;
} Ifx_GTM_DPLL_PDT_20;

/** \\brief  DPLL Projected Increment Sum Relations for Action 21 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_21_Bits B;
} Ifx_GTM_DPLL_PDT_21;

/** \\brief  DPLL Projected Increment Sum Relations for Action 22 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_22_Bits B;
} Ifx_GTM_DPLL_PDT_22;

/** \\brief  DPLL Projected Increment Sum Relations for Action 23 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_23_Bits B;
} Ifx_GTM_DPLL_PDT_23;

/** \\brief  DPLL Projected Increment Sum Relations for Action 24 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_24_Bits B;
} Ifx_GTM_DPLL_PDT_24;

/** \\brief  DPLL Projected Increment Sum Relations for Action 25 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_25_Bits B;
} Ifx_GTM_DPLL_PDT_25;

/** \\brief  DPLL Projected Increment Sum Relations for Action 26 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_26_Bits B;
} Ifx_GTM_DPLL_PDT_26;

/** \\brief  DPLL Projected Increment Sum Relations for Action 27 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_27_Bits B;
} Ifx_GTM_DPLL_PDT_27;

/** \\brief  DPLL Projected Increment Sum Relations for Action 28 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_28_Bits B;
} Ifx_GTM_DPLL_PDT_28;

/** \\brief  DPLL Projected Increment Sum Relations for Action 29 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_29_Bits B;
} Ifx_GTM_DPLL_PDT_29;

/** \\brief  DPLL Projected Increment Sum Relations for Action 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_3_Bits B;
} Ifx_GTM_DPLL_PDT_3;

/** \\brief  DPLL Projected Increment Sum Relations for Action 30 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_30_Bits B;
} Ifx_GTM_DPLL_PDT_30;

/** \\brief  DPLL Projected Increment Sum Relations for Action 31 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_31_Bits B;
} Ifx_GTM_DPLL_PDT_31;

/** \\brief  DPLL Projected Increment Sum Relations for Action 4 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_4_Bits B;
} Ifx_GTM_DPLL_PDT_4;

/** \\brief  DPLL Projected Increment Sum Relations for Action 5 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_5_Bits B;
} Ifx_GTM_DPLL_PDT_5;

/** \\brief  DPLL Projected Increment Sum Relations for Action 6 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_6_Bits B;
} Ifx_GTM_DPLL_PDT_6;

/** \\brief  DPLL Projected Increment Sum Relations for Action 7 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_7_Bits B;
} Ifx_GTM_DPLL_PDT_7;

/** \\brief  DPLL Projected Increment Sum Relations for Action 8 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_8_Bits B;
} Ifx_GTM_DPLL_PDT_8;

/** \\brief  DPLL Projected Increment Sum Relations for Action 9 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PDT_9_Bits B;
} Ifx_GTM_DPLL_PDT_9;

/** \\brief  DPLL ACTION Position/Value Request */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PSA_Bits B;
} Ifx_GTM_DPLL_PSA;

/** \\brief  DPLL ACTION Position/Value Action 0 Request Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PSAC_Bits B;
} Ifx_GTM_DPLL_PSAC;

/** \\brief  DPLL Actual Calculated Position Stamp of STATE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PSSC_Bits B;
} Ifx_GTM_DPLL_PSSC;

/** \\brief  DPLL Measured Position Stamp at Last STATE Input */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PSSM_Bits B;
} Ifx_GTM_DPLL_PSSM;

/** \\brief  DPLL Measured Position Stamp at Last but one STATE Input */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PSSM_OLD_Bits B;
} Ifx_GTM_DPLL_PSSM_OLD;

/** \\brief  DPLL Actual Calculated Position Stamp of TRIGGER */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PSTC_Bits B;
} Ifx_GTM_DPLL_PSTC;

/** \\brief  DPLL Measured Position Stamp at Last TRIGGER Input */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PSTM_Bits B;
} Ifx_GTM_DPLL_PSTM;

/** \\brief  DPLL Measured Position Stamp at Last but one TRIGGER Input */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PSTM_OLD_Bits B;
} Ifx_GTM_DPLL_PSTM_OLD;

/** \\brief  DPLL Plausibility Value of Next TRIGGER Slope */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_PVT_Bits B;
} Ifx_GTM_DPLL_PVT;

/** \\brief  DPLL RAM Initialization Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_RAM_INI_Bits B;
} Ifx_GTM_DPLL_RAM_INI;

/** \\brief  DPLL Reciprocal Value of the Expected Increment Duration of STATE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_RCDT_SX_Bits B;
} Ifx_GTM_DPLL_RCDT_SX;

/** \\brief  DPLL Reciprocal Value of the Expected Nominal Increment Duration of
 * STATE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_RCDT_SX_NOM_Bits B;
} Ifx_GTM_DPLL_RCDT_SX_NOM;

/** \\brief  DPLL Reciprocal Value of the Expected Increment Duration of TRIGGER */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_RCDT_TX_Bits B;
} Ifx_GTM_DPLL_RCDT_TX;

/** \\brief  DPLL Reciprocal Value of the Expected Nominal Increment Duration of
 * TRIGGER */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_RCDT_TX_NOM_Bits B;
} Ifx_GTM_DPLL_RCDT_TX_NOM;

/** \\brief  DPLL Reciprocal Values of the Nominal STATE Increment Duration in
 * FULL_SCALE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_RDT_S_Bits B;
} Ifx_GTM_DPLL_RDT_S;

/** \\brief  DPLL Reciprocal Value of the Last Increment of STATE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_RDT_S_ACT_Bits B;
} Ifx_GTM_DPLL_RDT_S_ACT;

/** \\brief  DPLL Reciprocal Value of the Last Increment of TRIGGER */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_RDT_T_ACT_Bits B;
} Ifx_GTM_DPLL_RDT_T_ACT;

/** \\brief  DPLL Additional STATE Input Delay Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_SIDEL_Bits B;
} Ifx_GTM_DPLL_SIDEL;

/** \\brief  DPLL STATE Locking Range */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_SLR_Bits B;
} Ifx_GTM_DPLL_SLR;

/** \\brief  DPLL Status of the State Machine States Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_STA_Bits B;
} Ifx_GTM_DPLL_STA;

/** \\brief  DPLL STA Flag Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_STA_FLAG_Bits B;
} Ifx_GTM_DPLL_STA_FLAG;

/** \\brief  DPLL Trigger Masks for Signals DPLL_STA_T and DPLL_STA_S */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_STA_MASK_Bits B;
} Ifx_GTM_DPLL_STA_MASK;

/** \\brief  DPLL Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_STATUS_Bits B;
} Ifx_GTM_DPLL_STATUS;

/** \\brief  DPLL TBU_TS0 Value at last STATE Event */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TBU_TS0_S_Bits B;
} Ifx_GTM_DPLL_TBU_TS0_S;

/** \\brief  DPLL TBU_TS0 Value at last TRIGGER Event */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TBU_TS0_T_Bits B;
} Ifx_GTM_DPLL_TBU_TS0_T;

/** \\brief  DPLL TRIGGER Hold Time Maximum Value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_THMA_Bits B;
} Ifx_GTM_DPLL_THMA;

/** \\brief  DPLL TRIGGER Hold Time Minimum Value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_THMI_Bits B;
} Ifx_GTM_DPLL_THMI;

/** \\brief  DPLL Measured TRIGGER Hold Time Value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_THVAL_Bits B;
} Ifx_GTM_DPLL_THVAL;

/** \\brief  DPLL Immediate THVAL Value Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_THVAL2_Bits B;
} Ifx_GTM_DPLL_THVAL2;

/** \\brief  DPLL Additional TRIGGER Input Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TIDEL_Bits B;
} Ifx_GTM_DPLL_TIDEL;

/** \\brief  DPLL TRIGGER Locking Range */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TLR_Bits B;
} Ifx_GTM_DPLL_TLR;

/** \\brief  DPLL Time Out Value of Active TRIGGER Slope */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TOV_Bits B;
} Ifx_GTM_DPLL_TOV;

/** \\brief  DPLL Time Out Value of active STATE Slope */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TOV_S_Bits B;
} Ifx_GTM_DPLL_TOV_S;

/** \\brief  DPLL Actual STATE Time Stamp */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TS_S_Bits B;
} Ifx_GTM_DPLL_TS_S;

/** \\brief  DPLL Previous STATE Time Stamp */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TS_S_OLD_Bits B;
} Ifx_GTM_DPLL_TS_S_OLD;

/** \\brief  DPLL Actual TRIGGER Time Stamp Value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TS_T_Bits B;
} Ifx_GTM_DPLL_TS_T;

/** \\brief  DPLL Previous TRIGGER Time Stamp Value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TS_T_OLD_Bits B;
} Ifx_GTM_DPLL_TS_T_OLD;

/** \\brief  DPLL Calculated Time Value to start Action 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TSAC_Bits B;
} Ifx_GTM_DPLL_TSAC;

/** \\brief  DPLL Time Stamp Values of the Nominal STATE Events in FULL_SCALE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_DPLL_TSF_S_Bits B;
} Ifx_GTM_DPLL_TSF_S;

/** \\brief  DTM_AUX Input Selection Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_DTMAUXINSEL_Bits B;
} Ifx_GTM_DTMAUXINSEL;

/** \\brief  GTM Error interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_EIRQ_EN_Bits B;
} Ifx_GTM_EIRQ_EN;

/** \\brief  GTM external capture trigger enable 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_EXT_CAP_EN_Bits B;
} Ifx_GTM_EXT_CAP_EN;

/** \\brief  F2A0 stream control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_F2A_CTRL_Bits B;
} Ifx_GTM_F2A_CTRL;

/** \\brief  F2A0 stream activation register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_F2A_ENABLE_Bits B;
} Ifx_GTM_F2A_ENABLE;

/** \\brief  F2A0 stream 0 read address register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO_Bits B;
} Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO;

/** \\brief  F2A0 stream 0 configuration register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_F2A_STR_CH_STR_CFG_Bits B;
} Ifx_GTM_F2A_STR_CH_STR_CFG;

/** \\brief  FIFO0 channel 0 control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_CTRL_Bits B;
} Ifx_GTM_FIFO_CH_CTRL;

/** \\brief  FIFO0 channel 0 error interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_EIRQ_EN_Bits B;
} Ifx_GTM_FIFO_CH_EIRQ_EN;

/** \\brief  FIFO0 channel 0 end address register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_END_ADDR_Bits B;
} Ifx_GTM_FIFO_CH_END_ADDR;

/** \\brief  FIFO0 channel 0 fill level register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_FILL_LEVEL_Bits B;
} Ifx_GTM_FIFO_CH_FILL_LEVEL;

/** \\brief  FIFO0 channel 0 interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_IRQ_EN_Bits B;
} Ifx_GTM_FIFO_CH_IRQ_EN;

/** \\brief  FIFO0 channel 0 force interrupt register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_FIFO_CH_IRQ_FORCINT;

/** \\brief  FIFO0 channel 0 interrupt mode control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_IRQ_MODE_Bits B;
} Ifx_GTM_FIFO_CH_IRQ_MODE;

/** \\brief  FIFO0 channel 0 interrupt notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_FIFO_CH_IRQ_NOTIFY;

/** \\brief  FIFO0 channel 0 lower watermark register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_LOWER_WM_Bits B;
} Ifx_GTM_FIFO_CH_LOWER_WM;

/** \\brief  FIFO0 channel 0 read pointer register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_RD_PTR_Bits B;
} Ifx_GTM_FIFO_CH_RD_PTR;

/** \\brief  FIFO0 channel 0 start address register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_START_ADDR_Bits B;
} Ifx_GTM_FIFO_CH_START_ADDR;

/** \\brief  FIFO0 channel 0 status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_STATUS_Bits B;
} Ifx_GTM_FIFO_CH_STATUS;

/** \\brief  FIFO0 channel 0 upper watermark register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_UPPER_WM_Bits B;
} Ifx_GTM_FIFO_CH_UPPER_WM;

/** \\brief  FIFO0 channel 0 write pointer register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_FIFO_CH_WR_PTR_Bits B;
} Ifx_GTM_FIFO_CH_WR_PTR;

/** \\brief  GTM Hardware Configuration */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_HW_CONF_Bits B;
} Ifx_GTM_HW_CONF;

/** \\brief  ICM Interrupt group register covering infrastructure and safety
 * components ARU, BRC, AEI, PSM0, PSM1, MAP, CMP,SPE */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_0_Bits B;
} Ifx_GTM_ICM_IRQG_0;

/** \\brief  ICM Interrupt group register covering DPLL */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_1_Bits B;
} Ifx_GTM_ICM_IRQG_1;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules ATOM4
 * to ATOM7 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_10_Bits B;
} Ifx_GTM_ICM_IRQG_10;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules ATOM8
 * to ATOM11 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_11_Bits B;
} Ifx_GTM_ICM_IRQG_11;

/** \\brief  ICM Interrupt group register covering TIM0, TIM1, TIM2, TIM3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_2_Bits B;
} Ifx_GTM_ICM_IRQG_2;

/** \\brief  ICM Interrupt group register covering TIM4, TIM5, TIM6, TIM7 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_3_Bits B;
} Ifx_GTM_ICM_IRQG_3;

/** \\brief  ICM Interrupt group register covering MCS0 to MCS3 sub-modules */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_4_Bits B;
} Ifx_GTM_ICM_IRQG_4;

/** \\brief  ICM Interrupt group register covering MCS4 to MCS6 sub-modules */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_5_Bits B;
} Ifx_GTM_ICM_IRQG_5;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules TOM0
 * to TOM1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_6_Bits B;
} Ifx_GTM_ICM_IRQG_6;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules TOM2
 * to TOM3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_7_Bits B;
} Ifx_GTM_ICM_IRQG_7;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules TOM4
 * to TOM5 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_8_Bits B;
} Ifx_GTM_ICM_IRQG_8;

/** \\brief  ICM Interrupt group register covering GTM output sub-modules ATOM0,
 * ATOM1, ATOM2 and ATOM3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_9_Bits B;
} Ifx_GTM_ICM_IRQG_9;

/** \\brief  ICM Interrupt group ATOM 0 for Channel Interrupt information of
 * ATOMm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_ATOM_0_CI_Bits B;
} Ifx_GTM_ICM_IRQG_ATOM_0_CI;

/** \\brief  ICM Interrupt group ATOM 1 for Channel Interrupt information of
 * ATOMm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_ATOM_1_CI_Bits B;
} Ifx_GTM_ICM_IRQG_ATOM_1_CI;

/** \\brief  ICM Interrupt group ATOM 2 for Channel Interrupt information of
 * ATOMm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_ATOM_2_CI_Bits B;
} Ifx_GTM_ICM_IRQG_ATOM_2_CI;

/** \\brief  ICM Interrupt group register 0 for channel error interrupt
 * information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_CEI0_Bits B;
} Ifx_GTM_ICM_IRQG_CEI0;

/** \\brief  ICM Interrupt group register 1 for channel error interrupt
 * information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_CEI1_Bits B;
} Ifx_GTM_ICM_IRQG_CEI1;

/** \\brief  ICM Interrupt group register 2 for channel error interrupt
 * information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_CEI2_Bits B;
} Ifx_GTM_ICM_IRQG_CEI2;

/** \\brief  ICM Interrupt group register 3 for channel error interrupt
 * information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_CEI3_Bits B;
} Ifx_GTM_ICM_IRQG_CEI3;

/** \\brief  ICM Interrupt group register 4 for channel error interrupt
 * information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_CEI4_Bits B;
} Ifx_GTM_ICM_IRQG_CEI4;

/** \\brief  ICM Interrupt group for module Error Interrupt information for each
 * TIMm, MCSm, SPEm, FIFOm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_CLS_0_MEI_Bits B;
} Ifx_GTM_ICM_IRQG_CLS_0_MEI;

/** \\brief  ICM Interrupt group for module Error Interrupt information for each
 * TIMm, MCSm, SPEm, FIFOm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_CLS_1_MEI_Bits B;
} Ifx_GTM_ICM_IRQG_CLS_1_MEI;

/** \\brief  ICM Interrupt group for module Error Interrupt information for each
 * TIMm, MCSm, SPEm, FIFOm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_CLS_2_MEI_Bits B;
} Ifx_GTM_ICM_IRQG_CLS_2_MEI;

/** \\brief  ICM Interrupt group MCS 0 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS0_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS0_CEI;

/** \\brief  ICM Interrupt group MCS 0 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS0_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS0_CI;

/** \\brief  ICM Interrupt group MCS 1 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS1_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS1_CEI;

/** \\brief  ICM Interrupt group MCS 1 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS1_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS1_CI;

/** \\brief  ICM Interrupt group MCS 2 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS2_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS2_CEI;

/** \\brief  ICM Interrupt group MCS 2 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS2_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS2_CI;

/** \\brief  ICM Interrupt group MCS 3 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS3_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS3_CEI;

/** \\brief  ICM Interrupt group MCS 3 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS3_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS3_CI;

/** \\brief  ICM Interrupt group MCS 4 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS4_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS4_CEI;

/** \\brief  ICM Interrupt group MCS 4 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS4_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS4_CI;

/** \\brief  ICM Interrupt group MCS 5 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS5_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS5_CEI;

/** \\brief  ICM Interrupt group MCS 5 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS5_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS5_CI;

/** \\brief  ICM Interrupt group MCS 6 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS6_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS6_CEI;

/** \\brief  ICM Interrupt group MCS 6 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS6_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS6_CI;

/** \\brief  ICM Interrupt group MCS 7 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS7_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS7_CEI;

/** \\brief  ICM Interrupt group MCS 7 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS7_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS7_CI;

/** \\brief  ICM Interrupt group MCS 8 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS8_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS8_CEI;

/** \\brief  ICM Interrupt group MCS 8 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS8_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS8_CI;

/** \\brief  ICM Interrupt group MCS 9 for Channel Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS9_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS9_CEI;

/** \\brief  ICM Interrupt group MCS 9 for Channel Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MCS9_CI_Bits B;
} Ifx_GTM_ICM_IRQG_MCS9_CI;

/** \\brief  ICM Interrupt group register for module error interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_MEI_Bits B;
} Ifx_GTM_ICM_IRQG_MEI;

/** \\brief  ICM Interrupt group PSM 0 for Channel Error Interrupt information
 * of FIFO0, FIFO1, FIFO2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_PSM_0_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_PSM_0_CEI;

/** \\brief  ICM Interrupt group PSM 0 for Channel Interrupt information of
 * FIFO0, FIFO1, FIFO2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_PSM_0_CI_Bits B;
} Ifx_GTM_ICM_IRQG_PSM_0_CI;

/** \\brief  ICM Interrupt group SPE for module Error Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_SPE_CEI_Bits B;
} Ifx_GTM_ICM_IRQG_SPE_CEI;

/** \\brief  ICM Interrupt group SPE for module Interrupt information */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_SPE_CI_Bits B;
} Ifx_GTM_ICM_IRQG_SPE_CI;

/** \\brief  ICM Interrupt group TOM 0 for Channel Interrupt information of TOMm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_TOM_0_CI_Bits B;
} Ifx_GTM_ICM_IRQG_TOM_0_CI;

/** \\brief  ICM Interrupt group TOM 1 for Channel Interrupt information of TOMm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_TOM_1_CI_Bits B;
} Ifx_GTM_ICM_IRQG_TOM_1_CI;

/** \\brief  ICM Interrupt group TOM 2 for Channel Interrupt information of TOMm */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_ICM_IRQG_TOM_2_CI_Bits B;
} Ifx_GTM_ICM_IRQG_TOM_2_CI;

/** \\brief  Access Enable Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ACCEN0_Bits B;
} Ifx_GTM_INOUTSEL_ACCEN0;

/** \\brief  Access Enable Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ACCEN1_Bits B;
} Ifx_GTM_INOUTSEL_ACCEN1;

/** \\brief  ADC Trigger 0 Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT00_Bits B;
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT00;

/** \\brief  ADC Trigger 0 Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT01_Bits B;
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT01;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT10_Bits B;
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT10;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT11_Bits B;
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT11;

/** \\brief  ADC Trigger 2 Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT20_Bits B;
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT20;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT21_Bits B;
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT21;

/** \\brief  ADC Trigger 3Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT30_Bits B;
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT30;

/** \\brief  ADC Trigger 1 Output Select 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT31_Bits B;
} Ifx_GTM_INOUTSEL_ADCTRIG_OUT31;

/** \\brief  CAN Output Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_CAN_OUTSEL_Bits B;
} Ifx_GTM_INOUTSEL_CAN_OUTSEL;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN0_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN0;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN1_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN1;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN2_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN2;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN3_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN3;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN4_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN4;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN5_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN5;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN6_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN6;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN7_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN7;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN8_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN8;

/** \\brief  Data Input n Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DATA_IN9_Bits B;
} Ifx_GTM_INOUTSEL_DATA_IN9;

/** \\brief  DSADC Input Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                      U;
    /** \brief Signed access */
    signed int                        I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DSADC_INSEL_Bits B;
} Ifx_GTM_INOUTSEL_DSADC_INSEL;

/** \\brief  DSADC Output Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL0_Bits B;
} Ifx_GTM_INOUTSEL_DSADC_OUTSEL0;

/** \\brief  DSADC Output Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL1_Bits B;
} Ifx_GTM_INOUTSEL_DSADC_OUTSEL1;

/** \\brief  Data Exchange Input Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                  U;
    /** \brief Signed access */
    signed int                    I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DXINCON_Bits B;
} Ifx_GTM_INOUTSEL_DXINCON;

/** \\brief  Data Exchange Output Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_DXOUTCON_Bits B;
} Ifx_GTM_INOUTSEL_DXOUTCON;

/** \\brief  I0terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT0_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT0;

/** \\brief  I1terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT1_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT1;

/** \\brief  I2terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT2_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT2;

/** \\brief  I3terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT3_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT3;

/** \\brief  I4terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT4_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT4;

/** \\brief  I5terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT5_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT5;

/** \\brief  I6terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT6_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT6;

/** \\brief  I7terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT7_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT7;

/** \\brief  I8terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT8_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT8;

/** \\brief  I9terrupt Output Register n */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_INT_OUT9_Bits B;
} Ifx_GTM_INOUTSEL_INT_OUT9;

/** \\brief  MCS Interrupt Clear Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MCSINTCLR_Bits B;
} Ifx_GTM_INOUTSEL_MCSINTCLR;

/** \\brief  MCS Interrupt Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MCSINTSTAT_Bits B;
} Ifx_GTM_INOUTSEL_MCSINTSTAT;

/** \\brief  Trigger Output Sel Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MCSTRIGOUTSEL_Bits B;
} Ifx_GTM_INOUTSEL_MCSTRIGOUTSEL;

/** \\brief  MSC0 Input High Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_IN_INHCON_Bits B;
} Ifx_GTM_INOUTSEL_MSC_IN_INHCON;

/** \\brief  MSC0 Input Low Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                        U;
    /** \brief Signed access */
    signed int                          I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_IN_INLCON_Bits B;
} Ifx_GTM_INOUTSEL_MSC_IN_INLCON;

/** \\brief  MSC0 Input Low Extended Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                           U;
    /** \brief Signed access */
    signed int                             I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_IN_INLEXTCON_Bits B;
} Ifx_GTM_INOUTSEL_MSC_IN_INLEXTCON;

/** \\brief  MSC Set 1 Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET1CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET1CON0;

/** \\brief  MSC Set 1 Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET1CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET1CON1;

/** \\brief  MSC Set 1 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET1CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET1CON2;

/** \\brief  MSC Set 1 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET1CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET1CON3;

/** \\brief  MSC Set 2 Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET2CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET2CON0;

/** \\brief  MSC Set 2 Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET2CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET2CON1;

/** \\brief  MSC Set 2 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET2CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET2CON2;

/** \\brief  MSC Set 2 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET2CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET2CON3;

/** \\brief  MSC Set 3Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET3CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET3CON0;

/** \\brief  MSC Set 3Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET3CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET3CON1;

/** \\brief  MSC Set 3 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET3CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET3CON2;

/** \\brief  MSC Set 3 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET3CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET3CON3;

/** \\brief  MSC Set 4 Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET4CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET4CON0;

/** \\brief  MSC Set 4 Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET4CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET4CON1;

/** \\brief  MSC Set 4 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET4CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET4CON2;

/** \\brief  MSC Set 4 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET4CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET4CON3;

/** \\brief  MSC Set 5 Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET5CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET5CON0;

/** \\brief  MSC Set 5 Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET5CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET5CON1;

/** \\brief  MSC Set 5 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET5CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET5CON2;

/** \\brief  MSC Set 5 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET5CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET5CON3;

/** \\brief  MSC Set 6 Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET6CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET6CON0;

/** \\brief  MSC Set 6 Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET6CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET6CON1;

/** \\brief  MSC Set 6 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET6CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET6CON2;

/** \\brief  MSC Set 6 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET6CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET6CON3;

/** \\brief  MSC Set 7Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET7CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET7CON0;

/** \\brief  MSC Set 7 Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET7CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET7CON1;

/** \\brief  MSC Set 7 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET7CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET7CON2;

/** \\brief  MSC Set 7 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET7CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET7CON3;

/** \\brief  MSC Set 8Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET8CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET8CON0;

/** \\brief  MSC Set 8 Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET8CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET8CON1;

/** \\brief  MSC Set 8 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET8CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET8CON2;

/** \\brief  MSC Set 8 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET8CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET8CON3;

/** \\brief  MSC Set 9Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET9CON0_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET9CON0;

/** \\brief  MSC Set 9 Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET9CON1_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET9CON1;

/** \\brief  MSC Set 9 Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET9CON2_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET9CON2;

/** \\brief  MSC Set 9 Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_MSC_SET9CON3_Bits B;
} Ifx_GTM_INOUTSEL_MSC_SET9CON3;

/** \\brief  OCDS Control and Status */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_OCS_Bits B;
} Ifx_GTM_INOUTSEL_OCS;

/** \\brief  OCDS Debug Access Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_ODA_Bits B;
} Ifx_GTM_INOUTSEL_ODA;

/** \\brief  OCDS TBU0 Trigger Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_OTBU0T_Bits B;
} Ifx_GTM_INOUTSEL_OTBU0T;

/** \\brief  OCDS TBU1 Trigger Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_OTBU1T_Bits B;
} Ifx_GTM_INOUTSEL_OTBU1T;

/** \\brief  OCDS TBU2 Trigger Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_OTBU2T_Bits B;
} Ifx_GTM_INOUTSEL_OTBU2T;

/** \\brief  OCDS Trigger Set Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_OTSC0_Bits B;
} Ifx_GTM_INOUTSEL_OTSC0;

/** \\brief  OCDS Trigger Set Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_OTSC1_Bits B;
} Ifx_GTM_INOUTSEL_OTSC1;

/** \\brief  OCDS Trigger Set Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_OTSS_Bits B;
} Ifx_GTM_INOUTSEL_OTSS;

/** \\brief  PSI5 Output Select 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_PSI5OUTSEL_Bits B;
} Ifx_GTM_INOUTSEL_PSI5OUTSEL;

/** \\brief  PSI5-S Output Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                       U;
    /** \brief Signed access */
    signed int                         I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_PSI5S_OUTSEL_Bits B;
} Ifx_GTM_INOUTSEL_PSI5S_OUTSEL;

/** \\brief  Kernel Reset Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_RESET1_Bits B;
} Ifx_GTM_INOUTSEL_RESET1;

/** \\brief  Kernel Reset Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_RESET2_Bits B;
} Ifx_GTM_INOUTSEL_RESET2;

/** \\brief  Kernel Reset Status Clear Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_RESET_CLR_Bits B;
} Ifx_GTM_INOUTSEL_RESET_CLR;

/** \\brief  Timer Output Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_T_OUTSEL_Bits B;
} Ifx_GTM_INOUTSEL_T_OUTSEL;

/** \\brief  TIM Input Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TIM_INSEL_Bits B;
} Ifx_GTM_INOUTSEL_TIM_INSEL;

/** \\brief  Trigger Output Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT0_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT0;

/** \\brief  Trigger Output Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT1_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT1;

/** \\brief  Trigger Output Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT2_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT2;

/** \\brief  Trigger Output Register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT3_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT3;

/** \\brief  Trigger Output Register 4 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT4_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT4;

/** \\brief  Trigger Output Register 5 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT5_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT5;

/** \\brief  Trigger Output Register 6 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT6_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT6;

/** \\brief  Trigger Output Register 7 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT7_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT7;

/** \\brief  Trigger Output Register 8 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT8_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT8;

/** \\brief  Trigger Output Register 9 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_INOUTSEL_TRIG_OUT9_Bits B;
} Ifx_GTM_INOUTSEL_TRIG_OUT9;

/** \\brief  GTM Interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_GTM_IRQ_EN_Bits B;
} Ifx_GTM_IRQ_EN;

/** \\brief  GTM Software interrupt generation register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_IRQ_FORCINT_Bits B;
} Ifx_GTM_IRQ_FORCINT;

/** \\brief  GTM top level interrupts mode selection */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_IRQ_MODE_Bits B;
} Ifx_GTM_IRQ_MODE;

/** \\brief  GTM Interrupt notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_IRQ_NOTIFY_Bits B;
} Ifx_GTM_IRQ_NOTIFY;

/** \\brief  LCDCDC Output Select Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_LCDCDCOUTSEL_Bits B;
} Ifx_GTM_LCDCDCOUTSEL;

/** \\brief  MAP Control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_MAP_CTRL_Bits B;
} Ifx_GTM_MAP_CTRL;

/** \\brief  MCFG Memory layout configuration. */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCFG_CTRL_Bits B;
} Ifx_GTM_MCFG_CTRL;

/** \\brief  MCS to DPLL Data Exchange Buffer 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS2DPLL_DEB_Bits B;
} Ifx_GTM_MCS2DPLL_DEB;

/** \\brief  GTM MCS master port disable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_AEM_DIS_Bits B;
} Ifx_GTM_MCS_AEM_DIS;

/** \\brief  MCS cancel ARU transfer instruction */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CAT_Bits B;
} Ifx_GTM_MCS_CAT;

/** \\brief  MCS clear trigger control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH0_CTRG_Bits B;
} Ifx_GTM_MCS_CH0_CTRG;

/** \\brief  MCS set trigger control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH0_STRG_Bits B;
} Ifx_GTM_MCS_CH0_STRG;

/** \\brief  MCS channel 0 ARU control Bit register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_ACB_Bits B;
} Ifx_GTM_MCS_CH_ACB;

/** \\brief  MCS channel 0 control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_CTRL_Bits B;
} Ifx_GTM_MCS_CH_CTRL;

/** \\brief  MCS channel 0 error interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_EIRQ_EN_Bits B;
} Ifx_GTM_MCS_CH_EIRQ_EN;

/** \\brief  MCS channel 0 interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_IRQ_EN_Bits B;
} Ifx_GTM_MCS_CH_IRQ_EN;

/** \\brief  MCS channel 0 force interrupt register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_MCS_CH_IRQ_FORCINT;

/** \\brief  MCS channel 0 IRQ mode configuration register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_IRQ_MODE_Bits B;
} Ifx_GTM_MCS_CH_IRQ_MODE;

/** \\brief  MCS channel 0 interrupt notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_MCS_CH_IRQ_NOTIFY;

/** \\brief  MCS channel 0 memory high byte register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_MHB_Bits B;
} Ifx_GTM_MCS_CH_MHB;

/** \\brief  MCS channel 0 program counter register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_PC_Bits B;
} Ifx_GTM_MCS_CH_PC;

/** \\brief  MCS channel 0 general purpose register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_R0_Bits B;
} Ifx_GTM_MCS_CH_R0;

/** \\brief  MCS channel 0 general purpose register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_R1_Bits B;
} Ifx_GTM_MCS_CH_R1;

/** \\brief  MCS channel 0 general purpose register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_R2_Bits B;
} Ifx_GTM_MCS_CH_R2;

/** \\brief  MCS channel 0 general purpose register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_R3_Bits B;
} Ifx_GTM_MCS_CH_R3;

/** \\brief  MCS channel 0 general purpose register 4 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_R4_Bits B;
} Ifx_GTM_MCS_CH_R4;

/** \\brief  MCS channel 0 general purpose register 5 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_R5_Bits B;
} Ifx_GTM_MCS_CH_R5;

/** \\brief  MCS channel 0 general purpose register 6 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_R6_Bits B;
} Ifx_GTM_MCS_CH_R6;

/** \\brief  MCS channel 0 general purpose register 7 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CH_R7_Bits B;
} Ifx_GTM_MCS_CH_R7;

/** \\brief  MCS control and status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CTRL_STAT_Bits B;
} Ifx_GTM_MCS_CTRL_STAT;

/** \\brief  MCS cancel WURM instruction */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_CWT_Bits B;
} Ifx_GTM_MCS_CWT;

/** \\brief  MCS error register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_ERR_Bits B;
} Ifx_GTM_MCS_ERR;

/** \\brief  MCS write protection register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_REG_PROT_Bits B;
} Ifx_GTM_MCS_REG_PROT;

/** \\brief  MCS reset register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_GTM_MCS_RESET_Bits B;
} Ifx_GTM_MCS_RESET;

/** \\brief  Monitor activity register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_0_Bits B;
} Ifx_GTM_MON_ACTIVITY_0;

/** \\brief  Monitor activity register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_1_Bits B;
} Ifx_GTM_MON_ACTIVITY_1;

/** \\brief  Monitor activity register for MCS 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS0_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS0;

/** \\brief  Monitor activity register for MCS 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS1_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS1;

/** \\brief  Monitor activity register for MCS 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS2_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS2;

/** \\brief  Monitor activity register for MCS 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS3_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS3;

/** \\brief  Monitor activity register for MCS 4 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS4_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS4;

/** \\brief  Monitor activity register for MCS 5 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS5_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS5;

/** \\brief  Monitor activity register for MCS 6 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS6_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS6;

/** \\brief  Monitor activity register for MCS 7 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS7_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS7;

/** \\brief  Monitor activity register for MCS 8 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS8_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS8;

/** \\brief  Monitor activity register for MCS 9 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_ACTIVITY_MCS9_Bits B;
} Ifx_GTM_MON_ACTIVITY_MCS9;

/** \\brief  Monitor status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_MON_STATUS_Bits B;
} Ifx_GTM_MON_STATUS;

/** \\brief  OCDS TBU3 Trigger Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_GTM_OTBU3T_Bits B;
} Ifx_GTM_OTBU3T;

/** \\brief  GTM Version control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_GTM_REV_Bits B;
} Ifx_GTM_REV;

/** \\brief  GTM Global reset register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_GTM_RST_Bits B;
} Ifx_GTM_RST;

/** \\brief  SPE Command register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_CMD_Bits B;
} Ifx_GTM_SPE_CMD;

/** \\brief  SPE Control status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_CTRL_STAT_Bits B;
} Ifx_GTM_SPE_CTRL_STAT;

/** \\brief  SPE Control status register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_CTRL_STAT2_Bits B;
} Ifx_GTM_SPE_CTRL_STAT2;

/** \\brief  SPE Error interrupt enable register. */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_EIRQ_EN_Bits B;
} Ifx_GTM_SPE_EIRQ_EN;

/** \\brief  SPE Interrupt enable register. */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_IRQ_EN_Bits B;
} Ifx_GTM_SPE_IRQ_EN;

/** \\brief  SPE Interrupt generation by software. */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_IRQ_FORCINT_Bits B;
} Ifx_GTM_SPE_IRQ_FORCINT;

/** \\brief  SPE Interrupt mode configuration register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_IRQ_MODE_Bits B;
} Ifx_GTM_SPE_IRQ_MODE;

/** \\brief  SPE Interrupt notification register. */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_IRQ_NOTIFY_Bits B;
} Ifx_GTM_SPE_IRQ_NOTIFY;

/** \\brief  SPE output control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_OUT_CTRL_Bits B;
} Ifx_GTM_SPE_OUT_CTRL;

/** \\brief  SPE Output definition register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_OUT_PAT_Bits B;
} Ifx_GTM_SPE_OUT_PAT;

/** \\brief  SPE Input pattern definition register. */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_PAT_Bits B;
} Ifx_GTM_SPE_PAT;

/** \\brief  SPE Revolution counter compare value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_REV_CMP_Bits B;
} Ifx_GTM_SPE_REV_CMP;

/** \\brief  SPE input revolution counter */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_SPE_REV_CNT_Bits B;
} Ifx_GTM_SPE_REV_CNT;

/** \\brief  TBU channel 0 base */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH0_BASE_Bits B;
} Ifx_GTM_TBU_CH0_BASE;

/** \\brief  TBU channel 0 control */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH0_CTRL_Bits B;
} Ifx_GTM_TBU_CH0_CTRL;

/** \\brief  TBU Channel 1 Base Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH1_BASE_Bits B;
} Ifx_GTM_TBU_CH1_BASE;

/** \\brief  TBU channel 1 control */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH1_CTRL_Bits B;
} Ifx_GTM_TBU_CH1_CTRL;

/** \\brief  TBU Channel 2 Base Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH2_BASE_Bits B;
} Ifx_GTM_TBU_CH2_BASE;

/** \\brief  TBU channel 2 control */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH2_CTRL_Bits B;
} Ifx_GTM_TBU_CH2_CTRL;

/** \\brief  TBU channel 3 base */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH3_BASE_Bits B;
} Ifx_GTM_TBU_CH3_BASE;

/** \\brief  TBU channel 3 base captured */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                      U;
    /** \brief Signed access */
    signed int                        I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH3_BASE_CAPTURE_Bits B;
} Ifx_GTM_TBU_CH3_BASE_CAPTURE;

/** \\brief  TBU channel 3 modulo value */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH3_BASE_MARK_Bits B;
} Ifx_GTM_TBU_CH3_BASE_MARK;

/** \\brief  TBU channel 3 control */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CH3_CTRL_Bits B;
} Ifx_GTM_TBU_CH3_CTRL;

/** \\brief  TBU global channel enable */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_GTM_TBU_CHEN_Bits B;
} Ifx_GTM_TBU_CHEN;

/** \\brief  GTM TIM   module AUX_IN source selection register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_AUX_IN_SRC_Bits B;
} Ifx_GTM_TIM_AUX_IN_SRC;

/** \\brief  TIM channel 0 SMU counter register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_CNT_Bits B;
} Ifx_GTM_TIM_CH_CNT;

/** \\brief  TIM channel 0 SMU shadow counter register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_CNTS_Bits B;
} Ifx_GTM_TIM_CH_CNTS;

/** \\brief  TIM channel 0 control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_CTRL_Bits B;
} Ifx_GTM_TIM_CH_CTRL;

/** \\brief  TIM channel 0 SMU edge counter register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_ECNT_Bits B;
} Ifx_GTM_TIM_CH_ECNT;

/** \\brief  TIM channel 0 extended control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_ECTRL_Bits B;
} Ifx_GTM_TIM_CH_ECTRL;

/** \\brief  TIM channel 0 error interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                U;
    /** \brief Signed access */
    signed int                  I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_EIRQ_EN_Bits B;
} Ifx_GTM_TIM_CH_EIRQ_EN;

/** \\brief  TIM channel 0 filter parameter 1 register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_FLT_FE_Bits B;
} Ifx_GTM_TIM_CH_FLT_FE;

/** \\brief  TIM channel 0 filter parameter 0 register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_FLT_RE_Bits B;
} Ifx_GTM_TIM_CH_FLT_RE;

/** \\brief  TIM channel 0 general purpose 0 register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_GPR0_Bits B;
} Ifx_GTM_TIM_CH_GPR0;

/** \\brief  TIM channel 0 general purpose 1 register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_GPR1_Bits B;
} Ifx_GTM_TIM_CH_GPR1;

/** \\brief  TIM channel 0 interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_IRQ_EN_Bits B;
} Ifx_GTM_TIM_CH_IRQ_EN;

/** \\brief  TIM channel 0 force interrupt register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_TIM_CH_IRQ_FORCINT;

/** \\brief  TIM channel 0 interrupt mode configuration register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_IRQ_MODE_Bits B;
} Ifx_GTM_TIM_CH_IRQ_MODE;

/** \\brief  TIM channel 0 interrupt notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_TIM_CH_IRQ_NOTIFY;

/** \\brief  TIM channel 0 TDU counter register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_TDUC_Bits B;
} Ifx_GTM_TIM_CH_TDUC;

/** \\brief  TIM channel 0 TDU control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_CH_TDUV_Bits B;
} Ifx_GTM_TIM_CH_TDUV;

/** \\brief  TIM channel x AUX IN source selection register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_IN_SRC_Bits B;
} Ifx_GTM_TIM_IN_SRC;

/** \\brief  TIM input value observation register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_INP_VAL_Bits B;
} Ifx_GTM_TIM_INP_VAL;

/** \\brief  TIM global software reset register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_TIM_RST_Bits B;
} Ifx_GTM_TIM_RST;

/** \\brief  TOM channel 0 CCU0 compare register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_CM0_Bits B;
} Ifx_GTM_TOM_CH_CM0;

/** \\brief  TOM channel 0 CCU1 compare register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_CM1_Bits B;
} Ifx_GTM_TOM_CH_CM1;

/** \\brief  TOM channel 0 CCU0 counter register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_CN0_Bits B;
} Ifx_GTM_TOM_CH_CN0;

/** \\brief  TOM channel 0 control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_CTRL_Bits B;
} Ifx_GTM_TOM_CH_CTRL;

/** \\brief  TOM channel 0 interrupt enable register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int               U;
    /** \brief Signed access */
    signed int                 I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_IRQ_EN_Bits B;
} Ifx_GTM_TOM_CH_IRQ_EN;

/** \\brief  TOM channel 0 force interrupt register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_IRQ_FORCINT_Bits B;
} Ifx_GTM_TOM_CH_IRQ_FORCINT;

/** \\brief  TOM channel 0 interrupt mode register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_IRQ_MODE_Bits B;
} Ifx_GTM_TOM_CH_IRQ_MODE;

/** \\brief  TOM channel 0 interrupt notification register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_IRQ_NOTIFY_Bits B;
} Ifx_GTM_TOM_CH_IRQ_NOTIFY;

/** \\brief  TOM channel 0 CCU0 compare shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_SR0_Bits B;
} Ifx_GTM_TOM_CH_SR0;

/** \\brief  TOM channel 0 CCU1 compare shadow register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_SR1_Bits B;
} Ifx_GTM_TOM_CH_SR1;

/** \\brief  TOM channel 0 status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_CH_STAT_Bits B;
} Ifx_GTM_TOM_CH_STAT;

/** \\brief  GTM TOM   output level */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_OUT_Bits B;
} Ifx_GTM_TOM_OUT;

/** \\brief  TOM TGC 0 action time base register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC0_ACT_TB_Bits B;
} Ifx_GTM_TOM_TGC0_ACT_TB;

/** \\brief  TOM TGC 0 enable/disable control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC0_ENDIS_CTRL_Bits B;
} Ifx_GTM_TOM_TGC0_ENDIS_CTRL;

/** \\brief  TOM TGC 0 enable/disable status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC0_ENDIS_STAT_Bits B;
} Ifx_GTM_TOM_TGC0_ENDIS_STAT;

/** \\brief  TOM TGC 0 force update control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC0_FUPD_CTRL_Bits B;
} Ifx_GTM_TOM_TGC0_FUPD_CTRL;

/** \\brief  TOM TGC 0 global control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC0_GLB_CTRL_Bits B;
} Ifx_GTM_TOM_TGC0_GLB_CTRL;

/** \\brief  TOM TGC 0 internal trigger control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC0_INT_TRIG_Bits B;
} Ifx_GTM_TOM_TGC0_INT_TRIG;

/** \\brief  TOM TGC 0 output enable control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC0_OUTEN_CTRL_Bits B;
} Ifx_GTM_TOM_TGC0_OUTEN_CTRL;

/** \\brief  TOM TGC 0 output enable status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC0_OUTEN_STAT_Bits B;
} Ifx_GTM_TOM_TGC0_OUTEN_STAT;

/** \\brief  TOM TGC 1 action time base register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                 U;
    /** \brief Signed access */
    signed int                   I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC1_ACT_TB_Bits B;
} Ifx_GTM_TOM_TGC1_ACT_TB;

/** \\brief  TOM TGC 1 enable/disable control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC1_ENDIS_CTRL_Bits B;
} Ifx_GTM_TOM_TGC1_ENDIS_CTRL;

/** \\brief  TOM TGC 1 enable/disable status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC1_ENDIS_STAT_Bits B;
} Ifx_GTM_TOM_TGC1_ENDIS_STAT;

/** \\brief  TOM TGC 1 force update control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                    U;
    /** \brief Signed access */
    signed int                      I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC1_FUPD_CTRL_Bits B;
} Ifx_GTM_TOM_TGC1_FUPD_CTRL;

/** \\brief  TOM TGC 1 global control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC1_GLB_CTRL_Bits B;
} Ifx_GTM_TOM_TGC1_GLB_CTRL;

/** \\brief  TOM TGC 1 internal trigger control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                   U;
    /** \brief Signed access */
    signed int                     I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC1_INT_TRIG_Bits B;
} Ifx_GTM_TOM_TGC1_INT_TRIG;

/** \\brief  TOM TGC 1 output enable control register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC1_OUTEN_CTRL_Bits B;
} Ifx_GTM_TOM_TGC1_OUTEN_CTRL;

/** \\brief  TOM TGC 1 output enable status register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int                     U;
    /** \brief Signed access */
    signed int                       I;
    /** \brief Bitfield access */
    Ifx_GTM_TOM_TGC1_OUTEN_STAT_Bits B;
} Ifx_GTM_TOM_TGC1_OUTEN_STAT;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */

/** \\brief  MSC Input Control Register */
typedef volatile struct _Ifx_GTM_INOUTSEL_MSC_IN
{
    Ifx_GTM_INOUTSEL_MSC_IN_INLCON    INLCON;    /**< \brief 0, MSC0 Input Low Control Register */
    Ifx_GTM_INOUTSEL_MSC_IN_INHCON    INHCON;    /**< \brief 4, MSC0 Input High Control Register */
    Ifx_GTM_INOUTSEL_MSC_IN_INLEXTCON INLEXTCON; /**< \brief 8, MSC0 Input Low Extended Control Register */
} Ifx_GTM_INOUTSEL_MSC_IN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */

/** \\brief  AFD FIFO channel objects */
typedef volatile struct _Ifx_GTM_AFD_CH
{
    Ifx_GTM_AFD_CH_BUF_ACC BUF_ACC;         /**< \brief 0, AFD 0 FIFO 0 buffer access register */
    unsigned char          reserved_4[12];  /**< \brief 4, \internal Reserved */
} Ifx_GTM_AFD_CH;

/** \\brief  ACG object */
typedef volatile struct _Ifx_GTM_ATOM_AGC
{
    Ifx_GTM_ATOM_AGC_GLB_CTRL   GLB_CTRL;        /**< \brief 0, ATOM AGC global control register */
    Ifx_GTM_ATOM_AGC_ENDIS_CTRL ENDIS_CTRL;      /**< \brief 4, ATOM AGC enable/disable control register */
    Ifx_GTM_ATOM_AGC_ENDIS_STAT ENDIS_STAT;      /**< \brief 8, ATOM AGC enable/disable status register */
    Ifx_GTM_ATOM_AGC_ACT_TB     ACT_TB;          /**< \brief C, ATOM AGC action time base register */
    Ifx_GTM_ATOM_AGC_OUTEN_CTRL OUTEN_CTRL;      /**< \brief 10, ATOM AGC output enable control register */
    Ifx_GTM_ATOM_AGC_OUTEN_STAT OUTEN_STAT;      /**< \brief 14, ATOM AGC output enable status register */
    Ifx_GTM_ATOM_AGC_FUPD_CTRL  FUPD_CTRL;       /**< \brief 18, ATOM AGC force update control register */
    Ifx_GTM_ATOM_AGC_INT_TRIG   INT_TRIG;        /**< \brief 1C, ATOM AGC internal trigger control register */
    unsigned char               reserved_20[32]; /**< \brief 20, \internal Reserved */
} Ifx_GTM_ATOM_AGC;

/** \\brief  ATOM channel objects */
typedef volatile struct _Ifx_GTM_ATOM_CH
{
    Ifx_GTM_ATOM_CH_RDADDR      RDADDR;          /**< \brief 0, ATOM channel 0 ARU read address register */
    union
    {
        Ifx_GTM_ATOM_CH_CTRL CTRL;               /**< \brief 4, ATOM Channel Control Register */
        Ifx_GTM_ATOM_CH_SOMI SOMI;               /**< \brief 4, ATOM Channel Control in SOMI mode Register */
        Ifx_GTM_ATOM_CH_SOMC SOMC;               /**< \brief 4, ATOM Channel Control in SOMC mode Register */
        Ifx_GTM_ATOM_CH_SOMP SOMP;               /**< \brief 4, ATOM Channel Control in SOMP mode Register */
        Ifx_GTM_ATOM_CH_SOMS SOMS;               /**< \brief 4, ATOM Channel Control in SOMS mode Register */
        Ifx_GTM_ATOM_CH_SOMB SOMB;               /**< \brief 4, ATOM Channel Control in SOMB mode Register */
    };
    Ifx_GTM_ATOM_CH_SR0         SR0;             /**< \brief 8, ATOM channel 0 CCU0 compare shadow register */
    Ifx_GTM_ATOM_CH_SR1         SR1;             /**< \brief C, ATOM channel 0 CCU1 compare shadow register */
    Ifx_GTM_ATOM_CH_CM0         CM0;             /**< \brief 10, ATOM channel 0 CCU0 compare register */
    Ifx_GTM_ATOM_CH_CM1         CM1;             /**< \brief 14, ATOM channel 0 CCU1 compare register */
    Ifx_GTM_ATOM_CH_CN0         CN0;             /**< \brief 18, ATOM channel 0 CCU0 counter register */
    Ifx_GTM_ATOM_CH_STAT        STAT;            /**< \brief 1C, ATOM channel 0 status register */
    Ifx_GTM_ATOM_CH_IRQ_NOTIFY  IRQ_NOTIFY;      /**< \brief 20, ATOM channel 0 interrupt notification register */
    Ifx_GTM_ATOM_CH_IRQ_EN      IRQ_EN;          /**< \brief 24, ATOM channel 0 interrupt enable register */
    Ifx_GTM_ATOM_CH_IRQ_FORCINT IRQ_FORCINT;     /**< \brief 28, ATOM channel 0 software interrupt generation */
    Ifx_GTM_ATOM_CH_IRQ_MODE    IRQ_MODE;        /**< \brief 2C, ATOM channel 0 interrupt mode configuration register */
    unsigned char               reserved_30[16]; /**< \brief 30, \internal Reserved */
} Ifx_GTM_ATOM_CH;

/** \\brief  BRC input channel objects */
typedef volatile struct _Ifx_GTM_BRC_SRC
{
    Ifx_GTM_BRC_SRC_ADDR ADDR;              /**< \brief 0, BRC read address for input channel 0 */
    Ifx_GTM_BRC_SRC_DEST DEST;              /**< \brief 4, BRC destination channels for input channel 0 */
} Ifx_GTM_BRC_SRC;

/** \\brief  DTM channel objects */
typedef volatile struct _Ifx_GTM_CDTM_DTM
{
    Ifx_GTM_CDTM_DTM_CTRL        CTRL;            /**< \brief 0, CDTM0 DTM0 global configuration and control register */
    Ifx_GTM_CDTM_DTM_CH_CTRL1    CH_CTRL1;        /**< \brief 4, CDTM0 DTM0 channel control register 1 */
    Ifx_GTM_CDTM_DTM_CH_CTRL2    CH_CTRL2;        /**< \brief 8, CDTM0 DTM0 channel control register 2 */
    Ifx_GTM_CDTM_DTM_CH_CTRL2_SR CH_CTRL2_SR;     /**< \brief C, CDTM0 DTM0 channel control register 2 shadow */
    Ifx_GTM_CDTM_DTM_PS_CTRL     PS_CTRL;         /**< \brief 10, CDTM0 DTM0 phase shift unit configuration and control register */
    Ifx_GTM_CDTM_DTM_CH_DTV      CH_DTV[4];       /**< \brief 14, CDTM0 DTM0 channel 0 dead time reload values */
    Ifx_GTM_CDTM_DTM_CH_SR       CH_SR;           /**< \brief 24, CDTM DTM0 channel shadow reg0ster */
    Ifx_GTM_CDTM_DTM_CH_CTRL3    CH_CTRL3;        /**< \brief 28, CDTM0 DTM0 channel control register 3 */
    unsigned char                reserved_2C[20]; /**< \brief 2C, \internal Reserved */
} Ifx_GTM_CDTM_DTM;

/** \\brief  CLK objects */
typedef volatile struct _Ifx_GTM_CMU_CLK0_5
{
    Ifx_GTM_CMU_CLK0_5_CTRL CTRL;           /**< \brief 0, CMU control for clock source 0 */
} Ifx_GTM_CMU_CLK0_5;

/** \\brief  CLK objects */
typedef volatile struct _Ifx_GTM_CMU_CLK_6
{
    Ifx_GTM_CMU_CLK_6_CTRL CTRL;            /**< \brief 0, CMU control for clock source 6 */
} Ifx_GTM_CMU_CLK_6;

/** \\brief  CLK objects */
typedef volatile struct _Ifx_GTM_CMU_CLK_7
{
    Ifx_GTM_CMU_CLK_7_CTRL CTRL;            /**< \brief 0, CMU control for clock source 7 */
} Ifx_GTM_CMU_CLK_7;

/** \\brief  ECLK objects */
typedef volatile struct _Ifx_GTM_CMU_ECLK
{
    Ifx_GTM_CMU_ECLK_NUM NUM;               /**< \brief 0, CMU external clock 0 control numerator */
    Ifx_GTM_CMU_ECLK_DEN DEN;               /**< \brief 4, CMU external clock 0 control denominator */
} Ifx_GTM_CMU_ECLK;

/** \\brief  FXCLK objects */
typedef volatile struct _Ifx_GTM_CMU_FXCLK
{
    Ifx_GTM_CMU_FXCLK_CTRL CTRL;            /**< \brief 0, CMU control FXCLK sub-unit input clock */
} Ifx_GTM_CMU_FXCLK;

/** \\brief  F2A ARU RD FIFO address */
typedef volatile struct _Ifx_GTM_F2A_RD_CH
{
    Ifx_GTM_F2A_RD_CH_ARU_RD_FIFO ARU_RD_FIFO;  /**< \brief 0, F2A0 stream 0 read address register */
} Ifx_GTM_F2A_RD_CH;

/** \\brief  F2A Stream configuration */
typedef volatile struct _Ifx_GTM_F2A_STR_CH
{
    Ifx_GTM_F2A_STR_CH_STR_CFG STR_CFG;     /**< \brief 0, F2A0 stream 0 configuration register */
} Ifx_GTM_F2A_STR_CH;

/** \\brief  FIFO channel */
typedef volatile struct _Ifx_GTM_FIFO_CH
{
    Ifx_GTM_FIFO_CH_CTRL        CTRL;           /**< \brief 0, FIFO0 channel 0 control register */
    Ifx_GTM_FIFO_CH_END_ADDR    END_ADDR;       /**< \brief 4, FIFO0 channel 0 end address register */
    Ifx_GTM_FIFO_CH_START_ADDR  START_ADDR;     /**< \brief 8, FIFO0 channel 0 start address register */
    Ifx_GTM_FIFO_CH_UPPER_WM    UPPER_WM;       /**< \brief C, FIFO0 channel 0 upper watermark register */
    Ifx_GTM_FIFO_CH_LOWER_WM    LOWER_WM;       /**< \brief 10, FIFO0 channel 0 lower watermark register */
    Ifx_GTM_FIFO_CH_STATUS      STATUS;         /**< \brief 14, FIFO0 channel 0 status register */
    Ifx_GTM_FIFO_CH_FILL_LEVEL  FILL_LEVEL;     /**< \brief 18, FIFO0 channel 0 fill level register */
    Ifx_GTM_FIFO_CH_WR_PTR      WR_PTR;         /**< \brief 1C, FIFO0 channel 0 write pointer register */
    Ifx_GTM_FIFO_CH_RD_PTR      RD_PTR;         /**< \brief 20, FIFO0 channel 0 read pointer register */
    Ifx_GTM_FIFO_CH_IRQ_NOTIFY  IRQ_NOTIFY;     /**< \brief 24, FIFO0 channel 0 interrupt notification register */
    Ifx_GTM_FIFO_CH_IRQ_EN      IRQ_EN;         /**< \brief 28, FIFO0 channel 0 interrupt enable register */
    Ifx_GTM_FIFO_CH_IRQ_FORCINT IRQ_FORCINT;    /**< \brief 2C, FIFO0 channel 0 force interrupt register */
    Ifx_GTM_FIFO_CH_IRQ_MODE    IRQ_MODE;       /**< \brief 30, FIFO0 channel 0 interrupt mode control register */
    Ifx_GTM_FIFO_CH_EIRQ_EN     EIRQ_EN;        /**< \brief 34, FIFO0 channel 0 error interrupt enable register */
    unsigned char               reserved_38[8]; /**< \brief 38, \internal Reserved */
} Ifx_GTM_FIFO_CH;

/** \\brief  ADCTRIG */
typedef volatile struct _Ifx_GTM_INOUTSEL_ADCTRIG
{
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT00 OUT00;   /**< \brief 0, ADC Trigger 0 Output Select 1 Register */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT01 OUT01;   /**< \brief 4, ADC Trigger 0 Output Select 1 Register */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT10 OUT10;   /**< \brief 8, ADC Trigger 1 Output Select 1 Register */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT11 OUT11;   /**< \brief C, ADC Trigger 1 Output Select 1 Register */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT20 OUT20;   /**< \brief 10, ADC Trigger 2 Output Select 1 Register */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT21 OUT21;   /**< \brief 14, ADC Trigger 1 Output Select 1 Register */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT30 OUT30;   /**< \brief 18, ADC Trigger 3Output Select 1 Register */
    Ifx_GTM_INOUTSEL_ADCTRIG_OUT31 OUT31;   /**< \brief 1C, ADC Trigger 1 Output Select 1 Register */
} Ifx_GTM_INOUTSEL_ADCTRIG;

/** \\brief  CAN */
typedef volatile struct _Ifx_GTM_INOUTSEL_CAN
{
    Ifx_GTM_INOUTSEL_CAN_OUTSEL OUTSEL;     /**< \brief 0, CAN Output Select Register */
} Ifx_GTM_INOUTSEL_CAN;

/** \\brief  DATAIN */
typedef volatile struct _Ifx_GTM_INOUTSEL_DATA
{
    Ifx_GTM_INOUTSEL_DATA_IN0 IN0;          /**< \brief 0, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN1 IN1;          /**< \brief 4, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN2 IN2;          /**< \brief 8, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN3 IN3;          /**< \brief C, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN4 IN4;          /**< \brief 10, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN5 IN5;          /**< \brief 14, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN6 IN6;          /**< \brief 18, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN7 IN7;          /**< \brief 1C, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN8 IN8;          /**< \brief 20, Data Input n Register */
    Ifx_GTM_INOUTSEL_DATA_IN9 IN9;          /**< \brief 24, Data Input n Register */
} Ifx_GTM_INOUTSEL_DATA;

/** \\brief  DSADC */
typedef volatile struct _Ifx_GTM_INOUTSEL_DSADC
{
    Ifx_GTM_INOUTSEL_DSADC_INSEL   INSEL[6]; /**< \brief 0, DSADC Input Select Register */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL0 OUTSEL00; /**< \brief 18, DSADC Output Select 00 Register */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL1 OUTSEL01; /**< \brief 1C, DSADC Output Select 01 Register */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL0 OUTSEL10; /**< \brief 20, DSADC Output Select 10 Register */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL1 OUTSEL11; /**< \brief 24, DSADC Output Select 11 Register */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL0 OUTSEL20; /**< \brief 28, DSADC Output Select 20 Register */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL1 OUTSEL21; /**< \brief 2C, DSADC Output Select 21 Register */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL0 OUTSEL30; /**< \brief 30, DSADC Output Select 30 Register */
    Ifx_GTM_INOUTSEL_DSADC_OUTSEL1 OUTSEL31; /**< \brief 34, DSADC Output Select 31 Register */
} Ifx_GTM_INOUTSEL_DSADC;

/** \\brief  INT */
typedef volatile struct _Ifx_GTM_INOUTSEL_INT
{
    Ifx_GTM_INOUTSEL_INT_OUT0 OUT0;         /**< \brief 0, I0terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT1 OUT1;         /**< \brief 4, I1terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT2 OUT2;         /**< \brief 8, I2terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT3 OUT3;         /**< \brief C, I3terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT4 OUT4;         /**< \brief 10, I4terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT5 OUT5;         /**< \brief 14, I5terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT6 OUT6;         /**< \brief 18, I6terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT7 OUT7;         /**< \brief 1C, I7terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT8 OUT8;         /**< \brief 20, I8terrupt Output Register n */
    Ifx_GTM_INOUTSEL_INT_OUT9 OUT9;         /**< \brief 24, I9terrupt Output Register n */
} Ifx_GTM_INOUTSEL_INT;

/** \\brief  MSC */
typedef volatile struct _Ifx_GTM_INOUTSEL_MSC
{
    Ifx_GTM_INOUTSEL_MSC_SET1CON0 SET1CON0; /**< \brief 0, MSC Set 1 Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET1CON1 SET1CON1; /**< \brief 4, MSC Set 1 Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET1CON2 SET1CON2; /**< \brief 8, MSC Set 1 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET1CON3 SET1CON3; /**< \brief C, MSC Set 1 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_SET2CON0 SET2CON0; /**< \brief 10, MSC Set 2 Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET2CON1 SET2CON1; /**< \brief 14, MSC Set 2 Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET2CON2 SET2CON2; /**< \brief 18, MSC Set 2 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET2CON3 SET2CON3; /**< \brief 1C, MSC Set 2 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_SET3CON0 SET3CON0; /**< \brief 20, MSC Set 3Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET3CON1 SET3CON1; /**< \brief 24, MSC Set 3Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET3CON2 SET3CON2; /**< \brief 28, MSC Set 3 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET3CON3 SET3CON3; /**< \brief 2C, MSC Set 3 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_SET4CON0 SET4CON0; /**< \brief 30, MSC Set 4 Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET4CON1 SET4CON1; /**< \brief 34, MSC Set 4 Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET4CON2 SET4CON2; /**< \brief 38, MSC Set 4 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET4CON3 SET4CON3; /**< \brief 3C, MSC Set 4 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_SET5CON0 SET5CON0; /**< \brief 40, MSC Set 5 Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET5CON1 SET5CON1; /**< \brief 44, MSC Set 5 Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET5CON2 SET5CON2; /**< \brief 48, MSC Set 5 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET5CON3 SET5CON3; /**< \brief 4C, MSC Set 5 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_SET6CON0 SET6CON0; /**< \brief 50, MSC Set 6 Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET6CON1 SET6CON1; /**< \brief 54, MSC Set 6 Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET6CON2 SET6CON2; /**< \brief 58, MSC Set 6 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET6CON3 SET6CON3; /**< \brief 5C, MSC Set 6 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_SET7CON0 SET7CON0; /**< \brief 60, MSC Set 7Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET7CON1 SET7CON1; /**< \brief 64, MSC Set 7 Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET7CON2 SET7CON2; /**< \brief 68, MSC Set 7 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET7CON3 SET7CON3; /**< \brief 6C, MSC Set 7 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_SET8CON0 SET8CON0; /**< \brief 70, MSC Set 8Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET8CON1 SET8CON1; /**< \brief 74, MSC Set 8 Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET8CON2 SET8CON2; /**< \brief 78, MSC Set 8 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET8CON3 SET8CON3; /**< \brief 7C, MSC Set 8 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_SET9CON0 SET9CON0; /**< \brief 80, MSC Set 9Control 0 Register */
    Ifx_GTM_INOUTSEL_MSC_SET9CON1 SET9CON1; /**< \brief 84, MSC Set 9 Control 1 Register */
    Ifx_GTM_INOUTSEL_MSC_SET9CON2 SET9CON2; /**< \brief 88, MSC Set 9 Control 2 Register */
    Ifx_GTM_INOUTSEL_MSC_SET9CON3 SET9CON3; /**< \brief 8C, MSC Set 9 Control 3 Register */
    Ifx_GTM_INOUTSEL_MSC_IN       IN[4];    /**< \brief 90, MSC Input Control Register */
} Ifx_GTM_INOUTSEL_MSC;

/** \\brief  PSI5S */
typedef volatile struct _Ifx_GTM_INOUTSEL_PSI5S
{
    Ifx_GTM_INOUTSEL_PSI5S_OUTSEL OUTSEL;   /**< \brief 0, PSI5-S Output Select Register */
} Ifx_GTM_INOUTSEL_PSI5S;

/** \\brief  Timer */
typedef volatile struct _Ifx_GTM_INOUTSEL_T
{
    Ifx_GTM_INOUTSEL_T_OUTSEL OUTSEL[34];   /**< \brief 0, Timer Output Select Register */
} Ifx_GTM_INOUTSEL_T;

/** \\brief  TIM */
typedef volatile struct _Ifx_GTM_INOUTSEL_TIM
{
    Ifx_GTM_INOUTSEL_TIM_INSEL INSEL;       /**< \brief 0, TIM Input Select Register */
} Ifx_GTM_INOUTSEL_TIM;

/** \\brief  TRIG */
typedef volatile struct _Ifx_GTM_INOUTSEL_TRIG
{
    Ifx_GTM_INOUTSEL_TRIG_OUT0 OUT0;        /**< \brief 0, Trigger Output Register 0 */
    Ifx_GTM_INOUTSEL_TRIG_OUT1 OUT1;        /**< \brief 4, Trigger Output Register 1 */
    Ifx_GTM_INOUTSEL_TRIG_OUT2 OUT2;        /**< \brief 8, Trigger Output Register 2 */
    Ifx_GTM_INOUTSEL_TRIG_OUT3 OUT3;        /**< \brief C, Trigger Output Register 3 */
    Ifx_GTM_INOUTSEL_TRIG_OUT4 OUT4;        /**< \brief 10, Trigger Output Register 4 */
    Ifx_GTM_INOUTSEL_TRIG_OUT5 OUT5;        /**< \brief 14, Trigger Output Register 5 */
    Ifx_GTM_INOUTSEL_TRIG_OUT6 OUT6;        /**< \brief 18, Trigger Output Register 6 */
    Ifx_GTM_INOUTSEL_TRIG_OUT7 OUT7;        /**< \brief 1C, Trigger Output Register 7 */
    Ifx_GTM_INOUTSEL_TRIG_OUT8 OUT8;        /**< \brief 20, Trigger Output Register 8 */
    Ifx_GTM_INOUTSEL_TRIG_OUT9 OUT9;        /**< \brief 24, Trigger Output Register 9 */
} Ifx_GTM_INOUTSEL_TRIG;

/** \\brief  MCS channel objects */
typedef volatile struct _Ifx_GTM_MCS_CH
{
    Ifx_GTM_MCS_CH_R0          R0;              /**< \brief 0, MCS channel 1 general purpose register 0 */
    Ifx_GTM_MCS_CH_R1          R1;              /**< \brief 4, MCS channel 1 general purpose register 1 */
    Ifx_GTM_MCS_CH_R2          R2;              /**< \brief 8, MCS channel 1 general purpose register 2 */
    Ifx_GTM_MCS_CH_R3          R3;              /**< \brief C, MCS channel 1 general purpose register 3 */
    Ifx_GTM_MCS_CH_R4          R4;              /**< \brief 10, MCS channel 1 general purpose register 4 */
    Ifx_GTM_MCS_CH_R5          R5;              /**< \brief 14, MCS channel 1 general purpose register 5 */
    Ifx_GTM_MCS_CH_R6          R6;              /**< \brief 18, MCS channel 1 general purpose register 6 */
    Ifx_GTM_MCS_CH_R7          R7;              /**< \brief 1C, MCS channel 1 general purpose register 7 */
    Ifx_GTM_MCS_CH_CTRL        CTRL;            /**< \brief 20, MCS channel 1 control register */
    Ifx_GTM_MCS_CH_ACB         ACB;             /**< \brief 24, MCS channel 1 ARU control Bit register */
    unsigned char              reserved_28[20]; /**< \brief 28, \internal Reserved */
    Ifx_GTM_MCS_CH_MHB         MHB;             /**< \brief 3C, MCS channel 1 memory high byte register */
    Ifx_GTM_MCS_CH_PC          PC;              /**< \brief 40, MCS channel 1 program counter register */
    Ifx_GTM_MCS_CH_IRQ_NOTIFY  IRQ_NOTIFY;      /**< \brief 44, MCS channel 1 interrupt notification register */
    Ifx_GTM_MCS_CH_IRQ_EN      IRQ_EN;          /**< \brief 48, MCS channel 1 interrupt enable register */
    Ifx_GTM_MCS_CH_IRQ_FORCINT IRQ_FORCINT;     /**< \brief 4C, MCS channel 1 force interrupt register */
    Ifx_GTM_MCS_CH_IRQ_MODE    IRQ_MODE;        /**< \brief 50, MCS channel 1 IRQ mode configuration register */
    Ifx_GTM_MCS_CH_EIRQ_EN     EIRQ_EN;         /**< \brief 54, MCS channel 1 error interrupt enable register */
    unsigned char              reserved_58[40]; /**< \brief 58, \internal Reserved */
} Ifx_GTM_MCS_CH;

/** \\brief  MCS channel0 object */
typedef volatile struct _Ifx_GTM_MCS_CH0
{
    Ifx_GTM_MCS_CH_R0          R0;              /**< \brief 0, MCS channel 0 general purpose register 0 */
    Ifx_GTM_MCS_CH_R1          R1;              /**< \brief 4, MCS channel 0 general purpose register 1 */
    Ifx_GTM_MCS_CH_R2          R2;              /**< \brief 8, MCS channel 0 general purpose register 2 */
    Ifx_GTM_MCS_CH_R3          R3;              /**< \brief C, MCS channel 0 general purpose register 3 */
    Ifx_GTM_MCS_CH_R4          R4;              /**< \brief 10, MCS channel 0 general purpose register 4 */
    Ifx_GTM_MCS_CH_R5          R5;              /**< \brief 14, MCS channel 0 general purpose register 5 */
    Ifx_GTM_MCS_CH_R6          R6;              /**< \brief 18, MCS channel 0 general purpose register 6 */
    Ifx_GTM_MCS_CH_R7          R7;              /**< \brief 1C, MCS channel 0 general purpose register 7 */
    Ifx_GTM_MCS_CH_CTRL        CTRL;            /**< \brief 20, MCS channel 0 control register */
    Ifx_GTM_MCS_CH_ACB         ACB;             /**< \brief 24, MCS channel 0 ARU control Bit register */
    Ifx_GTM_MCS_CH0_CTRG       CTRG;            /**< \brief 28, MCS clear trigger control register */
    Ifx_GTM_MCS_CH0_STRG       STRG;            /**< \brief 2C, MCS set trigger control register */
    unsigned char              reserved_30[12]; /**< \brief 30, \internal Reserved */
    Ifx_GTM_MCS_CH_MHB         MHB;             /**< \brief 3C, MCS channel 0 memory high byte register */
    Ifx_GTM_MCS_CH_PC          PC;              /**< \brief 40, MCS channel 0 program counter register */
    Ifx_GTM_MCS_CH_IRQ_NOTIFY  IRQ_NOTIFY;      /**< \brief 44, MCS channel 0 interrupt notification register */
    Ifx_GTM_MCS_CH_IRQ_EN      IRQ_EN;          /**< \brief 48, MCS channel 0 interrupt enable register */
    Ifx_GTM_MCS_CH_IRQ_FORCINT IRQ_FORCINT;     /**< \brief 4C, MCS channel 0 force interrupt register */
    Ifx_GTM_MCS_CH_IRQ_MODE    IRQ_MODE;        /**< \brief 50, MCS channel 0 IRQ mode configuration register */
    Ifx_GTM_MCS_CH_EIRQ_EN     EIRQ_EN;         /**< \brief 54, MCS channel 0 error interrupt enable register */
} Ifx_GTM_MCS_CH0;

/** \\brief  TIM channel objects */
typedef volatile struct _Ifx_GTM_TIM_CH
{
    Ifx_GTM_TIM_CH_GPR0        GPR0;            /**< \brief 0, TIM channel 0 general purpose 0 register */
    Ifx_GTM_TIM_CH_GPR1        GPR1;            /**< \brief 4, TIM channel 0 general purpose 1 register */
    Ifx_GTM_TIM_CH_CNT         CNT;             /**< \brief 8, TIM channel 0 SMU counter register */
    Ifx_GTM_TIM_CH_ECNT        ECNT;            /**< \brief C, TIM channel 0 SMU edge counter register */
    Ifx_GTM_TIM_CH_CNTS        CNTS;            /**< \brief 10, TIM channel 0 SMU shadow counter register */
    Ifx_GTM_TIM_CH_TDUC        TDUC;            /**< \brief 14, TIM channel 0 TDU counter register */
    Ifx_GTM_TIM_CH_TDUV        TDUV;            /**< \brief 18, TIM channel 0 TDU control register */
    Ifx_GTM_TIM_CH_FLT_RE      FLT_RE;          /**< \brief 1C, TIM channel 0 filter parameter 0 register */
    Ifx_GTM_TIM_CH_FLT_FE      FLT_FE;          /**< \brief 20, TIM channel 0 filter parameter 1 register */
    Ifx_GTM_TIM_CH_CTRL        CTRL;            /**< \brief 24, TIM channel 0 control register */
    Ifx_GTM_TIM_CH_ECTRL       ECTRL;           /**< \brief 28, TIM channel 0 extended control register */
    Ifx_GTM_TIM_CH_IRQ_NOTIFY  IRQ_NOTIFY;      /**< \brief 2C, TIM channel 0 interrupt notification register */
    Ifx_GTM_TIM_CH_IRQ_EN      IRQ_EN;          /**< \brief 30, TIM channel 0 interrupt enable register */
    Ifx_GTM_TIM_CH_IRQ_FORCINT IRQ_FORCINT;     /**< \brief 34, TIM channel 0 force interrupt register */
    Ifx_GTM_TIM_CH_IRQ_MODE    IRQ_MODE;        /**< \brief 38, TIM channel 0 interrupt mode configuration register */
    Ifx_GTM_TIM_CH_EIRQ_EN     EIRQ_EN;         /**< \brief 3C, TIM channel 0 error interrupt enable register */
    unsigned char              reserved_40[52]; /**< \brief 40, \internal Reserved */
} Ifx_GTM_TIM_CH;

/** \\brief  TOM channel objects */
typedef volatile struct _Ifx_GTM_TOM_CH
{
    Ifx_GTM_TOM_CH_CTRL        CTRL;           /**< \brief 0, TOM channel 0 control register */
    Ifx_GTM_TOM_CH_SR0         SR0;            /**< \brief 4, TOM channel 0 CCU0 compare shadow register */
    Ifx_GTM_TOM_CH_SR1         SR1;            /**< \brief 8, TOM channel 0 CCU1 compare shadow register */
    Ifx_GTM_TOM_CH_CM0         CM0;            /**< \brief C, TOM channel 0 CCU0 compare register */
    Ifx_GTM_TOM_CH_CM1         CM1;            /**< \brief 10, TOM channel 0 CCU1 compare register */
    Ifx_GTM_TOM_CH_CN0         CN0;            /**< \brief 14, TOM channel 0 CCU0 counter register */
    Ifx_GTM_TOM_CH_STAT        STAT;           /**< \brief 18, TOM channel 0 status register */
    Ifx_GTM_TOM_CH_IRQ_NOTIFY  IRQ_NOTIFY;     /**< \brief 1C, TOM channel 0 interrupt notification register */
    Ifx_GTM_TOM_CH_IRQ_EN      IRQ_EN;         /**< \brief 20, TOM channel 0 interrupt enable register */
    Ifx_GTM_TOM_CH_IRQ_FORCINT IRQ_FORCINT;    /**< \brief 24, TOM channel 0 force interrupt register */
    Ifx_GTM_TOM_CH_IRQ_MODE    IRQ_MODE;       /**< \brief 28, TOM channel 0 interrupt mode register */
    unsigned char              reserved_2C[4]; /**< \brief 2C, \internal Reserved */
} Ifx_GTM_TOM_CH;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \\brief  AFD object */
typedef volatile struct _Ifx_GTM_AFD
{
    Ifx_GTM_AFD_CH CH[8];                   /**< \brief 0, AFD FIFO channel objects */
    unsigned char  reserved_80[768];        /**< \brief 80, \internal Reserved */
} Ifx_GTM_AFD;

/** \\brief  ARU object */
typedef volatile struct _Ifx_GTM_ARU
{
    Ifx_GTM_ARU_ARU_ACCESS          ARU_ACCESS;         /**< \brief 0, ARU access register */
    Ifx_GTM_ARU_DATA_H              DATA_H;             /**< \brief 4, ARU access register upper data word */
    Ifx_GTM_ARU_DATA_L              DATA_L;             /**< \brief 8, ARU access register lower data word */
    Ifx_GTM_ARU_DBG_ACCESS0         DBG_ACCESS0;        /**< \brief C, ARU debug access channel 0 */
    Ifx_GTM_ARU_DBG_DATA0_H         DBG_DATA0_H;        /**< \brief 10, ARU debug access 0 transfer register upper data word */
    Ifx_GTM_ARU_DBG_DATA0_L         DBG_DATA0_L;        /**< \brief 14, ARU debug access 0 transfer register lower data word */
    Ifx_GTM_ARU_DBG_ACCESS1         DBG_ACCESS1;        /**< \brief 18, ARU debug access channel 1 */
    Ifx_GTM_ARU_DBG_DATA1_H         DBG_DATA1_H;        /**< \brief 1C, ARU debug access 1 transfer register upper data word */
    Ifx_GTM_ARU_DBG_DATA1_L         DBG_DATA1_L;        /**< \brief 20, ARU debug access 1 transfer register lower data word */
    Ifx_GTM_ARU_IRQ_NOTIFY          IRQ_NOTIFY;         /**< \brief 24, ARU interrupt notification register */
    Ifx_GTM_ARU_IRQ_EN              IRQ_EN;             /**< \brief 28, ARU interrupt enable register */
    Ifx_GTM_ARU_IRQ_FORCINT         IRQ_FORCINT;        /**< \brief 2C, ARU force interrupt register */
    Ifx_GTM_ARU_IRQ_MODE            IRQ_MODE;           /**< \brief 30, ARU interrupt mode register */
    Ifx_GTM_ARU_CADDR_END           CADDR_END;          /**< \brief 34, ARU caddr counter end value */
    unsigned char                   reserved_38[4];     /**< \brief 38, \internal Reserved */
    Ifx_GTM_ARU_CTRL                CTRL;               /**< \brief 3C, ARU enable dynamic routing */
    Ifx_GTM_ARU_0_DYN_CTRL          DYN_CTRL0;          /**< \brief 40, ARU 0 dynamic routing control register */
    Ifx_GTM_ARU_1_DYN_CTRL          DYN_CTRL1;          /**< \brief 44, ARU 1 dynamic routing control register */
    Ifx_GTM_ARU_0_DYN_ROUTE_LOW     DYN_ROUTE_LOW0;     /**< \brief 48, ARU 0 lower bits of DYN_ROUTE register */
    Ifx_GTM_ARU_1_DYN_ROUTE_LOW     DYN_ROUTE_LOW1;     /**< \brief 4C, ARU 1 lower bits of DYN_ROUTE register */
    Ifx_GTM_ARU_0_DYN_ROUTE_HIGH    DYN_ROUTE_HIGH0;    /**< \brief 50, ARU 0 higher bits of DYN_ROUTE register */
    Ifx_GTM_ARU_1_DYN_ROUTE_HIGH    DYN_ROUTE_HIGH1;    /**< \brief 54, ARU 1 higher bits of DYN_ROUTE register */
    Ifx_GTM_ARU_0_DYN_ROUTE_SR_LOW  DYN_ROUTE_SR_LOW0;  /**< \brief 58, ARU 0 shadow register for ARU_[z]_DYN_ROUTE_LOW */
    Ifx_GTM_ARU_1_DYN_ROUTE_SR_LOW  DYN_ROUTE_SR_LOW1;  /**< \brief 5C, ARU 1 shadow register for ARU_[z]_DYN_ROUTE_LOW */
    Ifx_GTM_ARU_0_DYN_ROUTE_SR_HIGH DYN_ROUTE_SR_HIGH0; /**< \brief 60, ARU 0 shadow register for ARU_[z]_DYN_ROUTE_HIGH */
    Ifx_GTM_ARU_1_DYN_ROUTE_SR_HIGH DYN_ROUTE_SR_HIGH1; /**< \brief 64, ARU 1 shadow register for ARU_[z]_DYN_ROUTE_HIGH */
    Ifx_GTM_ARU_0_DYN_RDADDR        DYN_RDADDR0;        /**< \brief 68, ARU 0 read ID for dynamic routing */
    Ifx_GTM_ARU_1_DYN_RDADDR        DYN_RDADDR1;        /**< \brief 6C, ARU 1 read ID for dynamic routing */
    unsigned char                   reserved_70[12];    /**< \brief 70, \internal Reserved */
    Ifx_GTM_ARU_CADDR               CADDR;              /**< \brief 7C, ARU caddr counter value */
} Ifx_GTM_ARU;

/** \\brief  ATOM objects */
typedef volatile struct _Ifx_GTM_ATOM
{
    Ifx_GTM_ATOM_CH  CH0;                   /**< \brief 0, ATOM channel objects */
    Ifx_GTM_ATOM_AGC AGC;                   /**< \brief 40, ACG object */
    Ifx_GTM_ATOM_CH  CH1;                   /**< \brief 80, ATOM channel objects */
    unsigned char    reserved_C0[64];       /**< \brief C0, \internal Reserved */
    Ifx_GTM_ATOM_CH  CH2;                   /**< \brief 100, ATOM channel objects */
    unsigned char    reserved_140[64];      /**< \brief 140, \internal Reserved */
    Ifx_GTM_ATOM_CH  CH3;                   /**< \brief 180, ATOM channel objects */
    unsigned char    reserved_1C0[64];      /**< \brief 1C0, \internal Reserved */
    Ifx_GTM_ATOM_CH  CH4;                   /**< \brief 200, ATOM channel objects */
    unsigned char    reserved_240[64];      /**< \brief 240, \internal Reserved */
    Ifx_GTM_ATOM_CH  CH5;                   /**< \brief 280, ATOM channel objects */
    unsigned char    reserved_2C0[64];      /**< \brief 2C0, \internal Reserved */
    Ifx_GTM_ATOM_CH  CH6;                   /**< \brief 300, ATOM channel objects */
    unsigned char    reserved_340[64];      /**< \brief 340, \internal Reserved */
    Ifx_GTM_ATOM_CH  CH7;                   /**< \brief 380, ATOM channel objects */
    unsigned char    reserved_3C0[1088];    /**< \brief 3C0, \internal Reserved */
} Ifx_GTM_ATOM;

/** \\brief  BRC object */
typedef volatile struct _Ifx_GTM_BRC
{
    Ifx_GTM_BRC_SRC         SRC[12];        /**< \brief 0, BRC input channel objects */
    Ifx_GTM_BRC_IRQ_NOTIFY  IRQ_NOTIFY;     /**< \brief 60, BRC interrupt notification register */
    Ifx_GTM_BRC_IRQ_EN      IRQ_EN;         /**< \brief 64, BRC interrupt enable register */
    Ifx_GTM_BRC_IRQ_FORCINT IRQ_FORCINT;    /**< \brief 68, BRC force interrupt register */
    Ifx_GTM_BRC_IRQ_MODE    IRQ_MODE;       /**< \brief 6C, BRC interrupt mode configuration register */
    Ifx_GTM_BRC_RST         RST;            /**< \brief 70, BRC software reset register */
    Ifx_GTM_BRC_EIRQ_EN     EIRQ_EN;        /**< \brief 74, BRC error interrupt enable register */
} Ifx_GTM_BRC;

/** \\brief  BRIDGE object */
typedef volatile struct _Ifx_GTM_BRIDGE
{
    Ifx_GTM_BRIDGE_MODE MODE;               /**< \brief 0, GTM AEI bridge mode register */
    Ifx_GTM_BRIDGE_PTR1 PTR1;               /**< \brief 4, GTM AEI bridge pointer 1 register */
    Ifx_GTM_BRIDGE_PTR2 PTR2;               /**< \brief 8, GTM AEI bridge pointer 2 register */
} Ifx_GTM_BRIDGE;

/** \\brief  CCM objects */
typedef volatile struct _Ifx_GTM_CCM
{
    Ifx_GTM_CCM_ARP0_CTRL      ARP0_CTRL;        /**< \brief 0, CCM Address Range Protector 0 Control Register */
    Ifx_GTM_CCM_ARP0_PROT      ARP0_PROT;        /**< \brief 4, CCM Address Range Protector 0 Protection Register */
    Ifx_GTM_CCM_ARP1_CTRL      ARP1_CTRL;        /**< \brief 8, CCM Address Range Protector 1 Control Register */
    Ifx_GTM_CCM_ARP1_PROT      ARP1_PROT;        /**< \brief C, CCM Address Range Protector 1 Protection Register */
    Ifx_GTM_CCM_ARP2_CTRL      ARP2_CTRL;        /**< \brief 10, CCM Address Range Protector 2 Control Register */
    Ifx_GTM_CCM_ARP2_PROT      ARP2_PROT;        /**< \brief 14, CCM Address Range Protector 2 Protection Register */
    Ifx_GTM_CCM_ARP3_CTRL      ARP3_CTRL;        /**< \brief 18, CCM Address Range Protector 3 Control Register */
    Ifx_GTM_CCM_ARP3_PROT      ARP3_PROT;        /**< \brief 1C, CCM Address Range Protector 3 Protection Register */
    Ifx_GTM_CCM_ARP4_CTRL      ARP4_CTRL;        /**< \brief 20, CCM Address Range Protector 4 Control Register */
    Ifx_GTM_CCM_ARP4_PROT      ARP4_PROT;        /**< \brief 24, CCM Address Range Protector 4 Protection Register */
    Ifx_GTM_CCM_ARP5_CTRL      ARP5_CTRL;        /**< \brief 28, CCM Address Range Protector 5 Control Register */
    Ifx_GTM_CCM_ARP5_PROT      ARP5_PROT;        /**< \brief 2C, CCM Address Range Protector 5 Protection Register */
    Ifx_GTM_CCM_ARP6_CTRL      ARP6_CTRL;        /**< \brief 30, CCM Address Range Protector 6 Control Register */
    Ifx_GTM_CCM_ARP6_PROT      ARP6_PROT;        /**< \brief 34, CCM Address Range Protector 6 Protection Register */
    Ifx_GTM_CCM_ARP7_CTRL      ARP7_CTRL;        /**< \brief 38, CCM Address Range Protector 7 Control Register */
    Ifx_GTM_CCM_ARP7_PROT      ARP7_PROT;        /**< \brief 3C, CCM Address Range Protector 7 Protection Register */
    Ifx_GTM_CCM_ARP8_CTRL      ARP8_CTRL;        /**< \brief 40, CCM Address Range Protector 8 Control Register */
    Ifx_GTM_CCM_ARP8_PROT      ARP8_PROT;        /**< \brief 44, CCM Address Range Protector 8 Protection Register */
    Ifx_GTM_CCM_ARP9_CTRL      ARP9_CTRL;        /**< \brief 48, CCM Address Range Protector 9 Control Register */
    Ifx_GTM_CCM_ARP9_PROT      ARP9_PROT;        /**< \brief 4C, CCM Address Range Protector 9 Protection Register */
    unsigned char              reserved_50[392]; /**< \brief 50, \internal Reserved */
    Ifx_GTM_CCM_AEIM_STA       AEIM_STA;         /**< \brief 1D8, CCM MCS Bus Master Status Register */
    Ifx_GTM_CCM_HW_CONF        HW_CONF;          /**< \brief 1DC, CCM Hardware Configuration */
    Ifx_GTM_CCM_TIM_AUX_IN_SRC TIM_AUX_IN_SRC;   /**< \brief 1E0, CCM TIM module AUX_IN source selection register */
    Ifx_GTM_CCM_EXT_CAP_EN     EXT_CAP_EN;       /**< \brief 1E4, CCM external capture trigger enable */
    Ifx_GTM_CCM_TOM_OUT        TOM_OUT;          /**< \brief 1E8, GTM CCM TOM output level */
    Ifx_GTM_CCM_ATOM_OUT       ATOM_OUT;         /**< \brief 1EC, GTM CCM ATOM Output Level */
    Ifx_GTM_CCM_CMU_CLK_CFG    CMU_CLK_CFG;      /**< \brief 1F0, CCM CMU Clock Configuration Register */
    Ifx_GTM_CCM_CMU_FXCLK_CFG  CMU_FXCLK_CFG;    /**< \brief 1F4, CCM CMU Fixed Clock Configuration Register */
    Ifx_GTM_CCM_CFG            CFG;              /**< \brief 1F8, CCM Configuration Register */
    Ifx_GTM_CCM_PROT           PROT;             /**< \brief 1FC, CCM Protection Register */
} Ifx_GTM_CCM;

/** \\brief  CDTM objects */
typedef volatile struct _Ifx_GTM_CDTM
{
    Ifx_GTM_CDTM_DTM       DTM0;              /**< \brief 0, DTM channel objects */
    Ifx_GTM_CDTM_DTM       DTM1;              /**< \brief 40, DTM channel objects */
    Ifx_GTM_CDTM_DTM2_CTRL DTM2_CTRL;         /**< \brief 80, CDTM0 DTM2 global configuration and control register */
    unsigned char          reserved_84[60];   /**< \brief 84, \internal Reserved */
    Ifx_GTM_CDTM_DTM3_CTRL DTM3_CTRL;         /**< \brief C0, CDTM0 DTM3 global configuration and control register */
    unsigned char          reserved_C4[60];   /**< \brief C4, \internal Reserved */
    Ifx_GTM_CDTM_DTM       DTM4;              /**< \brief 100, DTM channel objects */
    Ifx_GTM_CDTM_DTM       DTM5;              /**< \brief 140, DTM channel objects */
    unsigned char          reserved_180[640]; /**< \brief 180, \internal Reserved */
} Ifx_GTM_CDTM;

/** \\brief  CMP object */
typedef volatile struct _Ifx_GTM_CMP
{
    Ifx_GTM_CMP_EN          EN;             /**< \brief 0, CMP comparator enable register */
    Ifx_GTM_CMP_IRQ_NOTIFY  IRQ_NOTIFY;     /**< \brief 4, CMP event notification register */
    Ifx_GTM_CMP_IRQ_EN      IRQ_EN;         /**< \brief 8, CMP interrupt enable register */
    Ifx_GTM_CMP_IRQ_FORCINT IRQ_FORCINT;    /**< \brief C, CMP interrupt force register */
    Ifx_GTM_CMP_IRQ_MODE    IRQ_MODE;       /**< \brief 10, CMP interrupt mode configuration register */
    Ifx_GTM_CMP_EIRQ_EN     EIRQ_EN;        /**< \brief 14, CMP error interrupt enable register */
} Ifx_GTM_CMP;

/** \\brief  CMU object */
typedef volatile struct _Ifx_GTM_CMU
{
    Ifx_GTM_CMU_CLK_EN   CLK_EN;            /**< \brief 0, CMU clock enable */
    Ifx_GTM_CMU_GCLK_NUM GCLK_NUM;          /**< \brief 4, CMU global clock control numerator */
    Ifx_GTM_CMU_GCLK_DEN GCLK_DEN;          /**< \brief 8, CMU global clock control denominator */
    Ifx_GTM_CMU_CLK0_5   CLK0_5[6];         /**< \brief C, CLK objects */
    Ifx_GTM_CMU_CLK_6    CLK_6;             /**< \brief 24, CLK objects */
    Ifx_GTM_CMU_CLK_7    CLK_7;             /**< \brief 28, CLK objects */
    Ifx_GTM_CMU_ECLK     ECLK[3];           /**< \brief 2C, ECLK objects */
    Ifx_GTM_CMU_FXCLK    FXCLK;             /**< \brief 44, FXCLK objects */
    Ifx_GTM_CMU_GLB_CTRL GLB_CTRL;          /**< \brief 48, CMU synchronizing ARU and clock source */
    Ifx_GTM_CMU_CLK_CTRL CLK_CTRL;          /**< \brief 4C, CMU control for clock source selection */
} Ifx_GTM_CMU;

/** \\brief  DPLL object */
typedef volatile struct _Ifx_GTM_DPLL
{
    Ifx_GTM_DPLL_CTRL_0                CTRL_0;                /**< \brief 0, DPLL Control Register 0 */
    Ifx_GTM_DPLL_CTRL_1                CTRL_1;                /**< \brief 4, DPLL Control Register 1 */
    Ifx_GTM_DPLL_CTRL_2                CTRL_2;                /**< \brief 8, DPLL Control Register 2 */
    Ifx_GTM_DPLL_CTRL_3                CTRL_3;                /**< \brief C, DPLL Control Register 3 */
    Ifx_GTM_DPLL_CTRL_4                CTRL_4;                /**< \brief 10, DPLL Control Register 4 */
    Ifx_GTM_DPLL_CTRL_5                CTRL_5;                /**< \brief 14, DPLL Control Register 5 */
    Ifx_GTM_DPLL_ACT_STA               ACT_STA;               /**< \brief 18, DPLL ACTION Status Register with connected shadow register */
    Ifx_GTM_DPLL_OSW                   OSW;                   /**< \brief 1C, DPLL Offset And Switch Old/New Address Register */
    Ifx_GTM_DPLL_AOSV_2                AOSV_2;                /**< \brief 20, DPLL Address Offset Register of RAM 2 Regions */
    Ifx_GTM_DPLL_APT                   APT;                   /**< \brief 24, DPLL Actual RAM Pointer Address for TRIGGER */
    Ifx_GTM_DPLL_APS                   APS;                   /**< \brief 28, DPLL Actual RAM Pointer Address for STATE */
    Ifx_GTM_DPLL_APT_2C                APT_2C;                /**< \brief 2C, DPLL Actual RAM Pointer for Region 2C */
    Ifx_GTM_DPLL_APS_1C3               APS_1C3;               /**< \brief 30, DPLL Actual RAM Pointer for RAM Region 1C3 */
    Ifx_GTM_DPLL_NUTC                  NUTC;                  /**< \brief 34, DPLL Number of Recent TRIGGER Events Used for Calculations */
    Ifx_GTM_DPLL_NUSC                  NUSC;                  /**< \brief 38, DPLL Number of Recent STATE Events Used for Calculations */
    Ifx_GTM_DPLL_NTI_CNT               NTI_CNT;               /**< \brief 3C, DPLL Number of Active TRIGGER Events to Interrupt */
    Ifx_GTM_DPLL_IRQ_NOTIFY            IRQ_NOTIFY;            /**< \brief 40, DPLL Interrupt Notification Register */
    Ifx_GTM_DPLL_IRQ_EN                IRQ_EN;                /**< \brief 44, DPLL Interrupt Enable Register */
    Ifx_GTM_DPLL_IRQ_FORCINT           IRQ_FORCINT;           /**< \brief 48, DPLL Interrupt Force Register */
    Ifx_GTM_DPLL_IRQ_MODE              IRQ_MODE;              /**< \brief 4C, DPLL Interrupt Mode Register */
    Ifx_GTM_DPLL_EIRQ_EN               EIRQ_EN;               /**< \brief 50, DPLL Error Interrupt Enable Register */
    unsigned char                      reserved_54[92];       /**< \brief 54, \internal Reserved */
    Ifx_GTM_DPLL_INC_CNT1              INC_CNT1;              /**< \brief B0, DPLL Counter for Pulses for TBU_CH1_BASE to be sent in Automatic End Mode */
    Ifx_GTM_DPLL_INC_CNT2              INC_CNT2;              /**< \brief B4, DPLL Counter for Pulses for TBU_TS2 to be sent in Automatic End Mode */
    Ifx_GTM_DPLL_APT_SYNC              APT_SYNC;              /**< \brief B8, DPLL Old RAM Pointer and Offset Value for TRIGGER */
    Ifx_GTM_DPLL_APS_SYNC              APS_SYNC;              /**< \brief BC, DPLL Old RAM Pointer and Offset Value for STATE */
    Ifx_GTM_DPLL_TBU_TS0_T             TBU_TS0_T;             /**< \brief C0, DPLL TBU_TS0 Value at last TRIGGER Event */
    Ifx_GTM_DPLL_TBU_TS0_S             TBU_TS0_S;             /**< \brief C4, DPLL TBU_TS0 Value at last STATE Event */
    Ifx_GTM_DPLL_ADD_IN_LD1            ADD_IN_LD1;            /**< \brief C8, DPLL Direct Load Input Value for SUB_INC1 */
    Ifx_GTM_DPLL_ADD_IN_LD2            ADD_IN_LD2;            /**< \brief CC, DPLL Direct Load Input Value for SUB_INC2 */
    unsigned char                      reserved_D0[44];       /**< \brief D0, \internal Reserved */
    Ifx_GTM_DPLL_STATUS                STATUS;                /**< \brief FC, DPLL Status Register */
    Ifx_GTM_DPLL_ID_PMTR               ID_PMTR[32];           /**< \brief 100, DPLL ID Information For Input Signal PMT 0 Register */
    unsigned char                      reserved_180[96];      /**< \brief 180, \internal Reserved */
    Ifx_GTM_DPLL_CTRL_0_SHADOW_TRIGGER CTRL_0_SHADOW_TRIGGER; /**< \brief 1E0, DPLL Control 0 Shadow Trigger Register */
    Ifx_GTM_DPLL_CTRL_0_SHADOW_STATE   CTRL_0_SHADOW_STATE;   /**< \brief 1E4, DPLL Control 0 Shadow STATE Register */
    Ifx_GTM_DPLL_CTRL_1_SHADOW_TRIGGER CTRL_1_SHADOW_TRIGGER; /**< \brief 1E8, DPLL Control 1 Shadow TRIGGER Register */
    Ifx_GTM_DPLL_CTRL_1_SHADOW_STATE   CTRL_1_SHADOW_STATE;   /**< \brief 1EC, DPLL Control 1 Shadow STATE Register */
    unsigned char                      reserved_1F0[12];      /**< \brief 1F0, \internal Reserved */
    Ifx_GTM_DPLL_RAM_INI               RAM_INI;               /**< \brief 1FC, DPLL RAM Initialization Register */
    Ifx_GTM_DPLL_PSA                   PSA[32];               /**< \brief 200, DPLL ACTION Position/Value Request */
    Ifx_GTM_DPLL_DLA                   DLA[32];               /**< \brief 280, DPLL ACTION Time To React Before PSAz */
    Ifx_GTM_DPLL_NA                    NA[32];                /**< \brief 300, DPLL Calculated Number Of TRIGGER/STATE Increments To ACTION */
    Ifx_GTM_DPLL_DTA                   DTA[32];               /**< \brief 380, DPLL Calculated Relative TIME To ACTION */
    Ifx_GTM_DPLL_TS_T                  TS_T;                  /**< \brief 400, DPLL Actual TRIGGER Time Stamp Value */
    Ifx_GTM_DPLL_TS_T_OLD              TS_T_OLD;              /**< \brief 404, DPLL Previous TRIGGER Time Stamp Value */
    Ifx_GTM_DPLL_FTV_T                 FTV_T;                 /**< \brief 408, DPLL Actual TRIGGER Filter Value */
    unsigned char                      reserved_40C[4];       /**< \brief 40C, \internal Reserved */
    Ifx_GTM_DPLL_TS_S                  TS_S;                  /**< \brief 410, DPLL Actual STATE Time Stamp */
    Ifx_GTM_DPLL_TS_S_OLD              TS_S_OLD;              /**< \brief 414, DPLL Previous STATE Time Stamp */
    Ifx_GTM_DPLL_FTV_S                 FTV_S;                 /**< \brief 418, DPLL Actual STATE Filter Value */
    unsigned char                      reserved_41C[4];       /**< \brief 41C, \internal Reserved */
    Ifx_GTM_DPLL_THMI                  THMI;                  /**< \brief 420, DPLL TRIGGER Hold Time Minimum Value */
    Ifx_GTM_DPLL_THMA                  THMA;                  /**< \brief 424, DPLL TRIGGER Hold Time Maximum Value */
    Ifx_GTM_DPLL_THVAL                 THVAL;                 /**< \brief 428, DPLL Measured TRIGGER Hold Time Value */
    unsigned char                      reserved_42C[4];       /**< \brief 42C, \internal Reserved */
    Ifx_GTM_DPLL_TOV                   TOV;                   /**< \brief 430, DPLL Time Out Value of Active TRIGGER Slope */
    Ifx_GTM_DPLL_TOV_S                 TOV_S;                 /**< \brief 434, DPLL Time Out Value of active STATE Slope */
    Ifx_GTM_DPLL_ADD_IN_CAL1           ADD_IN_CAL1;           /**< \brief 438, DPLL Calculated ADD_IN Value for SUB_INC1 Generation */
    Ifx_GTM_DPLL_ADD_IN_CAL2           ADD_IN_CAL2;           /**< \brief 43C, DPLL Calculated ADD_IN Value for SUB_INC2 Generation */
    Ifx_GTM_DPLL_MPVAL1                MPVAL1;                /**< \brief 440, DPLL Missing Pulses to be Added or Subtracted Directly 1 */
    Ifx_GTM_DPLL_MPVAL2                MPVAL2;                /**< \brief 444, DPLL Missing Pulses to be Added or Subtracted Directly 2 */
    Ifx_GTM_DPLL_NMB_T_TAR             NMB_T_TAR;             /**< \brief 448, DPLL Target Number of Pulses to be Sent in Normal Mode */
    Ifx_GTM_DPLL_NMB_T_TAR_OLD         NMB_T_TAR_OLD;         /**< \brief 44C, DPLL Last but one Target Number of Pulses to be Sent in Normal Mode */
    Ifx_GTM_DPLL_NMB_S_TAR             NMB_S_TAR;             /**< \brief 450, DPLL Target Number of Pulses to be Sent in Emergency Mode */
    Ifx_GTM_DPLL_NMB_S_TAR_OLD         NMB_S_TAR_OLD;         /**< \brief 454, DPLL Last but one Target Number of Pulses to be Sent in Emergency Mode */
    unsigned char                      reserved_458[8];       /**< \brief 458, \internal Reserved */
    Ifx_GTM_DPLL_RCDT_TX               RCDT_TX;               /**< \brief 460, DPLL Reciprocal Value of the Expected Increment Duration of TRIGGER */
    Ifx_GTM_DPLL_RCDT_SX               RCDT_SX;               /**< \brief 464, DPLL Reciprocal Value of the Expected Increment Duration of STATE */
    Ifx_GTM_DPLL_RCDT_TX_NOM           RCDT_TX_NOM;           /**< \brief 468, DPLL Reciprocal Value of the Expected Nominal Increment Duration of TRIGGER */
    Ifx_GTM_DPLL_RCDT_SX_NOM           RCDT_SX_NOM;           /**< \brief 46C, DPLL Reciprocal Value of the Expected Nominal Increment Duration of STATE */
    Ifx_GTM_DPLL_RDT_T_ACT             RDT_T_ACT;             /**< \brief 470, DPLL Reciprocal Value of the Last Increment of TRIGGER */
    Ifx_GTM_DPLL_RDT_S_ACT             RDT_S_ACT;             /**< \brief 474, DPLL Reciprocal Value of the Last Increment of STATE */
    Ifx_GTM_DPLL_DT_T_ACT              DT_T_ACT;              /**< \brief 478, DPLL Duration of the Last TRIGGER Increment */
    Ifx_GTM_DPLL_DT_S_ACT              DT_S_ACT;              /**< \brief 47C, DPLL Duration of the Last STATE Increment */
    Ifx_GTM_DPLL_EDT_T                 EDT_T;                 /**< \brief 480, DPLL Difference of Prediction to Actual Value of the Last TRIGGER Increment */
    Ifx_GTM_DPLL_MEDT_T                MEDT_T;                /**< \brief 484, DPLL Weighted Difference of Prediction Errors of TRIGGER */
    Ifx_GTM_DPLL_EDT_S                 EDT_S;                 /**< \brief 488, DPLL Difference of Prediction to Actual Value of the Last STATE Increment */
    Ifx_GTM_DPLL_MEDT_S                MEDT_S;                /**< \brief 48C, DPLL Weighted Difference of Prediction Errors of STATE */
    Ifx_GTM_DPLL_CDT_TX                CDT_TX;                /**< \brief 490, DPLL Prediction of the Actual TRIGGER Increment Duration */
    Ifx_GTM_DPLL_CDT_SX                CDT_SX;                /**< \brief 494, DPLL Prediction of the Actual STATE Increment Duration */
    Ifx_GTM_DPLL_CDT_TX_NOM            CDT_TX_NOM;            /**< \brief 498, DPLL Prediction of the Nominal TRIGGER Increment Duration */
    Ifx_GTM_DPLL_CDT_SX_NOM            CDT_SX_NOM;            /**< \brief 49C, DPLL Prediction of the Nominal STATE Increment Duration */
    Ifx_GTM_DPLL_TLR                   TLR;                   /**< \brief 4A0, DPLL TRIGGER Locking Range */
    Ifx_GTM_DPLL_SLR                   SLR;                   /**< \brief 4A4, DPLL STATE Locking Range */
    unsigned char                      reserved_4A8[88];      /**< \brief 4A8, \internal Reserved */
    Ifx_GTM_DPLL_PDT_0                 PDT_0;                 /**< \brief 500, DPLL Projected Increment Sum Relations for Action 0 */
    Ifx_GTM_DPLL_PDT_1                 PDT_1;                 /**< \brief 504, DPLL Projected Increment Sum Relations for Action 1 */
    Ifx_GTM_DPLL_PDT_2                 PDT_2;                 /**< \brief 508, DPLL Projected Increment Sum Relations for Action 2 */
    Ifx_GTM_DPLL_PDT_3                 PDT_3;                 /**< \brief 50C, DPLL Projected Increment Sum Relations for Action 3 */
    Ifx_GTM_DPLL_PDT_4                 PDT_4;                 /**< \brief 510, DPLL Projected Increment Sum Relations for Action 4 */
    Ifx_GTM_DPLL_PDT_5                 PDT_5;                 /**< \brief 514, DPLL Projected Increment Sum Relations for Action 5 */
    Ifx_GTM_DPLL_PDT_6                 PDT_6;                 /**< \brief 518, DPLL Projected Increment Sum Relations for Action 6 */
    Ifx_GTM_DPLL_PDT_7                 PDT_7;                 /**< \brief 51C, DPLL Projected Increment Sum Relations for Action 7 */
    Ifx_GTM_DPLL_PDT_8                 PDT_8;                 /**< \brief 520, DPLL Projected Increment Sum Relations for Action 8 */
    Ifx_GTM_DPLL_PDT_9                 PDT_9;                 /**< \brief 524, DPLL Projected Increment Sum Relations for Action 9 */
    Ifx_GTM_DPLL_PDT_10                PDT_10;                /**< \brief 528, DPLL Projected Increment Sum Relations for Action 10 */
    Ifx_GTM_DPLL_PDT_11                PDT_11;                /**< \brief 52C, DPLL Projected Increment Sum Relations for Action 11 */
    Ifx_GTM_DPLL_PDT_12                PDT_12;                /**< \brief 530, DPLL Projected Increment Sum Relations for Action 12 */
    Ifx_GTM_DPLL_PDT_13                PDT_13;                /**< \brief 534, DPLL Projected Increment Sum Relations for Action 13 */
    Ifx_GTM_DPLL_PDT_14                PDT_14;                /**< \brief 538, DPLL Projected Increment Sum Relations for Action 14 */
    Ifx_GTM_DPLL_PDT_15                PDT_15;                /**< \brief 53C, DPLL Projected Increment Sum Relations for Action 15 */
    Ifx_GTM_DPLL_PDT_16                PDT_16;                /**< \brief 540, DPLL Projected Increment Sum Relations for Action 16 */
    Ifx_GTM_DPLL_PDT_17                PDT_17;                /**< \brief 544, DPLL Projected Increment Sum Relations for Action 17 */
    Ifx_GTM_DPLL_PDT_18                PDT_18;                /**< \brief 548, DPLL Projected Increment Sum Relations for Action 18 */
    Ifx_GTM_DPLL_PDT_19                PDT_19;                /**< \brief 54C, DPLL Projected Increment Sum Relations for Action 19 */
    Ifx_GTM_DPLL_PDT_20                PDT_20;                /**< \brief 550, DPLL Projected Increment Sum Relations for Action 20 */
    Ifx_GTM_DPLL_PDT_21                PDT_21;                /**< \brief 554, DPLL Projected Increment Sum Relations for Action 21 */
    Ifx_GTM_DPLL_PDT_22                PDT_22;                /**< \brief 558, DPLL Projected Increment Sum Relations for Action 22 */
    Ifx_GTM_DPLL_PDT_23                PDT_23;                /**< \brief 55C, DPLL Projected Increment Sum Relations for Action 23 */
    Ifx_GTM_DPLL_PDT_24                PDT_24;                /**< \brief 560, DPLL Projected Increment Sum Relations for Action 24 */
    Ifx_GTM_DPLL_PDT_25                PDT_25;                /**< \brief 564, DPLL Projected Increment Sum Relations for Action 25 */
    Ifx_GTM_DPLL_PDT_26                PDT_26;                /**< \brief 568, DPLL Projected Increment Sum Relations for Action 26 */
    Ifx_GTM_DPLL_PDT_27                PDT_27;                /**< \brief 56C, DPLL Projected Increment Sum Relations for Action 27 */
    Ifx_GTM_DPLL_PDT_28                PDT_28;                /**< \brief 570, DPLL Projected Increment Sum Relations for Action 28 */
    Ifx_GTM_DPLL_PDT_29                PDT_29;                /**< \brief 574, DPLL Projected Increment Sum Relations for Action 29 */
    Ifx_GTM_DPLL_PDT_30                PDT_30;                /**< \brief 578, DPLL Projected Increment Sum Relations for Action 30 */
    Ifx_GTM_DPLL_PDT_31                PDT_31;                /**< \brief 57C, DPLL Projected Increment Sum Relations for Action 31 */
    unsigned char                      reserved_580[64];      /**< \brief 580, \internal Reserved */
    Ifx_GTM_DPLL_MLS1                  MLS1;                  /**< \brief 5C0, DPLL Calculated Number of Sub-Pulses between two nominal STATE Events for SMC=0 */
    Ifx_GTM_DPLL_MLS2                  MLS2;                  /**< \brief 5C4, DPLL Calculated Number of Sub-Pulses between two nominal STATE Events for SMC=1 and RMO=1 */
    Ifx_GTM_DPLL_CNT_NUM_1             CNT_NUM_1;             /**< \brief 5C8, DPLL Number of Sub-Pulses of SUB_INC1 in Continuous Mode */
    Ifx_GTM_DPLL_CNT_NUM_2             CNT_NUM_2;             /**< \brief 5CC, DPLL Number of Sub-Pulses of SUB_INC2 in Continuous Mode */
    Ifx_GTM_DPLL_PVT                   PVT;                   /**< \brief 5D0, DPLL Plausibility Value of Next TRIGGER Slope */
    unsigned char                      reserved_5D4[12];      /**< \brief 5D4, \internal Reserved */
    Ifx_GTM_DPLL_PSTC                  PSTC;                  /**< \brief 5E0, DPLL Actual Calculated Position Stamp of TRIGGER */
    Ifx_GTM_DPLL_PSSC                  PSSC;                  /**< \brief 5E4, DPLL Actual Calculated Position Stamp of STATE */
    Ifx_GTM_DPLL_PSTM                  PSTM;                  /**< \brief 5E8, DPLL Measured Position Stamp at Last TRIGGER Input */
    Ifx_GTM_DPLL_PSTM_OLD              PSTM_OLD;              /**< \brief 5EC, DPLL Measured Position Stamp at Last but one TRIGGER Input */
    Ifx_GTM_DPLL_PSSM                  PSSM;                  /**< \brief 5F0, DPLL Measured Position Stamp at Last STATE Input */
    Ifx_GTM_DPLL_PSSM_OLD              PSSM_OLD;              /**< \brief 5F4, DPLL Measured Position Stamp at Last but one STATE Input */
    Ifx_GTM_DPLL_NMB_T                 NMB_T;                 /**< \brief 5F8, DPLL Number of Pulses to be Sent in Normal Mode */
    Ifx_GTM_DPLL_NMB_S                 NMB_S;                 /**< \brief 5FC, DPLL Number of Pulses to be Sent in Emergency Mode */
    Ifx_GTM_DPLL_RDT_S                 RDT_S[64];             /**< \brief 600, DPLL Reciprocal Values of the Nominal STATE Increment Duration in FULL_SCALE */
    Ifx_GTM_DPLL_TSF_S                 TSF_S[64];             /**< \brief 700, DPLL Time Stamp Values of the Nominal STATE Events in FULL_SCALE */
    Ifx_GTM_DPLL_ADT_S                 ADT_S[64];             /**< \brief 800, DPLL Adapt and Profile Values of the STATE Increments in FULL_SCALE */
    Ifx_GTM_DPLL_DT_S                  DT_S[64];              /**< \brief 900, DPLL Nominal STATE Increment Duration in FULL_SCALE */
    unsigned char                      reserved_A00[1024];    /**< \brief A00, \internal Reserved */
    Ifx_GTM_DPLL_TSAC                  TSAC[32];              /**< \brief E00, DPLL Calculated Time Value to start Action 0 Register */
    Ifx_GTM_DPLL_PSAC                  PSAC[32];              /**< \brief E80, DPLL ACTION Position/Value Action 0 Request Register */
    Ifx_GTM_DPLL_ACB_0                 ACB_0;                 /**< \brief F00, DPLL Control Bits Register 0 for up to 32 Actions */
    Ifx_GTM_DPLL_ACB_1                 ACB_1;                 /**< \brief F04, DPLL Control Bits Register 1 for up to 32 Actions */
    Ifx_GTM_DPLL_ACB_2                 ACB_2;                 /**< \brief F08, DPLL Control Bits Register 2 for up to 32 Actions */
    Ifx_GTM_DPLL_ACB_3                 ACB_3;                 /**< \brief F0C, DPLL Control Bits Register 3 for up to 32 Actions */
    Ifx_GTM_DPLL_ACB_4                 ACB_4;                 /**< \brief F10, DPLL Control Bits Register 4 for up to 32 Actions */
    Ifx_GTM_DPLL_ACB_5                 ACB_5;                 /**< \brief F14, DPLL Control Bits Register 5 for up to 32 Actions */
    Ifx_GTM_DPLL_ACB_6                 ACB_6;                 /**< \brief F18, DPLL Control Bits Register 6 for up to 32 Actions */
    Ifx_GTM_DPLL_ACB_7                 ACB_7;                 /**< \brief F1C, DPLL Control Bits Register 7 for up to 32 Actions */
    Ifx_GTM_DPLL_CTRL_11               CTRL_11;               /**< \brief F20, DPLL Control Register 11 */
    Ifx_GTM_DPLL_THVAL2                THVAL2;                /**< \brief F24, DPLL Immediate THVAL Value Register */
    Ifx_GTM_DPLL_TIDEL                 TIDEL;                 /**< \brief F28, DPLL Additional TRIGGER Input Register */
    Ifx_GTM_DPLL_SIDEL                 SIDEL;                 /**< \brief F2C, DPLL Additional STATE Input Delay Register */
    Ifx_GTM_DPLL_APS_SYNC_EXT          APS_SYNC_EXT;          /**< \brief F30, DPLL Extension register for DPLL_APS_SYNC) */
    Ifx_GTM_DPLL_CTRL_EXT              CTRL_EXT;              /**< \brief F34, DPLL Extension register for DPLL_CTRL) */
    Ifx_GTM_DPLL_APS_EXT               APS_EXT;               /**< \brief F38, DPLL Extension register for DPLL_APS 4) */
    Ifx_GTM_DPLL_APS_1C3_EXT           APS_1C3_EXT;           /**< \brief F3C, DPLL Extension register for DPLL_APS_1C3) */
    Ifx_GTM_DPLL_STA                   STA;                   /**< \brief F40, DPLL Status of the State Machine States Register */
    Ifx_GTM_DPLL_INCF1_OFFSET          INCF1_OFFSET;          /**< \brief F44, DPLL Start Value of the ADD_IN_ADDER1 Register */
    Ifx_GTM_DPLL_INCF2_OFFSET          INCF2_OFFSET;          /**< \brief F48, DPLL Start Value of the ADD_IN_ADDER2 Register */
    Ifx_GTM_DPLL_DT_T_START            DT_T_START;            /**< \brief F4C, DPLL Start Value of DPLL_DT_T_ACT for the first Increment after SIP1 is set to 1 */
    Ifx_GTM_DPLL_DT_S_START            DT_S_START;            /**< \brief F50, DPLL Start Value of DPLL_DT_S_ACT for the first Increment after SIP2 is set to 1 */
    Ifx_GTM_DPLL_STA_MASK              STA_MASK;              /**< \brief F54, DPLL Trigger Masks for Signals DPLL_STA_T and DPLL_STA_S */
    Ifx_GTM_DPLL_STA_FLAG              STA_FLAG;              /**< \brief F58, DPLL STA Flag Register */
    Ifx_GTM_DPLL_INC_CNT1_MASK         INC_CNT1_MASK;         /**< \brief F5C, DPLL INC_CNT1 Trigger Mask */
    Ifx_GTM_DPLL_INC_CNT2_MASK         INC_CNT2_MASK;         /**< \brief F60, DPLL INC_CNT2 Trigger Mask */
    Ifx_GTM_DPLL_NUSC_EXT1             NUSC_EXT1;             /**< \brief F64, DPLL Extension register number 1 for DPLL_NUSC 4 */
    Ifx_GTM_DPLL_NUSC_EXT2             NUSC_EXT2;             /**< \brief F68, DPLL Extension register number 2 for DPLL_NUSC 4 */
    Ifx_GTM_DPLL_CTN_MIN               CTN_MIN;               /**< \brief F6C, DPLL Minimum CDT_T Nominal Value Register */
    Ifx_GTM_DPLL_CTN_MAX               CTN_MAX;               /**< \brief F70, DPLL Maximum CDT_T Nominal Value Register */
    Ifx_GTM_DPLL_CSN_MIN               CSN_MIN;               /**< \brief F74, DPLL Minimum CDT_S Nominal Value Register */
    Ifx_GTM_DPLL_CSN_MAX               CSN_MAX;               /**< \brief F78, DPLL Maximum CDT_S Nominal Value Register */
} Ifx_GTM_DPLL;

/** \\brief  F2A object */
typedef volatile struct _Ifx_GTM_F2A
{
    Ifx_GTM_F2A_RD_CH  RD_CH[8];            /**< \brief 0, F2A ARU RD FIFO address */
    Ifx_GTM_F2A_STR_CH STR_CH[8];           /**< \brief 20, F2A Stream configuration */
    Ifx_GTM_F2A_ENABLE ENABLE;              /**< \brief 40, F2A0 stream activation register */
    Ifx_GTM_F2A_CTRL   CTRL;                /**< \brief 44, F2A0 stream control register */
    unsigned char      reserved_48[56];     /**< \brief 48, \internal Reserved */
} Ifx_GTM_F2A;

/** \\brief  FIFO object */
typedef volatile struct _Ifx_GTM_FIFO
{
    Ifx_GTM_FIFO_CH CH[8];                  /**< \brief 0, FIFO channel */
    unsigned char   reserved_200[14848];    /**< \brief 200, \internal Reserved */
} Ifx_GTM_FIFO;

/** \\brief  ICM object */
typedef volatile struct _Ifx_GTM_ICM
{
    Ifx_GTM_ICM_IRQG_0         IRQG_0;           /**< \brief 0, ICM Interrupt group register covering infrastructure and safety components ARU, BRC, AEI, PSM0, PSM1, MAP, CMP,SPE */
    Ifx_GTM_ICM_IRQG_1         IRQG_1;           /**< \brief 4, ICM Interrupt group register covering DPLL */
    Ifx_GTM_ICM_IRQG_2         IRQG_2;           /**< \brief 8, ICM Interrupt group register covering TIM0, TIM1, TIM2, TIM3 */
    Ifx_GTM_ICM_IRQG_3         IRQG_3;           /**< \brief C, ICM Interrupt group register covering TIM4, TIM5, TIM6, TIM7 */
    Ifx_GTM_ICM_IRQG_4         IRQG_4;           /**< \brief 10, ICM Interrupt group register covering MCS0 to MCS3 sub-modules */
    Ifx_GTM_ICM_IRQG_5         IRQG_5;           /**< \brief 14, ICM Interrupt group register covering MCS4 to MCS6 sub-modules */
    Ifx_GTM_ICM_IRQG_6         IRQG_6;           /**< \brief 18, ICM Interrupt group register covering GTM output sub-modules TOM0 to TOM1 */
    Ifx_GTM_ICM_IRQG_7         IRQG_7;           /**< \brief 1C, ICM Interrupt group register covering GTM output sub-modules TOM2 to TOM3 */
    Ifx_GTM_ICM_IRQG_8         IRQG_8;           /**< \brief 20, ICM Interrupt group register covering GTM output sub-modules TOM4 to TOM5 */
    Ifx_GTM_ICM_IRQG_9         IRQG_9;           /**< \brief 24, ICM Interrupt group register covering GTM output sub-modules ATOM0, ATOM1, ATOM2 and ATOM3 */
    Ifx_GTM_ICM_IRQG_10        IRQG_10;          /**< \brief 28, ICM Interrupt group register covering GTM output sub-modules ATOM4 to ATOM7 */
    Ifx_GTM_ICM_IRQG_11        IRQG_11;          /**< \brief 2C, ICM Interrupt group register covering GTM output sub-modules ATOM8 to ATOM11 */
    Ifx_GTM_ICM_IRQG_MEI       IRQG_MEI;         /**< \brief 30, ICM Interrupt group register for module error interrupt information */
    Ifx_GTM_ICM_IRQG_CEI0      IRQG_CEI0;        /**< \brief 34, ICM Interrupt group register 0 for channel error interrupt information */
    Ifx_GTM_ICM_IRQG_CEI1      IRQG_CEI1;        /**< \brief 38, ICM Interrupt group register 1 for channel error interrupt information */
    Ifx_GTM_ICM_IRQG_CEI2      IRQG_CEI2;        /**< \brief 3C, ICM Interrupt group register 2 for channel error interrupt information */
    Ifx_GTM_ICM_IRQG_CEI3      IRQG_CEI3;        /**< \brief 40, ICM Interrupt group register 3 for channel error interrupt information */
    Ifx_GTM_ICM_IRQG_CEI4      IRQG_CEI4;        /**< \brief 44, ICM Interrupt group register 4 for channel error interrupt information */
    unsigned char              reserved_48[28];  /**< \brief 48, \internal Reserved */
    Ifx_GTM_ICM_IRQG_MCS0_CEI  IRQG_MCS0_CEI;    /**< \brief 64, ICM Interrupt group MCS 0 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS1_CEI  IRQG_MCS1_CEI;    /**< \brief 68, ICM Interrupt group MCS 1 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS2_CEI  IRQG_MCS2_CEI;    /**< \brief 6C, ICM Interrupt group MCS 2 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS3_CEI  IRQG_MCS3_CEI;    /**< \brief 70, ICM Interrupt group MCS 3 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS4_CEI  IRQG_MCS4_CEI;    /**< \brief 74, ICM Interrupt group MCS 4 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS5_CEI  IRQG_MCS5_CEI;    /**< \brief 78, ICM Interrupt group MCS 5 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS6_CEI  IRQG_MCS6_CEI;    /**< \brief 7C, ICM Interrupt group MCS 6 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS7_CEI  IRQG_MCS7_CEI;    /**< \brief 80, ICM Interrupt group MCS 7 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS8_CEI  IRQG_MCS8_CEI;    /**< \brief 84, ICM Interrupt group MCS 8 for Channel Error Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS9_CEI  IRQG_MCS9_CEI;    /**< \brief 88, ICM Interrupt group MCS 9 for Channel Error Interrupt information */
    unsigned char              reserved_8C[24];  /**< \brief 8C, \internal Reserved */
    Ifx_GTM_ICM_IRQG_PSM_0_CEI IRQG_PSM_0_CEI;   /**< \brief A4, ICM Interrupt group PSM 0 for Channel Error Interrupt information of FIFO0, FIFO1, FIFO2 */
    unsigned char              reserved_A8[12];  /**< \brief A8, \internal Reserved */
    Ifx_GTM_ICM_IRQG_SPE_CEI   IRQG_SPE_CEI;     /**< \brief B4, ICM Interrupt group SPE for module Error Interrupt information */
    unsigned char              reserved_B8[88];  /**< \brief B8, \internal Reserved */
    Ifx_GTM_ICM_IRQG_CLS_0_MEI IRQG_CLS_0_MEI;   /**< \brief 110, ICM Interrupt group for module Error Interrupt information for each TIMm, MCSm, SPEm, FIFOm */
    Ifx_GTM_ICM_IRQG_CLS_1_MEI IRQG_CLS_1_MEI;   /**< \brief 114, ICM Interrupt group for module Error Interrupt information for each TIMm, MCSm, SPEm, FIFOm */
    Ifx_GTM_ICM_IRQG_CLS_2_MEI IRQG_CLS_2_MEI;   /**< \brief 118, ICM Interrupt group for module Error Interrupt information for each TIMm, MCSm, SPEm, FIFOm */
    unsigned char              reserved_11C[4];  /**< \brief 11C, \internal Reserved */
    Ifx_GTM_ICM_IRQG_MCS0_CI   IRQG_MCS0_CI;     /**< \brief 120, ICM Interrupt group MCS 0 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS1_CI   IRQG_MCS1_CI;     /**< \brief 124, ICM Interrupt group MCS 1 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS2_CI   IRQG_MCS2_CI;     /**< \brief 128, ICM Interrupt group MCS 2 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS3_CI   IRQG_MCS3_CI;     /**< \brief 12C, ICM Interrupt group MCS 3 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS4_CI   IRQG_MCS4_CI;     /**< \brief 130, ICM Interrupt group MCS 4 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS5_CI   IRQG_MCS5_CI;     /**< \brief 134, ICM Interrupt group MCS 5 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS6_CI   IRQG_MCS6_CI;     /**< \brief 138, ICM Interrupt group MCS 6 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS7_CI   IRQG_MCS7_CI;     /**< \brief 13C, ICM Interrupt group MCS 7 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS8_CI   IRQG_MCS8_CI;     /**< \brief 140, ICM Interrupt group MCS 8 for Channel Interrupt information */
    Ifx_GTM_ICM_IRQG_MCS9_CI   IRQG_MCS9_CI;     /**< \brief 144, ICM Interrupt group MCS 9 for Channel Interrupt information */
    unsigned char              reserved_148[24]; /**< \brief 148, \internal Reserved */
    Ifx_GTM_ICM_IRQG_PSM_0_CI  IRQG_PSM_0_CI;    /**< \brief 160, ICM Interrupt group PSM 0 for Channel Interrupt information of FIFO0, FIFO1, FIFO2 */
    unsigned char              reserved_164[12]; /**< \brief 164, \internal Reserved */
    Ifx_GTM_ICM_IRQG_SPE_CI    IRQG_SPE_CI;      /**< \brief 170, ICM Interrupt group SPE for module Interrupt information */
    unsigned char              reserved_174[28]; /**< \brief 174, \internal Reserved */
    Ifx_GTM_ICM_IRQG_ATOM_0_CI IRQG_ATOM_0_CI;   /**< \brief 190, ICM Interrupt group ATOM 0 for Channel Interrupt information of ATOMm */
    Ifx_GTM_ICM_IRQG_ATOM_1_CI IRQG_ATOM_1_CI;   /**< \brief 194, ICM Interrupt group ATOM 1 for Channel Interrupt information of ATOMm */
    Ifx_GTM_ICM_IRQG_ATOM_2_CI IRQG_ATOM_2_CI;   /**< \brief 198, ICM Interrupt group ATOM 2 for Channel Interrupt information of ATOMm */
    unsigned char              reserved_19C[4];  /**< \brief 19C, \internal Reserved */
    Ifx_GTM_ICM_IRQG_TOM_0_CI  IRQG_TOM_0_CI;    /**< \brief 1A0, ICM Interrupt group TOM 0 for Channel Interrupt information of TOMm */
    Ifx_GTM_ICM_IRQG_TOM_1_CI  IRQG_TOM_1_CI;    /**< \brief 1A4, ICM Interrupt group TOM 1 for Channel Interrupt information of TOMm */
    Ifx_GTM_ICM_IRQG_TOM_2_CI  IRQG_TOM_2_CI;    /**< \brief 1A8, ICM Interrupt group TOM 2 for Channel Interrupt information of TOMm */
} Ifx_GTM_ICM;

/** \\brief  INSEL / OUTSEL object */
typedef volatile struct _Ifx_GTM_INOUTSEL
{
    Ifx_GTM_INOUTSEL_TIM           TIM[8];        /**< \brief 0, TIM */
    Ifx_GTM_INOUTSEL_T             T;             /**< \brief 20, Timer */
    Ifx_GTM_INOUTSEL_DSADC         DSADC;         /**< \brief A8, DSADC */
    Ifx_GTM_INOUTSEL_ADCTRIG       ADCTRIG;       /**< \brief E0, ADCTRIG */
    Ifx_GTM_INOUTSEL_CAN           CAN;           /**< \brief 100, CAN */
    Ifx_GTM_INOUTSEL_OTBU0T        OTBU0T;        /**< \brief 104, OCDS TBU0 Trigger Register */
    Ifx_GTM_INOUTSEL_OTBU1T        OTBU1T;        /**< \brief 108, OCDS TBU1 Trigger Register */
    Ifx_GTM_INOUTSEL_OTBU2T        OTBU2T;        /**< \brief 10C, OCDS TBU2 Trigger Register */
    Ifx_GTM_INOUTSEL_OTSS          OTSS;          /**< \brief 110, OCDS Trigger Set Select Register */
    Ifx_GTM_INOUTSEL_OTSC0         OTSC0;         /**< \brief 114, OCDS Trigger Set Control 0 Register */
    Ifx_GTM_INOUTSEL_OTSC1         OTSC1;         /**< \brief 118, OCDS Trigger Set Control 1 Register */
    Ifx_GTM_INOUTSEL_ODA           ODA;           /**< \brief 11C, OCDS Debug Access Register */
    Ifx_GTM_INOUTSEL_OCS           OCS;           /**< \brief 120, OCDS Control and Status */
    Ifx_GTM_INOUTSEL_RESET_CLR     RESET_CLR;     /**< \brief 124, Kernel Reset Status Clear Register */
    Ifx_GTM_INOUTSEL_RESET2        RESET2;        /**< \brief 128, Kernel Reset Register 1 */
    Ifx_GTM_INOUTSEL_RESET1        RESET1;        /**< \brief 12C, Kernel Reset Register 0 */
    Ifx_GTM_INOUTSEL_ACCEN1        ACCEN1;        /**< \brief 130, Access Enable Register 1 */
    Ifx_GTM_INOUTSEL_ACCEN0        ACCEN0;        /**< \brief 134, Access Enable Register 0 */
    Ifx_GTM_INOUTSEL_DXOUTCON      DXOUTCON;      /**< \brief 138, Data Exchange Output Control Register */
    Ifx_GTM_INOUTSEL_TRIG          TRIG;          /**< \brief 13C, TRIG */
    Ifx_GTM_INOUTSEL_INT           INT;           /**< \brief 164, INT */
    Ifx_GTM_INOUTSEL_MCSTRIGOUTSEL MCSTRIGOUTSEL; /**< \brief 18C, Trigger Output Sel Register */
    Ifx_GTM_INOUTSEL_MCSINTSTAT    MCSINTSTAT;    /**< \brief 190, MCS Interrupt Status Register */
    Ifx_GTM_INOUTSEL_MCSINTCLR     MCSINTCLR;     /**< \brief 194, MCS Interrupt Clear Register */
    Ifx_GTM_INOUTSEL_DXINCON       DXINCON;       /**< \brief 198, Data Exchange Input Control Register */
    Ifx_GTM_INOUTSEL_DATA          DATA;          /**< \brief 19C, DATAIN */
    Ifx_GTM_INOUTSEL_MSC           MSC;           /**< \brief 1C4, MSC */
    Ifx_GTM_INOUTSEL_PSI5OUTSEL    PSI5OUTSEL;    /**< \brief 284, PSI5 Output Select 0 Register */
    Ifx_GTM_INOUTSEL_PSI5S         PSI5S;         /**< \brief 288, PSI5S */
} Ifx_GTM_INOUTSEL;

/** \\brief  MCS objects */
typedef volatile struct _Ifx_GTM_MCS
{
    Ifx_GTM_MCS_CH0       CH0;                /**< \brief 0, MCS channel0 object */
    unsigned char         reserved_58[8];     /**< \brief 58, \internal Reserved */
    Ifx_GTM_MCS_REG_PROT  REG_PROT;           /**< \brief 60, MCS write protection register */
    Ifx_GTM_MCS_CTRL_STAT CTRL_STAT;          /**< \brief 64, MCS control and status register */
    Ifx_GTM_MCS_RESET     RESET;              /**< \brief 68, MCS reset register */
    Ifx_GTM_MCS_CAT       CAT;                /**< \brief 6C, MCS cancel ARU transfer instruction */
    Ifx_GTM_MCS_CWT       CWT;                /**< \brief 70, MCS cancel WURM instruction */
    unsigned char         reserved_74[8];     /**< \brief 74, \internal Reserved */
    Ifx_GTM_MCS_ERR       ERR;                /**< \brief 7C, MCS error register */
    Ifx_GTM_MCS_CH        CH1;                /**< \brief 80, MCS channel objects */
    Ifx_GTM_MCS_CH        CH2;                /**< \brief 100, MCS channel objects */
    Ifx_GTM_MCS_CH        CH3;                /**< \brief 180, MCS channel objects */
    Ifx_GTM_MCS_CH        CH4;                /**< \brief 200, MCS channel objects */
    Ifx_GTM_MCS_CH        CH5;                /**< \brief 280, MCS channel objects */
    Ifx_GTM_MCS_CH        CH6;                /**< \brief 300, MCS channel objects */
    Ifx_GTM_MCS_CH        CH7;                /**< \brief 380, MCS channel objects */
    unsigned char         reserved_400[3072]; /**< \brief 400, \internal Reserved */
} Ifx_GTM_MCS;

/** \\brief  MON object */
typedef volatile struct _Ifx_GTM_MON
{
    Ifx_GTM_MON_STATUS        STATUS;        /**< \brief 0, Monitor status register */
    Ifx_GTM_MON_ACTIVITY_0    ACTIVITY_0;    /**< \brief 4, Monitor activity register 0 */
    Ifx_GTM_MON_ACTIVITY_1    ACTIVITY_1;    /**< \brief 8, Monitor activity register 1 */
    Ifx_GTM_MON_ACTIVITY_MCS0 ACTIVITY_MCS0; /**< \brief C, Monitor activity register for MCS 0 */
    Ifx_GTM_MON_ACTIVITY_MCS1 ACTIVITY_MCS1; /**< \brief 10, Monitor activity register for MCS 1 */
    Ifx_GTM_MON_ACTIVITY_MCS2 ACTIVITY_MCS2; /**< \brief 14, Monitor activity register for MCS 2 */
    Ifx_GTM_MON_ACTIVITY_MCS3 ACTIVITY_MCS3; /**< \brief 18, Monitor activity register for MCS 3 */
    Ifx_GTM_MON_ACTIVITY_MCS4 ACTIVITY_MCS4; /**< \brief 1C, Monitor activity register for MCS 4 */
    Ifx_GTM_MON_ACTIVITY_MCS5 ACTIVITY_MCS5; /**< \brief 20, Monitor activity register for MCS 5 */
    Ifx_GTM_MON_ACTIVITY_MCS6 ACTIVITY_MCS6; /**< \brief 24, Monitor activity register for MCS 6 */
    Ifx_GTM_MON_ACTIVITY_MCS7 ACTIVITY_MCS7; /**< \brief 28, Monitor activity register for MCS 7 */
    Ifx_GTM_MON_ACTIVITY_MCS8 ACTIVITY_MCS8; /**< \brief 2C, Monitor activity register for MCS 8 */
    Ifx_GTM_MON_ACTIVITY_MCS9 ACTIVITY_MCS9; /**< \brief 30, Monitor activity register for MCS 9 */
} Ifx_GTM_MON;

/** \\brief  SPE objects */
typedef volatile struct _Ifx_GTM_SPE
{
    Ifx_GTM_SPE_CTRL_STAT   CTRL_STAT;       /**< \brief 0, SPE Control status register */
    Ifx_GTM_SPE_PAT         PAT;             /**< \brief 4, SPE Input pattern definition register. */
    Ifx_GTM_SPE_OUT_PAT     OUT_PAT[8];      /**< \brief 8, SPE Output definition register */
    Ifx_GTM_SPE_OUT_CTRL    OUT_CTRL;        /**< \brief 28, SPE output control register */
    Ifx_GTM_SPE_IRQ_NOTIFY  IRQ_NOTIFY;      /**< \brief 2C, SPE Interrupt notification register. */
    Ifx_GTM_SPE_IRQ_EN      IRQ_EN;          /**< \brief 30, SPE Interrupt enable register. */
    Ifx_GTM_SPE_IRQ_FORCINT IRQ_FORCINT;     /**< \brief 34, SPE Interrupt generation by software. */
    Ifx_GTM_SPE_IRQ_MODE    IRQ_MODE;        /**< \brief 38, SPE Interrupt mode configuration register */
    Ifx_GTM_SPE_EIRQ_EN     EIRQ_EN;         /**< \brief 3C, SPE Error interrupt enable register. */
    Ifx_GTM_SPE_REV_CNT     REV_CNT;         /**< \brief 40, SPE input revolution counter */
    Ifx_GTM_SPE_REV_CMP     REV_CMP;         /**< \brief 44, SPE Revolution counter compare value */
    Ifx_GTM_SPE_CTRL_STAT2  CTRL_STAT2;      /**< \brief 48, SPE Control status register 2 */
    Ifx_GTM_SPE_CMD         CMD;             /**< \brief 4C, SPE Command register */
    unsigned char           reserved_50[48]; /**< \brief 50, \internal Reserved */
} Ifx_GTM_SPE;

/** \\brief  TBU object */
typedef volatile struct _Ifx_GTM_TBU
{
    Ifx_GTM_TBU_CHEN             CHEN;             /**< \brief 0, TBU global channel enable */
    Ifx_GTM_TBU_CH0_CTRL         CH0_CTRL;         /**< \brief 4, TBU channel 0 control */
    Ifx_GTM_TBU_CH0_BASE         CH0_BASE;         /**< \brief 8, TBU channel 0 base */
    Ifx_GTM_TBU_CH1_CTRL         CH1_CTRL;         /**< \brief C, TBU channel 1 control */
    Ifx_GTM_TBU_CH1_BASE         CH1_BASE;         /**< \brief 10, TBU Channel 1 Base Register */
    Ifx_GTM_TBU_CH2_CTRL         CH2_CTRL;         /**< \brief 14, TBU channel 2 control */
    Ifx_GTM_TBU_CH2_BASE         CH2_BASE;         /**< \brief 18, TBU Channel 2 Base Register */
    Ifx_GTM_TBU_CH3_CTRL         CH3_CTRL;         /**< \brief 1C, TBU channel 3 control */
    Ifx_GTM_TBU_CH3_BASE         CH3_BASE;         /**< \brief 20, TBU channel 3 base */
    Ifx_GTM_TBU_CH3_BASE_MARK    CH3_BASE_MARK;    /**< \brief 24, TBU channel 3 modulo value */
    Ifx_GTM_TBU_CH3_BASE_CAPTURE CH3_BASE_CAPTURE; /**< \brief 28, TBU channel 3 base captured */
} Ifx_GTM_TBU;

/** \\brief  TIM objects */
typedef volatile struct _Ifx_GTM_TIM
{
    Ifx_GTM_TIM_CH      CH0;                /**< \brief 0, TIM channel objects */
    Ifx_GTM_TIM_INP_VAL INP_VAL;            /**< \brief 74, TIM input value observation register */
    Ifx_GTM_TIM_IN_SRC  IN_SRC;             /**< \brief 78, TIM channel x AUX IN source selection register */
    Ifx_GTM_TIM_RST     RST;                /**< \brief 7C, TIM global software reset register */
    Ifx_GTM_TIM_CH      CH1;                /**< \brief 80, TIM channel objects */
    unsigned char       reserved_F4[12];    /**< \brief F4, \internal Reserved */
    Ifx_GTM_TIM_CH      CH2;                /**< \brief 100, TIM channel objects */
    unsigned char       reserved_174[12];   /**< \brief 174, \internal Reserved */
    Ifx_GTM_TIM_CH      CH3;                /**< \brief 180, TIM channel objects */
    unsigned char       reserved_1F4[12];   /**< \brief 1F4, \internal Reserved */
    Ifx_GTM_TIM_CH      CH4;                /**< \brief 200, TIM channel objects */
    unsigned char       reserved_274[12];   /**< \brief 274, \internal Reserved */
    Ifx_GTM_TIM_CH      CH5;                /**< \brief 280, TIM channel objects */
    unsigned char       reserved_2F4[12];   /**< \brief 2F4, \internal Reserved */
    Ifx_GTM_TIM_CH      CH6;                /**< \brief 300, TIM channel objects */
    unsigned char       reserved_374[12];   /**< \brief 374, \internal Reserved */
    Ifx_GTM_TIM_CH      CH7;                /**< \brief 380, TIM channel objects */
    unsigned char       reserved_3F4[1036]; /**< \brief 3F4, \internal Reserved */
} Ifx_GTM_TIM;

/** \\brief  TOM objects */
typedef volatile struct _Ifx_GTM_TOM
{
    Ifx_GTM_TOM_CH              CH0;                /**< \brief 0, TOM channel objects */
    Ifx_GTM_TOM_TGC0_GLB_CTRL   TGC0_GLB_CTRL;      /**< \brief 30, TOM TGC 0 global control register */
    Ifx_GTM_TOM_TGC0_ACT_TB     TGC0_ACT_TB;        /**< \brief 34, TOM TGC 0 action time base register */
    Ifx_GTM_TOM_TGC0_FUPD_CTRL  TGC0_FUPD_CTRL;     /**< \brief 38, TOM TGC 0 force update control register */
    Ifx_GTM_TOM_TGC0_INT_TRIG   TGC0_INT_TRIG;      /**< \brief 3C, TOM TGC 0 internal trigger control register */
    Ifx_GTM_TOM_CH              CH1;                /**< \brief 40, TOM channel objects */
    Ifx_GTM_TOM_TGC0_ENDIS_CTRL TGC0_ENDIS_CTRL;    /**< \brief 70, TOM TGC 0 enable/disable control register */
    Ifx_GTM_TOM_TGC0_ENDIS_STAT TGC0_ENDIS_STAT;    /**< \brief 74, TOM TGC 0 enable/disable status register */
    Ifx_GTM_TOM_TGC0_OUTEN_CTRL TGC0_OUTEN_CTRL;    /**< \brief 78, TOM TGC 0 output enable control register */
    Ifx_GTM_TOM_TGC0_OUTEN_STAT TGC0_OUTEN_STAT;    /**< \brief 7C, TOM TGC 0 output enable status register */
    Ifx_GTM_TOM_CH              CH2;                /**< \brief 80, TOM channel objects */
    unsigned char               reserved_B0[16];    /**< \brief B0, \internal Reserved */
    Ifx_GTM_TOM_CH              CH3;                /**< \brief C0, TOM channel objects */
    unsigned char               reserved_F0[16];    /**< \brief F0, \internal Reserved */
    Ifx_GTM_TOM_CH              CH4;                /**< \brief 100, TOM channel objects */
    unsigned char               reserved_130[16];   /**< \brief 130, \internal Reserved */
    Ifx_GTM_TOM_CH              CH5;                /**< \brief 140, TOM channel objects */
    unsigned char               reserved_170[16];   /**< \brief 170, \internal Reserved */
    Ifx_GTM_TOM_CH              CH6;                /**< \brief 180, TOM channel objects */
    unsigned char               reserved_1B0[16];   /**< \brief 1B0, \internal Reserved */
    Ifx_GTM_TOM_CH              CH7;                /**< \brief 1C0, TOM channel objects */
    unsigned char               reserved_1F0[16];   /**< \brief 1F0, \internal Reserved */
    Ifx_GTM_TOM_CH              CH8;                /**< \brief 200, TOM channel objects */
    Ifx_GTM_TOM_TGC1_GLB_CTRL   TGC1_GLB_CTRL;      /**< \brief 230, TOM TGC 1 global control register */
    Ifx_GTM_TOM_TGC1_ACT_TB     TGC1_ACT_TB;        /**< \brief 234, TOM TGC 1 action time base register */
    Ifx_GTM_TOM_TGC1_FUPD_CTRL  TGC1_FUPD_CTRL;     /**< \brief 238, TOM TGC 1 force update control register */
    Ifx_GTM_TOM_TGC1_INT_TRIG   TGC1_INT_TRIG;      /**< \brief 23C, TOM TGC 1 internal trigger control register */
    Ifx_GTM_TOM_CH              CH9;                /**< \brief 240, TOM channel objects */
    Ifx_GTM_TOM_TGC1_ENDIS_CTRL TGC1_ENDIS_CTRL;    /**< \brief 270, TOM TGC 1 enable/disable control register */
    Ifx_GTM_TOM_TGC1_ENDIS_STAT TGC1_ENDIS_STAT;    /**< \brief 274, TOM TGC 1 enable/disable status register */
    Ifx_GTM_TOM_TGC1_OUTEN_CTRL TGC1_OUTEN_CTRL;    /**< \brief 278, TOM TGC 1 output enable control register */
    Ifx_GTM_TOM_TGC1_OUTEN_STAT TGC1_OUTEN_STAT;    /**< \brief 27C, TOM TGC 1 output enable status register */
    Ifx_GTM_TOM_CH              CH10;               /**< \brief 280, TOM channel objects */
    unsigned char               reserved_2B0[16];   /**< \brief 2B0, \internal Reserved */
    Ifx_GTM_TOM_CH              CH11;               /**< \brief 2C0, TOM channel objects */
    unsigned char               reserved_2F0[16];   /**< \brief 2F0, \internal Reserved */
    Ifx_GTM_TOM_CH              CH12;               /**< \brief 300, TOM channel objects */
    unsigned char               reserved_330[16];   /**< \brief 330, \internal Reserved */
    Ifx_GTM_TOM_CH              CH13;               /**< \brief 340, TOM channel objects */
    unsigned char               reserved_370[16];   /**< \brief 370, \internal Reserved */
    Ifx_GTM_TOM_CH              CH14;               /**< \brief 380, TOM channel objects */
    unsigned char               reserved_3B0[16];   /**< \brief 3B0, \internal Reserved */
    Ifx_GTM_TOM_CH              CH15;               /**< \brief 3C0, TOM channel objects */
    unsigned char               reserved_3F0[1040]; /**< \brief 3F0, \internal Reserved */
} Ifx_GTM_TOM;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Gtm_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  GTM object */
typedef volatile struct _Ifx_GTM
{
    Ifx_GTM_REV                    REV;                    /**< \brief 0, GTM Version control register */
    Ifx_GTM_RST                    RST;                    /**< \brief 4, GTM Global reset register */
    Ifx_GTM_CTRL                   CTRL;                   /**< \brief 8, GTM Global control register */
    Ifx_GTM_AEI_ADDR_XPT           AEI_ADDR_XPT;           /**< \brief C, GTM AEI Timeout exception address register */
    Ifx_GTM_IRQ_NOTIFY             IRQ_NOTIFY;             /**< \brief 10, GTM Interrupt notification register */
    Ifx_GTM_IRQ_EN                 IRQ_EN;                 /**< \brief 14, GTM Interrupt enable register */
    Ifx_GTM_IRQ_FORCINT            IRQ_FORCINT;            /**< \brief 18, GTM Software interrupt generation register */
    Ifx_GTM_IRQ_MODE               IRQ_MODE;               /**< \brief 1C, GTM top level interrupts mode selection */
    Ifx_GTM_EIRQ_EN                EIRQ_EN;                /**< \brief 20, GTM Error interrupt enable register */
    Ifx_GTM_HW_CONF                HW_CONF;                /**< \brief 24, GTM Hardware Configuration */
    Ifx_GTM_CFG                    CFG;                    /**< \brief 28, GTM Configuration register */
    Ifx_GTM_AEI_STA_XPT            AEI_STA_XPT;            /**< \brief 2C, GTM AEI Non zero status register */
    Ifx_GTM_BRIDGE                 BRIDGE;                 /**< \brief 30, BRIDGE object */
    Ifx_GTM_MCS_AEM_DIS            MCS_AEM_DIS;            /**< \brief 3C, GTM MCS master port disable register */
    Ifx_GTM_TIM_AUX_IN_SRC         TIM_AUX_IN_SRC[7];      /**< \brief 40, GTM TIM   module AUX_IN source selection register */
    Ifx_GTM_EXT_CAP_EN             EXT_CAP_EN[8];          /**< \brief 5C, GTM external capture trigger enable 0 */
    unsigned char                  reserved_7C[4];         /**< \brief 7C, \internal Reserved */
    Ifx_GTM_TOM_OUT                TOM_OUT[6];             /**< \brief 80, GTM TOM   output level */
    Ifx_GTM_ATOM_OUT               ATOM_OUT[5];            /**< \brief 98, GTM ATOM   Output Level */
    Ifx_GTM_ATOM10_OUT             ATOM10_OUT;             /**< \brief AC, GTM ATOM 10 Output Level */
    Ifx_GTM_CLS_CLK_CFG            CLS_CLK_CFG;            /**< \brief B0, GTM Cluster Clock Configuration */
    unsigned char                  reserved_B4[76];        /**< \brief B4, \internal Reserved */
    Ifx_GTM_TBU                    TBU;                    /**< \brief 100, TBU object */
    unsigned char                  reserved_12C[84];       /**< \brief 12C, \internal Reserved */
    Ifx_GTM_MON                    MON;                    /**< \brief 180, MON object */
    unsigned char                  reserved_1B4[76];       /**< \brief 1B4, \internal Reserved */
    Ifx_GTM_CMP                    CMP;                    /**< \brief 200, CMP object */
    unsigned char                  reserved_218[104];      /**< \brief 218, \internal Reserved */
    Ifx_GTM_ARU                    ARU;                    /**< \brief 280, ARU object */
    Ifx_GTM_CMU                    CMU;                    /**< \brief 300, CMU object */
    unsigned char                  reserved_350[176];      /**< \brief 350, \internal Reserved */
    Ifx_GTM_BRC                    BRC;                    /**< \brief 400, BRC object */
    unsigned char                  reserved_478[392];      /**< \brief 478, \internal Reserved */
    Ifx_GTM_ICM                    ICM;                    /**< \brief 600, ICM object */
    unsigned char                  reserved_7AC[84];       /**< \brief 7AC, \internal Reserved */
    Ifx_GTM_SPE                    SPE[6];                 /**< \brief 800, SPE objects */
    unsigned char                  reserved_B00[1024];     /**< \brief B00, \internal Reserved */
    Ifx_GTM_MAP_CTRL               MAP_CTRL;               /**< \brief F00, MAP Control register */
    unsigned char                  reserved_F04[60];       /**< \brief F04, \internal Reserved */
    Ifx_GTM_MCFG_CTRL              MCFG_CTRL;              /**< \brief F40, MCFG Memory layout configuration. */
    unsigned char                  reserved_F44[188];      /**< \brief F44, \internal Reserved */
    Ifx_GTM_TIM                    TIM[8];                 /**< \brief 1000, TIM objects */
    unsigned char                  reserved_5000[10240];   /**< \brief 5000, \internal Reserved */
    Ifx_GTM_MCS2DPLL_DEB           MCS2DPLL_DEB[16];       /**< \brief 7800, MCS to DPLL Data Exchange Buffer 0 */
    unsigned char                  reserved_7840[1984];    /**< \brief 7840, \internal Reserved */
    Ifx_GTM_TOM                    TOM[6];                 /**< \brief 8000, TOM objects */
    unsigned char                  reserved_B000[53248];   /**< \brief B000, \internal Reserved */
    Ifx_GTM_F2A                    F2A0;                   /**< \brief 18000, F2A object */
    Ifx_GTM_AFD                    AFD0;                   /**< \brief 18080, AFD object */
    Ifx_GTM_FIFO                   FIFO0;                  /**< \brief 18400, FIFO object */
    Ifx_GTM_F2A                    F2A1;                   /**< \brief 1C000, F2A object */
    Ifx_GTM_AFD                    AFD1;                   /**< \brief 1C080, AFD object */
    Ifx_GTM_FIFO                   FIFO1;                  /**< \brief 1C400, FIFO object */
    Ifx_GTM_F2A                    F2A2;                   /**< \brief 20000, F2A object */
    Ifx_GTM_AFD                    AFD2;                   /**< \brief 20080, AFD object */
    Ifx_GTM_FIFO                   FIFO2;                  /**< \brief 20400, FIFO object */
    unsigned char                  reserved_24000[16384];  /**< \brief 24000, \internal Reserved */
    Ifx_GTM_DPLL                   DPLL;                   /**< \brief 28000, DPLL object */
    unsigned char                  reserved_28F7C[486788]; /**< \brief 28F7C, \internal Reserved */
    Ifx_GTM_CLC                    CLC;                    /**< \brief 9FD00, Clock Control Register */
    unsigned char                  reserved_9FD04[12];     /**< \brief 9FD04, \internal Reserved */
    Ifx_GTM_INOUTSEL               INOUTSEL;               /**< \brief 9FD10, INSEL / OUTSEL object */
    Ifx_GTM_LCDCDCOUTSEL           LCDCDCOUTSEL;           /**< \brief 9FF9C, LCDCDC Output Select Register */
    Ifx_GTM_ADCTRIG4OUT0           ADCTRIG4OUT0;           /**< \brief 9FFA0, ADC Trigger 3Output Select 1 Register */
    Ifx_GTM_ADCTRIG4OUT1           ADCTRIG4OUT1;           /**< \brief 9FFA4, ADC Trigger 1 Output Select 1 Register */
    Ifx_GTM_OTBU3T                 OTBU3T;                 /**< \brief 9FFA8, OCDS TBU3 Trigger Register */
    Ifx_GTM_DTMAUXINSEL            DTMAUXINSEL;            /**< \brief 9FFAC, DTM_AUX Input Selection Register */
    unsigned char                  reserved_9FFB0[270416]; /**< \brief 9FFB0, \internal Reserved */
    Ifx_GTM_CCM                    CCM[10];                /**< \brief E2000, CCM objects */
    unsigned char                  reserved_E3400[476];    /**< \brief E3400, \internal Reserved */
    Ifx_GTM_CCM10_HW_CONF          CCM10_HW_CONF;          /**< \brief E35DC, CCM10 Hardware Configuration */
    unsigned char                  reserved_E35E0[16];     /**< \brief E35E0, \internal Reserved */
    Ifx_GTM_CCM10_CMU_CLK_CFG      CCM10_CMU_CLK_CFG;      /**< \brief E35F0, CCM10 CMU Clock Configuration Register */
    Ifx_GTM_CCM10_CMU_FXCLK_CFG    CCM10_CMU_FXCLK_CFG;    /**< \brief E35F4, CCM10 CMU Fixed Clock Configuration Register */
    Ifx_GTM_CCM10_CFG              CCM10_CFG;              /**< \brief E35F8, CCM10 Configuration Register */
    Ifx_GTM_CCM10_PROT             CCM10_PROT;             /**< \brief E35FC, CCM10 Protection Register */
    unsigned char                  reserved_E3600[476];    /**< \brief E3600, \internal Reserved */
    Ifx_GTM_CCM11_HW_CONF          CCM11_HW_CONF;          /**< \brief E37DC, CCM11 Hardware Configuration */
    unsigned char                  reserved_E37E0[16];     /**< \brief E37E0, \internal Reserved */
    Ifx_GTM_CCM11_CMU_CLK_CFG      CCM11_CMU_CLK_CFG;      /**< \brief E37F0, CCM11 CMU Clock Configuration Register */
    Ifx_GTM_CCM11_CMU_FXCLK_CFG    CCM11_CMU_FXCLK_CFG;    /**< \brief E37F4, CCM11 CMU Fixed Clock Configuration Register */
    Ifx_GTM_CCM11_CFG              CCM11_CFG;              /**< \brief E37F8, CCM11 Configuration Register */
    Ifx_GTM_CCM11_PROT             CCM11_PROT;             /**< \brief E37FC, CCM11 Protection Register */
    unsigned char                  reserved_E3800[2048];   /**< \brief E3800, \internal Reserved */
    Ifx_GTM_CDTM                   CDTM[5];                /**< \brief E4000, CDTM objects */
    unsigned char                  reserved_E5400[256];    /**< \brief E5400, \internal Reserved */
    Ifx_GTM_CDTM5_DTM4_CTRL        CDTM5_DTM4_CTRL;        /**< \brief E5500, CDTM5 DTM4 global configuration and control register */
    unsigned char                  reserved_E5504[8];      /**< \brief E5504, \internal Reserved */
    Ifx_GTM_CDTM5_DTM4_CH_CTRL2_SR CDTM5_DTM4_CH_CTRL2_SR; /**< \brief E550C, CDTM5 DTM4 channel control register 2 shadow */
    Ifx_GTM_CDTM5_DTM4_PS_CTRL     CDTM5_DTM4_PS_CTRL;     /**< \brief E5510, CDTM5 DTM4 phase shift unit configuration and control register */
    Ifx_GTM_CDTM5_DTM4_CH0_DTV     CDTM5_DTM4_CH0_DTV;     /**< \brief E5514, CDTM5 DTM4 channel 0 dead time reload values */
    Ifx_GTM_CDTM5_DTM4_CH1_DTV     CDTM5_DTM4_CH1_DTV;     /**< \brief E5518, CDTM5 DTM4 channel 1 dead t5me reload values */
    Ifx_GTM_CDTM5_DTM4_CH2_DTV     CDTM5_DTM4_CH2_DTV;     /**< \brief E551C, CDTM5 DTM4 channel 2 dead t5me reload values */
    Ifx_GTM_CDTM5_DTM4_CH3_DTV     CDTM5_DTM4_CH3_DTV;     /**< \brief E5520, CDTM5 DTM4 channel 3 dead t5me reload values */
    Ifx_GTM_CDTM5_DTM4_CH_SR       CDTM5_DTM4_CH_SR;       /**< \brief E5524, CDTM5 DTM4 channel shadow register */
    Ifx_GTM_CDTM5_DTM4_CH_CTRL3    CDTM5_DTM4_CH_CTRL3;    /**< \brief E5528, CDTM5 DTM4 channel control register 3 */
    unsigned char                  reserved_E552C[20];     /**< \brief E552C, \internal Reserved */
    Ifx_GTM_CDTM5_DTM5_CTRL        CDTM5_DTM5_CTRL;        /**< \brief E5540, CDTM5 DTM5 global configuration and control register */
    Ifx_GTM_CDTM5_DTM5_CH_CTRL1    CDTM5_DTM5_CH_CTRL1;    /**< \brief E5544, CDTM5 DTM5 channel control register 1 */
    Ifx_GTM_CDTM5_DTM5_CH_CTRL2    CDTM5_DTM5_CH_CTRL2;    /**< \brief E5548, CDTM5 DTM5 channel control register 2 */
    Ifx_GTM_CDTM5_DTM5_CH_CTRL2_SR CDTM5_DTM5_CH_CTRL2_SR; /**< \brief E554C, CDTM5 DTM5 channel control register 2 shadow */
    Ifx_GTM_CDTM5_DTM5_PS_CTRL     CDTM5_DTM5_PS_CTRL;     /**< \brief E5550, CDTM5 DTM5 phase shift unit configuration and control register */
    Ifx_GTM_CDTM5_DTM5_CH0_DTV     CDTM5_DTM5_CH0_DTV;     /**< \brief E5554, CDTM5 DTM5 channel 0 dead time reload values */
    Ifx_GTM_CDTM5_DTM5_CH1_DTV     CDTM5_DTM5_CH1_DTV;     /**< \brief E5558, CDTM5 DTM5 channel 1 dead t5me reload values */
    Ifx_GTM_CDTM5_DTM5_CH2_DTV     CDTM5_DTM5_CH2_DTV;     /**< \brief E555C, CDTM5 DTM5 channel 2 dead t5me reload values */
    Ifx_GTM_CDTM5_DTM5_CH3_DTV     CDTM5_DTM5_CH3_DTV;     /**< \brief E5560, CDTM5 DTM5 channel 3 dead t5me reload values */
    Ifx_GTM_CDTM5_DTM5_CH_SR       CDTM5_DTM5_CH_SR;       /**< \brief E5564, CDTM5 DTM5 channel shadow register */
    Ifx_GTM_CDTM5_DTM5_CH_CTRL3    CDTM5_DTM5_CH_CTRL3;    /**< \brief E5568, CDTM5 DTM5 channel control register 3 */
    unsigned char                  reserved_E556C[916];    /**< \brief E556C, \internal Reserved */
    Ifx_GTM_CDTM6_DTM4_CTRL        CDTM6_DTM4_CTRL;        /**< \brief E5900, CDTM6 DTM4 global configuration and control register */
    unsigned char                  reserved_E5904[8];      /**< \brief E5904, \internal Reserved */
    Ifx_GTM_CDTM6_DTM4_CH_CTRL2_SR CDTM6_DTM4_CH_CTRL2_SR; /**< \brief E590C, CDTM6 DTM4 channel control register 2 shadow */
    Ifx_GTM_CDTM6_DTM4_PS_CTRL     CDTM6_DTM4_PS_CTRL;     /**< \brief E5910, CDTM6 DTM4 phase shift unit configuration and control register */
    Ifx_GTM_CDTM6_DTM4_CH0_DTV     CDTM6_DTM4_CH0_DTV;     /**< \brief E5914, CDTM6 DTM4 channel 0 dead time reload values */
    Ifx_GTM_CDTM6_DTM4_CH1_DTV     CDTM6_DTM4_CH1_DTV;     /**< \brief E5918, CDTM6 DTM4 channel 1 dead time reload values */
    Ifx_GTM_CDTM6_DTM4_CH2_DTV     CDTM6_DTM4_CH2_DTV;     /**< \brief E591C, CDTM6 DTM4 channel 2 dead time reload values */
    Ifx_GTM_CDTM6_DTM4_CH3_DTV     CDTM6_DTM4_CH3_DTV;     /**< \brief E5920, CDTM6 DTM4 channel 3 dead time reload values */
    Ifx_GTM_CDTM6_DTM4_CH_SR       CDTM6_DTM4_CH_SR;       /**< \brief E5924, CDTM6 DTM4 channel shadow register */
    Ifx_GTM_CDTM6_DTM4_CH_CTRL3    CDTM6_DTM4_CH_CTRL3;    /**< \brief E5928, CDTM6 DTM4 channel control register 3 */
    unsigned char                  reserved_E592C[20];     /**< \brief E592C, \internal Reserved */
    Ifx_GTM_CDTM6_DTM5_CTRL        CDTM6_DTM5_CTRL;        /**< \brief E5940, CDTM6 DTM5 global configuration and control register */
    Ifx_GTM_CDTM6_DTM5_CH_CTRL1    CDTM6_DTM5_CH_CTRL1;    /**< \brief E5944, CDTM6 DTM5 channel control register 1 */
    Ifx_GTM_CDTM6_DTM5_CH_CTRL2    CDTM6_DTM5_CH_CTRL2;    /**< \brief E5948, CDTM6 DTM5 channel control register 2 */
    Ifx_GTM_CDTM6_DTM5_CH_CTRL2_SR CDTM6_DTM5_CH_CTRL2_SR; /**< \brief E594C, CDTM6 DTM5 channel control register 2 shadow */
    Ifx_GTM_CDTM6_DTM5_PS_CTRL     CDTM6_DTM5_PS_CTRL;     /**< \brief E5950, CDTM6 DTM5 phase shift unit configuration and control register */
    Ifx_GTM_CDTM6_DTM5_CH0_DTV     CDTM6_DTM5_CH0_DTV;     /**< \brief E5954, CDTM6 DTM5 channel 0 dead time reload values */
    Ifx_GTM_CDTM6_DTM5_CH1_DTV     CDTM6_DTM5_CH1_DTV;     /**< \brief E5958, CDTM6 DTM5 channel 1 dead time reload values */
    Ifx_GTM_CDTM6_DTM5_CH2_DTV     CDTM6_DTM5_CH2_DTV;     /**< \brief E595C, CDTM6 DTM5 channel 2 dead time reload values */
    Ifx_GTM_CDTM6_DTM5_CH3_DTV     CDTM6_DTM5_CH3_DTV;     /**< \brief E5960, CDTM6 DTM5 channel 3 dead time reload values */
    Ifx_GTM_CDTM6_DTM5_CH_SR       CDTM6_DTM5_CH_SR;       /**< \brief E5964, CDTM6 DTM5 channel shadow register */
    Ifx_GTM_CDTM6_DTM5_CH_CTRL3    CDTM6_DTM5_CH_CTRL3;    /**< \brief E5968, CDTM6 DTM5 channel control register 3 */
    unsigned char                  reserved_E596C[9876];   /**< \brief E596C, \internal Reserved */
    Ifx_GTM_ATOM                   ATOM[12];               /**< \brief E8000, ATOM objects */
    unsigned char                  reserved_EE000[8192];   /**< \brief EE000, \internal Reserved */
    Ifx_GTM_MCS                    MCS[10];                /**< \brief F0000, MCS objects */
    unsigned char                  reserved_FA000[24576];  /**< \brief FA000, \internal Reserved */
} Ifx_GTM;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#if defined(__TASKING__)
#pragma warning restore
#endif
/******************************************************************************/
/******************************************************************************/
#endif /* IFXGTM_REGDEF_H */
