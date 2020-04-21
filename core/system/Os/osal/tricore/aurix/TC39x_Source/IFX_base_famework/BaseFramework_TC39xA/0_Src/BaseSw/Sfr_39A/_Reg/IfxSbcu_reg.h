/**
 * \file IfxSbcu_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:59 GMT
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
 * \defgroup IfxLld_Sbcu_Registers_Cfg Sbcu address
 * \ingroup IfxLld_Sbcu_Registers
 * 
 * \defgroup IfxLld_Sbcu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Sbcu_Registers_Cfg
 *
 * \defgroup IfxLld_Sbcu_Registers_Cfg_Sbcu 2-SBCU
 * \ingroup IfxLld_Sbcu_Registers_Cfg
 *
 *
 */
#ifndef IFXSBCU_REG_H
#define IFXSBCU_REG_H 1
/******************************************************************************/
#include "IfxSbcu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Sbcu_Cfg_BaseAddress
 * \{  */

/** \brief SBCU object */
#define MODULE_SBCU /*lint --e(923)*/ ((*(Ifx_SBCU*)0xF0030000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Sbcu_Cfg_Sbcu
 * \{  */
/** \brief 8, Module Identification Register */
#define SBCU_ID /*lint --e(923)*/ (*(volatile Ifx_SBCU_ID*)0xF0030008u)

/** \brief 10, SBCU Control Register */
#define SBCU_CON /*lint --e(923)*/ (*(volatile Ifx_SBCU_CON*)0xF0030010u)

/** \brief 14, Arbiter Priority Register High */
#define SBCU_PRIOH /*lint --e(923)*/ (*(volatile Ifx_SBCU_PRIOH*)0xF0030014u)

/** \brief 18, Arbiter Priority Register Low */
#define SBCU_PRIOL /*lint --e(923)*/ (*(volatile Ifx_SBCU_PRIOL*)0xF0030018u)

/** \brief 20, SBCU Error Control Capture Register */
#define SBCU_ECON /*lint --e(923)*/ (*(volatile Ifx_SBCU_ECON*)0xF0030020u)

/** \brief 24, SBCU Error Address Capture Register */
#define SBCU_EADD /*lint --e(923)*/ (*(volatile Ifx_SBCU_EADD*)0xF0030024u)

/** \brief 28, SBCU Error Data Capture Register */
#define SBCU_EDAT /*lint --e(923)*/ (*(volatile Ifx_SBCU_EDAT*)0xF0030028u)

/** \brief 30, SBCU Debug Control Register */
#define SBCU_DBCNTL /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBCNTL*)0xF0030030u)

/** \brief 34, SBCU Debug Grant Mask Register */
#define SBCU_DBGRNT /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBGRNT*)0xF0030034u)

/** \brief 38, SBCU Debug Address 1 Register */
#define SBCU_DBADR1 /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBADR1*)0xF0030038u)

/** \brief 3C, SBCU Debug Address 2 Register */
#define SBCU_DBADR2 /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBADR2*)0xF003003Cu)

/** \brief 40, SBCU Debug Bus Operation Signals Register */
#define SBCU_DBBOS /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBBOS*)0xF0030040u)

/** \brief 44, SBCU Debug Trapped Master Register */
#define SBCU_DBGNTT /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBGNTT*)0xF0030044u)

/** \brief 48, SBCU Debug Trapped Address Register */
#define SBCU_DBADRT /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBADRT*)0xF0030048u)

/** \brief 4C, SBCU Debug Trapped Bus Operation Signals Register */
#define SBCU_DBBOST /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBBOST*)0xF003004Cu)

/** \brief 50, SBCU Debug Data Status Register */
#define SBCU_DBDAT /*lint --e(923)*/ (*(volatile Ifx_SBCU_DBDAT*)0xF0030050u)

/** \brief 60, SBCU EDC Alarm Status Register 0 */
#define SBCU_ALSTAT0 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALSTAT0*)0xF0030060u)

/** \brief 64, SBCU EDC Alarm Status Register 1 */
#define SBCU_ALSTAT1 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALSTAT1*)0xF0030064u)

/** \brief 68, SBCU EDC Alarm Status Register 2 */
#define SBCU_ALSTAT2 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALSTAT2*)0xF0030068u)

/** \brief 6C, SBCU EDC Alarm Status Register 3 */
#define SBCU_ALSTAT3 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALSTAT3*)0xF003006Cu)

/** \brief 70, SBCU EDC Alarm Clear Register ${x} */
#define SBCU_ALCLR0 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALCLR*)0xF0030070u)

/** \brief 74, SBCU EDC Alarm Clear Register ${x} */
#define SBCU_ALCLR1 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALCLR*)0xF0030074u)

/** \brief 78, SBCU EDC Alarm Clear Register ${x} */
#define SBCU_ALCLR2 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALCLR*)0xF0030078u)

/** \brief 7C, SBCU EDC Alarm Clear Register ${x} */
#define SBCU_ALCLR3 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALCLR*)0xF003007Cu)

/** \brief 80, SBCU EDC Alarm Control Register */
#define SBCU_ALCTRL /*lint --e(923)*/ (*(volatile Ifx_SBCU_ALCTRL*)0xF0030080u)

/** \brief 84, FPI Error Generation Control Register */
#define SBCU_FEGEN /*lint --e(923)*/ (*(volatile Ifx_SBCU_FEGEN*)0xF0030084u)

/** \brief F8, Access Enable Register 1 */
#define SBCU_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ACCEN1*)0xF00300F8u)

/** \brief FC, Access Enable Register 0 */
#define SBCU_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_SBCU_ACCEN0*)0xF00300FCu)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSBCU_REG_H */
