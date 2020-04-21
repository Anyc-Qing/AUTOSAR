/**
 * \file IfxEdsadc_bf.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:05:47 GMT
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
 * \defgroup IfxLld_Edsadc_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxLld_Edsadc_Registers
 * 
 */
#ifndef IFXEDSADC_BF_H
#define IFXEDSADC_BF_H 1
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Edsadc_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_EDSADC_CLC_Bits.DISR */
#define IFX_EDSADC_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CLC_Bits.DISR */
#define IFX_EDSADC_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CLC_Bits.DISR */
#define IFX_EDSADC_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_EDSADC_CLC_Bits.DISS */
#define IFX_EDSADC_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CLC_Bits.DISS */
#define IFX_EDSADC_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CLC_Bits.DISS */
#define IFX_EDSADC_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_EDSADC_CLC_Bits.EDIS */
#define IFX_EDSADC_CLC_EDIS_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CLC_Bits.EDIS */
#define IFX_EDSADC_CLC_EDIS_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CLC_Bits.EDIS */
#define IFX_EDSADC_CLC_EDIS_OFF (3u)

/** \brief Length for Ifx_EDSADC_ID_Bits.MOD_REV */
#define IFX_EDSADC_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_EDSADC_ID_Bits.MOD_REV */
#define IFX_EDSADC_ID_MOD_REV_MSK (0x0u)

/** \brief Offset for Ifx_EDSADC_ID_Bits.MOD_REV */
#define IFX_EDSADC_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_EDSADC_ID_Bits.MOD_TYPE */
#define IFX_EDSADC_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_EDSADC_ID_Bits.MOD_TYPE */
#define IFX_EDSADC_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_EDSADC_ID_Bits.MOD_TYPE */
#define IFX_EDSADC_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_EDSADC_ID_Bits.MOD_NUMBER */
#define IFX_EDSADC_ID_MOD_NUMBER_LEN (16u)

/** \brief Mask for Ifx_EDSADC_ID_Bits.MOD_NUMBER */
#define IFX_EDSADC_ID_MOD_NUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_ID_Bits.MOD_NUMBER */
#define IFX_EDSADC_ID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_EDSADC_OCS_Bits.SUS */
#define IFX_EDSADC_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_EDSADC_OCS_Bits.SUS */
#define IFX_EDSADC_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_EDSADC_OCS_Bits.SUS */
#define IFX_EDSADC_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_EDSADC_OCS_Bits.SUS_P */
#define IFX_EDSADC_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_EDSADC_OCS_Bits.SUS_P */
#define IFX_EDSADC_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_OCS_Bits.SUS_P */
#define IFX_EDSADC_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_EDSADC_OCS_Bits.SUSSTA */
#define IFX_EDSADC_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_EDSADC_OCS_Bits.SUSSTA */
#define IFX_EDSADC_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_OCS_Bits.SUSSTA */
#define IFX_EDSADC_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_EDSADC_KRSTCLR_Bits.CLR */
#define IFX_EDSADC_KRSTCLR_CLR_LEN (1u)

/** \brief Mask for Ifx_EDSADC_KRSTCLR_Bits.CLR */
#define IFX_EDSADC_KRSTCLR_CLR_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_KRSTCLR_Bits.CLR */
#define IFX_EDSADC_KRSTCLR_CLR_OFF (0u)

/** \brief Length for Ifx_EDSADC_KRST1_Bits.RST */
#define IFX_EDSADC_KRST1_RST_LEN (1u)

/** \brief Mask for Ifx_EDSADC_KRST1_Bits.RST */
#define IFX_EDSADC_KRST1_RST_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_KRST1_Bits.RST */
#define IFX_EDSADC_KRST1_RST_OFF (0u)

/** \brief Length for Ifx_EDSADC_KRST0_Bits.RST */
#define IFX_EDSADC_KRST0_RST_LEN (1u)

/** \brief Mask for Ifx_EDSADC_KRST0_Bits.RST */
#define IFX_EDSADC_KRST0_RST_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_KRST0_Bits.RST */
#define IFX_EDSADC_KRST0_RST_OFF (0u)

/** \brief Length for Ifx_EDSADC_KRST0_Bits.RSTSTAT */
#define IFX_EDSADC_KRST0_RSTSTAT_LEN (1u)

/** \brief Mask for Ifx_EDSADC_KRST0_Bits.RSTSTAT */
#define IFX_EDSADC_KRST0_RSTSTAT_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_KRST0_Bits.RSTSTAT */
#define IFX_EDSADC_KRST0_RSTSTAT_OFF (1u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN0 */
#define IFX_EDSADC_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN0 */
#define IFX_EDSADC_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN0 */
#define IFX_EDSADC_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN1 */
#define IFX_EDSADC_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN1 */
#define IFX_EDSADC_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN1 */
#define IFX_EDSADC_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN2 */
#define IFX_EDSADC_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN2 */
#define IFX_EDSADC_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN2 */
#define IFX_EDSADC_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN3 */
#define IFX_EDSADC_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN3 */
#define IFX_EDSADC_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN3 */
#define IFX_EDSADC_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN4 */
#define IFX_EDSADC_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN4 */
#define IFX_EDSADC_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN4 */
#define IFX_EDSADC_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN5 */
#define IFX_EDSADC_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN5 */
#define IFX_EDSADC_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN5 */
#define IFX_EDSADC_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN6 */
#define IFX_EDSADC_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN6 */
#define IFX_EDSADC_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN6 */
#define IFX_EDSADC_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN7 */
#define IFX_EDSADC_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN7 */
#define IFX_EDSADC_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN7 */
#define IFX_EDSADC_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN8 */
#define IFX_EDSADC_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN8 */
#define IFX_EDSADC_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN8 */
#define IFX_EDSADC_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN9 */
#define IFX_EDSADC_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN9 */
#define IFX_EDSADC_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN9 */
#define IFX_EDSADC_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN10 */
#define IFX_EDSADC_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN10 */
#define IFX_EDSADC_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN10 */
#define IFX_EDSADC_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN11 */
#define IFX_EDSADC_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN11 */
#define IFX_EDSADC_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN11 */
#define IFX_EDSADC_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN12 */
#define IFX_EDSADC_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN12 */
#define IFX_EDSADC_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN12 */
#define IFX_EDSADC_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN13 */
#define IFX_EDSADC_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN13 */
#define IFX_EDSADC_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN13 */
#define IFX_EDSADC_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN14 */
#define IFX_EDSADC_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN14 */
#define IFX_EDSADC_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN14 */
#define IFX_EDSADC_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN15 */
#define IFX_EDSADC_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN15 */
#define IFX_EDSADC_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN15 */
#define IFX_EDSADC_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN16 */
#define IFX_EDSADC_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN16 */
#define IFX_EDSADC_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN16 */
#define IFX_EDSADC_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN17 */
#define IFX_EDSADC_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN17 */
#define IFX_EDSADC_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN17 */
#define IFX_EDSADC_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN18 */
#define IFX_EDSADC_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN18 */
#define IFX_EDSADC_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN18 */
#define IFX_EDSADC_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN19 */
#define IFX_EDSADC_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN19 */
#define IFX_EDSADC_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN19 */
#define IFX_EDSADC_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN20 */
#define IFX_EDSADC_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN20 */
#define IFX_EDSADC_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN20 */
#define IFX_EDSADC_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN21 */
#define IFX_EDSADC_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN21 */
#define IFX_EDSADC_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN21 */
#define IFX_EDSADC_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN22 */
#define IFX_EDSADC_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN22 */
#define IFX_EDSADC_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN22 */
#define IFX_EDSADC_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN23 */
#define IFX_EDSADC_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN23 */
#define IFX_EDSADC_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN23 */
#define IFX_EDSADC_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN24 */
#define IFX_EDSADC_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN24 */
#define IFX_EDSADC_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN24 */
#define IFX_EDSADC_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN25 */
#define IFX_EDSADC_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN25 */
#define IFX_EDSADC_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN25 */
#define IFX_EDSADC_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN26 */
#define IFX_EDSADC_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN26 */
#define IFX_EDSADC_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN26 */
#define IFX_EDSADC_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN27 */
#define IFX_EDSADC_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN27 */
#define IFX_EDSADC_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN27 */
#define IFX_EDSADC_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN28 */
#define IFX_EDSADC_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN28 */
#define IFX_EDSADC_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN28 */
#define IFX_EDSADC_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN29 */
#define IFX_EDSADC_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN29 */
#define IFX_EDSADC_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN29 */
#define IFX_EDSADC_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN30 */
#define IFX_EDSADC_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN30 */
#define IFX_EDSADC_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN30 */
#define IFX_EDSADC_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_EDSADC_ACCEN0_Bits.EN31 */
#define IFX_EDSADC_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCEN0_Bits.EN31 */
#define IFX_EDSADC_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCEN0_Bits.EN31 */
#define IFX_EDSADC_ACCEN0_EN31_OFF (31u)

/** \brief Length for Ifx_EDSADC_GLOBCFG_Bits.DITRIM */
#define IFX_EDSADC_GLOBCFG_DITRIM_LEN (3u)

/** \brief Mask for Ifx_EDSADC_GLOBCFG_Bits.DITRIM */
#define IFX_EDSADC_GLOBCFG_DITRIM_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_GLOBCFG_Bits.DITRIM */
#define IFX_EDSADC_GLOBCFG_DITRIM_OFF (8u)

/** \brief Length for Ifx_EDSADC_GLOBCFG_Bits.USC */
#define IFX_EDSADC_GLOBCFG_USC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBCFG_Bits.USC */
#define IFX_EDSADC_GLOBCFG_USC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBCFG_Bits.USC */
#define IFX_EDSADC_GLOBCFG_USC_OFF (12u)

