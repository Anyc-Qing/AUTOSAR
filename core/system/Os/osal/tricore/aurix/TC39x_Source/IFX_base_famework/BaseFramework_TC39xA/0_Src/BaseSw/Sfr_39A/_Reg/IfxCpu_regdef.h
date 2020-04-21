/**
 * \file IfxCpu_regdef.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: corex_CSFR_MCSFR.xml , corex_SFR_MCSFR.xml dated xx.09.2014
 * Specification: TBD
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
 * \defgroup IfxLld_Cpu Cpu
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Cpu_Bitfields Bitfields
 * \ingroup IfxLld_Cpu
 * 
 * \defgroup IfxLld_Cpu_union Union
 * \ingroup IfxLld_Cpu
 * 
 * \defgroup IfxLld_Cpu_struct Struct
 * \ingroup IfxLld_Cpu
 * 
 */
#ifndef IFXCPU_REGDEF_H
#define IFXCPU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Bitfields
 * \{  */

/** \brief  CPU Address General Purpose Register */
typedef struct _Ifx_CPU_A_Bits
{
    Ifx_Strict_32Bit ADDR:32;               /**< \brief [31:0] Address Register (rw) */
} Ifx_CPU_A_Bits;

/** \brief  CPU Base Interrupt Vector Table Pointer */
typedef struct _Ifx_CPU_BIV_Bits
{
    Ifx_Strict_32Bit VSS:1;                 /**< \brief [0:0] Vector Spacing Select (rw) */
    Ifx_Strict_32Bit BIV:31;                /**< \brief [31:1] Base Address of Interrupt Vector Table (rw) */
} Ifx_CPU_BIV_Bits;

/** \brief  CPU Base Trap Vector Table Pointer */
typedef struct _Ifx_CPU_BTV_Bits
{
    Ifx_Strict_32Bit reserved_0:1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit BTV:31;                /**< \brief [31:1] Base Address of Trap Vector Table (rw) */
} Ifx_CPU_BTV_Bits;

/** \brief  CPU CPU Clock Cycle Count */
typedef struct _Ifx_CPU_CCNT_Bits
{
    Ifx_Strict_32Bit CountValue:31;         /**< \brief [30:0] Count Value (rw) */
    Ifx_Strict_32Bit SOvf:1;                /**< \brief [31:31] Sticky Overflow Bit (rw) */
} Ifx_CPU_CCNT_Bits;

/** \brief  CPU Counter Control */
typedef struct _Ifx_CPU_CCTRL_Bits
{
    Ifx_Strict_32Bit CM:1;                  /**< \brief [0:0] Counter Mode (rw) */
    Ifx_Strict_32Bit CE:1;                  /**< \brief [1:1] Count Enable (rw) */
    Ifx_Strict_32Bit M1:3;                  /**< \brief [4:2] M1CNT Configuration (rw) */
    Ifx_Strict_32Bit M2:3;                  /**< \brief [7:5] M2CNT Configuration (rw) */
    Ifx_Strict_32Bit M3:3;                  /**< \brief [10:8] M3CNT Configuration (rw) */
    Ifx_Strict_32Bit reserved_11:21;        /**< \brief \internal Reserved */
} Ifx_CPU_CCTRL_Bits;

/** \brief  CPU Compatibility Control Register */
typedef struct _Ifx_CPU_COMPAT_Bits
{
    Ifx_Strict_32Bit reserved_0:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RM:1;                  /**< \brief [3:3] Rounding Mode Compatibility (rw) */
    Ifx_Strict_32Bit SP:1;                  /**< \brief [4:4] SYSCON Safety Protection Mode Compatibility (rw) */
    Ifx_Strict_32Bit reserved_5:27;         /**< \brief \internal Reserved */
} Ifx_CPU_COMPAT_Bits;

/** \brief  CPU Core Identification Register */
typedef struct _Ifx_CPU_CORE_ID_Bits
{
    Ifx_Strict_32Bit CORE_ID:3;             /**< \brief [2:0] Core Identification Number (rw) */
    Ifx_Strict_32Bit reserved_3:29;         /**< \brief \internal Reserved */
} Ifx_CPU_CORE_ID_Bits;

/** \brief  CPU Code Protection Range Lower Bound Register */
typedef struct _Ifx_CPU_CPR_L_Bits
{
    Ifx_Strict_32Bit reserved_0:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit LOWBND:29;             /**< \brief [31:3] CPRy Lower Boundary Address (rw) */
} Ifx_CPU_CPR_L_Bits;

/** \brief  CPU Code Protection Range Upper Bound Register */
typedef struct _Ifx_CPU_CPR_U_Bits
{
    Ifx_Strict_32Bit reserved_0:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit UPPBND:29;             /**< \brief [31:3] CPR0_m Upper Boundary Address (rw) */
} Ifx_CPU_CPR_U_Bits;

/** \brief  CPU Identification Register TC1.6P */
typedef struct _Ifx_CPU_CPU_ID_Bits
{
    Ifx_Strict_32Bit MOD_REV:8;             /**< \brief [7:0] Revision Number (r) */
    Ifx_Strict_32Bit MOD_32B:8;             /**< \brief [15:8] 32-Bit Module Enable (r) */
    Ifx_Strict_32Bit MOD:16;                /**< \brief [31:16] Module Identification Number (r) */
} Ifx_CPU_CPU_ID_Bits;

/** \brief  CPU Code Protection Execute Enable Register Set 0 */
typedef struct _Ifx_CPU_CPXE_0_Bits
{
    Ifx_Strict_32Bit XE:10;                 /**< \brief [9:0] Execute Enable Range select (rw) */
    Ifx_Strict_32Bit reserved_10:22;        /**< \brief \internal Reserved */
} Ifx_CPU_CPXE_0_Bits;

/** \brief  CPU Code Protection Execute Enable Register Set 1 */
typedef struct _Ifx_CPU_CPXE_1_Bits
{
    Ifx_Strict_32Bit XE:10;                 /**< \brief [9:0] Execute Enable Range select (rw) */
    Ifx_Strict_32Bit reserved_10:22;        /**< \brief \internal Reserved */
} Ifx_CPU_CPXE_1_Bits;

/** \brief  CPU Code Protection Execute Enable Register Set 2 */
typedef struct _Ifx_CPU_CPXE_2_Bits
{
    Ifx_Strict_32Bit XE:10;                 /**< \brief [9:0] Execute Enable Range select (rw) */
    Ifx_Strict_32Bit reserved_10:22;        /**< \brief \internal Reserved */
} Ifx_CPU_CPXE_2_Bits;

/** \brief  CPU Code Protection Execute Enable Register Set 3 */
typedef struct _Ifx_CPU_CPXE_3_Bits
{
    Ifx_Strict_32Bit XE:10;                 /**< \brief [9:0] Execute Enable Range select (rw) */
    Ifx_Strict_32Bit reserved_10:22;        /**< \brief \internal Reserved */
} Ifx_CPU_CPXE_3_Bits;

/** \brief  CPU Code Protection Execute Enable Register Set 4 */
typedef struct _Ifx_CPU_CPXE_4_Bits
{
    Ifx_Strict_32Bit XE:10;                 /**< \brief [9:0] Execute Enable Range select (rw) */
    Ifx_Strict_32Bit reserved_10:22;        /**< \brief \internal Reserved */
} Ifx_CPU_CPXE_4_Bits;

/** \brief  CPU Code Protection Execute Enable Register Set 5 */
typedef struct _Ifx_CPU_CPXE_5_Bits
{
    Ifx_Strict_32Bit XE:10;                 /**< \brief [9:0] Execute Enable Range select (rw) */
    Ifx_Strict_32Bit reserved_10:22;        /**< \brief \internal Reserved */
} Ifx_CPU_CPXE_5_Bits;

/** \brief  CPU Core Register Access Event */
typedef struct _Ifx_CPU_CREVT_Bits
{
    Ifx_Strict_32Bit EVTA:3;                /**< \brief [2:0] Event Associated (rw) */
    Ifx_Strict_32Bit BBM:1;                 /**< \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection (rw) */
    Ifx_Strict_32Bit BOD:1;                 /**< \brief [4:4] Breakout Disable (rw) */
    Ifx_Strict_32Bit SUSP:1;                /**< \brief [5:5] CDC Suspend-Out Signal State (rw) */
    Ifx_Strict_32Bit CNT:2;                 /**< \brief [7:6] Counter (rw) */
    Ifx_Strict_32Bit reserved_8:24;         /**< \brief \internal Reserved */
} Ifx_CPU_CREVT_Bits;

/** \brief  CPU Customer ID register */
typedef struct _Ifx_CPU_CUS_ID_Bits
{
    Ifx_Strict_32Bit CID:3;                 /**< \brief [2:0] Customer ID (r) */
    Ifx_Strict_32Bit reserved_3:29;         /**< \brief \internal Reserved */
} Ifx_CPU_CUS_ID_Bits;

/** \brief  CPU Data General Purpose Register */
typedef struct _Ifx_CPU_D_Bits
{
    Ifx_Strict_32Bit DATA:32;               /**< \brief [31:0] Data Register (rw) */
} Ifx_CPU_D_Bits;

/** \brief  CPU Data Asynchronous Trap Register */
typedef struct _Ifx_CPU_DATR_Bits
{
    Ifx_Strict_32Bit reserved_0:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SBE:1;                 /**< \brief [3:3] Store Bus Error (rwh) */
    Ifx_Strict_32Bit reserved_4:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CWE:1;                 /**< \brief [9:9] Cache Writeback Error (rwh) */
    Ifx_Strict_32Bit CFE:1;                 /**< \brief [10:10] Cache Flush Error (rwh) */
    Ifx_Strict_32Bit reserved_11:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SOE:1;                 /**< \brief [14:14] Store Overlay Error (rwh) */
    Ifx_Strict_32Bit reserved_15:17;        /**< \brief \internal Reserved */
} Ifx_CPU_DATR_Bits;

/** \brief  CPU Debug Status Register */
typedef struct _Ifx_CPU_DBGSR_Bits
{
    Ifx_Strict_32Bit DE:1;                  /**< \brief [0:0] Debug Enable (rh) */
    Ifx_Strict_32Bit HALT:2;                /**< \brief [2:1] CPU Halt Request / Status Field (rwh) */
    Ifx_Strict_32Bit SIH:1;                 /**< \brief [3:3] Suspend-in Halt (rh) */
    Ifx_Strict_32Bit SUSP:1;                /**< \brief [4:4] Current State of the Core Suspend-Out Signal (rwh) */
    Ifx_Strict_32Bit reserved_5:1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PREVSUSP:1;            /**< \brief [6:6] Previous State of Core Suspend-Out Signal (rh) */
    Ifx_Strict_32Bit PEVT:1;                /**< \brief [7:7] Posted Event (rwh) */
    Ifx_Strict_32Bit EVTSRC:5;              /**< \brief [12:8] Event Source (rh) */
    Ifx_Strict_32Bit reserved_13:19;        /**< \brief \internal Reserved */
} Ifx_CPU_DBGSR_Bits;

/** \brief  CPU Debug Trap Control Register */
typedef struct _Ifx_CPU_DBGTCR_Bits
{
    Ifx_Strict_32Bit DTA:1;                 /**< \brief [0:0] Debug Trap Active Bit (rwh) */
    Ifx_Strict_32Bit reserved_1:31;         /**< \brief \internal Reserved */
} Ifx_CPU_DBGTCR_Bits;

/** \brief  CPU Data Memory Control Register */
typedef struct _Ifx_CPU_DCON0_Bits
{
    Ifx_Strict_32Bit reserved_0:1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DCBYP:1;               /**< \brief [1:1] Data Cache Bypass (rw) */
    Ifx_Strict_32Bit reserved_2:30;         /**< \brief \internal Reserved */
} Ifx_CPU_DCON0_Bits;

/** \brief  CPU Data Control Register 2 */
typedef struct _Ifx_CPU_DCON2_Bits
{
    Ifx_Strict_32Bit DCACHE_SZE:16;         /**< \brief [15:0] Data Cache Size (r) */
    Ifx_Strict_32Bit DSCRATCH_SZE:16;       /**< \brief [31:16] Data Scratch Size (r) */
} Ifx_CPU_DCON2_Bits;

/** \brief  CPU Debug Context Save Area Pointer */
typedef struct _Ifx_CPU_DCX_Bits
{
    Ifx_Strict_32Bit reserved_0:6;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DCXValue:26;           /**< \brief [31:6] Debug Context Save Area Pointer (rw) */
} Ifx_CPU_DCX_Bits;

/** \brief  CPU Data Error Address Register */
typedef struct _Ifx_CPU_DEADD_Bits
{
    Ifx_Strict_32Bit ERROR_ADDRESS:32;      /**< \brief [31:0] Error Address (rh) */
} Ifx_CPU_DEADD_Bits;

/** \brief  CPU Data Integrity Error Address Register */
typedef struct _Ifx_CPU_DIEAR_Bits
{
    Ifx_Strict_32Bit TA:32;                 /**< \brief [31:0] Transaction Address (rh) */
} Ifx_CPU_DIEAR_Bits;

/** \brief  CPU Data Integrity Error Trap Register */
typedef struct _Ifx_CPU_DIETR_Bits
{
    Ifx_Strict_32Bit IED:1;                 /**< \brief [0:0] Integrity Error Detected (rwh) */
    Ifx_Strict_32Bit IE_T:1;                /**< \brief [1:1] Integrity Error - Tag Memory (rh) */
    Ifx_Strict_32Bit IE_C:1;                /**< \brief [2:2] Integrity Error - Cache Memory (rh) */
    Ifx_Strict_32Bit IE_S:1;                /**< \brief [3:3] Integrity Error - Scratchpad Memory (rh) */
    Ifx_Strict_32Bit IE_BI:1;               /**< \brief [4:4] Integrity Error - Bus Interface (rh) */
    Ifx_Strict_32Bit E_INFO:6;              /**< \brief [10:5] Error Information (rh) */
    Ifx_Strict_32Bit IE_UNC:1;              /**< \brief [11:11] Dual Bit Error Detected (rh) */
    Ifx_Strict_32Bit IE_SP:1;               /**< \brief [12:12] Safety Protection Error Detected (rh) */
    Ifx_Strict_32Bit IE_BS:1;               /**< \brief [13:13] Bus Slave Access Indicator (rh) */
    Ifx_Strict_32Bit IE_DLMU:1;             /**< \brief [14:14] Integrity Error - DLMU (rh) */
    Ifx_Strict_32Bit IE_LPB:1;              /**< \brief [15:15] Integrity Error - Local Pflash Bank (rh) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_CPU_DIETR_Bits;

/** \brief  CPU Safety Protection Region DLMU Write Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Write Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W_Bits;

/** \brief  CPU Safety Protection Region DLMU Write Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W_Bits;

/** \brief  CPU Safety Protection DLMU Region Lower Address Register */
typedef struct _Ifx_CPU_DLMU_SPROT_RGN_LA_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ADDR:27;               /**< \brief [31:5] Region Lower Address (rw) */
} Ifx_CPU_DLMU_SPROT_RGN_LA_Bits;

/** \brief  CPU Safety protection DLMU Region Upper Address Register */
typedef struct _Ifx_CPU_DLMU_SPROT_RGN_UA_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ADDR:27;               /**< \brief [31:5] Region Upper Address (rw) */
} Ifx_CPU_DLMU_SPROT_RGN_UA_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA0_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA0_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA1_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA1_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA2_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA2_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA3_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA3_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA4_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA4_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA5_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA5_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA6_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA6_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENA7_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_DLMU_SPROT_RGNACCENA7_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB0_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGNACCENB0_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB1_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGNACCENB1_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB2_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGNACCENB2_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB3_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGNACCENB3_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB4_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGNACCENB4_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB5_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGNACCENB5_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB6_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGNACCENB6_R_Bits;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef struct _Ifx_CPU_DLMU_SPROT_RGNACCENB7_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_DLMU_SPROT_RGNACCENB7_R_Bits;

/** \brief  CPU Debug Monitor Start Address */
typedef struct _Ifx_CPU_DMS_Bits
{
    Ifx_Strict_32Bit reserved_0:1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DMSValue:31;           /**< \brief [31:1] Debug Monitor Start Address (rw) */
} Ifx_CPU_DMS_Bits;

