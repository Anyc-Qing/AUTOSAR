/**
 * \file IfxStm_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:03 GMT
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
 * \defgroup IfxLld_Stm_Registers_Cfg Stm address
 * \ingroup IfxLld_Stm_Registers
 * 
 * \defgroup IfxLld_Stm_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Stm_Registers_Cfg
 *
 * \defgroup IfxLld_Stm_Registers_Cfg_Stm0 2-STM0
 * \ingroup IfxLld_Stm_Registers_Cfg
 *
 * \defgroup IfxLld_Stm_Registers_Cfg_Stm1 2-STM1
 * \ingroup IfxLld_Stm_Registers_Cfg
 *
 * \defgroup IfxLld_Stm_Registers_Cfg_Stm2 2-STM2
 * \ingroup IfxLld_Stm_Registers_Cfg
 *
 * \defgroup IfxLld_Stm_Registers_Cfg_Stm3 2-STM3
 * \ingroup IfxLld_Stm_Registers_Cfg
 *
 * \defgroup IfxLld_Stm_Registers_Cfg_Stm4 2-STM4
 * \ingroup IfxLld_Stm_Registers_Cfg
 *
 * \defgroup IfxLld_Stm_Registers_Cfg_Stm5 2-STM5
 * \ingroup IfxLld_Stm_Registers_Cfg
 *
 *
 */
