/**
 * \file IfxInt_regdef.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: TC39xA_INT_ITS_MCSFR.xml
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
 * \defgroup IfxLld_Int Int
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Int_Bitfields Bitfields
 * \ingroup IfxLld_Int
 * 
 * \defgroup IfxLld_Int_union Union
 * \ingroup IfxLld_Int
 * 
 * \defgroup IfxLld_Int_struct Struct
 * \ingroup IfxLld_Int
 * 
 */
#ifndef IFXINT_REGDEF_H
#define IFXINT_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Int_Bitfields
 * \{  */

/** \brief  Access Enable CONFIG, Register 0 */
typedef struct _Ifx_INT_ACCEN_CONFIG0_Bits
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
} Ifx_INT_ACCEN_CONFIG0_Bits;

/** \brief  Access Enable CONFIG, Register 1 */
typedef struct _Ifx_INT_ACCEN_CONFIG1_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_CONFIG1_Bits;

/** \brief  Access Enable SRB0, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRB00_Bits
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
} Ifx_INT_ACCEN_SRB00_Bits;

/** \brief  Access Enable SRB0, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRB01_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRB01_Bits;

/** \brief  Access Enable SRB1, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRB10_Bits
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
} Ifx_INT_ACCEN_SRB10_Bits;

/** \brief  Access Enable SRB1, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRB11_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRB11_Bits;

/** \brief  Access Enable SRB2, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRB20_Bits
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
} Ifx_INT_ACCEN_SRB20_Bits;

/** \brief  Access Enable SRB2, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRB21_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRB21_Bits;

/** \brief  Access Enable SRB3, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRB30_Bits
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
} Ifx_INT_ACCEN_SRB30_Bits;

/** \brief  Access Enable SRB3, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRB31_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRB31_Bits;

/** \brief  Access Enable SRB4, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRB40_Bits
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
} Ifx_INT_ACCEN_SRB40_Bits;

/** \brief  Access Enable SRB4, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRB41_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRB41_Bits;

/** \brief  Access Enable SRB5, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRB50_Bits
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
} Ifx_INT_ACCEN_SRB50_Bits;

/** \brief  Access Enable SRB5, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRB51_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRB51_Bits;

/** \brief  Access Enable SRC[31:16] TOS0, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS00_Bits
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
} Ifx_INT_ACCEN_SRC_TOS00_Bits;

/** \brief  Access Enable SRC[15:0] TOS0, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS01_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS01_Bits;

/** \brief  Access Enable SRC[31:16] TOS1, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS10_Bits
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
} Ifx_INT_ACCEN_SRC_TOS10_Bits;

/** \brief  Access Enable SRC[15:0] TOS1, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS11_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS11_Bits;

/** \brief  Access Enable SRC[31:16] TOS2, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS20_Bits
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
} Ifx_INT_ACCEN_SRC_TOS20_Bits;

/** \brief  Access Enable SRC[15:0] TOS2, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS21_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS21_Bits;

/** \brief  Access Enable SRC[31:16] TOS3, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS30_Bits
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
} Ifx_INT_ACCEN_SRC_TOS30_Bits;

/** \brief  Access Enable SRC[15:0] TOS3, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS31_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS31_Bits;

/** \brief  Access Enable SRC[31:16] TOS4, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS40_Bits
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
} Ifx_INT_ACCEN_SRC_TOS40_Bits;

/** \brief  Access Enable SRC[15:0] TOS4, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS41_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS41_Bits;

/** \brief  Access Enable SRC[31:16] TOS5, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS50_Bits
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
} Ifx_INT_ACCEN_SRC_TOS50_Bits;

/** \brief  Access Enable SRC[15:0] TOS5, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS51_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS51_Bits;

/** \brief  Access Enable SRC[31:16] TOS6, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS60_Bits
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
} Ifx_INT_ACCEN_SRC_TOS60_Bits;

/** \brief  Access Enable SRC[15:0] TOS6, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS61_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS61_Bits;

/** \brief  Access Enable SRC[31:16] TOS7, Register 0 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS70_Bits
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
} Ifx_INT_ACCEN_SRC_TOS70_Bits;

/** \brief  Access Enable SRC[15:0] TOS7, Register 1 */
typedef struct _Ifx_INT_ACCEN_SRC_TOS71_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_INT_ACCEN_SRC_TOS71_Bits;

