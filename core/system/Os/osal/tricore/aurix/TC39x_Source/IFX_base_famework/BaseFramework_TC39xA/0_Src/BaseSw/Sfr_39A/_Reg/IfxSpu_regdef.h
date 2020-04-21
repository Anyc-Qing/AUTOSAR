/**
 * \file IfxSpu_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:14:55 GMT
 * Version: TBD
 * Specification: TBD
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
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
 * \defgroup IfxLld_Spu_Registers SpuRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Spu_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Spu_Registers
 * 
 * \defgroup IfxLld_Spu_Registers_union Register unions
 * \ingroup IfxLld_Spu_Registers
 * 
 * \defgroup IfxLld_Spu_Registers_struct Memory map
 * \ingroup IfxLld_Spu_Registers
 */
#ifndef IFXSPU_REGDEF_H
#define IFXSPU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Spu_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_SPU_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0_EN:1;          /**< \brief [0:0] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN1_EN:1;          /**< \brief [1:1] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN2_EN:1;          /**< \brief [2:2] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN3_EN:1;          /**< \brief [3:3] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN4_EN:1;          /**< \brief [4:4] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN5_EN:1;          /**< \brief [5:5] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN6_EN:1;          /**< \brief [6:6] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN7_EN:1;          /**< \brief [7:7] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN8_EN:1;          /**< \brief [8:8] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN9_EN:1;          /**< \brief [9:9] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN10_EN:1;         /**< \brief [10:10] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN11_EN:1;         /**< \brief [11:11] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN12_EN:1;         /**< \brief [12:12] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN13_EN:1;         /**< \brief [13:13] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN14_EN:1;         /**< \brief [14:14] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN15_EN:1;         /**< \brief [15:15] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN16_EN:1;         /**< \brief [16:16] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN17_EN:1;         /**< \brief [17:17] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN18_EN:1;         /**< \brief [18:18] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN19_EN:1;         /**< \brief [19:19] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN20_EN:1;         /**< \brief [20:20] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN21_EN:1;         /**< \brief [21:21] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN22_EN:1;         /**< \brief [22:22] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN23_EN:1;         /**< \brief [23:23] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN24_EN:1;         /**< \brief [24:24] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN25_EN:1;         /**< \brief [25:25] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN26_EN:1;         /**< \brief [26:26] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN27_EN:1;         /**< \brief [27:27] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN28_EN:1;         /**< \brief [28:28] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN29_EN:1;         /**< \brief [29:29] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN30_EN:1;         /**< \brief [30:30] Access Enable for Master TAG ID n (rw) */
    Ifx_UReg_32Bit EN31_EN:1;         /**< \brief [31:31] Access Enable for Master TAG ID n (rw) */
} Ifx_SPU_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_SPU_ACCEN1_Bits
{
    Ifx_UReg_32Bit RES:32;            /**< \brief [31:0] Reserved (r) */
} Ifx_SPU_ACCEN1_Bits;

/** \brief Antenna Offset */
typedef struct _Ifx_SPU_BE_A_ANTOFST_Bits
{
    Ifx_UReg_32Bit ADROFST0_ANT0:16;    /**< \brief [15:0] Antenna Offset Address (rw) */
    Ifx_UReg_32Bit ADROFST1_ANT1:16;    /**< \brief [31:16] Antenna Offset Address (rw) */
} Ifx_SPU_BE_A_ANTOFST_Bits;

/** \brief CFAR Module Control */
typedef struct _Ifx_SPU_BE_CFARCTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] CFAR Base Address (rw) */
    Ifx_UReg_32Bit SEWIN:6;           /**< \brief [24:19] Spectrum Extension Window (rw) */
    Ifx_UReg_32Bit EXTNSN:2;          /**< \brief [26:25] Spectrum Extension (rw) */
    Ifx_UReg_32Bit CFAR_CAE:1;        /**< \brief [27:27] CFAR CA Engine Enable (rw) */
    Ifx_UReg_32Bit CFAR_GOSE:1;       /**< \brief [28:28] CFAR GOS Engine Enable (rw) */
    Ifx_UReg_32Bit CFAREN:3;          /**< \brief [31:29] CFAR Module Enable (rw) */
} Ifx_SPU_BE_CFARCTRL_Bits;

/** \brief Loader Configuration */
typedef struct _Ifx_SPU_BE_LDR_CONF_Bits
{
    Ifx_UReg_32Bit DRPL:8;            /**< \brief [7:0] Drop Last (rwh) */
    Ifx_UReg_32Bit DRPF:8;            /**< \brief [15:8] Drop First (rwh) */
    Ifx_UReg_32Bit EXPNT:6;           /**< \brief [21:16] Common Exponent (rwh) */
    Ifx_UReg_32Bit PHSHFT:2;          /**< \brief [23:22] Fast Phase Shift (rw) */
    Ifx_UReg_32Bit SIZE:4;            /**< \brief [27:24] FFT Size (rw) */
    Ifx_UReg_32Bit FORMAT:2;          /**< \brief [29:28] Window Data Format (rw) */
    Ifx_UReg_32Bit FFTBYPS:1;         /**< \brief [30:30] FFT Bypass (rw) */
    Ifx_UReg_32Bit IFFT:1;            /**< \brief [31:31] Inverse FFT Enable (rw) */
} Ifx_SPU_BE_LDR_CONF_Bits;

/** \brief Loader Configuration Extended */
typedef struct _Ifx_SPU_BE_LDR_CONF2_Bits
{
    Ifx_UReg_32Bit WBASE:16;          /**< \brief [15:0] Window Coefficient Base Address (rw) */
    Ifx_UReg_32Bit PADF:13;           /**< \brief [28:16] Pad at Front (rwh) */
    Ifx_UReg_32Bit RES:2;             /**< \brief [30:29] Reserved (r) */
    Ifx_UReg_32Bit WINEN:1;           /**< \brief [31:31] Window Function Enable (rw) */
} Ifx_SPU_BE_LDR_CONF2_Bits;

/** \brief NCI Control */
typedef struct _Ifx_SPU_BE_NCICTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit EN:1;              /**< \brief [19:19] Enable (rw) */
    Ifx_UReg_32Bit FORMAT:2;          /**< \brief [21:20] Output Format (rwh) */
    Ifx_UReg_32Bit SCALE:2;           /**< \brief [23:22] Result Scaling (rw) */
    Ifx_UReg_32Bit RES:8;             /**< \brief [31:24] Reserved (r) */
} Ifx_SPU_BE_NCICTRL_Bits;

