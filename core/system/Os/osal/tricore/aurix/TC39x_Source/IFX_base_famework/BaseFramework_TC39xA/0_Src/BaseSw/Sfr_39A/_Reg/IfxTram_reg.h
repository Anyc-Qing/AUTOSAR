/**
 * \file IfxTram_reg.h
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
 * \defgroup IfxLld_Tram_Registers_Cfg Tram address
 * \ingroup IfxLld_Tram_Registers
 * 
 * \defgroup IfxLld_Tram_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Tram_Registers_Cfg
 *
 * \defgroup IfxLld_Tram_Registers_Cfg_Tram 2-TRAM
 * \ingroup IfxLld_Tram_Registers_Cfg
 *
 *
 */
#ifndef IFXTRAM_REG_H
#define IFXTRAM_REG_H 1
/******************************************************************************/
#include "IfxTram_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Tram_Cfg_BaseAddress
 * \{  */

/** \brief TRAM object */
#define MODULE_TRAM /*lint --e(923)*/ ((*(Ifx_TRAM*)0xFB710000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Tram_Cfg_Tram
 * \{  */
/** \brief 0, ${LMU_instance_name}Clock Control Register */
#define TRAM_CLC /*lint --e(923)*/ (*(volatile Ifx_TRAM_CLC*)0xFB710000u)

/** \brief 8, ${LMU_instance_name}Module ID Register */
#define TRAM_MODID /*lint --e(923)*/ (*(volatile Ifx_TRAM_MODID*)0xFB710008u)

/** \brief 10, ${LMU_instance_name}Access Enable Register 0 */
#define TRAM_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_TRAM_ACCEN0*)0xFB710010u)

/** \brief 14, ${LMU_instance_name}Access Enable Register 1 */
#define TRAM_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_TRAM_ACCEN1*)0xFB710014u)

/** \brief 20, ${LMU_instance_name}Memory Control Register */
#define TRAM_MEMCON /*lint --e(923)*/ (*(volatile Ifx_TRAM_MEMCON*)0xFB710020u)

/** \brief 24, ${LMU_instance_name}Safety Control Register */
#define TRAM_SCTRL /*lint --e(923)*/ (*(volatile Ifx_TRAM_SCTRL*)0xFB710024u)

/** \brief 50, ${LMU_instance_name}Region Lower Address Register */
#define TRAM_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_LA*)0xFB710050u)
/** Alias (User Manual Name) for TRAM_RGN0_LA.
* To use register names with standard convension, please use TRAM_RGN0_LA.
*/
#define TRAM_RGNLA0 (TRAM_RGN0_LA)

/** \brief 54, ${LMU_instance_name}Region Upper Address Register */
#define TRAM_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_UA*)0xFB710054u)
/** Alias (User Manual Name) for TRAM_RGN0_UA.
* To use register names with standard convension, please use TRAM_RGN0_UA.
*/
#define TRAM_RGNUA0 (TRAM_RGN0_UA)

/** \brief 58, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGN0_ACCENA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENA*)0xFB710058u)
/** Alias (User Manual Name) for TRAM_RGN0_ACCENA.
* To use register names with standard convension, please use TRAM_RGN0_ACCENA.
*/
#define TRAM_RGNACCENWA0 (TRAM_RGN0_ACCENA)

/** \brief 5C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGN0_ACCENB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENB*)0xFB71005Cu)
/** Alias (User Manual Name) for TRAM_RGN0_ACCENB.
* To use register names with standard convension, please use TRAM_RGN0_ACCENB.
*/
#define TRAM_RGNACCENWB0 (TRAM_RGN0_ACCENB)

/** \brief 60, ${LMU_instance_name}Region Lower Address Register */
#define TRAM_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_LA*)0xFB710060u)
/** Alias (User Manual Name) for TRAM_RGN1_LA.
* To use register names with standard convension, please use TRAM_RGN1_LA.
*/
#define TRAM_RGNLA1 (TRAM_RGN1_LA)

/** \brief 64, ${LMU_instance_name}Region Upper Address Register */
#define TRAM_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_UA*)0xFB710064u)
/** Alias (User Manual Name) for TRAM_RGN1_UA.
* To use register names with standard convension, please use TRAM_RGN1_UA.
*/
#define TRAM_RGNUA1 (TRAM_RGN1_UA)

/** \brief 68, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGN1_ACCENA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENA*)0xFB710068u)
/** Alias (User Manual Name) for TRAM_RGN1_ACCENA.
* To use register names with standard convension, please use TRAM_RGN1_ACCENA.
*/
#define TRAM_RGNACCENWA1 (TRAM_RGN1_ACCENA)

/** \brief 6C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGN1_ACCENB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENB*)0xFB71006Cu)
/** Alias (User Manual Name) for TRAM_RGN1_ACCENB.
* To use register names with standard convension, please use TRAM_RGN1_ACCENB.
*/
#define TRAM_RGNACCENWB1 (TRAM_RGN1_ACCENB)

/** \brief 70, ${LMU_instance_name}Region Lower Address Register */
#define TRAM_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_LA*)0xFB710070u)
/** Alias (User Manual Name) for TRAM_RGN2_LA.
* To use register names with standard convension, please use TRAM_RGN2_LA.
*/
#define TRAM_RGNLA2 (TRAM_RGN2_LA)

/** \brief 74, ${LMU_instance_name}Region Upper Address Register */
#define TRAM_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_UA*)0xFB710074u)
/** Alias (User Manual Name) for TRAM_RGN2_UA.
* To use register names with standard convension, please use TRAM_RGN2_UA.
*/
#define TRAM_RGNUA2 (TRAM_RGN2_UA)

/** \brief 78, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGN2_ACCENA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENA*)0xFB710078u)
/** Alias (User Manual Name) for TRAM_RGN2_ACCENA.
* To use register names with standard convension, please use TRAM_RGN2_ACCENA.
*/
#define TRAM_RGNACCENWA2 (TRAM_RGN2_ACCENA)

/** \brief 7C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGN2_ACCENB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENB*)0xFB71007Cu)
/** Alias (User Manual Name) for TRAM_RGN2_ACCENB.
* To use register names with standard convension, please use TRAM_RGN2_ACCENB.
*/
#define TRAM_RGNACCENWB2 (TRAM_RGN2_ACCENB)

/** \brief 80, ${LMU_instance_name}Region Lower Address Register */
#define TRAM_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_LA*)0xFB710080u)
/** Alias (User Manual Name) for TRAM_RGN3_LA.
* To use register names with standard convension, please use TRAM_RGN3_LA.
*/
#define TRAM_RGNLA3 (TRAM_RGN3_LA)

/** \brief 84, ${LMU_instance_name}Region Upper Address Register */
#define TRAM_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_UA*)0xFB710084u)
/** Alias (User Manual Name) for TRAM_RGN3_UA.
* To use register names with standard convension, please use TRAM_RGN3_UA.
*/
#define TRAM_RGNUA3 (TRAM_RGN3_UA)

/** \brief 88, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGN3_ACCENA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENA*)0xFB710088u)
/** Alias (User Manual Name) for TRAM_RGN3_ACCENA.
* To use register names with standard convension, please use TRAM_RGN3_ACCENA.
*/
#define TRAM_RGNACCENWA3 (TRAM_RGN3_ACCENA)

/** \brief 8C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGN3_ACCENB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENB*)0xFB71008Cu)
/** Alias (User Manual Name) for TRAM_RGN3_ACCENB.
* To use register names with standard convension, please use TRAM_RGN3_ACCENB.
*/
#define TRAM_RGNACCENWB3 (TRAM_RGN3_ACCENB)

/** \brief 90, ${LMU_instance_name}Region Lower Address Register */
#define TRAM_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_LA*)0xFB710090u)
/** Alias (User Manual Name) for TRAM_RGN4_LA.
* To use register names with standard convension, please use TRAM_RGN4_LA.
*/
#define TRAM_RGNLA4 (TRAM_RGN4_LA)

/** \brief 94, ${LMU_instance_name}Region Upper Address Register */
#define TRAM_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_UA*)0xFB710094u)
/** Alias (User Manual Name) for TRAM_RGN4_UA.
* To use register names with standard convension, please use TRAM_RGN4_UA.
*/
#define TRAM_RGNUA4 (TRAM_RGN4_UA)

/** \brief 98, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGN4_ACCENA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENA*)0xFB710098u)
/** Alias (User Manual Name) for TRAM_RGN4_ACCENA.
* To use register names with standard convension, please use TRAM_RGN4_ACCENA.
*/
#define TRAM_RGNACCENWA4 (TRAM_RGN4_ACCENA)

/** \brief 9C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGN4_ACCENB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENB*)0xFB71009Cu)
/** Alias (User Manual Name) for TRAM_RGN4_ACCENB.
* To use register names with standard convension, please use TRAM_RGN4_ACCENB.
*/
#define TRAM_RGNACCENWB4 (TRAM_RGN4_ACCENB)

/** \brief A0, ${LMU_instance_name}Region Lower Address Register */
#define TRAM_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_LA*)0xFB7100A0u)
/** Alias (User Manual Name) for TRAM_RGN5_LA.
* To use register names with standard convension, please use TRAM_RGN5_LA.
*/
#define TRAM_RGNLA5 (TRAM_RGN5_LA)

/** \brief A4, ${LMU_instance_name}Region Upper Address Register */
#define TRAM_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_UA*)0xFB7100A4u)
/** Alias (User Manual Name) for TRAM_RGN5_UA.
* To use register names with standard convension, please use TRAM_RGN5_UA.
*/
#define TRAM_RGNUA5 (TRAM_RGN5_UA)

/** \brief A8, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGN5_ACCENA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENA*)0xFB7100A8u)
/** Alias (User Manual Name) for TRAM_RGN5_ACCENA.
* To use register names with standard convension, please use TRAM_RGN5_ACCENA.
*/
#define TRAM_RGNACCENWA5 (TRAM_RGN5_ACCENA)

/** \brief AC, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGN5_ACCENB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENB*)0xFB7100ACu)
/** Alias (User Manual Name) for TRAM_RGN5_ACCENB.
* To use register names with standard convension, please use TRAM_RGN5_ACCENB.
*/
#define TRAM_RGNACCENWB5 (TRAM_RGN5_ACCENB)

/** \brief B0, ${LMU_instance_name}Region Lower Address Register */
#define TRAM_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_LA*)0xFB7100B0u)
/** Alias (User Manual Name) for TRAM_RGN6_LA.
* To use register names with standard convension, please use TRAM_RGN6_LA.
*/
#define TRAM_RGNLA6 (TRAM_RGN6_LA)

/** \brief B4, ${LMU_instance_name}Region Upper Address Register */
#define TRAM_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_UA*)0xFB7100B4u)
/** Alias (User Manual Name) for TRAM_RGN6_UA.
* To use register names with standard convension, please use TRAM_RGN6_UA.
*/
#define TRAM_RGNUA6 (TRAM_RGN6_UA)

/** \brief B8, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGN6_ACCENA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENA*)0xFB7100B8u)
/** Alias (User Manual Name) for TRAM_RGN6_ACCENA.
* To use register names with standard convension, please use TRAM_RGN6_ACCENA.
*/
#define TRAM_RGNACCENWA6 (TRAM_RGN6_ACCENA)

/** \brief BC, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGN6_ACCENB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENB*)0xFB7100BCu)
/** Alias (User Manual Name) for TRAM_RGN6_ACCENB.
* To use register names with standard convension, please use TRAM_RGN6_ACCENB.
*/
#define TRAM_RGNACCENWB6 (TRAM_RGN6_ACCENB)

/** \brief C0, ${LMU_instance_name}Region Lower Address Register */
#define TRAM_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_LA*)0xFB7100C0u)
/** Alias (User Manual Name) for TRAM_RGN7_LA.
* To use register names with standard convension, please use TRAM_RGN7_LA.
*/
#define TRAM_RGNLA7 (TRAM_RGN7_LA)

/** \brief C4, ${LMU_instance_name}Region Upper Address Register */
#define TRAM_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_UA*)0xFB7100C4u)
/** Alias (User Manual Name) for TRAM_RGN7_UA.
* To use register names with standard convension, please use TRAM_RGN7_UA.
*/
#define TRAM_RGNUA7 (TRAM_RGN7_UA)

/** \brief C8, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGN7_ACCENA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENA*)0xFB7100C8u)
/** Alias (User Manual Name) for TRAM_RGN7_ACCENA.
* To use register names with standard convension, please use TRAM_RGN7_ACCENA.
*/
#define TRAM_RGNACCENWA7 (TRAM_RGN7_ACCENA)

/** \brief CC, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGN7_ACCENB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGN_ACCENB*)0xFB7100CCu)
/** Alias (User Manual Name) for TRAM_RGN7_ACCENB.
* To use register names with standard convension, please use TRAM_RGN7_ACCENB.
*/
#define TRAM_RGNACCENWB7 (TRAM_RGN7_ACCENB)

/** \brief D8, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGNACCEN0_RA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RA*)0xFB7100D8u)
/** Alias (User Manual Name) for TRAM_RGNACCEN0_RA.
* To use register names with standard convension, please use TRAM_RGNACCEN0_RA.
*/
#define TRAM_RGNACCENRA0 (TRAM_RGNACCEN0_RA)

/** \brief DC, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGNACCEN0_RB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RB*)0xFB7100DCu)
/** Alias (User Manual Name) for TRAM_RGNACCEN0_RB.
* To use register names with standard convension, please use TRAM_RGNACCEN0_RB.
*/
#define TRAM_RGNACCENRB0 (TRAM_RGNACCEN0_RB)

/** \brief E8, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGNACCEN1_RA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RA*)0xFB7100E8u)
/** Alias (User Manual Name) for TRAM_RGNACCEN1_RA.
* To use register names with standard convension, please use TRAM_RGNACCEN1_RA.
*/
#define TRAM_RGNACCENRA1 (TRAM_RGNACCEN1_RA)

/** \brief EC, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGNACCEN1_RB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RB*)0xFB7100ECu)
/** Alias (User Manual Name) for TRAM_RGNACCEN1_RB.
* To use register names with standard convension, please use TRAM_RGNACCEN1_RB.
*/
#define TRAM_RGNACCENRB1 (TRAM_RGNACCEN1_RB)

/** \brief F8, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGNACCEN2_RA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RA*)0xFB7100F8u)
/** Alias (User Manual Name) for TRAM_RGNACCEN2_RA.
* To use register names with standard convension, please use TRAM_RGNACCEN2_RA.
*/
#define TRAM_RGNACCENRA2 (TRAM_RGNACCEN2_RA)

/** \brief FC, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGNACCEN2_RB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RB*)0xFB7100FCu)
/** Alias (User Manual Name) for TRAM_RGNACCEN2_RB.
* To use register names with standard convension, please use TRAM_RGNACCEN2_RB.
*/
#define TRAM_RGNACCENRB2 (TRAM_RGNACCEN2_RB)

/** \brief 108, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGNACCEN3_RA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RA*)0xFB710108u)
/** Alias (User Manual Name) for TRAM_RGNACCEN3_RA.
* To use register names with standard convension, please use TRAM_RGNACCEN3_RA.
*/
#define TRAM_RGNACCENRA3 (TRAM_RGNACCEN3_RA)

/** \brief 10C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGNACCEN3_RB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RB*)0xFB71010Cu)
/** Alias (User Manual Name) for TRAM_RGNACCEN3_RB.
* To use register names with standard convension, please use TRAM_RGNACCEN3_RB.
*/
#define TRAM_RGNACCENRB3 (TRAM_RGNACCEN3_RB)

/** \brief 118, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGNACCEN4_RA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RA*)0xFB710118u)
/** Alias (User Manual Name) for TRAM_RGNACCEN4_RA.
* To use register names with standard convension, please use TRAM_RGNACCEN4_RA.
*/
#define TRAM_RGNACCENRA4 (TRAM_RGNACCEN4_RA)

/** \brief 11C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGNACCEN4_RB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RB*)0xFB71011Cu)
/** Alias (User Manual Name) for TRAM_RGNACCEN4_RB.
* To use register names with standard convension, please use TRAM_RGNACCEN4_RB.
*/
#define TRAM_RGNACCENRB4 (TRAM_RGNACCEN4_RB)

/** \brief 128, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGNACCEN5_RA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RA*)0xFB710128u)
/** Alias (User Manual Name) for TRAM_RGNACCEN5_RA.
* To use register names with standard convension, please use TRAM_RGNACCEN5_RA.
*/
#define TRAM_RGNACCENRA5 (TRAM_RGNACCEN5_RA)

/** \brief 12C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGNACCEN5_RB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RB*)0xFB71012Cu)
/** Alias (User Manual Name) for TRAM_RGNACCEN5_RB.
* To use register names with standard convension, please use TRAM_RGNACCEN5_RB.
*/
#define TRAM_RGNACCENRB5 (TRAM_RGNACCEN5_RB)

/** \brief 138, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGNACCEN6_RA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RA*)0xFB710138u)
/** Alias (User Manual Name) for TRAM_RGNACCEN6_RA.
* To use register names with standard convension, please use TRAM_RGNACCEN6_RA.
*/
#define TRAM_RGNACCENRA6 (TRAM_RGNACCEN6_RA)

/** \brief 13C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGNACCEN6_RB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RB*)0xFB71013Cu)
/** Alias (User Manual Name) for TRAM_RGNACCEN6_RB.
* To use register names with standard convension, please use TRAM_RGNACCEN6_RB.
*/
#define TRAM_RGNACCENRB6 (TRAM_RGNACCEN6_RB)

/** \brief 148, ${LMU_instance_name}Region Access Enable Register 0 */
#define TRAM_RGNACCEN7_RA /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RA*)0xFB710148u)
/** Alias (User Manual Name) for TRAM_RGNACCEN7_RA.
* To use register names with standard convension, please use TRAM_RGNACCEN7_RA.
*/
#define TRAM_RGNACCENRA7 (TRAM_RGNACCEN7_RA)

/** \brief 14C, ${LMU_instance_name}Region Access Enable Register 1 */
#define TRAM_RGNACCEN7_RB /*lint --e(923)*/ (*(volatile Ifx_TRAM_RGNACCEN_RB*)0xFB71014Cu)
/** Alias (User Manual Name) for TRAM_RGNACCEN7_RB.
* To use register names with standard convension, please use TRAM_RGNACCEN7_RB.
*/
#define TRAM_RGNACCENRB7 (TRAM_RGNACCEN7_RB)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXTRAM_REG_H */
