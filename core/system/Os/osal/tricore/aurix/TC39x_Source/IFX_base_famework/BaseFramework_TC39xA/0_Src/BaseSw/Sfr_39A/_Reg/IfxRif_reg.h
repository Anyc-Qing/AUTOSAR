/**
 * \file IfxRif_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:14:46 GMT
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
 * \defgroup IfxLld_Rif_Registers_Cfg Rif address
 * \ingroup IfxLld_Rif_Registers
 * 
 * \defgroup IfxLld_Rif_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Rif_Registers_Cfg
 *
 * \defgroup IfxLld_Rif_Registers_Cfg_Rif0 2-RIF0
 * \ingroup IfxLld_Rif_Registers_Cfg
 *
 * \defgroup IfxLld_Rif_Registers_Cfg_Rif1 2-RIF1
 * \ingroup IfxLld_Rif_Registers_Cfg
 *
 *
 */
#ifndef IFXRIF_REG_H
#define IFXRIF_REG_H 1
/******************************************************************************/
#include "IfxRif_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Rif_Cfg_BaseAddress
 * \{  */

/** \brief RIF object */
#define MODULE_RIF0 /*lint --e(923)*/ ((*(Ifx_RIF*)0xFA040000u))
#define MODULE_RIF1 /*lint --e(923)*/ ((*(Ifx_RIF*)0xFA040200u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Rif_Cfg_Rif0
 * \{  */
/** \brief 0, Clock Control Register */
#define RIF0_CLC /*lint --e(923)*/ (*(volatile Ifx_RIF_CLC*)0xFA040000u)

/** \brief 8, Module Identification Register */
#define RIF0_ID /*lint --e(923)*/ (*(volatile Ifx_RIF_ID*)0xFA040008u)

/** \brief 10, External Serial Interface Register */
#define RIF0_ESI /*lint --e(923)*/ (*(volatile Ifx_RIF_ESI*)0xFA040010u)

/** \brief 14, Internal Parallel Interface Register */
#define RIF0_IPI /*lint --e(923)*/ (*(volatile Ifx_RIF_IPI*)0xFA040014u)

/** \brief 18, FIFO and Lane Management Register */
#define RIF0_FLM /*lint --e(923)*/ (*(volatile Ifx_RIF_FLM*)0xFA040018u)

/** \brief 1C, Data Memory Interface Register */
#define RIF0_DMI /*lint --e(923)*/ (*(volatile Ifx_RIF_DMI*)0xFA04001Cu)

/** \brief 20, Radar State Machine Register 0 */
#define RIF0_RSM0 /*lint --e(923)*/ (*(volatile Ifx_RIF_RSM0*)0xFA040020u)

/** \brief 24, Radar State Machine Register 1 */
#define RIF0_RSM1 /*lint --e(923)*/ (*(volatile Ifx_RIF_RSM1*)0xFA040024u)

/** \brief 28, Radar State Machine Register 2 */
#define RIF0_RSM2 /*lint --e(923)*/ (*(volatile Ifx_RIF_RSM2*)0xFA040028u)

/** \brief 2C, Interrupt Control Register */
#define RIF0_INTCON /*lint --e(923)*/ (*(volatile Ifx_RIF_INTCON*)0xFA04002Cu)

/** \brief 30, Flags Set Register */
#define RIF0_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_RIF_FLAGSSET*)0xFA040030u)

/** \brief 34, Flags Clear Register */
#define RIF0_FLAGSCL /*lint --e(923)*/ (*(volatile Ifx_RIF_FLAGSCL*)0xFA040034u)

/** \brief 38, Frame Watchdog Register */
#define RIF0_FWDG /*lint --e(923)*/ (*(volatile Ifx_RIF_FWDG*)0xFA040038u)

/** \brief 3C, Data Formatting Unit Register */
#define RIF0_DFU /*lint --e(923)*/ (*(volatile Ifx_RIF_DFU*)0xFA04003Cu)

/** \brief 40, SRIF Override Configuration Register */
#define RIF0_SRIFOVRCFG /*lint --e(923)*/ (*(volatile Ifx_RIF_SRIFOVRCFG*)0xFA040040u)

/** \brief 44, Radar State Machine 2 Capture Register */
#define RIF0_RSM2CAP /*lint --e(923)*/ (*(volatile Ifx_RIF_RSM2CAP*)0xFA040044u)

/** \brief 4C, LVDS Control Register 0 */
#define RIF0_LVDSCON0 /*lint --e(923)*/ (*(volatile Ifx_RIF_LVDSCON0*)0xFA04004Cu)

/** \brief 50, LVDS Control Register 1 */
#define RIF0_LVDSCON1 /*lint --e(923)*/ (*(volatile Ifx_RIF_LVDSCON1*)0xFA040050u)

/** \brief 54, Debug Delay Register 0 */
#define RIF0_DBGDLY0 /*lint --e(923)*/ (*(volatile Ifx_RIF_DBGDLY0*)0xFA040054u)

/** \brief 58, Debug Delay Register 1 */
#define RIF0_DBGDLY1 /*lint --e(923)*/ (*(volatile Ifx_RIF_DBGDLY1*)0xFA040058u)

/** \brief 80, Debug Data Register 0 */
#define RIF0_DBG0 /*lint --e(923)*/ (*(volatile Ifx_RIF_DBG0*)0xFA040080u)

/** \brief 84, Debug Data Register 1 */
#define RIF0_DBG1 /*lint --e(923)*/ (*(volatile Ifx_RIF_DBG1*)0xFA040084u)

/** \brief E8, OCDS Control and Status */
#define RIF0_OCS /*lint --e(923)*/ (*(volatile Ifx_RIF_OCS*)0xFA0400E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define RIF0_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_RIF_KRSTCLR*)0xFA0400ECu)

/** \brief F0, Kernel Reset Register 1 */
#define RIF0_KRST1 /*lint --e(923)*/ (*(volatile Ifx_RIF_KRST1*)0xFA0400F0u)

/** \brief F4, Kernel Reset Register 0 */
#define RIF0_KRST0 /*lint --e(923)*/ (*(volatile Ifx_RIF_KRST0*)0xFA0400F4u)

/** \brief F8, Access Enable Register 1 */
#define RIF0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_RIF_ACCEN1*)0xFA0400F8u)

/** \brief FC, Access Enable Register 0 */
#define RIF0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_RIF_ACCEN0*)0xFA0400FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Rif_Cfg_Rif1
 * \{  */
/** \brief 0, Clock Control Register */
#define RIF1_CLC /*lint --e(923)*/ (*(volatile Ifx_RIF_CLC*)0xFA040200u)

/** \brief 8, Module Identification Register */
#define RIF1_ID /*lint --e(923)*/ (*(volatile Ifx_RIF_ID*)0xFA040208u)

/** \brief 10, External Serial Interface Register */
#define RIF1_ESI /*lint --e(923)*/ (*(volatile Ifx_RIF_ESI*)0xFA040210u)

/** \brief 14, Internal Parallel Interface Register */
#define RIF1_IPI /*lint --e(923)*/ (*(volatile Ifx_RIF_IPI*)0xFA040214u)

/** \brief 18, FIFO and Lane Management Register */
#define RIF1_FLM /*lint --e(923)*/ (*(volatile Ifx_RIF_FLM*)0xFA040218u)

/** \brief 1C, Data Memory Interface Register */
#define RIF1_DMI /*lint --e(923)*/ (*(volatile Ifx_RIF_DMI*)0xFA04021Cu)

/** \brief 20, Radar State Machine Register 0 */
#define RIF1_RSM0 /*lint --e(923)*/ (*(volatile Ifx_RIF_RSM0*)0xFA040220u)

/** \brief 24, Radar State Machine Register 1 */
#define RIF1_RSM1 /*lint --e(923)*/ (*(volatile Ifx_RIF_RSM1*)0xFA040224u)

/** \brief 28, Radar State Machine Register 2 */
#define RIF1_RSM2 /*lint --e(923)*/ (*(volatile Ifx_RIF_RSM2*)0xFA040228u)

/** \brief 2C, Interrupt Control Register */
#define RIF1_INTCON /*lint --e(923)*/ (*(volatile Ifx_RIF_INTCON*)0xFA04022Cu)

/** \brief 30, Flags Set Register */
#define RIF1_FLAGSSET /*lint --e(923)*/ (*(volatile Ifx_RIF_FLAGSSET*)0xFA040230u)

/** \brief 34, Flags Clear Register */
#define RIF1_FLAGSCL /*lint --e(923)*/ (*(volatile Ifx_RIF_FLAGSCL*)0xFA040234u)

/** \brief 38, Frame Watchdog Register */
#define RIF1_FWDG /*lint --e(923)*/ (*(volatile Ifx_RIF_FWDG*)0xFA040238u)

/** \brief 3C, Data Formatting Unit Register */
#define RIF1_DFU /*lint --e(923)*/ (*(volatile Ifx_RIF_DFU*)0xFA04023Cu)

/** \brief 40, SRIF Override Configuration Register */
#define RIF1_SRIFOVRCFG /*lint --e(923)*/ (*(volatile Ifx_RIF_SRIFOVRCFG*)0xFA040240u)

/** \brief 44, Radar State Machine 2 Capture Register */
#define RIF1_RSM2CAP /*lint --e(923)*/ (*(volatile Ifx_RIF_RSM2CAP*)0xFA040244u)

/** \brief 48, Skew Calibration Register */
#define RIF1_SKEWCAL /*lint --e(923)*/ (*(volatile Ifx_RIF_SKEWCAL*)0xFA040248u)

/** \brief 4C, LVDS Control Register 0 */
#define RIF1_LVDSCON0 /*lint --e(923)*/ (*(volatile Ifx_RIF_LVDSCON0*)0xFA04024Cu)

/** \brief 50, LVDS Control Register 1 */
#define RIF1_LVDSCON1 /*lint --e(923)*/ (*(volatile Ifx_RIF_LVDSCON1*)0xFA040250u)

/** \brief 54, Debug Delay Register 0 */
#define RIF1_DBGDLY0 /*lint --e(923)*/ (*(volatile Ifx_RIF_DBGDLY0*)0xFA040254u)

/** \brief 58, Debug Delay Register 1 */
#define RIF1_DBGDLY1 /*lint --e(923)*/ (*(volatile Ifx_RIF_DBGDLY1*)0xFA040258u)

/** \brief 80, Debug Data Register 0 */
#define RIF1_DBG0 /*lint --e(923)*/ (*(volatile Ifx_RIF_DBG0*)0xFA040280u)

/** \brief 84, Debug Data Register 1 */
#define RIF1_DBG1 /*lint --e(923)*/ (*(volatile Ifx_RIF_DBG1*)0xFA040284u)

/** \brief E8, OCDS Control and Status */
#define RIF1_OCS /*lint --e(923)*/ (*(volatile Ifx_RIF_OCS*)0xFA0402E8u)

/** \brief EC, Kernel Reset Status Clear Register */
#define RIF1_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_RIF_KRSTCLR*)0xFA0402ECu)

/** \brief F0, Kernel Reset Register 1 */
#define RIF1_KRST1 /*lint --e(923)*/ (*(volatile Ifx_RIF_KRST1*)0xFA0402F0u)

/** \brief F4, Kernel Reset Register 0 */
#define RIF1_KRST0 /*lint --e(923)*/ (*(volatile Ifx_RIF_KRST0*)0xFA0402F4u)

/** \brief F8, Access Enable Register 1 */
#define RIF1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_RIF_ACCEN1*)0xFA0402F8u)

/** \brief FC, Access Enable Register 0 */
#define RIF1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_RIF_ACCEN0*)0xFA0402FCu)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXRIF_REG_H */
