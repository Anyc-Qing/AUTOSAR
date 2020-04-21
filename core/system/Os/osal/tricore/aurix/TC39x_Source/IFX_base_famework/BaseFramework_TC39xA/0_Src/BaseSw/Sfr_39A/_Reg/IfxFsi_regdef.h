/**
 * \file IfxFsi_regdef.h
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
 * \defgroup IfxLld_Fsi_Registers FsiRegisters
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Fsi_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Fsi_Registers
 * 
 * \defgroup IfxLld_Fsi_Registers_union Register unions
 * \ingroup IfxLld_Fsi_Registers
 * 
 * \defgroup IfxLld_Fsi_Registers_struct Memory map
 * \ingroup IfxLld_Fsi_Registers
 */
#ifndef IFXFSI_REGDEF_H
#define IFXFSI_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Fsi_Bitfields
 * \{  */
/** \brief Communication Register 1 */
typedef struct _Ifx_FSI_COMM_1_Bits
{
    Ifx_UReg_8Bit COMM1:8;            /**< \brief [7:0] FSI Communication 1 - COMM1 (rw) */
} Ifx_FSI_COMM_1_Bits;

/** \brief Communication Register 2 */
typedef struct _Ifx_FSI_COMM_2_Bits
{
    Ifx_UReg_8Bit COMM2:8;            /**< \brief [7:0] FSI Communication 2 - COMM2 (rw) */
} Ifx_FSI_COMM_2_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_fsi_union
 * \{   */
/** \brief Communication Register 1   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_FSI_COMM_1_Bits B;            /**< \brief Bitfield access */
} Ifx_FSI_COMM_1;

/** \brief Communication Register 2   */
typedef union
{
    Ifx_UReg_8Bit U;                  /**< \brief Unsigned access */
    Ifx_SReg_8Bit I;                  /**< \brief Signed access */
    Ifx_FSI_COMM_2_Bits B;            /**< \brief Bitfield access */
} Ifx_FSI_COMM_2;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Fsi_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief FSI object */
typedef volatile struct _Ifx_FSI
{
       Ifx_UReg_8Bit                       reserved_0[4];          /**< \brief 0, \internal Reserved */
       Ifx_FSI_COMM_1                      COMM_1;                 /**< \brief 4, Communication Register 1*/
       Ifx_FSI_COMM_2                      COMM_2;                 /**< \brief 5, Communication Register 2*/
       Ifx_UReg_8Bit                       reserved_6[250];        /**< \brief 6, \internal Reserved */
} Ifx_FSI;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXFSI_REGDEF_H */
