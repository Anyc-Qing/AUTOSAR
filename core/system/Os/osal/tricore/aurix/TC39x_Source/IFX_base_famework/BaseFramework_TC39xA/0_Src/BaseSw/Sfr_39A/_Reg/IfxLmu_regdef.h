/**
 * \file IfxLmu_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: lmu_aurixplus_its_MCSFR.xml dated 29.04.2015
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
 * \defgroup IfxLld_Lmu Lmu
 * \ingroup IfxLld
 *
 * \defgroup IfxLld_Lmu_Bitfields Bitfields
 * \ingroup IfxLld_Lmu
 *
 * \defgroup IfxLld_Lmu_union Union
 * \ingroup IfxLld_Lmu
 *
 * \defgroup IfxLld_Lmu_struct Struct
 * \ingroup IfxLld_Lmu
 *
 */
#ifndef IFXLMU_REGDEF_H
#define IFXLMU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Bitfields
 * \{  */

/** \\brief  LMUAccess Enable Register 0 */
typedef struct _Ifx_LMU_ACCEN0_Bits
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
} Ifx_LMU_ACCEN0_Bits;

/** \\brief  LMUAccess Enable Register 1 */
typedef struct _Ifx_LMU_ACCEN1_Bits
{
    Ifx_Strict_32Bit reserved_0 : 32;         /**< \brief \internal Reserved */
} Ifx_LMU_ACCEN1_Bits;

/** \\brief  LMUClock Control Register */
typedef struct _Ifx_LMU_CLC_Bits
{
    Ifx_Strict_32Bit DISR : 1;                /**< \brief [0:0] Mod_Name_CustomerDisable Request Bit (rw) */
    Ifx_Strict_32Bit DISS : 1;                /**< \brief [1:1] Mod_Name_CustomerDisable Status Bit (rh) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_LMU_CLC_Bits;

/** \\brief  LMUMemory Control Register */
typedef struct _Ifx_LMU_MEMCON_Bits
{
    Ifx_Strict_32Bit reserved_0 : 2;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit INTERR : 1;              /**< \brief [2:2] Internal ECC Error (rwh) */
    Ifx_Strict_32Bit reserved_3 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit RMWERR : 1;              /**< \brief [4:4] Internal Read Modify Write Error (rwh) */
    Ifx_Strict_32Bit reserved_5 : 1;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit DATAERR : 1;             /**< \brief [6:6] SRI Data Phase ECC Error (rwh) */
    Ifx_Strict_32Bit ADDERR : 1;              /**< \brief [7:7] SRI Address Phase ECC Error (rwh) */
    Ifx_Strict_32Bit PMIC : 1;                /**< \brief [8:8] Protection Bit for Memory Integrity Control Bit (w) */
    Ifx_Strict_32Bit ERRDIS : 1;              /**< \brief [9:9] ECC Error Disable (rw) */
    Ifx_Strict_32Bit reserved_10 : 22;        /**< \brief \internal Reserved */
} Ifx_LMU_MEMCON_Bits;

/** \\brief  LMUModule ID Register */
typedef struct _Ifx_LMU_MODID_Bits
{
    Ifx_Strict_32Bit ID_VALUE : 32;           /**< \brief [31:0] Module Identification Value (r) */
} Ifx_LMU_MODID_Bits;

/** \\brief  LMURegion Access Enable Register */
typedef struct _Ifx_LMU_RGN_ACCENWA_Bits
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
} Ifx_LMU_RGN_ACCENWA_Bits;

/** \\brief  LMURegion Access Enable Register */
typedef struct _Ifx_LMU_RGN_ACCENWB_Bits
{
    Ifx_Strict_32Bit reserved_0 : 32;         /**< \brief \internal Reserved */
} Ifx_LMU_RGN_ACCENWB_Bits;

/** \\brief  LMURegion Lower Address Register */
typedef struct _Ifx_LMU_RGN_LA_Bits
{
    Ifx_Strict_32Bit reserved_0 : 5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ADDR : 23;               /**< \brief [27:5] Region Lower Address (rw) */
    Ifx_Strict_32Bit reserved_28 : 4;         /**< \brief \internal Reserved */
} Ifx_LMU_RGN_LA_Bits;

/** \\brief  LMURegion Upper Address Register */
typedef struct _Ifx_LMU_RGN_UA_Bits
{
    Ifx_Strict_32Bit reserved_0 : 5;          /**< \brief \internal Reserved */
    Ifx_Strict_32Bit ADDR : 24;               /**< \brief [28:5] Region Lower Address (rw) */
    Ifx_Strict_32Bit reserved_29 : 3;         /**< \brief \internal Reserved */
} Ifx_LMU_RGN_UA_Bits;

/** \\brief  LMURegion Access Enable Register 0 */
typedef struct _Ifx_LMU_RGNACCEN_RA_Bits
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
} Ifx_LMU_RGNACCEN_RA_Bits;

/** \\brief  LMURegion Access Enable Register 1 */
typedef struct _Ifx_LMU_RGNACCEN_RB_Bits
{
    Ifx_Strict_32Bit reserved_0 : 32;         /**< \brief \internal Reserved */
} Ifx_LMU_RGNACCEN_RB_Bits;