/** \brief Output Data Processor Configuration */
typedef struct _Ifx_SPU_BE_ODP_CONF_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit MODE:1;            /**< \brief [19:19] ODP Mode (rw) */
    Ifx_UReg_32Bit FTR:1;             /**< \brief [20:20] Force to Real (rw) */
    Ifx_UReg_32Bit SCALE:1;           /**< \brief [21:21] Scale Results to 16 bit (rw) */
    Ifx_UReg_32Bit EXPNT:5;           /**< \brief [26:22] Common Exponent (rw) */
    Ifx_UReg_32Bit IPF:1;             /**< \brief [27:27] In Place FFT (rw) */
    Ifx_UReg_32Bit RES:4;             /**< \brief [31:28] Reserved (r) */
} Ifx_SPU_BE_ODP_CONF_Bits;

/** \brief Power Information Channel Control */
typedef struct _Ifx_SPU_BE_PWRCTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [30:19] Reserved (r) */
    Ifx_UReg_32Bit EN:1;              /**< \brief [31:31] Enable (rw) */
} Ifx_SPU_BE_PWRCTRL_Bits;

/** \brief Power Summation */
typedef struct _Ifx_SPU_BE_PWRSUM_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit SCALE:2;           /**< \brief [20:19] Sum Antenna Result Scaling (rw) */
    Ifx_UReg_32Bit FORMAT:2;          /**< \brief [22:21] Output Format (rwh) */
    Ifx_UReg_32Bit RES:9;             /**< \brief [31:23] Reserved (r) */
} Ifx_SPU_BE_PWRSUM_Bits;

/** \brief Sideband Control */
typedef struct _Ifx_SPU_BE_SBCTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [30:19] Reserved (r) */
    Ifx_UReg_32Bit EN:1;              /**< \brief [31:31] Enable (rw) */
} Ifx_SPU_BE_SBCTRL_Bits;

/** \brief Summation Unit Control */
typedef struct _Ifx_SPU_BE_SUMCTRL_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit PWRMODE:1;         /**< \brief [19:19] Power Mode (rw) */
    Ifx_UReg_32Bit SUMMODE:2;         /**< \brief [21:20] Summation Mode (rw) */
    Ifx_UReg_32Bit REAL:1;            /**< \brief [22:22] Real Component Only (rw) */
    Ifx_UReg_32Bit USEANT:8;          /**< \brief [30:23] Antennae to Use (rw) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [31:31] Reserved (rw) */
} Ifx_SPU_BE_SUMCTRL_Bits;

/** \brief Unloader Configuration */
typedef struct _Ifx_SPU_BE_UNLDR_CONF_Bits
{
    Ifx_UReg_32Bit EXPNT:5;           /**< \brief [4:0] Common Exponent (rw) */
    Ifx_UReg_32Bit FORMAT:1;          /**< \brief [5:5] Input Data Format (rw) */
    Ifx_UReg_32Bit HISTEN:1;          /**< \brief [6:6] Histogram Enable (rwh) */
    Ifx_UReg_32Bit HAFE:1;            /**< \brief [7:7] Histogram Antenna Filter Enable (rw) */
    Ifx_UReg_32Bit AFV:3;             /**< \brief [10:8] Antenna Filter Value (rw) */
    Ifx_UReg_32Bit RES:2;             /**< \brief [12:11] Reserved (r) */
    Ifx_UReg_32Bit HISTBINS:3;        /**< \brief [15:13] Number of power values per histogram bin. (rw) */
    Ifx_UReg_32Bit HISTBASE:16;       /**< \brief [31:16] Histogram Base Address (rw) */
} Ifx_SPU_BE_UNLDR_CONF_Bits;

/** \brief Unloader Configuration 2 */
typedef struct _Ifx_SPU_BE_UNLDR_CONF2_Bits
{
    Ifx_UReg_32Bit STRT:16;           /**< \brief [15:0] Start Count (rw) */
    Ifx_UReg_32Bit END:16;            /**< \brief [31:16] End Count (rw) */
} Ifx_SPU_BE_UNLDR_CONF2_Bits;

/** \brief Bin Rejection Unit Control */
typedef struct _Ifx_SPU_BINREJCTRL_Bits
{
    Ifx_UReg_32Bit RMODE:2;           /**< \brief [1:0] Bin Rejection Mode (rw) */
    Ifx_UReg_32Bit ZMODE:1;           /**< \brief [2:2] Threshold Rejection Mode (rw) */
    Ifx_UReg_32Bit LJUST:1;           /**< \brief [3:3] Left Justify (rw) */
    Ifx_UReg_32Bit VALUE:24;          /**< \brief [27:4] Threshold Value (rw) */
    Ifx_UReg_32Bit RES:4;             /**< \brief [31:28] Reserved (r) */
} Ifx_SPU_BINREJCTRL_Bits;

/** \brief Bin Rejection Mask */
typedef struct _Ifx_SPU_BIN_REJ_Bits
{
    Ifx_UReg_32Bit B0_R0:1;           /**< \brief [0:0] BIN (rw) */
    Ifx_UReg_32Bit B1_R1:1;           /**< \brief [1:1] BIN (rw) */
    Ifx_UReg_32Bit B2_R2:1;           /**< \brief [2:2] BIN (rw) */
    Ifx_UReg_32Bit B3_R3:1;           /**< \brief [3:3] BIN (rw) */
    Ifx_UReg_32Bit B4_R4:1;           /**< \brief [4:4] BIN (rw) */
    Ifx_UReg_32Bit B5_R5:1;           /**< \brief [5:5] BIN (rw) */
    Ifx_UReg_32Bit B6_R6:1;           /**< \brief [6:6] BIN (rw) */
    Ifx_UReg_32Bit B7_R7:1;           /**< \brief [7:7] BIN (rw) */
    Ifx_UReg_32Bit B8_R8:1;           /**< \brief [8:8] BIN (rw) */
    Ifx_UReg_32Bit B9_R9:1;           /**< \brief [9:9] BIN (rw) */
    Ifx_UReg_32Bit B10_R10:1;         /**< \brief [10:10] BIN (rw) */
    Ifx_UReg_32Bit B11_R11:1;         /**< \brief [11:11] BIN (rw) */
    Ifx_UReg_32Bit B12_R12:1;         /**< \brief [12:12] BIN (rw) */
    Ifx_UReg_32Bit B13_R13:1;         /**< \brief [13:13] BIN (rw) */
    Ifx_UReg_32Bit B14_R14:1;         /**< \brief [14:14] BIN (rw) */
    Ifx_UReg_32Bit B15_R15:1;         /**< \brief [15:15] BIN (rw) */
    Ifx_UReg_32Bit B16_R16:1;         /**< \brief [16:16] BIN (rw) */
    Ifx_UReg_32Bit B17_R17:1;         /**< \brief [17:17] BIN (rw) */
    Ifx_UReg_32Bit B18_R18:1;         /**< \brief [18:18] BIN (rw) */
    Ifx_UReg_32Bit B19_R19:1;         /**< \brief [19:19] BIN (rw) */
    Ifx_UReg_32Bit B20_R20:1;         /**< \brief [20:20] BIN (rw) */
    Ifx_UReg_32Bit B21_R21:1;         /**< \brief [21:21] BIN (rw) */
    Ifx_UReg_32Bit B22_R22:1;         /**< \brief [22:22] BIN (rw) */
    Ifx_UReg_32Bit B23_R23:1;         /**< \brief [23:23] BIN (rw) */
    Ifx_UReg_32Bit B24_R24:1;         /**< \brief [24:24] BIN (rw) */
    Ifx_UReg_32Bit B25_R25:1;         /**< \brief [25:25] BIN (rw) */
    Ifx_UReg_32Bit B26_R26:1;         /**< \brief [26:26] BIN (rw) */
    Ifx_UReg_32Bit B27_R27:1;         /**< \brief [27:27] BIN (rw) */
    Ifx_UReg_32Bit B28_R28:1;         /**< \brief [28:28] BIN (rw) */
    Ifx_UReg_32Bit B29_R29:1;         /**< \brief [29:29] BIN (rw) */
    Ifx_UReg_32Bit B30_R30:1;         /**< \brief [30:30] BIN (rw) */
    Ifx_UReg_32Bit B31_R31:1;         /**< \brief [31:31] BIN (rw) */
} Ifx_SPU_BIN_REJ_Bits;