/** \brief  Error Capture Register */
typedef struct _Ifx_INT_ICU_ECR_Bits
{
    unsigned int PN:8;                      /**< \brief [7:0] Service Request Priority Number (rwh) */
    unsigned int reserved_8:2;              /**< \brief \internal Reserved */
    unsigned int ECC:5;                     /**< \brief [14:10] Service Request ECC (rwh) */
    unsigned int reserved_15:1;             /**< \brief \internal Reserved */
    unsigned int ID:10;                     /**< \brief [25:16] Service Request Node Index Number (rwh) */
    unsigned int reserved_26:4;             /**< \brief \internal Reserved */
    unsigned int EOV:1;                     /**< \brief [30:30] Error Overflow Bit (rwh) */
    unsigned int STAT:1;                    /**< \brief [31:31] Error Status Bit (rwh) */
} Ifx_INT_ICU_ECR_Bits;

/** \brief  Last Acknowledged Service Request Register */
typedef struct _Ifx_INT_ICU_LASR_Bits
{
    unsigned int PN:8;                      /**< \brief [7:0] Last Acknowledged Service Request Priority Number (r) */
    unsigned int reserved_8:2;              /**< \brief \internal Reserved */
    unsigned int ECC:5;                     /**< \brief [14:10] Last Acknowledged Interrupt ECC (r) */
    unsigned int reserved_15:1;             /**< \brief \internal Reserved */
    unsigned int ID:10;                     /**< \brief [25:16] Last Acknowledged Interrupt SRN Index Number (r) */
    unsigned int reserved_26:6;             /**< \brief \internal Reserved */
} Ifx_INT_ICU_LASR_Bits;

/** \brief  Latest Winning Service Request Register */
typedef struct _Ifx_INT_ICU_LWSR_Bits
{
    unsigned int PN:8;                      /**< \brief [7:0] Latest Winner Priority Number (r) */
    unsigned int reserved_8:2;              /**< \brief \internal Reserved */
    unsigned int ECC:5;                     /**< \brief [14:10] Latest Winner ECC (r) */
    unsigned int reserved_15:1;             /**< \brief \internal Reserved */
    unsigned int ID:10;                     /**< \brief [25:16] Latest Winner Index Number (r) */
    unsigned int reserved_26:5;             /**< \brief \internal Reserved */
    unsigned int STAT:1;                    /**< \brief [31:31] LWSR Register Status (r) */
} Ifx_INT_ICU_LWSR_Bits;

/** \brief  Module Identification Register */
typedef struct _Ifx_INT_ID_Bits
{
    unsigned int MOD_REV:8;                 /**< \brief [7:0] Module Revision Number (r) */
    unsigned int MOD_TYPE:8;                /**< \brief [15:8] Module Type (r) */
    unsigned int MOD_NUMBER:16;             /**< \brief [31:16] Module Number Value (r) */
} Ifx_INT_ID_Bits;