/** \brief Length for Ifx_EDSADC_GLOBCFG_Bits.SUPLEV */
#define IFX_EDSADC_GLOBCFG_SUPLEV_LEN (2u)

/** \brief Mask for Ifx_EDSADC_GLOBCFG_Bits.SUPLEV */
#define IFX_EDSADC_GLOBCFG_SUPLEV_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_GLOBCFG_Bits.SUPLEV */
#define IFX_EDSADC_GLOBCFG_SUPLEV_OFF (13u)

/** \brief Length for Ifx_EDSADC_GLOBCFG_Bits.CPWC */
#define IFX_EDSADC_GLOBCFG_CPWC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBCFG_Bits.CPWC */
#define IFX_EDSADC_GLOBCFG_CPWC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBCFG_Bits.CPWC */
#define IFX_EDSADC_GLOBCFG_CPWC_OFF (15u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN0 */
#define IFX_EDSADC_GLOBRC_CHRUN0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN0 */
#define IFX_EDSADC_GLOBRC_CHRUN0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN0 */
#define IFX_EDSADC_GLOBRC_CHRUN0_OFF (0u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN1 */
#define IFX_EDSADC_GLOBRC_CHRUN1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN1 */
#define IFX_EDSADC_GLOBRC_CHRUN1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN1 */
#define IFX_EDSADC_GLOBRC_CHRUN1_OFF (1u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN2 */
#define IFX_EDSADC_GLOBRC_CHRUN2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN2 */
#define IFX_EDSADC_GLOBRC_CHRUN2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN2 */
#define IFX_EDSADC_GLOBRC_CHRUN2_OFF (2u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN3 */
#define IFX_EDSADC_GLOBRC_CHRUN3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN3 */
#define IFX_EDSADC_GLOBRC_CHRUN3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN3 */
#define IFX_EDSADC_GLOBRC_CHRUN3_OFF (3u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN4 */
#define IFX_EDSADC_GLOBRC_CHRUN4_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN4 */
#define IFX_EDSADC_GLOBRC_CHRUN4_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN4 */
#define IFX_EDSADC_GLOBRC_CHRUN4_OFF (4u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN5 */
#define IFX_EDSADC_GLOBRC_CHRUN5_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN5 */
#define IFX_EDSADC_GLOBRC_CHRUN5_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN5 */
#define IFX_EDSADC_GLOBRC_CHRUN5_OFF (5u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN6 */
#define IFX_EDSADC_GLOBRC_CHRUN6_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN6 */
#define IFX_EDSADC_GLOBRC_CHRUN6_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN6 */
#define IFX_EDSADC_GLOBRC_CHRUN6_OFF (6u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN7 */
#define IFX_EDSADC_GLOBRC_CHRUN7_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN7 */
#define IFX_EDSADC_GLOBRC_CHRUN7_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN7 */
#define IFX_EDSADC_GLOBRC_CHRUN7_OFF (7u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN8 */
#define IFX_EDSADC_GLOBRC_CHRUN8_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN8 */
#define IFX_EDSADC_GLOBRC_CHRUN8_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN8 */
#define IFX_EDSADC_GLOBRC_CHRUN8_OFF (8u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN9 */
#define IFX_EDSADC_GLOBRC_CHRUN9_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN9 */
#define IFX_EDSADC_GLOBRC_CHRUN9_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN9 */
#define IFX_EDSADC_GLOBRC_CHRUN9_OFF (9u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN10 */
#define IFX_EDSADC_GLOBRC_CHRUN10_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN10 */
#define IFX_EDSADC_GLOBRC_CHRUN10_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN10 */
#define IFX_EDSADC_GLOBRC_CHRUN10_OFF (10u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN11 */
#define IFX_EDSADC_GLOBRC_CHRUN11_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN11 */
#define IFX_EDSADC_GLOBRC_CHRUN11_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN11 */
#define IFX_EDSADC_GLOBRC_CHRUN11_OFF (11u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN12 */
#define IFX_EDSADC_GLOBRC_CHRUN12_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN12 */
#define IFX_EDSADC_GLOBRC_CHRUN12_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN12 */
#define IFX_EDSADC_GLOBRC_CHRUN12_OFF (12u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.CHRUN13 */
#define IFX_EDSADC_GLOBRC_CHRUN13_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.CHRUN13 */
#define IFX_EDSADC_GLOBRC_CHRUN13_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.CHRUN13 */
#define IFX_EDSADC_GLOBRC_CHRUN13_OFF (13u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN0 */
#define IFX_EDSADC_GLOBRC_MRUN0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN0 */
#define IFX_EDSADC_GLOBRC_MRUN0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN0 */
#define IFX_EDSADC_GLOBRC_MRUN0_OFF (16u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN1 */
#define IFX_EDSADC_GLOBRC_MRUN1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN1 */
#define IFX_EDSADC_GLOBRC_MRUN1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN1 */
#define IFX_EDSADC_GLOBRC_MRUN1_OFF (17u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN2 */
#define IFX_EDSADC_GLOBRC_MRUN2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN2 */
#define IFX_EDSADC_GLOBRC_MRUN2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN2 */
#define IFX_EDSADC_GLOBRC_MRUN2_OFF (18u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN3 */
#define IFX_EDSADC_GLOBRC_MRUN3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN3 */
#define IFX_EDSADC_GLOBRC_MRUN3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN3 */
#define IFX_EDSADC_GLOBRC_MRUN3_OFF (19u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN4 */
#define IFX_EDSADC_GLOBRC_MRUN4_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN4 */
#define IFX_EDSADC_GLOBRC_MRUN4_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN4 */
#define IFX_EDSADC_GLOBRC_MRUN4_OFF (20u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN5 */
#define IFX_EDSADC_GLOBRC_MRUN5_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN5 */
#define IFX_EDSADC_GLOBRC_MRUN5_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN5 */
#define IFX_EDSADC_GLOBRC_MRUN5_OFF (21u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN6 */
#define IFX_EDSADC_GLOBRC_MRUN6_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN6 */
#define IFX_EDSADC_GLOBRC_MRUN6_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN6 */
#define IFX_EDSADC_GLOBRC_MRUN6_OFF (22u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN7 */
#define IFX_EDSADC_GLOBRC_MRUN7_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN7 */
#define IFX_EDSADC_GLOBRC_MRUN7_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN7 */
#define IFX_EDSADC_GLOBRC_MRUN7_OFF (23u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN8 */
#define IFX_EDSADC_GLOBRC_MRUN8_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN8 */
#define IFX_EDSADC_GLOBRC_MRUN8_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN8 */
#define IFX_EDSADC_GLOBRC_MRUN8_OFF (24u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN9 */
#define IFX_EDSADC_GLOBRC_MRUN9_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN9 */
#define IFX_EDSADC_GLOBRC_MRUN9_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN9 */
#define IFX_EDSADC_GLOBRC_MRUN9_OFF (25u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN10 */
#define IFX_EDSADC_GLOBRC_MRUN10_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN10 */
#define IFX_EDSADC_GLOBRC_MRUN10_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN10 */
#define IFX_EDSADC_GLOBRC_MRUN10_OFF (26u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN11 */
#define IFX_EDSADC_GLOBRC_MRUN11_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN11 */
#define IFX_EDSADC_GLOBRC_MRUN11_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN11 */
#define IFX_EDSADC_GLOBRC_MRUN11_OFF (27u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN12 */
#define IFX_EDSADC_GLOBRC_MRUN12_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN12 */
#define IFX_EDSADC_GLOBRC_MRUN12_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN12 */
#define IFX_EDSADC_GLOBRC_MRUN12_OFF (28u)

/** \brief Length for Ifx_EDSADC_GLOBRC_Bits.MRUN13 */
#define IFX_EDSADC_GLOBRC_MRUN13_LEN (1u)

/** \brief Mask for Ifx_EDSADC_GLOBRC_Bits.MRUN13 */
#define IFX_EDSADC_GLOBRC_MRUN13_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_GLOBRC_Bits.MRUN13 */
#define IFX_EDSADC_GLOBRC_MRUN13_OFF (29u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG00 */
#define IFX_EDSADC_ACCPROT_RG00_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG00 */
#define IFX_EDSADC_ACCPROT_RG00_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG00 */
#define IFX_EDSADC_ACCPROT_RG00_OFF (0u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG01 */
#define IFX_EDSADC_ACCPROT_RG01_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG01 */
#define IFX_EDSADC_ACCPROT_RG01_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG01 */
#define IFX_EDSADC_ACCPROT_RG01_OFF (1u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG02 */
#define IFX_EDSADC_ACCPROT_RG02_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG02 */
#define IFX_EDSADC_ACCPROT_RG02_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG02 */
#define IFX_EDSADC_ACCPROT_RG02_OFF (2u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG03 */
#define IFX_EDSADC_ACCPROT_RG03_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG03 */
#define IFX_EDSADC_ACCPROT_RG03_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG03 */
#define IFX_EDSADC_ACCPROT_RG03_OFF (3u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG04 */
#define IFX_EDSADC_ACCPROT_RG04_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG04 */
#define IFX_EDSADC_ACCPROT_RG04_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG04 */
#define IFX_EDSADC_ACCPROT_RG04_OFF (4u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG05 */
#define IFX_EDSADC_ACCPROT_RG05_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG05 */
#define IFX_EDSADC_ACCPROT_RG05_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG05 */
#define IFX_EDSADC_ACCPROT_RG05_OFF (5u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG06 */
#define IFX_EDSADC_ACCPROT_RG06_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG06 */
#define IFX_EDSADC_ACCPROT_RG06_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG06 */
#define IFX_EDSADC_ACCPROT_RG06_OFF (6u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG07 */
#define IFX_EDSADC_ACCPROT_RG07_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG07 */
#define IFX_EDSADC_ACCPROT_RG07_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG07 */
#define IFX_EDSADC_ACCPROT_RG07_OFF (7u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RG10 */
#define IFX_EDSADC_ACCPROT_RG10_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RG10 */
#define IFX_EDSADC_ACCPROT_RG10_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RG10 */
#define IFX_EDSADC_ACCPROT_RG10_OFF (16u)

