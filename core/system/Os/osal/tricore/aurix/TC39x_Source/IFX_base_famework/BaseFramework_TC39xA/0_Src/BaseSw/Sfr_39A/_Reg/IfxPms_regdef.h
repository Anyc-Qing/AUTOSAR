/**
 * \file IfxPms_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:56 GMT
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
 * \defgroup IfxLld_Pms_Registers PmsRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Pms_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Pms_Registers
 * 
 * \defgroup IfxLld_Pms_Registers_union Register unions
 * \ingroup IfxLld_Pms_Registers
 * 
 * \defgroup IfxLld_Pms_Registers_struct Memory map
 * \ingroup IfxLld_Pms_Registers
 */
#ifndef IFXPMS_REGDEF_H
#define IFXPMS_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Pms_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_PMS_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID ${n} - EN${n} (None) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID ${n} - EN${n} (None) */
} Ifx_PMS_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_PMS_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_PMS_ACCEN1_Bits;

/** \brief Die Temperature Sensor Limit Register */
typedef struct _Ifx_PMS_DTS_LIM_Bits
{
    Ifx_UReg_32Bit LOWER:12;          /**< \brief [11:0] Lower Limit - LOWER (rw) */
    Ifx_UReg_32Bit reserved_12:3;     /**< \brief [14:12] \internal Reserved */
    Ifx_UReg_32Bit LLU:1;             /**< \brief [15:15] Lower Limit Underflow - LLU (rwh) */
    Ifx_UReg_32Bit UPPER:12;          /**< \brief [27:16] Upper Limit - UPPER (rw) */
    Ifx_UReg_32Bit reserved_28:2;     /**< \brief [29:28] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit UOF:1;             /**< \brief [31:31] Upper Limit Overflow - UOF (rwh) */
} Ifx_PMS_DTS_LIM_Bits;

