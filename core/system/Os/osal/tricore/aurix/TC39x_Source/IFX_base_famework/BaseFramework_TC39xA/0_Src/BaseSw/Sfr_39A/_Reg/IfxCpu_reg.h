/**
 * \file IfxCpu_reg.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: corex_CSFR_MCSFR.xml , corex_SFR_MCSFR.xml dated xx.09.2014
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
 * \defgroup IfxLld_Cpu_Cfg Cpu address
 * \ingroup IfxLld_Cpu
 * 
 * \defgroup IfxLld_Cpu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Cpu_Cfg
 * 
 * \defgroup IfxLld_Cpu_Cfg_Cpu0 2-CPU0
 * \ingroup IfxLld_Cpu_Cfg
 * 
 * \defgroup IfxLld_Cpu_Cfg_Cpu1 2-CPU1
 * \ingroup IfxLld_Cpu_Cfg
 * 
 * \defgroup IfxLld_Cpu_Cfg_Cpu2 2-CPU2
 * \ingroup IfxLld_Cpu_Cfg
 * 
 * \defgroup IfxLld_Cpu_Cfg_Cpu3 2-CPU3
 * \ingroup IfxLld_Cpu_Cfg
 * 
 * \defgroup IfxLld_Cpu_Cfg_Cpu4 2-CPU4
 * \ingroup IfxLld_Cpu_Cfg
 * 
 * \defgroup IfxLld_Cpu_Cfg_Cpu5 2-CPU5
 * \ingroup IfxLld_Cpu_Cfg
 * 
 * \defgroup IfxLld_Cpu_Cfg_Cpu 2-CPU
 * \ingroup IfxLld_Cpu_Cfg
 * 
 */