/** \brief  CPU Data Protection Range, Lower Bound Register */
typedef struct _Ifx_CPU_DPR_L_Bits
{
    Ifx_Strict_32Bit reserved_0:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit LOWBND:29;             /**< \brief [31:3] DPRy Lower Boundary Address (rw) */
} Ifx_CPU_DPR_L_Bits;

/** \brief  CPU Data Protection Range, Upper Bound Register */
typedef struct _Ifx_CPU_DPR_U_Bits
{
    Ifx_Strict_32Bit reserved_0:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit UPPBND:29;             /**< \brief [31:3] DPRy Upper Boundary Address (rw) */
} Ifx_CPU_DPR_U_Bits;

/** \brief  CPU Data Protection Read Enable Register Set 0 */
typedef struct _Ifx_CPU_DPRE_0_Bits
{
    Ifx_Strict_32Bit RE:18;                 /**< \brief [17:0] Read Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPRE_0_Bits;

/** \brief  CPU Data Protection Read Enable Register Set 1 */
typedef struct _Ifx_CPU_DPRE_1_Bits
{
    Ifx_Strict_32Bit RE:18;                 /**< \brief [17:0] Read Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPRE_1_Bits;

/** \brief  CPU Data Protection Read Enable Register Set 2 */
typedef struct _Ifx_CPU_DPRE_2_Bits
{
    Ifx_Strict_32Bit RE:18;                 /**< \brief [17:0] Read Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPRE_2_Bits;

/** \brief  CPU Data Protection Read Enable Register Set 3 */
typedef struct _Ifx_CPU_DPRE_3_Bits
{
    Ifx_Strict_32Bit RE:18;                 /**< \brief [17:0] Read Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPRE_3_Bits;

/** \brief  CPU Data Protection Read Enable Register Set 4 */
typedef struct _Ifx_CPU_DPRE_4_Bits
{
    Ifx_Strict_32Bit RE:18;                 /**< \brief [17:0] Read Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPRE_4_Bits;

/** \brief  CPU Data Protection Read Enable Register Set 5 */
typedef struct _Ifx_CPU_DPRE_5_Bits
{
    Ifx_Strict_32Bit RE:18;                 /**< \brief [17:0] Read Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPRE_5_Bits;

/** \brief  CPU Data Protection Write Enable Register Set 0 */
typedef struct _Ifx_CPU_DPWE_0_Bits
{
    Ifx_Strict_32Bit WE:18;                 /**< \brief [17:0] Write Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPWE_0_Bits;

/** \brief  CPU Data Protection Write Enable Register Set 1 */
typedef struct _Ifx_CPU_DPWE_1_Bits
{
    Ifx_Strict_32Bit WE:18;                 /**< \brief [17:0] Write Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPWE_1_Bits;

/** \brief  CPU Data Protection Write Enable Register Set 2 */
typedef struct _Ifx_CPU_DPWE_2_Bits
{
    Ifx_Strict_32Bit WE:18;                 /**< \brief [17:0] Write Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPWE_2_Bits;

/** \brief  CPU Data Protection Write Enable Register Set 3 */
typedef struct _Ifx_CPU_DPWE_3_Bits
{
    Ifx_Strict_32Bit WE:18;                 /**< \brief [17:0] Write Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPWE_3_Bits;

/** \brief  CPU Data Protection Write Enable Register Set 4 */
typedef struct _Ifx_CPU_DPWE_4_Bits
{
    Ifx_Strict_32Bit WE:18;                 /**< \brief [17:0] Write Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPWE_4_Bits;

/** \brief  CPU Data Protection Write Enable Register Set 5 */
typedef struct _Ifx_CPU_DPWE_5_Bits
{
    Ifx_Strict_32Bit WE:18;                 /**< \brief [17:0] Write Enable Range Select (rw) */
    Ifx_Strict_32Bit reserved_18:14;        /**< \brief \internal Reserved */
} Ifx_CPU_DPWE_5_Bits;

/** \brief  CPU Data Synchronous Trap Register */
typedef struct _Ifx_CPU_DSTR_Bits
{
    Ifx_Strict_32Bit SRE:1;                 /**< \brief [0:0] Scratch Range Error (rwh) */
    Ifx_Strict_32Bit GAE:1;                 /**< \brief [1:1] Global Address Error (rwh) */
    Ifx_Strict_32Bit LBE:1;                 /**< \brief [2:2] Load Bus Error (rwh) */
    Ifx_Strict_32Bit reserved_3:3;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CRE:1;                 /**< \brief [6:6] Cache Refill Error (rwh) */
    Ifx_Strict_32Bit reserved_7:7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DTME:1;                /**< \brief [14:14] DTAG MSIST Error (rwh) */
    Ifx_Strict_32Bit LOE:1;                 /**< \brief [15:15] Load Overlay Error (rwh) */
    Ifx_Strict_32Bit SDE:1;                 /**< \brief [16:16] Segment Difference Error (rwh) */
    Ifx_Strict_32Bit SCE:1;                 /**< \brief [17:17] Segment Crossing Error (rwh) */
    Ifx_Strict_32Bit CAC:1;                 /**< \brief [18:18] CSFR Access Error (rwh) */
    Ifx_Strict_32Bit MPE:1;                 /**< \brief [19:19] Memory Protection Error (rwh) */
    Ifx_Strict_32Bit CLE:1;                 /**< \brief [20:20] Context Location Error (rwh) */
    Ifx_Strict_32Bit reserved_21:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ALN:1;                 /**< \brief [24:24] Alignment Error (rwh) */
    Ifx_Strict_32Bit reserved_25:7;         /**< \brief \internal Reserved */
} Ifx_CPU_DSTR_Bits;

/** \brief  CPU External Event Register */
typedef struct _Ifx_CPU_EXEVT_Bits
{
    Ifx_Strict_32Bit EVTA:3;                /**< \brief [2:0] Event Associated (rw) */
    Ifx_Strict_32Bit BBM:1;                 /**< \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection (rw) */
    Ifx_Strict_32Bit BOD:1;                 /**< \brief [4:4] Breakout Disable (rw) */
    Ifx_Strict_32Bit SUSP:1;                /**< \brief [5:5] CDC Suspend-Out Signal State (rw) */
    Ifx_Strict_32Bit CNT:2;                 /**< \brief [7:6] Counter (rw) */
    Ifx_Strict_32Bit reserved_8:24;         /**< \brief \internal Reserved */
} Ifx_CPU_EXEVT_Bits;

/** \brief  CPU Free CSA List Head Pointer */
typedef struct _Ifx_CPU_FCX_Bits
{
    Ifx_Strict_32Bit FCXO:16;               /**< \brief [15:0] FCX Offset Address Field (rw) */
    Ifx_Strict_32Bit FCXS:4;                /**< \brief [19:16] FCX Segment Address Field (rw) */
    Ifx_Strict_32Bit reserved_20:12;        /**< \brief \internal Reserved */
} Ifx_CPU_FCX_Bits;

/** \brief  CPU Flash Configuration Register 0 */
typedef struct _Ifx_CPU_FLASHCON0_Bits
{
    Ifx_Strict_32Bit TAG1:6;                /**< \brief [5:0] Flash Prefetch Buffer 1 Configuration (rw) */
    Ifx_Strict_32Bit reserved_6:2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TAG2:6;                /**< \brief [13:8] Flash Prefetch Buffer 2 Configuration (rw) */
    Ifx_Strict_32Bit reserved_14:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TAG3:6;                /**< \brief [21:16] Flash Prefetch Buffer 3 Configuration (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TAG4:6;                /**< \brief [29:24] Flash Prefetch Buffer 4 Configuration (rw) */
    Ifx_Strict_32Bit reserved_30:2;         /**< \brief \internal Reserved */
} Ifx_CPU_FLASHCON0_Bits;

/** \brief  CPU Flash Configuration Register 1 */
typedef struct _Ifx_CPU_FLASHCON1_Bits
{
    Ifx_Strict_32Bit STALL:1;               /**< \brief [0:0] Stall Bus Request (rw) */
    Ifx_Strict_32Bit SPARE1:1;              /**< \brief [1:1] Spare Bit 1 (rw) */
    Ifx_Strict_32Bit reserved_2:6;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SPARE8:1;              /**< \brief [8:8] Spare Bit 8 (rw) */
    Ifx_Strict_32Bit SPARE9:1;              /**< \brief [9:9] Spare Bit 9 (rw) */
    Ifx_Strict_32Bit reserved_10:6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit MASKUECC :1;           /**< \brief [16:16] Spare Bit 16 (rw) */
    Ifx_Strict_32Bit SPARE17:1;             /**< \brief [17:17] Spare Bit 17 (rw) */
    Ifx_Strict_32Bit reserved_18:6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SPARE24:1;             /**< \brief [24:24] Spare Bit 24 (rw) */
    Ifx_Strict_32Bit SPARE25:1;             /**< \brief [25:25] Spare Bit 25 (rw) */
    Ifx_Strict_32Bit reserved_26:6;         /**< \brief \internal Reserved */
} Ifx_CPU_FLASHCON1_Bits;

/** \brief  CPU Flash Configuration Register 2 */
typedef struct _Ifx_CPU_FLASHCON2_Bits
{
    Ifx_Strict_32Bit RECDIS:1;              /**< \brief [0:0] Address Buffer Recording Disable (rw) */
    Ifx_Strict_32Bit ECCCORDIS:2;           /**< \brief [2:1] ECC Correction Disable (rw) */
    Ifx_Strict_32Bit reserved_3:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit HMARGIN:1;             /**< \brief [8:8] Hard Margin Selection (rw) */
    Ifx_Strict_32Bit MSEL:1;                /**< \brief [9:9] Margin Read Selection (rw) */
    Ifx_Strict_32Bit reserved_10:6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ECCSCLR:1;             /**< \brief [16:16] Clear ECC Status Register (w) */
    Ifx_Strict_32Bit reserved_17:7;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SBABCLR:1;             /**< \brief [24:24] Clear SBAB Record Registers (w) */
    Ifx_Strict_32Bit DBABCLR:1;             /**< \brief [25:25] Clear DBAB Record Registers (w) */
    Ifx_Strict_32Bit MBABCLR:1;             /**< \brief [26:26] Clear MBAB Record Registers (w) */
    Ifx_Strict_32Bit ZBABCLR:1;             /**< \brief [27:27] Clear ZBAB Record Registers (w) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_FLASHCON2_Bits;

/** \brief  CPU Flash Configuration Register 3 */
typedef struct _Ifx_CPU_FLASHCON3_Bits
{
    Ifx_Strict_32Bit ECCERRINJ:1;           /**< \brief [0:0] ECC Error Injection (rw) */
    Ifx_Strict_32Bit EDCERRINJ:1;           /**< \brief [1:1] EDC Error Injection (rw) */
    Ifx_Strict_32Bit SBABERRINJ:1;          /**< \brief [2:2] Corrected Single Bits Address Buffer (SBAB) Error Injection (rw) */
    Ifx_Strict_32Bit DBABERRINJ:1;          /**< \brief [3:3] Corrected Double Bits Address Buffer (DBAB) Error Injection (rw) */
    Ifx_Strict_32Bit MBABERRINJ:1;          /**< \brief [4:4] Uncorrected Multi Bit Address Buffer (MBAB) Error Injection (rw) */
    Ifx_Strict_32Bit ZBABERRINJ:1;          /**< \brief [5:5] Uncorrected All Zeros Bits Address Buffer (ZBAB) Error Injection (rw) */
    Ifx_Strict_32Bit reserved_6:10;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SPARELBYTE:8;          /**< \brief [23:16] Spare Lower Byte (rw) */
    Ifx_Strict_32Bit SPAREUBYTE:8;          /**< \brief [31:24] Spare Upper Byte (rw) */
} Ifx_CPU_FLASHCON3_Bits;

/** \brief  CPU Trap Control Register */
typedef struct _Ifx_CPU_FPU_TRAP_CON_Bits
{
    Ifx_Strict_32Bit TST:1;                 /**< \brief [0:0] Trap Status (rh) */
    Ifx_Strict_32Bit TCL:1;                 /**< \brief [1:1] Trap Clear (w) */
    Ifx_Strict_32Bit reserved_2:6;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RM:2;                  /**< \brief [9:8] Captured Rounding Mode (rh) */
    Ifx_Strict_32Bit reserved_10:8;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FXE:1;                 /**< \brief [18:18] FX Trap Enable (rw) */
    Ifx_Strict_32Bit FUE:1;                 /**< \brief [19:19] FU Trap Enable (rw) */
    Ifx_Strict_32Bit FZE:1;                 /**< \brief [20:20] FZ Trap Enable (rw) */
    Ifx_Strict_32Bit FVE:1;                 /**< \brief [21:21] FV Trap Enable (rw) */
    Ifx_Strict_32Bit FIE:1;                 /**< \brief [22:22] FI Trap Enable (rw) */
    Ifx_Strict_32Bit reserved_23:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FX:1;                  /**< \brief [26:26] Captured FX (rh) */
    Ifx_Strict_32Bit FU:1;                  /**< \brief [27:27] Captured FU (rh) */
    Ifx_Strict_32Bit FZ:1;                  /**< \brief [28:28] Captured FZ (rh) */
    Ifx_Strict_32Bit FV:1;                  /**< \brief [29:29] Captured FV (rh) */
    Ifx_Strict_32Bit FI:1;                  /**< \brief [30:30] Captured FI (rh) */
    Ifx_Strict_32Bit reserved_31:1;         /**< \brief \internal Reserved */
} Ifx_CPU_FPU_TRAP_CON_Bits;

/** \brief  CPU Trapping Instruction Opcode Register */
typedef struct _Ifx_CPU_FPU_TRAP_OPC_Bits
{
    Ifx_Strict_32Bit OPC:8;                 /**< \brief [7:0] Captured Opcode (rh) */
    Ifx_Strict_32Bit FMT:1;                 /**< \brief [8:8] Captured Instruction Format (rh) */
    Ifx_Strict_32Bit reserved_9:7;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DREG:4;                /**< \brief [19:16] Captured Destination Register (rh) */
    Ifx_Strict_32Bit reserved_20:12;        /**< \brief \internal Reserved */
} Ifx_CPU_FPU_TRAP_OPC_Bits;

/** \brief  CPU Trapping Instruction Program Counter Register */
typedef struct _Ifx_CPU_FPU_TRAP_PC_Bits
{
    Ifx_Strict_32Bit PC:32;                 /**< \brief [31:0] Captured Program Counter (rh) */
} Ifx_CPU_FPU_TRAP_PC_Bits;

/** \brief  CPU Trapping Instruction Operand Register */
typedef struct _Ifx_CPU_FPU_TRAP_SRC1_Bits
{
    Ifx_Strict_32Bit SRC1:32;               /**< \brief [31:0] Captured SRC1 Operand (rh) */
} Ifx_CPU_FPU_TRAP_SRC1_Bits;

/** \brief  CPU Trapping Instruction Operand Register */
typedef struct _Ifx_CPU_FPU_TRAP_SRC2_Bits
{
    Ifx_Strict_32Bit SRC2:32;               /**< \brief [31:0] Captured SRC2 Operand (rh) */
} Ifx_CPU_FPU_TRAP_SRC2_Bits;

/** \brief  CPU Trapping Instruction Operand Register */
typedef struct _Ifx_CPU_FPU_TRAP_SRC3_Bits
{
    Ifx_Strict_32Bit SRC3:32;               /**< \brief [31:0] Captured SRC3 Operand (rh) */
} Ifx_CPU_FPU_TRAP_SRC3_Bits;

/** \brief  CPU Instruction Count */
typedef struct _Ifx_CPU_ICNT_Bits
{
    Ifx_Strict_32Bit CountValue:31;         /**< \brief [30:0] Count Value (rw) */
    Ifx_Strict_32Bit SOvf:1;                /**< \brief [31:31] Sticky Overflow Bit (rw) */
} Ifx_CPU_ICNT_Bits;

/** \brief  CPU Interrupt Control Register */
typedef struct _Ifx_CPU_ICR_Bits
{
    Ifx_Strict_32Bit CCPN:10;               /**< \brief [9:0] Current CPU Priority Number (rwh) */
    Ifx_Strict_32Bit reserved_10:5;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IE:1;                  /**< \brief [15:15] Global Interrupt Enable Bit (rwh) */
    Ifx_Strict_32Bit PIPN:10;               /**< \brief [25:16] Pending Interrupt Priority Number (rh) */
    Ifx_Strict_32Bit reserved_26:6;         /**< \brief \internal Reserved */
} Ifx_CPU_ICR_Bits;

/** \brief  CPU Interrupt Stack Pointer */
typedef struct _Ifx_CPU_ISP_Bits
{
    Ifx_Strict_32Bit ISP:32;                /**< \brief [31:0] Interrupt Stack Pointer (rw) */
} Ifx_CPU_ISP_Bits;

/** \brief  CPU Reset Register 0 */
typedef struct _Ifx_CPU_KRST0_Bits
{
    Ifx_Strict_32Bit RST:1;                 /**< \brief [0:0] Kernel Reset (rwh) */
    Ifx_Strict_32Bit RSTSTAT:2;             /**< \brief [2:1] Kernel Reset Status (rh) */
    Ifx_Strict_32Bit reserved_3:29;         /**< \brief \internal Reserved */
} Ifx_CPU_KRST0_Bits;

/** \brief  CPU Reset Register 1 */
typedef struct _Ifx_CPU_KRST1_Bits
{
    Ifx_Strict_32Bit RST:1;                 /**< \brief [0:0] Kernel Reset (rwh) */
    Ifx_Strict_32Bit reserved_1:31;         /**< \brief \internal Reserved */
} Ifx_CPU_KRST1_Bits;

/** \brief  CPU Reset Status Clear Register */
typedef struct _Ifx_CPU_KRSTCLR_Bits
{
    Ifx_Strict_32Bit CLR:1;                 /**< \brief [0:0] Kernel Reset Status Clear (w) */
    Ifx_Strict_32Bit reserved_1:31;         /**< \brief \internal Reserved */
} Ifx_CPU_KRSTCLR_Bits;

/** \brief  CPU Free CSA List Limit Pointer */
typedef struct _Ifx_CPU_LCX_Bits
{
    Ifx_Strict_32Bit LCXO:16;               /**< \brief [15:0] LCX Offset Field (rw) */
    Ifx_Strict_32Bit LCXS:4;                /**< \brief [19:16] LCX Segment Address (rw) */
    Ifx_Strict_32Bit reserved_20:12;        /**< \brief \internal Reserved */
} Ifx_CPU_LCX_Bits;

/** \brief  CPU Safety Protection Region LPB Read Access Enable Register A */
typedef struct _Ifx_CPU_LPB_SPROT_ACCENA_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Access Enable for Master TAG ID n (n= 0-31) (rw) */
} Ifx_CPU_LPB_SPROT_ACCENA_R_Bits;

/** \brief  CPU Safety Protection Region LPB Read Access Enable Register B */
typedef struct _Ifx_CPU_LPB_SPROT_ACCENB_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_LPB_SPROT_ACCENB_R_Bits;

/** \brief  CPU Multi-Count Register 1 */
typedef struct _Ifx_CPU_M1CNT_Bits
{
    Ifx_Strict_32Bit CountValue:31;         /**< \brief [30:0] Count Value (rw) */
    Ifx_Strict_32Bit SOvf:1;                /**< \brief [31:31] Sticky Overflow Bit (rw) */
} Ifx_CPU_M1CNT_Bits;

/** \brief  CPU Multi-Count Register 2 */
typedef struct _Ifx_CPU_M2CNT_Bits
{
    Ifx_Strict_32Bit CountValue:31;         /**< \brief [30:0] Count Value (rw) */
    Ifx_Strict_32Bit SOvf:1;                /**< \brief [31:31] Sticky Overflow Bit (rw) */
} Ifx_CPU_M2CNT_Bits;

/** \brief  CPU Multi-Count Register 3 */
typedef struct _Ifx_CPU_M3CNT_Bits
{
    Ifx_Strict_32Bit CountValue:31;         /**< \brief [30:0] Count Value (rw) */
    Ifx_Strict_32Bit SOvf:1;                /**< \brief [31:31] Sticky Overflow Bit (rw) */
} Ifx_CPU_M3CNT_Bits;

/** \brief  CPU Overlay Mask Register 0 */
typedef struct _Ifx_CPU_OMASK0_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK0_Bits;

/** \brief  CPU Overlay Mask Register 10 */
typedef struct _Ifx_CPU_OMASK10_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK10_Bits;

/** \brief  CPU Overlay Mask Register 11 */
typedef struct _Ifx_CPU_OMASK11_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK11_Bits;

/** \brief  CPU Overlay Mask Register 12 */
typedef struct _Ifx_CPU_OMASK12_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK12_Bits;

/** \brief  CPU Overlay Mask Register 13 */
typedef struct _Ifx_CPU_OMASK13_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK13_Bits;

/** \brief  CPU Overlay Mask Register 14 */
typedef struct _Ifx_CPU_OMASK14_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK14_Bits;

/** \brief  CPU Overlay Mask Register 15 */
typedef struct _Ifx_CPU_OMASK15_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK15_Bits;

/** \brief  CPU Overlay Mask Register 16 */
typedef struct _Ifx_CPU_OMASK16_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK16_Bits;

/** \brief  CPU Overlay Mask Register 17 */
typedef struct _Ifx_CPU_OMASK17_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK17_Bits;

/** \brief  CPU Overlay Mask Register 18 */
typedef struct _Ifx_CPU_OMASK18_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK18_Bits;

/** \brief  CPU Overlay Mask Register 19 */
typedef struct _Ifx_CPU_OMASK19_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK19_Bits;

/** \brief  CPU Overlay Mask Register 1 */
typedef struct _Ifx_CPU_OMASK1_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK1_Bits;

/** \brief  CPU Overlay Mask Register 20 */
typedef struct _Ifx_CPU_OMASK20_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK20_Bits;

/** \brief  CPU Overlay Mask Register 21 */
typedef struct _Ifx_CPU_OMASK21_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK21_Bits;

/** \brief  CPU Overlay Mask Register 22 */
typedef struct _Ifx_CPU_OMASK22_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK22_Bits;

/** \brief  CPU Overlay Mask Register 23 */
typedef struct _Ifx_CPU_OMASK23_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK23_Bits;

/** \brief  CPU Overlay Mask Register 24 */
typedef struct _Ifx_CPU_OMASK24_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK24_Bits;

/** \brief  CPU Overlay Mask Register 25 */
typedef struct _Ifx_CPU_OMASK25_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK25_Bits;

/** \brief  CPU Overlay Mask Register 26 */
typedef struct _Ifx_CPU_OMASK26_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK26_Bits;

/** \brief  CPU Overlay Mask Register 27 */
typedef struct _Ifx_CPU_OMASK27_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK27_Bits;

/** \brief  CPU Overlay Mask Register 28 */
typedef struct _Ifx_CPU_OMASK28_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK28_Bits;

/** \brief  CPU Overlay Mask Register 29 */
typedef struct _Ifx_CPU_OMASK29_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK29_Bits;

/** \brief  CPU Overlay Mask Register 2 */
typedef struct _Ifx_CPU_OMASK2_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK2_Bits;

/** \brief  CPU Overlay Mask Register 30 */
typedef struct _Ifx_CPU_OMASK30_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK30_Bits;

/** \brief  CPU Overlay Mask Register 31 */
typedef struct _Ifx_CPU_OMASK31_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK31_Bits;

/** \brief  CPU Overlay Mask Register 3 */
typedef struct _Ifx_CPU_OMASK3_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK3_Bits;

/** \brief  CPU Overlay Mask Register 4 */
typedef struct _Ifx_CPU_OMASK4_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK4_Bits;

/** \brief  CPU Overlay Mask Register 5 */
typedef struct _Ifx_CPU_OMASK5_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK5_Bits;

/** \brief  CPU Overlay Mask Register 6 */
typedef struct _Ifx_CPU_OMASK6_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK6_Bits;

/** \brief  CPU Overlay Mask Register 7 */
typedef struct _Ifx_CPU_OMASK7_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK7_Bits;

/** \brief  CPU Overlay Mask Register 8 */
typedef struct _Ifx_CPU_OMASK8_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK8_Bits;

/** \brief  CPU Overlay Mask Register 9 */
typedef struct _Ifx_CPU_OMASK9_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMASK:12;              /**< \brief [16:5] Overlay Address Mask (rw) */
    Ifx_Strict_32Bit ONE:11;                /**< \brief [27:17] Fixed "1" Values (r) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OMASK9_Bits;

/** \brief  CPU Overlay Range Select Register */
typedef struct _Ifx_CPU_OSEL_Bits
{
    Ifx_Strict_32Bit SHOVEN0:1;             /**< \brief [0:0] Shadow Overlay Enable 0 (rw) */
    Ifx_Strict_32Bit SHOVEN1:1;             /**< \brief [1:1] Shadow Overlay Enable 1 (rw) */
    Ifx_Strict_32Bit SHOVEN2:1;             /**< \brief [2:2] Shadow Overlay Enable 2 (rw) */
    Ifx_Strict_32Bit SHOVEN3:1;             /**< \brief [3:3] Shadow Overlay Enable 3 (rw) */
    Ifx_Strict_32Bit SHOVEN4:1;             /**< \brief [4:4] Shadow Overlay Enable 4 (rw) */
    Ifx_Strict_32Bit SHOVEN5:1;             /**< \brief [5:5] Shadow Overlay Enable 5 (rw) */
    Ifx_Strict_32Bit SHOVEN6:1;             /**< \brief [6:6] Shadow Overlay Enable 6 (rw) */
    Ifx_Strict_32Bit SHOVEN7:1;             /**< \brief [7:7] Shadow Overlay Enable 7 (rw) */
    Ifx_Strict_32Bit SHOVEN8:1;             /**< \brief [8:8] Shadow Overlay Enable 8 (rw) */
    Ifx_Strict_32Bit SHOVEN9:1;             /**< \brief [9:9] Shadow Overlay Enable 9 (rw) */
    Ifx_Strict_32Bit SHOVEN10:1;            /**< \brief [10:10] Shadow Overlay Enable 10 (rw) */
    Ifx_Strict_32Bit SHOVEN11:1;            /**< \brief [11:11] Shadow Overlay Enable 11 (rw) */
    Ifx_Strict_32Bit SHOVEN12:1;            /**< \brief [12:12] Shadow Overlay Enable 12 (rw) */
    Ifx_Strict_32Bit SHOVEN13:1;            /**< \brief [13:13] Shadow Overlay Enable 13 (rw) */
    Ifx_Strict_32Bit SHOVEN14:1;            /**< \brief [14:14] Shadow Overlay Enable 14 (rw) */
    Ifx_Strict_32Bit SHOVEN15:1;            /**< \brief [15:15] Shadow Overlay Enable 15 (rw) */
    Ifx_Strict_32Bit SHOVEN16:1;            /**< \brief [16:16] Shadow Overlay Enable 16 (rw) */
    Ifx_Strict_32Bit SHOVEN17:1;            /**< \brief [17:17] Shadow Overlay Enable 17 (rw) */
    Ifx_Strict_32Bit SHOVEN18:1;            /**< \brief [18:18] Shadow Overlay Enable 18 (rw) */
    Ifx_Strict_32Bit SHOVEN19:1;            /**< \brief [19:19] Shadow Overlay Enable 19 (rw) */
    Ifx_Strict_32Bit SHOVEN20:1;            /**< \brief [20:20] Shadow Overlay Enable 20 (rw) */
    Ifx_Strict_32Bit SHOVEN21:1;            /**< \brief [21:21] Shadow Overlay Enable 21 (rw) */
    Ifx_Strict_32Bit SHOVEN22:1;            /**< \brief [22:22] Shadow Overlay Enable 22 (rw) */
    Ifx_Strict_32Bit SHOVEN23:1;            /**< \brief [23:23] Shadow Overlay Enable 23 (rw) */
    Ifx_Strict_32Bit SHOVEN24:1;            /**< \brief [24:24] Shadow Overlay Enable 24 (rw) */
    Ifx_Strict_32Bit SHOVEN25:1;            /**< \brief [25:25] Shadow Overlay Enable 25 (rw) */
    Ifx_Strict_32Bit SHOVEN26:1;            /**< \brief [26:26] Shadow Overlay Enable 26 (rw) */
    Ifx_Strict_32Bit SHOVEN27:1;            /**< \brief [27:27] Shadow Overlay Enable 27 (rw) */
    Ifx_Strict_32Bit SHOVEN28:1;            /**< \brief [28:28] Shadow Overlay Enable 28 (rw) */
    Ifx_Strict_32Bit SHOVEN29:1;            /**< \brief [29:29] Shadow Overlay Enable 29 (rw) */
    Ifx_Strict_32Bit SHOVEN30:1;            /**< \brief [30:30] Shadow Overlay Enable 30 (rw) */
    Ifx_Strict_32Bit SHOVEN31:1;            /**< \brief [31:31] Shadow Overlay Enable 31 (rw) */
} Ifx_CPU_OSEL_Bits;

/** \brief  CPU Overlay Target Address Register 0 */
typedef struct _Ifx_CPU_OTAR0_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR0_Bits;

/** \brief  CPU Overlay Target Address Register 10 */
typedef struct _Ifx_CPU_OTAR10_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR10_Bits;

/** \brief  CPU Overlay Target Address Register 11 */
typedef struct _Ifx_CPU_OTAR11_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR11_Bits;

/** \brief  CPU Overlay Target Address Register 12 */
typedef struct _Ifx_CPU_OTAR12_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR12_Bits;

/** \brief  CPU Overlay Target Address Register 13 */
typedef struct _Ifx_CPU_OTAR13_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR13_Bits;

/** \brief  CPU Overlay Target Address Register 14 */
typedef struct _Ifx_CPU_OTAR14_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR14_Bits;

/** \brief  CPU Overlay Target Address Register 15 */
typedef struct _Ifx_CPU_OTAR15_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR15_Bits;

/** \brief  CPU Overlay Target Address Register 16 */
typedef struct _Ifx_CPU_OTAR16_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR16_Bits;

/** \brief  CPU Overlay Target Address Register 17 */
typedef struct _Ifx_CPU_OTAR17_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR17_Bits;

/** \brief  CPU Overlay Target Address Register 18 */
typedef struct _Ifx_CPU_OTAR18_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR18_Bits;

/** \brief  CPU Overlay Target Address Register 19 */
typedef struct _Ifx_CPU_OTAR19_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR19_Bits;

/** \brief  CPU Overlay Target Address Register 1 */
typedef struct _Ifx_CPU_OTAR1_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR1_Bits;

/** \brief  CPU Overlay Target Address Register 20 */
typedef struct _Ifx_CPU_OTAR20_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR20_Bits;

/** \brief  CPU Overlay Target Address Register 21 */
typedef struct _Ifx_CPU_OTAR21_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR21_Bits;

/** \brief  CPU Overlay Target Address Register 22 */
typedef struct _Ifx_CPU_OTAR22_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR22_Bits;

/** \brief  CPU Overlay Target Address Register 23 */
typedef struct _Ifx_CPU_OTAR23_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR23_Bits;

/** \brief  CPU Overlay Target Address Register 24 */
typedef struct _Ifx_CPU_OTAR24_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR24_Bits;

/** \brief  CPU Overlay Target Address Register 25 */
typedef struct _Ifx_CPU_OTAR25_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR25_Bits;

/** \brief  CPU Overlay Target Address Register 26 */
typedef struct _Ifx_CPU_OTAR26_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR26_Bits;

/** \brief  CPU Overlay Target Address Register 27 */
typedef struct _Ifx_CPU_OTAR27_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR27_Bits;

/** \brief  CPU Overlay Target Address Register 28 */
typedef struct _Ifx_CPU_OTAR28_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR28_Bits;

/** \brief  CPU Overlay Target Address Register 29 */
typedef struct _Ifx_CPU_OTAR29_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR29_Bits;

/** \brief  CPU Overlay Target Address Register 2 */
typedef struct _Ifx_CPU_OTAR2_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR2_Bits;

/** \brief  CPU Overlay Target Address Register 30 */
typedef struct _Ifx_CPU_OTAR30_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR30_Bits;

/** \brief  CPU Overlay Target Address Register 31 */
typedef struct _Ifx_CPU_OTAR31_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR31_Bits;

/** \brief  CPU Overlay Target Address Register 3 */
typedef struct _Ifx_CPU_OTAR3_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR3_Bits;

/** \brief  CPU Overlay Target Address Register 4 */
typedef struct _Ifx_CPU_OTAR4_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR4_Bits;

/** \brief  CPU Overlay Target Address Register 5 */
typedef struct _Ifx_CPU_OTAR5_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR5_Bits;

/** \brief  CPU Overlay Target Address Register 6 */
typedef struct _Ifx_CPU_OTAR6_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR6_Bits;

/** \brief  CPU Overlay Target Address Register 7 */
typedef struct _Ifx_CPU_OTAR7_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR7_Bits;

/** \brief  CPU Overlay Target Address Register 8 */
typedef struct _Ifx_CPU_OTAR8_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR8_Bits;

/** \brief  CPU Overlay Target Address Register 9 */
typedef struct _Ifx_CPU_OTAR9_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TBASE:23;              /**< \brief [27:5] Target Base (rw) */
    Ifx_Strict_32Bit reserved_28:4;         /**< \brief \internal Reserved */
} Ifx_CPU_OTAR9_Bits;

/** \brief  CPU Program Counter */
typedef struct _Ifx_CPU_PC_Bits
{
    Ifx_Strict_32Bit reserved_0:1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PC:31;                 /**< \brief [31:1] Program Counter (r) */
} Ifx_CPU_PC_Bits;

/** \brief  CPU Program Control 0 */
typedef struct _Ifx_CPU_PCON0_Bits
{
    Ifx_Strict_32Bit reserved_0:1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit PCBYP:1;               /**< \brief [1:1] Program Cache Bypass (rw) */
    Ifx_Strict_32Bit reserved_2:30;         /**< \brief \internal Reserved */
} Ifx_CPU_PCON0_Bits;

/** \brief  CPU Program Control 1 */
typedef struct _Ifx_CPU_PCON1_Bits
{
    Ifx_Strict_32Bit PCINV:1;               /**< \brief [0:0] Program Cache Invalidate (rw) */
    Ifx_Strict_32Bit PBINV:1;               /**< \brief [1:1] Program Buffer Invalidate (rw) */
    Ifx_Strict_32Bit reserved_2:30;         /**< \brief \internal Reserved */
} Ifx_CPU_PCON1_Bits;

/** \brief  CPU Program Control 2 */
typedef struct _Ifx_CPU_PCON2_Bits
{
    Ifx_Strict_32Bit PCACHE_SZE:16;         /**< \brief [15:0] Program Cache Size (ICACHE) in KBytes (r) */
    Ifx_Strict_32Bit PSCRATCH_SZE:16;       /**< \brief [31:16] Program Scratch Size in KBytes (r) */
} Ifx_CPU_PCON2_Bits;

/** \brief  CPU Previous Context Information Register */
typedef struct _Ifx_CPU_PCXI_Bits
{
    Ifx_Strict_32Bit PCXO:16;               /**< \brief [15:0] Previous Context Pointer Offset Field (rw) */
    Ifx_Strict_32Bit PCXS:4;                /**< \brief [19:16] Previous Context Pointer Segment Address (rw) */
    Ifx_Strict_32Bit UL:1;                  /**< \brief [20:20] Upper or Lower Context Tag (rw) */
    Ifx_Strict_32Bit PIE:1;                 /**< \brief [21:21] Previous Interrupt Enable (rw) */
    Ifx_Strict_32Bit PCPN:10;               /**< \brief [31:22] Previous CPU Priority Number (rw) */
} Ifx_CPU_PCXI_Bits;

/** \brief  CPU Program Integrity Error Address Register */
typedef struct _Ifx_CPU_PIEAR_Bits
{
    Ifx_Strict_32Bit TA:32;                 /**< \brief [31:0] Transaction Address (rh) */
} Ifx_CPU_PIEAR_Bits;

/** \brief  CPU Program Integrity Error Trap Register */
typedef struct _Ifx_CPU_PIETR_Bits
{
    Ifx_Strict_32Bit IED:1;                 /**< \brief [0:0] Integrity Error Detected (rwh) */
    Ifx_Strict_32Bit reserved_1:1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IE_C:1;                /**< \brief [2:2] Integrity Error - Cache Memory (rh) */
    Ifx_Strict_32Bit IE_S:1;                /**< \brief [3:3] Integrity Error - Scratchpad Memory (rh) */
    Ifx_Strict_32Bit IE_BI:1;               /**< \brief [4:4] Integrity Error - Bus Interface (rh) */
    Ifx_Strict_32Bit E_INFO:6;              /**< \brief [10:5] Error Information (rh) */
    Ifx_Strict_32Bit IE_UNC:1;              /**< \brief [11:11] Integrity Error - Uncorrectable Error Detected (rh) */
    Ifx_Strict_32Bit IE_SP:1;               /**< \brief [12:12] Safety Protection Error Detected (rh) */
    Ifx_Strict_32Bit IE_BS:1;               /**< \brief [13:13] Bus Slave Access Indicator (rh) */
    Ifx_Strict_32Bit IE_ADDR:1;             /**< \brief [14:14] Address Phase error detected at SRI slave interface (rh) */
    Ifx_Strict_32Bit IE_LPB:1;              /**< \brief [15:15] Integrity Error - Local Pflash bank (rh) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_CPU_PIETR_Bits;

/** \brief  CPU Data Access CacheabilityRegister */
typedef struct _Ifx_CPU_PMA0_Bits
{
    Ifx_Strict_32Bit reserved_0:13;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DAC:3;                 /**< \brief [15:13] Data Access Cacheability Segments FH,EH,DH (r) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_CPU_PMA0_Bits;

/** \brief  CPU Code Access CacheabilityRegister */
typedef struct _Ifx_CPU_PMA1_Bits
{
    Ifx_Strict_32Bit reserved_0:14;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit CAC:2;                 /**< \brief [15:14] Code Access Cacheability Segments FH,EH (r) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_CPU_PMA1_Bits;

/** \brief  CPU Peripheral Space Identifier register */
typedef struct _Ifx_CPU_PMA2_Bits
{
    Ifx_Strict_32Bit PSI:16;                /**< \brief [15:0] Peripheral Space Identifier Segments FH-0H (r) */
    Ifx_Strict_32Bit reserved_16:16;        /**< \brief \internal Reserved */
} Ifx_CPU_PMA2_Bits;

/** \brief  CPU Program Synchronous Trap Register */
typedef struct _Ifx_CPU_PSTR_Bits
{
    Ifx_Strict_32Bit FRE:1;                 /**< \brief [0:0] Fetch Range Error (rwh) */
    Ifx_Strict_32Bit reserved_1:1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FBE:1;                 /**< \brief [2:2] Fetch Bus Error (rwh) */
    Ifx_Strict_32Bit reserved_3:9;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FPE:1;                 /**< \brief [12:12] Fetch Peripheral Error (rwh) */
    Ifx_Strict_32Bit reserved_13:1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit FME:1;                 /**< \brief [14:14] Fetch MSIST Error (rwh) */
    Ifx_Strict_32Bit reserved_15:17;        /**< \brief \internal Reserved */
} Ifx_CPU_PSTR_Bits;

/** \brief  CPU Program Status Word */
typedef struct _Ifx_CPU_PSW_Bits
{
    Ifx_Strict_32Bit CDC:7;                 /**< \brief [6:0] Call Depth Counter (rwh) */
    Ifx_Strict_32Bit CDE:1;                 /**< \brief [7:7] Call Depth Count Enable (rwh) */
    Ifx_Strict_32Bit GW:1;                  /**< \brief [8:8] Global Address Register Write Permission (rwh) */
    Ifx_Strict_32Bit IS:1;                  /**< \brief [9:9] Interrupt Stack Control (rwh) */
    Ifx_Strict_32Bit IO:2;                  /**< \brief [11:10] Access Privilege Level Control (I/O Privilege) (rwh) */
    Ifx_Strict_32Bit PRS:2;                 /**< \brief [13:12] Protection Register Set (rwh) */
    Ifx_Strict_32Bit S:1;                   /**< \brief [14:14] Safe Task Identifier (rwh) */
    Ifx_Strict_32Bit PRS2:1;                /**< \brief [15:15] Protection Register Set MSB (rwh) */
    Ifx_Strict_32Bit reserved_16:11;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit SAV:1;                 /**< \brief [27:27] Sticky Advance Overflow Flag (rwh) */
    Ifx_Strict_32Bit AV:1;                  /**< \brief [28:28] Advance Overflow Flag (rwh) */
    Ifx_Strict_32Bit SV:1;                  /**< \brief [29:29] Sticky Overflow Flag (rwh) */
    Ifx_Strict_32Bit V:1;                   /**< \brief [30:30] Overflow Flag (rwh) */
    Ifx_Strict_32Bit C:1;                   /**< \brief [31:31] Carry Flag (rwh) */
} Ifx_CPU_PSW_Bits;

/** \brief  CPU Redirected Address Base Register 0 */
typedef struct _Ifx_CPU_RABR0_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR0_Bits;

/** \brief  CPU Redirected Address Base Register 10 */
typedef struct _Ifx_CPU_RABR10_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR10_Bits;

/** \brief  CPU Redirected Address Base Register 11 */
typedef struct _Ifx_CPU_RABR11_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR11_Bits;

/** \brief  CPU Redirected Address Base Register 12 */
typedef struct _Ifx_CPU_RABR12_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR12_Bits;

/** \brief  CPU Redirected Address Base Register 13 */
typedef struct _Ifx_CPU_RABR13_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR13_Bits;

/** \brief  CPU Redirected Address Base Register 14 */
typedef struct _Ifx_CPU_RABR14_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR14_Bits;

/** \brief  CPU Redirected Address Base Register 15 */
typedef struct _Ifx_CPU_RABR15_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR15_Bits;

/** \brief  CPU Redirected Address Base Register 16 */
typedef struct _Ifx_CPU_RABR16_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR16_Bits;

/** \brief  CPU Redirected Address Base Register 17 */
typedef struct _Ifx_CPU_RABR17_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR17_Bits;

/** \brief  CPU Redirected Address Base Register 18 */
typedef struct _Ifx_CPU_RABR18_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR18_Bits;

/** \brief  CPU Redirected Address Base Register 19 */
typedef struct _Ifx_CPU_RABR19_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR19_Bits;

/** \brief  CPU Redirected Address Base Register 1 */
typedef struct _Ifx_CPU_RABR1_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR1_Bits;

/** \brief  CPU Redirected Address Base Register 20 */
typedef struct _Ifx_CPU_RABR20_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR20_Bits;

/** \brief  CPU Redirected Address Base Register 21 */
typedef struct _Ifx_CPU_RABR21_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR21_Bits;

/** \brief  CPU Redirected Address Base Register 22 */
typedef struct _Ifx_CPU_RABR22_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR22_Bits;

/** \brief  CPU Redirected Address Base Register 23 */
typedef struct _Ifx_CPU_RABR23_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR23_Bits;

/** \brief  CPU Redirected Address Base Register 24 */
typedef struct _Ifx_CPU_RABR24_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR24_Bits;

/** \brief  CPU Redirected Address Base Register 25 */
typedef struct _Ifx_CPU_RABR25_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR25_Bits;

/** \brief  CPU Redirected Address Base Register 26 */
typedef struct _Ifx_CPU_RABR26_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR26_Bits;

/** \brief  CPU Redirected Address Base Register 27 */
typedef struct _Ifx_CPU_RABR27_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR27_Bits;

/** \brief  CPU Redirected Address Base Register 28 */
typedef struct _Ifx_CPU_RABR28_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR28_Bits;

/** \brief  CPU Redirected Address Base Register 29 */
typedef struct _Ifx_CPU_RABR29_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR29_Bits;

/** \brief  CPU Redirected Address Base Register 2 */
typedef struct _Ifx_CPU_RABR2_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR2_Bits;

/** \brief  CPU Redirected Address Base Register 30 */
typedef struct _Ifx_CPU_RABR30_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR30_Bits;

/** \brief  CPU Redirected Address Base Register 31 */
typedef struct _Ifx_CPU_RABR31_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR31_Bits;

/** \brief  CPU Redirected Address Base Register 3 */
typedef struct _Ifx_CPU_RABR3_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR3_Bits;

/** \brief  CPU Redirected Address Base Register 4 */
typedef struct _Ifx_CPU_RABR4_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR4_Bits;

/** \brief  CPU Redirected Address Base Register 5 */
typedef struct _Ifx_CPU_RABR5_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR5_Bits;

/** \brief  CPU Redirected Address Base Register 6 */
typedef struct _Ifx_CPU_RABR6_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR6_Bits;

/** \brief  CPU Redirected Address Base Register 7 */
typedef struct _Ifx_CPU_RABR7_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR7_Bits;

/** \brief  CPU Redirected Address Base Register 8 */
typedef struct _Ifx_CPU_RABR8_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR8_Bits;

/** \brief  CPU Redirected Address Base Register 9 */
typedef struct _Ifx_CPU_RABR9_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OBASE:17;              /**< \brief [21:5] Overlay Block Base Address (rw) */
    Ifx_Strict_32Bit reserved_22:2;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OMEM:4;                /**< \brief [27:24] Overlay Memory Select (rw) */
    Ifx_Strict_32Bit reserved_28:3;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit OVEN:1;                /**< \brief [31:31] Overlay Enabled (rwh) */
} Ifx_CPU_RABR9_Bits;

/** \brief  CPU SRI Error Generation Register */
typedef struct _Ifx_CPU_SEGEN_Bits
{
    Ifx_Strict_32Bit ADFLIP:8;              /**< \brief [7:0] Address ECC Bit Flip (rw) */
    Ifx_Strict_32Bit ADTYPE:2;              /**< \brief [9:8] Type of error (rw) */
    Ifx_Strict_32Bit reserved_10:21;        /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AE:1;                  /**< \brief [31:31] Activate Error Enable (rwh) */
} Ifx_CPU_SEGEN_Bits;

/** \brief  CPU Safety Protection Register Access Enable Register A */
typedef struct _Ifx_CPU_SFR_SPROT_ACCENA_W_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Access Enable for Master TAG ID n (n= 0-31) (rw) */
} Ifx_CPU_SFR_SPROT_ACCENA_W_Bits;

/** \brief  CPU Safety Protection Region Access Enable Register B */
typedef struct _Ifx_CPU_SFR_SPROT_ACCENB_W_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SFR_SPROT_ACCENB_W_Bits;

/** \brief  CPU SIST Mode Access Control Register */
typedef struct _Ifx_CPU_SMACON_Bits
{
    Ifx_Strict_32Bit reserved_0:24;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit IODT:1;                /**< \brief [24:24] In-Order Data Transactions (rw) */
    Ifx_Strict_32Bit reserved_25:7;         /**< \brief \internal Reserved */
} Ifx_CPU_SMACON_Bits;

/** \brief  CPU Safety Protection Region SPR Write Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGN_ACCENA_W_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Write Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGN_ACCENA_W_Bits;

/** \brief  CPU Safety Protection Region SPR Write Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGN_ACCENB_W_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGN_ACCENB_W_Bits;

/** \brief  CPU Safety Protection SPR Region Lower Address Register */
typedef struct _Ifx_CPU_SPR_SPROT_RGN_LA_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ADDR:27;               /**< \brief [31:5] Region Lower Address (rw) */
} Ifx_CPU_SPR_SPROT_RGN_LA_Bits;

/** \brief  CPU Safety protection SPR Region Upper Address Register */
typedef struct _Ifx_CPU_SPR_SPROT_RGN_UA_Bits
{
    Ifx_Strict_32Bit reserved_0:5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ADDR:27;               /**< \brief [31:5] Region Upper Address (rw) */
} Ifx_CPU_SPR_SPROT_RGN_UA_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA0_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA0_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA1_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA1_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA2_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA2_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA3_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA3_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA4_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA4_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA5_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA5_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA6_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA6_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENA7_R_Bits
{
    Ifx_Strict_32Bit EN:32;                 /**< \brief [31:0] Read Access Enable for Master TAG ID n (n=0-31) (rw) */
} Ifx_CPU_SPR_SPROT_RGNACCENA7_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB0_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGNACCENB0_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB1_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGNACCENB1_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB2_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGNACCENB2_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB3_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGNACCENB3_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB4_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGNACCENB4_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB5_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGNACCENB5_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB6_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGNACCENB6_R_Bits;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef struct _Ifx_CPU_SPR_SPROT_RGNACCENB7_R_Bits
{
    Ifx_Strict_32Bit reserved_0:32;         /**< \brief \internal Reserved */
} Ifx_CPU_SPR_SPROT_RGNACCENB7_R_Bits;

/** \brief  CPU Software Debug Event */
typedef struct _Ifx_CPU_SWEVT_Bits
{
    Ifx_Strict_32Bit EVTA:3;                /**< \brief [2:0] Event Associated (rw) */
    Ifx_Strict_32Bit BBM:1;                 /**< \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection (rw) */
    Ifx_Strict_32Bit BOD:1;                 /**< \brief [4:4] Breakout Disable (rw) */
    Ifx_Strict_32Bit SUSP:1;                /**< \brief [5:5] CDC Suspend-Out Signal State (rw) */
    Ifx_Strict_32Bit CNT:2;                 /**< \brief [7:6] Counter (rw) */
    Ifx_Strict_32Bit reserved_8:24;         /**< \brief \internal Reserved */
} Ifx_CPU_SWEVT_Bits;

/** \brief  CPU System Configuration Register */
typedef struct _Ifx_CPU_SYSCON_Bits
{
    Ifx_Strict_32Bit FCDSF:1;               /**< \brief [0:0] Free Context List Depleted Sticky Flag (rwh) */
    Ifx_Strict_32Bit PROTEN:1;              /**< \brief [1:1] Memory Protection Enable (rw) */
    Ifx_Strict_32Bit TPROTEN:1;             /**< \brief [2:2] Temporal Protection Enable (rw) */
    Ifx_Strict_32Bit IS:1;                  /**< \brief [3:3] Initial State (rw) */
    Ifx_Strict_32Bit IT:1;                  /**< \brief [4:4] Initial State (rw) */
    Ifx_Strict_32Bit reserved_5:19;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit BHALT:1;               /**< \brief [24:24] Boot Halt (rw) */
    Ifx_Strict_32Bit reserved_25:7;         /**< \brief \internal Reserved */
} Ifx_CPU_SYSCON_Bits;

/** \brief  CPU Task Address Space Identifier Register */
typedef struct _Ifx_CPU_TASK_ASI_Bits
{
    Ifx_Strict_32Bit ASI:5;                 /**< \brief [4:0] Address Space Identifier (rw) */
    Ifx_Strict_32Bit reserved_5:27;         /**< \brief \internal Reserved */
} Ifx_CPU_TASK_ASI_Bits;

/** \brief  CPU Temporal Protection System Control Register */
typedef struct _Ifx_CPU_TPS_CON_Bits
{
    Ifx_Strict_32Bit TEXP0:1;               /**< \brief [0:0] Timer0 Expired Flag (rh) */
    Ifx_Strict_32Bit TEXP1:1;               /**< \brief [1:1] Timer1 Expired Flag (rh) */
    Ifx_Strict_32Bit TEXP2:1;               /**< \brief [2:2] Timer1 Expired Flag (rh) */
    Ifx_Strict_32Bit reserved_3:13;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TTRAP:1;               /**< \brief [16:16] Temporal Protection Trap (rh) */
    Ifx_Strict_32Bit reserved_17:15;        /**< \brief \internal Reserved */
} Ifx_CPU_TPS_CON_Bits;

/** \brief  CPU Exception Timer Class Enable Register */
typedef struct _Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits
{
    Ifx_Strict_32Bit EXTIM_CLASS_EN:8;      /**< \brief [7:0] Exception Timer Class Enables (rw) */
    Ifx_Strict_32Bit reserved_8:24;         /**< \brief \internal Reserved */
} Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits;

/** \brief  CPU Exception Timer Current Value */
typedef struct _Ifx_CPU_TPS_EXTIM_CVAL_Bits
{
    Ifx_Strict_32Bit EXIT_CVAL:24;          /**< \brief [23:0] Exception Exit Timer Current Value (rh) */
    Ifx_Strict_32Bit ENTRY_CVAL:8;          /**< \brief [31:24] Exception Entry Timer Current Value (rh) */
} Ifx_CPU_TPS_EXTIM_CVAL_Bits;

/** \brief  CPU Exception Timer Status Register */
typedef struct _Ifx_CPU_TPS_EXTIM_FCX_Bits
{
    Ifx_Strict_32Bit EXIT_FCX:20;           /**< \brief [19:0] Exception Exit Timer FCX (rwh) */
    Ifx_Strict_32Bit reserved_20:12;        /**< \brief \internal Reserved */
} Ifx_CPU_TPS_EXTIM_FCX_Bits;

/** \brief  CPU Exception Timer Load Value */
typedef struct _Ifx_CPU_TPS_EXTIM_LVAL_Bits
{
    Ifx_Strict_32Bit reserved_0:4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXIT_LVAL:20;          /**< \brief [23:4] Exception Exit Timer Load value (rw) */
    Ifx_Strict_32Bit reserved_24:4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ENTRY_LVAL:4;          /**< \brief [31:28] Exception Entry Timer Load value (rw) */
} Ifx_CPU_TPS_EXTIM_LVAL_Bits;

/** \brief  CPU Exception Timer Status Register */
typedef struct _Ifx_CPU_TPS_EXTIM_STAT_Bits
{
    Ifx_Strict_32Bit EXIT_TIN:8;            /**< \brief [7:0] Exception Exit Timer TIN (rwh) */
    Ifx_Strict_32Bit EXIT_CLASS:3;          /**< \brief [10:8] Exception Exit Timer Class (rwh) */
    Ifx_Strict_32Bit reserved_11:4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit EXIT_AT:1;             /**< \brief [15:15] Exception Exit Timer Alarm Triggered (rwh) */
    Ifx_Strict_32Bit ENTRY_TIN:8;           /**< \brief [23:16] Exception Entry Timer TIN (rwh) */
    Ifx_Strict_32Bit ENTRY_CLASS:3;         /**< \brief [26:24] Exception Entry Timer Class (rwh) */
    Ifx_Strict_32Bit reserved_27:4;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ENTRY_AT:1;            /**< \brief [31:31] Exception Entry Timer Alarm Triggered (rwh) */
} Ifx_CPU_TPS_EXTIM_STAT_Bits;

/** \brief  CPU Temporal Protection System Timer Register */
typedef struct _Ifx_CPU_TPS_TIMER_Bits
{
    Ifx_Strict_32Bit Timer:32;              /**< \brief [31:0] Temporal Protection Timer (rwh) */
} Ifx_CPU_TPS_TIMER_Bits;

/** \brief  CPU Trigger Address */
typedef struct _Ifx_CPU_TR_ADR_Bits
{
    Ifx_Strict_32Bit ADDR:32;               /**< \brief [31:0] Comparison Address (rw) */
} Ifx_CPU_TR_ADR_Bits;

/** \brief  CPU Trigger Event */
typedef struct _Ifx_CPU_TR_EVT_Bits
{
    Ifx_Strict_32Bit EVTA:3;                /**< \brief [2:0] Event Associated (rw) */
    Ifx_Strict_32Bit BBM:1;                 /**< \brief [3:3] Break Before Make (BBM) or Break After Make (BAM) Selection (rw) */
    Ifx_Strict_32Bit BOD:1;                 /**< \brief [4:4] Breakout Disable (rw) */
    Ifx_Strict_32Bit SUSP:1;                /**< \brief [5:5] CDC Suspend-Out Signal State (rw) */
    Ifx_Strict_32Bit CNT:2;                 /**< \brief [7:6] Counter (rw) */
    Ifx_Strict_32Bit reserved_8:4;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit TYP:1;                 /**< \brief [12:12] Input Selection (rw) */
    Ifx_Strict_32Bit RNG:1;                 /**< \brief [13:13] Compare Type (rw) */
    Ifx_Strict_32Bit reserved_14:1;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ASI_EN:1;              /**< \brief [15:15] Enable ASI Comparison (rw) */
    Ifx_Strict_32Bit ASI:5;                 /**< \brief [20:16] Address Space Identifier (rw) */
    Ifx_Strict_32Bit reserved_21:6;         /**< \brief \internal Reserved */
    Ifx_Strict_32Bit AST:1;                 /**< \brief [27:27] Address Store (rw) */
    Ifx_Strict_32Bit ALD:1;                 /**< \brief [28:28] Address Load (rw) */
    Ifx_Strict_32Bit reserved_29:3;         /**< \brief \internal Reserved */
} Ifx_CPU_TR_EVT_Bits;

/** \brief  CPU Trigger Address x */
typedef struct _Ifx_CPU_TRIG_ACC_Bits
{
    Ifx_Strict_32Bit T0:1;                  /**< \brief [0:0] Trigger-0 (rh) */
    Ifx_Strict_32Bit T1:1;                  /**< \brief [1:1] Trigger-1 (rh) */
    Ifx_Strict_32Bit T2:1;                  /**< \brief [2:2] Trigger-2 (rh) */
    Ifx_Strict_32Bit T3:1;                  /**< \brief [3:3] Trigger-3 (rh) */
    Ifx_Strict_32Bit T4:1;                  /**< \brief [4:4] Trigger-4 (rh) */
    Ifx_Strict_32Bit T5:1;                  /**< \brief [5:5] Trigger-5 (rh) */
    Ifx_Strict_32Bit T6:1;                  /**< \brief [6:6] Trigger-6 (rh) */
    Ifx_Strict_32Bit T7:1;                  /**< \brief [7:7] Trigger-7 (rh) */
    Ifx_Strict_32Bit reserved_8:24;         /**< \brief \internal Reserved */
} Ifx_CPU_TRIG_ACC_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_union
 * \{  */

/** \brief  CPU Address General Purpose Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_A_Bits B;                       /**< \brief Bitfield access */
} Ifx_CPU_A;

/** \brief  CPU Base Interrupt Vector Table Pointer */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_BIV_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_BIV;

/** \brief  CPU Base Trap Vector Table Pointer */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_BTV_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_BTV;

/** \brief  CPU CPU Clock Cycle Count */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CCNT_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_CCNT;

/** \brief  CPU Counter Control */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CCTRL_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_CCTRL;

/** \brief  CPU Compatibility Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_COMPAT_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_COMPAT;

/** \brief  CPU Core Identification Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CORE_ID_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_CORE_ID;

/** \brief  CPU Code Protection Range Lower Bound Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPR_L_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_CPR_L;

/** \brief  CPU Code Protection Range Upper Bound Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPR_U_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_CPR_U;

/** \brief  CPU Identification Register TC1.6P */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPU_ID_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_CPU_ID;

/** \brief  CPU Code Protection Execute Enable Register Set 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPXE_0_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_CPXE_0;

/** \brief  CPU Code Protection Execute Enable Register Set 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPXE_1_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_CPXE_1;

/** \brief  CPU Code Protection Execute Enable Register Set 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPXE_2_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_CPXE_2;

/** \brief  CPU Code Protection Execute Enable Register Set 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPXE_3_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_CPXE_3;

/** \brief  CPU Code Protection Execute Enable Register Set 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPXE_4_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_CPXE_4;

/** \brief  CPU Code Protection Execute Enable Register Set 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CPXE_5_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_CPXE_5;

/** \brief  CPU Core Register Access Event */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CREVT_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_CREVT;

/** \brief  CPU Customer ID register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_CUS_ID_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_CUS_ID;

/** \brief  CPU Data General Purpose Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_D_Bits B;                       /**< \brief Bitfield access */
} Ifx_CPU_D;

/** \brief  CPU Data Asynchronous Trap Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DATR_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_DATR;

/** \brief  CPU Debug Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DBGSR_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_DBGSR;

/** \brief  CPU Debug Trap Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DBGTCR_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DBGTCR;

/** \brief  CPU Data Memory Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DCON0_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_DCON0;

/** \brief  CPU Data Control Register 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DCON2_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_DCON2;

/** \brief  CPU Debug Context Save Area Pointer */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DCX_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_DCX;

/** \brief  CPU Data Error Address Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DEADD_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_DEADD;

/** \brief  CPU Data Integrity Error Address Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DIEAR_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_DIEAR;

/** \brief  CPU Data Integrity Error Trap Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DIETR_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_DIETR;

/** \brief  CPU Safety Protection Region DLMU Write Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W;

/** \brief  CPU Safety Protection Region DLMU Write Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W;

/** \brief  CPU Safety Protection DLMU Region Lower Address Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGN_LA_Bits B;       /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGN_LA;

/** \brief  CPU Safety protection DLMU Region Upper Address Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGN_UA_Bits B;       /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGN_UA;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA0_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA0_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA1_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA1_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA2_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA2_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA3_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA3_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA4_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA4_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA5_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA5_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA6_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA6_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENA7_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENA7_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB0_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB0_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB1_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB1_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB2_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB2_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB3_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB3_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB4_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB4_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB5_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB5_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB6_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB6_R;

/** \brief  CPU Safety Protection Region DLMU Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DLMU_SPROT_RGNACCENB7_R_Bits B; /**< \brief Bitfield access */
} Ifx_CPU_DLMU_SPROT_RGNACCENB7_R;

/** \brief  CPU Debug Monitor Start Address */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DMS_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_DMS;

/** \brief  CPU Data Protection Range, Lower Bound Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPR_L_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_DPR_L;

/** \brief  CPU Data Protection Range, Upper Bound Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPR_U_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_DPR_U;

/** \brief  CPU Data Protection Read Enable Register Set 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPRE_0_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPRE_0;

/** \brief  CPU Data Protection Read Enable Register Set 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPRE_1_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPRE_1;

/** \brief  CPU Data Protection Read Enable Register Set 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPRE_2_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPRE_2;

/** \brief  CPU Data Protection Read Enable Register Set 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPRE_3_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPRE_3;

/** \brief  CPU Data Protection Read Enable Register Set 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPRE_4_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPRE_4;

/** \brief  CPU Data Protection Read Enable Register Set 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPRE_5_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPRE_5;

/** \brief  CPU Data Protection Write Enable Register Set 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPWE_0_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPWE_0;

/** \brief  CPU Data Protection Write Enable Register Set 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPWE_1_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPWE_1;

/** \brief  CPU Data Protection Write Enable Register Set 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPWE_2_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPWE_2;

/** \brief  CPU Data Protection Write Enable Register Set 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPWE_3_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPWE_3;

/** \brief  CPU Data Protection Write Enable Register Set 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPWE_4_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPWE_4;

/** \brief  CPU Data Protection Write Enable Register Set 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DPWE_5_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_DPWE_5;

/** \brief  CPU Data Synchronous Trap Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_DSTR_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_DSTR;

/** \brief  CPU External Event Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_EXEVT_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_EXEVT;

/** \brief  CPU Free CSA List Head Pointer */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FCX_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_FCX;

/** \brief  CPU Flash Configuration Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FLASHCON0_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON0;

/** \brief  CPU Flash Configuration Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FLASHCON1_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON1;

/** \brief  CPU Flash Configuration Register 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FLASHCON2_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON2;

/** \brief  CPU Flash Configuration Register 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FLASHCON3_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_FLASHCON3;

/** \brief  CPU Trap Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_CON_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_CON;

/** \brief  CPU Trapping Instruction Opcode Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_OPC_Bits B;            /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_OPC;

/** \brief  CPU Trapping Instruction Program Counter Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_PC_Bits B;             /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_PC;

/** \brief  CPU Trapping Instruction Operand Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_SRC1_Bits B;           /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_SRC1;

/** \brief  CPU Trapping Instruction Operand Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_SRC2_Bits B;           /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_SRC2;

/** \brief  CPU Trapping Instruction Operand Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_FPU_TRAP_SRC3_Bits B;           /**< \brief Bitfield access */
} Ifx_CPU_FPU_TRAP_SRC3;

/** \brief  CPU Instruction Count */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_ICNT_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_ICNT;

/** \brief  CPU Interrupt Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_ICR_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_ICR;

/** \brief  CPU Interrupt Stack Pointer */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_ISP_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_ISP;

/** \brief  CPU Reset Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_KRST0_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_KRST0;

/** \brief  CPU Reset Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_KRST1_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_KRST1;

/** \brief  CPU Reset Status Clear Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_KRSTCLR_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_KRSTCLR;

/** \brief  CPU Free CSA List Limit Pointer */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_LCX_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_LCX;

/** \brief  CPU Safety Protection Region LPB Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_LPB_SPROT_ACCENA_R_Bits B;      /**< \brief Bitfield access */
} Ifx_CPU_LPB_SPROT_ACCENA_R;

/** \brief  CPU Safety Protection Region LPB Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_LPB_SPROT_ACCENB_R_Bits B;      /**< \brief Bitfield access */
} Ifx_CPU_LPB_SPROT_ACCENB_R;

/** \brief  CPU Multi-Count Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_M1CNT_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_M1CNT;

/** \brief  CPU Multi-Count Register 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_M2CNT_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_M2CNT;

/** \brief  CPU Multi-Count Register 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_M3CNT_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_M3CNT;

/** \brief  CPU Overlay Mask Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK0_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK0;

/** \brief  CPU Overlay Mask Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK1_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK1;

/** \brief  CPU Overlay Mask Register 10 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK10_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK10;

/** \brief  CPU Overlay Mask Register 11 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK11_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK11;

/** \brief  CPU Overlay Mask Register 12 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK12_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK12;

/** \brief  CPU Overlay Mask Register 13 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK13_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK13;

/** \brief  CPU Overlay Mask Register 14 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK14_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK14;

/** \brief  CPU Overlay Mask Register 15 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK15_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK15;

/** \brief  CPU Overlay Mask Register 16 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK16_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK16;

/** \brief  CPU Overlay Mask Register 17 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK17_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK17;

/** \brief  CPU Overlay Mask Register 18 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK18_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK18;

/** \brief  CPU Overlay Mask Register 19 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK19_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK19;

/** \brief  CPU Overlay Mask Register 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK2_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK2;

/** \brief  CPU Overlay Mask Register 20 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK20_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK20;

/** \brief  CPU Overlay Mask Register 21 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK21_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK21;

/** \brief  CPU Overlay Mask Register 22 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK22_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK22;

/** \brief  CPU Overlay Mask Register 23 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK23_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK23;

/** \brief  CPU Overlay Mask Register 24 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK24_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK24;

/** \brief  CPU Overlay Mask Register 25 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK25_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK25;

/** \brief  CPU Overlay Mask Register 26 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK26_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK26;

/** \brief  CPU Overlay Mask Register 27 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK27_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK27;

/** \brief  CPU Overlay Mask Register 28 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK28_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK28;

/** \brief  CPU Overlay Mask Register 29 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK29_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK29;

/** \brief  CPU Overlay Mask Register 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK3_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK3;

/** \brief  CPU Overlay Mask Register 30 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK30_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK30;

/** \brief  CPU Overlay Mask Register 31 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK31_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_OMASK31;

/** \brief  CPU Overlay Mask Register 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK4_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK4;

/** \brief  CPU Overlay Mask Register 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK5_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK5;

/** \brief  CPU Overlay Mask Register 6 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK6_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK6;

/** \brief  CPU Overlay Mask Register 7 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK7_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK7;

/** \brief  CPU Overlay Mask Register 8 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK8_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK8;

/** \brief  CPU Overlay Mask Register 9 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OMASK9_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OMASK9;

/** \brief  CPU Overlay Range Select Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OSEL_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_OSEL;

/** \brief  CPU Overlay Target Address Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR0_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR0;

/** \brief  CPU Overlay Target Address Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR1_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR1;

/** \brief  CPU Overlay Target Address Register 10 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR10_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR10;

/** \brief  CPU Overlay Target Address Register 11 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR11_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR11;

/** \brief  CPU Overlay Target Address Register 12 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR12_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR12;

/** \brief  CPU Overlay Target Address Register 13 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR13_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR13;

/** \brief  CPU Overlay Target Address Register 14 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR14_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR14;

/** \brief  CPU Overlay Target Address Register 15 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR15_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR15;

/** \brief  CPU Overlay Target Address Register 16 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR16_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR16;

/** \brief  CPU Overlay Target Address Register 17 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR17_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR17;

/** \brief  CPU Overlay Target Address Register 18 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR18_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR18;

/** \brief  CPU Overlay Target Address Register 19 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR19_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR19;

/** \brief  CPU Overlay Target Address Register 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR2_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR2;

/** \brief  CPU Overlay Target Address Register 20 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR20_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR20;

/** \brief  CPU Overlay Target Address Register 21 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR21_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR21;

/** \brief  CPU Overlay Target Address Register 22 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR22_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR22;

/** \brief  CPU Overlay Target Address Register 23 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR23_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR23;

/** \brief  CPU Overlay Target Address Register 24 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR24_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR24;

/** \brief  CPU Overlay Target Address Register 25 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR25_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR25;

/** \brief  CPU Overlay Target Address Register 26 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR26_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR26;

/** \brief  CPU Overlay Target Address Register 27 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR27_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR27;

/** \brief  CPU Overlay Target Address Register 28 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR28_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR28;

/** \brief  CPU Overlay Target Address Register 29 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR29_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR29;

/** \brief  CPU Overlay Target Address Register 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR3_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR3;

/** \brief  CPU Overlay Target Address Register 30 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR30_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR30;

/** \brief  CPU Overlay Target Address Register 31 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR31_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_OTAR31;

/** \brief  CPU Overlay Target Address Register 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR4_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR4;

/** \brief  CPU Overlay Target Address Register 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR5_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR5;

/** \brief  CPU Overlay Target Address Register 6 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR6_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR6;

/** \brief  CPU Overlay Target Address Register 7 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR7_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR7;

/** \brief  CPU Overlay Target Address Register 8 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR8_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR8;

/** \brief  CPU Overlay Target Address Register 9 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_OTAR9_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_OTAR9;

/** \brief  CPU Program Counter */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PC_Bits B;                      /**< \brief Bitfield access */
} Ifx_CPU_PC;

/** \brief  CPU Program Control 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PCON0_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_PCON0;

/** \brief  CPU Program Control 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PCON1_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_PCON1;

/** \brief  CPU Program Control 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PCON2_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_PCON2;

/** \brief  CPU Previous Context Information Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PCXI_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_PCXI;

/** \brief  CPU Program Integrity Error Address Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PIEAR_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_PIEAR;

/** \brief  CPU Program Integrity Error Trap Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PIETR_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_PIETR;

/** \brief  CPU Data Access CacheabilityRegister */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PMA0_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_PMA0;

/** \brief  CPU Code Access CacheabilityRegister */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PMA1_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_PMA1;

/** \brief  CPU Peripheral Space Identifier register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PMA2_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_PMA2;

/** \brief  CPU Program Synchronous Trap Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PSTR_Bits B;                    /**< \brief Bitfield access */
} Ifx_CPU_PSTR;

/** \brief  CPU Program Status Word */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_PSW_Bits B;                     /**< \brief Bitfield access */
} Ifx_CPU_PSW;

/** \brief  CPU Redirected Address Base Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR0_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR0;

/** \brief  CPU Redirected Address Base Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR1_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR1;

/** \brief  CPU Redirected Address Base Register 10 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR10_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR10;

/** \brief  CPU Redirected Address Base Register 11 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR11_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR11;

/** \brief  CPU Redirected Address Base Register 12 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR12_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR12;

/** \brief  CPU Redirected Address Base Register 13 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR13_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR13;

/** \brief  CPU Redirected Address Base Register 14 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR14_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR14;

/** \brief  CPU Redirected Address Base Register 15 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR15_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR15;

/** \brief  CPU Redirected Address Base Register 16 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR16_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR16;

/** \brief  CPU Redirected Address Base Register 17 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR17_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR17;

/** \brief  CPU Redirected Address Base Register 18 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR18_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR18;

/** \brief  CPU Redirected Address Base Register 19 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR19_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR19;

/** \brief  CPU Redirected Address Base Register 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR2_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR2;

/** \brief  CPU Redirected Address Base Register 20 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR20_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR20;

/** \brief  CPU Redirected Address Base Register 21 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR21_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR21;

/** \brief  CPU Redirected Address Base Register 22 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR22_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR22;

/** \brief  CPU Redirected Address Base Register 23 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR23_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR23;

/** \brief  CPU Redirected Address Base Register 24 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR24_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR24;

/** \brief  CPU Redirected Address Base Register 25 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR25_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR25;

/** \brief  CPU Redirected Address Base Register 26 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR26_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR26;

/** \brief  CPU Redirected Address Base Register 27 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR27_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR27;

/** \brief  CPU Redirected Address Base Register 28 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR28_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR28;

/** \brief  CPU Redirected Address Base Register 29 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR29_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR29;

/** \brief  CPU Redirected Address Base Register 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR3_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR3;

/** \brief  CPU Redirected Address Base Register 30 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR30_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR30;

/** \brief  CPU Redirected Address Base Register 31 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR31_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_RABR31;

/** \brief  CPU Redirected Address Base Register 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR4_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR4;

/** \brief  CPU Redirected Address Base Register 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR5_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR5;

/** \brief  CPU Redirected Address Base Register 6 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR6_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR6;

/** \brief  CPU Redirected Address Base Register 7 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR7_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR7;

/** \brief  CPU Redirected Address Base Register 8 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR8_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR8;

/** \brief  CPU Redirected Address Base Register 9 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_RABR9_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_RABR9;

/** \brief  CPU SRI Error Generation Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SEGEN_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_SEGEN;

/** \brief  CPU Safety Protection Register Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SFR_SPROT_ACCENA_W_Bits B;      /**< \brief Bitfield access */
} Ifx_CPU_SFR_SPROT_ACCENA_W;

/** \brief  CPU Safety Protection Region Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SFR_SPROT_ACCENB_W_Bits B;      /**< \brief Bitfield access */
} Ifx_CPU_SFR_SPROT_ACCENB_W;

