/**
 * \file IfxDmu_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: DMU_AURIXTC3XX_its_MCSFR.xml
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
 * \defgroup IfxLld_Dmu Dmu
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Dmu_Bitfields Bitfields
 * \ingroup IfxLld_Dmu
 * 
 * \defgroup IfxLld_Dmu_union Union
 * \ingroup IfxLld_Dmu
 * 
 * \defgroup IfxLld_Dmu_struct Struct
 * \ingroup IfxLld_Dmu
 * 
 */
#ifndef IFXDMU_REGDEF_H
#define IFXDMU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Dmu_Bitfields
 * \{  */

/** \brief  Access Enable Register 0 */
typedef struct _Ifx_DMU_HF_ACCEN0_Bits
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
} Ifx_DMU_HF_ACCEN0_Bits;

/** \brief  Access Enable Register 1 */
typedef struct _Ifx_DMU_HF_ACCEN1_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_ACCEN1_Bits;

/** \brief  Cranking Control Register */
typedef struct _Ifx_DMU_HF_CCONTROL_Bits
{
    unsigned int CRANKING:2;                /**< \brief [1:0] Cranking Mode Control (rw) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_CCONTROL_Bits;

/** \brief  Clear Error Register */
typedef struct _Ifx_DMU_HF_CLRE_Bits
{
    unsigned int reserved_0:1;              /**< \brief \internal Reserved */
    unsigned int CSQER:1;                   /**< \brief [1:1] Clear Command Sequence Error (w) */
    unsigned int CPROER:1;                  /**< \brief [2:2] Clear Protection Error (w) */
    unsigned int CPVER:1;                   /**< \brief [3:3] Clear Program Verify Error (w) */
    unsigned int CEVER:1;                   /**< \brief [4:4] Clear Erase Verify Error (w) */
    unsigned int CADER:1;                   /**< \brief [5:5] Clear SRI Bus Address ECC Error (w) */
    unsigned int reserved_6:26;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_CLRE_Bits;

/** \brief  Flash Confirm Status Register 0 */
typedef struct _Ifx_DMU_HF_CONFIRM0_Bits
{
    unsigned int PROINBMHD0O:2;             /**< \brief [1:0] UCB_BMHD0_ORIG Confirmation (rh) */
    unsigned int PROINBMHD1O:2;             /**< \brief [3:2] UCB_BMHD1_ORIG Confirmation (rh) */
    unsigned int PROINBMHD2O:2;             /**< \brief [5:4] UCB_BMHD2_ORIG Confirmation (rh) */
    unsigned int PROINBMHD3O:2;             /**< \brief [7:6] UCB_BMHD3_ORIG Confirmation (rh) */
    unsigned int PROINSSW:2;                /**< \brief [9:8] UCB_SSW Confirmation (rh) */
    unsigned int PROINUSER:2;               /**< \brief [11:10] UCB_USER Confirmation (rh) */
    unsigned int PROINTEST:2;               /**< \brief [13:12] UCB_TEST Confirmation (rh) */
    unsigned int PROINHSMCFG:2;             /**< \brief [15:14] UCB_HSMCFG Confirmation (rh) */
    unsigned int PROINBMHD0C:2;             /**< \brief [17:16] UCB_BMHD0_COPY Confirmation (rh) */
    unsigned int PROINBMHD1C:2;             /**< \brief [19:18] UCB_BMHD1_COPY Confirmation (rh) */
    unsigned int PROINBMHD2C:2;             /**< \brief [21:20] UCB_BMHD2_COPY Confirmation (rh) */
    unsigned int PROINBMHD3C:2;             /**< \brief [23:22] UCB_BMHD3_COPY Confirmation (rh) */
    unsigned int reserved_24:6;             /**< \brief \internal Reserved */
    unsigned int PROINSRT:2;                /**< \brief [31:30] UCB_RETEST Confirmation (rh) */
} Ifx_DMU_HF_CONFIRM0_Bits;

/** \brief  Flash Confirm Status Register 1 */
typedef struct _Ifx_DMU_HF_CONFIRM1_Bits
{
    unsigned int PROINPO:2;                 /**< \brief [1:0] UCB_PFLASH_ORIG Confirmation (rh) */
    unsigned int PROINDO:2;                 /**< \brief [3:2] UCB_DFLASH_ORIG Confirmation (rh) */
    unsigned int PROINDBGO:2;               /**< \brief [5:4] UCB_DBG_ORIG Confirmation (rh) */
    unsigned int PROINHSMO:2;               /**< \brief [7:6] UCB_HSM_ORIG Confirmation (rh) */
    unsigned int PROINHSMCOTP0O:2;          /**< \brief [9:8] UCB_HSMCOTP0_ORIG Protection (rh) */
    unsigned int PROINHSMCOTP1O:2;          /**< \brief [11:10] UCB_HSMCOTP1_ORIG Protection (rh) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int PROINPC:2;                 /**< \brief [17:16] UCB_PFLASH_COPY Confirmation (rh) */
    unsigned int PROINDC:2;                 /**< \brief [19:18] UCB_DFLASH_COPY Confirmation (rh) */
    unsigned int PROINDBGC:2;               /**< \brief [21:20] UCB_DBG_COPY Interface Confirmation (rh) */
    unsigned int PROINHSMC:2;               /**< \brief [23:22] UCB_HSM_COPY Confirmation (rh) */
    unsigned int PROINHSMCOTP0C:2;          /**< \brief [25:24] UCB_HSMCOTP0_COPY Protection (rh) */
    unsigned int PROINHSMCOTP1C:2;          /**< \brief [27:26] UCB_HSMCOTP1_COPY Protection (rh) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_CONFIRM1_Bits;

/** \brief  Flash Confirm Status Register 2 */
typedef struct _Ifx_DMU_HF_CONFIRM2_Bits
{
    unsigned int PROINOTP0O:2;              /**< \brief [1:0] UCB_OTP0_ORIG Confirmation (rh) */
    unsigned int PROINOTP1O:2;              /**< \brief [3:2] UCB_OTP1_ORIG Confirmation (rh) */
    unsigned int PROINOTP2O:2;              /**< \brief [5:4] UCB_OTP2_ORIG Confirmation (rh) */
    unsigned int PROINOTP3O:2;              /**< \brief [7:6] UCB_OTP3_ORIG Confirmation (rh) */
    unsigned int PROINOTP4O:2;              /**< \brief [9:8] UCB_OTP4_ORIG Confirmation (rh) */
    unsigned int PROINOTP5O:2;              /**< \brief [11:10] UCB_OTP5_ORIG Confirmation (rh) */
    unsigned int PROINOTP6O:2;              /**< \brief [13:12] UCB_OTP6_ORIG Confirmation (rh) */
    unsigned int PROINOTP7O:2;              /**< \brief [15:14] UCB_OTP7_ORIG Confirmation (rh) */
    unsigned int PROINOTP0C:2;              /**< \brief [17:16] UCB_OTP0_COPY Confirmation (rh) */
    unsigned int PROINOTP1C:2;              /**< \brief [19:18] UCB_OTP1_COPY Confirmation (rh) */
    unsigned int PROINOTP2C:2;              /**< \brief [21:20] UCB_OTP2_COPY Confirmation (rh) */
    unsigned int PROINOTP3C:2;              /**< \brief [23:22] UCB_OTP3_COPY Confirmation (rh) */
    unsigned int PROINOTP4C:2;              /**< \brief [25:24] UCB_OTP4_COPY Confirmation (rh) */
    unsigned int PROINOTP5C:2;              /**< \brief [27:26] UCB_OTP5_COPY Confirmation (rh) */
    unsigned int PROINOTP6C:2;              /**< \brief [29:28] UCB_OTP6_COPY Confirmation (rh) */
    unsigned int PROINOTP7C:2;              /**< \brief [31:30] UCB_OTP7_COPY Confirmation (rh) */
} Ifx_DMU_HF_CONFIRM2_Bits;

/** \brief  Flash Control Register */
typedef struct _Ifx_DMU_HF_CONTROL_Bits
{
    unsigned int FSISTART:3;                /**< \brief [2:0] Start FSI (rw) */
    unsigned int reserved_3:1;              /**< \brief \internal Reserved */
    unsigned int FSIENPE:2;                 /**< \brief [5:4] Enable Program/Erase (rw) */
    unsigned int reserved_6:2;              /**< \brief \internal Reserved */
    unsigned int DDFP:1;                    /**< \brief [8:8] Disable Read from PFLASH (rwh) */
    unsigned int DDFD:1;                    /**< \brief [9:9] Disable Data Fetch from DF0_EEPROM (rwh) */
    unsigned int reserved_10:6;             /**< \brief \internal Reserved */
    unsigned int CPROG:1;                   /**< \brief [16:16] Clear Programming State (w) */
    unsigned int CERASE:1;                  /**< \brief [17:17] Clear Erase State (w) */
    unsigned int CUSER:1;                   /**< \brief [18:18] Clear User State (w) */
    unsigned int reserved_19:13;            /**< \brief \internal Reserved */
} Ifx_DMU_HF_CONTROL_Bits;

/** \brief  DFLASH Size Configuration Register */
typedef struct _Ifx_DMU_HF_DSIZE_Bits
{
    unsigned int reserved_0:5;              /**< \brief \internal Reserved */
    unsigned int DF0:4;                     /**< \brief [8:5] Size of Data Flash Bank 0 (rw) */
    unsigned int reserved_9:12;             /**< \brief \internal Reserved */
    unsigned int DF1:1;                     /**< \brief [21:21] Size of Data Flash Bank 1 (rw) */
    unsigned int reserved_22:10;            /**< \brief \internal Reserved */
} Ifx_DMU_HF_DSIZE_Bits;

/** \brief  DFLASH Wait Cycle Register */
typedef struct _Ifx_DMU_HF_DWAIT_Bits
{
    unsigned int RFLASH1:8;                 /**< \brief [7:0] Operation Mode (rw) */
    unsigned int RFLASH2:8;                 /**< \brief [15:8] Operation Mode (rw) */
    unsigned int RECC:3;                    /**< \brief [18:16] Operation Mode (rw) */
    unsigned int reserved_19:13;            /**< \brief \internal Reserved */
} Ifx_DMU_HF_DWAIT_Bits;

/** \brief  DF0 ECC Control Register */
typedef struct _Ifx_DMU_HF_ECCC_Bits
{
    unsigned int CLR:2;                     /**< \brief [1:0] Clear ECC status bits (w) */
    unsigned int reserved_2:26;             /**< \brief \internal Reserved */
    unsigned int ECCCORDIS:2;               /**< \brief [29:28] Host Command Interface ECC Correction Disable (rw) */
    unsigned int TRAPDIS:2;                 /**< \brief [31:30] Host Command Interface Uncorrectable ECC Bit Error Trap Disable (rw) */
} Ifx_DMU_HF_ECCC_Bits;

/** \brief  DF0 ECC Read Register */
typedef struct _Ifx_DMU_HF_ECCR_Bits
{
    unsigned int RCODE:22;                  /**< \brief [21:0] Error Correction Read Code (rh) */
    unsigned int RED:2;                     /**< \brief [23:22] Redundant Bits (rh) */
    unsigned int reserved_24:8;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_ECCR_Bits;

/** \brief  DF0 ECC Status Register */
typedef struct _Ifx_DMU_HF_ECCS_Bits
{
    unsigned int ERR1:1;                    /**< \brief [0:0] Read Access Single Bit ECC Error (rh) */
    unsigned int ERR2:1;                    /**< \brief [1:1] Read Access Double Bit ECC Error (rh) */
    unsigned int ERR3:1;                    /**< \brief [2:2] Read Access Triple Bit ECC Error (rh) */
    unsigned int ERRM:1;                    /**< \brief [3:3] Read Access Multi-bit ECC Error (rh) */
    unsigned int reserved_4:3;              /**< \brief \internal Reserved */
    unsigned int ERRANY:1;                  /**< \brief [7:7] Any Read Access ECC Error (rh) */
    unsigned int BLANKD:1;                  /**< \brief [8:8] Read Access Blank Digital (rh) */
    unsigned int BLANKA:1;                  /**< \brief [9:9] Read Access Blank Analog (rh) */
    unsigned int reserved_10:6;             /**< \brief \internal Reserved */
    unsigned int AER1:1;                    /**< \brief [16:16] Accumulated Single Bit ECC Errors (rh) */
    unsigned int AER2:1;                    /**< \brief [17:17] Accumulated Double Bit ECC Errors (rh) */
    unsigned int AER3:1;                    /**< \brief [18:18] Accumulated Triple Bit ECC Errors (rh) */
    unsigned int AERM:1;                    /**< \brief [19:19] Accumulated Multi-bit ECC Errors (rh) */
    unsigned int reserved_20:3;             /**< \brief \internal Reserved */
    unsigned int AERANY:1;                  /**< \brief [23:23] Accumulated Any Read Access ECC Error (rh) */
    unsigned int ABLANKD:1;                 /**< \brief [24:24] Accumulated Blank Digital (rh) */
    unsigned int ABLANKA:1;                 /**< \brief [25:25] Accumulated Blank Analog (rh) */
    unsigned int reserved_26:6;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_ECCS_Bits;

/** \brief  DF0 ECC Write Register */
typedef struct _Ifx_DMU_HF_ECCW_Bits
{
    unsigned int WCODE:22;                  /**< \brief [21:0] Error Correction Write Code (rw) */
    unsigned int reserved_22:6;             /**< \brief \internal Reserved */
    unsigned int PECENCDIS:2;               /**< \brief [29:28] PFLASH ECC Encoding Disable (rw) */
    unsigned int DECENCDIS:2;               /**< \brief [31:30] DFLASH ECC Encoding Disable (rw) */
} Ifx_DMU_HF_ECCW_Bits;

/** \brief  Enable Error Interrupt Control Register */
typedef struct _Ifx_DMU_HF_EER_Bits
{
    unsigned int OPERM:1;                   /**< \brief [0:0] Operation Error Interrupt Mask (rw) */
    unsigned int SQERM:1;                   /**< \brief [1:1] Command Sequence Error Interrupt Mask (rw) */
    unsigned int PROERM:1;                  /**< \brief [2:2] Protection Error Interrupt Mask (rw) */
    unsigned int PVERM:1;                   /**< \brief [3:3] Program Verify Error Interrupt Mask (rw) */
    unsigned int EVERM:1;                   /**< \brief [4:4] Erase Verify Error Interrupt Mask (rw) */
    unsigned int reserved_5:26;             /**< \brief \internal Reserved */
    unsigned int EOBM:1;                    /**< \brief [31:31] End of Busy Interrupt Mask (rw) */
} Ifx_DMU_HF_EER_Bits;

/** \brief  Error Status Register */
typedef struct _Ifx_DMU_HF_ERRSR_Bits
{
    unsigned int OPER:1;                    /**< \brief [0:0] Flash Operation Error (rh) */
    unsigned int SQER:1;                    /**< \brief [1:1] Command Sequence Error (rh) */
    unsigned int PROER:1;                   /**< \brief [2:2] Protection Error (rh) */
    unsigned int PVER:1;                    /**< \brief [3:3] Program Verify Error (rh) */
    unsigned int EVER:1;                    /**< \brief [4:4] Erase Verify Error (rh) */
    unsigned int ADER:1;                    /**< \brief [5:5] SRI Bus Address ECC Error (rh) */
    unsigned int ORIER:1;                   /**< \brief [6:6] Original Error (rh) */
    unsigned int PWRER:1;                   /**< \brief [7:7] EVR Primary Monitor Error (rh) */
    unsigned int reserved_8:24;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_ERRSR_Bits;

/** \brief  Module Identification Register */
typedef struct _Ifx_DMU_HF_ID_Bits
{
    unsigned int MOD_REV:8;                 /**< \brief [7:0] Module Revision Number (r) */
    unsigned int MOD_TYPE:8;                /**< \brief [15:8] Module Type (r) */
    unsigned int MOD_NUMBER:8;              /**< \brief [23:16] Module Number Value (r) */
    unsigned int FLASH_REV:8;               /**< \brief [31:24] Flash Revision (r) */
} Ifx_DMU_HF_ID_Bits;

/** \brief  Margin Control Register */
typedef struct _Ifx_DMU_HF_MARGIN_Bits
{
    unsigned int SELD0:2;                   /**< \brief [1:0] DF0 Margin Read Selection (rw) */
    unsigned int reserved_2:6;              /**< \brief \internal Reserved */
    unsigned int HMARGIN:1;                 /**< \brief [8:8] Hard Margin Selection (rw) */
    unsigned int reserved_9:23;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_MARGIN_Bits;

/** \brief  Flash Operation Register */
typedef struct _Ifx_DMU_HF_OPERATION_Bits
{
    unsigned int PROG:1;                    /**< \brief [0:0] Programming State (rh) */
    unsigned int ERASE:1;                   /**< \brief [1:1] Erase State (rh) */
    unsigned int USER:1;                    /**< \brief [2:2] User State (rh) */
    unsigned int reserved_3:5;              /**< \brief \internal Reserved */
    unsigned int BOOTSTAT:3;                /**< \brief [10:8] FSI Boot Status (rh) */
    unsigned int reserved_11:21;            /**< \brief \internal Reserved */
} Ifx_DMU_HF_OPERATION_Bits;

/** \brief  Power Control Register */
typedef struct _Ifx_DMU_HF_PCONTROL_Bits
{
    unsigned int SLEEP:2;                   /**< \brief [1:0] Sleep Mode Control (rw) */
    unsigned int reserved_2:6;              /**< \brief \internal Reserved */
    unsigned int IDLE:2;                    /**< \brief [9:8] Dynamic Idle Enable (w) */
    unsigned int DEMAND:2;                  /**< \brief [11:10] Demand Enable (w) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int ESLDIS:2;                  /**< \brief [17:16] External Sleep Mode Request Disable (rw) */
    unsigned int reserved_18:12;            /**< \brief \internal Reserved */
    unsigned int PR5V:2;                    /**< \brief [31:30] Programming Supply 5V (rw) */
} Ifx_DMU_HF_PCONTROL_Bits;

/** \brief  Debug Interface Protection Configuration */
typedef struct _Ifx_DMU_HF_PROCONDBG_Bits
{
    unsigned int OCDSDIS:1;                 /**< \brief [0:0] OCDS Disabled (rh) */
    unsigned int DBGIFLCK:1;                /**< \brief [1:1] Debug Interface Locked (rh) */
    unsigned int EDM:2;                     /**< \brief [3:2] Entered Debug Mode (rh) */
    unsigned int UCB:4;                     /**< \brief [7:4] Reserved (rh) */
    unsigned int TIC:4;                     /**< \brief [11:8] Tool Interface Control (rh) */
    unsigned int reserved_12:20;            /**< \brief \internal Reserved */
} Ifx_DMU_HF_PROCONDBG_Bits;

/** \brief  DFLASH Protection Configuration */
typedef struct _Ifx_DMU_HF_PROCONDF_Bits
{
    unsigned int L:1;                       /**< \brief [0:0] DF0_HSM Locked for Write Protection (rh) */
    unsigned int reserved_1:7;              /**< \brief \internal Reserved */
    unsigned int OSCCFG:1;                  /**< \brief [8:8] OSC Configuration by SSW (rh) */
    unsigned int MODE:2;                    /**< \brief [10:9] OSC Mode (rh) */
    unsigned int APREN:1;                   /**< \brief [11:11] OSC Amplitude Regulation Enable (rh) */
    unsigned int CAP0EN:1;                  /**< \brief [12:12] OSC Capacitance 0 Enable (x=0-3) (rh) */
    unsigned int CAP1EN:1;                  /**< \brief [13:13] OSC Capacitance 1 Enable (x=0-3) (rh) */
    unsigned int CAP2EN:1;                  /**< \brief [14:14] OSC Capacitance 2 Enable (x=0-3) (rh) */
    unsigned int CAP3EN:1;                  /**< \brief [15:15] OSC Capacitance 3 Enable (x=0-3) (rh) */
    unsigned int ESR0CNT:12;                /**< \brief [27:16] ESR0 Prolongation Counter (rh) */
    unsigned int UCB:3;                     /**< \brief [30:28] Reserved (rh) */
    unsigned int RPRO:1;                    /**< \brief [31:31] Read Protection Configuration (rh) */
} Ifx_DMU_HF_PROCONDF_Bits;


/** \brief  PFLASH Protection Configuration */
typedef struct _Ifx_DMU_HF_PROCONPF_Bits
{
    unsigned int UCB:31;                    /**< \brief [30:0] Reserved for UCB (rh) */
    unsigned int RPRO:1;                    /**< \brief [31:31] Read Protection Configuration (rh) */
} Ifx_DMU_HF_PROCONPF_Bits;

/** \brief  RAM Configuration */
typedef struct _Ifx_DMU_HF_PROCONRAM_Bits
{
    unsigned int RAMIN:2;                   /**< \brief [1:0] RAM Initialization by SSW Control (rh) */
    unsigned int UCB:14;                    /**< \brief [15:2] Reserved (rh) */
    unsigned int RAMINSEL:6;                /**< \brief [21:16] RAM Initialization Selection (rh) */
    unsigned int reserved_22:2;             /**< \brief \internal Reserved */
    unsigned int LMUINSEL:7;                /**< \brief [30:24] LMU Initialization Selection (rh) */
    unsigned int reserved_31:1;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_PROCONRAM_Bits;

/** \brief  Tuning Protection Configuration */
typedef struct _Ifx_DMU_HF_PROCONTP_Bits
{
    unsigned int TP:1;                      /**< \brief [0:0] Tuning Protection (rh) */
    unsigned int UCB:7;                     /**< \brief [7:1] Reserved for UCB (rh) */
    unsigned int BML:2;                     /**< \brief [9:8] Boot Mode Lock (rh) */
    unsigned int reserved_10:22;            /**< \brief \internal Reserved */
} Ifx_DMU_HF_PROCONTP_Bits;

/** \brief  DF0 User Mode Control */
typedef struct _Ifx_DMU_HF_PROCONUSR_Bits
{
    unsigned int MODE:2;                    /**< \brief [1:0] DF0 User Mode Control (rh) */
    unsigned int UCB:30;                    /**< \brief [31:2] Reserved for UCB (rh) */
} Ifx_DMU_HF_PROCONUSR_Bits;

/** \brief  Flash Protection Status Register */
typedef struct _Ifx_DMU_HF_PROTECT_Bits
{
    unsigned int PRODISP:1;                 /**< \brief [0:0] PFLASH Protection Disabled (rh) */
    unsigned int PRODISD:1;                 /**< \brief [1:1] DFLASH Protection Disabled (rh) */
    unsigned int PRODISDBG:1;               /**< \brief [2:2] Debug Interface Password Protection Disabled (rh) */
    unsigned int reserved_3:21;             /**< \brief \internal Reserved */
    unsigned int SRT:1;                     /**< \brief [24:24] Secure Retest Password Protection Disabled (rh) */
    unsigned int reserved_25:7;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_PROTECT_Bits;

/** \brief  PFLASH Bank Size Configuration Register */
typedef struct _Ifx_DMU_HF_PSIZE_Bits
{
    unsigned int reserved_0:6;              /**< \brief \internal Reserved */
    unsigned int SIZE:2;                    /**< \brief [7:6] Size of Program Flash Bank PFp (rw) */
    unsigned int reserved_8:24;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_PSIZE_Bits;

/** \brief  Power Status Register */
typedef struct _Ifx_DMU_HF_PSTATUS_Bits
{
    unsigned int SLEEP:1;                   /**< \brief [0:0] Sleep Mode (rh) */
    unsigned int IDLE:1;                    /**< \brief [1:1] Dynamic Idle (rh) */
    unsigned int DEMAND:1;                  /**< \brief [2:2] Demand (rh) */
    unsigned int reserved_3:29;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_PSTATUS_Bits;

/** \brief  PFLASH Wait Cycle Register */
typedef struct _Ifx_DMU_HF_PWAIT_Bits
{
    unsigned int RFLASH:6;                  /**< \brief [5:0] Operation Mode (rw) */
    unsigned int reserved_6:2;              /**< \brief \internal Reserved */
    unsigned int RECC:3;                    /**< \brief [10:8] Operation Mode (rw) */
    unsigned int reserved_11:5;             /**< \brief \internal Reserved */
    unsigned int CFLASH:6;                  /**< \brief [21:16] Cranking Mode (rw) */
    unsigned int reserved_22:2;             /**< \brief \internal Reserved */
    unsigned int CECC:3;                    /**< \brief [26:24] Cranking Mode (rw) */
    unsigned int reserved_27:5;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_PWAIT_Bits;

/** \brief  Flash Status Register */
typedef struct _Ifx_DMU_HF_STATUS_Bits
{
    unsigned int D0BUSY:1;                  /**< \brief [0:0] Data Flash Bank 0 Busy (rh) */
    unsigned int D1BUSY:1;                  /**< \brief [1:1] Data Flash Bank 1 Busy (rh) */
    unsigned int P0BUSY:1;                  /**< \brief [2:2] Program Flash PF0 Busy (rh) */
    unsigned int P1BUSY:1;                  /**< \brief [3:3] Program Flash PF1 Busy (rh) */
    unsigned int P2BUSY:1;                  /**< \brief [4:4] Program Flash PF2 Busy (rh) */
    unsigned int P3BUSY:1;                  /**< \brief [5:5] Program Flash PF3 Busy (rh) */
    unsigned int P4BUSY:1;                  /**< \brief [6:6] Program Flash PF4 Busy (rh) */
    unsigned int P5BUSY:1;                  /**< \brief [7:7] Program Flash PF5 Busy (rh) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int FABUSY:1;                  /**< \brief [16:16] Flash Array Busy (rh) */
    unsigned int FLW:1;                     /**< \brief [17:17] Flash Wafer State (rh) */
    unsigned int FLU:1;                     /**< \brief [18:18] Flash Unlocked State (rh) */
    unsigned int FLR:1;                     /**< \brief [19:19] Flash Delivery State (rh) */
    unsigned int DFPAGE:1;                  /**< \brief [20:20] Data Flash in Page Mode (rh) */
    unsigned int PFPAGE:1;                  /**< \brief [21:21] Program Flash in Page Mode (rh) */
    unsigned int FRET:1;                    /**< \brief [22:22] Field Return (rh) */
    unsigned int reserved_23:1;             /**< \brief \internal Reserved */
    unsigned int CFS:2;                     /**< \brief [25:24] Configuration Sector Confirmation (rh) */
    unsigned int reserved_26:6;             /**< \brief \internal Reserved */
} Ifx_DMU_HF_STATUS_Bits;

/** \brief  Suspend Control Register */
typedef struct _Ifx_DMU_HF_SUSPEND_Bits
{
    unsigned int REQ:1;                     /**< \brief [0:0] Suspend Request (rwh) */
    unsigned int CLR:1;                     /**< \brief [1:1] Suspend Clear (w) */
    unsigned int reserved_2:14;             /**< \brief \internal Reserved */
    unsigned int SPND:1;                    /**< \brief [16:16] Flash Operation Suspended (rh) */
    unsigned int ERR:1;                     /**< \brief [17:17] Suspend Error (rh) */
    unsigned int reserved_18:14;            /**< \brief \internal Reserved */
} Ifx_DMU_HF_SUSPEND_Bits;

/** \brief  PFLASH Bank OTP Protection Configuration 0 */
typedef struct _Ifx_DMU_HP_PROCON_OTP0_Bits
{
    unsigned int S0ROM:1;                   /**< \brief [0:0] PFLASH p Sector 0 Locked for Forever (rh) */
    unsigned int S1ROM:1;                   /**< \brief [1:1] PFLASH p Sector 1 Locked for Forever (rh) */
    unsigned int S2ROM:1;                   /**< \brief [2:2] PFLASH p Sector 2 Locked for Forever (rh) */
    unsigned int S3ROM:1;                   /**< \brief [3:3] PFLASH p Sector 3 Locked for Forever (rh) */
    unsigned int S4ROM:1;                   /**< \brief [4:4] PFLASH p Sector 4 Locked for Forever (rh) */
    unsigned int S5ROM:1;                   /**< \brief [5:5] PFLASH p Sector 5 Locked for Forever (rh) */
    unsigned int S6ROM:1;                   /**< \brief [6:6] PFLASH p Sector 6 Locked for Forever (rh) */
    unsigned int S7ROM:1;                   /**< \brief [7:7] PFLASH p Sector 7 Locked for Forever (rh) */
    unsigned int S8ROM:1;                   /**< \brief [8:8] PFLASH p Sector 8 Locked for Forever (rh) */
    unsigned int S9ROM:1;                   /**< \brief [9:9] PFLASH p Sector 9 Locked for Forever (rh) */
    unsigned int S10ROM:1;                  /**< \brief [10:10] PFLASH p Sector 10 Locked for Forever (rh) */
    unsigned int S11ROM:1;                  /**< \brief [11:11] PFLASH p Sector 11 Locked for Forever (rh) */
    unsigned int S12ROM:1;                  /**< \brief [12:12] PFLASH p Sector 12 Locked for Forever (rh) */
    unsigned int S13ROM:1;                  /**< \brief [13:13] PFLASH p Sector 13 Locked for Forever (rh) */
    unsigned int S14ROM:1;                  /**< \brief [14:14] PFLASH p Sector 14 Locked for Forever (rh) */
    unsigned int S15ROM:1;                  /**< \brief [15:15] PFLASH p Sector 15 Locked for Forever (rh) */
    unsigned int S16ROM:1;                  /**< \brief [16:16] PFLASH p Sector 16 Locked for Forever (rh) */
    unsigned int S17ROM:1;                  /**< \brief [17:17] PFLASH p Sector 17 Locked for Forever (rh) */
    unsigned int S18ROM:1;                  /**< \brief [18:18] PFLASH p Sector 18 Locked for Forever (rh) */
    unsigned int S19ROM:1;                  /**< \brief [19:19] PFLASH p Sector 19 Locked for Forever (rh) */
    unsigned int S20ROM:1;                  /**< \brief [20:20] PFLASH p Sector 20 Locked for Forever (rh) */
    unsigned int S21ROM:1;                  /**< \brief [21:21] PFLASH p Sector 21 Locked for Forever (rh) */
    unsigned int S22ROM:1;                  /**< \brief [22:22] PFLASH p Sector 22 Locked for Forever (rh) */
    unsigned int S23ROM:1;                  /**< \brief [23:23] PFLASH p Sector 23 Locked for Forever (rh) */
    unsigned int S24ROM:1;                  /**< \brief [24:24] PFLASH p Sector 24 Locked for Forever (rh) */
    unsigned int S25ROM:1;                  /**< \brief [25:25] PFLASH p Sector 25 Locked for Forever (rh) */
    unsigned int S26ROM:1;                  /**< \brief [26:26] PFLASH p Sector 26 Locked for Forever (rh) */
    unsigned int S27ROM:1;                  /**< \brief [27:27] PFLASH p Sector 27 Locked for Forever (rh) */
    unsigned int S28ROM:1;                  /**< \brief [28:28] PFLASH p Sector 28 Locked for Forever (rh) */
    unsigned int S29ROM:1;                  /**< \brief [29:29] PFLASH p Sector 29 Locked for Forever (rh) */
    unsigned int S30ROM:1;                  /**< \brief [30:30] PFLASH p Sector 30 Locked for Forever (rh) */
    unsigned int S31ROM:1;                  /**< \brief [31:31] PFLASH p Sector 31 Locked for Forever (rh) */
} Ifx_DMU_HP_PROCON_OTP0_Bits;

/** \brief  PFLASH Bank OTP Protection Configuration 1 */
typedef struct _Ifx_DMU_HP_PROCON_OTP1_Bits
{
    unsigned int S32ROM:1;                  /**< \brief [0:0] PFLASH p Sector 32 Locked for Forever (rh) */
    unsigned int S33ROM:1;                  /**< \brief [1:1] PFLASH p Sector 33 Locked for Forever (rh) */
    unsigned int S34ROM:1;                  /**< \brief [2:2] PFLASH p Sector 34 Locked for Forever (rh) */
    unsigned int S35ROM:1;                  /**< \brief [3:3] PFLASH p Sector 35 Locked for Forever (rh) */
    unsigned int S36ROM:1;                  /**< \brief [4:4] PFLASH p Sector 36 Locked for Forever (rh) */
    unsigned int S37ROM:1;                  /**< \brief [5:5] PFLASH p Sector 37 Locked for Forever (rh) */
    unsigned int S38ROM:1;                  /**< \brief [6:6] PFLASH p Sector 38 Locked for Forever (rh) */
    unsigned int S39ROM:1;                  /**< \brief [7:7] PFLASH p Sector 39 Locked for Forever (rh) */
    unsigned int S40ROM:1;                  /**< \brief [8:8] PFLASH p Sector 40 Locked for Forever (rh) */
    unsigned int S41ROM:1;                  /**< \brief [9:9] PFLASH p Sector 41 Locked for Forever (rh) */
    unsigned int S42ROM:1;                  /**< \brief [10:10] PFLASH p Sector 42 Locked for Forever (rh) */
    unsigned int S43ROM:1;                  /**< \brief [11:11] PFLASH p Sector 43 Locked for Forever (rh) */
    unsigned int S44ROM:1;                  /**< \brief [12:12] PFLASH p Sector 44 Locked for Forever (rh) */
    unsigned int S45ROM:1;                  /**< \brief [13:13] PFLASH p Sector 45 Locked for Forever (rh) */
    unsigned int S46ROM:1;                  /**< \brief [14:14] PFLASH p Sector 46 Locked for Forever (rh) */
    unsigned int S47ROM:1;                  /**< \brief [15:15] PFLASH p Sector 47 Locked for Forever (rh) */
    unsigned int S48ROM:1;                  /**< \brief [16:16] PFLASH p Sector 48 Locked for Forever (rh) */
    unsigned int S49ROM:1;                  /**< \brief [17:17] PFLASH p Sector 49 Locked for Forever (rh) */
    unsigned int S50ROM:1;                  /**< \brief [18:18] PFLASH p Sector 50 Locked for Forever (rh) */
    unsigned int S51ROM:1;                  /**< \brief [19:19] PFLASH p Sector 51 Locked for Forever (rh) */
    unsigned int S52ROM:1;                  /**< \brief [20:20] PFLASH p Sector 52 Locked for Forever (rh) */
    unsigned int S53ROM:1;                  /**< \brief [21:21] PFLASH p Sector 53 Locked for Forever (rh) */
    unsigned int S54ROM:1;                  /**< \brief [22:22] PFLASH p Sector 54 Locked for Forever (rh) */
    unsigned int S55ROM:1;                  /**< \brief [23:23] PFLASH p Sector 55 Locked for Forever (rh) */
    unsigned int S56ROM:1;                  /**< \brief [24:24] PFLASH p Sector 56 Locked for Forever (rh) */
    unsigned int S57ROM:1;                  /**< \brief [25:25] PFLASH p Sector 57 Locked for Forever (rh) */
    unsigned int S58ROM:1;                  /**< \brief [26:26] PFLASH p Sector 58 Locked for Forever (rh) */
    unsigned int S59ROM:1;                  /**< \brief [27:27] PFLASH p Sector 59 Locked for Forever (rh) */
    unsigned int S60ROM:1;                  /**< \brief [28:28] PFLASH p Sector 60 Locked for Forever (rh) */
    unsigned int S61ROM:1;                  /**< \brief [29:29] PFLASH p Sector 61 Locked for Forever (rh) */
    unsigned int S62ROM:1;                  /**< \brief [30:30] PFLASH p Sector 62 Locked for Forever (rh) */
    unsigned int S63ROM:1;                  /**< \brief [31:31] PFLASH p Sector 63 Locked for Forever (rh) */
} Ifx_DMU_HP_PROCON_OTP1_Bits;

/** \brief  PFLASH Bank OTP Protection Configuration 2 */
typedef struct _Ifx_DMU_HP_PROCON_OTP2_Bits
{
    unsigned int S64ROM:1;                  /**< \brief [0:0] PFLASH p Sector 64 Locked for Forever (rh) */
    unsigned int S65ROM:1;                  /**< \brief [1:1] PFLASH p Sector 65 Locked for Forever (rh) */
    unsigned int S66ROM:1;                  /**< \brief [2:2] PFLASH p Sector 66 Locked for Forever (rh) */
    unsigned int S67ROM:1;                  /**< \brief [3:3] PFLASH p Sector 67 Locked for Forever (rh) */
    unsigned int S68ROM:1;                  /**< \brief [4:4] PFLASH p Sector 68 Locked for Forever (rh) */
    unsigned int S69ROM:1;                  /**< \brief [5:5] PFLASH p Sector 69 Locked for Forever (rh) */
    unsigned int S70ROM:1;                  /**< \brief [6:6] PFLASH p Sector 70 Locked for Forever (rh) */
    unsigned int S71ROM:1;                  /**< \brief [7:7] PFLASH p Sector 71 Locked for Forever (rh) */
    unsigned int S72ROM:1;                  /**< \brief [8:8] PFLASH p Sector 72 Locked for Forever (rh) */
    unsigned int S73ROM:1;                  /**< \brief [9:9] PFLASH p Sector 73 Locked for Forever (rh) */
    unsigned int S74ROM:1;                  /**< \brief [10:10] PFLASH p Sector 74 Locked for Forever (rh) */
    unsigned int S75ROM:1;                  /**< \brief [11:11] PFLASH p Sector 75 Locked for Forever (rh) */
    unsigned int S76ROM:1;                  /**< \brief [12:12] PFLASH p Sector 76 Locked for Forever (rh) */
    unsigned int S77ROM:1;                  /**< \brief [13:13] PFLASH p Sector 77 Locked for Forever (rh) */
    unsigned int S78ROM:1;                  /**< \brief [14:14] PFLASH p Sector 78 Locked for Forever (rh) */
    unsigned int S79ROM:1;                  /**< \brief [15:15] PFLASH p Sector 79 Locked for Forever (rh) */
    unsigned int S80ROM:1;                  /**< \brief [16:16] PFLASH p Sector 80 Locked for Forever (rh) */
    unsigned int S81ROM:1;                  /**< \brief [17:17] PFLASH p Sector 81 Locked for Forever (rh) */
    unsigned int S82ROM:1;                  /**< \brief [18:18] PFLASH p Sector 82 Locked for Forever (rh) */
    unsigned int S83ROM:1;                  /**< \brief [19:19] PFLASH p Sector 83 Locked for Forever (rh) */
    unsigned int S84ROM:1;                  /**< \brief [20:20] PFLASH p Sector 84 Locked for Forever (rh) */
    unsigned int S85ROM:1;                  /**< \brief [21:21] PFLASH p Sector 85 Locked for Forever (rh) */
    unsigned int S86ROM:1;                  /**< \brief [22:22] PFLASH p Sector 86 Locked for Forever (rh) */
    unsigned int S87ROM:1;                  /**< \brief [23:23] PFLASH p Sector 87 Locked for Forever (rh) */
    unsigned int S88ROM:1;                  /**< \brief [24:24] PFLASH p Sector 88 Locked for Forever (rh) */
    unsigned int S89ROM:1;                  /**< \brief [25:25] PFLASH p Sector 89 Locked for Forever (rh) */
    unsigned int S90ROM:1;                  /**< \brief [26:26] PFLASH p Sector 90 Locked for Forever (rh) */
    unsigned int S91ROM:1;                  /**< \brief [27:27] PFLASH p Sector 91 Locked for Forever (rh) */
    unsigned int S92ROM:1;                  /**< \brief [28:28] PFLASH p Sector 92 Locked for Forever (rh) */
    unsigned int S93ROM:1;                  /**< \brief [29:29] PFLASH p Sector 93 Locked for Forever (rh) */
    unsigned int S94ROM:1;                  /**< \brief [30:30] PFLASH p Sector 94 Locked for Forever (rh) */
    unsigned int S95ROM:1;                  /**< \brief [31:31] PFLASH p Sector 95 Locked for Forever (rh) */
} Ifx_DMU_HP_PROCON_OTP2_Bits;

/** \brief  PFLASH Bank OTP Protection Configuration 3 */
typedef struct _Ifx_DMU_HP_PROCON_OTP3_Bits
{
    unsigned int S96ROM:1;                  /**< \brief [0:0] PFLASH p Sector 96 Locked for Forever (rh) */
    unsigned int S97ROM:1;                  /**< \brief [1:1] PFLASH p Sector 97 Locked for Forever (rh) */
    unsigned int S98ROM:1;                  /**< \brief [2:2] PFLASH p Sector 98 Locked for Forever (rh) */
    unsigned int S99ROM:1;                  /**< \brief [3:3] PFLASH p Sector 99 Locked for Forever (rh) */
    unsigned int S100ROM:1;                 /**< \brief [4:4] PFLASH p Sector 100 Locked for Forever (rh) */
    unsigned int S101ROM:1;                 /**< \brief [5:5] PFLASH p Sector 101 Locked for Forever (rh) */
    unsigned int S102ROM:1;                 /**< \brief [6:6] PFLASH p Sector 102 Locked for Forever (rh) */
    unsigned int S103ROM:1;                 /**< \brief [7:7] PFLASH p Sector 103 Locked for Forever (rh) */
    unsigned int S104ROM:1;                 /**< \brief [8:8] PFLASH p Sector 104 Locked for Forever (rh) */
    unsigned int S105ROM:1;                 /**< \brief [9:9] PFLASH p Sector 105 Locked for Forever (rh) */
    unsigned int S106ROM:1;                 /**< \brief [10:10] PFLASH p Sector 106 Locked for Forever (rh) */
    unsigned int S107ROM:1;                 /**< \brief [11:11] PFLASH p Sector 107 Locked for Forever (rh) */
    unsigned int S108ROM:1;                 /**< \brief [12:12] PFLASH p Sector 108 Locked for Forever (rh) */
    unsigned int S109ROM:1;                 /**< \brief [13:13] PFLASH p Sector 109 Locked for Forever (rh) */
    unsigned int S110ROM:1;                 /**< \brief [14:14] PFLASH p Sector 110 Locked for Forever (rh) */
    unsigned int S111ROM:1;                 /**< \brief [15:15] PFLASH p Sector 111 Locked for Forever (rh) */
    unsigned int S112ROM:1;                 /**< \brief [16:16] PFLASH p Sector 112 Locked for Forever (rh) */
    unsigned int S113ROM:1;                 /**< \brief [17:17] PFLASH p Sector 113 Locked for Forever (rh) */
    unsigned int S114ROM:1;                 /**< \brief [18:18] PFLASH p Sector 114 Locked for Forever (rh) */
    unsigned int S115ROM:1;                 /**< \brief [19:19] PFLASH p Sector 115 Locked for Forever (rh) */
    unsigned int S116ROM:1;                 /**< \brief [20:20] PFLASH p Sector 116 Locked for Forever (rh) */
    unsigned int S117ROM:1;                 /**< \brief [21:21] PFLASH p Sector 117 Locked for Forever (rh) */
    unsigned int S118ROM:1;                 /**< \brief [22:22] PFLASH p Sector 118 Locked for Forever (rh) */
    unsigned int S119ROM:1;                 /**< \brief [23:23] PFLASH p Sector 119 Locked for Forever (rh) */
    unsigned int S120ROM:1;                 /**< \brief [24:24] PFLASH p Sector 120 Locked for Forever (rh) */
    unsigned int S121ROM:1;                 /**< \brief [25:25] PFLASH p Sector 121 Locked for Forever (rh) */
    unsigned int S122ROM:1;                 /**< \brief [26:26] PFLASH p Sector 122 Locked for Forever (rh) */
    unsigned int S123ROM:1;                 /**< \brief [27:27] PFLASH p Sector 123 Locked for Forever (rh) */
    unsigned int S124ROM:1;                 /**< \brief [28:28] PFLASH p Sector 124 Locked for Forever (rh) */
    unsigned int S125ROM:1;                 /**< \brief [29:29] PFLASH p Sector 125 Locked for Forever (rh) */
    unsigned int S126ROM:1;                 /**< \brief [30:30] PFLASH p Sector 126 Locked for Forever (rh) */
    unsigned int S127ROM:1;                 /**< \brief [31:31] PFLASH p Sector 127 Locked for Forever (rh) */
} Ifx_DMU_HP_PROCON_OTP3_Bits;

/** \brief  PFLASH Bank OTP Protection Configuration 4 */
typedef struct _Ifx_DMU_HP_PROCON_OTP4_Bits
{
    unsigned int S128ROM:1;                 /**< \brief [0:0] PFLASH p Sector 128 Locked for Forever (rh) */
    unsigned int S129ROM:1;                 /**< \brief [1:1] PFLASH p Sector 129 Locked for Forever (rh) */
    unsigned int S130ROM:1;                 /**< \brief [2:2] PFLASH p Sector 130 Locked for Forever (rh) */
    unsigned int S131ROM:1;                 /**< \brief [3:3] PFLASH p Sector 131 Locked for Forever (rh) */
    unsigned int S132ROM:1;                 /**< \brief [4:4] PFLASH p Sector 132 Locked for Forever (rh) */
    unsigned int S133ROM:1;                 /**< \brief [5:5] PFLASH p Sector 133 Locked for Forever (rh) */
    unsigned int S134ROM:1;                 /**< \brief [6:6] PFLASH p Sector 134 Locked for Forever (rh) */
    unsigned int S135ROM:1;                 /**< \brief [7:7] PFLASH p Sector 135 Locked for Forever (rh) */
    unsigned int S136ROM:1;                 /**< \brief [8:8] PFLASH p Sector 136 Locked for Forever (rh) */
    unsigned int S137ROM:1;                 /**< \brief [9:9] PFLASH p Sector 137 Locked for Forever (rh) */
    unsigned int S138ROM:1;                 /**< \brief [10:10] PFLASH p Sector 138 Locked for Forever (rh) */
    unsigned int S139ROM:1;                 /**< \brief [11:11] PFLASH p Sector 139 Locked for Forever (rh) */
    unsigned int S140ROM:1;                 /**< \brief [12:12] PFLASH p Sector 140 Locked for Forever (rh) */
    unsigned int S141ROM:1;                 /**< \brief [13:13] PFLASH p Sector 141 Locked for Forever (rh) */
    unsigned int S142ROM:1;                 /**< \brief [14:14] PFLASH p Sector 142 Locked for Forever (rh) */
    unsigned int S143ROM:1;                 /**< \brief [15:15] PFLASH p Sector 143 Locked for Forever (rh) */
    unsigned int S144ROM:1;                 /**< \brief [16:16] PFLASH p Sector 144 Locked for Forever (rh) */
    unsigned int S145ROM:1;                 /**< \brief [17:17] PFLASH p Sector 145 Locked for Forever (rh) */
    unsigned int S146ROM:1;                 /**< \brief [18:18] PFLASH p Sector 146 Locked for Forever (rh) */
    unsigned int S147ROM:1;                 /**< \brief [19:19] PFLASH p Sector 147 Locked for Forever (rh) */
    unsigned int S148ROM:1;                 /**< \brief [20:20] PFLASH p Sector 148 Locked for Forever (rh) */
    unsigned int S149ROM:1;                 /**< \brief [21:21] PFLASH p Sector 149 Locked for Forever (rh) */
    unsigned int S150ROM:1;                 /**< \brief [22:22] PFLASH p Sector 150 Locked for Forever (rh) */
    unsigned int S151ROM:1;                 /**< \brief [23:23] PFLASH p Sector 151 Locked for Forever (rh) */
    unsigned int S152ROM:1;                 /**< \brief [24:24] PFLASH p Sector 152 Locked for Forever (rh) */
    unsigned int S153ROM:1;                 /**< \brief [25:25] PFLASH p Sector 153 Locked for Forever (rh) */
    unsigned int S154ROM:1;                 /**< \brief [26:26] PFLASH p Sector 154 Locked for Forever (rh) */
    unsigned int S155ROM:1;                 /**< \brief [27:27] PFLASH p Sector 155 Locked for Forever (rh) */
    unsigned int S156ROM:1;                 /**< \brief [28:28] PFLASH p Sector 156 Locked for Forever (rh) */
    unsigned int S157ROM:1;                 /**< \brief [29:29] PFLASH p Sector 157 Locked for Forever (rh) */
    unsigned int S158ROM:1;                 /**< \brief [30:30] PFLASH p Sector 158 Locked for Forever (rh) */
    unsigned int S159ROM:1;                 /**< \brief [31:31] PFLASH p Sector 159 Locked for Forever (rh) */
} Ifx_DMU_HP_PROCON_OTP4_Bits;

/** \brief  PFLASH Bank OTP Protection Configuration 5 */
typedef struct _Ifx_DMU_HP_PROCON_OTP5_Bits
{
    unsigned int S160ROM:1;                 /**< \brief [0:0] PFLASH p Sector 160 Locked for Forever (rh) */
    unsigned int S161ROM:1;                 /**< \brief [1:1] PFLASH p Sector 161 Locked for Forever (rh) */
    unsigned int S162ROM:1;                 /**< \brief [2:2] PFLASH p Sector 162 Locked for Forever (rh) */
    unsigned int S163ROM:1;                 /**< \brief [3:3] PFLASH p Sector 163 Locked for Forever (rh) */
    unsigned int S164ROM:1;                 /**< \brief [4:4] PFLASH p Sector 164 Locked for Forever (rh) */
    unsigned int S165ROM:1;                 /**< \brief [5:5] PFLASH p Sector 165 Locked for Forever (rh) */
    unsigned int S166ROM:1;                 /**< \brief [6:6] PFLASH p Sector 166 Locked for Forever (rh) */
    unsigned int S167ROM:1;                 /**< \brief [7:7] PFLASH p Sector 167 Locked for Forever (rh) */
    unsigned int S168ROM:1;                 /**< \brief [8:8] PFLASH p Sector 168 Locked for Forever (rh) */
    unsigned int S169ROM:1;                 /**< \brief [9:9] PFLASH p Sector 169 Locked for Forever (rh) */
    unsigned int S170ROM:1;                 /**< \brief [10:10] PFLASH p Sector 170 Locked for Forever (rh) */
    unsigned int S171ROM:1;                 /**< \brief [11:11] PFLASH p Sector 171 Locked for Forever (rh) */
    unsigned int S172ROM:1;                 /**< \brief [12:12] PFLASH p Sector 172 Locked for Forever (rh) */
    unsigned int S173ROM:1;                 /**< \brief [13:13] PFLASH p Sector 173 Locked for Forever (rh) */
    unsigned int S174ROM:1;                 /**< \brief [14:14] PFLASH p Sector 174 Locked for Forever (rh) */
    unsigned int S175ROM:1;                 /**< \brief [15:15] PFLASH p Sector 175 Locked for Forever (rh) */
    unsigned int S176ROM:1;                 /**< \brief [16:16] PFLASH p Sector 176 Locked for Forever (rh) */
    unsigned int S177ROM:1;                 /**< \brief [17:17] PFLASH p Sector 177 Locked for Forever (rh) */
    unsigned int S178ROM:1;                 /**< \brief [18:18] PFLASH p Sector 178 Locked for Forever (rh) */
    unsigned int S179ROM:1;                 /**< \brief [19:19] PFLASH p Sector 179 Locked for Forever (rh) */
    unsigned int S180ROM:1;                 /**< \brief [20:20] PFLASH p Sector 180 Locked for Forever (rh) */
    unsigned int S181ROM:1;                 /**< \brief [21:21] PFLASH p Sector 181 Locked for Forever (rh) */
    unsigned int S182ROM:1;                 /**< \brief [22:22] PFLASH p Sector 182 Locked for Forever (rh) */
    unsigned int S183ROM:1;                 /**< \brief [23:23] PFLASH p Sector 183 Locked for Forever (rh) */
    unsigned int S184ROM:1;                 /**< \brief [24:24] PFLASH p Sector 184 Locked for Forever (rh) */
    unsigned int S185ROM:1;                 /**< \brief [25:25] PFLASH p Sector 185 Locked for Forever (rh) */
    unsigned int S186ROM:1;                 /**< \brief [26:26] PFLASH p Sector 186 Locked for Forever (rh) */
    unsigned int S187ROM:1;                 /**< \brief [27:27] PFLASH p Sector 187 Locked for Forever (rh) */
    unsigned int S188ROM:1;                 /**< \brief [28:28] PFLASH p Sector 188 Locked for Forever (rh) */
    unsigned int S189ROM:1;                 /**< \brief [29:29] PFLASH p Sector 189 Locked for Forever (rh) */
    unsigned int S190ROM:1;                 /**< \brief [30:30] PFLASH p Sector 190 Locked for Forever (rh) */
    unsigned int S191ROM:1;                 /**< \brief [31:31] PFLASH p Sector 191 Locked for Forever (rh) */
} Ifx_DMU_HP_PROCON_OTP5_Bits;

/** \brief  PFLASH Bank Protection Configuration 0 */
typedef struct _Ifx_DMU_HP_PROCON_P0_Bits
{
    unsigned int S0L:1;                     /**< \brief [0:0] PFLASH p Sector 0 Locked for Write Protection (rh) */
    unsigned int S1L:1;                     /**< \brief [1:1] PFLASH p Sector 1 Locked for Write Protection (rh) */
    unsigned int S2L:1;                     /**< \brief [2:2] PFLASH p Sector 2 Locked for Write Protection (rh) */
    unsigned int S3L:1;                     /**< \brief [3:3] PFLASH p Sector 3 Locked for Write Protection (rh) */
    unsigned int S4L:1;                     /**< \brief [4:4] PFLASH p Sector 4 Locked for Write Protection (rh) */
    unsigned int S5L:1;                     /**< \brief [5:5] PFLASH p Sector 5 Locked for Write Protection (rh) */
    unsigned int S6L:1;                     /**< \brief [6:6] PFLASH p Sector 6 Locked for Write Protection (rh) */
    unsigned int S7L:1;                     /**< \brief [7:7] PFLASH p Sector 7 Locked for Write Protection (rh) */
    unsigned int S8L:1;                     /**< \brief [8:8] PFLASH p Sector 8 Locked for Write Protection (rh) */
    unsigned int S9L:1;                     /**< \brief [9:9] PFLASH p Sector 9 Locked for Write Protection (rh) */
    unsigned int S10L:1;                    /**< \brief [10:10] PFLASH p Sector 10 Locked for Write Protection (rh) */
    unsigned int S11L:1;                    /**< \brief [11:11] PFLASH p Sector 11 Locked for Write Protection (rh) */
    unsigned int S12L:1;                    /**< \brief [12:12] PFLASH p Sector 12 Locked for Write Protection (rh) */
    unsigned int S13L:1;                    /**< \brief [13:13] PFLASH p Sector 13 Locked for Write Protection (rh) */
    unsigned int S14L:1;                    /**< \brief [14:14] PFLASH p Sector 14 Locked for Write Protection (rh) */
    unsigned int S15L:1;                    /**< \brief [15:15] PFLASH p Sector 15 Locked for Write Protection (rh) */
    unsigned int S16L:1;                    /**< \brief [16:16] PFLASH p Sector 16 Locked for Write Protection (rh) */
    unsigned int S17L:1;                    /**< \brief [17:17] PFLASH p Sector 17 Locked for Write Protection (rh) */
    unsigned int S18L:1;                    /**< \brief [18:18] PFLASH p Sector 18 Locked for Write Protection (rh) */
    unsigned int S19L:1;                    /**< \brief [19:19] PFLASH p Sector 19 Locked for Write Protection (rh) */
    unsigned int S20L:1;                    /**< \brief [20:20] PFLASH p Sector 20 Locked for Write Protection (rh) */
    unsigned int S21L:1;                    /**< \brief [21:21] PFLASH p Sector 21 Locked for Write Protection (rh) */
    unsigned int S22L:1;                    /**< \brief [22:22] PFLASH p Sector 22 Locked for Write Protection (rh) */
    unsigned int S23L:1;                    /**< \brief [23:23] PFLASH p Sector 23 Locked for Write Protection (rh) */
    unsigned int S24L:1;                    /**< \brief [24:24] PFLASH p Sector 24 Locked for Write Protection (rh) */
    unsigned int S25L:1;                    /**< \brief [25:25] PFLASH p Sector 25 Locked for Write Protection (rh) */
    unsigned int S26L:1;                    /**< \brief [26:26] PFLASH p Sector 26 Locked for Write Protection (rh) */
    unsigned int S27L:1;                    /**< \brief [27:27] PFLASH p Sector 27 Locked for Write Protection (rh) */
    unsigned int S28L:1;                    /**< \brief [28:28] PFLASH p Sector 28 Locked for Write Protection (rh) */
    unsigned int S29L:1;                    /**< \brief [29:29] PFLASH p Sector 29 Locked for Write Protection (rh) */
    unsigned int S30L:1;                    /**< \brief [30:30] PFLASH p Sector 30 Locked for Write Protection (rh) */
    unsigned int S31L:1;                    /**< \brief [31:31] PFLASH p Sector 31 Locked for Write Protection (rh) */
} Ifx_DMU_HP_PROCON_P0_Bits;

/** \brief  PFLASH Bank Protection Configuration 1 */
typedef struct _Ifx_DMU_HP_PROCON_P1_Bits
{
    unsigned int S32L:1;                    /**< \brief [0:0] PFLASH p Sector 32 Locked for Write Protection (rh) */
    unsigned int S33L:1;                    /**< \brief [1:1] PFLASH p Sector 33 Locked for Write Protection (rh) */
    unsigned int S34L:1;                    /**< \brief [2:2] PFLASH p Sector 34 Locked for Write Protection (rh) */
    unsigned int S35L:1;                    /**< \brief [3:3] PFLASH p Sector 35 Locked for Write Protection (rh) */
    unsigned int S36L:1;                    /**< \brief [4:4] PFLASH p Sector 36 Locked for Write Protection (rh) */
    unsigned int S37L:1;                    /**< \brief [5:5] PFLASH p Sector 37 Locked for Write Protection (rh) */
    unsigned int S38L:1;                    /**< \brief [6:6] PFLASH p Sector 38 Locked for Write Protection (rh) */
    unsigned int S39L:1;                    /**< \brief [7:7] PFLASH p Sector 39 Locked for Write Protection (rh) */
    unsigned int S40L:1;                    /**< \brief [8:8] PFLASH p Sector 40 Locked for Write Protection (rh) */
    unsigned int S41L:1;                    /**< \brief [9:9] PFLASH p Sector 41 Locked for Write Protection (rh) */
    unsigned int S42L:1;                    /**< \brief [10:10] PFLASH p Sector 42 Locked for Write Protection (rh) */
    unsigned int S43L:1;                    /**< \brief [11:11] PFLASH p Sector 43 Locked for Write Protection (rh) */
    unsigned int S44L:1;                    /**< \brief [12:12] PFLASH p Sector 44 Locked for Write Protection (rh) */
    unsigned int S45L:1;                    /**< \brief [13:13] PFLASH p Sector 45 Locked for Write Protection (rh) */
    unsigned int S46L:1;                    /**< \brief [14:14] PFLASH p Sector 46 Locked for Write Protection (rh) */
    unsigned int S47L:1;                    /**< \brief [15:15] PFLASH p Sector 47 Locked for Write Protection (rh) */
    unsigned int S48L:1;                    /**< \brief [16:16] PFLASH p Sector 48 Locked for Write Protection (rh) */
    unsigned int S49L:1;                    /**< \brief [17:17] PFLASH p Sector 49 Locked for Write Protection (rh) */
    unsigned int S50L:1;                    /**< \brief [18:18] PFLASH p Sector 50 Locked for Write Protection (rh) */
    unsigned int S51L:1;                    /**< \brief [19:19] PFLASH p Sector 51 Locked for Write Protection (rh) */
    unsigned int S52L:1;                    /**< \brief [20:20] PFLASH p Sector 52 Locked for Write Protection (rh) */
    unsigned int S53L:1;                    /**< \brief [21:21] PFLASH p Sector 53 Locked for Write Protection (rh) */
    unsigned int S54L:1;                    /**< \brief [22:22] PFLASH p Sector 54 Locked for Write Protection (rh) */
    unsigned int S55L:1;                    /**< \brief [23:23] PFLASH p Sector 55 Locked for Write Protection (rh) */
    unsigned int S56L:1;                    /**< \brief [24:24] PFLASH p Sector 56 Locked for Write Protection (rh) */
    unsigned int S57L:1;                    /**< \brief [25:25] PFLASH p Sector 57 Locked for Write Protection (rh) */
    unsigned int S58L:1;                    /**< \brief [26:26] PFLASH p Sector 58 Locked for Write Protection (rh) */
    unsigned int S59L:1;                    /**< \brief [27:27] PFLASH p Sector 59 Locked for Write Protection (rh) */
    unsigned int S60L:1;                    /**< \brief [28:28] PFLASH p Sector 60 Locked for Write Protection (rh) */
    unsigned int S61L:1;                    /**< \brief [29:29] PFLASH p Sector 61 Locked for Write Protection (rh) */
    unsigned int S62L:1;                    /**< \brief [30:30] PFLASH p Sector 62 Locked for Write Protection (rh) */
    unsigned int S63L:1;                    /**< \brief [31:31] PFLASH p Sector 63 Locked for Write Protection (rh) */
} Ifx_DMU_HP_PROCON_P1_Bits;

/** \brief  PFLASH Bank Protection Configuration 2 */
typedef struct _Ifx_DMU_HP_PROCON_P2_Bits
{
    unsigned int S64L:1;                    /**< \brief [0:0] PFLASH p Sector 64 Locked for Write Protection (rh) */
    unsigned int S65L:1;                    /**< \brief [1:1] PFLASH p Sector 65 Locked for Write Protection (rh) */
    unsigned int S66L:1;                    /**< \brief [2:2] PFLASH p Sector 66 Locked for Write Protection (rh) */
    unsigned int S67L:1;                    /**< \brief [3:3] PFLASH p Sector 67 Locked for Write Protection (rh) */
    unsigned int S68L:1;                    /**< \brief [4:4] PFLASH p Sector 68 Locked for Write Protection (rh) */
    unsigned int S69L:1;                    /**< \brief [5:5] PFLASH p Sector 69 Locked for Write Protection (rh) */
    unsigned int S70L:1;                    /**< \brief [6:6] PFLASH p Sector 70 Locked for Write Protection (rh) */
    unsigned int S71L:1;                    /**< \brief [7:7] PFLASH p Sector 71 Locked for Write Protection (rh) */
    unsigned int S72L:1;                    /**< \brief [8:8] PFLASH p Sector 72 Locked for Write Protection (rh) */
    unsigned int S73L:1;                    /**< \brief [9:9] PFLASH p Sector 73 Locked for Write Protection (rh) */
    unsigned int S74L:1;                    /**< \brief [10:10] PFLASH p Sector 74 Locked for Write Protection (rh) */
    unsigned int S75L:1;                    /**< \brief [11:11] PFLASH p Sector 75 Locked for Write Protection (rh) */
    unsigned int S76L:1;                    /**< \brief [12:12] PFLASH p Sector 76 Locked for Write Protection (rh) */
    unsigned int S77L:1;                    /**< \brief [13:13] PFLASH p Sector 77 Locked for Write Protection (rh) */
    unsigned int S78L:1;                    /**< \brief [14:14] PFLASH p Sector 78 Locked for Write Protection (rh) */
    unsigned int S79L:1;                    /**< \brief [15:15] PFLASH p Sector 79 Locked for Write Protection (rh) */
    unsigned int S80L:1;                    /**< \brief [16:16] PFLASH p Sector 80 Locked for Write Protection (rh) */
    unsigned int S81L:1;                    /**< \brief [17:17] PFLASH p Sector 81 Locked for Write Protection (rh) */
    unsigned int S82L:1;                    /**< \brief [18:18] PFLASH p Sector 82 Locked for Write Protection (rh) */
    unsigned int S83L:1;                    /**< \brief [19:19] PFLASH p Sector 83 Locked for Write Protection (rh) */
    unsigned int S84L:1;                    /**< \brief [20:20] PFLASH p Sector 84 Locked for Write Protection (rh) */
    unsigned int S85L:1;                    /**< \brief [21:21] PFLASH p Sector 85 Locked for Write Protection (rh) */
    unsigned int S86L:1;                    /**< \brief [22:22] PFLASH p Sector 86 Locked for Write Protection (rh) */
    unsigned int S87L:1;                    /**< \brief [23:23] PFLASH p Sector 87 Locked for Write Protection (rh) */
    unsigned int S88L:1;                    /**< \brief [24:24] PFLASH p Sector 88 Locked for Write Protection (rh) */
    unsigned int S89L:1;                    /**< \brief [25:25] PFLASH p Sector 89 Locked for Write Protection (rh) */
    unsigned int S90L:1;                    /**< \brief [26:26] PFLASH p Sector 90 Locked for Write Protection (rh) */
    unsigned int S91L:1;                    /**< \brief [27:27] PFLASH p Sector 91 Locked for Write Protection (rh) */
    unsigned int S92L:1;                    /**< \brief [28:28] PFLASH p Sector 92 Locked for Write Protection (rh) */
    unsigned int S93L:1;                    /**< \brief [29:29] PFLASH p Sector 93 Locked for Write Protection (rh) */
    unsigned int S94L:1;                    /**< \brief [30:30] PFLASH p Sector 94 Locked for Write Protection (rh) */
    unsigned int S95L:1;                    /**< \brief [31:31] PFLASH p Sector 95 Locked for Write Protection (rh) */
} Ifx_DMU_HP_PROCON_P2_Bits;

/** \brief  PFLASH Bank Protection Configuration 3 */
typedef struct _Ifx_DMU_HP_PROCON_P3_Bits
{
    unsigned int S96L:1;                    /**< \brief [0:0] PFLASH p Sector 96 Locked for Write Protection (rh) */
    unsigned int S97L:1;                    /**< \brief [1:1] PFLASH p Sector 97 Locked for Write Protection (rh) */
    unsigned int S98L:1;                    /**< \brief [2:2] PFLASH p Sector 98 Locked for Write Protection (rh) */
    unsigned int S99L:1;                    /**< \brief [3:3] PFLASH p Sector 99 Locked for Write Protection (rh) */
    unsigned int S100L:1;                   /**< \brief [4:4] PFLASH p Sector 100 Locked for Write Protection (rh) */
    unsigned int S101L:1;                   /**< \brief [5:5] PFLASH p Sector 101 Locked for Write Protection (rh) */
    unsigned int S102L:1;                   /**< \brief [6:6] PFLASH p Sector 102 Locked for Write Protection (rh) */
    unsigned int S103L:1;                   /**< \brief [7:7] PFLASH p Sector 103 Locked for Write Protection (rh) */
    unsigned int S104L:1;                   /**< \brief [8:8] PFLASH p Sector 104 Locked for Write Protection (rh) */
    unsigned int S105L:1;                   /**< \brief [9:9] PFLASH p Sector 105 Locked for Write Protection (rh) */
    unsigned int S106L:1;                   /**< \brief [10:10] PFLASH p Sector 106 Locked for Write Protection (rh) */
    unsigned int S107L:1;                   /**< \brief [11:11] PFLASH p Sector 107 Locked for Write Protection (rh) */
    unsigned int S108L:1;                   /**< \brief [12:12] PFLASH p Sector 108 Locked for Write Protection (rh) */
    unsigned int S109L:1;                   /**< \brief [13:13] PFLASH p Sector 109 Locked for Write Protection (rh) */
    unsigned int S110L:1;                   /**< \brief [14:14] PFLASH p Sector 110 Locked for Write Protection (rh) */
    unsigned int S111L:1;                   /**< \brief [15:15] PFLASH p Sector 111 Locked for Write Protection (rh) */
    unsigned int S112L:1;                   /**< \brief [16:16] PFLASH p Sector 112 Locked for Write Protection (rh) */
    unsigned int S113L:1;                   /**< \brief [17:17] PFLASH p Sector 113 Locked for Write Protection (rh) */
    unsigned int S114L:1;                   /**< \brief [18:18] PFLASH p Sector 114 Locked for Write Protection (rh) */
    unsigned int S115L:1;                   /**< \brief [19:19] PFLASH p Sector 115 Locked for Write Protection (rh) */
    unsigned int S116L:1;                   /**< \brief [20:20] PFLASH p Sector 116 Locked for Write Protection (rh) */
    unsigned int S117L:1;                   /**< \brief [21:21] PFLASH p Sector 117 Locked for Write Protection (rh) */
    unsigned int S118L:1;                   /**< \brief [22:22] PFLASH p Sector 118 Locked for Write Protection (rh) */
    unsigned int S119L:1;                   /**< \brief [23:23] PFLASH p Sector 119 Locked for Write Protection (rh) */
    unsigned int S120L:1;                   /**< \brief [24:24] PFLASH p Sector 120 Locked for Write Protection (rh) */
    unsigned int S121L:1;                   /**< \brief [25:25] PFLASH p Sector 121 Locked for Write Protection (rh) */
    unsigned int S122L:1;                   /**< \brief [26:26] PFLASH p Sector 122 Locked for Write Protection (rh) */
    unsigned int S123L:1;                   /**< \brief [27:27] PFLASH p Sector 123 Locked for Write Protection (rh) */
    unsigned int S124L:1;                   /**< \brief [28:28] PFLASH p Sector 124 Locked for Write Protection (rh) */
    unsigned int S125L:1;                   /**< \brief [29:29] PFLASH p Sector 125 Locked for Write Protection (rh) */
    unsigned int S126L:1;                   /**< \brief [30:30] PFLASH p Sector 126 Locked for Write Protection (rh) */
    unsigned int S127L:1;                   /**< \brief [31:31] PFLASH p Sector 127 Locked for Write Protection (rh) */
} Ifx_DMU_HP_PROCON_P3_Bits;

/** \brief  PFLASH Bank Protection Configuration 4 */
typedef struct _Ifx_DMU_HP_PROCON_P4_Bits
{
    unsigned int S128L:1;                   /**< \brief [0:0] PFLASH p Sector 128 Locked for Write Protection (rh) */
    unsigned int S129L:1;                   /**< \brief [1:1] PFLASH p Sector 129 Locked for Write Protection (rh) */
    unsigned int S130L:1;                   /**< \brief [2:2] PFLASH p Sector 130 Locked for Write Protection (rh) */
    unsigned int S131L:1;                   /**< \brief [3:3] PFLASH p Sector 131 Locked for Write Protection (rh) */
    unsigned int S132L:1;                   /**< \brief [4:4] PFLASH p Sector 132 Locked for Write Protection (rh) */
    unsigned int S133L:1;                   /**< \brief [5:5] PFLASH p Sector 133 Locked for Write Protection (rh) */
    unsigned int S134L:1;                   /**< \brief [6:6] PFLASH p Sector 134 Locked for Write Protection (rh) */
    unsigned int S135L:1;                   /**< \brief [7:7] PFLASH p Sector 135 Locked for Write Protection (rh) */
    unsigned int S136L:1;                   /**< \brief [8:8] PFLASH p Sector 136 Locked for Write Protection (rh) */
    unsigned int S137L:1;                   /**< \brief [9:9] PFLASH p Sector 137 Locked for Write Protection (rh) */
    unsigned int S138L:1;                   /**< \brief [10:10] PFLASH p Sector 138 Locked for Write Protection (rh) */
    unsigned int S139L:1;                   /**< \brief [11:11] PFLASH p Sector 139 Locked for Write Protection (rh) */
    unsigned int S140L:1;                   /**< \brief [12:12] PFLASH p Sector 140 Locked for Write Protection (rh) */
    unsigned int S141L:1;                   /**< \brief [13:13] PFLASH p Sector 141 Locked for Write Protection (rh) */
    unsigned int S142L:1;                   /**< \brief [14:14] PFLASH p Sector 142 Locked for Write Protection (rh) */
    unsigned int S143L:1;                   /**< \brief [15:15] PFLASH p Sector 143 Locked for Write Protection (rh) */
    unsigned int S144L:1;                   /**< \brief [16:16] PFLASH p Sector 144 Locked for Write Protection (rh) */
    unsigned int S145L:1;                   /**< \brief [17:17] PFLASH p Sector 145 Locked for Write Protection (rh) */
    unsigned int S146L:1;                   /**< \brief [18:18] PFLASH p Sector 146 Locked for Write Protection (rh) */
    unsigned int S147L:1;                   /**< \brief [19:19] PFLASH p Sector 147 Locked for Write Protection (rh) */
    unsigned int S148L:1;                   /**< \brief [20:20] PFLASH p Sector 148 Locked for Write Protection (rh) */
    unsigned int S149L:1;                   /**< \brief [21:21] PFLASH p Sector 149 Locked for Write Protection (rh) */
    unsigned int S150L:1;                   /**< \brief [22:22] PFLASH p Sector 150 Locked for Write Protection (rh) */
    unsigned int S151L:1;                   /**< \brief [23:23] PFLASH p Sector 151 Locked for Write Protection (rh) */
    unsigned int S152L:1;                   /**< \brief [24:24] PFLASH p Sector 152 Locked for Write Protection (rh) */
    unsigned int S153L:1;                   /**< \brief [25:25] PFLASH p Sector 153 Locked for Write Protection (rh) */
    unsigned int S154L:1;                   /**< \brief [26:26] PFLASH p Sector 154 Locked for Write Protection (rh) */
    unsigned int S155L:1;                   /**< \brief [27:27] PFLASH p Sector 155 Locked for Write Protection (rh) */
    unsigned int S156L:1;                   /**< \brief [28:28] PFLASH p Sector 156 Locked for Write Protection (rh) */
    unsigned int S157L:1;                   /**< \brief [29:29] PFLASH p Sector 157 Locked for Write Protection (rh) */
    unsigned int S158L:1;                   /**< \brief [30:30] PFLASH p Sector 158 Locked for Write Protection (rh) */
    unsigned int S159L:1;                   /**< \brief [31:31] PFLASH p Sector 159 Locked for Write Protection (rh) */
} Ifx_DMU_HP_PROCON_P4_Bits;

/** \brief  PFLASH Bank Protection Configuration 5 */
typedef struct _Ifx_DMU_HP_PROCON_P5_Bits
{
    unsigned int S160L:1;                   /**< \brief [0:0] PFLASH p Sector 160 Locked for Write Protection (rh) */
    unsigned int S161L:1;                   /**< \brief [1:1] PFLASH p Sector 161 Locked for Write Protection (rh) */
    unsigned int S162L:1;                   /**< \brief [2:2] PFLASH p Sector 162 Locked for Write Protection (rh) */
    unsigned int S163L:1;                   /**< \brief [3:3] PFLASH p Sector 163 Locked for Write Protection (rh) */
    unsigned int S164L:1;                   /**< \brief [4:4] PFLASH p Sector 164 Locked for Write Protection (rh) */
    unsigned int S165L:1;                   /**< \brief [5:5] PFLASH p Sector 165 Locked for Write Protection (rh) */
    unsigned int S166L:1;                   /**< \brief [6:6] PFLASH p Sector 166 Locked for Write Protection (rh) */
    unsigned int S167L:1;                   /**< \brief [7:7] PFLASH p Sector 167 Locked for Write Protection (rh) */
    unsigned int S168L:1;                   /**< \brief [8:8] PFLASH p Sector 168 Locked for Write Protection (rh) */
    unsigned int S169L:1;                   /**< \brief [9:9] PFLASH p Sector 169 Locked for Write Protection (rh) */
    unsigned int S170L:1;                   /**< \brief [10:10] PFLASH p Sector 170 Locked for Write Protection (rh) */
    unsigned int S171L:1;                   /**< \brief [11:11] PFLASH p Sector 171 Locked for Write Protection (rh) */
    unsigned int S172L:1;                   /**< \brief [12:12] PFLASH p Sector 172 Locked for Write Protection (rh) */
    unsigned int S173L:1;                   /**< \brief [13:13] PFLASH p Sector 173 Locked for Write Protection (rh) */
    unsigned int S174L:1;                   /**< \brief [14:14] PFLASH p Sector 174 Locked for Write Protection (rh) */
    unsigned int S175L:1;                   /**< \brief [15:15] PFLASH p Sector 175 Locked for Write Protection (rh) */
    unsigned int S176L:1;                   /**< \brief [16:16] PFLASH p Sector 176 Locked for Write Protection (rh) */
    unsigned int S177L:1;                   /**< \brief [17:17] PFLASH p Sector 177 Locked for Write Protection (rh) */
    unsigned int S178L:1;                   /**< \brief [18:18] PFLASH p Sector 178 Locked for Write Protection (rh) */
    unsigned int S179L:1;                   /**< \brief [19:19] PFLASH p Sector 179 Locked for Write Protection (rh) */
    unsigned int S180L:1;                   /**< \brief [20:20] PFLASH p Sector 180 Locked for Write Protection (rh) */
    unsigned int S181L:1;                   /**< \brief [21:21] PFLASH p Sector 181 Locked for Write Protection (rh) */
    unsigned int S182L:1;                   /**< \brief [22:22] PFLASH p Sector 182 Locked for Write Protection (rh) */
    unsigned int S183L:1;                   /**< \brief [23:23] PFLASH p Sector 183 Locked for Write Protection (rh) */
    unsigned int S184L:1;                   /**< \brief [24:24] PFLASH p Sector 184 Locked for Write Protection (rh) */
    unsigned int S185L:1;                   /**< \brief [25:25] PFLASH p Sector 185 Locked for Write Protection (rh) */
    unsigned int S186L:1;                   /**< \brief [26:26] PFLASH p Sector 186 Locked for Write Protection (rh) */
    unsigned int S187L:1;                   /**< \brief [27:27] PFLASH p Sector 187 Locked for Write Protection (rh) */
    unsigned int S188L:1;                   /**< \brief [28:28] PFLASH p Sector 188 Locked for Write Protection (rh) */
    unsigned int S189L:1;                   /**< \brief [29:29] PFLASH p Sector 189 Locked for Write Protection (rh) */
    unsigned int S190L:1;                   /**< \brief [30:30] PFLASH p Sector 190 Locked for Write Protection (rh) */
    unsigned int S191L:1;                   /**< \brief [31:31] PFLASH p Sector 191 Locked for Write Protection (rh) */
} Ifx_DMU_HP_PROCON_P5_Bits;

/** \brief  PFLASH Bank WOP Configuration 0 */
typedef struct _Ifx_DMU_HP_PROCON_WOP0_Bits
{
    unsigned int S0WOP:1;                   /**< \brief [0:0] PFLASH p Sector 0 Configured for Write-Once Protection (rh) */
    unsigned int S1WOP:1;                   /**< \brief [1:1] PFLASH p Sector 1 Configured for Write-Once Protection (rh) */
    unsigned int S2WOP:1;                   /**< \brief [2:2] PFLASH p Sector 2 Configured for Write-Once Protection (rh) */
    unsigned int S3WOP:1;                   /**< \brief [3:3] PFLASH p Sector 3 Configured for Write-Once Protection (rh) */
    unsigned int S4WOP:1;                   /**< \brief [4:4] PFLASH p Sector 4 Configured for Write-Once Protection (rh) */
    unsigned int S5WOP:1;                   /**< \brief [5:5] PFLASH p Sector 5 Configured for Write-Once Protection (rh) */
    unsigned int S6WOP:1;                   /**< \brief [6:6] PFLASH p Sector 6 Configured for Write-Once Protection (rh) */
    unsigned int S7WOP:1;                   /**< \brief [7:7] PFLASH p Sector 7 Configured for Write-Once Protection (rh) */
    unsigned int S8WOP:1;                   /**< \brief [8:8] PFLASH p Sector 8 Configured for Write-Once Protection (rh) */
    unsigned int S9WOP:1;                   /**< \brief [9:9] PFLASH p Sector 9 Configured for Write-Once Protection (rh) */
    unsigned int S10WOP:1;                  /**< \brief [10:10] PFLASH p Sector 10 Configured for Write-Once Protection (rh) */
    unsigned int S11WOP:1;                  /**< \brief [11:11] PFLASH p Sector 11 Configured for Write-Once Protection (rh) */
    unsigned int S12WOP:1;                  /**< \brief [12:12] PFLASH p Sector 12 Configured for Write-Once Protection (rh) */
    unsigned int S13WOP:1;                  /**< \brief [13:13] PFLASH p Sector 13 Configured for Write-Once Protection (rh) */
    unsigned int S14WOP:1;                  /**< \brief [14:14] PFLASH p Sector 14 Configured for Write-Once Protection (rh) */
    unsigned int S15WOP:1;                  /**< \brief [15:15] PFLASH p Sector 15 Configured for Write-Once Protection (rh) */
    unsigned int S16WOP:1;                  /**< \brief [16:16] PFLASH p Sector 16 Configured for Write-Once Protection (rh) */
    unsigned int S17WOP:1;                  /**< \brief [17:17] PFLASH p Sector 17 Configured for Write-Once Protection (rh) */
    unsigned int S18WOP:1;                  /**< \brief [18:18] PFLASH p Sector 18 Configured for Write-Once Protection (rh) */
    unsigned int S19WOP:1;                  /**< \brief [19:19] PFLASH p Sector 19 Configured for Write-Once Protection (rh) */
    unsigned int S20WOP:1;                  /**< \brief [20:20] PFLASH p Sector 20 Configured for Write-Once Protection (rh) */
    unsigned int S21WOP:1;                  /**< \brief [21:21] PFLASH p Sector 21 Configured for Write-Once Protection (rh) */
    unsigned int S22WOP:1;                  /**< \brief [22:22] PFLASH p Sector 22 Configured for Write-Once Protection (rh) */
    unsigned int S23WOP:1;                  /**< \brief [23:23] PFLASH p Sector 23 Configured for Write-Once Protection (rh) */
    unsigned int S24WOP:1;                  /**< \brief [24:24] PFLASH p Sector 24 Configured for Write-Once Protection (rh) */
    unsigned int S25WOP:1;                  /**< \brief [25:25] PFLASH p Sector 25 Configured for Write-Once Protection (rh) */
    unsigned int S26WOP:1;                  /**< \brief [26:26] PFLASH p Sector 26 Configured for Write-Once Protection (rh) */
    unsigned int S27WOP:1;                  /**< \brief [27:27] PFLASH p Sector 27 Configured for Write-Once Protection (rh) */
    unsigned int S28WOP:1;                  /**< \brief [28:28] PFLASH p Sector 28 Configured for Write-Once Protection (rh) */
    unsigned int S29WOP:1;                  /**< \brief [29:29] PFLASH p Sector 29 Configured for Write-Once Protection (rh) */
    unsigned int S30WOP:1;                  /**< \brief [30:30] PFLASH p Sector 30 Configured for Write-Once Protection (rh) */
    unsigned int S31WOP:1;                  /**< \brief [31:31] PFLASH p Sector 31 Configured for Write-Once Protection (rh) */
} Ifx_DMU_HP_PROCON_WOP0_Bits;

/** \brief  PFLASH Bank WOP Configuration 1 */
typedef struct _Ifx_DMU_HP_PROCON_WOP1_Bits
{
    unsigned int S32WOP:1;                  /**< \brief [0:0] PFLASH p Sector 32 Configured for Write-Once Protection (rh) */
    unsigned int S33WOP:1;                  /**< \brief [1:1] PFLASH p Sector 33 Configured for Write-Once Protection (rh) */
    unsigned int S34WOP:1;                  /**< \brief [2:2] PFLASH p Sector 34 Configured for Write-Once Protection (rh) */
    unsigned int S35WOP:1;                  /**< \brief [3:3] PFLASH p Sector 35 Configured for Write-Once Protection (rh) */
    unsigned int S36WOP:1;                  /**< \brief [4:4] PFLASH p Sector 36 Configured for Write-Once Protection (rh) */
    unsigned int S37WOP:1;                  /**< \brief [5:5] PFLASH p Sector 37 Configured for Write-Once Protection (rh) */
    unsigned int S38WOP:1;                  /**< \brief [6:6] PFLASH p Sector 38 Configured for Write-Once Protection (rh) */
    unsigned int S39WOP:1;                  /**< \brief [7:7] PFLASH p Sector 39 Configured for Write-Once Protection (rh) */
    unsigned int S40WOP:1;                  /**< \brief [8:8] PFLASH p Sector 40 Configured for Write-Once Protection (rh) */
    unsigned int S41WOP:1;                  /**< \brief [9:9] PFLASH p Sector 41 Configured for Write-Once Protection (rh) */
    unsigned int S42WOP:1;                  /**< \brief [10:10] PFLASH p Sector 42 Configured for Write-Once Protection (rh) */
    unsigned int S43WOP:1;                  /**< \brief [11:11] PFLASH p Sector 43 Configured for Write-Once Protection (rh) */
    unsigned int S44WOP:1;                  /**< \brief [12:12] PFLASH p Sector 44 Configured for Write-Once Protection (rh) */
    unsigned int S45WOP:1;                  /**< \brief [13:13] PFLASH p Sector 45 Configured for Write-Once Protection (rh) */
    unsigned int S46WOP:1;                  /**< \brief [14:14] PFLASH p Sector 46 Configured for Write-Once Protection (rh) */
    unsigned int S47WOP:1;                  /**< \brief [15:15] PFLASH p Sector 47 Configured for Write-Once Protection (rh) */
    unsigned int S48WOP:1;                  /**< \brief [16:16] PFLASH p Sector 48 Configured for Write-Once Protection (rh) */
    unsigned int S49WOP:1;                  /**< \brief [17:17] PFLASH p Sector 49 Configured for Write-Once Protection (rh) */
    unsigned int S50WOP:1;                  /**< \brief [18:18] PFLASH p Sector 50 Configured for Write-Once Protection (rh) */
    unsigned int S51WOP:1;                  /**< \brief [19:19] PFLASH p Sector 51 Configured for Write-Once Protection (rh) */
    unsigned int S52WOP:1;                  /**< \brief [20:20] PFLASH p Sector 52 Configured for Write-Once Protection (rh) */
    unsigned int S53WOP:1;                  /**< \brief [21:21] PFLASH p Sector 53 Configured for Write-Once Protection (rh) */
    unsigned int S54WOP:1;                  /**< \brief [22:22] PFLASH p Sector 54 Configured for Write-Once Protection (rh) */
    unsigned int S55WOP:1;                  /**< \brief [23:23] PFLASH p Sector 55 Configured for Write-Once Protection (rh) */
    unsigned int S56WOP:1;                  /**< \brief [24:24] PFLASH p Sector 56 Configured for Write-Once Protection (rh) */
    unsigned int S57WOP:1;                  /**< \brief [25:25] PFLASH p Sector 57 Configured for Write-Once Protection (rh) */
    unsigned int S58WOP:1;                  /**< \brief [26:26] PFLASH p Sector 58 Configured for Write-Once Protection (rh) */
    unsigned int S59WOP:1;                  /**< \brief [27:27] PFLASH p Sector 59 Configured for Write-Once Protection (rh) */
    unsigned int S60WOP:1;                  /**< \brief [28:28] PFLASH p Sector 60 Configured for Write-Once Protection (rh) */
    unsigned int S61WOP:1;                  /**< \brief [29:29] PFLASH p Sector 61 Configured for Write-Once Protection (rh) */
    unsigned int S62WOP:1;                  /**< \brief [30:30] PFLASH p Sector 62 Configured for Write-Once Protection (rh) */
    unsigned int S63WOP:1;                  /**< \brief [31:31] PFLASH p Sector 63 Configured for Write-Once Protection (rh) */
} Ifx_DMU_HP_PROCON_WOP1_Bits;

/** \brief  PFLASH Bank WOP Configuration 2 */
typedef struct _Ifx_DMU_HP_PROCON_WOP2_Bits
{
    unsigned int S64WOP:1;                  /**< \brief [0:0] PFLASH p Sector 64 Configured for Write-Once Protection (rh) */
    unsigned int S65WOP:1;                  /**< \brief [1:1] PFLASH p Sector 65 Configured for Write-Once Protection (rh) */
    unsigned int S66WOP:1;                  /**< \brief [2:2] PFLASH p Sector 66 Configured for Write-Once Protection (rh) */
    unsigned int S67WOP:1;                  /**< \brief [3:3] PFLASH p Sector 67 Configured for Write-Once Protection (rh) */
    unsigned int S68WOP:1;                  /**< \brief [4:4] PFLASH p Sector 68 Configured for Write-Once Protection (rh) */
    unsigned int S69WOP:1;                  /**< \brief [5:5] PFLASH p Sector 69 Configured for Write-Once Protection (rh) */
    unsigned int S70WOP:1;                  /**< \brief [6:6] PFLASH p Sector 70 Configured for Write-Once Protection (rh) */
    unsigned int S71WOP:1;                  /**< \brief [7:7] PFLASH p Sector 71 Configured for Write-Once Protection (rh) */
    unsigned int S72WOP:1;                  /**< \brief [8:8] PFLASH p Sector 72 Configured for Write-Once Protection (rh) */
    unsigned int S73WOP:1;                  /**< \brief [9:9] PFLASH p Sector 73 Configured for Write-Once Protection (rh) */
    unsigned int S74WOP:1;                  /**< \brief [10:10] PFLASH p Sector 74 Configured for Write-Once Protection (rh) */
    unsigned int S75WOP:1;                  /**< \brief [11:11] PFLASH p Sector 75 Configured for Write-Once Protection (rh) */
    unsigned int S76WOP:1;                  /**< \brief [12:12] PFLASH p Sector 76 Configured for Write-Once Protection (rh) */
    unsigned int S77WOP:1;                  /**< \brief [13:13] PFLASH p Sector 77 Configured for Write-Once Protection (rh) */
    unsigned int S78WOP:1;                  /**< \brief [14:14] PFLASH p Sector 78 Configured for Write-Once Protection (rh) */
    unsigned int S79WOP:1;                  /**< \brief [15:15] PFLASH p Sector 79 Configured for Write-Once Protection (rh) */
    unsigned int S80WOP:1;                  /**< \brief [16:16] PFLASH p Sector 80 Configured for Write-Once Protection (rh) */
    unsigned int S81WOP:1;                  /**< \brief [17:17] PFLASH p Sector 81 Configured for Write-Once Protection (rh) */
    unsigned int S82WOP:1;                  /**< \brief [18:18] PFLASH p Sector 82 Configured for Write-Once Protection (rh) */
    unsigned int S83WOP:1;                  /**< \brief [19:19] PFLASH p Sector 83 Configured for Write-Once Protection (rh) */
    unsigned int S84WOP:1;                  /**< \brief [20:20] PFLASH p Sector 84 Configured for Write-Once Protection (rh) */
    unsigned int S85WOP:1;                  /**< \brief [21:21] PFLASH p Sector 85 Configured for Write-Once Protection (rh) */
    unsigned int S86WOP:1;                  /**< \brief [22:22] PFLASH p Sector 86 Configured for Write-Once Protection (rh) */
    unsigned int S87WOP:1;                  /**< \brief [23:23] PFLASH p Sector 87 Configured for Write-Once Protection (rh) */
    unsigned int S88WOP:1;                  /**< \brief [24:24] PFLASH p Sector 88 Configured for Write-Once Protection (rh) */
    unsigned int S89WOP:1;                  /**< \brief [25:25] PFLASH p Sector 89 Configured for Write-Once Protection (rh) */
    unsigned int S90WOP:1;                  /**< \brief [26:26] PFLASH p Sector 90 Configured for Write-Once Protection (rh) */
    unsigned int S91WOP:1;                  /**< \brief [27:27] PFLASH p Sector 91 Configured for Write-Once Protection (rh) */
    unsigned int S92WOP:1;                  /**< \brief [28:28] PFLASH p Sector 92 Configured for Write-Once Protection (rh) */
    unsigned int S93WOP:1;                  /**< \brief [29:29] PFLASH p Sector 93 Configured for Write-Once Protection (rh) */
    unsigned int S94WOP:1;                  /**< \brief [30:30] PFLASH p Sector 94 Configured for Write-Once Protection (rh) */
    unsigned int S95WOP:1;                  /**< \brief [31:31] PFLASH p Sector 95 Configured for Write-Once Protection (rh) */
} Ifx_DMU_HP_PROCON_WOP2_Bits;

/** \brief  PFLASH Bank WOP Configuration 3 */
typedef struct _Ifx_DMU_HP_PROCON_WOP3_Bits
{
    unsigned int S96WOP:1;                  /**< \brief [0:0] PFLASH p Sector 96 Configured for Write-Once Protection (rh) */
    unsigned int S97WOP:1;                  /**< \brief [1:1] PFLASH p Sector 97 Configured for Write-Once Protection (rh) */
    unsigned int S98WOP:1;                  /**< \brief [2:2] PFLASH p Sector 98 Configured for Write-Once Protection (rh) */
    unsigned int S99WOP:1;                  /**< \brief [3:3] PFLASH p Sector 99 Configured for Write-Once Protection (rh) */
    unsigned int S100WOP:1;                 /**< \brief [4:4] PFLASH p Sector 100 Configured for Write-Once Protection (rh) */
    unsigned int S101WOP:1;                 /**< \brief [5:5] PFLASH p Sector 101 Configured for Write-Once Protection (rh) */
    unsigned int S102WOP:1;                 /**< \brief [6:6] PFLASH p Sector 102 Configured for Write-Once Protection (rh) */
    unsigned int S103WOP:1;                 /**< \brief [7:7] PFLASH p Sector 103 Configured for Write-Once Protection (rh) */
    unsigned int S104WOP:1;                 /**< \brief [8:8] PFLASH p Sector 104 Configured for Write-Once Protection (rh) */
    unsigned int S105WOP:1;                 /**< \brief [9:9] PFLASH p Sector 105 Configured for Write-Once Protection (rh) */
    unsigned int S106WOP:1;                 /**< \brief [10:10] PFLASH p Sector 106 Configured for Write-Once Protection (rh) */
    unsigned int S107WOP:1;                 /**< \brief [11:11] PFLASH p Sector 107 Configured for Write-Once Protection (rh) */
    unsigned int S108WOP:1;                 /**< \brief [12:12] PFLASH p Sector 108 Configured for Write-Once Protection (rh) */
    unsigned int S109WOP:1;                 /**< \brief [13:13] PFLASH p Sector 109 Configured for Write-Once Protection (rh) */
    unsigned int S110WOP:1;                 /**< \brief [14:14] PFLASH p Sector 110 Configured for Write-Once Protection (rh) */
    unsigned int S111WOP:1;                 /**< \brief [15:15] PFLASH p Sector 111 Configured for Write-Once Protection (rh) */
    unsigned int S112WOP:1;                 /**< \brief [16:16] PFLASH p Sector 112 Configured for Write-Once Protection (rh) */
    unsigned int S113WOP:1;                 /**< \brief [17:17] PFLASH p Sector 113 Configured for Write-Once Protection (rh) */
    unsigned int S114WOP:1;                 /**< \brief [18:18] PFLASH p Sector 114 Configured for Write-Once Protection (rh) */
    unsigned int S115WOP:1;                 /**< \brief [19:19] PFLASH p Sector 115 Configured for Write-Once Protection (rh) */
    unsigned int S116WOP:1;                 /**< \brief [20:20] PFLASH p Sector 116 Configured for Write-Once Protection (rh) */
    unsigned int S117WOP:1;                 /**< \brief [21:21] PFLASH p Sector 117 Configured for Write-Once Protection (rh) */
    unsigned int S118WOP:1;                 /**< \brief [22:22] PFLASH p Sector 118 Configured for Write-Once Protection (rh) */
    unsigned int S119WOP:1;                 /**< \brief [23:23] PFLASH p Sector 119 Configured for Write-Once Protection (rh) */
    unsigned int S120WOP:1;                 /**< \brief [24:24] PFLASH p Sector 120 Configured for Write-Once Protection (rh) */
    unsigned int S121WOP:1;                 /**< \brief [25:25] PFLASH p Sector 121 Configured for Write-Once Protection (rh) */
    unsigned int S122WOP:1;                 /**< \brief [26:26] PFLASH p Sector 122 Configured for Write-Once Protection (rh) */
    unsigned int S123WOP:1;                 /**< \brief [27:27] PFLASH p Sector 123 Configured for Write-Once Protection (rh) */
    unsigned int S124WOP:1;                 /**< \brief [28:28] PFLASH p Sector 124 Configured for Write-Once Protection (rh) */
    unsigned int S125WOP:1;                 /**< \brief [29:29] PFLASH p Sector 125 Configured for Write-Once Protection (rh) */
    unsigned int S126WOP:1;                 /**< \brief [30:30] PFLASH p Sector 126 Configured for Write-Once Protection (rh) */
    unsigned int S127WOP:1;                 /**< \brief [31:31] PFLASH p Sector 127 Configured for Write-Once Protection (rh) */
} Ifx_DMU_HP_PROCON_WOP3_Bits;

/** \brief  PFLASH Bank WOP Configuration 4 */
typedef struct _Ifx_DMU_HP_PROCON_WOP4_Bits
{
    unsigned int S128WOP:1;                 /**< \brief [0:0] PFLASH p Sector 128 Configured for Write-Once Protection (rh) */
    unsigned int S129WOP:1;                 /**< \brief [1:1] PFLASH p Sector 129 Configured for Write-Once Protection (rh) */
    unsigned int S130WOP:1;                 /**< \brief [2:2] PFLASH p Sector 130 Configured for Write-Once Protection (rh) */
    unsigned int S131WOP:1;                 /**< \brief [3:3] PFLASH p Sector 131 Configured for Write-Once Protection (rh) */
    unsigned int S132WOP:1;                 /**< \brief [4:4] PFLASH p Sector 132 Configured for Write-Once Protection (rh) */
    unsigned int S133WOP:1;                 /**< \brief [5:5] PFLASH p Sector 133 Configured for Write-Once Protection (rh) */
    unsigned int S134WOP:1;                 /**< \brief [6:6] PFLASH p Sector 134 Configured for Write-Once Protection (rh) */
    unsigned int S135WOP:1;                 /**< \brief [7:7] PFLASH p Sector 135 Configured for Write-Once Protection (rh) */
    unsigned int S136WOP:1;                 /**< \brief [8:8] PFLASH p Sector 136 Configured for Write-Once Protection (rh) */
    unsigned int S137WOP:1;                 /**< \brief [9:9] PFLASH p Sector 137 Configured for Write-Once Protection (rh) */
    unsigned int S138WOP:1;                 /**< \brief [10:10] PFLASH p Sector 138 Configured for Write-Once Protection (rh) */
    unsigned int S139WOP:1;                 /**< \brief [11:11] PFLASH p Sector 139 Configured for Write-Once Protection (rh) */
    unsigned int S140WOP:1;                 /**< \brief [12:12] PFLASH p Sector 140 Configured for Write-Once Protection (rh) */
    unsigned int S141WOP:1;                 /**< \brief [13:13] PFLASH p Sector 141 Configured for Write-Once Protection (rh) */
    unsigned int S142WOP:1;                 /**< \brief [14:14] PFLASH p Sector 142 Configured for Write-Once Protection (rh) */
    unsigned int S143WOP:1;                 /**< \brief [15:15] PFLASH p Sector 143 Configured for Write-Once Protection (rh) */
    unsigned int S144WOP:1;                 /**< \brief [16:16] PFLASH p Sector 144 Configured for Write-Once Protection (rh) */
    unsigned int S145WOP:1;                 /**< \brief [17:17] PFLASH p Sector 145 Configured for Write-Once Protection (rh) */
    unsigned int S146WOP:1;                 /**< \brief [18:18] PFLASH p Sector 146 Configured for Write-Once Protection (rh) */
    unsigned int S147WOP:1;                 /**< \brief [19:19] PFLASH p Sector 147 Configured for Write-Once Protection (rh) */
    unsigned int S148WOP:1;                 /**< \brief [20:20] PFLASH p Sector 148 Configured for Write-Once Protection (rh) */
    unsigned int S149WOP:1;                 /**< \brief [21:21] PFLASH p Sector 149 Configured for Write-Once Protection (rh) */
    unsigned int S150WOP:1;                 /**< \brief [22:22] PFLASH p Sector 150 Configured for Write-Once Protection (rh) */
    unsigned int S151WOP:1;                 /**< \brief [23:23] PFLASH p Sector 151 Configured for Write-Once Protection (rh) */
    unsigned int S152WOP:1;                 /**< \brief [24:24] PFLASH p Sector 152 Configured for Write-Once Protection (rh) */
    unsigned int S153WOP:1;                 /**< \brief [25:25] PFLASH p Sector 153 Configured for Write-Once Protection (rh) */
    unsigned int S154WOP:1;                 /**< \brief [26:26] PFLASH p Sector 154 Configured for Write-Once Protection (rh) */
    unsigned int S155WOP:1;                 /**< \brief [27:27] PFLASH p Sector 155 Configured for Write-Once Protection (rh) */
    unsigned int S156WOP:1;                 /**< \brief [28:28] PFLASH p Sector 156 Configured for Write-Once Protection (rh) */
    unsigned int S157WOP:1;                 /**< \brief [29:29] PFLASH p Sector 157 Configured for Write-Once Protection (rh) */
    unsigned int S158WOP:1;                 /**< \brief [30:30] PFLASH p Sector 158 Configured for Write-Once Protection (rh) */
    unsigned int S159WOP:1;                 /**< \brief [31:31] PFLASH p Sector 159 Configured for Write-Once Protection (rh) */
} Ifx_DMU_HP_PROCON_WOP4_Bits;

/** \brief  PFLASH Bank WOP Configuration 5 */
typedef struct _Ifx_DMU_HP_PROCON_WOP5_Bits
{
    unsigned int S160WOP:1;                 /**< \brief [0:0] PFLASH p Sector 160 Configured for Write-Once Protection (rh) */
    unsigned int S161WOP:1;                 /**< \brief [1:1] PFLASH p Sector 161 Configured for Write-Once Protection (rh) */
    unsigned int S162WOP:1;                 /**< \brief [2:2] PFLASH p Sector 162 Configured for Write-Once Protection (rh) */
    unsigned int S163WOP:1;                 /**< \brief [3:3] PFLASH p Sector 163 Configured for Write-Once Protection (rh) */
    unsigned int S164WOP:1;                 /**< \brief [4:4] PFLASH p Sector 164 Configured for Write-Once Protection (rh) */
    unsigned int S165WOP:1;                 /**< \brief [5:5] PFLASH p Sector 165 Configured for Write-Once Protection (rh) */
    unsigned int S166WOP:1;                 /**< \brief [6:6] PFLASH p Sector 166 Configured for Write-Once Protection (rh) */
    unsigned int S167WOP:1;                 /**< \brief [7:7] PFLASH p Sector 167 Configured for Write-Once Protection (rh) */
    unsigned int S168WOP:1;                 /**< \brief [8:8] PFLASH p Sector 168 Configured for Write-Once Protection (rh) */
    unsigned int S169WOP:1;                 /**< \brief [9:9] PFLASH p Sector 169 Configured for Write-Once Protection (rh) */
    unsigned int S170WOP:1;                 /**< \brief [10:10] PFLASH p Sector 170 Configured for Write-Once Protection (rh) */
    unsigned int S171WOP:1;                 /**< \brief [11:11] PFLASH p Sector 171 Configured for Write-Once Protection (rh) */
    unsigned int S172WOP:1;                 /**< \brief [12:12] PFLASH p Sector 172 Configured for Write-Once Protection (rh) */
    unsigned int S173WOP:1;                 /**< \brief [13:13] PFLASH p Sector 173 Configured for Write-Once Protection (rh) */
    unsigned int S174WOP:1;                 /**< \brief [14:14] PFLASH p Sector 174 Configured for Write-Once Protection (rh) */
    unsigned int S175WOP:1;                 /**< \brief [15:15] PFLASH p Sector 175 Configured for Write-Once Protection (rh) */
    unsigned int S176WOP:1;                 /**< \brief [16:16] PFLASH p Sector 176 Configured for Write-Once Protection (rh) */
    unsigned int S177WOP:1;                 /**< \brief [17:17] PFLASH p Sector 177 Configured for Write-Once Protection (rh) */
    unsigned int S178WOP:1;                 /**< \brief [18:18] PFLASH p Sector 178 Configured for Write-Once Protection (rh) */
    unsigned int S179WOP:1;                 /**< \brief [19:19] PFLASH p Sector 179 Configured for Write-Once Protection (rh) */
    unsigned int S180WOP:1;                 /**< \brief [20:20] PFLASH p Sector 180 Configured for Write-Once Protection (rh) */
    unsigned int S181WOP:1;                 /**< \brief [21:21] PFLASH p Sector 181 Configured for Write-Once Protection (rh) */
    unsigned int S182WOP:1;                 /**< \brief [22:22] PFLASH p Sector 182 Configured for Write-Once Protection (rh) */
    unsigned int S183WOP:1;                 /**< \brief [23:23] PFLASH p Sector 183 Configured for Write-Once Protection (rh) */
    unsigned int S184WOP:1;                 /**< \brief [24:24] PFLASH p Sector 184 Configured for Write-Once Protection (rh) */
    unsigned int S185WOP:1;                 /**< \brief [25:25] PFLASH p Sector 185 Configured for Write-Once Protection (rh) */
    unsigned int S186WOP:1;                 /**< \brief [26:26] PFLASH p Sector 186 Configured for Write-Once Protection (rh) */
    unsigned int S187WOP:1;                 /**< \brief [27:27] PFLASH p Sector 187 Configured for Write-Once Protection (rh) */
    unsigned int S188WOP:1;                 /**< \brief [28:28] PFLASH p Sector 188 Configured for Write-Once Protection (rh) */
    unsigned int S189WOP:1;                 /**< \brief [29:29] PFLASH p Sector 189 Configured for Write-Once Protection (rh) */
    unsigned int S190WOP:1;                 /**< \brief [30:30] PFLASH p Sector 190 Configured for Write-Once Protection (rh) */
    unsigned int S191WOP:1;                 /**< \brief [31:31] PFLASH p Sector 191 Configured for Write-Once Protection (rh) */
} Ifx_DMU_HP_PROCON_WOP5_Bits;

/** \brief  Clear Error Register */
typedef struct _Ifx_DMU_SF_CLRE_Bits
{
    unsigned int reserved_0:1;              /**< \brief \internal Reserved */
    unsigned int CSQER:1;                   /**< \brief [1:1] Clear Command Sequence Error (w) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int CPVER:1;                   /**< \brief [3:3] Clear Program Verify Error (w) */
    unsigned int CEVER:1;                   /**< \brief [4:4] Clear Erase Verify Error (w) */
    unsigned int reserved_5:27;             /**< \brief \internal Reserved */
} Ifx_DMU_SF_CLRE_Bits;

/** \brief  HSM Flash Configuration Register */
typedef struct _Ifx_DMU_SF_CONTROL_Bits
{
    unsigned int LCKHSMUCB:2;               /**< \brief [1:0] Lock Access to UCB_HSMCFG (rwh) */
    unsigned int reserved_2:14;             /**< \brief \internal Reserved */
    unsigned int CPROG:1;                   /**< \brief [16:16] Clear Programming State (w) */
    unsigned int CERASE:1;                  /**< \brief [17:17] Clear Erase State (w) */
    unsigned int CUSER:1;                   /**< \brief [18:18] Clear User State (w) */
    unsigned int reserved_19:13;            /**< \brief \internal Reserved */
} Ifx_DMU_SF_CONTROL_Bits;

/** \brief  DF1 ECC Control Register */
typedef struct _Ifx_DMU_SF_ECCC_Bits
{
    unsigned int CLR:2;                     /**< \brief [1:0] Clear ECC status bits (w) */
    unsigned int reserved_2:26;             /**< \brief \internal Reserved */
    unsigned int ECCCORDIS:2;               /**< \brief [29:28] HSM Command Interface ECC Correction Disable (rw) */
    unsigned int TRAPDIS:2;                 /**< \brief [31:30] HSM Command Interface Uncorrectable ECC Bit Error Trap Disable (rw) */
} Ifx_DMU_SF_ECCC_Bits;

/** \brief  DF1 ECC Read Register */
typedef struct _Ifx_DMU_SF_ECCR_Bits
{
    unsigned int RCODE:22;                  /**< \brief [21:0] Error Correction Read Code (rh) */
    unsigned int RED:2;                     /**< \brief [23:22] Redundant Bits (rh) */
    unsigned int reserved_24:8;             /**< \brief \internal Reserved */
} Ifx_DMU_SF_ECCR_Bits;

/** \brief  DF1 ECC Status Register */
typedef struct _Ifx_DMU_SF_ECCS_Bits
{
    unsigned int ERR1:1;                    /**< \brief [0:0] Read Access Single Bit ECC Error (rh) */
    unsigned int ERR2:1;                    /**< \brief [1:1] Read Access Double Bit ECC Error (rh) */
    unsigned int ERR3:1;                    /**< \brief [2:2] Read Access Triple Bit ECC Error (rh) */
    unsigned int ERRM:1;                    /**< \brief [3:3] Read Access Multi-bit ECC Error (rh) */
    unsigned int reserved_4:3;              /**< \brief \internal Reserved */
    unsigned int ERRANY:1;                  /**< \brief [7:7] Any Read Access ECC Error (rh) */
    unsigned int BLANKD:1;                  /**< \brief [8:8] Read Access Blank Digital (rh) */
    unsigned int BLANKA:1;                  /**< \brief [9:9] Read Access Blank Analog (rh) */
    unsigned int reserved_10:6;             /**< \brief \internal Reserved */
    unsigned int AER1:1;                    /**< \brief [16:16] Accumulated Single Bit ECC Errors (rh) */
    unsigned int AER2:1;                    /**< \brief [17:17] Accumulated Double Bit ECC Errors (rh) */
    unsigned int AER3:1;                    /**< \brief [18:18] Accumulated Triple Bit ECC Errors (rh) */
    unsigned int AERM:1;                    /**< \brief [19:19] Accumulated Multi-bit ECC Errors (rh) */
    unsigned int reserved_20:3;             /**< \brief \internal Reserved */
    unsigned int AERANY:1;                  /**< \brief [23:23] Accumulated Any Read Access ECC Error (rh) */
    unsigned int ABLANKD:1;                 /**< \brief [24:24] Accumulated Blank Digital (rh) */
    unsigned int ABLANKA:1;                 /**< \brief [25:25] Accumulated Blank Analog (rh) */
    unsigned int reserved_26:6;             /**< \brief \internal Reserved */
} Ifx_DMU_SF_ECCS_Bits;

/** \brief  DF1 ECC Write Register */
typedef struct _Ifx_DMU_SF_ECCW_Bits
{
    unsigned int WCODE:22;                  /**< \brief [21:0] Error Correction Write Code (rw) */
    unsigned int reserved_22:8;             /**< \brief \internal Reserved */
    unsigned int ECCENCDIS:2;               /**< \brief [31:30] ECC Encoding Disable (rw) */
} Ifx_DMU_SF_ECCW_Bits;

/** \brief  HSM Enable Error Interrupt Control Register */
typedef struct _Ifx_DMU_SF_EER_Bits
{
    unsigned int OPERM:1;                   /**< \brief [0:0] Operation Error Interrupt Mask (rw) */
    unsigned int SQERM:1;                   /**< \brief [1:1] Command Sequence Error Interrupt Mask (rw) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int PVERM:1;                   /**< \brief [3:3] Program Verify Error Interrupt Mask (rw) */
    unsigned int EVERM:1;                   /**< \brief [4:4] Erase Verify Error Interrupt Mask (rw) */
    unsigned int reserved_5:26;             /**< \brief \internal Reserved */
    unsigned int EOBM:1;                    /**< \brief [31:31] End of Busy Interrupt Mask (rw) */
} Ifx_DMU_SF_EER_Bits;

/** \brief  HSM Error Status Register */
typedef struct _Ifx_DMU_SF_ERRSR_Bits
{
    unsigned int OPER:1;                    /**< \brief [0:0] Flash Operation Error (rh) */
    unsigned int SQER:1;                    /**< \brief [1:1] Command Sequence Error (rh) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int PVER:1;                    /**< \brief [3:3] Program Verify Error (rh) */
    unsigned int EVER:1;                    /**< \brief [4:4] Erase Verify Error (rh) */
    unsigned int reserved_5:27;             /**< \brief \internal Reserved */
} Ifx_DMU_SF_ERRSR_Bits;

/** \brief  DF1 Margin Control Register */
typedef struct _Ifx_DMU_SF_MARGIN_Bits
{
    unsigned int SELD1:2;                   /**< \brief [1:0] DF1 Margin Read Selection (rw) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_DMU_SF_MARGIN_Bits;

/** \brief  Flash Operation Register */
typedef struct _Ifx_DMU_SF_OPERATION_Bits
{
    unsigned int PROG:1;                    /**< \brief [0:0] Programming State (rh) */
    unsigned int ERASE:1;                   /**< \brief [1:1] Erase State (rh) */
    unsigned int USER:1;                    /**< \brief [2:2] User State (rh) */
    unsigned int reserved_3:29;             /**< \brief \internal Reserved */
} Ifx_DMU_SF_OPERATION_Bits;

/** \brief  DF1 User Mode Control */
typedef struct _Ifx_DMU_SF_PROCONUSR_Bits
{
    unsigned int MODE:2;                    /**< \brief [1:0] DF1 User Mode Control (rh) */
    unsigned int UCB:30;                    /**< \brief [31:2] Reserved for UCB (rh) */
} Ifx_DMU_SF_PROCONUSR_Bits;

/** \brief  HSM Flash Status Register */
typedef struct _Ifx_DMU_SF_STATUS_Bits
{
    unsigned int reserved_0:1;              /**< \brief \internal Reserved */
    unsigned int D1BUSY:1;                  /**< \brief [1:1] Data Flash Bank 1 Busy (rh) */
    unsigned int reserved_2:18;             /**< \brief \internal Reserved */
    unsigned int DFPAGE:1;                  /**< \brief [20:20] Data Flash in Page Mode (rh) */
    unsigned int reserved_21:11;            /**< \brief \internal Reserved */
} Ifx_DMU_SF_STATUS_Bits;

/** \brief  HSM Suspend Control Register */
typedef struct _Ifx_DMU_SF_SUSPEND_Bits
{
    unsigned int REQ:1;                     /**< \brief [0:0] Suspend Request (rwh) */
    unsigned int CLR:1;                     /**< \brief [1:1] Suspend Clear (w) */
    unsigned int reserved_2:14;             /**< \brief \internal Reserved */
    unsigned int SPND:1;                    /**< \brief [16:16] Flash Operation Suspended (rh) */
    unsigned int ERR:1;                     /**< \brief [17:17] Suspend Error (rh) */
    unsigned int reserved_18:14;            /**< \brief \internal Reserved */
} Ifx_DMU_SF_SUSPEND_Bits;

/** \brief  HSM Interface Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSM_Bits
{
    unsigned int HSMDBGDIS:1;               /**< \brief [0:0] HSM Debug Disable (rh) */
    unsigned int DBGIFLCK:1;                /**< \brief [1:1] Debug Interface Locked (rh) */
    unsigned int TSTIFLCK:1;                /**< \brief [2:2] Test Interface Locked (rh) */
    unsigned int HSMTSTDIS:1;               /**< \brief [3:3] HSM Test Disable (rh) */
    unsigned int HSMTRDIS:2;                /**< \brief [5:4] HSM Trace Disable (rh) */
    unsigned int HSMTRTYPE:1;               /**< \brief [6:6] HSM Type of Trace (rh) */
    unsigned int UCB:9;                     /**< \brief [15:7] Reserved for UCB (rh) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_DMU_SP_PROCONHSM_Bits;

/** \brief  HSM Code Boot Sector */
typedef struct _Ifx_DMU_SP_PROCONHSMCBS_Bits
{
    unsigned int BOOTSEL0:6;                /**< \brief [5:0] Boot Sector Selection (rh) */
    unsigned int UCB:2;                     /**< \brief [7:6] Reserved for UCB (rh) */
    unsigned int BOOTSEL1:6;                /**< \brief [13:8] Boot Sector Selection (rh) */
    unsigned int reserved_14:2;             /**< \brief \internal Reserved */
    unsigned int BOOTSEL2:6;                /**< \brief [21:16] Boot Sector Selection (rh) */
    unsigned int reserved_22:2;             /**< \brief \internal Reserved */
    unsigned int BOOTSEL3:6;                /**< \brief [29:24] Boot Sector Selection (rh) */
    unsigned int reserved_30:2;             /**< \brief \internal Reserved */
} Ifx_DMU_SP_PROCONHSMCBS_Bits;

/** \brief  HSM Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCFG_Bits
{
    unsigned int HSMBOOTEN:1;               /**< \brief [0:0] HSM Boot Enable (rh) */
    unsigned int SSWWAIT:1;                 /**< \brief [1:1] SSW Wait (rh) */
    unsigned int HSMDX:1;                   /**< \brief [2:2] HSM Data Sectors Exclusive (rh) */
    unsigned int UCB:1;                     /**< \brief [3:3] Reserved for UCB (rh) */
    unsigned int HSMRAMKEEP:2;              /**< \brief [5:4] HSM RAM Clear (rh) */
    unsigned int reserved_6:1;              /**< \brief \internal Reserved */
    unsigned int HSMENPINS:2;               /**< \brief [8:7] Enable HSM Forcing of Pins HSM1/2 (rh) */
    unsigned int HSMENRES:2;                /**< \brief [10:9] Enable HSM Triggering Resets (rh) */
    unsigned int DESTDBG:2;                 /**< \brief [12:11] Destructive Debug Entry (rh) */
    unsigned int BLKFLAN:1;                 /**< \brief [13:13] Block Flash Analysis (rh) */
    unsigned int reserved_14:18;            /**< \brief \internal Reserved */
} Ifx_DMU_SP_PROCONHSMCFG_Bits;

/** \brief  HSM Code OTP Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCOTP0_Bits
{
    unsigned int HSM0ROM:1;                 /**< \brief [0:0] PFLASH Sector 0 HSM Code Locked Forever (rh) */
    unsigned int HSM1ROM:1;                 /**< \brief [1:1] PFLASH Sector 1 HSM Code Locked Forever (rh) */
    unsigned int HSM2ROM:1;                 /**< \brief [2:2] PFLASH Sector 2 HSM Code Locked Forever (rh) */
    unsigned int HSM3ROM:1;                 /**< \brief [3:3] PFLASH Sector 3 HSM Code Locked Forever (rh) */
    unsigned int HSM4ROM:1;                 /**< \brief [4:4] PFLASH Sector 4 HSM Code Locked Forever (rh) */
    unsigned int HSM5ROM:1;                 /**< \brief [5:5] PFLASH Sector 5 HSM Code Locked Forever (rh) */
    unsigned int HSM6ROM:1;                 /**< \brief [6:6] PFLASH Sector 6 HSM Code Locked Forever (rh) */
    unsigned int HSM7ROM:1;                 /**< \brief [7:7] PFLASH Sector 7 HSM Code Locked Forever (rh) */
    unsigned int HSM8ROM:1;                 /**< \brief [8:8] PFLASH Sector 8 HSM Code Locked Forever (rh) */
    unsigned int HSM9ROM:1;                 /**< \brief [9:9] PFLASH Sector 9 HSM Code Locked Forever (rh) */
    unsigned int HSM10ROM:1;                /**< \brief [10:10] PFLASH Sector 10 HSM Code Locked Forever (rh) */
    unsigned int HSM11ROM:1;                /**< \brief [11:11] PFLASH Sector 11 HSM Code Locked Forever (rh) */
    unsigned int HSM12ROM:1;                /**< \brief [12:12] PFLASH Sector 12 HSM Code Locked Forever (rh) */
    unsigned int HSM13ROM:1;                /**< \brief [13:13] PFLASH Sector 13 HSM Code Locked Forever (rh) */
    unsigned int HSM14ROM:1;                /**< \brief [14:14] PFLASH Sector 14 HSM Code Locked Forever (rh) */
    unsigned int HSM15ROM:1;                /**< \brief [15:15] PFLASH Sector 15 HSM Code Locked Forever (rh) */
    unsigned int HSM16ROM:1;                /**< \brief [16:16] PFLASH Sector 16 HSM Code Locked Forever (rh) */
    unsigned int HSM17ROM:1;                /**< \brief [17:17] PFLASH Sector 17 HSM Code Locked Forever (rh) */
    unsigned int HSM18ROM:1;                /**< \brief [18:18] PFLASH Sector 18 HSM Code Locked Forever (rh) */
    unsigned int HSM19ROM:1;                /**< \brief [19:19] PFLASH Sector 19 HSM Code Locked Forever (rh) */
    unsigned int HSM20ROM:1;                /**< \brief [20:20] PFLASH Sector 20 HSM Code Locked Forever (rh) */
    unsigned int HSM21ROM:1;                /**< \brief [21:21] PFLASH Sector 21 HSM Code Locked Forever (rh) */
    unsigned int HSM22ROM:1;                /**< \brief [22:22] PFLASH Sector 22 HSM Code Locked Forever (rh) */
    unsigned int HSM23ROM:1;                /**< \brief [23:23] PFLASH Sector 23 HSM Code Locked Forever (rh) */
    unsigned int HSM24ROM:1;                /**< \brief [24:24] PFLASH Sector 24 HSM Code Locked Forever (rh) */
    unsigned int HSM25ROM:1;                /**< \brief [25:25] PFLASH Sector 25 HSM Code Locked Forever (rh) */
    unsigned int HSM26ROM:1;                /**< \brief [26:26] PFLASH Sector 26 HSM Code Locked Forever (rh) */
    unsigned int HSM27ROM:1;                /**< \brief [27:27] PFLASH Sector 27 HSM Code Locked Forever (rh) */
    unsigned int HSM28ROM:1;                /**< \brief [28:28] PFLASH Sector 28 HSM Code Locked Forever (rh) */
    unsigned int HSM29ROM:1;                /**< \brief [29:29] PFLASH Sector 29 HSM Code Locked Forever (rh) */
    unsigned int HSM30ROM:1;                /**< \brief [30:30] PFLASH Sector 30 HSM Code Locked Forever (rh) */
    unsigned int HSM31ROM:1;                /**< \brief [31:31] PFLASH Sector 31 HSM Code Locked Forever (rh) */
} Ifx_DMU_SP_PROCONHSMCOTP0_Bits;

/** \brief  HSM Code OTP Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCOTP1_Bits
{
    unsigned int HSM32ROM:1;                /**< \brief [0:0] PFLASH Sector 32 HSM Code Locked Forever (rh) */
    unsigned int HSM33ROM:1;                /**< \brief [1:1] PFLASH Sector 33 HSM Code Locked Forever (rh) */
    unsigned int HSM34ROM:1;                /**< \brief [2:2] PFLASH Sector 34 HSM Code Locked Forever (rh) */
    unsigned int HSM35ROM:1;                /**< \brief [3:3] PFLASH Sector 35 HSM Code Locked Forever (rh) */
    unsigned int HSM36ROM:1;                /**< \brief [4:4] PFLASH Sector 36 HSM Code Locked Forever (rh) */
    unsigned int HSM37ROM:1;                /**< \brief [5:5] PFLASH Sector 37 HSM Code Locked Forever (rh) */
    unsigned int HSM38ROM:1;                /**< \brief [6:6] PFLASH Sector 38 HSM Code Locked Forever (rh) */
    unsigned int HSM39ROM:1;                /**< \brief [7:7] PFLASH Sector 39 HSM Code Locked Forever (rh) */
    unsigned int UCB:24;                    /**< \brief [31:8] Reserved for UCB (rh) */
} Ifx_DMU_SP_PROCONHSMCOTP1_Bits;

/** \brief  HSM Code Exclusive Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCX0_Bits
{
    unsigned int HSM0X:1;                   /**< \brief [0:0] PFLASH Sector 0 HSM Code Exclusive (rh) */
    unsigned int HSM1X:1;                   /**< \brief [1:1] PFLASH Sector 1 HSM Code Exclusive (rh) */
    unsigned int HSM2X:1;                   /**< \brief [2:2] PFLASH Sector 2 HSM Code Exclusive (rh) */
    unsigned int HSM3X:1;                   /**< \brief [3:3] PFLASH Sector 3 HSM Code Exclusive (rh) */
    unsigned int HSM4X:1;                   /**< \brief [4:4] PFLASH Sector 4 HSM Code Exclusive (rh) */
    unsigned int HSM5X:1;                   /**< \brief [5:5] PFLASH Sector 5 HSM Code Exclusive (rh) */
    unsigned int HSM6X:1;                   /**< \brief [6:6] PFLASH Sector 6 HSM Code Exclusive (rh) */
    unsigned int HSM7X:1;                   /**< \brief [7:7] PFLASH Sector 7 HSM Code Exclusive (rh) */
    unsigned int HSM8X:1;                   /**< \brief [8:8] PFLASH Sector 8 HSM Code Exclusive (rh) */
    unsigned int HSM9X:1;                   /**< \brief [9:9] PFLASH Sector 9 HSM Code Exclusive (rh) */
    unsigned int HSM10X:1;                  /**< \brief [10:10] PFLASH Sector 10 HSM Code Exclusive (rh) */
    unsigned int HSM11X:1;                  /**< \brief [11:11] PFLASH Sector 11 HSM Code Exclusive (rh) */
    unsigned int HSM12X:1;                  /**< \brief [12:12] PFLASH Sector 12 HSM Code Exclusive (rh) */
    unsigned int HSM13X:1;                  /**< \brief [13:13] PFLASH Sector 13 HSM Code Exclusive (rh) */
    unsigned int HSM14X:1;                  /**< \brief [14:14] PFLASH Sector 14 HSM Code Exclusive (rh) */
    unsigned int HSM15X:1;                  /**< \brief [15:15] PFLASH Sector 15 HSM Code Exclusive (rh) */
    unsigned int HSM16X:1;                  /**< \brief [16:16] PFLASH Sector 16 HSM Code Exclusive (rh) */
    unsigned int HSM17X:1;                  /**< \brief [17:17] PFLASH Sector 17 HSM Code Exclusive (rh) */
    unsigned int HSM18X:1;                  /**< \brief [18:18] PFLASH Sector 18 HSM Code Exclusive (rh) */
    unsigned int HSM19X:1;                  /**< \brief [19:19] PFLASH Sector 19 HSM Code Exclusive (rh) */
    unsigned int HSM20X:1;                  /**< \brief [20:20] PFLASH Sector 20 HSM Code Exclusive (rh) */
    unsigned int HSM21X:1;                  /**< \brief [21:21] PFLASH Sector 21 HSM Code Exclusive (rh) */
    unsigned int HSM22X:1;                  /**< \brief [22:22] PFLASH Sector 22 HSM Code Exclusive (rh) */
    unsigned int HSM23X:1;                  /**< \brief [23:23] PFLASH Sector 23 HSM Code Exclusive (rh) */
    unsigned int HSM24X:1;                  /**< \brief [24:24] PFLASH Sector 24 HSM Code Exclusive (rh) */
    unsigned int HSM25X:1;                  /**< \brief [25:25] PFLASH Sector 25 HSM Code Exclusive (rh) */
    unsigned int HSM26X:1;                  /**< \brief [26:26] PFLASH Sector 26 HSM Code Exclusive (rh) */
    unsigned int HSM27X:1;                  /**< \brief [27:27] PFLASH Sector 27 HSM Code Exclusive (rh) */
    unsigned int HSM28X:1;                  /**< \brief [28:28] PFLASH Sector 28 HSM Code Exclusive (rh) */
    unsigned int HSM29X:1;                  /**< \brief [29:29] PFLASH Sector 29 HSM Code Exclusive (rh) */
    unsigned int HSM30X:1;                  /**< \brief [30:30] PFLASH Sector 30 HSM Code Exclusive (rh) */
    unsigned int HSM31X:1;                  /**< \brief [31:31] PFLASH Sector 31 HSM Code Exclusive (rh) */
} Ifx_DMU_SP_PROCONHSMCX0_Bits;

/** \brief  HSM Code Exclusive Protection Configuration */
typedef struct _Ifx_DMU_SP_PROCONHSMCX1_Bits
{
    unsigned int HSM32X:1;                  /**< \brief [0:0] PFLASH Sector 32 HSM Code Exclusive (rh) */
    unsigned int HSM33X:1;                  /**< \brief [1:1] PFLASH Sector 33 HSM Code Exclusive (rh) */
    unsigned int HSM34X:1;                  /**< \brief [2:2] PFLASH Sector 34 HSM Code Exclusive (rh) */
    unsigned int HSM35X:1;                  /**< \brief [3:3] PFLASH Sector 35 HSM Code Exclusive (rh) */
    unsigned int HSM36X:1;                  /**< \brief [4:4] PFLASH Sector 36 HSM Code Exclusive (rh) */
    unsigned int HSM37X:1;                  /**< \brief [5:5] PFLASH Sector 37 HSM Code Exclusive (rh) */
    unsigned int HSM38X:1;                  /**< \brief [6:6] PFLASH Sector 38 HSM Code Exclusive (rh) */
    unsigned int HSM39X:1;                  /**< \brief [7:7] PFLASH Sector 39 HSM Code Exclusive (rh) */
    unsigned int UCB:24;                    /**< \brief [31:8] Reserved for UCB (rh) */
} Ifx_DMU_SP_PROCONHSMCX1_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dmu_union
 * \{  */

/** \brief  Access Enable Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_ACCEN0_Bits B;               /**< \brief Bitfield access */
} Ifx_DMU_HF_ACCEN0;

/** \brief  Access Enable Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_ACCEN1_Bits B;               /**< \brief Bitfield access */
} Ifx_DMU_HF_ACCEN1;

/** \brief  Cranking Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_CCONTROL_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_CCONTROL;

/** \brief  Clear Error Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_CLRE_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_HF_CLRE;

/** \brief  Flash Confirm Status Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_CONFIRM0_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_CONFIRM0;

/** \brief  Flash Confirm Status Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_CONFIRM1_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_CONFIRM1;

/** \brief  Flash Confirm Status Register 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_CONFIRM2_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_CONFIRM2;

/** \brief  Flash Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_CONTROL_Bits B;              /**< \brief Bitfield access */
} Ifx_DMU_HF_CONTROL;

/** \brief  DFLASH Size Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_DSIZE_Bits B;                /**< \brief Bitfield access */
} Ifx_DMU_HF_DSIZE;

/** \brief  DFLASH Wait Cycle Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_DWAIT_Bits B;                /**< \brief Bitfield access */
} Ifx_DMU_HF_DWAIT;

/** \brief  DF0 ECC Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_ECCC_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_HF_ECCC;

/** \brief  DF0 ECC Read Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_ECCR_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_HF_ECCR;

/** \brief  DF0 ECC Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_ECCS_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_HF_ECCS;

/** \brief  DF0 ECC Write Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_ECCW_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_HF_ECCW;

/** \brief  Enable Error Interrupt Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_EER_Bits B;                  /**< \brief Bitfield access */
} Ifx_DMU_HF_EER;

/** \brief  Error Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_ERRSR_Bits B;                /**< \brief Bitfield access */
} Ifx_DMU_HF_ERRSR;

/** \brief  Module Identification Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_ID_Bits B;                   /**< \brief Bitfield access */
} Ifx_DMU_HF_ID;

/** \brief  Margin Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_MARGIN_Bits B;               /**< \brief Bitfield access */
} Ifx_DMU_HF_MARGIN;

/** \brief  Flash Operation Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_OPERATION_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HF_OPERATION;

/** \brief  Power Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PCONTROL_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_PCONTROL;

/** \brief  Debug Interface Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PROCONDBG_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONDBG;

/** \brief  DFLASH Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PROCONDF_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONDF;

/** \brief  PFLASH Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PROCONPF_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONPF;

/** \brief  RAM Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PROCONRAM_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONRAM;

/** \brief  Tuning Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PROCONTP_Bits B;             /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONTP;

/** \brief  DF0 User Mode Control */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PROCONUSR_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HF_PROCONUSR;

/** \brief  Flash Protection Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PROTECT_Bits B;              /**< \brief Bitfield access */
} Ifx_DMU_HF_PROTECT;

