/**
 * \file IfxScu_reg.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39x_SCU_v01.xml/Aurix_Plus_Platform_CCU_SFR.xml dated xx.xx.2014
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
 * \defgroup IfxLld_Scu_Cfg Scu address
 * \ingroup IfxLld_Scu
 *
 * \defgroup IfxLld_Scu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Scu_Cfg
 *
 * \defgroup IfxLld_Scu_Cfg_Scu 2-SCU
 * \ingroup IfxLld_Scu_Cfg
 *
 */
#ifndef IFXSCU_REG_H
#define IFXSCU_REG_H 1
/******************************************************************************/
#include "IfxScu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Scu_Cfg_BaseAddress
 * \{  */

/** \\brief  SCU object */
#define MODULE_SCU /*lint --e(923)*/ ((*(Ifx_SCU *)0xF0036000u))
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Scu_Cfg_Scu
 * \{  */

/** \\brief  3FC, Access Enable Register 00 */
#define SCU_ACCEN00      /*lint --e(923)*/ (*(volatile Ifx_SCU_ACCEN00 *)0xF00363FCu)

/** \\brief  3F8, Access Enable Register 01 */
#define SCU_ACCEN01      /*lint --e(923)*/ (*(volatile Ifx_SCU_ACCEN01 *)0xF00363F8u)

/** \\brief  3F4, Access Enable Register 10 */
#define SCU_ACCEN10      /*lint --e(923)*/ (*(volatile Ifx_SCU_ACCEN10 *)0xF00363F4u)

/** \\brief  3F0, Access Enable Register 11 */
#define SCU_ACCEN11      /*lint --e(923)*/ (*(volatile Ifx_SCU_ACCEN11 *)0xF00363F0u)

/** \\brief  5C, Application Reset Disable Register */
#define SCU_ARSTDIS      /*lint --e(923)*/ (*(volatile Ifx_SCU_ARSTDIS *)0xF003605Cu)

/** \\brief  30, CCU Clock Control Register 0 */
#define SCU_CCUCON0      /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON0 *)0xF0036030u)

/** \\brief  34, CCU Clock Control Register 1 */
#define SCU_CCUCON1      /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON1 *)0xF0036034u)

/** \\brief  90, CCU Clock Control Register 10 */
#define SCU_CCUCON10     /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON10 *)0xF0036090u)

/** \\brief  94, CCU Clock Control Register 11 */
#define SCU_CCUCON11     /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON11 *)0xF0036094u)

/** \\brief  40, CCU Clock Control Register 2 */
#define SCU_CCUCON2      /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON2 *)0xF0036040u)

/** \\brief  80, CCU Clock Control Register 6 */
#define SCU_CCUCON6      /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON6 *)0xF0036080u)

/** \\brief  84, CCU Clock Control Register 7 */
#define SCU_CCUCON7      /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON7 *)0xF0036084u)

/** \\brief  88, CCU Clock Control Register 8 */
#define SCU_CCUCON8      /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON8 *)0xF0036088u)

/** \\brief  8C, CCU Clock Control Register 9 */
#define SCU_CCUCON9      /*lint --e(923)*/ (*(volatile Ifx_SCU_CCUCON9 *)0xF003608Cu)

/** \\brief  140, Chip Identification Register */
#define SCU_CHIPID       /*lint --e(923)*/ (*(volatile Ifx_SCU_CHIPID *)0xF0036140u)

/** \\brief  29C, ENDINIT Global Control Register 0 */
#define SCU_EICON0       /*lint --e(923)*/ (*(volatile Ifx_SCU_EICON0 *)0xF003629Cu)

/** \\brief  2A0, ENDINIT Global Control Register 1 */
#define SCU_EICON1       /*lint --e(923)*/ (*(volatile Ifx_SCU_EICON1 *)0xF00362A0u)

/** \\brief  210, External Input Channel Register */
#define SCU_EICR0        /*lint --e(923)*/ (*(volatile Ifx_SCU_EICR *)0xF0036210u)

/** \\brief  214, External Input Channel Register */
#define SCU_EICR1        /*lint --e(923)*/ (*(volatile Ifx_SCU_EICR *)0xF0036214u)

/** \\brief  218, External Input Channel Register */
#define SCU_EICR2        /*lint --e(923)*/ (*(volatile Ifx_SCU_EICR *)0xF0036218u)

/** \\brief  21C, External Input Channel Register */
#define SCU_EICR3        /*lint --e(923)*/ (*(volatile Ifx_SCU_EICR *)0xF003621Cu)

/** \\brief  20C, External Input Filter Register */
#define SCU_EIFILT       /*lint --e(923)*/ (*(volatile Ifx_SCU_EIFILT *)0xF003620Cu)

/** \\brief  220, External Input Flag Register */
#define SCU_EIFR         /*lint --e(923)*/ (*(volatile Ifx_SCU_EIFR *)0xF0036220u)

/** \\brief  2A4, ENDINIT Timeout Counter Status Register */
#define SCU_EISR         /*lint --e(923)*/ (*(volatile Ifx_SCU_EISR *)0xF00362A4u)

/** \\brief  FC, Emergency Stop Register */
#define SCU_EMSR         /*lint --e(923)*/ (*(volatile Ifx_SCU_EMSR *)0xF00360FCu)

/** \\brief  70, ESR Input Configuration Register */
#define SCU_ESRCFG0      /*lint --e(923)*/ (*(volatile Ifx_SCU_ESRCFG *)0xF0036070u)

/** \\brief  74, ESR Input Configuration Register */
#define SCU_ESRCFG1      /*lint --e(923)*/ (*(volatile Ifx_SCU_ESRCFG *)0xF0036074u)

/** \\brief  78, ESR Output Configuration Register */
#define SCU_ESROCFG      /*lint --e(923)*/ (*(volatile Ifx_SCU_ESROCFG *)0xF0036078u)

/** \\brief  3C, External Clock Control Register */
#define SCU_EXTCON       /*lint --e(923)*/ (*(volatile Ifx_SCU_EXTCON *)0xF003603Cu)

/** \\brief  38, Fractional Divider Register */
#define SCU_FDR          /*lint --e(923)*/ (*(volatile Ifx_SCU_FDR *)0xF0036038u)

/** \\brief  224, Flag Modification Register */
#define SCU_FMR          /*lint --e(923)*/ (*(volatile Ifx_SCU_FMR *)0xF0036224u)

/** \\brief  8, Identification Register */
#define SCU_ID           /*lint --e(923)*/ (*(volatile Ifx_SCU_ID *)0xF0036008u)

/** \\brief  22C, Flag Gating Register */
#define SCU_IGCR0        /*lint --e(923)*/ (*(volatile Ifx_SCU_IGCR *)0xF003622Cu)

/** \\brief  230, Flag Gating Register */
#define SCU_IGCR1        /*lint --e(923)*/ (*(volatile Ifx_SCU_IGCR *)0xF0036230u)

/** \\brief  234, Flag Gating Register */
#define SCU_IGCR2        /*lint --e(923)*/ (*(volatile Ifx_SCU_IGCR *)0xF0036234u)

/** \\brief  238, Flag Gating Register */
#define SCU_IGCR3        /*lint --e(923)*/ (*(volatile Ifx_SCU_IGCR *)0xF0036238u)

/** \\brief  AC, ESR Input Register */
#define SCU_IN           /*lint --e(923)*/ (*(volatile Ifx_SCU_IN *)0xF00360ACu)

/** \\brief  A0, Input/Output Control Register */
#define SCU_IOCR         /*lint --e(923)*/ (*(volatile Ifx_SCU_IOCR *)0xF00360A0u)

/** \\brief  164, Logic BIST Control 0 Register */
#define SCU_LBISTCTRL0   /*lint --e(923)*/ (*(volatile Ifx_SCU_LBISTCTRL0 *)0xF0036164u)

/** \\brief  168, Logic BIST Control 1 Register */
#define SCU_LBISTCTRL1   /*lint --e(923)*/ (*(volatile Ifx_SCU_LBISTCTRL1 *)0xF0036168u)

/** \\brief  16C, Logic BIST Control 2 Register */
#define SCU_LBISTCTRL2   /*lint --e(923)*/ (*(volatile Ifx_SCU_LBISTCTRL2 *)0xF003616Cu)

/** \\brief  170, Logic BIST Control 3 Register */
#define SCU_LBISTCTRL3   /*lint --e(923)*/ (*(volatile Ifx_SCU_LBISTCTRL3 *)0xF0036170u)

/** \\brief  134, LCL CPU0 Control Register */
#define SCU_LCLCON0      /*lint --e(923)*/ (*(volatile Ifx_SCU_LCLCON0 *)0xF0036134u)

/** \\brief  138, LCL CPU1 Control Register */
#define SCU_LCLCON1      /*lint --e(923)*/ (*(volatile Ifx_SCU_LCLCON1 *)0xF0036138u)

/** \\brief  13C, LCL Test Register */
#define SCU_LCLTEST      /*lint --e(923)*/ (*(volatile Ifx_SCU_LCLTEST *)0xF003613Cu)

/** \\brief  144, Manufacturer Identification Register */
#define SCU_MANID        /*lint --e(923)*/ (*(volatile Ifx_SCU_MANID *)0xF0036144u)

/** \\brief  B8, Modulation Trim 1 Configuration Register */
#define SCU_MODTRIMCON1  /*lint --e(923)*/ (*(volatile Ifx_SCU_MODTRIMCON1 *)0xF00360B8u)

/** \\brief  A8, ESR Output Modification Register */
#define SCU_OMR          /*lint --e(923)*/ (*(volatile Ifx_SCU_OMR *)0xF00360A8u)

/** \\brief  10, OSC Control Register */
#define SCU_OSCCON       /*lint --e(923)*/ (*(volatile Ifx_SCU_OSCCON *)0xF0036010u)

/** \\brief  A4, ESR Output Register */
#define SCU_OUT          /*lint --e(923)*/ (*(volatile Ifx_SCU_OUT *)0xF00360A4u)

/** \\brief  1E4, Overlay Control Register */
#define SCU_OVCCON       /*lint --e(923)*/ (*(volatile Ifx_SCU_OVCCON *)0xF00361E4u)

/** \\brief  1E0, Overlay Enable Register */
#define SCU_OVCENABLE    /*lint --e(923)*/ (*(volatile Ifx_SCU_OVCENABLE *)0xF00361E0u)

/** \\brief  18C, Pad Disable Control Register */
#define SCU_PDISC        /*lint --e(923)*/ (*(volatile Ifx_SCU_PDISC *)0xF003618Cu)

/** \\brief  9C, ESR Pad Driver Mode Register */
#define SCU_PDR          /*lint --e(923)*/ (*(volatile Ifx_SCU_PDR *)0xF003609Cu)

/** \\brief  228, Pattern Detection Result Register */
#define SCU_PDRR         /*lint --e(923)*/ (*(volatile Ifx_SCU_PDRR *)0xF0036228u)

/** \\brief  28, Peripheral PLL Configuration 0 Register */
#define SCU_PERPLLCON0   /*lint --e(923)*/ (*(volatile Ifx_SCU_PERPLLCON0 *)0xF0036028u)

/** \\brief  2C, Peripheral PLL Configuration 1 Register */
#define SCU_PERPLLCON1   /*lint --e(923)*/ (*(volatile Ifx_SCU_PERPLLCON1 *)0xF003602Cu)

/** \\brief  24, Peripheral PLL Status Register */
#define SCU_PERPLLSTAT   /*lint --e(923)*/ (*(volatile Ifx_SCU_PERPLLSTAT *)0xF0036024u)

/** \\brief  C8, Power Management Control and Status Register \note Array index
 * shifted by 3. Example: defined register PMCSR[0]/PMCSR0 corresponds to user
 * manual PMCSR3, ... */
#define SCU_PMCSR0       /*lint --e(923)*/ (*(volatile Ifx_SCU_PMCSR *)0xF00360D4u)

/** \\brief  CC, Power Management Control and Status Register \note Array index
 * shifted by 3. Example: defined register PMCSR[0]/PMCSR0 corresponds to user
 * manual PMCSR3, ... */
#define SCU_PMCSR1       /*lint --e(923)*/ (*(volatile Ifx_SCU_PMCSR *)0xF00360D8u)

/** \\brief  D0, Power Management Control and Status Register \note Array index
 * shifted by 3. Example: defined register PMCSR[0]/PMCSR0 corresponds to user
 * manual PMCSR3, ... */
#define SCU_PMCSR2       /*lint --e(923)*/ (*(volatile Ifx_SCU_PMCSR *)0xF00360DCu)

/** \\brief  D4, Power Management Control and Status Register \note Array index
 * shifted by 3. Example: defined register PMCSR[0]/PMCSR0 corresponds to user
 * manual PMCSR3, ... */
#define SCU_PMCSR3       /*lint --e(923)*/ (*(volatile Ifx_SCU_PMCSR *)0xF00360C8u)

/** \\brief  D8, Power Management Control and Status Register \note Array index
 * shifted by 3. Example: defined register PMCSR[0]/PMCSR0 corresponds to user
 * manual PMCSR3, ... */
#define SCU_PMCSR4       /*lint --e(923)*/ (*(volatile Ifx_SCU_PMCSR *)0xF00360CCu)

/** \\brief  DC, Power Management Control and Status Register \note Array index
 * shifted by 3. Example: defined register PMCSR[0]/PMCSR0 corresponds to user
 * manual PMCSR3, ... */
#define SCU_PMCSR5       /*lint --e(923)*/ (*(volatile Ifx_SCU_PMCSR *)0xF00360D0u)

/** \\brief  E4, Power Management Status Register 0 */
#define SCU_PMSTAT0      /*lint --e(923)*/ (*(volatile Ifx_SCU_PMSTAT0 *)0xF00360E4u)

/** \\brief  E8, Standby and Wake-up Control Register 1 */
#define SCU_PMSWCR1      /*lint --e(923)*/ (*(volatile Ifx_SCU_PMSWCR1 *)0xF00360E8u)

/** \\brief  198, Power Management Transition Control and Status Register 0 */
#define SCU_PMTRCSR0     /*lint --e(923)*/ (*(volatile Ifx_SCU_PMTRCSR0 *)0xF0036198u)

/** \\brief  19C, Power Management Transition Control and Status Register 1 */
#define SCU_PMTRCSR1     /*lint --e(923)*/ (*(volatile Ifx_SCU_PMTRCSR1 *)0xF003619Cu)

/** \\brief  1A0, Power Management Transition Control and Status Register 2 */
#define SCU_PMTRCSR2     /*lint --e(923)*/ (*(volatile Ifx_SCU_PMTRCSR2 *)0xF00361A0u)

/** \\brief  1A4, Power Management Transition Control and Status Register 3 */
#define SCU_PMTRCSR3     /*lint --e(923)*/ (*(volatile Ifx_SCU_PMTRCSR3 *)0xF00361A4u)

/** \\brief  58, Reset Configuration Register */
#define SCU_RSTCON       /*lint --e(923)*/ (*(volatile Ifx_SCU_RSTCON *)0xF0036058u)

/** \\brief  64, Additional Reset Control Register */
#define SCU_RSTCON2      /*lint --e(923)*/ (*(volatile Ifx_SCU_RSTCON2 *)0xF0036064u)

/** \\brief  50, Reset Status Register */
#define SCU_RSTSTAT      /*lint --e(923)*/ (*(volatile Ifx_SCU_RSTSTAT *)0xF0036050u)

/** \\brief  2B4, Safety ENDINIT Control Register 0 */
#define SCU_SEICON0      /*lint --e(923)*/ (*(volatile Ifx_SCU_SEICON0 *)0xF00362B4u)

/** \\brief  2B8, Safety ENDINIT Control Register 1 */
#define SCU_SEICON1      /*lint --e(923)*/ (*(volatile Ifx_SCU_SEICON1 *)0xF00362B8u)

/** \\brief  2BC, Safety ENDINIT Timeout Status Register */
#define SCU_SEISR        /*lint --e(923)*/ (*(volatile Ifx_SCU_SEISR *)0xF00362BCu)

/** \\brief  C0, Start-up Status Register */
#define SCU_STSTAT       /*lint --e(923)*/ (*(volatile Ifx_SCU_STSTAT *)0xF00360C0u)

/** \\brief  60, Software Reset Configuration Register */
#define SCU_SWRSTCON     /*lint --e(923)*/ (*(volatile Ifx_SCU_SWRSTCON *)0xF0036060u)

/** \\brief  7C, System Control Register */
#define SCU_SYSCON       /*lint --e(923)*/ (*(volatile Ifx_SCU_SYSCON *)0xF003607Cu)

/** \\brief  18, System PLL Configuration 0 Register */
#define SCU_SYSPLLCON0   /*lint --e(923)*/ (*(volatile Ifx_SCU_SYSPLLCON0 *)0xF0036018u)

/** \\brief  1C, System PLL Configuration 1 Register */
#define SCU_SYSPLLCON1   /*lint --e(923)*/ (*(volatile Ifx_SCU_SYSPLLCON1 *)0xF003601Cu)

/** \\brief  20, System PLL Configuration 2 Register */
#define SCU_SYSPLLCON2   /*lint --e(923)*/ (*(volatile Ifx_SCU_SYSPLLCON2 *)0xF0036020u)

/** \\brief  14, System PLL Status Register */
#define SCU_SYSPLLSTAT   /*lint --e(923)*/ (*(volatile Ifx_SCU_SYSPLLSTAT *)0xF0036014u)

/** \\brief  12C, Trap Clear Register */
#define SCU_TRAPCLR      /*lint --e(923)*/ (*(volatile Ifx_SCU_TRAPCLR *)0xF003612Cu)

/** \\brief  130, Trap Disable Register 0 */
#define SCU_TRAPDIS0     /*lint --e(923)*/ (*(volatile Ifx_SCU_TRAPDIS0 *)0xF0036130u)

/** \\brief  120, Trap Disable Register 1 */
#define SCU_TRAPDIS1     /*lint --e(923)*/ (*(volatile Ifx_SCU_TRAPDIS1 *)0xF0036120u)

/** \\brief  128, Trap Set Register */
#define SCU_TRAPSET      /*lint --e(923)*/ (*(volatile Ifx_SCU_TRAPSET *)0xF0036128u)

/** \\brief  124, Trap Status Register */
#define SCU_TRAPSTAT     /*lint --e(923)*/ (*(volatile Ifx_SCU_TRAPSTAT *)0xF0036124u)

/** \\brief  24C, CPU WDT Control Register 0 */
#define SCU_WDTCPU0_CON0 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON0 *)0xF003624Cu)

/** Alias (User Manual Name) for SCU_WDTCPU0_CON0.
 * To use register names with standard convension, please use SCU_WDTCPU0_CON0.
 */
#define SCU_WDTCPU0CON0  (SCU_WDTCPU0_CON0)

/** \\brief  250, CPU WDT Control Register 1 */
#define SCU_WDTCPU0_CON1 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON1 *)0xF0036250u)

/** Alias (User Manual Name) for SCU_WDTCPU0_CON1.
 * To use register names with standard convension, please use SCU_WDTCPU0_CON1.
 */
#define SCU_WDTCPU0CON1  (SCU_WDTCPU0_CON1)

/** \\brief  254, CPU WDT Status Register */
#define SCU_WDTCPU0_SR   /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_SR *)0xF0036254u)

/** Alias (User Manual Name) for SCU_WDTCPU0_SR.
 * To use register names with standard convension, please use SCU_WDTCPU0_SR.
 */
#define SCU_WDTCPU0SR    (SCU_WDTCPU0_SR)

/** \\brief  258, CPU WDT Control Register 0 */
#define SCU_WDTCPU1_CON0 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON0 *)0xF0036258u)

/** Alias (User Manual Name) for SCU_WDTCPU1_CON0.
 * To use register names with standard convension, please use SCU_WDTCPU1_CON0.
 */
#define SCU_WDTCPU1CON0  (SCU_WDTCPU1_CON0)

/** \\brief  25C, CPU WDT Control Register 1 */
#define SCU_WDTCPU1_CON1 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON1 *)0xF003625Cu)

/** Alias (User Manual Name) for SCU_WDTCPU1_CON1.
 * To use register names with standard convension, please use SCU_WDTCPU1_CON1.
 */
#define SCU_WDTCPU1CON1  (SCU_WDTCPU1_CON1)

/** \\brief  260, CPU WDT Status Register */
#define SCU_WDTCPU1_SR   /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_SR *)0xF0036260u)

/** Alias (User Manual Name) for SCU_WDTCPU1_SR.
 * To use register names with standard convension, please use SCU_WDTCPU1_SR.
 */
#define SCU_WDTCPU1SR    (SCU_WDTCPU1_SR)

/** \\brief  264, CPU WDT Control Register 0 */
#define SCU_WDTCPU2_CON0 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON0 *)0xF0036264u)

/** Alias (User Manual Name) for SCU_WDTCPU2_CON0.
 * To use register names with standard convension, please use SCU_WDTCPU2_CON0.
 */
#define SCU_WDTCPU2CON0  (SCU_WDTCPU2_CON0)

/** \\brief  268, CPU WDT Control Register 1 */
#define SCU_WDTCPU2_CON1 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON1 *)0xF0036268u)

/** Alias (User Manual Name) for SCU_WDTCPU2_CON1.
 * To use register names with standard convension, please use SCU_WDTCPU2_CON1.
 */
#define SCU_WDTCPU2CON1  (SCU_WDTCPU2_CON1)

/** \\brief  26C, CPU WDT Status Register */
#define SCU_WDTCPU2_SR   /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_SR *)0xF003626Cu)

/** Alias (User Manual Name) for SCU_WDTCPU2_SR.
 * To use register names with standard convension, please use SCU_WDTCPU2_SR.
 */
#define SCU_WDTCPU2SR    (SCU_WDTCPU2_SR)

/** \\brief  270, CPU WDT Control Register 0 */
#define SCU_WDTCPU3_CON0 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON0 *)0xF0036270u)

/** Alias (User Manual Name) for SCU_WDTCPU3_CON0.
 * To use register names with standard convension, please use SCU_WDTCPU3_CON0.
 */
#define SCU_WDTCPU3CON0  (SCU_WDTCPU3_CON0)

/** \\brief  274, CPU WDT Control Register 1 */
#define SCU_WDTCPU3_CON1 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON1 *)0xF0036274u)

/** Alias (User Manual Name) for SCU_WDTCPU3_CON1.
 * To use register names with standard convension, please use SCU_WDTCPU3_CON1.
 */
#define SCU_WDTCPU3CON1  (SCU_WDTCPU3_CON1)

/** \\brief  278, CPU WDT Status Register */
#define SCU_WDTCPU3_SR   /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_SR *)0xF0036278u)

/** Alias (User Manual Name) for SCU_WDTCPU3_SR.
 * To use register names with standard convension, please use SCU_WDTCPU3_SR.
 */
#define SCU_WDTCPU3SR    (SCU_WDTCPU3_SR)

/** \\brief  27C, CPU WDT Control Register 0 */
#define SCU_WDTCPU4_CON0 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON0 *)0xF003627Cu)

/** Alias (User Manual Name) for SCU_WDTCPU4_CON0.
 * To use register names with standard convension, please use SCU_WDTCPU4_CON0.
 */
#define SCU_WDTCPU4CON0  (SCU_WDTCPU4_CON0)

/** \\brief  280, CPU WDT Control Register 1 */
#define SCU_WDTCPU4_CON1 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON1 *)0xF0036280u)

/** Alias (User Manual Name) for SCU_WDTCPU4_CON1.
 * To use register names with standard convension, please use SCU_WDTCPU4_CON1.
 */
#define SCU_WDTCPU4CON1  (SCU_WDTCPU4_CON1)

/** \\brief  284, CPU WDT Status Register */
#define SCU_WDTCPU4_SR   /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_SR *)0xF0036284u)

/** Alias (User Manual Name) for SCU_WDTCPU4_SR.
 * To use register names with standard convension, please use SCU_WDTCPU4_SR.
 */
#define SCU_WDTCPU4SR    (SCU_WDTCPU4_SR)

/** \\brief  288, CPU WDT Control Register 0 */
#define SCU_WDTCPU5_CON0 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON0 *)0xF0036288u)

/** Alias (User Manual Name) for SCU_WDTCPU5_CON0.
 * To use register names with standard convension, please use SCU_WDTCPU5_CON0.
 */
#define SCU_WDTCPU5CON0  (SCU_WDTCPU5_CON0)

/** \\brief  28C, CPU WDT Control Register 1 */
#define SCU_WDTCPU5_CON1 /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_CON1 *)0xF003628Cu)

/** Alias (User Manual Name) for SCU_WDTCPU5_CON1.
 * To use register names with standard convension, please use SCU_WDTCPU5_CON1.
 */
#define SCU_WDTCPU5CON1  (SCU_WDTCPU5_CON1)

/** \\brief  290, CPU WDT Status Register */
#define SCU_WDTCPU5_SR   /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTCPU_SR *)0xF0036290u)

/** Alias (User Manual Name) for SCU_WDTCPU5_SR.
 * To use register names with standard convension, please use SCU_WDTCPU5_SR.
 */
#define SCU_WDTCPU5SR    (SCU_WDTCPU5_SR)

/** \\brief  2A8, System WDT Control Register 0 */
#define SCU_WDTS_CON0    /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTS_CON0 *)0xF00362A8u)

/** Alias (User Manual Name) for SCU_WDTS_CON0.
 * To use register names with standard convension, please use SCU_WDTS_CON0.
 */
#define SCU_WDTSCON0     (SCU_WDTS_CON0)

/** \\brief  2AC, System WDT Control Register 1 */
#define SCU_WDTS_CON1    /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTS_CON1 *)0xF00362ACu)

/** Alias (User Manual Name) for SCU_WDTS_CON1.
 * To use register names with standard convension, please use SCU_WDTS_CON1.
 */
#define SCU_WDTSCON1     (SCU_WDTS_CON1)

/** \\brief  2B0, System WDT Status Register */
#define SCU_WDTS_SR      /*lint --e(923)*/ (*(volatile Ifx_SCU_WDTS_SR *)0xF00362B0u)

/** Alias (User Manual Name) for SCU_WDTS_SR.
 * To use register names with standard convension, please use SCU_WDTS_SR.
 */
#define SCU_WDTSSR       (SCU_WDTS_SR)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSCU_REG_H */
