/**
 * \file IfxConverter_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:42 GMT
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
 * \defgroup IfxLld_Converter_Registers_Cfg Converter address
 * \ingroup IfxLld_Converter_Registers
 * 
 * \defgroup IfxLld_Converter_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Converter_Registers_Cfg
 *
 * \defgroup IfxLld_Converter_Registers_Cfg_Convctrl 2-CONVCTRL
 * \ingroup IfxLld_Converter_Registers_Cfg
 *
 *
 */
#ifndef IFXCONVERTER_REG_H
#define IFXCONVERTER_REG_H 1
/******************************************************************************/
#include "IfxConverter_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Converter_Cfg_BaseAddress
 * \{  */

/** \brief CONVERTER object */
#define MODULE_CONVCTRL /*lint --e(923)*/ ((*(Ifx_CONVERTER*)0xF0025000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Converter_Cfg_Convctrl
 * \{  */
/** \brief 0, Clock Control Register */
#define CONVCTRL_CLC /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_CLC*)0xF0025000u)

/** \brief 8, Module Identification Register */
#define CONVCTRL_ID /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_ID*)0xF0025008u)

/** \brief 28, OCDS Control and Status Register */
#define CONVCTRL_OCS /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_OCS*)0xF0025028u)

/** \brief 2C, Kernel Reset Status Clear Register */
#define CONVCTRL_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_KRSTCLR*)0xF002502Cu)

/** \brief 30, Kernel Reset Register 1 */
#define CONVCTRL_KRST1 /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_KRST1*)0xF0025030u)

/** \brief 34, Kernel Reset Register 0 */
#define CONVCTRL_KRST0 /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_KRST0*)0xF0025034u)

/** \brief 38, Access Enable Register 1 */
#define CONVCTRL_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_ACCEN1*)0xF0025038u)

/** \brief 3C, Access Enable Register 0 */
#define CONVCTRL_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_ACCEN0*)0xF002503Cu)

/** \brief 7C, Converter Control Block Control Register */
#define CONVCTRL_CCCTRL /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_CCCTRL*)0xF002507Cu)

/** \brief 80, Phase Synchronizer Configuration Register */
#define CONVCTRL_PHSCFG /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_PHSCFG*)0xF0025080u)

/** \brief A0, Voltage Regulator Configuration Register */
#define CONVCTRL_VRCFG /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_VRCFG*)0xF00250A0u)

/** \brief A4, Voltage Regulator Status Register */
#define CONVCTRL_VRSTAT /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_VRSTAT*)0xF00250A4u)

/** \brief C0, P/I Regulator Configuration Register */
#define CONVCTRL_PICFG /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_PICFG*)0xF00250C0u)

/** \brief C4, Sinewave Gen. Config. Register, A-Factor */
#define CONVCTRL_SGCFGA /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_SGCFGA*)0xF00250C4u)

/** \brief C8, Sinewave Gen. Config. Register, K-Factor */
#define CONVCTRL_SGCFGK /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_SGCFGK*)0xF00250C8u)

/** \brief CC, Slope Configuration Register */
#define CONVCTRL_SLOPE /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_SLOPE*)0xF00250CCu)

/** \brief D0, Minimum Value Register */
#define CONVCTRL_MIN /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_MIN*)0xF00250D0u)

/** \brief D4, Maximum Value Register */
#define CONVCTRL_MAX /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_MAX*)0xF00250D4u)

/** \brief D8, Shift Register */
#define CONVCTRL_SHIFT /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_SHIFT*)0xF00250D8u)

/** \brief DC, Test Configuration Register */
#define CONVCTRL_TESTCFG /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_TESTCFG*)0xF00250DCu)

/** \brief E0, Flags Register */
#define CONVCTRL_FLAGS /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_FLAGS*)0xF00250E0u)

/** \brief E4, Miscellaneous Control Register */
#define CONVCTRL_MISC /*lint --e(923)*/ (*(volatile Ifx_CONVERTER_MISC*)0xF00250E4u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXCONVERTER_REG_H */