/** \brief Die Temperature Sensor Status Register */
typedef struct _Ifx_PMS_DTS_STAT_Bits
{
    Ifx_UReg_32Bit RESULT:12;         /**< \brief [11:0] Result of the DTS Measurement - RESULT (None) */
    Ifx_UReg_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_PMS_DTS_STAT_Bits;

/** \brief EVR Bandgap and Oscillator Control Register 2 */
typedef struct _Ifx_PMS_EVRBGOCTRL2_Bits
{
    Ifx_UReg_32Bit IREFTR0:3;         /**< \brief [2:0] IREF Dynamic Trim Offset Value for Temperature Range 0. - IREFTR0 (rw) */
    Ifx_UReg_32Bit IREFTR1:3;         /**< \brief [5:3] IREF Dynamic Trim Offset Value for Temperature Range 1. - IREFTR1 (rw) */
    Ifx_UReg_32Bit IREFTR2:3;         /**< \brief [8:6] IREF Dynamic Trim Offset Value for Temperature Range 2. - IREFTR2 (rw) */
    Ifx_UReg_32Bit IREFTR3:3;         /**< \brief [11:9] IREF Dynamic Trim Offset Value for Temperature Range 3. - IREFTR3 (rw) */
    Ifx_UReg_32Bit IREFTR4:3;         /**< \brief [14:12] IREF Dynamic Trim Offset Value for Temperature Range 4. - IREFTR4 (rw) */
    Ifx_UReg_32Bit IREFTR5:3;         /**< \brief [17:15] IREF Dynamic Trim Offset Value for Temperature Range 5. - IREFTR5 (rw) */
    Ifx_UReg_32Bit IREFTR6:3;         /**< \brief [20:18] IREF Dynamic Trim Offset Value for Temperature Range 6. - IREFTR6 (rw) */
    Ifx_UReg_32Bit IREFTR7:3;         /**< \brief [23:21] IREF Dynamic Trim Offset Value for Temperature Range 7. - IREFTR7 (rw) */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit IREFTRIMEN:1;      /**< \brief [31:31] Dynamic IREF Trim Enable - IREFTRIMEN (rw) */
} Ifx_PMS_EVRBGOCTRL2_Bits;

/** \brief EVR Oscillator Control Register 2 */
typedef struct _Ifx_PMS_EVROSCCTRL2_Bits
{
    Ifx_UReg_32Bit OSCTR0:3;          /**< \brief [2:0] Back-up Clock Dynamic Trim Offset Value for Temperature Range 0. - OSCTR0 (rw) */
    Ifx_UReg_32Bit OSCTR1:3;          /**< \brief [5:3] Back-up Clock Dynamic Trim Offset Value for Temperature Range 1. - OSCTR1 (rw) */
    Ifx_UReg_32Bit OSCTR2:3;          /**< \brief [8:6] Back-up Clock Dynamic Trim Offset Value for Temperature Range 2. - OSCTR2 (rw) */
    Ifx_UReg_32Bit OSCTR3:3;          /**< \brief [11:9] Back-up Clock Dynamic Trim Offset Value for Temperature Range 3. - OSCTR3 (rw) */
    Ifx_UReg_32Bit OSCTR4:3;          /**< \brief [14:12] Back-up Clock Dynamic Trim Offset Value for Temperature Range 4. - OSCTR4 (rw) */
    Ifx_UReg_32Bit OSCTR5:3;          /**< \brief [17:15] Back-up Clock Dynamic Trim Offset Value for Temperature Range 5. - OSCTR5 (rw) */
    Ifx_UReg_32Bit OSCTR6:3;          /**< \brief [20:18] Back-up Clock Dynamic Trim Offset Value for Temperature Range 6. - OSCTR6 (rw) */
    Ifx_UReg_32Bit OSCTR7:3;          /**< \brief [23:21] Back-up Clock Dynamic Trim Offset Value for Temperature Range 7. - OSCTR7 (rw) */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVROSCCTRL2_Bits;

/** \brief EVRC SD Coefficient Register 0 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF0_Bits
{
    Ifx_UReg_32Bit M0S0EN:1;          /**< \brief [0:0] S0 Enable(m0en_s0en_i) - M0S0EN (rw) */
    Ifx_UReg_32Bit M0S2EN:1;          /**< \brief [1:1] S2 Enable(m0en_s2en_i) - M0S2EN (rw) */
    Ifx_UReg_32Bit M0S3EN:1;          /**< \brief [2:2] S3 Enable(m0en_s3en_i) - M0S3EN (rw) */
    Ifx_UReg_32Bit M0S3CLIP:1;        /**< \brief [3:3] S3 Clip(m0en_s3clip_i) - M0S3CLIP (rw) */
    Ifx_UReg_32Bit M0S4EN:1;          /**< \brief [4:4] S4 Enable(m0en_s4en_i) - M0S4EN (rw) */
    Ifx_UReg_32Bit M0RAMPEN:1;        /**< \brief [5:5] Ramp Enable(m0en_rampen_i) - M0RAMPEN (rw) */
    Ifx_UReg_32Bit M0SFRGET:1;        /**< \brief [6:6] SFRGET(m0en_sfrget_i) - M0SFRGET (rw) */
    Ifx_UReg_32Bit M0SKIPEN:1;        /**< \brief [7:7] Skip Enable(m0en_skipen_i) - M0SKIPEN (rw) */
    Ifx_UReg_32Bit M0S3COEFF:4;       /**< \brief [11:8] S3 Coefficient(m0s3_coeff_i) - M0S3COEFF (rw) */
    Ifx_UReg_32Bit M0S4COEFF:4;       /**< \brief [15:12] S4 Coefficient(m0s4_coeff_i) - M0S4COEFF (rw) */
    Ifx_UReg_32Bit M0SRMPCOEFF:4;     /**< \brief [19:16] S Ramp Coefficient(m0srmp_coeff_i) - M0SRMPCOEFF (rw) */
    Ifx_UReg_32Bit M0FGETCOEFF:4;     /**< \brief [23:20] S2 Forgetting Factor(m0fget_coeff_i) - M0FGETCOEFF (rw) */
    Ifx_UReg_32Bit M0S2COEFF:4;       /**< \brief [27:24] S2 Coefficient(m0s2_coeff_i) - M0S2COEFF (rw) */
    Ifx_UReg_32Bit M0S2VINSRC:1;      /**< \brief [28:28] S2 Vin Source(m0s2_vinsrc_i) - M0S2VINSRC (rw) */
    Ifx_UReg_32Bit M0S2VOSRC:1;       /**< \brief [29:29] S2 Vout Source(m0s2_vosrc_i) - M0S2VOSRC (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF0_Bits;

/** \brief EVRC SD Coefficient Register 1 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF1_Bits
{
    Ifx_UReg_32Bit M0VOCFLPF:4;       /**< \brief [3:0] LPF Coefficient(m0vocf_lpf_i) - M0VOCFLPF (rw) */
    Ifx_UReg_32Bit M0VOCFINC:4;       /**< \brief [7:4] Output Voltage Ramp Coefficient(m0vocf_inc_i) - M0VOCFINC (rw) */
    Ifx_UReg_32Bit M0VOUT:8;          /**< \brief [15:8] Digital representation of the target voltage(m0vo_lb_i) - M0VOUT (rw) */
    Ifx_UReg_32Bit M0VIN:11;          /**< \brief [26:16] Digital representation of the input voltage(m0vinh_vin_i+m0vinh_vin_i)) - M0VIN (rw) */
    Ifx_UReg_32Bit reserved_27:4;     /**< \brief [30:27] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF1_Bits;

/** \brief EVRC SD Coefficient Register 2 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF2_Bits
{
    Ifx_UReg_32Bit M1S0EN:1;          /**< \brief [0:0] S0 Enable(m1en_s0en_i) - M1S0EN (rw) */
    Ifx_UReg_32Bit M1S2EN:1;          /**< \brief [1:1] S2 Enable(m1en_s2en_i) - M1S2EN (rw) */
    Ifx_UReg_32Bit M1S3EN:1;          /**< \brief [2:2] S3 Enable(m1en_s3en_i) - M1S3EN (rw) */
    Ifx_UReg_32Bit M1S3CLIP:1;        /**< \brief [3:3] S3 Clip(m1en_s3clip_i) - M1S3CLIP (rw) */
    Ifx_UReg_32Bit M1S4EN:1;          /**< \brief [4:4] S4 Enable(m1en_s4en_i) - M1S4EN (rw) */
    Ifx_UReg_32Bit M1RAMPEN:1;        /**< \brief [5:5] Ramp Enable(m1en_rampen_i) - M1RAMPEN (rw) */
    Ifx_UReg_32Bit M1SFRGET:1;        /**< \brief [6:6] SFRGET(m1en_sfrget_i) - M1SFRGET (rw) */
    Ifx_UReg_32Bit M1SKIPEN:1;        /**< \brief [7:7] Skip Enable(m1en_skipen_i) - M1SKIPEN (rw) */
    Ifx_UReg_32Bit M1S3COEFF:4;       /**< \brief [11:8] S3 Coefficient(m1s3_coeff_i) - M1S3COEFF (rw) */
    Ifx_UReg_32Bit M1S4COEFF:4;       /**< \brief [15:12] S4 Coefficient(m1s4_coeff_i) - M1S4COEFF (rw) */
    Ifx_UReg_32Bit M1SRMPCOEFF:4;     /**< \brief [19:16] S Ramp Coefficient(m1srmp_coeff_i) - M1SRMPCOEFF (rw) */
    Ifx_UReg_32Bit M1FGETCOEFF:4;     /**< \brief [23:20] S2 Forgetting Factor(m1fget_coeff_i) - M1FGETCOEFF (rw) */
    Ifx_UReg_32Bit M1S2COEFF:4;       /**< \brief [27:24] S2 Coefficient(m1s2_coeff_i) - M1S2COEFF (rw) */
    Ifx_UReg_32Bit M1S2VINSRC:1;      /**< \brief [28:28] S2 Vin Source(m1s2_vinsrc_i) - M1S2VINSRC (rw) */
    Ifx_UReg_32Bit M1S2VOSRC:1;       /**< \brief [29:29] S2 Vout Source(m1s2_vosrc_i) - M1S2VOSRC (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF2_Bits;

/** \brief EVRC SD Coefficient Register 3 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF3_Bits
{
    Ifx_UReg_32Bit M1VOCFLPF:4;       /**< \brief [3:0] LPF Coefficient(m1vocf_lpf_i) - M1VOCFLPF (rw) */
    Ifx_UReg_32Bit M1VOCFINC:4;       /**< \brief [7:4] Output Voltage Ramp Coefficient(m1vocf_inc_i) - M1VOCFINC (rw) */
    Ifx_UReg_32Bit M1VOUT:8;          /**< \brief [15:8] Digital representation of the target voltage(m1vo_lb_i) - M1VOUT (rw) */
    Ifx_UReg_32Bit M1VIN:11;          /**< \brief [26:16] Digital representation of the input voltage(m1vinh_vin_i+m1vinl_vin_i) - M1VIN (rw) */
    Ifx_UReg_32Bit reserved_27:4;     /**< \brief [30:27] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF3_Bits;

/** \brief EVRC SD Coefficient Register 4 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF4_Bits
{
    Ifx_UReg_32Bit M2S0EN:1;          /**< \brief [0:0] S0 Enable(m2en_s0en_i) - M2S0EN (rw) */
    Ifx_UReg_32Bit M2S2EN:1;          /**< \brief [1:1] S2 Enable(m2en_s2en_i) - M2S2EN (rw) */
    Ifx_UReg_32Bit M2S3EN:1;          /**< \brief [2:2] S3 Enable(m2en_s3en_i) - M2S3EN (rw) */
    Ifx_UReg_32Bit M2S3CLIP:1;        /**< \brief [3:3] S3 Clip(m2en_s3clip_i) - M2S3CLIP (rw) */
    Ifx_UReg_32Bit M2S4EN:1;          /**< \brief [4:4] S4 Enable(m2en_s4en_i) - M2S4EN (rw) */
    Ifx_UReg_32Bit M2RAMPEN:1;        /**< \brief [5:5] Ramp Enable(m2en_rampen_i) - M2RAMPEN (rw) */
    Ifx_UReg_32Bit M2SFRGET:1;        /**< \brief [6:6] SFRGET(m2en_sfrget_i) - M2SFRGET (rw) */
    Ifx_UReg_32Bit M2SKIPEN:1;        /**< \brief [7:7] Skip Enable(m2en_skipen_i) - M2SKIPEN (rw) */
    Ifx_UReg_32Bit M2S3COEFF:4;       /**< \brief [11:8] S3 Coefficient(m2s3_coeff_i) - M2S3COEFF (rw) */
    Ifx_UReg_32Bit M2S4COEFF:4;       /**< \brief [15:12] S4 Coefficient(m2s4_coeff_i) - M2S4COEFF (rw) */
    Ifx_UReg_32Bit M2SRMPCOEFF:4;     /**< \brief [19:16] S Ramp Coefficient(m2srmp_coeff_i) - M2SRMPCOEFF (rw) */
    Ifx_UReg_32Bit M2FGETCOEFF:4;     /**< \brief [23:20] S2 Forgetting Factor(m2fget_coeff_i) - M2FGETCOEFF (rw) */
    Ifx_UReg_32Bit M2S2COEFF:4;       /**< \brief [27:24] S2 Coefficient(m2s2_coeff_i) - M2S2COEFF (rw) */
    Ifx_UReg_32Bit M2S2VINSRC:1;      /**< \brief [28:28] S2 Vin Source(m2s2_vinsrc_i) - M2S2VINSRC (rw) */
    Ifx_UReg_32Bit M2S2VOSRC:1;       /**< \brief [29:29] S2 Vout Source(m2s2_vosrc_i) - M2S2VOSRC (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF4_Bits;

/** \brief EVRC SD Coefficient Register 5 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF5_Bits
{
    Ifx_UReg_32Bit M2VOCFLPF:4;       /**< \brief [3:0] LPF Coefficient(m2vocf_lpf_i) - M2VOCFLPF (rw) */
    Ifx_UReg_32Bit M2VOCFINC:4;       /**< \brief [7:4] Output Voltage Ramp Coefficient(m2vocf_inc_i) - M2VOCFINC (rw) */
    Ifx_UReg_32Bit M2VOUT:8;          /**< \brief [15:8] Digital representation of the target voltage(m2vo_lb_i) - M2VOUT (rw) */
    Ifx_UReg_32Bit M2VIN:11;          /**< \brief [26:16] Digital representation of the input voltage(m2vinh_vin_i+m2vinl_vin_i) - M2VIN (rw) */
    Ifx_UReg_32Bit reserved_27:4;     /**< \brief [30:27] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF5_Bits;

/** \brief EVRC SD Coefficient Register 6 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF6_Bits
{
    Ifx_UReg_32Bit CT5REG0:8;         /**< \brief [7:0] Commutation trimming and Slope Control(drv5v0_trim_i) - CT5REG0 (rw) */
    Ifx_UReg_32Bit CT5REG1:8;         /**< \brief [15:8] Commutation trimming(drv5v1_trim_i) - CT5REG1 (rw) */
    Ifx_UReg_32Bit CT5REG2:8;         /**< \brief [23:16] Commutation trimming(drv5v2_trim_i) - CT5REG2 (rw) */
    Ifx_UReg_32Bit reserved_24:7;     /**< \brief [30:24] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF6_Bits;

/** \brief EVRC SD Coefficient Register 7 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF7_Bits
{
    Ifx_UReg_32Bit CT5REG3:8;         /**< \brief [7:0] Commutation trimming(drv5v3_trim_i) - CT5REG3 (rw) */
    Ifx_UReg_32Bit CT5REG4:8;         /**< \brief [15:8] Commutation trimming(drv5v4_trim_i) - CT5REG4 (rw) */
    Ifx_UReg_32Bit reserved_16:15;    /**< \brief [30:16] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF7_Bits;

/** \brief EVRC SD Coefficient Register 8 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF8_Bits
{
    Ifx_UReg_32Bit CT33REG0:8;        /**< \brief [7:0] Commutation trimming(drv3v0_trim_i) - CT33REG0 (rw) */
    Ifx_UReg_32Bit CT33REG1:8;        /**< \brief [15:8] Commutation trimming(drv3v1_trim_i) - CT33REG1 (rw) */
    Ifx_UReg_32Bit CT33REG2:8;        /**< \brief [23:16] Commutation trimming(drv3v2_trim_i) - CT33REG2 (rw) */
    Ifx_UReg_32Bit reserved_24:7;     /**< \brief [30:24] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF8_Bits;

/** \brief EVRC SD Coefficient Register 9 */
typedef struct _Ifx_PMS_EVRSDCOEFF_COEFF9_Bits
{
    Ifx_UReg_32Bit CT33REG3:8;        /**< \brief [7:0] Commutation trimming(drv3v3_trim_i) - CT33REG3 (rw) */
    Ifx_UReg_32Bit CT33REG4:8;        /**< \brief [15:8] Commutation trimming(drv3v4_trim_i) - CT33REG4 (rw) */
    Ifx_UReg_32Bit reserved_16:15;    /**< \brief [30:16] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCOEFF_COEFF9_Bits;

/** \brief EVRC SD Control Register 0 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL0_Bits
{
    Ifx_UReg_32Bit SDFREQSPRD:16;     /**< \brief [15:0] Frequency Spread Threshold(freqsp_coeff_i) - SDFREQSPRD (rw) */
    Ifx_UReg_32Bit SDFREQ:12;         /**< \brief [27:16] Regulator Switching Frequency or Over-sampling Factor(m0osfl_fact_i+m0osfh_fact_i) - SDFREQ (rw) */
    Ifx_UReg_32Bit NGOFF:1;           /**< \brief [28:28] NMOS level during OFF state(drvslo_ngoff_i) - NGOFF (rw) */
    Ifx_UReg_32Bit PGOFF:1;           /**< \brief [29:29] PMOS level during OFF state(drvslo_pgoff_i) - PGOFF (rw) */
    Ifx_UReg_32Bit UP:1;              /**< \brief [30:30] Update request for SMPS register values - UP (rwh) */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL0_Bits;

/** \brief EVRC SD Control Register 1 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL1_Bits
{
    Ifx_UReg_32Bit M0TOFF:8;          /**< \brief [7:0] Minimum Off Time(m0toff_mintof_i) - M0TOFF (rw) */
    Ifx_UReg_32Bit M0TON:8;           /**< \brief [15:8] Minimum On Time(m0ton_minton_i) - M0TON (rw) */
    Ifx_UReg_32Bit M0S0COEFF:4;       /**< \brief [19:16] S0 coefficient(m0s0_coeff_i) - M0S0COEFF (rw) */
    Ifx_UReg_32Bit M0DEADBD:2;        /**< \brief [21:20] Dead Band(m0s0_deadbd_i) - M0DEADBD (rw) */
    Ifx_UReg_32Bit M0ADCZB:2;         /**< \brief [23:22] ADC Zero Bin(m0fcfg_adczb_i) - M0ADCZB (rw) */
    Ifx_UReg_32Bit M0SKIP:4;          /**< \brief [27:24] Skip Pulse Threshold(m0skip_thres_i) - M0SKIP (rw) */
    Ifx_UReg_32Bit reserved_28:2;     /**< \brief [29:28] \internal Reserved */
    Ifx_UReg_32Bit SYNCEN:1;          /**< \brief [30:30] EVRC Synchronization input enable(synci0_en_i) - SYNCEN (rw) */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL1_Bits;

/** \brief EVRC SD Control Register 10 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL10_Bits
{
    Ifx_UReg_32Bit SHVH:8;            /**< \brief [7:0] Short to High Voltage Threshold(shrth1_shvh_i) - SHVH (rw) */
    Ifx_UReg_32Bit SHVL:8;            /**< \brief [15:8] Short to Low Voltage Threshold(shrtl1_shvl_i) - SHVL (rw) */
    Ifx_UReg_32Bit SHCH:6;            /**< \brief [21:16] Short to High Control Output Threshold - SHCH (rw) */
    Ifx_UReg_32Bit SHCL:6;            /**< \brief [27:22] Short to Low Control Output Threshold - SHCL (rw) */
    Ifx_UReg_32Bit SHHVEN:1;          /**< \brief [28:28] Short to High Detection Enable(shrth0_shhven_i) - SHHVEN (rw) */
    Ifx_UReg_32Bit SHLVEN:1;          /**< \brief [29:29] Short to Low Detection Enable(shrtl0_shlven_i) - SHLVEN (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL10_Bits;

/** \brief EVRC SD Control Register 11 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL11_Bits
{
    Ifx_UReg_32Bit DROOPVH:5;         /**< \brief [4:0] High VDD Limit for Droop request(droopvh_thres_i) - DROOPVH (rw) */
    Ifx_UReg_32Bit reserved_5:3;      /**< \brief [7:5] \internal Reserved */
    Ifx_UReg_32Bit DROOPVL:5;         /**< \brief [12:8] Low VDD Limit for Droop request(droopvl_thres_i) - DROOPVL (rw) */
    Ifx_UReg_32Bit reserved_13:3;     /**< \brief [15:13] \internal Reserved */
    Ifx_UReg_32Bit SYNCMAXDEV:5;      /**< \brief [20:16] Maximum Deviation of the Synchronization Input Frequency(synci1_maxdev_i) - SYNCMAXDEV (rw) */
    Ifx_UReg_32Bit reserved_21:3;     /**< \brief [23:21] \internal Reserved */
    Ifx_UReg_32Bit SYNCHYST:3;        /**< \brief [26:24] Lock Unlock Hysteresis Window(synci0_hyst_i) - SYNCHYST (rw) */
    Ifx_UReg_32Bit reserved_27:1;     /**< \brief [27:27] \internal Reserved */
    Ifx_UReg_32Bit SYNCMUXSEL:2;      /**< \brief [29:28] Synchronisation Input Multiplexer - SYNCMUXSEL (rw) */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL11_Bits;

/** \brief EVRC SD Control Register 2 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL2_Bits
{
    Ifx_UReg_32Bit LPBNDOFFSET:4;     /**< \brief [3:0] Low Power Mode Hysteresis OFFSET(lpbnd_offset_i) - LPBNDOFFSET (rw) */
    Ifx_UReg_32Bit LPBNDWIDTH:4;      /**< \brief [7:4] Low Power Mode Hysteresis Band Width(lpbnd_width_i) - LPBNDWIDTH (rw) */
    Ifx_UReg_32Bit LPLPFCOEFF:4;      /**< \brief [11:8] Low Pass Filter Coefficient(lplpf_coeff_i) - LPLPFCOEFF (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit SDFREQLP:12;       /**< \brief [27:16] Regulator Over-sampling Factor(m1osfl_fact_i+m1osfh_fact_i) - SDFREQLP (rw) */
    Ifx_UReg_32Bit reserved_28:2;     /**< \brief [29:28] \internal Reserved */
    Ifx_UReg_32Bit EVRCMOD:1;         /**< \brief [30:30] LPM or PWM EVRC Mode Activation - EVRCMOD (rw) */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL2_Bits;

/** \brief EVRC SD Control Register 3 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL3_Bits
{
    Ifx_UReg_32Bit M1TOFF:8;          /**< \brief [7:0] Minimum Off Time(m1toff_mintof_i) - M1TOFF (rw) */
    Ifx_UReg_32Bit M1TON:8;           /**< \brief [15:8] Minimum On Time(m1ton_minton_i) - M1TON (rw) */
    Ifx_UReg_32Bit M1S0COEFF:4;       /**< \brief [19:16] S0 coefficient(m1s0_coeff_i) - M1S0COEFF (rw) */
    Ifx_UReg_32Bit M1DEADBD:2;        /**< \brief [21:20] Dead Band(m1s0_deadbd_i) - M1DEADBD (rw) */
    Ifx_UReg_32Bit M1ADCZB:2;         /**< \brief [23:22] ADC Zero Bin(m1fcfg_adczb_i) - M1ADCZB (rw) */
    Ifx_UReg_32Bit M1SKIP:4;          /**< \brief [27:24] Skip Pulse Threshold(m1skip_thres_i) - M1SKIP (rw) */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [30:28] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL3_Bits;

/** \brief EVRC SD Control Register 4 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL4_Bits
{
    Ifx_UReg_32Bit VOKCFG:6;          /**< \brief [5:0] Voltage OK Circuit Configuration(vokcfg_config_i) - VOKCFG (rw) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit SDFREQST:12;       /**< \brief [27:16] Regulator Switching Frequency or Over-sampling Factor(m2osfl_fact_i+m2osfh_fact_i) - SDFREQST (rw) */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [30:28] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL4_Bits;

/** \brief EVRC SD Control Register 5 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL5_Bits
{
    Ifx_UReg_32Bit M2TOFF:8;          /**< \brief [7:0] Minimum Off Time(m2toff_mintof_i) - M2TOFF (rw) */
    Ifx_UReg_32Bit M2TON:8;           /**< \brief [15:8] Minimum On Time(m2ton_minton_i) - M2TON (rw) */
    Ifx_UReg_32Bit M2S0COEFF:4;       /**< \brief [19:16] S0 coefficient(m2s0_coeff_i) - M2S0COEFF (rw) */
    Ifx_UReg_32Bit M2DEADBD:2;        /**< \brief [21:20] Dead Band(m2s0_deadbd_i) - M2DEADBD (rw) */
    Ifx_UReg_32Bit M2ADCZB:2;         /**< \brief [23:22] ADC Zero Bin(m2fcfg_adczb_i) - M2ADCZB (rw) */
    Ifx_UReg_32Bit M2SKIP:4;          /**< \brief [27:24] Skip Pulse Threshold(m2skip_thres_i) - M2SKIP (rw) */
    Ifx_UReg_32Bit reserved_28:3;     /**< \brief [30:28] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL5_Bits;

/** \brief EVRC SD Control Register 6 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL6_Bits
{
    Ifx_UReg_32Bit SVINTH:8;          /**< \brief [7:0] Vin threshold to switch between SINCLO or SINCHI.(svinth_thres_i) - SVINTH (rw) */
    Ifx_UReg_32Bit SVOTH:8;           /**< \brief [15:8] Vout threshold to switch from open loop start-up to closed loop mode.(svoth_thres_i) - SVOTH (rw) */
    Ifx_UReg_32Bit SINCLO:3;          /**< \brief [18:16] Increment for low input voltage.(sinc_sinclo_i) - SINCLO (rw) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit SINCHI:3;          /**< \brief [22:20] Increment for high input voltage.(sinc_sinchi_i) - SINCHI (rw) */
    Ifx_UReg_32Bit reserved_23:8;     /**< \brief [30:23] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL6_Bits;

/** \brief EVRC SD Control Register 7 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL7_Bits
{
    Ifx_UReg_32Bit DRVPV:2;           /**< \brief [1:0] P-Driver Voltage below VDD(drvp_strgth_i) - DRVPV (rw) */
    Ifx_UReg_32Bit DRVPCBF:2;         /**< \brief [3:2] P-Driver Current Boost Factor(drvp_strgth_i) - DRVPCBF (rw) */
    Ifx_UReg_32Bit DRVP:4;            /**< \brief [7:4] P-Driver Current(drvp_strgth_i) - DRVP (rw) */
    Ifx_UReg_32Bit DRVSLOMODE:2;      /**< \brief [9:8] Switching Configuration(drvslo_mode_i) - DRVSLOMODE (rw) */
    Ifx_UReg_32Bit reserved_10:6;     /**< \brief [15:10] \internal Reserved */
    Ifx_UReg_32Bit DRVSPR:8;          /**< \brief [23:16] Spare bits(drvspr_x_i) - DRVSPR (rw) */
    Ifx_UReg_32Bit SYNCDIVFAC:3;      /**< \brief [26:24] Switching frequency division factor for external synchronisation(synco_divfac_i) - SYNCDIVFAC (rw) */
    Ifx_UReg_32Bit reserved_27:4;     /**< \brief [30:27] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL7_Bits;

/** \brief EVRC SD Control Register 8 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL8_Bits
{
    Ifx_UReg_32Bit FBADCOFFS:8;       /**< \brief [7:0] Feedback Converted Counter Value Offset(fbadc2_offset_i) - FBADCOFFS (rw) */
    Ifx_UReg_32Bit FBADCSMP:6;        /**< \brief [13:8] FB ADC Sampling period(fbadc1_smpthr_i) - FBADCSMP (rw) */
    Ifx_UReg_32Bit reserved_14:2;     /**< \brief [15:14] \internal Reserved */
    Ifx_UReg_32Bit FBADCBLNK:2;       /**< \brief [17:16] FB ADC Blanked Samples Number(fbadc0_blank_i) - FBADCBLNK (rw) */
    Ifx_UReg_32Bit reserved_18:2;     /**< \brief [19:18] \internal Reserved */
    Ifx_UReg_32Bit FBADCLPF:2;        /**< \brief [21:20] FB ADC Counter LPF Coefficient(fbadc0_lpfcnt_i) - FBADCLPF (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit FBADCERR:2;        /**< \brief [25:24] FB ADC Error LPF Coefficient(fbadc3_lpferr_i) - FBADCERR (rw) */
    Ifx_UReg_32Bit reserved_26:2;     /**< \brief [27:26] \internal Reserved */
    Ifx_UReg_32Bit FBADCLSB:1;        /**< \brief [28:28] FB ADC LSB for Error Computation(fbadc3_lsb_i) - FBADCLSB (rw) */
    Ifx_UReg_32Bit reserved_29:2;     /**< \brief [30:29] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL8_Bits;

/** \brief EVRC SD Control Register 9 */
typedef struct _Ifx_PMS_EVRSDCTRL_CTRL9_Bits
{
    Ifx_UReg_32Bit FFADCOFFS:8;       /**< \brief [7:0] Feed Forward Converted Counter Value Offset(ffadc1_offset_i) - FFADCOFFS (rw) */
    Ifx_UReg_32Bit FFADCLPF:3;        /**< \brief [10:8] FF ADC Counter LPF Coefficient(ffadc0_lpfcnt_i) - FFADCLPF (rw) */
    Ifx_UReg_32Bit reserved_11:20;    /**< \brief [30:11] \internal Reserved */
    Ifx_UReg_32Bit LCK:1;             /**< \brief [31:31] Lock Status - LCK (None) */
} Ifx_PMS_EVRSDCTRL_CTRL9_Bits;

/** \brief EVR SD Status Register 0 */
typedef struct _Ifx_PMS_EVRSDSTAT0_Bits
{
    Ifx_UReg_32Bit ADCFBCV:8;         /**< \brief [7:0] Step Down Converter Core Voltage Feedback ADC Conversion Result - ADCFBCV (None) */
    Ifx_UReg_32Bit reserved_8:8;      /**< \brief [15:8] \internal Reserved */
    Ifx_UReg_32Bit DPWMOUT:12;        /**< \brief [27:16] DPWM Control Output Status - DPWMOUT (None) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_PMS_EVRSDSTAT0_Bits;

/** \brief EVR Primary ADC Status Register */
typedef struct _Ifx_PMS_EVR_ADCSTAT_Bits
{
    Ifx_UReg_32Bit ADCCV:8;           /**< \brief [7:0] ADC VDD Core Voltage Conversion Result - ADCCV (rh) */
    Ifx_UReg_32Bit ADC33V:8;          /**< \brief [15:8] ADC VDDP3 Voltage Conversion Result - ADC33V (rh) */
    Ifx_UReg_32Bit ADCSWDV:8;         /**< \brief [23:16] ADC VEXT Supply Conversion Result - ADCSWDV (rh) */
    Ifx_UReg_32Bit OVC:1;             /**< \brief [24:24] EVRC Regulator or VDD Over-voltage event flag - OVC (None) */
    Ifx_UReg_32Bit OV33:1;            /**< \brief [25:25] EVR33 Regulator or VDDP3 Over-voltage event flag - OV33 (None) */
    Ifx_UReg_32Bit OVSWD:1;           /**< \brief [26:26] Supply Watchdog (SWD) or VEXT Over-voltage event flag - OVSWD (None) */
    Ifx_UReg_32Bit UVC:1;             /**< \brief [27:27] EVRC Regulator or VDD Under-voltage event flag - UVC (None) */
    Ifx_UReg_32Bit UV33:1;            /**< \brief [28:28] EVR33 Regulator or VDDP3 Under-voltage event flag - UV33 (None) */
    Ifx_UReg_32Bit UVSWD:1;           /**< \brief [29:29] Supply Watchdog (SWD) or VEXT Under-voltage event flag - UVSWD (None) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_PMS_EVR_ADCSTAT_Bits;

/** \brief EVR Analog Control Register */
typedef struct _Ifx_PMS_EVR_ANACTRL_Bits
{
    Ifx_UReg_32Bit CONTROL:32;        /**< \brief [31:0] PLACEHOLDER - CONTROL (None) */
} Ifx_PMS_EVR_ANACTRL_Bits;

/** \brief EVR Bandgap and Oscillator Control Register */
typedef struct _Ifx_PMS_EVR_BGOCTRL_Bits
{
    Ifx_UReg_32Bit VBGTRIM:7;         /**< \brief [6:0] SHPBG Bandgap Trim Value - VBGTRIM (rw) */
    Ifx_UReg_32Bit reserved_7:1;      /**< \brief [7:7] \internal Reserved */
    Ifx_UReg_32Bit OSCCTRIM:8;        /**< \brief [15:8] Back-up Clock Coarse Trim Value - OSCCTRIM (rw) */
    Ifx_UReg_32Bit IREFTRIM:5;        /**< \brief [20:16] IREF Trim Value(trimiref,trimcur_i) - IREFTRIM (rw) */
    Ifx_UReg_32Bit VBGPTRIM:5;        /**< \brief [25:21] SHPBG Bandgap Signed Trim Value - VBGPTRIM (rw) */
    Ifx_UReg_32Bit OSCTEMPTRIM:3;     /**< \brief [28:26] OSC Temperature Coefficient Selection - OSCTEMPTRIM (rw) */
    Ifx_UReg_32Bit OSCTEMPSIGN:1;     /**< \brief [29:29] OSC Temperature Coefficient Sign - OSCTEMPSIGN (rw) */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit ENVICHOP:1;        /**< \brief [31:31] HPBG VI Chopping Enable - ENVICHOP (rw) */
} Ifx_PMS_EVR_BGOCTRL_Bits;

/** \brief EVR Primary HSM Over-voltage Monitor Register */
typedef struct _Ifx_PMS_EVR_HSMOVMON_Bits
{
    Ifx_UReg_32Bit EVRCOVVAL:8;       /**< \brief [7:0] VDD Supply Primary Monitor Alarm Over-voltage threshold - EVRCOVVAL (rw) */
    Ifx_UReg_32Bit EVR33OVVAL:8;      /**< \brief [15:8] VDDP3 Supply Primary Monitor Alarm Over-voltage threshold - EVR33OVVAL (rw) */
    Ifx_UReg_32Bit SWDOVVAL:8;        /**< \brief [23:16] VEXT Supply Primary Monitor Alarm Over-voltage threshold - SWDOVVAL (rw) */
    Ifx_UReg_32Bit EVRCOFF:1;         /**< \brief [24:24] VDD Primary Monitor OV Alarm Enable - EVRCOFF (rw) */
    Ifx_UReg_32Bit EVR33OFF:1;        /**< \brief [25:25] VDDP3 Primary Monitor OV Alarm Enable - EVR33OFF (rw) */
    Ifx_UReg_32Bit SWDOFF:1;          /**< \brief [26:26] VEXT Primary Monitor OV Alarm Enable - SWDOFF (rw) */
    Ifx_UReg_32Bit reserved_27:4;     /**< \brief [30:27] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [31:31] HSM Security Lock - SLCK (None) */
} Ifx_PMS_EVR_HSMOVMON_Bits;

/** \brief EVR Primary HSM Under-voltage Monitor Register */
typedef struct _Ifx_PMS_EVR_HSMUVMON_Bits
{
    Ifx_UReg_32Bit EVRCUVVAL:8;       /**< \brief [7:0] VDD Supply Primary Monitor Alarm Under-voltage threshold - EVRCUVVAL (rw) */
    Ifx_UReg_32Bit EVR33UVVAL:8;      /**< \brief [15:8] VDDP3 Supply Primary Monitor Alarm Under-voltage threshold - EVR33UVVAL (rw) */
    Ifx_UReg_32Bit SWDUVVAL:8;        /**< \brief [23:16] VEXT Supply Primary Monitor Alarm Under-voltage threshold - SWDUVVAL (rw) */
    Ifx_UReg_32Bit EVRCOFF:1;         /**< \brief [24:24] VDD Primary Monitor UV Alarm Enable - EVRCOFF (rw) */
    Ifx_UReg_32Bit EVR33OFF:1;        /**< \brief [25:25] VDDP3 Primary Monitor UV Alarm Enable - EVR33OFF (rw) */
    Ifx_UReg_32Bit SWDOFF:1;          /**< \brief [26:26] VEXT Primary Monitor UV Alarm Enable - SWDOFF (rw) */
    Ifx_UReg_32Bit HSMFIL:4;          /**< \brief [30:27] HSM Voltage Filter - HSMFIL (rw) */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [31:31] HSM Security Lock - SLCK (None) */
} Ifx_PMS_EVR_HSMUVMON_Bits;

/** \brief EVR Secondary Monitor Control Register */
typedef struct _Ifx_PMS_EVR_MONCTRL_Bits
{
    Ifx_UReg_32Bit EVRCOVMOD:2;       /**< \brief [1:0] VDD Over-voltage monitoring mode - EVRCOVMOD (rw) */
    Ifx_UReg_32Bit PREOVMOD:2;        /**< \brief [3:2] EVRPR or VDDPD Over-voltage monitoring mode - PREOVMOD (rw) */
    Ifx_UReg_32Bit EVRCUVMOD:2;       /**< \brief [5:4] VDD Under-voltage monitoring mode - EVRCUVMOD (rw) */
    Ifx_UReg_32Bit PREUVMOD:2;        /**< \brief [7:6] EVRPR or VDDPD Under-voltage monitoring mode - PREUVMOD (rw) */
    Ifx_UReg_32Bit EVR33OVMOD:2;      /**< \brief [9:8] VDDP3 Supply Over-voltage monitoring mode - EVR33OVMOD (rw) */
    Ifx_UReg_32Bit VDDMOVMOD:2;       /**< \brief [11:10] VDDM ADC Supply Over-voltage monitoring mode - VDDMOVMOD (rw) */
    Ifx_UReg_32Bit EVR33UVMOD:2;      /**< \brief [13:12] VDDP3 Supply Under-voltage monitoring mode - EVR33UVMOD (rw) */
    Ifx_UReg_32Bit VDDMUVMOD:2;       /**< \brief [15:14] VDDM ADC Supply Under-voltage monitoring mode - VDDMUVMOD (rw) */
    Ifx_UReg_32Bit SWDOVMOD:2;        /**< \brief [17:16] VEXT Over-voltage monitoring mode - SWDOVMOD (rw) */
    Ifx_UReg_32Bit SBOVMOD:2;         /**< \brief [19:18] EVR Standby Supply or VEVRSB Over-voltage monitoring mode - SBOVMOD (rw) */
    Ifx_UReg_32Bit SWDUVMOD:2;        /**< \brief [21:20] VEXT Under-voltage monitoring mode - SWDUVMOD (rw) */
    Ifx_UReg_32Bit SBUVMOD:2;         /**< \brief [23:22] EVR Standby Supply or VEVRSB Under-voltage monitoring mode - SBUVMOD (rw) */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVR_MONCTRL_Bits;

/** \brief EVR Secondary Monitor Filter Register */
typedef struct _Ifx_PMS_EVR_MONFILT_Bits
{
    Ifx_UReg_32Bit EVRCFIL:4;         /**< \brief [3:0] VDD Secondary ADC Supply Filter - EVRCFIL (rw) */
    Ifx_UReg_32Bit PREFIL:4;          /**< \brief [7:4] VDDPD Secondary ADC Supply Filter - PREFIL (rw) */
    Ifx_UReg_32Bit EVR33FIL:4;        /**< \brief [11:8] VDDP3 Secondary ADC Supply Filter - EVR33FIL (rw) */
    Ifx_UReg_32Bit VDDMFIL:4;         /**< \brief [15:12] VDDM Secondary ADC Supply Filter - VDDMFIL (rw) */
    Ifx_UReg_32Bit SWDFIL:4;          /**< \brief [19:16] VEXT Secondary ADC Supply Filter - SWDFIL (rw) */
    Ifx_UReg_32Bit SBFIL:4;           /**< \brief [23:20] VEVRSB Secondary ADC Supply Filter - SBFIL (rw) */
    Ifx_UReg_32Bit reserved_24:5;     /**< \brief [28:24] \internal Reserved */
    Ifx_UReg_32Bit CLRFIL:1;          /**< \brief [29:29] Clear all Spike Filters - CLRFIL (rw) */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVR_MONFILT_Bits;

/** \brief EVR Secondary ADC Status Register 1 */
typedef struct _Ifx_PMS_EVR_MONSTAT1_Bits
{
    Ifx_UReg_32Bit ADCCV:8;           /**< \brief [7:0] VDD Supply Secondary ADC Conversion Result - ADCCV (rh) */
    Ifx_UReg_32Bit ADC33V:8;          /**< \brief [15:8] VDDP3 Supply Secondary ADC Conversion Result - ADC33V (rh) */
    Ifx_UReg_32Bit ADCSWDV:8;         /**< \brief [23:16] VEXT Supply Secondary ADC Conversion Result - ADCSWDV (rh) */
    Ifx_UReg_32Bit ACTVCNT:6;         /**< \brief [29:24] Secondary Monitor Activity Counter - ACTVCNT (None) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_PMS_EVR_MONSTAT1_Bits;

/** \brief EVR Secondary ADC Status Register 2 */
typedef struct _Ifx_PMS_EVR_MONSTAT2_Bits
{
    Ifx_UReg_32Bit ADCPRE:8;          /**< \brief [7:0] VDDPD Supply Secondary ADC Conversion Result - ADCPRE (rh) */
    Ifx_UReg_32Bit ADCSB:8;           /**< \brief [15:8] VEVRSB Supply Secondary ADC Conversion Result - ADCSB (rh) */
    Ifx_UReg_32Bit ADCVDDM:8;         /**< \brief [23:16] VDDM Supply Secondary ADC Conversion Result - ADCVDDM (rh) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PMS_EVR_MONSTAT2_Bits;

/** \brief EVR Oscillator Control Register */
typedef struct _Ifx_PMS_EVR_OSCCTRL_Bits
{
    Ifx_UReg_32Bit OSCFTRIM:6;        /**< \brief [5:0] Back-up Clock Fine Trim Value - OSCFTRIM (rw) */
    Ifx_UReg_32Bit reserved_6:10;     /**< \brief [15:6] \internal Reserved */
    Ifx_UReg_32Bit OSCFPTRIM:6;       /**< \brief [21:16] OSC Fine Trim Signed Value - OSCFPTRIM (rw) */
    Ifx_UReg_32Bit reserved_22:9;     /**< \brief [30:22] \internal Reserved */
    Ifx_UReg_32Bit OSCTRIMEN:1;       /**< \brief [31:31] Dynamic Oscillator Trim Enable - OSCTRIMEN (rw) */
} Ifx_PMS_EVR_OSCCTRL_Bits;

/** \brief EVR Secondary Over-voltage Monitor Register */
typedef struct _Ifx_PMS_EVR_OVMON_Bits
{
    Ifx_UReg_32Bit EVRCOVVAL:8;       /**< \brief [7:0] VDD Supply Secondary Monitor Over-voltage threshold - EVRCOVVAL (rw) */
    Ifx_UReg_32Bit EVR33OVVAL:8;      /**< \brief [15:8] VDDP3 Supply Secondary Monitor Over-voltage threshold - EVR33OVVAL (rw) */
    Ifx_UReg_32Bit SWDOVVAL:8;        /**< \brief [23:16] VEXT Supply Secondary Monitor Over-voltage threshold - SWDOVVAL (rw) */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVR_OVMON_Bits;

/** \brief EVR Secondary Over-voltage Monitor Register 2 */
typedef struct _Ifx_PMS_EVR_OVMON2_Bits
{
    Ifx_UReg_32Bit PREOVVAL:8;        /**< \brief [7:0] VDDPD Supply Secondary Monitor Over-voltage threshold - PREOVVAL (rw) */
    Ifx_UReg_32Bit VDDMOVVAL:8;       /**< \brief [15:8] VDDM Supply Secondary Monitor Over-voltage threshold - VDDMOVVAL (rw) */
    Ifx_UReg_32Bit SBOVVAL:8;         /**< \brief [23:16] VEVRSB Supply Secondary Monitor Over-voltage threshold - SBOVVAL (rw) */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVR_OVMON2_Bits;

/** \brief PMS Interrupt Enable Register */
typedef struct _Ifx_PMS_EVR_PMSIEN_Bits
{
    Ifx_UReg_32Bit OVSWD:1;           /**< \brief [0:0] OVSWD Interrupt enable - OVSWD (rw) */
    Ifx_UReg_32Bit UVSWD:1;           /**< \brief [1:1] UVSWD Interrupt enable - UVSWD (rw) */
    Ifx_UReg_32Bit OV33:1;            /**< \brief [2:2] OV33 Interrupt enable - OV33 (rw) */
    Ifx_UReg_32Bit UV33:1;            /**< \brief [3:3] UV33 Interrupt enable - UV33 (rw) */
    Ifx_UReg_32Bit OVC:1;             /**< \brief [4:4] OVC Interrupt enable - OVC (rw) */
    Ifx_UReg_32Bit UVC:1;             /**< \brief [5:5] UVC Interrupt enable - UVC (rw) */
    Ifx_UReg_32Bit OVPRE:1;           /**< \brief [6:6] OVPRE Interrupt enable - OVPRE (rw) */
    Ifx_UReg_32Bit UVPRE:1;           /**< \brief [7:7] UVPRE Interrupt enable - UVPRE (rw) */
    Ifx_UReg_32Bit OVDDM:1;           /**< \brief [8:8] OVDDM Interrupt enable - OVDDM (rw) */
    Ifx_UReg_32Bit UVDDM:1;           /**< \brief [9:9] UVDDM Interrupt enable - UVDDM (rw) */
    Ifx_UReg_32Bit OVSB:1;            /**< \brief [10:10] OVSB Interrupt enable - OVSB (rw) */
    Ifx_UReg_32Bit UVSB:1;            /**< \brief [11:11] UVSB Interrupt enable - UVSB (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit EVRCMOD:1;         /**< \brief [16:16] EVRCMOD Interrupt enable - EVRCMOD (rw) */
    Ifx_UReg_32Bit SDVOK:1;           /**< \brief [17:17] SDVOK Interrupt enable - SDVOK (rw) */
    Ifx_UReg_32Bit SYNCLCK:1;         /**< \brief [18:18] SD SYNCLCK Interrupt enable - SYNCLCK (rw) */
    Ifx_UReg_32Bit SWDLVL:1;          /**< \brief [19:19] SWDLVL Interrupt enable - SWDLVL (rw) */
    Ifx_UReg_32Bit reserved_20:1;     /**< \brief [20:20] \internal Reserved */
    Ifx_UReg_32Bit WUTWKP:1;          /**< \brief [21:21] WUTWKP Interrupt enable - WUTWKP (rw) */
    Ifx_UReg_32Bit ESR0WKP:1;         /**< \brief [22:22] ESR0WKP Interrupt enable - ESR0WKP (rw) */
    Ifx_UReg_32Bit ESR1WKP:1;         /**< \brief [23:23] ESR1WKP Interrupt enable - ESR1WKP (rw) */
    Ifx_UReg_32Bit PINAWKP:1;         /**< \brief [24:24] PINAWKP Interrupt enable - PINAWKP (rw) */
    Ifx_UReg_32Bit PINBWKP:1;         /**< \brief [25:25] PINBWKP Interrupt enable - PINBWKP (rw) */
    Ifx_UReg_32Bit SCRINT:1;          /**< \brief [26:26] SCRINT Interrupt enable - SCRINT (rw) */
    Ifx_UReg_32Bit SCRRST:1;          /**< \brief [27:27] SCRRST Interrupt enable - SCRRST (rw) */
    Ifx_UReg_32Bit SCRECC:1;          /**< \brief [28:28] SCRECC Interrupt enable - SCRECC (rw) */
    Ifx_UReg_32Bit SCRWDT:1;          /**< \brief [29:29] SCRWDT Interrupt enable - SCRWDT (rw) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_PMS_EVR_PMSIEN_Bits;

/** \brief EVR Reset Control Register */
typedef struct _Ifx_PMS_EVR_RSTCON_Bits
{
    Ifx_UReg_32Bit RSTCTRIM:8;        /**< \brief [7:0] VDD Supply Reset Trim Value - RSTCTRIM (rw) */
    Ifx_UReg_32Bit RST33TRIM:8;       /**< \brief [15:8] VDDP3 Supply Reset Trim Value - RST33TRIM (rw) */
    Ifx_UReg_32Bit RSTSWDTRIM:8;      /**< \brief [23:16] VEXT Supply Reset Trim Value - RSTSWDTRIM (rw) */
    Ifx_UReg_32Bit RSTCOFF:1;         /**< \brief [24:24] VDD Reset Enable - RSTCOFF (rw) */
    Ifx_UReg_32Bit BPRSTCOFF:1;       /**< \brief [25:25] Bit Protection RSTCOFF - BPRSTCOFF (None) */
    Ifx_UReg_32Bit RST33OFF:1;        /**< \brief [26:26] VDDP3 Reset Enable - RST33OFF (rw) */
    Ifx_UReg_32Bit BPRST33OFF:1;      /**< \brief [27:27] Bit Protection RST33OFF - BPRST33OFF (None) */
    Ifx_UReg_32Bit RSTSWDOFF:1;       /**< \brief [28:28] VEXT Reset Enable - RSTSWDOFF (rw) */
    Ifx_UReg_32Bit BPRSTSWDOFF:1;     /**< \brief [29:29] Bit Protection RSTSWDOFF - BPRSTSWDOFF (None) */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVR_RSTCON_Bits;


/** \brief EVR Reset Status Register */
typedef struct _Ifx_PMS_EVR_RSTSTAT_Bits
{
    Ifx_UReg_32Bit RSTC:8;            /**< \brief [7:0] VDD Supply Reset Value Status - RSTC (None) */
    Ifx_UReg_32Bit RST33:8;           /**< \brief [15:8] VDDP3 Supply Reset Value Status - RST33 (None) */
    Ifx_UReg_32Bit RSTSWD:8;          /**< \brief [23:16] VEXT Supply Reset Value Status - RSTSWD (None) */
    Ifx_UReg_32Bit RSTCOFF:1;         /**< \brief [24:24] EVRC Reset Enable Status - RSTCOFF (None) */
    Ifx_UReg_32Bit RSTCHYSEN:1;       /**< \brief [25:25] EVRC Reset Hysteresis Enable Status - RSTCHYSEN (None) */
    Ifx_UReg_32Bit RST33OFF:1;        /**< \brief [26:26] EVR33 Reset Enable Status - RST33OFF (None) */
    Ifx_UReg_32Bit RST33HYSEN:1;      /**< \brief [27:27] EVR33 Reset Hysteresis Enable Status - RST33HYSEN (None) */
    Ifx_UReg_32Bit RSTSWDOFF:1;       /**< \brief [28:28] EVR SWD Reset Enable - RSTSWDOFF (None) */
    Ifx_UReg_32Bit RSTSWDHYSEN:1;     /**< \brief [29:29] EVR SWD Reset Hysteresis Enable Status - RSTSWDHYSEN (None) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_PMS_EVR_RSTSTAT_Bits;

/** \brief EVR Status Register */
typedef struct _Ifx_PMS_EVR_STAT_Bits
{
    Ifx_UReg_32Bit EVRC:1;            /**< \brief [0:0] EVRC status - EVRC (None) */
    Ifx_UReg_32Bit OVC:1;             /**< \brief [1:1] VDD Over-voltage event flag - OVC (rh) */
    Ifx_UReg_32Bit EVR33:1;           /**< \brief [2:2] EVR33 status - EVR33 (None) */
    Ifx_UReg_32Bit OV33:1;            /**< \brief [3:3] VDDP3 Over-voltage event flag - OV33 (rh) */
    Ifx_UReg_32Bit OVSWD:1;           /**< \brief [4:4] VEXT Over-voltage event flag - OVSWD (rh) */
    Ifx_UReg_32Bit UVC:1;             /**< \brief [5:5] VDD Under-voltage event flag - UVC (rh) */
    Ifx_UReg_32Bit UV33:1;            /**< \brief [6:6] VDDP3 Under-voltage event flag - UV33 (rh) */
    Ifx_UReg_32Bit UVSWD:1;           /**< \brief [7:7] VEXT Under-voltage event flag - UVSWD (rh) */
    Ifx_UReg_32Bit SYNCLCK:1;         /**< \brief [8:8] EVRC Synchronization Input Locked status(sd_sync_in_locked_o) - SYNCLCK (rh) */
    Ifx_UReg_32Bit EVR33VOK:1;        /**< \brief [9:9] EVR33 Regulator Voltage OK status - EVR33VOK (None) */
    Ifx_UReg_32Bit reserved_10:3;     /**< \brief [12:10] \internal Reserved */
    Ifx_UReg_32Bit RSTC:1;            /**< \brief [13:13] EVRC Reset Trigger - RSTC (None) */
    Ifx_UReg_32Bit RST33:1;           /**< \brief [14:14] EVR33 Reset Trigger - RST33 (None) */
    Ifx_UReg_32Bit RSTSWD:1;          /**< \brief [15:15] EVR SWD Reset Trigger - RSTSWD (None) */
    Ifx_UReg_32Bit EVRCSHLV:1;        /**< \brief [16:16] Short to ground - EVRCSHLV (rh) */
    Ifx_UReg_32Bit EVRCSHHV:1;        /**< \brief [17:17] Short to supply - EVRCSHHV (rh) */
    Ifx_UReg_32Bit EVR33SHLV:1;       /**< \brief [18:18] Short to ground - EVR33SHLV (rh) */
    Ifx_UReg_32Bit EVR33SHHV:1;       /**< \brief [19:19] Short to supply - EVR33SHHV (rh) */
    Ifx_UReg_32Bit SWDLVL:1;          /**< \brief [20:20] VEXT External Supply Level Status - SWDLVL (None) */
    Ifx_UReg_32Bit SDVOK:1;           /**< \brief [21:21] EVRC Regulator Voltage OK status - SDVOK (rh) */
    Ifx_UReg_32Bit EVRCMOD:2;         /**< \brief [23:22] EVRC Mode - EVRCMOD (rh) */
    Ifx_UReg_32Bit OVPRE:1;           /**< \brief [24:24] Pre Regulator VDDPD Over-voltage event flag - OVPRE (rh) */
    Ifx_UReg_32Bit OVSB:1;            /**< \brief [25:25] Standby Supply or VEVRSB Over-voltage event flag - OVSB (rh) */
    Ifx_UReg_32Bit OVDDM:1;           /**< \brief [26:26] ADC VDDM Supply Over-voltage event flag - OVDDM (rh) */
    Ifx_UReg_32Bit UVPRE:1;           /**< \brief [27:27] Pre Regulator VDDPD Under-voltage event flag - UVPRE (rh) */
    Ifx_UReg_32Bit UVSB:1;            /**< \brief [28:28] Standby Supply or VEVRSB Under-voltage event flag - UVSB (rh) */
    Ifx_UReg_32Bit UVDDM:1;           /**< \brief [29:29] ADC VDDM Supply Under-voltage event flag - UVDDM (rh) */
    Ifx_UReg_32Bit reserved_30:2;     /**< \brief [31:30] \internal Reserved */
} Ifx_PMS_EVR_STAT_Bits;

/** \brief EVR Trim Control Register */
typedef struct _Ifx_PMS_EVR_TRIM_Bits
{
    Ifx_UReg_32Bit EVR33VOUTSEL:8;    /**< \brief [7:0] EVR33 Regulator Output Voltage Target Value - EVR33VOUTSEL (rw) */
    Ifx_UReg_32Bit SDVOUTSEL:8;       /**< \brief [15:8] EVRC Regulator Output Voltage Target Value - SDVOUTSEL (rw) */
    Ifx_UReg_32Bit EVR33VOUTTRIM:6;    /**< \brief [21:16] EVR33 Regulator Output Voltage Trim Value - EVR33VOUTTRIM (rw) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit SDVOUTTRIM:5;      /**< \brief [28:24] EVRC Regulator Output Voltage Trim Value(vtrim_trim_i) - SDVOUTTRIM (rw) */
    Ifx_UReg_32Bit reserved_29:1;     /**< \brief [29:29] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVR_TRIM_Bits;

/** \brief EVR Trim Status Register */
typedef struct _Ifx_PMS_EVR_TRIMSTAT_Bits
{
    Ifx_UReg_32Bit EVR33VOUTSEL:8;    /**< \brief [7:0] EVR33 Regulator Output Voltage Target Value - EVR33VOUTSEL (None) */
    Ifx_UReg_32Bit SDVOUTSEL:8;       /**< \brief [15:8] EVRC Regulator Output Voltage Target Value - SDVOUTSEL (None) */
    Ifx_UReg_32Bit EVR33VOUTTRIM:6;    /**< \brief [21:16] EVR33 Regulator Output Voltage Trim Value - EVR33VOUTTRIM (None) */
    Ifx_UReg_32Bit reserved_22:2;     /**< \brief [23:22] \internal Reserved */
    Ifx_UReg_32Bit SDVOUTTRIM:5;      /**< \brief [28:24] EVRC Regulator Output Voltage Trim Value(vtrim_trim_o) - SDVOUTTRIM (None) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_PMS_EVR_TRIMSTAT_Bits;

/** \brief EVR Secondary Under-voltage Monitor Register */
typedef struct _Ifx_PMS_EVR_UVMON_Bits
{
    Ifx_UReg_32Bit EVRCUVVAL:8;       /**< \brief [7:0] VDD Supply Secondary Monitor Under-voltage threshold - EVRCUVVAL (rw) */
    Ifx_UReg_32Bit EVR33UVVAL:8;      /**< \brief [15:8] VDDP3 Supply Secondary Monitor Under-voltage threshold - EVR33UVVAL (rw) */
    Ifx_UReg_32Bit SWDUVVAL:8;        /**< \brief [23:16] VEXT Supply Secondary Monitor Under-voltage threshold - SWDUVVAL (rw) */
    Ifx_UReg_32Bit reserved_24:6;     /**< \brief [29:24] \internal Reserved */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVR_UVMON_Bits;

/** \brief EVR Secondary Under-voltage Monitor Register 2 */
typedef struct _Ifx_PMS_EVR_UVMON2_Bits
{
    Ifx_UReg_32Bit PREUVVAL:8;        /**< \brief [7:0] VDDPD Supply Secondary Monitor Under-voltage threshold - PREUVVAL (rw) */
    Ifx_UReg_32Bit VDDMUVVAL:8;       /**< \brief [15:8] VDDM Supply Secondary Monitor Under-voltage threshold - VDDMUVVAL (rw) */
    Ifx_UReg_32Bit SBUVVAL:8;         /**< \brief [23:16] VEVRSB Supply Secondary Monitor Under-voltage threshold - SBUVVAL (rw) */
    Ifx_UReg_32Bit VDDMLVLSEL:6;      /**< \brief [29:24] VDDM Level Select - VDDMLVLSEL (rw) */
    Ifx_UReg_32Bit SLCK:1;            /**< \brief [30:30] HSM Security Lock - SLCK (None) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_EVR_UVMON2_Bits;

/** \brief Identification Register */
typedef struct _Ifx_PMS_ID_Bits
{
    Ifx_UReg_32Bit MODREV:8;          /**< \brief [7:0] Module Revision Number - MODREV (None) */
    Ifx_UReg_32Bit MODTYPE:8;         /**< \brief [15:8] Module Type - MODTYPE (None) */
    Ifx_UReg_32Bit MODNUMBER:16;      /**< \brief [31:16] Module Number - MODNUMBER (None) */
} Ifx_PMS_ID_Bits;

/** \brief OCDS Trigger Set Control 0 Register */
typedef struct _Ifx_PMS_OTSC0_Bits
{
    Ifx_UReg_32Bit B0LAM:4;           /**< \brief [3:0] OTGB0 TS16_ADCMON Low Byte - B0LAM (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit B0HAM:4;           /**< \brief [11:8] OTGB0 TS16_ADCMON High Byte - B0HAM (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit B1LAM:4;           /**< \brief [19:16] OTGB1 TS16_ADCMON Low Byte - B1LAM (rw) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit B1HAM:4;           /**< \brief [27:24] OTGB1 TS16_ADCMON High Byte - B1HAM (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_PMS_OTSC0_Bits;

/** \brief OCDS Trigger Set Control 1 Register */
typedef struct _Ifx_PMS_OTSC1_Bits
{
    Ifx_UReg_32Bit B0EC:4;            /**< \brief [3:0] OTGB0 TS16_EVRCON - B0EC (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit B1EC:4;            /**< \brief [11:8] OTGB1 TS16_EVRCON - B1EC (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit DMONAD:8;          /**< \brief [23:16] OTGB0 TS16_EVRCON DMONAD - DMONAD (rw) */
    Ifx_UReg_32Bit SMCDBG:8;          /**< \brief [31:24] OTGB0 TS16_EVRCON SMCDBG - SMCDBG (rw) */
} Ifx_PMS_OTSC1_Bits;

/** \brief OCDS Trigger Set Select Register */
typedef struct _Ifx_PMS_OTSS_Bits
{
    Ifx_UReg_32Bit OTGB0:4;           /**< \brief [3:0] Trigger Set for OTGB0 - OTGB0 (rw) */
    Ifx_UReg_32Bit reserved_4:4;      /**< \brief [7:4] \internal Reserved */
    Ifx_UReg_32Bit OTGB1:4;           /**< \brief [11:8] Trigger Set for OTGB1 - OTGB1 (rw) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_PMS_OTSS_Bits;

/** \brief Standby and Wake-up Control Register 0 */
typedef struct _Ifx_PMS_PMSW_CR0_Bits
{
    Ifx_UReg_32Bit reserved_0:4;      /**< \brief [3:0] \internal Reserved */
    Ifx_UReg_32Bit ESR0DFEN:1;        /**< \brief [4:4] ESR0 Digital Filter Enable - ESR0DFEN (rw) */
    Ifx_UReg_32Bit ESR0EDCON:2;       /**< \brief [6:5] ESR0 Edge Detection Control - ESR0EDCON (rw) */
    Ifx_UReg_32Bit ESR1DFEN:1;        /**< \brief [7:7] ESR1 Digital Filter Enable - ESR1DFEN (rw) */
    Ifx_UReg_32Bit ESR1EDCON:2;       /**< \brief [9:8] ESR1 Edge Detection Control - ESR1EDCON (rw) */
    Ifx_UReg_32Bit PINADFEN:1;        /**< \brief [10:10] PINA Digital Filter Enable - PINADFEN (rw) */
    Ifx_UReg_32Bit PINAEDCON:2;       /**< \brief [12:11] PINA Edge Detection Control - PINAEDCON (rw) */
    Ifx_UReg_32Bit PINBDFEN:1;        /**< \brief [13:13] PINB Digital Filter Enable - PINBDFEN (rw) */
    Ifx_UReg_32Bit PINBEDCON:2;       /**< \brief [15:14] PINB Edge Detection Control - PINBEDCON (rw) */
    Ifx_UReg_32Bit STBYRAMSEL:3;      /**< \brief [18:16] Standby RAM supply in Standby Mode - STBYRAMSEL (rw) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit BLNKFIL:4;         /**< \brief [23:20] Blanking Filter delay for Wake-up - BLNKFIL (rw) */
    Ifx_UReg_32Bit ESR0WKEN:1;        /**< \brief [24:24] ESR0 Wake-up enable from Standby - ESR0WKEN (rw) */
    Ifx_UReg_32Bit ESR1WKEN:1;        /**< \brief [25:25] ESR1 Wake-up enable from Standby - ESR1WKEN (rw) */
    Ifx_UReg_32Bit PINAWKEN:1;        /**< \brief [26:26] Pin A Wake-up enable from Standby - PINAWKEN (rw) */
    Ifx_UReg_32Bit PINBWKEN:1;        /**< \brief [27:27] Pin B Wake-up enable from Standby - PINBWKEN (rw) */
    Ifx_UReg_32Bit PWRWKEN:1;         /**< \brief [28:28] Standby Entry / Wake-up Enable on VEXT Supply ramp-down/up - PWRWKEN (rw) */
    Ifx_UReg_32Bit SCRWKEN:1;         /**< \brief [29:29] Standby Controller Wake-up enable from Standby - SCRWKEN (rw) */
    Ifx_UReg_32Bit PORSTWKEN:1;       /**< \brief [30:30] PORST pin Wake-up enable from Standby - PORSTWKEN (rw) */
    Ifx_UReg_32Bit WUTWKEN:1;         /**< \brief [31:31] WUT Wake-up enable from Standby - WUTWKEN (rw) */
} Ifx_PMS_PMSW_CR0_Bits;

/** \brief Standby and Wake-up Control Register 2 */
typedef struct _Ifx_PMS_PMSW_CR2_Bits
{
    Ifx_UReg_32Bit SCRINT:8;          /**< \brief [7:0] Data exchange from Standby Controller to PMS main domain. - SCRINT (rh) */
    Ifx_UReg_32Bit reserved_8:1;      /**< \brief [8:8] \internal Reserved */
    Ifx_UReg_32Bit SCRECC:1;          /**< \brief [9:9] SCR RAM ECC error / reset flag - SCRECC (None) */
    Ifx_UReg_32Bit SCRWDT:1;          /**< \brief [10:10] SCR Watchdog Timer error / reset flag - SCRWDT (None) */
    Ifx_UReg_32Bit SCRRST:1;          /**< \brief [11:11] SCR Software reset flag - SCRRST (None) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit TCINT:8;           /**< \brief [23:16] Data exchange from PMS main domain to Standby Controller. - TCINT (rw) */
    Ifx_UReg_32Bit TCINTREQ:1;        /**< \brief [24:24] SW Interrupt request from PMS to Standby Controller. - TCINTREQ (rwh) */
    Ifx_UReg_32Bit SMURST:1;          /**< \brief [25:25] SMU Reset indication flag - SMURST (None) */
    Ifx_UReg_32Bit RST:1;             /**< \brief [26:26] Application or System Reset indication flag - RST (None) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_PMS_PMSW_CR2_Bits;

/** \brief Standby and Wake-up Control Register 3 */
typedef struct _Ifx_PMS_PMSW_CR3_Bits
{
    Ifx_UReg_32Bit WUTREL:24;         /**< \brief [23:0] WUT reload value. - WUTREL (rw) */
    Ifx_UReg_32Bit reserved_24:3;     /**< \brief [26:24] \internal Reserved */
    Ifx_UReg_32Bit WUTEN:1;           /**< \brief [27:27] WUT enable - WUTEN (rw) */
    Ifx_UReg_32Bit reserved_28:1;     /**< \brief [28:28] \internal Reserved */
    Ifx_UReg_32Bit WUTDIV:1;          /**< \brief [29:29] WUT clock divider - WUTDIV (rw) */
    Ifx_UReg_32Bit WUTMODE:1;         /**< \brief [30:30] WUT mode selection - WUTMODE (rw) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_PMS_PMSW_CR3_Bits;

/** \brief Standby and Wake-up Control Register 4 */
typedef struct _Ifx_PMS_PMSW_CR4_Bits
{
    Ifx_UReg_32Bit BPSCRSTREQ:1;      /**< \brief [0:0] Standby Controller Reset request enable - SCRSTEN (None) */
    Ifx_UReg_32Bit SCRSTREQ:1;        /**< \brief [1:1] Standby Controller Reset request - SCRSTREQ (rwh) */
    Ifx_UReg_32Bit SCRFPISPI:1;       /**< \brief [2:2] Standby Controller Interface select - SCRFPISPI (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit BPPORSTREQ:1;      /**< \brief [4:4] Bit Protection for PORSTREQ - PORSTEN (None) */
    Ifx_UReg_32Bit PORSTREQ:1;        /**< \brief [5:5] SCR Reset behavior on warm PORST in Normal RUN / SLEEP mode - PORSTREQ (rw) */
    Ifx_UReg_32Bit SCRCLKSEL:1;       /**< \brief [6:6] Default Clock selection on Standby Mode Entry - SCRCLKSEL (rw) */
    Ifx_UReg_32Bit reserved_7:9;      /**< \brief [15:7] \internal Reserved */
    Ifx_UReg_32Bit SCRCFG:8;          /**< \brief [23:16] Hardware configuration of the 8 bit SCR controller. - SCRCFG (rw) */
    Ifx_UReg_32Bit BPSCREN:1;         /**< \brief [24:24] Standby Controller Reset request enable - BPSCREN (None) */
    Ifx_UReg_32Bit SCREN:1;           /**< \brief [25:25] Standby Controller Enable request - SCREN (rw) */
    Ifx_UReg_32Bit reserved_26:6;     /**< \brief [31:26] \internal Reserved */
} Ifx_PMS_PMSW_CR4_Bits;

/** \brief Standby and Wake-up Control Register 5 */
typedef struct _Ifx_PMS_PMSW_CR5_Bits
{
    Ifx_UReg_32Bit BPTRISTREQ:1;      /**< \brief [0:0] Bit protection for Tristate request bit (TRISTREQ) - BPTRISTREQ (None) */
    Ifx_UReg_32Bit TRISTREQ:1;        /**< \brief [1:1] Tristate enable - TRISTREQ (rwh) */
    Ifx_UReg_32Bit ESR0TRIST:1;       /**< \brief [2:2] ESR0 Tristate enable - ESR0TRIST (rw) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit PORSTDF:1;         /**< \brief [4:4] PORST Digital Filter enable - PORSTDF (rw) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit DCDCSYNCO:1;       /**< \brief [6:6] DC-DC Synchronisation Output Enable - DCDCSYNCO (rw) */
    Ifx_UReg_32Bit reserved_7:25;     /**< \brief [31:7] \internal Reserved */
} Ifx_PMS_PMSW_CR5_Bits;

/** \brief Standby and Wake-up Status Register */
typedef struct _Ifx_PMS_PMSW_STAT_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit HWCFGEVR:2;        /**< \brief [2:1] EVR Hardware Configuration status - HWCFGEVR (None) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit HWCFG4:1;          /**< \brief [4:4] Hardware Configuration Pin 4 status - HWCFG4 (None) */
    Ifx_UReg_32Bit HWCFG5:1;          /**< \brief [5:5] Hardware Configuration Pin 5 status - HWCFG5 (None) */
    Ifx_UReg_32Bit TRIST:1;           /**< \brief [6:6] Pad Tristate / Pull-up status - TRIST (None) */
    Ifx_UReg_32Bit TESTMODE:1;        /**< \brief [7:7] TESTMODE Pin status - TESTMODE (None) */
    Ifx_UReg_32Bit ESR0TRIST:1;       /**< \brief [8:8] ESR0 pin status during Standby - ESR0TRIST (None) */
    Ifx_UReg_32Bit reserved_9:2;      /**< \brief [10:9] \internal Reserved */
    Ifx_UReg_32Bit PORSTDF:1;         /**< \brief [11:11] PORST Digital Filter status - PORSTDF (None) */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit SCR:1;             /**< \brief [16:16] Standby Controller status - SCR (None) */
    Ifx_UReg_32Bit SCRST:1;           /**< \brief [17:17] Standby Controller Reset Indication flag - SCRST (None) */
    Ifx_UReg_32Bit SCRCLK:1;          /**< \brief [18:18] Current Clock configuration for SCR before Standby Mode Entry - SCRCLK (None) */
    Ifx_UReg_32Bit PORSTREQ:1;        /**< \brief [19:19] Standby Controller Reset on warm PORST - PORSTREQ (None) */
    Ifx_UReg_32Bit reserved_20:4;     /**< \brief [23:20] \internal Reserved */
    Ifx_UReg_32Bit WUTEN:1;           /**< \brief [24:24] WUT Enable status - WUTEN (None) */
    Ifx_UReg_32Bit WUTRUN:1;          /**< \brief [25:25] WUT Run status - WUTRUN (None) */
    Ifx_UReg_32Bit WUTMODE:1;         /**< \brief [26:26] WUT Mode status - WUTMODE (None) */
    Ifx_UReg_32Bit reserved_27:5;     /**< \brief [31:27] \internal Reserved */
} Ifx_PMS_PMSW_STAT_Bits;

/** \brief Standby and Wake-up Status Register 2 */
typedef struct _Ifx_PMS_PMSW_STAT2_Bits
{
    Ifx_UReg_32Bit ESR0WKP:1;         /**< \brief [0:0] ESR0 Wake-up flag - ESR0WKP (None) */
    Ifx_UReg_32Bit ESR1WKP:1;         /**< \brief [1:1] ESR1 Wake-up flag - ESR1WKP (None) */
    Ifx_UReg_32Bit PINAWKP:1;         /**< \brief [2:2] Pin Wake-up flag - PINAWKP (None) */
    Ifx_UReg_32Bit PINBWKP:1;         /**< \brief [3:3] Pin B Wake-up flag - PINBWKP (None) */
    Ifx_UReg_32Bit PWRWKP:1;          /**< \brief [4:4] Wake-up event on VEXT Supply ramp-up - PWRWKP (None) */
    Ifx_UReg_32Bit SCRWKP:1;          /**< \brief [5:5] SCR Wake-up flag - SCRWKP (None) */
    Ifx_UReg_32Bit PORSTWKP:1;        /**< \brief [6:6] PORST Wake-up flag - PORSTWKP (None) */
    Ifx_UReg_32Bit WUTWKP:1;          /**< \brief [7:7] WUT Wake-up flag - WUTWKP (None) */
    Ifx_UReg_32Bit ESR0OVRUN:1;       /**< \brief [8:8] ESR0 Overrun status flag - ESR0OVRUN (None) */
    Ifx_UReg_32Bit ESR1OVRUN:1;       /**< \brief [9:9] ESR1 Overrun status flag - ESR1OVRUN (None) */
    Ifx_UReg_32Bit PINAOVRUN:1;       /**< \brief [10:10] Pin A Overrun status flag - PINAOVRUN (None) */
    Ifx_UReg_32Bit PINBOVRUN:1;       /**< \brief [11:11] Pin B Overrun status flag - PINBOVRUN (None) */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit SCROVRUN:1;        /**< \brief [13:13] SCR Overrun status flag - SCROVRUN (None) */
    Ifx_UReg_32Bit PORSTOVRUN:1;      /**< \brief [14:14] PORST Overrun status flag - PORSTOVRUN (None) */
    Ifx_UReg_32Bit WUTOVRUN:1;        /**< \brief [15:15] WUT Overrun status flag - WUTOVRUN (None) */
    Ifx_UReg_32Bit STBYRAM:3;         /**< \brief [18:16] Standby RAM Supply status - STBYRAM (None) */
    Ifx_UReg_32Bit reserved_19:1;     /**< \brief [19:19] \internal Reserved */
    Ifx_UReg_32Bit BLNKFIL:4;         /**< \brief [23:20] Blanking Filter Delay for VEXT Supply Wake-up - BLNKFIL (None) */
    Ifx_UReg_32Bit ESR0WKEN:1;        /**< \brief [24:24] ESR0 Wake-up enable status - ESR0WKEN (None) */
    Ifx_UReg_32Bit ESR1WKEN:1;        /**< \brief [25:25] ESR1 Wake-up enable status - ESR1WKEN (None) */
    Ifx_UReg_32Bit PINAWKEN:1;        /**< \brief [26:26] Pin A Wake-up enable status - PINAWKEN (None) */
    Ifx_UReg_32Bit PINBWKEN:1;        /**< \brief [27:27] Pin B Wake-up enable status - PINBWKEN (None) */
    Ifx_UReg_32Bit PWRWKEN:1;         /**< \brief [28:28] Standby Entry / Wake-up Enable status on VEXT Supply ramp-down/up - PWRWKEN (None) */
    Ifx_UReg_32Bit SCRWKEN:1;         /**< \brief [29:29] Standby Controller Wake-up Enable status - SCRWKEN (None) */
    Ifx_UReg_32Bit PORSTWKEN:1;       /**< \brief [30:30] PORST pin Wake-up enable status from Standby - PORSTWKEN (None) */
    Ifx_UReg_32Bit WUTWKEN:1;         /**< \brief [31:31] WUT Wake-up enable status - WUTWKEN (None) */
} Ifx_PMS_PMSW_STAT2_Bits;

/** \brief Standby and Wake-up Status Clear Register */
typedef struct _Ifx_PMS_PMSW_STATCLR_Bits
{
    Ifx_UReg_32Bit ESR0WKPCLR:1;      /**< \brief [0:0] ESR0 Wake-up indication flag clear - ESR0WKPCLR (None) */
    Ifx_UReg_32Bit ESR1WKPCLR:1;      /**< \brief [1:1] ESR1 Wake-up indication flag clear - ESR1WKPCLR (None) */
    Ifx_UReg_32Bit PINAWKPCLR:1;      /**< \brief [2:2] PINA Wake-up indication flag clear - PINAWKPCLR (None) */
    Ifx_UReg_32Bit PINBWKPCLR:1;      /**< \brief [3:3] PINB Wake-up indication flag clear - PINBWKPCLR (None) */
    Ifx_UReg_32Bit PWRWKPCLR:1;       /**< \brief [4:4] PWRWKP Wake-up indication flag clear - PWRWKPCLR (None) */
    Ifx_UReg_32Bit SCRWKPCLR:1;       /**< \brief [5:5] SCR Wake-up indication flag clear - SCRWKPCLR (None) */
    Ifx_UReg_32Bit PORSTWKPCLR:1;     /**< \brief [6:6] PORST Wake-up indication flag clear - PORSTWKPCLR (None) */
    Ifx_UReg_32Bit WUTWKPCLR:1;       /**< \brief [7:7] WUT Wake-up indication flag clear - WUTWKPCLR (None) */
    Ifx_UReg_32Bit ESR0OVRUNCLR:1;    /**< \brief [8:8] ESR0 Overrun status indication flag clear - ESR0OVRUNCLR (None) */
    Ifx_UReg_32Bit ESR1OVRUNCLR:1;    /**< \brief [9:9] ESR1 Overrun status indication flag clear - ESR1OVRUNCLR (None) */
    Ifx_UReg_32Bit PINAOVRUNCLR:1;    /**< \brief [10:10] PINA Overrun status indication flag clear - PINAOVRUNCLR (None) */
    Ifx_UReg_32Bit PINBOVRUNCLR:1;    /**< \brief [11:11] PINB Overrun status indication flag clear - PINBOVRUNCLR (None) */
    Ifx_UReg_32Bit reserved_12:1;     /**< \brief [12:12] \internal Reserved */
    Ifx_UReg_32Bit SCROVRUNCLR:1;     /**< \brief [13:13] SCR Overrun status indication flag clear - SCROVRUNCLR (None) */
    Ifx_UReg_32Bit PORSTOVRUNCLR:1;    /**< \brief [14:14] PORST Overrun status indication flag clear - PORSTOVRUNCLR (None) */
    Ifx_UReg_32Bit WUTOVRUNCLR:1;     /**< \brief [15:15] WUT Overrun status indication flag clear - WUTOVRUNCLR (None) */
    Ifx_UReg_32Bit SCRSTCLR:1;        /**< \brief [16:16] Standby controller SCRST indication flag clear - SCRSTCLR (None) */
    Ifx_UReg_32Bit reserved_17:15;    /**< \brief [31:17] \internal Reserved */
} Ifx_PMS_PMSW_STATCLR_Bits;

/** \brief Standby WUT Counter Register */
typedef struct _Ifx_PMS_PMSW_UTCNT_Bits
{
    Ifx_UReg_32Bit WUTCNT:24;         /**< \brief [23:0] WUT counter value. - WUTCNT (None) */
    Ifx_UReg_32Bit reserved_24:8;     /**< \brief [31:24] \internal Reserved */
} Ifx_PMS_PMSW_UTCNT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_pms_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_ACCEN0_Bits B;            /**< \brief Bitfield access */
} Ifx_PMS_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_ACCEN1_Bits B;            /**< \brief Bitfield access */
} Ifx_PMS_ACCEN1;

/** \brief Die Temperature Sensor Limit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_DTS_LIM_Bits B;           /**< \brief Bitfield access */
} Ifx_PMS_DTS_LIM;

/** \brief Die Temperature Sensor Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_DTS_STAT_Bits B;          /**< \brief Bitfield access */
} Ifx_PMS_DTS_STAT;

/** \brief EVR Bandgap and Oscillator Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRBGOCTRL2_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVRBGOCTRL2;

/** \brief EVR Oscillator Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVROSCCTRL2_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVROSCCTRL2;

/** \brief EVRC SD Coefficient Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF0_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF0;

/** \brief EVRC SD Coefficient Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF1_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF1;

/** \brief EVRC SD Coefficient Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF2_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF2;

/** \brief EVRC SD Coefficient Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF3_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF3;

/** \brief EVRC SD Coefficient Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF4_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF4;

/** \brief EVRC SD Coefficient Register 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF5_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF5;

/** \brief EVRC SD Coefficient Register 6   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF6_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF6;

/** \brief EVRC SD Coefficient Register 7   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF7_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF7;

/** \brief EVRC SD Coefficient Register 8   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF8_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF8;

/** \brief EVRC SD Coefficient Register 9   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCOEFF_COEFF9_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCOEFF_COEFF9;

/** \brief EVRC SD Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL0_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL0;

/** \brief EVRC SD Control Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL1_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL1;

/** \brief EVRC SD Control Register 10   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL10_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL10;

/** \brief EVRC SD Control Register 11   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL11_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL11;

/** \brief EVRC SD Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL2_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL2;

/** \brief EVRC SD Control Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL3_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL3;

/** \brief EVRC SD Control Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL4_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL4;

/** \brief EVRC SD Control Register 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL5_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL5;

/** \brief EVRC SD Control Register 6   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL6_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL6;

/** \brief EVRC SD Control Register 7   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL7_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL7;

/** \brief EVRC SD Control Register 8   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL8_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL8;

/** \brief EVRC SD Control Register 9   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDCTRL_CTRL9_Bits B;    /**< \brief Bitfield access */
} Ifx_PMS_EVRSDCTRL_CTRL9;

/** \brief EVR SD Status Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVRSDSTAT0_Bits B;        /**< \brief Bitfield access */
} Ifx_PMS_EVRSDSTAT0;

/** \brief EVR Primary ADC Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_ADCSTAT_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVR_ADCSTAT;

/** \brief EVR Analog Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_ANACTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVR_ANACTRL;

/** \brief EVR Bandgap and Oscillator Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_BGOCTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVR_BGOCTRL;

/** \brief EVR Primary HSM Over-voltage Monitor Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_HSMOVMON_Bits B;      /**< \brief Bitfield access */
} Ifx_PMS_EVR_HSMOVMON;

/** \brief EVR Primary HSM Under-voltage Monitor Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_HSMUVMON_Bits B;      /**< \brief Bitfield access */
} Ifx_PMS_EVR_HSMUVMON;

/** \brief EVR Secondary Monitor Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_MONCTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVR_MONCTRL;

/** \brief EVR Secondary Monitor Filter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_MONFILT_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVR_MONFILT;

/** \brief EVR Secondary ADC Status Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_MONSTAT1_Bits B;      /**< \brief Bitfield access */
} Ifx_PMS_EVR_MONSTAT1;

/** \brief EVR Secondary ADC Status Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_MONSTAT2_Bits B;      /**< \brief Bitfield access */
} Ifx_PMS_EVR_MONSTAT2;

/** \brief EVR Oscillator Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_OSCCTRL_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVR_OSCCTRL;

/** \brief EVR Secondary Over-voltage Monitor Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_OVMON_Bits B;         /**< \brief Bitfield access */
} Ifx_PMS_EVR_OVMON;

/** \brief EVR Secondary Over-voltage Monitor Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_OVMON2_Bits B;        /**< \brief Bitfield access */
} Ifx_PMS_EVR_OVMON2;

/** \brief PMS Interrupt Enable Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_PMSIEN_Bits B;        /**< \brief Bitfield access */
} Ifx_PMS_EVR_PMSIEN;

/** \brief EVR Reset Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_RSTCON_Bits B;        /**< \brief Bitfield access */
} Ifx_PMS_EVR_RSTCON;

/** \brief EVR Reset Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_RSTSTAT_Bits B;       /**< \brief Bitfield access */
} Ifx_PMS_EVR_RSTSTAT;

/** \brief EVR Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_STAT_Bits B;          /**< \brief Bitfield access */
} Ifx_PMS_EVR_STAT;

/** \brief EVR Trim Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_TRIM_Bits B;          /**< \brief Bitfield access */
} Ifx_PMS_EVR_TRIM;

/** \brief EVR Trim Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_TRIMSTAT_Bits B;      /**< \brief Bitfield access */
} Ifx_PMS_EVR_TRIMSTAT;

/** \brief EVR Secondary Under-voltage Monitor Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_UVMON_Bits B;         /**< \brief Bitfield access */
} Ifx_PMS_EVR_UVMON;

/** \brief EVR Secondary Under-voltage Monitor Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_EVR_UVMON2_Bits B;        /**< \brief Bitfield access */
} Ifx_PMS_EVR_UVMON2;

/** \brief Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_ID_Bits B;                /**< \brief Bitfield access */
} Ifx_PMS_ID;