/** \brief Bin Rejection Unit Load Count */
typedef struct _Ifx_SPU_BRCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_BRCNT_Bits;

/** \brief CFAR Configuration */
typedef struct _Ifx_SPU_CFARCFG_Bits
{
    Ifx_UReg_32Bit CAALGO:2;          /**< \brief [1:0] CA-CFAR Algorithm Select (rw) */
    Ifx_UReg_32Bit GOSALGO:2;         /**< \brief [3:2] GOS-CFAR Algorithm Select (rw) */
    Ifx_UReg_32Bit CAGUARD:6;         /**< \brief [9:4] Guard Cells (rw) */
    Ifx_UReg_32Bit CAWINCELL:3;       /**< \brief [12:10] Window Cells Exponent (rw) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [13:13] Reserved (r) */
    Ifx_UReg_32Bit CFARSEL:2;         /**< \brief [15:14] Inline CFAR Engine (rw) */
    Ifx_UReg_32Bit CABETA:16;         /**< \brief [31:16] CA-CFAR Beta (rw) */
} Ifx_SPU_CFARCFG_Bits;

/** \brief CFAR Configuration 2 */
typedef struct _Ifx_SPU_CFARCFG2_Bits
{
    Ifx_UReg_32Bit GOSGUARD:6;        /**< \brief [5:0] Guard Cells (rw) */
    Ifx_UReg_32Bit IDXLD:5;           /**< \brief [10:6] Index Lead (rw) */
    Ifx_UReg_32Bit IDXLG:5;           /**< \brief [15:11] Index Lag (rw) */
    Ifx_UReg_32Bit GOSWINCELL:6;      /**< \brief [21:16] Window Cells Exponent (rw) */
    Ifx_UReg_32Bit CASHWIN:3;         /**< \brief [24:22] CASH Subwindow (rw) */
    Ifx_UReg_32Bit RES:7;             /**< \brief [31:25] Reserved (r) */
} Ifx_SPU_CFARCFG2_Bits;

/** \brief CFAR Configuration 3 */
typedef struct _Ifx_SPU_CFARCFG3_Bits
{
    Ifx_UReg_32Bit GOSBETA:16;        /**< \brief [15:0] GOS-CFAR Beta (rw) */
    Ifx_UReg_32Bit CHAN5OFFST:16;     /**< \brief [31:16] Channel 5 Address Offset (rw) */
} Ifx_SPU_CFARCFG3_Bits;

/** \brief CFAR Unit Load Count */
typedef struct _Ifx_SPU_CFARCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_CFARCNT_Bits;

/** \brief Clock Control */
typedef struct _Ifx_SPU_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] Disable Request (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] Disable Status (rh) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [2:2] Reserved (r) */
    Ifx_UReg_32Bit EDIS:1;            /**< \brief [3:3] Sleep Mode Enable Control (rw) */
    Ifx_UReg_32Bit reserved_3:28;     /**< \brief [31:4] \internal Reserved */
} Ifx_SPU_CLC_Bits;

/** \brief Safety Counter Clear */
typedef struct _Ifx_SPU_CNTCLR_Bits
{
    Ifx_UReg_32Bit CLR:2;             /**< \brief [1:0] Clear (rw) */
    Ifx_UReg_32Bit RES:30;            /**< \brief [31:2] Reserved (r) */
} Ifx_SPU_CNTCLR_Bits;

/** \brief SPU Control */
typedef struct _Ifx_SPU_CTRL_Bits
{
    Ifx_UReg_32Bit TRIG:1;            /**< \brief [0:0] SPU Software Trigger (rwh) */
    Ifx_UReg_32Bit BUSY:1;            /**< \brief [1:1] SPU Busy Flag (rh) */
    Ifx_UReg_32Bit MODE:3;            /**< \brief [4:2] SPU Trigger Mode (rw) */
    Ifx_UReg_32Bit NXT_CONF:19;       /**< \brief [23:5] Next Configuration Base Address (rw) */
    Ifx_UReg_32Bit DIV:2;             /**< \brief [25:24] Clock Division Ratio (rw) */
    Ifx_UReg_32Bit RES:5;             /**< \brief [30:26] Reserved (r) */
    Ifx_UReg_32Bit LAST:1;            /**< \brief [31:31] Last Configuration (rw) */
} Ifx_SPU_CTRL_Bits;

/** \brief Double Pass Configuration */
typedef struct _Ifx_SPU_DPASS_CONF_Bits
{
    Ifx_UReg_32Bit EN:1;              /**< \brief [0:0] Enable (rw) */
    Ifx_UReg_32Bit SWITCH:1;          /**< \brief [1:1] Buffer Memory Switch (rw) */
    Ifx_UReg_32Bit RES:30;            /**< \brief [31:2] Reserved (r) */
} Ifx_SPU_DPASS_CONF_Bits;

/** \brief FFT Unload Count */
typedef struct _Ifx_SPU_FFTRCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_FFTRCNT_Bits;

