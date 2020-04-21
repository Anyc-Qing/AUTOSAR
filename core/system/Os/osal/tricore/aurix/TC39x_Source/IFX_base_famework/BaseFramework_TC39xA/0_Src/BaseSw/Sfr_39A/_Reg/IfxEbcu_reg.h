/**
 * \file IfxEbcu_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:49 GMT
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
 * \defgroup IfxLld_Ebcu_Registers_Cfg Ebcu address
 * \ingroup IfxLld_Ebcu_Registers
 * 
 * \defgroup IfxLld_Ebcu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Ebcu_Registers_Cfg
 *
 * \defgroup IfxLld_Ebcu_Registers_Cfg_Ebcu 2-EBCU
 * \ingroup IfxLld_Ebcu_Registers_Cfg
 *
 *
 */
#ifndef IFXEBCU_REG_H
#define IFXEBCU_REG_H 1
/******************************************************************************/
#include "IfxEbcu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_Cfg_BaseAddress
 * \{  */

/** \brief EBCU object */
#define MODULE_EBCU /*lint --e(923)*/ ((*(Ifx_EBCU*)0xFA000100u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebcu_Cfg_Ebcu
 * \{  */
/** \brief 8, Module Identification Register */
#define EBCU_ID /*lint --e(923)*/ (*(volatile Ifx_EBCU_ID*)0xFA000108u)

/** \brief 10, EBCU Control Register */
#define EBCU_CON /*lint --e(923)*/ (*(volatile Ifx_EBCU_CON*)0xFA000110u)

/** \brief 14, EBCU Arbiter Priority Register High */
#define EBCU_PRIOH /*lint --e(923)*/ (*(volatile Ifx_EBCU_PRIOH*)0xFA000114u)

/** \brief 18, EBCU Arbiter Priority Register Low */
#define EBCU_PRIOL /*lint --e(923)*/ (*(volatile Ifx_EBCU_PRIOL*)0xFA000118u)

/** \brief 20, EBCU Error Control Capture Register */
#define EBCU_ECON /*lint --e(923)*/ (*(volatile Ifx_EBCU_ECON*)0xFA000120u)

/** \brief 24, EBCU Error Address Capture Register */
#define EBCU_EADD /*lint --e(923)*/ (*(volatile Ifx_EBCU_EADD*)0xFA000124u)

/** \brief 28, EBCU Error Data Capture Register */
#define EBCU_EDAT /*lint --e(923)*/ (*(volatile Ifx_EBCU_EDAT*)0xFA000128u)

/** \brief 30, EBCU Debug Control Register */
#define EBCU_DBCNTL /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBCNTL*)0xFA000130u)

/** \brief 34, EBCU Debug Grant Mask Register */
#define EBCU_DBGRNT /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBGRNT*)0xFA000134u)

/** \brief 38, EBCU Debug Address 1 Register */
#define EBCU_DBADR1 /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBADR1*)0xFA000138u)

/** \brief 3C, EBCU Debug Address 2 Register */
#define EBCU_DBADR2 /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBADR2*)0xFA00013Cu)

/** \brief 40, EBCU Debug Bus Operation Signals Register */
#define EBCU_DBBOS /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBBOS*)0xFA000140u)

/** \brief 44, EBCU Debug Trapped Master Register */
#define EBCU_DBGNTT /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBGNTT*)0xFA000144u)

/** \brief 48, EBCU Debug Trapped Address Register */
#define EBCU_DBADRT /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBADRT*)0xFA000148u)

/** \brief 4C, EBCU Debug Trapped Bus Operation Signals Register */
#define EBCU_DBBOST /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBBOST*)0xFA00014Cu)

/** \brief 50, EBCU Debug Data Status Register */
#define EBCU_DBDAT /*lint --e(923)*/ (*(volatile Ifx_EBCU_DBDAT*)0xFA000150u)

/** \brief 60, SBCU EDC Alarm Status Register 0 */
#define EBCU_ALSTAT0 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALSTAT*)0xFA000160u)

/** \brief 64, EBCU EDC Alarm Status Register 1 */
#define EBCU_ALSTAT1 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALSTAT*)0xFA000164u)

/** \brief 68, EBCU EDC Alarm Status Register 2 */
#define EBCU_ALSTAT2 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALSTAT*)0xFA000168u)

/** \brief 6C, SBCU EDC Alarm Status Register 3 */
#define EBCU_ALSTAT3 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALSTAT*)0xFA00016Cu)

/** \brief 70, EBCU EDC Alarm Clear Register ${x} */
#define EBCU_ALCLR0 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALCLR*)0xFA000170u)

/** \brief 74, EBCU EDC Alarm Clear Register ${x} */
#define EBCU_ALCLR1 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALCLR*)0xFA000174u)

/** \brief 78, EBCU EDC Alarm Clear Register ${x} */
#define EBCU_ALCLR2 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALCLR*)0xFA000178u)

/** \brief 7C, EBCU EDC Alarm Clear Register ${x} */
#define EBCU_ALCLR3 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALCLR*)0xFA00017Cu)

/** \brief 80, EBCU EDC Alarm Control Register */
#define EBCU_ALCTRL /*lint --e(923)*/ (*(volatile Ifx_EBCU_ALCTRL*)0xFA000180u)

/** \brief 84, EBCU FPI Error Generation Control Register */
#define EBCU_FEGEN /*lint --e(923)*/ (*(volatile Ifx_EBCU_FEGEN*)0xFA000184u)

/** \brief F8, Access Enable Register 1 */
#define EBCU_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ACCEN1*)0xFA0001F8u)

/** \brief FC, Access Enable Register 0 */
#define EBCU_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EBCU_ACCEN0*)0xFA0001FCu)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEBCU_REG_H */