/** \brief  PFLASH Bank Size Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PSIZE_Bits B;                /**< \brief Bitfield access */
} Ifx_DMU_HF_PSIZE;

/** \brief  Power Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PSTATUS_Bits B;              /**< \brief Bitfield access */
} Ifx_DMU_HF_PSTATUS;

/** \brief  PFLASH Wait Cycle Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_PWAIT_Bits B;                /**< \brief Bitfield access */
} Ifx_DMU_HF_PWAIT;

/** \brief  Flash Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_STATUS_Bits B;               /**< \brief Bitfield access */
} Ifx_DMU_HF_STATUS;

/** \brief  Suspend Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HF_SUSPEND_Bits B;              /**< \brief Bitfield access */
} Ifx_DMU_HF_SUSPEND;

/** \brief  PFLASH Bank OTP Protection Configuration 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP0_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP0;

/** \brief  PFLASH Bank OTP Protection Configuration 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP1_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP1;

/** \brief  PFLASH Bank OTP Protection Configuration 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP2_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP2;

/** \brief  PFLASH Bank OTP Protection Configuration 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP3_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP3;

/** \brief  PFLASH Bank OTP Protection Configuration 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP4_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP4;

/** \brief  PFLASH Bank OTP Protection Configuration 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_OTP5_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_OTP5;

/** \brief  PFLASH Bank Protection Configuration 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P0_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P0;

/** \brief  PFLASH Bank Protection Configuration 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P1_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P1;

/** \brief  PFLASH Bank Protection Configuration 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P2_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P2;

/** \brief  PFLASH Bank Protection Configuration 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P3_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P3;

/** \brief  PFLASH Bank Protection Configuration 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P4_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P4;

/** \brief  PFLASH Bank Protection Configuration 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_P5_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_P5;

/** \brief  PFLASH Bank WOP Configuration 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP0_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP0;

/** \brief  PFLASH Bank WOP Configuration 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP1_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP1;

/** \brief  PFLASH Bank WOP Configuration 2 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP2_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP2;

/** \brief  PFLASH Bank WOP Configuration 3 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP3_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP3;

/** \brief  PFLASH Bank WOP Configuration 4 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP4_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP4;

/** \brief  PFLASH Bank WOP Configuration 5 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_HP_PROCON_WOP5_Bits B;          /**< \brief Bitfield access */
} Ifx_DMU_HP_PROCON_WOP5;