/** \brief  OTGM IRQ Trace */
typedef struct _Ifx_INT_OIT_Bits
{
    unsigned int TOS0:3;                    /**< \brief [2:0] Type of Service for Observation on OTGB0 (rw) */
    unsigned int reserved_3:4;              /**< \brief \internal Reserved */
    unsigned int OE0:1;                     /**< \brief [7:7] Output Enable for OTGB0 (rw) */
    unsigned int TOS1:3;                    /**< \brief [10:8] Type of Service for Observation on OTGB1 (rw) */
    unsigned int reserved_11:4;             /**< \brief \internal Reserved */
    unsigned int OE1:1;                     /**< \brief [15:15] Output Enable for OTGB1 (rw) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_INT_OIT_Bits;

/** \brief  OTGM IRQ MUX Missed IRQ Select */
typedef struct _Ifx_INT_OIXMS_Bits
{
    unsigned int MIRQ:10;                   /**< \brief [9:0] SRN Index for Missed Interrupt Trigger (rw) */
    unsigned int reserved_10:22;            /**< \brief \internal Reserved */
} Ifx_INT_OIXMS_Bits;

/** \brief  OTGM IRQ MUX Select 0 */
typedef struct _Ifx_INT_OIXS0_Bits
{
    unsigned int IRQ0:10;                   /**< \brief [9:0] SRN Index for Interrupt Trigger 0 (rw) */
    unsigned int reserved_10:6;             /**< \brief \internal Reserved */
    unsigned int IRQ1:10;                   /**< \brief [25:16] SRN Index for Interrupt Trigger 1 (rw) */
    unsigned int reserved_26:6;             /**< \brief \internal Reserved */
} Ifx_INT_OIXS0_Bits;

/** \brief  OTGM IRQ MUX Select 1 */
typedef struct _Ifx_INT_OIXS1_Bits
{
    unsigned int IRQ2:10;                   /**< \brief [9:0] SRN Index for Interrupt Trigger 2 (rw) */
    unsigned int reserved_10:6;             /**< \brief \internal Reserved */
    unsigned int IRQ3:10;                   /**< \brief [25:16] SRN Index for Interrupt Trigger 3 (rw) */
    unsigned int reserved_26:6;             /**< \brief \internal Reserved */
} Ifx_INT_OIXS1_Bits;

/** \brief  OTGM IRQ MUX Trigger Set Select */
typedef struct _Ifx_INT_OIXTS_Bits
{
    unsigned int TGS:2;                     /**< \brief [1:0] Trigger Set Select for OTGB0/1 Overlay (rw) */
    unsigned int reserved_2:6;              /**< \brief \internal Reserved */
    unsigned int OBS:2;                     /**< \brief [9:8] Overlay Byte Select (rw) */
    unsigned int reserved_10:22;            /**< \brief \internal Reserved */
} Ifx_INT_OIXTS_Bits;

/** \brief  OTGM MCDS I/F Sensitivity Negedge */
typedef struct _Ifx_INT_OMISN_Bits
{
    unsigned int OTGB0:16;                  /**< \brief [15:0] Bitwise Negedge Sensitivity for OTGB0 (rw) */
    unsigned int OTGB1:16;                  /**< \brief [31:16] Bitwise Negedge Sensitivity for OTGB1 (rw) */
} Ifx_INT_OMISN_Bits;

/** \brief  OTGM MCDS I/F Sensitivity Posedge */
typedef struct _Ifx_INT_OMISP_Bits
{
    unsigned int OTGB0:16;                  /**< \brief [15:0] Bitwise Posedge Sensitivity for OTGB0 (rw) */
    unsigned int OTGB1:16;                  /**< \brief [31:16] Bitwise Posedge Sensitivity for OTGB1 (rw) */
} Ifx_INT_OMISP_Bits;

/** \brief  OTGM OTGB0/1 Status */
typedef struct _Ifx_INT_OOBS_Bits
{
    unsigned int OTGB0:16;                  /**< \brief [15:0] Status of OTGB0 (rh) */
    unsigned int OTGB1:16;                  /**< \brief [31:16] Status of OTGB1 (rh) */
} Ifx_INT_OOBS_Bits;

/** \brief  OTGM SSI Control */
typedef struct _Ifx_INT_OSSIC_Bits
{
    unsigned int TGS:2;                     /**< \brief [1:0] Trigger Set for OTGB0/1 (rw) */
    unsigned int TGB:1;                     /**< \brief [2:2] OTGB0/1 Bus Select (rw) */
    unsigned int reserved_3:29;             /**< \brief \internal Reserved */
} Ifx_INT_OSSIC_Bits;

/** \brief  Service Request Broadcast Register */
typedef struct _Ifx_INT_SRB_Bits
{
    unsigned int TRIG0:1;                   /**< \brief [0:0] General Purpose Service Request Trigger 0 (w) */
    unsigned int TRIG1:1;                   /**< \brief [1:1] General Purpose Service Request Trigger 1 (w) */
    unsigned int TRIG2:1;                   /**< \brief [2:2] General Purpose Service Request Trigger 2 (w) */
    unsigned int TRIG3:1;                   /**< \brief [3:3] General Purpose Service Request Trigger 3 (w) */
    unsigned int TRIG4:1;                   /**< \brief [4:4] General Purpose Service Request Trigger 4 (w) */
    unsigned int TRIG5:1;                   /**< \brief [5:5] General Purpose Service Request Trigger 5 (w) */
    unsigned int TRIG6:1;                   /**< \brief [6:6] General Purpose Service Request Trigger 6 (w) */
    unsigned int TRIG7:1;                   /**< \brief [7:7] General Purpose Service Request Trigger 7 (w) */
    unsigned int reserved_8:24;             /**< \brief \internal Reserved */
} Ifx_INT_SRB_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Int_union
 * \{  */

/** \brief  Access Enable CONFIG, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_CONFIG0_Bits B;           /**< \brief Bitfield access */
} Ifx_INT_ACCEN_CONFIG0;

/** \brief  Access Enable CONFIG, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_CONFIG1_Bits B;           /**< \brief Bitfield access */
} Ifx_INT_ACCEN_CONFIG1;