/** \brief Length for Ifx_EDSADC_ACCPROT_Bits.RGG */
#define IFX_EDSADC_ACCPROT_RGG_LEN (1u)

/** \brief Mask for Ifx_EDSADC_ACCPROT_Bits.RGG */
#define IFX_EDSADC_ACCPROT_RGG_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_ACCPROT_Bits.RGG */
#define IFX_EDSADC_ACCPROT_RGG_OFF (31u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.CGMOD */
#define IFX_EDSADC_CGCFG_CGMOD_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.CGMOD */
#define IFX_EDSADC_CGCFG_CGMOD_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.CGMOD */
#define IFX_EDSADC_CGCFG_CGMOD_OFF (0u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.BREV */
#define IFX_EDSADC_CGCFG_BREV_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.BREV */
#define IFX_EDSADC_CGCFG_BREV_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.BREV */
#define IFX_EDSADC_CGCFG_BREV_OFF (2u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.SIGPOL */
#define IFX_EDSADC_CGCFG_SIGPOL_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.SIGPOL */
#define IFX_EDSADC_CGCFG_SIGPOL_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.SIGPOL */
#define IFX_EDSADC_CGCFG_SIGPOL_OFF (3u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.DIVCG */
#define IFX_EDSADC_CGCFG_DIVCG_LEN (4u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.DIVCG */
#define IFX_EDSADC_CGCFG_DIVCG_MSK (0xfu)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.DIVCG */
#define IFX_EDSADC_CGCFG_DIVCG_OFF (4u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.RUN */
#define IFX_EDSADC_CGCFG_RUN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.RUN */
#define IFX_EDSADC_CGCFG_RUN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.RUN */
#define IFX_EDSADC_CGCFG_RUN_OFF (15u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.BITCOUNT */
#define IFX_EDSADC_CGCFG_BITCOUNT_LEN (5u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.BITCOUNT */
#define IFX_EDSADC_CGCFG_BITCOUNT_MSK (0x1fu)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.BITCOUNT */
#define IFX_EDSADC_CGCFG_BITCOUNT_OFF (16u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.STEPCOUNT */
#define IFX_EDSADC_CGCFG_STEPCOUNT_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.STEPCOUNT */
#define IFX_EDSADC_CGCFG_STEPCOUNT_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.STEPCOUNT */
#define IFX_EDSADC_CGCFG_STEPCOUNT_OFF (24u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.STEPS */
#define IFX_EDSADC_CGCFG_STEPS_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.STEPS */
#define IFX_EDSADC_CGCFG_STEPS_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.STEPS */
#define IFX_EDSADC_CGCFG_STEPS_OFF (28u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.STEPD */
#define IFX_EDSADC_CGCFG_STEPD_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.STEPD */
#define IFX_EDSADC_CGCFG_STEPD_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.STEPD */
#define IFX_EDSADC_CGCFG_STEPD_OFF (29u)

/** \brief Length for Ifx_EDSADC_CGCFG_Bits.SGNCG */
#define IFX_EDSADC_CGCFG_SGNCG_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CGCFG_Bits.SGNCG */
#define IFX_EDSADC_CGCFG_SGNCG_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CGCFG_Bits.SGNCG */
#define IFX_EDSADC_CGCFG_SGNCG_OFF (30u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV0 */
#define IFX_EDSADC_EVFLAG_RESEV0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV0 */
#define IFX_EDSADC_EVFLAG_RESEV0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV0 */
#define IFX_EDSADC_EVFLAG_RESEV0_OFF (0u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV1 */
#define IFX_EDSADC_EVFLAG_RESEV1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV1 */
#define IFX_EDSADC_EVFLAG_RESEV1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV1 */
#define IFX_EDSADC_EVFLAG_RESEV1_OFF (1u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV2 */
#define IFX_EDSADC_EVFLAG_RESEV2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV2 */
#define IFX_EDSADC_EVFLAG_RESEV2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV2 */
#define IFX_EDSADC_EVFLAG_RESEV2_OFF (2u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV3 */
#define IFX_EDSADC_EVFLAG_RESEV3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV3 */
#define IFX_EDSADC_EVFLAG_RESEV3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV3 */
#define IFX_EDSADC_EVFLAG_RESEV3_OFF (3u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV4 */
#define IFX_EDSADC_EVFLAG_RESEV4_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV4 */
#define IFX_EDSADC_EVFLAG_RESEV4_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV4 */
#define IFX_EDSADC_EVFLAG_RESEV4_OFF (4u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV5 */
#define IFX_EDSADC_EVFLAG_RESEV5_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV5 */
#define IFX_EDSADC_EVFLAG_RESEV5_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV5 */
#define IFX_EDSADC_EVFLAG_RESEV5_OFF (5u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV6 */
#define IFX_EDSADC_EVFLAG_RESEV6_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV6 */
#define IFX_EDSADC_EVFLAG_RESEV6_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV6 */
#define IFX_EDSADC_EVFLAG_RESEV6_OFF (6u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV7 */
#define IFX_EDSADC_EVFLAG_RESEV7_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV7 */
#define IFX_EDSADC_EVFLAG_RESEV7_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV7 */
#define IFX_EDSADC_EVFLAG_RESEV7_OFF (7u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV8 */
#define IFX_EDSADC_EVFLAG_RESEV8_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV8 */
#define IFX_EDSADC_EVFLAG_RESEV8_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV8 */
#define IFX_EDSADC_EVFLAG_RESEV8_OFF (8u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV9 */
#define IFX_EDSADC_EVFLAG_RESEV9_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV9 */
#define IFX_EDSADC_EVFLAG_RESEV9_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV9 */
#define IFX_EDSADC_EVFLAG_RESEV9_OFF (9u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV10 */
#define IFX_EDSADC_EVFLAG_RESEV10_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV10 */
#define IFX_EDSADC_EVFLAG_RESEV10_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV10 */
#define IFX_EDSADC_EVFLAG_RESEV10_OFF (10u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV11 */
#define IFX_EDSADC_EVFLAG_RESEV11_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV11 */
#define IFX_EDSADC_EVFLAG_RESEV11_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV11 */
#define IFX_EDSADC_EVFLAG_RESEV11_OFF (11u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV12 */
#define IFX_EDSADC_EVFLAG_RESEV12_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV12 */
#define IFX_EDSADC_EVFLAG_RESEV12_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV12 */
#define IFX_EDSADC_EVFLAG_RESEV12_OFF (12u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.RESEV13 */
#define IFX_EDSADC_EVFLAG_RESEV13_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.RESEV13 */
#define IFX_EDSADC_EVFLAG_RESEV13_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.RESEV13 */
#define IFX_EDSADC_EVFLAG_RESEV13_OFF (13u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV0 */
#define IFX_EDSADC_EVFLAG_ALEV0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV0 */
#define IFX_EDSADC_EVFLAG_ALEV0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV0 */
#define IFX_EDSADC_EVFLAG_ALEV0_OFF (16u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV1 */
#define IFX_EDSADC_EVFLAG_ALEV1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV1 */
#define IFX_EDSADC_EVFLAG_ALEV1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV1 */
#define IFX_EDSADC_EVFLAG_ALEV1_OFF (17u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV2 */
#define IFX_EDSADC_EVFLAG_ALEV2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV2 */
#define IFX_EDSADC_EVFLAG_ALEV2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV2 */
#define IFX_EDSADC_EVFLAG_ALEV2_OFF (18u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV3 */
#define IFX_EDSADC_EVFLAG_ALEV3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV3 */
#define IFX_EDSADC_EVFLAG_ALEV3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV3 */
#define IFX_EDSADC_EVFLAG_ALEV3_OFF (19u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV4 */
#define IFX_EDSADC_EVFLAG_ALEV4_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV4 */
#define IFX_EDSADC_EVFLAG_ALEV4_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV4 */
#define IFX_EDSADC_EVFLAG_ALEV4_OFF (20u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV5 */
#define IFX_EDSADC_EVFLAG_ALEV5_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV5 */
#define IFX_EDSADC_EVFLAG_ALEV5_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV5 */
#define IFX_EDSADC_EVFLAG_ALEV5_OFF (21u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV6 */
#define IFX_EDSADC_EVFLAG_ALEV6_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV6 */
#define IFX_EDSADC_EVFLAG_ALEV6_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV6 */
#define IFX_EDSADC_EVFLAG_ALEV6_OFF (22u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV7 */
#define IFX_EDSADC_EVFLAG_ALEV7_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV7 */
#define IFX_EDSADC_EVFLAG_ALEV7_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV7 */
#define IFX_EDSADC_EVFLAG_ALEV7_OFF (23u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV8 */
#define IFX_EDSADC_EVFLAG_ALEV8_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV8 */
#define IFX_EDSADC_EVFLAG_ALEV8_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV8 */
#define IFX_EDSADC_EVFLAG_ALEV8_OFF (24u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV9 */
#define IFX_EDSADC_EVFLAG_ALEV9_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV9 */
#define IFX_EDSADC_EVFLAG_ALEV9_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV9 */
#define IFX_EDSADC_EVFLAG_ALEV9_OFF (25u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV10 */
#define IFX_EDSADC_EVFLAG_ALEV10_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV10 */
#define IFX_EDSADC_EVFLAG_ALEV10_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV10 */
#define IFX_EDSADC_EVFLAG_ALEV10_OFF (26u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV11 */
#define IFX_EDSADC_EVFLAG_ALEV11_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV11 */
#define IFX_EDSADC_EVFLAG_ALEV11_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV11 */
#define IFX_EDSADC_EVFLAG_ALEV11_OFF (27u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV12 */
#define IFX_EDSADC_EVFLAG_ALEV12_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV12 */
#define IFX_EDSADC_EVFLAG_ALEV12_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV12 */
#define IFX_EDSADC_EVFLAG_ALEV12_OFF (28u)