/** \brief  Clear Error Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_CLRE_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_SF_CLRE;

/** \brief  HSM Flash Configuration Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_CONTROL_Bits B;              /**< \brief Bitfield access */
} Ifx_DMU_SF_CONTROL;

/** \brief  DF1 ECC Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_ECCC_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_SF_ECCC;

/** \brief  DF1 ECC Read Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_ECCR_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_SF_ECCR;

/** \brief  DF1 ECC Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_ECCS_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_SF_ECCS;

/** \brief  DF1 ECC Write Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_ECCW_Bits B;                 /**< \brief Bitfield access */
} Ifx_DMU_SF_ECCW;

/** \brief  HSM Enable Error Interrupt Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_EER_Bits B;                  /**< \brief Bitfield access */
} Ifx_DMU_SF_EER;

/** \brief  HSM Error Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_ERRSR_Bits B;                /**< \brief Bitfield access */
} Ifx_DMU_SF_ERRSR;

/** \brief  DF1 Margin Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_MARGIN_Bits B;               /**< \brief Bitfield access */
} Ifx_DMU_SF_MARGIN;

/** \brief  Flash Operation Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_OPERATION_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_SF_OPERATION;

/** \brief  DF1 User Mode Control */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_PROCONUSR_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_SF_PROCONUSR;

/** \brief  HSM Flash Status Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_STATUS_Bits B;               /**< \brief Bitfield access */
} Ifx_DMU_SF_STATUS;