/** \brief FFT Load Count */
typedef struct _Ifx_SPU_FFTWCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_FFTWCNT_Bits;

/** \brief Input Buffer Memory Count */
typedef struct _Ifx_SPU_IBMCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_IBMCNT_Bits;

/** \brief Input DMA Count */
typedef struct _Ifx_SPU_IDMCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_IDMCNT_Bits;

/** \brief Input DMA Configuration */
typedef struct _Ifx_SPU_ID_CONF_Bits
{
    Ifx_UReg_32Bit SRC:2;             /**< \brief [1:0] Data Source (rw) */
    Ifx_UReg_32Bit ANT:2;             /**< \brief [3:2] Number of Antennae (rw) */
    Ifx_UReg_32Bit SMPLCNT:11;        /**< \brief [14:4] Sample Count (rw) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [15:15] Reserved (r) */
    Ifx_UReg_32Bit RAMPS:11;          /**< \brief [26:16] Ramps per Measurement Cycle (rw) */
    Ifx_UReg_32Bit reserved_27:3;     /**< \brief [29:27] \internal Reserved */
    Ifx_UReg_32Bit SIGNED:1;          /**< \brief [30:30] Signed or Unsigned Data (rw) */
    Ifx_UReg_32Bit FORMAT:1;          /**< \brief [31:31] RIF Data Format (rw) */
} Ifx_SPU_ID_CONF_Bits;

/** \brief Input DMA Configuration 2 */
typedef struct _Ifx_SPU_ID_CONF2_Bits
{
    Ifx_UReg_32Bit BPADDR:19;         /**< \brief [18:0] Bypass Address (rw) */
    Ifx_UReg_32Bit RES:5;             /**< \brief [23:19] Reserved (r) */
    Ifx_UReg_32Bit BYPASS:1;          /**< \brief [24:24] SPU Bypass Mode (rw) */
    Ifx_UReg_32Bit BPRLD:1;           /**< \brief [25:25] Bypass Reload (rw) */
    Ifx_UReg_32Bit reserved_25:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_SPU_ID_CONF2_Bits;

/** \brief  */
typedef struct _Ifx_SPU_ID_RM_ACFG0_Bits
{
    Ifx_UReg_32Bit RES:32;            /**< \brief [31:0] Reserved (r) */
} Ifx_SPU_ID_RM_ACFG0_Bits;

/** \brief  */
typedef struct _Ifx_SPU_ID_RM_ACFG1_Bits
{
    Ifx_UReg_32Bit RES:32;            /**< \brief [31:0] Reserved (r) */
} Ifx_SPU_ID_RM_ACFG1_Bits;

/** \brief Bin Offset Address Configuration */
typedef struct _Ifx_SPU_ID_RM_BLO_Bits
{
    Ifx_UReg_32Bit BLO:24;            /**< \brief [23:0] Bin Loop Offset (rw) */
    Ifx_UReg_32Bit RES:8;             /**< \brief [31:24] Reserved (r) */
} Ifx_SPU_ID_RM_BLO_Bits;

/** \brief Bin Loop Repeat */
typedef struct _Ifx_SPU_ID_RM_BLR_Bits
{
    Ifx_UReg_32Bit BLR:13;            /**< \brief [12:0] Bin Loop Repeat (rw) */
    Ifx_UReg_32Bit RES:19;            /**< \brief [31:13] Reserved (r) */
} Ifx_SPU_ID_RM_BLR_Bits;

/** \brief Input DMA Configuration: Radar Memory */
typedef struct _Ifx_SPU_ID_RM_CONF_Bits
{
    Ifx_UReg_32Bit BASE:19;           /**< \brief [18:0] Radar Memory Base Address (rw) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [19:19] Reserved (r) */
    Ifx_UReg_32Bit FORMAT:2;          /**< \brief [21:20] Input Data Format (rw) */
    Ifx_UReg_32Bit TRNSPS:1;          /**< \brief [22:22] Transpose Addressing (rw) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit AM:3;              /**< \brief [26:24] Antenna Mapping (rw) */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit BLOCKS:3;          /**< \brief [30:28] Number of Datablocks (rw) */
    Ifx_UReg_32Bit PM:1;              /**< \brief [31:31] Processing Mode (rw) */
} Ifx_SPU_ID_RM_CONF_Bits;

/** \brief Inner Loop Address Offset */
typedef struct _Ifx_SPU_ID_RM_ILO_Bits
{
    Ifx_UReg_32Bit ILO:24;            /**< \brief [23:0] Inner Loop Offset (rw) */
    Ifx_UReg_32Bit RES:8;             /**< \brief [31:24] Reserved (r) */
} Ifx_SPU_ID_RM_ILO_Bits;

/** \brief Inner and Outer Loop Repeat */
typedef struct _Ifx_SPU_ID_RM_IOLR_Bits
{
    Ifx_UReg_32Bit ILR:13;            /**< \brief [12:0] Inner Loop Repeat (rw) */
    Ifx_UReg_32Bit RES:3;             /**< \brief [15:13] Reserved (r) */
    Ifx_UReg_32Bit OLR:13;            /**< \brief [28:16] Outer Loop Repeat (rw) */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_SPU_ID_RM_IOLR_Bits;

/** \brief Outer Loop Address Offset */
typedef struct _Ifx_SPU_ID_RM_OLO_Bits
{
    Ifx_UReg_32Bit OLO:24;            /**< \brief [23:0] Outer Loop Offset (rw) */
    Ifx_UReg_32Bit RES:8;             /**< \brief [31:24] Reserved (r) */
} Ifx_SPU_ID_RM_OLO_Bits;

/** \brief Kernel Reset Register 0 */
typedef struct _Ifx_SPU_KRST0_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset (rwh) */
    Ifx_UReg_32Bit RSTSTAT:1;         /**< \brief [1:1] Kernel Reset Status (rh) */
    Ifx_UReg_32Bit RES:30;            /**< \brief [31:2] Reserved (r) */
} Ifx_SPU_KRST0_Bits;

/** \brief Kernel Reset Register 1 */
typedef struct _Ifx_SPU_KRST1_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Kernel Reset (rwh) */
    Ifx_UReg_32Bit RES:31;            /**< \brief [31:1] Reserved (r) */
} Ifx_SPU_KRST1_Bits;

/** \brief Kernel Reset Clear */
typedef struct _Ifx_SPU_KRSTCLR_Bits
{
    Ifx_UReg_32Bit CLR:1;             /**< \brief [0:0] Kernel Reset Status Clear (rw) */
    Ifx_UReg_32Bit RES:31;            /**< \brief [31:1] Reserved (r) */
} Ifx_SPU_KRSTCLR_Bits;

