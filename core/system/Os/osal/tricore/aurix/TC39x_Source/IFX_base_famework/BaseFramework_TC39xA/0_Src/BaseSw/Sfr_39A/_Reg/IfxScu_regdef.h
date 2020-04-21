/**
 * \file IfxScu_regdef.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39x_SCU_v01.xml/Aurix_Plus_Platform_CCU_SFR.xml dated xx.xx.2014
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
 * \defgroup IfxLld_Scu Scu
 * \ingroup IfxLld
 *
 * \defgroup IfxLld_Scu_Bitfields Bitfields
 * \ingroup IfxLld_Scu
 *
 * \defgroup IfxLld_Scu_union Union
 * \ingroup IfxLld_Scu
 *
 * \defgroup IfxLld_Scu_struct Struct
 * \ingroup IfxLld_Scu
 *
 */
#ifndef IFXSCU_REGDEF_H
#define IFXSCU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Scu_Bitfields
 * \{  */

/** \\brief  Access Enable Register 00 */
typedef struct _Ifx_SCU_ACCEN00_Bits
{
    unsigned int EN0 : 1;                     /**< \brief [0:0] Access E0able for Master TAG ID n (rw) */
    unsigned int EN1 : 1;                     /**< \brief [1:1] Access E1able for Master TAG ID n (rw) */
    unsigned int EN2 : 1;                     /**< \brief [2:2] Access E2able for Master TAG ID n (rw) */
    unsigned int EN3 : 1;                     /**< \brief [3:3] Access E3able for Master TAG ID n (rw) */
    unsigned int EN4 : 1;                     /**< \brief [4:4] Access E4able for Master TAG ID n (rw) */
    unsigned int EN5 : 1;                     /**< \brief [5:5] Access E5able for Master TAG ID n (rw) */
    unsigned int EN6 : 1;                     /**< \brief [6:6] Access E6able for Master TAG ID n (rw) */
    unsigned int EN7 : 1;                     /**< \brief [7:7] Access E7able for Master TAG ID n (rw) */
    unsigned int EN8 : 1;                     /**< \brief [8:8] Access E8able for Master TAG ID n (rw) */
    unsigned int EN9 : 1;                     /**< \brief [9:9] Access E9able for Master TAG ID n (rw) */
    unsigned int EN10 : 1;                    /**< \brief [10:10] Access E10able for Master TAG ID n (rw) */
    unsigned int EN11 : 1;                    /**< \brief [11:11] Access E11able for Master TAG ID n (rw) */
    unsigned int EN12 : 1;                    /**< \brief [12:12] Access E12able for Master TAG ID n (rw) */
    unsigned int EN13 : 1;                    /**< \brief [13:13] Access E13able for Master TAG ID n (rw) */
    unsigned int EN14 : 1;                    /**< \brief [14:14] Access E14able for Master TAG ID n (rw) */
    unsigned int EN15 : 1;                    /**< \brief [15:15] Access E15able for Master TAG ID n (rw) */
    unsigned int EN16 : 1;                    /**< \brief [16:16] Access E16able for Master TAG ID n (rw) */
    unsigned int EN17 : 1;                    /**< \brief [17:17] Access E17able for Master TAG ID n (rw) */
    unsigned int EN18 : 1;                    /**< \brief [18:18] Access E18able for Master TAG ID n (rw) */
    unsigned int EN19 : 1;                    /**< \brief [19:19] Access E19able for Master TAG ID n (rw) */
    unsigned int EN20 : 1;                    /**< \brief [20:20] Access E20able for Master TAG ID n (rw) */
    unsigned int EN21 : 1;                    /**< \brief [21:21] Access E21able for Master TAG ID n (rw) */
    unsigned int EN22 : 1;                    /**< \brief [22:22] Access E22able for Master TAG ID n (rw) */
    unsigned int EN23 : 1;                    /**< \brief [23:23] Access E23able for Master TAG ID n (rw) */
    unsigned int EN24 : 1;                    /**< \brief [24:24] Access E24able for Master TAG ID n (rw) */
    unsigned int EN25 : 1;                    /**< \brief [25:25] Access E25able for Master TAG ID n (rw) */
    unsigned int EN26 : 1;                    /**< \brief [26:26] Access E26able for Master TAG ID n (rw) */
    unsigned int EN27 : 1;                    /**< \brief [27:27] Access E27able for Master TAG ID n (rw) */
    unsigned int EN28 : 1;                    /**< \brief [28:28] Access E28able for Master TAG ID n (rw) */
    unsigned int EN29 : 1;                    /**< \brief [29:29] Access E29able for Master TAG ID n (rw) */
    unsigned int EN30 : 1;                    /**< \brief [30:30] Access E30able for Master TAG ID n (rw) */
    unsigned int EN31 : 1;                    /**< \brief [31:31] Access E31able for Master TAG ID n (rw) */
} Ifx_SCU_ACCEN00_Bits;

/** \\brief  Access Enable Register 01 */
typedef struct _Ifx_SCU_ACCEN01_Bits
{
    unsigned int reserved_0 : 32;             /**< \brief \internal Reserved */
} Ifx_SCU_ACCEN01_Bits;

/** \\brief  Access Enable Register 10 */
typedef struct _Ifx_SCU_ACCEN10_Bits
{
    unsigned int EN0 : 1;                     /**< \brief [0:0] Access E0able for Master TAG ID n (rw) */
    unsigned int EN1 : 1;                     /**< \brief [1:1] Access E1able for Master TAG ID n (rw) */
    unsigned int EN2 : 1;                     /**< \brief [2:2] Access E2able for Master TAG ID n (rw) */
    unsigned int EN3 : 1;                     /**< \brief [3:3] Access E3able for Master TAG ID n (rw) */
    unsigned int EN4 : 1;                     /**< \brief [4:4] Access E4able for Master TAG ID n (rw) */
    unsigned int EN5 : 1;                     /**< \brief [5:5] Access E5able for Master TAG ID n (rw) */
    unsigned int EN6 : 1;                     /**< \brief [6:6] Access E6able for Master TAG ID n (rw) */
    unsigned int EN7 : 1;                     /**< \brief [7:7] Access E7able for Master TAG ID n (rw) */
    unsigned int EN8 : 1;                     /**< \brief [8:8] Access E8able for Master TAG ID n (rw) */
    unsigned int EN9 : 1;                     /**< \brief [9:9] Access E9able for Master TAG ID n (rw) */
    unsigned int EN10 : 1;                    /**< \brief [10:10] Access E10able for Master TAG ID n (rw) */
    unsigned int EN11 : 1;                    /**< \brief [11:11] Access E11able for Master TAG ID n (rw) */
    unsigned int EN12 : 1;                    /**< \brief [12:12] Access E12able for Master TAG ID n (rw) */
    unsigned int EN13 : 1;                    /**< \brief [13:13] Access E13able for Master TAG ID n (rw) */
    unsigned int EN14 : 1;                    /**< \brief [14:14] Access E14able for Master TAG ID n (rw) */
    unsigned int EN15 : 1;                    /**< \brief [15:15] Access E15able for Master TAG ID n (rw) */
    unsigned int EN16 : 1;                    /**< \brief [16:16] Access E16able for Master TAG ID n (rw) */
    unsigned int EN17 : 1;                    /**< \brief [17:17] Access E17able for Master TAG ID n (rw) */
    unsigned int EN18 : 1;                    /**< \brief [18:18] Access E18able for Master TAG ID n (rw) */
    unsigned int EN19 : 1;                    /**< \brief [19:19] Access E19able for Master TAG ID n (rw) */
    unsigned int EN20 : 1;                    /**< \brief [20:20] Access E20able for Master TAG ID n (rw) */
    unsigned int EN21 : 1;                    /**< \brief [21:21] Access E21able for Master TAG ID n (rw) */
    unsigned int EN22 : 1;                    /**< \brief [22:22] Access E22able for Master TAG ID n (rw) */
    unsigned int EN23 : 1;                    /**< \brief [23:23] Access E23able for Master TAG ID n (rw) */
    unsigned int EN24 : 1;                    /**< \brief [24:24] Access E24able for Master TAG ID n (rw) */
    unsigned int EN25 : 1;                    /**< \brief [25:25] Access E25able for Master TAG ID n (rw) */
    unsigned int EN26 : 1;                    /**< \brief [26:26] Access E26able for Master TAG ID n (rw) */
    unsigned int EN27 : 1;                    /**< \brief [27:27] Access E27able for Master TAG ID n (rw) */
    unsigned int EN28 : 1;                    /**< \brief [28:28] Access E28able for Master TAG ID n (rw) */
    unsigned int EN29 : 1;                    /**< \brief [29:29] Access E29able for Master TAG ID n (rw) */
    unsigned int EN30 : 1;                    /**< \brief [30:30] Access E30able for Master TAG ID n (rw) */
    unsigned int EN31 : 1;                    /**< \brief [31:31] Access E31able for Master TAG ID n (rw) */
} Ifx_SCU_ACCEN10_Bits;

/** \\brief  Access Enable Register 11 */
typedef struct _Ifx_SCU_ACCEN11_Bits
{
    unsigned int reserved_0 : 32;             /**< \brief \internal Reserved */
} Ifx_SCU_ACCEN11_Bits;

/** \\brief  Application Reset Disable Register */
typedef struct _Ifx_SCU_ARSTDIS_Bits
{
    unsigned int STM0DIS : 1;                 /**< \brief [0:0] STM0 Disable Reset (rw) */
    unsigned int STM1DIS : 1;                 /**< \brief [1:1] STM1 Disable Reset (If Product has STM1) (rw) */
    unsigned int STM2DIS : 1;                 /**< \brief [2:2] STM2 Disable Reset (If Product has STM2) (rw) */
    unsigned int STM3DIS : 1;                 /**< \brief [3:3] STM3 Disable Reset (If Product has STM3) (rw) */
    unsigned int STM4DIS : 1;                 /**< \brief [4:4] STM4 Disable Reset (If Product has STM4) (rw) */
    unsigned int STM5DIS : 1;                 /**< \brief [5:5] STM5 Disable Reset (If Product has STM5) (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_ARSTDIS_Bits;

/** \\brief  CCU Clock Control Register 0 */
typedef struct _Ifx_SCU_CCUCON0_Bits
{
    unsigned int STMDIV : 4;                  /**< \brief [3:0] STM Divider Reload Value (rw) */
    unsigned int GTMDIV : 4;                  /**< \brief [7:4] GTM Divider Reload Value (rw) */
    unsigned int SRIDIV : 4;                  /**< \brief [11:8] SRI Divider Reload Value (rw) */
    unsigned int LPDIV : 3;                   /**< \brief [14:12] Low Power Divider Reload Value (rw) */
    unsigned int reserved_15 : 1;             /**< \brief \internal Reserved */
    unsigned int SPBDIV : 4;                  /**< \brief [19:16] SPB Divider Reload Value (rw) */
    unsigned int BBBDIV : 4;                  /**< \brief [23:20] BBB Divider Reload Value (rw) */
    unsigned int FSIDIV : 2;                  /**< \brief [25:24] FSI Divider Reload Value (rw) */
    unsigned int FSI2DIV : 2;                 /**< \brief [27:26] FSI2 Divider Reload Value (rw) */
    unsigned int CLKSEL : 2;                  /**< \brief [29:28] Clock Selection for Source (rw) */
    unsigned int UP : 1;                      /**< \brief [30:30] Update Request (w) */
    unsigned int LCK : 1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON0_Bits;

/** \\brief  CCU Clock Control Register 10 */
typedef struct _Ifx_SCU_CCUCON10_Bits
{
    unsigned int CPU4DIV : 6;                 /**< \brief [5:0] CPU4 Divider Reload Value (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_CCUCON10_Bits;

/** \\brief  CCU Clock Control Register 11 */
typedef struct _Ifx_SCU_CCUCON11_Bits
{
    unsigned int CPU5DIV : 6;                 /**< \brief [5:0] CPU5 Divider Reload Value (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_CCUCON11_Bits;

/** \\brief  CCU Clock Control Register 1 */
typedef struct _Ifx_SCU_CCUCON1_Bits
{
    unsigned int MCANDIV : 4;                 /**< \brief [3:0] MCAN Divider Reload Value (rw) */
    unsigned int CLKSELMCAN : 2;              /**< \brief [5:4] Clock Selection for MCAN (rw) */
    unsigned int reserved_6 : 1;              /**< \brief \internal Reserved */
    unsigned int PLL1DIVDIS : 1;              /**< \brief [7:7] Divider Disable for fPLL1 (rw) */
    unsigned int reserved_8 : 8;              /**< \brief \internal Reserved */
    unsigned int MSCDIV : 4;                  /**< \brief [19:16] MSC Divider Reload Value (rw) */
    unsigned int CLKSELMSC : 2;               /**< \brief [21:20] Clock Selection for MSC (rw) */
    unsigned int reserved_22 : 2;             /**< \brief \internal Reserved */
    unsigned int QSPIDIV : 4;                 /**< \brief [27:24] QSPI Divider Reload Value (rw) */
    unsigned int CLKSELQSPI : 2;              /**< \brief [29:28] Clock Selection for QSPI (rw) */
    unsigned int reserved_30 : 1;             /**< \brief \internal Reserved */
    unsigned int LCK : 1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON1_Bits;

/** \\brief  CCU Clock Control Register 2 */
typedef struct _Ifx_SCU_CCUCON2_Bits
{
    unsigned int ASCLINFDIV : 4;              /**< \brief [3:0] ASCLIN Fast Divider Reload Value (rw) */
    unsigned int reserved_4 : 4;              /**< \brief \internal Reserved */
    unsigned int ASCLINSDIV : 4;              /**< \brief [11:8] ASCLIN Slow Divider Reload Value (rw) */
    unsigned int CLKSELASCLINS : 2;           /**< \brief [13:12] Clock Selection for ASCLINS (rw) */
    unsigned int reserved_14 : 17;            /**< \brief \internal Reserved */
    unsigned int LCK : 1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON2_Bits;

/** \\brief  CCU Clock Control Register 6 */
typedef struct _Ifx_SCU_CCUCON6_Bits
{
    unsigned int CPU0DIV : 6;                 /**< \brief [5:0] CPU0 Divider Reload Value (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_CCUCON6_Bits;

/** \\brief  CCU Clock Control Register 7 */
typedef struct _Ifx_SCU_CCUCON7_Bits
{
    unsigned int CPU1DIV : 6;                 /**< \brief [5:0] CPU1 Divider Reload Value (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_CCUCON7_Bits;

/** \\brief  CCU Clock Control Register 8 */
typedef struct _Ifx_SCU_CCUCON8_Bits
{
    unsigned int CPU2DIV : 6;                 /**< \brief [5:0] CPU2 Divider Reload Value (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_CCUCON8_Bits;

/** \\brief  CCU Clock Control Register 9 */
typedef struct _Ifx_SCU_CCUCON9_Bits
{
    unsigned int CPU3DIV : 6;                 /**< \brief [5:0] CPU3 Divider Reload Value (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_CCUCON9_Bits;

/** \\brief  Chip Identification Register */
typedef struct _Ifx_SCU_CHIPID_Bits
{
    unsigned int CHREV : 6;                   /**< \brief [5:0] Chip Revision Number (r) */
    unsigned int CHTEC : 2;                   /**< \brief [7:6] Chip Family (r) */
    unsigned int CHPK : 4;                    /**< \brief [11:8] Chip Package (rw) */
    unsigned int CHID : 4;                    /**< \brief [15:12] Chip Product (rw) */
    unsigned int EEA : 1;                     /**< \brief [16:16] Emulation or ADAS Extension Available (rh) */
    unsigned int UCODE : 7;                   /**< \brief [23:17] µCode Version (rw) */
    unsigned int FSIZE : 4;                   /**< \brief [27:24] Program Flash Size (rw) */
    unsigned int VART : 3;                    /**< \brief [30:28] Variant (rw) */
    unsigned int SEC : 1;                     /**< \brief [31:31] Security Device Available (rw) */
} Ifx_SCU_CHIPID_Bits;

/** \\brief  ENDINIT Global Control Register 0 */
typedef struct _Ifx_SCU_EICON0_Bits
{
    unsigned int Reserved : 1;                /**< \brief [0:0] Reserved Bit (r) */
    unsigned int ENDINIT : 1;                 /**< \brief [1:1] End-of-Initialization Control Bit (rwh) */
    unsigned int EPW : 14;                    /**< \brief [15:2] User-Definable ENDINIT Password Field (rwh) */
    unsigned int REL : 16;                    /**< \brief [31:16] Reload Value for the ENDINIT timer (r) */
} Ifx_SCU_EICON0_Bits;

/** \\brief  ENDINIT Global Control Register 1 */
typedef struct _Ifx_SCU_EICON1_Bits
{
    unsigned int reserved_0 : 2;              /**< \brief \internal Reserved */
    unsigned int IR0 : 1;                     /**< \brief [2:2] Input Frequency Request Control (rw) */
    unsigned int DR : 1;                      /**< \brief [3:3] Disable Request Control Bit (rw) */
    unsigned int reserved_4 : 1;              /**< \brief \internal Reserved */
    unsigned int IR1 : 1;                     /**< \brief [5:5] Input Frequency Request Control (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_EICON1_Bits;

/** \\brief  External Input Channel Register */
typedef struct _Ifx_SCU_EICR_Bits
{
    unsigned int reserved_0 : 4;              /**< \brief \internal Reserved */
    unsigned int EXIS0 : 3;                   /**< \brief [6:4] External Input Selection 0 (rw) */
    unsigned int reserved_7 : 1;              /**< \brief \internal Reserved */
    unsigned int FEN0 : 1;                    /**< \brief [8:8] Falling Edge Enable 0 (rw) */
    unsigned int REN0 : 1;                    /**< \brief [9:9] Rising Edge Enable 0 (rw) */
    unsigned int LDEN0 : 1;                   /**< \brief [10:10] Level Detection Enable 0 (rw) */
    unsigned int EIEN0 : 1;                   /**< \brief [11:11] External Input Enable 0 (rw) */
    unsigned int INP0 : 3;                    /**< \brief [14:12] Input Node Pointer (rw) */
    unsigned int reserved_15 : 5;             /**< \brief \internal Reserved */
    unsigned int EXIS1 : 3;                   /**< \brief [22:20] External Input Selection 1 (rw) */
    unsigned int reserved_23 : 1;             /**< \brief \internal Reserved */
    unsigned int FEN1 : 1;                    /**< \brief [24:24] Falling Edge Enable 1 (rw) */
    unsigned int REN1 : 1;                    /**< \brief [25:25] Rising Edge Enable 1 (rw) */
    unsigned int LDEN1 : 1;                   /**< \brief [26:26] Level Detection Enable 1 (rw) */
    unsigned int EIEN1 : 1;                   /**< \brief [27:27] External Input Enable 1 (rw) */
    unsigned int INP1 : 3;                    /**< \brief [30:28] Input Node Pointer (rw) */
    unsigned int reserved_31 : 1;             /**< \brief \internal Reserved */
} Ifx_SCU_EICR_Bits;

/** \\brief  External Input Filter Register */
typedef struct _Ifx_SCU_EIFILT_Bits
{
    unsigned int FILRQ0A : 1;                 /**< \brief [0:0] Filter Enable for REQ0A (rw) */
    unsigned int FILRQ5A : 1;                 /**< \brief [1:1] Filter Enable for REQ5A (rw) */
    unsigned int FILRQ2A : 1;                 /**< \brief [2:2] Filter Enable for REQ2A (rw) */
    unsigned int FILRQ3A : 1;                 /**< \brief [3:3] Filter Enable for REQ3A (rw) */
    unsigned int FILRQ0C : 1;                 /**< \brief [4:4] Filter Enable for REQ0C (rw) */
    unsigned int FILRQ1C : 1;                 /**< \brief [5:5] Filter Enable for REQ1C (rw) */
    unsigned int FILRQ3C : 1;                 /**< \brief [6:6] Filter Enable for REQ3C (rw) */
    unsigned int FILRQ2C : 1;                 /**< \brief [7:7] Filter Enable for REQ2C (rw) */
    unsigned int FILRQ4A : 1;                 /**< \brief [8:8] Filter Enable for REQ4A (rw) */
    unsigned int FILRQ6A : 1;                 /**< \brief [9:9] Filter Enable for REQ6A (rw) */
    unsigned int FILRQ1A : 1;                 /**< \brief [10:10] Filter Enable for REQ1A (rw) */
    unsigned int FILRQ7A : 1;                 /**< \brief [11:11] Filter Enable for REQ7A (rw) */
    unsigned int FILRQ6D : 1;                 /**< \brief [12:12] Filter Enable for REQ6D (rw) */
    unsigned int FILRQ4D : 1;                 /**< \brief [13:13] Filter Enable for REQ4D (rw) */
    unsigned int FILRQ2B : 1;                 /**< \brief [14:14] Filter Enable for REQ2B (rw) */
    unsigned int FILRQ3B : 1;                 /**< \brief [15:15] Filter Enable for REQ3B (rw) */
    unsigned int FILRQ7C : 1;                 /**< \brief [16:16] Filter Enable for REQ7C (rw) */
    unsigned int reserved_17 : 7;             /**< \brief \internal Reserved */
    unsigned int FILTDIV : 4;                 /**< \brief [27:24] Digital Glitch Filter Clock Predivider (rw) */
    unsigned int DEPTH : 4;                   /**< \brief [31:28] Digital Glitch Filter Depth (rw) */
} Ifx_SCU_EIFILT_Bits;

/** \\brief  External Input Flag Register */
typedef struct _Ifx_SCU_EIFR_Bits
{
    unsigned int INTF0 : 1;                   /**< \brief [0:0] E0ternal Event Flag of Channel x (rh) */
    unsigned int INTF1 : 1;                   /**< \brief [1:1] E1ternal Event Flag of Channel x (rh) */
    unsigned int INTF2 : 1;                   /**< \brief [2:2] E2ternal Event Flag of Channel x (rh) */
    unsigned int INTF3 : 1;                   /**< \brief [3:3] E3ternal Event Flag of Channel x (rh) */
    unsigned int INTF4 : 1;                   /**< \brief [4:4] E4ternal Event Flag of Channel x (rh) */
    unsigned int INTF5 : 1;                   /**< \brief [5:5] E5ternal Event Flag of Channel x (rh) */
    unsigned int INTF6 : 1;                   /**< \brief [6:6] E6ternal Event Flag of Channel x (rh) */
    unsigned int INTF7 : 1;                   /**< \brief [7:7] E7ternal Event Flag of Channel x (rh) */
    unsigned int reserved_8 : 24;             /**< \brief \internal Reserved */
} Ifx_SCU_EIFR_Bits;

/** \\brief  ENDINIT Timeout Counter Status Register */
typedef struct _Ifx_SCU_EISR_Bits
{
    unsigned int AE : 1;                      /**< \brief [0:0] EICON0 Access Error Status Flag (rh) */
    unsigned int OE : 1;                      /**< \brief [1:1] EI Timeout Overflow Error Status Flag (rh) */
    unsigned int IS0 : 1;                     /**< \brief [2:2] EI Timeout Input Clock Status (rh) */
    unsigned int DS : 1;                      /**< \brief [3:3] EI Timeout Enable/Disable Status Flag (rh) */
    unsigned int TO : 1;                      /**< \brief [4:4] EI Time-Out Mode Flag (rh) */
    unsigned int IS1 : 1;                     /**< \brief [5:5] EI Timeout Input Clock Status (rh) */
    unsigned int reserved_6 : 10;             /**< \brief \internal Reserved */
    unsigned int TIM : 16;                    /**< \brief [31:16] Timer Value (rh) */
} Ifx_SCU_EISR_Bits;

/** \\brief  Emergency Stop Register */
typedef struct _Ifx_SCU_EMSR_Bits
{
    unsigned int POL : 1;                     /**< \brief [0:0] Input Polarity (rw) */
    unsigned int MODE : 1;                    /**< \brief [1:1] Mode Selection (rw) */
    unsigned int ENON : 1;                    /**< \brief [2:2] Enable ON (rw) */
    unsigned int PSEL : 1;                    /**< \brief [3:3] PORT Select (rw) */
    unsigned int reserved_4 : 12;             /**< \brief \internal Reserved */
    unsigned int EMSF : 1;                    /**< \brief [16:16] Emergency Stop Flag (rh) */
    unsigned int SEMSF : 1;                   /**< \brief [17:17] SMU Emergency Stop Flag (rh) */
    unsigned int reserved_18 : 6;             /**< \brief \internal Reserved */
    unsigned int EMSFM : 2;                   /**< \brief [25:24] Emergency Stop Flag Modification (w) */
    unsigned int SEMSFM : 2;                  /**< \brief [27:26] SMU Emergency Stop Flag Modification (w) */
    unsigned int reserved_28 : 4;             /**< \brief \internal Reserved */
} Ifx_SCU_EMSR_Bits;

/** \\brief  ESR Input Configuration Register */
typedef struct _Ifx_SCU_ESRCFG_Bits
{
    unsigned int reserved_0 : 7;              /**< \brief \internal Reserved */
    unsigned int EDCON : 2;                   /**< \brief [8:7] Edge Detection Control (rw) */
    unsigned int reserved_9 : 23;             /**< \brief \internal Reserved */
} Ifx_SCU_ESRCFG_Bits;

/** \\brief  ESR Output Configuration Register */
typedef struct _Ifx_SCU_ESROCFG_Bits
{
    unsigned int ARI : 1;                     /**< \brief [0:0] Application Reset Indicator (rh) */
    unsigned int ARC : 1;                     /**< \brief [1:1] Application Reset Indicator Clear (w) */
    unsigned int reserved_2 : 30;             /**< \brief \internal Reserved */
} Ifx_SCU_ESROCFG_Bits;

/** \\brief  External Clock Control Register */
typedef struct _Ifx_SCU_EXTCON_Bits
{
    unsigned int EN0 : 1;                     /**< \brief [0:0] External Clock Enable for EXTCLK0 (rwh) */
    unsigned int reserved_1 : 1;              /**< \brief \internal Reserved */
    unsigned int SEL0 : 4;                    /**< \brief [5:2] External Clock Select for EXTCLK0 (rwh) */
    unsigned int reserved_6 : 10;             /**< \brief \internal Reserved */
    unsigned int EN1 : 1;                     /**< \brief [16:16] External Clock Enable for EXTCLK1 (rwh) */
    unsigned int NSEL : 1;                    /**< \brief [17:17] Negation Selection (rwh) */
    unsigned int SEL1 : 4;                    /**< \brief [21:18] External Clock Select for EXTCLK1 (rwh) */
    unsigned int reserved_22 : 2;             /**< \brief \internal Reserved */
    unsigned int DIV1 : 8;                    /**< \brief [31:24] External Clock Divider for EXTCLK1 (rw) */
} Ifx_SCU_EXTCON_Bits;

/** \\brief  Fractional Divider Register */
typedef struct _Ifx_SCU_FDR_Bits
{
    unsigned int STEP : 10;                   /**< \brief [9:0] Step Value (rw) */
    unsigned int reserved_10 : 4;             /**< \brief \internal Reserved */
    unsigned int DM : 2;                      /**< \brief [15:14] Divider Mode (rw) */
    unsigned int RESULT : 10;                 /**< \brief [25:16] Result Value (rh) */
    unsigned int reserved_26 : 5;             /**< \brief \internal Reserved */
    unsigned int DISCLK : 1;                  /**< \brief [31:31] Disable Clock (rwh) */
} Ifx_SCU_FDR_Bits;

/** \\brief  Flag Modification Register */
typedef struct _Ifx_SCU_FMR_Bits
{
    unsigned int FS0 : 1;                     /**< \brief [0:0] Set Flag INTF0 for Channel x (w) */
    unsigned int FS1 : 1;                     /**< \brief [1:1] Set Flag INTF1 for Channel x (w) */
    unsigned int FS2 : 1;                     /**< \brief [2:2] Set Flag INTF2 for Channel x (w) */
    unsigned int FS3 : 1;                     /**< \brief [3:3] Set Flag INTF3 for Channel x (w) */
    unsigned int FS4 : 1;                     /**< \brief [4:4] Set Flag INTF4 for Channel x (w) */
    unsigned int FS5 : 1;                     /**< \brief [5:5] Set Flag INTF5 for Channel x (w) */
    unsigned int FS6 : 1;                     /**< \brief [6:6] Set Flag INTF6 for Channel x (w) */
    unsigned int FS7 : 1;                     /**< \brief [7:7] Set Flag INTF7 for Channel x (w) */
    unsigned int reserved_8 : 8;              /**< \brief \internal Reserved */
    unsigned int FC0 : 1;                     /**< \brief [16:16] Clear Flag INTF0 for Channel x (w) */
    unsigned int FC1 : 1;                     /**< \brief [17:17] Clear Flag INTF1 for Channel x (w) */
    unsigned int FC2 : 1;                     /**< \brief [18:18] Clear Flag INTF2 for Channel x (w) */
    unsigned int FC3 : 1;                     /**< \brief [19:19] Clear Flag INTF3 for Channel x (w) */
    unsigned int FC4 : 1;                     /**< \brief [20:20] Clear Flag INTF4 for Channel x (w) */
    unsigned int FC5 : 1;                     /**< \brief [21:21] Clear Flag INTF5 for Channel x (w) */
    unsigned int FC6 : 1;                     /**< \brief [22:22] Clear Flag INTF6 for Channel x (w) */
    unsigned int FC7 : 1;                     /**< \brief [23:23] Clear Flag INTF7 for Channel x (w) */
    unsigned int reserved_24 : 8;             /**< \brief \internal Reserved */
} Ifx_SCU_FMR_Bits;

/** \\brief  Identification Register */
typedef struct _Ifx_SCU_ID_Bits
{
    unsigned int MODREV : 8;                  /**< \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE : 8;                 /**< \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER : 16;              /**< \brief [31:16] Module Number Value (r) */
} Ifx_SCU_ID_Bits;

/** \\brief  Flag Gating Register */
typedef struct _Ifx_SCU_IGCR_Bits
{
    unsigned int IPEN00 : 1;                  /**< \brief [0:0] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN01 : 1;                  /**< \brief [1:1] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN02 : 1;                  /**< \brief [2:2] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN03 : 1;                  /**< \brief [3:3] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN04 : 1;                  /**< \brief [4:4] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN05 : 1;                  /**< \brief [5:5] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN06 : 1;                  /**< \brief [6:6] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN07 : 1;                  /**< \brief [7:7] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int reserved_8 : 5;              /**< \brief \internal Reserved */
    unsigned int GEEN0 : 1;                   /**< \brief [13:13] Generate Event Enable 0 (rw) */
    unsigned int IGP0 : 2;                    /**< \brief [15:14] Interrupt Gating Pattern 0 (rw) */
    unsigned int IPEN10 : 1;                  /**< \brief [16:16] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN11 : 1;                  /**< \brief [17:17] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN12 : 1;                  /**< \brief [18:18] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN13 : 1;                  /**< \brief [19:19] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN14 : 1;                  /**< \brief [20:20] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN15 : 1;                  /**< \brief [21:21] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN16 : 1;                  /**< \brief [22:22] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN17 : 1;                  /**< \brief [23:23] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int reserved_24 : 5;             /**< \brief \internal Reserved */
    unsigned int GEEN1 : 1;                   /**< \brief [29:29] Generate Event Enable 1 (rw) */
    unsigned int IGP1 : 2;                    /**< \brief [31:30] Interrupt Gating Pattern 1 (rw) */
} Ifx_SCU_IGCR_Bits;

/** \\brief  ESR Input Register */
typedef struct _Ifx_SCU_IN_Bits
{
    unsigned int P0 : 1;                      /**< \brief [0:0] Input Bit 0 (rh) */
    unsigned int P1 : 1;                      /**< \brief [1:1] Input Bit 1 (rh) */
    unsigned int reserved_2 : 30;             /**< \brief \internal Reserved */
} Ifx_SCU_IN_Bits;

/** \\brief  Input/Output Control Register */
typedef struct _Ifx_SCU_IOCR_Bits
{
    unsigned int reserved_0 : 4;              /**< \brief \internal Reserved */
    unsigned int PC0 : 4;                     /**< \brief [7:4] Control for ESR Pin x (rw) */
    unsigned int reserved_8 : 4;              /**< \brief \internal Reserved */
    unsigned int PC1 : 4;                     /**< \brief [15:12] Control for ESR Pin x (rw) */
    unsigned int reserved_16 : 16;            /**< \brief \internal Reserved */
} Ifx_SCU_IOCR_Bits;

/** \\brief  Logic BIST Control 0 Register */
typedef struct _Ifx_SCU_LBISTCTRL0_Bits
{
    unsigned int LBISTREQ : 1;                /**< \brief [0:0] LBIST Request (w) */
    unsigned int LBISTRES : 1;                /**< \brief [1:1] LBIST-Restart (w) */
    unsigned int PATTERNS : 18;               /**< \brief [19:2] LBIST Pattern Number (rw) */
    unsigned int reserved_20 : 8;             /**< \brief \internal Reserved */
    unsigned int LBISTDONE : 1;               /**< \brief [28:28] LBIST Execution Indicator (rh) */
    unsigned int reserved_29 : 3;             /**< \brief \internal Reserved */
} Ifx_SCU_LBISTCTRL0_Bits;

/** \\brief  Logic BIST Control 1 Register */
typedef struct _Ifx_SCU_LBISTCTRL1_Bits
{
    unsigned int SEED : 19;                   /**< \brief [18:0] LBIST Seed (rw) */
    unsigned int reserved_19 : 5;             /**< \brief \internal Reserved */
    unsigned int SPLITSH : 3;                 /**< \brief [26:24] LBIST Split-Shift Selection (rw) */
    unsigned int BODY : 1;                    /**< \brief [27:27] Body Application Indicator (rw) */
    unsigned int LBISTFREQU : 4;              /**< \brief [31:28] LBIST Frequency Selection (rw) */
} Ifx_SCU_LBISTCTRL1_Bits;

/** \\brief  Logic BIST Control 2 Register */
typedef struct _Ifx_SCU_LBISTCTRL2_Bits
{
    unsigned int LENGTH : 12;                 /**< \brief [11:0] LBIST Maximum Scan-Chain Length (rwh) */
    unsigned int reserved_12 : 20;            /**< \brief \internal Reserved */
} Ifx_SCU_LBISTCTRL2_Bits;

/** \\brief  Logic BIST Control 3 Register */
typedef struct _Ifx_SCU_LBISTCTRL3_Bits
{
    unsigned int SIGNATURE : 32;              /**< \brief [31:0] LBIST Signature (rh) */
} Ifx_SCU_LBISTCTRL3_Bits;

/** \\brief  LCL CPU0 Control Register */
typedef struct _Ifx_SCU_LCLCON0_Bits
{
    unsigned int LS2 : 1;                     /**< \brief [0:0] Lockstep Mode Status (rh) */
    unsigned int reserved_1 : 14;             /**< \brief \internal Reserved */
    unsigned int LSEN2 : 1;                   /**< \brief [15:15] Lockstep Enable (rw) */
    unsigned int LS0 : 1;                     /**< \brief [16:16] Lockstep Mode Status (rh) */
    unsigned int reserved_17 : 14;            /**< \brief \internal Reserved */
    unsigned int LSEN0 : 1;                   /**< \brief [31:31] Lockstep Enable (rw) */
} Ifx_SCU_LCLCON0_Bits;

/** \\brief  LCL CPU1 Control Register */
typedef struct _Ifx_SCU_LCLCON1_Bits
{
    unsigned int LS3 : 1;                     /**< \brief [0:0] Lockstep Mode Status (rh) */
    unsigned int reserved_1 : 14;             /**< \brief \internal Reserved */
    unsigned int LSEN3 : 1;                   /**< \brief [15:15] Lockstep Enable (rw) */
    unsigned int LS1 : 1;                     /**< \brief [16:16] Lockstep Mode Status (rh) */
    unsigned int reserved_17 : 14;            /**< \brief \internal Reserved */
    unsigned int LSEN1 : 1;                   /**< \brief [31:31] Lockstep Enable (rw) */
} Ifx_SCU_LCLCON1_Bits;

/** \\brief  LCL Test Register */
typedef struct _Ifx_SCU_LCLTEST_Bits
{
    unsigned int LCLT0 : 1;                   /**< \brief [0:0] LCL0 Lockstep Test (w) */
    unsigned int LCLT1 : 1;                   /**< \brief [1:1] LCL1 Lockstep Test (w) */
    unsigned int LCLT2 : 1;                   /**< \brief [2:2] LCL2 Lockstep Test (w) */
    unsigned int LCLT3 : 1;                   /**< \brief [3:3] LCL3 Lockstep Test (w) */
    unsigned int reserved_4 : 28;             /**< \brief \internal Reserved */
} Ifx_SCU_LCLTEST_Bits;

/** \\brief  Manufacturer Identification Register */
typedef struct _Ifx_SCU_MANID_Bits
{
    unsigned int DEPT : 5;                    /**< \brief [4:0] Department Identification Number (r) */
    unsigned int MANUF : 11;                  /**< \brief [15:5] Manufacturer Identification Number (r) */
    unsigned int reserved_16 : 16;            /**< \brief \internal Reserved */
} Ifx_SCU_MANID_Bits;

/** \\brief  Modulation Trim 1 Configuration Register */
typedef struct _Ifx_SCU_MODTRIMCON1_Bits
{
    unsigned int XCORR_TOL : 8;               /**< \brief [7:0] XCORR_TOL Trim Value (rw) */
    unsigned int DELTA_RND_GAIN : 8;          /**< \brief [15:8] DELTA_RND_GAIN Trim Value (rw) */
    unsigned int XCORR_AVG_SEL : 2;           /**< \brief [17:16] XCORR_AVG Selection (rw) */
    unsigned int XCORR_SEL_DELAY : 2;         /**< \brief [19:18] XCORR_SEL Delay (rw) */
    unsigned int reserved_20 : 4;             /**< \brief \internal Reserved */
    unsigned int SYSEMCDELAY : 2;             /**< \brief [25:24] System PLL EMC delay enable (rw) */
    unsigned int PEREMCDELAY : 2;             /**< \brief [27:26] Peripheral PLL EMC delay enable (rw) */
    unsigned int reserved_28 : 4;             /**< \brief \internal Reserved */
} Ifx_SCU_MODTRIMCON1_Bits;

/** \\brief  ESR Output Modification Register */
typedef struct _Ifx_SCU_OMR_Bits
{
    unsigned int PS0 : 1;                     /**< \brief [0:0] ESR0 Pin Set Bit x (w) */
    unsigned int PS1 : 1;                     /**< \brief [1:1] ESR1 Pin Set Bit x (w) */
    unsigned int reserved_2 : 14;             /**< \brief \internal Reserved */
    unsigned int PCL0 : 1;                    /**< \brief [16:16] ESR0 Pin Clear Bit x (w) */
    unsigned int PCL1 : 1;                    /**< \brief [17:17] ESR1 Pin Clear Bit x (w) */
    unsigned int reserved_18 : 14;            /**< \brief \internal Reserved */
} Ifx_SCU_OMR_Bits;

/** \\brief  OSC Control Register */
typedef struct _Ifx_SCU_OSCCON_Bits
{
    unsigned int reserved_0 : 1;              /**< \brief \internal Reserved */
    unsigned int PLLLV : 1;                   /**< \brief [1:1] Oscillator for PLL Valid Low Status Bit (rh) */
    unsigned int OSCRES : 1;                  /**< \brief [2:2] Oscillator Watchdog Reset (w) */
    unsigned int GAINSEL : 2;                 /**< \brief [4:3] Oscillator Gain Selection (rw) */
    unsigned int MODE : 2;                    /**< \brief [6:5] Oscillator Mode (rw) */
    unsigned int SHBY : 1;                    /**< \brief [7:7] Shaper Bypass (rw) */
    unsigned int PLLHV : 1;                   /**< \brief [8:8] Oscillator for PLL Valid High Status Bit (rh) */
    unsigned int reserved_9 : 7;              /**< \brief \internal Reserved */
    unsigned int OSCVAL : 5;                  /**< \brief [20:16] OSC Frequency Value (rw) */
    unsigned int reserved_21 : 2;             /**< \brief \internal Reserved */
    unsigned int APREN : 1;                   /**< \brief [23:23] Amplitude Regulation Enable (rw) */
    unsigned int CAP0EN : 1;                  /**< \brief [24:24] Capacitance 0 Enable (rw) */
    unsigned int CAP1EN : 1;                  /**< \brief [25:25] Capacitance 1 Enable (rw) */
    unsigned int CAP2EN : 1;                  /**< \brief [26:26] Capacitance 2 Enable (rw) */
    unsigned int CAP3EN : 1;                  /**< \brief [27:27] Capacitance 3 Enable (rw) */
    unsigned int reserved_28 : 4;             /**< \brief \internal Reserved */
} Ifx_SCU_OSCCON_Bits;

/** \\brief  ESR Output Register */
typedef struct _Ifx_SCU_OUT_Bits
{
    unsigned int P0 : 1;                      /**< \brief [0:0] Output Bit 0 (rwh) */
    unsigned int P1 : 1;                      /**< \brief [1:1] Output Bit 1 (rwh) */
    unsigned int reserved_2 : 30;             /**< \brief \internal Reserved */
} Ifx_SCU_OUT_Bits;

/** \\brief  Overlay Control Register */
typedef struct _Ifx_SCU_OVCCON_Bits
{
    unsigned int CSEL0 : 1;                   /**< \brief [0:0] CPU Select 0 (w) */
    unsigned int CSEL1 : 1;                   /**< \brief [1:1] CPU Select 1 (If product has CPU1) (w) */
    unsigned int CSEL2 : 1;                   /**< \brief [2:2] CPU Select 2 (If product has CPU2) (w) */
    unsigned int CSEL3 : 1;                   /**< \brief [3:3] CPU Select 3 (If product has CPU3) (w) */
    unsigned int CSEL4 : 1;                   /**< \brief [4:4] CPU Select 4 (If product has CPU4) (w) */
    unsigned int CSEL5 : 1;                   /**< \brief [5:5] CPU Select 3 (If product has CPU3) (w) */
    unsigned int reserved_6 : 10;             /**< \brief \internal Reserved */
    unsigned int OVSTRT : 1;                  /**< \brief [16:16] Overlay Start (w) */
    unsigned int OVSTP : 1;                   /**< \brief [17:17] Overlay Stop (w) */
    unsigned int DCINVAL : 1;                 /**< \brief [18:18] Data Cache Invalidate (w) */
    unsigned int reserved_19 : 5;             /**< \brief \internal Reserved */
    unsigned int OVCONF : 1;                  /**< \brief [24:24] Overlay Configured (rw) */
    unsigned int POVCONF : 1;                 /**< \brief [25:25] Write Protection for OVCONF (w) */
    unsigned int reserved_26 : 6;             /**< \brief \internal Reserved */
} Ifx_SCU_OVCCON_Bits;

/** \\brief  Overlay Enable Register */
typedef struct _Ifx_SCU_OVCENABLE_Bits
{
    unsigned int OVEN0 : 1;                   /**< \brief [0:0] Overlay Enable 0 (rw) */
    unsigned int OVEN1 : 1;                   /**< \brief [1:1] Overlay Enable 1 (If product has CPU1) (rw) */
    unsigned int OVEN2 : 1;                   /**< \brief [2:2] Overlay Enable 2 (If product has CPU2) (rw) */
    unsigned int OVEN3 : 1;                   /**< \brief [3:3] Overlay Enable 3 (If product has CPU3) (rw) */
    unsigned int OVEN4 : 1;                   /**< \brief [4:4] Overlay Enable 4 (If product has CPU4) (rw) */
    unsigned int OVEN5 : 1;                   /**< \brief [5:5] Overlay Enable 5 (If product has CPU5) (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_OVCENABLE_Bits;

/** \\brief  Pad Disable Control Register */
typedef struct _Ifx_SCU_PDISC_Bits
{
    unsigned int PDIS0 : 1;                   /**< \brief [0:0] Pad Disable for ESR Pin 0 (rw) */
    unsigned int PDIS1 : 1;                   /**< \brief [1:1] Pad Disable for ESR Pin 1 (rw) */
    unsigned int reserved_2 : 30;             /**< \brief \internal Reserved */
} Ifx_SCU_PDISC_Bits;

/** \\brief  ESR Pad Driver Mode Register */
typedef struct _Ifx_SCU_PDR_Bits
{
    unsigned int PD0 : 3;                     /**< \brief [2:0] Pad Driver Mode for ESR Pins 0 and 1 (rw) */
    unsigned int PL0 : 1;                     /**< \brief [3:3] Pad Level Selection for ESR Pins 0 and 1 (rw) */
    unsigned int PD1 : 3;                     /**< \brief [6:4] Pad Driver Mode for ESR Pins 0 and 1 (rw) */
    unsigned int PL1 : 1;                     /**< \brief [7:7] Pad Level Selection for ESR Pins 0 and 1 (rw) */
    unsigned int reserved_8 : 24;             /**< \brief \internal Reserved */
} Ifx_SCU_PDR_Bits;

/** \\brief  Pattern Detection Result Register */
typedef struct _Ifx_SCU_PDRR_Bits
{
    unsigned int PDR0 : 1;                    /**< \brief [0:0] Pattern Detection Result of Channel 0 (rh) */
    unsigned int PDR1 : 1;                    /**< \brief [1:1] Pattern Detection Result of Channel 1 (rh) */
    unsigned int PDR2 : 1;                    /**< \brief [2:2] Pattern Detection Result of Channel 2 (rh) */
    unsigned int PDR3 : 1;                    /**< \brief [3:3] Pattern Detection Result of Channel 3 (rh) */
    unsigned int PDR4 : 1;                    /**< \brief [4:4] Pattern Detection Result of Channel 4 (rh) */
    unsigned int PDR5 : 1;                    /**< \brief [5:5] Pattern Detection Result of Channel 5 (rh) */
    unsigned int PDR6 : 1;                    /**< \brief [6:6] Pattern Detection Result of Channel 6 (rh) */
    unsigned int PDR7 : 1;                    /**< \brief [7:7] Pattern Detection Result of Channel 7 (rh) */
    unsigned int reserved_8 : 24;             /**< \brief \internal Reserved */
} Ifx_SCU_PDRR_Bits;

/** \\brief  Peripheral PLL Configuration 0 Register */
typedef struct _Ifx_SCU_PERPLLCON0_Bits
{
    unsigned int DIVBY : 1;                   /**< \brief [0:0] Divider Bypass (rw) */
    unsigned int reserved_1 : 8;              /**< \brief \internal Reserved */
    unsigned int NDIV : 7;                    /**< \brief [15:9] N-Divider Value (rw) */
    unsigned int PLLPWD : 1;                  /**< \brief [16:16] Peripheral PLL Power Saving Mode (rw) */
    unsigned int reserved_17 : 1;             /**< \brief \internal Reserved */
    unsigned int RESLD : 1;                   /**< \brief [18:18] Restart DCO Lock Detection (w) */
    unsigned int reserved_19 : 5;             /**< \brief \internal Reserved */
    unsigned int PDIV : 3;                    /**< \brief [26:24] P-Divider Value (rw) */
    unsigned int reserved_27 : 5;             /**< \brief \internal Reserved */
} Ifx_SCU_PERPLLCON0_Bits;

/** \\brief  Peripheral PLL Configuration 1 Register */
typedef struct _Ifx_SCU_PERPLLCON1_Bits
{
    unsigned int K2DIV : 3;                   /**< \brief [2:0] K2-Divider Value (rw) */
    unsigned int reserved_3 : 5;              /**< \brief \internal Reserved */
    unsigned int K3DIV : 3;                   /**< \brief [10:8] K3-Divider Value (rw) */
    unsigned int reserved_11 : 21;            /**< \brief \internal Reserved */
} Ifx_SCU_PERPLLCON1_Bits;

/** \\brief  Peripheral PLL Status Register */
typedef struct _Ifx_SCU_PERPLLSTAT_Bits
{
    unsigned int reserved_0 : 1;              /**< \brief \internal Reserved */
    unsigned int PWDSTAT : 1;                 /**< \brief [1:1] Peripheral PLL Power-saving Mode Status (rh) */
    unsigned int LOCK : 1;                    /**< \brief [2:2] Peripheral PLL Lock Status (rh) */
    unsigned int reserved_3 : 1;              /**< \brief \internal Reserved */
    unsigned int K3RDY : 1;                   /**< \brief [4:4] K3 Divider Ready Status (rh) */
    unsigned int K2RDY : 1;                   /**< \brief [5:5] K2 Divider Ready Status (rh) */
    unsigned int BY : 1;                      /**< \brief [6:6] Bypass Mode Status (rh) */
    unsigned int reserved_7 : 25;             /**< \brief \internal Reserved */
} Ifx_SCU_PERPLLSTAT_Bits;

/** \\brief  Power Management Control and Status Register */
typedef struct _Ifx_SCU_PMCSR_Bits
{
    unsigned int REQSLP : 2;                  /**< \brief [1:0] Idle Mode and Sleep Mode Request (rwh) */
    unsigned int reserved_2 : 6;              /**< \brief \internal Reserved */
    unsigned int PMST : 3;                    /**< \brief [10:8] Power management Status (rh) */
    unsigned int reserved_11 : 21;            /**< \brief \internal Reserved */
} Ifx_SCU_PMCSR_Bits;

/** \\brief  Power Management Status Register 0 */
typedef struct _Ifx_SCU_PMSTAT0_Bits
{
    unsigned int CPU0 : 1;                    /**< \brief [0:0] CPU0 Status (rh) */
    unsigned int CPU1 : 1;                    /**< \brief [1:1] CPU1 Status (rh) */
    unsigned int CPU2 : 1;                    /**< \brief [2:2] CPU2 Status (rh) */
    unsigned int CPU3 : 1;                    /**< \brief [3:3] CPU3 Status (rh) */
    unsigned int CPU4 : 1;                    /**< \brief [4:4] CPU4 Status (rh) */
    unsigned int CPU5 : 1;                    /**< \brief [5:5] CPU5 Status (rh) */
    unsigned int reserved_6 : 10;             /**< \brief \internal Reserved */
    unsigned int CPU0LS : 1;                  /**< \brief [16:16] CPU0LS Status (rh) */
    unsigned int CPU1LS : 1;                  /**< \brief [17:17] CPU1LS Status (rh) */
    unsigned int CPU2LS : 1;                  /**< \brief [18:18] CPU2LS Status (rh) */
    unsigned int CPU3LS : 1;                  /**< \brief [19:19] CPU3LS Status (rh) */
    unsigned int reserved_20 : 12;            /**< \brief \internal Reserved */
} Ifx_SCU_PMSTAT0_Bits;

/** \\brief  Standby and Wake-up Control Register 1 */
typedef struct _Ifx_SCU_PMSWCR1_Bits
{
    unsigned int reserved_0 : 8;              /**< \brief \internal Reserved */
    unsigned int CPUIDLSEL : 3;               /**< \brief [10:8] CPU selection for Idle mode (rw) */
    unsigned int reserved_11 : 1;             /**< \brief \internal Reserved */
    unsigned int IRADIS : 1;                  /**< \brief [12:12] Idle-Request-Acknowledge Sequence Disable (rw) */
    unsigned int reserved_13 : 11;            /**< \brief \internal Reserved */
    unsigned int CPUSEL : 3;                  /**< \brief [26:24] CPU selection for Sleep and Standby mode (rw) */
    unsigned int STBYEVEN : 1;                /**< \brief [27:27] Standby Entry Event configuration enable (w) */
    unsigned int STBYEV : 3;                  /**< \brief [30:28] Standby Entry Event Configuration (rw) */
    unsigned int reserved_31 : 1;             /**< \brief \internal Reserved */
} Ifx_SCU_PMSWCR1_Bits;

/** \\brief  Power Management Transition Control and Status Register 0 */
typedef struct _Ifx_SCU_PMTRCSR0_Bits
{
    unsigned int LJTEN : 1;                   /**< \brief [0:0] Load Jump Timer Enable (rw) */
    unsigned int LJTOVEN : 1;                 /**< \brief [1:1] Load Jump Timer Overflow Enable (rw) */
    unsigned int LJTOVIEN : 1;                /**< \brief [2:2] Load Jump Timer Overflow Interrupt Enable (rw) */
    unsigned int LJTSTRT : 1;                 /**< \brief [3:3] Load Jump Timer Start (w) */
    unsigned int LJTSTP : 1;                  /**< \brief [4:4] Load Jump Timer Stop (w) */
    unsigned int LJTCLR : 1;                  /**< \brief [5:5] Load Jump Timer Clear (w) */
    unsigned int reserved_6 : 6;              /**< \brief \internal Reserved */
    unsigned int SDSTEP : 4;                  /**< \brief [15:12] Droop Voltage Step(vdroop_step_i) (rw) */
    unsigned int VDTEN : 1;                   /**< \brief [16:16] Voltage Droop Timer Enable (rw) */
    unsigned int VDTOVEN : 1;                 /**< \brief [17:17] Voltage Droop Timer Overflow Enable (rw) */
    unsigned int VDTOVIEN : 1;                /**< \brief [18:18] Voltage Droop Timer Overflow Interrupt Enable (rw) */
    unsigned int VDTSTRT : 1;                 /**< \brief [19:19] Voltage Droop Timer Start (w) */
    unsigned int VDTSTP : 1;                  /**< \brief [20:20] Voltage Droop Timer Stop (w) */
    unsigned int VDTCLR : 1;                  /**< \brief [21:21] Voltage Droop Timer Clear (w) */
    unsigned int reserved_22 : 7;             /**< \brief \internal Reserved */
    unsigned int LPSLPEN : 1;                 /**< \brief [29:29] EVRC Low Power Mode activation on a Sleep Request (rw) */
    unsigned int reserved_30 : 2;             /**< \brief \internal Reserved */
} Ifx_SCU_PMTRCSR0_Bits;

/** \\brief  Power Management Transition Control and Status Register 1 */
typedef struct _Ifx_SCU_PMTRCSR1_Bits
{
    unsigned int LJTCV : 16;                  /**< \brief [15:0] Load Jump Timer Compare Setpoint Value (rw) */
    unsigned int VDTCV : 10;                  /**< \brief [25:16] Voltage Droop Timer Compare Setpoint Value (rw) */
    unsigned int reserved_26 : 6;             /**< \brief \internal Reserved */
} Ifx_SCU_PMTRCSR1_Bits;

/** \\brief  Power Management Transition Control and Status Register 2 */
typedef struct _Ifx_SCU_PMTRCSR2_Bits
{
    unsigned int LDJMPREQ : 2;                /**< \brief [1:0] Load Jump Request (rwh) */
    unsigned int reserved_2 : 2;              /**< \brief \internal Reserved */
    unsigned int LJTRUN : 2;                  /**< \brief [5:4] Load Jump Timer Run Status (rh) */
    unsigned int reserved_6 : 2;              /**< \brief \internal Reserved */
    unsigned int LJTOV : 1;                   /**< \brief [8:8] Load Jump Timer Overflow Status (rh) */
    unsigned int reserved_9 : 3;              /**< \brief \internal Reserved */
    unsigned int LJTOVCLR : 1;                /**< \brief [12:12] Load Jump Timer Overflow Status Clear (w) */
    unsigned int reserved_13 : 3;             /**< \brief \internal Reserved */
    unsigned int LJTCNT : 16;                 /**< \brief [31:16] Load Jump Timer Value (rh) */
} Ifx_SCU_PMTRCSR2_Bits;

/** \\brief  Power Management Transition Control and Status Register 3 */
typedef struct _Ifx_SCU_PMTRCSR3_Bits
{
    unsigned int VDROOPREQ : 2;               /**< \brief [1:0] Voltage Droop Request (rwh) */
    unsigned int reserved_2 : 2;              /**< \brief \internal Reserved */
    unsigned int VDTRUN : 2;                  /**< \brief [5:4] Voltage Droop Timer Run Status (rh) */
    unsigned int reserved_6 : 2;              /**< \brief \internal Reserved */
    unsigned int VDTOV : 1;                   /**< \brief [8:8] Voltage Droop Timer Overflow Status (rh) */
    unsigned int reserved_9 : 3;              /**< \brief \internal Reserved */
    unsigned int VDTOVCLR : 1;                /**< \brief [12:12] Voltage Droop Timer Overflow Status Clear (w) */
    unsigned int reserved_13 : 3;             /**< \brief \internal Reserved */
    unsigned int VDTCNT : 10;                 /**< \brief [25:16] Voltage Droop Timer Value (rh) */
    unsigned int reserved_26 : 6;             /**< \brief \internal Reserved */
} Ifx_SCU_PMTRCSR3_Bits;

/** \\brief  Additional Reset Control Register */
typedef struct _Ifx_SCU_RSTCON2_Bits
{
    unsigned int FRTO : 1;                    /**< \brief [0:0] Force Reset Timeout (rw) */
    unsigned int CLRC : 1;                    /**< \brief [1:1] Clear Cold Reset Status (w) */
    unsigned int TOUT20 : 1;                  /**< \brief [2:2] Reset Timeout Counter 20us (rh) */
    unsigned int TOUT40 : 1;                  /**< \brief [3:3] Reset Timeout Counter 40us (rh) */
    unsigned int TOUT60 : 1;                  /**< \brief [4:4] Reset Timeout Counter 60us (rh) */
    unsigned int TOUT80 : 1;                  /**< \brief [5:5] Reset Timeout Counter 80us (rh) */
    unsigned int FLSS : 1;                    /**< \brief [6:6] Flash Idle State Reached (rh) */
    unsigned int CSSx : 6;                    /**< \brief [12:7] CPU x Idle State Reached (rh) */
    unsigned int reserved_13 : 2;             /**< \brief \internal Reserved */
    unsigned int MCDSSS : 1;                  /**< \brief [15:15] MCDS Idle State Reached (rh) */
    unsigned int USRINFO : 16;                /**< \brief [31:16] User Information (rw) */
} Ifx_SCU_RSTCON2_Bits;

/** \\brief  Reset Configuration Register */
typedef struct _Ifx_SCU_RSTCON_Bits
{
    unsigned int ESR0 : 2;                    /**< \brief [1:0] ESR0 Reset Request Trigger Reset Configuration (rw) */
    unsigned int ESR1 : 2;                    /**< \brief [3:2] ESR1 Reset Request Trigger Reset Configuration (rw) */
    unsigned int reserved_4 : 2;              /**< \brief \internal Reserved */
    unsigned int SMU : 2;                     /**< \brief [7:6] SMU Reset Request Trigger Reset Configuration (rw) */
    unsigned int SW : 2;                      /**< \brief [9:8] SW Reset Request Trigger Reset Configuration (rw) */
    unsigned int STM0 : 2;                    /**< \brief [11:10] STM0 Reset Request Trigger Reset Configuration (rw) */
    unsigned int STM1 : 2;                    /**< \brief [13:12] STM1 Reset Request Trigger Reset Configuration (If Product has STM1) (rw) */
    unsigned int STM2 : 2;                    /**< \brief [15:14] STM2 Reset Request Trigger Reset Configuration (If Product has STM2) (rw) */
    unsigned int STM3 : 2;                    /**< \brief [17:16] STM3 Reset Request Trigger Reset Configuration (If Product has STM3) (rw) */
    unsigned int STM4 : 2;                    /**< \brief [19:18] STM4 Reset Request Trigger Reset Configuration (If Product has STM4) (rw) */
    unsigned int STM5 : 2;                    /**< \brief [21:20] STM5 Reset Request Trigger Reset Configuration (If Product has STM5) (rw) */
    unsigned int reserved_22 : 10;            /**< \brief \internal Reserved */
} Ifx_SCU_RSTCON_Bits;

/** \\brief  Reset Status Register */
typedef struct _Ifx_SCU_RSTSTAT_Bits
{
    unsigned int ESR0 : 1;                    /**< \brief [0:0] Reset Request Trigger Reset Status for ESR0 (rh) */
    unsigned int ESR1 : 1;                    /**< \brief [1:1] Reset Request Trigger Reset Status for ESR1 (rh) */
    unsigned int reserved_2 : 1;              /**< \brief \internal Reserved */
    unsigned int SMU : 1;                     /**< \brief [3:3] Reset Request Trigger Reset Status for SMU (rh) */
    unsigned int SW : 1;                      /**< \brief [4:4] Reset Request Trigger Reset Status for SW (rh) */
    unsigned int STM0 : 1;                    /**< \brief [5:5] Reset Request Trigger Reset Status for STM0 Compare Match (rh) */
    unsigned int STM1 : 1;                    /**< \brief [6:6] Reset Request Trigger Reset Status for STM1 Compare Match (If Product has STM1) (rh) */
    unsigned int STM2 : 1;                    /**< \brief [7:7] Reset Request Trigger Reset Status for STM2 Compare Match (If Product has STM2) (rh) */
    unsigned int STM3 : 1;                    /**< \brief [8:8] Reset Request Trigger Reset Status for STM3 Compare Match (If Product has STM3) (rh) */
    unsigned int STM4 : 1;                    /**< \brief [9:9] Reset Request Trigger Reset Status for STM4 Compare Match (If Product has STM4) (rh) */
    unsigned int STM5 : 1;                    /**< \brief [10:10] Reset Request Trigger Reset Status for STM5 Compare Match (If Product has STM5) (rh) */
    unsigned int reserved_11 : 5;             /**< \brief \internal Reserved */
    unsigned int PORST : 1;                   /**< \brief [16:16] Reset Request Trigger Reset Status for PORST (rh) */
    unsigned int reserved_17 : 1;             /**< \brief \internal Reserved */
    unsigned int CB0 : 1;                     /**< \brief [18:18] Reset Request Trigger Reset Status for Cerberus System Reset (rh) */
    unsigned int CB1 : 1;                     /**< \brief [19:19] Reset Request Trigger Reset Status for Cerberus Debug Reset (rh) */
    unsigned int CB3 : 1;                     /**< \brief [20:20] Reset Request Trigger Reset Status for Cerberus Application Reset (rh) */
    unsigned int TP : 1;                      /**< \brief [21:21] Reset Request Trigger Reset Status for Tuning Protection (rh) */
    unsigned int TCU : 1;                     /**< \brief [22:22] Reset Request Trigger Reset Status for TCU (rh) */
    unsigned int EVRC : 1;                    /**< \brief [23:23] Reset Request Trigger Reset Status for EVRC (rh) */
    unsigned int EVR33 : 1;                   /**< \brief [24:24] Reset Request Trigger Reset Status for EVR33 (rh) */
    unsigned int SWD : 1;                     /**< \brief [25:25] Reset Request Trigger Reset Status for Supply Watchdog (SWD) (rh) */
    unsigned int HSMS : 1;                    /**< \brief [26:26] Reset Request Trigger Reset Status for HSM System Reset (HSM S) (rh) */
    unsigned int HSMA : 1;                    /**< \brief [27:27] Reset Request Trigger Reset Status for HSM Application Reset (HSM A) (rh) */
    unsigned int STBYR : 1;                   /**< \brief [28:28] Reset Request Trigger Reset Status for Standby Regulator Watchdog (STBYR) (rh) */
    unsigned int RBBF0 : 1;                   /**< \brief [29:29] Reserved (r) */
    unsigned int RBBF1 : 1;                   /**< \brief [30:30] Reserved (r) */
    unsigned int reserved_31 : 1;             /**< \brief \internal Reserved */
} Ifx_SCU_RSTSTAT_Bits;

/** \\brief  Safety ENDINIT Control Register 0 */
typedef struct _Ifx_SCU_SEICON0_Bits
{
    unsigned int Reserved : 1;                /**< \brief [0:0] Reserved Bit (r) */
    unsigned int ENDINIT : 1;                 /**< \brief [1:1] End-of-Initialization Control Bit (rwh) */
    unsigned int EPW : 14;                    /**< \brief [15:2] User-Definable ENDINIT Password Field (rwh) */
    unsigned int REL : 16;                    /**< \brief [31:16] Reload Value for the ENDINIT timer (r) */
} Ifx_SCU_SEICON0_Bits;

/** \\brief  Safety ENDINIT Control Register 1 */
typedef struct _Ifx_SCU_SEICON1_Bits
{
    unsigned int reserved_0 : 2;              /**< \brief \internal Reserved */
    unsigned int IR0 : 1;                     /**< \brief [2:2] Input Frequency Request Control (rw) */
    unsigned int DR : 1;                      /**< \brief [3:3] Disable Request Control Bit (rw) */
    unsigned int reserved_4 : 1;              /**< \brief \internal Reserved */
    unsigned int IR1 : 1;                     /**< \brief [5:5] Input Frequency Request Control (rw) */
    unsigned int reserved_6 : 26;             /**< \brief \internal Reserved */
} Ifx_SCU_SEICON1_Bits;

/** \\brief  Safety ENDINIT Timeout Status Register */
typedef struct _Ifx_SCU_SEISR_Bits
{
    unsigned int AE : 1;                      /**< \brief [0:0] SEICON0 Access Error Status Flag (rh) */
    unsigned int OE : 1;                      /**< \brief [1:1] EI Timeout Overflow Error Status Flag (rh) */
    unsigned int IS0 : 1;                     /**< \brief [2:2] EI Timeout Input Clock Status (rh) */
    unsigned int DS : 1;                      /**< \brief [3:3] Watchdog Enable/Disable Status Flag (rh) */
    unsigned int TO : 1;                      /**< \brief [4:4] Watchdog Time-Out Mode Flag (rh) */
    unsigned int IS1 : 1;                     /**< \brief [5:5] EI Timeout Input Clock Status (rh) */
    unsigned int reserved_6 : 10;             /**< \brief \internal Reserved */
    unsigned int TIM : 16;                    /**< \brief [31:16] Timer Value (rh) */
} Ifx_SCU_SEISR_Bits;

/** \\brief  Start-up Status Register */
typedef struct _Ifx_SCU_STSTAT_Bits
{
    unsigned int HWCFG : 8;                   /**< \brief [7:0] Hardware Configuration Setting (rh) */
    unsigned int FTM : 7;                     /**< \brief [14:8] Firmware Test Setting (rh) */
    unsigned int MODE : 1;                    /**< \brief [15:15] MODE (rh) */
    unsigned int FCBAE : 1;                   /**< \brief [16:16] Flash Config. Sector Access Enable (rh) */
    unsigned int LUDIS : 1;                   /**< \brief [17:17] Latch Update Disable (rh) */
    unsigned int FARFUSE : 1;                 /**< \brief [18:18] FAR Fuse State (rh) */
    unsigned int TRSTL : 1;                   /**< \brief [19:19] TRSTL Status (rh) */
    unsigned int SPDEN : 1;                   /**< \brief [20:20] Single Pin DAP Mode Enable (rh) */
    unsigned int OTPOFF : 1;                  /**< \brief [21:21] OTP Over-ruled (rh) */
    unsigned int FSIOFF : 1;                  /**< \brief [22:22] FSI Disabled (rh) */
    unsigned int STPOVREQ : 1;                /**< \brief [23:23] Start-Up Protection Over-ruling Request (rh) */
    unsigned int RAMINT : 1;                  /**< \brief [24:24] RAM Content Security Integrity (rh) */
    unsigned int reserved_25 : 3;             /**< \brief \internal Reserved */
    unsigned int SUBFUSE : 4;                 /**< \brief [31:28] Individual FAR Fuse State (rh) */
} Ifx_SCU_STSTAT_Bits;

/** \\brief  Software Reset Configuration Register */
typedef struct _Ifx_SCU_SWRSTCON_Bits
{
    unsigned int SWBOOT : 1;                  /**< \brief [0:0] Software Boot Configuration Selection (rw) */
    unsigned int SWRSTREQ : 1;                /**< \brief [1:1] Software Reset Request (w) */
    unsigned int reserved_2 : 6;              /**< \brief \internal Reserved */
    unsigned int SWCFG : 8;                   /**< \brief [15:8] Software Boot Configuration (rw) */
    unsigned int reserved_16 : 16;            /**< \brief \internal Reserved */
} Ifx_SCU_SWRSTCON_Bits;

/** \\brief  System Control Register */
typedef struct _Ifx_SCU_SYSCON_Bits
{
    unsigned int CCTRIG0 : 1;                 /**< \brief [0:0] Capture Compare Trigger 0 (rw) */
    unsigned int reserved_1 : 1;              /**< \brief \internal Reserved */
    unsigned int RAMINTM : 2;                 /**< \brief [3:2] RAM Integrity Modify (w) */
    unsigned int SETLUDIS : 1;                /**< \brief [4:4] Set Latch Update Disable (w) */
    unsigned int reserved_5 : 3;              /**< \brief \internal Reserved */
    unsigned int DDC : 1;                     /**< \brief [8:8] Disable DXCPL (rw) */
    unsigned int reserved_9 : 23;             /**< \brief \internal Reserved */
} Ifx_SCU_SYSCON_Bits;

/** \\brief  System PLL Configuration 0 Register */
typedef struct _Ifx_SCU_SYSPLLCON0_Bits
{
    unsigned int reserved_0 : 2;              /**< \brief \internal Reserved */
    unsigned int MODEN : 1;                   /**< \brief [2:2] Modulation Enable (rw) */
    unsigned int reserved_3 : 6;              /**< \brief \internal Reserved */
    unsigned int NDIV : 7;                    /**< \brief [15:9] N-Divider Value (rw) */
    unsigned int PLLPWD : 1;                  /**< \brief [16:16] System PLL Power Saving Mode (rw) */
    unsigned int reserved_17 : 1;             /**< \brief \internal Reserved */
    unsigned int RESLD : 1;                   /**< \brief [18:18] Restart DCO Lock Detection (w) */
    unsigned int reserved_19 : 5;             /**< \brief \internal Reserved */
    unsigned int PDIV : 3;                    /**< \brief [26:24] P-Divider Value (rw) */
    unsigned int reserved_27 : 3;             /**< \brief \internal Reserved */
    unsigned int INSEL : 2;                   /**< \brief [31:30] Input Selection (rw) */
} Ifx_SCU_SYSPLLCON0_Bits;

/** \\brief  System PLL Configuration 1 Register */
typedef struct _Ifx_SCU_SYSPLLCON1_Bits
{
    unsigned int K2DIV : 3;                   /**< \brief [2:0] K2-Divider Value (rw) */
    unsigned int reserved_3 : 29;             /**< \brief \internal Reserved */
} Ifx_SCU_SYSPLLCON1_Bits;

/** \\brief  System PLL Configuration 2 Register */
typedef struct _Ifx_SCU_SYSPLLCON2_Bits
{
    unsigned int MODCFG : 16;                 /**< \brief [15:0] Modulation Configuration (rw) */
    unsigned int reserved_16 : 16;            /**< \brief \internal Reserved */
} Ifx_SCU_SYSPLLCON2_Bits;

/** \\brief  System PLL Status Register */
typedef struct _Ifx_SCU_SYSPLLSTAT_Bits
{
    unsigned int reserved_0 : 1;              /**< \brief \internal Reserved */
    unsigned int PWDSTAT : 1;                 /**< \brief [1:1] System PLL Power-saving Mode Status (rh) */
    unsigned int LOCK : 1;                    /**< \brief [2:2] System PLL Lock Status (rh) */
    unsigned int reserved_3 : 2;              /**< \brief \internal Reserved */
    unsigned int K2RDY : 1;                   /**< \brief [5:5] K2 Divider Ready Status (rh) */
    unsigned int BY : 1;                      /**< \brief [6:6] Bypass Mode Status (rh) */
    unsigned int MODRUN : 1;                  /**< \brief [7:7] Modulation Run (rh) */
    unsigned int reserved_8 : 24;             /**< \brief \internal Reserved */
} Ifx_SCU_SYSPLLSTAT_Bits;

/** \\brief  Trap Clear Register */
typedef struct _Ifx_SCU_TRAPCLR_Bits
{
    unsigned int ESR0T : 1;                   /**< \brief [0:0] Clear Trap Request Flag ESR0T (w) */
    unsigned int ESR1T : 1;                   /**< \brief [1:1] Clear Trap Request Flag ESR1T (w) */
    unsigned int TRAP2 : 1;                   /**< \brief [2:2] Clear Trap Request Flag TRAP2 (w) */
    unsigned int SMUT : 1;                    /**< \brief [3:3] Clear Trap Request Flag SMUT (w) */
    unsigned int reserved_4 : 28;             /**< \brief \internal Reserved */
} Ifx_SCU_TRAPCLR_Bits;

/** \\brief  Trap Disable Register 0 */
typedef struct _Ifx_SCU_TRAPDIS0_Bits
{
    unsigned int CPU0ESR0T : 1;               /**< \brief [0:0] Disable Trap Request ESR0T on CPU0 (rw) */
    unsigned int CPU0ESR1T : 1;               /**< \brief [1:1] Disable Trap Request ESR1T on CPU0 (rw) */
    unsigned int CPU0TRAP2T : 1;              /**< \brief [2:2] Disable Trap Request TRAP2T on CPU0 (rw) */
    unsigned int CPU0SMUT : 1;                /**< \brief [3:3] Disable Trap Request SMUT on CPU0 (rw) */
    unsigned int reserved_4 : 4;              /**< \brief \internal Reserved */
    unsigned int CPU1ESR0T : 1;               /**< \brief [8:8] Disable Trap Request ESR0T on CPU1 (If product has CPU1) (rw) */
    unsigned int CPU1ESR1T : 1;               /**< \brief [9:9] Disable Trap Request ESR1T on CPU1 (If product has CPU1) (rw) */
    unsigned int CPU1TRAP2T : 1;              /**< \brief [10:10] Disable Trap Request TRAP2T on CPU1 (If product has CPU1) (rw) */
    unsigned int CPU1SMUT : 1;                /**< \brief [11:11] Disable Trap Request SMUT on CPU1 (If product has CPU1) (rw) */
    unsigned int reserved_12 : 4;             /**< \brief \internal Reserved */
    unsigned int CPU2ESR0T : 1;               /**< \brief [16:16] Disable Trap Request ESR0T on CPU2 (If product has CPU2) (rw) */
    unsigned int CPU2ESR1T : 1;               /**< \brief [17:17] Disable Trap Request ESR1T on CPU2 (If product has CPU2) (rw) */
    unsigned int CPU2TRAP2T : 1;              /**< \brief [18:18] Disable Trap Request TRAP2T on CPU2 (If product has CPU2) (rw) */
    unsigned int CPU2SMUT : 1;                /**< \brief [19:19] Disable Trap Request SMUT on CPU2 (If product has CPU2) (rw) */
    unsigned int reserved_20 : 4;             /**< \brief \internal Reserved */
    unsigned int CPU3ESR0T : 1;               /**< \brief [24:24] Disable Trap Request ESR0T on CPU3 (If product has CPU3) (rw) */
    unsigned int CPU3ESR1T : 1;               /**< \brief [25:25] Disable Trap Request ESR1T on CPU3 (If product has CPU3) (rw) */
    unsigned int CPU3TRAP2T : 1;              /**< \brief [26:26] Disable Trap Request TRAP2T on CPU3 (If product has CPU3) (rw) */
    unsigned int CPU3SMUT : 1;                /**< \brief [27:27] Disable Trap Request SMUT on CPU3 (If product has CPU3) (rw) */
    unsigned int reserved_28 : 4;             /**< \brief \internal Reserved */
} Ifx_SCU_TRAPDIS0_Bits;

/** \\brief  Trap Disable Register 1 */
typedef struct _Ifx_SCU_TRAPDIS1_Bits
{
    unsigned int CPU4ESR0T : 1;               /**< \brief [0:0] Disable Trap Request ESR0T on CPU4 (If product has CPU4) (rw) */
    unsigned int CPU4ESR1T : 1;               /**< \brief [1:1] Disable Trap Request ESR1T on CPU4 (If product has CPU4) (rw) */
    unsigned int CPU4TRAP2T : 1;              /**< \brief [2:2] Disable Trap Request TRAP2T on CPU4 (If product has CPU4) (rw) */
    unsigned int CPU4SMUT : 1;                /**< \brief [3:3] Disable Trap Request SMUT on CPU4 (If product has CPU4) (rw) */
    unsigned int reserved_4 : 4;              /**< \brief \internal Reserved */
    unsigned int CPU5ESR0T : 1;               /**< \brief [8:8] Disable Trap Request ESR0T on CPU5 (If product has CPU5) (rw) */
    unsigned int CPU5ESR1T : 1;               /**< \brief [9:9] Disable Trap Request ESR1T on CPU5 (If product has CPU5) (rw) */
    unsigned int CPU5TRAP2T : 1;              /**< \brief [10:10] Disable Trap Request TRAP2T on CPU5 (If product has CPU5) (rw) */
    unsigned int CPU5SMUT : 1;                /**< \brief [11:11] Disable Trap Request SMUT on CPU5 (If product has CPU5) (rw) */
    unsigned int reserved_12 : 20;            /**< \brief \internal Reserved */
} Ifx_SCU_TRAPDIS1_Bits;

/** \\brief  Trap Set Register */
typedef struct _Ifx_SCU_TRAPSET_Bits
{
    unsigned int ESR0T : 1;                   /**< \brief [0:0] Set Trap Request Flag ESR0T (w) */
    unsigned int ESR1T : 1;                   /**< \brief [1:1] Set Trap Request Flag ESR1T (w) */
    unsigned int TRAP2 : 1;                   /**< \brief [2:2] Set Trap Request Flag TRAP2 (w) */
    unsigned int SMUT : 1;                    /**< \brief [3:3] Set Trap Request Flag SMUT (w) */
    unsigned int reserved_4 : 28;             /**< \brief \internal Reserved */
} Ifx_SCU_TRAPSET_Bits;

/** \\brief  Trap Status Register */
typedef struct _Ifx_SCU_TRAPSTAT_Bits
{
    unsigned int ESR0T : 1;                   /**< \brief [0:0] ESR0 Trap Request Flag (rh) */
    unsigned int ESR1T : 1;                   /**< \brief [1:1] ESR1 Trap Request Flag (rh) */
    unsigned int TRAP2 : 1;                   /**< \brief [2:2] Trap Bit 2 Request Flag (rh) */
    unsigned int SMUT : 1;                    /**< \brief [3:3] SMU Alarm Trap Request Flag (rh) */
    unsigned int reserved_4 : 28;             /**< \brief \internal Reserved */
} Ifx_SCU_TRAPSTAT_Bits;

/** \\brief  CPU WDT Control Register 0 */
typedef struct _Ifx_SCU_WDTCPU_CON0_Bits
{
    Ifx_Strict_32Bit ENDINIT : 1;                 /**< \brief [0:0] End-of-Initialization Control Bit (rwh) */
    Ifx_Strict_32Bit LCK : 1;                     /**< \brief [1:1] Lock Bit to Control Access to WDTxCON0 (rwh) */
    Ifx_Strict_32Bit PW : 14;                     /**< \brief [15:2] User-Definable Password Field for Access to WDTxCON0 (rwh) */
    Ifx_Strict_32Bit REL : 16;                    /**< \brief [31:16] Reload Value for the WDT (also Time Check Value) (rw) */
} Ifx_SCU_WDTCPU_CON0_Bits;

/** \\brief  CPU WDT Control Register 1 */
typedef struct _Ifx_SCU_WDTCPU_CON1_Bits
{
    unsigned int reserved_0 : 2;              /**< \brief \internal Reserved */
    unsigned int IR0 : 1;                     /**< \brief [2:2] Input Frequency Request Control (rw) */
    unsigned int DR : 1;                      /**< \brief [3:3] Disable Request Control Bit (rw) */
    unsigned int reserved_4 : 1;              /**< \brief \internal Reserved */
    unsigned int IR1 : 1;                     /**< \brief [5:5] Input Frequency Request Control (rw) */
    unsigned int UR : 1;                      /**< \brief [6:6] Unlock Restriction Request Control Bit (rw) */
    unsigned int PAR : 1;                     /**< \brief [7:7] Password Auto-sequence Request Bit (rw) */
    unsigned int TCR : 1;                     /**< \brief [8:8] Counter Check Request Bit (rw) */
    unsigned int TCTR : 7;                    /**< \brief [15:9] Timer Check Tolerance Request (rw) */
    unsigned int reserved_16 : 16;            /**< \brief \internal Reserved */
} Ifx_SCU_WDTCPU_CON1_Bits;

/** \\brief  CPU WDT Status Register */
typedef struct _Ifx_SCU_WDTCPU_SR_Bits
{
    unsigned int AE : 1;                      /**< \brief [0:0] Watchdog Access Error Status Flag (rh) */
    unsigned int OE : 1;                      /**< \brief [1:1] Watchdog Overflow Error Status Flag (rh) */
    unsigned int IS0 : 1;                     /**< \brief [2:2] Watchdog Input Clock Status (rh) */
    unsigned int DS : 1;                      /**< \brief [3:3] Watchdog Enable/Disable Status Flag (rh) */
    unsigned int TO : 1;                      /**< \brief [4:4] Watchdog Time-Out Mode Flag (rh) */
    unsigned int IS1 : 1;                     /**< \brief [5:5] Watchdog Input Clock Status (rh) */
    unsigned int US : 1;                      /**< \brief [6:6] SMU Unlock Restriction Status Flag (rh) */
    unsigned int PAS : 1;                     /**< \brief [7:7] Password Auto-sequence Status Flag (rh) */
    unsigned int TCS : 1;                     /**< \brief [8:8] Timer Check Status Flag (rh) */
    unsigned int TCT : 7;                     /**< \brief [15:9] Timer Check Tolerance (rh) */
    unsigned int TIM : 16;                    /**< \brief [31:16] Timer Value (rh) */
} Ifx_SCU_WDTCPU_SR_Bits;

/** \\brief  System WDT Control Register 0 */
typedef struct _Ifx_SCU_WDTS_CON0_Bits
{
    Ifx_Strict_32Bit ENDINIT : 1;                 /**< \brief [0:0] End-of-Initialization Control Bit (rwh) */
    Ifx_Strict_32Bit LCK : 1;                     /**< \brief [1:1] Lock Bit to Control Access to WDTxCON0 (rwh) */
    Ifx_Strict_32Bit PW : 14;                     /**< \brief [15:2] User-Definable Password Field for Access to WDTxCON0 (rwh) */
    Ifx_Strict_32Bit REL : 16;                    /**< \brief [31:16] Reload Value for the WDT (also Time Check Value) (rw) */
} Ifx_SCU_WDTS_CON0_Bits;

/** \\brief  System WDT Control Register 1 */
typedef struct _Ifx_SCU_WDTS_CON1_Bits
{
    unsigned int CLRIRF : 1;                  /**< \brief [0:0] Clear Internal Reset Flag (rwh) */
    unsigned int reserved_1 : 1;              /**< \brief \internal Reserved */
    unsigned int IR0 : 1;                     /**< \brief [2:2] Input Frequency Request Control (rw) */
    unsigned int DR : 1;                      /**< \brief [3:3] Disable Request Control Bit (rw) */
    unsigned int reserved_4 : 1;              /**< \brief \internal Reserved */
    unsigned int IR1 : 1;                     /**< \brief [5:5] Input Frequency Request Control (rw) */
    unsigned int UR : 1;                      /**< \brief [6:6] Unlock Restriction Request Control Bit (rw) */
    unsigned int PAR : 1;                     /**< \brief [7:7] Password Auto-sequence Request Bit (rw) */
    unsigned int TCR : 1;                     /**< \brief [8:8] Counter Check Request Bit (rw) */
    unsigned int TCTR : 7;                    /**< \brief [15:9] Timer Check Tolerance Request (rw) */
    unsigned int reserved_16 : 16;            /**< \brief \internal Reserved */
} Ifx_SCU_WDTS_CON1_Bits;

/** \\brief  System WDT Status Register */
typedef struct _Ifx_SCU_WDTS_SR_Bits
{
    unsigned int AE : 1;                      /**< \brief [0:0] Watchdog Access Error Status Flag (rh) */
    unsigned int OE : 1;                      /**< \brief [1:1] Watchdog Overflow Error Status Flag (rh) */
    unsigned int IS0 : 1;                     /**< \brief [2:2] Watchdog Input Clock Status (rh) */
    unsigned int DS : 1;                      /**< \brief [3:3] Watchdog Enable/Disable Status Flag (rh) */
    unsigned int TO : 1;                      /**< \brief [4:4] Watchdog Time-Out Mode Flag (rh) */
    unsigned int IS1 : 1;                     /**< \brief [5:5] Watchdog Input Clock Status (rh) */
    unsigned int US : 1;                      /**< \brief [6:6] SMU Unlock Restriction Status Flag (rh) */
    unsigned int PAS : 1;                     /**< \brief [7:7] Password Auto-sequence Status Flag (rh) */
    unsigned int TCS : 1;                     /**< \brief [8:8] Timer Check Status Flag (rh) */
    unsigned int TCT : 7;                     /**< \brief [15:9] Timer Check Tolerance (rh) */
    unsigned int TIM : 16;                    /**< \brief [31:16] Timer Value (rh) */
} Ifx_SCU_WDTS_SR_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Scu_union
 * \{  */

/** \\brief  Access Enable Register 00 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_ACCEN00_Bits B;
} Ifx_SCU_ACCEN00;

/** \\brief  Access Enable Register 01 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_ACCEN01_Bits B;
} Ifx_SCU_ACCEN01;

/** \\brief  Access Enable Register 10 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_ACCEN10_Bits B;
} Ifx_SCU_ACCEN10;

/** \\brief  Access Enable Register 11 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_ACCEN11_Bits B;
} Ifx_SCU_ACCEN11;

/** \\brief  Application Reset Disable Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_ARSTDIS_Bits B;
} Ifx_SCU_ARSTDIS;

/** \\brief  CCU Clock Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON0_Bits B;
} Ifx_SCU_CCUCON0;

/** \\brief  CCU Clock Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON1_Bits B;
} Ifx_SCU_CCUCON1;

/** \\brief  CCU Clock Control Register 10 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON10_Bits B;
} Ifx_SCU_CCUCON10;

/** \\brief  CCU Clock Control Register 11 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON11_Bits B;
} Ifx_SCU_CCUCON11;

/** \\brief  CCU Clock Control Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON2_Bits B;
} Ifx_SCU_CCUCON2;

/** \\brief  CCU Clock Control Register 6 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON6_Bits B;
} Ifx_SCU_CCUCON6;

/** \\brief  CCU Clock Control Register 7 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON7_Bits B;
} Ifx_SCU_CCUCON7;

/** \\brief  CCU Clock Control Register 8 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON8_Bits B;
} Ifx_SCU_CCUCON8;

/** \\brief  CCU Clock Control Register 9 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON9_Bits B;
} Ifx_SCU_CCUCON9;

/** \\brief  Chip Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_CHIPID_Bits B;
} Ifx_SCU_CHIPID;

/** \\brief  ENDINIT Global Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_EICON0_Bits B;
} Ifx_SCU_EICON0;

/** \\brief  ENDINIT Global Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_EICON1_Bits B;
} Ifx_SCU_EICON1;

/** \\brief  External Input Channel Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int      U;
    /** \brief Signed access */
    signed int        I;
    /** \brief Bitfield access */
    Ifx_SCU_EICR_Bits B;
} Ifx_SCU_EICR;

/** \\brief  External Input Filter Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_EIFILT_Bits B;
} Ifx_SCU_EIFILT;

/** \\brief  External Input Flag Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int      U;
    /** \brief Signed access */
    signed int        I;
    /** \brief Bitfield access */
    Ifx_SCU_EIFR_Bits B;
} Ifx_SCU_EIFR;

/** \\brief  ENDINIT Timeout Counter Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int      U;
    /** \brief Signed access */
    signed int        I;
    /** \brief Bitfield access */
    Ifx_SCU_EISR_Bits B;
} Ifx_SCU_EISR;

/** \\brief  Emergency Stop Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int      U;
    /** \brief Signed access */
    signed int        I;
    /** \brief Bitfield access */
    Ifx_SCU_EMSR_Bits B;
} Ifx_SCU_EMSR;

/** \\brief  ESR Input Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_ESRCFG_Bits B;
} Ifx_SCU_ESRCFG;

/** \\brief  ESR Output Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_ESROCFG_Bits B;
} Ifx_SCU_ESROCFG;

/** \\brief  External Clock Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_EXTCON_Bits B;
} Ifx_SCU_EXTCON;

/** \\brief  Fractional Divider Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_SCU_FDR_Bits B;
} Ifx_SCU_FDR;

/** \\brief  Flag Modification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_SCU_FMR_Bits B;
} Ifx_SCU_FMR;

/** \\brief  Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int    U;
    /** \brief Signed access */
    signed int      I;
    /** \brief Bitfield access */
    Ifx_SCU_ID_Bits B;
} Ifx_SCU_ID;

/** \\brief  Flag Gating Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int      U;
    /** \brief Signed access */
    signed int        I;
    /** \brief Bitfield access */
    Ifx_SCU_IGCR_Bits B;
} Ifx_SCU_IGCR;

/** \\brief  ESR Input Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int    U;
    /** \brief Signed access */
    signed int      I;
    /** \brief Bitfield access */
    Ifx_SCU_IN_Bits B;
} Ifx_SCU_IN;

/** \\brief  Input/Output Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int      U;
    /** \brief Signed access */
    signed int        I;
    /** \brief Bitfield access */
    Ifx_SCU_IOCR_Bits B;
} Ifx_SCU_IOCR;

/** \\brief  Logic BIST Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_LBISTCTRL0_Bits B;
} Ifx_SCU_LBISTCTRL0;

/** \\brief  Logic BIST Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_LBISTCTRL1_Bits B;
} Ifx_SCU_LBISTCTRL1;

/** \\brief  Logic BIST Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_LBISTCTRL2_Bits B;
} Ifx_SCU_LBISTCTRL2;

/** \\brief  Logic BIST Control 3 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_LBISTCTRL3_Bits B;
} Ifx_SCU_LBISTCTRL3;

/** \\brief  LCL CPU0 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_LCLCON0_Bits B;
} Ifx_SCU_LCLCON0;

/** \\brief  LCL CPU1 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_LCLCON1_Bits B;
} Ifx_SCU_LCLCON1;

/** \\brief  LCL Test Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_LCLTEST_Bits B;
} Ifx_SCU_LCLTEST;

/** \\brief  Manufacturer Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int       U;
    /** \brief Signed access */
    signed int         I;
    /** \brief Bitfield access */
    Ifx_SCU_MANID_Bits B;
} Ifx_SCU_MANID;

/** \\brief  Modulation Trim 1 Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_SCU_MODTRIMCON1_Bits B;
} Ifx_SCU_MODTRIMCON1;

/** \\brief  ESR Output Modification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_SCU_OMR_Bits B;
} Ifx_SCU_OMR;

/** \\brief  OSC Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_OSCCON_Bits B;
} Ifx_SCU_OSCCON;

/** \\brief  ESR Output Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_SCU_OUT_Bits B;
} Ifx_SCU_OUT;

/** \\brief  Overlay Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_OVCCON_Bits B;
} Ifx_SCU_OVCCON;

/** \\brief  Overlay Enable Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_SCU_OVCENABLE_Bits B;
} Ifx_SCU_OVCENABLE;

/** \\brief  Pad Disable Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int       U;
    /** \brief Signed access */
    signed int         I;
    /** \brief Bitfield access */
    Ifx_SCU_PDISC_Bits B;
} Ifx_SCU_PDISC;

/** \\brief  ESR Pad Driver Mode Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_SCU_PDR_Bits B;
} Ifx_SCU_PDR;

/** \\brief  Pattern Detection Result Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int      U;
    /** \brief Signed access */
    signed int        I;
    /** \brief Bitfield access */
    Ifx_SCU_PDRR_Bits B;
} Ifx_SCU_PDRR;

/** \\brief  Peripheral PLL Configuration 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_PERPLLCON0_Bits B;
} Ifx_SCU_PERPLLCON0;

/** \\brief  Peripheral PLL Configuration 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_PERPLLCON1_Bits B;
} Ifx_SCU_PERPLLCON1;

/** \\brief  Peripheral PLL Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_PERPLLSTAT_Bits B;
} Ifx_SCU_PERPLLSTAT;

/** \\brief  Power Management Control and Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int       U;
    /** \brief Signed access */
    signed int         I;
    /** \brief Bitfield access */
    Ifx_SCU_PMCSR_Bits B;
} Ifx_SCU_PMCSR;

/** \\brief  Power Management Status Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_PMSTAT0_Bits B;
} Ifx_SCU_PMSTAT0;

/** \\brief  Standby and Wake-up Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_PMSWCR1_Bits B;
} Ifx_SCU_PMSWCR1;

/** \\brief  Power Management Transition Control and Status Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_PMTRCSR0_Bits B;
} Ifx_SCU_PMTRCSR0;

/** \\brief  Power Management Transition Control and Status Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_PMTRCSR1_Bits B;
} Ifx_SCU_PMTRCSR1;

/** \\brief  Power Management Transition Control and Status Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_PMTRCSR2_Bits B;
} Ifx_SCU_PMTRCSR2;

/** \\brief  Power Management Transition Control and Status Register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_PMTRCSR3_Bits B;
} Ifx_SCU_PMTRCSR3;

/** \\brief  Reset Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_RSTCON_Bits B;
} Ifx_SCU_RSTCON;

/** \\brief  Additional Reset Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_RSTCON2_Bits B;
} Ifx_SCU_RSTCON2;

/** \\brief  Reset Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_RSTSTAT_Bits B;
} Ifx_SCU_RSTSTAT;

/** \\brief  Safety ENDINIT Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_SEICON0_Bits B;
} Ifx_SCU_SEICON0;

/** \\brief  Safety ENDINIT Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_SEICON1_Bits B;
} Ifx_SCU_SEICON1;

/** \\brief  Safety ENDINIT Timeout Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int       U;
    /** \brief Signed access */
    signed int         I;
    /** \brief Bitfield access */
    Ifx_SCU_SEISR_Bits B;
} Ifx_SCU_SEISR;

/** \\brief  Start-up Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_STSTAT_Bits B;
} Ifx_SCU_STSTAT;

/** \\brief  Software Reset Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_SWRSTCON_Bits B;
} Ifx_SCU_SWRSTCON;

/** \\brief  System Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_SCU_SYSCON_Bits B;
} Ifx_SCU_SYSCON;

/** \\brief  System PLL Configuration 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_SYSPLLCON0_Bits B;
} Ifx_SCU_SYSPLLCON0;

/** \\brief  System PLL Configuration 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_SYSPLLCON1_Bits B;
} Ifx_SCU_SYSPLLCON1;

/** \\brief  System PLL Configuration 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_SYSPLLCON2_Bits B;
} Ifx_SCU_SYSPLLCON2;

/** \\brief  System PLL Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int            U;
    /** \brief Signed access */
    signed int              I;
    /** \brief Bitfield access */
    Ifx_SCU_SYSPLLSTAT_Bits B;
} Ifx_SCU_SYSPLLSTAT;