/** \brief  CPU SIST Mode Access Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SMACON_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_SMACON;

/** \brief  CPU Safety Protection Region SPR Write Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGN_ACCENA_W_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGN_ACCENA_W;

/** \brief  CPU Safety Protection Region SPR Write Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGN_ACCENB_W_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGN_ACCENB_W;

/** \brief  CPU Safety Protection SPR Region Lower Address Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGN_LA_Bits B;        /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGN_LA;

/** \brief  CPU Safety protection SPR Region Upper Address Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGN_UA_Bits B;        /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGN_UA;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA0_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA0_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA1_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA1_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA2_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA2_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA3_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA3_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA4_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA4_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA5_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA5_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA6_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA6_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register A */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENA7_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENA7_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB0_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB0_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB1_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB1_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB2_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB2_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB3_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB3_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB4_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB4_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB5_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB5_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB6_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB6_R;

/** \brief  CPU Safety Protection Region SPR Read Access Enable Register B */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SPR_SPROT_RGNACCENB7_R_Bits B;  /**< \brief Bitfield access */
} Ifx_CPU_SPR_SPROT_RGNACCENB7_R;

/** \brief  CPU Software Debug Event */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SWEVT_Bits B;                   /**< \brief Bitfield access */
} Ifx_CPU_SWEVT;