#ifndef IFXCPU_REG_H
#define IFXCPU_REG_H 1
/******************************************************************************/
#include "IfxCpu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_BaseAddress
 * \{  */

/** \brief  CPU object */
#define MODULE_CPU0 /*lint --e(923)*/ (*(Ifx_CPU*)0xF8800000u)

/** \brief  CPU object */
#define MODULE_CPU1 /*lint --e(923)*/ (*(Ifx_CPU*)0xF8820000u)

/** \brief  CPU object */
#define MODULE_CPU2 /*lint --e(923)*/ (*(Ifx_CPU*)0xF8840000u)

/** \brief  CPU object */
#define MODULE_CPU3 /*lint --e(923)*/ (*(Ifx_CPU*)0xF8860000u)

/** \brief  CPU object */
#define MODULE_CPU4 /*lint --e(923)*/ (*(Ifx_CPU*)0xF8880000u)

/** \brief  CPU object */
#define MODULE_CPU5 /*lint --e(923)*/ (*(Ifx_CPU*)0xF88C0000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_Cpu0
 * \{  */

/** \brief  1FF80, CPU Address General Purpose Register */
#define CPU0_A0 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FF80u)

/** \brief  1FF84, CPU Address General Purpose Register */
#define CPU0_A1 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FF84u)

/** \brief  1FFA8, CPU Address General Purpose Register */
#define CPU0_A10 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FFA8u)

/** \brief  1FFAC, CPU Address General Purpose Register */
#define CPU0_A11 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FFACu)

/** \brief  1FFB0, CPU Address General Purpose Register */
#define CPU0_A12 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FFB0u)

/** \brief  1FFB4, CPU Address General Purpose Register */
#define CPU0_A13 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FFB4u)

/** \brief  1FFB8, CPU Address General Purpose Register */
#define CPU0_A14 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FFB8u)

/** \brief  1FFBC, CPU Address General Purpose Register */
#define CPU0_A15 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FFBCu)

/** \brief  1FF88, CPU Address General Purpose Register */
#define CPU0_A2 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FF88u)

/** \brief  1FF8C, CPU Address General Purpose Register */
#define CPU0_A3 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FF8Cu)

/** \brief  1FF90, CPU Address General Purpose Register */
#define CPU0_A4 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FF90u)

/** \brief  1FF94, CPU Address General Purpose Register */
#define CPU0_A5 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FF94u)

/** \brief  1FF98, CPU Address General Purpose Register */
#define CPU0_A6 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FF98u)

/** \brief  1FF9C, CPU Address General Purpose Register */
#define CPU0_A7 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FF9Cu)

/** \brief  1FFA0, CPU Address General Purpose Register */
#define CPU0_A8 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FFA0u)

/** \brief  1FFA4, CPU Address General Purpose Register */
#define CPU0_A9 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF881FFA4u)

/** \brief  1FE20, CPU Base Interrupt Vector Table Pointer */
#define CPU0_BIV /*lint --e(923)*/ (*(volatile Ifx_CPU_BIV*)0xF881FE20u)

/** \brief  1FE24, CPU Base Trap Vector Table Pointer */
#define CPU0_BTV /*lint --e(923)*/ (*(volatile Ifx_CPU_BTV*)0xF881FE24u)

/** \brief  1FC04, CPU CPU Clock Cycle Count */
#define CPU0_CCNT /*lint --e(923)*/ (*(volatile Ifx_CPU_CCNT*)0xF881FC04u)

/** \brief  1FC00, CPU Counter Control */
#define CPU0_CCTRL /*lint --e(923)*/ (*(volatile Ifx_CPU_CCTRL*)0xF881FC00u)

/** \brief  19400, CPU Compatibility Control Register */
#define CPU0_COMPAT /*lint --e(923)*/ (*(volatile Ifx_CPU_COMPAT*)0xF8819400u)

/** \brief  1FE1C, CPU Core Identification Register */
#define CPU0_CORE_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF881FE1Cu)

/** \brief  1D000, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D000u)

/** \brief  1D004, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D004u)

/** \brief  1D008, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D008u)

/** \brief  1D00C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D00Cu)

/** \brief  1D010, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D010u)

/** \brief  1D014, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D014u)

/** \brief  1D018, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D018u)

/** \brief  1D01C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D01Cu)

/** \brief  1D020, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D020u)

/** \brief  1D024, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D024u)

/** \brief  1D028, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D028u)

/** \brief  1D02C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D02Cu)

/** \brief  1D030, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D030u)

/** \brief  1D034, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D034u)

/** \brief  1D038, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D038u)

/** \brief  1D03C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D03Cu)

/** \brief  1D040, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D040u)

/** \brief  1D044, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D044u)

/** \brief  1D048, CPU Code Protection Range Lower Bound Register */
#define CPU0_CPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF881D048u)

/** \brief  1D04C, CPU Code Protection Range Upper Bound Register */
#define CPU0_CPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF881D04Cu)

/** \brief  1FE18, CPU Identification Register TC1.6P */
#define CPU0_CPU_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF881FE18u)

/** \brief  1E000, CPU Code Protection Execute Enable Register Set 0 */
#define CPU0_CPXE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_0*)0xF881E000u)

/** \brief  1E004, CPU Code Protection Execute Enable Register Set 1 */
#define CPU0_CPXE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_1*)0xF881E004u)

/** \brief  1E008, CPU Code Protection Execute Enable Register Set 2 */
#define CPU0_CPXE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_2*)0xF881E008u)

/** \brief  1E00C, CPU Code Protection Execute Enable Register Set 3 */
#define CPU0_CPXE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_3*)0xF881E00Cu)

/** \brief  1E050, CPU Code Protection Execute Enable Register Set 4 */
#define CPU0_CPXE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_4*)0xF881E050u)

/** \brief  1E054, CPU Code Protection Execute Enable Register Set 5 */
#define CPU0_CPXE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_5*)0xF881E054u)

/** \brief  1FD0C, CPU Core Register Access Event */
#define CPU0_CREVT /*lint --e(923)*/ (*(volatile Ifx_CPU_CREVT*)0xF881FD0Cu)

/** \brief  1FE50, CPU Customer ID register */
#define CPU0_CUS_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF881FE50u)

/** \brief  1FF00, CPU Data General Purpose Register */
#define CPU0_D0 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF00u)

/** \brief  1FF04, CPU Data General Purpose Register */
#define CPU0_D1 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF04u)

/** \brief  1FF28, CPU Data General Purpose Register */
#define CPU0_D10 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF28u)

/** \brief  1FF2C, CPU Data General Purpose Register */
#define CPU0_D11 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF2Cu)

/** \brief  1FF30, CPU Data General Purpose Register */
#define CPU0_D12 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF30u)

/** \brief  1FF34, CPU Data General Purpose Register */
#define CPU0_D13 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF34u)

/** \brief  1FF38, CPU Data General Purpose Register */
#define CPU0_D14 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF38u)

/** \brief  1FF3C, CPU Data General Purpose Register */
#define CPU0_D15 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF3Cu)

/** \brief  1FF08, CPU Data General Purpose Register */
#define CPU0_D2 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF08u)

/** \brief  1FF0C, CPU Data General Purpose Register */
#define CPU0_D3 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF0Cu)

/** \brief  1FF10, CPU Data General Purpose Register */
#define CPU0_D4 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF10u)

/** \brief  1FF14, CPU Data General Purpose Register */
#define CPU0_D5 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF14u)

/** \brief  1FF18, CPU Data General Purpose Register */
#define CPU0_D6 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF18u)

/** \brief  1FF1C, CPU Data General Purpose Register */
#define CPU0_D7 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF1Cu)

/** \brief  1FF20, CPU Data General Purpose Register */
#define CPU0_D8 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF20u)

/** \brief  1FF24, CPU Data General Purpose Register */
#define CPU0_D9 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF881FF24u)

/** \brief  19018, CPU Data Asynchronous Trap Register */
#define CPU0_DATR /*lint --e(923)*/ (*(volatile Ifx_CPU_DATR*)0xF8819018u)

/** \brief  1FD00, CPU Debug Status Register */
#define CPU0_DBGSR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGSR*)0xF881FD00u)

/** \brief  1FD48, CPU Debug Trap Control Register */
#define CPU0_DBGTCR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF881FD48u)

/** \brief  19040, CPU Data Memory Control Register */
#define CPU0_DCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON0*)0xF8819040u)

/** \brief  19000, CPU Data Control Register 2 */
#define CPU0_DCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON2*)0xF8819000u)

/** \brief  1FD44, CPU Debug Context Save Area Pointer */
#define CPU0_DCX /*lint --e(923)*/ (*(volatile Ifx_CPU_DCX*)0xF881FD44u)

/** \brief  1901C, CPU Data Error Address Register */
#define CPU0_DEADD /*lint --e(923)*/ (*(volatile Ifx_CPU_DEADD*)0xF881901Cu)

/** \brief  19020, CPU Data Integrity Error Address Register */
#define CPU0_DIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIEAR*)0xF8819020u)

/** \brief  19024, CPU Data Integrity Error Trap Register */
#define CPU0_DIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIETR*)0xF8819024u)

/** \brief  E208, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF880E208u)

/** \brief  E20C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF880E20Cu)

/** \brief  E200, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU0_DLMU_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF880E200u)

/** \brief  E204, CPU Safety protection DLMU Region Upper Address Register */
#define CPU0_DLMU_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF880E204u)

/** \brief  E218, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF880E218u)

/** \brief  E21C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF880E21Cu)

/** \brief  E210, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU0_DLMU_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF880E210u)

/** \brief  E214, CPU Safety protection DLMU Region Upper Address Register */
#define CPU0_DLMU_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF880E214u)

/** \brief  E228, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF880E228u)

/** \brief  E22C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF880E22Cu)

/** \brief  E220, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU0_DLMU_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF880E220u)

/** \brief  E224, CPU Safety protection DLMU Region Upper Address Register */
#define CPU0_DLMU_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF880E224u)

/** \brief  E238, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF880E238u)

/** \brief  E23C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF880E23Cu)

/** \brief  E230, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU0_DLMU_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF880E230u)

/** \brief  E234, CPU Safety protection DLMU Region Upper Address Register */
#define CPU0_DLMU_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF880E234u)

/** \brief  E248, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF880E248u)

/** \brief  E24C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF880E24Cu)

/** \brief  E240, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU0_DLMU_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF880E240u)

/** \brief  E244, CPU Safety protection DLMU Region Upper Address Register */
#define CPU0_DLMU_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF880E244u)

/** \brief  E258, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF880E258u)

/** \brief  E25C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF880E25Cu)

/** \brief  E250, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU0_DLMU_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF880E250u)

/** \brief  E254, CPU Safety protection DLMU Region Upper Address Register */
#define CPU0_DLMU_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF880E254u)

/** \brief  E268, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF880E268u)

/** \brief  E26C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF880E26Cu)

/** \brief  E260, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU0_DLMU_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF880E260u)

/** \brief  E264, CPU Safety protection DLMU Region Upper Address Register */
#define CPU0_DLMU_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF880E264u)

/** \brief  E278, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF880E278u)

/** \brief  E27C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF880E27Cu)

/** \brief  E270, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU0_DLMU_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF880E270u)

/** \brief  E274, CPU Safety protection DLMU Region Upper Address Register */
#define CPU0_DLMU_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF880E274u)

/** \brief  E288, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA0_R*)0xF880E288u)

/** \brief  E298, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA1_R*)0xF880E298u)

/** \brief  E2A8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA2_R*)0xF880E2A8u)

/** \brief  E2B8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA3_R*)0xF880E2B8u)

/** \brief  E2C8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA4_R*)0xF880E2C8u)

/** \brief  E2D8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA5_R*)0xF880E2D8u)

/** \brief  E2E8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA6_R*)0xF880E2E8u)

/** \brief  E2F8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU0_DLMU_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA7_R*)0xF880E2F8u)

/** \brief  E28C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB0_R*)0xF880E28Cu)

/** \brief  E29C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB1_R*)0xF880E29Cu)

/** \brief  E2AC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB2_R*)0xF880E2ACu)

/** \brief  E2BC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB3_R*)0xF880E2BCu)

/** \brief  E2CC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB4_R*)0xF880E2CCu)

/** \brief  E2DC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB5_R*)0xF880E2DCu)

/** \brief  E2EC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB6_R*)0xF880E2ECu)

/** \brief  E2FC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU0_DLMU_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB7_R*)0xF880E2FCu)

/** \brief  1FD40, CPU Debug Monitor Start Address */
#define CPU0_DMS /*lint --e(923)*/ (*(volatile Ifx_CPU_DMS*)0xF881FD40u)

/** \brief  1C000, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C000u)

/** \brief  1C004, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C004u)

/** \brief  1C050, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR10_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C050u)

/** \brief  1C054, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR10_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C054u)

/** \brief  1C058, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR11_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C058u)

/** \brief  1C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR11_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C05Cu)

/** \brief  1C060, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR12_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C060u)

/** \brief  1C064, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR12_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C064u)

/** \brief  1C068, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR13_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C068u)

/** \brief  1C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR13_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C06Cu)

/** \brief  1C070, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR14_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C070u)

/** \brief  1C074, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR14_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C074u)

/** \brief  1C078, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR15_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C078u)

/** \brief  1C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR15_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C07Cu)

/** \brief  1C080, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR16_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C080u)

/** \brief  1C084, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR16_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C084u)

/** \brief  1C088, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR17_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C088u)

/** \brief  1C08C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR17_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C08Cu)

/** \brief  1C008, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C008u)

/** \brief  1C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C00Cu)

/** \brief  1C010, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C010u)

/** \brief  1C014, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C014u)

/** \brief  1C018, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C018u)

/** \brief  1C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C01Cu)

/** \brief  1C020, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C020u)

/** \brief  1C024, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C024u)

/** \brief  1C028, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C028u)

/** \brief  1C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C02Cu)

/** \brief  1C030, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C030u)

/** \brief  1C034, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C034u)

/** \brief  1C038, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C038u)

/** \brief  1C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C03Cu)

/** \brief  1C040, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C040u)

/** \brief  1C044, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C044u)

/** \brief  1C048, CPU Data Protection Range, Lower Bound Register */
#define CPU0_DPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF881C048u)

/** \brief  1C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU0_DPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF881C04Cu)

/** \brief  1E010, CPU Data Protection Read Enable Register Set 0 */
#define CPU0_DPRE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_0*)0xF881E010u)

/** \brief  1E014, CPU Data Protection Read Enable Register Set 1 */
#define CPU0_DPRE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_1*)0xF881E014u)

/** \brief  1E018, CPU Data Protection Read Enable Register Set 2 */
#define CPU0_DPRE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_2*)0xF881E018u)

/** \brief  1E01C, CPU Data Protection Read Enable Register Set 3 */
#define CPU0_DPRE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_3*)0xF881E01Cu)

/** \brief  1E060, CPU Data Protection Read Enable Register Set 4 */
#define CPU0_DPRE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_4*)0xF881E060u)

/** \brief  1E064, CPU Data Protection Read Enable Register Set 5 */
#define CPU0_DPRE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_5*)0xF881E064u)

/** \brief  1E020, CPU Data Protection Write Enable Register Set 0 */
#define CPU0_DPWE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_0*)0xF881E020u)

/** \brief  1E024, CPU Data Protection Write Enable Register Set 1 */
#define CPU0_DPWE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_1*)0xF881E024u)

/** \brief  1E028, CPU Data Protection Write Enable Register Set 2 */
#define CPU0_DPWE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_2*)0xF881E028u)

/** \brief  1E02C, CPU Data Protection Write Enable Register Set 3 */
#define CPU0_DPWE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_3*)0xF881E02Cu)

/** \brief  1E070, CPU Data Protection Write Enable Register Set 4 */
#define CPU0_DPWE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_4*)0xF881E070u)

/** \brief  1E074, CPU Data Protection Write Enable Register Set 5 */
#define CPU0_DPWE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_5*)0xF881E074u)

/** \brief  19010, CPU Data Synchronous Trap Register */
#define CPU0_DSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_DSTR*)0xF8819010u)

/** \brief  1FD08, CPU External Event Register */
#define CPU0_EXEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_EXEVT*)0xF881FD08u)

/** \brief  1FE38, CPU Free CSA List Head Pointer */
#define CPU0_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_FCX*)0xF881FE38u)

/** \brief  1100, CPU Flash Configuration Register 0 */
#define CPU0_FLASHCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF8801100u)

/** \brief  1104, CPU Flash Configuration Register 1 */
#define CPU0_FLASHCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF8801104u)

/** \brief  1108, CPU Flash Configuration Register 2 */
#define CPU0_FLASHCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF8801108u)

/** \brief  110C, CPU Flash Configuration Register 3 */
#define CPU0_FLASHCON3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF880110Cu)

/** \brief  1A000, CPU Trap Control Register */
#define CPU0_FPU_TRAP_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF881A000u)

/** \brief  1A008, CPU Trapping Instruction Opcode Register */
#define CPU0_FPU_TRAP_OPC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF881A008u)

/** \brief  1A004, CPU Trapping Instruction Program Counter Register */
#define CPU0_FPU_TRAP_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF881A004u)

/** \brief  1A010, CPU Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF881A010u)

/** \brief  1A014, CPU Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF881A014u)

/** \brief  1A018, CPU Trapping Instruction Operand Register */
#define CPU0_FPU_TRAP_SRC3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF881A018u)

/** \brief  1FC08, CPU Instruction Count */
#define CPU0_ICNT /*lint --e(923)*/ (*(volatile Ifx_CPU_ICNT*)0xF881FC08u)

/** \brief  1FE2C, CPU Interrupt Control Register */
#define CPU0_ICR /*lint --e(923)*/ (*(volatile Ifx_CPU_ICR*)0xF881FE2Cu)

/** \brief  1FE28, CPU Interrupt Stack Pointer */
#define CPU0_ISP /*lint --e(923)*/ (*(volatile Ifx_CPU_ISP*)0xF881FE28u)

/** \brief  D000, CPU Reset Register 0 */
#define CPU0_KRST0 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST0*)0xF880D000u)

/** \brief  D004, CPU Reset Register 1 */
#define CPU0_KRST1 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST1*)0xF880D004u)

/** \brief  D008, CPU Reset Status Clear Register */
#define CPU0_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF880D008u)

/** \brief  1FE3C, CPU Free CSA List Limit Pointer */
#define CPU0_LCX /*lint --e(923)*/ (*(volatile Ifx_CPU_LCX*)0xF881FE3Cu)

/** \brief  E110, CPU Safety Protection Region LPB Read Access Enable Register A */
#define CPU0_LPB_SPROT_ACCENA_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF880E110u)

/** \brief  E114, CPU Safety Protection Region LPB Read Access Enable Register B */
#define CPU0_LPB_SPROT_ACCENB_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF880E114u)

/** \brief  1FC0C, CPU Multi-Count Register 1 */
#define CPU0_M1CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M1CNT*)0xF881FC0Cu)

/** \brief  1FC10, CPU Multi-Count Register 2 */
#define CPU0_M2CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M2CNT*)0xF881FC10u)

/** \brief  1FC14, CPU Multi-Count Register 3 */
#define CPU0_M3CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M3CNT*)0xF881FC14u)

/** \brief  18, CPU Overlay Mask Register 0 */
#define CPU0_OMASK0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK0*)0xF8800018u)

/** \brief  24, CPU Overlay Mask Register 1 */
#define CPU0_OMASK1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK1*)0xF8800024u)

/** \brief  90, CPU Overlay Mask Register 10 */
#define CPU0_OMASK10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK10*)0xF8800090u)

/** \brief  9C, CPU Overlay Mask Register 11 */
#define CPU0_OMASK11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK11*)0xF880009Cu)

/** \brief  A8, CPU Overlay Mask Register 12 */
#define CPU0_OMASK12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK12*)0xF88000A8u)

/** \brief  B4, CPU Overlay Mask Register 13 */
#define CPU0_OMASK13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK13*)0xF88000B4u)

/** \brief  C0, CPU Overlay Mask Register 14 */
#define CPU0_OMASK14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK14*)0xF88000C0u)

/** \brief  CC, CPU Overlay Mask Register 15 */
#define CPU0_OMASK15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK15*)0xF88000CCu)

/** \brief  D8, CPU Overlay Mask Register 16 */
#define CPU0_OMASK16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK16*)0xF88000D8u)

/** \brief  E4, CPU Overlay Mask Register 17 */
#define CPU0_OMASK17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK17*)0xF88000E4u)

/** \brief  F0, CPU Overlay Mask Register 18 */
#define CPU0_OMASK18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK18*)0xF88000F0u)

/** \brief  FC, CPU Overlay Mask Register 19 */
#define CPU0_OMASK19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK19*)0xF88000FCu)

/** \brief  30, CPU Overlay Mask Register 2 */
#define CPU0_OMASK2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK2*)0xF8800030u)

/** \brief  108, CPU Overlay Mask Register 20 */
#define CPU0_OMASK20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK20*)0xF8800108u)

/** \brief  114, CPU Overlay Mask Register 21 */
#define CPU0_OMASK21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK21*)0xF8800114u)

/** \brief  120, CPU Overlay Mask Register 22 */
#define CPU0_OMASK22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK22*)0xF8800120u)

/** \brief  12C, CPU Overlay Mask Register 23 */
#define CPU0_OMASK23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK23*)0xF880012Cu)

/** \brief  138, CPU Overlay Mask Register 24 */
#define CPU0_OMASK24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK24*)0xF8800138u)

/** \brief  144, CPU Overlay Mask Register 25 */
#define CPU0_OMASK25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK25*)0xF8800144u)

/** \brief  150, CPU Overlay Mask Register 26 */
#define CPU0_OMASK26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK26*)0xF8800150u)

/** \brief  15C, CPU Overlay Mask Register 27 */
#define CPU0_OMASK27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK27*)0xF880015Cu)

/** \brief  168, CPU Overlay Mask Register 28 */
#define CPU0_OMASK28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK28*)0xF8800168u)

/** \brief  174, CPU Overlay Mask Register 29 */
#define CPU0_OMASK29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK29*)0xF8800174u)

/** \brief  3C, CPU Overlay Mask Register 3 */
#define CPU0_OMASK3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK3*)0xF880003Cu)

/** \brief  180, CPU Overlay Mask Register 30 */
#define CPU0_OMASK30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK30*)0xF8800180u)

/** \brief  18C, CPU Overlay Mask Register 31 */
#define CPU0_OMASK31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK31*)0xF880018Cu)

/** \brief  48, CPU Overlay Mask Register 4 */
#define CPU0_OMASK4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK4*)0xF8800048u)

/** \brief  54, CPU Overlay Mask Register 5 */
#define CPU0_OMASK5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK5*)0xF8800054u)

/** \brief  60, CPU Overlay Mask Register 6 */
#define CPU0_OMASK6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK6*)0xF8800060u)

/** \brief  6C, CPU Overlay Mask Register 7 */
#define CPU0_OMASK7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK7*)0xF880006Cu)

/** \brief  78, CPU Overlay Mask Register 8 */
#define CPU0_OMASK8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK8*)0xF8800078u)

/** \brief  84, CPU Overlay Mask Register 9 */
#define CPU0_OMASK9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK9*)0xF8800084u)

/** \brief  0, CPU Overlay Range Select Register */
#define CPU0_OSEL /*lint --e(923)*/ (*(volatile Ifx_CPU_OSEL*)0xF8800000u)

/** \brief  14, CPU Overlay Target Address Register 0 */
#define CPU0_OTAR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR0*)0xF8800014u)

/** \brief  20, CPU Overlay Target Address Register 1 */
#define CPU0_OTAR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR1*)0xF8800020u)

/** \brief  8C, CPU Overlay Target Address Register 10 */
#define CPU0_OTAR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR10*)0xF880008Cu)

/** \brief  98, CPU Overlay Target Address Register 11 */
#define CPU0_OTAR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR11*)0xF8800098u)

/** \brief  A4, CPU Overlay Target Address Register 12 */
#define CPU0_OTAR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR12*)0xF88000A4u)

/** \brief  B0, CPU Overlay Target Address Register 13 */
#define CPU0_OTAR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR13*)0xF88000B0u)

/** \brief  BC, CPU Overlay Target Address Register 14 */
#define CPU0_OTAR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR14*)0xF88000BCu)

/** \brief  C8, CPU Overlay Target Address Register 15 */
#define CPU0_OTAR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR15*)0xF88000C8u)

/** \brief  D4, CPU Overlay Target Address Register 16 */
#define CPU0_OTAR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR16*)0xF88000D4u)

/** \brief  E0, CPU Overlay Target Address Register 17 */
#define CPU0_OTAR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR17*)0xF88000E0u)

/** \brief  EC, CPU Overlay Target Address Register 18 */
#define CPU0_OTAR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR18*)0xF88000ECu)

/** \brief  F8, CPU Overlay Target Address Register 19 */
#define CPU0_OTAR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR19*)0xF88000F8u)

/** \brief  2C, CPU Overlay Target Address Register 2 */
#define CPU0_OTAR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR2*)0xF880002Cu)

/** \brief  104, CPU Overlay Target Address Register 20 */
#define CPU0_OTAR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR20*)0xF8800104u)

/** \brief  110, CPU Overlay Target Address Register 21 */
#define CPU0_OTAR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR21*)0xF8800110u)

/** \brief  11C, CPU Overlay Target Address Register 22 */
#define CPU0_OTAR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR22*)0xF880011Cu)

/** \brief  128, CPU Overlay Target Address Register 23 */
#define CPU0_OTAR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR23*)0xF8800128u)

/** \brief  134, CPU Overlay Target Address Register 24 */
#define CPU0_OTAR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR24*)0xF8800134u)

/** \brief  140, CPU Overlay Target Address Register 25 */
#define CPU0_OTAR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR25*)0xF8800140u)

/** \brief  14C, CPU Overlay Target Address Register 26 */
#define CPU0_OTAR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR26*)0xF880014Cu)

/** \brief  158, CPU Overlay Target Address Register 27 */
#define CPU0_OTAR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR27*)0xF8800158u)

/** \brief  164, CPU Overlay Target Address Register 28 */
#define CPU0_OTAR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR28*)0xF8800164u)

/** \brief  170, CPU Overlay Target Address Register 29 */
#define CPU0_OTAR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR29*)0xF8800170u)

/** \brief  38, CPU Overlay Target Address Register 3 */
#define CPU0_OTAR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR3*)0xF8800038u)

/** \brief  17C, CPU Overlay Target Address Register 30 */
#define CPU0_OTAR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR30*)0xF880017Cu)

/** \brief  188, CPU Overlay Target Address Register 31 */
#define CPU0_OTAR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR31*)0xF8800188u)

/** \brief  44, CPU Overlay Target Address Register 4 */
#define CPU0_OTAR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR4*)0xF8800044u)

/** \brief  50, CPU Overlay Target Address Register 5 */
#define CPU0_OTAR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR5*)0xF8800050u)

/** \brief  5C, CPU Overlay Target Address Register 6 */
#define CPU0_OTAR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR6*)0xF880005Cu)

/** \brief  68, CPU Overlay Target Address Register 7 */
#define CPU0_OTAR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR7*)0xF8800068u)

/** \brief  74, CPU Overlay Target Address Register 8 */
#define CPU0_OTAR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR8*)0xF8800074u)

/** \brief  80, CPU Overlay Target Address Register 9 */
#define CPU0_OTAR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR9*)0xF8800080u)

/** \brief  1FE08, CPU Program Counter */
#define CPU0_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_PC*)0xF881FE08u)

/** \brief  1920C, CPU Program Control 0 */
#define CPU0_PCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON0*)0xF881920Cu)

/** \brief  19204, CPU Program Control 1 */
#define CPU0_PCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON1*)0xF8819204u)

/** \brief  19208, CPU Program Control 2 */
#define CPU0_PCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON2*)0xF8819208u)

/** \brief  1FE00, CPU Previous Context Information Register */
#define CPU0_PCXI /*lint --e(923)*/ (*(volatile Ifx_CPU_PCXI*)0xF881FE00u)

/** \brief  19210, CPU Program Integrity Error Address Register */
#define CPU0_PIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIEAR*)0xF8819210u)

/** \brief  19214, CPU Program Integrity Error Trap Register */
#define CPU0_PIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIETR*)0xF8819214u)

/** \brief  18100, CPU Data Access CacheabilityRegister */
#define CPU0_PMA0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA0*)0xF8818100u)

/** \brief  18104, CPU Code Access CacheabilityRegister */
#define CPU0_PMA1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA1*)0xF8818104u)

/** \brief  18108, CPU Peripheral Space Identifier register */
#define CPU0_PMA2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA2*)0xF8818108u)

/** \brief  19200, CPU Program Synchronous Trap Register */
#define CPU0_PSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_PSTR*)0xF8819200u)

/** \brief  1FE04, CPU Program Status Word */
#define CPU0_PSW /*lint --e(923)*/ (*(volatile Ifx_CPU_PSW*)0xF881FE04u)

/** \brief  10, CPU Redirected Address Base Register 0 */
#define CPU0_RABR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR0*)0xF8800010u)

/** \brief  1C, CPU Redirected Address Base Register 1 */
#define CPU0_RABR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR1*)0xF880001Cu)

/** \brief  88, CPU Redirected Address Base Register 10 */
#define CPU0_RABR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR10*)0xF8800088u)

/** \brief  94, CPU Redirected Address Base Register 11 */
#define CPU0_RABR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR11*)0xF8800094u)

/** \brief  A0, CPU Redirected Address Base Register 12 */
#define CPU0_RABR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR12*)0xF88000A0u)

/** \brief  AC, CPU Redirected Address Base Register 13 */
#define CPU0_RABR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR13*)0xF88000ACu)

/** \brief  B8, CPU Redirected Address Base Register 14 */
#define CPU0_RABR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR14*)0xF88000B8u)

/** \brief  C4, CPU Redirected Address Base Register 15 */
#define CPU0_RABR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR15*)0xF88000C4u)

/** \brief  D0, CPU Redirected Address Base Register 16 */
#define CPU0_RABR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR16*)0xF88000D0u)

/** \brief  DC, CPU Redirected Address Base Register 17 */
#define CPU0_RABR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR17*)0xF88000DCu)

/** \brief  E8, CPU Redirected Address Base Register 18 */
#define CPU0_RABR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR18*)0xF88000E8u)

/** \brief  F4, CPU Redirected Address Base Register 19 */
#define CPU0_RABR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR19*)0xF88000F4u)

/** \brief  28, CPU Redirected Address Base Register 2 */
#define CPU0_RABR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR2*)0xF8800028u)

/** \brief  100, CPU Redirected Address Base Register 20 */
#define CPU0_RABR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR20*)0xF8800100u)

/** \brief  10C, CPU Redirected Address Base Register 21 */
#define CPU0_RABR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR21*)0xF880010Cu)

/** \brief  118, CPU Redirected Address Base Register 22 */
#define CPU0_RABR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR22*)0xF8800118u)

/** \brief  124, CPU Redirected Address Base Register 23 */
#define CPU0_RABR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR23*)0xF8800124u)

/** \brief  130, CPU Redirected Address Base Register 24 */
#define CPU0_RABR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR24*)0xF8800130u)

/** \brief  13C, CPU Redirected Address Base Register 25 */
#define CPU0_RABR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR25*)0xF880013Cu)

/** \brief  148, CPU Redirected Address Base Register 26 */
#define CPU0_RABR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR26*)0xF8800148u)

/** \brief  154, CPU Redirected Address Base Register 27 */
#define CPU0_RABR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR27*)0xF8800154u)

/** \brief  160, CPU Redirected Address Base Register 28 */
#define CPU0_RABR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR28*)0xF8800160u)

/** \brief  16C, CPU Redirected Address Base Register 29 */
#define CPU0_RABR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR29*)0xF880016Cu)

/** \brief  34, CPU Redirected Address Base Register 3 */
#define CPU0_RABR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR3*)0xF8800034u)

/** \brief  178, CPU Redirected Address Base Register 30 */
#define CPU0_RABR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR30*)0xF8800178u)

/** \brief  184, CPU Redirected Address Base Register 31 */
#define CPU0_RABR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR31*)0xF8800184u)

/** \brief  40, CPU Redirected Address Base Register 4 */
#define CPU0_RABR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR4*)0xF8800040u)

/** \brief  4C, CPU Redirected Address Base Register 5 */
#define CPU0_RABR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR5*)0xF880004Cu)

/** \brief  58, CPU Redirected Address Base Register 6 */
#define CPU0_RABR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR6*)0xF8800058u)

/** \brief  64, CPU Redirected Address Base Register 7 */
#define CPU0_RABR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR7*)0xF8800064u)

/** \brief  70, CPU Redirected Address Base Register 8 */
#define CPU0_RABR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR8*)0xF8800070u)

/** \brief  7C, CPU Redirected Address Base Register 9 */
#define CPU0_RABR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR9*)0xF880007Cu)

/** \brief  11030, CPU SRI Error Generation Register */
#define CPU0_SEGEN /*lint --e(923)*/ (*(volatile Ifx_CPU_SEGEN*)0xF8811030u)

/** \brief  E100, CPU Safety Protection Register Access Enable Register A */
#define CPU0_SFR_SPROT_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF880E100u)

/** \brief  E104, CPU Safety Protection Region Access Enable Register B */
#define CPU0_SFR_SPROT_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF880E104u)

/** \brief  1900C, CPU SIST Mode Access Control Register */
#define CPU0_SMACON /*lint --e(923)*/ (*(volatile Ifx_CPU_SMACON*)0xF881900Cu)

/** \brief  E008, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU0_SPR_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF880E008u)

/** \brief  E00C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU0_SPR_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF880E00Cu)

/** \brief  E000, CPU Safety Protection SPR Region Lower Address Register */
#define CPU0_SPR_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF880E000u)

/** \brief  E004, CPU Safety protection SPR Region Upper Address Register */
#define CPU0_SPR_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF880E004u)

/** \brief  E018, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU0_SPR_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF880E018u)

/** \brief  E01C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU0_SPR_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF880E01Cu)

/** \brief  E010, CPU Safety Protection SPR Region Lower Address Register */
#define CPU0_SPR_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF880E010u)

/** \brief  E014, CPU Safety protection SPR Region Upper Address Register */
#define CPU0_SPR_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF880E014u)

/** \brief  E028, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU0_SPR_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF880E028u)

/** \brief  E02C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU0_SPR_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF880E02Cu)

/** \brief  E020, CPU Safety Protection SPR Region Lower Address Register */
#define CPU0_SPR_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF880E020u)

/** \brief  E024, CPU Safety protection SPR Region Upper Address Register */
#define CPU0_SPR_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF880E024u)

/** \brief  E038, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU0_SPR_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF880E038u)

/** \brief  E03C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU0_SPR_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF880E03Cu)

/** \brief  E030, CPU Safety Protection SPR Region Lower Address Register */
#define CPU0_SPR_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF880E030u)

/** \brief  E034, CPU Safety protection SPR Region Upper Address Register */
#define CPU0_SPR_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF880E034u)

/** \brief  E048, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU0_SPR_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF880E048u)

/** \brief  E04C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU0_SPR_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF880E04Cu)

/** \brief  E040, CPU Safety Protection SPR Region Lower Address Register */
#define CPU0_SPR_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF880E040u)

/** \brief  E044, CPU Safety protection SPR Region Upper Address Register */
#define CPU0_SPR_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF880E044u)

/** \brief  E058, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU0_SPR_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF880E058u)

/** \brief  E05C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU0_SPR_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF880E05Cu)

/** \brief  E050, CPU Safety Protection SPR Region Lower Address Register */
#define CPU0_SPR_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF880E050u)

/** \brief  E054, CPU Safety protection SPR Region Upper Address Register */
#define CPU0_SPR_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF880E054u)

/** \brief  E068, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU0_SPR_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF880E068u)

/** \brief  E06C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU0_SPR_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF880E06Cu)

/** \brief  E060, CPU Safety Protection SPR Region Lower Address Register */
#define CPU0_SPR_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF880E060u)

/** \brief  E064, CPU Safety protection SPR Region Upper Address Register */
#define CPU0_SPR_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF880E064u)

/** \brief  E078, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU0_SPR_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF880E078u)

/** \brief  E07C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU0_SPR_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF880E07Cu)

/** \brief  E070, CPU Safety Protection SPR Region Lower Address Register */
#define CPU0_SPR_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF880E070u)

/** \brief  E074, CPU Safety protection SPR Region Upper Address Register */
#define CPU0_SPR_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF880E074u)

/** \brief  E088, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU0_SPR_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA0_R*)0xF880E088u)

/** \brief  E098, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU0_SPR_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA1_R*)0xF880E098u)

/** \brief  E0A8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU0_SPR_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA2_R*)0xF880E0A8u)

/** \brief  E0B8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU0_SPR_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA3_R*)0xF880E0B8u)

/** \brief  E0C8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU0_SPR_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA4_R*)0xF880E0C8u)

/** \brief  E0D8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU0_SPR_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA5_R*)0xF880E0D8u)

/** \brief  E0E8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU0_SPR_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA6_R*)0xF880E0E8u)

/** \brief  E0F8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU0_SPR_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA7_R*)0xF880E0F8u)

/** \brief  E08C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU0_SPR_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB0_R*)0xF880E08Cu)

/** \brief  E09C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU0_SPR_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB1_R*)0xF880E09Cu)

/** \brief  E0AC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU0_SPR_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB2_R*)0xF880E0ACu)

/** \brief  E0BC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU0_SPR_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB3_R*)0xF880E0BCu)

/** \brief  E0CC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU0_SPR_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB4_R*)0xF880E0CCu)

/** \brief  E0DC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU0_SPR_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB5_R*)0xF880E0DCu)

/** \brief  E0EC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU0_SPR_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB6_R*)0xF880E0ECu)

/** \brief  E0FC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU0_SPR_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB7_R*)0xF880E0FCu)

/** \brief  1FD10, CPU Software Debug Event */
#define CPU0_SWEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_SWEVT*)0xF881FD10u)

/** \brief  1FE14, CPU System Configuration Register */
#define CPU0_SYSCON /*lint --e(923)*/ (*(volatile Ifx_CPU_SYSCON*)0xF881FE14u)

/** \brief  18004, CPU Task Address Space Identifier Register */
#define CPU0_TASK_ASI /*lint --e(923)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF8818004u)

/** \brief  1E400, CPU Temporal Protection System Control Register */
#define CPU0_TPS_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF881E400u)

/** \brief  1E448, CPU Exception Timer Class Enable Register */
#define CPU0_TPS_EXTIM_CLASS_EN /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF881E448u)

/** \brief  1E444, CPU Exception Timer Current Value */
#define CPU0_TPS_EXTIM_CVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CVAL*)0xF881E444u)

/** \brief  1E450, CPU Exception Timer Status Register */
#define CPU0_TPS_EXTIM_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF881E450u)

/** \brief  1E440, CPU Exception Timer Load Value */
#define CPU0_TPS_EXTIM_LVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_LVAL*)0xF881E440u)

/** \brief  1E44C, CPU Exception Timer Status Register */
#define CPU0_TPS_EXTIM_STAT /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF881E44Cu)

/** \brief  1E404, CPU Temporal Protection System Timer Register */
#define CPU0_TPS_TIMER0 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF881E404u)

/** \brief  1E408, CPU Temporal Protection System Timer Register */
#define CPU0_TPS_TIMER1 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF881E408u)

/** \brief  1E40C, CPU Temporal Protection System Timer Register */
#define CPU0_TPS_TIMER2 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF881E40Cu)

/** \brief  1F004, CPU Trigger Address */
#define CPU0_TR0_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F004u)

/** \brief  1F000, CPU Trigger Event */
#define CPU0_TR0_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F000u)

/** \brief  1F00C, CPU Trigger Address */
#define CPU0_TR1_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F00Cu)

/** \brief  1F008, CPU Trigger Event */
#define CPU0_TR1_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F008u)

/** \brief  1F014, CPU Trigger Address */
#define CPU0_TR2_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F014u)

/** \brief  1F010, CPU Trigger Event */
#define CPU0_TR2_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F010u)

/** \brief  1F01C, CPU Trigger Address */
#define CPU0_TR3_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F01Cu)

/** \brief  1F018, CPU Trigger Event */
#define CPU0_TR3_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F018u)

/** \brief  1F024, CPU Trigger Address */
#define CPU0_TR4_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F024u)

/** \brief  1F020, CPU Trigger Event */
#define CPU0_TR4_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F020u)

/** \brief  1F02C, CPU Trigger Address */
#define CPU0_TR5_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F02Cu)

/** \brief  1F028, CPU Trigger Event */
#define CPU0_TR5_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F028u)

/** \brief  1F034, CPU Trigger Address */
#define CPU0_TR6_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F034u)

/** \brief  1F030, CPU Trigger Event */
#define CPU0_TR6_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F030u)

/** \brief  1F03C, CPU Trigger Address */
#define CPU0_TR7_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF881F03Cu)

/** \brief  1F038, CPU Trigger Event */
#define CPU0_TR7_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF881F038u)

/** \brief  1FD30, CPU Trigger Address x */
#define CPU0_TRIG_ACC /*lint --e(923)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF881FD30u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_Cpu1
 * \{  */

/** \brief  1FF80, CPU Address General Purpose Register */
#define CPU1_A0 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FF80u)

/** \brief  1FF84, CPU Address General Purpose Register */
#define CPU1_A1 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FF84u)

/** \brief  1FFA8, CPU Address General Purpose Register */
#define CPU1_A10 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FFA8u)

/** \brief  1FFAC, CPU Address General Purpose Register */
#define CPU1_A11 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FFACu)

/** \brief  1FFB0, CPU Address General Purpose Register */
#define CPU1_A12 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FFB0u)

/** \brief  1FFB4, CPU Address General Purpose Register */
#define CPU1_A13 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FFB4u)

/** \brief  1FFB8, CPU Address General Purpose Register */
#define CPU1_A14 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FFB8u)

/** \brief  1FFBC, CPU Address General Purpose Register */
#define CPU1_A15 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FFBCu)

/** \brief  1FF88, CPU Address General Purpose Register */
#define CPU1_A2 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FF88u)

/** \brief  1FF8C, CPU Address General Purpose Register */
#define CPU1_A3 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FF8Cu)

/** \brief  1FF90, CPU Address General Purpose Register */
#define CPU1_A4 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FF90u)

/** \brief  1FF94, CPU Address General Purpose Register */
#define CPU1_A5 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FF94u)

/** \brief  1FF98, CPU Address General Purpose Register */
#define CPU1_A6 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FF98u)

/** \brief  1FF9C, CPU Address General Purpose Register */
#define CPU1_A7 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FF9Cu)

/** \brief  1FFA0, CPU Address General Purpose Register */
#define CPU1_A8 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FFA0u)

/** \brief  1FFA4, CPU Address General Purpose Register */
#define CPU1_A9 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF883FFA4u)

/** \brief  1FE20, CPU Base Interrupt Vector Table Pointer */
#define CPU1_BIV /*lint --e(923)*/ (*(volatile Ifx_CPU_BIV*)0xF883FE20u)

/** \brief  1FE24, CPU Base Trap Vector Table Pointer */
#define CPU1_BTV /*lint --e(923)*/ (*(volatile Ifx_CPU_BTV*)0xF883FE24u)

/** \brief  1FC04, CPU CPU Clock Cycle Count */
#define CPU1_CCNT /*lint --e(923)*/ (*(volatile Ifx_CPU_CCNT*)0xF883FC04u)

/** \brief  1FC00, CPU Counter Control */
#define CPU1_CCTRL /*lint --e(923)*/ (*(volatile Ifx_CPU_CCTRL*)0xF883FC00u)

/** \brief  19400, CPU Compatibility Control Register */
#define CPU1_COMPAT /*lint --e(923)*/ (*(volatile Ifx_CPU_COMPAT*)0xF8839400u)

/** \brief  1FE1C, CPU Core Identification Register */
#define CPU1_CORE_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF883FE1Cu)

/** \brief  1D000, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D000u)

/** \brief  1D004, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D004u)

/** \brief  1D008, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D008u)

/** \brief  1D00C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D00Cu)

/** \brief  1D010, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D010u)

/** \brief  1D014, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D014u)

/** \brief  1D018, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D018u)

/** \brief  1D01C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D01Cu)

/** \brief  1D020, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D020u)

/** \brief  1D024, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D024u)

/** \brief  1D028, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D028u)

/** \brief  1D02C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D02Cu)

/** \brief  1D030, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D030u)

/** \brief  1D034, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D034u)

/** \brief  1D038, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D038u)

/** \brief  1D03C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D03Cu)

/** \brief  1D040, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D040u)

/** \brief  1D044, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D044u)

/** \brief  1D048, CPU Code Protection Range Lower Bound Register */
#define CPU1_CPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF883D048u)

/** \brief  1D04C, CPU Code Protection Range Upper Bound Register */
#define CPU1_CPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF883D04Cu)

/** \brief  1FE18, CPU Identification Register TC1.6P */
#define CPU1_CPU_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF883FE18u)

/** \brief  1E000, CPU Code Protection Execute Enable Register Set 0 */
#define CPU1_CPXE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_0*)0xF883E000u)

/** \brief  1E004, CPU Code Protection Execute Enable Register Set 1 */
#define CPU1_CPXE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_1*)0xF883E004u)

/** \brief  1E008, CPU Code Protection Execute Enable Register Set 2 */
#define CPU1_CPXE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_2*)0xF883E008u)

/** \brief  1E00C, CPU Code Protection Execute Enable Register Set 3 */
#define CPU1_CPXE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_3*)0xF883E00Cu)

/** \brief  1E050, CPU Code Protection Execute Enable Register Set 4 */
#define CPU1_CPXE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_4*)0xF883E050u)

/** \brief  1E054, CPU Code Protection Execute Enable Register Set 5 */
#define CPU1_CPXE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_5*)0xF883E054u)

/** \brief  1FD0C, CPU Core Register Access Event */
#define CPU1_CREVT /*lint --e(923)*/ (*(volatile Ifx_CPU_CREVT*)0xF883FD0Cu)

/** \brief  1FE50, CPU Customer ID register */
#define CPU1_CUS_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF883FE50u)

/** \brief  1FF00, CPU Data General Purpose Register */
#define CPU1_D0 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF00u)

/** \brief  1FF04, CPU Data General Purpose Register */
#define CPU1_D1 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF04u)

/** \brief  1FF28, CPU Data General Purpose Register */
#define CPU1_D10 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF28u)

/** \brief  1FF2C, CPU Data General Purpose Register */
#define CPU1_D11 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF2Cu)

/** \brief  1FF30, CPU Data General Purpose Register */
#define CPU1_D12 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF30u)

/** \brief  1FF34, CPU Data General Purpose Register */
#define CPU1_D13 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF34u)

/** \brief  1FF38, CPU Data General Purpose Register */
#define CPU1_D14 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF38u)

/** \brief  1FF3C, CPU Data General Purpose Register */
#define CPU1_D15 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF3Cu)

/** \brief  1FF08, CPU Data General Purpose Register */
#define CPU1_D2 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF08u)

/** \brief  1FF0C, CPU Data General Purpose Register */
#define CPU1_D3 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF0Cu)

/** \brief  1FF10, CPU Data General Purpose Register */
#define CPU1_D4 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF10u)

/** \brief  1FF14, CPU Data General Purpose Register */
#define CPU1_D5 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF14u)

/** \brief  1FF18, CPU Data General Purpose Register */
#define CPU1_D6 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF18u)

/** \brief  1FF1C, CPU Data General Purpose Register */
#define CPU1_D7 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF1Cu)

/** \brief  1FF20, CPU Data General Purpose Register */
#define CPU1_D8 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF20u)

/** \brief  1FF24, CPU Data General Purpose Register */
#define CPU1_D9 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF883FF24u)

/** \brief  19018, CPU Data Asynchronous Trap Register */
#define CPU1_DATR /*lint --e(923)*/ (*(volatile Ifx_CPU_DATR*)0xF8839018u)

/** \brief  1FD00, CPU Debug Status Register */
#define CPU1_DBGSR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGSR*)0xF883FD00u)

/** \brief  1FD48, CPU Debug Trap Control Register */
#define CPU1_DBGTCR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF883FD48u)

/** \brief  19040, CPU Data Memory Control Register */
#define CPU1_DCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON0*)0xF8839040u)

/** \brief  19000, CPU Data Control Register 2 */
#define CPU1_DCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON2*)0xF8839000u)

/** \brief  1FD44, CPU Debug Context Save Area Pointer */
#define CPU1_DCX /*lint --e(923)*/ (*(volatile Ifx_CPU_DCX*)0xF883FD44u)

/** \brief  1901C, CPU Data Error Address Register */
#define CPU1_DEADD /*lint --e(923)*/ (*(volatile Ifx_CPU_DEADD*)0xF883901Cu)

/** \brief  19020, CPU Data Integrity Error Address Register */
#define CPU1_DIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIEAR*)0xF8839020u)

/** \brief  19024, CPU Data Integrity Error Trap Register */
#define CPU1_DIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIETR*)0xF8839024u)

/** \brief  E208, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF882E208u)

/** \brief  E20C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF882E20Cu)

/** \brief  E200, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU1_DLMU_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF882E200u)

/** \brief  E204, CPU Safety protection DLMU Region Upper Address Register */
#define CPU1_DLMU_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF882E204u)

/** \brief  E218, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF882E218u)

/** \brief  E21C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF882E21Cu)

/** \brief  E210, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU1_DLMU_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF882E210u)

/** \brief  E214, CPU Safety protection DLMU Region Upper Address Register */
#define CPU1_DLMU_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF882E214u)

/** \brief  E228, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF882E228u)

/** \brief  E22C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF882E22Cu)

/** \brief  E220, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU1_DLMU_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF882E220u)

/** \brief  E224, CPU Safety protection DLMU Region Upper Address Register */
#define CPU1_DLMU_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF882E224u)

/** \brief  E238, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF882E238u)

/** \brief  E23C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF882E23Cu)

/** \brief  E230, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU1_DLMU_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF882E230u)

/** \brief  E234, CPU Safety protection DLMU Region Upper Address Register */
#define CPU1_DLMU_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF882E234u)

/** \brief  E248, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF882E248u)

/** \brief  E24C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF882E24Cu)

/** \brief  E240, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU1_DLMU_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF882E240u)

/** \brief  E244, CPU Safety protection DLMU Region Upper Address Register */
#define CPU1_DLMU_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF882E244u)

/** \brief  E258, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF882E258u)

/** \brief  E25C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF882E25Cu)

/** \brief  E250, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU1_DLMU_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF882E250u)

/** \brief  E254, CPU Safety protection DLMU Region Upper Address Register */
#define CPU1_DLMU_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF882E254u)

/** \brief  E268, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF882E268u)

/** \brief  E26C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF882E26Cu)

/** \brief  E260, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU1_DLMU_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF882E260u)

/** \brief  E264, CPU Safety protection DLMU Region Upper Address Register */
#define CPU1_DLMU_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF882E264u)

/** \brief  E278, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF882E278u)

/** \brief  E27C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF882E27Cu)

/** \brief  E270, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU1_DLMU_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF882E270u)

/** \brief  E274, CPU Safety protection DLMU Region Upper Address Register */
#define CPU1_DLMU_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF882E274u)

/** \brief  E288, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA0_R*)0xF882E288u)

/** \brief  E298, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA1_R*)0xF882E298u)

/** \brief  E2A8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA2_R*)0xF882E2A8u)

/** \brief  E2B8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA3_R*)0xF882E2B8u)

/** \brief  E2C8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA4_R*)0xF882E2C8u)

/** \brief  E2D8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA5_R*)0xF882E2D8u)

/** \brief  E2E8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA6_R*)0xF882E2E8u)

/** \brief  E2F8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU1_DLMU_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA7_R*)0xF882E2F8u)

/** \brief  E28C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB0_R*)0xF882E28Cu)

/** \brief  E29C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB1_R*)0xF882E29Cu)

/** \brief  E2AC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB2_R*)0xF882E2ACu)

/** \brief  E2BC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB3_R*)0xF882E2BCu)

/** \brief  E2CC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB4_R*)0xF882E2CCu)

/** \brief  E2DC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB5_R*)0xF882E2DCu)

/** \brief  E2EC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB6_R*)0xF882E2ECu)

/** \brief  E2FC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU1_DLMU_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB7_R*)0xF882E2FCu)

/** \brief  1FD40, CPU Debug Monitor Start Address */
#define CPU1_DMS /*lint --e(923)*/ (*(volatile Ifx_CPU_DMS*)0xF883FD40u)

/** \brief  1C000, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C000u)

/** \brief  1C004, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C004u)

/** \brief  1C050, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR10_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C050u)

/** \brief  1C054, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR10_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C054u)

/** \brief  1C058, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR11_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C058u)

/** \brief  1C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR11_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C05Cu)

/** \brief  1C060, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR12_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C060u)

/** \brief  1C064, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR12_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C064u)

/** \brief  1C068, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR13_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C068u)

/** \brief  1C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR13_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C06Cu)

/** \brief  1C070, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR14_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C070u)

/** \brief  1C074, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR14_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C074u)

/** \brief  1C078, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR15_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C078u)

/** \brief  1C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR15_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C07Cu)

/** \brief  1C080, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR16_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C080u)

/** \brief  1C084, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR16_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C084u)

/** \brief  1C088, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR17_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C088u)

/** \brief  1C08C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR17_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C08Cu)

/** \brief  1C008, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C008u)

/** \brief  1C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C00Cu)

/** \brief  1C010, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C010u)

/** \brief  1C014, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C014u)

/** \brief  1C018, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C018u)

/** \brief  1C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C01Cu)

/** \brief  1C020, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C020u)

/** \brief  1C024, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C024u)

/** \brief  1C028, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C028u)

/** \brief  1C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C02Cu)

/** \brief  1C030, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C030u)

/** \brief  1C034, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C034u)

/** \brief  1C038, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C038u)

/** \brief  1C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C03Cu)

/** \brief  1C040, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C040u)

/** \brief  1C044, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C044u)

/** \brief  1C048, CPU Data Protection Range, Lower Bound Register */
#define CPU1_DPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF883C048u)

/** \brief  1C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU1_DPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF883C04Cu)

/** \brief  1E010, CPU Data Protection Read Enable Register Set 0 */
#define CPU1_DPRE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_0*)0xF883E010u)

/** \brief  1E014, CPU Data Protection Read Enable Register Set 1 */
#define CPU1_DPRE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_1*)0xF883E014u)

/** \brief  1E018, CPU Data Protection Read Enable Register Set 2 */
#define CPU1_DPRE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_2*)0xF883E018u)

/** \brief  1E01C, CPU Data Protection Read Enable Register Set 3 */
#define CPU1_DPRE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_3*)0xF883E01Cu)

/** \brief  1E060, CPU Data Protection Read Enable Register Set 4 */
#define CPU1_DPRE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_4*)0xF883E060u)

/** \brief  1E064, CPU Data Protection Read Enable Register Set 5 */
#define CPU1_DPRE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_5*)0xF883E064u)

/** \brief  1E020, CPU Data Protection Write Enable Register Set 0 */
#define CPU1_DPWE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_0*)0xF883E020u)

/** \brief  1E024, CPU Data Protection Write Enable Register Set 1 */
#define CPU1_DPWE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_1*)0xF883E024u)

/** \brief  1E028, CPU Data Protection Write Enable Register Set 2 */
#define CPU1_DPWE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_2*)0xF883E028u)

/** \brief  1E02C, CPU Data Protection Write Enable Register Set 3 */
#define CPU1_DPWE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_3*)0xF883E02Cu)

/** \brief  1E070, CPU Data Protection Write Enable Register Set 4 */
#define CPU1_DPWE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_4*)0xF883E070u)

/** \brief  1E074, CPU Data Protection Write Enable Register Set 5 */
#define CPU1_DPWE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_5*)0xF883E074u)

/** \brief  19010, CPU Data Synchronous Trap Register */
#define CPU1_DSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_DSTR*)0xF8839010u)

/** \brief  1FD08, CPU External Event Register */
#define CPU1_EXEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_EXEVT*)0xF883FD08u)

/** \brief  1FE38, CPU Free CSA List Head Pointer */
#define CPU1_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_FCX*)0xF883FE38u)

/** \brief  1100, CPU Flash Configuration Register 0 */
#define CPU1_FLASHCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF8821100u)

/** \brief  1104, CPU Flash Configuration Register 1 */
#define CPU1_FLASHCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF8821104u)

/** \brief  1108, CPU Flash Configuration Register 2 */
#define CPU1_FLASHCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF8821108u)

/** \brief  110C, CPU Flash Configuration Register 3 */
#define CPU1_FLASHCON3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF882110Cu)

/** \brief  1A000, CPU Trap Control Register */
#define CPU1_FPU_TRAP_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF883A000u)

/** \brief  1A008, CPU Trapping Instruction Opcode Register */
#define CPU1_FPU_TRAP_OPC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF883A008u)

/** \brief  1A004, CPU Trapping Instruction Program Counter Register */
#define CPU1_FPU_TRAP_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF883A004u)

/** \brief  1A010, CPU Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF883A010u)

/** \brief  1A014, CPU Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF883A014u)

/** \brief  1A018, CPU Trapping Instruction Operand Register */
#define CPU1_FPU_TRAP_SRC3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF883A018u)

/** \brief  1FC08, CPU Instruction Count */
#define CPU1_ICNT /*lint --e(923)*/ (*(volatile Ifx_CPU_ICNT*)0xF883FC08u)

/** \brief  1FE2C, CPU Interrupt Control Register */
#define CPU1_ICR /*lint --e(923)*/ (*(volatile Ifx_CPU_ICR*)0xF883FE2Cu)

/** \brief  1FE28, CPU Interrupt Stack Pointer */
#define CPU1_ISP /*lint --e(923)*/ (*(volatile Ifx_CPU_ISP*)0xF883FE28u)

/** \brief  D000, CPU Reset Register 0 */
#define CPU1_KRST0 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST0*)0xF882D000u)

/** \brief  D004, CPU Reset Register 1 */
#define CPU1_KRST1 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST1*)0xF882D004u)

/** \brief  D008, CPU Reset Status Clear Register */
#define CPU1_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF882D008u)

/** \brief  1FE3C, CPU Free CSA List Limit Pointer */
#define CPU1_LCX /*lint --e(923)*/ (*(volatile Ifx_CPU_LCX*)0xF883FE3Cu)

/** \brief  E110, CPU Safety Protection Region LPB Read Access Enable Register A */
#define CPU1_LPB_SPROT_ACCENA_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF882E110u)

/** \brief  E114, CPU Safety Protection Region LPB Read Access Enable Register B */
#define CPU1_LPB_SPROT_ACCENB_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF882E114u)

/** \brief  1FC0C, CPU Multi-Count Register 1 */
#define CPU1_M1CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M1CNT*)0xF883FC0Cu)

/** \brief  1FC10, CPU Multi-Count Register 2 */
#define CPU1_M2CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M2CNT*)0xF883FC10u)

/** \brief  1FC14, CPU Multi-Count Register 3 */
#define CPU1_M3CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M3CNT*)0xF883FC14u)

/** \brief  18, CPU Overlay Mask Register 0 */
#define CPU1_OMASK0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK0*)0xF8820018u)

/** \brief  24, CPU Overlay Mask Register 1 */
#define CPU1_OMASK1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK1*)0xF8820024u)

/** \brief  90, CPU Overlay Mask Register 10 */
#define CPU1_OMASK10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK10*)0xF8820090u)

/** \brief  9C, CPU Overlay Mask Register 11 */
#define CPU1_OMASK11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK11*)0xF882009Cu)

/** \brief  A8, CPU Overlay Mask Register 12 */
#define CPU1_OMASK12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK12*)0xF88200A8u)

/** \brief  B4, CPU Overlay Mask Register 13 */
#define CPU1_OMASK13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK13*)0xF88200B4u)

/** \brief  C0, CPU Overlay Mask Register 14 */
#define CPU1_OMASK14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK14*)0xF88200C0u)

/** \brief  CC, CPU Overlay Mask Register 15 */
#define CPU1_OMASK15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK15*)0xF88200CCu)

/** \brief  D8, CPU Overlay Mask Register 16 */
#define CPU1_OMASK16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK16*)0xF88200D8u)

/** \brief  E4, CPU Overlay Mask Register 17 */
#define CPU1_OMASK17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK17*)0xF88200E4u)

/** \brief  F0, CPU Overlay Mask Register 18 */
#define CPU1_OMASK18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK18*)0xF88200F0u)

/** \brief  FC, CPU Overlay Mask Register 19 */
#define CPU1_OMASK19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK19*)0xF88200FCu)

/** \brief  30, CPU Overlay Mask Register 2 */
#define CPU1_OMASK2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK2*)0xF8820030u)

/** \brief  108, CPU Overlay Mask Register 20 */
#define CPU1_OMASK20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK20*)0xF8820108u)

/** \brief  114, CPU Overlay Mask Register 21 */
#define CPU1_OMASK21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK21*)0xF8820114u)

/** \brief  120, CPU Overlay Mask Register 22 */
#define CPU1_OMASK22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK22*)0xF8820120u)

/** \brief  12C, CPU Overlay Mask Register 23 */
#define CPU1_OMASK23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK23*)0xF882012Cu)

/** \brief  138, CPU Overlay Mask Register 24 */
#define CPU1_OMASK24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK24*)0xF8820138u)

/** \brief  144, CPU Overlay Mask Register 25 */
#define CPU1_OMASK25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK25*)0xF8820144u)

/** \brief  150, CPU Overlay Mask Register 26 */
#define CPU1_OMASK26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK26*)0xF8820150u)

/** \brief  15C, CPU Overlay Mask Register 27 */
#define CPU1_OMASK27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK27*)0xF882015Cu)

/** \brief  168, CPU Overlay Mask Register 28 */
#define CPU1_OMASK28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK28*)0xF8820168u)

/** \brief  174, CPU Overlay Mask Register 29 */
#define CPU1_OMASK29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK29*)0xF8820174u)

/** \brief  3C, CPU Overlay Mask Register 3 */
#define CPU1_OMASK3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK3*)0xF882003Cu)

/** \brief  180, CPU Overlay Mask Register 30 */
#define CPU1_OMASK30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK30*)0xF8820180u)

/** \brief  18C, CPU Overlay Mask Register 31 */
#define CPU1_OMASK31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK31*)0xF882018Cu)

/** \brief  48, CPU Overlay Mask Register 4 */
#define CPU1_OMASK4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK4*)0xF8820048u)

/** \brief  54, CPU Overlay Mask Register 5 */
#define CPU1_OMASK5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK5*)0xF8820054u)

/** \brief  60, CPU Overlay Mask Register 6 */
#define CPU1_OMASK6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK6*)0xF8820060u)

/** \brief  6C, CPU Overlay Mask Register 7 */
#define CPU1_OMASK7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK7*)0xF882006Cu)

/** \brief  78, CPU Overlay Mask Register 8 */
#define CPU1_OMASK8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK8*)0xF8820078u)

/** \brief  84, CPU Overlay Mask Register 9 */
#define CPU1_OMASK9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK9*)0xF8820084u)

/** \brief  0, CPU Overlay Range Select Register */
#define CPU1_OSEL /*lint --e(923)*/ (*(volatile Ifx_CPU_OSEL*)0xF8820000u)

/** \brief  14, CPU Overlay Target Address Register 0 */
#define CPU1_OTAR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR0*)0xF8820014u)

/** \brief  20, CPU Overlay Target Address Register 1 */
#define CPU1_OTAR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR1*)0xF8820020u)

/** \brief  8C, CPU Overlay Target Address Register 10 */
#define CPU1_OTAR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR10*)0xF882008Cu)

/** \brief  98, CPU Overlay Target Address Register 11 */
#define CPU1_OTAR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR11*)0xF8820098u)

/** \brief  A4, CPU Overlay Target Address Register 12 */
#define CPU1_OTAR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR12*)0xF88200A4u)

/** \brief  B0, CPU Overlay Target Address Register 13 */
#define CPU1_OTAR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR13*)0xF88200B0u)

/** \brief  BC, CPU Overlay Target Address Register 14 */
#define CPU1_OTAR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR14*)0xF88200BCu)

/** \brief  C8, CPU Overlay Target Address Register 15 */
#define CPU1_OTAR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR15*)0xF88200C8u)

/** \brief  D4, CPU Overlay Target Address Register 16 */
#define CPU1_OTAR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR16*)0xF88200D4u)

/** \brief  E0, CPU Overlay Target Address Register 17 */
#define CPU1_OTAR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR17*)0xF88200E0u)

/** \brief  EC, CPU Overlay Target Address Register 18 */
#define CPU1_OTAR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR18*)0xF88200ECu)

/** \brief  F8, CPU Overlay Target Address Register 19 */
#define CPU1_OTAR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR19*)0xF88200F8u)

/** \brief  2C, CPU Overlay Target Address Register 2 */
#define CPU1_OTAR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR2*)0xF882002Cu)

/** \brief  104, CPU Overlay Target Address Register 20 */
#define CPU1_OTAR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR20*)0xF8820104u)

/** \brief  110, CPU Overlay Target Address Register 21 */
#define CPU1_OTAR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR21*)0xF8820110u)

/** \brief  11C, CPU Overlay Target Address Register 22 */
#define CPU1_OTAR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR22*)0xF882011Cu)

/** \brief  128, CPU Overlay Target Address Register 23 */
#define CPU1_OTAR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR23*)0xF8820128u)

/** \brief  134, CPU Overlay Target Address Register 24 */
#define CPU1_OTAR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR24*)0xF8820134u)

/** \brief  140, CPU Overlay Target Address Register 25 */
#define CPU1_OTAR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR25*)0xF8820140u)

/** \brief  14C, CPU Overlay Target Address Register 26 */
#define CPU1_OTAR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR26*)0xF882014Cu)

/** \brief  158, CPU Overlay Target Address Register 27 */
#define CPU1_OTAR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR27*)0xF8820158u)

/** \brief  164, CPU Overlay Target Address Register 28 */
#define CPU1_OTAR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR28*)0xF8820164u)

/** \brief  170, CPU Overlay Target Address Register 29 */
#define CPU1_OTAR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR29*)0xF8820170u)

/** \brief  38, CPU Overlay Target Address Register 3 */
#define CPU1_OTAR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR3*)0xF8820038u)

/** \brief  17C, CPU Overlay Target Address Register 30 */
#define CPU1_OTAR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR30*)0xF882017Cu)

/** \brief  188, CPU Overlay Target Address Register 31 */
#define CPU1_OTAR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR31*)0xF8820188u)

/** \brief  44, CPU Overlay Target Address Register 4 */
#define CPU1_OTAR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR4*)0xF8820044u)

/** \brief  50, CPU Overlay Target Address Register 5 */
#define CPU1_OTAR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR5*)0xF8820050u)

/** \brief  5C, CPU Overlay Target Address Register 6 */
#define CPU1_OTAR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR6*)0xF882005Cu)

/** \brief  68, CPU Overlay Target Address Register 7 */
#define CPU1_OTAR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR7*)0xF8820068u)

/** \brief  74, CPU Overlay Target Address Register 8 */
#define CPU1_OTAR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR8*)0xF8820074u)

/** \brief  80, CPU Overlay Target Address Register 9 */
#define CPU1_OTAR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR9*)0xF8820080u)

/** \brief  1FE08, CPU Program Counter */
#define CPU1_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_PC*)0xF883FE08u)

/** \brief  1920C, CPU Program Control 0 */
#define CPU1_PCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON0*)0xF883920Cu)

/** \brief  19204, CPU Program Control 1 */
#define CPU1_PCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON1*)0xF8839204u)

/** \brief  19208, CPU Program Control 2 */
#define CPU1_PCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON2*)0xF8839208u)

/** \brief  1FE00, CPU Previous Context Information Register */
#define CPU1_PCXI /*lint --e(923)*/ (*(volatile Ifx_CPU_PCXI*)0xF883FE00u)

/** \brief  19210, CPU Program Integrity Error Address Register */
#define CPU1_PIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIEAR*)0xF8839210u)

/** \brief  19214, CPU Program Integrity Error Trap Register */
#define CPU1_PIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIETR*)0xF8839214u)

/** \brief  18100, CPU Data Access CacheabilityRegister */
#define CPU1_PMA0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA0*)0xF8838100u)

/** \brief  18104, CPU Code Access CacheabilityRegister */
#define CPU1_PMA1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA1*)0xF8838104u)

/** \brief  18108, CPU Peripheral Space Identifier register */
#define CPU1_PMA2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA2*)0xF8838108u)

/** \brief  19200, CPU Program Synchronous Trap Register */
#define CPU1_PSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_PSTR*)0xF8839200u)

/** \brief  1FE04, CPU Program Status Word */
#define CPU1_PSW /*lint --e(923)*/ (*(volatile Ifx_CPU_PSW*)0xF883FE04u)

/** \brief  10, CPU Redirected Address Base Register 0 */
#define CPU1_RABR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR0*)0xF8820010u)

/** \brief  1C, CPU Redirected Address Base Register 1 */
#define CPU1_RABR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR1*)0xF882001Cu)

/** \brief  88, CPU Redirected Address Base Register 10 */
#define CPU1_RABR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR10*)0xF8820088u)

/** \brief  94, CPU Redirected Address Base Register 11 */
#define CPU1_RABR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR11*)0xF8820094u)

/** \brief  A0, CPU Redirected Address Base Register 12 */
#define CPU1_RABR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR12*)0xF88200A0u)

/** \brief  AC, CPU Redirected Address Base Register 13 */
#define CPU1_RABR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR13*)0xF88200ACu)

/** \brief  B8, CPU Redirected Address Base Register 14 */
#define CPU1_RABR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR14*)0xF88200B8u)

/** \brief  C4, CPU Redirected Address Base Register 15 */
#define CPU1_RABR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR15*)0xF88200C4u)

/** \brief  D0, CPU Redirected Address Base Register 16 */
#define CPU1_RABR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR16*)0xF88200D0u)

/** \brief  DC, CPU Redirected Address Base Register 17 */
#define CPU1_RABR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR17*)0xF88200DCu)

/** \brief  E8, CPU Redirected Address Base Register 18 */
#define CPU1_RABR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR18*)0xF88200E8u)

/** \brief  F4, CPU Redirected Address Base Register 19 */
#define CPU1_RABR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR19*)0xF88200F4u)

/** \brief  28, CPU Redirected Address Base Register 2 */
#define CPU1_RABR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR2*)0xF8820028u)

/** \brief  100, CPU Redirected Address Base Register 20 */
#define CPU1_RABR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR20*)0xF8820100u)

/** \brief  10C, CPU Redirected Address Base Register 21 */
#define CPU1_RABR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR21*)0xF882010Cu)

/** \brief  118, CPU Redirected Address Base Register 22 */
#define CPU1_RABR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR22*)0xF8820118u)

/** \brief  124, CPU Redirected Address Base Register 23 */
#define CPU1_RABR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR23*)0xF8820124u)

/** \brief  130, CPU Redirected Address Base Register 24 */
#define CPU1_RABR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR24*)0xF8820130u)

/** \brief  13C, CPU Redirected Address Base Register 25 */
#define CPU1_RABR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR25*)0xF882013Cu)

/** \brief  148, CPU Redirected Address Base Register 26 */
#define CPU1_RABR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR26*)0xF8820148u)

/** \brief  154, CPU Redirected Address Base Register 27 */
#define CPU1_RABR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR27*)0xF8820154u)

/** \brief  160, CPU Redirected Address Base Register 28 */
#define CPU1_RABR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR28*)0xF8820160u)

/** \brief  16C, CPU Redirected Address Base Register 29 */
#define CPU1_RABR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR29*)0xF882016Cu)

/** \brief  34, CPU Redirected Address Base Register 3 */
#define CPU1_RABR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR3*)0xF8820034u)

/** \brief  178, CPU Redirected Address Base Register 30 */
#define CPU1_RABR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR30*)0xF8820178u)

/** \brief  184, CPU Redirected Address Base Register 31 */
#define CPU1_RABR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR31*)0xF8820184u)

/** \brief  40, CPU Redirected Address Base Register 4 */
#define CPU1_RABR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR4*)0xF8820040u)

/** \brief  4C, CPU Redirected Address Base Register 5 */
#define CPU1_RABR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR5*)0xF882004Cu)

/** \brief  58, CPU Redirected Address Base Register 6 */
#define CPU1_RABR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR6*)0xF8820058u)

/** \brief  64, CPU Redirected Address Base Register 7 */
#define CPU1_RABR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR7*)0xF8820064u)

/** \brief  70, CPU Redirected Address Base Register 8 */
#define CPU1_RABR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR8*)0xF8820070u)

/** \brief  7C, CPU Redirected Address Base Register 9 */
#define CPU1_RABR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR9*)0xF882007Cu)

/** \brief  11030, CPU SRI Error Generation Register */
#define CPU1_SEGEN /*lint --e(923)*/ (*(volatile Ifx_CPU_SEGEN*)0xF8831030u)

/** \brief  E100, CPU Safety Protection Register Access Enable Register A */
#define CPU1_SFR_SPROT_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF882E100u)

/** \brief  E104, CPU Safety Protection Region Access Enable Register B */
#define CPU1_SFR_SPROT_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF882E104u)

/** \brief  1900C, CPU SIST Mode Access Control Register */
#define CPU1_SMACON /*lint --e(923)*/ (*(volatile Ifx_CPU_SMACON*)0xF883900Cu)

/** \brief  E008, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU1_SPR_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF882E008u)

/** \brief  E00C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU1_SPR_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF882E00Cu)

/** \brief  E000, CPU Safety Protection SPR Region Lower Address Register */
#define CPU1_SPR_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF882E000u)

/** \brief  E004, CPU Safety protection SPR Region Upper Address Register */
#define CPU1_SPR_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF882E004u)

/** \brief  E018, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU1_SPR_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF882E018u)

/** \brief  E01C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU1_SPR_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF882E01Cu)

/** \brief  E010, CPU Safety Protection SPR Region Lower Address Register */
#define CPU1_SPR_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF882E010u)

/** \brief  E014, CPU Safety protection SPR Region Upper Address Register */
#define CPU1_SPR_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF882E014u)

/** \brief  E028, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU1_SPR_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF882E028u)

/** \brief  E02C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU1_SPR_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF882E02Cu)

/** \brief  E020, CPU Safety Protection SPR Region Lower Address Register */
#define CPU1_SPR_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF882E020u)

/** \brief  E024, CPU Safety protection SPR Region Upper Address Register */
#define CPU1_SPR_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF882E024u)

/** \brief  E038, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU1_SPR_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF882E038u)

/** \brief  E03C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU1_SPR_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF882E03Cu)

/** \brief  E030, CPU Safety Protection SPR Region Lower Address Register */
#define CPU1_SPR_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF882E030u)

/** \brief  E034, CPU Safety protection SPR Region Upper Address Register */
#define CPU1_SPR_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF882E034u)

/** \brief  E048, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU1_SPR_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF882E048u)

/** \brief  E04C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU1_SPR_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF882E04Cu)

/** \brief  E040, CPU Safety Protection SPR Region Lower Address Register */
#define CPU1_SPR_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF882E040u)

/** \brief  E044, CPU Safety protection SPR Region Upper Address Register */
#define CPU1_SPR_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF882E044u)

/** \brief  E058, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU1_SPR_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF882E058u)

/** \brief  E05C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU1_SPR_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF882E05Cu)

/** \brief  E050, CPU Safety Protection SPR Region Lower Address Register */
#define CPU1_SPR_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF882E050u)

/** \brief  E054, CPU Safety protection SPR Region Upper Address Register */
#define CPU1_SPR_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF882E054u)

/** \brief  E068, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU1_SPR_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF882E068u)

/** \brief  E06C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU1_SPR_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF882E06Cu)

/** \brief  E060, CPU Safety Protection SPR Region Lower Address Register */
#define CPU1_SPR_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF882E060u)

/** \brief  E064, CPU Safety protection SPR Region Upper Address Register */
#define CPU1_SPR_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF882E064u)

/** \brief  E078, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU1_SPR_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF882E078u)

/** \brief  E07C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU1_SPR_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF882E07Cu)

/** \brief  E070, CPU Safety Protection SPR Region Lower Address Register */
#define CPU1_SPR_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF882E070u)

/** \brief  E074, CPU Safety protection SPR Region Upper Address Register */
#define CPU1_SPR_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF882E074u)

/** \brief  E088, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU1_SPR_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA0_R*)0xF882E088u)

/** \brief  E098, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU1_SPR_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA1_R*)0xF882E098u)

/** \brief  E0A8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU1_SPR_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA2_R*)0xF882E0A8u)

/** \brief  E0B8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU1_SPR_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA3_R*)0xF882E0B8u)

/** \brief  E0C8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU1_SPR_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA4_R*)0xF882E0C8u)

/** \brief  E0D8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU1_SPR_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA5_R*)0xF882E0D8u)

/** \brief  E0E8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU1_SPR_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA6_R*)0xF882E0E8u)

/** \brief  E0F8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU1_SPR_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA7_R*)0xF882E0F8u)

/** \brief  E08C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU1_SPR_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB0_R*)0xF882E08Cu)

/** \brief  E09C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU1_SPR_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB1_R*)0xF882E09Cu)

/** \brief  E0AC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU1_SPR_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB2_R*)0xF882E0ACu)

/** \brief  E0BC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU1_SPR_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB3_R*)0xF882E0BCu)

/** \brief  E0CC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU1_SPR_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB4_R*)0xF882E0CCu)

/** \brief  E0DC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU1_SPR_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB5_R*)0xF882E0DCu)

/** \brief  E0EC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU1_SPR_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB6_R*)0xF882E0ECu)

/** \brief  E0FC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU1_SPR_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB7_R*)0xF882E0FCu)

/** \brief  1FD10, CPU Software Debug Event */
#define CPU1_SWEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_SWEVT*)0xF883FD10u)

/** \brief  1FE14, CPU System Configuration Register */
#define CPU1_SYSCON /*lint --e(923)*/ (*(volatile Ifx_CPU_SYSCON*)0xF883FE14u)

/** \brief  18004, CPU Task Address Space Identifier Register */
#define CPU1_TASK_ASI /*lint --e(923)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF8838004u)

/** \brief  1E400, CPU Temporal Protection System Control Register */
#define CPU1_TPS_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF883E400u)

/** \brief  1E448, CPU Exception Timer Class Enable Register */
#define CPU1_TPS_EXTIM_CLASS_EN /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF883E448u)

/** \brief  1E444, CPU Exception Timer Current Value */
#define CPU1_TPS_EXTIM_CVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CVAL*)0xF883E444u)

/** \brief  1E450, CPU Exception Timer Status Register */
#define CPU1_TPS_EXTIM_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF883E450u)

/** \brief  1E440, CPU Exception Timer Load Value */
#define CPU1_TPS_EXTIM_LVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_LVAL*)0xF883E440u)

/** \brief  1E44C, CPU Exception Timer Status Register */
#define CPU1_TPS_EXTIM_STAT /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF883E44Cu)

/** \brief  1E404, CPU Temporal Protection System Timer Register */
#define CPU1_TPS_TIMER0 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF883E404u)

/** \brief  1E408, CPU Temporal Protection System Timer Register */
#define CPU1_TPS_TIMER1 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF883E408u)

/** \brief  1E40C, CPU Temporal Protection System Timer Register */
#define CPU1_TPS_TIMER2 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF883E40Cu)

/** \brief  1F004, CPU Trigger Address */
#define CPU1_TR0_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F004u)

/** \brief  1F000, CPU Trigger Event */
#define CPU1_TR0_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F000u)

/** \brief  1F00C, CPU Trigger Address */
#define CPU1_TR1_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F00Cu)

/** \brief  1F008, CPU Trigger Event */
#define CPU1_TR1_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F008u)

/** \brief  1F014, CPU Trigger Address */
#define CPU1_TR2_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F014u)

/** \brief  1F010, CPU Trigger Event */
#define CPU1_TR2_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F010u)

/** \brief  1F01C, CPU Trigger Address */
#define CPU1_TR3_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F01Cu)

/** \brief  1F018, CPU Trigger Event */
#define CPU1_TR3_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F018u)

/** \brief  1F024, CPU Trigger Address */
#define CPU1_TR4_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F024u)

/** \brief  1F020, CPU Trigger Event */
#define CPU1_TR4_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F020u)

/** \brief  1F02C, CPU Trigger Address */
#define CPU1_TR5_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F02Cu)

/** \brief  1F028, CPU Trigger Event */
#define CPU1_TR5_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F028u)

/** \brief  1F034, CPU Trigger Address */
#define CPU1_TR6_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F034u)

/** \brief  1F030, CPU Trigger Event */
#define CPU1_TR6_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F030u)

/** \brief  1F03C, CPU Trigger Address */
#define CPU1_TR7_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF883F03Cu)

/** \brief  1F038, CPU Trigger Event */
#define CPU1_TR7_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF883F038u)

/** \brief  1FD30, CPU Trigger Address x */
#define CPU1_TRIG_ACC /*lint --e(923)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF883FD30u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_Cpu2
 * \{  */

/** \brief  1FF80, CPU Address General Purpose Register */
#define CPU2_A0 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FF80u)

/** \brief  1FF84, CPU Address General Purpose Register */
#define CPU2_A1 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FF84u)

/** \brief  1FFA8, CPU Address General Purpose Register */
#define CPU2_A10 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FFA8u)

/** \brief  1FFAC, CPU Address General Purpose Register */
#define CPU2_A11 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FFACu)

/** \brief  1FFB0, CPU Address General Purpose Register */
#define CPU2_A12 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FFB0u)

/** \brief  1FFB4, CPU Address General Purpose Register */
#define CPU2_A13 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FFB4u)

/** \brief  1FFB8, CPU Address General Purpose Register */
#define CPU2_A14 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FFB8u)

/** \brief  1FFBC, CPU Address General Purpose Register */
#define CPU2_A15 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FFBCu)

/** \brief  1FF88, CPU Address General Purpose Register */
#define CPU2_A2 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FF88u)

/** \brief  1FF8C, CPU Address General Purpose Register */
#define CPU2_A3 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FF8Cu)

/** \brief  1FF90, CPU Address General Purpose Register */
#define CPU2_A4 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FF90u)

/** \brief  1FF94, CPU Address General Purpose Register */
#define CPU2_A5 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FF94u)

/** \brief  1FF98, CPU Address General Purpose Register */
#define CPU2_A6 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FF98u)

/** \brief  1FF9C, CPU Address General Purpose Register */
#define CPU2_A7 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FF9Cu)

/** \brief  1FFA0, CPU Address General Purpose Register */
#define CPU2_A8 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FFA0u)

/** \brief  1FFA4, CPU Address General Purpose Register */
#define CPU2_A9 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF885FFA4u)

/** \brief  1FE20, CPU Base Interrupt Vector Table Pointer */
#define CPU2_BIV /*lint --e(923)*/ (*(volatile Ifx_CPU_BIV*)0xF885FE20u)

/** \brief  1FE24, CPU Base Trap Vector Table Pointer */
#define CPU2_BTV /*lint --e(923)*/ (*(volatile Ifx_CPU_BTV*)0xF885FE24u)

/** \brief  1FC04, CPU CPU Clock Cycle Count */
#define CPU2_CCNT /*lint --e(923)*/ (*(volatile Ifx_CPU_CCNT*)0xF885FC04u)

/** \brief  1FC00, CPU Counter Control */
#define CPU2_CCTRL /*lint --e(923)*/ (*(volatile Ifx_CPU_CCTRL*)0xF885FC00u)

/** \brief  19400, CPU Compatibility Control Register */
#define CPU2_COMPAT /*lint --e(923)*/ (*(volatile Ifx_CPU_COMPAT*)0xF8859400u)

/** \brief  1FE1C, CPU Core Identification Register */
#define CPU2_CORE_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF885FE1Cu)

/** \brief  1D000, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D000u)

/** \brief  1D004, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D004u)

/** \brief  1D008, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D008u)

/** \brief  1D00C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D00Cu)

/** \brief  1D010, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D010u)

/** \brief  1D014, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D014u)

/** \brief  1D018, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D018u)

/** \brief  1D01C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D01Cu)

/** \brief  1D020, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D020u)

/** \brief  1D024, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D024u)

/** \brief  1D028, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D028u)

/** \brief  1D02C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D02Cu)

/** \brief  1D030, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D030u)

/** \brief  1D034, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D034u)

/** \brief  1D038, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D038u)

/** \brief  1D03C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D03Cu)

/** \brief  1D040, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D040u)

/** \brief  1D044, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D044u)

/** \brief  1D048, CPU Code Protection Range Lower Bound Register */
#define CPU2_CPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF885D048u)

/** \brief  1D04C, CPU Code Protection Range Upper Bound Register */
#define CPU2_CPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF885D04Cu)

/** \brief  1FE18, CPU Identification Register TC1.6P */
#define CPU2_CPU_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF885FE18u)

/** \brief  1E000, CPU Code Protection Execute Enable Register Set 0 */
#define CPU2_CPXE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_0*)0xF885E000u)

/** \brief  1E004, CPU Code Protection Execute Enable Register Set 1 */
#define CPU2_CPXE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_1*)0xF885E004u)

/** \brief  1E008, CPU Code Protection Execute Enable Register Set 2 */
#define CPU2_CPXE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_2*)0xF885E008u)

/** \brief  1E00C, CPU Code Protection Execute Enable Register Set 3 */
#define CPU2_CPXE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_3*)0xF885E00Cu)

/** \brief  1E050, CPU Code Protection Execute Enable Register Set 4 */
#define CPU2_CPXE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_4*)0xF885E050u)

/** \brief  1E054, CPU Code Protection Execute Enable Register Set 5 */
#define CPU2_CPXE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_5*)0xF885E054u)

/** \brief  1FD0C, CPU Core Register Access Event */
#define CPU2_CREVT /*lint --e(923)*/ (*(volatile Ifx_CPU_CREVT*)0xF885FD0Cu)

/** \brief  1FE50, CPU Customer ID register */
#define CPU2_CUS_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF885FE50u)

/** \brief  1FF00, CPU Data General Purpose Register */
#define CPU2_D0 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF00u)

/** \brief  1FF04, CPU Data General Purpose Register */
#define CPU2_D1 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF04u)

/** \brief  1FF28, CPU Data General Purpose Register */
#define CPU2_D10 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF28u)

/** \brief  1FF2C, CPU Data General Purpose Register */
#define CPU2_D11 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF2Cu)

/** \brief  1FF30, CPU Data General Purpose Register */
#define CPU2_D12 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF30u)

/** \brief  1FF34, CPU Data General Purpose Register */
#define CPU2_D13 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF34u)

/** \brief  1FF38, CPU Data General Purpose Register */
#define CPU2_D14 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF38u)

/** \brief  1FF3C, CPU Data General Purpose Register */
#define CPU2_D15 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF3Cu)

/** \brief  1FF08, CPU Data General Purpose Register */
#define CPU2_D2 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF08u)

/** \brief  1FF0C, CPU Data General Purpose Register */
#define CPU2_D3 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF0Cu)

/** \brief  1FF10, CPU Data General Purpose Register */
#define CPU2_D4 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF10u)

/** \brief  1FF14, CPU Data General Purpose Register */
#define CPU2_D5 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF14u)

/** \brief  1FF18, CPU Data General Purpose Register */
#define CPU2_D6 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF18u)

/** \brief  1FF1C, CPU Data General Purpose Register */
#define CPU2_D7 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF1Cu)

/** \brief  1FF20, CPU Data General Purpose Register */
#define CPU2_D8 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF20u)

/** \brief  1FF24, CPU Data General Purpose Register */
#define CPU2_D9 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF885FF24u)

/** \brief  19018, CPU Data Asynchronous Trap Register */
#define CPU2_DATR /*lint --e(923)*/ (*(volatile Ifx_CPU_DATR*)0xF8859018u)

/** \brief  1FD00, CPU Debug Status Register */
#define CPU2_DBGSR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGSR*)0xF885FD00u)

/** \brief  1FD48, CPU Debug Trap Control Register */
#define CPU2_DBGTCR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF885FD48u)

/** \brief  19040, CPU Data Memory Control Register */
#define CPU2_DCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON0*)0xF8859040u)

/** \brief  19000, CPU Data Control Register 2 */
#define CPU2_DCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON2*)0xF8859000u)

/** \brief  1FD44, CPU Debug Context Save Area Pointer */
#define CPU2_DCX /*lint --e(923)*/ (*(volatile Ifx_CPU_DCX*)0xF885FD44u)

/** \brief  1901C, CPU Data Error Address Register */
#define CPU2_DEADD /*lint --e(923)*/ (*(volatile Ifx_CPU_DEADD*)0xF885901Cu)

/** \brief  19020, CPU Data Integrity Error Address Register */
#define CPU2_DIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIEAR*)0xF8859020u)

/** \brief  19024, CPU Data Integrity Error Trap Register */
#define CPU2_DIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIETR*)0xF8859024u)

/** \brief  E208, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF884E208u)

/** \brief  E20C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF884E20Cu)

/** \brief  E200, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU2_DLMU_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF884E200u)

/** \brief  E204, CPU Safety protection DLMU Region Upper Address Register */
#define CPU2_DLMU_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF884E204u)

/** \brief  E218, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF884E218u)

/** \brief  E21C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF884E21Cu)

/** \brief  E210, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU2_DLMU_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF884E210u)

/** \brief  E214, CPU Safety protection DLMU Region Upper Address Register */
#define CPU2_DLMU_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF884E214u)

/** \brief  E228, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF884E228u)

/** \brief  E22C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF884E22Cu)

/** \brief  E220, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU2_DLMU_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF884E220u)

/** \brief  E224, CPU Safety protection DLMU Region Upper Address Register */
#define CPU2_DLMU_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF884E224u)

/** \brief  E238, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF884E238u)

/** \brief  E23C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF884E23Cu)

/** \brief  E230, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU2_DLMU_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF884E230u)

/** \brief  E234, CPU Safety protection DLMU Region Upper Address Register */
#define CPU2_DLMU_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF884E234u)

/** \brief  E248, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF884E248u)

/** \brief  E24C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF884E24Cu)

/** \brief  E240, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU2_DLMU_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF884E240u)

/** \brief  E244, CPU Safety protection DLMU Region Upper Address Register */
#define CPU2_DLMU_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF884E244u)

/** \brief  E258, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF884E258u)

/** \brief  E25C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF884E25Cu)

/** \brief  E250, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU2_DLMU_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF884E250u)

/** \brief  E254, CPU Safety protection DLMU Region Upper Address Register */
#define CPU2_DLMU_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF884E254u)

/** \brief  E268, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF884E268u)

/** \brief  E26C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF884E26Cu)

/** \brief  E260, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU2_DLMU_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF884E260u)

/** \brief  E264, CPU Safety protection DLMU Region Upper Address Register */
#define CPU2_DLMU_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF884E264u)

/** \brief  E278, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF884E278u)

/** \brief  E27C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF884E27Cu)

/** \brief  E270, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU2_DLMU_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF884E270u)

/** \brief  E274, CPU Safety protection DLMU Region Upper Address Register */
#define CPU2_DLMU_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF884E274u)

/** \brief  E288, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA0_R*)0xF884E288u)

/** \brief  E298, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA1_R*)0xF884E298u)

/** \brief  E2A8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA2_R*)0xF884E2A8u)

/** \brief  E2B8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA3_R*)0xF884E2B8u)

/** \brief  E2C8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA4_R*)0xF884E2C8u)

/** \brief  E2D8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA5_R*)0xF884E2D8u)

/** \brief  E2E8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA6_R*)0xF884E2E8u)

/** \brief  E2F8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU2_DLMU_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA7_R*)0xF884E2F8u)

/** \brief  E28C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB0_R*)0xF884E28Cu)

/** \brief  E29C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB1_R*)0xF884E29Cu)

/** \brief  E2AC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB2_R*)0xF884E2ACu)

/** \brief  E2BC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB3_R*)0xF884E2BCu)

/** \brief  E2CC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB4_R*)0xF884E2CCu)

/** \brief  E2DC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB5_R*)0xF884E2DCu)

/** \brief  E2EC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB6_R*)0xF884E2ECu)

/** \brief  E2FC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU2_DLMU_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB7_R*)0xF884E2FCu)

/** \brief  1FD40, CPU Debug Monitor Start Address */
#define CPU2_DMS /*lint --e(923)*/ (*(volatile Ifx_CPU_DMS*)0xF885FD40u)

/** \brief  1C000, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C000u)

/** \brief  1C004, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C004u)

/** \brief  1C050, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR10_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C050u)

/** \brief  1C054, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR10_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C054u)

/** \brief  1C058, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR11_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C058u)

/** \brief  1C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR11_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C05Cu)

/** \brief  1C060, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR12_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C060u)

/** \brief  1C064, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR12_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C064u)

/** \brief  1C068, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR13_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C068u)

/** \brief  1C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR13_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C06Cu)

/** \brief  1C070, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR14_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C070u)

/** \brief  1C074, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR14_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C074u)

/** \brief  1C078, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR15_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C078u)

/** \brief  1C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR15_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C07Cu)

/** \brief  1C080, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR16_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C080u)

/** \brief  1C084, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR16_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C084u)

/** \brief  1C088, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR17_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C088u)

/** \brief  1C08C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR17_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C08Cu)

/** \brief  1C008, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C008u)

/** \brief  1C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C00Cu)

/** \brief  1C010, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C010u)

/** \brief  1C014, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C014u)

/** \brief  1C018, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C018u)

/** \brief  1C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C01Cu)

/** \brief  1C020, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C020u)

/** \brief  1C024, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C024u)

/** \brief  1C028, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C028u)

/** \brief  1C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C02Cu)

/** \brief  1C030, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C030u)

/** \brief  1C034, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C034u)

/** \brief  1C038, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C038u)

/** \brief  1C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C03Cu)

/** \brief  1C040, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C040u)

/** \brief  1C044, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C044u)

/** \brief  1C048, CPU Data Protection Range, Lower Bound Register */
#define CPU2_DPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF885C048u)

/** \brief  1C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU2_DPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF885C04Cu)

/** \brief  1E010, CPU Data Protection Read Enable Register Set 0 */
#define CPU2_DPRE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_0*)0xF885E010u)

/** \brief  1E014, CPU Data Protection Read Enable Register Set 1 */
#define CPU2_DPRE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_1*)0xF885E014u)

/** \brief  1E018, CPU Data Protection Read Enable Register Set 2 */
#define CPU2_DPRE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_2*)0xF885E018u)

/** \brief  1E01C, CPU Data Protection Read Enable Register Set 3 */
#define CPU2_DPRE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_3*)0xF885E01Cu)

/** \brief  1E060, CPU Data Protection Read Enable Register Set 4 */
#define CPU2_DPRE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_4*)0xF885E060u)

/** \brief  1E064, CPU Data Protection Read Enable Register Set 5 */
#define CPU2_DPRE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_5*)0xF885E064u)

/** \brief  1E020, CPU Data Protection Write Enable Register Set 0 */
#define CPU2_DPWE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_0*)0xF885E020u)

/** \brief  1E024, CPU Data Protection Write Enable Register Set 1 */
#define CPU2_DPWE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_1*)0xF885E024u)

/** \brief  1E028, CPU Data Protection Write Enable Register Set 2 */
#define CPU2_DPWE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_2*)0xF885E028u)

/** \brief  1E02C, CPU Data Protection Write Enable Register Set 3 */
#define CPU2_DPWE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_3*)0xF885E02Cu)

/** \brief  1E070, CPU Data Protection Write Enable Register Set 4 */
#define CPU2_DPWE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_4*)0xF885E070u)

/** \brief  1E074, CPU Data Protection Write Enable Register Set 5 */
#define CPU2_DPWE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_5*)0xF885E074u)

/** \brief  19010, CPU Data Synchronous Trap Register */
#define CPU2_DSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_DSTR*)0xF8859010u)

/** \brief  1FD08, CPU External Event Register */
#define CPU2_EXEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_EXEVT*)0xF885FD08u)

/** \brief  1FE38, CPU Free CSA List Head Pointer */
#define CPU2_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_FCX*)0xF885FE38u)

/** \brief  1100, CPU Flash Configuration Register 0 */
#define CPU2_FLASHCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF8841100u)

/** \brief  1104, CPU Flash Configuration Register 1 */
#define CPU2_FLASHCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF8841104u)

/** \brief  1108, CPU Flash Configuration Register 2 */
#define CPU2_FLASHCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF8841108u)

/** \brief  110C, CPU Flash Configuration Register 3 */
#define CPU2_FLASHCON3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF884110Cu)

/** \brief  1A000, CPU Trap Control Register */
#define CPU2_FPU_TRAP_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF885A000u)

/** \brief  1A008, CPU Trapping Instruction Opcode Register */
#define CPU2_FPU_TRAP_OPC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF885A008u)

/** \brief  1A004, CPU Trapping Instruction Program Counter Register */
#define CPU2_FPU_TRAP_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF885A004u)

/** \brief  1A010, CPU Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF885A010u)

/** \brief  1A014, CPU Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF885A014u)

/** \brief  1A018, CPU Trapping Instruction Operand Register */
#define CPU2_FPU_TRAP_SRC3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF885A018u)

/** \brief  1FC08, CPU Instruction Count */
#define CPU2_ICNT /*lint --e(923)*/ (*(volatile Ifx_CPU_ICNT*)0xF885FC08u)

/** \brief  1FE2C, CPU Interrupt Control Register */
#define CPU2_ICR /*lint --e(923)*/ (*(volatile Ifx_CPU_ICR*)0xF885FE2Cu)

/** \brief  1FE28, CPU Interrupt Stack Pointer */
#define CPU2_ISP /*lint --e(923)*/ (*(volatile Ifx_CPU_ISP*)0xF885FE28u)

/** \brief  D000, CPU Reset Register 0 */
#define CPU2_KRST0 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST0*)0xF884D000u)

/** \brief  D004, CPU Reset Register 1 */
#define CPU2_KRST1 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST1*)0xF884D004u)

/** \brief  D008, CPU Reset Status Clear Register */
#define CPU2_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF884D008u)

/** \brief  1FE3C, CPU Free CSA List Limit Pointer */
#define CPU2_LCX /*lint --e(923)*/ (*(volatile Ifx_CPU_LCX*)0xF885FE3Cu)

/** \brief  E110, CPU Safety Protection Region LPB Read Access Enable Register A */
#define CPU2_LPB_SPROT_ACCENA_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF884E110u)

/** \brief  E114, CPU Safety Protection Region LPB Read Access Enable Register B */
#define CPU2_LPB_SPROT_ACCENB_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF884E114u)

/** \brief  1FC0C, CPU Multi-Count Register 1 */
#define CPU2_M1CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M1CNT*)0xF885FC0Cu)

/** \brief  1FC10, CPU Multi-Count Register 2 */
#define CPU2_M2CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M2CNT*)0xF885FC10u)

/** \brief  1FC14, CPU Multi-Count Register 3 */
#define CPU2_M3CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M3CNT*)0xF885FC14u)

/** \brief  18, CPU Overlay Mask Register 0 */
#define CPU2_OMASK0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK0*)0xF8840018u)

/** \brief  24, CPU Overlay Mask Register 1 */
#define CPU2_OMASK1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK1*)0xF8840024u)

/** \brief  90, CPU Overlay Mask Register 10 */
#define CPU2_OMASK10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK10*)0xF8840090u)

/** \brief  9C, CPU Overlay Mask Register 11 */
#define CPU2_OMASK11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK11*)0xF884009Cu)

/** \brief  A8, CPU Overlay Mask Register 12 */
#define CPU2_OMASK12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK12*)0xF88400A8u)

/** \brief  B4, CPU Overlay Mask Register 13 */
#define CPU2_OMASK13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK13*)0xF88400B4u)

/** \brief  C0, CPU Overlay Mask Register 14 */
#define CPU2_OMASK14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK14*)0xF88400C0u)

/** \brief  CC, CPU Overlay Mask Register 15 */
#define CPU2_OMASK15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK15*)0xF88400CCu)

/** \brief  D8, CPU Overlay Mask Register 16 */
#define CPU2_OMASK16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK16*)0xF88400D8u)

/** \brief  E4, CPU Overlay Mask Register 17 */
#define CPU2_OMASK17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK17*)0xF88400E4u)

/** \brief  F0, CPU Overlay Mask Register 18 */
#define CPU2_OMASK18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK18*)0xF88400F0u)

/** \brief  FC, CPU Overlay Mask Register 19 */
#define CPU2_OMASK19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK19*)0xF88400FCu)

/** \brief  30, CPU Overlay Mask Register 2 */
#define CPU2_OMASK2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK2*)0xF8840030u)

/** \brief  108, CPU Overlay Mask Register 20 */
#define CPU2_OMASK20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK20*)0xF8840108u)

/** \brief  114, CPU Overlay Mask Register 21 */
#define CPU2_OMASK21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK21*)0xF8840114u)

/** \brief  120, CPU Overlay Mask Register 22 */
#define CPU2_OMASK22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK22*)0xF8840120u)

/** \brief  12C, CPU Overlay Mask Register 23 */
#define CPU2_OMASK23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK23*)0xF884012Cu)

/** \brief  138, CPU Overlay Mask Register 24 */
#define CPU2_OMASK24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK24*)0xF8840138u)

/** \brief  144, CPU Overlay Mask Register 25 */
#define CPU2_OMASK25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK25*)0xF8840144u)

/** \brief  150, CPU Overlay Mask Register 26 */
#define CPU2_OMASK26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK26*)0xF8840150u)

/** \brief  15C, CPU Overlay Mask Register 27 */
#define CPU2_OMASK27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK27*)0xF884015Cu)

/** \brief  168, CPU Overlay Mask Register 28 */
#define CPU2_OMASK28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK28*)0xF8840168u)

/** \brief  174, CPU Overlay Mask Register 29 */
#define CPU2_OMASK29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK29*)0xF8840174u)

/** \brief  3C, CPU Overlay Mask Register 3 */
#define CPU2_OMASK3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK3*)0xF884003Cu)

/** \brief  180, CPU Overlay Mask Register 30 */
#define CPU2_OMASK30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK30*)0xF8840180u)

/** \brief  18C, CPU Overlay Mask Register 31 */
#define CPU2_OMASK31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK31*)0xF884018Cu)

/** \brief  48, CPU Overlay Mask Register 4 */
#define CPU2_OMASK4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK4*)0xF8840048u)

/** \brief  54, CPU Overlay Mask Register 5 */
#define CPU2_OMASK5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK5*)0xF8840054u)

/** \brief  60, CPU Overlay Mask Register 6 */
#define CPU2_OMASK6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK6*)0xF8840060u)

/** \brief  6C, CPU Overlay Mask Register 7 */
#define CPU2_OMASK7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK7*)0xF884006Cu)

/** \brief  78, CPU Overlay Mask Register 8 */
#define CPU2_OMASK8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK8*)0xF8840078u)

/** \brief  84, CPU Overlay Mask Register 9 */
#define CPU2_OMASK9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK9*)0xF8840084u)

/** \brief  0, CPU Overlay Range Select Register */
#define CPU2_OSEL /*lint --e(923)*/ (*(volatile Ifx_CPU_OSEL*)0xF8840000u)

/** \brief  14, CPU Overlay Target Address Register 0 */
#define CPU2_OTAR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR0*)0xF8840014u)

/** \brief  20, CPU Overlay Target Address Register 1 */
#define CPU2_OTAR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR1*)0xF8840020u)

/** \brief  8C, CPU Overlay Target Address Register 10 */
#define CPU2_OTAR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR10*)0xF884008Cu)

/** \brief  98, CPU Overlay Target Address Register 11 */
#define CPU2_OTAR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR11*)0xF8840098u)

/** \brief  A4, CPU Overlay Target Address Register 12 */
#define CPU2_OTAR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR12*)0xF88400A4u)

/** \brief  B0, CPU Overlay Target Address Register 13 */
#define CPU2_OTAR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR13*)0xF88400B0u)

/** \brief  BC, CPU Overlay Target Address Register 14 */
#define CPU2_OTAR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR14*)0xF88400BCu)

/** \brief  C8, CPU Overlay Target Address Register 15 */
#define CPU2_OTAR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR15*)0xF88400C8u)

/** \brief  D4, CPU Overlay Target Address Register 16 */
#define CPU2_OTAR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR16*)0xF88400D4u)

/** \brief  E0, CPU Overlay Target Address Register 17 */
#define CPU2_OTAR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR17*)0xF88400E0u)

/** \brief  EC, CPU Overlay Target Address Register 18 */
#define CPU2_OTAR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR18*)0xF88400ECu)

/** \brief  F8, CPU Overlay Target Address Register 19 */
#define CPU2_OTAR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR19*)0xF88400F8u)

/** \brief  2C, CPU Overlay Target Address Register 2 */
#define CPU2_OTAR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR2*)0xF884002Cu)

/** \brief  104, CPU Overlay Target Address Register 20 */
#define CPU2_OTAR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR20*)0xF8840104u)

/** \brief  110, CPU Overlay Target Address Register 21 */
#define CPU2_OTAR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR21*)0xF8840110u)

/** \brief  11C, CPU Overlay Target Address Register 22 */
#define CPU2_OTAR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR22*)0xF884011Cu)

/** \brief  128, CPU Overlay Target Address Register 23 */
#define CPU2_OTAR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR23*)0xF8840128u)

/** \brief  134, CPU Overlay Target Address Register 24 */
#define CPU2_OTAR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR24*)0xF8840134u)

/** \brief  140, CPU Overlay Target Address Register 25 */
#define CPU2_OTAR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR25*)0xF8840140u)

/** \brief  14C, CPU Overlay Target Address Register 26 */
#define CPU2_OTAR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR26*)0xF884014Cu)

/** \brief  158, CPU Overlay Target Address Register 27 */
#define CPU2_OTAR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR27*)0xF8840158u)

/** \brief  164, CPU Overlay Target Address Register 28 */
#define CPU2_OTAR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR28*)0xF8840164u)

/** \brief  170, CPU Overlay Target Address Register 29 */
#define CPU2_OTAR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR29*)0xF8840170u)

/** \brief  38, CPU Overlay Target Address Register 3 */
#define CPU2_OTAR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR3*)0xF8840038u)

/** \brief  17C, CPU Overlay Target Address Register 30 */
#define CPU2_OTAR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR30*)0xF884017Cu)

/** \brief  188, CPU Overlay Target Address Register 31 */
#define CPU2_OTAR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR31*)0xF8840188u)

/** \brief  44, CPU Overlay Target Address Register 4 */
#define CPU2_OTAR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR4*)0xF8840044u)

/** \brief  50, CPU Overlay Target Address Register 5 */
#define CPU2_OTAR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR5*)0xF8840050u)

/** \brief  5C, CPU Overlay Target Address Register 6 */
#define CPU2_OTAR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR6*)0xF884005Cu)

/** \brief  68, CPU Overlay Target Address Register 7 */
#define CPU2_OTAR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR7*)0xF8840068u)

/** \brief  74, CPU Overlay Target Address Register 8 */
#define CPU2_OTAR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR8*)0xF8840074u)

/** \brief  80, CPU Overlay Target Address Register 9 */
#define CPU2_OTAR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR9*)0xF8840080u)

/** \brief  1FE08, CPU Program Counter */
#define CPU2_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_PC*)0xF885FE08u)

/** \brief  1920C, CPU Program Control 0 */
#define CPU2_PCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON0*)0xF885920Cu)

/** \brief  19204, CPU Program Control 1 */
#define CPU2_PCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON1*)0xF8859204u)

/** \brief  19208, CPU Program Control 2 */
#define CPU2_PCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON2*)0xF8859208u)

/** \brief  1FE00, CPU Previous Context Information Register */
#define CPU2_PCXI /*lint --e(923)*/ (*(volatile Ifx_CPU_PCXI*)0xF885FE00u)

/** \brief  19210, CPU Program Integrity Error Address Register */
#define CPU2_PIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIEAR*)0xF8859210u)

/** \brief  19214, CPU Program Integrity Error Trap Register */
#define CPU2_PIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIETR*)0xF8859214u)

/** \brief  18100, CPU Data Access CacheabilityRegister */
#define CPU2_PMA0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA0*)0xF8858100u)

/** \brief  18104, CPU Code Access CacheabilityRegister */
#define CPU2_PMA1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA1*)0xF8858104u)

/** \brief  18108, CPU Peripheral Space Identifier register */
#define CPU2_PMA2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA2*)0xF8858108u)

/** \brief  19200, CPU Program Synchronous Trap Register */
#define CPU2_PSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_PSTR*)0xF8859200u)

/** \brief  1FE04, CPU Program Status Word */
#define CPU2_PSW /*lint --e(923)*/ (*(volatile Ifx_CPU_PSW*)0xF885FE04u)

/** \brief  10, CPU Redirected Address Base Register 0 */
#define CPU2_RABR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR0*)0xF8840010u)

/** \brief  1C, CPU Redirected Address Base Register 1 */
#define CPU2_RABR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR1*)0xF884001Cu)

/** \brief  88, CPU Redirected Address Base Register 10 */
#define CPU2_RABR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR10*)0xF8840088u)

/** \brief  94, CPU Redirected Address Base Register 11 */
#define CPU2_RABR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR11*)0xF8840094u)

/** \brief  A0, CPU Redirected Address Base Register 12 */
#define CPU2_RABR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR12*)0xF88400A0u)

/** \brief  AC, CPU Redirected Address Base Register 13 */
#define CPU2_RABR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR13*)0xF88400ACu)

/** \brief  B8, CPU Redirected Address Base Register 14 */
#define CPU2_RABR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR14*)0xF88400B8u)

/** \brief  C4, CPU Redirected Address Base Register 15 */
#define CPU2_RABR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR15*)0xF88400C4u)

/** \brief  D0, CPU Redirected Address Base Register 16 */
#define CPU2_RABR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR16*)0xF88400D0u)

/** \brief  DC, CPU Redirected Address Base Register 17 */
#define CPU2_RABR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR17*)0xF88400DCu)

/** \brief  E8, CPU Redirected Address Base Register 18 */
#define CPU2_RABR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR18*)0xF88400E8u)

/** \brief  F4, CPU Redirected Address Base Register 19 */
#define CPU2_RABR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR19*)0xF88400F4u)

/** \brief  28, CPU Redirected Address Base Register 2 */
#define CPU2_RABR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR2*)0xF8840028u)

/** \brief  100, CPU Redirected Address Base Register 20 */
#define CPU2_RABR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR20*)0xF8840100u)

/** \brief  10C, CPU Redirected Address Base Register 21 */
#define CPU2_RABR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR21*)0xF884010Cu)

/** \brief  118, CPU Redirected Address Base Register 22 */
#define CPU2_RABR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR22*)0xF8840118u)

/** \brief  124, CPU Redirected Address Base Register 23 */
#define CPU2_RABR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR23*)0xF8840124u)

/** \brief  130, CPU Redirected Address Base Register 24 */
#define CPU2_RABR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR24*)0xF8840130u)

/** \brief  13C, CPU Redirected Address Base Register 25 */
#define CPU2_RABR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR25*)0xF884013Cu)

/** \brief  148, CPU Redirected Address Base Register 26 */
#define CPU2_RABR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR26*)0xF8840148u)

/** \brief  154, CPU Redirected Address Base Register 27 */
#define CPU2_RABR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR27*)0xF8840154u)

/** \brief  160, CPU Redirected Address Base Register 28 */
#define CPU2_RABR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR28*)0xF8840160u)

/** \brief  16C, CPU Redirected Address Base Register 29 */
#define CPU2_RABR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR29*)0xF884016Cu)

/** \brief  34, CPU Redirected Address Base Register 3 */
#define CPU2_RABR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR3*)0xF8840034u)

/** \brief  178, CPU Redirected Address Base Register 30 */
#define CPU2_RABR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR30*)0xF8840178u)

/** \brief  184, CPU Redirected Address Base Register 31 */
#define CPU2_RABR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR31*)0xF8840184u)

/** \brief  40, CPU Redirected Address Base Register 4 */
#define CPU2_RABR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR4*)0xF8840040u)

/** \brief  4C, CPU Redirected Address Base Register 5 */
#define CPU2_RABR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR5*)0xF884004Cu)

/** \brief  58, CPU Redirected Address Base Register 6 */
#define CPU2_RABR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR6*)0xF8840058u)

/** \brief  64, CPU Redirected Address Base Register 7 */
#define CPU2_RABR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR7*)0xF8840064u)

/** \brief  70, CPU Redirected Address Base Register 8 */
#define CPU2_RABR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR8*)0xF8840070u)

/** \brief  7C, CPU Redirected Address Base Register 9 */
#define CPU2_RABR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR9*)0xF884007Cu)

/** \brief  11030, CPU SRI Error Generation Register */
#define CPU2_SEGEN /*lint --e(923)*/ (*(volatile Ifx_CPU_SEGEN*)0xF8851030u)

/** \brief  E100, CPU Safety Protection Register Access Enable Register A */
#define CPU2_SFR_SPROT_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF884E100u)

/** \brief  E104, CPU Safety Protection Region Access Enable Register B */
#define CPU2_SFR_SPROT_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF884E104u)

/** \brief  1900C, CPU SIST Mode Access Control Register */
#define CPU2_SMACON /*lint --e(923)*/ (*(volatile Ifx_CPU_SMACON*)0xF885900Cu)

/** \brief  E008, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU2_SPR_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF884E008u)

/** \brief  E00C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU2_SPR_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF884E00Cu)

/** \brief  E000, CPU Safety Protection SPR Region Lower Address Register */
#define CPU2_SPR_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF884E000u)

/** \brief  E004, CPU Safety protection SPR Region Upper Address Register */
#define CPU2_SPR_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF884E004u)

/** \brief  E018, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU2_SPR_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF884E018u)

/** \brief  E01C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU2_SPR_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF884E01Cu)

/** \brief  E010, CPU Safety Protection SPR Region Lower Address Register */
#define CPU2_SPR_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF884E010u)

/** \brief  E014, CPU Safety protection SPR Region Upper Address Register */
#define CPU2_SPR_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF884E014u)

/** \brief  E028, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU2_SPR_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF884E028u)

/** \brief  E02C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU2_SPR_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF884E02Cu)

/** \brief  E020, CPU Safety Protection SPR Region Lower Address Register */
#define CPU2_SPR_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF884E020u)

/** \brief  E024, CPU Safety protection SPR Region Upper Address Register */
#define CPU2_SPR_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF884E024u)

/** \brief  E038, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU2_SPR_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF884E038u)

/** \brief  E03C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU2_SPR_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF884E03Cu)

/** \brief  E030, CPU Safety Protection SPR Region Lower Address Register */
#define CPU2_SPR_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF884E030u)

/** \brief  E034, CPU Safety protection SPR Region Upper Address Register */
#define CPU2_SPR_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF884E034u)

/** \brief  E048, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU2_SPR_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF884E048u)

/** \brief  E04C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU2_SPR_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF884E04Cu)

/** \brief  E040, CPU Safety Protection SPR Region Lower Address Register */
#define CPU2_SPR_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF884E040u)

/** \brief  E044, CPU Safety protection SPR Region Upper Address Register */
#define CPU2_SPR_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF884E044u)

/** \brief  E058, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU2_SPR_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF884E058u)

/** \brief  E05C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU2_SPR_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF884E05Cu)

/** \brief  E050, CPU Safety Protection SPR Region Lower Address Register */
#define CPU2_SPR_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF884E050u)

/** \brief  E054, CPU Safety protection SPR Region Upper Address Register */
#define CPU2_SPR_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF884E054u)

/** \brief  E068, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU2_SPR_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF884E068u)

/** \brief  E06C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU2_SPR_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF884E06Cu)

/** \brief  E060, CPU Safety Protection SPR Region Lower Address Register */
#define CPU2_SPR_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF884E060u)

/** \brief  E064, CPU Safety protection SPR Region Upper Address Register */
#define CPU2_SPR_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF884E064u)

/** \brief  E078, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU2_SPR_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF884E078u)

/** \brief  E07C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU2_SPR_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF884E07Cu)

/** \brief  E070, CPU Safety Protection SPR Region Lower Address Register */
#define CPU2_SPR_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF884E070u)

/** \brief  E074, CPU Safety protection SPR Region Upper Address Register */
#define CPU2_SPR_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF884E074u)

/** \brief  E088, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU2_SPR_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA0_R*)0xF884E088u)

/** \brief  E098, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU2_SPR_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA1_R*)0xF884E098u)

/** \brief  E0A8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU2_SPR_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA2_R*)0xF884E0A8u)

/** \brief  E0B8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU2_SPR_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA3_R*)0xF884E0B8u)

/** \brief  E0C8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU2_SPR_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA4_R*)0xF884E0C8u)

/** \brief  E0D8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU2_SPR_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA5_R*)0xF884E0D8u)

/** \brief  E0E8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU2_SPR_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA6_R*)0xF884E0E8u)

/** \brief  E0F8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU2_SPR_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA7_R*)0xF884E0F8u)

/** \brief  E08C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU2_SPR_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB0_R*)0xF884E08Cu)

/** \brief  E09C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU2_SPR_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB1_R*)0xF884E09Cu)

/** \brief  E0AC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU2_SPR_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB2_R*)0xF884E0ACu)

/** \brief  E0BC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU2_SPR_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB3_R*)0xF884E0BCu)

/** \brief  E0CC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU2_SPR_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB4_R*)0xF884E0CCu)

/** \brief  E0DC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU2_SPR_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB5_R*)0xF884E0DCu)

/** \brief  E0EC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU2_SPR_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB6_R*)0xF884E0ECu)

/** \brief  E0FC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU2_SPR_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB7_R*)0xF884E0FCu)

/** \brief  1FD10, CPU Software Debug Event */
#define CPU2_SWEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_SWEVT*)0xF885FD10u)

/** \brief  1FE14, CPU System Configuration Register */
#define CPU2_SYSCON /*lint --e(923)*/ (*(volatile Ifx_CPU_SYSCON*)0xF885FE14u)

/** \brief  18004, CPU Task Address Space Identifier Register */
#define CPU2_TASK_ASI /*lint --e(923)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF8858004u)

/** \brief  1E400, CPU Temporal Protection System Control Register */
#define CPU2_TPS_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF885E400u)

/** \brief  1E448, CPU Exception Timer Class Enable Register */
#define CPU2_TPS_EXTIM_CLASS_EN /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF885E448u)

/** \brief  1E444, CPU Exception Timer Current Value */
#define CPU2_TPS_EXTIM_CVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CVAL*)0xF885E444u)

/** \brief  1E450, CPU Exception Timer Status Register */
#define CPU2_TPS_EXTIM_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF885E450u)

/** \brief  1E440, CPU Exception Timer Load Value */
#define CPU2_TPS_EXTIM_LVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_LVAL*)0xF885E440u)

/** \brief  1E44C, CPU Exception Timer Status Register */
#define CPU2_TPS_EXTIM_STAT /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF885E44Cu)

/** \brief  1E404, CPU Temporal Protection System Timer Register */
#define CPU2_TPS_TIMER0 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF885E404u)

/** \brief  1E408, CPU Temporal Protection System Timer Register */
#define CPU2_TPS_TIMER1 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF885E408u)

/** \brief  1E40C, CPU Temporal Protection System Timer Register */
#define CPU2_TPS_TIMER2 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF885E40Cu)

/** \brief  1F004, CPU Trigger Address */
#define CPU2_TR0_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F004u)

/** \brief  1F000, CPU Trigger Event */
#define CPU2_TR0_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F000u)

/** \brief  1F00C, CPU Trigger Address */
#define CPU2_TR1_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F00Cu)

/** \brief  1F008, CPU Trigger Event */
#define CPU2_TR1_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F008u)

/** \brief  1F014, CPU Trigger Address */
#define CPU2_TR2_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F014u)

/** \brief  1F010, CPU Trigger Event */
#define CPU2_TR2_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F010u)

/** \brief  1F01C, CPU Trigger Address */
#define CPU2_TR3_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F01Cu)

/** \brief  1F018, CPU Trigger Event */
#define CPU2_TR3_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F018u)

/** \brief  1F024, CPU Trigger Address */
#define CPU2_TR4_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F024u)

/** \brief  1F020, CPU Trigger Event */
#define CPU2_TR4_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F020u)

/** \brief  1F02C, CPU Trigger Address */
#define CPU2_TR5_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F02Cu)

/** \brief  1F028, CPU Trigger Event */
#define CPU2_TR5_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F028u)

/** \brief  1F034, CPU Trigger Address */
#define CPU2_TR6_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F034u)

/** \brief  1F030, CPU Trigger Event */
#define CPU2_TR6_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F030u)

/** \brief  1F03C, CPU Trigger Address */
#define CPU2_TR7_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF885F03Cu)

/** \brief  1F038, CPU Trigger Event */
#define CPU2_TR7_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF885F038u)

/** \brief  1FD30, CPU Trigger Address x */
#define CPU2_TRIG_ACC /*lint --e(923)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF885FD30u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_Cpu3
 * \{  */

/** \brief  1FF80, CPU Address General Purpose Register */
#define CPU3_A0 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FF80u)

/** \brief  1FF84, CPU Address General Purpose Register */
#define CPU3_A1 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FF84u)

/** \brief  1FFA8, CPU Address General Purpose Register */
#define CPU3_A10 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FFA8u)

/** \brief  1FFAC, CPU Address General Purpose Register */
#define CPU3_A11 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FFACu)

/** \brief  1FFB0, CPU Address General Purpose Register */
#define CPU3_A12 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FFB0u)

/** \brief  1FFB4, CPU Address General Purpose Register */
#define CPU3_A13 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FFB4u)

/** \brief  1FFB8, CPU Address General Purpose Register */
#define CPU3_A14 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FFB8u)

/** \brief  1FFBC, CPU Address General Purpose Register */
#define CPU3_A15 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FFBCu)

/** \brief  1FF88, CPU Address General Purpose Register */
#define CPU3_A2 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FF88u)

/** \brief  1FF8C, CPU Address General Purpose Register */
#define CPU3_A3 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FF8Cu)

/** \brief  1FF90, CPU Address General Purpose Register */
#define CPU3_A4 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FF90u)

/** \brief  1FF94, CPU Address General Purpose Register */
#define CPU3_A5 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FF94u)

/** \brief  1FF98, CPU Address General Purpose Register */
#define CPU3_A6 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FF98u)

/** \brief  1FF9C, CPU Address General Purpose Register */
#define CPU3_A7 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FF9Cu)

/** \brief  1FFA0, CPU Address General Purpose Register */
#define CPU3_A8 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FFA0u)

/** \brief  1FFA4, CPU Address General Purpose Register */
#define CPU3_A9 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF887FFA4u)

/** \brief  1FE20, CPU Base Interrupt Vector Table Pointer */
#define CPU3_BIV /*lint --e(923)*/ (*(volatile Ifx_CPU_BIV*)0xF887FE20u)

/** \brief  1FE24, CPU Base Trap Vector Table Pointer */
#define CPU3_BTV /*lint --e(923)*/ (*(volatile Ifx_CPU_BTV*)0xF887FE24u)

/** \brief  1FC04, CPU CPU Clock Cycle Count */
#define CPU3_CCNT /*lint --e(923)*/ (*(volatile Ifx_CPU_CCNT*)0xF887FC04u)

/** \brief  1FC00, CPU Counter Control */
#define CPU3_CCTRL /*lint --e(923)*/ (*(volatile Ifx_CPU_CCTRL*)0xF887FC00u)

/** \brief  19400, CPU Compatibility Control Register */
#define CPU3_COMPAT /*lint --e(923)*/ (*(volatile Ifx_CPU_COMPAT*)0xF8879400u)

/** \brief  1FE1C, CPU Core Identification Register */
#define CPU3_CORE_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF887FE1Cu)

/** \brief  1D000, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D000u)

/** \brief  1D004, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D004u)

/** \brief  1D008, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D008u)

/** \brief  1D00C, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D00Cu)

/** \brief  1D010, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D010u)

/** \brief  1D014, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D014u)

/** \brief  1D018, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D018u)

/** \brief  1D01C, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D01Cu)

/** \brief  1D020, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D020u)

/** \brief  1D024, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D024u)

/** \brief  1D028, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D028u)

/** \brief  1D02C, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D02Cu)

/** \brief  1D030, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D030u)

/** \brief  1D034, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D034u)

/** \brief  1D038, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D038u)

/** \brief  1D03C, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D03Cu)

/** \brief  1D040, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D040u)

/** \brief  1D044, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D044u)

/** \brief  1D048, CPU Code Protection Range Lower Bound Register */
#define CPU3_CPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF887D048u)

/** \brief  1D04C, CPU Code Protection Range Upper Bound Register */
#define CPU3_CPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF887D04Cu)

/** \brief  1FE18, CPU Identification Register TC1.6P */
#define CPU3_CPU_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF887FE18u)

/** \brief  1E000, CPU Code Protection Execute Enable Register Set 0 */
#define CPU3_CPXE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_0*)0xF887E000u)

/** \brief  1E004, CPU Code Protection Execute Enable Register Set 1 */
#define CPU3_CPXE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_1*)0xF887E004u)

/** \brief  1E008, CPU Code Protection Execute Enable Register Set 2 */
#define CPU3_CPXE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_2*)0xF887E008u)

/** \brief  1E00C, CPU Code Protection Execute Enable Register Set 3 */
#define CPU3_CPXE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_3*)0xF887E00Cu)

/** \brief  1E050, CPU Code Protection Execute Enable Register Set 4 */
#define CPU3_CPXE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_4*)0xF887E050u)

/** \brief  1E054, CPU Code Protection Execute Enable Register Set 5 */
#define CPU3_CPXE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_5*)0xF887E054u)

/** \brief  1FD0C, CPU Core Register Access Event */
#define CPU3_CREVT /*lint --e(923)*/ (*(volatile Ifx_CPU_CREVT*)0xF887FD0Cu)

/** \brief  1FE50, CPU Customer ID register */
#define CPU3_CUS_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF887FE50u)

/** \brief  1FF00, CPU Data General Purpose Register */
#define CPU3_D0 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF00u)

/** \brief  1FF04, CPU Data General Purpose Register */
#define CPU3_D1 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF04u)

/** \brief  1FF28, CPU Data General Purpose Register */
#define CPU3_D10 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF28u)

/** \brief  1FF2C, CPU Data General Purpose Register */
#define CPU3_D11 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF2Cu)

/** \brief  1FF30, CPU Data General Purpose Register */
#define CPU3_D12 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF30u)

/** \brief  1FF34, CPU Data General Purpose Register */
#define CPU3_D13 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF34u)

/** \brief  1FF38, CPU Data General Purpose Register */
#define CPU3_D14 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF38u)

/** \brief  1FF3C, CPU Data General Purpose Register */
#define CPU3_D15 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF3Cu)

/** \brief  1FF08, CPU Data General Purpose Register */
#define CPU3_D2 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF08u)

/** \brief  1FF0C, CPU Data General Purpose Register */
#define CPU3_D3 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF0Cu)

/** \brief  1FF10, CPU Data General Purpose Register */
#define CPU3_D4 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF10u)

/** \brief  1FF14, CPU Data General Purpose Register */
#define CPU3_D5 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF14u)

/** \brief  1FF18, CPU Data General Purpose Register */
#define CPU3_D6 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF18u)

/** \brief  1FF1C, CPU Data General Purpose Register */
#define CPU3_D7 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF1Cu)

/** \brief  1FF20, CPU Data General Purpose Register */
#define CPU3_D8 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF20u)

/** \brief  1FF24, CPU Data General Purpose Register */
#define CPU3_D9 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF887FF24u)

/** \brief  19018, CPU Data Asynchronous Trap Register */
#define CPU3_DATR /*lint --e(923)*/ (*(volatile Ifx_CPU_DATR*)0xF8879018u)

/** \brief  1FD00, CPU Debug Status Register */
#define CPU3_DBGSR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGSR*)0xF887FD00u)

/** \brief  1FD48, CPU Debug Trap Control Register */
#define CPU3_DBGTCR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF887FD48u)

/** \brief  19040, CPU Data Memory Control Register */
#define CPU3_DCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON0*)0xF8879040u)

/** \brief  19000, CPU Data Control Register 2 */
#define CPU3_DCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON2*)0xF8879000u)

/** \brief  1FD44, CPU Debug Context Save Area Pointer */
#define CPU3_DCX /*lint --e(923)*/ (*(volatile Ifx_CPU_DCX*)0xF887FD44u)

/** \brief  1901C, CPU Data Error Address Register */
#define CPU3_DEADD /*lint --e(923)*/ (*(volatile Ifx_CPU_DEADD*)0xF887901Cu)

/** \brief  19020, CPU Data Integrity Error Address Register */
#define CPU3_DIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIEAR*)0xF8879020u)

/** \brief  19024, CPU Data Integrity Error Trap Register */
#define CPU3_DIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIETR*)0xF8879024u)

/** \brief  E208, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF886E208u)

/** \brief  E20C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF886E20Cu)

/** \brief  E200, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU3_DLMU_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF886E200u)

/** \brief  E204, CPU Safety protection DLMU Region Upper Address Register */
#define CPU3_DLMU_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF886E204u)

/** \brief  E218, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF886E218u)

/** \brief  E21C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF886E21Cu)

/** \brief  E210, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU3_DLMU_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF886E210u)

/** \brief  E214, CPU Safety protection DLMU Region Upper Address Register */
#define CPU3_DLMU_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF886E214u)

/** \brief  E228, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF886E228u)

/** \brief  E22C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF886E22Cu)

/** \brief  E220, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU3_DLMU_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF886E220u)

/** \brief  E224, CPU Safety protection DLMU Region Upper Address Register */
#define CPU3_DLMU_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF886E224u)

/** \brief  E238, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF886E238u)

/** \brief  E23C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF886E23Cu)

/** \brief  E230, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU3_DLMU_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF886E230u)

/** \brief  E234, CPU Safety protection DLMU Region Upper Address Register */
#define CPU3_DLMU_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF886E234u)

/** \brief  E248, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF886E248u)

/** \brief  E24C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF886E24Cu)

/** \brief  E240, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU3_DLMU_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF886E240u)

/** \brief  E244, CPU Safety protection DLMU Region Upper Address Register */
#define CPU3_DLMU_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF886E244u)

/** \brief  E258, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF886E258u)

/** \brief  E25C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF886E25Cu)

/** \brief  E250, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU3_DLMU_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF886E250u)

/** \brief  E254, CPU Safety protection DLMU Region Upper Address Register */
#define CPU3_DLMU_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF886E254u)

/** \brief  E268, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF886E268u)

/** \brief  E26C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF886E26Cu)

/** \brief  E260, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU3_DLMU_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF886E260u)

/** \brief  E264, CPU Safety protection DLMU Region Upper Address Register */
#define CPU3_DLMU_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF886E264u)

/** \brief  E278, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF886E278u)

/** \brief  E27C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF886E27Cu)

/** \brief  E270, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU3_DLMU_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF886E270u)

/** \brief  E274, CPU Safety protection DLMU Region Upper Address Register */
#define CPU3_DLMU_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF886E274u)

/** \brief  E288, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA0_R*)0xF886E288u)

/** \brief  E298, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA1_R*)0xF886E298u)

/** \brief  E2A8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA2_R*)0xF886E2A8u)

/** \brief  E2B8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA3_R*)0xF886E2B8u)

/** \brief  E2C8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA4_R*)0xF886E2C8u)

/** \brief  E2D8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA5_R*)0xF886E2D8u)

/** \brief  E2E8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA6_R*)0xF886E2E8u)

/** \brief  E2F8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU3_DLMU_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA7_R*)0xF886E2F8u)

/** \brief  E28C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB0_R*)0xF886E28Cu)

/** \brief  E29C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB1_R*)0xF886E29Cu)

/** \brief  E2AC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB2_R*)0xF886E2ACu)

/** \brief  E2BC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB3_R*)0xF886E2BCu)

/** \brief  E2CC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB4_R*)0xF886E2CCu)

/** \brief  E2DC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB5_R*)0xF886E2DCu)

/** \brief  E2EC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB6_R*)0xF886E2ECu)

/** \brief  E2FC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU3_DLMU_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB7_R*)0xF886E2FCu)

/** \brief  1FD40, CPU Debug Monitor Start Address */
#define CPU3_DMS /*lint --e(923)*/ (*(volatile Ifx_CPU_DMS*)0xF887FD40u)

/** \brief  1C000, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C000u)

/** \brief  1C004, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C004u)

/** \brief  1C050, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR10_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C050u)

/** \brief  1C054, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR10_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C054u)

/** \brief  1C058, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR11_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C058u)

/** \brief  1C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR11_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C05Cu)

/** \brief  1C060, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR12_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C060u)

/** \brief  1C064, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR12_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C064u)

/** \brief  1C068, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR13_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C068u)

/** \brief  1C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR13_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C06Cu)

/** \brief  1C070, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR14_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C070u)

/** \brief  1C074, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR14_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C074u)

/** \brief  1C078, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR15_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C078u)

/** \brief  1C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR15_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C07Cu)

/** \brief  1C080, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR16_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C080u)

/** \brief  1C084, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR16_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C084u)

/** \brief  1C088, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR17_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C088u)

/** \brief  1C08C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR17_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C08Cu)

/** \brief  1C008, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C008u)

/** \brief  1C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C00Cu)

/** \brief  1C010, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C010u)

/** \brief  1C014, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C014u)

/** \brief  1C018, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C018u)

/** \brief  1C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C01Cu)

/** \brief  1C020, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C020u)

/** \brief  1C024, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C024u)

/** \brief  1C028, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C028u)

/** \brief  1C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C02Cu)

/** \brief  1C030, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C030u)

/** \brief  1C034, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C034u)

/** \brief  1C038, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C038u)

/** \brief  1C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C03Cu)

/** \brief  1C040, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C040u)

/** \brief  1C044, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C044u)

/** \brief  1C048, CPU Data Protection Range, Lower Bound Register */
#define CPU3_DPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF887C048u)

/** \brief  1C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU3_DPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF887C04Cu)

/** \brief  1E010, CPU Data Protection Read Enable Register Set 0 */
#define CPU3_DPRE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_0*)0xF887E010u)

/** \brief  1E014, CPU Data Protection Read Enable Register Set 1 */
#define CPU3_DPRE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_1*)0xF887E014u)

/** \brief  1E018, CPU Data Protection Read Enable Register Set 2 */
#define CPU3_DPRE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_2*)0xF887E018u)

/** \brief  1E01C, CPU Data Protection Read Enable Register Set 3 */
#define CPU3_DPRE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_3*)0xF887E01Cu)

/** \brief  1E060, CPU Data Protection Read Enable Register Set 4 */
#define CPU3_DPRE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_4*)0xF887E060u)

/** \brief  1E064, CPU Data Protection Read Enable Register Set 5 */
#define CPU3_DPRE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_5*)0xF887E064u)

/** \brief  1E020, CPU Data Protection Write Enable Register Set 0 */
#define CPU3_DPWE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_0*)0xF887E020u)

/** \brief  1E024, CPU Data Protection Write Enable Register Set 1 */
#define CPU3_DPWE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_1*)0xF887E024u)

/** \brief  1E028, CPU Data Protection Write Enable Register Set 2 */
#define CPU3_DPWE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_2*)0xF887E028u)

/** \brief  1E02C, CPU Data Protection Write Enable Register Set 3 */
#define CPU3_DPWE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_3*)0xF887E02Cu)

/** \brief  1E070, CPU Data Protection Write Enable Register Set 4 */
#define CPU3_DPWE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_4*)0xF887E070u)

/** \brief  1E074, CPU Data Protection Write Enable Register Set 5 */
#define CPU3_DPWE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_5*)0xF887E074u)

/** \brief  19010, CPU Data Synchronous Trap Register */
#define CPU3_DSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_DSTR*)0xF8879010u)

/** \brief  1FD08, CPU External Event Register */
#define CPU3_EXEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_EXEVT*)0xF887FD08u)

/** \brief  1FE38, CPU Free CSA List Head Pointer */
#define CPU3_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_FCX*)0xF887FE38u)

/** \brief  1100, CPU Flash Configuration Register 0 */
#define CPU3_FLASHCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF8861100u)

/** \brief  1104, CPU Flash Configuration Register 1 */
#define CPU3_FLASHCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF8861104u)

/** \brief  1108, CPU Flash Configuration Register 2 */
#define CPU3_FLASHCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF8861108u)

/** \brief  110C, CPU Flash Configuration Register 3 */
#define CPU3_FLASHCON3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF886110Cu)

/** \brief  1A000, CPU Trap Control Register */
#define CPU3_FPU_TRAP_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF887A000u)

/** \brief  1A008, CPU Trapping Instruction Opcode Register */
#define CPU3_FPU_TRAP_OPC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF887A008u)

/** \brief  1A004, CPU Trapping Instruction Program Counter Register */
#define CPU3_FPU_TRAP_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF887A004u)

/** \brief  1A010, CPU Trapping Instruction Operand Register */
#define CPU3_FPU_TRAP_SRC1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF887A010u)

/** \brief  1A014, CPU Trapping Instruction Operand Register */
#define CPU3_FPU_TRAP_SRC2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF887A014u)

/** \brief  1A018, CPU Trapping Instruction Operand Register */
#define CPU3_FPU_TRAP_SRC3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF887A018u)

/** \brief  1FC08, CPU Instruction Count */
#define CPU3_ICNT /*lint --e(923)*/ (*(volatile Ifx_CPU_ICNT*)0xF887FC08u)

/** \brief  1FE2C, CPU Interrupt Control Register */
#define CPU3_ICR /*lint --e(923)*/ (*(volatile Ifx_CPU_ICR*)0xF887FE2Cu)

/** \brief  1FE28, CPU Interrupt Stack Pointer */
#define CPU3_ISP /*lint --e(923)*/ (*(volatile Ifx_CPU_ISP*)0xF887FE28u)

/** \brief  D000, CPU Reset Register 0 */
#define CPU3_KRST0 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST0*)0xF886D000u)

/** \brief  D004, CPU Reset Register 1 */
#define CPU3_KRST1 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST1*)0xF886D004u)

/** \brief  D008, CPU Reset Status Clear Register */
#define CPU3_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF886D008u)

/** \brief  1FE3C, CPU Free CSA List Limit Pointer */
#define CPU3_LCX /*lint --e(923)*/ (*(volatile Ifx_CPU_LCX*)0xF887FE3Cu)

/** \brief  E110, CPU Safety Protection Region LPB Read Access Enable Register A */
#define CPU3_LPB_SPROT_ACCENA_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF886E110u)

/** \brief  E114, CPU Safety Protection Region LPB Read Access Enable Register B */
#define CPU3_LPB_SPROT_ACCENB_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF886E114u)

/** \brief  1FC0C, CPU Multi-Count Register 1 */
#define CPU3_M1CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M1CNT*)0xF887FC0Cu)

/** \brief  1FC10, CPU Multi-Count Register 2 */
#define CPU3_M2CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M2CNT*)0xF887FC10u)

/** \brief  1FC14, CPU Multi-Count Register 3 */
#define CPU3_M3CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M3CNT*)0xF887FC14u)

/** \brief  18, CPU Overlay Mask Register 0 */
#define CPU3_OMASK0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK0*)0xF8860018u)

/** \brief  24, CPU Overlay Mask Register 1 */
#define CPU3_OMASK1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK1*)0xF8860024u)

/** \brief  90, CPU Overlay Mask Register 10 */
#define CPU3_OMASK10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK10*)0xF8860090u)

/** \brief  9C, CPU Overlay Mask Register 11 */
#define CPU3_OMASK11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK11*)0xF886009Cu)

/** \brief  A8, CPU Overlay Mask Register 12 */
#define CPU3_OMASK12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK12*)0xF88600A8u)

/** \brief  B4, CPU Overlay Mask Register 13 */
#define CPU3_OMASK13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK13*)0xF88600B4u)

/** \brief  C0, CPU Overlay Mask Register 14 */
#define CPU3_OMASK14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK14*)0xF88600C0u)

/** \brief  CC, CPU Overlay Mask Register 15 */
#define CPU3_OMASK15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK15*)0xF88600CCu)

/** \brief  D8, CPU Overlay Mask Register 16 */
#define CPU3_OMASK16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK16*)0xF88600D8u)

/** \brief  E4, CPU Overlay Mask Register 17 */
#define CPU3_OMASK17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK17*)0xF88600E4u)

/** \brief  F0, CPU Overlay Mask Register 18 */
#define CPU3_OMASK18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK18*)0xF88600F0u)

/** \brief  FC, CPU Overlay Mask Register 19 */
#define CPU3_OMASK19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK19*)0xF88600FCu)

/** \brief  30, CPU Overlay Mask Register 2 */
#define CPU3_OMASK2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK2*)0xF8860030u)

/** \brief  108, CPU Overlay Mask Register 20 */
#define CPU3_OMASK20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK20*)0xF8860108u)

/** \brief  114, CPU Overlay Mask Register 21 */
#define CPU3_OMASK21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK21*)0xF8860114u)

/** \brief  120, CPU Overlay Mask Register 22 */
#define CPU3_OMASK22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK22*)0xF8860120u)

/** \brief  12C, CPU Overlay Mask Register 23 */
#define CPU3_OMASK23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK23*)0xF886012Cu)

/** \brief  138, CPU Overlay Mask Register 24 */
#define CPU3_OMASK24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK24*)0xF8860138u)

/** \brief  144, CPU Overlay Mask Register 25 */
#define CPU3_OMASK25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK25*)0xF8860144u)

/** \brief  150, CPU Overlay Mask Register 26 */
#define CPU3_OMASK26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK26*)0xF8860150u)

/** \brief  15C, CPU Overlay Mask Register 27 */
#define CPU3_OMASK27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK27*)0xF886015Cu)

/** \brief  168, CPU Overlay Mask Register 28 */
#define CPU3_OMASK28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK28*)0xF8860168u)

/** \brief  174, CPU Overlay Mask Register 29 */
#define CPU3_OMASK29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK29*)0xF8860174u)

/** \brief  3C, CPU Overlay Mask Register 3 */
#define CPU3_OMASK3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK3*)0xF886003Cu)

/** \brief  180, CPU Overlay Mask Register 30 */
#define CPU3_OMASK30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK30*)0xF8860180u)

/** \brief  18C, CPU Overlay Mask Register 31 */
#define CPU3_OMASK31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK31*)0xF886018Cu)

/** \brief  48, CPU Overlay Mask Register 4 */
#define CPU3_OMASK4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK4*)0xF8860048u)

/** \brief  54, CPU Overlay Mask Register 5 */
#define CPU3_OMASK5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK5*)0xF8860054u)

/** \brief  60, CPU Overlay Mask Register 6 */
#define CPU3_OMASK6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK6*)0xF8860060u)

/** \brief  6C, CPU Overlay Mask Register 7 */
#define CPU3_OMASK7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK7*)0xF886006Cu)

/** \brief  78, CPU Overlay Mask Register 8 */
#define CPU3_OMASK8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK8*)0xF8860078u)

/** \brief  84, CPU Overlay Mask Register 9 */
#define CPU3_OMASK9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK9*)0xF8860084u)

/** \brief  0, CPU Overlay Range Select Register */
#define CPU3_OSEL /*lint --e(923)*/ (*(volatile Ifx_CPU_OSEL*)0xF8860000u)

/** \brief  14, CPU Overlay Target Address Register 0 */
#define CPU3_OTAR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR0*)0xF8860014u)

/** \brief  20, CPU Overlay Target Address Register 1 */
#define CPU3_OTAR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR1*)0xF8860020u)

/** \brief  8C, CPU Overlay Target Address Register 10 */
#define CPU3_OTAR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR10*)0xF886008Cu)

/** \brief  98, CPU Overlay Target Address Register 11 */
#define CPU3_OTAR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR11*)0xF8860098u)

/** \brief  A4, CPU Overlay Target Address Register 12 */
#define CPU3_OTAR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR12*)0xF88600A4u)

/** \brief  B0, CPU Overlay Target Address Register 13 */
#define CPU3_OTAR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR13*)0xF88600B0u)

/** \brief  BC, CPU Overlay Target Address Register 14 */
#define CPU3_OTAR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR14*)0xF88600BCu)

/** \brief  C8, CPU Overlay Target Address Register 15 */
#define CPU3_OTAR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR15*)0xF88600C8u)

/** \brief  D4, CPU Overlay Target Address Register 16 */
#define CPU3_OTAR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR16*)0xF88600D4u)

/** \brief  E0, CPU Overlay Target Address Register 17 */
#define CPU3_OTAR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR17*)0xF88600E0u)

/** \brief  EC, CPU Overlay Target Address Register 18 */
#define CPU3_OTAR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR18*)0xF88600ECu)

/** \brief  F8, CPU Overlay Target Address Register 19 */
#define CPU3_OTAR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR19*)0xF88600F8u)

/** \brief  2C, CPU Overlay Target Address Register 2 */
#define CPU3_OTAR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR2*)0xF886002Cu)

/** \brief  104, CPU Overlay Target Address Register 20 */
#define CPU3_OTAR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR20*)0xF8860104u)

/** \brief  110, CPU Overlay Target Address Register 21 */
#define CPU3_OTAR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR21*)0xF8860110u)

/** \brief  11C, CPU Overlay Target Address Register 22 */
#define CPU3_OTAR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR22*)0xF886011Cu)

/** \brief  128, CPU Overlay Target Address Register 23 */
#define CPU3_OTAR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR23*)0xF8860128u)

/** \brief  134, CPU Overlay Target Address Register 24 */
#define CPU3_OTAR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR24*)0xF8860134u)

/** \brief  140, CPU Overlay Target Address Register 25 */
#define CPU3_OTAR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR25*)0xF8860140u)

/** \brief  14C, CPU Overlay Target Address Register 26 */
#define CPU3_OTAR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR26*)0xF886014Cu)

/** \brief  158, CPU Overlay Target Address Register 27 */
#define CPU3_OTAR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR27*)0xF8860158u)

/** \brief  164, CPU Overlay Target Address Register 28 */
#define CPU3_OTAR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR28*)0xF8860164u)

/** \brief  170, CPU Overlay Target Address Register 29 */
#define CPU3_OTAR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR29*)0xF8860170u)

/** \brief  38, CPU Overlay Target Address Register 3 */
#define CPU3_OTAR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR3*)0xF8860038u)

/** \brief  17C, CPU Overlay Target Address Register 30 */
#define CPU3_OTAR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR30*)0xF886017Cu)

/** \brief  188, CPU Overlay Target Address Register 31 */
#define CPU3_OTAR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR31*)0xF8860188u)

/** \brief  44, CPU Overlay Target Address Register 4 */
#define CPU3_OTAR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR4*)0xF8860044u)

/** \brief  50, CPU Overlay Target Address Register 5 */
#define CPU3_OTAR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR5*)0xF8860050u)

/** \brief  5C, CPU Overlay Target Address Register 6 */
#define CPU3_OTAR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR6*)0xF886005Cu)

/** \brief  68, CPU Overlay Target Address Register 7 */
#define CPU3_OTAR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR7*)0xF8860068u)

/** \brief  74, CPU Overlay Target Address Register 8 */
#define CPU3_OTAR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR8*)0xF8860074u)

/** \brief  80, CPU Overlay Target Address Register 9 */
#define CPU3_OTAR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR9*)0xF8860080u)

/** \brief  1FE08, CPU Program Counter */
#define CPU3_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_PC*)0xF887FE08u)

/** \brief  1920C, CPU Program Control 0 */
#define CPU3_PCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON0*)0xF887920Cu)

/** \brief  19204, CPU Program Control 1 */
#define CPU3_PCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON1*)0xF8879204u)

/** \brief  19208, CPU Program Control 2 */
#define CPU3_PCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON2*)0xF8879208u)

/** \brief  1FE00, CPU Previous Context Information Register */
#define CPU3_PCXI /*lint --e(923)*/ (*(volatile Ifx_CPU_PCXI*)0xF887FE00u)

/** \brief  19210, CPU Program Integrity Error Address Register */
#define CPU3_PIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIEAR*)0xF8879210u)

/** \brief  19214, CPU Program Integrity Error Trap Register */
#define CPU3_PIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIETR*)0xF8879214u)

/** \brief  18100, CPU Data Access CacheabilityRegister */
#define CPU3_PMA0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA0*)0xF8878100u)

/** \brief  18104, CPU Code Access CacheabilityRegister */
#define CPU3_PMA1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA1*)0xF8878104u)

/** \brief  18108, CPU Peripheral Space Identifier register */
#define CPU3_PMA2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA2*)0xF8878108u)

/** \brief  19200, CPU Program Synchronous Trap Register */
#define CPU3_PSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_PSTR*)0xF8879200u)

/** \brief  1FE04, CPU Program Status Word */
#define CPU3_PSW /*lint --e(923)*/ (*(volatile Ifx_CPU_PSW*)0xF887FE04u)

/** \brief  10, CPU Redirected Address Base Register 0 */
#define CPU3_RABR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR0*)0xF8860010u)

/** \brief  1C, CPU Redirected Address Base Register 1 */
#define CPU3_RABR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR1*)0xF886001Cu)

/** \brief  88, CPU Redirected Address Base Register 10 */
#define CPU3_RABR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR10*)0xF8860088u)

/** \brief  94, CPU Redirected Address Base Register 11 */
#define CPU3_RABR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR11*)0xF8860094u)

/** \brief  A0, CPU Redirected Address Base Register 12 */
#define CPU3_RABR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR12*)0xF88600A0u)

/** \brief  AC, CPU Redirected Address Base Register 13 */
#define CPU3_RABR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR13*)0xF88600ACu)

/** \brief  B8, CPU Redirected Address Base Register 14 */
#define CPU3_RABR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR14*)0xF88600B8u)

/** \brief  C4, CPU Redirected Address Base Register 15 */
#define CPU3_RABR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR15*)0xF88600C4u)

/** \brief  D0, CPU Redirected Address Base Register 16 */
#define CPU3_RABR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR16*)0xF88600D0u)

/** \brief  DC, CPU Redirected Address Base Register 17 */
#define CPU3_RABR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR17*)0xF88600DCu)

/** \brief  E8, CPU Redirected Address Base Register 18 */
#define CPU3_RABR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR18*)0xF88600E8u)

/** \brief  F4, CPU Redirected Address Base Register 19 */
#define CPU3_RABR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR19*)0xF88600F4u)

/** \brief  28, CPU Redirected Address Base Register 2 */
#define CPU3_RABR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR2*)0xF8860028u)

/** \brief  100, CPU Redirected Address Base Register 20 */
#define CPU3_RABR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR20*)0xF8860100u)

/** \brief  10C, CPU Redirected Address Base Register 21 */
#define CPU3_RABR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR21*)0xF886010Cu)

/** \brief  118, CPU Redirected Address Base Register 22 */
#define CPU3_RABR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR22*)0xF8860118u)

/** \brief  124, CPU Redirected Address Base Register 23 */
#define CPU3_RABR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR23*)0xF8860124u)

/** \brief  130, CPU Redirected Address Base Register 24 */
#define CPU3_RABR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR24*)0xF8860130u)

/** \brief  13C, CPU Redirected Address Base Register 25 */
#define CPU3_RABR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR25*)0xF886013Cu)

/** \brief  148, CPU Redirected Address Base Register 26 */
#define CPU3_RABR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR26*)0xF8860148u)

/** \brief  154, CPU Redirected Address Base Register 27 */
#define CPU3_RABR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR27*)0xF8860154u)

/** \brief  160, CPU Redirected Address Base Register 28 */
#define CPU3_RABR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR28*)0xF8860160u)

/** \brief  16C, CPU Redirected Address Base Register 29 */
#define CPU3_RABR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR29*)0xF886016Cu)

/** \brief  34, CPU Redirected Address Base Register 3 */
#define CPU3_RABR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR3*)0xF8860034u)

/** \brief  178, CPU Redirected Address Base Register 30 */
#define CPU3_RABR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR30*)0xF8860178u)

/** \brief  184, CPU Redirected Address Base Register 31 */
#define CPU3_RABR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR31*)0xF8860184u)

/** \brief  40, CPU Redirected Address Base Register 4 */
#define CPU3_RABR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR4*)0xF8860040u)

/** \brief  4C, CPU Redirected Address Base Register 5 */
#define CPU3_RABR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR5*)0xF886004Cu)

/** \brief  58, CPU Redirected Address Base Register 6 */
#define CPU3_RABR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR6*)0xF8860058u)

/** \brief  64, CPU Redirected Address Base Register 7 */
#define CPU3_RABR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR7*)0xF8860064u)

/** \brief  70, CPU Redirected Address Base Register 8 */
#define CPU3_RABR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR8*)0xF8860070u)

/** \brief  7C, CPU Redirected Address Base Register 9 */
#define CPU3_RABR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR9*)0xF886007Cu)

/** \brief  11030, CPU SRI Error Generation Register */
#define CPU3_SEGEN /*lint --e(923)*/ (*(volatile Ifx_CPU_SEGEN*)0xF8871030u)

/** \brief  E100, CPU Safety Protection Register Access Enable Register A */
#define CPU3_SFR_SPROT_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF886E100u)

/** \brief  E104, CPU Safety Protection Region Access Enable Register B */
#define CPU3_SFR_SPROT_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF886E104u)

/** \brief  1900C, CPU SIST Mode Access Control Register */
#define CPU3_SMACON /*lint --e(923)*/ (*(volatile Ifx_CPU_SMACON*)0xF887900Cu)

/** \brief  E008, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU3_SPR_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF886E008u)

/** \brief  E00C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU3_SPR_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF886E00Cu)

/** \brief  E000, CPU Safety Protection SPR Region Lower Address Register */
#define CPU3_SPR_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF886E000u)

/** \brief  E004, CPU Safety protection SPR Region Upper Address Register */
#define CPU3_SPR_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF886E004u)

/** \brief  E018, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU3_SPR_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF886E018u)

/** \brief  E01C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU3_SPR_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF886E01Cu)

/** \brief  E010, CPU Safety Protection SPR Region Lower Address Register */
#define CPU3_SPR_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF886E010u)

/** \brief  E014, CPU Safety protection SPR Region Upper Address Register */
#define CPU3_SPR_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF886E014u)

/** \brief  E028, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU3_SPR_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF886E028u)

/** \brief  E02C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU3_SPR_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF886E02Cu)

/** \brief  E020, CPU Safety Protection SPR Region Lower Address Register */
#define CPU3_SPR_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF886E020u)

/** \brief  E024, CPU Safety protection SPR Region Upper Address Register */
#define CPU3_SPR_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF886E024u)

/** \brief  E038, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU3_SPR_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF886E038u)

/** \brief  E03C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU3_SPR_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF886E03Cu)

/** \brief  E030, CPU Safety Protection SPR Region Lower Address Register */
#define CPU3_SPR_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF886E030u)

/** \brief  E034, CPU Safety protection SPR Region Upper Address Register */
#define CPU3_SPR_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF886E034u)

/** \brief  E048, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU3_SPR_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF886E048u)

/** \brief  E04C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU3_SPR_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF886E04Cu)

/** \brief  E040, CPU Safety Protection SPR Region Lower Address Register */
#define CPU3_SPR_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF886E040u)

/** \brief  E044, CPU Safety protection SPR Region Upper Address Register */
#define CPU3_SPR_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF886E044u)

/** \brief  E058, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU3_SPR_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF886E058u)

/** \brief  E05C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU3_SPR_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF886E05Cu)

/** \brief  E050, CPU Safety Protection SPR Region Lower Address Register */
#define CPU3_SPR_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF886E050u)

/** \brief  E054, CPU Safety protection SPR Region Upper Address Register */
#define CPU3_SPR_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF886E054u)

/** \brief  E068, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU3_SPR_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF886E068u)

/** \brief  E06C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU3_SPR_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF886E06Cu)

/** \brief  E060, CPU Safety Protection SPR Region Lower Address Register */
#define CPU3_SPR_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF886E060u)

/** \brief  E064, CPU Safety protection SPR Region Upper Address Register */
#define CPU3_SPR_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF886E064u)

/** \brief  E078, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU3_SPR_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF886E078u)

/** \brief  E07C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU3_SPR_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF886E07Cu)

/** \brief  E070, CPU Safety Protection SPR Region Lower Address Register */
#define CPU3_SPR_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF886E070u)

/** \brief  E074, CPU Safety protection SPR Region Upper Address Register */
#define CPU3_SPR_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF886E074u)

/** \brief  E088, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU3_SPR_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA0_R*)0xF886E088u)

/** \brief  E098, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU3_SPR_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA1_R*)0xF886E098u)

/** \brief  E0A8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU3_SPR_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA2_R*)0xF886E0A8u)

/** \brief  E0B8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU3_SPR_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA3_R*)0xF886E0B8u)

/** \brief  E0C8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU3_SPR_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA4_R*)0xF886E0C8u)

/** \brief  E0D8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU3_SPR_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA5_R*)0xF886E0D8u)

/** \brief  E0E8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU3_SPR_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA6_R*)0xF886E0E8u)

/** \brief  E0F8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU3_SPR_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA7_R*)0xF886E0F8u)

/** \brief  E08C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU3_SPR_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB0_R*)0xF886E08Cu)

/** \brief  E09C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU3_SPR_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB1_R*)0xF886E09Cu)

/** \brief  E0AC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU3_SPR_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB2_R*)0xF886E0ACu)

/** \brief  E0BC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU3_SPR_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB3_R*)0xF886E0BCu)

/** \brief  E0CC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU3_SPR_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB4_R*)0xF886E0CCu)

/** \brief  E0DC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU3_SPR_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB5_R*)0xF886E0DCu)

/** \brief  E0EC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU3_SPR_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB6_R*)0xF886E0ECu)

/** \brief  E0FC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU3_SPR_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB7_R*)0xF886E0FCu)

/** \brief  1FD10, CPU Software Debug Event */
#define CPU3_SWEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_SWEVT*)0xF887FD10u)

/** \brief  1FE14, CPU System Configuration Register */
#define CPU3_SYSCON /*lint --e(923)*/ (*(volatile Ifx_CPU_SYSCON*)0xF887FE14u)

/** \brief  18004, CPU Task Address Space Identifier Register */
#define CPU3_TASK_ASI /*lint --e(923)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF8878004u)

/** \brief  1E400, CPU Temporal Protection System Control Register */
#define CPU3_TPS_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF887E400u)

/** \brief  1E448, CPU Exception Timer Class Enable Register */
#define CPU3_TPS_EXTIM_CLASS_EN /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF887E448u)

/** \brief  1E444, CPU Exception Timer Current Value */
#define CPU3_TPS_EXTIM_CVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CVAL*)0xF887E444u)

/** \brief  1E450, CPU Exception Timer Status Register */
#define CPU3_TPS_EXTIM_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF887E450u)

/** \brief  1E440, CPU Exception Timer Load Value */
#define CPU3_TPS_EXTIM_LVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_LVAL*)0xF887E440u)

/** \brief  1E44C, CPU Exception Timer Status Register */
#define CPU3_TPS_EXTIM_STAT /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF887E44Cu)

/** \brief  1E404, CPU Temporal Protection System Timer Register */
#define CPU3_TPS_TIMER0 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF887E404u)

/** \brief  1E408, CPU Temporal Protection System Timer Register */
#define CPU3_TPS_TIMER1 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF887E408u)

/** \brief  1E40C, CPU Temporal Protection System Timer Register */
#define CPU3_TPS_TIMER2 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF887E40Cu)

/** \brief  1F004, CPU Trigger Address */
#define CPU3_TR0_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF887F004u)

/** \brief  1F000, CPU Trigger Event */
#define CPU3_TR0_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF887F000u)

/** \brief  1F00C, CPU Trigger Address */
#define CPU3_TR1_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF887F00Cu)

/** \brief  1F008, CPU Trigger Event */
#define CPU3_TR1_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF887F008u)

/** \brief  1F014, CPU Trigger Address */
#define CPU3_TR2_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF887F014u)

/** \brief  1F010, CPU Trigger Event */
#define CPU3_TR2_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF887F010u)

/** \brief  1F01C, CPU Trigger Address */
#define CPU3_TR3_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF887F01Cu)

/** \brief  1F018, CPU Trigger Event */
#define CPU3_TR3_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF887F018u)

/** \brief  1F024, CPU Trigger Address */
#define CPU3_TR4_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF887F024u)

/** \brief  1F020, CPU Trigger Event */
#define CPU3_TR4_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF887F020u)

/** \brief  1F02C, CPU Trigger Address */
#define CPU3_TR5_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF887F02Cu)

/** \brief  1F028, CPU Trigger Event */
#define CPU3_TR5_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF887F028u)

/** \brief  1F034, CPU Trigger Address */
#define CPU3_TR6_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF887F034u)

/** \brief  1F030, CPU Trigger Event */
#define CPU3_TR6_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF887F030u)

/** \brief  1F03C, CPU Trigger Address */
#define CPU3_TR7_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF887F03Cu)

/** \brief  1F038, CPU Trigger Event */
#define CPU3_TR7_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF887F038u)

/** \brief  1FD30, CPU Trigger Address x */
#define CPU3_TRIG_ACC /*lint --e(923)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF887FD30u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_Cpu4
 * \{  */

/** \brief  1FF80, CPU Address General Purpose Register */
#define CPU4_A0 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FF80u)

/** \brief  1FF84, CPU Address General Purpose Register */
#define CPU4_A1 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FF84u)

/** \brief  1FFA8, CPU Address General Purpose Register */
#define CPU4_A10 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FFA8u)

/** \brief  1FFAC, CPU Address General Purpose Register */
#define CPU4_A11 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FFACu)

/** \brief  1FFB0, CPU Address General Purpose Register */
#define CPU4_A12 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FFB0u)

/** \brief  1FFB4, CPU Address General Purpose Register */
#define CPU4_A13 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FFB4u)

/** \brief  1FFB8, CPU Address General Purpose Register */
#define CPU4_A14 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FFB8u)

/** \brief  1FFBC, CPU Address General Purpose Register */
#define CPU4_A15 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FFBCu)

/** \brief  1FF88, CPU Address General Purpose Register */
#define CPU4_A2 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FF88u)

/** \brief  1FF8C, CPU Address General Purpose Register */
#define CPU4_A3 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FF8Cu)

/** \brief  1FF90, CPU Address General Purpose Register */
#define CPU4_A4 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FF90u)

/** \brief  1FF94, CPU Address General Purpose Register */
#define CPU4_A5 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FF94u)

/** \brief  1FF98, CPU Address General Purpose Register */
#define CPU4_A6 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FF98u)

/** \brief  1FF9C, CPU Address General Purpose Register */
#define CPU4_A7 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FF9Cu)

/** \brief  1FFA0, CPU Address General Purpose Register */
#define CPU4_A8 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FFA0u)

/** \brief  1FFA4, CPU Address General Purpose Register */
#define CPU4_A9 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF889FFA4u)

/** \brief  1FE20, CPU Base Interrupt Vector Table Pointer */
#define CPU4_BIV /*lint --e(923)*/ (*(volatile Ifx_CPU_BIV*)0xF889FE20u)

/** \brief  1FE24, CPU Base Trap Vector Table Pointer */
#define CPU4_BTV /*lint --e(923)*/ (*(volatile Ifx_CPU_BTV*)0xF889FE24u)

/** \brief  1FC04, CPU CPU Clock Cycle Count */
#define CPU4_CCNT /*lint --e(923)*/ (*(volatile Ifx_CPU_CCNT*)0xF889FC04u)

/** \brief  1FC00, CPU Counter Control */
#define CPU4_CCTRL /*lint --e(923)*/ (*(volatile Ifx_CPU_CCTRL*)0xF889FC00u)

/** \brief  19400, CPU Compatibility Control Register */
#define CPU4_COMPAT /*lint --e(923)*/ (*(volatile Ifx_CPU_COMPAT*)0xF8899400u)

/** \brief  1FE1C, CPU Core Identification Register */
#define CPU4_CORE_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF889FE1Cu)

/** \brief  1D000, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D000u)

/** \brief  1D004, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D004u)

/** \brief  1D008, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D008u)

/** \brief  1D00C, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D00Cu)

/** \brief  1D010, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D010u)

/** \brief  1D014, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D014u)

/** \brief  1D018, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D018u)

/** \brief  1D01C, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D01Cu)

/** \brief  1D020, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D020u)

/** \brief  1D024, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D024u)

/** \brief  1D028, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D028u)

/** \brief  1D02C, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D02Cu)

/** \brief  1D030, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D030u)

/** \brief  1D034, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D034u)

/** \brief  1D038, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D038u)

/** \brief  1D03C, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D03Cu)

/** \brief  1D040, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D040u)

/** \brief  1D044, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D044u)

/** \brief  1D048, CPU Code Protection Range Lower Bound Register */
#define CPU4_CPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF889D048u)

/** \brief  1D04C, CPU Code Protection Range Upper Bound Register */
#define CPU4_CPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF889D04Cu)

/** \brief  1FE18, CPU Identification Register TC1.6P */
#define CPU4_CPU_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF889FE18u)

/** \brief  1E000, CPU Code Protection Execute Enable Register Set 0 */
#define CPU4_CPXE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_0*)0xF889E000u)

/** \brief  1E004, CPU Code Protection Execute Enable Register Set 1 */
#define CPU4_CPXE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_1*)0xF889E004u)

/** \brief  1E008, CPU Code Protection Execute Enable Register Set 2 */
#define CPU4_CPXE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_2*)0xF889E008u)

/** \brief  1E00C, CPU Code Protection Execute Enable Register Set 3 */
#define CPU4_CPXE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_3*)0xF889E00Cu)

/** \brief  1E050, CPU Code Protection Execute Enable Register Set 4 */
#define CPU4_CPXE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_4*)0xF889E050u)

/** \brief  1E054, CPU Code Protection Execute Enable Register Set 5 */
#define CPU4_CPXE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_5*)0xF889E054u)

/** \brief  1FD0C, CPU Core Register Access Event */
#define CPU4_CREVT /*lint --e(923)*/ (*(volatile Ifx_CPU_CREVT*)0xF889FD0Cu)

/** \brief  1FE50, CPU Customer ID register */
#define CPU4_CUS_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF889FE50u)

/** \brief  1FF00, CPU Data General Purpose Register */
#define CPU4_D0 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF00u)

/** \brief  1FF04, CPU Data General Purpose Register */
#define CPU4_D1 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF04u)

/** \brief  1FF28, CPU Data General Purpose Register */
#define CPU4_D10 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF28u)

/** \brief  1FF2C, CPU Data General Purpose Register */
#define CPU4_D11 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF2Cu)

/** \brief  1FF30, CPU Data General Purpose Register */
#define CPU4_D12 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF30u)

/** \brief  1FF34, CPU Data General Purpose Register */
#define CPU4_D13 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF34u)

/** \brief  1FF38, CPU Data General Purpose Register */
#define CPU4_D14 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF38u)

/** \brief  1FF3C, CPU Data General Purpose Register */
#define CPU4_D15 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF3Cu)

/** \brief  1FF08, CPU Data General Purpose Register */
#define CPU4_D2 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF08u)

/** \brief  1FF0C, CPU Data General Purpose Register */
#define CPU4_D3 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF0Cu)

/** \brief  1FF10, CPU Data General Purpose Register */
#define CPU4_D4 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF10u)

/** \brief  1FF14, CPU Data General Purpose Register */
#define CPU4_D5 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF14u)

/** \brief  1FF18, CPU Data General Purpose Register */
#define CPU4_D6 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF18u)

/** \brief  1FF1C, CPU Data General Purpose Register */
#define CPU4_D7 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF1Cu)

/** \brief  1FF20, CPU Data General Purpose Register */
#define CPU4_D8 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF20u)

/** \brief  1FF24, CPU Data General Purpose Register */
#define CPU4_D9 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF889FF24u)

/** \brief  19018, CPU Data Asynchronous Trap Register */
#define CPU4_DATR /*lint --e(923)*/ (*(volatile Ifx_CPU_DATR*)0xF8899018u)

/** \brief  1FD00, CPU Debug Status Register */
#define CPU4_DBGSR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGSR*)0xF889FD00u)

/** \brief  1FD48, CPU Debug Trap Control Register */
#define CPU4_DBGTCR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF889FD48u)

/** \brief  19040, CPU Data Memory Control Register */
#define CPU4_DCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON0*)0xF8899040u)

/** \brief  19000, CPU Data Control Register 2 */
#define CPU4_DCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON2*)0xF8899000u)

/** \brief  1FD44, CPU Debug Context Save Area Pointer */
#define CPU4_DCX /*lint --e(923)*/ (*(volatile Ifx_CPU_DCX*)0xF889FD44u)

/** \brief  1901C, CPU Data Error Address Register */
#define CPU4_DEADD /*lint --e(923)*/ (*(volatile Ifx_CPU_DEADD*)0xF889901Cu)

/** \brief  19020, CPU Data Integrity Error Address Register */
#define CPU4_DIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIEAR*)0xF8899020u)

/** \brief  19024, CPU Data Integrity Error Trap Register */
#define CPU4_DIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIETR*)0xF8899024u)

/** \brief  E208, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF888E208u)

/** \brief  E20C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF888E20Cu)

/** \brief  E200, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU4_DLMU_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF888E200u)

/** \brief  E204, CPU Safety protection DLMU Region Upper Address Register */
#define CPU4_DLMU_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF888E204u)

/** \brief  E218, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF888E218u)

/** \brief  E21C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF888E21Cu)

/** \brief  E210, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU4_DLMU_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF888E210u)

/** \brief  E214, CPU Safety protection DLMU Region Upper Address Register */
#define CPU4_DLMU_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF888E214u)

/** \brief  E228, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF888E228u)

/** \brief  E22C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF888E22Cu)

/** \brief  E220, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU4_DLMU_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF888E220u)

/** \brief  E224, CPU Safety protection DLMU Region Upper Address Register */
#define CPU4_DLMU_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF888E224u)

/** \brief  E238, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF888E238u)

/** \brief  E23C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF888E23Cu)

/** \brief  E230, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU4_DLMU_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF888E230u)

/** \brief  E234, CPU Safety protection DLMU Region Upper Address Register */
#define CPU4_DLMU_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF888E234u)

/** \brief  E248, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF888E248u)

/** \brief  E24C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF888E24Cu)

/** \brief  E240, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU4_DLMU_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF888E240u)

/** \brief  E244, CPU Safety protection DLMU Region Upper Address Register */
#define CPU4_DLMU_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF888E244u)

/** \brief  E258, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF888E258u)

/** \brief  E25C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF888E25Cu)

/** \brief  E250, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU4_DLMU_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF888E250u)

/** \brief  E254, CPU Safety protection DLMU Region Upper Address Register */
#define CPU4_DLMU_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF888E254u)

/** \brief  E268, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF888E268u)

/** \brief  E26C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF888E26Cu)

/** \brief  E260, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU4_DLMU_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF888E260u)

/** \brief  E264, CPU Safety protection DLMU Region Upper Address Register */
#define CPU4_DLMU_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF888E264u)

/** \brief  E278, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF888E278u)

/** \brief  E27C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF888E27Cu)

/** \brief  E270, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU4_DLMU_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF888E270u)

/** \brief  E274, CPU Safety protection DLMU Region Upper Address Register */
#define CPU4_DLMU_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF888E274u)

/** \brief  E288, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA0_R*)0xF888E288u)

/** \brief  E298, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA1_R*)0xF888E298u)

/** \brief  E2A8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA2_R*)0xF888E2A8u)

/** \brief  E2B8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA3_R*)0xF888E2B8u)

/** \brief  E2C8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA4_R*)0xF888E2C8u)

/** \brief  E2D8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA5_R*)0xF888E2D8u)

/** \brief  E2E8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA6_R*)0xF888E2E8u)

/** \brief  E2F8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU4_DLMU_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA7_R*)0xF888E2F8u)

/** \brief  E28C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB0_R*)0xF888E28Cu)

/** \brief  E29C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB1_R*)0xF888E29Cu)

/** \brief  E2AC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB2_R*)0xF888E2ACu)

/** \brief  E2BC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB3_R*)0xF888E2BCu)

/** \brief  E2CC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB4_R*)0xF888E2CCu)

/** \brief  E2DC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB5_R*)0xF888E2DCu)

/** \brief  E2EC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB6_R*)0xF888E2ECu)

/** \brief  E2FC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU4_DLMU_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB7_R*)0xF888E2FCu)

/** \brief  1FD40, CPU Debug Monitor Start Address */
#define CPU4_DMS /*lint --e(923)*/ (*(volatile Ifx_CPU_DMS*)0xF889FD40u)

/** \brief  1C000, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C000u)

/** \brief  1C004, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C004u)

/** \brief  1C050, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR10_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C050u)

/** \brief  1C054, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR10_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C054u)

/** \brief  1C058, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR11_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C058u)

/** \brief  1C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR11_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C05Cu)

/** \brief  1C060, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR12_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C060u)

/** \brief  1C064, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR12_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C064u)

/** \brief  1C068, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR13_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C068u)

/** \brief  1C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR13_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C06Cu)

/** \brief  1C070, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR14_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C070u)

/** \brief  1C074, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR14_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C074u)

/** \brief  1C078, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR15_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C078u)

/** \brief  1C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR15_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C07Cu)

/** \brief  1C080, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR16_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C080u)

/** \brief  1C084, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR16_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C084u)

/** \brief  1C088, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR17_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C088u)

/** \brief  1C08C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR17_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C08Cu)

/** \brief  1C008, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C008u)

/** \brief  1C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C00Cu)

/** \brief  1C010, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C010u)

/** \brief  1C014, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C014u)

/** \brief  1C018, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C018u)

/** \brief  1C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C01Cu)

/** \brief  1C020, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C020u)

/** \brief  1C024, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C024u)

/** \brief  1C028, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C028u)

/** \brief  1C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C02Cu)

/** \brief  1C030, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C030u)

/** \brief  1C034, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C034u)

/** \brief  1C038, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C038u)

/** \brief  1C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C03Cu)

/** \brief  1C040, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C040u)

/** \brief  1C044, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C044u)

/** \brief  1C048, CPU Data Protection Range, Lower Bound Register */
#define CPU4_DPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF889C048u)

/** \brief  1C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU4_DPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF889C04Cu)

/** \brief  1E010, CPU Data Protection Read Enable Register Set 0 */
#define CPU4_DPRE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_0*)0xF889E010u)

/** \brief  1E014, CPU Data Protection Read Enable Register Set 1 */
#define CPU4_DPRE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_1*)0xF889E014u)

/** \brief  1E018, CPU Data Protection Read Enable Register Set 2 */
#define CPU4_DPRE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_2*)0xF889E018u)

/** \brief  1E01C, CPU Data Protection Read Enable Register Set 3 */
#define CPU4_DPRE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_3*)0xF889E01Cu)

/** \brief  1E060, CPU Data Protection Read Enable Register Set 4 */
#define CPU4_DPRE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_4*)0xF889E060u)

/** \brief  1E064, CPU Data Protection Read Enable Register Set 5 */
#define CPU4_DPRE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_5*)0xF889E064u)

/** \brief  1E020, CPU Data Protection Write Enable Register Set 0 */
#define CPU4_DPWE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_0*)0xF889E020u)

/** \brief  1E024, CPU Data Protection Write Enable Register Set 1 */
#define CPU4_DPWE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_1*)0xF889E024u)

/** \brief  1E028, CPU Data Protection Write Enable Register Set 2 */
#define CPU4_DPWE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_2*)0xF889E028u)

/** \brief  1E02C, CPU Data Protection Write Enable Register Set 3 */
#define CPU4_DPWE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_3*)0xF889E02Cu)

/** \brief  1E070, CPU Data Protection Write Enable Register Set 4 */
#define CPU4_DPWE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_4*)0xF889E070u)

/** \brief  1E074, CPU Data Protection Write Enable Register Set 5 */
#define CPU4_DPWE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_5*)0xF889E074u)

/** \brief  19010, CPU Data Synchronous Trap Register */
#define CPU4_DSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_DSTR*)0xF8899010u)

/** \brief  1FD08, CPU External Event Register */
#define CPU4_EXEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_EXEVT*)0xF889FD08u)

/** \brief  1FE38, CPU Free CSA List Head Pointer */
#define CPU4_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_FCX*)0xF889FE38u)

/** \brief  1100, CPU Flash Configuration Register 0 */
#define CPU4_FLASHCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF8881100u)

/** \brief  1104, CPU Flash Configuration Register 1 */
#define CPU4_FLASHCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF8881104u)

/** \brief  1108, CPU Flash Configuration Register 2 */
#define CPU4_FLASHCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF8881108u)

/** \brief  110C, CPU Flash Configuration Register 3 */
#define CPU4_FLASHCON3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF888110Cu)

/** \brief  1A000, CPU Trap Control Register */
#define CPU4_FPU_TRAP_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF889A000u)

/** \brief  1A008, CPU Trapping Instruction Opcode Register */
#define CPU4_FPU_TRAP_OPC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF889A008u)

/** \brief  1A004, CPU Trapping Instruction Program Counter Register */
#define CPU4_FPU_TRAP_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF889A004u)

/** \brief  1A010, CPU Trapping Instruction Operand Register */
#define CPU4_FPU_TRAP_SRC1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF889A010u)

/** \brief  1A014, CPU Trapping Instruction Operand Register */
#define CPU4_FPU_TRAP_SRC2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF889A014u)

/** \brief  1A018, CPU Trapping Instruction Operand Register */
#define CPU4_FPU_TRAP_SRC3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF889A018u)

/** \brief  1FC08, CPU Instruction Count */
#define CPU4_ICNT /*lint --e(923)*/ (*(volatile Ifx_CPU_ICNT*)0xF889FC08u)

/** \brief  1FE2C, CPU Interrupt Control Register */
#define CPU4_ICR /*lint --e(923)*/ (*(volatile Ifx_CPU_ICR*)0xF889FE2Cu)

/** \brief  1FE28, CPU Interrupt Stack Pointer */
#define CPU4_ISP /*lint --e(923)*/ (*(volatile Ifx_CPU_ISP*)0xF889FE28u)

/** \brief  D000, CPU Reset Register 0 */
#define CPU4_KRST0 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST0*)0xF888D000u)

/** \brief  D004, CPU Reset Register 1 */
#define CPU4_KRST1 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST1*)0xF888D004u)

/** \brief  D008, CPU Reset Status Clear Register */
#define CPU4_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF888D008u)

/** \brief  1FE3C, CPU Free CSA List Limit Pointer */
#define CPU4_LCX /*lint --e(923)*/ (*(volatile Ifx_CPU_LCX*)0xF889FE3Cu)

/** \brief  E110, CPU Safety Protection Region LPB Read Access Enable Register A */
#define CPU4_LPB_SPROT_ACCENA_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF888E110u)

/** \brief  E114, CPU Safety Protection Region LPB Read Access Enable Register B */
#define CPU4_LPB_SPROT_ACCENB_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF888E114u)

/** \brief  1FC0C, CPU Multi-Count Register 1 */
#define CPU4_M1CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M1CNT*)0xF889FC0Cu)

/** \brief  1FC10, CPU Multi-Count Register 2 */
#define CPU4_M2CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M2CNT*)0xF889FC10u)

/** \brief  1FC14, CPU Multi-Count Register 3 */
#define CPU4_M3CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M3CNT*)0xF889FC14u)

/** \brief  18, CPU Overlay Mask Register 0 */
#define CPU4_OMASK0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK0*)0xF8880018u)

/** \brief  24, CPU Overlay Mask Register 1 */
#define CPU4_OMASK1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK1*)0xF8880024u)

/** \brief  90, CPU Overlay Mask Register 10 */
#define CPU4_OMASK10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK10*)0xF8880090u)

/** \brief  9C, CPU Overlay Mask Register 11 */
#define CPU4_OMASK11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK11*)0xF888009Cu)

/** \brief  A8, CPU Overlay Mask Register 12 */
#define CPU4_OMASK12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK12*)0xF88800A8u)

/** \brief  B4, CPU Overlay Mask Register 13 */
#define CPU4_OMASK13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK13*)0xF88800B4u)

/** \brief  C0, CPU Overlay Mask Register 14 */
#define CPU4_OMASK14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK14*)0xF88800C0u)

/** \brief  CC, CPU Overlay Mask Register 15 */
#define CPU4_OMASK15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK15*)0xF88800CCu)

/** \brief  D8, CPU Overlay Mask Register 16 */
#define CPU4_OMASK16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK16*)0xF88800D8u)

/** \brief  E4, CPU Overlay Mask Register 17 */
#define CPU4_OMASK17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK17*)0xF88800E4u)

/** \brief  F0, CPU Overlay Mask Register 18 */
#define CPU4_OMASK18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK18*)0xF88800F0u)

/** \brief  FC, CPU Overlay Mask Register 19 */
#define CPU4_OMASK19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK19*)0xF88800FCu)

/** \brief  30, CPU Overlay Mask Register 2 */
#define CPU4_OMASK2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK2*)0xF8880030u)

/** \brief  108, CPU Overlay Mask Register 20 */
#define CPU4_OMASK20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK20*)0xF8880108u)

/** \brief  114, CPU Overlay Mask Register 21 */
#define CPU4_OMASK21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK21*)0xF8880114u)

/** \brief  120, CPU Overlay Mask Register 22 */
#define CPU4_OMASK22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK22*)0xF8880120u)

/** \brief  12C, CPU Overlay Mask Register 23 */
#define CPU4_OMASK23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK23*)0xF888012Cu)

/** \brief  138, CPU Overlay Mask Register 24 */
#define CPU4_OMASK24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK24*)0xF8880138u)

/** \brief  144, CPU Overlay Mask Register 25 */
#define CPU4_OMASK25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK25*)0xF8880144u)

/** \brief  150, CPU Overlay Mask Register 26 */
#define CPU4_OMASK26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK26*)0xF8880150u)

/** \brief  15C, CPU Overlay Mask Register 27 */
#define CPU4_OMASK27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK27*)0xF888015Cu)

/** \brief  168, CPU Overlay Mask Register 28 */
#define CPU4_OMASK28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK28*)0xF8880168u)

/** \brief  174, CPU Overlay Mask Register 29 */
#define CPU4_OMASK29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK29*)0xF8880174u)

/** \brief  3C, CPU Overlay Mask Register 3 */
#define CPU4_OMASK3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK3*)0xF888003Cu)

/** \brief  180, CPU Overlay Mask Register 30 */
#define CPU4_OMASK30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK30*)0xF8880180u)

/** \brief  18C, CPU Overlay Mask Register 31 */
#define CPU4_OMASK31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK31*)0xF888018Cu)

/** \brief  48, CPU Overlay Mask Register 4 */
#define CPU4_OMASK4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK4*)0xF8880048u)

/** \brief  54, CPU Overlay Mask Register 5 */
#define CPU4_OMASK5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK5*)0xF8880054u)

/** \brief  60, CPU Overlay Mask Register 6 */
#define CPU4_OMASK6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK6*)0xF8880060u)

/** \brief  6C, CPU Overlay Mask Register 7 */
#define CPU4_OMASK7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK7*)0xF888006Cu)

/** \brief  78, CPU Overlay Mask Register 8 */
#define CPU4_OMASK8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK8*)0xF8880078u)

/** \brief  84, CPU Overlay Mask Register 9 */
#define CPU4_OMASK9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK9*)0xF8880084u)

/** \brief  0, CPU Overlay Range Select Register */
#define CPU4_OSEL /*lint --e(923)*/ (*(volatile Ifx_CPU_OSEL*)0xF8880000u)

/** \brief  14, CPU Overlay Target Address Register 0 */
#define CPU4_OTAR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR0*)0xF8880014u)

/** \brief  20, CPU Overlay Target Address Register 1 */
#define CPU4_OTAR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR1*)0xF8880020u)

/** \brief  8C, CPU Overlay Target Address Register 10 */
#define CPU4_OTAR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR10*)0xF888008Cu)

/** \brief  98, CPU Overlay Target Address Register 11 */
#define CPU4_OTAR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR11*)0xF8880098u)

/** \brief  A4, CPU Overlay Target Address Register 12 */
#define CPU4_OTAR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR12*)0xF88800A4u)

/** \brief  B0, CPU Overlay Target Address Register 13 */
#define CPU4_OTAR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR13*)0xF88800B0u)

/** \brief  BC, CPU Overlay Target Address Register 14 */
#define CPU4_OTAR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR14*)0xF88800BCu)

/** \brief  C8, CPU Overlay Target Address Register 15 */
#define CPU4_OTAR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR15*)0xF88800C8u)

/** \brief  D4, CPU Overlay Target Address Register 16 */
#define CPU4_OTAR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR16*)0xF88800D4u)

/** \brief  E0, CPU Overlay Target Address Register 17 */
#define CPU4_OTAR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR17*)0xF88800E0u)

/** \brief  EC, CPU Overlay Target Address Register 18 */
#define CPU4_OTAR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR18*)0xF88800ECu)

/** \brief  F8, CPU Overlay Target Address Register 19 */
#define CPU4_OTAR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR19*)0xF88800F8u)

/** \brief  2C, CPU Overlay Target Address Register 2 */
#define CPU4_OTAR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR2*)0xF888002Cu)

/** \brief  104, CPU Overlay Target Address Register 20 */
#define CPU4_OTAR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR20*)0xF8880104u)

/** \brief  110, CPU Overlay Target Address Register 21 */
#define CPU4_OTAR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR21*)0xF8880110u)

/** \brief  11C, CPU Overlay Target Address Register 22 */
#define CPU4_OTAR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR22*)0xF888011Cu)

/** \brief  128, CPU Overlay Target Address Register 23 */
#define CPU4_OTAR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR23*)0xF8880128u)

/** \brief  134, CPU Overlay Target Address Register 24 */
#define CPU4_OTAR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR24*)0xF8880134u)

/** \brief  140, CPU Overlay Target Address Register 25 */
#define CPU4_OTAR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR25*)0xF8880140u)

/** \brief  14C, CPU Overlay Target Address Register 26 */
#define CPU4_OTAR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR26*)0xF888014Cu)

/** \brief  158, CPU Overlay Target Address Register 27 */
#define CPU4_OTAR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR27*)0xF8880158u)

/** \brief  164, CPU Overlay Target Address Register 28 */
#define CPU4_OTAR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR28*)0xF8880164u)

/** \brief  170, CPU Overlay Target Address Register 29 */
#define CPU4_OTAR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR29*)0xF8880170u)

/** \brief  38, CPU Overlay Target Address Register 3 */
#define CPU4_OTAR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR3*)0xF8880038u)

/** \brief  17C, CPU Overlay Target Address Register 30 */
#define CPU4_OTAR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR30*)0xF888017Cu)

/** \brief  188, CPU Overlay Target Address Register 31 */
#define CPU4_OTAR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR31*)0xF8880188u)

/** \brief  44, CPU Overlay Target Address Register 4 */
#define CPU4_OTAR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR4*)0xF8880044u)

/** \brief  50, CPU Overlay Target Address Register 5 */
#define CPU4_OTAR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR5*)0xF8880050u)

/** \brief  5C, CPU Overlay Target Address Register 6 */
#define CPU4_OTAR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR6*)0xF888005Cu)

/** \brief  68, CPU Overlay Target Address Register 7 */
#define CPU4_OTAR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR7*)0xF8880068u)

/** \brief  74, CPU Overlay Target Address Register 8 */
#define CPU4_OTAR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR8*)0xF8880074u)

/** \brief  80, CPU Overlay Target Address Register 9 */
#define CPU4_OTAR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR9*)0xF8880080u)

/** \brief  1FE08, CPU Program Counter */
#define CPU4_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_PC*)0xF889FE08u)

/** \brief  1920C, CPU Program Control 0 */
#define CPU4_PCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON0*)0xF889920Cu)

/** \brief  19204, CPU Program Control 1 */
#define CPU4_PCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON1*)0xF8899204u)

/** \brief  19208, CPU Program Control 2 */
#define CPU4_PCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON2*)0xF8899208u)

/** \brief  1FE00, CPU Previous Context Information Register */
#define CPU4_PCXI /*lint --e(923)*/ (*(volatile Ifx_CPU_PCXI*)0xF889FE00u)

/** \brief  19210, CPU Program Integrity Error Address Register */
#define CPU4_PIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIEAR*)0xF8899210u)

/** \brief  19214, CPU Program Integrity Error Trap Register */
#define CPU4_PIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIETR*)0xF8899214u)

/** \brief  18100, CPU Data Access CacheabilityRegister */
#define CPU4_PMA0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA0*)0xF8898100u)

/** \brief  18104, CPU Code Access CacheabilityRegister */
#define CPU4_PMA1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA1*)0xF8898104u)

/** \brief  18108, CPU Peripheral Space Identifier register */
#define CPU4_PMA2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA2*)0xF8898108u)

/** \brief  19200, CPU Program Synchronous Trap Register */
#define CPU4_PSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_PSTR*)0xF8899200u)

/** \brief  1FE04, CPU Program Status Word */
#define CPU4_PSW /*lint --e(923)*/ (*(volatile Ifx_CPU_PSW*)0xF889FE04u)

/** \brief  10, CPU Redirected Address Base Register 0 */
#define CPU4_RABR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR0*)0xF8880010u)

/** \brief  1C, CPU Redirected Address Base Register 1 */
#define CPU4_RABR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR1*)0xF888001Cu)

/** \brief  88, CPU Redirected Address Base Register 10 */
#define CPU4_RABR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR10*)0xF8880088u)

/** \brief  94, CPU Redirected Address Base Register 11 */
#define CPU4_RABR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR11*)0xF8880094u)

/** \brief  A0, CPU Redirected Address Base Register 12 */
#define CPU4_RABR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR12*)0xF88800A0u)

/** \brief  AC, CPU Redirected Address Base Register 13 */
#define CPU4_RABR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR13*)0xF88800ACu)

/** \brief  B8, CPU Redirected Address Base Register 14 */
#define CPU4_RABR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR14*)0xF88800B8u)

/** \brief  C4, CPU Redirected Address Base Register 15 */
#define CPU4_RABR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR15*)0xF88800C4u)

/** \brief  D0, CPU Redirected Address Base Register 16 */
#define CPU4_RABR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR16*)0xF88800D0u)

/** \brief  DC, CPU Redirected Address Base Register 17 */
#define CPU4_RABR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR17*)0xF88800DCu)

/** \brief  E8, CPU Redirected Address Base Register 18 */
#define CPU4_RABR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR18*)0xF88800E8u)

/** \brief  F4, CPU Redirected Address Base Register 19 */
#define CPU4_RABR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR19*)0xF88800F4u)

/** \brief  28, CPU Redirected Address Base Register 2 */
#define CPU4_RABR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR2*)0xF8880028u)

/** \brief  100, CPU Redirected Address Base Register 20 */
#define CPU4_RABR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR20*)0xF8880100u)

/** \brief  10C, CPU Redirected Address Base Register 21 */
#define CPU4_RABR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR21*)0xF888010Cu)

/** \brief  118, CPU Redirected Address Base Register 22 */
#define CPU4_RABR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR22*)0xF8880118u)

/** \brief  124, CPU Redirected Address Base Register 23 */
#define CPU4_RABR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR23*)0xF8880124u)

/** \brief  130, CPU Redirected Address Base Register 24 */
#define CPU4_RABR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR24*)0xF8880130u)

/** \brief  13C, CPU Redirected Address Base Register 25 */
#define CPU4_RABR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR25*)0xF888013Cu)

/** \brief  148, CPU Redirected Address Base Register 26 */
#define CPU4_RABR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR26*)0xF8880148u)

/** \brief  154, CPU Redirected Address Base Register 27 */
#define CPU4_RABR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR27*)0xF8880154u)

/** \brief  160, CPU Redirected Address Base Register 28 */
#define CPU4_RABR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR28*)0xF8880160u)

/** \brief  16C, CPU Redirected Address Base Register 29 */
#define CPU4_RABR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR29*)0xF888016Cu)

/** \brief  34, CPU Redirected Address Base Register 3 */
#define CPU4_RABR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR3*)0xF8880034u)

/** \brief  178, CPU Redirected Address Base Register 30 */
#define CPU4_RABR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR30*)0xF8880178u)

/** \brief  184, CPU Redirected Address Base Register 31 */
#define CPU4_RABR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR31*)0xF8880184u)

/** \brief  40, CPU Redirected Address Base Register 4 */
#define CPU4_RABR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR4*)0xF8880040u)

/** \brief  4C, CPU Redirected Address Base Register 5 */
#define CPU4_RABR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR5*)0xF888004Cu)

/** \brief  58, CPU Redirected Address Base Register 6 */
#define CPU4_RABR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR6*)0xF8880058u)

/** \brief  64, CPU Redirected Address Base Register 7 */
#define CPU4_RABR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR7*)0xF8880064u)

/** \brief  70, CPU Redirected Address Base Register 8 */
#define CPU4_RABR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR8*)0xF8880070u)

/** \brief  7C, CPU Redirected Address Base Register 9 */
#define CPU4_RABR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR9*)0xF888007Cu)

/** \brief  11030, CPU SRI Error Generation Register */
#define CPU4_SEGEN /*lint --e(923)*/ (*(volatile Ifx_CPU_SEGEN*)0xF8891030u)

/** \brief  E100, CPU Safety Protection Register Access Enable Register A */
#define CPU4_SFR_SPROT_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF888E100u)

/** \brief  E104, CPU Safety Protection Region Access Enable Register B */
#define CPU4_SFR_SPROT_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF888E104u)

/** \brief  1900C, CPU SIST Mode Access Control Register */
#define CPU4_SMACON /*lint --e(923)*/ (*(volatile Ifx_CPU_SMACON*)0xF889900Cu)

/** \brief  E008, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU4_SPR_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF888E008u)

/** \brief  E00C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU4_SPR_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF888E00Cu)

/** \brief  E000, CPU Safety Protection SPR Region Lower Address Register */
#define CPU4_SPR_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF888E000u)

/** \brief  E004, CPU Safety protection SPR Region Upper Address Register */
#define CPU4_SPR_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF888E004u)

/** \brief  E018, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU4_SPR_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF888E018u)

/** \brief  E01C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU4_SPR_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF888E01Cu)

/** \brief  E010, CPU Safety Protection SPR Region Lower Address Register */
#define CPU4_SPR_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF888E010u)

/** \brief  E014, CPU Safety protection SPR Region Upper Address Register */
#define CPU4_SPR_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF888E014u)

/** \brief  E028, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU4_SPR_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF888E028u)

/** \brief  E02C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU4_SPR_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF888E02Cu)

/** \brief  E020, CPU Safety Protection SPR Region Lower Address Register */
#define CPU4_SPR_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF888E020u)

/** \brief  E024, CPU Safety protection SPR Region Upper Address Register */
#define CPU4_SPR_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF888E024u)

/** \brief  E038, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU4_SPR_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF888E038u)

/** \brief  E03C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU4_SPR_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF888E03Cu)

/** \brief  E030, CPU Safety Protection SPR Region Lower Address Register */
#define CPU4_SPR_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF888E030u)

/** \brief  E034, CPU Safety protection SPR Region Upper Address Register */
#define CPU4_SPR_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF888E034u)

/** \brief  E048, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU4_SPR_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF888E048u)

/** \brief  E04C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU4_SPR_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF888E04Cu)

/** \brief  E040, CPU Safety Protection SPR Region Lower Address Register */
#define CPU4_SPR_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF888E040u)

/** \brief  E044, CPU Safety protection SPR Region Upper Address Register */
#define CPU4_SPR_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF888E044u)

/** \brief  E058, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU4_SPR_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF888E058u)

/** \brief  E05C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU4_SPR_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF888E05Cu)

/** \brief  E050, CPU Safety Protection SPR Region Lower Address Register */
#define CPU4_SPR_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF888E050u)

/** \brief  E054, CPU Safety protection SPR Region Upper Address Register */
#define CPU4_SPR_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF888E054u)

/** \brief  E068, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU4_SPR_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF888E068u)

/** \brief  E06C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU4_SPR_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF888E06Cu)

/** \brief  E060, CPU Safety Protection SPR Region Lower Address Register */
#define CPU4_SPR_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF888E060u)

/** \brief  E064, CPU Safety protection SPR Region Upper Address Register */
#define CPU4_SPR_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF888E064u)

/** \brief  E078, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU4_SPR_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF888E078u)

/** \brief  E07C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU4_SPR_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF888E07Cu)

/** \brief  E070, CPU Safety Protection SPR Region Lower Address Register */
#define CPU4_SPR_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF888E070u)

/** \brief  E074, CPU Safety protection SPR Region Upper Address Register */
#define CPU4_SPR_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF888E074u)

/** \brief  E088, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU4_SPR_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA0_R*)0xF888E088u)

/** \brief  E098, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU4_SPR_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA1_R*)0xF888E098u)

/** \brief  E0A8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU4_SPR_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA2_R*)0xF888E0A8u)

/** \brief  E0B8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU4_SPR_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA3_R*)0xF888E0B8u)

/** \brief  E0C8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU4_SPR_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA4_R*)0xF888E0C8u)

/** \brief  E0D8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU4_SPR_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA5_R*)0xF888E0D8u)

/** \brief  E0E8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU4_SPR_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA6_R*)0xF888E0E8u)

/** \brief  E0F8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU4_SPR_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA7_R*)0xF888E0F8u)

/** \brief  E08C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU4_SPR_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB0_R*)0xF888E08Cu)

/** \brief  E09C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU4_SPR_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB1_R*)0xF888E09Cu)

/** \brief  E0AC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU4_SPR_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB2_R*)0xF888E0ACu)

/** \brief  E0BC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU4_SPR_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB3_R*)0xF888E0BCu)

/** \brief  E0CC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU4_SPR_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB4_R*)0xF888E0CCu)

/** \brief  E0DC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU4_SPR_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB5_R*)0xF888E0DCu)

/** \brief  E0EC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU4_SPR_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB6_R*)0xF888E0ECu)

/** \brief  E0FC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU4_SPR_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB7_R*)0xF888E0FCu)

/** \brief  1FD10, CPU Software Debug Event */
#define CPU4_SWEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_SWEVT*)0xF889FD10u)

/** \brief  1FE14, CPU System Configuration Register */
#define CPU4_SYSCON /*lint --e(923)*/ (*(volatile Ifx_CPU_SYSCON*)0xF889FE14u)

/** \brief  18004, CPU Task Address Space Identifier Register */
#define CPU4_TASK_ASI /*lint --e(923)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF8898004u)

/** \brief  1E400, CPU Temporal Protection System Control Register */
#define CPU4_TPS_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF889E400u)

/** \brief  1E448, CPU Exception Timer Class Enable Register */
#define CPU4_TPS_EXTIM_CLASS_EN /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF889E448u)

/** \brief  1E444, CPU Exception Timer Current Value */
#define CPU4_TPS_EXTIM_CVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CVAL*)0xF889E444u)

/** \brief  1E450, CPU Exception Timer Status Register */
#define CPU4_TPS_EXTIM_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF889E450u)

/** \brief  1E440, CPU Exception Timer Load Value */
#define CPU4_TPS_EXTIM_LVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_LVAL*)0xF889E440u)

/** \brief  1E44C, CPU Exception Timer Status Register */
#define CPU4_TPS_EXTIM_STAT /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF889E44Cu)

/** \brief  1E404, CPU Temporal Protection System Timer Register */
#define CPU4_TPS_TIMER0 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF889E404u)

/** \brief  1E408, CPU Temporal Protection System Timer Register */
#define CPU4_TPS_TIMER1 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF889E408u)

/** \brief  1E40C, CPU Temporal Protection System Timer Register */
#define CPU4_TPS_TIMER2 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF889E40Cu)

/** \brief  1F004, CPU Trigger Address */
#define CPU4_TR0_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF889F004u)

/** \brief  1F000, CPU Trigger Event */
#define CPU4_TR0_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF889F000u)

/** \brief  1F00C, CPU Trigger Address */
#define CPU4_TR1_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF889F00Cu)

/** \brief  1F008, CPU Trigger Event */
#define CPU4_TR1_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF889F008u)

/** \brief  1F014, CPU Trigger Address */
#define CPU4_TR2_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF889F014u)

/** \brief  1F010, CPU Trigger Event */
#define CPU4_TR2_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF889F010u)

/** \brief  1F01C, CPU Trigger Address */
#define CPU4_TR3_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF889F01Cu)

/** \brief  1F018, CPU Trigger Event */
#define CPU4_TR3_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF889F018u)

/** \brief  1F024, CPU Trigger Address */
#define CPU4_TR4_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF889F024u)

/** \brief  1F020, CPU Trigger Event */
#define CPU4_TR4_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF889F020u)

/** \brief  1F02C, CPU Trigger Address */
#define CPU4_TR5_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF889F02Cu)

/** \brief  1F028, CPU Trigger Event */
#define CPU4_TR5_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF889F028u)

/** \brief  1F034, CPU Trigger Address */
#define CPU4_TR6_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF889F034u)

/** \brief  1F030, CPU Trigger Event */
#define CPU4_TR6_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF889F030u)

/** \brief  1F03C, CPU Trigger Address */
#define CPU4_TR7_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF889F03Cu)

/** \brief  1F038, CPU Trigger Event */
#define CPU4_TR7_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF889F038u)

/** \brief  1FD30, CPU Trigger Address x */
#define CPU4_TRIG_ACC /*lint --e(923)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF889FD30u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_Cpu5
 * \{  */

/** \brief  1FF80, CPU Address General Purpose Register */
#define CPU5_A0 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFF80u)

/** \brief  1FF84, CPU Address General Purpose Register */
#define CPU5_A1 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFF84u)

/** \brief  1FFA8, CPU Address General Purpose Register */
#define CPU5_A10 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFFA8u)

/** \brief  1FFAC, CPU Address General Purpose Register */
#define CPU5_A11 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFFACu)

/** \brief  1FFB0, CPU Address General Purpose Register */
#define CPU5_A12 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFFB0u)

/** \brief  1FFB4, CPU Address General Purpose Register */
#define CPU5_A13 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFFB4u)

/** \brief  1FFB8, CPU Address General Purpose Register */
#define CPU5_A14 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFFB8u)

/** \brief  1FFBC, CPU Address General Purpose Register */
#define CPU5_A15 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFFBCu)

/** \brief  1FF88, CPU Address General Purpose Register */
#define CPU5_A2 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFF88u)

/** \brief  1FF8C, CPU Address General Purpose Register */
#define CPU5_A3 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFF8Cu)

/** \brief  1FF90, CPU Address General Purpose Register */
#define CPU5_A4 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFF90u)

/** \brief  1FF94, CPU Address General Purpose Register */
#define CPU5_A5 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFF94u)

/** \brief  1FF98, CPU Address General Purpose Register */
#define CPU5_A6 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFF98u)

/** \brief  1FF9C, CPU Address General Purpose Register */
#define CPU5_A7 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFF9Cu)

/** \brief  1FFA0, CPU Address General Purpose Register */
#define CPU5_A8 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFFA0u)

/** \brief  1FFA4, CPU Address General Purpose Register */
#define CPU5_A9 /*lint --e(923)*/ (*(volatile Ifx_CPU_A*)0xF88DFFA4u)

/** \brief  1FE20, CPU Base Interrupt Vector Table Pointer */
#define CPU5_BIV /*lint --e(923)*/ (*(volatile Ifx_CPU_BIV*)0xF88DFE20u)

/** \brief  1FE24, CPU Base Trap Vector Table Pointer */
#define CPU5_BTV /*lint --e(923)*/ (*(volatile Ifx_CPU_BTV*)0xF88DFE24u)

/** \brief  1FC04, CPU CPU Clock Cycle Count */
#define CPU5_CCNT /*lint --e(923)*/ (*(volatile Ifx_CPU_CCNT*)0xF88DFC04u)

/** \brief  1FC00, CPU Counter Control */
#define CPU5_CCTRL /*lint --e(923)*/ (*(volatile Ifx_CPU_CCTRL*)0xF88DFC00u)

/** \brief  19400, CPU Compatibility Control Register */
#define CPU5_COMPAT /*lint --e(923)*/ (*(volatile Ifx_CPU_COMPAT*)0xF88D9400u)

/** \brief  1FE1C, CPU Core Identification Register */
#define CPU5_CORE_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CORE_ID*)0xF88DFE1Cu)

/** \brief  1D000, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD000u)

/** \brief  1D004, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD004u)

/** \brief  1D008, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD008u)

/** \brief  1D00C, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD00Cu)

/** \brief  1D010, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD010u)

/** \brief  1D014, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD014u)

/** \brief  1D018, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD018u)

/** \brief  1D01C, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD01Cu)

/** \brief  1D020, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD020u)

/** \brief  1D024, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD024u)

/** \brief  1D028, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD028u)

/** \brief  1D02C, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD02Cu)

/** \brief  1D030, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD030u)

/** \brief  1D034, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD034u)

/** \brief  1D038, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD038u)

/** \brief  1D03C, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD03Cu)

/** \brief  1D040, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD040u)

/** \brief  1D044, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD044u)

/** \brief  1D048, CPU Code Protection Range Lower Bound Register */
#define CPU5_CPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_L*)0xF88DD048u)

/** \brief  1D04C, CPU Code Protection Range Upper Bound Register */
#define CPU5_CPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_CPR_U*)0xF88DD04Cu)

/** \brief  1FE18, CPU Identification Register TC1.6P */
#define CPU5_CPU_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CPU_ID*)0xF88DFE18u)

/** \brief  1E000, CPU Code Protection Execute Enable Register Set 0 */
#define CPU5_CPXE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_0*)0xF88DE000u)

/** \brief  1E004, CPU Code Protection Execute Enable Register Set 1 */
#define CPU5_CPXE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_1*)0xF88DE004u)

/** \brief  1E008, CPU Code Protection Execute Enable Register Set 2 */
#define CPU5_CPXE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_2*)0xF88DE008u)

/** \brief  1E00C, CPU Code Protection Execute Enable Register Set 3 */
#define CPU5_CPXE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_3*)0xF88DE00Cu)

/** \brief  1E050, CPU Code Protection Execute Enable Register Set 4 */
#define CPU5_CPXE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_4*)0xF88DE050u)

/** \brief  1E054, CPU Code Protection Execute Enable Register Set 5 */
#define CPU5_CPXE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_CPXE_5*)0xF88DE054u)

/** \brief  1FD0C, CPU Core Register Access Event */
#define CPU5_CREVT /*lint --e(923)*/ (*(volatile Ifx_CPU_CREVT*)0xF88DFD0Cu)

/** \brief  1FE50, CPU Customer ID register */
#define CPU5_CUS_ID /*lint --e(923)*/ (*(volatile Ifx_CPU_CUS_ID*)0xF88DFE50u)

/** \brief  1FF00, CPU Data General Purpose Register */
#define CPU5_D0 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF00u)

/** \brief  1FF04, CPU Data General Purpose Register */
#define CPU5_D1 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF04u)

/** \brief  1FF28, CPU Data General Purpose Register */
#define CPU5_D10 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF28u)

/** \brief  1FF2C, CPU Data General Purpose Register */
#define CPU5_D11 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF2Cu)

/** \brief  1FF30, CPU Data General Purpose Register */
#define CPU5_D12 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF30u)

/** \brief  1FF34, CPU Data General Purpose Register */
#define CPU5_D13 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF34u)

/** \brief  1FF38, CPU Data General Purpose Register */
#define CPU5_D14 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF38u)

/** \brief  1FF3C, CPU Data General Purpose Register */
#define CPU5_D15 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF3Cu)

/** \brief  1FF08, CPU Data General Purpose Register */
#define CPU5_D2 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF08u)

/** \brief  1FF0C, CPU Data General Purpose Register */
#define CPU5_D3 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF0Cu)

/** \brief  1FF10, CPU Data General Purpose Register */
#define CPU5_D4 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF10u)

/** \brief  1FF14, CPU Data General Purpose Register */
#define CPU5_D5 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF14u)

/** \brief  1FF18, CPU Data General Purpose Register */
#define CPU5_D6 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF18u)

/** \brief  1FF1C, CPU Data General Purpose Register */
#define CPU5_D7 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF1Cu)

/** \brief  1FF20, CPU Data General Purpose Register */
#define CPU5_D8 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF20u)

/** \brief  1FF24, CPU Data General Purpose Register */
#define CPU5_D9 /*lint --e(923)*/ (*(volatile Ifx_CPU_D*)0xF88DFF24u)

/** \brief  19018, CPU Data Asynchronous Trap Register */
#define CPU5_DATR /*lint --e(923)*/ (*(volatile Ifx_CPU_DATR*)0xF88D9018u)

/** \brief  1FD00, CPU Debug Status Register */
#define CPU5_DBGSR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGSR*)0xF88DFD00u)

/** \brief  1FD48, CPU Debug Trap Control Register */
#define CPU5_DBGTCR /*lint --e(923)*/ (*(volatile Ifx_CPU_DBGTCR*)0xF88DFD48u)

/** \brief  19040, CPU Data Memory Control Register */
#define CPU5_DCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON0*)0xF88D9040u)

/** \brief  19000, CPU Data Control Register 2 */
#define CPU5_DCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DCON2*)0xF88D9000u)

/** \brief  1FD44, CPU Debug Context Save Area Pointer */
#define CPU5_DCX /*lint --e(923)*/ (*(volatile Ifx_CPU_DCX*)0xF88DFD44u)

/** \brief  1901C, CPU Data Error Address Register */
#define CPU5_DEADD /*lint --e(923)*/ (*(volatile Ifx_CPU_DEADD*)0xF88D901Cu)

/** \brief  19020, CPU Data Integrity Error Address Register */
#define CPU5_DIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIEAR*)0xF88D9020u)

/** \brief  19024, CPU Data Integrity Error Trap Register */
#define CPU5_DIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_DIETR*)0xF88D9024u)

/** \brief  E208, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF88CE208u)

/** \brief  E20C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF88CE20Cu)

/** \brief  E200, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU5_DLMU_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF88CE200u)

/** \brief  E204, CPU Safety protection DLMU Region Upper Address Register */
#define CPU5_DLMU_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF88CE204u)

/** \brief  E218, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF88CE218u)

/** \brief  E21C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF88CE21Cu)

/** \brief  E210, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU5_DLMU_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF88CE210u)

/** \brief  E214, CPU Safety protection DLMU Region Upper Address Register */
#define CPU5_DLMU_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF88CE214u)

/** \brief  E228, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF88CE228u)

/** \brief  E22C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF88CE22Cu)

/** \brief  E220, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU5_DLMU_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF88CE220u)

/** \brief  E224, CPU Safety protection DLMU Region Upper Address Register */
#define CPU5_DLMU_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF88CE224u)

/** \brief  E238, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF88CE238u)

/** \brief  E23C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF88CE23Cu)

/** \brief  E230, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU5_DLMU_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF88CE230u)

/** \brief  E234, CPU Safety protection DLMU Region Upper Address Register */
#define CPU5_DLMU_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF88CE234u)

/** \brief  E248, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF88CE248u)

/** \brief  E24C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF88CE24Cu)

/** \brief  E240, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU5_DLMU_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF88CE240u)

/** \brief  E244, CPU Safety protection DLMU Region Upper Address Register */
#define CPU5_DLMU_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF88CE244u)

/** \brief  E258, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF88CE258u)

/** \brief  E25C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF88CE25Cu)

/** \brief  E250, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU5_DLMU_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF88CE250u)

/** \brief  E254, CPU Safety protection DLMU Region Upper Address Register */
#define CPU5_DLMU_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF88CE254u)

/** \brief  E268, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF88CE268u)

/** \brief  E26C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF88CE26Cu)

/** \brief  E260, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU5_DLMU_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF88CE260u)

/** \brief  E264, CPU Safety protection DLMU Region Upper Address Register */
#define CPU5_DLMU_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF88CE264u)

/** \brief  E278, CPU Safety Protection Region DLMU Write Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W*)0xF88CE278u)

/** \brief  E27C, CPU Safety Protection Region DLMU Write Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W*)0xF88CE27Cu)

/** \brief  E270, CPU Safety Protection DLMU Region Lower Address Register */
#define CPU5_DLMU_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_LA*)0xF88CE270u)

/** \brief  E274, CPU Safety protection DLMU Region Upper Address Register */
#define CPU5_DLMU_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGN_UA*)0xF88CE274u)

/** \brief  E288, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA0_R*)0xF88CE288u)

/** \brief  E298, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA1_R*)0xF88CE298u)

/** \brief  E2A8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA2_R*)0xF88CE2A8u)

/** \brief  E2B8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA3_R*)0xF88CE2B8u)

/** \brief  E2C8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA4_R*)0xF88CE2C8u)

/** \brief  E2D8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA5_R*)0xF88CE2D8u)

/** \brief  E2E8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA6_R*)0xF88CE2E8u)

/** \brief  E2F8, CPU Safety Protection Region DLMU Read Access Enable Register
 * A */
#define CPU5_DLMU_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENA7_R*)0xF88CE2F8u)

/** \brief  E28C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB0_R*)0xF88CE28Cu)

/** \brief  E29C, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB1_R*)0xF88CE29Cu)

/** \brief  E2AC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB2_R*)0xF88CE2ACu)

/** \brief  E2BC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB3_R*)0xF88CE2BCu)

/** \brief  E2CC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB4_R*)0xF88CE2CCu)

/** \brief  E2DC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB5_R*)0xF88CE2DCu)

/** \brief  E2EC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB6_R*)0xF88CE2ECu)

/** \brief  E2FC, CPU Safety Protection Region DLMU Read Access Enable Register
 * B */
#define CPU5_DLMU_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_DLMU_SPROT_RGNACCENB7_R*)0xF88CE2FCu)

/** \brief  1FD40, CPU Debug Monitor Start Address */
#define CPU5_DMS /*lint --e(923)*/ (*(volatile Ifx_CPU_DMS*)0xF88DFD40u)

/** \brief  1C000, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR0_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC000u)

/** \brief  1C004, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR0_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC004u)

/** \brief  1C050, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR10_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC050u)

/** \brief  1C054, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR10_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC054u)

/** \brief  1C058, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR11_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC058u)

/** \brief  1C05C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR11_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC05Cu)

/** \brief  1C060, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR12_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC060u)

/** \brief  1C064, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR12_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC064u)

/** \brief  1C068, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR13_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC068u)

/** \brief  1C06C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR13_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC06Cu)

/** \brief  1C070, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR14_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC070u)

/** \brief  1C074, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR14_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC074u)

/** \brief  1C078, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR15_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC078u)

/** \brief  1C07C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR15_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC07Cu)

/** \brief  1C080, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR16_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC080u)

/** \brief  1C084, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR16_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC084u)

/** \brief  1C088, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR17_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC088u)

/** \brief  1C08C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR17_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC08Cu)

/** \brief  1C008, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR1_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC008u)

/** \brief  1C00C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR1_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC00Cu)

/** \brief  1C010, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR2_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC010u)

/** \brief  1C014, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR2_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC014u)

/** \brief  1C018, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR3_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC018u)

/** \brief  1C01C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR3_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC01Cu)

/** \brief  1C020, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR4_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC020u)

/** \brief  1C024, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR4_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC024u)

/** \brief  1C028, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR5_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC028u)

/** \brief  1C02C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR5_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC02Cu)

/** \brief  1C030, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR6_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC030u)

/** \brief  1C034, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR6_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC034u)

/** \brief  1C038, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR7_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC038u)

/** \brief  1C03C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR7_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC03Cu)

/** \brief  1C040, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR8_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC040u)

/** \brief  1C044, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR8_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC044u)

/** \brief  1C048, CPU Data Protection Range, Lower Bound Register */
#define CPU5_DPR9_L /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_L*)0xF88DC048u)

/** \brief  1C04C, CPU Data Protection Range, Upper Bound Register */
#define CPU5_DPR9_U /*lint --e(923)*/ (*(volatile Ifx_CPU_DPR_U*)0xF88DC04Cu)

/** \brief  1E010, CPU Data Protection Read Enable Register Set 0 */
#define CPU5_DPRE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_0*)0xF88DE010u)

/** \brief  1E014, CPU Data Protection Read Enable Register Set 1 */
#define CPU5_DPRE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_1*)0xF88DE014u)

/** \brief  1E018, CPU Data Protection Read Enable Register Set 2 */
#define CPU5_DPRE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_2*)0xF88DE018u)

/** \brief  1E01C, CPU Data Protection Read Enable Register Set 3 */
#define CPU5_DPRE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_3*)0xF88DE01Cu)

/** \brief  1E060, CPU Data Protection Read Enable Register Set 4 */
#define CPU5_DPRE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_4*)0xF88DE060u)

/** \brief  1E064, CPU Data Protection Read Enable Register Set 5 */
#define CPU5_DPRE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPRE_5*)0xF88DE064u)

/** \brief  1E020, CPU Data Protection Write Enable Register Set 0 */
#define CPU5_DPWE_0 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_0*)0xF88DE020u)

/** \brief  1E024, CPU Data Protection Write Enable Register Set 1 */
#define CPU5_DPWE_1 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_1*)0xF88DE024u)

/** \brief  1E028, CPU Data Protection Write Enable Register Set 2 */
#define CPU5_DPWE_2 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_2*)0xF88DE028u)

/** \brief  1E02C, CPU Data Protection Write Enable Register Set 3 */
#define CPU5_DPWE_3 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_3*)0xF88DE02Cu)

/** \brief  1E070, CPU Data Protection Write Enable Register Set 4 */
#define CPU5_DPWE_4 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_4*)0xF88DE070u)

/** \brief  1E074, CPU Data Protection Write Enable Register Set 5 */
#define CPU5_DPWE_5 /*lint --e(923)*/ (*(volatile Ifx_CPU_DPWE_5*)0xF88DE074u)

/** \brief  19010, CPU Data Synchronous Trap Register */
#define CPU5_DSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_DSTR*)0xF88D9010u)

/** \brief  1FD08, CPU External Event Register */
#define CPU5_EXEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_EXEVT*)0xF88DFD08u)

/** \brief  1FE38, CPU Free CSA List Head Pointer */
#define CPU5_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_FCX*)0xF88DFE38u)

/** \brief  1100, CPU Flash Configuration Register 0 */
#define CPU5_FLASHCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON0*)0xF88C1100u)

/** \brief  1104, CPU Flash Configuration Register 1 */
#define CPU5_FLASHCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON1*)0xF88C1104u)

/** \brief  1108, CPU Flash Configuration Register 2 */
#define CPU5_FLASHCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON2*)0xF88C1108u)

/** \brief  110C, CPU Flash Configuration Register 3 */
#define CPU5_FLASHCON3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FLASHCON3*)0xF88C110Cu)

/** \brief  1A000, CPU Trap Control Register */
#define CPU5_FPU_TRAP_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_CON*)0xF88DA000u)

/** \brief  1A008, CPU Trapping Instruction Opcode Register */
#define CPU5_FPU_TRAP_OPC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_OPC*)0xF88DA008u)

/** \brief  1A004, CPU Trapping Instruction Program Counter Register */
#define CPU5_FPU_TRAP_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_PC*)0xF88DA004u)

/** \brief  1A010, CPU Trapping Instruction Operand Register */
#define CPU5_FPU_TRAP_SRC1 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC1*)0xF88DA010u)

/** \brief  1A014, CPU Trapping Instruction Operand Register */
#define CPU5_FPU_TRAP_SRC2 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC2*)0xF88DA014u)

/** \brief  1A018, CPU Trapping Instruction Operand Register */
#define CPU5_FPU_TRAP_SRC3 /*lint --e(923)*/ (*(volatile Ifx_CPU_FPU_TRAP_SRC3*)0xF88DA018u)

/** \brief  1FC08, CPU Instruction Count */
#define CPU5_ICNT /*lint --e(923)*/ (*(volatile Ifx_CPU_ICNT*)0xF88DFC08u)

/** \brief  1FE2C, CPU Interrupt Control Register */
#define CPU5_ICR /*lint --e(923)*/ (*(volatile Ifx_CPU_ICR*)0xF88DFE2Cu)

/** \brief  1FE28, CPU Interrupt Stack Pointer */
#define CPU5_ISP /*lint --e(923)*/ (*(volatile Ifx_CPU_ISP*)0xF88DFE28u)

/** \brief  D000, CPU Reset Register 0 */
#define CPU5_KRST0 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST0*)0xF88CD000u)

/** \brief  D004, CPU Reset Register 1 */
#define CPU5_KRST1 /*lint --e(923)*/ (*(volatile Ifx_CPU_KRST1*)0xF88CD004u)

/** \brief  D008, CPU Reset Status Clear Register */
#define CPU5_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_CPU_KRSTCLR*)0xF88CD008u)

/** \brief  1FE3C, CPU Free CSA List Limit Pointer */
#define CPU5_LCX /*lint --e(923)*/ (*(volatile Ifx_CPU_LCX*)0xF88DFE3Cu)

/** \brief  E110, CPU Safety Protection Region LPB Read Access Enable Register A */
#define CPU5_LPB_SPROT_ACCENA_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENA_R*)0xF88CE110u)

/** \brief  E114, CPU Safety Protection Region LPB Read Access Enable Register B */
#define CPU5_LPB_SPROT_ACCENB_R /*lint --e(923)*/ (*(volatile Ifx_CPU_LPB_SPROT_ACCENB_R*)0xF88CE114u)

/** \brief  1FC0C, CPU Multi-Count Register 1 */
#define CPU5_M1CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M1CNT*)0xF88DFC0Cu)

/** \brief  1FC10, CPU Multi-Count Register 2 */
#define CPU5_M2CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M2CNT*)0xF88DFC10u)

/** \brief  1FC14, CPU Multi-Count Register 3 */
#define CPU5_M3CNT /*lint --e(923)*/ (*(volatile Ifx_CPU_M3CNT*)0xF88DFC14u)

/** \brief  18, CPU Overlay Mask Register 0 */
#define CPU5_OMASK0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK0*)0xF88C0018u)

/** \brief  24, CPU Overlay Mask Register 1 */
#define CPU5_OMASK1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK1*)0xF88C0024u)

/** \brief  90, CPU Overlay Mask Register 10 */
#define CPU5_OMASK10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK10*)0xF88C0090u)

/** \brief  9C, CPU Overlay Mask Register 11 */
#define CPU5_OMASK11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK11*)0xF88C009Cu)

/** \brief  A8, CPU Overlay Mask Register 12 */
#define CPU5_OMASK12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK12*)0xF88C00A8u)

/** \brief  B4, CPU Overlay Mask Register 13 */
#define CPU5_OMASK13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK13*)0xF88C00B4u)

/** \brief  C0, CPU Overlay Mask Register 14 */
#define CPU5_OMASK14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK14*)0xF88C00C0u)

/** \brief  CC, CPU Overlay Mask Register 15 */
#define CPU5_OMASK15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK15*)0xF88C00CCu)

/** \brief  D8, CPU Overlay Mask Register 16 */
#define CPU5_OMASK16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK16*)0xF88C00D8u)

/** \brief  E4, CPU Overlay Mask Register 17 */
#define CPU5_OMASK17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK17*)0xF88C00E4u)

/** \brief  F0, CPU Overlay Mask Register 18 */
#define CPU5_OMASK18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK18*)0xF88C00F0u)

/** \brief  FC, CPU Overlay Mask Register 19 */
#define CPU5_OMASK19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK19*)0xF88C00FCu)

/** \brief  30, CPU Overlay Mask Register 2 */
#define CPU5_OMASK2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK2*)0xF88C0030u)

/** \brief  108, CPU Overlay Mask Register 20 */
#define CPU5_OMASK20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK20*)0xF88C0108u)

/** \brief  114, CPU Overlay Mask Register 21 */
#define CPU5_OMASK21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK21*)0xF88C0114u)

/** \brief  120, CPU Overlay Mask Register 22 */
#define CPU5_OMASK22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK22*)0xF88C0120u)

/** \brief  12C, CPU Overlay Mask Register 23 */
#define CPU5_OMASK23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK23*)0xF88C012Cu)

/** \brief  138, CPU Overlay Mask Register 24 */
#define CPU5_OMASK24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK24*)0xF88C0138u)

/** \brief  144, CPU Overlay Mask Register 25 */
#define CPU5_OMASK25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK25*)0xF88C0144u)

/** \brief  150, CPU Overlay Mask Register 26 */
#define CPU5_OMASK26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK26*)0xF88C0150u)

/** \brief  15C, CPU Overlay Mask Register 27 */
#define CPU5_OMASK27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK27*)0xF88C015Cu)

/** \brief  168, CPU Overlay Mask Register 28 */
#define CPU5_OMASK28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK28*)0xF88C0168u)

/** \brief  174, CPU Overlay Mask Register 29 */
#define CPU5_OMASK29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK29*)0xF88C0174u)

/** \brief  3C, CPU Overlay Mask Register 3 */
#define CPU5_OMASK3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK3*)0xF88C003Cu)

/** \brief  180, CPU Overlay Mask Register 30 */
#define CPU5_OMASK30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK30*)0xF88C0180u)

/** \brief  18C, CPU Overlay Mask Register 31 */
#define CPU5_OMASK31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK31*)0xF88C018Cu)

/** \brief  48, CPU Overlay Mask Register 4 */
#define CPU5_OMASK4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK4*)0xF88C0048u)

/** \brief  54, CPU Overlay Mask Register 5 */
#define CPU5_OMASK5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK5*)0xF88C0054u)

/** \brief  60, CPU Overlay Mask Register 6 */
#define CPU5_OMASK6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK6*)0xF88C0060u)

/** \brief  6C, CPU Overlay Mask Register 7 */
#define CPU5_OMASK7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK7*)0xF88C006Cu)

/** \brief  78, CPU Overlay Mask Register 8 */
#define CPU5_OMASK8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK8*)0xF88C0078u)

/** \brief  84, CPU Overlay Mask Register 9 */
#define CPU5_OMASK9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OMASK9*)0xF88C0084u)

/** \brief  0, CPU Overlay Range Select Register */
#define CPU5_OSEL /*lint --e(923)*/ (*(volatile Ifx_CPU_OSEL*)0xF88C0000u)

/** \brief  14, CPU Overlay Target Address Register 0 */
#define CPU5_OTAR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR0*)0xF88C0014u)

/** \brief  20, CPU Overlay Target Address Register 1 */
#define CPU5_OTAR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR1*)0xF88C0020u)

/** \brief  8C, CPU Overlay Target Address Register 10 */
#define CPU5_OTAR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR10*)0xF88C008Cu)

/** \brief  98, CPU Overlay Target Address Register 11 */
#define CPU5_OTAR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR11*)0xF88C0098u)

/** \brief  A4, CPU Overlay Target Address Register 12 */
#define CPU5_OTAR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR12*)0xF88C00A4u)

/** \brief  B0, CPU Overlay Target Address Register 13 */
#define CPU5_OTAR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR13*)0xF88C00B0u)

/** \brief  BC, CPU Overlay Target Address Register 14 */
#define CPU5_OTAR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR14*)0xF88C00BCu)

/** \brief  C8, CPU Overlay Target Address Register 15 */
#define CPU5_OTAR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR15*)0xF88C00C8u)

/** \brief  D4, CPU Overlay Target Address Register 16 */
#define CPU5_OTAR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR16*)0xF88C00D4u)

/** \brief  E0, CPU Overlay Target Address Register 17 */
#define CPU5_OTAR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR17*)0xF88C00E0u)

/** \brief  EC, CPU Overlay Target Address Register 18 */
#define CPU5_OTAR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR18*)0xF88C00ECu)

/** \brief  F8, CPU Overlay Target Address Register 19 */
#define CPU5_OTAR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR19*)0xF88C00F8u)

/** \brief  2C, CPU Overlay Target Address Register 2 */
#define CPU5_OTAR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR2*)0xF88C002Cu)

/** \brief  104, CPU Overlay Target Address Register 20 */
#define CPU5_OTAR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR20*)0xF88C0104u)

/** \brief  110, CPU Overlay Target Address Register 21 */
#define CPU5_OTAR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR21*)0xF88C0110u)

/** \brief  11C, CPU Overlay Target Address Register 22 */
#define CPU5_OTAR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR22*)0xF88C011Cu)

/** \brief  128, CPU Overlay Target Address Register 23 */
#define CPU5_OTAR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR23*)0xF88C0128u)

/** \brief  134, CPU Overlay Target Address Register 24 */
#define CPU5_OTAR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR24*)0xF88C0134u)

/** \brief  140, CPU Overlay Target Address Register 25 */
#define CPU5_OTAR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR25*)0xF88C0140u)

/** \brief  14C, CPU Overlay Target Address Register 26 */
#define CPU5_OTAR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR26*)0xF88C014Cu)

/** \brief  158, CPU Overlay Target Address Register 27 */
#define CPU5_OTAR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR27*)0xF88C0158u)

/** \brief  164, CPU Overlay Target Address Register 28 */
#define CPU5_OTAR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR28*)0xF88C0164u)

/** \brief  170, CPU Overlay Target Address Register 29 */
#define CPU5_OTAR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR29*)0xF88C0170u)

/** \brief  38, CPU Overlay Target Address Register 3 */
#define CPU5_OTAR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR3*)0xF88C0038u)

/** \brief  17C, CPU Overlay Target Address Register 30 */
#define CPU5_OTAR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR30*)0xF88C017Cu)

/** \brief  188, CPU Overlay Target Address Register 31 */
#define CPU5_OTAR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR31*)0xF88C0188u)

/** \brief  44, CPU Overlay Target Address Register 4 */
#define CPU5_OTAR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR4*)0xF88C0044u)

/** \brief  50, CPU Overlay Target Address Register 5 */
#define CPU5_OTAR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR5*)0xF88C0050u)

/** \brief  5C, CPU Overlay Target Address Register 6 */
#define CPU5_OTAR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR6*)0xF88C005Cu)

/** \brief  68, CPU Overlay Target Address Register 7 */
#define CPU5_OTAR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR7*)0xF88C0068u)

/** \brief  74, CPU Overlay Target Address Register 8 */
#define CPU5_OTAR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR8*)0xF88C0074u)

/** \brief  80, CPU Overlay Target Address Register 9 */
#define CPU5_OTAR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_OTAR9*)0xF88C0080u)

/** \brief  1FE08, CPU Program Counter */
#define CPU5_PC /*lint --e(923)*/ (*(volatile Ifx_CPU_PC*)0xF88DFE08u)

/** \brief  1920C, CPU Program Control 0 */
#define CPU5_PCON0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON0*)0xF88D920Cu)

/** \brief  19204, CPU Program Control 1 */
#define CPU5_PCON1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON1*)0xF88D9204u)

/** \brief  19208, CPU Program Control 2 */
#define CPU5_PCON2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PCON2*)0xF88D9208u)

/** \brief  1FE00, CPU Previous Context Information Register */
#define CPU5_PCXI /*lint --e(923)*/ (*(volatile Ifx_CPU_PCXI*)0xF88DFE00u)

/** \brief  19210, CPU Program Integrity Error Address Register */
#define CPU5_PIEAR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIEAR*)0xF88D9210u)

/** \brief  19214, CPU Program Integrity Error Trap Register */
#define CPU5_PIETR /*lint --e(923)*/ (*(volatile Ifx_CPU_PIETR*)0xF88D9214u)

/** \brief  18100, CPU Data Access CacheabilityRegister */
#define CPU5_PMA0 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA0*)0xF88D8100u)

/** \brief  18104, CPU Code Access CacheabilityRegister */
#define CPU5_PMA1 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA1*)0xF88D8104u)

/** \brief  18108, CPU Peripheral Space Identifier register */
#define CPU5_PMA2 /*lint --e(923)*/ (*(volatile Ifx_CPU_PMA2*)0xF88D8108u)

/** \brief  19200, CPU Program Synchronous Trap Register */
#define CPU5_PSTR /*lint --e(923)*/ (*(volatile Ifx_CPU_PSTR*)0xF88D9200u)

/** \brief  1FE04, CPU Program Status Word */
#define CPU5_PSW /*lint --e(923)*/ (*(volatile Ifx_CPU_PSW*)0xF88DFE04u)

/** \brief  10, CPU Redirected Address Base Register 0 */
#define CPU5_RABR0 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR0*)0xF88C0010u)

/** \brief  1C, CPU Redirected Address Base Register 1 */
#define CPU5_RABR1 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR1*)0xF88C001Cu)

/** \brief  88, CPU Redirected Address Base Register 10 */
#define CPU5_RABR10 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR10*)0xF88C0088u)

/** \brief  94, CPU Redirected Address Base Register 11 */
#define CPU5_RABR11 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR11*)0xF88C0094u)

/** \brief  A0, CPU Redirected Address Base Register 12 */
#define CPU5_RABR12 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR12*)0xF88C00A0u)

/** \brief  AC, CPU Redirected Address Base Register 13 */
#define CPU5_RABR13 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR13*)0xF88C00ACu)

/** \brief  B8, CPU Redirected Address Base Register 14 */
#define CPU5_RABR14 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR14*)0xF88C00B8u)

/** \brief  C4, CPU Redirected Address Base Register 15 */
#define CPU5_RABR15 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR15*)0xF88C00C4u)

/** \brief  D0, CPU Redirected Address Base Register 16 */
#define CPU5_RABR16 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR16*)0xF88C00D0u)

/** \brief  DC, CPU Redirected Address Base Register 17 */
#define CPU5_RABR17 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR17*)0xF88C00DCu)

/** \brief  E8, CPU Redirected Address Base Register 18 */
#define CPU5_RABR18 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR18*)0xF88C00E8u)

/** \brief  F4, CPU Redirected Address Base Register 19 */
#define CPU5_RABR19 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR19*)0xF88C00F4u)

/** \brief  28, CPU Redirected Address Base Register 2 */
#define CPU5_RABR2 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR2*)0xF88C0028u)

/** \brief  100, CPU Redirected Address Base Register 20 */
#define CPU5_RABR20 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR20*)0xF88C0100u)

/** \brief  10C, CPU Redirected Address Base Register 21 */
#define CPU5_RABR21 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR21*)0xF88C010Cu)

/** \brief  118, CPU Redirected Address Base Register 22 */
#define CPU5_RABR22 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR22*)0xF88C0118u)

/** \brief  124, CPU Redirected Address Base Register 23 */
#define CPU5_RABR23 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR23*)0xF88C0124u)

/** \brief  130, CPU Redirected Address Base Register 24 */
#define CPU5_RABR24 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR24*)0xF88C0130u)

/** \brief  13C, CPU Redirected Address Base Register 25 */
#define CPU5_RABR25 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR25*)0xF88C013Cu)

/** \brief  148, CPU Redirected Address Base Register 26 */
#define CPU5_RABR26 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR26*)0xF88C0148u)

/** \brief  154, CPU Redirected Address Base Register 27 */
#define CPU5_RABR27 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR27*)0xF88C0154u)

/** \brief  160, CPU Redirected Address Base Register 28 */
#define CPU5_RABR28 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR28*)0xF88C0160u)

/** \brief  16C, CPU Redirected Address Base Register 29 */
#define CPU5_RABR29 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR29*)0xF88C016Cu)

/** \brief  34, CPU Redirected Address Base Register 3 */
#define CPU5_RABR3 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR3*)0xF88C0034u)

/** \brief  178, CPU Redirected Address Base Register 30 */
#define CPU5_RABR30 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR30*)0xF88C0178u)

/** \brief  184, CPU Redirected Address Base Register 31 */
#define CPU5_RABR31 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR31*)0xF88C0184u)

/** \brief  40, CPU Redirected Address Base Register 4 */
#define CPU5_RABR4 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR4*)0xF88C0040u)

/** \brief  4C, CPU Redirected Address Base Register 5 */
#define CPU5_RABR5 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR5*)0xF88C004Cu)

/** \brief  58, CPU Redirected Address Base Register 6 */
#define CPU5_RABR6 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR6*)0xF88C0058u)

/** \brief  64, CPU Redirected Address Base Register 7 */
#define CPU5_RABR7 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR7*)0xF88C0064u)

/** \brief  70, CPU Redirected Address Base Register 8 */
#define CPU5_RABR8 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR8*)0xF88C0070u)

/** \brief  7C, CPU Redirected Address Base Register 9 */
#define CPU5_RABR9 /*lint --e(923)*/ (*(volatile Ifx_CPU_RABR9*)0xF88C007Cu)

/** \brief  11030, CPU SRI Error Generation Register */
#define CPU5_SEGEN /*lint --e(923)*/ (*(volatile Ifx_CPU_SEGEN*)0xF88D1030u)

/** \brief  E100, CPU Safety Protection Register Access Enable Register A */
#define CPU5_SFR_SPROT_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENA_W*)0xF88CE100u)

/** \brief  E104, CPU Safety Protection Region Access Enable Register B */
#define CPU5_SFR_SPROT_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SFR_SPROT_ACCENB_W*)0xF88CE104u)

/** \brief  1900C, CPU SIST Mode Access Control Register */
#define CPU5_SMACON /*lint --e(923)*/ (*(volatile Ifx_CPU_SMACON*)0xF88D900Cu)

/** \brief  E008, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU5_SPR_SPROT_RGN0_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF88CE008u)

/** \brief  E00C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU5_SPR_SPROT_RGN0_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF88CE00Cu)

/** \brief  E000, CPU Safety Protection SPR Region Lower Address Register */
#define CPU5_SPR_SPROT_RGN0_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF88CE000u)

/** \brief  E004, CPU Safety protection SPR Region Upper Address Register */
#define CPU5_SPR_SPROT_RGN0_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF88CE004u)

/** \brief  E018, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU5_SPR_SPROT_RGN1_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF88CE018u)

/** \brief  E01C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU5_SPR_SPROT_RGN1_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF88CE01Cu)

/** \brief  E010, CPU Safety Protection SPR Region Lower Address Register */
#define CPU5_SPR_SPROT_RGN1_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF88CE010u)

/** \brief  E014, CPU Safety protection SPR Region Upper Address Register */
#define CPU5_SPR_SPROT_RGN1_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF88CE014u)

/** \brief  E028, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU5_SPR_SPROT_RGN2_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF88CE028u)

/** \brief  E02C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU5_SPR_SPROT_RGN2_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF88CE02Cu)

/** \brief  E020, CPU Safety Protection SPR Region Lower Address Register */
#define CPU5_SPR_SPROT_RGN2_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF88CE020u)

/** \brief  E024, CPU Safety protection SPR Region Upper Address Register */
#define CPU5_SPR_SPROT_RGN2_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF88CE024u)

/** \brief  E038, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU5_SPR_SPROT_RGN3_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF88CE038u)

/** \brief  E03C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU5_SPR_SPROT_RGN3_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF88CE03Cu)

/** \brief  E030, CPU Safety Protection SPR Region Lower Address Register */
#define CPU5_SPR_SPROT_RGN3_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF88CE030u)

/** \brief  E034, CPU Safety protection SPR Region Upper Address Register */
#define CPU5_SPR_SPROT_RGN3_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF88CE034u)

/** \brief  E048, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU5_SPR_SPROT_RGN4_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF88CE048u)

/** \brief  E04C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU5_SPR_SPROT_RGN4_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF88CE04Cu)

/** \brief  E040, CPU Safety Protection SPR Region Lower Address Register */
#define CPU5_SPR_SPROT_RGN4_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF88CE040u)

/** \brief  E044, CPU Safety protection SPR Region Upper Address Register */
#define CPU5_SPR_SPROT_RGN4_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF88CE044u)

/** \brief  E058, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU5_SPR_SPROT_RGN5_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF88CE058u)

/** \brief  E05C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU5_SPR_SPROT_RGN5_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF88CE05Cu)

/** \brief  E050, CPU Safety Protection SPR Region Lower Address Register */
#define CPU5_SPR_SPROT_RGN5_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF88CE050u)

/** \brief  E054, CPU Safety protection SPR Region Upper Address Register */
#define CPU5_SPR_SPROT_RGN5_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF88CE054u)

/** \brief  E068, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU5_SPR_SPROT_RGN6_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF88CE068u)

/** \brief  E06C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU5_SPR_SPROT_RGN6_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF88CE06Cu)

/** \brief  E060, CPU Safety Protection SPR Region Lower Address Register */
#define CPU5_SPR_SPROT_RGN6_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF88CE060u)

/** \brief  E064, CPU Safety protection SPR Region Upper Address Register */
#define CPU5_SPR_SPROT_RGN6_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF88CE064u)

/** \brief  E078, CPU Safety Protection Region SPR Write Access Enable Register
 * A */
#define CPU5_SPR_SPROT_RGN7_ACCENA_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENA_W*)0xF88CE078u)

/** \brief  E07C, CPU Safety Protection Region SPR Write Access Enable Register
 * B */
#define CPU5_SPR_SPROT_RGN7_ACCENB_W /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_ACCENB_W*)0xF88CE07Cu)

/** \brief  E070, CPU Safety Protection SPR Region Lower Address Register */
#define CPU5_SPR_SPROT_RGN7_LA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_LA*)0xF88CE070u)

/** \brief  E074, CPU Safety protection SPR Region Upper Address Register */
#define CPU5_SPR_SPROT_RGN7_UA /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGN_UA*)0xF88CE074u)

/** \brief  E088, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU5_SPR_SPROT_RGNACCENA0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA0_R*)0xF88CE088u)

/** \brief  E098, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU5_SPR_SPROT_RGNACCENA1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA1_R*)0xF88CE098u)

/** \brief  E0A8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU5_SPR_SPROT_RGNACCENA2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA2_R*)0xF88CE0A8u)

/** \brief  E0B8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU5_SPR_SPROT_RGNACCENA3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA3_R*)0xF88CE0B8u)

/** \brief  E0C8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU5_SPR_SPROT_RGNACCENA4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA4_R*)0xF88CE0C8u)

/** \brief  E0D8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU5_SPR_SPROT_RGNACCENA5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA5_R*)0xF88CE0D8u)

/** \brief  E0E8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU5_SPR_SPROT_RGNACCENA6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA6_R*)0xF88CE0E8u)

/** \brief  E0F8, CPU Safety Protection Region SPR Read Access Enable Register A */
#define CPU5_SPR_SPROT_RGNACCENA7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENA7_R*)0xF88CE0F8u)

/** \brief  E08C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU5_SPR_SPROT_RGNACCENB0_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB0_R*)0xF88CE08Cu)

/** \brief  E09C, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU5_SPR_SPROT_RGNACCENB1_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB1_R*)0xF88CE09Cu)

/** \brief  E0AC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU5_SPR_SPROT_RGNACCENB2_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB2_R*)0xF88CE0ACu)

/** \brief  E0BC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU5_SPR_SPROT_RGNACCENB3_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB3_R*)0xF88CE0BCu)

/** \brief  E0CC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU5_SPR_SPROT_RGNACCENB4_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB4_R*)0xF88CE0CCu)

/** \brief  E0DC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU5_SPR_SPROT_RGNACCENB5_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB5_R*)0xF88CE0DCu)

/** \brief  E0EC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU5_SPR_SPROT_RGNACCENB6_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB6_R*)0xF88CE0ECu)

/** \brief  E0FC, CPU Safety Protection Region SPR Read Access Enable Register B */
#define CPU5_SPR_SPROT_RGNACCENB7_R /*lint --e(923)*/ (*(volatile Ifx_CPU_SPR_SPROT_RGNACCENB7_R*)0xF88CE0FCu)

/** \brief  1FD10, CPU Software Debug Event */
#define CPU5_SWEVT /*lint --e(923)*/ (*(volatile Ifx_CPU_SWEVT*)0xF88DFD10u)

/** \brief  1FE14, CPU System Configuration Register */
#define CPU5_SYSCON /*lint --e(923)*/ (*(volatile Ifx_CPU_SYSCON*)0xF88DFE14u)

/** \brief  18004, CPU Task Address Space Identifier Register */
#define CPU5_TASK_ASI /*lint --e(923)*/ (*(volatile Ifx_CPU_TASK_ASI*)0xF88D8004u)

/** \brief  1E400, CPU Temporal Protection System Control Register */
#define CPU5_TPS_CON /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_CON*)0xF88DE400u)

/** \brief  1E448, CPU Exception Timer Class Enable Register */
#define CPU5_TPS_EXTIM_CLASS_EN /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CLASS_EN*)0xF88DE448u)

/** \brief  1E444, CPU Exception Timer Current Value */
#define CPU5_TPS_EXTIM_CVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_CVAL*)0xF88DE444u)

/** \brief  1E450, CPU Exception Timer Status Register */
#define CPU5_TPS_EXTIM_FCX /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_FCX*)0xF88DE450u)

/** \brief  1E440, CPU Exception Timer Load Value */
#define CPU5_TPS_EXTIM_LVAL /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_LVAL*)0xF88DE440u)

/** \brief  1E44C, CPU Exception Timer Status Register */
#define CPU5_TPS_EXTIM_STAT /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_EXTIM_STAT*)0xF88DE44Cu)

/** \brief  1E404, CPU Temporal Protection System Timer Register */
#define CPU5_TPS_TIMER0 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF88DE404u)

/** \brief  1E408, CPU Temporal Protection System Timer Register */
#define CPU5_TPS_TIMER1 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF88DE408u)

/** \brief  1E40C, CPU Temporal Protection System Timer Register */
#define CPU5_TPS_TIMER2 /*lint --e(923)*/ (*(volatile Ifx_CPU_TPS_TIMER*)0xF88DE40Cu)

/** \brief  1F004, CPU Trigger Address */
#define CPU5_TR0_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF88DF004u)

/** \brief  1F000, CPU Trigger Event */
#define CPU5_TR0_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF88DF000u)

/** \brief  1F00C, CPU Trigger Address */
#define CPU5_TR1_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF88DF00Cu)

/** \brief  1F008, CPU Trigger Event */
#define CPU5_TR1_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF88DF008u)

/** \brief  1F014, CPU Trigger Address */
#define CPU5_TR2_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF88DF014u)

/** \brief  1F010, CPU Trigger Event */
#define CPU5_TR2_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF88DF010u)

/** \brief  1F01C, CPU Trigger Address */
#define CPU5_TR3_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF88DF01Cu)

/** \brief  1F018, CPU Trigger Event */
#define CPU5_TR3_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF88DF018u)

/** \brief  1F024, CPU Trigger Address */
#define CPU5_TR4_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF88DF024u)

/** \brief  1F020, CPU Trigger Event */
#define CPU5_TR4_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF88DF020u)

/** \brief  1F02C, CPU Trigger Address */
#define CPU5_TR5_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF88DF02Cu)

/** \brief  1F028, CPU Trigger Event */
#define CPU5_TR5_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF88DF028u)

/** \brief  1F034, CPU Trigger Address */
#define CPU5_TR6_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF88DF034u)

/** \brief  1F030, CPU Trigger Event */
#define CPU5_TR6_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF88DF030u)

/** \brief  1F03C, CPU Trigger Address */
#define CPU5_TR7_ADR /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_ADR*)0xF88DF03Cu)

/** \brief  1F038, CPU Trigger Event */
#define CPU5_TR7_EVT /*lint --e(923)*/ (*(volatile Ifx_CPU_TR_EVT*)0xF88DF038u)

/** \brief  1FD30, CPU Trigger Address x */
#define CPU5_TRIG_ACC /*lint --e(923)*/ (*(volatile Ifx_CPU_TRIG_ACC*)0xF88DFD30u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_Cpu
 * \{  */

/** \brief  E208, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register A */
#define CPU_DLMU_SPROT_RGN0_ACCENA_W 0xE208

/** \brief  E20C, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register B */
#define CPU_DLMU_SPROT_RGN0_ACCENB_W 0xE20C

/** \brief  E200, , type: Ifx_CPU_DLMU_SPROT_RGN_LA, CPU Safety Protection DLMU
 * Region Lower Address Register */
#define CPU_DLMU_SPROT_RGN0_LA 0xE200

/** \brief  E204, , type: Ifx_CPU_DLMU_SPROT_RGN_UA, CPU Safety protection DLMU
 * Region Upper Address Register */
#define CPU_DLMU_SPROT_RGN0_UA 0xE204

/** \brief  E218, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register A */
#define CPU_DLMU_SPROT_RGN1_ACCENA_W 0xE218

/** \brief  E21C, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register B */
#define CPU_DLMU_SPROT_RGN1_ACCENB_W 0xE21C

/** \brief  E210, , type: Ifx_CPU_DLMU_SPROT_RGN_LA, CPU Safety Protection DLMU
 * Region Lower Address Register */
#define CPU_DLMU_SPROT_RGN1_LA 0xE210

/** \brief  E214, , type: Ifx_CPU_DLMU_SPROT_RGN_UA, CPU Safety protection DLMU
 * Region Upper Address Register */
#define CPU_DLMU_SPROT_RGN1_UA 0xE214

/** \brief  E228, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register A */
#define CPU_DLMU_SPROT_RGN2_ACCENA_W 0xE228

/** \brief  E22C, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register B */
#define CPU_DLMU_SPROT_RGN2_ACCENB_W 0xE22C

/** \brief  E220, , type: Ifx_CPU_DLMU_SPROT_RGN_LA, CPU Safety Protection DLMU
 * Region Lower Address Register */
#define CPU_DLMU_SPROT_RGN2_LA 0xE220

/** \brief  E224, , type: Ifx_CPU_DLMU_SPROT_RGN_UA, CPU Safety protection DLMU
 * Region Upper Address Register */
#define CPU_DLMU_SPROT_RGN2_UA 0xE224

/** \brief  E238, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register A */
#define CPU_DLMU_SPROT_RGN3_ACCENA_W 0xE238

/** \brief  E23C, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register B */
#define CPU_DLMU_SPROT_RGN3_ACCENB_W 0xE23C

/** \brief  E230, , type: Ifx_CPU_DLMU_SPROT_RGN_LA, CPU Safety Protection DLMU
 * Region Lower Address Register */
#define CPU_DLMU_SPROT_RGN3_LA 0xE230

/** \brief  E234, , type: Ifx_CPU_DLMU_SPROT_RGN_UA, CPU Safety protection DLMU
 * Region Upper Address Register */
#define CPU_DLMU_SPROT_RGN3_UA 0xE234

/** \brief  E248, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register A */
#define CPU_DLMU_SPROT_RGN4_ACCENA_W 0xE248

/** \brief  E24C, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register B */
#define CPU_DLMU_SPROT_RGN4_ACCENB_W 0xE24C

/** \brief  E240, , type: Ifx_CPU_DLMU_SPROT_RGN_LA, CPU Safety Protection DLMU
 * Region Lower Address Register */
#define CPU_DLMU_SPROT_RGN4_LA 0xE240

/** \brief  E244, , type: Ifx_CPU_DLMU_SPROT_RGN_UA, CPU Safety protection DLMU
 * Region Upper Address Register */
#define CPU_DLMU_SPROT_RGN4_UA 0xE244

/** \brief  E258, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register A */
#define CPU_DLMU_SPROT_RGN5_ACCENA_W 0xE258

/** \brief  E25C, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register B */
#define CPU_DLMU_SPROT_RGN5_ACCENB_W 0xE25C

/** \brief  E250, , type: Ifx_CPU_DLMU_SPROT_RGN_LA, CPU Safety Protection DLMU
 * Region Lower Address Register */
#define CPU_DLMU_SPROT_RGN5_LA 0xE250

/** \brief  E254, , type: Ifx_CPU_DLMU_SPROT_RGN_UA, CPU Safety protection DLMU
 * Region Upper Address Register */
#define CPU_DLMU_SPROT_RGN5_UA 0xE254

/** \brief  E268, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register A */
#define CPU_DLMU_SPROT_RGN6_ACCENA_W 0xE268

/** \brief  E26C, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register B */
#define CPU_DLMU_SPROT_RGN6_ACCENB_W 0xE26C

/** \brief  E260, , type: Ifx_CPU_DLMU_SPROT_RGN_LA, CPU Safety Protection DLMU
 * Region Lower Address Register */
#define CPU_DLMU_SPROT_RGN6_LA 0xE260

/** \brief  E264, , type: Ifx_CPU_DLMU_SPROT_RGN_UA, CPU Safety protection DLMU
 * Region Upper Address Register */
#define CPU_DLMU_SPROT_RGN6_UA 0xE264

/** \brief  E278, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register A */
#define CPU_DLMU_SPROT_RGN7_ACCENA_W 0xE278

/** \brief  E27C, , type: Ifx_CPU_DLMU_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region DLMU Write Access Enable Register B */
#define CPU_DLMU_SPROT_RGN7_ACCENB_W 0xE27C

/** \brief  E270, , type: Ifx_CPU_DLMU_SPROT_RGN_LA, CPU Safety Protection DLMU
 * Region Lower Address Register */
#define CPU_DLMU_SPROT_RGN7_LA 0xE270

/** \brief  E274, , type: Ifx_CPU_DLMU_SPROT_RGN_UA, CPU Safety protection DLMU
 * Region Upper Address Register */
#define CPU_DLMU_SPROT_RGN7_UA 0xE274

/** \brief  E288, , type: Ifx_CPU_DLMU_SPROT_RGNACCENA0_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register A */
#define CPU_DLMU_SPROT_RGNACCENA0_R 0xE288

/** \brief  E298, , type: Ifx_CPU_DLMU_SPROT_RGNACCENA1_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register A */
#define CPU_DLMU_SPROT_RGNACCENA1_R 0xE298

/** \brief  E2A8, , type: Ifx_CPU_DLMU_SPROT_RGNACCENA2_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register A */
#define CPU_DLMU_SPROT_RGNACCENA2_R 0xE2A8

/** \brief  E2B8, , type: Ifx_CPU_DLMU_SPROT_RGNACCENA3_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register A */
#define CPU_DLMU_SPROT_RGNACCENA3_R 0xE2B8

/** \brief  E2C8, , type: Ifx_CPU_DLMU_SPROT_RGNACCENA4_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register A */
#define CPU_DLMU_SPROT_RGNACCENA4_R 0xE2C8

/** \brief  E2D8, , type: Ifx_CPU_DLMU_SPROT_RGNACCENA5_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register A */
#define CPU_DLMU_SPROT_RGNACCENA5_R 0xE2D8

/** \brief  E2E8, , type: Ifx_CPU_DLMU_SPROT_RGNACCENA6_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register A */
#define CPU_DLMU_SPROT_RGNACCENA6_R 0xE2E8

/** \brief  E2F8, , type: Ifx_CPU_DLMU_SPROT_RGNACCENA7_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register A */
#define CPU_DLMU_SPROT_RGNACCENA7_R 0xE2F8

/** \brief  E28C, , type: Ifx_CPU_DLMU_SPROT_RGNACCENB0_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register B */
#define CPU_DLMU_SPROT_RGNACCENB0_R 0xE28C

/** \brief  E29C, , type: Ifx_CPU_DLMU_SPROT_RGNACCENB1_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register B */
#define CPU_DLMU_SPROT_RGNACCENB1_R 0xE29C

/** \brief  E2AC, , type: Ifx_CPU_DLMU_SPROT_RGNACCENB2_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register B */
#define CPU_DLMU_SPROT_RGNACCENB2_R 0xE2AC

/** \brief  E2BC, , type: Ifx_CPU_DLMU_SPROT_RGNACCENB3_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register B */
#define CPU_DLMU_SPROT_RGNACCENB3_R 0xE2BC

/** \brief  E2CC, , type: Ifx_CPU_DLMU_SPROT_RGNACCENB4_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register B */
#define CPU_DLMU_SPROT_RGNACCENB4_R 0xE2CC

/** \brief  E2DC, , type: Ifx_CPU_DLMU_SPROT_RGNACCENB5_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register B */
#define CPU_DLMU_SPROT_RGNACCENB5_R 0xE2DC

/** \brief  E2EC, , type: Ifx_CPU_DLMU_SPROT_RGNACCENB6_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register B */
#define CPU_DLMU_SPROT_RGNACCENB6_R 0xE2EC

/** \brief  E2FC, , type: Ifx_CPU_DLMU_SPROT_RGNACCENB7_R, CPU Safety Protection
 * Region DLMU Read Access Enable Register B */
#define CPU_DLMU_SPROT_RGNACCENB7_R 0xE2FC

/** \brief  E100, , type: Ifx_CPU_SFR_SPROT_ACCENA_W, CPU Safety Protection
 * Register Access Enable Register A */
#define CPU_SFR_SPROT_ACCENA_W 0xE100

/** \brief  E104, , type: Ifx_CPU_SFR_SPROT_ACCENB_W, CPU Safety Protection
 * Region Access Enable Register B */
#define CPU_SFR_SPROT_ACCENB_W 0xE104

/** \brief  1900C, , type: Ifx_CPU_SMACON, CPU SIST Mode Access Control Register */
#define CPU_SMACON 0x1900C

/** \brief  E008, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region SPR Write Access Enable Register A */
#define CPU_SPR_SPROT_RGN0_ACCENA_W 0xE008

/** \brief  E00C, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region SPR Write Access Enable Register B */
#define CPU_SPR_SPROT_RGN0_ACCENB_W 0xE00C

/** \brief  E000, , type: Ifx_CPU_SPR_SPROT_RGN_LA, CPU Safety Protection SPR
 * Region Lower Address Register */
#define CPU_SPR_SPROT_RGN0_LA 0xE000

/** \brief  E004, , type: Ifx_CPU_SPR_SPROT_RGN_UA, CPU Safety protection SPR
 * Region Upper Address Register */
#define CPU_SPR_SPROT_RGN0_UA 0xE004

/** \brief  E018, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region SPR Write Access Enable Register A */
#define CPU_SPR_SPROT_RGN1_ACCENA_W 0xE018

/** \brief  E01C, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region SPR Write Access Enable Register B */
#define CPU_SPR_SPROT_RGN1_ACCENB_W 0xE01C

/** \brief  E010, , type: Ifx_CPU_SPR_SPROT_RGN_LA, CPU Safety Protection SPR
 * Region Lower Address Register */
#define CPU_SPR_SPROT_RGN1_LA 0xE010

/** \brief  E014, , type: Ifx_CPU_SPR_SPROT_RGN_UA, CPU Safety protection SPR
 * Region Upper Address Register */
#define CPU_SPR_SPROT_RGN1_UA 0xE014

/** \brief  E028, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region SPR Write Access Enable Register A */
#define CPU_SPR_SPROT_RGN2_ACCENA_W 0xE028

/** \brief  E02C, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region SPR Write Access Enable Register B */
#define CPU_SPR_SPROT_RGN2_ACCENB_W 0xE02C

/** \brief  E020, , type: Ifx_CPU_SPR_SPROT_RGN_LA, CPU Safety Protection SPR
 * Region Lower Address Register */
#define CPU_SPR_SPROT_RGN2_LA 0xE020

/** \brief  E024, , type: Ifx_CPU_SPR_SPROT_RGN_UA, CPU Safety protection SPR
 * Region Upper Address Register */
#define CPU_SPR_SPROT_RGN2_UA 0xE024

/** \brief  E038, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region SPR Write Access Enable Register A */
#define CPU_SPR_SPROT_RGN3_ACCENA_W 0xE038

/** \brief  E03C, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region SPR Write Access Enable Register B */
#define CPU_SPR_SPROT_RGN3_ACCENB_W 0xE03C

/** \brief  E030, , type: Ifx_CPU_SPR_SPROT_RGN_LA, CPU Safety Protection SPR
 * Region Lower Address Register */
#define CPU_SPR_SPROT_RGN3_LA 0xE030

/** \brief  E034, , type: Ifx_CPU_SPR_SPROT_RGN_UA, CPU Safety protection SPR
 * Region Upper Address Register */
#define CPU_SPR_SPROT_RGN3_UA 0xE034

/** \brief  E048, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region SPR Write Access Enable Register A */
#define CPU_SPR_SPROT_RGN4_ACCENA_W 0xE048

/** \brief  E04C, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region SPR Write Access Enable Register B */
#define CPU_SPR_SPROT_RGN4_ACCENB_W 0xE04C

/** \brief  E040, , type: Ifx_CPU_SPR_SPROT_RGN_LA, CPU Safety Protection SPR
 * Region Lower Address Register */
#define CPU_SPR_SPROT_RGN4_LA 0xE040

/** \brief  E044, , type: Ifx_CPU_SPR_SPROT_RGN_UA, CPU Safety protection SPR
 * Region Upper Address Register */
#define CPU_SPR_SPROT_RGN4_UA 0xE044

/** \brief  E058, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region SPR Write Access Enable Register A */
#define CPU_SPR_SPROT_RGN5_ACCENA_W 0xE058

/** \brief  E05C, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region SPR Write Access Enable Register B */
#define CPU_SPR_SPROT_RGN5_ACCENB_W 0xE05C

/** \brief  E050, , type: Ifx_CPU_SPR_SPROT_RGN_LA, CPU Safety Protection SPR
 * Region Lower Address Register */
#define CPU_SPR_SPROT_RGN5_LA 0xE050

/** \brief  E054, , type: Ifx_CPU_SPR_SPROT_RGN_UA, CPU Safety protection SPR
 * Region Upper Address Register */
#define CPU_SPR_SPROT_RGN5_UA 0xE054

/** \brief  E068, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region SPR Write Access Enable Register A */
#define CPU_SPR_SPROT_RGN6_ACCENA_W 0xE068

/** \brief  E06C, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region SPR Write Access Enable Register B */
#define CPU_SPR_SPROT_RGN6_ACCENB_W 0xE06C

/** \brief  E060, , type: Ifx_CPU_SPR_SPROT_RGN_LA, CPU Safety Protection SPR
 * Region Lower Address Register */
#define CPU_SPR_SPROT_RGN6_LA 0xE060

/** \brief  E064, , type: Ifx_CPU_SPR_SPROT_RGN_UA, CPU Safety protection SPR
 * Region Upper Address Register */
#define CPU_SPR_SPROT_RGN6_UA 0xE064

/** \brief  E078, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENA_W, CPU Safety Protection
 * Region SPR Write Access Enable Register A */
#define CPU_SPR_SPROT_RGN7_ACCENA_W 0xE078

/** \brief  E07C, , type: Ifx_CPU_SPR_SPROT_RGN_ACCENB_W, CPU Safety Protection
 * Region SPR Write Access Enable Register B */
#define CPU_SPR_SPROT_RGN7_ACCENB_W 0xE07C

/** \brief  E070, , type: Ifx_CPU_SPR_SPROT_RGN_LA, CPU Safety Protection SPR
 * Region Lower Address Register */
#define CPU_SPR_SPROT_RGN7_LA 0xE070

/** \brief  E074, , type: Ifx_CPU_SPR_SPROT_RGN_UA, CPU Safety protection SPR
 * Region Upper Address Register */
#define CPU_SPR_SPROT_RGN7_UA 0xE074

/** \brief  E088, , type: Ifx_CPU_SPR_SPROT_RGNACCENA0_R, CPU Safety Protection
 * Region SPR Read Access Enable Register A */
#define CPU_SPR_SPROT_RGNACCENA0_R 0xE088

/** \brief  E098, , type: Ifx_CPU_SPR_SPROT_RGNACCENA1_R, CPU Safety Protection
 * Region SPR Read Access Enable Register A */
#define CPU_SPR_SPROT_RGNACCENA1_R 0xE098

/** \brief  E0A8, , type: Ifx_CPU_SPR_SPROT_RGNACCENA2_R, CPU Safety Protection
 * Region SPR Read Access Enable Register A */
#define CPU_SPR_SPROT_RGNACCENA2_R 0xE0A8

/** \brief  E0B8, , type: Ifx_CPU_SPR_SPROT_RGNACCENA3_R, CPU Safety Protection
 * Region SPR Read Access Enable Register A */
#define CPU_SPR_SPROT_RGNACCENA3_R 0xE0B8

/** \brief  E0C8, , type: Ifx_CPU_SPR_SPROT_RGNACCENA4_R, CPU Safety Protection
 * Region SPR Read Access Enable Register A */
#define CPU_SPR_SPROT_RGNACCENA4_R 0xE0C8

/** \brief  E0D8, , type: Ifx_CPU_SPR_SPROT_RGNACCENA5_R, CPU Safety Protection
 * Region SPR Read Access Enable Register A */
#define CPU_SPR_SPROT_RGNACCENA5_R 0xE0D8

/** \brief  E0E8, , type: Ifx_CPU_SPR_SPROT_RGNACCENA6_R, CPU Safety Protection
 * Region SPR Read Access Enable Register A */
#define CPU_SPR_SPROT_RGNACCENA6_R 0xE0E8

/** \brief  E0F8, , type: Ifx_CPU_SPR_SPROT_RGNACCENA7_R, CPU Safety Protection
 * Region SPR Read Access Enable Register A */
#define CPU_SPR_SPROT_RGNACCENA7_R 0xE0F8

/** \brief  E08C, , type: Ifx_CPU_SPR_SPROT_RGNACCENB0_R, CPU Safety Protection
 * Region SPR Read Access Enable Register B */
#define CPU_SPR_SPROT_RGNACCENB0_R 0xE08C

/** \brief  E09C, , type: Ifx_CPU_SPR_SPROT_RGNACCENB1_R, CPU Safety Protection
 * Region SPR Read Access Enable Register B */
#define CPU_SPR_SPROT_RGNACCENB1_R 0xE09C

/** \brief  E0AC, , type: Ifx_CPU_SPR_SPROT_RGNACCENB2_R, CPU Safety Protection
 * Region SPR Read Access Enable Register B */
#define CPU_SPR_SPROT_RGNACCENB2_R 0xE0AC

/** \brief  E0BC, , type: Ifx_CPU_SPR_SPROT_RGNACCENB3_R, CPU Safety Protection
 * Region SPR Read Access Enable Register B */
#define CPU_SPR_SPROT_RGNACCENB3_R 0xE0BC

/** \brief  E0CC, , type: Ifx_CPU_SPR_SPROT_RGNACCENB4_R, CPU Safety Protection
 * Region SPR Read Access Enable Register B */
#define CPU_SPR_SPROT_RGNACCENB4_R 0xE0CC

/** \brief  E0DC, , type: Ifx_CPU_SPR_SPROT_RGNACCENB5_R, CPU Safety Protection
 * Region SPR Read Access Enable Register B */
#define CPU_SPR_SPROT_RGNACCENB5_R 0xE0DC

/** \brief  E0EC, , type: Ifx_CPU_SPR_SPROT_RGNACCENB6_R, CPU Safety Protection
 * Region SPR Read Access Enable Register B */
#define CPU_SPR_SPROT_RGNACCENB6_R 0xE0EC

/** \brief  E0FC, , type: Ifx_CPU_SPR_SPROT_RGNACCENB7_R, CPU Safety Protection
 * Region SPR Read Access Enable Register B */
#define CPU_SPR_SPROT_RGNACCENB7_R 0xE0FC

/** \brief  E110, , type: Ifx_CPU_LPB_SPROT_ACCENA_R, CPU Safety Protection
 * Region LPB Read Access Enable Register A */
#define CPU_LPB_SPROT_ACCENA_R 0xE110

/** \brief  E114, , type: Ifx_CPU_LPB_SPROT_ACCENB_R, CPU Safety Protection
 * Region LPB Read Access Enable Register B */
#define CPU_LPB_SPROT_ACCENB_R 0xE114

/******************************************************************************/
/** \addtogroup IfxLld_Cpu_Cfg_Cpu
 * \{  */

/** \brief  FF80, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A0            0xFF80

/** \brief  FF84, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A1            0xFF84

/** \brief  FFA8, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A10           0xFFA8

/** \brief  FFAC, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A11           0xFFAC

/** \brief  FFB0, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A12           0xFFB0

/** \brief  FFB4, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A13           0xFFB4

/** \brief  FFB8, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A14           0xFFB8

/** \brief  FFBC, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A15           0xFFBC

/** \brief  FF88, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A2            0xFF88

/** \brief  FF8C, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A3            0xFF8C

/** \brief  FF90, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A4            0xFF90

/** \brief  FF94, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A5            0xFF94

/** \brief  FF98, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A6            0xFF98

/** \brief  FF9C, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A7            0xFF9C

/** \brief  FFA0, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A8            0xFFA0

/** \brief  FFA4, , type: Ifx_CPU_A, Address General Purpose Register */
#define CPU_A9            0xFFA4

/** \brief  FE20, , type: Ifx_CPU_BIV, Base Interrupt Vector Table Pointer */
#define CPU_BIV           0xFE20

/** \brief  FE24, , type: Ifx_CPU_BTV, Base Trap Vector Table Pointer */
#define CPU_BTV           0xFE24

/** \brief  FC04, , type: Ifx_CPU_CCNT, CPU Clock Cycle Count */
#define CPU_CCNT          0xFC04

/** \brief  FC00, , type: Ifx_CPU_CCTRL, Counter Control */
#define CPU_CCTRL         0xFC00

/** \brief  9400, , type: Ifx_CPU_COMPAT, Compatibility Control Register */
#define CPU_COMPAT        0x9400

/** \brief  FE1C, , type: Ifx_CPU_CORE_ID, CPU Core Identification Register */
#define CPU_CORE_ID       0xFE1C

/** \brief  D000, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR0_L        0xD000

/** \brief  D004, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR0_U        0xD004

/** \brief  D008, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR1_L        0xD008

/** \brief  D00C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR1_U        0xD00C

/** \brief  D010, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR2_L        0xD010

/** \brief  D014, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR2_U        0xD014

/** \brief  D018, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR3_L        0xD018

/** \brief  D01C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR3_U        0xD01C

/** \brief  D020, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR4_L        0xD020

/** \brief  D024, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR4_U        0xD024

/** \brief  D028, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR5_L        0xD028

/** \brief  D02C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR5_U        0xD02C

/** \brief  D030, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR6_L        0xD030

/** \brief  D034, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR6_U        0xD034

/** \brief  D038, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR7_L        0xD038

/** \brief  D03C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR7_U        0xD03C

/** \brief  FE18, , type: Ifx_CPU_CPU_ID, CPU Identification Register TC1.6P */
#define CPU_CPU_ID        0xFE18

/** \brief  1E000, , type: Ifx_CPU_CPXE_0, CPU Code Protection Execute Enable
 * Register Set 0 */
#define CPU_CPXE_0 0xE000

/** \brief  1E004, , type: Ifx_CPU_CPXE_1, CPU Code Protection Execute Enable
 * Register Set 1 */
#define CPU_CPXE_1 0xE004

/** \brief  1E008, , type: Ifx_CPU_CPXE_2, CPU Code Protection Execute Enable
 * Register Set 2 */
#define CPU_CPXE_2 0xE008

/** \brief  1E00C, , type: Ifx_CPU_CPXE_3, CPU Code Protection Execute Enable
 * Register Set 3 */
#define CPU_CPXE_3 0xE00C

/** \brief  1E050, , type: Ifx_CPU_CPXE_4, CPU Code Protection Execute Enable
 * Register Set 4 */
#define CPU_CPXE_4 0xE050

/** \brief  1E054, , type: Ifx_CPU_CPXE_5, CPU Code Protection Execute Enable
 * Register Set 5 */
#define CPU_CPXE_5 0xE054

/** \brief  1FD0C, , type: Ifx_CPU_CREVT, CPU Core Register Access Event */
#define CPU_CREVT 0xFD0C

/** \brief  1FE50, , type: Ifx_CPU_CUS_ID, CPU Customer ID register */
#define CPU_CUS_ID 0xFE50

/** \brief  FF00, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D0            0xFF00

/** \brief  FF04, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D1            0xFF04

/** \brief  FF28, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D10           0xFF28

/** \brief  FF2C, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D11           0xFF2C

/** \brief  FF30, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D12           0xFF30

/** \brief  FF34, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D13           0xFF34

/** \brief  FF38, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D14           0xFF38

/** \brief  FF3C, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D15           0xFF3C

/** \brief  FF08, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D2            0xFF08

/** \brief  FF0C, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D3            0xFF0C

/** \brief  FF10, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D4            0xFF10

/** \brief  FF14, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D5            0xFF14

/** \brief  FF18, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D6            0xFF18

/** \brief  FF1C, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D7            0xFF1C

/** \brief  FF20, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D8            0xFF20

/** \brief  FF24, , type: Ifx_CPU_D, Data General Purpose Register */
#define CPU_D9            0xFF24

/** \brief  9018, , type: Ifx_CPU_DATR, Data Asynchronous Trap Register */
#define CPU_DATR          0x9018

/** \brief  FD00, , type: Ifx_CPU_DBGSR, Debug Status Register */
#define CPU_DBGSR         0xFD00

/** \brief  FD48, , type: Ifx_CPU_DBGTCR, Debug Trap Control Register */
#define CPU_DBGTCR        0xFD48

/** \brief  9040, , type: Ifx_CPU_DCON0, Data Memory Control Register */
#define CPU_DCON0         0x9040

/** \brief  9000, , type: Ifx_CPU_DCON2, Data Control Register 2 */
#define CPU_DCON2         0x9000

/** \brief  FD44, , type: Ifx_CPU_DCX, CPU Debug Context Save Area Pointer */
#define CPU_DCX           0xFD44

/** \brief  901C, , type: Ifx_CPU_DEADD, Data Error Address Register */
#define CPU_DEADD         0x901C

/** \brief  9020, , type: Ifx_CPU_DIEAR, Data Integrity Error Address Register */
#define CPU_DIEAR         0x9020

/** \brief  9024, , type: Ifx_CPU_DIETR, Data Integrity Error Trap Register */
#define CPU_DIETR         0x9024

/** \brief  FD40, , type: Ifx_CPU_DMS, CPU Debug Monitor Start Address */
#define CPU_DMS           0xFD40

/** \brief  1C000, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR0_L 0xC000

/** \brief  1C004, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR0_U 0xC004

/** \brief  1C050, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR10_L 0xC050

/** \brief  1C054, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR10_U 0xC054

/** \brief  1C058, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR11_L 0xC058

/** \brief  1C05C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR11_U 0xC05C

/** \brief  1C060, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR12_L 0xC060

/** \brief  1C064, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR12_U 0xC064

/** \brief  1C068, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR13_L 0xC068

/** \brief  1C06C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR13_U 0xC06C

/** \brief  1C070, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR14_L 0xC070

/** \brief  1C074, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR14_U 0xC074

/** \brief  1C078, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR15_L 0xC078

/** \brief  1C07C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR15_U 0xC07C

/** \brief  1C080, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR16_L 0xC080

/** \brief  1C084, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR16_U 0xC084

/** \brief  1C088, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR17_L 0xC088

/** \brief  1C08C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR17_U 0xC08C

/** \brief  1C008, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR1_L 0xC008

/** \brief  1C00C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR1_U 0xC00C

/** \brief  1C010, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR2_L 0xC010

/** \brief  1C014, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR2_U 0xC014

/** \brief  1C018, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR3_L 0xC018

/** \brief  1C01C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR3_U 0xC01C

/** \brief  1C020, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR4_L 0xC020

/** \brief  1C024, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR4_U 0xC024

/** \brief  1C028, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR5_L 0xC028

/** \brief  1C02C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR5_U 0xC02C

/** \brief  1C030, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR6_L 0xC030

/** \brief  1C034, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR6_U 0xC034

/** \brief  1C038, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR7_L 0xC038

/** \brief  1C03C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR7_U 0xC03C

/** \brief  1C040, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR8_L 0xC040

/** \brief  1C044, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR8_U 0xC044

/** \brief  1C048, , type: Ifx_CPU_DPR_L, CPU Data Protection Range, Lower Bound
 * Register */
#define CPU_DPR9_L 0xC048

/** \brief  1C04C, , type: Ifx_CPU_DPR_U, CPU Data Protection Range, Upper Bound
 * Register */
#define CPU_DPR9_U 0xC04C

/** \brief  1E010, , type: Ifx_CPU_DPRE_0, CPU Data Protection Read Enable
 * Register Set 0 */
#define CPU_DPRE_0 0xE010

/** \brief  1E014, , type: Ifx_CPU_DPRE_1, CPU Data Protection Read Enable
 * Register Set 1 */
#define CPU_DPRE_1 0xE014

/** \brief  1E018, , type: Ifx_CPU_DPRE_2, CPU Data Protection Read Enable
 * Register Set 2 */
#define CPU_DPRE_2 0xE018

/** \brief  1E01C, , type: Ifx_CPU_DPRE_3, CPU Data Protection Read Enable
 * Register Set 3 */
#define CPU_DPRE_3 0xE01C

/** \brief  1E060, , type: Ifx_CPU_DPRE_4, CPU Data Protection Read Enable
 * Register Set 4 */
#define CPU_DPRE_4 0xE060

/** \brief  1E064, , type: Ifx_CPU_DPRE_5, CPU Data Protection Read Enable
 * Register Set 5 */
#define CPU_DPRE_5 0xE064

/** \brief  1E020, , type: Ifx_CPU_DPWE_0, CPU Data Protection Write Enable
 * Register Set 0 */
#define CPU_DPWE_0 0xE020

/** \brief  1E024, , type: Ifx_CPU_DPWE_1, CPU Data Protection Write Enable
 * Register Set 1 */
#define CPU_DPWE_1 0xE024

/** \brief  1E028, , type: Ifx_CPU_DPWE_2, CPU Data Protection Write Enable
 * Register Set 2 */
#define CPU_DPWE_2 0xE028

/** \brief  1E02C, , type: Ifx_CPU_DPWE_3, CPU Data Protection Write Enable
 * Register Set 3 */
#define CPU_DPWE_3 0xE02C

/** \brief  1E070, , type: Ifx_CPU_DPWE_4, CPU Data Protection Write Enable
 * Register Set 4 */
#define CPU_DPWE_4 0xE070

/** \brief  1E074, , type: Ifx_CPU_DPWE_5, CPU Data Protection Write Enable
 * Register Set 5 */
#define CPU_DPWE_5 0xE074

/** \brief  19010, , type: Ifx_CPU_DSTR, CPU Data Synchronous Trap Register */
#define CPU_DSTR 0x9010

/** \brief  1FD08, , type: Ifx_CPU_EXEVT, CPU External Event Register */
#define CPU_EXEVT 0xFD08

/** \brief  1FE38, , type: Ifx_CPU_FCX, CPU Free CSA List Head Pointer */
#define CPU_FCX 0xFE38

/** \brief  1100, , type: Ifx_CPU_FLASHCON0, CPU Flash Configuration Register 0 */
#define CPU_FLASHCON0 0x100

/** \brief  1104, , type: Ifx_CPU_FLASHCON1, CPU Flash Configuration Register 1 */
#define CPU_FLASHCON1 0x104

/** \brief  1108, , type: Ifx_CPU_FLASHCON2, CPU Flash Configuration Register 2 */
#define CPU_FLASHCON2 0x108

/** \brief  110C, , type: Ifx_CPU_FLASHCON3, CPU Flash Configuration Register 3 */
#define CPU_FLASHCON3 0x10C

/** \brief  1A000, , type: Ifx_CPU_FPU_TRAP_CON, CPU Trap Control Register */
#define CPU_FPU_TRAP_CON 0xA000

/** \brief  1A008, , type: Ifx_CPU_FPU_TRAP_OPC, CPU Trapping Instruction Opcode
 * Register */
#define CPU_FPU_TRAP_OPC 0xA008

/** \brief  1A004, , type: Ifx_CPU_FPU_TRAP_PC, CPU Trapping Instruction Program
 * Counter Register */
#define CPU_FPU_TRAP_PC 0xA004

/** \brief  1A010, , type: Ifx_CPU_FPU_TRAP_SRC1, CPU Trapping Instruction
 * Operand Register */
#define CPU_FPU_TRAP_SRC1 0xA010

/** \brief  1A014, , type: Ifx_CPU_FPU_TRAP_SRC2, CPU Trapping Instruction
 * Operand Register */
#define CPU_FPU_TRAP_SRC2 0xA014

/** \brief  1A018, , type: Ifx_CPU_FPU_TRAP_SRC3, CPU Trapping Instruction
 * Operand Register */
#define CPU_FPU_TRAP_SRC3 0xA018

/** \brief  1FC08, , type: Ifx_CPU_ICNT, CPU Instruction Count */
#define CPU_ICNT 0xFC08

/** \brief  1FE2C, , type: Ifx_CPU_ICR, CPU Interrupt Control Register */
#define CPU_ICR 0xFE2C

/** \brief  1FE28, , type: Ifx_CPU_ISP, CPU Interrupt Stack Pointer */
#define CPU_ISP 0xFE28

/** \brief  D000, , type: Ifx_CPU_KRST0, CPU Reset Register 0 */
#define CPU_KRST0 0xD000

/** \brief  D004, , type: Ifx_CPU_KRST1, CPU Reset Register 1 */
#define CPU_KRST1 0xD004

/** \brief  D008, , type: Ifx_CPU_KRSTCLR, CPU Reset Status Clear Register */
#define CPU_KRSTCLR 0xD008

/** \brief  1FE3C, , type: Ifx_CPU_LCX, CPU Free CSA List Limit Pointer */
#define CPU_LCX 0xFE3C

/** \brief  1FC0C, , type: Ifx_CPU_M1CNT, CPU Multi-Count Register 1 */
#define CPU_M1CNT 0xFC0C

/** \brief  1FC10, , type: Ifx_CPU_M2CNT, CPU Multi-Count Register 2 */
#define CPU_M2CNT 0xFC10

/** \brief  1FC14, , type: Ifx_CPU_M3CNT, CPU Multi-Count Register 3 */
#define CPU_M3CNT 0xFC14

/** \brief  18, , type: Ifx_CPU_OMASK0, CPU Overlay Mask Register 0 */
#define CPU_OMASK0 0x18

/** \brief  24, , type: Ifx_CPU_OMASK1, CPU Overlay Mask Register 1 */
#define CPU_OMASK1 0x24

/** \brief  90, , type: Ifx_CPU_OMASK10, CPU Overlay Mask Register 10 */
#define CPU_OMASK10 0x90

/** \brief  9C, , type: Ifx_CPU_OMASK11, CPU Overlay Mask Register 11 */
#define CPU_OMASK11 0x9C

/** \brief  A8, , type: Ifx_CPU_OMASK12, CPU Overlay Mask Register 12 */
#define CPU_OMASK12 0xA8

/** \brief  B4, , type: Ifx_CPU_OMASK13, CPU Overlay Mask Register 13 */
#define CPU_OMASK13 0xB4

/** \brief  C0, , type: Ifx_CPU_OMASK14, CPU Overlay Mask Register 14 */
#define CPU_OMASK14 0xC0

/** \brief  CC, , type: Ifx_CPU_OMASK15, CPU Overlay Mask Register 15 */
#define CPU_OMASK15 0xCC

/** \brief  D8, , type: Ifx_CPU_OMASK16, CPU Overlay Mask Register 16 */
#define CPU_OMASK16 0xD8

/** \brief  E4, , type: Ifx_CPU_OMASK17, CPU Overlay Mask Register 17 */
#define CPU_OMASK17 0xE4

/** \brief  F0, , type: Ifx_CPU_OMASK18, CPU Overlay Mask Register 18 */
#define CPU_OMASK18 0xF0

/** \brief  FC, , type: Ifx_CPU_OMASK19, CPU Overlay Mask Register 19 */
#define CPU_OMASK19 0xFC

/** \brief  30, , type: Ifx_CPU_OMASK2, CPU Overlay Mask Register 2 */
#define CPU_OMASK2 0x30

/** \brief  108, , type: Ifx_CPU_OMASK20, CPU Overlay Mask Register 20 */
#define CPU_OMASK20 0x108

/** \brief  114, , type: Ifx_CPU_OMASK21, CPU Overlay Mask Register 21 */
#define CPU_OMASK21 0x114

/** \brief  120, , type: Ifx_CPU_OMASK22, CPU Overlay Mask Register 22 */
#define CPU_OMASK22 0x120

/** \brief  12C, , type: Ifx_CPU_OMASK23, CPU Overlay Mask Register 23 */
#define CPU_OMASK23 0x12C

/** \brief  138, , type: Ifx_CPU_OMASK24, CPU Overlay Mask Register 24 */
#define CPU_OMASK24 0x138

/** \brief  144, , type: Ifx_CPU_OMASK25, CPU Overlay Mask Register 25 */
#define CPU_OMASK25 0x144

/** \brief  150, , type: Ifx_CPU_OMASK26, CPU Overlay Mask Register 26 */
#define CPU_OMASK26 0x150

/** \brief  15C, , type: Ifx_CPU_OMASK27, CPU Overlay Mask Register 27 */
#define CPU_OMASK27 0x15C

/** \brief  168, , type: Ifx_CPU_OMASK28, CPU Overlay Mask Register 28 */
#define CPU_OMASK28 0x168

/** \brief  174, , type: Ifx_CPU_OMASK29, CPU Overlay Mask Register 29 */
#define CPU_OMASK29 0x174

/** \brief  3C, , type: Ifx_CPU_OMASK3, CPU Overlay Mask Register 3 */
#define CPU_OMASK3 0x3C

/** \brief  180, , type: Ifx_CPU_OMASK30, CPU Overlay Mask Register 30 */
#define CPU_OMASK30 0x180

/** \brief  18C, , type: Ifx_CPU_OMASK31, CPU Overlay Mask Register 31 */
#define CPU_OMASK31 0x18C

/** \brief  48, , type: Ifx_CPU_OMASK4, CPU Overlay Mask Register 4 */
#define CPU_OMASK4 0x48

/** \brief  54, , type: Ifx_CPU_OMASK5, CPU Overlay Mask Register 5 */
#define CPU_OMASK5 0x54

/** \brief  60, , type: Ifx_CPU_OMASK6, CPU Overlay Mask Register 6 */
#define CPU_OMASK6 0x60

/** \brief  6C, , type: Ifx_CPU_OMASK7, CPU Overlay Mask Register 7 */
#define CPU_OMASK7 0x6C

/** \brief  78, , type: Ifx_CPU_OMASK8, CPU Overlay Mask Register 8 */
#define CPU_OMASK8 0x78

/** \brief  84, , type: Ifx_CPU_OMASK9, CPU Overlay Mask Register 9 */
#define CPU_OMASK9 0x84

/** \brief  0, , type: Ifx_CPU_OSEL, CPU Overlay Range Select Register */
#define CPU_OSEL 0x0

/** \brief  14, , type: Ifx_CPU_OTAR0, CPU Overlay Target Address Register 0 */
#define CPU_OTAR0 0x14

/** \brief  20, , type: Ifx_CPU_OTAR1, CPU Overlay Target Address Register 1 */
#define CPU_OTAR1 0x20

/** \brief  8C, , type: Ifx_CPU_OTAR10, CPU Overlay Target Address Register 10 */
#define CPU_OTAR10 0x8C

/** \brief  98, , type: Ifx_CPU_OTAR11, CPU Overlay Target Address Register 11 */
#define CPU_OTAR11 0x98

/** \brief  A4, , type: Ifx_CPU_OTAR12, CPU Overlay Target Address Register 12 */
#define CPU_OTAR12 0xA4

/** \brief  B0, , type: Ifx_CPU_OTAR13, CPU Overlay Target Address Register 13 */
#define CPU_OTAR13 0xB0

/** \brief  BC, , type: Ifx_CPU_OTAR14, CPU Overlay Target Address Register 14 */
#define CPU_OTAR14 0xBC

/** \brief  C8, , type: Ifx_CPU_OTAR15, CPU Overlay Target Address Register 15 */
#define CPU_OTAR15 0xC8

/** \brief  D4, , type: Ifx_CPU_OTAR16, CPU Overlay Target Address Register 16 */
#define CPU_OTAR16 0xD4

/** \brief  E0, , type: Ifx_CPU_OTAR17, CPU Overlay Target Address Register 17 */
#define CPU_OTAR17 0xE0

/** \brief  EC, , type: Ifx_CPU_OTAR18, CPU Overlay Target Address Register 18 */
#define CPU_OTAR18 0xEC

/** \brief  F8, , type: Ifx_CPU_OTAR19, CPU Overlay Target Address Register 19 */
#define CPU_OTAR19 0xF8

/** \brief  2C, , type: Ifx_CPU_OTAR2, CPU Overlay Target Address Register 2 */
#define CPU_OTAR2 0x2C

/** \brief  104, , type: Ifx_CPU_OTAR20, CPU Overlay Target Address Register 20 */
#define CPU_OTAR20 0x104

/** \brief  110, , type: Ifx_CPU_OTAR21, CPU Overlay Target Address Register 21 */
#define CPU_OTAR21 0x110

/** \brief  11C, , type: Ifx_CPU_OTAR22, CPU Overlay Target Address Register 22 */
#define CPU_OTAR22 0x11C

/** \brief  128, , type: Ifx_CPU_OTAR23, CPU Overlay Target Address Register 23 */
#define CPU_OTAR23 0x128

/** \brief  134, , type: Ifx_CPU_OTAR24, CPU Overlay Target Address Register 24 */
#define CPU_OTAR24 0x134

/** \brief  140, , type: Ifx_CPU_OTAR25, CPU Overlay Target Address Register 25 */
#define CPU_OTAR25 0x140

/** \brief  14C, , type: Ifx_CPU_OTAR26, CPU Overlay Target Address Register 26 */
#define CPU_OTAR26 0x14C

/** \brief  158, , type: Ifx_CPU_OTAR27, CPU Overlay Target Address Register 27 */
#define CPU_OTAR27 0x158

/** \brief  164, , type: Ifx_CPU_OTAR28, CPU Overlay Target Address Register 28 */
#define CPU_OTAR28 0x164

/** \brief  170, , type: Ifx_CPU_OTAR29, CPU Overlay Target Address Register 29 */
#define CPU_OTAR29 0x170

/** \brief  38, , type: Ifx_CPU_OTAR3, CPU Overlay Target Address Register 3 */
#define CPU_OTAR3 0x38

/** \brief  17C, , type: Ifx_CPU_OTAR30, CPU Overlay Target Address Register 30 */
#define CPU_OTAR30 0x17C

/** \brief  188, , type: Ifx_CPU_OTAR31, CPU Overlay Target Address Register 31 */
#define CPU_OTAR31 0x188

/** \brief  44, , type: Ifx_CPU_OTAR4, CPU Overlay Target Address Register 4 */
#define CPU_OTAR4 0x44

/** \brief  50, , type: Ifx_CPU_OTAR5, CPU Overlay Target Address Register 5 */
#define CPU_OTAR5 0x50

/** \brief  5C, , type: Ifx_CPU_OTAR6, CPU Overlay Target Address Register 6 */
#define CPU_OTAR6 0x5C

/** \brief  68, , type: Ifx_CPU_OTAR7, CPU Overlay Target Address Register 7 */
#define CPU_OTAR7 0x68

/** \brief  74, , type: Ifx_CPU_OTAR8, CPU Overlay Target Address Register 8 */
#define CPU_OTAR8 0x74

/** \brief  80, , type: Ifx_CPU_OTAR9, CPU Overlay Target Address Register 9 */
#define CPU_OTAR9 0x80

/** \brief  1FE08, , type: Ifx_CPU_PC, CPU Program Counter */
#define CPU_PC 0xFE08

/** \brief  1920C, , type: Ifx_CPU_PCON0, CPU Program Control 0 */
#define CPU_PCON0 0x920C

/** \brief  19204, , type: Ifx_CPU_PCON1, CPU Program Control 1 */
#define CPU_PCON1 0x9204

/** \brief  19208, , type: Ifx_CPU_PCON2, CPU Program Control 2 */
#define CPU_PCON2 0x9208

/** \brief  1FE00, , type: Ifx_CPU_PCXI, CPU Previous Context Information
 * Register */
#define CPU_PCXI 0xFE00

/** \brief  19210, , type: Ifx_CPU_PIEAR, CPU Program Integrity Error Address
 * Register */
#define CPU_PIEAR 0x9210

/** \brief  19214, , type: Ifx_CPU_PIETR, CPU Program Integrity Error Trap
 * Register */
#define CPU_PIETR 0x9214

/** \brief  18100, , type: Ifx_CPU_PMA0, CPU Data Access CacheabilityRegister */
#define CPU_PMA0 0x8100

/** \brief  18104, , type: Ifx_CPU_PMA1, CPU Code Access CacheabilityRegister */
#define CPU_PMA1 0x8104

/** \brief  18108, , type: Ifx_CPU_PMA2, CPU Peripheral Space Identifier
 * register */
#define CPU_PMA2 0x8108

/** \brief  19200, , type: Ifx_CPU_PSTR, CPU Program Synchronous Trap Register */
#define CPU_PSTR 0x9200

/** \brief  1FE04, , type: Ifx_CPU_PSW, CPU Program Status Word */
#define CPU_PSW 0xFE04

/** \brief  10, , type: Ifx_CPU_RABR0, CPU Redirected Address Base Register 0 */
#define CPU_RABR0 0x10

/** \brief  1C, , type: Ifx_CPU_RABR1, CPU Redirected Address Base Register 1 */
#define CPU_RABR1 0x1C

/** \brief  88, , type: Ifx_CPU_RABR10, CPU Redirected Address Base Register 10 */
#define CPU_RABR10 0x88

/** \brief  94, , type: Ifx_CPU_RABR11, CPU Redirected Address Base Register 11 */
#define CPU_RABR11 0x94

/** \brief  A0, , type: Ifx_CPU_RABR12, CPU Redirected Address Base Register 12 */
#define CPU_RABR12 0xA0

/** \brief  AC, , type: Ifx_CPU_RABR13, CPU Redirected Address Base Register 13 */
#define CPU_RABR13 0xAC

/** \brief  B8, , type: Ifx_CPU_RABR14, CPU Redirected Address Base Register 14 */
#define CPU_RABR14 0xB8

/** \brief  C4, , type: Ifx_CPU_RABR15, CPU Redirected Address Base Register 15 */
#define CPU_RABR15 0xC4

/** \brief  D0, , type: Ifx_CPU_RABR16, CPU Redirected Address Base Register 16 */
#define CPU_RABR16 0xD0

/** \brief  DC, , type: Ifx_CPU_RABR17, CPU Redirected Address Base Register 17 */
#define CPU_RABR17 0xDC

/** \brief  E8, , type: Ifx_CPU_RABR18, CPU Redirected Address Base Register 18 */
#define CPU_RABR18 0xE8

/** \brief  F4, , type: Ifx_CPU_RABR19, CPU Redirected Address Base Register 19 */
#define CPU_RABR19 0xF4

/** \brief  28, , type: Ifx_CPU_RABR2, CPU Redirected Address Base Register 2 */
#define CPU_RABR2 0x28

/** \brief  100, , type: Ifx_CPU_RABR20, CPU Redirected Address Base Register 20 */
#define CPU_RABR20 0x100

/** \brief  10C, , type: Ifx_CPU_RABR21, CPU Redirected Address Base Register 21 */
#define CPU_RABR21 0x10C

/** \brief  118, , type: Ifx_CPU_RABR22, CPU Redirected Address Base Register 22 */
#define CPU_RABR22 0x118

/** \brief  124, , type: Ifx_CPU_RABR23, CPU Redirected Address Base Register 23 */
#define CPU_RABR23 0x124

/** \brief  130, , type: Ifx_CPU_RABR24, CPU Redirected Address Base Register 24 */
#define CPU_RABR24 0x130

/** \brief  13C, , type: Ifx_CPU_RABR25, CPU Redirected Address Base Register 25 */
#define CPU_RABR25 0x13C

/** \brief  148, , type: Ifx_CPU_RABR26, CPU Redirected Address Base Register 26 */
#define CPU_RABR26 0x148

/** \brief  154, , type: Ifx_CPU_RABR27, CPU Redirected Address Base Register 27 */
#define CPU_RABR27 0x154

/** \brief  160, , type: Ifx_CPU_RABR28, CPU Redirected Address Base Register 28 */
#define CPU_RABR28 0x160

/** \brief  16C, , type: Ifx_CPU_RABR29, CPU Redirected Address Base Register 29 */
#define CPU_RABR29 0x16C

/** \brief  34, , type: Ifx_CPU_RABR3, CPU Redirected Address Base Register 3 */
#define CPU_RABR3 0x34

/** \brief  178, , type: Ifx_CPU_RABR30, CPU Redirected Address Base Register 30 */
#define CPU_RABR30 0x178

/** \brief  184, , type: Ifx_CPU_RABR31, CPU Redirected Address Base Register 31 */
#define CPU_RABR31 0x184

/** \brief  40, , type: Ifx_CPU_RABR4, CPU Redirected Address Base Register 4 */
#define CPU_RABR4 0x40

/** \brief  4C, , type: Ifx_CPU_RABR5, CPU Redirected Address Base Register 5 */
#define CPU_RABR5 0x4C

/** \brief  58, , type: Ifx_CPU_RABR6, CPU Redirected Address Base Register 6 */
#define CPU_RABR6 0x58

/** \brief  64, , type: Ifx_CPU_RABR7, CPU Redirected Address Base Register 7 */
#define CPU_RABR7 0x64

/** \brief  70, , type: Ifx_CPU_RABR8, CPU Redirected Address Base Register 8 */
#define CPU_RABR8 0x70

/** \brief  7C, , type: Ifx_CPU_RABR9, CPU Redirected Address Base Register 9 */
#define CPU_RABR9 0x7C

/** \brief  11030, , type: Ifx_CPU_SEGEN, CPU SRI Error Generation Register */
#define CPU_SEGEN 0x1030

/** \brief  1FD10, , type: Ifx_CPU_SWEVT, CPU Software Debug Event */
#define CPU_SWEVT 0xFD10

/** \brief  1FE14, , type: Ifx_CPU_SYSCON, CPU System Configuration Register */
#define CPU_SYSCON 0xFE14

/** \brief  18004, , type: Ifx_CPU_TASK_ASI, CPU Task Address Space Identifier
 * Register */
#define CPU_TASK_ASI 0x8004

/** \brief  1E400, , type: Ifx_CPU_TPS_CON, CPU Temporal Protection System
 * Control Register */
#define CPU_TPS_CON 0xE400

/** \brief  1E448, , type: Ifx_CPU_TPS_EXTIM_CLASS_EN, CPU Exception Timer Class
 * Enable Register */
#define CPU_TPS_EXTIM_CLASS_EN 0xE448

/** \brief  1E444, , type: Ifx_CPU_TPS_EXTIM_CVAL, CPU Exception Timer Current
 * Value */
#define CPU_TPS_EXTIM_CVAL 0xE444

/** \brief  1E450, , type: Ifx_CPU_TPS_EXTIM_FCX, CPU Exception Timer Status
 * Register */
#define CPU_TPS_EXTIM_FCX 0xE450

/** \brief  1E440, , type: Ifx_CPU_TPS_EXTIM_LVAL, CPU Exception Timer Load
 * Value */
#define CPU_TPS_EXTIM_LVAL 0xE440

/** \brief  1E44C, , type: Ifx_CPU_TPS_EXTIM_STAT, CPU Exception Timer Status
 * Register */
#define CPU_TPS_EXTIM_STAT 0xE44C

/** \brief  1E404, , type: Ifx_CPU_TPS_TIMER, CPU Temporal Protection System
 * Timer Register */
#define CPU_TPS_TIMER0 0xE404

/** \brief  1E408, , type: Ifx_CPU_TPS_TIMER, CPU Temporal Protection System
 * Timer Register */
#define CPU_TPS_TIMER1 0xE408

/** \brief  1E40C, , type: Ifx_CPU_TPS_TIMER, CPU Temporal Protection System
 * Timer Register */
#define CPU_TPS_TIMER2 0xE40C

/** \brief  1F004, , type: Ifx_CPU_TR_ADR, CPU Trigger Address */
#define CPU_TR0_ADR 0xF004

/** \brief  1F000, , type: Ifx_CPU_TR_EVT, CPU Trigger Event */
#define CPU_TR0_EVT 0xF000

/** \brief  1F00C, , type: Ifx_CPU_TR_ADR, CPU Trigger Address */
#define CPU_TR1_ADR 0xF00C

/** \brief  1F008, , type: Ifx_CPU_TR_EVT, CPU Trigger Event */
#define CPU_TR1_EVT 0xF008

/** \brief  1F014, , type: Ifx_CPU_TR_ADR, CPU Trigger Address */
#define CPU_TR2_ADR 0xF014

/** \brief  1F010, , type: Ifx_CPU_TR_EVT, CPU Trigger Event */
#define CPU_TR2_EVT 0xF010

/** \brief  1F01C, , type: Ifx_CPU_TR_ADR, CPU Trigger Address */
#define CPU_TR3_ADR 0xF01C

/** \brief  1F018, , type: Ifx_CPU_TR_EVT, CPU Trigger Event */
#define CPU_TR3_EVT 0xF018

/** \brief  1F024, , type: Ifx_CPU_TR_ADR, CPU Trigger Address */
#define CPU_TR4_ADR 0xF024

/** \brief  1F020, , type: Ifx_CPU_TR_EVT, CPU Trigger Event */
#define CPU_TR4_EVT 0xF020

/** \brief  1F02C, , type: Ifx_CPU_TR_ADR, CPU Trigger Address */
#define CPU_TR5_ADR 0xF02C

/** \brief  1F028, , type: Ifx_CPU_TR_EVT, CPU Trigger Event */
#define CPU_TR5_EVT 0xF028

/** \brief  1F034, , type: Ifx_CPU_TR_ADR, CPU Trigger Address */
#define CPU_TR6_ADR 0xF034

/** \brief  1F030, , type: Ifx_CPU_TR_EVT, CPU Trigger Event */
#define CPU_TR6_EVT 0xF030

/** \brief  1F03C, , type: Ifx_CPU_TR_ADR, CPU Trigger Address */
#define CPU_TR7_ADR 0xF03C

/** \brief  1F038, , type: Ifx_CPU_TR_EVT, CPU Trigger Event */
#define CPU_TR7_EVT 0xF038

/** \brief  1FD30, , type: Ifx_CPU_TRIG_ACC, CPU Trigger Address x */
#define CPU_TRIG_ACC 0xFD30

/** \brief  1D040, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR8_L 0xD040

/** \brief  1D044, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR8_U 0xD044

/** \brief  1D048, , type: Ifx_CPU_CPR_L, CPU Code Protection Range Lower Bound
 * Register */
#define CPU_CPR9_L 0xD048

/** \brief  1D04C, , type: Ifx_CPU_CPR_U, CPU Code Protection Range Upper Bound
 * Register */
#define CPU_CPR9_U 0xD04C

/** \}  */

/******************************************************************************/
/******************************************************************************/
#endif /* IFXCPU_REG_H */
