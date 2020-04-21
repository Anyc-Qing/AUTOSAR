/**
 * \file IfxDom_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:16:04 GMT
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
 * \defgroup IfxLld_Dom_Registers_Cfg Dom address
 * \ingroup IfxLld_Dom_Registers
 * 
 * \defgroup IfxLld_Dom_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Dom_Registers_Cfg
 *
 * \defgroup IfxLld_Dom_Registers_Cfg_Dom0 2-DOM0
 * \ingroup IfxLld_Dom_Registers_Cfg
 *
 * \defgroup IfxLld_Dom_Registers_Cfg_Dom1 2-DOM1
 * \ingroup IfxLld_Dom_Registers_Cfg
 *
 * \defgroup IfxLld_Dom_Registers_Cfg_Domed 2-DOMED
 * \ingroup IfxLld_Dom_Registers_Cfg
 *
 *
 */
#ifndef IFXDOM_REG_H
#define IFXDOM_REG_H 1
/******************************************************************************/
#include "IfxDom_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Dom_Cfg_BaseAddress
 * \{  */

/** \brief DOM object */
#define MODULE_DOM0 /*lint --e(923)*/ ((*(Ifx_DOM*)0xF8700000u))
#define MODULE_DOM1 /*lint --e(923)*/ ((*(Ifx_DOM*)0xF8708000u))
#define MODULE_DOMED /*lint --e(923)*/ ((*(Ifx_DOM*)0xFB700000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dom_Cfg_Dom0
 * \{  */
/** \brief 0, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL0_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700000u)
/** Alias (User Manual Name) for DOM0_SCICTRL0_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL0_PECON.
*/
#define DOM0_PECON0 (DOM0_SCICTRL0_PECON)

/** \brief 8, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL0_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700008u)
/** Alias (User Manual Name) for DOM0_SCICTRL0_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL0_PRIORITY.
*/
#define DOM0_PRIORITY0 (DOM0_SCICTRL0_PRIORITY)

/** \brief 10, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL0_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700010u)
/** Alias (User Manual Name) for DOM0_SCICTRL0_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL0_ERRADDR.
*/
#define DOM0_ERRADDR0 (DOM0_SCICTRL0_ERRADDR)

/** \brief 18, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL0_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700018u)
/** Alias (User Manual Name) for DOM0_SCICTRL0_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL0_ERR.
*/
#define DOM0_ERR0 (DOM0_SCICTRL0_ERR)

/** \brief 20, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL1_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700020u)
/** Alias (User Manual Name) for DOM0_SCICTRL1_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL1_PECON.
*/
#define DOM0_PECON1 (DOM0_SCICTRL1_PECON)

/** \brief 28, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL1_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700028u)
/** Alias (User Manual Name) for DOM0_SCICTRL1_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL1_PRIORITY.
*/
#define DOM0_PRIORITY1 (DOM0_SCICTRL1_PRIORITY)

/** \brief 30, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL1_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700030u)
/** Alias (User Manual Name) for DOM0_SCICTRL1_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL1_ERRADDR.
*/
#define DOM0_ERRADDR1 (DOM0_SCICTRL1_ERRADDR)

/** \brief 38, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL1_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700038u)
/** Alias (User Manual Name) for DOM0_SCICTRL1_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL1_ERR.
*/
#define DOM0_ERR1 (DOM0_SCICTRL1_ERR)

/** \brief 40, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL2_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700040u)
/** Alias (User Manual Name) for DOM0_SCICTRL2_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL2_PECON.
*/
#define DOM0_PECON2 (DOM0_SCICTRL2_PECON)

/** \brief 48, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL2_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700048u)
/** Alias (User Manual Name) for DOM0_SCICTRL2_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL2_PRIORITY.
*/
#define DOM0_PRIORITY2 (DOM0_SCICTRL2_PRIORITY)

/** \brief 50, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL2_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700050u)
/** Alias (User Manual Name) for DOM0_SCICTRL2_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL2_ERRADDR.
*/
#define DOM0_ERRADDR2 (DOM0_SCICTRL2_ERRADDR)

/** \brief 58, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL2_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700058u)
/** Alias (User Manual Name) for DOM0_SCICTRL2_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL2_ERR.
*/
#define DOM0_ERR2 (DOM0_SCICTRL2_ERR)

/** \brief 60, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL3_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700060u)
/** Alias (User Manual Name) for DOM0_SCICTRL3_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL3_PECON.
*/
#define DOM0_PECON3 (DOM0_SCICTRL3_PECON)

/** \brief 68, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL3_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700068u)
/** Alias (User Manual Name) for DOM0_SCICTRL3_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL3_PRIORITY.
*/
#define DOM0_PRIORITY3 (DOM0_SCICTRL3_PRIORITY)

/** \brief 70, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL3_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700070u)
/** Alias (User Manual Name) for DOM0_SCICTRL3_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL3_ERRADDR.
*/
#define DOM0_ERRADDR3 (DOM0_SCICTRL3_ERRADDR)

/** \brief 78, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL3_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700078u)
/** Alias (User Manual Name) for DOM0_SCICTRL3_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL3_ERR.
*/
#define DOM0_ERR3 (DOM0_SCICTRL3_ERR)

/** \brief 80, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL4_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700080u)
/** Alias (User Manual Name) for DOM0_SCICTRL4_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL4_PECON.
*/
#define DOM0_PECON4 (DOM0_SCICTRL4_PECON)

/** \brief 88, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL4_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700088u)
/** Alias (User Manual Name) for DOM0_SCICTRL4_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL4_PRIORITY.
*/
#define DOM0_PRIORITY4 (DOM0_SCICTRL4_PRIORITY)

/** \brief 90, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL4_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700090u)
/** Alias (User Manual Name) for DOM0_SCICTRL4_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL4_ERRADDR.
*/
#define DOM0_ERRADDR4 (DOM0_SCICTRL4_ERRADDR)

/** \brief 98, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL4_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700098u)
/** Alias (User Manual Name) for DOM0_SCICTRL4_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL4_ERR.
*/
#define DOM0_ERR4 (DOM0_SCICTRL4_ERR)

/** \brief A0, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL5_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87000A0u)
/** Alias (User Manual Name) for DOM0_SCICTRL5_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL5_PECON.
*/
#define DOM0_PECON5 (DOM0_SCICTRL5_PECON)

/** \brief A8, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL5_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87000A8u)
/** Alias (User Manual Name) for DOM0_SCICTRL5_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL5_PRIORITY.
*/
#define DOM0_PRIORITY5 (DOM0_SCICTRL5_PRIORITY)

/** \brief B0, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL5_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87000B0u)
/** Alias (User Manual Name) for DOM0_SCICTRL5_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL5_ERRADDR.
*/
#define DOM0_ERRADDR5 (DOM0_SCICTRL5_ERRADDR)

/** \brief B8, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL5_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87000B8u)
/** Alias (User Manual Name) for DOM0_SCICTRL5_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL5_ERR.
*/
#define DOM0_ERR5 (DOM0_SCICTRL5_ERR)

/** \brief C0, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL6_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87000C0u)
/** Alias (User Manual Name) for DOM0_SCICTRL6_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL6_PECON.
*/
#define DOM0_PECON6 (DOM0_SCICTRL6_PECON)

/** \brief C8, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL6_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87000C8u)
/** Alias (User Manual Name) for DOM0_SCICTRL6_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL6_PRIORITY.
*/
#define DOM0_PRIORITY6 (DOM0_SCICTRL6_PRIORITY)

/** \brief D0, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL6_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87000D0u)
/** Alias (User Manual Name) for DOM0_SCICTRL6_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL6_ERRADDR.
*/
#define DOM0_ERRADDR6 (DOM0_SCICTRL6_ERRADDR)

/** \brief D8, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL6_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87000D8u)
/** Alias (User Manual Name) for DOM0_SCICTRL6_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL6_ERR.
*/
#define DOM0_ERR6 (DOM0_SCICTRL6_ERR)

/** \brief E0, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL7_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87000E0u)
/** Alias (User Manual Name) for DOM0_SCICTRL7_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL7_PECON.
*/
#define DOM0_PECON7 (DOM0_SCICTRL7_PECON)

/** \brief E8, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL7_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87000E8u)
/** Alias (User Manual Name) for DOM0_SCICTRL7_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL7_PRIORITY.
*/
#define DOM0_PRIORITY7 (DOM0_SCICTRL7_PRIORITY)

/** \brief F0, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL7_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87000F0u)
/** Alias (User Manual Name) for DOM0_SCICTRL7_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL7_ERRADDR.
*/
#define DOM0_ERRADDR7 (DOM0_SCICTRL7_ERRADDR)

/** \brief F8, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL7_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87000F8u)
/** Alias (User Manual Name) for DOM0_SCICTRL7_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL7_ERR.
*/
#define DOM0_ERR7 (DOM0_SCICTRL7_ERR)

/** \brief 100, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL8_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700100u)
/** Alias (User Manual Name) for DOM0_SCICTRL8_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL8_PECON.
*/
#define DOM0_PECON8 (DOM0_SCICTRL8_PECON)

/** \brief 108, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL8_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700108u)
/** Alias (User Manual Name) for DOM0_SCICTRL8_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL8_PRIORITY.
*/
#define DOM0_PRIORITY8 (DOM0_SCICTRL8_PRIORITY)

/** \brief 110, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL8_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700110u)
/** Alias (User Manual Name) for DOM0_SCICTRL8_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL8_ERRADDR.
*/
#define DOM0_ERRADDR8 (DOM0_SCICTRL8_ERRADDR)

/** \brief 118, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL8_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700118u)
/** Alias (User Manual Name) for DOM0_SCICTRL8_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL8_ERR.
*/
#define DOM0_ERR8 (DOM0_SCICTRL8_ERR)

/** \brief 120, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL9_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700120u)
/** Alias (User Manual Name) for DOM0_SCICTRL9_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL9_PECON.
*/
#define DOM0_PECON9 (DOM0_SCICTRL9_PECON)

/** \brief 128, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL9_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700128u)
/** Alias (User Manual Name) for DOM0_SCICTRL9_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL9_PRIORITY.
*/
#define DOM0_PRIORITY9 (DOM0_SCICTRL9_PRIORITY)

/** \brief 130, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL9_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700130u)
/** Alias (User Manual Name) for DOM0_SCICTRL9_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL9_ERRADDR.
*/
#define DOM0_ERRADDR9 (DOM0_SCICTRL9_ERRADDR)

/** \brief 138, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL9_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700138u)
/** Alias (User Manual Name) for DOM0_SCICTRL9_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL9_ERR.
*/
#define DOM0_ERR9 (DOM0_SCICTRL9_ERR)

/** \brief 140, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL10_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700140u)
/** Alias (User Manual Name) for DOM0_SCICTRL10_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL10_PECON.
*/
#define DOM0_PECON10 (DOM0_SCICTRL10_PECON)

/** \brief 148, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL10_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700148u)
/** Alias (User Manual Name) for DOM0_SCICTRL10_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL10_PRIORITY.
*/
#define DOM0_PRIORITY10 (DOM0_SCICTRL10_PRIORITY)

/** \brief 150, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL10_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700150u)
/** Alias (User Manual Name) for DOM0_SCICTRL10_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL10_ERRADDR.
*/
#define DOM0_ERRADDR10 (DOM0_SCICTRL10_ERRADDR)

/** \brief 158, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL10_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700158u)
/** Alias (User Manual Name) for DOM0_SCICTRL10_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL10_ERR.
*/
#define DOM0_ERR10 (DOM0_SCICTRL10_ERR)

/** \brief 160, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL11_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700160u)
/** Alias (User Manual Name) for DOM0_SCICTRL11_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL11_PECON.
*/
#define DOM0_PECON11 (DOM0_SCICTRL11_PECON)

/** \brief 168, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL11_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700168u)
/** Alias (User Manual Name) for DOM0_SCICTRL11_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL11_PRIORITY.
*/
#define DOM0_PRIORITY11 (DOM0_SCICTRL11_PRIORITY)

/** \brief 170, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL11_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700170u)
/** Alias (User Manual Name) for DOM0_SCICTRL11_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL11_ERRADDR.
*/
#define DOM0_ERRADDR11 (DOM0_SCICTRL11_ERRADDR)

/** \brief 178, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL11_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700178u)
/** Alias (User Manual Name) for DOM0_SCICTRL11_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL11_ERR.
*/
#define DOM0_ERR11 (DOM0_SCICTRL11_ERR)

/** \brief 180, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL12_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8700180u)
/** Alias (User Manual Name) for DOM0_SCICTRL12_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL12_PECON.
*/
#define DOM0_PECON12 (DOM0_SCICTRL12_PECON)

/** \brief 188, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL12_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8700188u)
/** Alias (User Manual Name) for DOM0_SCICTRL12_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL12_PRIORITY.
*/
#define DOM0_PRIORITY12 (DOM0_SCICTRL12_PRIORITY)

/** \brief 190, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL12_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8700190u)
/** Alias (User Manual Name) for DOM0_SCICTRL12_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL12_ERRADDR.
*/
#define DOM0_ERRADDR12 (DOM0_SCICTRL12_ERRADDR)

/** \brief 198, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL12_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8700198u)
/** Alias (User Manual Name) for DOM0_SCICTRL12_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL12_ERR.
*/
#define DOM0_ERR12 (DOM0_SCICTRL12_ERR)

/** \brief 1A0, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL13_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87001A0u)
/** Alias (User Manual Name) for DOM0_SCICTRL13_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL13_PECON.
*/
#define DOM0_PECON13 (DOM0_SCICTRL13_PECON)

/** \brief 1A8, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL13_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87001A8u)
/** Alias (User Manual Name) for DOM0_SCICTRL13_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL13_PRIORITY.
*/
#define DOM0_PRIORITY13 (DOM0_SCICTRL13_PRIORITY)

/** \brief 1B0, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL13_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87001B0u)
/** Alias (User Manual Name) for DOM0_SCICTRL13_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL13_ERRADDR.
*/
#define DOM0_ERRADDR13 (DOM0_SCICTRL13_ERRADDR)

/** \brief 1B8, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL13_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87001B8u)
/** Alias (User Manual Name) for DOM0_SCICTRL13_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL13_ERR.
*/
#define DOM0_ERR13 (DOM0_SCICTRL13_ERR)

/** \brief 1C0, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL14_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87001C0u)
/** Alias (User Manual Name) for DOM0_SCICTRL14_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL14_PECON.
*/
#define DOM0_PECON14 (DOM0_SCICTRL14_PECON)

/** \brief 1C8, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL14_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87001C8u)
/** Alias (User Manual Name) for DOM0_SCICTRL14_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL14_PRIORITY.
*/
#define DOM0_PRIORITY14 (DOM0_SCICTRL14_PRIORITY)

/** \brief 1D0, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL14_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87001D0u)
/** Alias (User Manual Name) for DOM0_SCICTRL14_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL14_ERRADDR.
*/
#define DOM0_ERRADDR14 (DOM0_SCICTRL14_ERRADDR)

/** \brief 1D8, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL14_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87001D8u)
/** Alias (User Manual Name) for DOM0_SCICTRL14_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL14_ERR.
*/
#define DOM0_ERR14 (DOM0_SCICTRL14_ERR)

/** \brief 1E0, Protocol Error Control Register ${i} */
#define DOM0_SCICTRL15_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87001E0u)
/** Alias (User Manual Name) for DOM0_SCICTRL15_PECON.
* To use register names with standard convension, please use DOM0_SCICTRL15_PECON.
*/
#define DOM0_PECON15 (DOM0_SCICTRL15_PECON)

/** \brief 1E8, SCI ${i} Arbiter Priority Register */
#define DOM0_SCICTRL15_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87001E8u)
/** Alias (User Manual Name) for DOM0_SCICTRL15_PRIORITY.
* To use register names with standard convension, please use DOM0_SCICTRL15_PRIORITY.
*/
#define DOM0_PRIORITY15 (DOM0_SCICTRL15_PRIORITY)

/** \brief 1F0, SCI ${i} Error Address Capture Register */
#define DOM0_SCICTRL15_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87001F0u)
/** Alias (User Manual Name) for DOM0_SCICTRL15_ERRADDR.
* To use register names with standard convension, please use DOM0_SCICTRL15_ERRADDR.
*/
#define DOM0_ERRADDR15 (DOM0_SCICTRL15_ERRADDR)

/** \brief 1F8, SCI ${i} Error Capture Register */
#define DOM0_SCICTRL15_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87001F8u)
/** Alias (User Manual Name) for DOM0_SCICTRL15_ERR.
* To use register names with standard convension, please use DOM0_SCICTRL15_ERR.
*/
#define DOM0_ERR15 (DOM0_SCICTRL15_ERR)

/** \brief 408, Identification Register */
#define DOM0_ID /*lint --e(923)*/ (*(volatile Ifx_DOM_ID*)0xF8700408u)

/** \brief 410, Protocol Error Status Register */
#define DOM0_PESTAT /*lint --e(923)*/ (*(volatile Ifx_DOM_PESTAT*)0xF8700410u)

/** \brief 418, Transaction ID Status Register */
#define DOM0_TIDSTAT /*lint --e(923)*/ (*(volatile Ifx_DOM_TIDSTAT*)0xF8700418u)

/** \brief 420, Transaction ID Enable Register */
#define DOM0_TIDEN /*lint --e(923)*/ (*(volatile Ifx_DOM_TIDEN*)0xF8700420u)

/** \brief 430,  */
#define DOM0_BRCON /*lint --e(923)*/ (*(volatile Ifx_DOM_BRCON*)0xF8700430u)

/** \brief 4F0, Access Enable Register 0 */
#define DOM0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_DOM_ACCEN0*)0xF87004F0u)

/** \brief 4F8, Access Enable Register 1 */
#define DOM0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_DOM_ACCEN1*)0xF87004F8u)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dom_Cfg_Dom1
 * \{  */
/** \brief 0, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL0_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708000u)
/** Alias (User Manual Name) for DOM1_SCICTRL0_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL0_PECON.
*/
#define DOM1_PECON0 (DOM1_SCICTRL0_PECON)

/** \brief 8, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL0_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708008u)
/** Alias (User Manual Name) for DOM1_SCICTRL0_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL0_PRIORITY.
*/
#define DOM1_PRIORITY0 (DOM1_SCICTRL0_PRIORITY)

/** \brief 10, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL0_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708010u)
/** Alias (User Manual Name) for DOM1_SCICTRL0_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL0_ERRADDR.
*/
#define DOM1_ERRADDR0 (DOM1_SCICTRL0_ERRADDR)

/** \brief 18, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL0_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708018u)
/** Alias (User Manual Name) for DOM1_SCICTRL0_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL0_ERR.
*/
#define DOM1_ERR0 (DOM1_SCICTRL0_ERR)

/** \brief 20, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL1_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708020u)
/** Alias (User Manual Name) for DOM1_SCICTRL1_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL1_PECON.
*/
#define DOM1_PECON1 (DOM1_SCICTRL1_PECON)

/** \brief 28, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL1_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708028u)
/** Alias (User Manual Name) for DOM1_SCICTRL1_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL1_PRIORITY.
*/
#define DOM1_PRIORITY1 (DOM1_SCICTRL1_PRIORITY)

/** \brief 30, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL1_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708030u)
/** Alias (User Manual Name) for DOM1_SCICTRL1_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL1_ERRADDR.
*/
#define DOM1_ERRADDR1 (DOM1_SCICTRL1_ERRADDR)

/** \brief 38, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL1_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708038u)
/** Alias (User Manual Name) for DOM1_SCICTRL1_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL1_ERR.
*/
#define DOM1_ERR1 (DOM1_SCICTRL1_ERR)

/** \brief 40, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL2_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708040u)
/** Alias (User Manual Name) for DOM1_SCICTRL2_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL2_PECON.
*/
#define DOM1_PECON2 (DOM1_SCICTRL2_PECON)

/** \brief 48, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL2_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708048u)
/** Alias (User Manual Name) for DOM1_SCICTRL2_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL2_PRIORITY.
*/
#define DOM1_PRIORITY2 (DOM1_SCICTRL2_PRIORITY)

/** \brief 50, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL2_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708050u)
/** Alias (User Manual Name) for DOM1_SCICTRL2_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL2_ERRADDR.
*/
#define DOM1_ERRADDR2 (DOM1_SCICTRL2_ERRADDR)

/** \brief 58, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL2_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708058u)
/** Alias (User Manual Name) for DOM1_SCICTRL2_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL2_ERR.
*/
#define DOM1_ERR2 (DOM1_SCICTRL2_ERR)

/** \brief 60, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL3_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708060u)
/** Alias (User Manual Name) for DOM1_SCICTRL3_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL3_PECON.
*/
#define DOM1_PECON3 (DOM1_SCICTRL3_PECON)

/** \brief 68, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL3_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708068u)
/** Alias (User Manual Name) for DOM1_SCICTRL3_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL3_PRIORITY.
*/
#define DOM1_PRIORITY3 (DOM1_SCICTRL3_PRIORITY)

/** \brief 70, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL3_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708070u)
/** Alias (User Manual Name) for DOM1_SCICTRL3_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL3_ERRADDR.
*/
#define DOM1_ERRADDR3 (DOM1_SCICTRL3_ERRADDR)

/** \brief 78, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL3_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708078u)
/** Alias (User Manual Name) for DOM1_SCICTRL3_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL3_ERR.
*/
#define DOM1_ERR3 (DOM1_SCICTRL3_ERR)

/** \brief 80, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL4_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708080u)
/** Alias (User Manual Name) for DOM1_SCICTRL4_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL4_PECON.
*/
#define DOM1_PECON4 (DOM1_SCICTRL4_PECON)

/** \brief 88, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL4_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708088u)
/** Alias (User Manual Name) for DOM1_SCICTRL4_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL4_PRIORITY.
*/
#define DOM1_PRIORITY4 (DOM1_SCICTRL4_PRIORITY)

/** \brief 90, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL4_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708090u)
/** Alias (User Manual Name) for DOM1_SCICTRL4_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL4_ERRADDR.
*/
#define DOM1_ERRADDR4 (DOM1_SCICTRL4_ERRADDR)

/** \brief 98, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL4_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708098u)
/** Alias (User Manual Name) for DOM1_SCICTRL4_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL4_ERR.
*/
#define DOM1_ERR4 (DOM1_SCICTRL4_ERR)

/** \brief A0, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL5_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87080A0u)
/** Alias (User Manual Name) for DOM1_SCICTRL5_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL5_PECON.
*/
#define DOM1_PECON5 (DOM1_SCICTRL5_PECON)

/** \brief A8, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL5_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87080A8u)
/** Alias (User Manual Name) for DOM1_SCICTRL5_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL5_PRIORITY.
*/
#define DOM1_PRIORITY5 (DOM1_SCICTRL5_PRIORITY)

/** \brief B0, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL5_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87080B0u)
/** Alias (User Manual Name) for DOM1_SCICTRL5_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL5_ERRADDR.
*/
#define DOM1_ERRADDR5 (DOM1_SCICTRL5_ERRADDR)

/** \brief B8, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL5_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87080B8u)
/** Alias (User Manual Name) for DOM1_SCICTRL5_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL5_ERR.
*/
#define DOM1_ERR5 (DOM1_SCICTRL5_ERR)

/** \brief C0, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL6_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87080C0u)
/** Alias (User Manual Name) for DOM1_SCICTRL6_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL6_PECON.
*/
#define DOM1_PECON6 (DOM1_SCICTRL6_PECON)

/** \brief C8, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL6_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87080C8u)
/** Alias (User Manual Name) for DOM1_SCICTRL6_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL6_PRIORITY.
*/
#define DOM1_PRIORITY6 (DOM1_SCICTRL6_PRIORITY)

/** \brief D0, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL6_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87080D0u)
/** Alias (User Manual Name) for DOM1_SCICTRL6_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL6_ERRADDR.
*/
#define DOM1_ERRADDR6 (DOM1_SCICTRL6_ERRADDR)

/** \brief D8, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL6_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87080D8u)
/** Alias (User Manual Name) for DOM1_SCICTRL6_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL6_ERR.
*/
#define DOM1_ERR6 (DOM1_SCICTRL6_ERR)

/** \brief E0, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL7_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87080E0u)
/** Alias (User Manual Name) for DOM1_SCICTRL7_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL7_PECON.
*/
#define DOM1_PECON7 (DOM1_SCICTRL7_PECON)

/** \brief E8, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL7_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87080E8u)
/** Alias (User Manual Name) for DOM1_SCICTRL7_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL7_PRIORITY.
*/
#define DOM1_PRIORITY7 (DOM1_SCICTRL7_PRIORITY)

/** \brief F0, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL7_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87080F0u)
/** Alias (User Manual Name) for DOM1_SCICTRL7_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL7_ERRADDR.
*/
#define DOM1_ERRADDR7 (DOM1_SCICTRL7_ERRADDR)

/** \brief F8, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL7_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87080F8u)
/** Alias (User Manual Name) for DOM1_SCICTRL7_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL7_ERR.
*/
#define DOM1_ERR7 (DOM1_SCICTRL7_ERR)

/** \brief 100, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL8_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708100u)
/** Alias (User Manual Name) for DOM1_SCICTRL8_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL8_PECON.
*/
#define DOM1_PECON8 (DOM1_SCICTRL8_PECON)

/** \brief 108, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL8_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708108u)
/** Alias (User Manual Name) for DOM1_SCICTRL8_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL8_PRIORITY.
*/
#define DOM1_PRIORITY8 (DOM1_SCICTRL8_PRIORITY)

/** \brief 110, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL8_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708110u)
/** Alias (User Manual Name) for DOM1_SCICTRL8_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL8_ERRADDR.
*/
#define DOM1_ERRADDR8 (DOM1_SCICTRL8_ERRADDR)

/** \brief 118, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL8_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708118u)
/** Alias (User Manual Name) for DOM1_SCICTRL8_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL8_ERR.
*/
#define DOM1_ERR8 (DOM1_SCICTRL8_ERR)

/** \brief 120, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL9_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708120u)
/** Alias (User Manual Name) for DOM1_SCICTRL9_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL9_PECON.
*/
#define DOM1_PECON9 (DOM1_SCICTRL9_PECON)

/** \brief 128, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL9_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708128u)
/** Alias (User Manual Name) for DOM1_SCICTRL9_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL9_PRIORITY.
*/
#define DOM1_PRIORITY9 (DOM1_SCICTRL9_PRIORITY)

/** \brief 130, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL9_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708130u)
/** Alias (User Manual Name) for DOM1_SCICTRL9_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL9_ERRADDR.
*/
#define DOM1_ERRADDR9 (DOM1_SCICTRL9_ERRADDR)

/** \brief 138, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL9_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708138u)
/** Alias (User Manual Name) for DOM1_SCICTRL9_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL9_ERR.
*/
#define DOM1_ERR9 (DOM1_SCICTRL9_ERR)

/** \brief 140, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL10_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708140u)
/** Alias (User Manual Name) for DOM1_SCICTRL10_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL10_PECON.
*/
#define DOM1_PECON10 (DOM1_SCICTRL10_PECON)

/** \brief 148, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL10_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708148u)
/** Alias (User Manual Name) for DOM1_SCICTRL10_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL10_PRIORITY.
*/
#define DOM1_PRIORITY10 (DOM1_SCICTRL10_PRIORITY)

/** \brief 150, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL10_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708150u)
/** Alias (User Manual Name) for DOM1_SCICTRL10_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL10_ERRADDR.
*/
#define DOM1_ERRADDR10 (DOM1_SCICTRL10_ERRADDR)

/** \brief 158, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL10_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708158u)
/** Alias (User Manual Name) for DOM1_SCICTRL10_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL10_ERR.
*/
#define DOM1_ERR10 (DOM1_SCICTRL10_ERR)

/** \brief 160, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL11_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708160u)
/** Alias (User Manual Name) for DOM1_SCICTRL11_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL11_PECON.
*/
#define DOM1_PECON11 (DOM1_SCICTRL11_PECON)

/** \brief 168, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL11_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708168u)
/** Alias (User Manual Name) for DOM1_SCICTRL11_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL11_PRIORITY.
*/
#define DOM1_PRIORITY11 (DOM1_SCICTRL11_PRIORITY)

/** \brief 170, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL11_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708170u)
/** Alias (User Manual Name) for DOM1_SCICTRL11_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL11_ERRADDR.
*/
#define DOM1_ERRADDR11 (DOM1_SCICTRL11_ERRADDR)

/** \brief 178, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL11_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708178u)
/** Alias (User Manual Name) for DOM1_SCICTRL11_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL11_ERR.
*/
#define DOM1_ERR11 (DOM1_SCICTRL11_ERR)

/** \brief 180, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL12_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF8708180u)
/** Alias (User Manual Name) for DOM1_SCICTRL12_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL12_PECON.
*/
#define DOM1_PECON12 (DOM1_SCICTRL12_PECON)

/** \brief 188, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL12_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF8708188u)
/** Alias (User Manual Name) for DOM1_SCICTRL12_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL12_PRIORITY.
*/
#define DOM1_PRIORITY12 (DOM1_SCICTRL12_PRIORITY)

/** \brief 190, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL12_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF8708190u)
/** Alias (User Manual Name) for DOM1_SCICTRL12_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL12_ERRADDR.
*/
#define DOM1_ERRADDR12 (DOM1_SCICTRL12_ERRADDR)

/** \brief 198, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL12_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF8708198u)
/** Alias (User Manual Name) for DOM1_SCICTRL12_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL12_ERR.
*/
#define DOM1_ERR12 (DOM1_SCICTRL12_ERR)

/** \brief 1A0, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL13_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87081A0u)
/** Alias (User Manual Name) for DOM1_SCICTRL13_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL13_PECON.
*/
#define DOM1_PECON13 (DOM1_SCICTRL13_PECON)

/** \brief 1A8, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL13_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87081A8u)
/** Alias (User Manual Name) for DOM1_SCICTRL13_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL13_PRIORITY.
*/
#define DOM1_PRIORITY13 (DOM1_SCICTRL13_PRIORITY)

/** \brief 1B0, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL13_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87081B0u)
/** Alias (User Manual Name) for DOM1_SCICTRL13_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL13_ERRADDR.
*/
#define DOM1_ERRADDR13 (DOM1_SCICTRL13_ERRADDR)

/** \brief 1B8, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL13_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87081B8u)
/** Alias (User Manual Name) for DOM1_SCICTRL13_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL13_ERR.
*/
#define DOM1_ERR13 (DOM1_SCICTRL13_ERR)

/** \brief 1C0, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL14_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87081C0u)
/** Alias (User Manual Name) for DOM1_SCICTRL14_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL14_PECON.
*/
#define DOM1_PECON14 (DOM1_SCICTRL14_PECON)

/** \brief 1C8, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL14_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87081C8u)
/** Alias (User Manual Name) for DOM1_SCICTRL14_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL14_PRIORITY.
*/
#define DOM1_PRIORITY14 (DOM1_SCICTRL14_PRIORITY)

/** \brief 1D0, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL14_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87081D0u)
/** Alias (User Manual Name) for DOM1_SCICTRL14_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL14_ERRADDR.
*/
#define DOM1_ERRADDR14 (DOM1_SCICTRL14_ERRADDR)

/** \brief 1D8, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL14_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87081D8u)
/** Alias (User Manual Name) for DOM1_SCICTRL14_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL14_ERR.
*/
#define DOM1_ERR14 (DOM1_SCICTRL14_ERR)

/** \brief 1E0, Protocol Error Control Register ${i} */
#define DOM1_SCICTRL15_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xF87081E0u)
/** Alias (User Manual Name) for DOM1_SCICTRL15_PECON.
* To use register names with standard convension, please use DOM1_SCICTRL15_PECON.
*/
#define DOM1_PECON15 (DOM1_SCICTRL15_PECON)

/** \brief 1E8, SCI ${i} Arbiter Priority Register */
#define DOM1_SCICTRL15_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xF87081E8u)
/** Alias (User Manual Name) for DOM1_SCICTRL15_PRIORITY.
* To use register names with standard convension, please use DOM1_SCICTRL15_PRIORITY.
*/
#define DOM1_PRIORITY15 (DOM1_SCICTRL15_PRIORITY)

/** \brief 1F0, SCI ${i} Error Address Capture Register */
#define DOM1_SCICTRL15_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xF87081F0u)
/** Alias (User Manual Name) for DOM1_SCICTRL15_ERRADDR.
* To use register names with standard convension, please use DOM1_SCICTRL15_ERRADDR.
*/
#define DOM1_ERRADDR15 (DOM1_SCICTRL15_ERRADDR)

/** \brief 1F8, SCI ${i} Error Capture Register */
#define DOM1_SCICTRL15_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xF87081F8u)
/** Alias (User Manual Name) for DOM1_SCICTRL15_ERR.
* To use register names with standard convension, please use DOM1_SCICTRL15_ERR.
*/
#define DOM1_ERR15 (DOM1_SCICTRL15_ERR)

/** \brief 408, Identification Register */
#define DOM1_ID /*lint --e(923)*/ (*(volatile Ifx_DOM_ID*)0xF8708408u)

/** \brief 410, Protocol Error Status Register */
#define DOM1_PESTAT /*lint --e(923)*/ (*(volatile Ifx_DOM_PESTAT*)0xF8708410u)

/** \brief 418, Transaction ID Status Register */
#define DOM1_TIDSTAT /*lint --e(923)*/ (*(volatile Ifx_DOM_TIDSTAT*)0xF8708418u)

/** \brief 420, Transaction ID Enable Register */
#define DOM1_TIDEN /*lint --e(923)*/ (*(volatile Ifx_DOM_TIDEN*)0xF8708420u)

/** \brief 430,  */
#define DOM1_BRCON /*lint --e(923)*/ (*(volatile Ifx_DOM_BRCON*)0xF8708430u)

/** \brief 4F0, Access Enable Register 0 */
#define DOM1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_DOM_ACCEN0*)0xF87084F0u)

/** \brief 4F8, Access Enable Register 1 */
#define DOM1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_DOM_ACCEN1*)0xF87084F8u)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dom_Cfg_Domed
 * \{  */
/** \brief 0, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL0_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700000u)
/** Alias (User Manual Name) for DOMED_SCICTRL0_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL0_PECON.
*/
#define DOMED_PECON0 (DOMED_SCICTRL0_PECON)

/** \brief 8, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL0_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700008u)
/** Alias (User Manual Name) for DOMED_SCICTRL0_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL0_PRIORITY.
*/
#define DOMED_PRIORITY0 (DOMED_SCICTRL0_PRIORITY)

/** \brief 10, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL0_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700010u)
/** Alias (User Manual Name) for DOMED_SCICTRL0_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL0_ERRADDR.
*/
#define DOMED_ERRADDR0 (DOMED_SCICTRL0_ERRADDR)

/** \brief 18, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL0_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700018u)
/** Alias (User Manual Name) for DOMED_SCICTRL0_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL0_ERR.
*/
#define DOMED_ERR0 (DOMED_SCICTRL0_ERR)

/** \brief 20, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL1_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700020u)
/** Alias (User Manual Name) for DOMED_SCICTRL1_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL1_PECON.
*/
#define DOMED_PECON1 (DOMED_SCICTRL1_PECON)

/** \brief 28, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL1_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700028u)
/** Alias (User Manual Name) for DOMED_SCICTRL1_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL1_PRIORITY.
*/
#define DOMED_PRIORITY1 (DOMED_SCICTRL1_PRIORITY)

/** \brief 30, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL1_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700030u)
/** Alias (User Manual Name) for DOMED_SCICTRL1_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL1_ERRADDR.
*/
#define DOMED_ERRADDR1 (DOMED_SCICTRL1_ERRADDR)

/** \brief 38, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL1_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700038u)
/** Alias (User Manual Name) for DOMED_SCICTRL1_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL1_ERR.
*/
#define DOMED_ERR1 (DOMED_SCICTRL1_ERR)

/** \brief 40, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL2_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700040u)
/** Alias (User Manual Name) for DOMED_SCICTRL2_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL2_PECON.
*/
#define DOMED_PECON2 (DOMED_SCICTRL2_PECON)

/** \brief 48, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL2_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700048u)
/** Alias (User Manual Name) for DOMED_SCICTRL2_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL2_PRIORITY.
*/
#define DOMED_PRIORITY2 (DOMED_SCICTRL2_PRIORITY)

/** \brief 50, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL2_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700050u)
/** Alias (User Manual Name) for DOMED_SCICTRL2_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL2_ERRADDR.
*/
#define DOMED_ERRADDR2 (DOMED_SCICTRL2_ERRADDR)

/** \brief 58, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL2_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700058u)
/** Alias (User Manual Name) for DOMED_SCICTRL2_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL2_ERR.
*/
#define DOMED_ERR2 (DOMED_SCICTRL2_ERR)

/** \brief 60, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL3_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700060u)
/** Alias (User Manual Name) for DOMED_SCICTRL3_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL3_PECON.
*/
#define DOMED_PECON3 (DOMED_SCICTRL3_PECON)

/** \brief 68, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL3_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700068u)
/** Alias (User Manual Name) for DOMED_SCICTRL3_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL3_PRIORITY.
*/
#define DOMED_PRIORITY3 (DOMED_SCICTRL3_PRIORITY)

/** \brief 70, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL3_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700070u)
/** Alias (User Manual Name) for DOMED_SCICTRL3_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL3_ERRADDR.
*/
#define DOMED_ERRADDR3 (DOMED_SCICTRL3_ERRADDR)

/** \brief 78, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL3_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700078u)
/** Alias (User Manual Name) for DOMED_SCICTRL3_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL3_ERR.
*/
#define DOMED_ERR3 (DOMED_SCICTRL3_ERR)

/** \brief 80, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL4_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700080u)
/** Alias (User Manual Name) for DOMED_SCICTRL4_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL4_PECON.
*/
#define DOMED_PECON4 (DOMED_SCICTRL4_PECON)

/** \brief 88, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL4_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700088u)
/** Alias (User Manual Name) for DOMED_SCICTRL4_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL4_PRIORITY.
*/
#define DOMED_PRIORITY4 (DOMED_SCICTRL4_PRIORITY)

/** \brief 90, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL4_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700090u)
/** Alias (User Manual Name) for DOMED_SCICTRL4_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL4_ERRADDR.
*/
#define DOMED_ERRADDR4 (DOMED_SCICTRL4_ERRADDR)

/** \brief 98, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL4_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700098u)
/** Alias (User Manual Name) for DOMED_SCICTRL4_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL4_ERR.
*/
#define DOMED_ERR4 (DOMED_SCICTRL4_ERR)

/** \brief A0, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL5_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB7000A0u)
/** Alias (User Manual Name) for DOMED_SCICTRL5_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL5_PECON.
*/
#define DOMED_PECON5 (DOMED_SCICTRL5_PECON)

/** \brief A8, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL5_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB7000A8u)
/** Alias (User Manual Name) for DOMED_SCICTRL5_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL5_PRIORITY.
*/
#define DOMED_PRIORITY5 (DOMED_SCICTRL5_PRIORITY)

/** \brief B0, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL5_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB7000B0u)
/** Alias (User Manual Name) for DOMED_SCICTRL5_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL5_ERRADDR.
*/
#define DOMED_ERRADDR5 (DOMED_SCICTRL5_ERRADDR)

/** \brief B8, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL5_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB7000B8u)
/** Alias (User Manual Name) for DOMED_SCICTRL5_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL5_ERR.
*/
#define DOMED_ERR5 (DOMED_SCICTRL5_ERR)

/** \brief C0, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL6_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB7000C0u)
/** Alias (User Manual Name) for DOMED_SCICTRL6_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL6_PECON.
*/
#define DOMED_PECON6 (DOMED_SCICTRL6_PECON)

/** \brief C8, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL6_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB7000C8u)
/** Alias (User Manual Name) for DOMED_SCICTRL6_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL6_PRIORITY.
*/
#define DOMED_PRIORITY6 (DOMED_SCICTRL6_PRIORITY)

/** \brief D0, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL6_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB7000D0u)
/** Alias (User Manual Name) for DOMED_SCICTRL6_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL6_ERRADDR.
*/
#define DOMED_ERRADDR6 (DOMED_SCICTRL6_ERRADDR)

/** \brief D8, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL6_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB7000D8u)
/** Alias (User Manual Name) for DOMED_SCICTRL6_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL6_ERR.
*/
#define DOMED_ERR6 (DOMED_SCICTRL6_ERR)

/** \brief E0, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL7_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB7000E0u)
/** Alias (User Manual Name) for DOMED_SCICTRL7_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL7_PECON.
*/
#define DOMED_PECON7 (DOMED_SCICTRL7_PECON)

/** \brief E8, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL7_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB7000E8u)
/** Alias (User Manual Name) for DOMED_SCICTRL7_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL7_PRIORITY.
*/
#define DOMED_PRIORITY7 (DOMED_SCICTRL7_PRIORITY)

/** \brief F0, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL7_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB7000F0u)
/** Alias (User Manual Name) for DOMED_SCICTRL7_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL7_ERRADDR.
*/
#define DOMED_ERRADDR7 (DOMED_SCICTRL7_ERRADDR)

/** \brief F8, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL7_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB7000F8u)
/** Alias (User Manual Name) for DOMED_SCICTRL7_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL7_ERR.
*/
#define DOMED_ERR7 (DOMED_SCICTRL7_ERR)

/** \brief 100, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL8_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700100u)
/** Alias (User Manual Name) for DOMED_SCICTRL8_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL8_PECON.
*/
#define DOMED_PECON8 (DOMED_SCICTRL8_PECON)

/** \brief 108, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL8_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700108u)
/** Alias (User Manual Name) for DOMED_SCICTRL8_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL8_PRIORITY.
*/
#define DOMED_PRIORITY8 (DOMED_SCICTRL8_PRIORITY)

/** \brief 110, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL8_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700110u)
/** Alias (User Manual Name) for DOMED_SCICTRL8_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL8_ERRADDR.
*/
#define DOMED_ERRADDR8 (DOMED_SCICTRL8_ERRADDR)

/** \brief 118, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL8_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700118u)
/** Alias (User Manual Name) for DOMED_SCICTRL8_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL8_ERR.
*/
#define DOMED_ERR8 (DOMED_SCICTRL8_ERR)

/** \brief 120, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL9_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700120u)
/** Alias (User Manual Name) for DOMED_SCICTRL9_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL9_PECON.
*/
#define DOMED_PECON9 (DOMED_SCICTRL9_PECON)

/** \brief 128, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL9_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700128u)
/** Alias (User Manual Name) for DOMED_SCICTRL9_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL9_PRIORITY.
*/
#define DOMED_PRIORITY9 (DOMED_SCICTRL9_PRIORITY)

/** \brief 130, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL9_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700130u)
/** Alias (User Manual Name) for DOMED_SCICTRL9_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL9_ERRADDR.
*/
#define DOMED_ERRADDR9 (DOMED_SCICTRL9_ERRADDR)

/** \brief 138, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL9_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700138u)
/** Alias (User Manual Name) for DOMED_SCICTRL9_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL9_ERR.
*/
#define DOMED_ERR9 (DOMED_SCICTRL9_ERR)

/** \brief 140, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL10_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700140u)
/** Alias (User Manual Name) for DOMED_SCICTRL10_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL10_PECON.
*/
#define DOMED_PECON10 (DOMED_SCICTRL10_PECON)

/** \brief 148, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL10_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700148u)
/** Alias (User Manual Name) for DOMED_SCICTRL10_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL10_PRIORITY.
*/
#define DOMED_PRIORITY10 (DOMED_SCICTRL10_PRIORITY)

/** \brief 150, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL10_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700150u)
/** Alias (User Manual Name) for DOMED_SCICTRL10_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL10_ERRADDR.
*/
#define DOMED_ERRADDR10 (DOMED_SCICTRL10_ERRADDR)

/** \brief 158, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL10_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700158u)
/** Alias (User Manual Name) for DOMED_SCICTRL10_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL10_ERR.
*/
#define DOMED_ERR10 (DOMED_SCICTRL10_ERR)

/** \brief 160, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL11_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700160u)
/** Alias (User Manual Name) for DOMED_SCICTRL11_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL11_PECON.
*/
#define DOMED_PECON11 (DOMED_SCICTRL11_PECON)

/** \brief 168, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL11_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700168u)
/** Alias (User Manual Name) for DOMED_SCICTRL11_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL11_PRIORITY.
*/
#define DOMED_PRIORITY11 (DOMED_SCICTRL11_PRIORITY)

/** \brief 170, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL11_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700170u)
/** Alias (User Manual Name) for DOMED_SCICTRL11_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL11_ERRADDR.
*/
#define DOMED_ERRADDR11 (DOMED_SCICTRL11_ERRADDR)

/** \brief 178, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL11_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700178u)
/** Alias (User Manual Name) for DOMED_SCICTRL11_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL11_ERR.
*/
#define DOMED_ERR11 (DOMED_SCICTRL11_ERR)

/** \brief 180, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL12_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB700180u)
/** Alias (User Manual Name) for DOMED_SCICTRL12_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL12_PECON.
*/
#define DOMED_PECON12 (DOMED_SCICTRL12_PECON)

/** \brief 188, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL12_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB700188u)
/** Alias (User Manual Name) for DOMED_SCICTRL12_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL12_PRIORITY.
*/
#define DOMED_PRIORITY12 (DOMED_SCICTRL12_PRIORITY)

/** \brief 190, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL12_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB700190u)
/** Alias (User Manual Name) for DOMED_SCICTRL12_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL12_ERRADDR.
*/
#define DOMED_ERRADDR12 (DOMED_SCICTRL12_ERRADDR)

/** \brief 198, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL12_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB700198u)
/** Alias (User Manual Name) for DOMED_SCICTRL12_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL12_ERR.
*/
#define DOMED_ERR12 (DOMED_SCICTRL12_ERR)

/** \brief 1A0, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL13_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB7001A0u)
/** Alias (User Manual Name) for DOMED_SCICTRL13_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL13_PECON.
*/
#define DOMED_PECON13 (DOMED_SCICTRL13_PECON)

/** \brief 1A8, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL13_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB7001A8u)
/** Alias (User Manual Name) for DOMED_SCICTRL13_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL13_PRIORITY.
*/
#define DOMED_PRIORITY13 (DOMED_SCICTRL13_PRIORITY)

/** \brief 1B0, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL13_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB7001B0u)
/** Alias (User Manual Name) for DOMED_SCICTRL13_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL13_ERRADDR.
*/
#define DOMED_ERRADDR13 (DOMED_SCICTRL13_ERRADDR)

/** \brief 1B8, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL13_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB7001B8u)
/** Alias (User Manual Name) for DOMED_SCICTRL13_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL13_ERR.
*/
#define DOMED_ERR13 (DOMED_SCICTRL13_ERR)

/** \brief 1C0, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL14_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB7001C0u)
/** Alias (User Manual Name) for DOMED_SCICTRL14_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL14_PECON.
*/
#define DOMED_PECON14 (DOMED_SCICTRL14_PECON)

/** \brief 1C8, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL14_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB7001C8u)
/** Alias (User Manual Name) for DOMED_SCICTRL14_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL14_PRIORITY.
*/
#define DOMED_PRIORITY14 (DOMED_SCICTRL14_PRIORITY)

/** \brief 1D0, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL14_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB7001D0u)
/** Alias (User Manual Name) for DOMED_SCICTRL14_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL14_ERRADDR.
*/
#define DOMED_ERRADDR14 (DOMED_SCICTRL14_ERRADDR)

/** \brief 1D8, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL14_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB7001D8u)
/** Alias (User Manual Name) for DOMED_SCICTRL14_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL14_ERR.
*/
#define DOMED_ERR14 (DOMED_SCICTRL14_ERR)

/** \brief 1E0, Protocol Error Control Register ${i} */
#define DOMED_SCICTRL15_PECON /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PECON*)0xFB7001E0u)
/** Alias (User Manual Name) for DOMED_SCICTRL15_PECON.
* To use register names with standard convension, please use DOMED_SCICTRL15_PECON.
*/
#define DOMED_PECON15 (DOMED_SCICTRL15_PECON)

/** \brief 1E8, SCI ${i} Arbiter Priority Register */
#define DOMED_SCICTRL15_PRIORITY /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_PRIORITY*)0xFB7001E8u)
/** Alias (User Manual Name) for DOMED_SCICTRL15_PRIORITY.
* To use register names with standard convension, please use DOMED_SCICTRL15_PRIORITY.
*/
#define DOMED_PRIORITY15 (DOMED_SCICTRL15_PRIORITY)

/** \brief 1F0, SCI ${i} Error Address Capture Register */
#define DOMED_SCICTRL15_ERRADDR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERRADDR*)0xFB7001F0u)
/** Alias (User Manual Name) for DOMED_SCICTRL15_ERRADDR.
* To use register names with standard convension, please use DOMED_SCICTRL15_ERRADDR.
*/
#define DOMED_ERRADDR15 (DOMED_SCICTRL15_ERRADDR)

/** \brief 1F8, SCI ${i} Error Capture Register */
#define DOMED_SCICTRL15_ERR /*lint --e(923)*/ (*(volatile Ifx_DOM_SCICTRL_ERR*)0xFB7001F8u)
/** Alias (User Manual Name) for DOMED_SCICTRL15_ERR.
* To use register names with standard convension, please use DOMED_SCICTRL15_ERR.
*/
#define DOMED_ERR15 (DOMED_SCICTRL15_ERR)

/** \brief 408, Identification Register */
#define DOMED_ID /*lint --e(923)*/ (*(volatile Ifx_DOM_ID*)0xFB700408u)

/** \brief 410, Protocol Error Status Register */
#define DOMED_PESTAT /*lint --e(923)*/ (*(volatile Ifx_DOM_PESTAT*)0xFB700410u)

/** \brief 418, Transaction ID Status Register */
#define DOMED_TIDSTAT /*lint --e(923)*/ (*(volatile Ifx_DOM_TIDSTAT*)0xFB700418u)

/** \brief 420, Transaction ID Enable Register */
#define DOMED_TIDEN /*lint --e(923)*/ (*(volatile Ifx_DOM_TIDEN*)0xFB700420u)

/** \brief 430,  */
#define DOMED_BRCON /*lint --e(923)*/ (*(volatile Ifx_DOM_BRCON*)0xFB700430u)

/** \brief 4F0, Access Enable Register 0 */
#define DOMED_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_DOM_ACCEN0*)0xFB7004F0u)

/** \brief 4F8, Access Enable Register 1 */
#define DOMED_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_DOM_ACCEN1*)0xFB7004F8u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXDOM_REG_H */
