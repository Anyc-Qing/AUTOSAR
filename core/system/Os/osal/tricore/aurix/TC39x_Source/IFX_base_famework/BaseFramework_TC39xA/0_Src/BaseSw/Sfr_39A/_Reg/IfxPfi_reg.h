/**
 * \file IfxPfi_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: PFI_AURIXTC3XX_its_MCSFR.xml
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
 * \defgroup IfxLld_Pfi_Cfg Pfi address
 * \ingroup IfxLld_Pfi
 * 
 * \defgroup IfxLld_Pfi_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Pfi_Cfg
 * 
 * \defgroup IfxLld_Pfi_Cfg_Pfi00 2-PFI00
 * \ingroup IfxLld_Pfi_Cfg
 * 
 * \defgroup IfxLld_Pfi_Cfg_Pfi01 2-PFI01
 * \ingroup IfxLld_Pfi_Cfg
 * 
 * \defgroup IfxLld_Pfi_Cfg_Pfi02 2-PFI02
 * \ingroup IfxLld_Pfi_Cfg
 * 
 * \defgroup IfxLld_Pfi_Cfg_Pfi03 2-PFI03
 * \ingroup IfxLld_Pfi_Cfg
 * 
 * \defgroup IfxLld_Pfi_Cfg_Pfi04 2-PFI04
 * \ingroup IfxLld_Pfi_Cfg
 * 
 * \defgroup IfxLld_Pfi_Cfg_Pfi05 2-PFI05
 * \ingroup IfxLld_Pfi_Cfg
 * 
 */