/** \brief  CPU System Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_SYSCON_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_SYSCON;

/** \brief  CPU Task Address Space Identifier Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TASK_ASI_Bits B;                /**< \brief Bitfield access */
} Ifx_CPU_TASK_ASI;

/** \brief  CPU Temporal Protection System Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TPS_CON_Bits B;                 /**< \brief Bitfield access */
} Ifx_CPU_TPS_CON;

/** \brief  CPU Exception Timer Class Enable Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits B;      /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_CLASS_EN;

/** \brief  CPU Exception Timer Current Value */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_CVAL_Bits B;          /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_CVAL;

/** \brief  CPU Exception Timer Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_FCX_Bits B;           /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_FCX;

/** \brief  CPU Exception Timer Load Value */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_LVAL_Bits B;          /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_LVAL;

/** \brief  CPU Exception Timer Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TPS_EXTIM_STAT_Bits B;          /**< \brief Bitfield access */
} Ifx_CPU_TPS_EXTIM_STAT;

/** \brief  CPU Temporal Protection System Timer Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TPS_TIMER_Bits B;               /**< \brief Bitfield access */
} Ifx_CPU_TPS_TIMER;

/** \brief  CPU Trigger Address */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TR_ADR_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_TR_ADR;

/** \brief  CPU Trigger Event */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TR_EVT_Bits B;                  /**< \brief Bitfield access */
} Ifx_CPU_TR_EVT;