/** \brief Local Maximum Control */
typedef struct _Ifx_SPU_LCLMAX_Bits
{
    Ifx_UReg_32Bit WIDTH:2;           /**< \brief [1:0] Local Maximum Window Width (rw) */
    Ifx_UReg_32Bit TMODE:2;           /**< \brief [3:2] Threshold Mode (rw) */
    Ifx_UReg_32Bit LMODE:2;           /**< \brief [5:4] Local Max Mode (rw) */
    Ifx_UReg_32Bit CMBN:1;            /**< \brief [6:6] Check Combine (rw) */
    Ifx_UReg_32Bit LJUST:1;           /**< \brief [7:7] Left Justify (rw) */
    Ifx_UReg_32Bit TSHLD:24;          /**< \brief [31:8] Threshold (rw) */
} Ifx_SPU_LCLMAX_Bits;

/** \brief Input Buffer Memory Read Count */
typedef struct _Ifx_SPU_LDRCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_LDRCNT_Bits;

/** \brief Magnitude Approximation Constants */
typedef struct _Ifx_SPU_MAGAPPROX_Bits
{
    Ifx_UReg_32Bit ALPHA:16;          /**< \brief [15:0] Alpha Constant (rw) */
    Ifx_UReg_32Bit BETA:16;           /**< \brief [31:16] Beta Constant (rw) */
} Ifx_SPU_MAGAPPROX_Bits;

/** \brief Dataset Metadata */
typedef struct _Ifx_SPU_MD_METADATA_Bits
{
    Ifx_UReg_32Bit SMPLCNT:12;        /**< \brief [11:0] Sample Count (rh) */
    Ifx_UReg_32Bit RES:4;             /**< \brief [15:12] Reserved (r) */
    Ifx_UReg_32Bit EXPNT:5;           /**< \brief [20:16] Common Exponent (rh) */
    Ifx_UReg_32Bit reserved_20:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_SPU_MD_METADATA_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_SPU_MODID_Bits
{
    Ifx_UReg_32Bit MOD_REV:8;         /**< \brief [7:0] Module Revision Number (r) */
    Ifx_UReg_32Bit MOD_TYPE:8;        /**< \brief [15:8] Module Type (r) */
    Ifx_UReg_32Bit MOD_NUMBER:16;     /**< \brief [31:16] Module Number Value (r) */
} Ifx_SPU_MODID_Bits;

/** \brief SPU Monitor */
typedef struct _Ifx_SPU_MONITOR_Bits
{
    Ifx_UReg_32Bit RAMP:11;           /**< \brief [10:0] Ramp Counter (rh) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [11:11] Reserved (r) */
    Ifx_UReg_32Bit SAMPLE:11;         /**< \brief [22:12] Sample Count (rh) */
    Ifx_UReg_32Bit reserved_23:1;     /**< \brief [23:23] \internal Reserved */
    Ifx_UReg_32Bit IDM_BUSY:1;        /**< \brief [24:24] IDM Busy (rh) */
    Ifx_UReg_32Bit LDR_BUSY:1;        /**< \brief [25:25] Loader Busy (rh) */
    Ifx_UReg_32Bit M1_BUSY:1;         /**< \brief [26:26] MATH1 Unit Busy (rh) */
    Ifx_UReg_32Bit UL_BUSY:1;         /**< \brief [27:27] Unloader Busy (rh) */
    Ifx_UReg_32Bit M2_BUSY:1;         /**< \brief [28:28] MATH2 Busy (rh) */
    Ifx_UReg_32Bit ODM_BUSY:1;        /**< \brief [29:29] ODM Busy (rh) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_SPU_MONITOR_Bits;

/** \brief NCI Antennae Scaling Factor */
typedef struct _Ifx_SPU_NCISCALAR0_Bits
{
    Ifx_UReg_32Bit ANT0:16;           /**< \brief [15:0] Scaling Factor for Antenna 0 (rw) */
    Ifx_UReg_32Bit ANT1:16;           /**< \brief [31:16] Scaling Factor for Antenna 1 (rw) */
} Ifx_SPU_NCISCALAR0_Bits;

/** \brief NCI Antennae Scaling Factor */
typedef struct _Ifx_SPU_NCISCALAR1_Bits
{
    Ifx_UReg_32Bit ANT2:16;           /**< \brief [15:0] Scaling Factor for Antenna 0 (rw) */
    Ifx_UReg_32Bit ANT3:16;           /**< \brief [31:16] Scaling Factor for Antenna 1 (rw) */
} Ifx_SPU_NCISCALAR1_Bits;

/** \brief NCI Antennae Scaling Factor */
typedef struct _Ifx_SPU_NCISCALAR2_Bits
{
    Ifx_UReg_32Bit ANT4:16;           /**< \brief [15:0] Scaling Factor for Antenna 4 (rw) */
    Ifx_UReg_32Bit ANT5:16;           /**< \brief [31:16] Scaling Factor for Antenna 5 (rw) */
} Ifx_SPU_NCISCALAR2_Bits;

/** \brief NCI Antennae Scaling Factor */
typedef struct _Ifx_SPU_NCISCALAR3_Bits
{
    Ifx_UReg_32Bit ANT6:16;           /**< \brief [15:0] Scaling Factor for Antenna 0 (rw) */
    Ifx_UReg_32Bit ANT7:16;           /**< \brief [31:16] Scaling Factor for Antenna 1 (rw) */
} Ifx_SPU_NCISCALAR3_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_SPU_OCS_Bits
{
    Ifx_UReg_32Bit TGS:2;             /**< \brief [1:0] Trigger Bus Select (rw) */
    Ifx_UReg_32Bit TGB:1;             /**< \brief [2:2] OTGB0/1 Bus Select (rwh) */
    Ifx_UReg_32Bit TG_P:1;            /**< \brief [3:3] TGS, TGB Write Protection (rw) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [15:4] Reserved (r) */
    Ifx_UReg_32Bit TRSCTRL:8;         /**< \brief [23:16] Trace Control (rw) */
    Ifx_UReg_32Bit SUS:4;             /**< \brief [27:24] Suspend (None) */
    Ifx_UReg_32Bit SUS_P:1;           /**< \brief [28:28] Suspend Protect (rw) */
    Ifx_UReg_32Bit SUSSTA:1;          /**< \brief [29:29] Enable Trace Output (rh) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_SPU_OCS_Bits;

/** \brief OCDS Debug Access Register */
typedef struct _Ifx_SPU_ODA_Bits
{
    Ifx_UReg_32Bit DDREN:1;           /**< \brief [0:0] Destructive Debug Read Enable (rw) */
    Ifx_UReg_32Bit DREN:1;            /**< \brief [1:1] Destructive Read Enable (rw) */
    Ifx_UReg_32Bit RES:30;            /**< \brief [31:2] Reserved (r) */
} Ifx_SPU_ODA_Bits;

/** \brief Output DMA Port Write Count */
typedef struct _Ifx_SPU_ODMACNT_ODMACNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_ODMACNT_ODMACNT_Bits;

/** \brief Output Buffer Memory Read Count */
typedef struct _Ifx_SPU_ODMCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_ODMCNT_Bits;

/** \brief Pre-Acquisition Counter */
typedef struct _Ifx_SPU_PACTR_Bits
{
    Ifx_UReg_32Bit RST:1;             /**< \brief [0:0] Counter Reset (rw) */
    Ifx_UReg_32Bit EN:1;              /**< \brief [1:1] Counter Enable (rwh) */
    Ifx_UReg_32Bit LIMIT:11;          /**< \brief [12:2] Preacquisition Counter Limit (rwh) */
    Ifx_UReg_32Bit TRIG:1;            /**< \brief [13:13] Trigger on Limit (rwh) */
    Ifx_UReg_32Bit ERR:1;             /**< \brief [14:14] Error Interrupt on Limit (rwh) */
    Ifx_UReg_32Bit ATTN:1;            /**< \brief [15:15] Attention Request Interrupt onLimit (rw) */
    Ifx_UReg_32Bit COUNT:11;          /**< \brief [26:16] Counter Value (rh) */
    Ifx_UReg_32Bit RES:5;             /**< \brief [31:27] Reserved (r) */
} Ifx_SPU_PACTR_Bits;

/** \brief Scalar Addition Operand */
typedef struct _Ifx_SPU_SCALARADD_Bits
{
    Ifx_UReg_32Bit OPERAND:32;        /**< \brief [31:0] Operand for Scaling (rw) */
} Ifx_SPU_SCALARADD_Bits;

/** \brief Scalar Multiplication Operand */
typedef struct _Ifx_SPU_SCALARMULT_Bits
{
    Ifx_UReg_32Bit OPERAND:32;        /**< \brief [31:0] Operand for Scaling (rw) */
} Ifx_SPU_SCALARMULT_Bits;

/** \brief Status and Reporting */
typedef struct _Ifx_SPU_STAT_Bits
{
    Ifx_UReg_32Bit ERRSTS:1;          /**< \brief [0:0] Error Status (rw) */
    Ifx_UReg_32Bit ERRCLR:1;          /**< \brief [1:1] Error Clear (rw) */
    Ifx_UReg_32Bit ERRMSK:6;          /**< \brief [7:2] Error Mask (rw) */
    Ifx_UReg_32Bit INTSTS:1;          /**< \brief [8:8] Interrupt Status (rw) */
    Ifx_UReg_32Bit INTCLR:1;          /**< \brief [9:9] Interrupt Clear (rw) */
    Ifx_UReg_32Bit INTMSK:6;          /**< \brief [15:10] Interrupt Mask (rw) */
    Ifx_UReg_32Bit OVRRN:3;           /**< \brief [18:16] Overrun (rwh) */
    Ifx_UReg_32Bit RES:1;             /**< \brief [19:19] Reserved (r) */
    Ifx_UReg_32Bit ERRTRG:6;          /**< \brief [25:20] Interrupt Trigger (rh) */
    Ifx_UReg_32Bit INTTRG:6;          /**< \brief [31:26] Interrupt Trigger (rh) */
} Ifx_SPU_STAT_Bits;

/** \brief Output Buffer Memory Write Count */
typedef struct _Ifx_SPU_ULDRCNT_Bits
{
    Ifx_UReg_32Bit CNT:20;            /**< \brief [19:0] Access Count (rh) */
    Ifx_UReg_32Bit RES:12;            /**< \brief [31:20] Reserved (r) */
} Ifx_SPU_ULDRCNT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_spu_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_ACCEN1;

/** \brief Antenna Offset   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_A_ANTOFST_Bits B;      /**< \brief Bitfield access */
} Ifx_SPU_BE_A_ANTOFST;

/** \brief CFAR Module Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_CFARCTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_BE_CFARCTRL;

/** \brief Loader Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_LDR_CONF_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_BE_LDR_CONF;

/** \brief Loader Configuration Extended   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_LDR_CONF2_Bits B;      /**< \brief Bitfield access */
} Ifx_SPU_BE_LDR_CONF2;

/** \brief NCI Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_NCICTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BE_NCICTRL;

/** \brief Output Data Processor Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_ODP_CONF_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_BE_ODP_CONF;

/** \brief Power Information Channel Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_PWRCTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BE_PWRCTRL;

/** \brief Power Summation   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_PWRSUM_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_BE_PWRSUM;

/** \brief Sideband Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_SBCTRL_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_BE_SBCTRL;

/** \brief Summation Unit Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_SUMCTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BE_SUMCTRL;

/** \brief Unloader Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_UNLDR_CONF_Bits B;     /**< \brief Bitfield access */
} Ifx_SPU_BE_UNLDR_CONF;

