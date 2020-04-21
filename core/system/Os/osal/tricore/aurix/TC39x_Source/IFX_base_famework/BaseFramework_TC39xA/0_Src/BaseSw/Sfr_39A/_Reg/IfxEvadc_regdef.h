/**
 * \file IfxEvadc_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: TC39X_EVADC_its_MCSFR.xml
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
 * \defgroup IfxLld_Evadc Evadc
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Evadc_Bitfields Bitfields
 * \ingroup IfxLld_Evadc
 * 
 * \defgroup IfxLld_Evadc_union Union
 * \ingroup IfxLld_Evadc
 * 
 * \defgroup IfxLld_Evadc_struct Struct
 * \ingroup IfxLld_Evadc
 * 
 */
#ifndef IFXEVADC_REGDEF_H
#define IFXEVADC_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Evadc_Bitfields
 * \{  */

/** \brief  Access Enable Register 0 */
typedef struct _Ifx_EVADC_ACCEN0_Bits
{
    unsigned int EN0:1;                     /**< \brief [0:0] Access Enable for Master TAG ID 0 (rw) */
    unsigned int EN1:1;                     /**< \brief [1:1] Access Enable for Master TAG ID 1 (rw) */
    unsigned int EN2:1;                     /**< \brief [2:2] Access Enable for Master TAG ID 2 (rw) */
    unsigned int EN3:1;                     /**< \brief [3:3] Access Enable for Master TAG ID 3 (rw) */
    unsigned int EN4:1;                     /**< \brief [4:4] Access Enable for Master TAG ID 4 (rw) */
    unsigned int EN5:1;                     /**< \brief [5:5] Access Enable for Master TAG ID 5 (rw) */
    unsigned int EN6:1;                     /**< \brief [6:6] Access Enable for Master TAG ID 6 (rw) */
    unsigned int EN7:1;                     /**< \brief [7:7] Access Enable for Master TAG ID 7 (rw) */
    unsigned int EN8:1;                     /**< \brief [8:8] Access Enable for Master TAG ID 8 (rw) */
    unsigned int EN9:1;                     /**< \brief [9:9] Access Enable for Master TAG ID 9 (rw) */
    unsigned int EN10:1;                    /**< \brief [10:10] Access Enable for Master TAG ID 10 (rw) */
    unsigned int EN11:1;                    /**< \brief [11:11] Access Enable for Master TAG ID 11 (rw) */
    unsigned int EN12:1;                    /**< \brief [12:12] Access Enable for Master TAG ID 12 (rw) */
    unsigned int EN13:1;                    /**< \brief [13:13] Access Enable for Master TAG ID 13 (rw) */
    unsigned int EN14:1;                    /**< \brief [14:14] Access Enable for Master TAG ID 14 (rw) */
    unsigned int EN15:1;                    /**< \brief [15:15] Access Enable for Master TAG ID 15 (rw) */
    unsigned int EN16:1;                    /**< \brief [16:16] Access Enable for Master TAG ID 16 (rw) */
    unsigned int EN17:1;                    /**< \brief [17:17] Access Enable for Master TAG ID 17 (rw) */
    unsigned int EN18:1;                    /**< \brief [18:18] Access Enable for Master TAG ID 18 (rw) */
    unsigned int EN19:1;                    /**< \brief [19:19] Access Enable for Master TAG ID 19 (rw) */
    unsigned int EN20:1;                    /**< \brief [20:20] Access Enable for Master TAG ID 20 (rw) */
    unsigned int EN21:1;                    /**< \brief [21:21] Access Enable for Master TAG ID 21 (rw) */
    unsigned int EN22:1;                    /**< \brief [22:22] Access Enable for Master TAG ID 22 (rw) */
    unsigned int EN23:1;                    /**< \brief [23:23] Access Enable for Master TAG ID 23 (rw) */
    unsigned int EN24:1;                    /**< \brief [24:24] Access Enable for Master TAG ID 24 (rw) */
    unsigned int EN25:1;                    /**< \brief [25:25] Access Enable for Master TAG ID 25 (rw) */
    unsigned int EN26:1;                    /**< \brief [26:26] Access Enable for Master TAG ID 26 (rw) */
    unsigned int EN27:1;                    /**< \brief [27:27] Access Enable for Master TAG ID 27 (rw) */
    unsigned int EN28:1;                    /**< \brief [28:28] Access Enable for Master TAG ID 28 (rw) */
    unsigned int EN29:1;                    /**< \brief [29:29] Access Enable for Master TAG ID 29 (rw) */
    unsigned int EN30:1;                    /**< \brief [30:30] Access Enable for Master TAG ID 30 (rw) */
    unsigned int EN31:1;                    /**< \brief [31:31] Access Enable for Master TAG ID 31 (rw) */
} Ifx_EVADC_ACCEN0_Bits;

/** \brief  Access Enable Register 1 */
typedef struct _Ifx_EVADC_ACCEN1_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_EVADC_ACCEN1_Bits;

/** \brief  Access Protection Register 0 */
typedef struct _Ifx_EVADC_ACCPROT0_Bits
{
    unsigned int APC0:1;                    /**< \brief [0:0] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC1:1;                    /**< \brief [1:1] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC2:1;                    /**< \brief [2:2] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC3:1;                    /**< \brief [3:3] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC4:1;                    /**< \brief [4:4] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC5:1;                    /**< \brief [5:5] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC6:1;                    /**< \brief [6:6] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC7:1;                    /**< \brief [7:7] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC8:1;                    /**< \brief [8:8] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC9:1;                    /**< \brief [9:9] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC10:1;                   /**< \brief [10:10] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int APC11:1;                   /**< \brief [11:11] Access Protection Channel Control, Group 0-11 (rw) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int API0:1;                    /**< \brief [16:16] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API1:1;                    /**< \brief [17:17] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API2:1;                    /**< \brief [18:18] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API3:1;                    /**< \brief [19:19] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API4:1;                    /**< \brief [20:20] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API5:1;                    /**< \brief [21:21] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API6:1;                    /**< \brief [22:22] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API7:1;                    /**< \brief [23:23] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API8:1;                    /**< \brief [24:24] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API9:1;                    /**< \brief [25:25] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API10:1;                   /**< \brief [26:26] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int API11:1;                   /**< \brief [27:27] Access Protection Initialization, Group 0-11 (rw) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_EVADC_ACCPROT0_Bits;

/** \brief  Access Protection Register 1 */
typedef struct _Ifx_EVADC_ACCPROT1_Bits
{
    unsigned int APS0:1;                    /**< \brief [0:0] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS1:1;                    /**< \brief [1:1] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS2:1;                    /**< \brief [2:2] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS3:1;                    /**< \brief [3:3] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS4:1;                    /**< \brief [4:4] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS5:1;                    /**< \brief [5:5] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS6:1;                    /**< \brief [6:6] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS7:1;                    /**< \brief [7:7] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS8:1;                    /**< \brief [8:8] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS9:1;                    /**< \brief [9:9] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS10:1;                   /**< \brief [10:10] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int APS11:1;                   /**< \brief [11:11] Access Protection Service Request, Group 0-11 (rw) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int APR0:1;                    /**< \brief [16:16] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR1:1;                    /**< \brief [17:17] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR2:1;                    /**< \brief [18:18] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR3:1;                    /**< \brief [19:19] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR4:1;                    /**< \brief [20:20] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR5:1;                    /**< \brief [21:21] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR6:1;                    /**< \brief [22:22] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR7:1;                    /**< \brief [23:23] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR8:1;                    /**< \brief [24:24] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR9:1;                    /**< \brief [25:25] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR10:1;                   /**< \brief [26:26] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int APR11:1;                   /**< \brief [27:27] Access Protection Result Registers, Group 0-11 (rw) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_EVADC_ACCPROT1_Bits;

/** \brief  Access Protection Register 2 */
typedef struct _Ifx_EVADC_ACCPROT2_Bits
{
    unsigned int APF12:1;                   /**< \brief [0:0] Access Protection Fast Compare, Group 12-19 (rw) */
    unsigned int APF13:1;                   /**< \brief [1:1] Access Protection Fast Compare, Group 12-19 (rw) */
    unsigned int APF14:1;                   /**< \brief [2:2] Access Protection Fast Compare, Group 12-19 (rw) */
    unsigned int APF15:1;                   /**< \brief [3:3] Access Protection Fast Compare, Group 12-19 (rw) */
    unsigned int APF16:1;                   /**< \brief [4:4] Access Protection Fast Compare, Group 12-19 (rw) */
    unsigned int APF17:1;                   /**< \brief [5:5] Access Protection Fast Compare, Group 12-19 (rw) */
    unsigned int APF18:1;                   /**< \brief [6:6] Access Protection Fast Compare, Group 12-19 (rw) */
    unsigned int APF19:1;                   /**< \brief [7:7] Access Protection Fast Compare, Group 12-19 (rw) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int APGC:1;                    /**< \brief [16:16] Access Protection Global Configuration (rw) */
    unsigned int APEM:1;                    /**< \brief [17:17] Access Protection External Multiplexer (rw) */
    unsigned int APTF:1;                    /**< \brief [18:18] Access Protection Test Function (rw) */
    unsigned int reserved_19:13;            /**< \brief \internal Reserved */
} Ifx_EVADC_ACCPROT2_Bits;

/** \brief  Group, Channel Control Register */
typedef struct _Ifx_EVADC_G_CHCTR_Bits
{
    unsigned int ICLSEL:2;                  /**< \brief [1:0] Input Class Select (rw) */
    unsigned int reserved_2:2;              /**< \brief \internal Reserved */
    unsigned int BNDSELL:2;                 /**< \brief [5:4] Lower Boundary Select (rw) */
    unsigned int BNDSELU:2;                 /**< \brief [7:6] Upper Boundary Select (rw) */
    unsigned int CHEVMODE:2;                /**< \brief [9:8] Channel Event Mode (rw) */
    unsigned int SYNC:1;                    /**< \brief [10:10] Synchronization Request (rw) */
    unsigned int REFSEL:1;                  /**< \brief [11:11] Reference Input Selection (rw) */
    unsigned int BNDSELX:4;                 /**< \brief [15:12] BoundaryExtension (rw) */
    unsigned int RESREG:4;                  /**< \brief [19:16] Result Register (rw) */
    unsigned int RESTGT:1;                  /**< \brief [20:20] Result Target (rw) */
    unsigned int RESPOS:1;                  /**< \brief [21:21] Result Position (rw) */
    unsigned int reserved_22:6;             /**< \brief \internal Reserved */
    unsigned int BWDCH:2;                   /**< \brief [29:28] Broken Wire Detection Channel (rw) */
    unsigned int BWDEN:1;                   /**< \brief [30:30] Broken Wire Detection Enable (rw) */
    unsigned int reserved_31:1;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_CHCTR_Bits;

/** \brief  Clock Control Register */
typedef struct _Ifx_EVADC_CLC_Bits
{
    unsigned int DISR:1;                    /**< \brief [0:0] Module Disable Request Bit (rw) */
    unsigned int DISS:1;                    /**< \brief [1:1] Module Disable Status Bit (rh) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int EDIS:1;                    /**< \brief [3:3] Sleep Mode Enable Control (rw) */
    unsigned int reserved_4:28;             /**< \brief \internal Reserved */
} Ifx_EVADC_CLC_Bits;

/** \brief  External Multiplexer Interface Select Register */
typedef struct _Ifx_EVADC_EMUXSEL_Bits
{
    unsigned int EMUXGRP0:4;                /**< \brief [3:0] External Multiplexer Group for Interface 0 (rw) */
    unsigned int EMUXGRP1:4;                /**< \brief [7:4] External Multiplexer Group for Interface 1 (rw) */
    unsigned int reserved_8:24;             /**< \brief \internal Reserved */
} Ifx_EVADC_EMUXSEL_Bits;

/** \brief  Boundary Flag Register, Group */
typedef struct _Ifx_EVADC_FCG_FCBFL_Bits
{
    unsigned int BFL:1;                     /**< \brief [0:0] Boundary Flag (rh) */
    unsigned int reserved_1:3;              /**< \brief \internal Reserved */
    unsigned int BFA:1;                     /**< \brief [4:4] Boundary Flag Activation Select (rw) */
    unsigned int reserved_5:3;              /**< \brief \internal Reserved */
    unsigned int BFI:1;                     /**< \brief [8:8] Boundary Flag Inversion Control (rw) */
    unsigned int reserved_9:3;              /**< \brief \internal Reserved */
    unsigned int BFS:2;                     /**< \brief [13:12] Boundary Flag Software Control (rw) */
    unsigned int reserved_14:2;             /**< \brief \internal Reserved */
    unsigned int BFM:1;                     /**< \brief [16:16] Boundary Flag Mode Control (rw) */
    unsigned int BFV:1;                     /**< \brief [17:17] Boundary Flag Value (rw) */
    unsigned int reserved_18:6;             /**< \brief \internal Reserved */
    unsigned int BFLNP:4;                   /**< \brief [27:24] Boundary Flag Node Pointer (rw) */
    unsigned int FCR:1;                     /**< \brief [28:28] Fast Compare Result (r) */
    unsigned int reserved_29:2;             /**< \brief \internal Reserved */
    unsigned int VF:1;                      /**< \brief [31:31] Valid Flag (rh) */
} Ifx_EVADC_FCG_FCBFL_Bits;

/** \brief  Fast Compare Control Register, Group */
typedef struct _Ifx_EVADC_FCG_FCCTRL_Bits
{
    unsigned int STCF:5;                    /**< \brief [4:0] Sample Time Control for Fast Comparisons (rw) */
    unsigned int reserved_5:1;              /**< \brief \internal Reserved */
    unsigned int AIPF:2;                    /**< \brief [7:6] Analog Input Precharge Enable for Fast Comparisons (rw) */
    unsigned int CHEVMODE:2;                /**< \brief [9:8] Channel Event Mode (rw) */
    unsigned int DIVA:5;                    /**< \brief [14:10] Divider Factor for the Analog Internal Clock (rw) */
    unsigned int CPWC:1;                    /**< \brief [15:15] Write Control for Control Parameters (w) */
    unsigned int XTSEL:4;                   /**< \brief [19:16] External Trigger Input Selection (rw) */
    unsigned int XTLVL:1;                   /**< \brief [20:20] External Trigger Level (rh) */
    unsigned int XTMODE:2;                  /**< \brief [22:21] Trigger Operating Mode (rw) */
    unsigned int XTPOL:1;                   /**< \brief [23:23] External Trigger Polarity (rw) */
    unsigned int GTMODE:2;                  /**< \brief [25:24] Gate Operating Mode (rw) */
    unsigned int FCCHNR:5;                  /**< \brief [30:26] Fast Compare Channel: Cannel Number (rw) */
    unsigned int XTWC:1;                    /**< \brief [31:31] Write Control for Trigger/Gate Configuration (w) */
} Ifx_EVADC_FCG_FCCTRL_Bits;

/** \brief  Fast Comp. Hysteresis Register, Group */
typedef struct _Ifx_EVADC_FCG_FCHYST_Bits
{
    unsigned int reserved_0:2;              /**< \brief \internal Reserved */
    unsigned int DELTAMINUS:10;             /**< \brief [11:2] Lower Delta Value (rw) */
    unsigned int reserved_12:6;             /**< \brief \internal Reserved */
    unsigned int DELTAPLUS:10;              /**< \brief [27:18] Upper Delta Value (rw) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_EVADC_FCG_FCHYST_Bits;

/** \brief  Fast Compare Mode Register, Group */
typedef struct _Ifx_EVADC_FCG_FCM_Bits
{
    unsigned int RUNCOMP:2;                 /**< \brief [1:0] Run Control for Compare Channel (rw) */
    unsigned int RUNRAMP:2;                 /**< \brief [3:2] Run Control for Ramp (rw) */
    unsigned int FCRDIR:1;                  /**< \brief [4:4] Fast Compare Ramp Direction (rw) */
    unsigned int ANON:1;                    /**< \brief [5:5] Analog Converter Control (rw) */
    unsigned int reserved_6:2;              /**< \brief \internal Reserved */
    unsigned int FCTRIV:8;                  /**< \brief [15:8] Fast Compare Trigger Interval (rw) */
    unsigned int SRG:2;                     /**< \brief [17:16] Service Request Generation (rw) */
    unsigned int AUE:2;                     /**< \brief [19:18] Automatic Update Enable (rw) */
    unsigned int reserved_20:1;             /**< \brief \internal Reserved */
    unsigned int FCMWC:1;                   /**< \brief [21:21] Write Control for Fast Compare Mode Configuration (w) */
    unsigned int FCREF:10;                  /**< \brief [31:22] Fast Compare Reference Value (rwh) */
} Ifx_EVADC_FCG_FCM_Bits;

/** \brief  Fast Compare Ramp Register 0, Group */
typedef struct _Ifx_EVADC_FCG_FCRAMP0_Bits
{
    unsigned int FCRCOMPA:10;               /**< \brief [9:0] Fast Compare Ramp Compare Value A (rw) */
    unsigned int reserved_10:6;             /**< \brief \internal Reserved */
    unsigned int FCRSTEP:8;                 /**< \brief [23:16] Fast Compare Ramp Step Width (rw) */
    unsigned int reserved_24:7;             /**< \brief \internal Reserved */
    unsigned int FSWC:1;                    /**< \brief [31:31] Write Control for Fast Compare Stepwidth (w) */
} Ifx_EVADC_FCG_FCRAMP0_Bits;

/** \brief  Fast Compare Ramp Register 1, Group */
typedef struct _Ifx_EVADC_FCG_FCRAMP1_Bits
{
    unsigned int FCRCOMPB:10;               /**< \brief [9:0] Fast Compare Ramp Compare Value B (rw) */
    unsigned int reserved_10:22;            /**< \brief \internal Reserved */
} Ifx_EVADC_FCG_FCRAMP1_Bits;

/** \brief  Alias Register, Group */
typedef struct _Ifx_EVADC_G_ALIAS_Bits
{
    unsigned int ALIAS0:5;                  /**< \brief [4:0] Alias Value for CH0 Conversion Requests (rw) */
    unsigned int reserved_5:3;              /**< \brief \internal Reserved */
    unsigned int ALIAS1:5;                  /**< \brief [12:8] Alias Value for CH1 Conversion Requests (rw) */
    unsigned int reserved_13:19;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_ALIAS_Bits;

/** \brief  Analog Fct. Config. Register, Group */
typedef struct _Ifx_EVADC_G_ANCFG_Bits
{
    unsigned int IPE:1;                     /**< \brief [0:0] Idle Precharge Enable (rw) */
    unsigned int BE:1;                      /**< \brief [1:1] Input Buffer Enable (rw) */
    unsigned int RPE:1;                     /**< \brief [2:2] Reference Precharge Enable (rw) */
    unsigned int RPC:1;                     /**< \brief [3:3] Reference Precharge Control (rw) */
    unsigned int CALSTC:2;                  /**< \brief [5:4] Calibration Sample Time Control (rw) */
    unsigned int DPCAL:1;                   /**< \brief [6:6] Disable Post-Calibration (rw) */
    unsigned int reserved_7:9;              /**< \brief \internal Reserved */
    unsigned int ACSD:3;                    /**< \brief [18:16] Analog Clock Synchronization Delay (rw) */
    unsigned int SSE:1;                     /**< \brief [19:19] Sample Synchronization Enable (rw) */
    unsigned int DIVA:5;                    /**< \brief [24:20] Divider Factor for the Analog Internal Clock (rw) */
    unsigned int DCMSB:1;                   /**< \brief [25:25] Double Clock for the MSB Conversion (rw) */
    unsigned int reserved_26:6;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_ANCFG_Bits;

/** \brief  Arbitration Config. Register, Group */
typedef struct _Ifx_EVADC_G_ARBCFG_Bits
{
    unsigned int ANONC:2;                   /**< \brief [1:0] Analog Converter Control (rw) */
    unsigned int reserved_2:2;              /**< \brief \internal Reserved */
    unsigned int ARBRND:2;                  /**< \brief [5:4] Arbitration Round Length (rw) */
    unsigned int reserved_6:1;              /**< \brief \internal Reserved */
    unsigned int ARBM:1;                    /**< \brief [7:7] Arbitration Mode (rw) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int ANONS:2;                   /**< \brief [17:16] Analog Converter Control Status (rh) */
    unsigned int CSRC:2;                    /**< \brief [19:18] Currently Converted Request Source (rh) */
    unsigned int CHNR:5;                    /**< \brief [24:20] Channel Number (rh) */
    unsigned int SYNRUN:1;                  /**< \brief [25:25] Synchronous Conversion Running (rh) */
    unsigned int reserved_26:2;             /**< \brief \internal Reserved */
    unsigned int CAL:1;                     /**< \brief [28:28] Start-Up Calibration Active Indication (rh) */
    unsigned int reserved_29:1;             /**< \brief \internal Reserved */
    unsigned int BUSY:1;                    /**< \brief [30:30] Converter Busy Flag (rh) */
    unsigned int SAMPLE:1;                  /**< \brief [31:31] Sample Phase Flag (rh) */
} Ifx_EVADC_G_ARBCFG_Bits;

/** \brief  Arbitration Priority Register, Group */
typedef struct _Ifx_EVADC_G_ARBPR_Bits
{
    unsigned int PRIO0:2;                   /**< \brief [1:0] Priority of Request Source 0 (rw) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int CSM0:1;                    /**< \brief [3:3] Conversion Start Mode of Request Source 0 (rw) */
    unsigned int PRIO1:2;                   /**< \brief [5:4] Priority of Request Source 1 (rw) */
    unsigned int reserved_6:1;              /**< \brief \internal Reserved */
    unsigned int CSM1:1;                    /**< \brief [7:7] Conversion Start Mode of Request Source 1 (rw) */
    unsigned int PRIO2:2;                   /**< \brief [9:8] Priority of Request Source 2 (rw) */
    unsigned int reserved_10:1;             /**< \brief \internal Reserved */
    unsigned int CSM2:1;                    /**< \brief [11:11] Conversion Start Mode of Request Source 2 (rw) */
    unsigned int reserved_12:12;            /**< \brief \internal Reserved */
    unsigned int ASEN0:1;                   /**< \brief [24:24] Arbitration Slot 0 Enable (rw) */
    unsigned int ASEN1:1;                   /**< \brief [25:25] Arbitration Slot 1 Enable (rw) */
    unsigned int ASEN2:1;                   /**< \brief [26:26] Arbitration Slot 2 Enable (rw) */
    unsigned int reserved_27:5;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_ARBPR_Bits;

/** \brief  Boundary Select Register, Group */
typedef struct _Ifx_EVADC_G_BOUND_Bits
{
    unsigned int BOUNDARY0:12;              /**< \brief [11:0] Boundary Value 0 for Limit Checking (rw) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int BOUNDARY1:12;              /**< \brief [27:16] Boundary Value 1 for Limit Checking (rw) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_BOUND_Bits;

/** \brief  Channel Event Flag Clear Register, Group */
typedef struct _Ifx_EVADC_G_CEFCLR_Bits
{
    unsigned int CEV0:1;                    /**< \brief [0:0] Clear Channel Event for Channel 0 (w) */
    unsigned int CEV1:1;                    /**< \brief [1:1] Clear Channel Event for Channel 1 (w) */
    unsigned int CEV2:1;                    /**< \brief [2:2] Clear Channel Event for Channel 2 (w) */
    unsigned int CEV3:1;                    /**< \brief [3:3] Clear Channel Event for Channel 3 (w) */
    unsigned int CEV4:1;                    /**< \brief [4:4] Clear Channel Event for Channel 4 (w) */
    unsigned int CEV5:1;                    /**< \brief [5:5] Clear Channel Event for Channel 5 (w) */
    unsigned int CEV6:1;                    /**< \brief [6:6] Clear Channel Event for Channel 6 (w) */
    unsigned int CEV7:1;                    /**< \brief [7:7] Clear Channel Event for Channel 7 (w) */
    unsigned int CEV8:1;                    /**< \brief [8:8] Clear Channel Event for Channel 8 (w) */
    unsigned int CEV9:1;                    /**< \brief [9:9] Clear Channel Event for Channel 9 (w) */
    unsigned int CEV10:1;                   /**< \brief [10:10] Clear Channel Event for Channel 10 (w) */
    unsigned int CEV11:1;                   /**< \brief [11:11] Clear Channel Event for Channel 11 (w) */
    unsigned int CEV12:1;                   /**< \brief [12:12] Clear Channel Event for Channel 12 (w) */
    unsigned int CEV13:1;                   /**< \brief [13:13] Clear Channel Event for Channel 13 (w) */
    unsigned int CEV14:1;                   /**< \brief [14:14] Clear Channel Event for Channel 14 (w) */
    unsigned int CEV15:1;                   /**< \brief [15:15] Clear Channel Event for Channel 15 (w) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_CEFCLR_Bits;

/** \brief  Channel Event Flag Register, Group */
typedef struct _Ifx_EVADC_G_CEFLAG_Bits
{
    unsigned int CEV0:1;                    /**< \brief [0:0] Channel Event for Channel 0 (rwh) */
    unsigned int CEV1:1;                    /**< \brief [1:1] Channel Event for Channel 1 (rwh) */
    unsigned int CEV2:1;                    /**< \brief [2:2] Channel Event for Channel 2 (rwh) */
    unsigned int CEV3:1;                    /**< \brief [3:3] Channel Event for Channel 3 (rwh) */
    unsigned int CEV4:1;                    /**< \brief [4:4] Channel Event for Channel 4 (rwh) */
    unsigned int CEV5:1;                    /**< \brief [5:5] Channel Event for Channel 5 (rwh) */
    unsigned int CEV6:1;                    /**< \brief [6:6] Channel Event for Channel 6 (rwh) */
    unsigned int CEV7:1;                    /**< \brief [7:7] Channel Event for Channel 7 (rwh) */
    unsigned int CEV8:1;                    /**< \brief [8:8] Channel Event for Channel 8 (rwh) */
    unsigned int CEV9:1;                    /**< \brief [9:9] Channel Event for Channel 9 (rwh) */
    unsigned int CEV10:1;                   /**< \brief [10:10] Channel Event for Channel 10 (rwh) */
    unsigned int CEV11:1;                   /**< \brief [11:11] Channel Event for Channel 11 (rwh) */
    unsigned int CEV12:1;                   /**< \brief [12:12] Channel Event for Channel 12 (rwh) */
    unsigned int CEV13:1;                   /**< \brief [13:13] Channel Event for Channel 13 (rwh) */
    unsigned int CEV14:1;                   /**< \brief [14:14] Channel Event for Channel 14 (rwh) */
    unsigned int CEV15:1;                   /**< \brief [15:15] Channel Event for Channel 15 (rwh) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_CEFLAG_Bits;

/** \brief  Channel Event Node Pointer Reg. 0, Group */
typedef struct _Ifx_EVADC_G_CEVNP0_Bits
{
    unsigned int CEV0NP:4;                  /**< \brief [3:0] Service Request Node Pointer Channel Event 0 (rw) */
    unsigned int CEV1NP:4;                  /**< \brief [7:4] Service Request Node Pointer Channel Event 1 (rw) */
    unsigned int CEV2NP:4;                  /**< \brief [11:8] Service Request Node Pointer Channel Event 2 (rw) */
    unsigned int CEV3NP:4;                  /**< \brief [15:12] Service Request Node Pointer Channel Event 3 (rw) */
    unsigned int CEV4NP:4;                  /**< \brief [19:16] Service Request Node Pointer Channel Event 4 (rw) */
    unsigned int CEV5NP:4;                  /**< \brief [23:20] Service Request Node Pointer Channel Event 5 (rw) */
    unsigned int CEV6NP:4;                  /**< \brief [27:24] Service Request Node Pointer Channel Event 6 (rw) */
    unsigned int CEV7NP:4;                  /**< \brief [31:28] Service Request Node Pointer Channel Event 7 (rw) */
} Ifx_EVADC_G_CEVNP0_Bits;

/** \brief Channel Event Node Pointer Register 1, Group  */
typedef struct _Ifx_EVADC_G_CEVNP1_Bits
{
    unsigned int  CEV8NP:4;          /**< \brief [3:0] Service Request Node Pointer Channel Event i - CEV8NP,CEV9NP,CEV10NP,CEV11NP,CEV12NP,CEV13NP,CEV14NP,CEV15NP (rw) */
    unsigned int  CEV9NP:4;          /**< \brief [7:4] Service Request Node Pointer Channel Event i - CEV8NP,CEV9NP,CEV10NP,CEV11NP,CEV12NP,CEV13NP,CEV14NP,CEV15NP (rw) */
    unsigned int  CEV10NP:4;         /**< \brief [11:8] Service Request Node Pointer Channel Event i - CEV8NP,CEV9NP,CEV10NP,CEV11NP,CEV12NP,CEV13NP,CEV14NP,CEV15NP (rw) */
    unsigned int  CEV11NP:4;         /**< \brief [15:12] Service Request Node Pointer Channel Event i - CEV8NP,CEV9NP,CEV10NP,CEV11NP,CEV12NP,CEV13NP,CEV14NP,CEV15NP (rw) */
    unsigned int  CEV12NP:4;         /**< \brief [19:16] Service Request Node Pointer Channel Event i - CEV8NP,CEV9NP,CEV10NP,CEV11NP,CEV12NP,CEV13NP,CEV14NP,CEV15NP (rw) */
    unsigned int  CEV13NP:4;         /**< \brief [23:20] Service Request Node Pointer Channel Event i - CEV8NP,CEV9NP,CEV10NP,CEV11NP,CEV12NP,CEV13NP,CEV14NP,CEV15NP (rw) */
    unsigned int  CEV14NP:4;         /**< \brief [27:24] Service Request Node Pointer Channel Event i - CEV8NP,CEV9NP,CEV10NP,CEV11NP,CEV12NP,CEV13NP,CEV14NP,CEV15NP (rw) */
    unsigned int  CEV15NP:4;         /**< \brief [31:28] Service Request Node Pointer Channel Event i - CEV8NP,CEV9NP,CEV10NP,CEV11NP,CEV12NP,CEV13NP,CEV14NP,CEV15NP (rw) */
} Ifx_EVADC_G_CEVNP1_Bits;

/** \brief  Ext. Multiplexer Channel Select Reg., Group */
typedef struct _Ifx_EVADC_G_EMUXCS_Bits
{
    unsigned int EMUXCH:16;                 /**< \brief [15:0] External Multiplexer Channel Select (rw) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_EMUXCS_Bits;

/** \brief  External Multiplexer Control Reg., Group */
typedef struct _Ifx_EVADC_G_EMUXCTR_Bits
{
    unsigned int EMUXSET:3;                 /**< \brief [2:0] External Multiplexer Start Selection (rw) */
    unsigned int reserved_3:1;              /**< \brief \internal Reserved */
    unsigned int EMUXMODE:3;                /**< \brief [6:4] External Multiplexer Mode (rw) */
    unsigned int reserved_7:5;              /**< \brief \internal Reserved */
    unsigned int EMXCOD:1;                  /**< \brief [12:12] External Multiplexer Coding Scheme (rw) */
    unsigned int EMXST:1;                   /**< \brief [13:13] External Multiplexer Sample Time Control (rw) */
    unsigned int EMXCSS:1;                  /**< \brief [14:14] External Multiplexer Channel Selection Style (rw) */
    unsigned int EMXWC:1;                   /**< \brief [15:15] Write Control for EMUX Configuration (w) */
    unsigned int EMUXACT:3;                 /**< \brief [18:16] External Multiplexer Actual Selection (rh) */
    unsigned int reserved_19:1;             /**< \brief \internal Reserved */
    unsigned int EMUXCCB:5;                 /**< \brief [24:20] External Multiplexer Channel Selection for Block Mode (rw) */
    unsigned int reserved_25:7;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_EMUXCTR_Bits;

/** \brief  Input Class Reg0ster i, Group 0 */
typedef struct _Ifx_EVADC_G_ICLASS_Bits
{
    unsigned int STCS:5;                    /**< \brief [4:0] Sample Time Control for Standard Conversions (rw) */
    unsigned int reserved_5:1;              /**< \brief \internal Reserved */
    unsigned int AIPS:2;                    /**< \brief [7:6] Analog Input Precharge Control for Standard Conversions (rw) */
    unsigned int CMS:2;                     /**< \brief [9:8] Conversion Mode for Standard Conversions (rw) */
    unsigned int SESPS:1;                   /**< \brief [10:10] Spread Early Sample Point for Standard Conversions (rw) */
    unsigned int reserved_11:5;             /**< \brief \internal Reserved */
    unsigned int STCE:5;                    /**< \brief [20:16] Sample Time Control for EMUX Conversions (rw) */
    unsigned int reserved_21:1;             /**< \brief \internal Reserved */
    unsigned int AIPE:2;                    /**< \brief [23:22] Analog Input Precharge Control for EMUX Conversions (rw) */
    unsigned int CME:2;                     /**< \brief [25:24] Conversion Mode for EMUX Conversions (rw) */
    unsigned int SESPE:1;                   /**< \brief [26:26] Spread Early Sample Point for EMUX Conversions (rw) */
    unsigned int reserved_27:5;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_ICLASS_Bits;

/** \brief  Result Event Flag Clear Register, Group */
typedef struct _Ifx_EVADC_G_REFCLR_Bits
{
    unsigned int REV0:1;                    /**< \brief [0:0] Clear Result Event for Result Register 0 (w) */
    unsigned int REV1:1;                    /**< \brief [1:1] Clear Result Event for Result Register 1 (w) */
    unsigned int REV2:1;                    /**< \brief [2:2] Clear Result Event for Result Register 2 (w) */
    unsigned int REV3:1;                    /**< \brief [3:3] Clear Result Event for Result Register 3 (w) */
    unsigned int REV4:1;                    /**< \brief [4:4] Clear Result Event for Result Register 4 (w) */
    unsigned int REV5:1;                    /**< \brief [5:5] Clear Result Event for Result Register 5 (w) */
    unsigned int REV6:1;                    /**< \brief [6:6] Clear Result Event for Result Register 6 (w) */
    unsigned int REV7:1;                    /**< \brief [7:7] Clear Result Event for Result Register 7 (w) */
    unsigned int REV8:1;                    /**< \brief [8:8] Clear Result Event for Result Register 8 (w) */
    unsigned int REV9:1;                    /**< \brief [9:9] Clear Result Event for Result Register 9 (w) */
    unsigned int REV10:1;                   /**< \brief [10:10] Clear Result Event for Result Register 10 (w) */
    unsigned int REV11:1;                   /**< \brief [11:11] Clear Result Event for Result Register 11 (w) */
    unsigned int REV12:1;                   /**< \brief [12:12] Clear Result Event for Result Register 12 (w) */
    unsigned int REV13:1;                   /**< \brief [13:13] Clear Result Event for Result Register 13 (w) */
    unsigned int REV14:1;                   /**< \brief [14:14] Clear Result Event for Result Register 14 (w) */
    unsigned int REV15:1;                   /**< \brief [15:15] Clear Result Event for Result Register 15 (w) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_REFCLR_Bits;

/** \brief  Result Event Flag Register, Group */
typedef struct _Ifx_EVADC_G_REFLAG_Bits
{
    unsigned int REV0:1;                    /**< \brief [0:0] Result Event for Result Register 0 (rwh) */
    unsigned int REV1:1;                    /**< \brief [1:1] Result Event for Result Register 1 (rwh) */
    unsigned int REV2:1;                    /**< \brief [2:2] Result Event for Result Register 2 (rwh) */
    unsigned int REV3:1;                    /**< \brief [3:3] Result Event for Result Register 3 (rwh) */
    unsigned int REV4:1;                    /**< \brief [4:4] Result Event for Result Register 4 (rwh) */
    unsigned int REV5:1;                    /**< \brief [5:5] Result Event for Result Register 5 (rwh) */
    unsigned int REV6:1;                    /**< \brief [6:6] Result Event for Result Register 6 (rwh) */
    unsigned int REV7:1;                    /**< \brief [7:7] Result Event for Result Register 7 (rwh) */
    unsigned int REV8:1;                    /**< \brief [8:8] Result Event for Result Register 8 (rwh) */
    unsigned int REV9:1;                    /**< \brief [9:9] Result Event for Result Register 9 (rwh) */
    unsigned int REV10:1;                   /**< \brief [10:10] Result Event for Result Register 10 (rwh) */
    unsigned int REV11:1;                   /**< \brief [11:11] Result Event for Result Register 11 (rwh) */
    unsigned int REV12:1;                   /**< \brief [12:12] Result Event for Result Register 12 (rwh) */
    unsigned int REV13:1;                   /**< \brief [13:13] Result Event for Result Register 13 (rwh) */
    unsigned int REV14:1;                   /**< \brief [14:14] Result Event for Result Register 14 (rwh) */
    unsigned int REV15:1;                   /**< \brief [15:15] Result Event for Result Register 15 (rwh) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_REFLAG_Bits;

/** \brief  Result Event Node Pointer Reg. 0, Group */
typedef struct _Ifx_EVADC_G_REVNP0_Bits
{
    unsigned int REV0NP:4;                  /**< \brief [3:0] Service Request Node Pointer Result Event 0 (rw) */
    unsigned int REV1NP:4;                  /**< \brief [7:4] Service Request Node Pointer Result Event 1 (rw) */
    unsigned int REV2NP:4;                  /**< \brief [11:8] Service Request Node Pointer Result Event 2 (rw) */
    unsigned int REV3NP:4;                  /**< \brief [15:12] Service Request Node Pointer Result Event 3 (rw) */
    unsigned int REV4NP:4;                  /**< \brief [19:16] Service Request Node Pointer Result Event 4 (rw) */
    unsigned int REV5NP:4;                  /**< \brief [23:20] Service Request Node Pointer Result Event 5 (rw) */
    unsigned int REV6NP:4;                  /**< \brief [27:24] Service Request Node Pointer Result Event 6 (rw) */
    unsigned int REV7NP:4;                  /**< \brief [31:28] Service Request Node Pointer Result Event 7 (rw) */
} Ifx_EVADC_G_REVNP0_Bits;

/** \brief  Result Event Node Pointer Reg. 1, Group */
typedef struct _Ifx_EVADC_G_REVNP1_Bits
{
    unsigned int REV8NP:4;                  /**< \brief [3:0] Service Request Node Pointer Result Event 8 (rw) */
    unsigned int REV9NP:4;                  /**< \brief [7:4] Service Request Node Pointer Result Event 9 (rw) */
    unsigned int REV10NP:4;                 /**< \brief [11:8] Service Request Node Pointer Result Event 10 (rw) */
    unsigned int REV11NP:4;                 /**< \brief [15:12] Service Request Node Pointer Result Event 11 (rw) */
    unsigned int REV12NP:4;                 /**< \brief [19:16] Service Request Node Pointer Result Event 12 (rw) */
    unsigned int REV13NP:4;                 /**< \brief [23:20] Service Request Node Pointer Result Event 13 (rw) */
    unsigned int REV14NP:4;                 /**< \brief [27:24] Service Request Node Pointer Result Event 14 (rw) */
    unsigned int REV15NP:4;                 /**< \brief [31:28] Service Request Node Pointer Result Event 15 (rw) */
} Ifx_EVADC_G_REVNP1_Bits;

/** \brief  Source Event Flag Clear Reg., Group */
typedef struct _Ifx_EVADC_G_SEFCLR_Bits
{
    unsigned int SEV0:1;                    /**< \brief [0:0] Clear Source Event 0 (w) */
    unsigned int SEV1:1;                    /**< \brief [1:1] Clear Source Event 1 (w) */
    unsigned int SEV2:1;                    /**< \brief [2:2] Clear Source Event 2 (w) */
    unsigned int reserved_3:29;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_SEFCLR_Bits;

/** \brief  Source Event Flag Register, Group */
typedef struct _Ifx_EVADC_G_SEFLAG_Bits
{
    unsigned int SEV0:1;                    /**< \brief [0:0] Source Event 0 (rwh) */
    unsigned int SEV1:1;                    /**< \brief [1:1] Source Event 1 (rwh) */
    unsigned int SEV2:1;                    /**< \brief [2:2] Source Event 2 (rwh) */
    unsigned int reserved_3:29;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_SEFLAG_Bits;

/** \brief  Source Event Node Pointer Reg., Group */
typedef struct _Ifx_EVADC_G_SEVNP_Bits
{
    unsigned int SEV0NP:4;                  /**< \brief [3:0] Service Request Node Pointer Source Event 0 (rw) */
    unsigned int SEV1NP:4;                  /**< \brief [7:4] Service Request Node Pointer Source Event 1 (rw) */
    unsigned int SEV2NP:4;                  /**< \brief [11:8] Service Request Node Pointer Source Event 2 (rw) */
    unsigned int reserved_12:20;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_SEVNP_Bits;

/** \brief  Service Request Software Activation Trigger, Group */
typedef struct _Ifx_EVADC_G_SRACT_Bits
{
    unsigned int AGSR0:1;                   /**< \brief [0:0] Activate Group Service Request Node 0 (w) */
    unsigned int AGSR1:1;                   /**< \brief [1:1] Activate Group Service Request Node 1 (w) */
    unsigned int AGSR2:1;                   /**< \brief [2:2] Activate Group Service Request Node 2 (w) */
    unsigned int AGSR3:1;                   /**< \brief [3:3] Activate Group Service Request Node 3 (w) */
    unsigned int reserved_4:4;              /**< \brief \internal Reserved */
    unsigned int ASSR0:1;                   /**< \brief [8:8] Activate Shared Service Request Node 0 (w) */
    unsigned int ASSR1:1;                   /**< \brief [9:9] Activate Shared Service Request Node 1 (w) */
    unsigned int ASSR2:1;                   /**< \brief [10:10] Activate Shared Service Request Node 2 (w) */
    unsigned int ASSR3:1;                   /**< \brief [11:11] Activate Shared Service Request Node 3 (w) */
    unsigned int reserved_12:20;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_SRACT_Bits;

/** \brief  Synchronization Control Register, Group */
typedef struct _Ifx_EVADC_G_SYNCTR_Bits
{
    unsigned int STSEL:2;                   /**< \brief [1:0] Start Selection (rw) */
    unsigned int reserved_2:2;              /**< \brief \internal Reserved */
    unsigned int EVALR1:1;                  /**< \brief [4:4] Evaluate Ready Input R1 (rw) */
    unsigned int EVALR2:1;                  /**< \brief [5:5] Evaluate Ready Input R2 (rw) */
    unsigned int EVALR3:1;                  /**< \brief [6:6] Evaluate Ready Input R3 (rw) */
    unsigned int reserved_7:25;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_SYNCTR_Bits;

/** \brief  Valid Flag Register, Group */
typedef struct _Ifx_EVADC_G_VFR_Bits
{
    unsigned int VF0:1;                     /**< \brief [0:0] Valid Flag of Result Register x (rwh) */
    unsigned int VF1:1;                     /**< \brief [1:1] Valid Flag of Result Register x (rwh) */
    unsigned int VF2:1;                     /**< \brief [2:2] Valid Flag of Result Register x (rwh) */
    unsigned int VF3:1;                     /**< \brief [3:3] Valid Flag of Result Register x (rwh) */
    unsigned int VF4:1;                     /**< \brief [4:4] Valid Flag of Result Register x (rwh) */
    unsigned int VF5:1;                     /**< \brief [5:5] Valid Flag of Result Register x (rwh) */
    unsigned int VF6:1;                     /**< \brief [6:6] Valid Flag of Result Register x (rwh) */
    unsigned int VF7:1;                     /**< \brief [7:7] Valid Flag of Result Register x (rwh) */
    unsigned int VF8:1;                     /**< \brief [8:8] Valid Flag of Result Register x (rwh) */
    unsigned int VF9:1;                     /**< \brief [9:9] Valid Flag of Result Register x (rwh) */
    unsigned int VF10:1;                    /**< \brief [10:10] Valid Flag of Result Register x (rwh) */
    unsigned int VF11:1;                    /**< \brief [11:11] Valid Flag of Result Register x (rwh) */
    unsigned int VF12:1;                    /**< \brief [12:12] Valid Flag of Result Register x (rwh) */
    unsigned int VF13:1;                    /**< \brief [13:13] Valid Flag of Result Register x (rwh) */
    unsigned int VF14:1;                    /**< \brief [14:14] Valid Flag of Result Register x (rwh) */
    unsigned int VF15:1;                    /**< \brief [15:15] Valid Flag of Result Register x (rwh) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_VFR_Bits;

/** \brief  Global Boundary Select Register */
typedef struct _Ifx_EVADC_GLOB_BOUND_Bits
{
    unsigned int BOUNDARY0:12;              /**< \brief [11:0] Boundary Value 0 for Limit Checking (rw) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int BOUNDARY1:12;              /**< \brief [27:16] Boundary Value 1 for Limit Checking (rw) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_EVADC_GLOB_BOUND_Bits;

/** \brief  Global Event Flag Register */
typedef struct _Ifx_EVADC_GLOB_EFLAG_Bits
{
    unsigned int reserved_0:8;              /**< \brief \internal Reserved */
    unsigned int REVGLB:1;                  /**< \brief [8:8] Global Result Event (rwh) */
    unsigned int reserved_9:15;             /**< \brief \internal Reserved */
    unsigned int REVGLBCLR:1;               /**< \brief [24:24] Clear Global Result Event (w) */
    unsigned int reserved_25:7;             /**< \brief \internal Reserved */
} Ifx_EVADC_GLOB_EFLAG_Bits;

/** \brief  Global Event Node Pointer Register */
typedef struct _Ifx_EVADC_GLOB_EVNP_Bits
{
    unsigned int reserved_0:16;             /**< \brief \internal Reserved */
    unsigned int REV0NP:4;                  /**< \brief [19:16] Service Request Node Pointer Global Result (rw) */
    unsigned int reserved_20:12;            /**< \brief \internal Reserved */
} Ifx_EVADC_GLOB_EVNP_Bits;

/** \brief  Global Result Control Register */
typedef struct _Ifx_EVADC_GLOB_RCR_Bits
{
    unsigned int reserved_0:16;             /**< \brief \internal Reserved */
    unsigned int DRCTR:4;                   /**< \brief [19:16] Data Reduction Control (rw) */
    unsigned int reserved_20:4;             /**< \brief \internal Reserved */
    unsigned int WFR:1;                     /**< \brief [24:24] Wait-for-Read Mode Enable (rw) */
    unsigned int reserved_25:6;             /**< \brief \internal Reserved */
    unsigned int SRGEN:1;                   /**< \brief [31:31] Service Request Generation Enable (rw) */
} Ifx_EVADC_GLOB_RCR_Bits;

/** \brief  Global Result Register */
typedef struct _Ifx_EVADC_GLOB_RES_Bits
{
    unsigned int RESULT:16;                 /**< \brief [15:0] Result of most recent conversion (rwh) */
    unsigned int GNR:4;                     /**< \brief [19:16] Group Number (rh) */
    unsigned int CHNR:5;                    /**< \brief [24:20] Channel Number (rh) */
    unsigned int EMUX:3;                    /**< \brief [27:25] External Multiplexer Setting (rh) */
    unsigned int CRS:2;                     /**< \brief [29:28] Converted Request Source (rh) */
    unsigned int reserved_30:1;             /**< \brief \internal Reserved */
    unsigned int VF:1;                      /**< \brief [31:31] Valid Flag (rwh) */
} Ifx_EVADC_GLOB_RES_Bits;

/** \brief  Global Result Register, Debug */
typedef struct _Ifx_EVADC_GLOB_RESD_Bits
{
    unsigned int RESULT:16;                 /**< \brief [15:0] Result of most recent conversion (rwh) */
    unsigned int GNR:4;                     /**< \brief [19:16] Group Number (rh) */
    unsigned int CHNR:5;                    /**< \brief [24:20] Channel Number (rh) */
    unsigned int EMUX:3;                    /**< \brief [27:25] External Multiplexer Setting (rh) */
    unsigned int CRS:2;                     /**< \brief [29:28] Converted Request Source (rh) */
    unsigned int reserved_30:1;             /**< \brief \internal Reserved */
    unsigned int VF:1;                      /**< \brief [31:31] Valid Flag (rwh) */
} Ifx_EVADC_GLOB_RESD_Bits;

/** \brief  Global Test Enable Register */
typedef struct _Ifx_EVADC_GLOB_TE_Bits
{
    unsigned int TFEG0:1;                   /**< \brief [0:0] Test Function Enable for Group 0 (rw) */
    unsigned int TFEG1:1;                   /**< \brief [1:1] Test Function Enable for Group 1 (rw) */
    unsigned int TFEG2:1;                   /**< \brief [2:2] Test Function Enable for Group 2 (rw) */
    unsigned int TFEG3:1;                   /**< \brief [3:3] Test Function Enable for Group 3 (rw) */
    unsigned int TFEG4:1;                   /**< \brief [4:4] Test Function Enable for Group 4 (rw) */
    unsigned int TFEG5:1;                   /**< \brief [5:5] Test Function Enable for Group 5 (rw) */
    unsigned int TFEG6:1;                   /**< \brief [6:6] Test Function Enable for Group 6 (rw) */
    unsigned int TFEG7:1;                   /**< \brief [7:7] Test Function Enable for Group 7 (rw) */
    unsigned int TFEG8:1;                   /**< \brief [8:8] Test Function Enable for Group 8 (rw) */
    unsigned int TFEG9:1;                   /**< \brief [9:9] Test Function Enable for Group 9 (rw) */
    unsigned int TFEG10:1;                  /**< \brief [10:10] Test Function Enable for Group 10 (rw) */
    unsigned int TFEG11:1;                  /**< \brief [11:11] Test Function Enable for Group 11 (rw) */
    unsigned int reserved_12:20;            /**< \brief \internal Reserved */
} Ifx_EVADC_GLOB_TE_Bits;

/** \brief  Global Test Functions Register */
typedef struct _Ifx_EVADC_GLOB_TF_Bits
{
    unsigned int CDCH:4;                    /**< \brief [3:0] Conversion Diagnostics Channel (rw) */
    unsigned int CDGR:4;                    /**< \brief [7:4] Conversion Diagnostics Group (rw) */
    unsigned int CDEN:1;                    /**< \brief [8:8] Converter Diagnostics Enable (rw) */
    unsigned int CDSEL:2;                   /**< \brief [10:9] Converter Diagnostics Pull-Devices Select (rw) */
    unsigned int reserved_11:4;             /**< \brief \internal Reserved */
    unsigned int CDWC:1;                    /**< \brief [15:15] Write Control for Conversion Diagnostics (w) */
    unsigned int PDD:1;                     /**< \brief [16:16] Pull-Down Diagnostics Enable (rw) */
    unsigned int MDPD:1;                    /**< \brief [17:17] Multiplexer Diagnostics Pull-Devices Enable (rw) */
    unsigned int MDPU:1;                    /**< \brief [18:18] Multiplexer Diagnostics Pull-Devices Enable - MDPD,MDPU (rw) */
    unsigned int reserved_19:4;             /**< \brief \internal Reserved */
    unsigned int MDWC:1;                    /**< \brief [23:23] Write Control for Multiplexer Diagnostics (w) */
    unsigned int reserved_24:8;             /**< \brief \internal Reserved */
} Ifx_EVADC_GLOB_TF_Bits;

/** \brief  Global Configuration Register */
typedef struct _Ifx_EVADC_GLOBCFG_Bits
{
    unsigned int reserved_0:8;              /**< \brief \internal Reserved */
    unsigned int DIVD:2;                    /**< \brief [9:8] Divider Factor for the Arbiter Clock (rw) */
    unsigned int reserved_10:2;             /**< \brief \internal Reserved */
    unsigned int USC:1;                     /**< \brief [12:12] Unsynchronized Clock Generation (rw) */
    unsigned int SUPLEV:2;                  /**< \brief [14:13] Supply Voltage Level (rw) */
    unsigned int CPWC:1;                    /**< \brief [15:15] Write Control for Control Parameters (w) */
    unsigned int reserved_16:15;            /**< \brief \internal Reserved */
    unsigned int SUCAL:1;                   /**< \brief [31:31] Start-Up Calibration (w) */
} Ifx_EVADC_GLOBCFG_Bits;

/** \brief  Input Class Reg0ster i, Global */
typedef struct _Ifx_EVADC_GLOBICLASS_Bits
{
    unsigned int STCS:5;                    /**< \brief [4:0] Sample Time Control for Standard Conversions (rw) */
    unsigned int reserved_5:1;              /**< \brief \internal Reserved */
    unsigned int AIPS:2;                    /**< \brief [7:6] Analog Input Precharge Control for Standard Conversions (rw) */
    unsigned int CMS:2;                     /**< \brief [9:8] Conversion Mode for Standard Conversions (rw) */
    unsigned int SESPS:1;                   /**< \brief [10:10] Spread Early Sample Point for Standard Conversions (rw) */
    unsigned int reserved_11:5;             /**< \brief \internal Reserved */
    unsigned int STCE:5;                    /**< \brief [20:16] Sample Time Control for EMUX Conversions (rw) */
    unsigned int reserved_21:1;             /**< \brief \internal Reserved */
    unsigned int AIPE:2;                    /**< \brief [23:22] Analog Input Precharge Control for EMUX Conversions (rw) */
    unsigned int CME:2;                     /**< \brief [25:24] Conversion Mode for EMUX Conversions (rw) */
    unsigned int SESPE:1;                   /**< \brief [26:26] Spread Early Sample Point for EMUX Conversions (rw) */
    unsigned int reserved_27:5;             /**< \brief \internal Reserved */
} Ifx_EVADC_GLOBICLASS_Bits;

/** \brief  Module Identification Register */
typedef struct _Ifx_EVADC_ID_Bits
{
    unsigned int MOD_REV:8;                 /**< \brief [7:0] Module Revision (r) */
    unsigned int MOD_TYPE:8;                /**< \brief [15:8] Module Type (r) */
    unsigned int MOD_NUMBER:16;             /**< \brief [31:16] Module Number (r) */
} Ifx_EVADC_ID_Bits;

/** \brief  Kernel Reset Register 0 */
typedef struct _Ifx_EVADC_KRST0_Bits
{
    unsigned int RST:1;                     /**< \brief [0:0] Kernel Reset (rwh) */
    unsigned int RSTSTAT:1;                 /**< \brief [1:1] Kernel Reset Status (rh) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_EVADC_KRST0_Bits;

/** \brief  Kernel Reset Register 1 */
typedef struct _Ifx_EVADC_KRST1_Bits
{
    unsigned int RST:1;                     /**< \brief [0:0] Kernel Reset (rwh) */
    unsigned int reserved_1:31;             /**< \brief \internal Reserved */
} Ifx_EVADC_KRST1_Bits;

/** \brief  Kernel Reset Status Clear Register */
typedef struct _Ifx_EVADC_KRSTCLR_Bits
{
    unsigned int CLR:1;                     /**< \brief [0:0] Kernel Reset Status Clear (w) */
    unsigned int reserved_1:31;             /**< \brief \internal Reserved */
} Ifx_EVADC_KRSTCLR_Bits;

/** \brief  OCDS Control and Status Register */
typedef struct _Ifx_EVADC_OCS_Bits
{
    unsigned int TGS:2;                     /**< \brief [1:0] Trigger Set for OTGB0/1 (rw) */
    unsigned int TGB:1;                     /**< \brief [2:2] OTGB0/1 Bus Select (rw) */
    unsigned int TG_P:1;                    /**< \brief [3:3] TGS, TGB Write Protection (w) */
    unsigned int reserved_4:20;             /**< \brief \internal Reserved */
    unsigned int SUS:4;                     /**< \brief [27:24] OCDS Suspend Control (rw) */
    unsigned int SUS_P:1;                   /**< \brief [28:28] SUS Write Protection (w) */
    unsigned int SUSSTA:1;                  /**< \brief [29:29] Suspend State (rh) */
    unsigned int reserved_30:2;             /**< \brief \internal Reserved */
} Ifx_EVADC_OCS_Bits;

/** \brief  Queue 0 Register 0, Group 0 */
typedef struct _Ifx_EVADC_G_Q_Q0R_Bits
{
    unsigned int REQCHNR:5;                 /**< \brief [4:0] Request Channel Number (rh) */
    unsigned int RF:1;                      /**< \brief [5:5] Refill (rh) */
    unsigned int ENSI:1;                    /**< \brief [6:6] Enable Source Interrupt (rh) */
    unsigned int EXTR:1;                    /**< \brief [7:7] External Trigger (rh) */
    unsigned int V:1;                       /**< \brief [8:8] Request Channel Number Valid (rh) */
    unsigned int PDD:1;                     /**< \brief [9:9] Pull-Down Diagnostics Enable (rh) */
    unsigned int MDPD:1;                    /**< \brief [10:10] Multiplexer Diagnostics Pull-Devices Enable (rh) */
    unsigned int MDPU:1;                    /**< \brief [11:11] Multiplexer Diagnostics Pull-Devices Enable - MDPD,MDPU (rh) */
    unsigned int CDEN:1;                    /**< \brief [12:12] Converter Diagnostics Enable (rh) */
    unsigned int CDSEL:2;                   /**< \brief [14:13] Converter Diagnostics Pull-Devices Select (rh) */
    unsigned int reserved_15:17;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_Q_Q0R_Bits;

/** \brief  Queue 0 Source Contr. Register, Group 0 */
typedef struct _Ifx_EVADC_G_Q_QCTRL_Bits
{
    unsigned int SRCRESREG:4;               /**< \brief [3:0] Source-specific Result Register (rw) */
    unsigned int reserved_4:2;              /**< \brief \internal Reserved */
    unsigned int TRSEL:2;                   /**< \brief [7:6] Trigger Source Selection (rw) */
    unsigned int XTSEL:4;                   /**< \brief [11:8] External Trigger Input Selection (rw) */
    unsigned int XTLVL:1;                   /**< \brief [12:12] External Trigger Level (rh) */
    unsigned int XTMODE:2;                  /**< \brief [14:13] Trigger Operating Mode (rw) */
    unsigned int XTWC:1;                    /**< \brief [15:15] Write Control for Trigger Configuration (w) */
    unsigned int GTSEL:4;                   /**< \brief [19:16] Gate Input Selection (rw) */
    unsigned int GTLVL:1;                   /**< \brief [20:20] Gate Input Level (rh) */
    unsigned int reserved_21:2;             /**< \brief \internal Reserved */
    unsigned int GTWC:1;                    /**< \brief [23:23] Write Control for Gate Configuration (w) */
    unsigned int reserved_24:4;             /**< \brief \internal Reserved */
    unsigned int TMEN:1;                    /**< \brief [28:28] Timer Mode Enable (rw) */
    unsigned int reserved_29:2;             /**< \brief \internal Reserved */
    unsigned int TMWC:1;                    /**< \brief [31:31] Write Control for Timer Mode (w) */
} Ifx_EVADC_G_Q_QCTRL_Bits;

/** \brief  Queue 0 Input Register, Group 0 */
typedef struct _Ifx_EVADC_G_Q_QINR_Bits
{
    unsigned int REQCHNR:5;                 /**< \brief [4:0] Request Channel Number (w) */
    unsigned int RF:1;                      /**< \brief [5:5] Refill (w) */
    unsigned int ENSI:1;                    /**< \brief [6:6] Enable Source Interrupt (w) */
    unsigned int EXTR:1;                    /**< \brief [7:7] External Trigger (w) */
    unsigned int reserved_8:1;              /**< \brief \internal Reserved */
    unsigned int PDD:1;                     /**< \brief [9:9] Pull-Down Diagnostics Enable (w) */
    unsigned int MDPD:1;                    /**< \brief [10:10] Multiplexer Diagnostics Pull-Devices Enable (w) */
    unsigned int MDPU:1;                    /**< \brief [11:11] Multiplexer Diagnostics Pull-Devices Enable - MDPD,MDPU (w) */
    unsigned int CDEN:1;                    /**< \brief [12:12] Converter Diagnostics Enable (w) */
    unsigned int CDSEL:2;                   /**< \brief [14:13] Converter Diagnostics Pull-Devices Select (w) */
    unsigned int reserved_15:17;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_Q_QINR_Bits;

/** \brief  Queue 0 Mode Register, Group 0 */
typedef struct _Ifx_EVADC_G_Q_QMR_Bits
{
    unsigned int ENGT:2;                    /**< \brief [1:0] Enable Gate (rw) */
    unsigned int ENTR:1;                    /**< \brief [2:2] Enable External Trigger (rw) */
    unsigned int reserved_3:5;              /**< \brief \internal Reserved */
    unsigned int CLRV:1;                    /**< \brief [8:8] Clear Valid Bit (w) */
    unsigned int TREV:1;                    /**< \brief [9:9] Trigger Event (w) */
    unsigned int FLUSH:1;                   /**< \brief [10:10] Flush Queue (w) */
    unsigned int CEV:1;                     /**< \brief [11:11] Clear Event Flag (w) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int RPTDIS:1;                  /**< \brief [16:16] Repeat Disable (rw) */
    unsigned int reserved_17:15;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_Q_QMR_Bits;

/** \brief  Queue 0 Status Register, Group 0 */
typedef struct _Ifx_EVADC_G_Q_QSR_Bits
{
    unsigned int FILL:4;                    /**< \brief [3:0] Filling Level for Queue (rh) */
    unsigned int reserved_4:1;              /**< \brief \internal Reserved */
    unsigned int EMPTY:1;                   /**< \brief [5:5] Queue Empty (rh) */
    unsigned int reserved_6:1;              /**< \brief \internal Reserved */
    unsigned int REQGT:1;                   /**< \brief [7:7] Request Gate Level (rh) */
    unsigned int EV:1;                      /**< \brief [8:8] Event Detected (rh) */
    unsigned int reserved_9:23;             /**< \brief \internal Reserved */
} Ifx_EVADC_G_Q_QSR_Bits;

/** \brief  Queue 0 Requ. Timer Mode Reg., Group 0 */
typedef struct _Ifx_EVADC_G_Q2_TRCTR_Bits
{
    unsigned int SEQMOD:6;                  /**< \brief [5:0] Trigger Sequence Counter (rw) */
    unsigned int reserved_6:8;              /**< \brief \internal Reserved */
    unsigned int QACT:1;                    /**< \brief [14:14] Queue Active (rw) */
    unsigned int OV:1;                      /**< \brief [15:15] Overflow Detected (w) */
    unsigned int TSCSET:6;                  /**< \brief [21:16] Trigger Sequence Counter Start Value (rw) */
    unsigned int reserved_22:2;             /**< \brief \internal Reserved */
    unsigned int ITSEL:2;                   /**< \brief [25:24] Internal Trigger Input Selection (rw) */
    unsigned int reserved_26:2;             /**< \brief \internal Reserved */
    unsigned int SRDIS:1;                   /**< \brief [28:28] Service Request Disable (rw) */
    unsigned int reserved_29:2;             /**< \brief \internal Reserved */
    unsigned int COV:1;                     /**< \brief [31:31] Clear Overflow Flag (rw) */	
} Ifx_EVADC_G_Q2_TRCTR_Bits;

/** \brief  Queue 0 Requ. Timer Mode Reg., Group 0 */
typedef struct _Ifx_EVADC_G_Q_REQTM_Bits
{
    unsigned int SEQMOD:2;                  /**< \brief [1:0] Sequence Mode (rw) */
    unsigned int reserved_2:4;              /**< \brief \internal Reserved */
    unsigned int SEQTIMSET:10;              /**< \brief [15:6] Sequence Timer, Set Value (rw) */
    unsigned int REQTS:1;                   /**< \brief [16:16] Request Timer Start Trigger (w) */
    unsigned int ENTR:1;                    /**< \brief [17:17] Enable External Trigger (rw) */
    unsigned int reserved_18:4;             /**< \brief \internal Reserved */
    unsigned int SEQTIMOFF:10;              /**< \brief [31:22] Sequence Timer, Switch Off Value (rw) */
} Ifx_EVADC_G_Q_REQTM_Bits;

/** \brief  Queue 0 Requ. Timer Status Reg., Group 0 */
typedef struct _Ifx_EVADC_G_Q_REQTS_Bits
{
    unsigned int reserved_0:6;              /**< \brief \internal Reserved */
    unsigned int SEQTIMER:10;               /**< \brief [15:6] Sequence Timer (rh) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_EVADC_G_Q_REQTS_Bits;

/** \brief  Group Result Control Register */
typedef struct _Ifx_EVADC_G_RCR_Bits
{
    unsigned int reserved_0:16;             /**< \brief \internal Reserved */
    unsigned int DRCTR:4;                   /**< \brief [19:16] Data Reduction Control (rw) */
    unsigned int DMM:2;                     /**< \brief [21:20] Data Modification Mode (rw) */
    unsigned int reserved_22:2;             /**< \brief \internal Reserved */
    unsigned int WFR:1;                     /**< \brief [24:24] Wait-for-Read Mode Enable (rw) */
    unsigned int FEN:2;                     /**< \brief [26:25] FIFO Mode Enable (rw) */
    unsigned int reserved_27:4;             /**< \brief \internal Reserved */
    unsigned int SRGEN:1;                   /**< \brief [31:31] Service Request Generation Enable (rw) */
} Ifx_EVADC_G_RCR_Bits;

/** \brief  Group Result Register */
typedef struct _Ifx_EVADC_G_RES_Bits
{
    unsigned int RESULT:16;                 /**< \brief [15:0] Result of Most Recent Conversion (rwh) */
    unsigned int DRC:4;                     /**< \brief [19:16] Data Reduction Counter (rh) */
    unsigned int CHNR:5;                    /**< \brief [24:20] Channel Number (rh) */
    unsigned int EMUX:3;                    /**< \brief [27:25] External Multiplexer Setting (rh) */
    unsigned int CRS:2;                     /**< \brief [29:28] Converted Request Source (rh) */
    unsigned int reserved_30:1;             /**< \brief \internal Reserved */
    unsigned int VF:1;                      /**< \brief [31:31] Valid Flag (rh) */
} Ifx_EVADC_G_RES_Bits;

/** \brief  Group Result Reg., Debug */
typedef struct _Ifx_EVADC_G_RESD_Bits
{
    unsigned int RESULT:16;                 /**< \brief [15:0] Result of Most Recent Conversion (rh) */
    unsigned int DRC:4;                     /**< \brief [19:16] Data Reduction Counter (rh) */
    unsigned int CHNR:5;                    /**< \brief [24:20] Channel Number (rh) */
    unsigned int EMUX:3;                    /**< \brief [27:25] External Multiplexer Setting (rh) */
    unsigned int CRS:2;                     /**< \brief [29:28] Converted Request Source (rh) */
    unsigned int reserved_30:1;             /**< \brief \internal Reserved */
    unsigned int VF:1;                      /**< \brief [31:31] Valid Flag (rh) */
} Ifx_EVADC_G_RESD_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Evadc_union
 * \{  */

/** \brief  Access Enable Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_ACCEN0_Bits B;                /**< \brief Bitfield access */
} Ifx_EVADC_ACCEN0;

/** \brief  Access Enable Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_ACCEN1_Bits B;                /**< \brief Bitfield access */
} Ifx_EVADC_ACCEN1;

/** \brief  Access Protection Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_ACCPROT0_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_ACCPROT0;

/** \brief  Access Protection Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_ACCPROT1_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_ACCPROT1;

/** \brief  Access Protection Register 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_ACCPROT2_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_ACCPROT2;

/** \brief  Group, Channel Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_CHCTR_Bits B;                 /**< \brief Bitfield access */
} Ifx_EVADC_G_CHCTR;

/** \brief  Clock Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_CLC_Bits B;                   /**< \brief Bitfield access */
} Ifx_EVADC_CLC;

/** \brief  External Multiplexer Interface Select Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_EMUXSEL_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_EMUXSEL;

/** \brief  Boundary Flag Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_FCG_FCBFL_Bits B;             /**< \brief Bitfield access */
} Ifx_EVADC_FCG_FCBFL;

/** \brief  Fast Compare Control Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_FCG_FCCTRL_Bits B;            /**< \brief Bitfield access */
} Ifx_EVADC_FCG_FCCTRL;

/** \brief  Fast Comp. Hysteresis Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_FCG_FCHYST_Bits B;            /**< \brief Bitfield access */
} Ifx_EVADC_FCG_FCHYST;

/** \brief  Fast Compare Mode Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_FCG_FCM_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_FCG_FCM;

/** \brief  Fast Compare Ramp Register 0, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_FCG_FCRAMP0_Bits B;           /**< \brief Bitfield access */
} Ifx_EVADC_FCG_FCRAMP0;

/** \brief  Fast Compare Ramp Register 1, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_FCG_FCRAMP1_Bits B;           /**< \brief Bitfield access */
} Ifx_EVADC_FCG_FCRAMP1;

/** \brief  Alias Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_ALIAS_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_ALIAS;

/** \brief  Analog Fct. Config. Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_ANCFG_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_ANCFG;

/** \brief  Arbitration Config. Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_ARBCFG_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_ARBCFG;

/** \brief  Arbitration Priority Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_ARBPR_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_ARBPR;

/** \brief  Boundary Select Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_BOUND_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_BOUND;

/** \brief  Channel Event Flag Clear Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_CEFCLR_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_CEFCLR;

/** \brief  Channel Event Flag Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_CEFLAG_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_CEFLAG;

/** \brief  Channel Event Node Pointer Reg. 0, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_CEVNP0_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_CEVNP0;

/** \brief Channel Event Node Pointer Register 1, Group    */
typedef union
{
    unsigned int U;                 /**< \brief Unsigned access */
    signed int I;                 /**< \brief Signed access */
    Ifx_EVADC_G_CEVNP1_Bits B;        /**< \brief Bitfield access */
} Ifx_EVADC_G_CEVNP1;

/** \brief  Ext. Multiplexer Channel Select Reg., Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_EMUXCS_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_EMUXCS;

/** \brief  External Multiplexer Control Reg., Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_EMUXCTR_Bits B;             /**< \brief Bitfield access */
} Ifx_EVADC_G_EMUXCTR;

/** \brief  Input Class Reg0ster i, Group 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_ICLASS_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_ICLASS;

/** \brief  Result Event Flag Clear Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_REFCLR_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_REFCLR;

/** \brief  Result Event Flag Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_REFLAG_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_REFLAG;

/** \brief  Result Event Node Pointer Reg. 0, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_REVNP0_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_REVNP0;

/** \brief  Result Event Node Pointer Reg. 1, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_REVNP1_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_REVNP1;

/** \brief  Source Event Flag Clear Reg., Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_SEFCLR_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_SEFCLR;

/** \brief  Source Event Flag Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_SEFLAG_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_SEFLAG;

/** \brief  Source Event Node Pointer Reg., Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_SEVNP_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_SEVNP;

/** \brief  Service Request Software Activation Trigger, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_SRACT_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_SRACT;

/** \brief  Synchronization Control Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_SYNCTR_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_G_SYNCTR;

/** \brief  Valid Flag Register, Group */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_VFR_Bits B;                 /**< \brief Bitfield access */
} Ifx_EVADC_G_VFR;

/** \brief  Global Boundary Select Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOB_BOUND_Bits B;            /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_BOUND;

/** \brief  Global Event Flag Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOB_EFLAG_Bits B;            /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_EFLAG;

/** \brief  Global Event Node Pointer Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOB_EVNP_Bits B;             /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_EVNP;

/** \brief  Global Result Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOB_RCR_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_RCR;

/** \brief  Global Result Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOB_RES_Bits B;              /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_RES;

/** \brief  Global Result Register, Debug */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOB_RESD_Bits B;             /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_RESD;

/** \brief  Global Test Enable Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOB_TE_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_TE;

/** \brief  Global Test Functions Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOB_TF_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_GLOB_TF;

/** \brief  Global Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOBCFG_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_GLOBCFG;

/** \brief  Input Class Reg0ster i, Global */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_GLOBICLASS_Bits B;            /**< \brief Bitfield access */
} Ifx_EVADC_GLOBICLASS;

/** \brief  Module Identification Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_ID_Bits B;                    /**< \brief Bitfield access */
} Ifx_EVADC_ID;

/** \brief  Kernel Reset Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_KRST0_Bits B;                 /**< \brief Bitfield access */
} Ifx_EVADC_KRST0;

/** \brief  Kernel Reset Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_KRST1_Bits B;                 /**< \brief Bitfield access */
} Ifx_EVADC_KRST1;

/** \brief  Kernel Reset Status Clear Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_KRSTCLR_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_KRSTCLR;

/** \brief  OCDS Control and Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_OCS_Bits B;                   /**< \brief Bitfield access */
} Ifx_EVADC_OCS;

/** \brief  Queue 0 Register 0, Group 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_Q_Q0R_Bits B;                 /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_Q0R;

/** \brief  Queue 0 Source Contr. Register, Group 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_Q_QCTRL_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QCTRL;

/** \brief  Queue 0 Input Register, Group 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_Q_QINR_Bits B;                /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QINR;

/** \brief  Queue 0 Mode Register, Group 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_Q_QMR_Bits B;                 /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QMR;

/** \brief  Queue 0 Status Register, Group 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_Q_QSR_Bits B;                 /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_QSR;

/** \brief  Queue 2 Requ. rigger Control Reg., Group x */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_Q2_TRCTR_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_Q2_TRCTR;

/** \brief  Queue 0 Requ. Timer Mode Reg., Group 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_Q_REQTM_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_REQTM;

/** \brief  Queue 0 Requ. Timer Status Reg., Group 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_Q_REQTS_Bits B;               /**< \brief Bitfield access */
} Ifx_EVADC_G_Q_REQTS;

/** \brief  Group Result Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_RCR_Bits B;                   /**< \brief Bitfield access */
} Ifx_EVADC_G_RCR;

/** \brief  Group Result Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_RES_Bits B;                   /**< \brief Bitfield access */
} Ifx_EVADC_G_RES;

/** \brief  Group Result Reg., Debug */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_EVADC_G_RESD_Bits B;                  /**< \brief Bitfield access */
} Ifx_EVADC_G_RESD;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Evadc_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */

/** \brief  Queue objects */
typedef volatile struct _Ifx_EVADC_G_Q
{
    Ifx_EVADC_G_Q_QCTRL QCTRL;                /**< \brief 0, Queue 0 Source Contr. Register, Group 0 */
    Ifx_EVADC_G_Q_QMR QMR;                    /**< \brief 4, Queue 0 Mode Register, Group 0 */
    Ifx_EVADC_G_Q_QSR QSR;                    /**< \brief 8, Queue 0 Status Register, Group 0 */
    Ifx_EVADC_G_Q_Q0R Q0R;                    /**< \brief C, Queue 0 Register 0, Group 0 */
    Ifx_EVADC_G_Q_QINR QINR;                  /**< \brief 10, Queue 0 Input Register, Group 0 */
    unsigned char reserved_14[4];           /**< \brief 14, \internal Reserved */
    Ifx_EVADC_G_Q_REQTM REQTM;                /**< \brief 18, Queue 0 Requ. Timer Mode Reg., Group 0 */
    Ifx_EVADC_G_Q_REQTS REQTS;                /**< \brief 1C, Queue 0 Requ. Timer Status Reg., Group 0 */
} Ifx_EVADC_G_Q;

/** \brief  Queue objects */
typedef volatile struct _Ifx_EVADC_G_Q2
{
    Ifx_EVADC_G_Q_QCTRL QCTRL;                /**< \brief 0, Queue 0 Source Contr. Register, Group 0 */
    Ifx_EVADC_G_Q_QMR QMR;                    /**< \brief 4, Queue 0 Mode Register, Group 0 */
    Ifx_EVADC_G_Q_QSR QSR;                    /**< \brief 8, Queue 0 Status Register, Group 0 */
    Ifx_EVADC_G_Q_Q0R Q0R;                    /**< \brief C, Queue 0 Register 0, Group 0 */
    Ifx_EVADC_G_Q_QINR QINR;                  /**< \brief 10, Queue 0 Input Register, Group 0 */
    Ifx_EVADC_G_Q2_TRCTR TRCTR;                 /**< \brief 14, \internal Reserved */
    Ifx_EVADC_G_Q_REQTM REQTM;                /**< \brief 18, Queue 0 Requ. Timer Mode Reg., Group 0 */
    Ifx_EVADC_G_Q_REQTS REQTS;                /**< \brief 1C, Queue 0 Requ. Timer Status Reg., Group 0 */
} Ifx_EVADC_G_Q2;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Evadc_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \brief  Fast Compare Group objects */
typedef volatile struct _Ifx_EVADC_FCG
{
    Ifx_EVADC_FCG_FCCTRL FCCTRL;            /**< \brief 0, Fast Compare Control Register, Group  */
    Ifx_EVADC_FCG_FCM FCM;                  /**< \brief 4, Fast Compare Mode Register, Group  */
    Ifx_EVADC_FCG_FCRAMP0 FCRAMP0;          /**< \brief 8, Fast Compare Ramp Register 0, Group  */
    Ifx_EVADC_FCG_FCRAMP1 FCRAMP1;          /**< \brief C, Fast Compare Ramp Register 1, Group  */
    unsigned char reserved_10[16];          /**< \brief 10, \internal Reserved */
    Ifx_EVADC_FCG_FCBFL FCBFL;              /**< \brief 20, Boundary Flag Register, Group  */
    Ifx_EVADC_FCG_FCHYST FCHYST;            /**< \brief 24, Fast Comp. Hysteresis Register, Group  */
    unsigned char reserved_28[216];         /**< \brief 28, \internal Reserved */
} Ifx_EVADC_FCG;

/** \brief  Group objects */
typedef volatile struct _Ifx_EVADC_G
{
    unsigned char reserved_0[128];          /**< \brief 0, \internal Reserved */
    Ifx_EVADC_G_ARBCFG ARBCFG;              /**< \brief 80, Arbitration Config. Register, Group  */
    Ifx_EVADC_G_ARBPR ARBPR;                /**< \brief 84, Arbitration Priority Register, Group  */
    Ifx_EVADC_G_ANCFG ANCFG;                /**< \brief 88, Analog Fct. Config. Register, Group  */
    unsigned char reserved_8C[20];          /**< \brief 8C, \internal Reserved */
    Ifx_EVADC_G_ICLASS ICLASS[2];           /**< \brief A0, Input Class Reg0ster i, Group  */
    unsigned char reserved_A8[8];           /**< \brief A8, \internal Reserved */
    Ifx_EVADC_G_ALIAS ALIAS;                /**< \brief B0, Alias Register, Group  */
    unsigned char reserved_B4[4];           /**< \brief B4, \internal Reserved */
    Ifx_EVADC_G_BOUND BOUND;                /**< \brief B8, Boundary Select Register, Group  */
    unsigned char reserved_BC[4];           /**< \brief BC, \internal Reserved */
    Ifx_EVADC_G_SYNCTR SYNCTR;              /**< \brief C0, Synchronization Control Register, Group  */
    unsigned char reserved_C4[60];          /**< \brief C4, \internal Reserved */
    Ifx_EVADC_G_Q Q[2];                     /**< \brief 100, Queue objects */
    Ifx_EVADC_G_Q2 Q2;                      /**< \brief 140, Queue objects */
    unsigned char reserved_160[32];         /**< \brief 160, \internal Reserved */
    Ifx_EVADC_G_CEFLAG CEFLAG;              /**< \brief 180, Channel Event Flag Register, Group  */
    Ifx_EVADC_G_REFLAG REFLAG;              /**< \brief 184, Result Event Flag Register, Group  */
    Ifx_EVADC_G_SEFLAG SEFLAG;              /**< \brief 188, Source Event Flag Register, Group  */
    unsigned char reserved_18C[4];          /**< \brief 18C, \internal Reserved */
    Ifx_EVADC_G_CEFCLR CEFCLR;              /**< \brief 190, Channel Event Flag Clear Register, Group  */
    Ifx_EVADC_G_REFCLR REFCLR;              /**< \brief 194, Result Event Flag Clear Register, Group  */
    Ifx_EVADC_G_SEFCLR SEFCLR;              /**< \brief 198, Source Event Flag Clear Reg., Group  */
    unsigned char reserved_19C[4];          /**< \brief 19C, \internal Reserved */
    Ifx_EVADC_G_CEVNP0 CEVNP0;              /**< \brief 1A0, Channel Event Node Pointer Reg. 0, Group  */
    Ifx_EVADC_G_CEVNP1 CEVNP1;                 /**< \brief 1A4, Channel Event Node Pointer Register 1, Group ${i}*/
    unsigned char      reserved_1A8[8];        /**< \brief 1A8, \internal Reserved */
    Ifx_EVADC_G_REVNP0 REVNP0;              /**< \brief 1B0, Result Event Node Pointer Reg. 0, Group  */
    Ifx_EVADC_G_REVNP1 REVNP1;              /**< \brief 1B4, Result Event Node Pointer Reg. 1, Group  */
    unsigned char reserved_1B8[8];          /**< \brief 1B8, \internal Reserved */
    Ifx_EVADC_G_SEVNP SEVNP;                /**< \brief 1C0, Source Event Node Pointer Reg., Group  */
    unsigned char reserved_1C4[4];          /**< \brief 1C4, \internal Reserved */
    Ifx_EVADC_G_SRACT SRACT;                /**< \brief 1C8, Service Request Software Activation Trigger, Group  */
    unsigned char reserved_1CC[36];         /**< \brief 1CC, \internal Reserved */
    Ifx_EVADC_G_EMUXCTR EMUXCTR;            /**< \brief 1F0, External Multiplexer Control Reg., Group  */
    Ifx_EVADC_G_EMUXCS EMUXCS;              /**< \brief 1F4, Ext. Multiplexer Channel Select Reg., Group  */
    Ifx_EVADC_G_VFR VFR;                    /**< \brief 1F8, Valid Flag Register, Group  */
    unsigned char reserved_1FC[4];          /**< \brief 1FC, \internal Reserved */
    Ifx_EVADC_G_CHCTR CHCTR[16];              /**< \brief 200, Group, Channel Control Register */
    unsigned char reserved_240[64];         /**< \brief 240, \internal Reserved */
    Ifx_EVADC_G_RCR RCR[16];                  /**< \brief 280, Group Result Control Register */
    unsigned char reserved_2C0[64];         /**< \brief 2C0, \internal Reserved */
    Ifx_EVADC_G_RES RES[16];                  /**< \brief 300, Group Result Register */
    unsigned char reserved_340[64];         /**< \brief 340, \internal Reserved */
    Ifx_EVADC_G_RESD RESD[16];                /**< \brief 380, Group Result Reg., Debug */
    unsigned char reserved_3C0[64];         /**< \brief 3C0, \internal Reserved */
} Ifx_EVADC_G;

/** \brief  GLOB Objects */
typedef volatile struct _Ifx_EVADC_GLOB
{
    Ifx_EVADC_GLOBICLASS ICLASS[2];         /**< \brief 0, Input Class Reg0ster i, Global */
    unsigned char reserved_8[16];           /**< \brief 8, \internal Reserved */
    Ifx_EVADC_GLOB_BOUND BOUND;             /**< \brief 18, Global Boundary Select Register */
    unsigned char reserved_1C[36];          /**< \brief 1C, \internal Reserved */
    Ifx_EVADC_GLOB_EFLAG EFLAG;             /**< \brief 40, Global Event Flag Register */
    unsigned char reserved_44[92];          /**< \brief 44, \internal Reserved */
    Ifx_EVADC_GLOB_EVNP EVNP;               /**< \brief A0, Global Event Node Pointer Register */
    unsigned char reserved_A4[28];          /**< \brief A4, \internal Reserved */
    Ifx_EVADC_GLOB_TF TF;                   /**< \brief C0, Global Test Functions Register */
    Ifx_EVADC_GLOB_TE TE;                   /**< \brief C4, Global Test Enable Register */
    unsigned char reserved_C8[280];         /**< \brief C8, \internal Reserved */
    Ifx_EVADC_GLOB_RCR RCR;                 /**< \brief 1E0, Global Result Control Register */
    unsigned char reserved_1E4[124];        /**< \brief 1E4, \internal Reserved */
    Ifx_EVADC_GLOB_RES RES;                 /**< \brief 260, Global Result Register */
    unsigned char reserved_264[124];        /**< \brief 264, \internal Reserved */
    Ifx_EVADC_GLOB_RESD RESD;               /**< \brief 2E0, Global Result Register, Debug */
} Ifx_EVADC_GLOB;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Evadc_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief  EVADC object */
typedef volatile struct _Ifx_EVADC
{
    Ifx_EVADC_CLC CLC;                      /**< \brief 0, Clock Control Register */
    unsigned char reserved_4[4];            /**< \brief 4, \internal Reserved */
    Ifx_EVADC_ID ID;                        /**< \brief 8, Module Identification Register */
    unsigned char reserved_C[28];           /**< \brief C, \internal Reserved */
    Ifx_EVADC_OCS OCS;                      /**< \brief 28, OCDS Control and Status Register */
    Ifx_EVADC_KRSTCLR KRSTCLR;              /**< \brief 2C, Kernel Reset Status Clear Register */
    Ifx_EVADC_KRST1 KRST1;                  /**< \brief 30, Kernel Reset Register 1 */
    Ifx_EVADC_KRST0 KRST0;                  /**< \brief 34, Kernel Reset Register 0 */
    Ifx_EVADC_ACCEN1 ACCEN1;                /**< \brief 38, Access Enable Register 1 */
    Ifx_EVADC_ACCEN0 ACCEN0;                /**< \brief 3C, Access Enable Register 0 */
    unsigned char reserved_40[64];          /**< \brief 40, \internal Reserved */
    Ifx_EVADC_GLOBCFG GLOBCFG;              /**< \brief 80, Global Configuration Register */
    unsigned char reserved_84[4];           /**< \brief 84, \internal Reserved */
    Ifx_EVADC_ACCPROT0 ACCPROT0;            /**< \brief 88, Access Protection Register 0 */
    Ifx_EVADC_ACCPROT1 ACCPROT1;            /**< \brief 8C, Access Protection Register 1 */
    Ifx_EVADC_ACCPROT2 ACCPROT2;            /**< \brief 90, Access Protection Register 2 */
    unsigned char reserved_94[12];          /**< \brief 94, \internal Reserved */
    Ifx_EVADC_GLOB GLOB;                    /**< \brief A0, GLOB Objects */
    unsigned char reserved_384[108];        /**< \brief 384, \internal Reserved */
    Ifx_EVADC_EMUXSEL EMUXSEL;              /**< \brief 3F0, External Multiplexer Interface Select Register */
    unsigned char reserved_3F4[12];         /**< \brief 3F4, \internal Reserved */
    Ifx_EVADC_G G[12];                      /**< \brief 400, Group objects */
    Ifx_EVADC_FCG FCG[8];                   /**< \brief 3400, Fast Compare Group objects */
    unsigned char reserved_3C00[1024];      /**< \brief 3C00, \internal Reserved */
} Ifx_EVADC;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEVADC_REGDEF_H */