/** \\brief  LMUSafety Control Register */
typedef struct _Ifx_LMU_SCTRL_Bits
{
    Ifx_Strict_32Bit GED : 1;                 /**< \brief [0:0] Generate Error in ECC for Data Protection (w) */
    Ifx_Strict_32Bit GEC : 1;                 /**< \brief [1:1] Generate Error in ECC for Error Correction (w) */
    Ifx_Strict_32Bit reserved_2 : 30;         /**< \brief \internal Reserved */
} Ifx_LMU_SCTRL_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_union
 * \{  */

/** \\brief  LMUAccess Enable Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_LMU_ACCEN0_Bits B;
} Ifx_LMU_ACCEN0;

/** \\brief  LMUAccess Enable Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_LMU_ACCEN1_Bits B;
} Ifx_LMU_ACCEN1;

/** \\brief  LMUClock Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int     U;
    /** \brief Signed access */
    signed int       I;
    /** \brief Bitfield access */
    Ifx_LMU_CLC_Bits B;
} Ifx_LMU_CLC;

/** \\brief  LMUMemory Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_LMU_MEMCON_Bits B;
} Ifx_LMU_MEMCON;

/** \\brief  LMUModule ID Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int       U;
    /** \brief Signed access */
    signed int         I;
    /** \brief Bitfield access */
    Ifx_LMU_MODID_Bits B;
} Ifx_LMU_MODID;

/** \\brief  LMURegion Write Access Enable Register A */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_LMU_RGN_ACCENWA_Bits B;
} Ifx_LMU_RGN_ACCENWA;

/** \\brief  LMURegion Write Access Enable Register B*/
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_LMU_RGN_ACCENWB_Bits B;
} Ifx_LMU_RGN_ACCENWB;

/** \\brief  LMURegion Lower Address Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_LMU_RGN_LA_Bits B;
} Ifx_LMU_RGN_LA;

/** \\brief  LMURegion Upper Address Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int        U;
    /** \brief Signed access */
    signed int          I;
    /** \brief Bitfield access */
    Ifx_LMU_RGN_UA_Bits B;
} Ifx_LMU_RGN_UA;

/** \\brief  LMURegion Read Access Enable Register A */
typedef union
{
    /** \brief Unsigned access */
    unsigned int             U;
    /** \brief Signed access */
    signed int               I;
    /** \brief Bitfield access */
    Ifx_LMU_RGNACCEN_RA_Bits B;
} Ifx_LMU_RGNACCEN_RA;

/** \\brief  LMURegion Read Access Enable Register B */
typedef union
{
    /** \brief Unsigned access */
    unsigned int              U;
    /** \brief Signed access */
    signed int                I;
    /** \brief Bitfield access */
    Ifx_LMU_RGNACCEN_RB_Bits B;
} Ifx_LMU_RGNACCEN_RB;

/** \\brief  LMUSafety Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int       U;
    /** \brief Signed access */
    signed int         I;
    /** \brief Bitfield access */
    Ifx_LMU_SCTRL_Bits B;
} Ifx_LMU_SCTRL;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \\brief  Region objects */
typedef volatile struct _Ifx_LMU_RGN
{
    Ifx_LMU_RGN_LA      LA;                 /**< \brief 0, LMURegion Lower Address Register */
    Ifx_LMU_RGN_UA      UA;                 /**< \brief 4, LMURegion Upper Address Register */
    Ifx_LMU_RGN_ACCENWA ACCENWA;            /**< \brief 8, LMURegion Write Access Enable Register A */
    Ifx_LMU_RGN_ACCENWB ACCENWB;            /**< \brief C, LMURegion Write Access Enable Register B */
} Ifx_LMU_RGN;

/** \\brief  Region objects */
typedef volatile struct _Ifx_LMU_RGNACCEN
{
    unsigned char       reserved_0[8];      /**< \brief 0, \internal Reserved */
    Ifx_LMU_RGNACCEN_RA RA;                 /**< \brief 8, LMURegion Read Access Enable Register A */
    Ifx_LMU_RGNACCEN_RB RB;                 /**< \brief C, LMURegion Read Access Enable Register B */
} Ifx_LMU_RGNACCEN;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  LMU object */
typedef volatile struct _Ifx_LMU
{
    Ifx_LMU_CLC          CLC;                 /**< \brief 0, LMUClock Control Register */
    unsigned char        reserved_4[4];       /**< \brief 4, \internal Reserved */
    Ifx_LMU_MODID        MODID;               /**< \brief 8, LMUModule ID Register */
    unsigned char        reserved_C[4];       /**< \brief C, \internal Reserved */
    Ifx_LMU_ACCEN0       ACCEN0;              /**< \brief 10, LMUAccess Enable Register 0 */
    Ifx_LMU_ACCEN1       ACCEN1;              /**< \brief 14, LMUAccess Enable Register 1 */
    unsigned char        reserved_18[8];      /**< \brief 18, \internal Reserved */
    Ifx_LMU_MEMCON       MEMCON;              /**< \brief 20, LMUMemory Control Register */
    Ifx_LMU_SCTRL        SCTRL;               /**< \brief 24, LMUSafety Control Register */
    unsigned char        reserved_28[40];     /**< \brief 28, \internal Reserved */
    Ifx_LMU_RGN          RGN[8];              /**< \brief 50, Region objects */
    Ifx_LMU_RGNACCEN     RGNACCEN[8];         /**< \brief D0, LMURegion Access Enable Register 0 */
    unsigned char        reserved_150[65200]; /**< \brief 150, \internal Reserved */
} Ifx_LMU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXLMU_REGDEF_H */