/** \brief Unloader Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BE_UNLDR_CONF2_Bits B;    /**< \brief Bitfield access */
} Ifx_SPU_BE_UNLDR_CONF2;

/** \brief Bin Rejection Unit Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BINREJCTRL_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_BINREJCTRL;

/** \brief Bin Rejection Mask   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BIN_REJ_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_BIN_REJ;

/** \brief Bin Rejection Unit Load Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_BRCNT_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_BRCNT;

/** \brief CFAR Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CFARCFG_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_CFARCFG;

/** \brief CFAR Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CFARCFG2_Bits B;          /**< \brief Bitfield access */
} Ifx_SPU_CFARCFG2;

/** \brief CFAR Configuration 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CFARCFG3_Bits B;          /**< \brief Bitfield access */
} Ifx_SPU_CFARCFG3;

/** \brief CFAR Unit Load Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CFARCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_CFARCNT;

/** \brief Clock Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CLC_Bits B;               /**< \brief Bitfield access */
} Ifx_SPU_CLC;

/** \brief Safety Counter Clear   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CNTCLR_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_CNTCLR;

/** \brief SPU Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_CTRL_Bits B;              /**< \brief Bitfield access */
} Ifx_SPU_CTRL;

/** \brief Double Pass Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_DPASS_CONF_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_DPASS_CONF;

/** \brief FFT Unload Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_FFTRCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_FFTRCNT;

/** \brief FFT Load Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_FFTWCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_FFTWCNT;

/** \brief Input Buffer Memory Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_IBMCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_IBMCNT;

/** \brief Input DMA Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_IDMCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_IDMCNT;

/** \brief Input DMA Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_CONF_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_ID_CONF;

/** \brief Input DMA Configuration 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_CONF2_Bits B;          /**< \brief Bitfield access */
} Ifx_SPU_ID_CONF2;