/** \brief Length for Ifx_EDSADC_EVFLAG_Bits.ALEV13 */
#define IFX_EDSADC_EVFLAG_ALEV13_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAG_Bits.ALEV13 */
#define IFX_EDSADC_EVFLAG_ALEV13_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAG_Bits.ALEV13 */
#define IFX_EDSADC_EVFLAG_ALEV13_OFF (29u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC0 */
#define IFX_EDSADC_EVFLAGCLR_RESEC0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC0 */
#define IFX_EDSADC_EVFLAGCLR_RESEC0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC0 */
#define IFX_EDSADC_EVFLAGCLR_RESEC0_OFF (0u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC1 */
#define IFX_EDSADC_EVFLAGCLR_RESEC1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC1 */
#define IFX_EDSADC_EVFLAGCLR_RESEC1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC1 */
#define IFX_EDSADC_EVFLAGCLR_RESEC1_OFF (1u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC2 */
#define IFX_EDSADC_EVFLAGCLR_RESEC2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC2 */
#define IFX_EDSADC_EVFLAGCLR_RESEC2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC2 */
#define IFX_EDSADC_EVFLAGCLR_RESEC2_OFF (2u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC3 */
#define IFX_EDSADC_EVFLAGCLR_RESEC3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC3 */
#define IFX_EDSADC_EVFLAGCLR_RESEC3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC3 */
#define IFX_EDSADC_EVFLAGCLR_RESEC3_OFF (3u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC4 */
#define IFX_EDSADC_EVFLAGCLR_RESEC4_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC4 */
#define IFX_EDSADC_EVFLAGCLR_RESEC4_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC4 */
#define IFX_EDSADC_EVFLAGCLR_RESEC4_OFF (4u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC5 */
#define IFX_EDSADC_EVFLAGCLR_RESEC5_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC5 */
#define IFX_EDSADC_EVFLAGCLR_RESEC5_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC5 */
#define IFX_EDSADC_EVFLAGCLR_RESEC5_OFF (5u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC6 */
#define IFX_EDSADC_EVFLAGCLR_RESEC6_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC6 */
#define IFX_EDSADC_EVFLAGCLR_RESEC6_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC6 */
#define IFX_EDSADC_EVFLAGCLR_RESEC6_OFF (6u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC7 */
#define IFX_EDSADC_EVFLAGCLR_RESEC7_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC7 */
#define IFX_EDSADC_EVFLAGCLR_RESEC7_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC7 */
#define IFX_EDSADC_EVFLAGCLR_RESEC7_OFF (7u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC8 */
#define IFX_EDSADC_EVFLAGCLR_RESEC8_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC8 */
#define IFX_EDSADC_EVFLAGCLR_RESEC8_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC8 */
#define IFX_EDSADC_EVFLAGCLR_RESEC8_OFF (8u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC9 */
#define IFX_EDSADC_EVFLAGCLR_RESEC9_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC9 */
#define IFX_EDSADC_EVFLAGCLR_RESEC9_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC9 */
#define IFX_EDSADC_EVFLAGCLR_RESEC9_OFF (9u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC10 */
#define IFX_EDSADC_EVFLAGCLR_RESEC10_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC10 */
#define IFX_EDSADC_EVFLAGCLR_RESEC10_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC10 */
#define IFX_EDSADC_EVFLAGCLR_RESEC10_OFF (10u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC11 */
#define IFX_EDSADC_EVFLAGCLR_RESEC11_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC11 */
#define IFX_EDSADC_EVFLAGCLR_RESEC11_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC11 */
#define IFX_EDSADC_EVFLAGCLR_RESEC11_OFF (11u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC12 */
#define IFX_EDSADC_EVFLAGCLR_RESEC12_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC12 */
#define IFX_EDSADC_EVFLAGCLR_RESEC12_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC12 */
#define IFX_EDSADC_EVFLAGCLR_RESEC12_OFF (12u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC13 */
#define IFX_EDSADC_EVFLAGCLR_RESEC13_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC13 */
#define IFX_EDSADC_EVFLAGCLR_RESEC13_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.RESEC13 */
#define IFX_EDSADC_EVFLAGCLR_RESEC13_OFF (13u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC0 */
#define IFX_EDSADC_EVFLAGCLR_ALEC0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC0 */
#define IFX_EDSADC_EVFLAGCLR_ALEC0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC0 */
#define IFX_EDSADC_EVFLAGCLR_ALEC0_OFF (16u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC1 */
#define IFX_EDSADC_EVFLAGCLR_ALEC1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC1 */
#define IFX_EDSADC_EVFLAGCLR_ALEC1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC1 */
#define IFX_EDSADC_EVFLAGCLR_ALEC1_OFF (17u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC2 */
#define IFX_EDSADC_EVFLAGCLR_ALEC2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC2 */
#define IFX_EDSADC_EVFLAGCLR_ALEC2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC2 */
#define IFX_EDSADC_EVFLAGCLR_ALEC2_OFF (18u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC3 */
#define IFX_EDSADC_EVFLAGCLR_ALEC3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC3 */
#define IFX_EDSADC_EVFLAGCLR_ALEC3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC3 */
#define IFX_EDSADC_EVFLAGCLR_ALEC3_OFF (19u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC4 */
#define IFX_EDSADC_EVFLAGCLR_ALEC4_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC4 */
#define IFX_EDSADC_EVFLAGCLR_ALEC4_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC4 */
#define IFX_EDSADC_EVFLAGCLR_ALEC4_OFF (20u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC5 */
#define IFX_EDSADC_EVFLAGCLR_ALEC5_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC5 */
#define IFX_EDSADC_EVFLAGCLR_ALEC5_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC5 */
#define IFX_EDSADC_EVFLAGCLR_ALEC5_OFF (21u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC6 */
#define IFX_EDSADC_EVFLAGCLR_ALEC6_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC6 */
#define IFX_EDSADC_EVFLAGCLR_ALEC6_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC6 */
#define IFX_EDSADC_EVFLAGCLR_ALEC6_OFF (22u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC7 */
#define IFX_EDSADC_EVFLAGCLR_ALEC7_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC7 */
#define IFX_EDSADC_EVFLAGCLR_ALEC7_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC7 */
#define IFX_EDSADC_EVFLAGCLR_ALEC7_OFF (23u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC8 */
#define IFX_EDSADC_EVFLAGCLR_ALEC8_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC8 */
#define IFX_EDSADC_EVFLAGCLR_ALEC8_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC8 */
#define IFX_EDSADC_EVFLAGCLR_ALEC8_OFF (24u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC9 */
#define IFX_EDSADC_EVFLAGCLR_ALEC9_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC9 */
#define IFX_EDSADC_EVFLAGCLR_ALEC9_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC9 */
#define IFX_EDSADC_EVFLAGCLR_ALEC9_OFF (25u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC10 */
#define IFX_EDSADC_EVFLAGCLR_ALEC10_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC10 */
#define IFX_EDSADC_EVFLAGCLR_ALEC10_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC10 */
#define IFX_EDSADC_EVFLAGCLR_ALEC10_OFF (26u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC11 */
#define IFX_EDSADC_EVFLAGCLR_ALEC11_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC11 */
#define IFX_EDSADC_EVFLAGCLR_ALEC11_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC11 */
#define IFX_EDSADC_EVFLAGCLR_ALEC11_OFF (27u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC12 */
#define IFX_EDSADC_EVFLAGCLR_ALEC12_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC12 */
#define IFX_EDSADC_EVFLAGCLR_ALEC12_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC12 */
#define IFX_EDSADC_EVFLAGCLR_ALEC12_OFF (28u)

/** \brief Length for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC13 */
#define IFX_EDSADC_EVFLAGCLR_ALEC13_LEN (1u)