/** \brief  CPU Trigger Address x */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_CPU_TRIG_ACC_Bits B;                /**< \brief Bitfield access */
} Ifx_CPU_TRIG_ACC;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */

/** \brief  Safety protection region */
typedef volatile struct _Ifx_CPU_DLMU_SPROT_RGN
{
    Ifx_CPU_DLMU_SPROT_RGN_LA LA;           /**< \brief 0, CPU Safety Protection DLMU Region Lower Address Register */
    Ifx_CPU_DLMU_SPROT_RGN_UA UA;           /**< \brief 4, CPU Safety protection DLMU Region Upper Address Register */
    Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W ACCENA_W;   /**< \brief 8, CPU Safety Protection Region DLMU Write Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W ACCENB_W;   /**< \brief C, CPU Safety Protection Region DLMU Write Access Enable Register B */
} Ifx_CPU_DLMU_SPROT_RGN;

/** \brief  Safety protection region */
typedef volatile struct _Ifx_CPU_SPR_SPROT_RGN
{
    Ifx_CPU_SPR_SPROT_RGN_LA LA;            /**< \brief 0, CPU Safety Protection SPR Region Lower Address Register */
    Ifx_CPU_SPR_SPROT_RGN_UA UA;            /**< \brief 4, CPU Safety protection SPR Region Upper Address Register */
    Ifx_CPU_SPR_SPROT_RGN_ACCENA_W ACCENA_W;    /**< \brief 8, CPU Safety Protection Region SPR Write Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGN_ACCENB_W ACCENB_W;    /**< \brief C, CPU Safety Protection Region SPR Write Access Enable Register B */
} Ifx_CPU_SPR_SPROT_RGN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \brief  Protection range */
typedef volatile struct _Ifx_CPU_CPR
{
    Ifx_CPU_CPR_L L;                        /**< \brief 0, CPU Code Protection Range Lower Bound Register */
    Ifx_CPU_CPR_U U;                        /**< \brief 4, CPU Code Protection Range Upper Bound Register */
} Ifx_CPU_CPR;