/** \brief    */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_ACFG0_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_ACFG0;

/** \brief    */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_ACFG1_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_ACFG1;

/** \brief Bin Offset Address Configuration   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_BLO_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_BLO;

/** \brief Bin Loop Repeat   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_BLR_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_BLR;

/** \brief Input DMA Configuration: Radar Memory   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_CONF_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_CONF;

/** \brief Inner Loop Address Offset   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_ILO_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_ILO;

/** \brief Inner and Outer Loop Repeat   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_IOLR_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_IOLR;

/** \brief Outer Loop Address Offset   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ID_RM_OLO_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_ID_RM_OLO;

/** \brief Kernel Reset Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_KRST0_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_KRST0;

/** \brief Kernel Reset Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_KRST1_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_KRST1;

/** \brief Kernel Reset Clear   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_KRSTCLR_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_KRSTCLR;

/** \brief Local Maximum Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_LCLMAX_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_LCLMAX;

/** \brief Input Buffer Memory Read Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_LDRCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_LDRCNT;

/** \brief Magnitude Approximation Constants   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MAGAPPROX_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_MAGAPPROX;

/** \brief Dataset Metadata   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MD_METADATA_Bits B;       /**< \brief Bitfield access */
} Ifx_SPU_MD_METADATA;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MODID_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_MODID;

/** \brief SPU Monitor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_MONITOR_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_MONITOR;

/** \brief NCI Antennae Scaling Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_NCISCALAR0_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_NCISCALAR0;

/** \brief NCI Antennae Scaling Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_NCISCALAR1_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_NCISCALAR1;

/** \brief NCI Antennae Scaling Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_NCISCALAR2_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_NCISCALAR2;

/** \brief NCI Antennae Scaling Factor   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_NCISCALAR3_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_NCISCALAR3;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_OCS_Bits B;               /**< \brief Bitfield access */
} Ifx_SPU_OCS;

/** \brief OCDS Debug Access Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ODA_Bits B;               /**< \brief Bitfield access */
} Ifx_SPU_ODA;

/** \brief Output DMA Port Write Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ODMACNT_ODMACNT_Bits B;    /**< \brief Bitfield access */
} Ifx_SPU_ODMACNT_ODMACNT;

/** \brief Output Buffer Memory Read Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ODMCNT_Bits B;            /**< \brief Bitfield access */
} Ifx_SPU_ODMCNT;

/** \brief Pre-Acquisition Counter   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_PACTR_Bits B;             /**< \brief Bitfield access */
} Ifx_SPU_PACTR;

/** \brief Scalar Addition Operand   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_SCALARADD_Bits B;         /**< \brief Bitfield access */
} Ifx_SPU_SCALARADD;

/** \brief Scalar Multiplication Operand   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_SCALARMULT_Bits B;        /**< \brief Bitfield access */
} Ifx_SPU_SCALARMULT;

/** \brief Status and Reporting   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_STAT_Bits B;              /**< \brief Bitfield access */
} Ifx_SPU_STAT;