/** \brief OCDS Trigger Set Control 0 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_OTSC0_Bits B;             /**< \brief Bitfield access */
} Ifx_PMS_OTSC0;

/** \brief OCDS Trigger Set Control 1 Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_OTSC1_Bits B;             /**< \brief Bitfield access */
} Ifx_PMS_OTSC1;

/** \brief OCDS Trigger Set Select Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_OTSS_Bits B;              /**< \brief Bitfield access */
} Ifx_PMS_OTSS;

/** \brief Standby and Wake-up Control Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_CR0_Bits B;          /**< \brief Bitfield access */
} Ifx_PMS_PMSW_CR0;

/** \brief Standby and Wake-up Control Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_CR2_Bits B;          /**< \brief Bitfield access */
} Ifx_PMS_PMSW_CR2;

/** \brief Standby and Wake-up Control Register 3   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_CR3_Bits B;          /**< \brief Bitfield access */
} Ifx_PMS_PMSW_CR3;

/** \brief Standby and Wake-up Control Register 4   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_CR4_Bits B;          /**< \brief Bitfield access */
} Ifx_PMS_PMSW_CR4;

/** \brief Standby and Wake-up Control Register 5   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_CR5_Bits B;          /**< \brief Bitfield access */
} Ifx_PMS_PMSW_CR5;