/** \brief  Safety protection region */
typedef volatile struct _Ifx_CPU_DLMU_SPROT
{
    Ifx_CPU_DLMU_SPROT_RGN RGN[8];          /**< \brief 0, Safety protection region */
    unsigned char reserved_80[8];           /**< \brief 80, \internal Reserved */
    Ifx_CPU_DLMU_SPROT_RGNACCENA0_R RGNACCENA0_R;   /**< \brief 88, CPU Safety Protection Region DLMU Read Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGNACCENB0_R RGNACCENB0_R;   /**< \brief 8C, CPU Safety Protection Region DLMU Read Access Enable Register B */
    unsigned char reserved_90[8];           /**< \brief 90, \internal Reserved */
    Ifx_CPU_DLMU_SPROT_RGNACCENA1_R RGNACCENA1_R;   /**< \brief 98, CPU Safety Protection Region DLMU Read Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGNACCENB1_R RGNACCENB1_R;   /**< \brief 9C, CPU Safety Protection Region DLMU Read Access Enable Register B */
    unsigned char reserved_A0[8];           /**< \brief A0, \internal Reserved */
    Ifx_CPU_DLMU_SPROT_RGNACCENA2_R RGNACCENA2_R;   /**< \brief A8, CPU Safety Protection Region DLMU Read Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGNACCENB2_R RGNACCENB2_R;   /**< \brief AC, CPU Safety Protection Region DLMU Read Access Enable Register B */
    unsigned char reserved_B0[8];           /**< \brief B0, \internal Reserved */
    Ifx_CPU_DLMU_SPROT_RGNACCENA3_R RGNACCENA3_R;   /**< \brief B8, CPU Safety Protection Region DLMU Read Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGNACCENB3_R RGNACCENB3_R;   /**< \brief BC, CPU Safety Protection Region DLMU Read Access Enable Register B */
    unsigned char reserved_C0[8];           /**< \brief C0, \internal Reserved */
    Ifx_CPU_DLMU_SPROT_RGNACCENA4_R RGNACCENA4_R;   /**< \brief C8, CPU Safety Protection Region DLMU Read Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGNACCENB4_R RGNACCENB4_R;   /**< \brief CC, CPU Safety Protection Region DLMU Read Access Enable Register B */
    unsigned char reserved_D0[8];           /**< \brief D0, \internal Reserved */
    Ifx_CPU_DLMU_SPROT_RGNACCENA5_R RGNACCENA5_R;   /**< \brief D8, CPU Safety Protection Region DLMU Read Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGNACCENB5_R RGNACCENB5_R;   /**< \brief DC, CPU Safety Protection Region DLMU Read Access Enable Register B */
    unsigned char reserved_E0[8];           /**< \brief E0, \internal Reserved */
    Ifx_CPU_DLMU_SPROT_RGNACCENA6_R RGNACCENA6_R;   /**< \brief E8, CPU Safety Protection Region DLMU Read Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGNACCENB6_R RGNACCENB6_R;   /**< \brief EC, CPU Safety Protection Region DLMU Read Access Enable Register B */
    unsigned char reserved_F0[8];           /**< \brief F0, \internal Reserved */
    Ifx_CPU_DLMU_SPROT_RGNACCENA7_R RGNACCENA7_R;   /**< \brief F8, CPU Safety Protection Region DLMU Read Access Enable Register A */
    Ifx_CPU_DLMU_SPROT_RGNACCENB7_R RGNACCENB7_R;   /**< \brief FC, CPU Safety Protection Region DLMU Read Access Enable Register B */
    unsigned char reserved_100[11568];      /**< \brief 100, \internal Reserved */
} Ifx_CPU_DLMU_SPROT;