#ifndef IFXSTM_REG_H
#define IFXSTM_REG_H 1
/******************************************************************************/
#include "IfxStm_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Stm_Cfg_BaseAddress
 * \{  */

/** \brief STM object */
#define MODULE_STM0 /*lint --e(923)*/ ((*(Ifx_STM*)0xF0001000u))
#define MODULE_STM1 /*lint --e(923)*/ ((*(Ifx_STM*)0xF0001100u))
#define MODULE_STM2 /*lint --e(923)*/ ((*(Ifx_STM*)0xF0001200u))
#define MODULE_STM3 /*lint --e(923)*/ ((*(Ifx_STM*)0xF0001300u))
#define MODULE_STM4 /*lint --e(923)*/ ((*(Ifx_STM*)0xF0001400u))
#define MODULE_STM5 /*lint --e(923)*/ ((*(Ifx_STM*)0xF0001500u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Stm_Cfg_Stm0
 * \{  */
/** \brief 0, Clock Control Register */
#define STM0_CLC /*lint --e(923)*/ (*(volatile Ifx_STM_CLC*)0xF0001000u)

/** \brief 8, Module Identification Register */
#define STM0_ID /*lint --e(923)*/ (*(volatile Ifx_STM_ID*)0xF0001008u)

/** \brief 10, Timer Register 0 */
#define STM0_TIM0 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0*)0xF0001010u)

/** \brief 14, Timer Register 1 */
#define STM0_TIM1 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM1*)0xF0001014u)

/** \brief 18, Timer Register 2 */
#define STM0_TIM2 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM2*)0xF0001018u)

/** \brief 1C, Timer Register 3 */
#define STM0_TIM3 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM3*)0xF000101Cu)

/** \brief 20, Timer Register 4 */
#define STM0_TIM4 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM4*)0xF0001020u)

/** \brief 24, Timer Register 5 */
#define STM0_TIM5 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM5*)0xF0001024u)

/** \brief 28, Timer Register 6 */
#define STM0_TIM6 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM6*)0xF0001028u)

/** \brief 2C, Timer Capture Register */
#define STM0_CAP /*lint --e(923)*/ (*(volatile Ifx_STM_CAP*)0xF000102Cu)

/** \brief 30, Compare Register ${x} */
#define STM0_CMP0 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001030u)

/** \brief 34, Compare Register ${x} */
#define STM0_CMP1 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001034u)

/** \brief 38, Compare Match Control Register */
#define STM0_CMCON /*lint --e(923)*/ (*(volatile Ifx_STM_CMCON*)0xF0001038u)

/** \brief 3C, Interrupt Control Register */
#define STM0_ICR /*lint --e(923)*/ (*(volatile Ifx_STM_ICR*)0xF000103Cu)

/** \brief 40, Interrupt Set/Clear Register */
#define STM0_ISCR /*lint --e(923)*/ (*(volatile Ifx_STM_ISCR*)0xF0001040u)

/** \brief 50, Timer Register 0 Second View */
#define STM0_TIM0SV /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0SV*)0xF0001050u)

/** \brief 54, Timer Capture Register Second View */
#define STM0_CAPSV /*lint --e(923)*/ (*(volatile Ifx_STM_CAPSV*)0xF0001054u)

/** \brief E8, OCDS Control and Status Register */
#define STM0_OCS /*lint --e(923)*/ (*(volatile Ifx_STM_OCS*)0xF00010E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define STM0_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_STM_KRSTCLR*)0xF00010ECu)

/** \brief F0, Kernel Reset Register 1 */
#define STM0_KRST1 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST1*)0xF00010F0u)

/** \brief F4, Kernel Reset Register 0 */
#define STM0_KRST0 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST0*)0xF00010F4u)

/** \brief F8, Access Enable Register 1 */
#define STM0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN1*)0xF00010F8u)

/** \brief FC, Access Enable Register 0 */
#define STM0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN0*)0xF00010FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Stm_Cfg_Stm1
 * \{  */
/** \brief 0, Clock Control Register */
#define STM1_CLC /*lint --e(923)*/ (*(volatile Ifx_STM_CLC*)0xF0001100u)

/** \brief 8, Module Identification Register */
#define STM1_ID /*lint --e(923)*/ (*(volatile Ifx_STM_ID*)0xF0001108u)

/** \brief 10, Timer Register 0 */
#define STM1_TIM0 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0*)0xF0001110u)

/** \brief 14, Timer Register 1 */
#define STM1_TIM1 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM1*)0xF0001114u)

/** \brief 18, Timer Register 2 */
#define STM1_TIM2 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM2*)0xF0001118u)

/** \brief 1C, Timer Register 3 */
#define STM1_TIM3 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM3*)0xF000111Cu)

/** \brief 20, Timer Register 4 */
#define STM1_TIM4 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM4*)0xF0001120u)

/** \brief 24, Timer Register 5 */
#define STM1_TIM5 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM5*)0xF0001124u)

/** \brief 28, Timer Register 6 */
#define STM1_TIM6 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM6*)0xF0001128u)

/** \brief 2C, Timer Capture Register */
#define STM1_CAP /*lint --e(923)*/ (*(volatile Ifx_STM_CAP*)0xF000112Cu)

/** \brief 30, Compare Register ${x} */
#define STM1_CMP0 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001130u)

/** \brief 34, Compare Register ${x} */
#define STM1_CMP1 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001134u)

/** \brief 38, Compare Match Control Register */
#define STM1_CMCON /*lint --e(923)*/ (*(volatile Ifx_STM_CMCON*)0xF0001138u)

/** \brief 3C, Interrupt Control Register */
#define STM1_ICR /*lint --e(923)*/ (*(volatile Ifx_STM_ICR*)0xF000113Cu)

/** \brief 40, Interrupt Set/Clear Register */
#define STM1_ISCR /*lint --e(923)*/ (*(volatile Ifx_STM_ISCR*)0xF0001140u)

/** \brief 50, Timer Register 0 Second View */
#define STM1_TIM0SV /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0SV*)0xF0001150u)

/** \brief 54, Timer Capture Register Second View */
#define STM1_CAPSV /*lint --e(923)*/ (*(volatile Ifx_STM_CAPSV*)0xF0001154u)

/** \brief E8, OCDS Control and Status Register */
#define STM1_OCS /*lint --e(923)*/ (*(volatile Ifx_STM_OCS*)0xF00011E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define STM1_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_STM_KRSTCLR*)0xF00011ECu)

/** \brief F0, Kernel Reset Register 1 */
#define STM1_KRST1 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST1*)0xF00011F0u)

/** \brief F4, Kernel Reset Register 0 */
#define STM1_KRST0 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST0*)0xF00011F4u)

/** \brief F8, Access Enable Register 1 */
#define STM1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN1*)0xF00011F8u)

/** \brief FC, Access Enable Register 0 */
#define STM1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN0*)0xF00011FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Stm_Cfg_Stm2
 * \{  */
/** \brief 0, Clock Control Register */
#define STM2_CLC /*lint --e(923)*/ (*(volatile Ifx_STM_CLC*)0xF0001200u)

/** \brief 8, Module Identification Register */
#define STM2_ID /*lint --e(923)*/ (*(volatile Ifx_STM_ID*)0xF0001208u)

/** \brief 10, Timer Register 0 */
#define STM2_TIM0 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0*)0xF0001210u)

/** \brief 14, Timer Register 1 */
#define STM2_TIM1 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM1*)0xF0001214u)

/** \brief 18, Timer Register 2 */
#define STM2_TIM2 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM2*)0xF0001218u)

/** \brief 1C, Timer Register 3 */
#define STM2_TIM3 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM3*)0xF000121Cu)

/** \brief 20, Timer Register 4 */
#define STM2_TIM4 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM4*)0xF0001220u)

/** \brief 24, Timer Register 5 */
#define STM2_TIM5 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM5*)0xF0001224u)

/** \brief 28, Timer Register 6 */
#define STM2_TIM6 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM6*)0xF0001228u)

/** \brief 2C, Timer Capture Register */
#define STM2_CAP /*lint --e(923)*/ (*(volatile Ifx_STM_CAP*)0xF000122Cu)

/** \brief 30, Compare Register ${x} */
#define STM2_CMP0 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001230u)

/** \brief 34, Compare Register ${x} */
#define STM2_CMP1 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001234u)

/** \brief 38, Compare Match Control Register */
#define STM2_CMCON /*lint --e(923)*/ (*(volatile Ifx_STM_CMCON*)0xF0001238u)

/** \brief 3C, Interrupt Control Register */
#define STM2_ICR /*lint --e(923)*/ (*(volatile Ifx_STM_ICR*)0xF000123Cu)

/** \brief 40, Interrupt Set/Clear Register */
#define STM2_ISCR /*lint --e(923)*/ (*(volatile Ifx_STM_ISCR*)0xF0001240u)

/** \brief 50, Timer Register 0 Second View */
#define STM2_TIM0SV /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0SV*)0xF0001250u)

/** \brief 54, Timer Capture Register Second View */
#define STM2_CAPSV /*lint --e(923)*/ (*(volatile Ifx_STM_CAPSV*)0xF0001254u)

/** \brief E8, OCDS Control and Status Register */
#define STM2_OCS /*lint --e(923)*/ (*(volatile Ifx_STM_OCS*)0xF00012E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define STM2_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_STM_KRSTCLR*)0xF00012ECu)

/** \brief F0, Kernel Reset Register 1 */
#define STM2_KRST1 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST1*)0xF00012F0u)

/** \brief F4, Kernel Reset Register 0 */
#define STM2_KRST0 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST0*)0xF00012F4u)

/** \brief F8, Access Enable Register 1 */
#define STM2_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN1*)0xF00012F8u)

/** \brief FC, Access Enable Register 0 */
#define STM2_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN0*)0xF00012FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Stm_Cfg_Stm3
 * \{  */
/** \brief 0, Clock Control Register */
#define STM3_CLC /*lint --e(923)*/ (*(volatile Ifx_STM_CLC*)0xF0001300u)

/** \brief 8, Module Identification Register */
#define STM3_ID /*lint --e(923)*/ (*(volatile Ifx_STM_ID*)0xF0001308u)

/** \brief 10, Timer Register 0 */
#define STM3_TIM0 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0*)0xF0001310u)

/** \brief 14, Timer Register 1 */
#define STM3_TIM1 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM1*)0xF0001314u)

/** \brief 18, Timer Register 2 */
#define STM3_TIM2 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM2*)0xF0001318u)

/** \brief 1C, Timer Register 3 */
#define STM3_TIM3 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM3*)0xF000131Cu)

/** \brief 20, Timer Register 4 */
#define STM3_TIM4 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM4*)0xF0001320u)

/** \brief 24, Timer Register 5 */
#define STM3_TIM5 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM5*)0xF0001324u)

/** \brief 28, Timer Register 6 */
#define STM3_TIM6 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM6*)0xF0001328u)

/** \brief 2C, Timer Capture Register */
#define STM3_CAP /*lint --e(923)*/ (*(volatile Ifx_STM_CAP*)0xF000132Cu)

/** \brief 30, Compare Register ${x} */
#define STM3_CMP0 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001330u)

/** \brief 34, Compare Register ${x} */
#define STM3_CMP1 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001334u)

/** \brief 38, Compare Match Control Register */
#define STM3_CMCON /*lint --e(923)*/ (*(volatile Ifx_STM_CMCON*)0xF0001338u)

/** \brief 3C, Interrupt Control Register */
#define STM3_ICR /*lint --e(923)*/ (*(volatile Ifx_STM_ICR*)0xF000133Cu)

/** \brief 40, Interrupt Set/Clear Register */
#define STM3_ISCR /*lint --e(923)*/ (*(volatile Ifx_STM_ISCR*)0xF0001340u)

/** \brief 50, Timer Register 0 Second View */
#define STM3_TIM0SV /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0SV*)0xF0001350u)

/** \brief 54, Timer Capture Register Second View */
#define STM3_CAPSV /*lint --e(923)*/ (*(volatile Ifx_STM_CAPSV*)0xF0001354u)

/** \brief E8, OCDS Control and Status Register */
#define STM3_OCS /*lint --e(923)*/ (*(volatile Ifx_STM_OCS*)0xF00013E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define STM3_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_STM_KRSTCLR*)0xF00013ECu)

/** \brief F0, Kernel Reset Register 1 */
#define STM3_KRST1 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST1*)0xF00013F0u)

/** \brief F4, Kernel Reset Register 0 */
#define STM3_KRST0 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST0*)0xF00013F4u)

/** \brief F8, Access Enable Register 1 */
#define STM3_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN1*)0xF00013F8u)

/** \brief FC, Access Enable Register 0 */
#define STM3_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN0*)0xF00013FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Stm_Cfg_Stm4
 * \{  */
/** \brief 0, Clock Control Register */
#define STM4_CLC /*lint --e(923)*/ (*(volatile Ifx_STM_CLC*)0xF0001400u)

/** \brief 8, Module Identification Register */
#define STM4_ID /*lint --e(923)*/ (*(volatile Ifx_STM_ID*)0xF0001408u)

/** \brief 10, Timer Register 0 */
#define STM4_TIM0 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0*)0xF0001410u)

/** \brief 14, Timer Register 1 */
#define STM4_TIM1 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM1*)0xF0001414u)

/** \brief 18, Timer Register 2 */
#define STM4_TIM2 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM2*)0xF0001418u)

/** \brief 1C, Timer Register 3 */
#define STM4_TIM3 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM3*)0xF000141Cu)

/** \brief 20, Timer Register 4 */
#define STM4_TIM4 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM4*)0xF0001420u)

/** \brief 24, Timer Register 5 */
#define STM4_TIM5 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM5*)0xF0001424u)

/** \brief 28, Timer Register 6 */
#define STM4_TIM6 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM6*)0xF0001428u)

/** \brief 2C, Timer Capture Register */
#define STM4_CAP /*lint --e(923)*/ (*(volatile Ifx_STM_CAP*)0xF000142Cu)

/** \brief 30, Compare Register ${x} */
#define STM4_CMP0 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001430u)

/** \brief 34, Compare Register ${x} */
#define STM4_CMP1 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001434u)

/** \brief 38, Compare Match Control Register */
#define STM4_CMCON /*lint --e(923)*/ (*(volatile Ifx_STM_CMCON*)0xF0001438u)

/** \brief 3C, Interrupt Control Register */
#define STM4_ICR /*lint --e(923)*/ (*(volatile Ifx_STM_ICR*)0xF000143Cu)

/** \brief 40, Interrupt Set/Clear Register */
#define STM4_ISCR /*lint --e(923)*/ (*(volatile Ifx_STM_ISCR*)0xF0001440u)

/** \brief 50, Timer Register 0 Second View */
#define STM4_TIM0SV /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0SV*)0xF0001450u)

/** \brief 54, Timer Capture Register Second View */
#define STM4_CAPSV /*lint --e(923)*/ (*(volatile Ifx_STM_CAPSV*)0xF0001454u)

/** \brief E8, OCDS Control and Status Register */
#define STM4_OCS /*lint --e(923)*/ (*(volatile Ifx_STM_OCS*)0xF00014E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define STM4_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_STM_KRSTCLR*)0xF00014ECu)

/** \brief F0, Kernel Reset Register 1 */
#define STM4_KRST1 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST1*)0xF00014F0u)

/** \brief F4, Kernel Reset Register 0 */
#define STM4_KRST0 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST0*)0xF00014F4u)

/** \brief F8, Access Enable Register 1 */
#define STM4_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN1*)0xF00014F8u)

/** \brief FC, Access Enable Register 0 */
#define STM4_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN0*)0xF00014FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Stm_Cfg_Stm5
 * \{  */
/** \brief 0, Clock Control Register */
#define STM5_CLC /*lint --e(923)*/ (*(volatile Ifx_STM_CLC*)0xF0001500u)

/** \brief 8, Module Identification Register */
#define STM5_ID /*lint --e(923)*/ (*(volatile Ifx_STM_ID*)0xF0001508u)

/** \brief 10, Timer Register 0 */
#define STM5_TIM0 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0*)0xF0001510u)

/** \brief 14, Timer Register 1 */
#define STM5_TIM1 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM1*)0xF0001514u)

/** \brief 18, Timer Register 2 */
#define STM5_TIM2 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM2*)0xF0001518u)

/** \brief 1C, Timer Register 3 */
#define STM5_TIM3 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM3*)0xF000151Cu)

/** \brief 20, Timer Register 4 */
#define STM5_TIM4 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM4*)0xF0001520u)

/** \brief 24, Timer Register 5 */
#define STM5_TIM5 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM5*)0xF0001524u)

/** \brief 28, Timer Register 6 */
#define STM5_TIM6 /*lint --e(923)*/ (*(volatile Ifx_STM_TIM6*)0xF0001528u)

/** \brief 2C, Timer Capture Register */
#define STM5_CAP /*lint --e(923)*/ (*(volatile Ifx_STM_CAP*)0xF000152Cu)

/** \brief 30, Compare Register ${x} */
#define STM5_CMP0 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001530u)

/** \brief 34, Compare Register ${x} */
#define STM5_CMP1 /*lint --e(923)*/ (*(volatile Ifx_STM_CMP*)0xF0001534u)

/** \brief 38, Compare Match Control Register */
#define STM5_CMCON /*lint --e(923)*/ (*(volatile Ifx_STM_CMCON*)0xF0001538u)

/** \brief 3C, Interrupt Control Register */
#define STM5_ICR /*lint --e(923)*/ (*(volatile Ifx_STM_ICR*)0xF000153Cu)

/** \brief 40, Interrupt Set/Clear Register */
#define STM5_ISCR /*lint --e(923)*/ (*(volatile Ifx_STM_ISCR*)0xF0001540u)

/** \brief 50, Timer Register 0 Second View */
#define STM5_TIM0SV /*lint --e(923)*/ (*(volatile Ifx_STM_TIM0SV*)0xF0001550u)

/** \brief 54, Timer Capture Register Second View */
#define STM5_CAPSV /*lint --e(923)*/ (*(volatile Ifx_STM_CAPSV*)0xF0001554u)

/** \brief E8, OCDS Control and Status Register */
#define STM5_OCS /*lint --e(923)*/ (*(volatile Ifx_STM_OCS*)0xF00015E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define STM5_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_STM_KRSTCLR*)0xF00015ECu)

/** \brief F0, Kernel Reset Register 1 */
#define STM5_KRST1 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST1*)0xF00015F0u)

/** \brief F4, Kernel Reset Register 0 */
#define STM5_KRST0 /*lint --e(923)*/ (*(volatile Ifx_STM_KRST0*)0xF00015F4u)

/** \brief F8, Access Enable Register 1 */
#define STM5_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN1*)0xF00015F8u)

/** \brief FC, Access Enable Register 0 */
#define STM5_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_STM_ACCEN0*)0xF00015FCu)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSTM_REG_H */