/** \\brief  Trap Clear Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPCLR_Bits B;
} Ifx_SCU_TRAPCLR;

/** \\brief  Trap Disable Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPDIS0_Bits B;
} Ifx_SCU_TRAPDIS0;

/** \\brief  Trap Disable Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPDIS1_Bits B;
} Ifx_SCU_TRAPDIS1;

/** \\brief  Trap Set Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPSET_Bits B;
} Ifx_SCU_TRAPSET;

/** \\brief  Trap Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int          U;
    /** \brief Signed access */
    signed int            I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPSTAT_Bits B;
} Ifx_SCU_TRAPSTAT;

/** \\brief  CPU WDT Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTCPU_CON0_Bits B;
} Ifx_SCU_WDTCPU_CON0;

/** \\brief  CPU WDT Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTCPU_CON1_Bits B;
} Ifx_SCU_WDTCPU_CON1;

/** \\brief  CPU WDT Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTCPU_SR_Bits B;
} Ifx_SCU_WDTCPU_SR;

/** \\brief  System WDT Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTS_CON0_Bits B;
} Ifx_SCU_WDTS_CON0;

/** \\brief  System WDT Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int           U;
    /** \brief Signed access */
    signed int             I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTS_CON1_Bits B;
} Ifx_SCU_WDTS_CON1;

/** \\brief  System WDT Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int         U;
    /** \brief Signed access */
    signed int           I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTS_SR_Bits B;
} Ifx_SCU_WDTS_SR;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Scu_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \\brief  CPU watchdog */
typedef volatile struct _Ifx_SCU_WDTCPU
{
    Ifx_SCU_WDTCPU_CON0 CON0;               /**< \brief 0, CPU WDT Control Register 0 */
    Ifx_SCU_WDTCPU_CON1 CON1;               /**< \brief 4, CPU WDT Control Register 1 */
    Ifx_SCU_WDTCPU_SR   SR;                 /**< \brief 8, CPU WDT Status Register */
} Ifx_SCU_WDTCPU;