/** \brief Mask for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC13 */
#define IFX_EDSADC_EVFLAGCLR_ALEC13_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_EVFLAGCLR_Bits.ALEC13 */
#define IFX_EDSADC_EVFLAGCLR_ALEC13_OFF (29u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.INCFGP */
#define IFX_EDSADC_CH_MODCFG_INCFGP_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.INCFGP */
#define IFX_EDSADC_CH_MODCFG_INCFGP_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.INCFGP */
#define IFX_EDSADC_CH_MODCFG_INCFGP_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.INCFGN */
#define IFX_EDSADC_CH_MODCFG_INCFGN_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.INCFGN */
#define IFX_EDSADC_CH_MODCFG_INCFGN_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.INCFGN */
#define IFX_EDSADC_CH_MODCFG_INCFGN_OFF (2u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.GAINSEL */
#define IFX_EDSADC_CH_MODCFG_GAINSEL_LEN (4u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.GAINSEL */
#define IFX_EDSADC_CH_MODCFG_GAINSEL_MSK (0xfu)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.GAINSEL */
#define IFX_EDSADC_CH_MODCFG_GAINSEL_OFF (4u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.INSEL */
#define IFX_EDSADC_CH_MODCFG_INSEL_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.INSEL */
#define IFX_EDSADC_CH_MODCFG_INSEL_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.INSEL */
#define IFX_EDSADC_CH_MODCFG_INSEL_OFF (8u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.INMUX */
#define IFX_EDSADC_CH_MODCFG_INMUX_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.INMUX */
#define IFX_EDSADC_CH_MODCFG_INMUX_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.INMUX */
#define IFX_EDSADC_CH_MODCFG_INMUX_OFF (10u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.INMODE */
#define IFX_EDSADC_CH_MODCFG_INMODE_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.INMODE */
#define IFX_EDSADC_CH_MODCFG_INMODE_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.INMODE */
#define IFX_EDSADC_CH_MODCFG_INMODE_OFF (12u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.INMAC */
#define IFX_EDSADC_CH_MODCFG_INMAC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.INMAC */
#define IFX_EDSADC_CH_MODCFG_INMAC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.INMAC */
#define IFX_EDSADC_CH_MODCFG_INMAC_OFF (14u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.INCWC */
#define IFX_EDSADC_CH_MODCFG_INCWC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.INCWC */
#define IFX_EDSADC_CH_MODCFG_INCWC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.INCWC */
#define IFX_EDSADC_CH_MODCFG_INCWC_OFF (15u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.DIVM */
#define IFX_EDSADC_CH_MODCFG_DIVM_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.DIVM */
#define IFX_EDSADC_CH_MODCFG_DIVM_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.DIVM */
#define IFX_EDSADC_CH_MODCFG_DIVM_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.ACSD */
#define IFX_EDSADC_CH_MODCFG_ACSD_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.ACSD */
#define IFX_EDSADC_CH_MODCFG_ACSD_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.ACSD */
#define IFX_EDSADC_CH_MODCFG_ACSD_OFF (20u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.DITHEN */
#define IFX_EDSADC_CH_MODCFG_DITHEN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.DITHEN */
#define IFX_EDSADC_CH_MODCFG_DITHEN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.DITHEN */
#define IFX_EDSADC_CH_MODCFG_DITHEN_OFF (26u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.IREN */
#define IFX_EDSADC_CH_MODCFG_IREN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.IREN */
#define IFX_EDSADC_CH_MODCFG_IREN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.IREN */
#define IFX_EDSADC_CH_MODCFG_IREN_OFF (27u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.APC */
#define IFX_EDSADC_CH_MODCFG_APC_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.APC */
#define IFX_EDSADC_CH_MODCFG_APC_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.APC */
#define IFX_EDSADC_CH_MODCFG_APC_OFF (28u)

/** \brief Length for Ifx_EDSADC_CH_MODCFG_Bits.MMWC */
#define IFX_EDSADC_CH_MODCFG_MMWC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_MODCFG_Bits.MMWC */
#define IFX_EDSADC_CH_MODCFG_MMWC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_MODCFG_Bits.MMWC */
#define IFX_EDSADC_CH_MODCFG_MMWC_OFF (31u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.DSS */
#define IFX_EDSADC_CH_DICFG_DSS_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.DSS */
#define IFX_EDSADC_CH_DICFG_DSS_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.DSS */
#define IFX_EDSADC_CH_DICFG_DSS_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.DSRCEX */
#define IFX_EDSADC_CH_DICFG_DSRCEX_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.DSRCEX */
#define IFX_EDSADC_CH_DICFG_DSRCEX_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.DSRCEX */
#define IFX_EDSADC_CH_DICFG_DSRCEX_OFF (4u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.CSRCEX */
#define IFX_EDSADC_CH_DICFG_CSRCEX_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.CSRCEX */
#define IFX_EDSADC_CH_DICFG_CSRCEX_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.CSRCEX */
#define IFX_EDSADC_CH_DICFG_CSRCEX_OFF (8u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.DSWC */
#define IFX_EDSADC_CH_DICFG_DSWC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.DSWC */
#define IFX_EDSADC_CH_DICFG_DSWC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.DSWC */
#define IFX_EDSADC_CH_DICFG_DSWC_OFF (15u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.TRSEL */
#define IFX_EDSADC_CH_DICFG_TRSEL_LEN (4u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.TRSEL */
#define IFX_EDSADC_CH_DICFG_TRSEL_MSK (0xfu)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.TRSEL */
#define IFX_EDSADC_CH_DICFG_TRSEL_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.ITRMODE */
#define IFX_EDSADC_CH_DICFG_ITRMODE_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.ITRMODE */
#define IFX_EDSADC_CH_DICFG_ITRMODE_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.ITRMODE */
#define IFX_EDSADC_CH_DICFG_ITRMODE_OFF (20u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.TSTRMODE */
#define IFX_EDSADC_CH_DICFG_TSTRMODE_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.TSTRMODE */
#define IFX_EDSADC_CH_DICFG_TSTRMODE_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.TSTRMODE */
#define IFX_EDSADC_CH_DICFG_TSTRMODE_OFF (22u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.DRM */
#define IFX_EDSADC_CH_DICFG_DRM_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.DRM */
#define IFX_EDSADC_CH_DICFG_DRM_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.DRM */
#define IFX_EDSADC_CH_DICFG_DRM_OFF (26u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.TSM */
#define IFX_EDSADC_CH_DICFG_TSM_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.TSM */
#define IFX_EDSADC_CH_DICFG_TSM_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.TSM */
#define IFX_EDSADC_CH_DICFG_TSM_OFF (28u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.RDM */
#define IFX_EDSADC_CH_DICFG_RDM_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.RDM */
#define IFX_EDSADC_CH_DICFG_RDM_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.RDM */
#define IFX_EDSADC_CH_DICFG_RDM_OFF (29u)

/** \brief Length for Ifx_EDSADC_CH_DICFG_Bits.MSWC */
#define IFX_EDSADC_CH_DICFG_MSWC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_DICFG_Bits.MSWC */
#define IFX_EDSADC_CH_DICFG_MSWC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_DICFG_Bits.MSWC */
#define IFX_EDSADC_CH_DICFG_MSWC_OFF (31u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.FIR0EN */
#define IFX_EDSADC_CH_FCFGM_FIR0EN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.FIR0EN */
#define IFX_EDSADC_CH_FCFGM_FIR0EN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.FIR0EN */
#define IFX_EDSADC_CH_FCFGM_FIR0EN_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.FIR1EN */
#define IFX_EDSADC_CH_FCFGM_FIR1EN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.FIR1EN */
#define IFX_EDSADC_CH_FCFGM_FIR1EN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.FIR1EN */
#define IFX_EDSADC_CH_FCFGM_FIR1EN_OFF (1u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.OVCEN */
#define IFX_EDSADC_CH_FCFGM_OVCEN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.OVCEN */
#define IFX_EDSADC_CH_FCFGM_OVCEN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.OVCEN */
#define IFX_EDSADC_CH_FCFGM_OVCEN_OFF (2u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.FIR1DEC */
#define IFX_EDSADC_CH_FCFGM_FIR1DEC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.FIR1DEC */
#define IFX_EDSADC_CH_FCFGM_FIR1DEC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.FIR1DEC */
#define IFX_EDSADC_CH_FCFGM_FIR1DEC_OFF (3u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.CICMOD */
#define IFX_EDSADC_CH_FCFGM_CICMOD_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.CICMOD */
#define IFX_EDSADC_CH_FCFGM_CICMOD_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.CICMOD */
#define IFX_EDSADC_CH_FCFGM_CICMOD_OFF (4u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.PFEN */
#define IFX_EDSADC_CH_FCFGM_PFEN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.PFEN */
#define IFX_EDSADC_CH_FCFGM_PFEN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.PFEN */
#define IFX_EDSADC_CH_FCFGM_PFEN_OFF (5u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.OCEN */
#define IFX_EDSADC_CH_FCFGM_OCEN_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.OCEN */
#define IFX_EDSADC_CH_FCFGM_OCEN_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.OCEN */
#define IFX_EDSADC_CH_FCFGM_OCEN_OFF (8u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.OFFPROT */
#define IFX_EDSADC_CH_FCFGM_OFFPROT_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.OFFPROT */
#define IFX_EDSADC_CH_FCFGM_OFFPROT_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.OFFPROT */
#define IFX_EDSADC_CH_FCFGM_OFFPROT_OFF (11u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.FMWC */
#define IFX_EDSADC_CH_FCFGM_FMWC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.FMWC */
#define IFX_EDSADC_CH_FCFGM_FMWC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.FMWC */
#define IFX_EDSADC_CH_FCFGM_FMWC_OFF (15u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.SRGM */
#define IFX_EDSADC_CH_FCFGM_SRGM_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.SRGM */
#define IFX_EDSADC_CH_FCFGM_SRGM_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.SRGM */
#define IFX_EDSADC_CH_FCFGM_SRGM_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.SRGA */
#define IFX_EDSADC_CH_FCFGM_SRGA_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.SRGA */
#define IFX_EDSADC_CH_FCFGM_SRGA_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.SRGA */
#define IFX_EDSADC_CH_FCFGM_SRGA_OFF (20u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.ESEL */
#define IFX_EDSADC_CH_FCFGM_ESEL_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.ESEL */
#define IFX_EDSADC_CH_FCFGM_ESEL_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.ESEL */
#define IFX_EDSADC_CH_FCFGM_ESEL_OFF (22u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.CALIB */
#define IFX_EDSADC_CH_FCFGM_CALIB_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.CALIB */
#define IFX_EDSADC_CH_FCFGM_CALIB_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.CALIB */
#define IFX_EDSADC_CH_FCFGM_CALIB_OFF (28u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.AUTOCAL */
#define IFX_EDSADC_CH_FCFGM_AUTOCAL_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.AUTOCAL */
#define IFX_EDSADC_CH_FCFGM_AUTOCAL_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.AUTOCAL */
#define IFX_EDSADC_CH_FCFGM_AUTOCAL_OFF (29u)

