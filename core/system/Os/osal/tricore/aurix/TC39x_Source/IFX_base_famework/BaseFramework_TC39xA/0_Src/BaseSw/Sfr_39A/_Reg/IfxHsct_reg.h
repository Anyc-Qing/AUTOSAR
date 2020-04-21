/**
 * \file IfxHsct_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:53 GMT
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
 * \defgroup IfxLld_Hsct_Registers_Cfg Hsct address
 * \ingroup IfxLld_Hsct_Registers
 * 
 * \defgroup IfxLld_Hsct_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Hsct_Registers_Cfg
 *
 * \defgroup IfxLld_Hsct_Registers_Cfg_Hsct0 2-HSCT0
 * \ingroup IfxLld_Hsct_Registers_Cfg
 *
 * \defgroup IfxLld_Hsct_Registers_Cfg_Hsct1 2-HSCT1
 * \ingroup IfxLld_Hsct_Registers_Cfg
 *
 *
 */
#ifndef IFXHSCT_REG_H
#define IFXHSCT_REG_H 1
/******************************************************************************/
#include "IfxHsct_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Hsct_Cfg_BaseAddress
 * \{  */

/** \brief HSCT object */
#define MODULE_HSCT0 /*lint --e(923)*/ ((*(Ifx_HSCT*)0xF0090000u))
#define MODULE_HSCT1 /*lint --e(923)*/ ((*(Ifx_HSCT*)0xF00B0000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Hsct_Cfg_Hsct0
 * \{  */
/** \brief 0, Clock Control Register */
#define HSCT0_CLC /*lint --e(923)*/ (*(volatile Ifx_HSCT_CLC*)0xF0090000u)

/** \brief 8, Module Identification Register */
#define HSCT0_ID /*lint --e(923)*/ (*(volatile Ifx_HSCT_ID*)0xF0090008u)

/** \brief 10, Initialization Register */
#define HSCT0_INIT /*lint --e(923)*/ (*(volatile Ifx_HSCT_INIT*)0xF0090010u)

/** \brief 14, Interface Control Register */
#define HSCT0_IFCTRL /*lint --e(923)*/ (*(volatile Ifx_HSCT_IFCTRL*)0xF0090014u)

/** \brief 18, Sleep Control Register */
#define HSCT0_SLEEPCTRL /*lint --e(923)*/ (*(volatile Ifx_HSCT_SLEEPCTRL*)0xF0090018u)

/** \brief 1C, Clear To Send Control Register */
#define HSCT0_CTSCTRL /*lint --e(923)*/ (*(volatile Ifx_HSCT_CTSCTRL*)0xF009001Cu)

/** \brief 20, Transmission Disable Register */
#define HSCT0_DISABLE /*lint --e(923)*/ (*(volatile Ifx_HSCT_DISABLE*)0xF0090020u)

/** \brief 24, Status Register */
#define HSCT0_STAT /*lint --e(923)*/ (*(volatile Ifx_HSCT_STAT*)0xF0090024u)

/** \brief 28, Interface Status Register */
#define HSCT0_IFSTAT /*lint --e(923)*/ (*(volatile Ifx_HSCT_IFSTAT*)0xF0090028u)

/** \brief 30, Configuration Physical Layer Register */
#define HSCT0_CONFIGPHY /*lint --e(923)*/ (*(volatile Ifx_HSCT_CONFIGPHY*)0xF0090030u)

/** \brief 34, STATPHY */
#define HSCT0_STATPHY /*lint --e(923)*/ (*(volatile Ifx_HSCT_STATPHY*)0xF0090034u)

/** \brief 40, Interrupt register */
#define HSCT0_IRQ /*lint --e(923)*/ (*(volatile Ifx_HSCT_IRQ*)0xF0090040u)

/** \brief 44, Interrupt Enable Register */
#define HSCT0_IRQEN /*lint --e(923)*/ (*(volatile Ifx_HSCT_IRQEN*)0xF0090044u)

/** \brief 48, Interrupt Clear Register */
#define HSCT0_IRQCLR /*lint --e(923)*/ (*(volatile Ifx_HSCT_IRQCLR*)0xF0090048u)

/** \brief 50, Unsolicited Status Message Received */
#define HSCT0_USMR /*lint --e(923)*/ (*(volatile Ifx_HSCT_USMR*)0xF0090050u)

/** \brief 54, Unsolicited Status Message Send */
#define HSCT0_USMS /*lint --e(923)*/ (*(volatile Ifx_HSCT_USMS*)0xF0090054u)

/** \brief 60, Test Control Register */
#define HSCT0_TESTCTRL /*lint --e(923)*/ (*(volatile Ifx_HSCT_TESTCTRL*)0xF0090060u)

/** \brief 64, Test Monitor Register */
#define HSCT0_TESTMON /*lint --e(923)*/ (*(volatile Ifx_HSCT_TESTMON*)0xF0090064u)

/** \brief FFE8, OCDS Control and Status */
#define HSCT0_OCS /*lint --e(923)*/ (*(volatile Ifx_HSCT_OCS*)0xF009FFE8u)

/** \brief FFEC, Reset Status Clear Register */
#define HSCT0_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_HSCT_KRSTCLR*)0xF009FFECu)

/** \brief FFF0, Reset Register 1 */
#define HSCT0_KRST1 /*lint --e(923)*/ (*(volatile Ifx_HSCT_KRST1*)0xF009FFF0u)

/** \brief FFF4, Reset Register 0 */
#define HSCT0_KRST0 /*lint --e(923)*/ (*(volatile Ifx_HSCT_KRST0*)0xF009FFF4u)

/** \brief FFF8, Access Enable Register 1 */
#define HSCT0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_HSCT_ACCEN1*)0xF009FFF8u)

/** \brief FFFC, Access Enable Register 0 */
#define HSCT0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_HSCT_ACCEN0*)0xF009FFFCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Hsct_Cfg_Hsct1
 * \{  */
/** \brief 0, Clock Control Register */
#define HSCT1_CLC /*lint --e(923)*/ (*(volatile Ifx_HSCT_CLC*)0xF00B0000u)

/** \brief 8, Module Identification Register */
#define HSCT1_ID /*lint --e(923)*/ (*(volatile Ifx_HSCT_ID*)0xF00B0008u)

/** \brief 10, Initialization Register */
#define HSCT1_INIT /*lint --e(923)*/ (*(volatile Ifx_HSCT_INIT*)0xF00B0010u)

/** \brief 14, Interface Control Register */
#define HSCT1_IFCTRL /*lint --e(923)*/ (*(volatile Ifx_HSCT_IFCTRL*)0xF00B0014u)

/** \brief 18, Sleep Control Register */
#define HSCT1_SLEEPCTRL /*lint --e(923)*/ (*(volatile Ifx_HSCT_SLEEPCTRL*)0xF00B0018u)

/** \brief 1C, Clear To Send Control Register */
#define HSCT1_CTSCTRL /*lint --e(923)*/ (*(volatile Ifx_HSCT_CTSCTRL*)0xF00B001Cu)

/** \brief 20, Transmission Disable Register */
#define HSCT1_DISABLE /*lint --e(923)*/ (*(volatile Ifx_HSCT_DISABLE*)0xF00B0020u)

/** \brief 24, Status Register */
#define HSCT1_STAT /*lint --e(923)*/ (*(volatile Ifx_HSCT_STAT*)0xF00B0024u)

/** \brief 28, Interface Status Register */
#define HSCT1_IFSTAT /*lint --e(923)*/ (*(volatile Ifx_HSCT_IFSTAT*)0xF00B0028u)

/** \brief 30, Configuration Physical Layer Register */
#define HSCT1_CONFIGPHY /*lint --e(923)*/ (*(volatile Ifx_HSCT_CONFIGPHY*)0xF00B0030u)

/** \brief 34, STATPHY */
#define HSCT1_STATPHY /*lint --e(923)*/ (*(volatile Ifx_HSCT_STATPHY*)0xF00B0034u)

/** \brief 40, Interrupt register */
#define HSCT1_IRQ /*lint --e(923)*/ (*(volatile Ifx_HSCT_IRQ*)0xF00B0040u)

/** \brief 44, Interrupt Enable Register */
#define HSCT1_IRQEN /*lint --e(923)*/ (*(volatile Ifx_HSCT_IRQEN*)0xF00B0044u)

/** \brief 48, Interrupt Clear Register */
#define HSCT1_IRQCLR /*lint --e(923)*/ (*(volatile Ifx_HSCT_IRQCLR*)0xF00B0048u)

/** \brief 50, Unsolicited Status Message Received */
#define HSCT1_USMR /*lint --e(923)*/ (*(volatile Ifx_HSCT_USMR*)0xF00B0050u)

/** \brief 54, Unsolicited Status Message Send */
#define HSCT1_USMS /*lint --e(923)*/ (*(volatile Ifx_HSCT_USMS*)0xF00B0054u)

/** \brief 60, Test Control Register */
#define HSCT1_TESTCTRL /*lint --e(923)*/ (*(volatile Ifx_HSCT_TESTCTRL*)0xF00B0060u)

/** \brief 64, Test Monitor Register */
#define HSCT1_TESTMON /*lint --e(923)*/ (*(volatile Ifx_HSCT_TESTMON*)0xF00B0064u)

/** \brief FFE8, OCDS Control and Status */
#define HSCT1_OCS /*lint --e(923)*/ (*(volatile Ifx_HSCT_OCS*)0xF00BFFE8u)

/** \brief FFEC, Reset Status Clear Register */
#define HSCT1_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_HSCT_KRSTCLR*)0xF00BFFECu)

/** \brief FFF0, Reset Register 1 */
#define HSCT1_KRST1 /*lint --e(923)*/ (*(volatile Ifx_HSCT_KRST1*)0xF00BFFF0u)

/** \brief FFF4, Reset Register 0 */
#define HSCT1_KRST0 /*lint --e(923)*/ (*(volatile Ifx_HSCT_KRST0*)0xF00BFFF4u)

/** \brief FFF8, Access Enable Register 1 */
#define HSCT1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_HSCT_ACCEN1*)0xF00BFFF8u)

/** \brief FFFC, Access Enable Register 0 */
#define HSCT1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_HSCT_ACCEN0*)0xF00BFFFCu)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXHSCT_REG_H */