/** \\brief  Safety watchdog */
typedef volatile struct _Ifx_SCU_WDTS
{
    Ifx_SCU_WDTS_CON0 CON0;                 /**< \brief 0, System WDT Control Register 0 */
    Ifx_SCU_WDTS_CON1 CON1;                 /**< \brief 4, System WDT Control Register 1 */
    Ifx_SCU_WDTS_SR   SR;                   /**< \brief 8, System WDT Status Register */
} Ifx_SCU_WDTS;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Scu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  SCU object */
typedef volatile struct _Ifx_SCU
{
    unsigned char       reserved_0[8];      /**< \brief 0, \internal Reserved */
    Ifx_SCU_ID          ID;                 /**< \brief 8, Identification Register */
    unsigned char       reserved_C[4];      /**< \brief C, \internal Reserved */
    Ifx_SCU_OSCCON      OSCCON;             /**< \brief 10, OSC Control Register */
    Ifx_SCU_SYSPLLSTAT  SYSPLLSTAT;         /**< \brief 14, System PLL Status Register */
    Ifx_SCU_SYSPLLCON0  SYSPLLCON0;         /**< \brief 18, System PLL Configuration 0 Register */
    Ifx_SCU_SYSPLLCON1  SYSPLLCON1;         /**< \brief 1C, System PLL Configuration 1 Register */
    Ifx_SCU_SYSPLLCON2  SYSPLLCON2;         /**< \brief 20, System PLL Configuration 2 Register */
    Ifx_SCU_PERPLLSTAT  PERPLLSTAT;         /**< \brief 24, Peripheral PLL Status Register */
    Ifx_SCU_PERPLLCON0  PERPLLCON0;         /**< \brief 28, Peripheral PLL Configuration 0 Register */
    Ifx_SCU_PERPLLCON1  PERPLLCON1;         /**< \brief 2C, Peripheral PLL Configuration 1 Register */
    Ifx_SCU_CCUCON0     CCUCON0;            /**< \brief 30, CCU Clock Control Register 0 */
    Ifx_SCU_CCUCON1     CCUCON1;            /**< \brief 34, CCU Clock Control Register 1 */
    Ifx_SCU_FDR         FDR;                /**< \brief 38, Fractional Divider Register */
    Ifx_SCU_EXTCON      EXTCON;             /**< \brief 3C, External Clock Control Register */
    Ifx_SCU_CCUCON2     CCUCON2;            /**< \brief 40, CCU Clock Control Register 2 */
    unsigned char       reserved_44[4];     /**< \brief 44, \internal Reserved */
    unsigned char       reserved_48[4];     /**< \brief 48, \internal Reserved */
    unsigned char       reserved_4C[4];     /**< \brief 4C, \internal Reserved */
    Ifx_SCU_RSTSTAT     RSTSTAT;            /**< \brief 50, Reset Status Register */
    unsigned char       reserved_54[4];     /**< \brief 54, \internal Reserved */
    Ifx_SCU_RSTCON      RSTCON;             /**< \brief 58, Reset Configuration Register */
    Ifx_SCU_ARSTDIS     ARSTDIS;            /**< \brief 5C, Application Reset Disable Register */
    Ifx_SCU_SWRSTCON    SWRSTCON;           /**< \brief 60, Software Reset Configuration Register */
    Ifx_SCU_RSTCON2     RSTCON2;            /**< \brief 64, Additional Reset Control Register */
    unsigned char       reserved_68[8];     /**< \brief 68, \internal Reserved */
    Ifx_SCU_ESRCFG      ESRCFG[2];          /**< \brief 70, ESR Input Configuration Register */
    Ifx_SCU_ESROCFG     ESROCFG;            /**< \brief 78, ESR Output Configuration Register */
    Ifx_SCU_SYSCON      SYSCON;             /**< \brief 7C, System Control Register */
    Ifx_SCU_CCUCON6     CCUCON6;            /**< \brief 80, CCU Clock Control Register 6 */
    Ifx_SCU_CCUCON7     CCUCON7;            /**< \brief 84, CCU Clock Control Register 7 */
    Ifx_SCU_CCUCON8     CCUCON8;            /**< \brief 88, CCU Clock Control Register 8 */
    Ifx_SCU_CCUCON9     CCUCON9;            /**< \brief 8C, CCU Clock Control Register 9 */
    Ifx_SCU_CCUCON10    CCUCON10;           /**< \brief 90, CCU Clock Control Register 10 */
    Ifx_SCU_CCUCON11    CCUCON11;           /**< \brief 94, CCU Clock Control Register 11 */
    unsigned char       reserved_98[4];     /**< \brief 98, \internal Reserved */
    Ifx_SCU_PDR         PDR;                /**< \brief 9C, ESR Pad Driver Mode Register */
    Ifx_SCU_IOCR        IOCR;               /**< \brief A0, Input/Output Control Register */
    Ifx_SCU_OUT         OUT;                /**< \brief A4, ESR Output Register */
    Ifx_SCU_OMR         OMR;                /**< \brief A8, ESR Output Modification Register */
    Ifx_SCU_IN          IN;                 /**< \brief AC, ESR Input Register */
    unsigned char       reserved_B0[8];     /**< \brief B0, \internal Reserved */
    Ifx_SCU_MODTRIMCON1 MODTRIMCON1;        /**< \brief B8, Modulation Trim 1 Configuration Register */
    unsigned char       reserved_BC[4];     /**< \brief BC, \internal Reserved */
    Ifx_SCU_STSTAT      STSTAT;             /**< \brief C0, Start-up Status Register */
    unsigned char       reserved_C4[4];     /**< \brief C4, \internal Reserved */
    Ifx_SCU_PMCSR       PMCSR[6];           /**< \brief C8, Power Management Control and Status Register \note Array index shifted by 3. Example: defined register PMCSR[0]/PMCSR0 corresponds to user manual PMCSR3, ... */
    unsigned char       reserved_E0[4];     /**< \brief E0, \internal Reserved */
    Ifx_SCU_PMSTAT0     PMSTAT0;            /**< \brief E4, Power Management Status Register 0 */
    Ifx_SCU_PMSWCR1     PMSWCR1;            /**< \brief E8, Standby and Wake-up Control Register 1 */
    unsigned char       reserved_EC[16];    /**< \brief EC, \internal Reserved */
    Ifx_SCU_EMSR        EMSR;               /**< \brief FC, Emergency Stop Register */
    unsigned char       reserved_100[32];   /**< \brief 100, \internal Reserved */
    Ifx_SCU_TRAPDIS1    TRAPDIS1;           /**< \brief 120, Trap Disable Register 1 */
    Ifx_SCU_TRAPSTAT    TRAPSTAT;           /**< \brief 124, Trap Status Register */
    Ifx_SCU_TRAPSET     TRAPSET;            /**< \brief 128, Trap Set Register */
    Ifx_SCU_TRAPCLR     TRAPCLR;            /**< \brief 12C, Trap Clear Register */
    Ifx_SCU_TRAPDIS0    TRAPDIS0;           /**< \brief 130, Trap Disable Register 0 */
    Ifx_SCU_LCLCON0     LCLCON0;            /**< \brief 134, LCL CPU0 Control Register */
    Ifx_SCU_LCLCON1     LCLCON1;            /**< \brief 138, LCL CPU1 Control Register */
    Ifx_SCU_LCLTEST     LCLTEST;            /**< \brief 13C, LCL Test Register */
    Ifx_SCU_CHIPID      CHIPID;             /**< \brief 140, Chip Identification Register */
    Ifx_SCU_MANID       MANID;              /**< \brief 144, Manufacturer Identification Register */
    unsigned char       reserved_148[4];    /**< \brief 148, \internal Reserved */
    unsigned char       reserved_14C[12];   /**< \brief 14C, \internal Reserved */
    unsigned char       reserved_158[12];   /**< \brief 158, \internal Reserved */
    Ifx_SCU_LBISTCTRL0  LBISTCTRL0;         /**< \brief 164, Logic BIST Control 0 Register */
    Ifx_SCU_LBISTCTRL1  LBISTCTRL1;         /**< \brief 168, Logic BIST Control 1 Register */
    Ifx_SCU_LBISTCTRL2  LBISTCTRL2;         /**< \brief 16C, Logic BIST Control 2 Register */
    Ifx_SCU_LBISTCTRL3  LBISTCTRL3;         /**< \brief 170, Logic BIST Control 3 Register */
    unsigned char       reserved_174[12];   /**< \brief 174, \internal Reserved */
    unsigned char       reserved_180[12];   /**< \brief 180, \internal Reserved  */
    Ifx_SCU_PDISC       PDISC;              /**< \brief 18C, Pad Disable Control Register */
    unsigned char       reserved_190[4];    /**< \brief 190, \internal Reserved  */
    unsigned char       reserved_194[4];    /**< \brief 194, \internal Reserved */
    Ifx_SCU_PMTRCSR0    PMTRCSR0;           /**< \brief 198, Power Management Transition Control and Status Register 0 */
    Ifx_SCU_PMTRCSR1    PMTRCSR1;           /**< \brief 19C, Power Management Transition Control and Status Register 1 */
    Ifx_SCU_PMTRCSR2    PMTRCSR2;           /**< \brief 1A0, Power Management Transition Control and Status Register 2 */
    Ifx_SCU_PMTRCSR3    PMTRCSR3;           /**< \brief 1A4, Power Management Transition Control and Status Register 3 */
    unsigned char       reserved_1A8[16];   /**< \brief 1A8, \internal Reserved */
    unsigned char       reserved_1B8[40];   /**< \brief 1B8, \internal Reserved */
    Ifx_SCU_OVCENABLE   OVCENABLE;          /**< \brief 1E0, Overlay Enable Register */
    Ifx_SCU_OVCCON      OVCCON;             /**< \brief 1E4, Overlay Control Register */
    unsigned char       reserved_1E8[32];   /**< \brief 1E8, \internal Reserved */
    unsigned char       reserved_208[4];    /**< \brief 208, \internal Reserved */
    Ifx_SCU_EIFILT      EIFILT;             /**< \brief 20C, External Input Filter Register */
    Ifx_SCU_EICR        EICR[4];            /**< \brief 210, External Input Channel Register  */
    Ifx_SCU_EIFR        EIFR;               /**< \brief 220, External Input Flag Register */
    Ifx_SCU_FMR         FMR;                /**< \brief 224, Flag Modification Register */
    Ifx_SCU_PDRR        PDRR;               /**< \brief 228, Pattern Detection Result Register */
    Ifx_SCU_IGCR        IGCR[4];            /**< \brief 22C, Flag Gating Register  */
    unsigned char       reserved_23C[16];   /**< \brief 23C, \internal Reserved */
    Ifx_SCU_WDTCPU      WDTCPU[6];          /**< \brief 24C, CPU watchdogs */
    unsigned char       reserved_294[8];    /**< \brief 294, \internal Reserved */
    Ifx_SCU_EICON0      EICON0;             /**< \brief 29C, ENDINIT Global Control Register 0 */
    Ifx_SCU_EICON1      EICON1;             /**< \brief 2A0, ENDINIT Global Control Register 1 */
    Ifx_SCU_EISR        EISR;               /**< \brief 2A4, ENDINIT Timeout Counter Status Register */
    Ifx_SCU_WDTS        WDTS;               /**< \brief 2A8, Safety watchdog */
    Ifx_SCU_SEICON0     SEICON0;            /**< \brief 2B4, Safety ENDINIT Control Register 0 */
    Ifx_SCU_SEICON1     SEICON1;            /**< \brief 2B8, Safety ENDINIT Control Register 1 */
    Ifx_SCU_SEISR       SEISR;              /**< \brief 2BC, Safety ENDINIT Timeout Status Register */
    unsigned char       reserved_2C0[24];   /**< \brief 2C0, \internal Reserved  */
    unsigned char       reserved_2DC[276];  /**< \brief 2DC, \internal Reserved */
    Ifx_SCU_ACCEN11     ACCEN11;            /**< \brief 3F0, Access Enable Register 11 */
    Ifx_SCU_ACCEN10     ACCEN10;            /**< \brief 3F4, Access Enable Register 10 */
    Ifx_SCU_ACCEN01     ACCEN01;            /**< \brief 3F8, Access Enable Register 01 */
    Ifx_SCU_ACCEN00     ACCEN00;            /**< \brief 3FC, Access Enable Register 00 */
} Ifx_SCU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSCU_REGDEF_H */