/** \brief  Access Enable SRB0, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB00_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB00;

/** \brief  Access Enable SRB0, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB01_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB01;

/** \brief  Access Enable SRB1, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB10_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB10;

/** \brief  Access Enable SRB1, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB11_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB11;

/** \brief  Access Enable SRB2, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB20_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB20;

/** \brief  Access Enable SRB2, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB21_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB21;

/** \brief  Access Enable SRB3, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB30_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB30;

/** \brief  Access Enable SRB3, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB31_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB31;

/** \brief  Access Enable SRB4, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB40_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB40;

/** \brief  Access Enable SRB4, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB41_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB41;

/** \brief  Access Enable SRB5, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB50_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB50;

/** \brief  Access Enable SRB5, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRB51_Bits B;             /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRB51;

/** \brief  Access Enable SRC[31:16] TOS0, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS00_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS00;

/** \brief  Access Enable SRC[15:0] TOS0, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS01_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS01;

/** \brief  Access Enable SRC[31:16] TOS1, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS10_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS10;

/** \brief  Access Enable SRC[15:0] TOS1, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS11_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS11;

/** \brief  Access Enable SRC[31:16] TOS2, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS20_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS20;

/** \brief  Access Enable SRC[15:0] TOS2, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS21_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS21;

/** \brief  Access Enable SRC[31:16] TOS3, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS30_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS30;

/** \brief  Access Enable SRC[15:0] TOS3, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS31_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS31;

/** \brief  Access Enable SRC[31:16] TOS4, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS40_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS40;

/** \brief  Access Enable SRC[15:0] TOS4, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS41_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS41;

/** \brief  Access Enable SRC[31:16] TOS5, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS50_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS50;

/** \brief  Access Enable SRC[15:0] TOS5, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS51_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS51;

/** \brief  Access Enable SRC[31:16] TOS6, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS60_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS60;

/** \brief  Access Enable SRC[15:0] TOS6, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS61_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS61;

/** \brief  Access Enable SRC[31:16] TOS7, Register 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS70_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS70;

/** \brief  Access Enable SRC[15:0] TOS7, Register 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ACCEN_SRC_TOS71_Bits B;         /**< \brief Bitfield access */
} Ifx_INT_ACCEN_SRC_TOS71;

/** \brief  Error Capture Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ICU_ECR_Bits B;                 /**< \brief Bitfield access */
} Ifx_INT_ICU_ECR;

/** \brief  Last Acknowledged Service Request Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ICU_LASR_Bits B;                /**< \brief Bitfield access */
} Ifx_INT_ICU_LASR;

/** \brief  Latest Winning Service Request Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ICU_LWSR_Bits B;                /**< \brief Bitfield access */
} Ifx_INT_ICU_LWSR;

/** \brief  Module Identification Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_ID_Bits B;                      /**< \brief Bitfield access */
} Ifx_INT_ID;

/** \brief  OTGM IRQ Trace */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OIT_Bits B;                     /**< \brief Bitfield access */
} Ifx_INT_OIT;

/** \brief  OTGM IRQ MUX Missed IRQ Select */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OIXMS_Bits B;                   /**< \brief Bitfield access */
} Ifx_INT_OIXMS;

/** \brief  OTGM IRQ MUX Select 0 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OIXS0_Bits B;                   /**< \brief Bitfield access */
} Ifx_INT_OIXS0;

/** \brief  OTGM IRQ MUX Select 1 */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OIXS1_Bits B;                   /**< \brief Bitfield access */
} Ifx_INT_OIXS1;

/** \brief  OTGM IRQ MUX Trigger Set Select */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OIXTS_Bits B;                   /**< \brief Bitfield access */
} Ifx_INT_OIXTS;

/** \brief  OTGM MCDS I/F Sensitivity Negedge */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OMISN_Bits B;                   /**< \brief Bitfield access */
} Ifx_INT_OMISN;