/** \brief Standby and Wake-up Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_STAT_Bits B;         /**< \brief Bitfield access */
} Ifx_PMS_PMSW_STAT;

/** \brief Standby and Wake-up Status Register 2   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_STAT2_Bits B;        /**< \brief Bitfield access */
} Ifx_PMS_PMSW_STAT2;

/** \brief Standby and Wake-up Status Clear Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_STATCLR_Bits B;      /**< \brief Bitfield access */
} Ifx_PMS_PMSW_STATCLR;

/** \brief Standby WUT Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_PMS_PMSW_UTCNT_Bits B;        /**< \brief Bitfield access */
} Ifx_PMS_PMSW_UTCNT;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pms_EVR_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief EVR object */
typedef volatile struct _Ifx_PMS_EVR
{
       Ifx_PMS_EVR_STAT                    STAT;                   /**< \brief 0, EVR Status Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_PMS_EVR_ADCSTAT                 ADCSTAT;                /**< \brief 8, EVR Primary ADC Status Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_PMS_EVR_RSTCON                  RSTCON;                 /**< \brief 10, EVR Reset Control Register*/
       Ifx_UReg_8Bit                       reserved_14[4];         /**< \brief 14, \internal Reserved*/
       Ifx_PMS_EVR_RSTSTAT                 RSTSTAT;                /**< \brief 18, EVR Reset Status Register*/
       Ifx_UReg_8Bit                       reserved_1C[4];         /**< \brief 1C, \internal Reserved */
       Ifx_PMS_EVR_TRIM                    TRIM;                   /**< \brief 20, EVR Trim Control Register*/
       Ifx_PMS_EVR_TRIMSTAT                TRIMSTAT;               /**< \brief 24, EVR Trim Status Register*/
       Ifx_UReg_8Bit                       reserved_28[4];         /**< \brief 28, \internal Reserved */
       Ifx_UReg_8Bit                       reserved_2C[8];         /**< \brief 2C, \internal Reserved */
       Ifx_PMS_EVR_MONSTAT1                MONSTAT1;               /**< \brief 34, EVR Secondary ADC Status Register 1*/
       Ifx_PMS_EVR_MONSTAT2                MONSTAT2;               /**< \brief 38, EVR Secondary ADC Status Register 2*/
       Ifx_PMS_EVR_MONCTRL                 MONCTRL;                /**< \brief 3C, EVR Secondary Monitor Control Register*/
       Ifx_UReg_8Bit                       reserved_40[4];         /**< \brief 40, \internal Reserved */
       Ifx_PMS_EVR_MONFILT                 MONFILT;                /**< \brief 44, EVR Secondary Monitor Filter Register*/
       Ifx_PMS_EVR_PMSIEN                  PMSIEN;                 /**< \brief 48, PMS Interrupt Enable Register*/
       Ifx_PMS_EVR_UVMON                   UVMON;                  /**< \brief 4C, EVR Secondary Under-voltage Monitor Register*/
       Ifx_PMS_EVR_OVMON                   OVMON;                  /**< \brief 50, EVR Secondary Over-voltage Monitor Register*/
       Ifx_PMS_EVR_UVMON2                  UVMON2;                 /**< \brief 54, EVR Secondary Under-voltage Monitor Register 2*/
       Ifx_PMS_EVR_OVMON2                  OVMON2;                 /**< \brief 58, EVR Secondary Over-voltage Monitor Register 2*/
       Ifx_PMS_EVR_HSMUVMON                HSMUVMON;               /**< \brief 5C, EVR Primary HSM Under-voltage Monitor Register*/
       Ifx_PMS_EVR_HSMOVMON                HSMOVMON;               /**< \brief 60, EVR Primary HSM Over-voltage Monitor Register*/
       Ifx_UReg_8Bit                       reserved_64[8];         /**< \brief 64, \internal Reserved */
       Ifx_PMS_EVR_ANACTRL                 ANACTRL;                /**< \brief 6C, EVR Analog Control Register*/
       Ifx_PMS_EVR_BGOCTRL                 BGOCTRL;                /**< \brief 70, EVR Bandgap and Oscillator Control Register*/
       Ifx_PMS_EVR_OSCCTRL                 OSCCTRL;                /**< \brief 74, EVR Oscillator Control Register*/
} Ifx_PMS_EVR;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pms_PMSW_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief PMSW object */
typedef volatile struct _Ifx_PMS_PMSW
{
       Ifx_PMS_PMSW_CR0                    CR0;                    /**< \brief 0, Standby and Wake-up Control Register 0*/
       Ifx_PMS_PMSW_CR2                    CR2;                    /**< \brief 4, Standby and Wake-up Control Register 2*/
       Ifx_UReg_8Bit                       reserved_8[4];          /**< \brief 8, \internal Reserved */
       Ifx_PMS_PMSW_CR3                    CR3;                    /**< \brief C, Standby and Wake-up Control Register 3*/
       Ifx_PMS_PMSW_CR4                    CR4;                    /**< \brief 10, Standby and Wake-up Control Register 4*/
       Ifx_PMS_PMSW_CR5                    CR5;                    /**< \brief 14, Standby and Wake-up Control Register 5*/
       Ifx_UReg_8Bit                       reserved_18[8];         /**< \brief 18, \internal Reserved */
       Ifx_PMS_PMSW_STAT                   STAT;                   /**< \brief 20, Standby and Wake-up Status Register*/
       Ifx_PMS_PMSW_STAT2                  STAT2;                  /**< \brief 24, Standby and Wake-up Status Register 2*/
       Ifx_PMS_PMSW_UTCNT                  UTCNT;                  /**< \brief 28, Standby WUT Counter Register*/
       Ifx_UReg_8Bit                       reserved_2C[8];         /**< \brief 2C, \internal Reserved */
       Ifx_PMS_PMSW_STATCLR                STATCLR;                /**< \brief 34, Standby and Wake-up Status Clear Register*/
} Ifx_PMS_PMSW;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pms_EVRSDCTRL_struct
 * \{  */
/******************************************************************************/
/** \name Object L3
 * \{  */
/** \brief EVRSDCTRL object */
typedef volatile struct _Ifx_PMS_EVRSDCTRL
{
       Ifx_PMS_EVRSDCTRL_CTRL0             CTRL0;                  /**< \brief 0, EVRC SD Control Register 0*/
       Ifx_PMS_EVRSDCTRL_CTRL1             CTRL1;                  /**< \brief 4, EVRC SD Control Register 1*/
       Ifx_PMS_EVRSDCTRL_CTRL2             CTRL2;                  /**< \brief 8, EVRC SD Control Register 2*/
       Ifx_PMS_EVRSDCTRL_CTRL3             CTRL3;                  /**< \brief C, EVRC SD Control Register 3*/
       Ifx_PMS_EVRSDCTRL_CTRL4             CTRL4;                  /**< \brief 10, EVRC SD Control Register 4*/
       Ifx_PMS_EVRSDCTRL_CTRL5             CTRL5;                  /**< \brief 14, EVRC SD Control Register 5*/
       Ifx_PMS_EVRSDCTRL_CTRL6             CTRL6;                  /**< \brief 18, EVRC SD Control Register 6*/
       Ifx_PMS_EVRSDCTRL_CTRL7             CTRL7;                  /**< \brief 1C, EVRC SD Control Register 7*/
       Ifx_PMS_EVRSDCTRL_CTRL8             CTRL8;                  /**< \brief 20, EVRC SD Control Register 8*/
       Ifx_PMS_EVRSDCTRL_CTRL9             CTRL9;                  /**< \brief 24, EVRC SD Control Register 9*/
       Ifx_PMS_EVRSDCTRL_CTRL10            CTRL10;                 /**< \brief 28, EVRC SD Control Register 10*/
       Ifx_PMS_EVRSDCTRL_CTRL11            CTRL11;                 /**< \brief 2C, EVRC SD Control Register 11*/
} Ifx_PMS_EVRSDCTRL;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pms_EVRSDCOEFF_struct
 * \{  */
/******************************************************************************/
/** \name Object L4
 * \{  */
/** \brief EVRSDCOEFF object */
typedef volatile struct _Ifx_PMS_EVRSDCOEFF
{
       Ifx_PMS_EVRSDCOEFF_COEFF0           COEFF0;                 /**< \brief 0, EVRC SD Coefficient Register 0*/
       Ifx_PMS_EVRSDCOEFF_COEFF1           COEFF1;                 /**< \brief 4, EVRC SD Coefficient Register 1*/
       Ifx_PMS_EVRSDCOEFF_COEFF2           COEFF2;                 /**< \brief 8, EVRC SD Coefficient Register 2*/
       Ifx_PMS_EVRSDCOEFF_COEFF3           COEFF3;                 /**< \brief C, EVRC SD Coefficient Register 3*/
       Ifx_PMS_EVRSDCOEFF_COEFF4           COEFF4;                 /**< \brief 10, EVRC SD Coefficient Register 4*/
       Ifx_PMS_EVRSDCOEFF_COEFF5           COEFF5;                 /**< \brief 14, EVRC SD Coefficient Register 5*/
       Ifx_PMS_EVRSDCOEFF_COEFF6           COEFF6;                 /**< \brief 18, EVRC SD Coefficient Register 6*/
       Ifx_PMS_EVRSDCOEFF_COEFF7           COEFF7;                 /**< \brief 1C, EVRC SD Coefficient Register 7*/
       Ifx_PMS_EVRSDCOEFF_COEFF8           COEFF8;                 /**< \brief 20, EVRC SD Coefficient Register 8*/
       Ifx_PMS_EVRSDCOEFF_COEFF9           COEFF9;                 /**< \brief 24, EVRC SD Coefficient Register 9*/
} Ifx_PMS_EVRSDCOEFF;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pms_DTS_struct
 * \{  */
/******************************************************************************/
/** \name Object L5
 * \{  */
/** \brief DTS object */
typedef volatile struct _Ifx_PMS_DTS
{
       Ifx_PMS_DTS_STAT                    STAT;                   /**< \brief 0, Die Temperature Sensor Status Register*/
       Ifx_UReg_8Bit                       reserved_4[4];           /**< \brief 4, \internal Reserved*/
       Ifx_PMS_DTS_LIM                     LIM;                    /**< \brief 8, Die Temperature Sensor Limit Register*/
} Ifx_PMS_DTS;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxLld_Pms_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief PMS object */
typedef volatile struct _Ifx_PMS
{
       Ifx_UReg_8Bit                       reserved_0[8];          /**< \brief 0, \internal Reserved */
       Ifx_PMS_ID                          ID;                     /**< \brief 8, Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[32];         /**< \brief C, \internal Reserved */
       Ifx_PMS_EVR                         EVR;                    /**< \brief 2C, */
       Ifx_PMS_EVROSCCTRL2                 EVROSCCTRL2;            /**< \brief A4, EVR Oscillator Control Register 2*/
       Ifx_PMS_EVRBGOCTRL2                 EVRBGOCTRL2;            /**< \brief A8, EVR Bandgap and Oscillator Control Register 2*/
       Ifx_UReg_8Bit                       reserved_AC[8];         /**< \brief AC, \internal Reserved */
       Ifx_PMS_PMSW                        PMSW;                   /**< \brief B4, */
       Ifx_UReg_8Bit                       reserved_EC[16];        /**< \brief EC, \internal Reserved */
       Ifx_PMS_EVRSDSTAT0                  EVRSDSTAT0;             /**< \brief FC, EVR SD Status Register 0*/
       Ifx_UReg_8Bit                       reserved_100[8];        /**< \brief 100, \internal Reserved */
       Ifx_PMS_EVRSDCTRL                   EVRSDCTRL;              /**< \brief 108, EVRC SD Control Register 11*/
       Ifx_UReg_8Bit                       reserved_138[16];       /**< \brief 138, \internal Reserved */
       Ifx_PMS_EVRSDCOEFF                  EVRSDCOEFF;             /**< \brief 148, EVRC SD Coefficient Register 9*/
       Ifx_UReg_8Bit                       reserved_170[80];       /**< \brief 170, \internal Reserved */
       Ifx_PMS_DTS                         DTS;                    /**< \brief 1C0, Die Temperature Sensor Limit Register*/
       Ifx_UReg_8Bit                       reserved_1CC[20];       /**< \brief 1CC, \internal Reserved */
       Ifx_PMS_OTSS                        OTSS;                   /**< \brief 1E0, OCDS Trigger Set Select Register*/
       Ifx_PMS_OTSC0                       OTSC0;                  /**< \brief 1E4, OCDS Trigger Set Control 0 Register*/
       Ifx_PMS_OTSC1                       OTSC1;                  /**< \brief 1E8, OCDS Trigger Set Control 1 Register*/
       Ifx_UReg_8Bit                       reserved_1EC[12];       /**< \brief 1EC, \internal Reserved */
       Ifx_PMS_ACCEN1                      ACCEN1;                 /**< \brief 1F8, Access Enable Register 1*/
       Ifx_PMS_ACCEN0                      ACCEN0;                 /**< \brief 1FC, Access Enable Register 0*/
} Ifx_PMS;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPMS_REGDEF_H */