/** \brief  Protection range */
typedef volatile struct _Ifx_CPU_DPR
{
    Ifx_CPU_DPR_L L;                        /**< \brief 0, CPU Data Protection Range, Lower Bound Register */
    Ifx_CPU_DPR_U U;                        /**< \brief 4, CPU Data Protection Range, Upper Bound Register */
} Ifx_CPU_DPR;

/** \brief  Safety protection region */
typedef volatile struct _Ifx_CPU_SPR_SPROT
{
    Ifx_CPU_SPR_SPROT_RGN RGN[8];           /**< \brief 0, Safety protection region */
    unsigned char reserved_80[8];           /**< \brief 80, \internal Reserved */
    Ifx_CPU_SPR_SPROT_RGNACCENA0_R RGNACCENA0_R;    /**< \brief 88, CPU Safety Protection Region SPR Read Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGNACCENB0_R RGNACCENB0_R;    /**< \brief 8C, CPU Safety Protection Region SPR Read Access Enable Register B */
    unsigned char reserved_90[8];           /**< \brief 90, \internal Reserved */
    Ifx_CPU_SPR_SPROT_RGNACCENA1_R RGNACCENA1_R;    /**< \brief 98, CPU Safety Protection Region SPR Read Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGNACCENB1_R RGNACCENB1_R;    /**< \brief 9C, CPU Safety Protection Region SPR Read Access Enable Register B */
    unsigned char reserved_A0[8];           /**< \brief A0, \internal Reserved */
    Ifx_CPU_SPR_SPROT_RGNACCENA2_R RGNACCENA2_R;    /**< \brief A8, CPU Safety Protection Region SPR Read Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGNACCENB2_R RGNACCENB2_R;    /**< \brief AC, CPU Safety Protection Region SPR Read Access Enable Register B */
    unsigned char reserved_B0[8];           /**< \brief B0, \internal Reserved */
    Ifx_CPU_SPR_SPROT_RGNACCENA3_R RGNACCENA3_R;    /**< \brief B8, CPU Safety Protection Region SPR Read Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGNACCENB3_R RGNACCENB3_R;    /**< \brief BC, CPU Safety Protection Region SPR Read Access Enable Register B */
    unsigned char reserved_C0[8];           /**< \brief C0, \internal Reserved */
    Ifx_CPU_SPR_SPROT_RGNACCENA4_R RGNACCENA4_R;    /**< \brief C8, CPU Safety Protection Region SPR Read Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGNACCENB4_R RGNACCENB4_R;    /**< \brief CC, CPU Safety Protection Region SPR Read Access Enable Register B */
    unsigned char reserved_D0[8];           /**< \brief D0, \internal Reserved */
    Ifx_CPU_SPR_SPROT_RGNACCENA5_R RGNACCENA5_R;    /**< \brief D8, CPU Safety Protection Region SPR Read Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGNACCENB5_R RGNACCENB5_R;    /**< \brief DC, CPU Safety Protection Region SPR Read Access Enable Register B */
    unsigned char reserved_E0[8];           /**< \brief E0, \internal Reserved */
    Ifx_CPU_SPR_SPROT_RGNACCENA6_R RGNACCENA6_R;    /**< \brief E8, CPU Safety Protection Region SPR Read Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGNACCENB6_R RGNACCENB6_R;    /**< \brief EC, CPU Safety Protection Region SPR Read Access Enable Register B */
    unsigned char reserved_F0[8];           /**< \brief F0, \internal Reserved */
    Ifx_CPU_SPR_SPROT_RGNACCENA7_R RGNACCENA7_R;    /**< \brief F8, CPU Safety Protection Region SPR Read Access Enable Register A */
    Ifx_CPU_SPR_SPROT_RGNACCENB7_R RGNACCENB7_R;    /**< \brief FC, CPU Safety Protection Region SPR Read Access Enable Register B */
} Ifx_CPU_SPR_SPROT;

/** \brief  Temporal Protection System */
typedef volatile struct _Ifx_CPU_TPS
{
    Ifx_CPU_TPS_CON CON;                    /**< \brief 0, CPU Temporal Protection System Control Register */
    Ifx_CPU_TPS_TIMER TIMER[3];             /**< \brief 4, CPU Temporal Protection System Timer Register */
} Ifx_CPU_TPS;

