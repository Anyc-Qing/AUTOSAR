/**
 * \file IfxLmu_reg.h
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
 * \defgroup IfxLld_Lmu_Cfg Lmu address
 * \ingroup IfxLld_Lmu
 * 
 * \defgroup IfxLld_Lmu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Lmu_Cfg
 * 
 * \defgroup IfxLld_Lmu_Cfg_Lmu0 2-LMU0
 * \ingroup IfxLld_Lmu_Cfg
 * 
 * \defgroup IfxLld_Lmu_Cfg_Lmu1 2-LMU1
 * \ingroup IfxLld_Lmu_Cfg
 * 
 * \defgroup IfxLld_Lmu_Cfg_Lmu2 2-LMU2
 * \ingroup IfxLld_Lmu_Cfg
 * 
 * \defgroup IfxLld_Lmu_Cfg_Lmu3 2-LMU3
 * \ingroup IfxLld_Lmu_Cfg
 * 
 */
#ifndef IFXLMU_REG_H
#define IFXLMU_REG_H 1
/******************************************************************************/
#include "IfxLmu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_BaseAddress
 * \{  */

/** \\brief  LMU object */
#define MODULE_LMU0 /*lint --e(923)*/ ((*(Ifx_LMU*)0xF8100000u))

/** \\brief  LMU object */
#define MODULE_LMU1 /*lint --e(923)*/ ((*(Ifx_LMU*)0xF8110000u))

/** \\brief  LMU object */
#define MODULE_LMU2 /*lint --e(923)*/ ((*(Ifx_LMU*)0xF8120000u))

/** \\brief  LMU object */
#define MODULE_LMU3 /*lint --e(923)*/ ((*(Ifx_LMU*)0xF8130000u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_Lmu0
 * \{  */

/** \\brief  10, LMUAccess Enable Register 0 */
#define LMU0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN0*)0xF8100010u)

/** \\brief  14, LMUAccess Enable Register 1 */
#define LMU0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN1*)0xF8100014u)

/** \\brief  0, LMUClock Control Register */
#define LMU0_CLC /*lint --e(923)*/ (*(volatile Ifx_LMU_CLC*)0xF8100000u)

/** \\brief  20, LMUMemory Control Register */
#define LMU0_MEMCON /*lint --e(923)*/ (*(volatile Ifx_LMU_MEMCON*)0xF8100020u)

/** \\brief  8, LMUModule ID Register */
#define LMU0_MODID /*lint --e(923)*/ (*(volatile Ifx_LMU_MODID*)0xF8100008u)

/** \\brief  58, LMURegion Access Enable Register */
#define LMU0_RGN0_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8100058u)

/** \\brief  5C, LMURegion Access Enable Register */
#define LMU0_RGN0_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF810005Cu)

/** \\brief  50, LMURegion Lower Address Register */
#define LMU0_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8100050u)

/** \\brief  54, LMURegion Upper Address Register */
#define LMU0_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8100054u)

/** \\brief  68, LMURegion Access Enable Register */
#define LMU0_RGN1_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8100068u)

/** \\brief  6C, LMURegion Access Enable Register */
#define LMU0_RGN1_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF810006Cu)

/** \\brief  60, LMURegion Lower Address Register */
#define LMU0_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8100060u)

/** \\brief  64, LMURegion Upper Address Register */
#define LMU0_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8100064u)

/** \\brief  78, LMURegion Access Enable Register */
#define LMU0_RGN2_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8100078u)

/** \\brief  7C, LMURegion Access Enable Register */
#define LMU0_RGN2_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF810007Cu)

/** \\brief  70, LMURegion Lower Address Register */
#define LMU0_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8100070u)

/** \\brief  74, LMURegion Upper Address Register */
#define LMU0_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8100074u)

/** \\brief  88, LMURegion Access Enable Register */
#define LMU0_RGN3_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8100088u)

/** \\brief  8C, LMURegion Access Enable Register */
#define LMU0_RGN3_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF810008Cu)

/** \\brief  80, LMURegion Lower Address Register */
#define LMU0_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8100080u)

/** \\brief  84, LMURegion Upper Address Register */
#define LMU0_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8100084u)

/** \\brief  98, LMURegion Access Enable Register */
#define LMU0_RGN4_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8100098u)

/** \\brief  9C, LMURegion Access Enable Register */
#define LMU0_RGN4_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF810009Cu)

/** \\brief  90, LMURegion Lower Address Register */
#define LMU0_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8100090u)

/** \\brief  94, LMURegion Upper Address Register */
#define LMU0_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8100094u)

/** \\brief  A8, LMURegion Access Enable Register */
#define LMU0_RGN5_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81000A8u)

/** \\brief  AC, LMURegion Access Enable Register */
#define LMU0_RGN5_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81000ACu)

/** \\brief  A0, LMURegion Lower Address Register */
#define LMU0_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81000A0u)

/** \\brief  A4, LMURegion Upper Address Register */
#define LMU0_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81000A4u)

/** \\brief  B8, LMURegion Access Enable Register */
#define LMU0_RGN6_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81000B8u)

/** \\brief  BC, LMURegion Access Enable Register */
#define LMU0_RGN6_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81000BCu)

/** \\brief  B0, LMURegion Lower Address Register */
#define LMU0_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81000B0u)

/** \\brief  B4, LMURegion Upper Address Register */
#define LMU0_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81000B4u)

/** \\brief  C8, LMURegion Access Enable Register */
#define LMU0_RGN7_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81000C8u)

/** \\brief  CC, LMURegion Access Enable Register */
#define LMU0_RGN7_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81000CCu)

/** \\brief  C0, LMURegion Lower Address Register */
#define LMU0_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81000C0u)

/** \\brief  C4, LMURegion Upper Address Register */
#define LMU0_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81000C4u)

/** \\brief  D8, LMURegion Access Enable Register 0 */
#define LMU0_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81000D8u)

/** \\brief  E8, LMURegion Access Enable Register 0 */
#define LMU0_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81000E8u)

/** \\brief  F8, LMURegion Access Enable Register 0 */
#define LMU0_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81000F8u)

/** \\brief  108, LMURegion Access Enable Register 0 */
#define LMU0_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8100108u)

/** \\brief  118, LMURegion Access Enable Register 0 */
#define LMU0_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8100118u)

/** \\brief  128, LMURegion Access Enable Register 0 */
#define LMU0_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8100128u)

/** \\brief  138, LMURegion Access Enable Register 0 */
#define LMU0_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8100138u)

/** \\brief  148, LMURegion Access Enable Register 0 */
#define LMU0_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8100148u)

/** \\brief  DC, LMURegion Access Enable Register 1 */
#define LMU0_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81000DCu)

/** \\brief  EC, LMURegion Access Enable Register 1 */
#define LMU0_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81000ECu)

/** \\brief  FC, LMURegion Access Enable Register 1 */
#define LMU0_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81000FCu)

/** \\brief  10C, LMURegion Access Enable Register 1 */
#define LMU0_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF810010Cu)

/** \\brief  11C, LMURegion Access Enable Register 1 */
#define LMU0_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF810011Cu)

/** \\brief  12C, LMURegion Access Enable Register 1 */
#define LMU0_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF810012Cu)

/** \\brief  13C, LMURegion Access Enable Register 1 */
#define LMU0_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF810013Cu)

/** \\brief  14C, LMURegion Access Enable Register 1 */
#define LMU0_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF810014Cu)

/** \\brief  24, LMUSafety Control Register */
#define LMU0_SCTRL /*lint --e(923)*/ (*(volatile Ifx_LMU_SCTRL*)0xF8100024u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_Lmu1
 * \{  */

/** \\brief  10, LMUAccess Enable Register 0 */
#define LMU1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN0*)0xF8110010u)

/** \\brief  14, LMUAccess Enable Register 1 */
#define LMU1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN1*)0xF8110014u)

/** \\brief  0, LMUClock Control Register */
#define LMU1_CLC /*lint --e(923)*/ (*(volatile Ifx_LMU_CLC*)0xF8110000u)

/** \\brief  20, LMUMemory Control Register */
#define LMU1_MEMCON /*lint --e(923)*/ (*(volatile Ifx_LMU_MEMCON*)0xF8110020u)

/** \\brief  8, LMUModule ID Register */
#define LMU1_MODID /*lint --e(923)*/ (*(volatile Ifx_LMU_MODID*)0xF8110008u)

/** \\brief  58, LMURegion Access Enable Register */
#define LMU1_RGN0_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8110058u)

/** \\brief  5C, LMURegion Access Enable Register */
#define LMU1_RGN0_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF811005Cu)

/** \\brief  50, LMURegion Lower Address Register */
#define LMU1_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8110050u)

/** \\brief  54, LMURegion Upper Address Register */
#define LMU1_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8110054u)

/** \\brief  68, LMURegion Access Enable Register */
#define LMU1_RGN1_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8110068u)

/** \\brief  6C, LMURegion Access Enable Register */
#define LMU1_RGN1_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF811006Cu)

/** \\brief  60, LMURegion Lower Address Register */
#define LMU1_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8110060u)

/** \\brief  64, LMURegion Upper Address Register */
#define LMU1_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8110064u)

/** \\brief  78, LMURegion Access Enable Register */
#define LMU1_RGN2_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8110078u)

/** \\brief  7C, LMURegion Access Enable Register */
#define LMU1_RGN2_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF811007Cu)

/** \\brief  70, LMURegion Lower Address Register */
#define LMU1_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8110070u)

/** \\brief  74, LMURegion Upper Address Register */
#define LMU1_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8110074u)

/** \\brief  88, LMURegion Access Enable Register */
#define LMU1_RGN3_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8110088u)

/** \\brief  8C, LMURegion Access Enable Register */
#define LMU1_RGN3_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF811008Cu)

/** \\brief  80, LMURegion Lower Address Register */
#define LMU1_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8110080u)

/** \\brief  84, LMURegion Upper Address Register */
#define LMU1_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8110084u)

/** \\brief  98, LMURegion Access Enable Register */
#define LMU1_RGN4_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8110098u)

/** \\brief  9C, LMURegion Access Enable Register */
#define LMU1_RGN4_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF811009Cu)

/** \\brief  90, LMURegion Lower Address Register */
#define LMU1_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8110090u)

/** \\brief  94, LMURegion Upper Address Register */
#define LMU1_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8110094u)

/** \\brief  A8, LMURegion Access Enable Register */
#define LMU1_RGN5_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81100A8u)

/** \\brief  AC, LMURegion Access Enable Register */
#define LMU1_RGN5_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81100ACu)

/** \\brief  A0, LMURegion Lower Address Register */
#define LMU1_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81100A0u)

/** \\brief  A4, LMURegion Upper Address Register */
#define LMU1_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81100A4u)

/** \\brief  B8, LMURegion Access Enable Register */
#define LMU1_RGN6_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81100B8u)

/** \\brief  BC, LMURegion Access Enable Register */
#define LMU1_RGN6_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81100BCu)

/** \\brief  B0, LMURegion Lower Address Register */
#define LMU1_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81100B0u)

/** \\brief  B4, LMURegion Upper Address Register */
#define LMU1_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81100B4u)

/** \\brief  C8, LMURegion Access Enable Register */
#define LMU1_RGN7_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81100C8u)

/** \\brief  CC, LMURegion Access Enable Register */
#define LMU1_RGN7_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81100CCu)

/** \\brief  C0, LMURegion Lower Address Register */
#define LMU1_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81100C0u)

/** \\brief  C4, LMURegion Upper Address Register */
#define LMU1_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81100C4u)

/** \\brief  D8, LMURegion Access Enable Register 0 */
#define LMU1_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81100D8u)

/** \\brief  E8, LMURegion Access Enable Register 0 */
#define LMU1_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81100E8u)

/** \\brief  F8, LMURegion Access Enable Register 0 */
#define LMU1_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81100F8u)

/** \\brief  108, LMURegion Access Enable Register 0 */
#define LMU1_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8110108u)

/** \\brief  118, LMURegion Access Enable Register 0 */
#define LMU1_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8110118u)

/** \\brief  128, LMURegion Access Enable Register 0 */
#define LMU1_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8110128u)

/** \\brief  138, LMURegion Access Enable Register 0 */
#define LMU1_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8110138u)

/** \\brief  148, LMURegion Access Enable Register 0 */
#define LMU1_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8110148u)

/** \\brief  DC, LMURegion Access Enable Register 1 */
#define LMU1_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81100DCu)

/** \\brief  EC, LMURegion Access Enable Register 1 */
#define LMU1_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81100ECu)

/** \\brief  FC, LMURegion Access Enable Register 1 */
#define LMU1_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81100FCu)

/** \\brief  10C, LMURegion Access Enable Register 1 */
#define LMU1_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF811010Cu)

/** \\brief  11C, LMURegion Access Enable Register 1 */
#define LMU1_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF811011Cu)

/** \\brief  12C, LMURegion Access Enable Register 1 */
#define LMU1_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF811012Cu)

/** \\brief  13C, LMURegion Access Enable Register 1 */
#define LMU1_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF811013Cu)

/** \\brief  14C, LMURegion Access Enable Register 1 */
#define LMU1_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF811014Cu)

/** \\brief  24, LMUSafety Control Register */
#define LMU1_SCTRL /*lint --e(923)*/ (*(volatile Ifx_LMU_SCTRL*)0xF8110024u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_Lmu2
 * \{  */

/** \\brief  10, LMUAccess Enable Register 0 */
#define LMU2_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN0*)0xF8120010u)

/** \\brief  14, LMUAccess Enable Register 1 */
#define LMU2_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN1*)0xF8120014u)

/** \\brief  0, LMUClock Control Register */
#define LMU2_CLC /*lint --e(923)*/ (*(volatile Ifx_LMU_CLC*)0xF8120000u)

/** \\brief  20, LMUMemory Control Register */
#define LMU2_MEMCON /*lint --e(923)*/ (*(volatile Ifx_LMU_MEMCON*)0xF8120020u)

/** \\brief  8, LMUModule ID Register */
#define LMU2_MODID /*lint --e(923)*/ (*(volatile Ifx_LMU_MODID*)0xF8120008u)

/** \\brief  58, LMURegion Access Enable Register */
#define LMU2_RGN0_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8120058u)

/** \\brief  5C, LMURegion Access Enable Register */
#define LMU2_RGN0_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF812005Cu)

/** \\brief  50, LMURegion Lower Address Register */
#define LMU2_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8120050u)

/** \\brief  54, LMURegion Upper Address Register */
#define LMU2_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8120054u)

/** \\brief  68, LMURegion Access Enable Register */
#define LMU2_RGN1_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8120068u)

/** \\brief  6C, LMURegion Access Enable Register */
#define LMU2_RGN1_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF812006Cu)

/** \\brief  60, LMURegion Lower Address Register */
#define LMU2_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8120060u)

/** \\brief  64, LMURegion Upper Address Register */
#define LMU2_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8120064u)

/** \\brief  78, LMURegion Access Enable Register */
#define LMU2_RGN2_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8120078u)

/** \\brief  7C, LMURegion Access Enable Register */
#define LMU2_RGN2_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF812007Cu)

/** \\brief  70, LMURegion Lower Address Register */
#define LMU2_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8120070u)

/** \\brief  74, LMURegion Upper Address Register */
#define LMU2_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8120074u)

/** \\brief  88, LMURegion Access Enable Register */
#define LMU2_RGN3_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8120088u)

/** \\brief  8C, LMURegion Access Enable Register */
#define LMU2_RGN3_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF812008Cu)

/** \\brief  80, LMURegion Lower Address Register */
#define LMU2_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8120080u)

/** \\brief  84, LMURegion Upper Address Register */
#define LMU2_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8120084u)

/** \\brief  98, LMURegion Access Enable Register */
#define LMU2_RGN4_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8120098u)

/** \\brief  9C, LMURegion Access Enable Register */
#define LMU2_RGN4_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF812009Cu)

/** \\brief  90, LMURegion Lower Address Register */
#define LMU2_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8120090u)

/** \\brief  94, LMURegion Upper Address Register */
#define LMU2_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8120094u)

/** \\brief  A8, LMURegion Access Enable Register */
#define LMU2_RGN5_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81200A8u)

/** \\brief  AC, LMURegion Access Enable Register */
#define LMU2_RGN5_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81200ACu)

/** \\brief  A0, LMURegion Lower Address Register */
#define LMU2_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81200A0u)

/** \\brief  A4, LMURegion Upper Address Register */
#define LMU2_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81200A4u)

/** \\brief  B8, LMURegion Access Enable Register */
#define LMU2_RGN6_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81200B8u)

/** \\brief  BC, LMURegion Access Enable Register */
#define LMU2_RGN6_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81200BCu)

/** \\brief  B0, LMURegion Lower Address Register */
#define LMU2_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81200B0u)

/** \\brief  B4, LMURegion Upper Address Register */
#define LMU2_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81200B4u)

/** \\brief  C8, LMURegion Access Enable Register */
#define LMU2_RGN7_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81200C8u)

/** \\brief  CC, LMURegion Access Enable Register */
#define LMU2_RGN7_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81200CCu)

/** \\brief  C0, LMURegion Lower Address Register */
#define LMU2_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81200C0u)

/** \\brief  C4, LMURegion Upper Address Register */
#define LMU2_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81200C4u)

/** \\brief  D8, LMURegion Access Enable Register 0 */
#define LMU2_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81200D8u)

/** \\brief  E8, LMURegion Access Enable Register 0 */
#define LMU2_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81200E8u)

/** \\brief  F8, LMURegion Access Enable Register 0 */
#define LMU2_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81200F8u)

/** \\brief  108, LMURegion Access Enable Register 0 */
#define LMU2_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8120108u)

/** \\brief  118, LMURegion Access Enable Register 0 */
#define LMU2_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8120118u)

/** \\brief  128, LMURegion Access Enable Register 0 */
#define LMU2_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8120128u)

/** \\brief  138, LMURegion Access Enable Register 0 */
#define LMU2_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8120138u)

/** \\brief  148, LMURegion Access Enable Register 0 */
#define LMU2_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8120148u)

/** \\brief  DC, LMURegion Access Enable Register 1 */
#define LMU2_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81200DCu)

/** \\brief  EC, LMURegion Access Enable Register 1 */
#define LMU2_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81200ECu)

/** \\brief  FC, LMURegion Access Enable Register 1 */
#define LMU2_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81200FCu)

/** \\brief  10C, LMURegion Access Enable Register 1 */
#define LMU2_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF812010Cu)

/** \\brief  11C, LMURegion Access Enable Register 1 */
#define LMU2_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF812011Cu)

/** \\brief  12C, LMURegion Access Enable Register 1 */
#define LMU2_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF812012Cu)

/** \\brief  13C, LMURegion Access Enable Register 1 */
#define LMU2_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF812013Cu)

/** \\brief  14C, LMURegion Access Enable Register 1 */
#define LMU2_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF812014Cu)

/** \\brief  24, LMUSafety Control Register */
#define LMU2_SCTRL /*lint --e(923)*/ (*(volatile Ifx_LMU_SCTRL*)0xF8120024u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Lmu_Cfg_Lmu3
 * \{  */

/** \\brief  10, LMUAccess Enable Register 0 */
#define LMU3_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN0*)0xF8130010u)

/** \\brief  14, LMUAccess Enable Register 1 */
#define LMU3_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_LMU_ACCEN1*)0xF8130014u)

/** \\brief  0, LMUClock Control Register */
#define LMU3_CLC /*lint --e(923)*/ (*(volatile Ifx_LMU_CLC*)0xF8130000u)

/** \\brief  20, LMUMemory Control Register */
#define LMU3_MEMCON /*lint --e(923)*/ (*(volatile Ifx_LMU_MEMCON*)0xF8130020u)

/** \\brief  8, LMUModule ID Register */
#define LMU3_MODID /*lint --e(923)*/ (*(volatile Ifx_LMU_MODID*)0xF8130008u)

/** \\brief  58, LMURegion Access Enable Register */
#define LMU3_RGN0_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8130058u)

/** \\brief  5C, LMURegion Access Enable Register */
#define LMU3_RGN0_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF813005Cu)

/** \\brief  50, LMURegion Lower Address Register */
#define LMU3_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8130050u)

/** \\brief  54, LMURegion Upper Address Register */
#define LMU3_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8130054u)

/** \\brief  68, LMURegion Access Enable Register */
#define LMU3_RGN1_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8130068u)

/** \\brief  6C, LMURegion Access Enable Register */
#define LMU3_RGN1_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF813006Cu)

/** \\brief  60, LMURegion Lower Address Register */
#define LMU3_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8130060u)

/** \\brief  64, LMURegion Upper Address Register */
#define LMU3_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8130064u)

/** \\brief  78, LMURegion Access Enable Register */
#define LMU3_RGN2_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8130078u)

/** \\brief  7C, LMURegion Access Enable Register */
#define LMU3_RGN2_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF813007Cu)

/** \\brief  70, LMURegion Lower Address Register */
#define LMU3_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8130070u)

/** \\brief  74, LMURegion Upper Address Register */
#define LMU3_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8130074u)

/** \\brief  88, LMURegion Access Enable Register */
#define LMU3_RGN3_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8130088u)

/** \\brief  8C, LMURegion Access Enable Register */
#define LMU3_RGN3_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF813008Cu)

/** \\brief  80, LMURegion Lower Address Register */
#define LMU3_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8130080u)

/** \\brief  84, LMURegion Upper Address Register */
#define LMU3_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8130084u)

/** \\brief  98, LMURegion Access Enable Register */
#define LMU3_RGN4_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF8130098u)

/** \\brief  9C, LMURegion Access Enable Register */
#define LMU3_RGN4_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF813009Cu)

/** \\brief  90, LMURegion Lower Address Register */
#define LMU3_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF8130090u)

/** \\brief  94, LMURegion Upper Address Register */
#define LMU3_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF8130094u)

/** \\brief  A8, LMURegion Access Enable Register */
#define LMU3_RGN5_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81300A8u)

/** \\brief  AC, LMURegion Access Enable Register */
#define LMU3_RGN5_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81300ACu)

/** \\brief  A0, LMURegion Lower Address Register */
#define LMU3_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81300A0u)

/** \\brief  A4, LMURegion Upper Address Register */
#define LMU3_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81300A4u)

/** \\brief  B8, LMURegion Access Enable Register */
#define LMU3_RGN6_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81300B8u)

/** \\brief  BC, LMURegion Access Enable Register */
#define LMU3_RGN6_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81300BCu)

/** \\brief  B0, LMURegion Lower Address Register */
#define LMU3_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81300B0u)

/** \\brief  B4, LMURegion Upper Address Register */
#define LMU3_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81300B4u)

/** \\brief  C8, LMURegion Access Enable Register */
#define LMU3_RGN7_ACCENWA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWA*)0xF81300C8u)

/** \\brief  CC, LMURegion Access Enable Register */
#define LMU3_RGN7_ACCENWB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_ACCENWB*)0xF81300CCu)

/** \\brief  C0, LMURegion Lower Address Register */
#define LMU3_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_LA*)0xF81300C0u)

/** \\brief  C4, LMURegion Upper Address Register */
#define LMU3_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGN_UA*)0xF81300C4u)

/** \\brief  D8, LMURegion Access Enable Register 0 */
#define LMU3_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81300D8u)

/** \\brief  E8, LMURegion Access Enable Register 0 */
#define LMU3_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81300E8u)

/** \\brief  F8, LMURegion Access Enable Register 0 */
#define LMU3_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF81300F8u)

/** \\brief  108, LMURegion Access Enable Register 0 */
#define LMU3_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8130108u)

/** \\brief  118, LMURegion Access Enable Register 0 */
#define LMU3_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8130118u)

/** \\brief  128, LMURegion Access Enable Register 0 */
#define LMU3_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8130128u)

/** \\brief  138, LMURegion Access Enable Register 0 */
#define LMU3_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8130138u)

/** \\brief  148, LMURegion Access Enable Register 0 */
#define LMU3_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RA*)0xF8130148u)

/** \\brief  DC, LMURegion Access Enable Register 1 */
#define LMU3_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81300DCu)

/** \\brief  EC, LMURegion Access Enable Register 1 */
#define LMU3_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81300ECu)

/** \\brief  FC, LMURegion Access Enable Register 1 */
#define LMU3_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF81300FCu)

/** \\brief  10C, LMURegion Access Enable Register 1 */
#define LMU3_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF813010Cu)

/** \\brief  11C, LMURegion Access Enable Register 1 */
#define LMU3_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF813011Cu)

/** \\brief  12C, LMURegion Access Enable Register 1 */
#define LMU3_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF813012Cu)

/** \\brief  13C, LMURegion Access Enable Register 1 */
#define LMU3_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF813013Cu)

/** \\brief  14C, LMURegion Access Enable Register 1 */
#define LMU3_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_LMU_RGNACCEN_RB*)0xF813014Cu)

/** \\brief  24, LMUSafety Control Register */
#define LMU3_SCTRL /*lint --e(923)*/ (*(volatile Ifx_LMU_SCTRL*)0xF8130024u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXLMU_REG_H */