/** \brief Output Buffer Memory Write Count   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SPU_ULDRCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_SPU_ULDRCNT;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_ID_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief ID object */
typedef volatile struct _Ifx_SPU_ID
{
       Ifx_SPU_ID_CONF                     CONF;                   /**< \brief 0, Input DMA Configuration*/
       Ifx_SPU_ID_CONF2                    CONF2;                  /**< \brief 4, Input DMA Configuration 2*/
       Ifx_SPU_ID_RM_CONF                  RM_CONF;                /**< \brief 8, Input DMA Configuration: Radar Memory*/
       Ifx_SPU_ID_RM_ILO                   RM_ILO;                 /**< \brief C, Inner Loop Address Offset*/
       Ifx_SPU_ID_RM_OLO                   RM_OLO;                 /**< \brief 10, Outer Loop Address Offset*/
       Ifx_SPU_ID_RM_BLO                   RM_BLO;                 /**< \brief 14, Bin Offset Address Configuration*/
       Ifx_SPU_ID_RM_IOLR                  RM_IOLR;                /**< \brief 18, Inner and Outer Loop Repeat*/
       Ifx_SPU_ID_RM_BLR                   RM_BLR;                 /**< \brief 1C, Bin Loop Repeat*/
       Ifx_SPU_ID_RM_ACFG0                 RM_ACFG0;               /**< \brief 20, */
       Ifx_SPU_ID_RM_ACFG1                 RM_ACFG1;               /**< \brief 24, */
} Ifx_SPU_ID;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_BE_A_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief A object */
typedef volatile struct _Ifx_SPU_BE_A
{
       Ifx_SPU_BE_A_ANTOFST                ANTOFST;                /**< \brief 0, Antenna Offset*/
} Ifx_SPU_BE_A;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_BE_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief BE object */
typedef volatile struct _Ifx_SPU_BE
{
       Ifx_SPU_BE_LDR_CONF                 LDR_CONF;               /**< \brief 0, Loader Configuration*/
       Ifx_SPU_BE_LDR_CONF2                LDR_CONF2;              /**< \brief 4, Loader Configuration Extended*/
       Ifx_SPU_BE_A                        A[4];                   /**< \brief 8, Antenna Offset*/
       Ifx_SPU_BE_UNLDR_CONF               UNLDR_CONF;             /**< \brief 18, Unloader Configuration*/
       Ifx_SPU_BE_UNLDR_CONF2              UNLDR_CONF2;            /**< \brief 1C, Unloader Configuration 2*/
       Ifx_UReg_8Bit                       reserved_20[4];         /**< \brief 20, \internal Reserved */
       Ifx_SPU_BE_ODP_CONF                 ODP_CONF;               /**< \brief 24, Output Data Processor Configuration*/
       Ifx_SPU_BE_NCICTRL                  NCICTRL;                /**< \brief 28, NCI Control*/
       Ifx_SPU_BE_SUMCTRL                  SUMCTRL;                /**< \brief 2C, Summation Unit Control*/
       Ifx_SPU_BE_PWRSUM                   PWRSUM;                 /**< \brief 30, Power Summation*/
       Ifx_SPU_BE_PWRCTRL                  PWRCTRL;                /**< \brief 34, Power Information Channel Control*/
       Ifx_SPU_BE_CFARCTRL                 CFARCTRL;               /**< \brief 38, CFAR Module Control*/
       Ifx_SPU_BE_SBCTRL                   SBCTRL;                 /**< \brief 3C, Sideband Control*/
} Ifx_SPU_BE;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_BIN_struct
 * \{  */
/******************************************************************************/
/** \name Object L4
 * \{  */
/** \brief BIN object */
typedef volatile struct _Ifx_SPU_BIN
{
       Ifx_SPU_BIN_REJ                     REJ;                    /**< \brief 0, Bin Rejection Mask*/
} Ifx_SPU_BIN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_MD_struct
 * \{  */
/******************************************************************************/
/** \name Object L5
 * \{  */
/** \brief MD object */
typedef volatile struct _Ifx_SPU_MD
{
       Ifx_SPU_MD_METADATA                 METADATA;               /**< \brief 0, Dataset Metadata*/
} Ifx_SPU_MD;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_ODMACNT_struct
 * \{  */
/******************************************************************************/
/** \name Object L6
 * \{  */
/** \brief ODMACNT object */
typedef volatile struct _Ifx_SPU_ODMACNT
{
       Ifx_SPU_ODMACNT_ODMACNT             ODMACNT;                /**< \brief 0, Output DMA Port Write Count*/
} Ifx_SPU_ODMACNT;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxLld_Spu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief SPU object */
typedef volatile struct _Ifx_SPU
{
       Ifx_SPU_CLC                         CLC;                    /**< \brief 0, Clock Control*/
       Ifx_SPU_MODID                       MODID;                  /**< \brief 4, Module Identification Register*/
       Ifx_SPU_STAT                        STAT;                   /**< \brief 8, Status and Reporting*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_SPU_ID                          ID;                     /**< \brief 10, */
       Ifx_SPU_PACTR                       PACTR;                  /**< \brief 38, Pre-Acquisition Counter*/
       Ifx_SPU_DPASS_CONF                  DPASS_CONF;             /**< \brief 3C, Double Pass Configuration*/
       Ifx_SPU_BE                          BE[2];                  /**< \brief 40, Sideband Control*/
       Ifx_SPU_BIN                         BIN[64];                /**< \brief C0, Bin Rejection Mask*/
       Ifx_SPU_MAGAPPROX                   MAGAPPROX;              /**< \brief 1C0, Magnitude Approximation Constants*/
       Ifx_SPU_NCISCALAR0                  NCISCALAR0;             /**< \brief 1C4, NCI Antennae Scaling Factor*/
       Ifx_SPU_NCISCALAR1                  NCISCALAR1;             /**< \brief 1C8, NCI Antennae Scaling Factor*/
       Ifx_SPU_NCISCALAR2                  NCISCALAR2;             /**< \brief 1CC, NCI Antennae Scaling Factor*/
       Ifx_SPU_NCISCALAR3                  NCISCALAR3;             /**< \brief 1D0, NCI Antennae Scaling Factor*/
       Ifx_SPU_CFARCFG                     CFARCFG;                /**< \brief 1D4, CFAR Configuration*/
       Ifx_SPU_CFARCFG2                    CFARCFG2;               /**< \brief 1D8, CFAR Configuration 2*/
       Ifx_SPU_CFARCFG3                    CFARCFG3;               /**< \brief 1DC, CFAR Configuration 3*/
       Ifx_SPU_SCALARADD                   SCALARADD;              /**< \brief 1E0, Scalar Addition Operand*/
       Ifx_SPU_SCALARMULT                  SCALARMULT;             /**< \brief 1E4, Scalar Multiplication Operand*/
       Ifx_SPU_BINREJCTRL                  BINREJCTRL;             /**< \brief 1E8, Bin Rejection Unit Control*/
       Ifx_SPU_LCLMAX                      LCLMAX;                 /**< \brief 1EC, Local Maximum Control*/
       Ifx_SPU_CTRL                        CTRL;                   /**< \brief 1F0, SPU Control*/
       Ifx_UReg_8Bit                       reserved_1F4[12];       /**< \brief 1F4, \internal Reserved */
       Ifx_SPU_MD                          MD[2];                  /**< \brief 200, Dataset Metadata*/
       Ifx_UReg_8Bit                       reserved_208[120];      /**< \brief 208, \internal Reserved */
       Ifx_SPU_IDMCNT                      IDMCNT;                 /**< \brief 280, Input DMA Count*/
       Ifx_SPU_IBMCNT                      IBMCNT;                 /**< \brief 284, Input Buffer Memory Count*/
       Ifx_SPU_LDRCNT                      LDRCNT;                 /**< \brief 288, Input Buffer Memory Read Count*/
       Ifx_SPU_FFTWCNT                     FFTWCNT;                /**< \brief 28C, FFT Load Count*/
       Ifx_SPU_FFTRCNT                     FFTRCNT;                /**< \brief 290, FFT Unload Count*/
       Ifx_SPU_ULDRCNT                     ULDRCNT;                /**< \brief 294, Output Buffer Memory Write Count*/
       Ifx_SPU_ODMCNT                      ODMCNT;                 /**< \brief 298, Output Buffer Memory Read Count*/
       Ifx_SPU_BRCNT                       BRCNT;                  /**< \brief 29C, Bin Rejection Unit Load Count*/
       Ifx_SPU_CFARCNT                     CFARCNT;                /**< \brief 2A0, CFAR Unit Load Count*/
       Ifx_SPU_ODMACNT                     ODMACNT[8];             /**< \brief 2A4, Output DMA Port Write Count*/
       Ifx_SPU_CNTCLR                      CNTCLR;                 /**< \brief 2C4, Safety Counter Clear*/
       Ifx_SPU_MONITOR                     MONITOR;                /**< \brief 2C8, SPU Monitor*/
       Ifx_UReg_8Bit                       reserved_2CC[280];      /**< \brief 2CC, \internal Reserved */
       Ifx_SPU_ACCEN0                      ACCEN0;                 /**< \brief 3E4, Access Enable Register 0*/
       Ifx_SPU_ACCEN1                      ACCEN1;                 /**< \brief 3E8, Access Enable Register 1*/
       Ifx_SPU_OCS                         OCS;                    /**< \brief 3EC, OCDS Control and Status*/
       Ifx_SPU_ODA                         ODA;                    /**< \brief 3F0, OCDS Debug Access Register*/
       Ifx_SPU_KRST0                       KRST0;                  /**< \brief 3F4, Kernel Reset Register 0*/
       Ifx_SPU_KRST1                       KRST1;                  /**< \brief 3F8, Kernel Reset Register 1*/
       Ifx_SPU_KRSTCLR                     KRSTCLR;                /**< \brief 3FC, Kernel Reset Clear*/
} Ifx_SPU;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSPU_REGDEF_H */
