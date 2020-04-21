/**
 * \file IfxTram_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:06:07 GMT
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
 * \defgroup IfxLld_Tram_Registers TramRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Tram_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Tram_Registers
 * 
 * \defgroup IfxLld_Tram_Registers_union Register unions
 * \ingroup IfxLld_Tram_Registers
 * 
 * \defgroup IfxLld_Tram_Registers_struct Memory map
 * \ingroup IfxLld_Tram_Registers
 */
#ifndef IFXTRAM_REGDEF_H
#define IFXTRAM_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Tram_Bitfields
 * \{  */
/** \brief ${LMU_instance_name}Access Enable Register 0 */
typedef struct _Ifx_TRAM_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
} Ifx_TRAM_ACCEN0_Bits;

/** \brief ${LMU_instance_name}Access Enable Register 1 */
typedef struct _Ifx_TRAM_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_TRAM_ACCEN1_Bits;

/** \brief ${LMU_instance_name}Clock Control Register */
typedef struct _Ifx_TRAM_CLC_Bits
{
    Ifx_UReg_32Bit DISR:1;            /**< \brief [0:0] LMU_instance_nameDisable Request Bit - DISR (rw) */
    Ifx_UReg_32Bit DISS:1;            /**< \brief [1:1] LMU_instance_nameDisable Status Bit - DISS (rh) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_TRAM_CLC_Bits;

/** \brief ${LMU_instance_name}Memory Control Register */
typedef struct _Ifx_TRAM_MEMCON_Bits
{
    Ifx_UReg_32Bit reserved_0:2;      /**< \brief [1:0] \internal Reserved */
    Ifx_UReg_32Bit INTERR:1;          /**< \brief [2:2] Internal ECC Error - INTERR (rwh) */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit RMWERR:1;          /**< \brief [4:4] Internal Read Modify Write Error - RMWERR (rwh) */
    Ifx_UReg_32Bit reserved_5:1;      /**< \brief [5:5] \internal Reserved */
    Ifx_UReg_32Bit DATAERR:1;         /**< \brief [6:6] SRI Data Phase ECC Error - DATAERR (rwh) */
    Ifx_UReg_32Bit ADDERR:1;          /**< \brief [7:7] SRI Address Phase ECC Error - ADDERR (rwh) */
    Ifx_UReg_32Bit PMIC:1;            /**< \brief [8:8] Protection Bit for Memory Integrity Control Bit - PMIC (w) */
    Ifx_UReg_32Bit ERRDIS:1;          /**< \brief [9:9] ECC Error Disable - ERRDIS (rw) */
    Ifx_UReg_32Bit reserved_10:1;     /**< \brief [10:10] \internal Reserved */
    Ifx_UReg_32Bit reserved_11:1;     /**< \brief [11:11] \internal Reserved */
    Ifx_UReg_32Bit reserved_12:4;     /**< \brief [15:12] \internal Reserved */
    Ifx_UReg_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_TRAM_MEMCON_Bits;

/** \brief ${LMU_instance_name}Module ID Register */
typedef struct _Ifx_TRAM_MODID_Bits
{
    Ifx_UReg_32Bit ID_VALUE:32;       /**< \brief [31:0] Module Identification Value - ID_VALUE (r) */
} Ifx_TRAM_MODID_Bits;

/** \brief ${LMU_instance_name}Region Access Enable Register 0 */
typedef struct _Ifx_TRAM_RGNACCEN_RA_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
} Ifx_TRAM_RGNACCEN_RA_Bits;

/** \brief ${LMU_instance_name}Region Access Enable Register 1 */
typedef struct _Ifx_TRAM_RGNACCEN_RB_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_TRAM_RGNACCEN_RB_Bits;

/** \brief ${LMU_instance_name}Region Access Enable Register 0 */
typedef struct _Ifx_TRAM_RGN_ACCENA_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID ${n} - EN${n} (rw) */
} Ifx_TRAM_RGN_ACCENA_Bits;

/** \brief ${LMU_instance_name}Region Access Enable Register 1 */
typedef struct _Ifx_TRAM_RGN_ACCENB_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_TRAM_RGN_ACCENB_Bits;

/** \brief ${LMU_instance_name}Region Lower Address Register */
typedef struct _Ifx_TRAM_RGN_LA_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit ADDR:23;           /**< \brief [27:5] Region Lower Address - ADDR (rw) */
    Ifx_UReg_32Bit reserved_28:4;     /**< \brief [31:28] \internal Reserved */
} Ifx_TRAM_RGN_LA_Bits;

/** \brief ${LMU_instance_name}Region Upper Address Register */
typedef struct _Ifx_TRAM_RGN_UA_Bits
{
    Ifx_UReg_32Bit reserved_0:5;      /**< \brief [4:0] \internal Reserved */
    Ifx_UReg_32Bit ADDR:24;           /**< \brief [28:5] Region Lower Address - ADDR (rw) */
    Ifx_UReg_32Bit reserved_29:3;     /**< \brief [31:29] \internal Reserved */
} Ifx_TRAM_RGN_UA_Bits;