/** \brief Length for Ifx_EDSADC_CH_FCFGM_Bits.CSRWC */
#define IFX_EDSADC_CH_FCFGM_CSRWC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGM_Bits.CSRWC */
#define IFX_EDSADC_CH_FCFGM_CSRWC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGM_Bits.CSRWC */
#define IFX_EDSADC_CH_FCFGM_CSRWC_OFF (31u)

/** \brief Length for Ifx_EDSADC_CH_FCFGC_Bits.CFMDF */
#define IFX_EDSADC_CH_FCFGC_CFMDF_LEN (9u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGC_Bits.CFMDF */
#define IFX_EDSADC_CH_FCFGC_CFMDF_MSK (0x1ffu)

/** \brief Offset for Ifx_EDSADC_CH_FCFGC_Bits.CFMDF */
#define IFX_EDSADC_CH_FCFGC_CFMDF_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_FCFGC_Bits.CFMSV */
#define IFX_EDSADC_CH_FCFGC_CFMSV_LEN (9u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGC_Bits.CFMSV */
#define IFX_EDSADC_CH_FCFGC_CFMSV_MSK (0x1ffu)

/** \brief Offset for Ifx_EDSADC_CH_FCFGC_Bits.CFMSV */
#define IFX_EDSADC_CH_FCFGC_CFMSV_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_FCNTC_Bits.CFMDCNT */
#define IFX_EDSADC_CH_FCNTC_CFMDCNT_LEN (9u)

/** \brief Mask for Ifx_EDSADC_CH_FCNTC_Bits.CFMDCNT */
#define IFX_EDSADC_CH_FCNTC_CFMDCNT_MSK (0x1ffu)

/** \brief Offset for Ifx_EDSADC_CH_FCNTC_Bits.CFMDCNT */
#define IFX_EDSADC_CH_FCNTC_CFMDCNT_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_FCNTC_Bits.CAL */
#define IFX_EDSADC_CH_FCNTC_CAL_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_FCNTC_Bits.CAL */
#define IFX_EDSADC_CH_FCNTC_CAL_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_FCNTC_Bits.CAL */
#define IFX_EDSADC_CH_FCNTC_CAL_OFF (30u)

/** \brief Length for Ifx_EDSADC_CH_IWCTR_Bits.ISC */
#define IFX_EDSADC_CH_IWCTR_ISC_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_IWCTR_Bits.ISC */
#define IFX_EDSADC_CH_IWCTR_ISC_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_IWCTR_Bits.ISC */
#define IFX_EDSADC_CH_IWCTR_ISC_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_IWCTR_Bits.IWS */
#define IFX_EDSADC_CH_IWCTR_IWS_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_IWCTR_Bits.IWS */
#define IFX_EDSADC_CH_IWCTR_IWS_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_IWCTR_Bits.IWS */
#define IFX_EDSADC_CH_IWCTR_IWS_OFF (4u)

/** \brief Length for Ifx_EDSADC_CH_IWCTR_Bits.FRC */
#define IFX_EDSADC_CH_IWCTR_FRC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_IWCTR_Bits.FRC */
#define IFX_EDSADC_CH_IWCTR_FRC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_IWCTR_Bits.FRC */
#define IFX_EDSADC_CH_IWCTR_FRC_OFF (5u)

/** \brief Length for Ifx_EDSADC_CH_IWCTR_Bits.REPVAL */
#define IFX_EDSADC_CH_IWCTR_REPVAL_LEN (4u)

/** \brief Mask for Ifx_EDSADC_CH_IWCTR_Bits.REPVAL */
#define IFX_EDSADC_CH_IWCTR_REPVAL_MSK (0xfu)

/** \brief Offset for Ifx_EDSADC_CH_IWCTR_Bits.REPVAL */
#define IFX_EDSADC_CH_IWCTR_REPVAL_OFF (8u)

/** \brief Length for Ifx_EDSADC_CH_IWCTR_Bits.NVALDIS */
#define IFX_EDSADC_CH_IWCTR_NVALDIS_LEN (6u)

/** \brief Mask for Ifx_EDSADC_CH_IWCTR_Bits.NVALDIS */
#define IFX_EDSADC_CH_IWCTR_NVALDIS_MSK (0x3fu)

/** \brief Offset for Ifx_EDSADC_CH_IWCTR_Bits.NVALDIS */
#define IFX_EDSADC_CH_IWCTR_NVALDIS_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_IWCTR_Bits.NVALINT */
#define IFX_EDSADC_CH_IWCTR_NVALINT_LEN (6u)

/** \brief Mask for Ifx_EDSADC_CH_IWCTR_Bits.NVALINT */
#define IFX_EDSADC_CH_IWCTR_NVALINT_MSK (0x3fu)

/** \brief Offset for Ifx_EDSADC_CH_IWCTR_Bits.NVALINT */
#define IFX_EDSADC_CH_IWCTR_NVALINT_OFF (24u)

/** \brief Length for Ifx_EDSADC_CH_IIVAL_Bits.IVAL */
#define IFX_EDSADC_CH_IIVAL_IVAL_LEN (26u)

/** \brief Mask for Ifx_EDSADC_CH_IIVAL_Bits.IVAL */
#define IFX_EDSADC_CH_IIVAL_IVAL_MSK (0x3ffffffu)

/** \brief Offset for Ifx_EDSADC_CH_IIVAL_Bits.IVAL */
#define IFX_EDSADC_CH_IIVAL_IVAL_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_ISTAT_Bits.NVALCNT */
#define IFX_EDSADC_CH_ISTAT_NVALCNT_LEN (6u)

/** \brief Mask for Ifx_EDSADC_CH_ISTAT_Bits.NVALCNT */
#define IFX_EDSADC_CH_ISTAT_NVALCNT_MSK (0x3fu)

/** \brief Offset for Ifx_EDSADC_CH_ISTAT_Bits.NVALCNT */
#define IFX_EDSADC_CH_ISTAT_NVALCNT_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_ISTAT_Bits.REPCNT */
#define IFX_EDSADC_CH_ISTAT_REPCNT_LEN (4u)

/** \brief Mask for Ifx_EDSADC_CH_ISTAT_Bits.REPCNT */
#define IFX_EDSADC_CH_ISTAT_REPCNT_MSK (0xfu)

/** \brief Offset for Ifx_EDSADC_CH_ISTAT_Bits.REPCNT */
#define IFX_EDSADC_CH_ISTAT_REPCNT_OFF (8u)

/** \brief Length for Ifx_EDSADC_CH_ISTAT_Bits.INTEN */
#define IFX_EDSADC_CH_ISTAT_INTEN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_ISTAT_Bits.INTEN */
#define IFX_EDSADC_CH_ISTAT_INTEN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_ISTAT_Bits.INTEN */
#define IFX_EDSADC_CH_ISTAT_INTEN_OFF (15u)

/** \brief Length for Ifx_EDSADC_CH_RFC_Bits.SRLVL */
#define IFX_EDSADC_CH_RFC_SRLVL_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_RFC_Bits.SRLVL */
#define IFX_EDSADC_CH_RFC_SRLVL_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_RFC_Bits.SRLVL */
#define IFX_EDSADC_CH_RFC_SRLVL_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_RFC_Bits.RDEC */
#define IFX_EDSADC_CH_RFC_RDEC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RFC_Bits.RDEC */
#define IFX_EDSADC_CH_RFC_RDEC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RFC_Bits.RDEC */
#define IFX_EDSADC_CH_RFC_RDEC_OFF (4u)

/** \brief Length for Ifx_EDSADC_CH_RFC_Bits.WREC */
#define IFX_EDSADC_CH_RFC_WREC_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RFC_Bits.WREC */
#define IFX_EDSADC_CH_RFC_WREC_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RFC_Bits.WREC */
#define IFX_EDSADC_CH_RFC_WREC_OFF (5u)

/** \brief Length for Ifx_EDSADC_CH_RFC_Bits.FIFL */
#define IFX_EDSADC_CH_RFC_FIFL_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RFC_Bits.FIFL */
#define IFX_EDSADC_CH_RFC_FIFL_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RFC_Bits.FIFL */
#define IFX_EDSADC_CH_RFC_FIFL_OFF (6u)

/** \brief Length for Ifx_EDSADC_CH_RFC_Bits.FILL */
#define IFX_EDSADC_CH_RFC_FILL_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_RFC_Bits.FILL */
#define IFX_EDSADC_CH_RFC_FILL_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_RFC_Bits.FILL */
#define IFX_EDSADC_CH_RFC_FILL_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_RFC_Bits.RDERR */
#define IFX_EDSADC_CH_RFC_RDERR_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RFC_Bits.RDERR */
#define IFX_EDSADC_CH_RFC_RDERR_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RFC_Bits.RDERR */
#define IFX_EDSADC_CH_RFC_RDERR_OFF (20u)

/** \brief Length for Ifx_EDSADC_CH_RFC_Bits.WRERR */
#define IFX_EDSADC_CH_RFC_WRERR_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RFC_Bits.WRERR */
#define IFX_EDSADC_CH_RFC_WRERR_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RFC_Bits.WRERR */
#define IFX_EDSADC_CH_RFC_WRERR_OFF (21u)