/** \brief  HSM Suspend Control Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SF_SUSPEND_Bits B;              /**< \brief Bitfield access */
} Ifx_DMU_SF_SUSPEND;

/** \brief  HSM Interface Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSM_Bits B;            /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSM;

/** \brief  HSM Code Boot Sector */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCBS_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCBS;

/** \brief  HSM Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCFG_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCFG;

/** \brief  HSM Code OTP Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCOTP0_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCOTP0;

/** \brief  HSM Code OTP Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCOTP1_Bits B;       /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCOTP1;

/** \brief  HSM Code Exclusive Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCX0_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCX0;

/** \brief  HSM Code Exclusive Protection Configuration */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_DMU_SP_PROCONHSMCX1_Bits B;         /**< \brief Bitfield access */
} Ifx_DMU_SP_PROCONHSMCX1;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dmu_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \brief  PFLASH Bank Protection Object */
typedef volatile struct _Ifx_DMU_HP_PROCON
{
    Ifx_DMU_HP_PROCON_P0 P0;                /**< \brief 0, PFLASH Bank Protection Configuration 0 */
    Ifx_DMU_HP_PROCON_P1 P1;                /**< \brief 4, PFLASH Bank Protection Configuration 1 */
    Ifx_DMU_HP_PROCON_P2 P2;                /**< \brief 8, PFLASH Bank Protection Configuration 2 */
    Ifx_DMU_HP_PROCON_P3 P3;                /**< \brief C, PFLASH Bank Protection Configuration 3 */
    Ifx_DMU_HP_PROCON_P4 P4;                /**< \brief 10, PFLASH Bank Protection Configuration 4 */
    Ifx_DMU_HP_PROCON_P5 P5;                /**< \brief 14, PFLASH Bank Protection Configuration 5 */
    unsigned char reserved_18[40];          /**< \brief 18, \internal Reserved */
    Ifx_DMU_HP_PROCON_OTP0 OTP0;            /**< \brief 40, PFLASH Bank OTP Protection Configuration 0 */
    Ifx_DMU_HP_PROCON_OTP1 OTP1;            /**< \brief 44, PFLASH Bank OTP Protection Configuration 1 */
    Ifx_DMU_HP_PROCON_OTP2 OTP2;            /**< \brief 48, PFLASH Bank OTP Protection Configuration 2 */
    Ifx_DMU_HP_PROCON_OTP3 OTP3;            /**< \brief 4C, PFLASH Bank OTP Protection Configuration 3 */
    Ifx_DMU_HP_PROCON_OTP4 OTP4;            /**< \brief 50, PFLASH Bank OTP Protection Configuration 4 */
    Ifx_DMU_HP_PROCON_OTP5 OTP5;            /**< \brief 54, PFLASH Bank OTP Protection Configuration 5 */
    unsigned char reserved_58[40];          /**< \brief 58, \internal Reserved */
    Ifx_DMU_HP_PROCON_WOP0 WOP0;            /**< \brief 80, PFLASH Bank WOP Configuration 0 */
    Ifx_DMU_HP_PROCON_WOP1 WOP1;            /**< \brief 84, PFLASH Bank WOP Configuration 1 */
    Ifx_DMU_HP_PROCON_WOP2 WOP2;            /**< \brief 88, PFLASH Bank WOP Configuration 2 */
    Ifx_DMU_HP_PROCON_WOP3 WOP3;            /**< \brief 8C, PFLASH Bank WOP Configuration 3 */
    Ifx_DMU_HP_PROCON_WOP4 WOP4;            /**< \brief 90, PFLASH Bank WOP Configuration 4 */
    Ifx_DMU_HP_PROCON_WOP5 WOP5;            /**< \brief 94, PFLASH Bank WOP Configuration 5 */
    unsigned char reserved_98[104];         /**< \brief 98, \internal Reserved */
} Ifx_DMU_HP_PROCON;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dmu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief  DMU object */
typedef volatile struct _Ifx_DMU
{
    unsigned char reserved_0[8];            /**< \brief 0, \internal Reserved */
    Ifx_DMU_HF_ID HF_ID;                    /**< \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /**< \brief C, \internal Reserved */
    Ifx_DMU_HF_STATUS HF_STATUS;            /**< \brief 10, Flash Status Register */
    Ifx_DMU_HF_CONTROL HF_CONTROL;          /**< \brief 14, Flash Control Register */
    Ifx_DMU_HF_OPERATION HF_OPERATION;      /**< \brief 18, Flash Operation Register */
    Ifx_DMU_HF_PROTECT HF_PROTECT;          /**< \brief 1C, Flash Protection Status Register */
    Ifx_DMU_HF_CONFIRM0 HF_CONFIRM0;        /**< \brief 20, Flash Confirm Status Register 0 */
    Ifx_DMU_HF_CONFIRM1 HF_CONFIRM1;        /**< \brief 24, Flash Confirm Status Register 1 */
    Ifx_DMU_HF_CONFIRM2 HF_CONFIRM2;        /**< \brief 28, Flash Confirm Status Register 2 */
    unsigned char reserved_2C[4];           /**< \brief 2C, \internal Reserved */
    Ifx_DMU_HF_EER HF_EER;                  /**< \brief 30, Enable Error Interrupt Control Register */
    Ifx_DMU_HF_ERRSR HF_ERRSR;              /**< \brief 34, Error Status Register */
    Ifx_DMU_HF_CLRE HF_CLRE;                /**< \brief 38, Clear Error Register */
    unsigned char reserved_3C[4];           /**< \brief 3C, \internal Reserved */
    Ifx_DMU_HF_ECCR HF_ECCR;                /**< \brief 40, DF0 ECC Read Register */
    Ifx_DMU_HF_ECCS HF_ECCS;                /**< \brief 44, DF0 ECC Status Register */
    Ifx_DMU_HF_ECCC HF_ECCC;                /**< \brief 48, DF0 ECC Control Register */
    Ifx_DMU_HF_ECCW HF_ECCW;                /**< \brief 4C, DF0 ECC Write Register */
    Ifx_DMU_HF_CCONTROL HF_CCONTROL;        /**< \brief 50, Cranking Control Register */
    unsigned char reserved_54[12];          /**< \brief 54, \internal Reserved */
    Ifx_DMU_HF_PSTATUS HF_PSTATUS;          /**< \brief 60, Power Status Register */
    Ifx_DMU_HF_PCONTROL HF_PCONTROL;        /**< \brief 64, Power Control Register */
    Ifx_DMU_HF_PWAIT HF_PWAIT;              /**< \brief 68, PFLASH Wait Cycle Register */
    Ifx_DMU_HF_DWAIT HF_DWAIT;              /**< \brief 6C, DFLASH Wait Cycle Register */
    unsigned char reserved_70[4];           /**< \brief 70, \internal Reserved */
    Ifx_DMU_HF_PROCONUSR HF_PROCONUSR;      /**< \brief 74, DF0 User Mode Control */
    unsigned char reserved_78[8];           /**< \brief 78, \internal Reserved */
    Ifx_DMU_HF_PROCONPF HF_PROCONPF;        /**< \brief 80, PFLASH Protection Configuration */
    Ifx_DMU_HF_PROCONTP HF_PROCONTP;        /**< \brief 84, Tuning Protection Configuration */
    Ifx_DMU_HF_PROCONDF HF_PROCONDF;        /**< \brief 88, DFLASH Protection Configuration */
    Ifx_DMU_HF_PROCONRAM HF_PROCONRAM;      /**< \brief 8C, RAM Configuration */
    Ifx_DMU_HF_PROCONDBG HF_PROCONDBG;      /**< \brief 90, Debug Interface Protection Configuration */
    unsigned char reserved_94[12];          /**< \brief 94, \internal Reserved */
    Ifx_DMU_HF_DSIZE HF_DSIZE;              /**< \brief A0, DFLASH Size Configuration Register */
    unsigned char reserved_A4[12];          /**< \brief A4, \internal Reserved */
    Ifx_DMU_HF_PSIZE HF_PSIZE[6];           /**< \brief B0, PFLASH Bank Size Configuration Register */
    unsigned char reserved_C8[24];          /**< \brief C8, \internal Reserved */
    unsigned char reserved_E0[4];           /**< \brief E0, \internal Reserved  */
    unsigned char reserved_E4[4];           /**< \brief E4, \internal Reserved  */
    unsigned char reserved_E8[4];           /**< \brief E8, \internal Reserved */
    unsigned char reserved_EC[4];           /**< \brief EC, \internal Reserved */
    Ifx_DMU_HF_SUSPEND HF_SUSPEND;          /**< \brief F0, Suspend Control Register */
    Ifx_DMU_HF_MARGIN HF_MARGIN;            /**< \brief F4, Margin Control Register */
    Ifx_DMU_HF_ACCEN1 HF_ACCEN1;            /**< \brief F8, Access Enable Register 1 */
    Ifx_DMU_HF_ACCEN0 HF_ACCEN0;            /**< \brief FC, Access Enable Register 0 */
    unsigned char reserved_100[65280];      /**< \brief 100, \internal Reserved */
    Ifx_DMU_HP_PROCON HP_PROCON[6];         /**< \brief 10000, PFLASH Bank Protection Object */
    unsigned char reserved_10600[64016];    /**< \brief 10600, \internal Reserved */
    Ifx_DMU_SF_STATUS SF_STATUS;            /**< \brief 20010, HSM Flash Status Register */
    Ifx_DMU_SF_CONTROL SF_CONTROL;          /**< \brief 20014, HSM Flash Configuration Register */
    Ifx_DMU_SF_OPERATION SF_OPERATION;      /**< \brief 20018, Flash Operation Register */
    unsigned char reserved_2001C[20];       /**< \brief 2001C, \internal Reserved */
    Ifx_DMU_SF_EER SF_EER;                  /**< \brief 20030, HSM Enable Error Interrupt Control Register */
    Ifx_DMU_SF_ERRSR SF_ERRSR;              /**< \brief 20034, HSM Error Status Register */
    Ifx_DMU_SF_CLRE SF_CLRE;                /**< \brief 20038, Clear Error Register */
    unsigned char reserved_2003C[4];        /**< \brief 2003C, \internal Reserved */
    Ifx_DMU_SF_ECCR SF_ECCR;                /**< \brief 20040, DF1 ECC Read Register */
    Ifx_DMU_SF_ECCS SF_ECCS;                /**< \brief 20044, DF1 ECC Status Register */
    Ifx_DMU_SF_ECCC SF_ECCC;                /**< \brief 20048, DF1 ECC Control Register */
    Ifx_DMU_SF_ECCW SF_ECCW;                /**< \brief 2004C, DF1 ECC Write Register */
    unsigned char reserved_20050[32];       /**< \brief 20050, \internal Reserved */
    unsigned char reserved_20070[4];        /**< \brief 20070, \internal Reserved  */
    Ifx_DMU_SF_PROCONUSR SF_PROCONUSR;      /**< \brief 20074, DF1 User Mode Control */
    unsigned char reserved_20078[112];      /**< \brief 20078, \internal Reserved */
    Ifx_DMU_SF_SUSPEND SF_SUSPEND;          /**< \brief 200E8, HSM Suspend Control Register */
    Ifx_DMU_SF_MARGIN SF_MARGIN;            /**< \brief 200EC, DF1 Margin Control Register */
    unsigned char reserved_200F0[65296];    /**< \brief 200F0, \internal Reserved */
    Ifx_DMU_SP_PROCONHSMCFG SP_PROCONHSMCFG;    /**< \brief 30000, HSM Protection Configuration */
    Ifx_DMU_SP_PROCONHSMCBS SP_PROCONHSMCBS;    /**< \brief 30004, HSM Code Boot Sector */
    Ifx_DMU_SP_PROCONHSMCX0 SP_PROCONHSMCX0;    /**< \brief 30008, HSM Code Exclusive Protection Configuration */
    Ifx_DMU_SP_PROCONHSMCX1 SP_PROCONHSMCX1;    /**< \brief 3000C, HSM Code Exclusive Protection Configuration */
    Ifx_DMU_SP_PROCONHSMCOTP0 SP_PROCONHSMCOTP0;    /**< \brief 30010, HSM Code OTP Protection Configuration */
    Ifx_DMU_SP_PROCONHSMCOTP1 SP_PROCONHSMCOTP1;    /**< \brief 30014, HSM Code OTP Protection Configuration */
    unsigned char reserved_30018[40];       /**< \brief 30018, \internal Reserved */
    Ifx_DMU_SP_PROCONHSM SP_PROCONHSM;      /**< \brief 30040, HSM Interface Protection Configuration */
    unsigned char reserved_30044[65468];    /**< \brief 30044, \internal Reserved */
} Ifx_DMU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXDMU_REGDEF_H */