/** \brief ${LMU_instance_name}Safety Control Register */
typedef struct _Ifx_TRAM_SCTRL_Bits
{
    Ifx_UReg_32Bit GED:1;             /**< \brief [0:0] Generate Error in ECC for Data Protection - GED (w) */
    Ifx_UReg_32Bit GEC:1;             /**< \brief [1:1] Generate Error in ECC for Error Correction - GEC (w) */
    Ifx_UReg_32Bit reserved_2:30;     /**< \brief [31:2] \internal Reserved */
} Ifx_TRAM_SCTRL_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_tram_union
 * \{   */
/** \brief ${LMU_instance_name}Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_TRAM_ACCEN0;

/** \brief ${LMU_instance_name}Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_TRAM_ACCEN1;

/** \brief ${LMU_instance_name}Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_TRAM_CLC;

/** \brief ${LMU_instance_name}Memory Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_MEMCON_Bits B;           /**< \brief Bitfield access */
} Ifx_TRAM_MEMCON;

/** \brief ${LMU_instance_name}Module ID Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_MODID_Bits B;            /**< \brief Bitfield access */
} Ifx_TRAM_MODID;

/** \brief ${LMU_instance_name}Region Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_RGNACCEN_RA_Bits B;      /**< \brief Bitfield access */
} Ifx_TRAM_RGNACCEN_RA;

/** \brief ${LMU_instance_name}Region Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_RGNACCEN_RB_Bits B;      /**< \brief Bitfield access */
} Ifx_TRAM_RGNACCEN_RB;

/** \brief ${LMU_instance_name}Region Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_RGN_ACCENA_Bits B;       /**< \brief Bitfield access */
} Ifx_TRAM_RGN_ACCENA;

/** \brief ${LMU_instance_name}Region Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_RGN_ACCENB_Bits B;       /**< \brief Bitfield access */
} Ifx_TRAM_RGN_ACCENB;

/** \brief ${LMU_instance_name}Region Lower Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_RGN_LA_Bits B;           /**< \brief Bitfield access */
} Ifx_TRAM_RGN_LA;

/** \brief ${LMU_instance_name}Region Upper Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_RGN_UA_Bits B;           /**< \brief Bitfield access */
} Ifx_TRAM_RGN_UA;

/** \brief ${LMU_instance_name}Safety Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_TRAM_SCTRL_Bits B;            /**< \brief Bitfield access */
} Ifx_TRAM_SCTRL;

/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Tram_RGN_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */
/** \brief RGN object */
typedef volatile struct _Ifx_TRAM_RGN
{
       Ifx_TRAM_RGN_LA                     LA;                     /**< \brief 0, ${LMU_instance_name}Region Lower Address Register*/
       Ifx_TRAM_RGN_UA                     UA;                     /**< \brief 4, ${LMU_instance_name}Region Upper Address Register*/
       Ifx_TRAM_RGN_ACCENA                 ACCENA;                 /**< \brief 8, ${LMU_instance_name}Region Access Enable Register 0*/
       Ifx_TRAM_RGN_ACCENB                 ACCENB;                 /**< \brief C, ${LMU_instance_name}Region Access Enable Register 1*/
} Ifx_TRAM_RGN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Tram_RGNACCEN_struct
 * \{  */
/******************************************************************************/
/** \name Object L2
 * \{  */
/** \brief RGNACCEN object */
typedef volatile struct _Ifx_TRAM_RGNACCEN
{
       Ifx_UReg_8Bit                       reserved_8[8];          /**< \brief 0, \internal Reserved */
       Ifx_TRAM_RGNACCEN_RA                RA;                     /**< \brief 8, ${LMU_instance_name}Region Access Enable Register 0*/
       Ifx_TRAM_RGNACCEN_RB                RB;                     /**< \brief c, ${LMU_instance_name}Region Access Enable Register 1*/
} Ifx_TRAM_RGNACCEN;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/** \addtogroup IfxLld_Tram_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief TRAM object */
typedef volatile struct _Ifx_TRAM
{
       Ifx_TRAM_CLC                        CLC;                    /**< \brief 0, ${LMU_instance_name}Clock Control Register*/
       Ifx_UReg_8Bit                       reserved_4[4];          /**< \brief 4, \internal Reserved */
       Ifx_TRAM_MODID                      MODID;                  /**< \brief 8, ${LMU_instance_name}Module ID Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_TRAM_ACCEN0                     ACCEN0;                 /**< \brief 10, ${LMU_instance_name}Access Enable Register 0*/
       Ifx_TRAM_ACCEN1                     ACCEN1;                 /**< \brief 14, ${LMU_instance_name}Access Enable Register 1*/
       Ifx_UReg_8Bit                       reserved_18[8];         /**< \brief 18, \internal Reserved */
       Ifx_TRAM_MEMCON                     MEMCON;                 /**< \brief 20, ${LMU_instance_name}Memory Control Register*/
       Ifx_TRAM_SCTRL                      SCTRL;                  /**< \brief 24, ${LMU_instance_name}Safety Control Register*/
       Ifx_UReg_8Bit                       reserved_28[40];        /**< \brief 28, \internal Reserved */
       Ifx_TRAM_RGN                        RGN[8];                 /**< \brief 50, ${LMU_instance_name}Region Access Enable Register 1*/
       Ifx_TRAM_RGNACCEN                   RGNACCEN[8];            /**< \brief D0, */
       Ifx_UReg_8Bit                       reserved_150[32432];    /**< \brief 150, \internal Reserved */
} Ifx_TRAM;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXTRAM_REGDEF_H */