/** \brief Length for Ifx_EDSADC_CH_RESM_Bits.RESULTLO */
#define IFX_EDSADC_CH_RESM_RESULTLO_LEN (16u)

/** \brief Mask for Ifx_EDSADC_CH_RESM_Bits.RESULTLO */
#define IFX_EDSADC_CH_RESM_RESULTLO_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_CH_RESM_Bits.RESULTLO */
#define IFX_EDSADC_CH_RESM_RESULTLO_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_RESM_Bits.RESULTHI */
#define IFX_EDSADC_CH_RESM_RESULTHI_LEN (16u)

/** \brief Mask for Ifx_EDSADC_CH_RESM_Bits.RESULTHI */
#define IFX_EDSADC_CH_RESM_RESULTHI_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_CH_RESM_Bits.RESULTHI */
#define IFX_EDSADC_CH_RESM_RESULTHI_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_OFFCOMP_Bits.OFFSET */
#define IFX_EDSADC_CH_OFFCOMP_OFFSET_LEN (16u)

/** \brief Mask for Ifx_EDSADC_CH_OFFCOMP_Bits.OFFSET */
#define IFX_EDSADC_CH_OFFCOMP_OFFSET_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_CH_OFFCOMP_Bits.OFFSET */
#define IFX_EDSADC_CH_OFFCOMP_OFFSET_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_GAINCAL_Bits.CALFACTOR */
#define IFX_EDSADC_CH_GAINCAL_CALFACTOR_LEN (13u)

/** \brief Mask for Ifx_EDSADC_CH_GAINCAL_Bits.CALFACTOR */
#define IFX_EDSADC_CH_GAINCAL_CALFACTOR_MSK (0x1fffu)

/** \brief Offset for Ifx_EDSADC_CH_GAINCAL_Bits.CALFACTOR */
#define IFX_EDSADC_CH_GAINCAL_CALFACTOR_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_GAINCAL_Bits.CALTARGET */
#define IFX_EDSADC_CH_GAINCAL_CALTARGET_LEN (15u)

/** \brief Mask for Ifx_EDSADC_CH_GAINCAL_Bits.CALTARGET */
#define IFX_EDSADC_CH_GAINCAL_CALTARGET_MSK (0x7fffu)

/** \brief Offset for Ifx_EDSADC_CH_GAINCAL_Bits.CALTARGET */
#define IFX_EDSADC_CH_GAINCAL_CALTARGET_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_GAINCTR_Bits.GAINFACTOR */
#define IFX_EDSADC_CH_GAINCTR_GAINFACTOR_LEN (13u)

/** \brief Mask for Ifx_EDSADC_CH_GAINCTR_Bits.GAINFACTOR */
#define IFX_EDSADC_CH_GAINCTR_GAINFACTOR_MSK (0x1fffu)

/** \brief Offset for Ifx_EDSADC_CH_GAINCTR_Bits.GAINFACTOR */
#define IFX_EDSADC_CH_GAINCTR_GAINFACTOR_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_GAINCTR_Bits.CICSHIFT */
#define IFX_EDSADC_CH_GAINCTR_CICSHIFT_LEN (5u)

/** \brief Mask for Ifx_EDSADC_CH_GAINCTR_Bits.CICSHIFT */
#define IFX_EDSADC_CH_GAINCTR_CICSHIFT_MSK (0x1fu)

/** \brief Offset for Ifx_EDSADC_CH_GAINCTR_Bits.CICSHIFT */
#define IFX_EDSADC_CH_GAINCTR_CICSHIFT_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_GAINCTR_Bits.CICDEC */
#define IFX_EDSADC_CH_GAINCTR_CICDEC_LEN (3u)

/** \brief Mask for Ifx_EDSADC_CH_GAINCTR_Bits.CICDEC */
#define IFX_EDSADC_CH_GAINCTR_CICDEC_MSK (0x7u)

/** \brief Offset for Ifx_EDSADC_CH_GAINCTR_Bits.CICDEC */
#define IFX_EDSADC_CH_GAINCTR_CICDEC_OFF (24u)

/** \brief Length for Ifx_EDSADC_CH_GAINCORR_Bits.GAINFACTOR */
#define IFX_EDSADC_CH_GAINCORR_GAINFACTOR_LEN (13u)

/** \brief Mask for Ifx_EDSADC_CH_GAINCORR_Bits.GAINFACTOR */
#define IFX_EDSADC_CH_GAINCORR_GAINFACTOR_MSK (0x1fffu)

/** \brief Offset for Ifx_EDSADC_CH_GAINCORR_Bits.GAINFACTOR */
#define IFX_EDSADC_CH_GAINCORR_GAINFACTOR_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_GAINCORR_Bits.CICSHIFT */
#define IFX_EDSADC_CH_GAINCORR_CICSHIFT_LEN (5u)

/** \brief Mask for Ifx_EDSADC_CH_GAINCORR_Bits.CICSHIFT */
#define IFX_EDSADC_CH_GAINCORR_CICSHIFT_MSK (0x1fu)

/** \brief Offset for Ifx_EDSADC_CH_GAINCORR_Bits.CICSHIFT */
#define IFX_EDSADC_CH_GAINCORR_CICSHIFT_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_TSTMP_Bits.TIMESTAMP */
#define IFX_EDSADC_CH_TSTMP_TIMESTAMP_LEN (16u)

/** \brief Mask for Ifx_EDSADC_CH_TSTMP_Bits.TIMESTAMP */
#define IFX_EDSADC_CH_TSTMP_TIMESTAMP_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_CH_TSTMP_Bits.TIMESTAMP */
#define IFX_EDSADC_CH_TSTMP_TIMESTAMP_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_TSTMP_Bits.AMX */
#define IFX_EDSADC_CH_TSTMP_AMX_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_TSTMP_Bits.AMX */
#define IFX_EDSADC_CH_TSTMP_AMX_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_TSTMP_Bits.AMX */
#define IFX_EDSADC_CH_TSTMP_AMX_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_TSTMP_Bits.TSVAL */
#define IFX_EDSADC_CH_TSTMP_TSVAL_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_TSTMP_Bits.TSVAL */
#define IFX_EDSADC_CH_TSTMP_TSVAL_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_TSTMP_Bits.TSVAL */
#define IFX_EDSADC_CH_TSTMP_TSVAL_OFF (31u)

/** \brief Length for Ifx_EDSADC_CH_TSCNT_Bits.TSCOUNT */
#define IFX_EDSADC_CH_TSCNT_TSCOUNT_LEN (16u)

/** \brief Mask for Ifx_EDSADC_CH_TSCNT_Bits.TSCOUNT */
#define IFX_EDSADC_CH_TSCNT_TSCOUNT_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_CH_TSCNT_Bits.TSCOUNT */
#define IFX_EDSADC_CH_TSCNT_TSCOUNT_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_TSCNT_Bits.TSCLK */
#define IFX_EDSADC_CH_TSCNT_TSCLK_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_TSCNT_Bits.TSCLK */
#define IFX_EDSADC_CH_TSCNT_TSCLK_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_TSCNT_Bits.TSCLK */
#define IFX_EDSADC_CH_TSCNT_TSCLK_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_TSCNT_Bits.TSCRUN */
#define IFX_EDSADC_CH_TSCNT_TSCRUN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_TSCNT_Bits.TSCRUN */
#define IFX_EDSADC_CH_TSCNT_TSCRUN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_TSCNT_Bits.TSCRUN */
#define IFX_EDSADC_CH_TSCNT_TSCRUN_OFF (19u)

/** \brief Length for Ifx_EDSADC_CH_TSCNT_Bits.AMXCOPY */
#define IFX_EDSADC_CH_TSCNT_AMXCOPY_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_TSCNT_Bits.AMXCOPY */
#define IFX_EDSADC_CH_TSCNT_AMXCOPY_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_TSCNT_Bits.AMXCOPY */
#define IFX_EDSADC_CH_TSCNT_AMXCOPY_OFF (20u)

/** \brief Length for Ifx_EDSADC_CH_FCFGA_Bits.CFADF */
#define IFX_EDSADC_CH_FCFGA_CFADF_LEN (10u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGA_Bits.CFADF */
#define IFX_EDSADC_CH_FCFGA_CFADF_MSK (0x3ffu)

/** \brief Offset for Ifx_EDSADC_CH_FCFGA_Bits.CFADF */
#define IFX_EDSADC_CH_FCFGA_CFADF_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_FCFGA_Bits.CICAMOD */
#define IFX_EDSADC_CH_FCFGA_CICAMOD_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGA_Bits.CICAMOD */
#define IFX_EDSADC_CH_FCFGA_CICAMOD_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGA_Bits.CICAMOD */
#define IFX_EDSADC_CH_FCFGA_CICAMOD_OFF (8u)

/** \brief Length for Ifx_EDSADC_CH_FCFGA_Bits.ESEL */
#define IFX_EDSADC_CH_FCFGA_ESEL_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGA_Bits.ESEL */
#define IFX_EDSADC_CH_FCFGA_ESEL_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGA_Bits.ESEL */
#define IFX_EDSADC_CH_FCFGA_ESEL_OFF (12u)

/** \brief Length for Ifx_EDSADC_CH_FCFGA_Bits.EGT */
#define IFX_EDSADC_CH_FCFGA_EGT_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGA_Bits.EGT */
#define IFX_EDSADC_CH_FCFGA_EGT_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_FCFGA_Bits.EGT */
#define IFX_EDSADC_CH_FCFGA_EGT_OFF (14u)

/** \brief Length for Ifx_EDSADC_CH_FCFGA_Bits.CFADCNT */
#define IFX_EDSADC_CH_FCFGA_CFADCNT_LEN (8u)

