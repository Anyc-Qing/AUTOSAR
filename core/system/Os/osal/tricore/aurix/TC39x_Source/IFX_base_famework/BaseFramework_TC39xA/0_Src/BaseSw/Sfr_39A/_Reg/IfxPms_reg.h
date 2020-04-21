/**
 * \file IfxPms_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:57 GMT
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
 * \defgroup IfxLld_Pms_Registers_Cfg Pms address
 * \ingroup IfxLld_Pms_Registers
 * 
 * \defgroup IfxLld_Pms_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Pms_Registers_Cfg
 *
 * \defgroup IfxLld_Pms_Registers_Cfg_Pms 2-PMS
 * \ingroup IfxLld_Pms_Registers_Cfg
 *
 *
 */
#ifndef IFXPMS_REG_H
#define IFXPMS_REG_H 1
/******************************************************************************/
#include "IfxPms_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Pms_Cfg_BaseAddress
 * \{  */

/** \brief PMS object */
#define MODULE_PMS /*lint --e(923)*/ ((*(Ifx_PMS*)0xF0248000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pms_Cfg_Pms
 * \{  */
/** \brief 8, Identification Register */
#define PMS_ID /*lint --e(923)*/ (*(volatile Ifx_PMS_ID*)0xF0248008u)

/** \brief 2C, EVR Status Register */
#define PMS_EVR_STAT /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_STAT*)0xF024802Cu)
/** Alias (User Manual Name) for PMS_EVR_STAT.
* To use register names with standard convension, please use PMS_EVR_STAT.
*/
#define PMS_EVRSTAT (PMS_EVR_STAT)

/** \brief 34, EVR Primary ADC Status Register */
#define PMS_EVR_ADCSTAT /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_ADCSTAT*)0xF0248034u)
/** Alias (User Manual Name) for PMS_EVR_ADCSTAT.
* To use register names with standard convension, please use PMS_EVR_ADCSTAT.
*/
#define PMS_EVRADCSTAT (PMS_EVR_ADCSTAT)

/** \brief 3C, EVR Reset Control Register */
#define PMS_EVR_RSTCON /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_RSTCON*)0xF024803Cu)
/** Alias (User Manual Name) for PMS_EVR_RSTCON.
* To use register names with standard convension, please use PMS_EVR_RSTCON.
*/
#define PMS_EVRRSTCON (PMS_EVR_RSTCON)


/** \brief 44, EVR Reset Status Register */
#define PMS_EVR_RSTSTAT /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_RSTSTAT*)0xF0248044u)
/** Alias (User Manual Name) for PMS_EVR_RSTSTAT.
* To use register names with standard convension, please use PMS_EVR_RSTSTAT.
*/
#define PMS_EVRRSTSTAT (PMS_EVR_RSTSTAT)


/** \brief 4C, EVR Trim Control Register */
#define PMS_EVR_TRIM /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_TRIM*)0xF024804Cu)
/** Alias (User Manual Name) for PMS_EVR_TRIM.
* To use register names with standard convension, please use PMS_EVR_TRIM.
*/
#define PMS_EVRTRIM (PMS_EVR_TRIM)

/** \brief 50, EVR Trim Status Register */
#define PMS_EVR_TRIMSTAT /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_TRIMSTAT*)0xF0248050u)
/** Alias (User Manual Name) for PMS_EVR_TRIMSTAT.
* To use register names with standard convension, please use PMS_EVR_TRIMSTAT.
*/
#define PMS_EVRTRIMSTAT (PMS_EVR_TRIMSTAT)

/** \brief 60, EVR Secondary ADC Status Register 1 */
#define PMS_EVR_MONSTAT1 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_MONSTAT1*)0xF0248060u)
/** Alias (User Manual Name) for PMS_EVR_MONSTAT1.
* To use register names with standard convension, please use PMS_EVR_MONSTAT1.
*/
#define PMS_EVRMONSTAT1 (PMS_EVR_MONSTAT1)

/** \brief 64, EVR Secondary ADC Status Register 2 */
#define PMS_EVR_MONSTAT2 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_MONSTAT2*)0xF0248064u)
/** Alias (User Manual Name) for PMS_EVR_MONSTAT2.
* To use register names with standard convension, please use PMS_EVR_MONSTAT2.
*/
#define PMS_EVRMONSTAT2 (PMS_EVR_MONSTAT2)

/** \brief 68, EVR Secondary Monitor Control Register */
#define PMS_EVR_MONCTRL /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_MONCTRL*)0xF0248068u)
/** Alias (User Manual Name) for PMS_EVR_MONCTRL.
* To use register names with standard convension, please use PMS_EVR_MONCTRL.
*/
#define PMS_EVRMONCTRL (PMS_EVR_MONCTRL)

/** \brief 70, EVR Secondary Monitor Filter Register */
#define PMS_EVR_MONFILT /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_MONFILT*)0xF0248070u)
/** Alias (User Manual Name) for PMS_EVR_MONFILT.
* To use register names with standard convension, please use PMS_EVR_MONFILT.
*/
#define PMS_EVRMONFILT (PMS_EVR_MONFILT)

/** \brief 74, PMS Interrupt Enable Register */
#define PMS_EVR_PMSIEN /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_PMSIEN*)0xF0248074u)
/** Alias (User Manual Name) for PMS_EVR_PMSIEN.
* To use register names with standard convension, please use PMS_EVR_PMSIEN.
*/
#define PMS_PMSIEN (PMS_EVR_PMSIEN)

/** \brief 78, EVR Secondary Under-voltage Monitor Register */
#define PMS_EVR_UVMON /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_UVMON*)0xF0248078u)
/** Alias (User Manual Name) for PMS_EVR_UVMON.
* To use register names with standard convension, please use PMS_EVR_UVMON.
*/
#define PMS_EVRUVMON (PMS_EVR_UVMON)

/** \brief 7C, EVR Secondary Over-voltage Monitor Register */
#define PMS_EVR_OVMON /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_OVMON*)0xF024807Cu)
/** Alias (User Manual Name) for PMS_EVR_OVMON.
* To use register names with standard convension, please use PMS_EVR_OVMON.
*/
#define PMS_EVROVMON (PMS_EVR_OVMON)

/** \brief 80, EVR Secondary Under-voltage Monitor Register 2 */
#define PMS_EVR_UVMON2 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_UVMON2*)0xF0248080u)
/** Alias (User Manual Name) for PMS_EVR_UVMON2.
* To use register names with standard convension, please use PMS_EVR_UVMON2.
*/
#define PMS_EVRUVMON2 (PMS_EVR_UVMON2)

/** \brief 84, EVR Secondary Over-voltage Monitor Register 2 */
#define PMS_EVR_OVMON2 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_OVMON2*)0xF0248084u)
/** Alias (User Manual Name) for PMS_EVR_OVMON2.
* To use register names with standard convension, please use PMS_EVR_OVMON2.
*/
#define PMS_EVROVMON2 (PMS_EVR_OVMON2)

/** \brief 88, EVR Primary HSM Under-voltage Monitor Register */
#define PMS_EVR_HSMUVMON /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_HSMUVMON*)0xF0248088u)
/** Alias (User Manual Name) for PMS_EVR_HSMUVMON.
* To use register names with standard convension, please use PMS_EVR_HSMUVMON.
*/
#define PMS_HSMUVMON (PMS_EVR_HSMUVMON)

/** \brief 8C, EVR Primary HSM Over-voltage Monitor Register */
#define PMS_EVR_HSMOVMON /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_HSMOVMON*)0xF024808Cu)
/** Alias (User Manual Name) for PMS_EVR_HSMOVMON.
* To use register names with standard convension, please use PMS_EVR_HSMOVMON.
*/
#define PMS_HSMOVMON (PMS_EVR_HSMOVMON)

/** \brief 98, EVR Analog Control Register */
#define PMS_EVR_ANACTRL /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_ANACTRL*)0xF0248098u)
/** Alias (User Manual Name) for PMS_EVR_ANACTRL.
* To use register names with standard convension, please use PMS_EVR_ANACTRL.
*/
#define PMS_EVRANACTRL (PMS_EVR_ANACTRL)

/** \brief 9C, EVR Bandgap and Oscillator Control Register */
#define PMS_EVR_BGOCTRL /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_BGOCTRL*)0xF024809Cu)
/** Alias (User Manual Name) for PMS_EVR_BGOCTRL.
* To use register names with standard convension, please use PMS_EVR_BGOCTRL.
*/
#define PMS_EVRBGOCTRL (PMS_EVR_BGOCTRL)

/** \brief A0, EVR Oscillator Control Register */
#define PMS_EVR_OSCCTRL /*lint --e(923)*/ (*(volatile Ifx_PMS_EVR_OSCCTRL*)0xF02480A0u)
/** Alias (User Manual Name) for PMS_EVR_OSCCTRL.
* To use register names with standard convension, please use PMS_EVR_OSCCTRL.
*/
#define PMS_EVROSCCTRL (PMS_EVR_OSCCTRL)

/** \brief A4, EVR Oscillator Control Register 2 */
#define PMS_EVROSCCTRL2 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVROSCCTRL2*)0xF02480A4u)

/** \brief A8, EVR Bandgap and Oscillator Control Register 2 */
#define PMS_EVRBGOCTRL2 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRBGOCTRL2*)0xF02480A8u)

/** \brief B4, Standby and Wake-up Control Register 0 */
#define PMS_PMSW_CR0 /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_CR0*)0xF02480B4u)
/** Alias (User Manual Name) for PMS_PMSW_CR0.
* To use register names with standard convension, please use PMS_PMSW_CR0.
*/
#define PMS_PMSWCR0 (PMS_PMSW_CR0)

/** \brief B8, Standby and Wake-up Control Register 2 */
#define PMS_PMSW_CR2 /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_CR2*)0xF02480B8u)
/** Alias (User Manual Name) for PMS_PMSW_CR2.
* To use register names with standard convension, please use PMS_PMSW_CR2.
*/
#define PMS_PMSWCR2 (PMS_PMSW_CR2)

/** \brief C0, Standby and Wake-up Control Register 3 */
#define PMS_PMSW_CR3 /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_CR3*)0xF02480C0u)
/** Alias (User Manual Name) for PMS_PMSW_CR3.
* To use register names with standard convension, please use PMS_PMSW_CR3.
*/
#define PMS_PMSWCR3 (PMS_PMSW_CR3)

/** \brief C4, Standby and Wake-up Control Register 4 */
#define PMS_PMSW_CR4 /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_CR4*)0xF02480C4u)
/** Alias (User Manual Name) for PMS_PMSW_CR4.
* To use register names with standard convension, please use PMS_PMSW_CR4.
*/
#define PMS_PMSWCR4 (PMS_PMSW_CR4)

/** \brief C8, Standby and Wake-up Control Register 5 */
#define PMS_PMSW_CR5 /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_CR5*)0xF02480C8u)
/** Alias (User Manual Name) for PMS_PMSW_CR5.
* To use register names with standard convension, please use PMS_PMSW_CR5.
*/
#define PMS_PMSWCR5 (PMS_PMSW_CR5)

/** \brief D4, Standby and Wake-up Status Register */
#define PMS_PMSW_STAT /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_STAT*)0xF02480D4u)
/** Alias (User Manual Name) for PMS_PMSW_STAT.
* To use register names with standard convension, please use PMS_PMSW_STAT.
*/
#define PMS_PMSWSTAT (PMS_PMSW_STAT)

/** \brief D8, Standby and Wake-up Status Register 2 */
#define PMS_PMSW_STAT2 /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_STAT2*)0xF02480D8u)
/** Alias (User Manual Name) for PMS_PMSW_STAT2.
* To use register names with standard convension, please use PMS_PMSW_STAT2.
*/
#define PMS_PMSWSTAT2 (PMS_PMSW_STAT2)

/** \brief DC, Standby WUT Counter Register */
#define PMS_PMSW_UTCNT /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_UTCNT*)0xF02480DCu)
/** Alias (User Manual Name) for PMS_PMSW_UTCNT.
* To use register names with standard convension, please use PMS_PMSW_UTCNT.
*/
#define PMS_PMSWUTCNT (PMS_PMSW_UTCNT)

/** \brief E8, Standby and Wake-up Status Clear Register */
#define PMS_PMSW_STATCLR /*lint --e(923)*/ (*(volatile Ifx_PMS_PMSW_STATCLR*)0xF02480E8u)
/** Alias (User Manual Name) for PMS_PMSW_STATCLR.
* To use register names with standard convension, please use PMS_PMSW_STATCLR.
*/
#define PMS_PMSWSTATCLR (PMS_PMSW_STATCLR)

/** \brief FC, EVR SD Status Register 0 */
#define PMS_EVRSDSTAT0 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDSTAT0*)0xF02480FCu)

/** \brief 108, EVRC SD Control Register 0 */
#define PMS_EVRSDCTRL_CTRL0 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL0*)0xF0248108u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL0.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL0.
*/
#define PMS_EVRSDCTRL0 (PMS_EVRSDCTRL_CTRL0)

/** \brief 10C, EVRC SD Control Register 1 */
#define PMS_EVRSDCTRL_CTRL1 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL1*)0xF024810Cu)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL1.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL1.
*/
#define PMS_EVRSDCTRL1 (PMS_EVRSDCTRL_CTRL1)

/** \brief 110, EVRC SD Control Register 2 */
#define PMS_EVRSDCTRL_CTRL2 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL2*)0xF0248110u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL2.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL2.
*/
#define PMS_EVRSDCTRL2 (PMS_EVRSDCTRL_CTRL2)

/** \brief 114, EVRC SD Control Register 3 */
#define PMS_EVRSDCTRL_CTRL3 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL3*)0xF0248114u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL3.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL3.
*/
#define PMS_EVRSDCTRL3 (PMS_EVRSDCTRL_CTRL3)

/** \brief 118, EVRC SD Control Register 4 */
#define PMS_EVRSDCTRL_CTRL4 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL4*)0xF0248118u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL4.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL4.
*/
#define PMS_EVRSDCTRL4 (PMS_EVRSDCTRL_CTRL4)

/** \brief 11C, EVRC SD Control Register 5 */
#define PMS_EVRSDCTRL_CTRL5 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL5*)0xF024811Cu)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL5.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL5.
*/
#define PMS_EVRSDCTRL5 (PMS_EVRSDCTRL_CTRL5)

/** \brief 120, EVRC SD Control Register 6 */
#define PMS_EVRSDCTRL_CTRL6 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL6*)0xF0248120u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL6.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL6.
*/
#define PMS_EVRSDCTRL6 (PMS_EVRSDCTRL_CTRL6)

/** \brief 124, EVRC SD Control Register 7 */
#define PMS_EVRSDCTRL_CTRL7 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL7*)0xF0248124u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL7.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL7.
*/
#define PMS_EVRSDCTRL7 (PMS_EVRSDCTRL_CTRL7)

/** \brief 128, EVRC SD Control Register 8 */
#define PMS_EVRSDCTRL_CTRL8 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL8*)0xF0248128u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL8.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL8.
*/
#define PMS_EVRSDCTRL8 (PMS_EVRSDCTRL_CTRL8)

/** \brief 12C, EVRC SD Control Register 9 */
#define PMS_EVRSDCTRL_CTRL9 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL9*)0xF024812Cu)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL9.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL9.
*/
#define PMS_EVRSDCTRL9 (PMS_EVRSDCTRL_CTRL9)

/** \brief 130, EVRC SD Control Register 10 */
#define PMS_EVRSDCTRL_CTRL10 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL10*)0xF0248130u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL10.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL10.
*/
#define PMS_EVRSDCTRL10 (PMS_EVRSDCTRL_CTRL10)

/** \brief 134, EVRC SD Control Register 11 */
#define PMS_EVRSDCTRL_CTRL11 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCTRL_CTRL11*)0xF0248134u)
/** Alias (User Manual Name) for PMS_EVRSDCTRL_CTRL11.
* To use register names with standard convension, please use PMS_EVRSDCTRL_CTRL11.
*/
#define PMS_EVRSDCTRL11 (PMS_EVRSDCTRL_CTRL11)

/** \brief 148, EVRC SD Coefficient Register 0 */
#define PMS_EVRSDCOEFF_COEFF0 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF0*)0xF0248148u)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF0.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF0.
*/
#define PMS_EVRSDCOEFF0 (PMS_EVRSDCOEFF_COEFF0)

/** \brief 14C, EVRC SD Coefficient Register 1 */
#define PMS_EVRSDCOEFF_COEFF1 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF1*)0xF024814Cu)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF1.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF1.
*/
#define PMS_EVRSDCOEFF1 (PMS_EVRSDCOEFF_COEFF1)

/** \brief 150, EVRC SD Coefficient Register 2 */
#define PMS_EVRSDCOEFF_COEFF2 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF2*)0xF0248150u)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF2.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF2.
*/
#define PMS_EVRSDCOEFF2 (PMS_EVRSDCOEFF_COEFF2)

/** \brief 154, EVRC SD Coefficient Register 3 */
#define PMS_EVRSDCOEFF_COEFF3 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF3*)0xF0248154u)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF3.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF3.
*/
#define PMS_EVRSDCOEFF3 (PMS_EVRSDCOEFF_COEFF3)

/** \brief 158, EVRC SD Coefficient Register 4 */
#define PMS_EVRSDCOEFF_COEFF4 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF4*)0xF0248158u)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF4.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF4.
*/
#define PMS_EVRSDCOEFF4 (PMS_EVRSDCOEFF_COEFF4)

/** \brief 15C, EVRC SD Coefficient Register 5 */
#define PMS_EVRSDCOEFF_COEFF5 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF5*)0xF024815Cu)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF5.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF5.
*/
#define PMS_EVRSDCOEFF5 (PMS_EVRSDCOEFF_COEFF5)

/** \brief 160, EVRC SD Coefficient Register 6 */
#define PMS_EVRSDCOEFF_COEFF6 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF6*)0xF0248160u)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF6.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF6.
*/
#define PMS_EVRSDCOEFF6 (PMS_EVRSDCOEFF_COEFF6)

/** \brief 164, EVRC SD Coefficient Register 7 */
#define PMS_EVRSDCOEFF_COEFF7 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF7*)0xF0248164u)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF7.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF7.
*/
#define PMS_EVRSDCOEFF7 (PMS_EVRSDCOEFF_COEFF7)

/** \brief 168, EVRC SD Coefficient Register 8 */
#define PMS_EVRSDCOEFF_COEFF8 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF8*)0xF0248168u)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF8.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF8.
*/
#define PMS_EVRSDCOEFF8 (PMS_EVRSDCOEFF_COEFF8)

/** \brief 16C, EVRC SD Coefficient Register 9 */
#define PMS_EVRSDCOEFF_COEFF9 /*lint --e(923)*/ (*(volatile Ifx_PMS_EVRSDCOEFF_COEFF9*)0xF024816Cu)
/** Alias (User Manual Name) for PMS_EVRSDCOEFF_COEFF9.
* To use register names with standard convension, please use PMS_EVRSDCOEFF_COEFF9.
*/
#define PMS_EVRSDCOEFF9 (PMS_EVRSDCOEFF_COEFF9)

/** \brief 1C0, Die Temperature Sensor Status Register */
#define PMS_DTS_STAT /*lint --e(923)*/ (*(volatile Ifx_PMS_DTS_STAT*)0xF02481C0u)
/** Alias (User Manual Name) for PMS_DTS_STAT.
* To use register names with standard convension, please use PMS_DTS_STAT.
*/
#define PMS_DTSSTAT (PMS_DTS_STAT)

/** \brief 1C8, Die Temperature Sensor Limit Register */
#define PMS_DTS_LIM /*lint --e(923)*/ (*(volatile Ifx_PMS_DTS_LIM*)0xF02481C8u)
/** Alias (User Manual Name) for PMS_DTS_LIM.
* To use register names with standard convension, please use PMS_DTS_LIM.
*/
#define PMS_DTSLIM (PMS_DTS_LIM)

/** \brief 1E0, OCDS Trigger Set Select Register */
#define PMS_OTSS /*lint --e(923)*/ (*(volatile Ifx_PMS_OTSS*)0xF02481E0u)

/** \brief 1E4, OCDS Trigger Set Control 0 Register */
#define PMS_OTSC0 /*lint --e(923)*/ (*(volatile Ifx_PMS_OTSC0*)0xF02481E4u)

/** \brief 1E8, OCDS Trigger Set Control 1 Register */
#define PMS_OTSC1 /*lint --e(923)*/ (*(volatile Ifx_PMS_OTSC1*)0xF02481E8u)

/** \brief 1F8, Access Enable Register 1 */
#define PMS_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_PMS_ACCEN1*)0xF02481F8u)

/** \brief 1FC, Access Enable Register 0 */
#define PMS_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_PMS_ACCEN0*)0xF02481FCu)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPMS_REG_H */
