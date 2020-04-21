/**
 * \file IfxFsi_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:15:19 GMT
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
 * \defgroup IfxLld_Fsi_Registers_Cfg Fsi address
 * \ingroup IfxLld_Fsi_Registers
 * 
 * \defgroup IfxLld_Fsi_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Fsi_Registers_Cfg
 *
 * \defgroup IfxLld_Fsi_Registers_Cfg_Fsi 2-FSI
 * \ingroup IfxLld_Fsi_Registers_Cfg
 *
 *
 */
#ifndef IFXFSI_REG_H
#define IFXFSI_REG_H 1
/******************************************************************************/
#include "IfxFsi_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Fsi_Cfg_BaseAddress
 * \{  */

/** \brief FSI object */
#define MODULE_FSI /*lint --e(923)*/ ((*(Ifx_FSI*)0xF8030000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Fsi_Cfg_Fsi
 * \{  */
/** \brief 4, Communication Register 1 */
#define FSI_COMM_1 /*lint --e(923)*/ (*(volatile Ifx_FSI_COMM_1*)0xF8030004u)

/** \brief 5, Communication Register 2 */
#define FSI_COMM_2 /*lint --e(923)*/ (*(volatile Ifx_FSI_COMM_2*)0xF8030005u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXFSI_REG_H */