#ifndef IFXPFI_REG_H
#define IFXPFI_REG_H 1
/******************************************************************************/
#include "IfxPfi_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_Cfg_BaseAddress
 * \{  */

/** \brief  PFI object */
#define MODULE_PFI00 /*lint --e(923)*/ (*(Ifx_PFI*)0xA8080000u)

/** \brief  PFI object */
#define MODULE_PFI01 /*lint --e(923)*/ (*(Ifx_PFI*)0xA8380000u)

/** \brief  PFI object */
#define MODULE_PFI02 /*lint --e(923)*/ (*(Ifx_PFI*)0xA8680000u)

/** \brief  PFI object */
#define MODULE_PFI03 /*lint --e(923)*/ (*(Ifx_PFI*)0xA8980000u)

/** \brief  PFI object */
#define MODULE_PFI04 /*lint --e(923)*/ (*(Ifx_PFI*)0xA8C80000u)

/** \brief  PFI object */
#define MODULE_PFI05 /*lint --e(923)*/ (*(Ifx_PFI*)0xA8F80000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_Cfg_Pfi00
 * \{  */


/** \brief  4000, DBAB Record */
#define PFI00_DBAB0_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8084000u)

/** Alias (User Manual Name) for PFI00_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI00_DBAB0_DBABRECORD.
*/
#define	PFI0_DBABRECORD0	(PFI00_DBAB0_DBABRECORD)

/** \brief  4020, DBAB Record */
#define PFI00_DBAB1_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8084020u)

/** Alias (User Manual Name) for PFI00_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI00_DBAB1_DBABRECORD.
*/
#define	PFI0_DBABRECORD1	(PFI00_DBAB1_DBABRECORD)

/** \brief  0, ECC Read Register */
#define PFI00_ECCR /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCR*)0xA8080000u)

/** Alias (User Manual Name) for PFI00_ECCR.
* To use register names with standard convension, please use PFI00_ECCR.
*/
#define	PFI0_ECCR	(PFI00_ECCR)

/** \brief  20, ECC Status Register */
#define PFI00_ECCS /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCS*)0xA8080020u)

/** Alias (User Manual Name) for PFI00_ECCS.
* To use register names with standard convension, please use PFI00_ECCS.
*/
#define	PFI0_ECCS	(PFI00_ECCS)

/** \brief  8000, MBAB Record */
#define PFI00_MBAB0_MBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_MBABRECORD*)0xA8088000u)

/** Alias (User Manual Name) for PFI00_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI00_MBAB0_MBABRECORD.
*/
#define	PFI0_MBABRECORD0	(PFI00_MBAB0_MBABRECORD)

/** \brief  2000, SBAB Record */
#define PFI00_SBAB0_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082000u)

/** Alias (User Manual Name) for PFI00_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB0_SBABRECORD.
*/
#define	PFI0_SBABRECORD0	(PFI00_SBAB0_SBABRECORD)

/** \brief  2140, SBAB Record */
#define PFI00_SBAB10_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082140u)

/** Alias (User Manual Name) for PFI00_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB10_SBABRECORD.
*/
#define	PFI0_SBABRECORD10	(PFI00_SBAB10_SBABRECORD)

/** \brief  2160, SBAB Record */
#define PFI00_SBAB11_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082160u)

/** Alias (User Manual Name) for PFI00_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB11_SBABRECORD.
*/
#define	PFI0_SBABRECORD11	(PFI00_SBAB11_SBABRECORD)

/** \brief  2180, SBAB Record */
#define PFI00_SBAB12_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082180u)

/** Alias (User Manual Name) for PFI00_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB12_SBABRECORD.
*/
#define	PFI0_SBABRECORD12	(PFI00_SBAB12_SBABRECORD)

/** \brief  21A0, SBAB Record */
#define PFI00_SBAB13_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA80821A0u)

/** Alias (User Manual Name) for PFI00_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB13_SBABRECORD.
*/
#define	PFI0_SBABRECORD13	(PFI00_SBAB13_SBABRECORD)

/** \brief  21C0, SBAB Record */
#define PFI00_SBAB14_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA80821C0u)

/** Alias (User Manual Name) for PFI00_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB14_SBABRECORD.
*/
#define	PFI0_SBABRECORD14	(PFI00_SBAB14_SBABRECORD)

/** \brief  21E0, SBAB Record */
#define PFI00_SBAB15_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA80821E0u)

/** Alias (User Manual Name) for PFI00_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB15_SBABRECORD.
*/
#define	PFI0_SBABRECORD15	(PFI00_SBAB15_SBABRECORD)

/** \brief  2200, SBAB Record */
#define PFI00_SBAB16_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082200u)

/** Alias (User Manual Name) for PFI00_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB16_SBABRECORD.
*/
#define	PFI0_SBABRECORD16	(PFI00_SBAB16_SBABRECORD)

/** \brief  2020, SBAB Record */
#define PFI00_SBAB1_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082020u)

/** Alias (User Manual Name) for PFI00_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB1_SBABRECORD.
*/
#define	PFI0_SBABRECORD1	(PFI00_SBAB1_SBABRECORD)

/** \brief  2040, SBAB Record */
#define PFI00_SBAB2_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082040u)

/** Alias (User Manual Name) for PFI00_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB2_SBABRECORD.
*/
#define	PFI0_SBABRECORD2	(PFI00_SBAB2_SBABRECORD)

/** \brief  2060, SBAB Record */
#define PFI00_SBAB3_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082060u)

/** Alias (User Manual Name) for PFI00_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB3_SBABRECORD.
*/
#define	PFI0_SBABRECORD3	(PFI00_SBAB3_SBABRECORD)

/** \brief  2080, SBAB Record */
#define PFI00_SBAB4_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082080u)

/** Alias (User Manual Name) for PFI00_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB4_SBABRECORD.
*/
#define	PFI0_SBABRECORD4	(PFI00_SBAB4_SBABRECORD)

/** \brief  20A0, SBAB Record */
#define PFI00_SBAB5_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA80820A0u)

/** Alias (User Manual Name) for PFI00_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB5_SBABRECORD.
*/
#define	PFI0_SBABRECORD5	(PFI00_SBAB5_SBABRECORD)

/** \brief  20C0, SBAB Record */
#define PFI00_SBAB6_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA80820C0u)

/** Alias (User Manual Name) for PFI00_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB6_SBABRECORD.
*/
#define	PFI0_SBABRECORD6	(PFI00_SBAB6_SBABRECORD)

/** \brief  20E0, SBAB Record */
#define PFI00_SBAB7_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA80820E0u)

/** Alias (User Manual Name) for PFI00_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB7_SBABRECORD.
*/
#define	PFI0_SBABRECORD7	(PFI00_SBAB7_SBABRECORD)

/** \brief  2100, SBAB Record */
#define PFI00_SBAB8_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082100u)

/** Alias (User Manual Name) for PFI00_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB8_SBABRECORD.
*/
#define	PFI0_SBABRECORD8	(PFI00_SBAB8_SBABRECORD)

/** \brief  2120, SBAB Record */
#define PFI00_SBAB9_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8082120u)

/** Alias (User Manual Name) for PFI00_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI00_SBAB9_SBABRECORD.
*/
#define	PFI0_SBABRECORD9	(PFI00_SBAB9_SBABRECORD)

/** \brief  C000, ZBAB Record */
#define PFI00_ZBAB0_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA808C000u)

/** Alias (User Manual Name) for PFI00_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI00_ZBAB0_ZBABRECORD.
*/
#define	PFI0_ZBABRECORD0	(PFI00_ZBAB0_ZBABRECORD)

/** \brief  C020, ZBAB Record */
#define PFI00_ZBAB1_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA808C020u)

/** Alias (User Manual Name) for PFI00_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI00_ZBAB1_ZBABRECORD.
*/
#define	PFI0_ZBABRECORD1	(PFI00_ZBAB1_ZBABRECORD)

/** \brief  C040, ZBAB Record */
#define PFI00_ZBAB2_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA808C040u)

/** Alias (User Manual Name) for PFI00_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI00_ZBAB2_ZBABRECORD.
*/
#define	PFI0_ZBABRECORD2	(PFI00_ZBAB2_ZBABRECORD)

/** \brief  C060, ZBAB Record */
#define PFI00_ZBAB3_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA808C060u)

/** Alias (User Manual Name) for PFI00_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI00_ZBAB3_ZBABRECORD.
*/
#define	PFI0_ZBABRECORD3	(PFI00_ZBAB3_ZBABRECORD)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_Cfg_Pfi01
 * \{  */

/** \brief  4000, DBAB Record */
#define PFI01_DBAB0_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8384000u)

/** Alias (User Manual Name) for PFI01_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI01_DBAB0_DBABRECORD.
*/
#define	PFI1_DBABRECORD0	(PFI01_DBAB0_DBABRECORD)

/** \brief  4020, DBAB Record */
#define PFI01_DBAB1_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8384020u)

/** Alias (User Manual Name) for PFI01_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI01_DBAB1_DBABRECORD.
*/
#define	PFI1_DBABRECORD1	(PFI01_DBAB1_DBABRECORD)

/** \brief  0, ECC Read Register */
#define PFI01_ECCR /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCR*)0xA8380000u)

/** Alias (User Manual Name) for PFI01_ECCR.
* To use register names with standard convension, please use PFI01_ECCR.
*/
#define	PFI1_ECCR	(PFI01_ECCR)

/** \brief  20, ECC Status Register */
#define PFI01_ECCS /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCS*)0xA8380020u)

/** Alias (User Manual Name) for PFI01_ECCS.
* To use register names with standard convension, please use PFI01_ECCS.
*/
#define	PFI1_ECCS	(PFI01_ECCS)

/** \brief  8000, MBAB Record */
#define PFI01_MBAB0_MBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_MBABRECORD*)0xA8388000u)

/** Alias (User Manual Name) for PFI01_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI01_MBAB0_MBABRECORD.
*/
#define	PFI1_MBABRECORD0	(PFI01_MBAB0_MBABRECORD)

/** \brief  2000, SBAB Record */
#define PFI01_SBAB0_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382000u)

/** Alias (User Manual Name) for PFI01_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB0_SBABRECORD.
*/
#define	PFI1_SBABRECORD0	(PFI01_SBAB0_SBABRECORD)

/** \brief  2140, SBAB Record */
#define PFI01_SBAB10_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382140u)

/** Alias (User Manual Name) for PFI01_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB10_SBABRECORD.
*/
#define	PFI1_SBABRECORD10	(PFI01_SBAB10_SBABRECORD)

/** \brief  2160, SBAB Record */
#define PFI01_SBAB11_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382160u)

/** Alias (User Manual Name) for PFI01_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB11_SBABRECORD.
*/
#define	PFI1_SBABRECORD11	(PFI01_SBAB11_SBABRECORD)

/** \brief  2180, SBAB Record */
#define PFI01_SBAB12_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382180u)

/** Alias (User Manual Name) for PFI01_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB12_SBABRECORD.
*/
#define	PFI1_SBABRECORD12	(PFI01_SBAB12_SBABRECORD)

/** \brief  21A0, SBAB Record */
#define PFI01_SBAB13_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA83821A0u)

/** Alias (User Manual Name) for PFI01_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB13_SBABRECORD.
*/
#define	PFI1_SBABRECORD13	(PFI01_SBAB13_SBABRECORD)

/** \brief  21C0, SBAB Record */
#define PFI01_SBAB14_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA83821C0u)

/** Alias (User Manual Name) for PFI01_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB14_SBABRECORD.
*/
#define	PFI1_SBABRECORD14	(PFI01_SBAB14_SBABRECORD)

/** \brief  21E0, SBAB Record */
#define PFI01_SBAB15_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA83821E0u)

/** Alias (User Manual Name) for PFI01_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB15_SBABRECORD.
*/
#define	PFI1_SBABRECORD15	(PFI01_SBAB15_SBABRECORD)

/** \brief  2200, SBAB Record */
#define PFI01_SBAB16_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382200u)

/** Alias (User Manual Name) for PFI01_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB16_SBABRECORD.
*/
#define	PFI1_SBABRECORD16	(PFI01_SBAB16_SBABRECORD)

/** \brief  2020, SBAB Record */
#define PFI01_SBAB1_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382020u)

/** Alias (User Manual Name) for PFI01_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB1_SBABRECORD.
*/
#define	PFI1_SBABRECORD1	(PFI01_SBAB1_SBABRECORD)

/** \brief  2040, SBAB Record */
#define PFI01_SBAB2_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382040u)

/** Alias (User Manual Name) for PFI01_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB2_SBABRECORD.
*/
#define	PFI1_SBABRECORD2	(PFI01_SBAB2_SBABRECORD)

/** \brief  2060, SBAB Record */
#define PFI01_SBAB3_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382060u)

/** Alias (User Manual Name) for PFI01_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB3_SBABRECORD.
*/
#define	PFI1_SBABRECORD3	(PFI01_SBAB3_SBABRECORD)

/** \brief  2080, SBAB Record */
#define PFI01_SBAB4_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382080u)

/** Alias (User Manual Name) for PFI01_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB4_SBABRECORD.
*/
#define	PFI1_SBABRECORD4	(PFI01_SBAB4_SBABRECORD)

/** \brief  20A0, SBAB Record */
#define PFI01_SBAB5_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA83820A0u)

/** Alias (User Manual Name) for PFI01_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB5_SBABRECORD.
*/
#define	PFI1_SBABRECORD5	(PFI01_SBAB5_SBABRECORD)

/** \brief  20C0, SBAB Record */
#define PFI01_SBAB6_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA83820C0u)

/** Alias (User Manual Name) for PFI01_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB6_SBABRECORD.
*/
#define	PFI1_SBABRECORD6	(PFI01_SBAB6_SBABRECORD)

/** \brief  20E0, SBAB Record */
#define PFI01_SBAB7_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA83820E0u)

/** Alias (User Manual Name) for PFI01_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB7_SBABRECORD.
*/
#define	PFI1_SBABRECORD7	(PFI01_SBAB7_SBABRECORD)

/** \brief  2100, SBAB Record */
#define PFI01_SBAB8_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382100u)

/** Alias (User Manual Name) for PFI01_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB8_SBABRECORD.
*/
#define	PFI1_SBABRECORD8	(PFI01_SBAB8_SBABRECORD)

/** \brief  2120, SBAB Record */
#define PFI01_SBAB9_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8382120u)

/** Alias (User Manual Name) for PFI01_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI01_SBAB9_SBABRECORD.
*/
#define	PFI1_SBABRECORD9	(PFI01_SBAB9_SBABRECORD)

/** \brief  C000, ZBAB Record */
#define PFI01_ZBAB0_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA838C000u)

/** Alias (User Manual Name) for PFI01_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI01_ZBAB0_ZBABRECORD.
*/
#define	PFI1_ZBABRECORD0	(PFI01_ZBAB0_ZBABRECORD)

/** \brief  C020, ZBAB Record */
#define PFI01_ZBAB1_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA838C020u)

/** Alias (User Manual Name) for PFI01_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI01_ZBAB1_ZBABRECORD.
*/
#define	PFI1_ZBABRECORD1	(PFI01_ZBAB1_ZBABRECORD)

/** \brief  C040, ZBAB Record */
#define PFI01_ZBAB2_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA838C040u)

/** Alias (User Manual Name) for PFI01_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI01_ZBAB2_ZBABRECORD.
*/
#define	PFI1_ZBABRECORD2	(PFI01_ZBAB2_ZBABRECORD)

/** \brief  C060, ZBAB Record */
#define PFI01_ZBAB3_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA838C060u)

/** Alias (User Manual Name) for PFI01_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI01_ZBAB3_ZBABRECORD.
*/
#define	PFI1_ZBABRECORD3	(PFI01_ZBAB3_ZBABRECORD)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_Cfg_Pfi02
 * \{  */

/** \brief  4000, DBAB Record */
#define PFI02_DBAB0_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8684000u)

/** Alias (User Manual Name) for PFI02_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI02_DBAB0_DBABRECORD.
*/
#define	PFI2_DBABRECORD0	(PFI02_DBAB0_DBABRECORD)

/** \brief  4020, DBAB Record */
#define PFI02_DBAB1_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8684020u)

/** Alias (User Manual Name) for PFI02_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI02_DBAB1_DBABRECORD.
*/
#define	PFI2_DBABRECORD1	(PFI02_DBAB1_DBABRECORD)

/** \brief  0, ECC Read Register */
#define PFI02_ECCR /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCR*)0xA8680000u)

/** Alias (User Manual Name) for PFI02_ECCR.
* To use register names with standard convension, please use PFI02_ECCR.
*/
#define	PFI2_ECCR	(PFI02_ECCR)

/** \brief  20, ECC Status Register */
#define PFI02_ECCS /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCS*)0xA8680020u)

/** Alias (User Manual Name) for PFI02_ECCS.
* To use register names with standard convension, please use PFI02_ECCS.
*/
#define	PFI2_ECCS	(PFI02_ECCS)

/** \brief  8000, MBAB Record */
#define PFI02_MBAB0_MBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_MBABRECORD*)0xA8688000u)

/** Alias (User Manual Name) for PFI02_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI02_MBAB0_MBABRECORD.
*/
#define	PFI2_MBABRECORD0	(PFI02_MBAB0_MBABRECORD)

/** \brief  2000, SBAB Record */
#define PFI02_SBAB0_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682000u)

/** Alias (User Manual Name) for PFI02_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB0_SBABRECORD.
*/
#define	PFI2_SBABRECORD0	(PFI02_SBAB0_SBABRECORD)

/** \brief  2140, SBAB Record */
#define PFI02_SBAB10_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682140u)

/** Alias (User Manual Name) for PFI02_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB10_SBABRECORD.
*/
#define	PFI2_SBABRECORD10	(PFI02_SBAB10_SBABRECORD)

/** \brief  2160, SBAB Record */
#define PFI02_SBAB11_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682160u)

/** Alias (User Manual Name) for PFI02_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB11_SBABRECORD.
*/
#define	PFI2_SBABRECORD11	(PFI02_SBAB11_SBABRECORD)

/** \brief  2180, SBAB Record */
#define PFI02_SBAB12_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682180u)

/** Alias (User Manual Name) for PFI02_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB12_SBABRECORD.
*/
#define	PFI2_SBABRECORD12	(PFI02_SBAB12_SBABRECORD)

/** \brief  21A0, SBAB Record */
#define PFI02_SBAB13_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA86821A0u)

/** Alias (User Manual Name) for PFI02_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB13_SBABRECORD.
*/
#define	PFI2_SBABRECORD13	(PFI02_SBAB13_SBABRECORD)

/** \brief  21C0, SBAB Record */
#define PFI02_SBAB14_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA86821C0u)

/** Alias (User Manual Name) for PFI02_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB14_SBABRECORD.
*/
#define	PFI2_SBABRECORD14	(PFI02_SBAB14_SBABRECORD)

/** \brief  21E0, SBAB Record */
#define PFI02_SBAB15_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA86821E0u)

/** Alias (User Manual Name) for PFI02_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB15_SBABRECORD.
*/
#define	PFI2_SBABRECORD15	(PFI02_SBAB15_SBABRECORD)

/** \brief  2200, SBAB Record */
#define PFI02_SBAB16_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682200u)

/** Alias (User Manual Name) for PFI02_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB16_SBABRECORD.
*/
#define	PFI2_SBABRECORD16	(PFI02_SBAB16_SBABRECORD)

/** \brief  2020, SBAB Record */
#define PFI02_SBAB1_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682020u)

/** Alias (User Manual Name) for PFI02_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB1_SBABRECORD.
*/
#define	PFI2_SBABRECORD1	(PFI02_SBAB1_SBABRECORD)

/** \brief  2040, SBAB Record */
#define PFI02_SBAB2_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682040u)

/** Alias (User Manual Name) for PFI02_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB2_SBABRECORD.
*/
#define	PFI2_SBABRECORD2	(PFI02_SBAB2_SBABRECORD)

/** \brief  2060, SBAB Record */
#define PFI02_SBAB3_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682060u)

/** Alias (User Manual Name) for PFI02_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB3_SBABRECORD.
*/
#define	PFI2_SBABRECORD3	(PFI02_SBAB3_SBABRECORD)

/** \brief  2080, SBAB Record */
#define PFI02_SBAB4_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682080u)

/** Alias (User Manual Name) for PFI02_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB4_SBABRECORD.
*/
#define	PFI2_SBABRECORD4	(PFI02_SBAB4_SBABRECORD)

/** \brief  20A0, SBAB Record */
#define PFI02_SBAB5_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA86820A0u)

/** Alias (User Manual Name) for PFI02_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB5_SBABRECORD.
*/
#define	PFI2_SBABRECORD5	(PFI02_SBAB5_SBABRECORD)

/** \brief  20C0, SBAB Record */
#define PFI02_SBAB6_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA86820C0u)

/** Alias (User Manual Name) for PFI02_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB6_SBABRECORD.
*/
#define	PFI2_SBABRECORD6	(PFI02_SBAB6_SBABRECORD)

/** \brief  20E0, SBAB Record */
#define PFI02_SBAB7_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA86820E0u)

/** Alias (User Manual Name) for PFI02_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB7_SBABRECORD.
*/
#define	PFI2_SBABRECORD7	(PFI02_SBAB7_SBABRECORD)

/** \brief  2100, SBAB Record */
#define PFI02_SBAB8_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682100u)

/** Alias (User Manual Name) for PFI02_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB8_SBABRECORD.
*/
#define	PFI2_SBABRECORD8	(PFI02_SBAB8_SBABRECORD)

/** \brief  2120, SBAB Record */
#define PFI02_SBAB9_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8682120u)

/** Alias (User Manual Name) for PFI02_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI02_SBAB9_SBABRECORD.
*/
#define	PFI2_SBABRECORD9	(PFI02_SBAB9_SBABRECORD)

/** \brief  C000, ZBAB Record */
#define PFI02_ZBAB0_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA868C000u)

/** Alias (User Manual Name) for PFI02_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI02_ZBAB0_ZBABRECORD.
*/
#define	PFI2_ZBABRECORD0	(PFI02_ZBAB0_ZBABRECORD)

/** \brief  C020, ZBAB Record */
#define PFI02_ZBAB1_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA868C020u)

/** Alias (User Manual Name) for PFI02_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI02_ZBAB1_ZBABRECORD.
*/
#define	PFI2_ZBABRECORD1	(PFI02_ZBAB1_ZBABRECORD)

/** \brief  C040, ZBAB Record */
#define PFI02_ZBAB2_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA868C040u)

/** Alias (User Manual Name) for PFI02_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI02_ZBAB2_ZBABRECORD.
*/
#define	PFI2_ZBABRECORD2	(PFI02_ZBAB2_ZBABRECORD)

/** \brief  C060, ZBAB Record */
#define PFI02_ZBAB3_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA868C060u)

/** Alias (User Manual Name) for PFI02_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI02_ZBAB3_ZBABRECORD.
*/
#define	PFI2_ZBABRECORD3	(PFI02_ZBAB3_ZBABRECORD)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_Cfg_Pfi03
 * \{  */


/** Alias (User Manual Name) for PFI03_BLADDR.
* To use register names with standard convension, please use PFI03_BLADDR.
*/
#define	PFI3_BLADDR	(PFI03_BLADDR)

/** \brief  4000, DBAB Record */
#define PFI03_DBAB0_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8984000u)

/** Alias (User Manual Name) for PFI03_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI03_DBAB0_DBABRECORD.
*/
#define	PFI3_DBABRECORD0	(PFI03_DBAB0_DBABRECORD)

/** \brief  4020, DBAB Record */
#define PFI03_DBAB1_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8984020u)

/** Alias (User Manual Name) for PFI03_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI03_DBAB1_DBABRECORD.
*/
#define	PFI3_DBABRECORD1	(PFI03_DBAB1_DBABRECORD)

/** \brief  0, ECC Read Register */
#define PFI03_ECCR /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCR*)0xA8980000u)

/** Alias (User Manual Name) for PFI03_ECCR.
* To use register names with standard convension, please use PFI03_ECCR.
*/
#define	PFI3_ECCR	(PFI03_ECCR)

/** \brief  20, ECC Status Register */
#define PFI03_ECCS /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCS*)0xA8980020u)

/** Alias (User Manual Name) for PFI03_ECCS.
* To use register names with standard convension, please use PFI03_ECCS.
*/
#define	PFI3_ECCS	(PFI03_ECCS)

/** \brief  8000, MBAB Record */
#define PFI03_MBAB0_MBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_MBABRECORD*)0xA8988000u)

/** Alias (User Manual Name) for PFI03_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI03_MBAB0_MBABRECORD.
*/
#define	PFI3_MBABRECORD0	(PFI03_MBAB0_MBABRECORD)

/** \brief  2000, SBAB Record */
#define PFI03_SBAB0_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982000u)

/** Alias (User Manual Name) for PFI03_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB0_SBABRECORD.
*/
#define	PFI3_SBABRECORD0	(PFI03_SBAB0_SBABRECORD)

/** \brief  2140, SBAB Record */
#define PFI03_SBAB10_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982140u)

/** Alias (User Manual Name) for PFI03_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB10_SBABRECORD.
*/
#define	PFI3_SBABRECORD10	(PFI03_SBAB10_SBABRECORD)

/** \brief  2160, SBAB Record */
#define PFI03_SBAB11_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982160u)

/** Alias (User Manual Name) for PFI03_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB11_SBABRECORD.
*/
#define	PFI3_SBABRECORD11	(PFI03_SBAB11_SBABRECORD)

/** \brief  2180, SBAB Record */
#define PFI03_SBAB12_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982180u)

/** Alias (User Manual Name) for PFI03_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB12_SBABRECORD.
*/
#define	PFI3_SBABRECORD12	(PFI03_SBAB12_SBABRECORD)

/** \brief  21A0, SBAB Record */
#define PFI03_SBAB13_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA89821A0u)

/** Alias (User Manual Name) for PFI03_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB13_SBABRECORD.
*/
#define	PFI3_SBABRECORD13	(PFI03_SBAB13_SBABRECORD)

/** \brief  21C0, SBAB Record */
#define PFI03_SBAB14_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA89821C0u)

/** Alias (User Manual Name) for PFI03_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB14_SBABRECORD.
*/
#define	PFI3_SBABRECORD14	(PFI03_SBAB14_SBABRECORD)

/** \brief  21E0, SBAB Record */
#define PFI03_SBAB15_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA89821E0u)

/** Alias (User Manual Name) for PFI03_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB15_SBABRECORD.
*/
#define	PFI3_SBABRECORD15	(PFI03_SBAB15_SBABRECORD)

/** \brief  2200, SBAB Record */
#define PFI03_SBAB16_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982200u)

/** Alias (User Manual Name) for PFI03_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB16_SBABRECORD.
*/
#define	PFI3_SBABRECORD16	(PFI03_SBAB16_SBABRECORD)

/** \brief  2020, SBAB Record */
#define PFI03_SBAB1_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982020u)

/** Alias (User Manual Name) for PFI03_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB1_SBABRECORD.
*/
#define	PFI3_SBABRECORD1	(PFI03_SBAB1_SBABRECORD)

/** \brief  2040, SBAB Record */
#define PFI03_SBAB2_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982040u)

/** Alias (User Manual Name) for PFI03_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB2_SBABRECORD.
*/
#define	PFI3_SBABRECORD2	(PFI03_SBAB2_SBABRECORD)

/** \brief  2060, SBAB Record */
#define PFI03_SBAB3_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982060u)

/** Alias (User Manual Name) for PFI03_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB3_SBABRECORD.
*/
#define	PFI3_SBABRECORD3	(PFI03_SBAB3_SBABRECORD)

/** \brief  2080, SBAB Record */
#define PFI03_SBAB4_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982080u)

/** Alias (User Manual Name) for PFI03_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB4_SBABRECORD.
*/
#define	PFI3_SBABRECORD4	(PFI03_SBAB4_SBABRECORD)

/** \brief  20A0, SBAB Record */
#define PFI03_SBAB5_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA89820A0u)

/** Alias (User Manual Name) for PFI03_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB5_SBABRECORD.
*/
#define	PFI3_SBABRECORD5	(PFI03_SBAB5_SBABRECORD)

/** \brief  20C0, SBAB Record */
#define PFI03_SBAB6_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA89820C0u)

/** Alias (User Manual Name) for PFI03_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB6_SBABRECORD.
*/
#define	PFI3_SBABRECORD6	(PFI03_SBAB6_SBABRECORD)

/** \brief  20E0, SBAB Record */
#define PFI03_SBAB7_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA89820E0u)

/** Alias (User Manual Name) for PFI03_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB7_SBABRECORD.
*/
#define	PFI3_SBABRECORD7	(PFI03_SBAB7_SBABRECORD)

/** \brief  2100, SBAB Record */
#define PFI03_SBAB8_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982100u)

/** Alias (User Manual Name) for PFI03_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB8_SBABRECORD.
*/
#define	PFI3_SBABRECORD8	(PFI03_SBAB8_SBABRECORD)

/** \brief  2120, SBAB Record */
#define PFI03_SBAB9_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8982120u)

/** Alias (User Manual Name) for PFI03_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI03_SBAB9_SBABRECORD.
*/
#define	PFI3_SBABRECORD9	(PFI03_SBAB9_SBABRECORD)

/** \brief  C000, ZBAB Record */
#define PFI03_ZBAB0_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA898C000u)

/** Alias (User Manual Name) for PFI03_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI03_ZBAB0_ZBABRECORD.
*/
#define	PFI3_ZBABRECORD0	(PFI03_ZBAB0_ZBABRECORD)

/** \brief  C020, ZBAB Record */
#define PFI03_ZBAB1_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA898C020u)

/** Alias (User Manual Name) for PFI03_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI03_ZBAB1_ZBABRECORD.
*/
#define	PFI3_ZBABRECORD1	(PFI03_ZBAB1_ZBABRECORD)

/** \brief  C040, ZBAB Record */
#define PFI03_ZBAB2_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA898C040u)

/** Alias (User Manual Name) for PFI03_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI03_ZBAB2_ZBABRECORD.
*/
#define	PFI3_ZBABRECORD2	(PFI03_ZBAB2_ZBABRECORD)

/** \brief  C060, ZBAB Record */
#define PFI03_ZBAB3_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA898C060u)

/** Alias (User Manual Name) for PFI03_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI03_ZBAB3_ZBABRECORD.
*/
#define	PFI3_ZBABRECORD3	(PFI03_ZBAB3_ZBABRECORD)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_Cfg_Pfi04
 * \{  */

/** \brief  4000, DBAB Record */
#define PFI04_DBAB0_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8C84000u)

/** Alias (User Manual Name) for PFI04_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI04_DBAB0_DBABRECORD.
*/
#define	PFI4_DBABRECORD0	(PFI04_DBAB0_DBABRECORD)

/** \brief  4020, DBAB Record */
#define PFI04_DBAB1_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8C84020u)

/** Alias (User Manual Name) for PFI04_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI04_DBAB1_DBABRECORD.
*/
#define	PFI4_DBABRECORD1	(PFI04_DBAB1_DBABRECORD)

/** \brief  0, ECC Read Register */
#define PFI04_ECCR /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCR*)0xA8C80000u)

/** Alias (User Manual Name) for PFI04_ECCR.
* To use register names with standard convension, please use PFI04_ECCR.
*/
#define	PFI4_ECCR	(PFI04_ECCR)

/** \brief  20, ECC Status Register */
#define PFI04_ECCS /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCS*)0xA8C80020u)

/** Alias (User Manual Name) for PFI04_ECCS.
* To use register names with standard convension, please use PFI04_ECCS.
*/
#define	PFI4_ECCS	(PFI04_ECCS)

/** \brief  8000, MBAB Record */
#define PFI04_MBAB0_MBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_MBABRECORD*)0xA8C88000u)

/** Alias (User Manual Name) for PFI04_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI04_MBAB0_MBABRECORD.
*/
#define	PFI4_MBABRECORD0	(PFI04_MBAB0_MBABRECORD)

/** \brief  2000, SBAB Record */
#define PFI04_SBAB0_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82000u)

/** Alias (User Manual Name) for PFI04_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB0_SBABRECORD.
*/
#define	PFI4_SBABRECORD0	(PFI04_SBAB0_SBABRECORD)

/** \brief  2140, SBAB Record */
#define PFI04_SBAB10_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82140u)

/** Alias (User Manual Name) for PFI04_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB10_SBABRECORD.
*/
#define	PFI4_SBABRECORD10	(PFI04_SBAB10_SBABRECORD)

/** \brief  2160, SBAB Record */
#define PFI04_SBAB11_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82160u)

/** Alias (User Manual Name) for PFI04_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB11_SBABRECORD.
*/
#define	PFI4_SBABRECORD11	(PFI04_SBAB11_SBABRECORD)

/** \brief  2180, SBAB Record */
#define PFI04_SBAB12_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82180u)

/** Alias (User Manual Name) for PFI04_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB12_SBABRECORD.
*/
#define	PFI4_SBABRECORD12	(PFI04_SBAB12_SBABRECORD)

/** \brief  21A0, SBAB Record */
#define PFI04_SBAB13_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C821A0u)

/** Alias (User Manual Name) for PFI04_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB13_SBABRECORD.
*/
#define	PFI4_SBABRECORD13	(PFI04_SBAB13_SBABRECORD)

/** \brief  21C0, SBAB Record */
#define PFI04_SBAB14_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C821C0u)

/** Alias (User Manual Name) for PFI04_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB14_SBABRECORD.
*/
#define	PFI4_SBABRECORD14	(PFI04_SBAB14_SBABRECORD)

/** \brief  21E0, SBAB Record */
#define PFI04_SBAB15_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C821E0u)

/** Alias (User Manual Name) for PFI04_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB15_SBABRECORD.
*/
#define	PFI4_SBABRECORD15	(PFI04_SBAB15_SBABRECORD)

/** \brief  2200, SBAB Record */
#define PFI04_SBAB16_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82200u)

/** Alias (User Manual Name) for PFI04_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB16_SBABRECORD.
*/
#define	PFI4_SBABRECORD16	(PFI04_SBAB16_SBABRECORD)

/** \brief  2020, SBAB Record */
#define PFI04_SBAB1_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82020u)

/** Alias (User Manual Name) for PFI04_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB1_SBABRECORD.
*/
#define	PFI4_SBABRECORD1	(PFI04_SBAB1_SBABRECORD)

/** \brief  2040, SBAB Record */
#define PFI04_SBAB2_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82040u)

/** Alias (User Manual Name) for PFI04_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB2_SBABRECORD.
*/
#define	PFI4_SBABRECORD2	(PFI04_SBAB2_SBABRECORD)

/** \brief  2060, SBAB Record */
#define PFI04_SBAB3_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82060u)

/** Alias (User Manual Name) for PFI04_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB3_SBABRECORD.
*/
#define	PFI4_SBABRECORD3	(PFI04_SBAB3_SBABRECORD)

/** \brief  2080, SBAB Record */
#define PFI04_SBAB4_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82080u)

/** Alias (User Manual Name) for PFI04_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB4_SBABRECORD.
*/
#define	PFI4_SBABRECORD4	(PFI04_SBAB4_SBABRECORD)

/** \brief  20A0, SBAB Record */
#define PFI04_SBAB5_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C820A0u)

/** Alias (User Manual Name) for PFI04_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB5_SBABRECORD.
*/
#define	PFI4_SBABRECORD5	(PFI04_SBAB5_SBABRECORD)

/** \brief  20C0, SBAB Record */
#define PFI04_SBAB6_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C820C0u)

/** Alias (User Manual Name) for PFI04_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB6_SBABRECORD.
*/
#define	PFI4_SBABRECORD6	(PFI04_SBAB6_SBABRECORD)

/** \brief  20E0, SBAB Record */
#define PFI04_SBAB7_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C820E0u)

/** Alias (User Manual Name) for PFI04_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB7_SBABRECORD.
*/
#define	PFI4_SBABRECORD7	(PFI04_SBAB7_SBABRECORD)

/** \brief  2100, SBAB Record */
#define PFI04_SBAB8_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82100u)

/** Alias (User Manual Name) for PFI04_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB8_SBABRECORD.
*/
#define	PFI4_SBABRECORD8	(PFI04_SBAB8_SBABRECORD)

/** \brief  2120, SBAB Record */
#define PFI04_SBAB9_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8C82120u)

/** Alias (User Manual Name) for PFI04_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI04_SBAB9_SBABRECORD.
*/
#define	PFI4_SBABRECORD9	(PFI04_SBAB9_SBABRECORD)

/** \brief  C000, ZBAB Record */
#define PFI04_ZBAB0_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA8C8C000u)

/** Alias (User Manual Name) for PFI04_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI04_ZBAB0_ZBABRECORD.
*/
#define	PFI4_ZBABRECORD0	(PFI04_ZBAB0_ZBABRECORD)

/** \brief  C020, ZBAB Record */
#define PFI04_ZBAB1_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA8C8C020u)

/** Alias (User Manual Name) for PFI04_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI04_ZBAB1_ZBABRECORD.
*/
#define	PFI4_ZBABRECORD1	(PFI04_ZBAB1_ZBABRECORD)

/** \brief  C040, ZBAB Record */
#define PFI04_ZBAB2_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA8C8C040u)

/** Alias (User Manual Name) for PFI04_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI04_ZBAB2_ZBABRECORD.
*/
#define	PFI4_ZBABRECORD2	(PFI04_ZBAB2_ZBABRECORD)

/** \brief  C060, ZBAB Record */
#define PFI04_ZBAB3_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA8C8C060u)

/** Alias (User Manual Name) for PFI04_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI04_ZBAB3_ZBABRECORD.
*/
#define	PFI4_ZBABRECORD3	(PFI04_ZBAB3_ZBABRECORD)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_Cfg_Pfi05
 * \{  */

/** \brief  4000, DBAB Record */
#define PFI05_DBAB0_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8F84000u)

/** Alias (User Manual Name) for PFI05_DBAB0_DBABRECORD.
* To use register names with standard convension, please use PFI05_DBAB0_DBABRECORD.
*/
#define	PFI5_DBABRECORD0	(PFI05_DBAB0_DBABRECORD)

/** \brief  4020, DBAB Record */
#define PFI05_DBAB1_DBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_DBABRECORD*)0xA8F84020u)

/** Alias (User Manual Name) for PFI05_DBAB1_DBABRECORD.
* To use register names with standard convension, please use PFI05_DBAB1_DBABRECORD.
*/
#define	PFI5_DBABRECORD1	(PFI05_DBAB1_DBABRECORD)

/** \brief  0, ECC Read Register */
#define PFI05_ECCR /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCR*)0xA8F80000u)

/** Alias (User Manual Name) for PFI05_ECCR.
* To use register names with standard convension, please use PFI05_ECCR.
*/
#define	PFI5_ECCR	(PFI05_ECCR)

/** \brief  20, ECC Status Register */
#define PFI05_ECCS /*lint --e(923)*/ (*(volatile Ifx_PFI_ECCS*)0xA8F80020u)

/** Alias (User Manual Name) for PFI05_ECCS.
* To use register names with standard convension, please use PFI05_ECCS.
*/
#define	PFI5_ECCS	(PFI05_ECCS)

/** \brief  8000, MBAB Record */
#define PFI05_MBAB0_MBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_MBABRECORD*)0xA8F88000u)

/** Alias (User Manual Name) for PFI05_MBAB0_MBABRECORD.
* To use register names with standard convension, please use PFI05_MBAB0_MBABRECORD.
*/
#define	PFI5_MBABRECORD0	(PFI05_MBAB0_MBABRECORD)

/** \brief  2000, SBAB Record */
#define PFI05_SBAB0_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82000u)

/** Alias (User Manual Name) for PFI05_SBAB0_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB0_SBABRECORD.
*/
#define	PFI5_SBABRECORD0	(PFI05_SBAB0_SBABRECORD)

/** \brief  2140, SBAB Record */
#define PFI05_SBAB10_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82140u)

/** Alias (User Manual Name) for PFI05_SBAB10_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB10_SBABRECORD.
*/
#define	PFI5_SBABRECORD10	(PFI05_SBAB10_SBABRECORD)

/** \brief  2160, SBAB Record */
#define PFI05_SBAB11_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82160u)

/** Alias (User Manual Name) for PFI05_SBAB11_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB11_SBABRECORD.
*/
#define	PFI5_SBABRECORD11	(PFI05_SBAB11_SBABRECORD)

/** \brief  2180, SBAB Record */
#define PFI05_SBAB12_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82180u)

/** Alias (User Manual Name) for PFI05_SBAB12_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB12_SBABRECORD.
*/
#define	PFI5_SBABRECORD12	(PFI05_SBAB12_SBABRECORD)

/** \brief  21A0, SBAB Record */
#define PFI05_SBAB13_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F821A0u)

/** Alias (User Manual Name) for PFI05_SBAB13_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB13_SBABRECORD.
*/
#define	PFI5_SBABRECORD13	(PFI05_SBAB13_SBABRECORD)

/** \brief  21C0, SBAB Record */
#define PFI05_SBAB14_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F821C0u)

/** Alias (User Manual Name) for PFI05_SBAB14_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB14_SBABRECORD.
*/
#define	PFI5_SBABRECORD14	(PFI05_SBAB14_SBABRECORD)

/** \brief  21E0, SBAB Record */
#define PFI05_SBAB15_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F821E0u)

/** Alias (User Manual Name) for PFI05_SBAB15_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB15_SBABRECORD.
*/
#define	PFI5_SBABRECORD15	(PFI05_SBAB15_SBABRECORD)

/** \brief  2200, SBAB Record */
#define PFI05_SBAB16_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82200u)

/** Alias (User Manual Name) for PFI05_SBAB16_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB16_SBABRECORD.
*/
#define	PFI5_SBABRECORD16	(PFI05_SBAB16_SBABRECORD)

/** \brief  2020, SBAB Record */
#define PFI05_SBAB1_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82020u)

/** Alias (User Manual Name) for PFI05_SBAB1_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB1_SBABRECORD.
*/
#define	PFI5_SBABRECORD1	(PFI05_SBAB1_SBABRECORD)

/** \brief  2040, SBAB Record */
#define PFI05_SBAB2_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82040u)

/** Alias (User Manual Name) for PFI05_SBAB2_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB2_SBABRECORD.
*/
#define	PFI5_SBABRECORD2	(PFI05_SBAB2_SBABRECORD)

/** \brief  2060, SBAB Record */
#define PFI05_SBAB3_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82060u)

/** Alias (User Manual Name) for PFI05_SBAB3_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB3_SBABRECORD.
*/
#define	PFI5_SBABRECORD3	(PFI05_SBAB3_SBABRECORD)

/** \brief  2080, SBAB Record */
#define PFI05_SBAB4_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82080u)

/** Alias (User Manual Name) for PFI05_SBAB4_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB4_SBABRECORD.
*/
#define	PFI5_SBABRECORD4	(PFI05_SBAB4_SBABRECORD)

/** \brief  20A0, SBAB Record */
#define PFI05_SBAB5_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F820A0u)

/** Alias (User Manual Name) for PFI05_SBAB5_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB5_SBABRECORD.
*/
#define	PFI5_SBABRECORD5	(PFI05_SBAB5_SBABRECORD)

/** \brief  20C0, SBAB Record */
#define PFI05_SBAB6_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F820C0u)

/** Alias (User Manual Name) for PFI05_SBAB6_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB6_SBABRECORD.
*/
#define	PFI5_SBABRECORD6	(PFI05_SBAB6_SBABRECORD)

/** \brief  20E0, SBAB Record */
#define PFI05_SBAB7_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F820E0u)

/** Alias (User Manual Name) for PFI05_SBAB7_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB7_SBABRECORD.
*/
#define	PFI5_SBABRECORD7	(PFI05_SBAB7_SBABRECORD)

/** \brief  2100, SBAB Record */
#define PFI05_SBAB8_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82100u)

/** Alias (User Manual Name) for PFI05_SBAB8_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB8_SBABRECORD.
*/
#define	PFI5_SBABRECORD8	(PFI05_SBAB8_SBABRECORD)

/** \brief  2120, SBAB Record */
#define PFI05_SBAB9_SBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_SBABRECORD*)0xA8F82120u)

/** Alias (User Manual Name) for PFI05_SBAB9_SBABRECORD.
* To use register names with standard convension, please use PFI05_SBAB9_SBABRECORD.
*/
#define	PFI5_SBABRECORD9	(PFI05_SBAB9_SBABRECORD)

/** \brief  C000, ZBAB Record */
#define PFI05_ZBAB0_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA8F8C000u)

/** Alias (User Manual Name) for PFI05_ZBAB0_ZBABRECORD.
* To use register names with standard convension, please use PFI05_ZBAB0_ZBABRECORD.
*/
#define	PFI5_ZBABRECORD0	(PFI05_ZBAB0_ZBABRECORD)

/** \brief  C020, ZBAB Record */
#define PFI05_ZBAB1_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA8F8C020u)

/** Alias (User Manual Name) for PFI05_ZBAB1_ZBABRECORD.
* To use register names with standard convension, please use PFI05_ZBAB1_ZBABRECORD.
*/
#define	PFI5_ZBABRECORD1	(PFI05_ZBAB1_ZBABRECORD)

/** \brief  C040, ZBAB Record */
#define PFI05_ZBAB2_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA8F8C040u)

/** Alias (User Manual Name) for PFI05_ZBAB2_ZBABRECORD.
* To use register names with standard convension, please use PFI05_ZBAB2_ZBABRECORD.
*/
#define	PFI5_ZBABRECORD2	(PFI05_ZBAB2_ZBABRECORD)

/** \brief  C060, ZBAB Record */
#define PFI05_ZBAB3_ZBABRECORD /*lint --e(923)*/ (*(volatile Ifx_PFI_ZBABRECORD*)0xA8F8C060u)

/** Alias (User Manual Name) for PFI05_ZBAB3_ZBABRECORD.
* To use register names with standard convension, please use PFI05_ZBAB3_ZBABRECORD.
*/
#define	PFI5_ZBABRECORD3	(PFI05_ZBAB3_ZBABRECORD)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPFI_REG_H */