/** \brief  Trigger */
typedef volatile struct _Ifx_CPU_TR
{
    Ifx_CPU_TR_EVT EVT;                     /**< \brief 0, CPU Trigger Event  */
    Ifx_CPU_TR_ADR ADR;                     /**< \brief 4, CPU Trigger Address  */
} Ifx_CPU_TR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief  CPU object */
typedef volatile struct _Ifx_CPU
{
    Ifx_CPU_OSEL OSEL;                      /**< \brief 0, CPU Overlay Range Select Register */
    unsigned char reserved_4[12];           /**< \brief 4, \internal Reserved */
    Ifx_CPU_RABR0 RABR0;                    /**< \brief 10, CPU Redirected Address Base Register 0 */
    Ifx_CPU_OTAR0 OTAR0;                    /**< \brief 14, CPU Overlay Target Address Register 0 */
    Ifx_CPU_OMASK0 OMASK0;                  /**< \brief 18, CPU Overlay Mask Register 0 */
    Ifx_CPU_RABR1 RABR1;                    /**< \brief 1C, CPU Redirected Address Base Register 1 */
    Ifx_CPU_OTAR1 OTAR1;                    /**< \brief 20, CPU Overlay Target Address Register 1 */
    Ifx_CPU_OMASK1 OMASK1;                  /**< \brief 24, CPU Overlay Mask Register 1 */
    Ifx_CPU_RABR2 RABR2;                    /**< \brief 28, CPU Redirected Address Base Register 2 */
    Ifx_CPU_OTAR2 OTAR2;                    /**< \brief 2C, CPU Overlay Target Address Register 2 */
    Ifx_CPU_OMASK2 OMASK2;                  /**< \brief 30, CPU Overlay Mask Register 2 */
    Ifx_CPU_RABR3 RABR3;                    /**< \brief 34, CPU Redirected Address Base Register 3 */
    Ifx_CPU_OTAR3 OTAR3;                    /**< \brief 38, CPU Overlay Target Address Register 3 */
    Ifx_CPU_OMASK3 OMASK3;                  /**< \brief 3C, CPU Overlay Mask Register 3 */
    Ifx_CPU_RABR4 RABR4;                    /**< \brief 40, CPU Redirected Address Base Register 4 */
    Ifx_CPU_OTAR4 OTAR4;                    /**< \brief 44, CPU Overlay Target Address Register 4 */
    Ifx_CPU_OMASK4 OMASK4;                  /**< \brief 48, CPU Overlay Mask Register 4 */
    Ifx_CPU_RABR5 RABR5;                    /**< \brief 4C, CPU Redirected Address Base Register 5 */
    Ifx_CPU_OTAR5 OTAR5;                    /**< \brief 50, CPU Overlay Target Address Register 5 */
    Ifx_CPU_OMASK5 OMASK5;                  /**< \brief 54, CPU Overlay Mask Register 5 */
    Ifx_CPU_RABR6 RABR6;                    /**< \brief 58, CPU Redirected Address Base Register 6 */
    Ifx_CPU_OTAR6 OTAR6;                    /**< \brief 5C, CPU Overlay Target Address Register 6 */
    Ifx_CPU_OMASK6 OMASK6;                  /**< \brief 60, CPU Overlay Mask Register 6 */
    Ifx_CPU_RABR7 RABR7;                    /**< \brief 64, CPU Redirected Address Base Register 7 */
    Ifx_CPU_OTAR7 OTAR7;                    /**< \brief 68, CPU Overlay Target Address Register 7 */
    Ifx_CPU_OMASK7 OMASK7;                  /**< \brief 6C, CPU Overlay Mask Register 7 */
    Ifx_CPU_RABR8 RABR8;                    /**< \brief 70, CPU Redirected Address Base Register 8 */
    Ifx_CPU_OTAR8 OTAR8;                    /**< \brief 74, CPU Overlay Target Address Register 8 */
    Ifx_CPU_OMASK8 OMASK8;                  /**< \brief 78, CPU Overlay Mask Register 8 */
    Ifx_CPU_RABR9 RABR9;                    /**< \brief 7C, CPU Redirected Address Base Register 9 */
    Ifx_CPU_OTAR9 OTAR9;                    /**< \brief 80, CPU Overlay Target Address Register 9 */
    Ifx_CPU_OMASK9 OMASK9;                  /**< \brief 84, CPU Overlay Mask Register 9 */
    Ifx_CPU_RABR10 RABR10;                  /**< \brief 88, CPU Redirected Address Base Register 10 */
    Ifx_CPU_OTAR10 OTAR10;                  /**< \brief 8C, CPU Overlay Target Address Register 10 */
    Ifx_CPU_OMASK10 OMASK10;                /**< \brief 90, CPU Overlay Mask Register 10 */
    Ifx_CPU_RABR11 RABR11;                  /**< \brief 94, CPU Redirected Address Base Register 11 */
    Ifx_CPU_OTAR11 OTAR11;                  /**< \brief 98, CPU Overlay Target Address Register 11 */
    Ifx_CPU_OMASK11 OMASK11;                /**< \brief 9C, CPU Overlay Mask Register 11 */
    Ifx_CPU_RABR12 RABR12;                  /**< \brief A0, CPU Redirected Address Base Register 12 */
    Ifx_CPU_OTAR12 OTAR12;                  /**< \brief A4, CPU Overlay Target Address Register 12 */
    Ifx_CPU_OMASK12 OMASK12;                /**< \brief A8, CPU Overlay Mask Register 12 */
    Ifx_CPU_RABR13 RABR13;                  /**< \brief AC, CPU Redirected Address Base Register 13 */
    Ifx_CPU_OTAR13 OTAR13;                  /**< \brief B0, CPU Overlay Target Address Register 13 */
    Ifx_CPU_OMASK13 OMASK13;                /**< \brief B4, CPU Overlay Mask Register 13 */
    Ifx_CPU_RABR14 RABR14;                  /**< \brief B8, CPU Redirected Address Base Register 14 */
    Ifx_CPU_OTAR14 OTAR14;                  /**< \brief BC, CPU Overlay Target Address Register 14 */
    Ifx_CPU_OMASK14 OMASK14;                /**< \brief C0, CPU Overlay Mask Register 14 */
    Ifx_CPU_RABR15 RABR15;                  /**< \brief C4, CPU Redirected Address Base Register 15 */
    Ifx_CPU_OTAR15 OTAR15;                  /**< \brief C8, CPU Overlay Target Address Register 15 */
    Ifx_CPU_OMASK15 OMASK15;                /**< \brief CC, CPU Overlay Mask Register 15 */
    Ifx_CPU_RABR16 RABR16;                  /**< \brief D0, CPU Redirected Address Base Register 16 */
    Ifx_CPU_OTAR16 OTAR16;                  /**< \brief D4, CPU Overlay Target Address Register 16 */
    Ifx_CPU_OMASK16 OMASK16;                /**< \brief D8, CPU Overlay Mask Register 16 */
    Ifx_CPU_RABR17 RABR17;                  /**< \brief DC, CPU Redirected Address Base Register 17 */
    Ifx_CPU_OTAR17 OTAR17;                  /**< \brief E0, CPU Overlay Target Address Register 17 */
    Ifx_CPU_OMASK17 OMASK17;                /**< \brief E4, CPU Overlay Mask Register 17 */
    Ifx_CPU_RABR18 RABR18;                  /**< \brief E8, CPU Redirected Address Base Register 18 */
    Ifx_CPU_OTAR18 OTAR18;                  /**< \brief EC, CPU Overlay Target Address Register 18 */
    Ifx_CPU_OMASK18 OMASK18;                /**< \brief F0, CPU Overlay Mask Register 18 */
    Ifx_CPU_RABR19 RABR19;                  /**< \brief F4, CPU Redirected Address Base Register 19 */
    Ifx_CPU_OTAR19 OTAR19;                  /**< \brief F8, CPU Overlay Target Address Register 19 */
    Ifx_CPU_OMASK19 OMASK19;                /**< \brief FC, CPU Overlay Mask Register 19 */
    Ifx_CPU_RABR20 RABR20;                  /**< \brief 100, CPU Redirected Address Base Register 20 */
    Ifx_CPU_OTAR20 OTAR20;                  /**< \brief 104, CPU Overlay Target Address Register 20 */
    Ifx_CPU_OMASK20 OMASK20;                /**< \brief 108, CPU Overlay Mask Register 20 */
    Ifx_CPU_RABR21 RABR21;                  /**< \brief 10C, CPU Redirected Address Base Register 21 */
    Ifx_CPU_OTAR21 OTAR21;                  /**< \brief 110, CPU Overlay Target Address Register 21 */
    Ifx_CPU_OMASK21 OMASK21;                /**< \brief 114, CPU Overlay Mask Register 21 */
    Ifx_CPU_RABR22 RABR22;                  /**< \brief 118, CPU Redirected Address Base Register 22 */
    Ifx_CPU_OTAR22 OTAR22;                  /**< \brief 11C, CPU Overlay Target Address Register 22 */
    Ifx_CPU_OMASK22 OMASK22;                /**< \brief 120, CPU Overlay Mask Register 22 */
    Ifx_CPU_RABR23 RABR23;                  /**< \brief 124, CPU Redirected Address Base Register 23 */
    Ifx_CPU_OTAR23 OTAR23;                  /**< \brief 128, CPU Overlay Target Address Register 23 */
    Ifx_CPU_OMASK23 OMASK23;                /**< \brief 12C, CPU Overlay Mask Register 23 */
    Ifx_CPU_RABR24 RABR24;                  /**< \brief 130, CPU Redirected Address Base Register 24 */
    Ifx_CPU_OTAR24 OTAR24;                  /**< \brief 134, CPU Overlay Target Address Register 24 */
    Ifx_CPU_OMASK24 OMASK24;                /**< \brief 138, CPU Overlay Mask Register 24 */
    Ifx_CPU_RABR25 RABR25;                  /**< \brief 13C, CPU Redirected Address Base Register 25 */
    Ifx_CPU_OTAR25 OTAR25;                  /**< \brief 140, CPU Overlay Target Address Register 25 */
    Ifx_CPU_OMASK25 OMASK25;                /**< \brief 144, CPU Overlay Mask Register 25 */
    Ifx_CPU_RABR26 RABR26;                  /**< \brief 148, CPU Redirected Address Base Register 26 */
    Ifx_CPU_OTAR26 OTAR26;                  /**< \brief 14C, CPU Overlay Target Address Register 26 */
    Ifx_CPU_OMASK26 OMASK26;                /**< \brief 150, CPU Overlay Mask Register 26 */
    Ifx_CPU_RABR27 RABR27;                  /**< \brief 154, CPU Redirected Address Base Register 27 */
    Ifx_CPU_OTAR27 OTAR27;                  /**< \brief 158, CPU Overlay Target Address Register 27 */
    Ifx_CPU_OMASK27 OMASK27;                /**< \brief 15C, CPU Overlay Mask Register 27 */
    Ifx_CPU_RABR28 RABR28;                  /**< \brief 160, CPU Redirected Address Base Register 28 */
    Ifx_CPU_OTAR28 OTAR28;                  /**< \brief 164, CPU Overlay Target Address Register 28 */
    Ifx_CPU_OMASK28 OMASK28;                /**< \brief 168, CPU Overlay Mask Register 28 */
    Ifx_CPU_RABR29 RABR29;                  /**< \brief 16C, CPU Redirected Address Base Register 29 */
    Ifx_CPU_OTAR29 OTAR29;                  /**< \brief 170, CPU Overlay Target Address Register 29 */
    Ifx_CPU_OMASK29 OMASK29;                /**< \brief 174, CPU Overlay Mask Register 29 */
    Ifx_CPU_RABR30 RABR30;                  /**< \brief 178, CPU Redirected Address Base Register 30 */
    Ifx_CPU_OTAR30 OTAR30;                  /**< \brief 17C, CPU Overlay Target Address Register 30 */
    Ifx_CPU_OMASK30 OMASK30;                /**< \brief 180, CPU Overlay Mask Register 30 */
    Ifx_CPU_RABR31 RABR31;                  /**< \brief 184, CPU Redirected Address Base Register 31 */
    Ifx_CPU_OTAR31 OTAR31;                  /**< \brief 188, CPU Overlay Target Address Register 31 */
    Ifx_CPU_OMASK31 OMASK31;                /**< \brief 18C, CPU Overlay Mask Register 31 */
    unsigned char reserved_190[3952];       /**< \brief 190, \internal Reserved */
    Ifx_CPU_FLASHCON0 FLASHCON0;            /**< \brief 1100, CPU Flash Configuration Register 0 */
    Ifx_CPU_FLASHCON1 FLASHCON1;            /**< \brief 1104, CPU Flash Configuration Register 1 */
    Ifx_CPU_FLASHCON2 FLASHCON2;            /**< \brief 1108, CPU Flash Configuration Register 2 */
    Ifx_CPU_FLASHCON3 FLASHCON3;            /**< \brief 110C, CPU Flash Configuration Register 3 */
    unsigned char reserved_1110[48880];     /**< \brief 1110, \internal Reserved */
    Ifx_CPU_KRST0 KRST0;                    /**< \brief D000, CPU Reset Register 0 */
    Ifx_CPU_KRST1 KRST1;                    /**< \brief D004, CPU Reset Register 1 */
    Ifx_CPU_KRSTCLR KRSTCLR;                /**< \brief D008, CPU Reset Status Clear Register */
    unsigned char reserved_D00C[4084];      /**< \brief D00C, \internal Reserved */
    Ifx_CPU_SPR_SPROT SPR_SPROT;            /**< \brief E000, Safety protection region */
    Ifx_CPU_SFR_SPROT_ACCENA_W SFR_SPROT_ACCENA_W;  /**< \brief E100, CPU Safety Protection Register Access Enable Register A */
    Ifx_CPU_SFR_SPROT_ACCENB_W SFR_SPROT_ACCENB_W;  /**< \brief E104, CPU Safety Protection Region Access Enable Register B */
    unsigned char reserved_E108[8];         /**< \brief E108, \internal Reserved */
    Ifx_CPU_LPB_SPROT_ACCENA_R LPB_SPROT_ACCENA_R;  /**< \brief E110, CPU Safety Protection Region LPB Read Access Enable Register A */
    Ifx_CPU_LPB_SPROT_ACCENB_R LPB_SPROT_ACCENB_R;  /**< \brief E114, CPU Safety Protection Region LPB Read Access Enable Register B */
    unsigned char reserved_E118[232];       /**< \brief E118, \internal Reserved */
    Ifx_CPU_DLMU_SPROT DLMU_SPROT;          /**< \brief E200, Safety protection region */
    Ifx_CPU_SEGEN SEGEN;                    /**< \brief 11030, CPU SRI Error Generation Register */
    unsigned char reserved_11034[28624];    /**< \brief 11034, \internal Reserved */
    Ifx_CPU_TASK_ASI TASK_ASI;              /**< \brief 18004, CPU Task Address Space Identifier Register */
    unsigned char reserved_18008[248];      /**< \brief 18008, \internal Reserved */
    Ifx_CPU_PMA0 PMA0;                      /**< \brief 18100, CPU Data Access CacheabilityRegister */
    Ifx_CPU_PMA1 PMA1;                      /**< \brief 18104, CPU Code Access CacheabilityRegister */
    Ifx_CPU_PMA2 PMA2;                      /**< \brief 18108, CPU Peripheral Space Identifier register */
    unsigned char reserved_1810C[3828];     /**< \brief 1810C, \internal Reserved */
    Ifx_CPU_DCON2 DCON2;                    /**< \brief 19000, CPU Data Control Register 2 */
    unsigned char reserved_19004[8];        /**< \brief 19004, \internal Reserved */
    Ifx_CPU_SMACON SMACON;                  /**< \brief 1900C, CPU SIST Mode Access Control Register */
    Ifx_CPU_DSTR DSTR;                      /**< \brief 19010, CPU Data Synchronous Trap Register */
    unsigned char reserved_19014[4];        /**< \brief 19014, \internal Reserved */
    Ifx_CPU_DATR DATR;                      /**< \brief 19018, CPU Data Asynchronous Trap Register */
    Ifx_CPU_DEADD DEADD;                    /**< \brief 1901C, CPU Data Error Address Register */
    Ifx_CPU_DIEAR DIEAR;                    /**< \brief 19020, CPU Data Integrity Error Address Register */
    Ifx_CPU_DIETR DIETR;                    /**< \brief 19024, CPU Data Integrity Error Trap Register */
    unsigned char reserved_19028[24];       /**< \brief 19028, \internal Reserved */
    Ifx_CPU_DCON0 DCON0;                    /**< \brief 19040, CPU Data Memory Control Register */
    unsigned char reserved_19044[444];      /**< \brief 19044, \internal Reserved */
    Ifx_CPU_PSTR PSTR;                      /**< \brief 19200, CPU Program Synchronous Trap Register */
    Ifx_CPU_PCON1 PCON1;                    /**< \brief 19204, CPU Program Control 1 */
    Ifx_CPU_PCON2 PCON2;                    /**< \brief 19208, CPU Program Control 2 */
    Ifx_CPU_PCON0 PCON0;                    /**< \brief 1920C, CPU Program Control 0 */
    Ifx_CPU_PIEAR PIEAR;                    /**< \brief 19210, CPU Program Integrity Error Address Register */
    Ifx_CPU_PIETR PIETR;                    /**< \brief 19214, CPU Program Integrity Error Trap Register */
    unsigned char reserved_19218[488];      /**< \brief 19218, \internal Reserved */
    Ifx_CPU_COMPAT COMPAT;                  /**< \brief 19400, CPU Compatibility Control Register */
    unsigned char reserved_19404[3068];     /**< \brief 19404, \internal Reserved */
    Ifx_CPU_FPU_TRAP_CON FPU_TRAP_CON;      /**< \brief 1A000, CPU Trap Control Register */
    Ifx_CPU_FPU_TRAP_PC FPU_TRAP_PC;        /**< \brief 1A004, CPU Trapping Instruction Program Counter Register */
    Ifx_CPU_FPU_TRAP_OPC FPU_TRAP_OPC;      /**< \brief 1A008, CPU Trapping Instruction Opcode Register */
    unsigned char reserved_1A00C[4];        /**< \brief 1A00C, \internal Reserved */
    Ifx_CPU_FPU_TRAP_SRC1 FPU_TRAP_SRC1;    /**< \brief 1A010, CPU Trapping Instruction Operand Register */
    Ifx_CPU_FPU_TRAP_SRC2 FPU_TRAP_SRC2;    /**< \brief 1A014, CPU Trapping Instruction Operand Register */
    Ifx_CPU_FPU_TRAP_SRC3 FPU_TRAP_SRC3;    /**< \brief 1A018, CPU Trapping Instruction Operand Register */
    unsigned char reserved_1A01C[8164];     /**< \brief 1A01C, \internal Reserved */
    Ifx_CPU_DPR DPR[18];                    /**< \brief 1C000, Protection range */
    unsigned char reserved_1C090[3952];     /**< \brief 1C090, \internal Reserved */
    Ifx_CPU_CPR CPR[10];                    /**< \brief 1D000, Protection range */
    unsigned char reserved_1D050[4016];     /**< \brief 1D050, \internal Reserved */
    Ifx_CPU_CPXE_0 CPXE_0;                  /**< \brief 1E000, CPU Code Protection Execute Enable Register Set 0 */
    Ifx_CPU_CPXE_1 CPXE_1;                  /**< \brief 1E004, CPU Code Protection Execute Enable Register Set 1 */
    Ifx_CPU_CPXE_2 CPXE_2;                  /**< \brief 1E008, CPU Code Protection Execute Enable Register Set 2 */
    Ifx_CPU_CPXE_3 CPXE_3;                  /**< \brief 1E00C, CPU Code Protection Execute Enable Register Set 3 */
    Ifx_CPU_DPRE_0 DPRE_0;                  /**< \brief 1E010, CPU Data Protection Read Enable Register Set 0 */
    Ifx_CPU_DPRE_1 DPRE_1;                  /**< \brief 1E014, CPU Data Protection Read Enable Register Set 1 */
    Ifx_CPU_DPRE_2 DPRE_2;                  /**< \brief 1E018, CPU Data Protection Read Enable Register Set 2 */
    Ifx_CPU_DPRE_3 DPRE_3;                  /**< \brief 1E01C, CPU Data Protection Read Enable Register Set 3 */
    Ifx_CPU_DPWE_0 DPWE_0;                  /**< \brief 1E020, CPU Data Protection Write Enable Register Set 0 */
    Ifx_CPU_DPWE_1 DPWE_1;                  /**< \brief 1E024, CPU Data Protection Write Enable Register Set 1 */
    Ifx_CPU_DPWE_2 DPWE_2;                  /**< \brief 1E028, CPU Data Protection Write Enable Register Set 2 */
    Ifx_CPU_DPWE_3 DPWE_3;                  /**< \brief 1E02C, CPU Data Protection Write Enable Register Set 3 */
    unsigned char reserved_1E030[32];       /**< \brief 1E030, \internal Reserved */
    Ifx_CPU_CPXE_4 CPXE_4;                  /**< \brief 1E050, CPU Code Protection Execute Enable Register Set 4 */
    Ifx_CPU_CPXE_5 CPXE_5;                  /**< \brief 1E054, CPU Code Protection Execute Enable Register Set 5 */
    unsigned char reserved_1E058[8];        /**< \brief 1E058, \internal Reserved */
    Ifx_CPU_DPRE_4 DPRE_4;                  /**< \brief 1E060, CPU Data Protection Read Enable Register Set 4 */
    Ifx_CPU_DPRE_5 DPRE_5;                  /**< \brief 1E064, CPU Data Protection Read Enable Register Set 5 */
    unsigned char reserved_1E068[8];        /**< \brief 1E068, \internal Reserved */
    Ifx_CPU_DPWE_4 DPWE_4;                  /**< \brief 1E070, CPU Data Protection Write Enable Register Set 4 */
    Ifx_CPU_DPWE_5 DPWE_5;                  /**< \brief 1E074, CPU Data Protection Write Enable Register Set 5 */
    unsigned char reserved_1E078[904];      /**< \brief 1E078, \internal Reserved */
    Ifx_CPU_TPS TPS;                        /**< \brief 1E400, Temporal Protection System */
    unsigned char reserved_1E410[48];       /**< \brief 1E410, \internal Reserved */
    Ifx_CPU_TPS_EXTIM_LVAL TPS_EXTIM_LVAL;  /**< \brief 1E440, CPU Exception Timer Load Value */
    Ifx_CPU_TPS_EXTIM_CVAL TPS_EXTIM_CVAL;  /**< \brief 1E444, CPU Exception Timer Current Value */
    Ifx_CPU_TPS_EXTIM_CLASS_EN TPS_EXTIM_CLASS_EN;  /**< \brief 1E448, CPU Exception Timer Class Enable Register */
    Ifx_CPU_TPS_EXTIM_STAT TPS_EXTIM_STAT;  /**< \brief 1E44C, CPU Exception Timer Status Register */
    Ifx_CPU_TPS_EXTIM_FCX TPS_EXTIM_FCX;    /**< \brief 1E450, CPU Exception Timer Status Register */
    unsigned char reserved_1E454[2988];     /**< \brief 1E454, \internal Reserved */
    Ifx_CPU_TR TR[8];                       /**< \brief 1F000, Trigger */
    unsigned char reserved_1F040[3008];     /**< \brief 1F040, \internal Reserved */
    Ifx_CPU_CCTRL CCTRL;                    /**< \brief 1FC00, CPU Counter Control */
    Ifx_CPU_CCNT CCNT;                      /**< \brief 1FC04, CPU CPU Clock Cycle Count */
    Ifx_CPU_ICNT ICNT;                      /**< \brief 1FC08, CPU Instruction Count */
    Ifx_CPU_M1CNT M1CNT;                    /**< \brief 1FC0C, CPU Multi-Count Register 1 */
    Ifx_CPU_M2CNT M2CNT;                    /**< \brief 1FC10, CPU Multi-Count Register 2 */
    Ifx_CPU_M3CNT M3CNT;                    /**< \brief 1FC14, CPU Multi-Count Register 3 */
    unsigned char reserved_1FC18[232];      /**< \brief 1FC18, \internal Reserved */
    Ifx_CPU_DBGSR DBGSR;                    /**< \brief 1FD00, CPU Debug Status Register */
    unsigned char reserved_1FD04[4];        /**< \brief 1FD04, \internal Reserved */
    Ifx_CPU_EXEVT EXEVT;                    /**< \brief 1FD08, CPU External Event Register */
    Ifx_CPU_CREVT CREVT;                    /**< \brief 1FD0C, CPU Core Register Access Event */
    Ifx_CPU_SWEVT SWEVT;                    /**< \brief 1FD10, CPU Software Debug Event */
    unsigned char reserved_1FD14[28];       /**< \brief 1FD14, \internal Reserved */
    Ifx_CPU_TRIG_ACC TRIG_ACC;              /**< \brief 1FD30, CPU Trigger Address x */
    unsigned char reserved_1FD34[12];       /**< \brief 1FD34, \internal Reserved */
    Ifx_CPU_DMS DMS;                        /**< \brief 1FD40, CPU Debug Monitor Start Address */
    Ifx_CPU_DCX DCX;                        /**< \brief 1FD44, CPU Debug Context Save Area Pointer */
    Ifx_CPU_DBGTCR DBGTCR;                  /**< \brief 1FD48, CPU Debug Trap Control Register */
    unsigned char reserved_1FD4C[180];      /**< \brief 1FD4C, \internal Reserved */
    Ifx_CPU_PCXI PCXI;                      /**< \brief 1FE00, CPU Previous Context Information Register */
    Ifx_CPU_PSW PSW;                        /**< \brief 1FE04, CPU Program Status Word */
    Ifx_CPU_PC PC;                          /**< \brief 1FE08, CPU Program Counter */
    unsigned char reserved_1FE0C[8];        /**< \brief 1FE0C, \internal Reserved */
    Ifx_CPU_SYSCON SYSCON;                  /**< \brief 1FE14, CPU System Configuration Register */
    Ifx_CPU_CPU_ID CPU_ID;                  /**< \brief 1FE18, CPU Identification Register TC1.6P */
    Ifx_CPU_CORE_ID CORE_ID;                /**< \brief 1FE1C, CPU Core Identification Register */
    Ifx_CPU_BIV BIV;                        /**< \brief 1FE20, CPU Base Interrupt Vector Table Pointer */
    Ifx_CPU_BTV BTV;                        /**< \brief 1FE24, CPU Base Trap Vector Table Pointer */
    Ifx_CPU_ISP ISP;                        /**< \brief 1FE28, CPU Interrupt Stack Pointer */
    Ifx_CPU_ICR ICR;                        /**< \brief 1FE2C, CPU Interrupt Control Register */
    unsigned char reserved_1FE30[8];        /**< \brief 1FE30, \internal Reserved */
    Ifx_CPU_FCX FCX;                        /**< \brief 1FE38, CPU Free CSA List Head Pointer */
    Ifx_CPU_LCX LCX;                        /**< \brief 1FE3C, CPU Free CSA List Limit Pointer */
    unsigned char reserved_1FE40[16];       /**< \brief 1FE40, \internal Reserved */
    Ifx_CPU_CUS_ID CUS_ID;                  /**< \brief 1FE50, CPU Customer ID register */
    unsigned char reserved_1FE54[172];      /**< \brief 1FE54, \internal Reserved */
    Ifx_CPU_D D[16];                        /**< \brief 1FF00, CPU Data General Purpose Register */
    unsigned char reserved_1FF40[64];       /**< \brief 1FF40, \internal Reserved */
    Ifx_CPU_A A[16];                        /**< \brief 1FF80, CPU Address General Purpose Register */
    unsigned char reserved_1FFC0[64];       /**< \brief 1FFC0, \internal Reserved */
} Ifx_CPU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXCPU_REGDEF_H */