/** \brief  OTGM MCDS I/F Sensitivity Posedge */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OMISP_Bits B;                   /**< \brief Bitfield access */
} Ifx_INT_OMISP;

/** \brief  OTGM OTGB0/1 Status */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OOBS_Bits B;                    /**< \brief Bitfield access */
} Ifx_INT_OOBS;

/** \brief  OTGM SSI Control */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_OSSIC_Bits B;                   /**< \brief Bitfield access */
} Ifx_INT_OSSIC;

/** \brief  Service Request Broadcast Register */
typedef union
{
    unsigned int U;                         /**< \brief Unsigned access */
    signed int I;                           /**< \brief Signed access */
    Ifx_INT_SRB_Bits B;                     /**< \brief Bitfield access */
} Ifx_INT_SRB;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Int_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \brief  Interrupt router channel */
typedef volatile struct _Ifx_INT_ICU
{
    Ifx_INT_ICU_LWSR LWSR;                  /**< \brief 0, Latest Winning Service Request Register */
    Ifx_INT_ICU_LASR LASR;                  /**< \brief 4, Last Acknowledged Service Request Register */
    Ifx_INT_ICU_ECR ECR;                    /**< \brief 8, Error Capture Register */
    unsigned char reserved_C[4];            /**< \brief C, \internal Reserved */
} Ifx_INT_ICU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Int_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief  Interrupt router object */
typedef volatile struct _Ifx_INT
{
    unsigned char reserved_0[8];            /**< \brief 0, \internal Reserved */
    Ifx_INT_ID ID;                          /**< \brief 8, Module Identification Register */
    unsigned char reserved_C[4];            /**< \brief C, \internal Reserved */
    Ifx_INT_SRB SRB[6];                     /**< \brief 10, Service Request Broadcast Register 0 */
    unsigned char reserved_28[88];          /**< \brief 28, \internal Reserved */
    Ifx_INT_OOBS OOBS;                      /**< \brief 80, OTGM OTGB0/1 Status */
    Ifx_INT_OSSIC OSSIC;                    /**< \brief 84, OTGM SSI Control */
    Ifx_INT_OIXTS OIXTS;                    /**< \brief 88, OTGM IRQ MUX Trigger Set Select */
    Ifx_INT_OIXMS OIXMS;                    /**< \brief 8C, OTGM IRQ MUX Missed IRQ Select */
    Ifx_INT_OIXS0 OIXS0;                    /**< \brief 90, OTGM IRQ MUX Select 0 */
    Ifx_INT_OIXS1 OIXS1;                    /**< \brief 94, OTGM IRQ MUX Select 1 */
    unsigned char reserved_98[8];           /**< \brief 98, \internal Reserved */
    Ifx_INT_OIT OIT;                        /**< \brief A0, OTGM IRQ Trace */
    Ifx_INT_OMISP OMISP;                    /**< \brief A4, OTGM MCDS I/F Sensitivity Posedge */
    Ifx_INT_OMISN OMISN;                    /**< \brief A8, OTGM MCDS I/F Sensitivity Negedge */
    unsigned char reserved_AC[68];          /**< \brief AC, \internal Reserved */
    Ifx_INT_ACCEN_CONFIG0 ACCEN_CONFIG0;    /**< \brief F0, Access Enable CONFIG, Register 0 */
    Ifx_INT_ACCEN_CONFIG1 ACCEN_CONFIG1;    /**< \brief F4, Access Enable CONFIG, Register 1 */
    unsigned char reserved_F8[8];           /**< \brief F8, \internal Reserved */
    Ifx_INT_ACCEN_SRB00 ACCEN_SRB00;        /**< \brief 100, Access Enable SRB0, Register 0 */
    Ifx_INT_ACCEN_SRB01 ACCEN_SRB01;        /**< \brief 104, Access Enable SRB0, Register 1 */
    Ifx_INT_ACCEN_SRB10 ACCEN_SRB10;        /**< \brief 108, Access Enable SRB1, Register 0 */
    Ifx_INT_ACCEN_SRB11 ACCEN_SRB11;        /**< \brief 10C, Access Enable SRB1, Register 1 */
    Ifx_INT_ACCEN_SRB20 ACCEN_SRB20;        /**< \brief 110, Access Enable SRB2, Register 0 */
    Ifx_INT_ACCEN_SRB21 ACCEN_SRB21;        /**< \brief 114, Access Enable SRB2, Register 1 */
    Ifx_INT_ACCEN_SRB30 ACCEN_SRB30;        /**< \brief 118, Access Enable SRB3, Register 0 */
    Ifx_INT_ACCEN_SRB31 ACCEN_SRB31;        /**< \brief 11C, Access Enable SRB3, Register 1 */
    Ifx_INT_ACCEN_SRB40 ACCEN_SRB40;        /**< \brief 120, Access Enable SRB4, Register 0 */
    Ifx_INT_ACCEN_SRB41 ACCEN_SRB41;        /**< \brief 124, Access Enable SRB4, Register 1 */
    Ifx_INT_ACCEN_SRB50 ACCEN_SRB50;        /**< \brief 128, Access Enable SRB5, Register 0 */
    Ifx_INT_ACCEN_SRB51 ACCEN_SRB51;        /**< \brief 12C, Access Enable SRB5, Register 1 */
    unsigned char reserved_130[80];         /**< \brief 130, \internal Reserved */
    Ifx_INT_ACCEN_SRC_TOS00 ACCEN_SRC_TOS00;    /**< \brief 180, Access Enable SRC[31:16] TOS0, Register 0 */
    Ifx_INT_ACCEN_SRC_TOS01 ACCEN_SRC_TOS01;    /**< \brief 184, Access Enable SRC[15:0] TOS0, Register 1 */
    Ifx_INT_ACCEN_SRC_TOS10 ACCEN_SRC_TOS10;    /**< \brief 188, Access Enable SRC[31:16] TOS1, Register 0 */
    Ifx_INT_ACCEN_SRC_TOS11 ACCEN_SRC_TOS11;    /**< \brief 18C, Access Enable SRC[15:0] TOS1, Register 1 */
    Ifx_INT_ACCEN_SRC_TOS20 ACCEN_SRC_TOS20;    /**< \brief 190, Access Enable SRC[31:16] TOS2, Register 0 */
    Ifx_INT_ACCEN_SRC_TOS21 ACCEN_SRC_TOS21;    /**< \brief 194, Access Enable SRC[15:0] TOS2, Register 1 */
    Ifx_INT_ACCEN_SRC_TOS30 ACCEN_SRC_TOS30;    /**< \brief 198, Access Enable SRC[31:16] TOS3, Register 0 */
    Ifx_INT_ACCEN_SRC_TOS31 ACCEN_SRC_TOS31;    /**< \brief 19C, Access Enable SRC[15:0] TOS3, Register 1 */
    Ifx_INT_ACCEN_SRC_TOS40 ACCEN_SRC_TOS40;    /**< \brief 1A0, Access Enable SRC[31:16] TOS4, Register 0 */
    Ifx_INT_ACCEN_SRC_TOS41 ACCEN_SRC_TOS41;    /**< \brief 1A4, Access Enable SRC[15:0] TOS4, Register 1 */
    Ifx_INT_ACCEN_SRC_TOS50 ACCEN_SRC_TOS50;    /**< \brief 1A8, Access Enable SRC[31:16] TOS5, Register 0 */
    Ifx_INT_ACCEN_SRC_TOS51 ACCEN_SRC_TOS51;    /**< \brief 1AC, Access Enable SRC[15:0] TOS5, Register 1 */
    Ifx_INT_ACCEN_SRC_TOS60 ACCEN_SRC_TOS60;    /**< \brief 1B0, Access Enable SRC[31:16] TOS6, Register 0 */
    Ifx_INT_ACCEN_SRC_TOS61 ACCEN_SRC_TOS61;    /**< \brief 1B4, Access Enable SRC[15:0] TOS6, Register 1 */
    Ifx_INT_ACCEN_SRC_TOS70 ACCEN_SRC_TOS70;    /**< \brief 1B8, Access Enable SRC[31:16] TOS7, Register 0 */
    Ifx_INT_ACCEN_SRC_TOS71 ACCEN_SRC_TOS71;    /**< \brief 1BC, Access Enable SRC[15:0] TOS7, Register 1 */
    unsigned char reserved_1C0[64];         /**< \brief 1C0, \internal Reserved */
    Ifx_INT_ICU CH[8];                      /**< \brief 200, Interrupt router channel */
    unsigned char reserved_280[3456];       /**< \brief 280, \internal Reserved */
} Ifx_INT;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXINT_REGDEF_H */