/** \brief Mask for Ifx_EDSADC_CH_FCFGA_Bits.CFADCNT */
#define IFX_EDSADC_CH_FCFGA_CFADCNT_MSK (0xffu)

/** \brief Offset for Ifx_EDSADC_CH_FCFGA_Bits.CFADCNT */
#define IFX_EDSADC_CH_FCFGA_CFADCNT_OFF (24u)

/** \brief Length for Ifx_EDSADC_CH_BOUNDSEL_Bits.BOUNDARYL */
#define IFX_EDSADC_CH_BOUNDSEL_BOUNDARYL_LEN (16u)

/** \brief Mask for Ifx_EDSADC_CH_BOUNDSEL_Bits.BOUNDARYL */
#define IFX_EDSADC_CH_BOUNDSEL_BOUNDARYL_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_CH_BOUNDSEL_Bits.BOUNDARYL */
#define IFX_EDSADC_CH_BOUNDSEL_BOUNDARYL_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_BOUNDSEL_Bits.BOUNDARYU */
#define IFX_EDSADC_CH_BOUNDSEL_BOUNDARYU_LEN (16u)

/** \brief Mask for Ifx_EDSADC_CH_BOUNDSEL_Bits.BOUNDARYU */
#define IFX_EDSADC_CH_BOUNDSEL_BOUNDARYU_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_CH_BOUNDSEL_Bits.BOUNDARYU */
#define IFX_EDSADC_CH_BOUNDSEL_BOUNDARYU_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_RESA_Bits.RESULT */
#define IFX_EDSADC_CH_RESA_RESULT_LEN (16u)

/** \brief Mask for Ifx_EDSADC_CH_RESA_Bits.RESULT */
#define IFX_EDSADC_CH_RESA_RESULT_MSK (0xffffu)

/** \brief Offset for Ifx_EDSADC_CH_RESA_Bits.RESULT */
#define IFX_EDSADC_CH_RESA_RESULT_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_CGSYNC_Bits.SDCOUNT */
#define IFX_EDSADC_CH_CGSYNC_SDCOUNT_LEN (8u)

/** \brief Mask for Ifx_EDSADC_CH_CGSYNC_Bits.SDCOUNT */
#define IFX_EDSADC_CH_CGSYNC_SDCOUNT_MSK (0xffu)

/** \brief Offset for Ifx_EDSADC_CH_CGSYNC_Bits.SDCOUNT */
#define IFX_EDSADC_CH_CGSYNC_SDCOUNT_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_CGSYNC_Bits.SDCAP */
#define IFX_EDSADC_CH_CGSYNC_SDCAP_LEN (8u)

/** \brief Mask for Ifx_EDSADC_CH_CGSYNC_Bits.SDCAP */
#define IFX_EDSADC_CH_CGSYNC_SDCAP_MSK (0xffu)

/** \brief Offset for Ifx_EDSADC_CH_CGSYNC_Bits.SDCAP */
#define IFX_EDSADC_CH_CGSYNC_SDCAP_OFF (8u)

/** \brief Length for Ifx_EDSADC_CH_CGSYNC_Bits.SDPOS */
#define IFX_EDSADC_CH_CGSYNC_SDPOS_LEN (8u)

/** \brief Mask for Ifx_EDSADC_CH_CGSYNC_Bits.SDPOS */
#define IFX_EDSADC_CH_CGSYNC_SDPOS_MSK (0xffu)

/** \brief Offset for Ifx_EDSADC_CH_CGSYNC_Bits.SDPOS */
#define IFX_EDSADC_CH_CGSYNC_SDPOS_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_CGSYNC_Bits.SDNEG */
#define IFX_EDSADC_CH_CGSYNC_SDNEG_LEN (8u)

/** \brief Mask for Ifx_EDSADC_CH_CGSYNC_Bits.SDNEG */
#define IFX_EDSADC_CH_CGSYNC_SDNEG_MSK (0xffu)

/** \brief Offset for Ifx_EDSADC_CH_CGSYNC_Bits.SDNEG */
#define IFX_EDSADC_CH_CGSYNC_SDNEG_OFF (24u)

/** \brief Length for Ifx_EDSADC_CH_RECTCFG_Bits.RFEN */
#define IFX_EDSADC_CH_RECTCFG_RFEN_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RECTCFG_Bits.RFEN */
#define IFX_EDSADC_CH_RECTCFG_RFEN_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RECTCFG_Bits.RFEN */
#define IFX_EDSADC_CH_RECTCFG_RFEN_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_RECTCFG_Bits.SSRC */
#define IFX_EDSADC_CH_RECTCFG_SSRC_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_RECTCFG_Bits.SSRC */
#define IFX_EDSADC_CH_RECTCFG_SSRC_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_RECTCFG_Bits.SSRC */
#define IFX_EDSADC_CH_RECTCFG_SSRC_OFF (4u)

/** \brief Length for Ifx_EDSADC_CH_RECTCFG_Bits.SSCH */
#define IFX_EDSADC_CH_RECTCFG_SSCH_LEN (4u)

/** \brief Mask for Ifx_EDSADC_CH_RECTCFG_Bits.SSCH */
#define IFX_EDSADC_CH_RECTCFG_SSCH_MSK (0xfu)

/** \brief Offset for Ifx_EDSADC_CH_RECTCFG_Bits.SSCH */
#define IFX_EDSADC_CH_RECTCFG_SSCH_OFF (8u)

/** \brief Length for Ifx_EDSADC_CH_RECTCFG_Bits.SDCVAL */
#define IFX_EDSADC_CH_RECTCFG_SDCVAL_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RECTCFG_Bits.SDCVAL */
#define IFX_EDSADC_CH_RECTCFG_SDCVAL_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RECTCFG_Bits.SDCVAL */
#define IFX_EDSADC_CH_RECTCFG_SDCVAL_OFF (15u)

/** \brief Length for Ifx_EDSADC_CH_RECTCFG_Bits.SGNCS */
#define IFX_EDSADC_CH_RECTCFG_SGNCS_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RECTCFG_Bits.SGNCS */
#define IFX_EDSADC_CH_RECTCFG_SGNCS_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RECTCFG_Bits.SGNCS */
#define IFX_EDSADC_CH_RECTCFG_SGNCS_OFF (30u)

/** \brief Length for Ifx_EDSADC_CH_RECTCFG_Bits.SGND */
#define IFX_EDSADC_CH_RECTCFG_SGND_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_RECTCFG_Bits.SGND */
#define IFX_EDSADC_CH_RECTCFG_SGND_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_RECTCFG_Bits.SGND */
#define IFX_EDSADC_CH_RECTCFG_SGND_OFF (31u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.VREFXSEL */
#define IFX_EDSADC_CH_VCM_VREFXSEL_LEN (2u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.VREFXSEL */
#define IFX_EDSADC_CH_VCM_VREFXSEL_MSK (0x3u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.VREFXSEL */
#define IFX_EDSADC_CH_VCM_VREFXSEL_OFF (0u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.VXON */
#define IFX_EDSADC_CH_VCM_VXON_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.VXON */
#define IFX_EDSADC_CH_VCM_VXON_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.VXON */
#define IFX_EDSADC_CH_VCM_VXON_OFF (2u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.INPVC0 */
#define IFX_EDSADC_CH_VCM_INPVC0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.INPVC0 */
#define IFX_EDSADC_CH_VCM_INPVC0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.INPVC0 */
#define IFX_EDSADC_CH_VCM_INPVC0_OFF (16u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.INPVC1 */
#define IFX_EDSADC_CH_VCM_INPVC1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.INPVC1 */
#define IFX_EDSADC_CH_VCM_INPVC1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.INPVC1 */
#define IFX_EDSADC_CH_VCM_INPVC1_OFF (17u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.INPVC2 */
#define IFX_EDSADC_CH_VCM_INPVC2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.INPVC2 */
#define IFX_EDSADC_CH_VCM_INPVC2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.INPVC2 */
#define IFX_EDSADC_CH_VCM_INPVC2_OFF (18u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.INPVC3 */
#define IFX_EDSADC_CH_VCM_INPVC3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.INPVC3 */
#define IFX_EDSADC_CH_VCM_INPVC3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.INPVC3 */
#define IFX_EDSADC_CH_VCM_INPVC3_OFF (19u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.INNVC0 */
#define IFX_EDSADC_CH_VCM_INNVC0_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.INNVC0 */
#define IFX_EDSADC_CH_VCM_INNVC0_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.INNVC0 */
#define IFX_EDSADC_CH_VCM_INNVC0_OFF (20u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.INNVC1 */
#define IFX_EDSADC_CH_VCM_INNVC1_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.INNVC1 */
#define IFX_EDSADC_CH_VCM_INNVC1_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.INNVC1 */
#define IFX_EDSADC_CH_VCM_INNVC1_OFF (21u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.INNVC2 */
#define IFX_EDSADC_CH_VCM_INNVC2_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.INNVC2 */
#define IFX_EDSADC_CH_VCM_INNVC2_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.INNVC2 */
#define IFX_EDSADC_CH_VCM_INNVC2_OFF (22u)

/** \brief Length for Ifx_EDSADC_CH_VCM_Bits.INNVC3 */
#define IFX_EDSADC_CH_VCM_INNVC3_LEN (1u)

/** \brief Mask for Ifx_EDSADC_CH_VCM_Bits.INNVC3 */
#define IFX_EDSADC_CH_VCM_INNVC3_MSK (0x1u)

/** \brief Offset for Ifx_EDSADC_CH_VCM_Bits.INNVC3 */
#define IFX_EDSADC_CH_VCM_INNVC3_OFF (23u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEDSADC_BF_H */
