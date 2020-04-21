/**
 * \file IfxSpu_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:14:56 GMT
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
 * \defgroup IfxLld_Spu_Registers_Cfg Spu address
 * \ingroup IfxLld_Spu_Registers
 * 
 * \defgroup IfxLld_Spu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Spu_Registers_Cfg
 *
 * \defgroup IfxLld_Spu_Registers_Cfg_Spu0 2-SPU0
 * \ingroup IfxLld_Spu_Registers_Cfg
 *
 * \defgroup IfxLld_Spu_Registers_Cfg_Spu1 2-SPU1
 * \ingroup IfxLld_Spu_Registers_Cfg
 *
 *
 */
#ifndef IFXSPU_REG_H
#define IFXSPU_REG_H 1
/******************************************************************************/
#include "IfxSpu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Spu_Cfg_BaseAddress
 * \{  */

/** \brief SPU object */
#define MODULE_SPU0 /*lint --e(923)*/ ((*(Ifx_SPU*)0xFA800000u))
#define MODULE_SPU1 /*lint --e(923)*/ ((*(Ifx_SPU*)0xFAC00000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_Cfg_Spu0
 * \{  */
/** \brief 0, Clock Control */
#define SPU0_CLC /*lint --e(923)*/ (*(volatile Ifx_SPU_CLC*)0xFA800000u)

/** \brief 4, Module Identification Register */
#define SPU0_MODID /*lint --e(923)*/ (*(volatile Ifx_SPU_MODID*)0xFA800004u)

/** \brief 8, Status and Reporting */
#define SPU0_STAT /*lint --e(923)*/ (*(volatile Ifx_SPU_STAT*)0xFA800008u)

/** \brief 10, Input DMA Configuration */
#define SPU0_ID_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_CONF*)0xFA800010u)

/** \brief 14, Input DMA Configuration 2 */
#define SPU0_ID_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_CONF2*)0xFA800014u)

/** \brief 18, Input DMA Configuration: Radar Memory */
#define SPU0_ID_RM_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_CONF*)0xFA800018u)

/** \brief 1C, Inner Loop Address Offset */
#define SPU0_ID_RM_ILO /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_ILO*)0xFA80001Cu)

/** \brief 20, Outer Loop Address Offset */
#define SPU0_ID_RM_OLO /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_OLO*)0xFA800020u)

/** \brief 24, Bin Offset Address Configuration */
#define SPU0_ID_RM_BLO /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_BLO*)0xFA800024u)

/** \brief 28, Inner and Outer Loop Repeat */
#define SPU0_ID_RM_IOLR /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_IOLR*)0xFA800028u)

/** \brief 2C, Bin Loop Repeat */
#define SPU0_ID_RM_BLR /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_BLR*)0xFA80002Cu)

/** \brief 30,  */
#define SPU0_ID_RM_ACFG0 /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_ACFG0*)0xFA800030u)

/** \brief 34,  */
#define SPU0_ID_RM_ACFG1 /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_ACFG1*)0xFA800034u)

/** \brief 38, Pre-Acquisition Counter */
#define SPU0_PACTR /*lint --e(923)*/ (*(volatile Ifx_SPU_PACTR*)0xFA800038u)

/** \brief 3C, Double Pass Configuration */
#define SPU0_DPASS_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_DPASS_CONF*)0xFA80003Cu)

/** \brief 40, Loader Configuration */
#define SPU0_BE0_LDR_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_LDR_CONF*)0xFA800040u)

/** \brief 44, Loader Configuration Extended */
#define SPU0_BE0_LDR_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_LDR_CONF2*)0xFA800044u)

/** \brief 48, Antenna Offset */
#define SPU0_BE0_A0_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFA800048u)

/** \brief 4C, Antenna Offset */
#define SPU0_BE0_A1_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFA80004Cu)

/** \brief 50, Antenna Offset */
#define SPU0_BE0_A2_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFA800050u)

/** \brief 54, Antenna Offset */
#define SPU0_BE0_A3_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFA800054u)

/** \brief 58, Unloader Configuration */
#define SPU0_BE0_UNLDR_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF*)0xFA800058u)

/** \brief 5C, Unloader Configuration 2 */
#define SPU0_BE0_UNLDR_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF2*)0xFA80005Cu)

/** \brief 64, Output Data Processor Configuration */
#define SPU0_BE0_ODP_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_ODP_CONF*)0xFA800064u)

/** \brief 68, NCI Control */
#define SPU0_BE0_NCICTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_NCICTRL*)0xFA800068u)

/** \brief 6C, Summation Unit Control */
#define SPU0_BE0_SUMCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_SUMCTRL*)0xFA80006Cu)

/** \brief 70, Power Summation */
#define SPU0_BE0_PWRSUM /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_PWRSUM*)0xFA800070u)

/** \brief 74, Power Information Channel Control */
#define SPU0_BE0_PWRCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_PWRCTRL*)0xFA800074u)

/** \brief 78, CFAR Module Control */
#define SPU0_BE0_CFARCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_CFARCTRL*)0xFA800078u)

/** \brief 7C, Sideband Control */
#define SPU0_BE0_SBCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_SBCTRL*)0xFA80007Cu)

/** \brief 80, Loader Configuration */
#define SPU0_BE1_LDR_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_LDR_CONF*)0xFA800080u)

/** \brief 84, Loader Configuration Extended */
#define SPU0_BE1_LDR_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_LDR_CONF2*)0xFA800084u)

/** \brief 88, Antenna Offset */
#define SPU0_BE1_A0_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFA800088u)

/** \brief 8C, Antenna Offset */
#define SPU0_BE1_A1_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFA80008Cu)

/** \brief 90, Antenna Offset */
#define SPU0_BE1_A2_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFA800090u)

/** \brief 94, Antenna Offset */
#define SPU0_BE1_A3_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFA800094u)

/** \brief 98, Unloader Configuration */
#define SPU0_BE1_UNLDR_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF*)0xFA800098u)

/** \brief 9C, Unloader Configuration 2 */
#define SPU0_BE1_UNLDR_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF2*)0xFA80009Cu)

/** \brief A4, Output Data Processor Configuration */
#define SPU0_BE1_ODP_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_ODP_CONF*)0xFA8000A4u)

/** \brief A8, NCI Control */
#define SPU0_BE1_NCICTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_NCICTRL*)0xFA8000A8u)

/** \brief AC, Summation Unit Control */
#define SPU0_BE1_SUMCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_SUMCTRL*)0xFA8000ACu)

/** \brief B0, Power Summation */
#define SPU0_BE1_PWRSUM /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_PWRSUM*)0xFA8000B0u)

/** \brief B4, Power Information Channel Control */
#define SPU0_BE1_PWRCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_PWRCTRL*)0xFA8000B4u)

/** \brief B8, CFAR Module Control */
#define SPU0_BE1_CFARCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_CFARCTRL*)0xFA8000B8u)

/** \brief BC, Sideband Control */
#define SPU0_BE1_SBCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_SBCTRL*)0xFA8000BCu)

/** \brief C0, Bin Rejection Mask */
#define SPU0_BIN0_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000C0u)

/** \brief C4, Bin Rejection Mask */
#define SPU0_BIN1_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000C4u)

/** \brief C8, Bin Rejection Mask */
#define SPU0_BIN2_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000C8u)

/** \brief CC, Bin Rejection Mask */
#define SPU0_BIN3_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000CCu)

/** \brief D0, Bin Rejection Mask */
#define SPU0_BIN4_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000D0u)

/** \brief D4, Bin Rejection Mask */
#define SPU0_BIN5_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000D4u)

/** \brief D8, Bin Rejection Mask */
#define SPU0_BIN6_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000D8u)

/** \brief DC, Bin Rejection Mask */
#define SPU0_BIN7_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000DCu)

/** \brief E0, Bin Rejection Mask */
#define SPU0_BIN8_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000E0u)

/** \brief E4, Bin Rejection Mask */
#define SPU0_BIN9_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000E4u)

/** \brief E8, Bin Rejection Mask */
#define SPU0_BIN10_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000E8u)

/** \brief EC, Bin Rejection Mask */
#define SPU0_BIN11_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000ECu)

/** \brief F0, Bin Rejection Mask */
#define SPU0_BIN12_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000F0u)

/** \brief F4, Bin Rejection Mask */
#define SPU0_BIN13_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000F4u)

/** \brief F8, Bin Rejection Mask */
#define SPU0_BIN14_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000F8u)

/** \brief FC, Bin Rejection Mask */
#define SPU0_BIN15_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8000FCu)

/** \brief 100, Bin Rejection Mask */
#define SPU0_BIN16_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800100u)

/** \brief 104, Bin Rejection Mask */
#define SPU0_BIN17_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800104u)

/** \brief 108, Bin Rejection Mask */
#define SPU0_BIN18_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800108u)

/** \brief 10C, Bin Rejection Mask */
#define SPU0_BIN19_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80010Cu)

/** \brief 110, Bin Rejection Mask */
#define SPU0_BIN20_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800110u)

/** \brief 114, Bin Rejection Mask */
#define SPU0_BIN21_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800114u)

/** \brief 118, Bin Rejection Mask */
#define SPU0_BIN22_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800118u)

/** \brief 11C, Bin Rejection Mask */
#define SPU0_BIN23_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80011Cu)

/** \brief 120, Bin Rejection Mask */
#define SPU0_BIN24_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800120u)

/** \brief 124, Bin Rejection Mask */
#define SPU0_BIN25_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800124u)

/** \brief 128, Bin Rejection Mask */
#define SPU0_BIN26_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800128u)

/** \brief 12C, Bin Rejection Mask */
#define SPU0_BIN27_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80012Cu)

/** \brief 130, Bin Rejection Mask */
#define SPU0_BIN28_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800130u)

/** \brief 134, Bin Rejection Mask */
#define SPU0_BIN29_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800134u)

/** \brief 138, Bin Rejection Mask */
#define SPU0_BIN30_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800138u)

/** \brief 13C, Bin Rejection Mask */
#define SPU0_BIN31_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80013Cu)

/** \brief 140, Bin Rejection Mask */
#define SPU0_BIN32_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800140u)

/** \brief 144, Bin Rejection Mask */
#define SPU0_BIN33_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800144u)

/** \brief 148, Bin Rejection Mask */
#define SPU0_BIN34_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800148u)

/** \brief 14C, Bin Rejection Mask */
#define SPU0_BIN35_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80014Cu)

/** \brief 150, Bin Rejection Mask */
#define SPU0_BIN36_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800150u)

/** \brief 154, Bin Rejection Mask */
#define SPU0_BIN37_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800154u)

/** \brief 158, Bin Rejection Mask */
#define SPU0_BIN38_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800158u)

/** \brief 15C, Bin Rejection Mask */
#define SPU0_BIN39_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80015Cu)

/** \brief 160, Bin Rejection Mask */
#define SPU0_BIN40_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800160u)

/** \brief 164, Bin Rejection Mask */
#define SPU0_BIN41_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800164u)

/** \brief 168, Bin Rejection Mask */
#define SPU0_BIN42_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800168u)

/** \brief 16C, Bin Rejection Mask */
#define SPU0_BIN43_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80016Cu)

/** \brief 170, Bin Rejection Mask */
#define SPU0_BIN44_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800170u)

/** \brief 174, Bin Rejection Mask */
#define SPU0_BIN45_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800174u)

/** \brief 178, Bin Rejection Mask */
#define SPU0_BIN46_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800178u)

/** \brief 17C, Bin Rejection Mask */
#define SPU0_BIN47_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80017Cu)

/** \brief 180, Bin Rejection Mask */
#define SPU0_BIN48_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800180u)

/** \brief 184, Bin Rejection Mask */
#define SPU0_BIN49_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800184u)

/** \brief 188, Bin Rejection Mask */
#define SPU0_BIN50_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800188u)

/** \brief 18C, Bin Rejection Mask */
#define SPU0_BIN51_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80018Cu)

/** \brief 190, Bin Rejection Mask */
#define SPU0_BIN52_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800190u)

/** \brief 194, Bin Rejection Mask */
#define SPU0_BIN53_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800194u)

/** \brief 198, Bin Rejection Mask */
#define SPU0_BIN54_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA800198u)

/** \brief 19C, Bin Rejection Mask */
#define SPU0_BIN55_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA80019Cu)

/** \brief 1A0, Bin Rejection Mask */
#define SPU0_BIN56_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001A0u)

/** \brief 1A4, Bin Rejection Mask */
#define SPU0_BIN57_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001A4u)

/** \brief 1A8, Bin Rejection Mask */
#define SPU0_BIN58_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001A8u)

/** \brief 1AC, Bin Rejection Mask */
#define SPU0_BIN59_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001ACu)

/** \brief 1B0, Bin Rejection Mask */
#define SPU0_BIN60_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001B0u)

/** \brief 1B4, Bin Rejection Mask */
#define SPU0_BIN61_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001B4u)

/** \brief 1B8, Bin Rejection Mask */
#define SPU0_BIN62_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001B8u)

/** \brief 1BC, Bin Rejection Mask */
#define SPU0_BIN63_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFA8001BCu)

/** \brief 1C0, Magnitude Approximation Constants */
#define SPU0_MAGAPPROX /*lint --e(923)*/ (*(volatile Ifx_SPU_MAGAPPROX*)0xFA8001C0u)

/** \brief 1C4, NCI Antennae Scaling Factor */
#define SPU0_NCISCALAR0 /*lint --e(923)*/ (*(volatile Ifx_SPU_NCISCALAR0*)0xFA8001C4u)

/** \brief 1C8, NCI Antennae Scaling Factor */
#define SPU0_NCISCALAR1 /*lint --e(923)*/ (*(volatile Ifx_SPU_NCISCALAR1*)0xFA8001C8u)

/** \brief 1CC, NCI Antennae Scaling Factor */
#define SPU0_NCISCALAR2 /*lint --e(923)*/ (*(volatile Ifx_SPU_NCISCALAR2*)0xFA8001CCu)

/** \brief 1D0, NCI Antennae Scaling Factor */
#define SPU0_NCISCALAR3 /*lint --e(923)*/ (*(volatile Ifx_SPU_NCISCALAR3*)0xFA8001D0u)

/** \brief 1D4, CFAR Configuration */
#define SPU0_CFARCFG /*lint --e(923)*/ (*(volatile Ifx_SPU_CFARCFG*)0xFA8001D4u)

/** \brief 1D8, CFAR Configuration 2 */
#define SPU0_CFARCFG2 /*lint --e(923)*/ (*(volatile Ifx_SPU_CFARCFG2*)0xFA8001D8u)

/** \brief 1DC, CFAR Configuration 3 */
#define SPU0_CFARCFG3 /*lint --e(923)*/ (*(volatile Ifx_SPU_CFARCFG3*)0xFA8001DCu)

/** \brief 1E0, Scalar Addition Operand */
#define SPU0_SCALARADD /*lint --e(923)*/ (*(volatile Ifx_SPU_SCALARADD*)0xFA8001E0u)

/** \brief 1E4, Scalar Multiplication Operand */
#define SPU0_SCALARMULT /*lint --e(923)*/ (*(volatile Ifx_SPU_SCALARMULT*)0xFA8001E4u)

/** \brief 1E8, Bin Rejection Unit Control */
#define SPU0_BINREJCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BINREJCTRL*)0xFA8001E8u)

/** \brief 1EC, Local Maximum Control */
#define SPU0_LCLMAX /*lint --e(923)*/ (*(volatile Ifx_SPU_LCLMAX*)0xFA8001ECu)

/** \brief 1F0, SPU Control */
#define SPU0_CTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_CTRL*)0xFA8001F0u)

/** \brief 200, Dataset Metadata */
#define SPU0_MD0_METADATA /*lint --e(923)*/ (*(volatile Ifx_SPU_MD_METADATA*)0xFA800200u)

/** \brief 204, Dataset Metadata */
#define SPU0_MD1_METADATA /*lint --e(923)*/ (*(volatile Ifx_SPU_MD_METADATA*)0xFA800204u)

/** \brief 280, Input DMA Count */
#define SPU0_IDMCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_IDMCNT*)0xFA800280u)

/** \brief 284, Input Buffer Memory Count */
#define SPU0_IBMCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_IBMCNT*)0xFA800284u)

/** \brief 288, Input Buffer Memory Read Count */
#define SPU0_LDRCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_LDRCNT*)0xFA800288u)

/** \brief 28C, FFT Load Count */
#define SPU0_FFTWCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_FFTWCNT*)0xFA80028Cu)

/** \brief 290, FFT Unload Count */
#define SPU0_FFTRCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_FFTRCNT*)0xFA800290u)

/** \brief 294, Output Buffer Memory Write Count */
#define SPU0_ULDRCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ULDRCNT*)0xFA800294u)

/** \brief 298, Output Buffer Memory Read Count */
#define SPU0_ODMCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMCNT*)0xFA800298u)

/** \brief 29C, Bin Rejection Unit Load Count */
#define SPU0_BRCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_BRCNT*)0xFA80029Cu)

/** \brief 2A0, CFAR Unit Load Count */
#define SPU0_CFARCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_CFARCNT*)0xFA8002A0u)

/** \brief 2A4, Output DMA Port Write Count */
#define SPU0_ODMACNT0_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFA8002A4u)

/** \brief 2A8, Output DMA Port Write Count */
#define SPU0_ODMACNT1_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFA8002A8u)

/** \brief 2AC, Output DMA Port Write Count */
#define SPU0_ODMACNT2_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFA8002ACu)

/** \brief 2B0, Output DMA Port Write Count */
#define SPU0_ODMACNT3_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFA8002B0u)

/** \brief 2B4, Output DMA Port Write Count */
#define SPU0_ODMACNT4_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFA8002B4u)

/** \brief 2B8, Output DMA Port Write Count */
#define SPU0_ODMACNT5_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFA8002B8u)

/** \brief 2BC, Output DMA Port Write Count */
#define SPU0_ODMACNT6_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFA8002BCu)

/** \brief 2C0, Output DMA Port Write Count */
#define SPU0_ODMACNT7_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFA8002C0u)

/** \brief 2C4, Safety Counter Clear */
#define SPU0_CNTCLR /*lint --e(923)*/ (*(volatile Ifx_SPU_CNTCLR*)0xFA8002C4u)

/** \brief 2C8, SPU Monitor */
#define SPU0_MONITOR /*lint --e(923)*/ (*(volatile Ifx_SPU_MONITOR*)0xFA8002C8u)

/** \brief 3E4, Access Enable Register 0 */
#define SPU0_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_SPU_ACCEN0*)0xFA8003E4u)

/** \brief 3E8, Access Enable Register 1 */
#define SPU0_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_SPU_ACCEN1*)0xFA8003E8u)

/** \brief 3EC, OCDS Control and Status */
#define SPU0_OCS /*lint --e(923)*/ (*(volatile Ifx_SPU_OCS*)0xFA8003ECu)

/** \brief 3F0, OCDS Debug Access Register */
#define SPU0_ODA /*lint --e(923)*/ (*(volatile Ifx_SPU_ODA*)0xFA8003F0u)

/** \brief 3F4, Kernel Reset Register 0 */
#define SPU0_KRST0 /*lint --e(923)*/ (*(volatile Ifx_SPU_KRST0*)0xFA8003F4u)

/** \brief 3F8, Kernel Reset Register 1 */
#define SPU0_KRST1 /*lint --e(923)*/ (*(volatile Ifx_SPU_KRST1*)0xFA8003F8u)

/** \brief 3FC, Kernel Reset Clear */
#define SPU0_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_SPU_KRSTCLR*)0xFA8003FCu)

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_Cfg_Spu1
 * \{  */
/** \brief 0, Clock Control */
#define SPU1_CLC /*lint --e(923)*/ (*(volatile Ifx_SPU_CLC*)0xFAC00000u)

/** \brief 4, Module Identification Register */
#define SPU1_MODID /*lint --e(923)*/ (*(volatile Ifx_SPU_MODID*)0xFAC00004u)

/** \brief 8, Status and Reporting */
#define SPU1_STAT /*lint --e(923)*/ (*(volatile Ifx_SPU_STAT*)0xFAC00008u)

/** \brief 10, Input DMA Configuration */
#define SPU1_ID_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_CONF*)0xFAC00010u)

/** \brief 14, Input DMA Configuration 2 */
#define SPU1_ID_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_CONF2*)0xFAC00014u)

/** \brief 18, Input DMA Configuration: Radar Memory */
#define SPU1_ID_RM_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_CONF*)0xFAC00018u)

/** \brief 1C, Inner Loop Address Offset */
#define SPU1_ID_RM_ILO /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_ILO*)0xFAC0001Cu)

/** \brief 20, Outer Loop Address Offset */
#define SPU1_ID_RM_OLO /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_OLO*)0xFAC00020u)

/** \brief 24, Bin Offset Address Configuration */
#define SPU1_ID_RM_BLO /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_BLO*)0xFAC00024u)

/** \brief 28, Inner and Outer Loop Repeat */
#define SPU1_ID_RM_IOLR /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_IOLR*)0xFAC00028u)

/** \brief 2C, Bin Loop Repeat */
#define SPU1_ID_RM_BLR /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_BLR*)0xFAC0002Cu)

/** \brief 30,  */
#define SPU1_ID_RM_ACFG0 /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_ACFG0*)0xFAC00030u)

/** \brief 34,  */
#define SPU1_ID_RM_ACFG1 /*lint --e(923)*/ (*(volatile Ifx_SPU_ID_RM_ACFG1*)0xFAC00034u)

/** \brief 38, Pre-Acquisition Counter */
#define SPU1_PACTR /*lint --e(923)*/ (*(volatile Ifx_SPU_PACTR*)0xFAC00038u)

/** \brief 3C, Double Pass Configuration */
#define SPU1_DPASS_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_DPASS_CONF*)0xFAC0003Cu)

/** \brief 40, Loader Configuration */
#define SPU1_BE0_LDR_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_LDR_CONF*)0xFAC00040u)

/** \brief 44, Loader Configuration Extended */
#define SPU1_BE0_LDR_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_LDR_CONF2*)0xFAC00044u)

/** \brief 48, Antenna Offset */
#define SPU1_BE0_A0_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFAC00048u)

/** \brief 4C, Antenna Offset */
#define SPU1_BE0_A1_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFAC0004Cu)

/** \brief 50, Antenna Offset */
#define SPU1_BE0_A2_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFAC00050u)

/** \brief 54, Antenna Offset */
#define SPU1_BE0_A3_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFAC00054u)

/** \brief 58, Unloader Configuration */
#define SPU1_BE0_UNLDR_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF*)0xFAC00058u)

/** \brief 5C, Unloader Configuration 2 */
#define SPU1_BE0_UNLDR_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF2*)0xFAC0005Cu)

/** \brief 64, Output Data Processor Configuration */
#define SPU1_BE0_ODP_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_ODP_CONF*)0xFAC00064u)

/** \brief 68, NCI Control */
#define SPU1_BE0_NCICTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_NCICTRL*)0xFAC00068u)

/** \brief 6C, Summation Unit Control */
#define SPU1_BE0_SUMCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_SUMCTRL*)0xFAC0006Cu)

/** \brief 70, Power Summation */
#define SPU1_BE0_PWRSUM /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_PWRSUM*)0xFAC00070u)

/** \brief 74, Power Information Channel Control */
#define SPU1_BE0_PWRCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_PWRCTRL*)0xFAC00074u)

/** \brief 78, CFAR Module Control */
#define SPU1_BE0_CFARCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_CFARCTRL*)0xFAC00078u)

/** \brief 7C, Sideband Control */
#define SPU1_BE0_SBCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_SBCTRL*)0xFAC0007Cu)

/** \brief 80, Loader Configuration */
#define SPU1_BE1_LDR_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_LDR_CONF*)0xFAC00080u)

/** \brief 84, Loader Configuration Extended */
#define SPU1_BE1_LDR_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_LDR_CONF2*)0xFAC00084u)

/** \brief 88, Antenna Offset */
#define SPU1_BE1_A0_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFAC00088u)

/** \brief 8C, Antenna Offset */
#define SPU1_BE1_A1_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFAC0008Cu)

/** \brief 90, Antenna Offset */
#define SPU1_BE1_A2_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFAC00090u)

/** \brief 94, Antenna Offset */
#define SPU1_BE1_A3_ANTOFST /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_A_ANTOFST*)0xFAC00094u)

/** \brief 98, Unloader Configuration */
#define SPU1_BE1_UNLDR_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF*)0xFAC00098u)

/** \brief 9C, Unloader Configuration 2 */
#define SPU1_BE1_UNLDR_CONF2 /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_UNLDR_CONF2*)0xFAC0009Cu)

/** \brief A4, Output Data Processor Configuration */
#define SPU1_BE1_ODP_CONF /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_ODP_CONF*)0xFAC000A4u)

/** \brief A8, NCI Control */
#define SPU1_BE1_NCICTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_NCICTRL*)0xFAC000A8u)

/** \brief AC, Summation Unit Control */
#define SPU1_BE1_SUMCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_SUMCTRL*)0xFAC000ACu)

/** \brief B0, Power Summation */
#define SPU1_BE1_PWRSUM /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_PWRSUM*)0xFAC000B0u)

/** \brief B4, Power Information Channel Control */
#define SPU1_BE1_PWRCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_PWRCTRL*)0xFAC000B4u)

/** \brief B8, CFAR Module Control */
#define SPU1_BE1_CFARCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_CFARCTRL*)0xFAC000B8u)

/** \brief BC, Sideband Control */
#define SPU1_BE1_SBCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BE_SBCTRL*)0xFAC000BCu)

/** \brief C0, Bin Rejection Mask */
#define SPU1_BIN0_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000C0u)

/** \brief C4, Bin Rejection Mask */
#define SPU1_BIN1_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000C4u)

/** \brief C8, Bin Rejection Mask */
#define SPU1_BIN2_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000C8u)

/** \brief CC, Bin Rejection Mask */
#define SPU1_BIN3_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000CCu)

/** \brief D0, Bin Rejection Mask */
#define SPU1_BIN4_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000D0u)

/** \brief D4, Bin Rejection Mask */
#define SPU1_BIN5_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000D4u)

/** \brief D8, Bin Rejection Mask */
#define SPU1_BIN6_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000D8u)

/** \brief DC, Bin Rejection Mask */
#define SPU1_BIN7_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000DCu)

/** \brief E0, Bin Rejection Mask */
#define SPU1_BIN8_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000E0u)

/** \brief E4, Bin Rejection Mask */
#define SPU1_BIN9_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000E4u)

/** \brief E8, Bin Rejection Mask */
#define SPU1_BIN10_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000E8u)

/** \brief EC, Bin Rejection Mask */
#define SPU1_BIN11_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000ECu)

/** \brief F0, Bin Rejection Mask */
#define SPU1_BIN12_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000F0u)

/** \brief F4, Bin Rejection Mask */
#define SPU1_BIN13_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000F4u)

/** \brief F8, Bin Rejection Mask */
#define SPU1_BIN14_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000F8u)

/** \brief FC, Bin Rejection Mask */
#define SPU1_BIN15_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC000FCu)

/** \brief 100, Bin Rejection Mask */
#define SPU1_BIN16_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00100u)

/** \brief 104, Bin Rejection Mask */
#define SPU1_BIN17_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00104u)

/** \brief 108, Bin Rejection Mask */
#define SPU1_BIN18_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00108u)

/** \brief 10C, Bin Rejection Mask */
#define SPU1_BIN19_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0010Cu)

/** \brief 110, Bin Rejection Mask */
#define SPU1_BIN20_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00110u)

/** \brief 114, Bin Rejection Mask */
#define SPU1_BIN21_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00114u)

/** \brief 118, Bin Rejection Mask */
#define SPU1_BIN22_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00118u)

/** \brief 11C, Bin Rejection Mask */
#define SPU1_BIN23_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0011Cu)

/** \brief 120, Bin Rejection Mask */
#define SPU1_BIN24_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00120u)

/** \brief 124, Bin Rejection Mask */
#define SPU1_BIN25_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00124u)

/** \brief 128, Bin Rejection Mask */
#define SPU1_BIN26_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00128u)

/** \brief 12C, Bin Rejection Mask */
#define SPU1_BIN27_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0012Cu)

/** \brief 130, Bin Rejection Mask */
#define SPU1_BIN28_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00130u)

/** \brief 134, Bin Rejection Mask */
#define SPU1_BIN29_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00134u)

/** \brief 138, Bin Rejection Mask */
#define SPU1_BIN30_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00138u)

/** \brief 13C, Bin Rejection Mask */
#define SPU1_BIN31_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0013Cu)

/** \brief 140, Bin Rejection Mask */
#define SPU1_BIN32_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00140u)

/** \brief 144, Bin Rejection Mask */
#define SPU1_BIN33_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00144u)

/** \brief 148, Bin Rejection Mask */
#define SPU1_BIN34_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00148u)

/** \brief 14C, Bin Rejection Mask */
#define SPU1_BIN35_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0014Cu)

/** \brief 150, Bin Rejection Mask */
#define SPU1_BIN36_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00150u)

/** \brief 154, Bin Rejection Mask */
#define SPU1_BIN37_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00154u)

/** \brief 158, Bin Rejection Mask */
#define SPU1_BIN38_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00158u)

/** \brief 15C, Bin Rejection Mask */
#define SPU1_BIN39_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0015Cu)

/** \brief 160, Bin Rejection Mask */
#define SPU1_BIN40_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00160u)

/** \brief 164, Bin Rejection Mask */
#define SPU1_BIN41_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00164u)

/** \brief 168, Bin Rejection Mask */
#define SPU1_BIN42_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00168u)

/** \brief 16C, Bin Rejection Mask */
#define SPU1_BIN43_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0016Cu)

/** \brief 170, Bin Rejection Mask */
#define SPU1_BIN44_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00170u)

/** \brief 174, Bin Rejection Mask */
#define SPU1_BIN45_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00174u)

/** \brief 178, Bin Rejection Mask */
#define SPU1_BIN46_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00178u)

/** \brief 17C, Bin Rejection Mask */
#define SPU1_BIN47_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0017Cu)

/** \brief 180, Bin Rejection Mask */
#define SPU1_BIN48_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00180u)

/** \brief 184, Bin Rejection Mask */
#define SPU1_BIN49_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00184u)

/** \brief 188, Bin Rejection Mask */
#define SPU1_BIN50_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00188u)

/** \brief 18C, Bin Rejection Mask */
#define SPU1_BIN51_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0018Cu)

/** \brief 190, Bin Rejection Mask */
#define SPU1_BIN52_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00190u)

/** \brief 194, Bin Rejection Mask */
#define SPU1_BIN53_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00194u)

/** \brief 198, Bin Rejection Mask */
#define SPU1_BIN54_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC00198u)

/** \brief 19C, Bin Rejection Mask */
#define SPU1_BIN55_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC0019Cu)

/** \brief 1A0, Bin Rejection Mask */
#define SPU1_BIN56_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001A0u)

/** \brief 1A4, Bin Rejection Mask */
#define SPU1_BIN57_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001A4u)

/** \brief 1A8, Bin Rejection Mask */
#define SPU1_BIN58_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001A8u)

/** \brief 1AC, Bin Rejection Mask */
#define SPU1_BIN59_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001ACu)

/** \brief 1B0, Bin Rejection Mask */
#define SPU1_BIN60_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001B0u)

/** \brief 1B4, Bin Rejection Mask */
#define SPU1_BIN61_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001B4u)

/** \brief 1B8, Bin Rejection Mask */
#define SPU1_BIN62_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001B8u)

/** \brief 1BC, Bin Rejection Mask */
#define SPU1_BIN63_REJ /*lint --e(923)*/ (*(volatile Ifx_SPU_BIN_REJ*)0xFAC001BCu)

/** \brief 1C0, Magnitude Approximation Constants */
#define SPU1_MAGAPPROX /*lint --e(923)*/ (*(volatile Ifx_SPU_MAGAPPROX*)0xFAC001C0u)

/** \brief 1C4, NCI Antennae Scaling Factor */
#define SPU1_NCISCALAR0 /*lint --e(923)*/ (*(volatile Ifx_SPU_NCISCALAR0*)0xFAC001C4u)

/** \brief 1C8, NCI Antennae Scaling Factor */
#define SPU1_NCISCALAR1 /*lint --e(923)*/ (*(volatile Ifx_SPU_NCISCALAR1*)0xFAC001C8u)

/** \brief 1CC, NCI Antennae Scaling Factor */
#define SPU1_NCISCALAR2 /*lint --e(923)*/ (*(volatile Ifx_SPU_NCISCALAR2*)0xFAC001CCu)

/** \brief 1D0, NCI Antennae Scaling Factor */
#define SPU1_NCISCALAR3 /*lint --e(923)*/ (*(volatile Ifx_SPU_NCISCALAR3*)0xFAC001D0u)

/** \brief 1D4, CFAR Configuration */
#define SPU1_CFARCFG /*lint --e(923)*/ (*(volatile Ifx_SPU_CFARCFG*)0xFAC001D4u)

/** \brief 1D8, CFAR Configuration 2 */
#define SPU1_CFARCFG2 /*lint --e(923)*/ (*(volatile Ifx_SPU_CFARCFG2*)0xFAC001D8u)

/** \brief 1DC, CFAR Configuration 3 */
#define SPU1_CFARCFG3 /*lint --e(923)*/ (*(volatile Ifx_SPU_CFARCFG3*)0xFAC001DCu)

/** \brief 1E0, Scalar Addition Operand */
#define SPU1_SCALARADD /*lint --e(923)*/ (*(volatile Ifx_SPU_SCALARADD*)0xFAC001E0u)

/** \brief 1E4, Scalar Multiplication Operand */
#define SPU1_SCALARMULT /*lint --e(923)*/ (*(volatile Ifx_SPU_SCALARMULT*)0xFAC001E4u)

/** \brief 1E8, Bin Rejection Unit Control */
#define SPU1_BINREJCTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_BINREJCTRL*)0xFAC001E8u)

/** \brief 1EC, Local Maximum Control */
#define SPU1_LCLMAX /*lint --e(923)*/ (*(volatile Ifx_SPU_LCLMAX*)0xFAC001ECu)

/** \brief 1F0, SPU Control */
#define SPU1_CTRL /*lint --e(923)*/ (*(volatile Ifx_SPU_CTRL*)0xFAC001F0u)

/** \brief 200, Dataset Metadata */
#define SPU1_MD0_METADATA /*lint --e(923)*/ (*(volatile Ifx_SPU_MD_METADATA*)0xFAC00200u)

/** \brief 204, Dataset Metadata */
#define SPU1_MD1_METADATA /*lint --e(923)*/ (*(volatile Ifx_SPU_MD_METADATA*)0xFAC00204u)

/** \brief 280, Input DMA Count */
#define SPU1_IDMCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_IDMCNT*)0xFAC00280u)

/** \brief 284, Input Buffer Memory Count */
#define SPU1_IBMCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_IBMCNT*)0xFAC00284u)

/** \brief 288, Input Buffer Memory Read Count */
#define SPU1_LDRCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_LDRCNT*)0xFAC00288u)

/** \brief 28C, FFT Load Count */
#define SPU1_FFTWCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_FFTWCNT*)0xFAC0028Cu)

/** \brief 290, FFT Unload Count */
#define SPU1_FFTRCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_FFTRCNT*)0xFAC00290u)

/** \brief 294, Output Buffer Memory Write Count */
#define SPU1_ULDRCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ULDRCNT*)0xFAC00294u)

/** \brief 298, Output Buffer Memory Read Count */
#define SPU1_ODMCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMCNT*)0xFAC00298u)

/** \brief 29C, Bin Rejection Unit Load Count */
#define SPU1_BRCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_BRCNT*)0xFAC0029Cu)

/** \brief 2A0, CFAR Unit Load Count */
#define SPU1_CFARCNT /*lint --e(923)*/ (*(volatile Ifx_SPU_CFARCNT*)0xFAC002A0u)

/** \brief 2A4, Output DMA Port Write Count */
#define SPU1_ODMACNT0_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFAC002A4u)

/** \brief 2A8, Output DMA Port Write Count */
#define SPU1_ODMACNT1_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFAC002A8u)

/** \brief 2AC, Output DMA Port Write Count */
#define SPU1_ODMACNT2_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFAC002ACu)

/** \brief 2B0, Output DMA Port Write Count */
#define SPU1_ODMACNT3_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFAC002B0u)

/** \brief 2B4, Output DMA Port Write Count */
#define SPU1_ODMACNT4_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFAC002B4u)

/** \brief 2B8, Output DMA Port Write Count */
#define SPU1_ODMACNT5_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFAC002B8u)

/** \brief 2BC, Output DMA Port Write Count */
#define SPU1_ODMACNT6_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFAC002BCu)

/** \brief 2C0, Output DMA Port Write Count */
#define SPU1_ODMACNT7_ODMACNT /*lint --e(923)*/ (*(volatile Ifx_SPU_ODMACNT_ODMACNT*)0xFAC002C0u)

/** \brief 2C4, Safety Counter Clear */
#define SPU1_CNTCLR /*lint --e(923)*/ (*(volatile Ifx_SPU_CNTCLR*)0xFAC002C4u)

/** \brief 2C8, SPU Monitor */
#define SPU1_MONITOR /*lint --e(923)*/ (*(volatile Ifx_SPU_MONITOR*)0xFAC002C8u)

/** \brief 3E4, Access Enable Register 0 */
#define SPU1_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_SPU_ACCEN0*)0xFAC003E4u)

/** \brief 3E8, Access Enable Register 1 */
#define SPU1_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_SPU_ACCEN1*)0xFAC003E8u)

/** \brief 3EC, OCDS Control and Status */
#define SPU1_OCS /*lint --e(923)*/ (*(volatile Ifx_SPU_OCS*)0xFAC003ECu)

/** \brief 3F0, OCDS Debug Access Register */
#define SPU1_ODA /*lint --e(923)*/ (*(volatile Ifx_SPU_ODA*)0xFAC003F0u)

/** \brief 3F4, Kernel Reset Register 0 */
#define SPU1_KRST0 /*lint --e(923)*/ (*(volatile Ifx_SPU_KRST0*)0xFAC003F4u)

/** \brief 3F8, Kernel Reset Register 1 */
#define SPU1_KRST1 /*lint --e(923)*/ (*(volatile Ifx_SPU_KRST1*)0xFAC003F8u)

/** \brief 3FC, Kernel Reset Clear */
#define SPU1_KRSTCLR /*lint --e(923)*/ (*(volatile Ifx_SPU_KRSTCLR*)0xFAC003FCu)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSPU_REG_H */
