/**
 * \file IfxSpu_bf.h
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
 * \defgroup IfxLld_Spu_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxLld_Spu_Registers
 * 
 */
#ifndef IFXSPU_BF_H
#define IFXSPU_BF_H 1
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Spu_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_SPU_CLC_Bits.DISR */
#define IFX_SPU_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_SPU_CLC_Bits.DISR */
#define IFX_SPU_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_SPU_CLC_Bits.DISR */
#define IFX_SPU_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_SPU_CLC_Bits.DISS */
#define IFX_SPU_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_SPU_CLC_Bits.DISS */
#define IFX_SPU_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_SPU_CLC_Bits.DISS */
#define IFX_SPU_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_SPU_CLC_Bits.RES */
#define IFX_SPU_CLC_RES_LEN (1u)

/** \brief Mask for Ifx_SPU_CLC_Bits.RES */
#define IFX_SPU_CLC_RES_MSK (0x1u)

/** \brief Offset for Ifx_SPU_CLC_Bits.RES */
#define IFX_SPU_CLC_RES_OFF (2u)

/** \brief Length for Ifx_SPU_CLC_Bits.EDIS */
#define IFX_SPU_CLC_EDIS_LEN (1u)

/** \brief Mask for Ifx_SPU_CLC_Bits.EDIS */
#define IFX_SPU_CLC_EDIS_MSK (0x1u)

/** \brief Offset for Ifx_SPU_CLC_Bits.EDIS */
#define IFX_SPU_CLC_EDIS_OFF (3u)

/** \brief Length for Ifx_SPU_MODID_Bits.MOD_REV */
#define IFX_SPU_MODID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_SPU_MODID_Bits.MOD_REV */
#define IFX_SPU_MODID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_SPU_MODID_Bits.MOD_REV */
#define IFX_SPU_MODID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_SPU_MODID_Bits.MOD_TYPE */
#define IFX_SPU_MODID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_SPU_MODID_Bits.MOD_TYPE */
#define IFX_SPU_MODID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_SPU_MODID_Bits.MOD_TYPE */
#define IFX_SPU_MODID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_SPU_MODID_Bits.MOD_NUMBER */
#define IFX_SPU_MODID_MOD_NUMBER_LEN (16u)

/** \brief Mask for Ifx_SPU_MODID_Bits.MOD_NUMBER */
#define IFX_SPU_MODID_MOD_NUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_MODID_Bits.MOD_NUMBER */
#define IFX_SPU_MODID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_SPU_STAT_Bits.ERRSTS */
#define IFX_SPU_STAT_ERRSTS_LEN (1u)

/** \brief Mask for Ifx_SPU_STAT_Bits.ERRSTS */
#define IFX_SPU_STAT_ERRSTS_MSK (0x1u)

/** \brief Offset for Ifx_SPU_STAT_Bits.ERRSTS */
#define IFX_SPU_STAT_ERRSTS_OFF (0u)

/** \brief Length for Ifx_SPU_STAT_Bits.ERRCLR */
#define IFX_SPU_STAT_ERRCLR_LEN (1u)

/** \brief Mask for Ifx_SPU_STAT_Bits.ERRCLR */
#define IFX_SPU_STAT_ERRCLR_MSK (0x1u)

/** \brief Offset for Ifx_SPU_STAT_Bits.ERRCLR */
#define IFX_SPU_STAT_ERRCLR_OFF (1u)

/** \brief Length for Ifx_SPU_STAT_Bits.ERRMSK */
#define IFX_SPU_STAT_ERRMSK_LEN (6u)

/** \brief Mask for Ifx_SPU_STAT_Bits.ERRMSK */
#define IFX_SPU_STAT_ERRMSK_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_STAT_Bits.ERRMSK */
#define IFX_SPU_STAT_ERRMSK_OFF (2u)

/** \brief Length for Ifx_SPU_STAT_Bits.INTSTS */
#define IFX_SPU_STAT_INTSTS_LEN (1u)

/** \brief Mask for Ifx_SPU_STAT_Bits.INTSTS */
#define IFX_SPU_STAT_INTSTS_MSK (0x1u)

/** \brief Offset for Ifx_SPU_STAT_Bits.INTSTS */
#define IFX_SPU_STAT_INTSTS_OFF (8u)

/** \brief Length for Ifx_SPU_STAT_Bits.INTCLR */
#define IFX_SPU_STAT_INTCLR_LEN (1u)

/** \brief Mask for Ifx_SPU_STAT_Bits.INTCLR */
#define IFX_SPU_STAT_INTCLR_MSK (0x1u)

/** \brief Offset for Ifx_SPU_STAT_Bits.INTCLR */
#define IFX_SPU_STAT_INTCLR_OFF (9u)

/** \brief Length for Ifx_SPU_STAT_Bits.INTMSK */
#define IFX_SPU_STAT_INTMSK_LEN (6u)

/** \brief Mask for Ifx_SPU_STAT_Bits.INTMSK */
#define IFX_SPU_STAT_INTMSK_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_STAT_Bits.INTMSK */
#define IFX_SPU_STAT_INTMSK_OFF (10u)

/** \brief Length for Ifx_SPU_STAT_Bits.OVRRN */
#define IFX_SPU_STAT_OVRRN_LEN (3u)

/** \brief Mask for Ifx_SPU_STAT_Bits.OVRRN */
#define IFX_SPU_STAT_OVRRN_MSK (0x7u)

/** \brief Offset for Ifx_SPU_STAT_Bits.OVRRN */
#define IFX_SPU_STAT_OVRRN_OFF (16u)

/** \brief Length for Ifx_SPU_STAT_Bits.RES */
#define IFX_SPU_STAT_RES_LEN (1u)

/** \brief Mask for Ifx_SPU_STAT_Bits.RES */
#define IFX_SPU_STAT_RES_MSK (0x1u)

/** \brief Offset for Ifx_SPU_STAT_Bits.RES */
#define IFX_SPU_STAT_RES_OFF (19u)

/** \brief Length for Ifx_SPU_STAT_Bits.ERRTRG */
#define IFX_SPU_STAT_ERRTRG_LEN (6u)

/** \brief Mask for Ifx_SPU_STAT_Bits.ERRTRG */
#define IFX_SPU_STAT_ERRTRG_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_STAT_Bits.ERRTRG */
#define IFX_SPU_STAT_ERRTRG_OFF (20u)

/** \brief Length for Ifx_SPU_STAT_Bits.INTTRG */
#define IFX_SPU_STAT_INTTRG_LEN (6u)

/** \brief Mask for Ifx_SPU_STAT_Bits.INTTRG */
#define IFX_SPU_STAT_INTTRG_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_STAT_Bits.INTTRG */
#define IFX_SPU_STAT_INTTRG_OFF (26u)

/** \brief Length for Ifx_SPU_ID_CONF_Bits.SRC */
#define IFX_SPU_ID_CONF_SRC_LEN (2u)

/** \brief Mask for Ifx_SPU_ID_CONF_Bits.SRC */
#define IFX_SPU_ID_CONF_SRC_MSK (0x3u)

/** \brief Offset for Ifx_SPU_ID_CONF_Bits.SRC */
#define IFX_SPU_ID_CONF_SRC_OFF (0u)

/** \brief Length for Ifx_SPU_ID_CONF_Bits.ANT */
#define IFX_SPU_ID_CONF_ANT_LEN (2u)

/** \brief Mask for Ifx_SPU_ID_CONF_Bits.ANT */
#define IFX_SPU_ID_CONF_ANT_MSK (0x3u)

/** \brief Offset for Ifx_SPU_ID_CONF_Bits.ANT */
#define IFX_SPU_ID_CONF_ANT_OFF (2u)

/** \brief Length for Ifx_SPU_ID_CONF_Bits.SMPLCNT */
#define IFX_SPU_ID_CONF_SMPLCNT_LEN (11u)

/** \brief Mask for Ifx_SPU_ID_CONF_Bits.SMPLCNT */
#define IFX_SPU_ID_CONF_SMPLCNT_MSK (0x7ffu)

/** \brief Offset for Ifx_SPU_ID_CONF_Bits.SMPLCNT */
#define IFX_SPU_ID_CONF_SMPLCNT_OFF (4u)

/** \brief Length for Ifx_SPU_ID_CONF_Bits.RES */
#define IFX_SPU_ID_CONF_RES_LEN (1u)

/** \brief Mask for Ifx_SPU_ID_CONF_Bits.RES */
#define IFX_SPU_ID_CONF_RES_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ID_CONF_Bits.RES */
#define IFX_SPU_ID_CONF_RES_OFF (15u)

/** \brief Length for Ifx_SPU_ID_CONF_Bits.RAMPS */
#define IFX_SPU_ID_CONF_RAMPS_LEN (11u)

/** \brief Mask for Ifx_SPU_ID_CONF_Bits.RAMPS */
#define IFX_SPU_ID_CONF_RAMPS_MSK (0x7ffu)

/** \brief Offset for Ifx_SPU_ID_CONF_Bits.RAMPS */
#define IFX_SPU_ID_CONF_RAMPS_OFF (16u)

/** \brief Length for Ifx_SPU_ID_CONF_Bits.SIGNED */
#define IFX_SPU_ID_CONF_SIGNED_LEN (1u)

/** \brief Mask for Ifx_SPU_ID_CONF_Bits.SIGNED */
#define IFX_SPU_ID_CONF_SIGNED_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ID_CONF_Bits.SIGNED */
#define IFX_SPU_ID_CONF_SIGNED_OFF (30u)

/** \brief Length for Ifx_SPU_ID_CONF_Bits.FORMAT */
#define IFX_SPU_ID_CONF_FORMAT_LEN (1u)

/** \brief Mask for Ifx_SPU_ID_CONF_Bits.FORMAT */
#define IFX_SPU_ID_CONF_FORMAT_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ID_CONF_Bits.FORMAT */
#define IFX_SPU_ID_CONF_FORMAT_OFF (31u)

/** \brief Length for Ifx_SPU_ID_CONF2_Bits.BPADDR */
#define IFX_SPU_ID_CONF2_BPADDR_LEN (19u)

/** \brief Mask for Ifx_SPU_ID_CONF2_Bits.BPADDR */
#define IFX_SPU_ID_CONF2_BPADDR_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_ID_CONF2_Bits.BPADDR */
#define IFX_SPU_ID_CONF2_BPADDR_OFF (0u)

/** \brief Length for Ifx_SPU_ID_CONF2_Bits.RES */
#define IFX_SPU_ID_CONF2_RES_LEN (5u)

/** \brief Mask for Ifx_SPU_ID_CONF2_Bits.RES */
#define IFX_SPU_ID_CONF2_RES_MSK (0x1fu)

/** \brief Offset for Ifx_SPU_ID_CONF2_Bits.RES */
#define IFX_SPU_ID_CONF2_RES_OFF (19u)

/** \brief Length for Ifx_SPU_ID_CONF2_Bits.BYPASS */
#define IFX_SPU_ID_CONF2_BYPASS_LEN (1u)

/** \brief Mask for Ifx_SPU_ID_CONF2_Bits.BYPASS */
#define IFX_SPU_ID_CONF2_BYPASS_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ID_CONF2_Bits.BYPASS */
#define IFX_SPU_ID_CONF2_BYPASS_OFF (24u)

/** \brief Length for Ifx_SPU_ID_CONF2_Bits.BPRLD */
#define IFX_SPU_ID_CONF2_BPRLD_LEN (1u)

/** \brief Mask for Ifx_SPU_ID_CONF2_Bits.BPRLD */
#define IFX_SPU_ID_CONF2_BPRLD_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ID_CONF2_Bits.BPRLD */
#define IFX_SPU_ID_CONF2_BPRLD_OFF (25u)

/** \brief Length for Ifx_SPU_ID_RM_CONF_Bits.BASE */
#define IFX_SPU_ID_RM_CONF_BASE_LEN (19u)

/** \brief Mask for Ifx_SPU_ID_RM_CONF_Bits.BASE */
#define IFX_SPU_ID_RM_CONF_BASE_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_ID_RM_CONF_Bits.BASE */
#define IFX_SPU_ID_RM_CONF_BASE_OFF (0u)

/** \brief Length for Ifx_SPU_ID_RM_CONF_Bits.RES */
#define IFX_SPU_ID_RM_CONF_RES_LEN (1u)

/** \brief Mask for Ifx_SPU_ID_RM_CONF_Bits.RES */
#define IFX_SPU_ID_RM_CONF_RES_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ID_RM_CONF_Bits.RES */
#define IFX_SPU_ID_RM_CONF_RES_OFF (19u)

/** \brief Length for Ifx_SPU_ID_RM_CONF_Bits.FORMAT */
#define IFX_SPU_ID_RM_CONF_FORMAT_LEN (2u)

/** \brief Mask for Ifx_SPU_ID_RM_CONF_Bits.FORMAT */
#define IFX_SPU_ID_RM_CONF_FORMAT_MSK (0x3u)

/** \brief Offset for Ifx_SPU_ID_RM_CONF_Bits.FORMAT */
#define IFX_SPU_ID_RM_CONF_FORMAT_OFF (20u)

/** \brief Length for Ifx_SPU_ID_RM_CONF_Bits.TRNSPS */
#define IFX_SPU_ID_RM_CONF_TRNSPS_LEN (1u)

/** \brief Mask for Ifx_SPU_ID_RM_CONF_Bits.TRNSPS */
#define IFX_SPU_ID_RM_CONF_TRNSPS_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ID_RM_CONF_Bits.TRNSPS */
#define IFX_SPU_ID_RM_CONF_TRNSPS_OFF (22u)

/** \brief Length for Ifx_SPU_ID_RM_CONF_Bits.AM */
#define IFX_SPU_ID_RM_CONF_AM_LEN (3u)

/** \brief Mask for Ifx_SPU_ID_RM_CONF_Bits.AM */
#define IFX_SPU_ID_RM_CONF_AM_MSK (0x7u)

/** \brief Offset for Ifx_SPU_ID_RM_CONF_Bits.AM */
#define IFX_SPU_ID_RM_CONF_AM_OFF (24u)

/** \brief Length for Ifx_SPU_ID_RM_CONF_Bits.BLOCKS */
#define IFX_SPU_ID_RM_CONF_BLOCKS_LEN (3u)

/** \brief Mask for Ifx_SPU_ID_RM_CONF_Bits.BLOCKS */
#define IFX_SPU_ID_RM_CONF_BLOCKS_MSK (0x7u)

/** \brief Offset for Ifx_SPU_ID_RM_CONF_Bits.BLOCKS */
#define IFX_SPU_ID_RM_CONF_BLOCKS_OFF (28u)

/** \brief Length for Ifx_SPU_ID_RM_CONF_Bits.PM */
#define IFX_SPU_ID_RM_CONF_PM_LEN (1u)

/** \brief Mask for Ifx_SPU_ID_RM_CONF_Bits.PM */
#define IFX_SPU_ID_RM_CONF_PM_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ID_RM_CONF_Bits.PM */
#define IFX_SPU_ID_RM_CONF_PM_OFF (31u)

/** \brief Length for Ifx_SPU_ID_RM_ILO_Bits.ILO */
#define IFX_SPU_ID_RM_ILO_ILO_LEN (24u)

/** \brief Mask for Ifx_SPU_ID_RM_ILO_Bits.ILO */
#define IFX_SPU_ID_RM_ILO_ILO_MSK (0xffffffu)

/** \brief Offset for Ifx_SPU_ID_RM_ILO_Bits.ILO */
#define IFX_SPU_ID_RM_ILO_ILO_OFF (0u)

/** \brief Length for Ifx_SPU_ID_RM_ILO_Bits.RES */
#define IFX_SPU_ID_RM_ILO_RES_LEN (8u)

/** \brief Mask for Ifx_SPU_ID_RM_ILO_Bits.RES */
#define IFX_SPU_ID_RM_ILO_RES_MSK (0xffu)

/** \brief Offset for Ifx_SPU_ID_RM_ILO_Bits.RES */
#define IFX_SPU_ID_RM_ILO_RES_OFF (24u)

/** \brief Length for Ifx_SPU_ID_RM_OLO_Bits.OLO */
#define IFX_SPU_ID_RM_OLO_OLO_LEN (24u)

/** \brief Mask for Ifx_SPU_ID_RM_OLO_Bits.OLO */
#define IFX_SPU_ID_RM_OLO_OLO_MSK (0xffffffu)

/** \brief Offset for Ifx_SPU_ID_RM_OLO_Bits.OLO */
#define IFX_SPU_ID_RM_OLO_OLO_OFF (0u)

/** \brief Length for Ifx_SPU_ID_RM_OLO_Bits.RES */
#define IFX_SPU_ID_RM_OLO_RES_LEN (8u)

/** \brief Mask for Ifx_SPU_ID_RM_OLO_Bits.RES */
#define IFX_SPU_ID_RM_OLO_RES_MSK (0xffu)

/** \brief Offset for Ifx_SPU_ID_RM_OLO_Bits.RES */
#define IFX_SPU_ID_RM_OLO_RES_OFF (24u)

/** \brief Length for Ifx_SPU_ID_RM_BLO_Bits.BLO */
#define IFX_SPU_ID_RM_BLO_BLO_LEN (24u)

/** \brief Mask for Ifx_SPU_ID_RM_BLO_Bits.BLO */
#define IFX_SPU_ID_RM_BLO_BLO_MSK (0xffffffu)

/** \brief Offset for Ifx_SPU_ID_RM_BLO_Bits.BLO */
#define IFX_SPU_ID_RM_BLO_BLO_OFF (0u)

/** \brief Length for Ifx_SPU_ID_RM_BLO_Bits.RES */
#define IFX_SPU_ID_RM_BLO_RES_LEN (8u)

/** \brief Mask for Ifx_SPU_ID_RM_BLO_Bits.RES */
#define IFX_SPU_ID_RM_BLO_RES_MSK (0xffu)

/** \brief Offset for Ifx_SPU_ID_RM_BLO_Bits.RES */
#define IFX_SPU_ID_RM_BLO_RES_OFF (24u)

/** \brief Length for Ifx_SPU_ID_RM_IOLR_Bits.ILR */
#define IFX_SPU_ID_RM_IOLR_ILR_LEN (13u)

/** \brief Mask for Ifx_SPU_ID_RM_IOLR_Bits.ILR */
#define IFX_SPU_ID_RM_IOLR_ILR_MSK (0x1fffu)

/** \brief Offset for Ifx_SPU_ID_RM_IOLR_Bits.ILR */
#define IFX_SPU_ID_RM_IOLR_ILR_OFF (0u)

/** \brief Length for Ifx_SPU_ID_RM_IOLR_Bits.RES */
#define IFX_SPU_ID_RM_IOLR_RES_LEN (3u)

/** \brief Mask for Ifx_SPU_ID_RM_IOLR_Bits.RES */
#define IFX_SPU_ID_RM_IOLR_RES_MSK (0x7u)

/** \brief Offset for Ifx_SPU_ID_RM_IOLR_Bits.RES */
#define IFX_SPU_ID_RM_IOLR_RES_OFF (13u)

/** \brief Length for Ifx_SPU_ID_RM_IOLR_Bits.OLR */
#define IFX_SPU_ID_RM_IOLR_OLR_LEN (13u)

/** \brief Mask for Ifx_SPU_ID_RM_IOLR_Bits.OLR */
#define IFX_SPU_ID_RM_IOLR_OLR_MSK (0x1fffu)

/** \brief Offset for Ifx_SPU_ID_RM_IOLR_Bits.OLR */
#define IFX_SPU_ID_RM_IOLR_OLR_OFF (16u)

/** \brief Length for Ifx_SPU_ID_RM_BLR_Bits.BLR */
#define IFX_SPU_ID_RM_BLR_BLR_LEN (13u)

/** \brief Mask for Ifx_SPU_ID_RM_BLR_Bits.BLR */
#define IFX_SPU_ID_RM_BLR_BLR_MSK (0x1fffu)

/** \brief Offset for Ifx_SPU_ID_RM_BLR_Bits.BLR */
#define IFX_SPU_ID_RM_BLR_BLR_OFF (0u)

/** \brief Length for Ifx_SPU_ID_RM_BLR_Bits.RES */
#define IFX_SPU_ID_RM_BLR_RES_LEN (19u)

/** \brief Mask for Ifx_SPU_ID_RM_BLR_Bits.RES */
#define IFX_SPU_ID_RM_BLR_RES_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_ID_RM_BLR_Bits.RES */
#define IFX_SPU_ID_RM_BLR_RES_OFF (13u)

/** \brief Length for Ifx_SPU_ID_RM_ACFG0_Bits.RES */
#define IFX_SPU_ID_RM_ACFG0_RES_LEN (32u)

/** \brief Mask for Ifx_SPU_ID_RM_ACFG0_Bits.RES */
#define IFX_SPU_ID_RM_ACFG0_RES_MSK (0xffffffffu)

/** \brief Offset for Ifx_SPU_ID_RM_ACFG0_Bits.RES */
#define IFX_SPU_ID_RM_ACFG0_RES_OFF (0u)

/** \brief Length for Ifx_SPU_ID_RM_ACFG1_Bits.RES */
#define IFX_SPU_ID_RM_ACFG1_RES_LEN (32u)

/** \brief Mask for Ifx_SPU_ID_RM_ACFG1_Bits.RES */
#define IFX_SPU_ID_RM_ACFG1_RES_MSK (0xffffffffu)

/** \brief Offset for Ifx_SPU_ID_RM_ACFG1_Bits.RES */
#define IFX_SPU_ID_RM_ACFG1_RES_OFF (0u)

/** \brief Length for Ifx_SPU_PACTR_Bits.RST */
#define IFX_SPU_PACTR_RST_LEN (1u)

/** \brief Mask for Ifx_SPU_PACTR_Bits.RST */
#define IFX_SPU_PACTR_RST_MSK (0x1u)

/** \brief Offset for Ifx_SPU_PACTR_Bits.RST */
#define IFX_SPU_PACTR_RST_OFF (0u)

/** \brief Length for Ifx_SPU_PACTR_Bits.EN */
#define IFX_SPU_PACTR_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_PACTR_Bits.EN */
#define IFX_SPU_PACTR_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_PACTR_Bits.EN */
#define IFX_SPU_PACTR_EN_OFF (1u)

/** \brief Length for Ifx_SPU_PACTR_Bits.LIMIT */
#define IFX_SPU_PACTR_LIMIT_LEN (11u)

/** \brief Mask for Ifx_SPU_PACTR_Bits.LIMIT */
#define IFX_SPU_PACTR_LIMIT_MSK (0x7ffu)

/** \brief Offset for Ifx_SPU_PACTR_Bits.LIMIT */
#define IFX_SPU_PACTR_LIMIT_OFF (2u)

/** \brief Length for Ifx_SPU_PACTR_Bits.TRIG */
#define IFX_SPU_PACTR_TRIG_LEN (1u)

/** \brief Mask for Ifx_SPU_PACTR_Bits.TRIG */
#define IFX_SPU_PACTR_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_SPU_PACTR_Bits.TRIG */
#define IFX_SPU_PACTR_TRIG_OFF (13u)

/** \brief Length for Ifx_SPU_PACTR_Bits.ERR */
#define IFX_SPU_PACTR_ERR_LEN (1u)

/** \brief Mask for Ifx_SPU_PACTR_Bits.ERR */
#define IFX_SPU_PACTR_ERR_MSK (0x1u)

/** \brief Offset for Ifx_SPU_PACTR_Bits.ERR */
#define IFX_SPU_PACTR_ERR_OFF (14u)

/** \brief Length for Ifx_SPU_PACTR_Bits.ATTN */
#define IFX_SPU_PACTR_ATTN_LEN (1u)

/** \brief Mask for Ifx_SPU_PACTR_Bits.ATTN */
#define IFX_SPU_PACTR_ATTN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_PACTR_Bits.ATTN */
#define IFX_SPU_PACTR_ATTN_OFF (15u)

/** \brief Length for Ifx_SPU_PACTR_Bits.COUNT */
#define IFX_SPU_PACTR_COUNT_LEN (11u)

/** \brief Mask for Ifx_SPU_PACTR_Bits.COUNT */
#define IFX_SPU_PACTR_COUNT_MSK (0x7ffu)

/** \brief Offset for Ifx_SPU_PACTR_Bits.COUNT */
#define IFX_SPU_PACTR_COUNT_OFF (16u)

/** \brief Length for Ifx_SPU_PACTR_Bits.RES */
#define IFX_SPU_PACTR_RES_LEN (5u)

/** \brief Mask for Ifx_SPU_PACTR_Bits.RES */
#define IFX_SPU_PACTR_RES_MSK (0x1fu)

/** \brief Offset for Ifx_SPU_PACTR_Bits.RES */
#define IFX_SPU_PACTR_RES_OFF (27u)

/** \brief Length for Ifx_SPU_DPASS_CONF_Bits.EN */
#define IFX_SPU_DPASS_CONF_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_DPASS_CONF_Bits.EN */
#define IFX_SPU_DPASS_CONF_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_DPASS_CONF_Bits.EN */
#define IFX_SPU_DPASS_CONF_EN_OFF (0u)

/** \brief Length for Ifx_SPU_DPASS_CONF_Bits.SWITCH */
#define IFX_SPU_DPASS_CONF_SWITCH_LEN (1u)

/** \brief Mask for Ifx_SPU_DPASS_CONF_Bits.SWITCH */
#define IFX_SPU_DPASS_CONF_SWITCH_MSK (0x1u)

/** \brief Offset for Ifx_SPU_DPASS_CONF_Bits.SWITCH */
#define IFX_SPU_DPASS_CONF_SWITCH_OFF (1u)

/** \brief Length for Ifx_SPU_DPASS_CONF_Bits.RES */
#define IFX_SPU_DPASS_CONF_RES_LEN (30u)

/** \brief Mask for Ifx_SPU_DPASS_CONF_Bits.RES */
#define IFX_SPU_DPASS_CONF_RES_MSK (0x3fffffffu)

/** \brief Offset for Ifx_SPU_DPASS_CONF_Bits.RES */
#define IFX_SPU_DPASS_CONF_RES_OFF (2u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF_Bits.DRPL */
#define IFX_SPU_BE_LDR_CONF_DRPL_LEN (8u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF_Bits.DRPL */
#define IFX_SPU_BE_LDR_CONF_DRPL_MSK (0xffu)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF_Bits.DRPL */
#define IFX_SPU_BE_LDR_CONF_DRPL_OFF (0u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF_Bits.DRPF */
#define IFX_SPU_BE_LDR_CONF_DRPF_LEN (8u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF_Bits.DRPF */
#define IFX_SPU_BE_LDR_CONF_DRPF_MSK (0xffu)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF_Bits.DRPF */
#define IFX_SPU_BE_LDR_CONF_DRPF_OFF (8u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF_Bits.EXPNT */
#define IFX_SPU_BE_LDR_CONF_EXPNT_LEN (6u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF_Bits.EXPNT */
#define IFX_SPU_BE_LDR_CONF_EXPNT_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF_Bits.EXPNT */
#define IFX_SPU_BE_LDR_CONF_EXPNT_OFF (16u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF_Bits.PHSHFT */
#define IFX_SPU_BE_LDR_CONF_PHSHFT_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF_Bits.PHSHFT */
#define IFX_SPU_BE_LDR_CONF_PHSHFT_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF_Bits.PHSHFT */
#define IFX_SPU_BE_LDR_CONF_PHSHFT_OFF (22u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF_Bits.SIZE */
#define IFX_SPU_BE_LDR_CONF_SIZE_LEN (4u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF_Bits.SIZE */
#define IFX_SPU_BE_LDR_CONF_SIZE_MSK (0xfu)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF_Bits.SIZE */
#define IFX_SPU_BE_LDR_CONF_SIZE_OFF (24u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF_Bits.FORMAT */
#define IFX_SPU_BE_LDR_CONF_FORMAT_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF_Bits.FORMAT */
#define IFX_SPU_BE_LDR_CONF_FORMAT_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF_Bits.FORMAT */
#define IFX_SPU_BE_LDR_CONF_FORMAT_OFF (28u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF_Bits.FFTBYPS */
#define IFX_SPU_BE_LDR_CONF_FFTBYPS_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF_Bits.FFTBYPS */
#define IFX_SPU_BE_LDR_CONF_FFTBYPS_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF_Bits.FFTBYPS */
#define IFX_SPU_BE_LDR_CONF_FFTBYPS_OFF (30u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF_Bits.IFFT */
#define IFX_SPU_BE_LDR_CONF_IFFT_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF_Bits.IFFT */
#define IFX_SPU_BE_LDR_CONF_IFFT_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF_Bits.IFFT */
#define IFX_SPU_BE_LDR_CONF_IFFT_OFF (31u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF2_Bits.WBASE */
#define IFX_SPU_BE_LDR_CONF2_WBASE_LEN (16u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF2_Bits.WBASE */
#define IFX_SPU_BE_LDR_CONF2_WBASE_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF2_Bits.WBASE */
#define IFX_SPU_BE_LDR_CONF2_WBASE_OFF (0u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF2_Bits.PADF */
#define IFX_SPU_BE_LDR_CONF2_PADF_LEN (13u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF2_Bits.PADF */
#define IFX_SPU_BE_LDR_CONF2_PADF_MSK (0x1fffu)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF2_Bits.PADF */
#define IFX_SPU_BE_LDR_CONF2_PADF_OFF (16u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF2_Bits.RES */
#define IFX_SPU_BE_LDR_CONF2_RES_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF2_Bits.RES */
#define IFX_SPU_BE_LDR_CONF2_RES_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF2_Bits.RES */
#define IFX_SPU_BE_LDR_CONF2_RES_OFF (29u)

/** \brief Length for Ifx_SPU_BE_LDR_CONF2_Bits.WINEN */
#define IFX_SPU_BE_LDR_CONF2_WINEN_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_LDR_CONF2_Bits.WINEN */
#define IFX_SPU_BE_LDR_CONF2_WINEN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_LDR_CONF2_Bits.WINEN */
#define IFX_SPU_BE_LDR_CONF2_WINEN_OFF (31u)

/** \brief Length for Ifx_SPU_BE_A_ANTOFST_Bits.ADROFST0_ANT0 */
#define IFX_SPU_BE_A_ANTOFST_ADROFST0_ANT0_LEN (16u)

/** \brief Mask for Ifx_SPU_BE_A_ANTOFST_Bits.ADROFST0_ANT0 */
#define IFX_SPU_BE_A_ANTOFST_ADROFST0_ANT0_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_BE_A_ANTOFST_Bits.ADROFST0_ANT0 */
#define IFX_SPU_BE_A_ANTOFST_ADROFST0_ANT0_OFF (0u)

/** \brief Length for Ifx_SPU_BE_A_ANTOFST_Bits.ADROFST1_ANT1 */
#define IFX_SPU_BE_A_ANTOFST_ADROFST1_ANT1_LEN (16u)

/** \brief Mask for Ifx_SPU_BE_A_ANTOFST_Bits.ADROFST1_ANT1 */
#define IFX_SPU_BE_A_ANTOFST_ADROFST1_ANT1_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_BE_A_ANTOFST_Bits.ADROFST1_ANT1 */
#define IFX_SPU_BE_A_ANTOFST_ADROFST1_ANT1_OFF (16u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF_Bits.EXPNT */
#define IFX_SPU_BE_UNLDR_CONF_EXPNT_LEN (5u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF_Bits.EXPNT */
#define IFX_SPU_BE_UNLDR_CONF_EXPNT_MSK (0x1fu)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF_Bits.EXPNT */
#define IFX_SPU_BE_UNLDR_CONF_EXPNT_OFF (0u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF_Bits.FORMAT */
#define IFX_SPU_BE_UNLDR_CONF_FORMAT_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF_Bits.FORMAT */
#define IFX_SPU_BE_UNLDR_CONF_FORMAT_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF_Bits.FORMAT */
#define IFX_SPU_BE_UNLDR_CONF_FORMAT_OFF (5u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTEN */
#define IFX_SPU_BE_UNLDR_CONF_HISTEN_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTEN */
#define IFX_SPU_BE_UNLDR_CONF_HISTEN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTEN */
#define IFX_SPU_BE_UNLDR_CONF_HISTEN_OFF (6u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF_Bits.HAFE */
#define IFX_SPU_BE_UNLDR_CONF_HAFE_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF_Bits.HAFE */
#define IFX_SPU_BE_UNLDR_CONF_HAFE_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF_Bits.HAFE */
#define IFX_SPU_BE_UNLDR_CONF_HAFE_OFF (7u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF_Bits.AFV */
#define IFX_SPU_BE_UNLDR_CONF_AFV_LEN (3u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF_Bits.AFV */
#define IFX_SPU_BE_UNLDR_CONF_AFV_MSK (0x7u)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF_Bits.AFV */
#define IFX_SPU_BE_UNLDR_CONF_AFV_OFF (8u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF_Bits.RES */
#define IFX_SPU_BE_UNLDR_CONF_RES_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF_Bits.RES */
#define IFX_SPU_BE_UNLDR_CONF_RES_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF_Bits.RES */
#define IFX_SPU_BE_UNLDR_CONF_RES_OFF (11u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTBINS */
#define IFX_SPU_BE_UNLDR_CONF_HISTBINS_LEN (3u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTBINS */
#define IFX_SPU_BE_UNLDR_CONF_HISTBINS_MSK (0x7u)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTBINS */
#define IFX_SPU_BE_UNLDR_CONF_HISTBINS_OFF (13u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTBASE */
#define IFX_SPU_BE_UNLDR_CONF_HISTBASE_LEN (16u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTBASE */
#define IFX_SPU_BE_UNLDR_CONF_HISTBASE_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF_Bits.HISTBASE */
#define IFX_SPU_BE_UNLDR_CONF_HISTBASE_OFF (16u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF2_Bits.STRT */
#define IFX_SPU_BE_UNLDR_CONF2_STRT_LEN (16u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF2_Bits.STRT */
#define IFX_SPU_BE_UNLDR_CONF2_STRT_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF2_Bits.STRT */
#define IFX_SPU_BE_UNLDR_CONF2_STRT_OFF (0u)

/** \brief Length for Ifx_SPU_BE_UNLDR_CONF2_Bits.END */
#define IFX_SPU_BE_UNLDR_CONF2_END_LEN (16u)

/** \brief Mask for Ifx_SPU_BE_UNLDR_CONF2_Bits.END */
#define IFX_SPU_BE_UNLDR_CONF2_END_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_BE_UNLDR_CONF2_Bits.END */
#define IFX_SPU_BE_UNLDR_CONF2_END_OFF (16u)

/** \brief Length for Ifx_SPU_BE_ODP_CONF_Bits.BASE */
#define IFX_SPU_BE_ODP_CONF_BASE_LEN (19u)

/** \brief Mask for Ifx_SPU_BE_ODP_CONF_Bits.BASE */
#define IFX_SPU_BE_ODP_CONF_BASE_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_BE_ODP_CONF_Bits.BASE */
#define IFX_SPU_BE_ODP_CONF_BASE_OFF (0u)

/** \brief Length for Ifx_SPU_BE_ODP_CONF_Bits.MODE */
#define IFX_SPU_BE_ODP_CONF_MODE_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_ODP_CONF_Bits.MODE */
#define IFX_SPU_BE_ODP_CONF_MODE_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_ODP_CONF_Bits.MODE */
#define IFX_SPU_BE_ODP_CONF_MODE_OFF (19u)

/** \brief Length for Ifx_SPU_BE_ODP_CONF_Bits.FTR */
#define IFX_SPU_BE_ODP_CONF_FTR_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_ODP_CONF_Bits.FTR */
#define IFX_SPU_BE_ODP_CONF_FTR_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_ODP_CONF_Bits.FTR */
#define IFX_SPU_BE_ODP_CONF_FTR_OFF (20u)

/** \brief Length for Ifx_SPU_BE_ODP_CONF_Bits.SCALE */
#define IFX_SPU_BE_ODP_CONF_SCALE_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_ODP_CONF_Bits.SCALE */
#define IFX_SPU_BE_ODP_CONF_SCALE_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_ODP_CONF_Bits.SCALE */
#define IFX_SPU_BE_ODP_CONF_SCALE_OFF (21u)

/** \brief Length for Ifx_SPU_BE_ODP_CONF_Bits.EXPNT */
#define IFX_SPU_BE_ODP_CONF_EXPNT_LEN (5u)

/** \brief Mask for Ifx_SPU_BE_ODP_CONF_Bits.EXPNT */
#define IFX_SPU_BE_ODP_CONF_EXPNT_MSK (0x1fu)

/** \brief Offset for Ifx_SPU_BE_ODP_CONF_Bits.EXPNT */
#define IFX_SPU_BE_ODP_CONF_EXPNT_OFF (22u)

/** \brief Length for Ifx_SPU_BE_ODP_CONF_Bits.IPF */
#define IFX_SPU_BE_ODP_CONF_IPF_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_ODP_CONF_Bits.IPF */
#define IFX_SPU_BE_ODP_CONF_IPF_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_ODP_CONF_Bits.IPF */
#define IFX_SPU_BE_ODP_CONF_IPF_OFF (27u)

/** \brief Length for Ifx_SPU_BE_ODP_CONF_Bits.RES */
#define IFX_SPU_BE_ODP_CONF_RES_LEN (4u)

/** \brief Mask for Ifx_SPU_BE_ODP_CONF_Bits.RES */
#define IFX_SPU_BE_ODP_CONF_RES_MSK (0xfu)

/** \brief Offset for Ifx_SPU_BE_ODP_CONF_Bits.RES */
#define IFX_SPU_BE_ODP_CONF_RES_OFF (28u)

/** \brief Length for Ifx_SPU_BE_NCICTRL_Bits.BASE */
#define IFX_SPU_BE_NCICTRL_BASE_LEN (19u)

/** \brief Mask for Ifx_SPU_BE_NCICTRL_Bits.BASE */
#define IFX_SPU_BE_NCICTRL_BASE_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_BE_NCICTRL_Bits.BASE */
#define IFX_SPU_BE_NCICTRL_BASE_OFF (0u)

/** \brief Length for Ifx_SPU_BE_NCICTRL_Bits.EN */
#define IFX_SPU_BE_NCICTRL_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_NCICTRL_Bits.EN */
#define IFX_SPU_BE_NCICTRL_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_NCICTRL_Bits.EN */
#define IFX_SPU_BE_NCICTRL_EN_OFF (19u)

/** \brief Length for Ifx_SPU_BE_NCICTRL_Bits.FORMAT */
#define IFX_SPU_BE_NCICTRL_FORMAT_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_NCICTRL_Bits.FORMAT */
#define IFX_SPU_BE_NCICTRL_FORMAT_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_NCICTRL_Bits.FORMAT */
#define IFX_SPU_BE_NCICTRL_FORMAT_OFF (20u)

/** \brief Length for Ifx_SPU_BE_NCICTRL_Bits.SCALE */
#define IFX_SPU_BE_NCICTRL_SCALE_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_NCICTRL_Bits.SCALE */
#define IFX_SPU_BE_NCICTRL_SCALE_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_NCICTRL_Bits.SCALE */
#define IFX_SPU_BE_NCICTRL_SCALE_OFF (22u)

/** \brief Length for Ifx_SPU_BE_NCICTRL_Bits.RES */
#define IFX_SPU_BE_NCICTRL_RES_LEN (8u)

/** \brief Mask for Ifx_SPU_BE_NCICTRL_Bits.RES */
#define IFX_SPU_BE_NCICTRL_RES_MSK (0xffu)

/** \brief Offset for Ifx_SPU_BE_NCICTRL_Bits.RES */
#define IFX_SPU_BE_NCICTRL_RES_OFF (24u)

/** \brief Length for Ifx_SPU_BE_SUMCTRL_Bits.BASE */
#define IFX_SPU_BE_SUMCTRL_BASE_LEN (19u)

/** \brief Mask for Ifx_SPU_BE_SUMCTRL_Bits.BASE */
#define IFX_SPU_BE_SUMCTRL_BASE_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_BE_SUMCTRL_Bits.BASE */
#define IFX_SPU_BE_SUMCTRL_BASE_OFF (0u)

/** \brief Length for Ifx_SPU_BE_SUMCTRL_Bits.PWRMODE */
#define IFX_SPU_BE_SUMCTRL_PWRMODE_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_SUMCTRL_Bits.PWRMODE */
#define IFX_SPU_BE_SUMCTRL_PWRMODE_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_SUMCTRL_Bits.PWRMODE */
#define IFX_SPU_BE_SUMCTRL_PWRMODE_OFF (19u)

/** \brief Length for Ifx_SPU_BE_SUMCTRL_Bits.SUMMODE */
#define IFX_SPU_BE_SUMCTRL_SUMMODE_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_SUMCTRL_Bits.SUMMODE */
#define IFX_SPU_BE_SUMCTRL_SUMMODE_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_SUMCTRL_Bits.SUMMODE */
#define IFX_SPU_BE_SUMCTRL_SUMMODE_OFF (20u)

/** \brief Length for Ifx_SPU_BE_SUMCTRL_Bits.REAL */
#define IFX_SPU_BE_SUMCTRL_REAL_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_SUMCTRL_Bits.REAL */
#define IFX_SPU_BE_SUMCTRL_REAL_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_SUMCTRL_Bits.REAL */
#define IFX_SPU_BE_SUMCTRL_REAL_OFF (22u)

/** \brief Length for Ifx_SPU_BE_SUMCTRL_Bits.USEANT */
#define IFX_SPU_BE_SUMCTRL_USEANT_LEN (8u)

/** \brief Mask for Ifx_SPU_BE_SUMCTRL_Bits.USEANT */
#define IFX_SPU_BE_SUMCTRL_USEANT_MSK (0xffu)

/** \brief Offset for Ifx_SPU_BE_SUMCTRL_Bits.USEANT */
#define IFX_SPU_BE_SUMCTRL_USEANT_OFF (23u)

/** \brief Length for Ifx_SPU_BE_SUMCTRL_Bits.RES */
#define IFX_SPU_BE_SUMCTRL_RES_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_SUMCTRL_Bits.RES */
#define IFX_SPU_BE_SUMCTRL_RES_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_SUMCTRL_Bits.RES */
#define IFX_SPU_BE_SUMCTRL_RES_OFF (31u)

/** \brief Length for Ifx_SPU_BE_PWRSUM_Bits.BASE */
#define IFX_SPU_BE_PWRSUM_BASE_LEN (19u)

/** \brief Mask for Ifx_SPU_BE_PWRSUM_Bits.BASE */
#define IFX_SPU_BE_PWRSUM_BASE_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_BE_PWRSUM_Bits.BASE */
#define IFX_SPU_BE_PWRSUM_BASE_OFF (0u)

/** \brief Length for Ifx_SPU_BE_PWRSUM_Bits.SCALE */
#define IFX_SPU_BE_PWRSUM_SCALE_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_PWRSUM_Bits.SCALE */
#define IFX_SPU_BE_PWRSUM_SCALE_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_PWRSUM_Bits.SCALE */
#define IFX_SPU_BE_PWRSUM_SCALE_OFF (19u)

/** \brief Length for Ifx_SPU_BE_PWRSUM_Bits.FORMAT */
#define IFX_SPU_BE_PWRSUM_FORMAT_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_PWRSUM_Bits.FORMAT */
#define IFX_SPU_BE_PWRSUM_FORMAT_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_PWRSUM_Bits.FORMAT */
#define IFX_SPU_BE_PWRSUM_FORMAT_OFF (21u)

/** \brief Length for Ifx_SPU_BE_PWRSUM_Bits.RES */
#define IFX_SPU_BE_PWRSUM_RES_LEN (9u)

/** \brief Mask for Ifx_SPU_BE_PWRSUM_Bits.RES */
#define IFX_SPU_BE_PWRSUM_RES_MSK (0x1ffu)

/** \brief Offset for Ifx_SPU_BE_PWRSUM_Bits.RES */
#define IFX_SPU_BE_PWRSUM_RES_OFF (23u)

/** \brief Length for Ifx_SPU_BE_PWRCTRL_Bits.BASE */
#define IFX_SPU_BE_PWRCTRL_BASE_LEN (19u)

/** \brief Mask for Ifx_SPU_BE_PWRCTRL_Bits.BASE */
#define IFX_SPU_BE_PWRCTRL_BASE_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_BE_PWRCTRL_Bits.BASE */
#define IFX_SPU_BE_PWRCTRL_BASE_OFF (0u)

/** \brief Length for Ifx_SPU_BE_PWRCTRL_Bits.RES */
#define IFX_SPU_BE_PWRCTRL_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_BE_PWRCTRL_Bits.RES */
#define IFX_SPU_BE_PWRCTRL_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_BE_PWRCTRL_Bits.RES */
#define IFX_SPU_BE_PWRCTRL_RES_OFF (19u)

/** \brief Length for Ifx_SPU_BE_PWRCTRL_Bits.EN */
#define IFX_SPU_BE_PWRCTRL_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_PWRCTRL_Bits.EN */
#define IFX_SPU_BE_PWRCTRL_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_PWRCTRL_Bits.EN */
#define IFX_SPU_BE_PWRCTRL_EN_OFF (31u)

/** \brief Length for Ifx_SPU_BE_CFARCTRL_Bits.BASE */
#define IFX_SPU_BE_CFARCTRL_BASE_LEN (19u)

/** \brief Mask for Ifx_SPU_BE_CFARCTRL_Bits.BASE */
#define IFX_SPU_BE_CFARCTRL_BASE_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_BE_CFARCTRL_Bits.BASE */
#define IFX_SPU_BE_CFARCTRL_BASE_OFF (0u)

/** \brief Length for Ifx_SPU_BE_CFARCTRL_Bits.SEWIN */
#define IFX_SPU_BE_CFARCTRL_SEWIN_LEN (6u)

/** \brief Mask for Ifx_SPU_BE_CFARCTRL_Bits.SEWIN */
#define IFX_SPU_BE_CFARCTRL_SEWIN_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_BE_CFARCTRL_Bits.SEWIN */
#define IFX_SPU_BE_CFARCTRL_SEWIN_OFF (19u)

/** \brief Length for Ifx_SPU_BE_CFARCTRL_Bits.EXTNSN */
#define IFX_SPU_BE_CFARCTRL_EXTNSN_LEN (2u)

/** \brief Mask for Ifx_SPU_BE_CFARCTRL_Bits.EXTNSN */
#define IFX_SPU_BE_CFARCTRL_EXTNSN_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BE_CFARCTRL_Bits.EXTNSN */
#define IFX_SPU_BE_CFARCTRL_EXTNSN_OFF (25u)

/** \brief Length for Ifx_SPU_BE_CFARCTRL_Bits.CFAR_CAE */
#define IFX_SPU_BE_CFARCTRL_CFAR_CAE_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_CFARCTRL_Bits.CFAR_CAE */
#define IFX_SPU_BE_CFARCTRL_CFAR_CAE_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_CFARCTRL_Bits.CFAR_CAE */
#define IFX_SPU_BE_CFARCTRL_CFAR_CAE_OFF (27u)

/** \brief Length for Ifx_SPU_BE_CFARCTRL_Bits.CFAR_GOSE */
#define IFX_SPU_BE_CFARCTRL_CFAR_GOSE_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_CFARCTRL_Bits.CFAR_GOSE */
#define IFX_SPU_BE_CFARCTRL_CFAR_GOSE_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_CFARCTRL_Bits.CFAR_GOSE */
#define IFX_SPU_BE_CFARCTRL_CFAR_GOSE_OFF (28u)

/** \brief Length for Ifx_SPU_BE_CFARCTRL_Bits.CFAREN */
#define IFX_SPU_BE_CFARCTRL_CFAREN_LEN (3u)

/** \brief Mask for Ifx_SPU_BE_CFARCTRL_Bits.CFAREN */
#define IFX_SPU_BE_CFARCTRL_CFAREN_MSK (0x7u)

/** \brief Offset for Ifx_SPU_BE_CFARCTRL_Bits.CFAREN */
#define IFX_SPU_BE_CFARCTRL_CFAREN_OFF (29u)

/** \brief Length for Ifx_SPU_BE_SBCTRL_Bits.BASE */
#define IFX_SPU_BE_SBCTRL_BASE_LEN (19u)

/** \brief Mask for Ifx_SPU_BE_SBCTRL_Bits.BASE */
#define IFX_SPU_BE_SBCTRL_BASE_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_BE_SBCTRL_Bits.BASE */
#define IFX_SPU_BE_SBCTRL_BASE_OFF (0u)

/** \brief Length for Ifx_SPU_BE_SBCTRL_Bits.RES */
#define IFX_SPU_BE_SBCTRL_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_BE_SBCTRL_Bits.RES */
#define IFX_SPU_BE_SBCTRL_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_BE_SBCTRL_Bits.RES */
#define IFX_SPU_BE_SBCTRL_RES_OFF (19u)

/** \brief Length for Ifx_SPU_BE_SBCTRL_Bits.EN */
#define IFX_SPU_BE_SBCTRL_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_BE_SBCTRL_Bits.EN */
#define IFX_SPU_BE_SBCTRL_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BE_SBCTRL_Bits.EN */
#define IFX_SPU_BE_SBCTRL_EN_OFF (31u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B0_R0 */
#define IFX_SPU_BIN_REJ_B0_R0_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B0_R0 */
#define IFX_SPU_BIN_REJ_B0_R0_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B0_R0 */
#define IFX_SPU_BIN_REJ_B0_R0_OFF (0u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B1_R1 */
#define IFX_SPU_BIN_REJ_B1_R1_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B1_R1 */
#define IFX_SPU_BIN_REJ_B1_R1_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B1_R1 */
#define IFX_SPU_BIN_REJ_B1_R1_OFF (1u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B2_R2 */
#define IFX_SPU_BIN_REJ_B2_R2_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B2_R2 */
#define IFX_SPU_BIN_REJ_B2_R2_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B2_R2 */
#define IFX_SPU_BIN_REJ_B2_R2_OFF (2u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B3_R3 */
#define IFX_SPU_BIN_REJ_B3_R3_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B3_R3 */
#define IFX_SPU_BIN_REJ_B3_R3_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B3_R3 */
#define IFX_SPU_BIN_REJ_B3_R3_OFF (3u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B4_R4 */
#define IFX_SPU_BIN_REJ_B4_R4_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B4_R4 */
#define IFX_SPU_BIN_REJ_B4_R4_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B4_R4 */
#define IFX_SPU_BIN_REJ_B4_R4_OFF (4u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B5_R5 */
#define IFX_SPU_BIN_REJ_B5_R5_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B5_R5 */
#define IFX_SPU_BIN_REJ_B5_R5_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B5_R5 */
#define IFX_SPU_BIN_REJ_B5_R5_OFF (5u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B6_R6 */
#define IFX_SPU_BIN_REJ_B6_R6_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B6_R6 */
#define IFX_SPU_BIN_REJ_B6_R6_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B6_R6 */
#define IFX_SPU_BIN_REJ_B6_R6_OFF (6u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B7_R7 */
#define IFX_SPU_BIN_REJ_B7_R7_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B7_R7 */
#define IFX_SPU_BIN_REJ_B7_R7_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B7_R7 */
#define IFX_SPU_BIN_REJ_B7_R7_OFF (7u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B8_R8 */
#define IFX_SPU_BIN_REJ_B8_R8_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B8_R8 */
#define IFX_SPU_BIN_REJ_B8_R8_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B8_R8 */
#define IFX_SPU_BIN_REJ_B8_R8_OFF (8u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B9_R9 */
#define IFX_SPU_BIN_REJ_B9_R9_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B9_R9 */
#define IFX_SPU_BIN_REJ_B9_R9_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B9_R9 */
#define IFX_SPU_BIN_REJ_B9_R9_OFF (9u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B10_R10 */
#define IFX_SPU_BIN_REJ_B10_R10_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B10_R10 */
#define IFX_SPU_BIN_REJ_B10_R10_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B10_R10 */
#define IFX_SPU_BIN_REJ_B10_R10_OFF (10u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B11_R11 */
#define IFX_SPU_BIN_REJ_B11_R11_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B11_R11 */
#define IFX_SPU_BIN_REJ_B11_R11_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B11_R11 */
#define IFX_SPU_BIN_REJ_B11_R11_OFF (11u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B12_R12 */
#define IFX_SPU_BIN_REJ_B12_R12_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B12_R12 */
#define IFX_SPU_BIN_REJ_B12_R12_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B12_R12 */
#define IFX_SPU_BIN_REJ_B12_R12_OFF (12u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B13_R13 */
#define IFX_SPU_BIN_REJ_B13_R13_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B13_R13 */
#define IFX_SPU_BIN_REJ_B13_R13_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B13_R13 */
#define IFX_SPU_BIN_REJ_B13_R13_OFF (13u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B14_R14 */
#define IFX_SPU_BIN_REJ_B14_R14_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B14_R14 */
#define IFX_SPU_BIN_REJ_B14_R14_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B14_R14 */
#define IFX_SPU_BIN_REJ_B14_R14_OFF (14u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B15_R15 */
#define IFX_SPU_BIN_REJ_B15_R15_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B15_R15 */
#define IFX_SPU_BIN_REJ_B15_R15_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B15_R15 */
#define IFX_SPU_BIN_REJ_B15_R15_OFF (15u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B16_R16 */
#define IFX_SPU_BIN_REJ_B16_R16_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B16_R16 */
#define IFX_SPU_BIN_REJ_B16_R16_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B16_R16 */
#define IFX_SPU_BIN_REJ_B16_R16_OFF (16u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B17_R17 */
#define IFX_SPU_BIN_REJ_B17_R17_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B17_R17 */
#define IFX_SPU_BIN_REJ_B17_R17_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B17_R17 */
#define IFX_SPU_BIN_REJ_B17_R17_OFF (17u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B18_R18 */
#define IFX_SPU_BIN_REJ_B18_R18_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B18_R18 */
#define IFX_SPU_BIN_REJ_B18_R18_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B18_R18 */
#define IFX_SPU_BIN_REJ_B18_R18_OFF (18u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B19_R19 */
#define IFX_SPU_BIN_REJ_B19_R19_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B19_R19 */
#define IFX_SPU_BIN_REJ_B19_R19_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B19_R19 */
#define IFX_SPU_BIN_REJ_B19_R19_OFF (19u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B20_R20 */
#define IFX_SPU_BIN_REJ_B20_R20_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B20_R20 */
#define IFX_SPU_BIN_REJ_B20_R20_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B20_R20 */
#define IFX_SPU_BIN_REJ_B20_R20_OFF (20u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B21_R21 */
#define IFX_SPU_BIN_REJ_B21_R21_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B21_R21 */
#define IFX_SPU_BIN_REJ_B21_R21_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B21_R21 */
#define IFX_SPU_BIN_REJ_B21_R21_OFF (21u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B22_R22 */
#define IFX_SPU_BIN_REJ_B22_R22_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B22_R22 */
#define IFX_SPU_BIN_REJ_B22_R22_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B22_R22 */
#define IFX_SPU_BIN_REJ_B22_R22_OFF (22u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B23_R23 */
#define IFX_SPU_BIN_REJ_B23_R23_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B23_R23 */
#define IFX_SPU_BIN_REJ_B23_R23_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B23_R23 */
#define IFX_SPU_BIN_REJ_B23_R23_OFF (23u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B24_R24 */
#define IFX_SPU_BIN_REJ_B24_R24_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B24_R24 */
#define IFX_SPU_BIN_REJ_B24_R24_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B24_R24 */
#define IFX_SPU_BIN_REJ_B24_R24_OFF (24u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B25_R25 */
#define IFX_SPU_BIN_REJ_B25_R25_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B25_R25 */
#define IFX_SPU_BIN_REJ_B25_R25_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B25_R25 */
#define IFX_SPU_BIN_REJ_B25_R25_OFF (25u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B26_R26 */
#define IFX_SPU_BIN_REJ_B26_R26_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B26_R26 */
#define IFX_SPU_BIN_REJ_B26_R26_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B26_R26 */
#define IFX_SPU_BIN_REJ_B26_R26_OFF (26u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B27_R27 */
#define IFX_SPU_BIN_REJ_B27_R27_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B27_R27 */
#define IFX_SPU_BIN_REJ_B27_R27_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B27_R27 */
#define IFX_SPU_BIN_REJ_B27_R27_OFF (27u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B28_R28 */
#define IFX_SPU_BIN_REJ_B28_R28_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B28_R28 */
#define IFX_SPU_BIN_REJ_B28_R28_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B28_R28 */
#define IFX_SPU_BIN_REJ_B28_R28_OFF (28u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B29_R29 */
#define IFX_SPU_BIN_REJ_B29_R29_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B29_R29 */
#define IFX_SPU_BIN_REJ_B29_R29_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B29_R29 */
#define IFX_SPU_BIN_REJ_B29_R29_OFF (29u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B30_R30 */
#define IFX_SPU_BIN_REJ_B30_R30_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B30_R30 */
#define IFX_SPU_BIN_REJ_B30_R30_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B30_R30 */
#define IFX_SPU_BIN_REJ_B30_R30_OFF (30u)

/** \brief Length for Ifx_SPU_BIN_REJ_Bits.B31_R31 */
#define IFX_SPU_BIN_REJ_B31_R31_LEN (1u)

/** \brief Mask for Ifx_SPU_BIN_REJ_Bits.B31_R31 */
#define IFX_SPU_BIN_REJ_B31_R31_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BIN_REJ_Bits.B31_R31 */
#define IFX_SPU_BIN_REJ_B31_R31_OFF (31u)

/** \brief Length for Ifx_SPU_MAGAPPROX_Bits.ALPHA */
#define IFX_SPU_MAGAPPROX_ALPHA_LEN (16u)

/** \brief Mask for Ifx_SPU_MAGAPPROX_Bits.ALPHA */
#define IFX_SPU_MAGAPPROX_ALPHA_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_MAGAPPROX_Bits.ALPHA */
#define IFX_SPU_MAGAPPROX_ALPHA_OFF (0u)

/** \brief Length for Ifx_SPU_MAGAPPROX_Bits.BETA */
#define IFX_SPU_MAGAPPROX_BETA_LEN (16u)

/** \brief Mask for Ifx_SPU_MAGAPPROX_Bits.BETA */
#define IFX_SPU_MAGAPPROX_BETA_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_MAGAPPROX_Bits.BETA */
#define IFX_SPU_MAGAPPROX_BETA_OFF (16u)

/** \brief Length for Ifx_SPU_NCISCALAR0_Bits.ANT0 */
#define IFX_SPU_NCISCALAR0_ANT0_LEN (16u)

/** \brief Mask for Ifx_SPU_NCISCALAR0_Bits.ANT0 */
#define IFX_SPU_NCISCALAR0_ANT0_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_NCISCALAR0_Bits.ANT0 */
#define IFX_SPU_NCISCALAR0_ANT0_OFF (0u)

/** \brief Length for Ifx_SPU_NCISCALAR0_Bits.ANT1 */
#define IFX_SPU_NCISCALAR0_ANT1_LEN (16u)

/** \brief Mask for Ifx_SPU_NCISCALAR0_Bits.ANT1 */
#define IFX_SPU_NCISCALAR0_ANT1_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_NCISCALAR0_Bits.ANT1 */
#define IFX_SPU_NCISCALAR0_ANT1_OFF (16u)

/** \brief Length for Ifx_SPU_NCISCALAR1_Bits.ANT2 */
#define IFX_SPU_NCISCALAR1_ANT2_LEN (16u)

/** \brief Mask for Ifx_SPU_NCISCALAR1_Bits.ANT2 */
#define IFX_SPU_NCISCALAR1_ANT2_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_NCISCALAR1_Bits.ANT2 */
#define IFX_SPU_NCISCALAR1_ANT2_OFF (0u)

/** \brief Length for Ifx_SPU_NCISCALAR1_Bits.ANT3 */
#define IFX_SPU_NCISCALAR1_ANT3_LEN (16u)

/** \brief Mask for Ifx_SPU_NCISCALAR1_Bits.ANT3 */
#define IFX_SPU_NCISCALAR1_ANT3_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_NCISCALAR1_Bits.ANT3 */
#define IFX_SPU_NCISCALAR1_ANT3_OFF (16u)

/** \brief Length for Ifx_SPU_NCISCALAR2_Bits.ANT4 */
#define IFX_SPU_NCISCALAR2_ANT4_LEN (16u)

/** \brief Mask for Ifx_SPU_NCISCALAR2_Bits.ANT4 */
#define IFX_SPU_NCISCALAR2_ANT4_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_NCISCALAR2_Bits.ANT4 */
#define IFX_SPU_NCISCALAR2_ANT4_OFF (0u)

/** \brief Length for Ifx_SPU_NCISCALAR2_Bits.ANT5 */
#define IFX_SPU_NCISCALAR2_ANT5_LEN (16u)

/** \brief Mask for Ifx_SPU_NCISCALAR2_Bits.ANT5 */
#define IFX_SPU_NCISCALAR2_ANT5_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_NCISCALAR2_Bits.ANT5 */
#define IFX_SPU_NCISCALAR2_ANT5_OFF (16u)

/** \brief Length for Ifx_SPU_NCISCALAR3_Bits.ANT6 */
#define IFX_SPU_NCISCALAR3_ANT6_LEN (16u)

/** \brief Mask for Ifx_SPU_NCISCALAR3_Bits.ANT6 */
#define IFX_SPU_NCISCALAR3_ANT6_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_NCISCALAR3_Bits.ANT6 */
#define IFX_SPU_NCISCALAR3_ANT6_OFF (0u)

/** \brief Length for Ifx_SPU_NCISCALAR3_Bits.ANT7 */
#define IFX_SPU_NCISCALAR3_ANT7_LEN (16u)

/** \brief Mask for Ifx_SPU_NCISCALAR3_Bits.ANT7 */
#define IFX_SPU_NCISCALAR3_ANT7_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_NCISCALAR3_Bits.ANT7 */
#define IFX_SPU_NCISCALAR3_ANT7_OFF (16u)

/** \brief Length for Ifx_SPU_CFARCFG_Bits.CAALGO */
#define IFX_SPU_CFARCFG_CAALGO_LEN (2u)

/** \brief Mask for Ifx_SPU_CFARCFG_Bits.CAALGO */
#define IFX_SPU_CFARCFG_CAALGO_MSK (0x3u)

/** \brief Offset for Ifx_SPU_CFARCFG_Bits.CAALGO */
#define IFX_SPU_CFARCFG_CAALGO_OFF (0u)

/** \brief Length for Ifx_SPU_CFARCFG_Bits.GOSALGO */
#define IFX_SPU_CFARCFG_GOSALGO_LEN (2u)

/** \brief Mask for Ifx_SPU_CFARCFG_Bits.GOSALGO */
#define IFX_SPU_CFARCFG_GOSALGO_MSK (0x3u)

/** \brief Offset for Ifx_SPU_CFARCFG_Bits.GOSALGO */
#define IFX_SPU_CFARCFG_GOSALGO_OFF (2u)

/** \brief Length for Ifx_SPU_CFARCFG_Bits.CAGUARD */
#define IFX_SPU_CFARCFG_CAGUARD_LEN (6u)

/** \brief Mask for Ifx_SPU_CFARCFG_Bits.CAGUARD */
#define IFX_SPU_CFARCFG_CAGUARD_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_CFARCFG_Bits.CAGUARD */
#define IFX_SPU_CFARCFG_CAGUARD_OFF (4u)

/** \brief Length for Ifx_SPU_CFARCFG_Bits.CAWINCELL */
#define IFX_SPU_CFARCFG_CAWINCELL_LEN (3u)

/** \brief Mask for Ifx_SPU_CFARCFG_Bits.CAWINCELL */
#define IFX_SPU_CFARCFG_CAWINCELL_MSK (0x7u)

/** \brief Offset for Ifx_SPU_CFARCFG_Bits.CAWINCELL */
#define IFX_SPU_CFARCFG_CAWINCELL_OFF (10u)

/** \brief Length for Ifx_SPU_CFARCFG_Bits.RES */
#define IFX_SPU_CFARCFG_RES_LEN (1u)

/** \brief Mask for Ifx_SPU_CFARCFG_Bits.RES */
#define IFX_SPU_CFARCFG_RES_MSK (0x1u)

/** \brief Offset for Ifx_SPU_CFARCFG_Bits.RES */
#define IFX_SPU_CFARCFG_RES_OFF (13u)

/** \brief Length for Ifx_SPU_CFARCFG_Bits.CFARSEL */
#define IFX_SPU_CFARCFG_CFARSEL_LEN (2u)

/** \brief Mask for Ifx_SPU_CFARCFG_Bits.CFARSEL */
#define IFX_SPU_CFARCFG_CFARSEL_MSK (0x3u)

/** \brief Offset for Ifx_SPU_CFARCFG_Bits.CFARSEL */
#define IFX_SPU_CFARCFG_CFARSEL_OFF (14u)

/** \brief Length for Ifx_SPU_CFARCFG_Bits.CABETA */
#define IFX_SPU_CFARCFG_CABETA_LEN (16u)

/** \brief Mask for Ifx_SPU_CFARCFG_Bits.CABETA */
#define IFX_SPU_CFARCFG_CABETA_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_CFARCFG_Bits.CABETA */
#define IFX_SPU_CFARCFG_CABETA_OFF (16u)

/** \brief Length for Ifx_SPU_CFARCFG2_Bits.GOSGUARD */
#define IFX_SPU_CFARCFG2_GOSGUARD_LEN (6u)

/** \brief Mask for Ifx_SPU_CFARCFG2_Bits.GOSGUARD */
#define IFX_SPU_CFARCFG2_GOSGUARD_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_CFARCFG2_Bits.GOSGUARD */
#define IFX_SPU_CFARCFG2_GOSGUARD_OFF (0u)

/** \brief Length for Ifx_SPU_CFARCFG2_Bits.IDXLD */
#define IFX_SPU_CFARCFG2_IDXLD_LEN (5u)

/** \brief Mask for Ifx_SPU_CFARCFG2_Bits.IDXLD */
#define IFX_SPU_CFARCFG2_IDXLD_MSK (0x1fu)

/** \brief Offset for Ifx_SPU_CFARCFG2_Bits.IDXLD */
#define IFX_SPU_CFARCFG2_IDXLD_OFF (6u)

/** \brief Length for Ifx_SPU_CFARCFG2_Bits.IDXLG */
#define IFX_SPU_CFARCFG2_IDXLG_LEN (5u)

/** \brief Mask for Ifx_SPU_CFARCFG2_Bits.IDXLG */
#define IFX_SPU_CFARCFG2_IDXLG_MSK (0x1fu)

/** \brief Offset for Ifx_SPU_CFARCFG2_Bits.IDXLG */
#define IFX_SPU_CFARCFG2_IDXLG_OFF (11u)

/** \brief Length for Ifx_SPU_CFARCFG2_Bits.GOSWINCELL */
#define IFX_SPU_CFARCFG2_GOSWINCELL_LEN (6u)

/** \brief Mask for Ifx_SPU_CFARCFG2_Bits.GOSWINCELL */
#define IFX_SPU_CFARCFG2_GOSWINCELL_MSK (0x3fu)

/** \brief Offset for Ifx_SPU_CFARCFG2_Bits.GOSWINCELL */
#define IFX_SPU_CFARCFG2_GOSWINCELL_OFF (16u)

/** \brief Length for Ifx_SPU_CFARCFG2_Bits.CASHWIN */
#define IFX_SPU_CFARCFG2_CASHWIN_LEN (3u)

/** \brief Mask for Ifx_SPU_CFARCFG2_Bits.CASHWIN */
#define IFX_SPU_CFARCFG2_CASHWIN_MSK (0x7u)

/** \brief Offset for Ifx_SPU_CFARCFG2_Bits.CASHWIN */
#define IFX_SPU_CFARCFG2_CASHWIN_OFF (22u)

/** \brief Length for Ifx_SPU_CFARCFG2_Bits.RES */
#define IFX_SPU_CFARCFG2_RES_LEN (7u)

/** \brief Mask for Ifx_SPU_CFARCFG2_Bits.RES */
#define IFX_SPU_CFARCFG2_RES_MSK (0x7fu)

/** \brief Offset for Ifx_SPU_CFARCFG2_Bits.RES */
#define IFX_SPU_CFARCFG2_RES_OFF (25u)

/** \brief Length for Ifx_SPU_CFARCFG3_Bits.GOSBETA */
#define IFX_SPU_CFARCFG3_GOSBETA_LEN (16u)

/** \brief Mask for Ifx_SPU_CFARCFG3_Bits.GOSBETA */
#define IFX_SPU_CFARCFG3_GOSBETA_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_CFARCFG3_Bits.GOSBETA */
#define IFX_SPU_CFARCFG3_GOSBETA_OFF (0u)

/** \brief Length for Ifx_SPU_CFARCFG3_Bits.CHAN5OFFST */
#define IFX_SPU_CFARCFG3_CHAN5OFFST_LEN (16u)

/** \brief Mask for Ifx_SPU_CFARCFG3_Bits.CHAN5OFFST */
#define IFX_SPU_CFARCFG3_CHAN5OFFST_MSK (0xffffu)

/** \brief Offset for Ifx_SPU_CFARCFG3_Bits.CHAN5OFFST */
#define IFX_SPU_CFARCFG3_CHAN5OFFST_OFF (16u)

/** \brief Length for Ifx_SPU_SCALARADD_Bits.OPERAND */
#define IFX_SPU_SCALARADD_OPERAND_LEN (32u)

/** \brief Mask for Ifx_SPU_SCALARADD_Bits.OPERAND */
#define IFX_SPU_SCALARADD_OPERAND_MSK (0xffffffffu)

/** \brief Offset for Ifx_SPU_SCALARADD_Bits.OPERAND */
#define IFX_SPU_SCALARADD_OPERAND_OFF (0u)

/** \brief Length for Ifx_SPU_SCALARMULT_Bits.OPERAND */
#define IFX_SPU_SCALARMULT_OPERAND_LEN (32u)

/** \brief Mask for Ifx_SPU_SCALARMULT_Bits.OPERAND */
#define IFX_SPU_SCALARMULT_OPERAND_MSK (0xffffffffu)

/** \brief Offset for Ifx_SPU_SCALARMULT_Bits.OPERAND */
#define IFX_SPU_SCALARMULT_OPERAND_OFF (0u)

/** \brief Length for Ifx_SPU_BINREJCTRL_Bits.RMODE */
#define IFX_SPU_BINREJCTRL_RMODE_LEN (2u)

/** \brief Mask for Ifx_SPU_BINREJCTRL_Bits.RMODE */
#define IFX_SPU_BINREJCTRL_RMODE_MSK (0x3u)

/** \brief Offset for Ifx_SPU_BINREJCTRL_Bits.RMODE */
#define IFX_SPU_BINREJCTRL_RMODE_OFF (0u)

/** \brief Length for Ifx_SPU_BINREJCTRL_Bits.ZMODE */
#define IFX_SPU_BINREJCTRL_ZMODE_LEN (1u)

/** \brief Mask for Ifx_SPU_BINREJCTRL_Bits.ZMODE */
#define IFX_SPU_BINREJCTRL_ZMODE_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BINREJCTRL_Bits.ZMODE */
#define IFX_SPU_BINREJCTRL_ZMODE_OFF (2u)

/** \brief Length for Ifx_SPU_BINREJCTRL_Bits.LJUST */
#define IFX_SPU_BINREJCTRL_LJUST_LEN (1u)

/** \brief Mask for Ifx_SPU_BINREJCTRL_Bits.LJUST */
#define IFX_SPU_BINREJCTRL_LJUST_MSK (0x1u)

/** \brief Offset for Ifx_SPU_BINREJCTRL_Bits.LJUST */
#define IFX_SPU_BINREJCTRL_LJUST_OFF (3u)

/** \brief Length for Ifx_SPU_BINREJCTRL_Bits.VALUE */
#define IFX_SPU_BINREJCTRL_VALUE_LEN (24u)

/** \brief Mask for Ifx_SPU_BINREJCTRL_Bits.VALUE */
#define IFX_SPU_BINREJCTRL_VALUE_MSK (0xffffffu)

/** \brief Offset for Ifx_SPU_BINREJCTRL_Bits.VALUE */
#define IFX_SPU_BINREJCTRL_VALUE_OFF (4u)

/** \brief Length for Ifx_SPU_BINREJCTRL_Bits.RES */
#define IFX_SPU_BINREJCTRL_RES_LEN (4u)

/** \brief Mask for Ifx_SPU_BINREJCTRL_Bits.RES */
#define IFX_SPU_BINREJCTRL_RES_MSK (0xfu)

/** \brief Offset for Ifx_SPU_BINREJCTRL_Bits.RES */
#define IFX_SPU_BINREJCTRL_RES_OFF (28u)

/** \brief Length for Ifx_SPU_LCLMAX_Bits.WIDTH */
#define IFX_SPU_LCLMAX_WIDTH_LEN (2u)

/** \brief Mask for Ifx_SPU_LCLMAX_Bits.WIDTH */
#define IFX_SPU_LCLMAX_WIDTH_MSK (0x3u)

/** \brief Offset for Ifx_SPU_LCLMAX_Bits.WIDTH */
#define IFX_SPU_LCLMAX_WIDTH_OFF (0u)

/** \brief Length for Ifx_SPU_LCLMAX_Bits.TMODE */
#define IFX_SPU_LCLMAX_TMODE_LEN (2u)

/** \brief Mask for Ifx_SPU_LCLMAX_Bits.TMODE */
#define IFX_SPU_LCLMAX_TMODE_MSK (0x3u)

/** \brief Offset for Ifx_SPU_LCLMAX_Bits.TMODE */
#define IFX_SPU_LCLMAX_TMODE_OFF (2u)

/** \brief Length for Ifx_SPU_LCLMAX_Bits.LMODE */
#define IFX_SPU_LCLMAX_LMODE_LEN (2u)

/** \brief Mask for Ifx_SPU_LCLMAX_Bits.LMODE */
#define IFX_SPU_LCLMAX_LMODE_MSK (0x3u)

/** \brief Offset for Ifx_SPU_LCLMAX_Bits.LMODE */
#define IFX_SPU_LCLMAX_LMODE_OFF (4u)

/** \brief Length for Ifx_SPU_LCLMAX_Bits.CMBN */
#define IFX_SPU_LCLMAX_CMBN_LEN (1u)

/** \brief Mask for Ifx_SPU_LCLMAX_Bits.CMBN */
#define IFX_SPU_LCLMAX_CMBN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_LCLMAX_Bits.CMBN */
#define IFX_SPU_LCLMAX_CMBN_OFF (6u)

/** \brief Length for Ifx_SPU_LCLMAX_Bits.LJUST */
#define IFX_SPU_LCLMAX_LJUST_LEN (1u)

/** \brief Mask for Ifx_SPU_LCLMAX_Bits.LJUST */
#define IFX_SPU_LCLMAX_LJUST_MSK (0x1u)

/** \brief Offset for Ifx_SPU_LCLMAX_Bits.LJUST */
#define IFX_SPU_LCLMAX_LJUST_OFF (7u)

/** \brief Length for Ifx_SPU_LCLMAX_Bits.TSHLD */
#define IFX_SPU_LCLMAX_TSHLD_LEN (24u)

/** \brief Mask for Ifx_SPU_LCLMAX_Bits.TSHLD */
#define IFX_SPU_LCLMAX_TSHLD_MSK (0xffffffu)

/** \brief Offset for Ifx_SPU_LCLMAX_Bits.TSHLD */
#define IFX_SPU_LCLMAX_TSHLD_OFF (8u)

/** \brief Length for Ifx_SPU_CTRL_Bits.TRIG */
#define IFX_SPU_CTRL_TRIG_LEN (1u)

/** \brief Mask for Ifx_SPU_CTRL_Bits.TRIG */
#define IFX_SPU_CTRL_TRIG_MSK (0x1u)

/** \brief Offset for Ifx_SPU_CTRL_Bits.TRIG */
#define IFX_SPU_CTRL_TRIG_OFF (0u)

/** \brief Length for Ifx_SPU_CTRL_Bits.BUSY */
#define IFX_SPU_CTRL_BUSY_LEN (1u)

/** \brief Mask for Ifx_SPU_CTRL_Bits.BUSY */
#define IFX_SPU_CTRL_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SPU_CTRL_Bits.BUSY */
#define IFX_SPU_CTRL_BUSY_OFF (1u)

/** \brief Length for Ifx_SPU_CTRL_Bits.MODE */
#define IFX_SPU_CTRL_MODE_LEN (3u)

/** \brief Mask for Ifx_SPU_CTRL_Bits.MODE */
#define IFX_SPU_CTRL_MODE_MSK (0x7u)

/** \brief Offset for Ifx_SPU_CTRL_Bits.MODE */
#define IFX_SPU_CTRL_MODE_OFF (2u)

/** \brief Length for Ifx_SPU_CTRL_Bits.NXT_CONF */
#define IFX_SPU_CTRL_NXT_CONF_LEN (19u)

/** \brief Mask for Ifx_SPU_CTRL_Bits.NXT_CONF */
#define IFX_SPU_CTRL_NXT_CONF_MSK (0x7ffffu)

/** \brief Offset for Ifx_SPU_CTRL_Bits.NXT_CONF */
#define IFX_SPU_CTRL_NXT_CONF_OFF (5u)

/** \brief Length for Ifx_SPU_CTRL_Bits.DIV */
#define IFX_SPU_CTRL_DIV_LEN (2u)

/** \brief Mask for Ifx_SPU_CTRL_Bits.DIV */
#define IFX_SPU_CTRL_DIV_MSK (0x3u)

/** \brief Offset for Ifx_SPU_CTRL_Bits.DIV */
#define IFX_SPU_CTRL_DIV_OFF (24u)

/** \brief Length for Ifx_SPU_CTRL_Bits.RES */
#define IFX_SPU_CTRL_RES_LEN (5u)

/** \brief Mask for Ifx_SPU_CTRL_Bits.RES */
#define IFX_SPU_CTRL_RES_MSK (0x1fu)

/** \brief Offset for Ifx_SPU_CTRL_Bits.RES */
#define IFX_SPU_CTRL_RES_OFF (26u)

/** \brief Length for Ifx_SPU_CTRL_Bits.LAST */
#define IFX_SPU_CTRL_LAST_LEN (1u)

/** \brief Mask for Ifx_SPU_CTRL_Bits.LAST */
#define IFX_SPU_CTRL_LAST_MSK (0x1u)

/** \brief Offset for Ifx_SPU_CTRL_Bits.LAST */
#define IFX_SPU_CTRL_LAST_OFF (31u)

/** \brief Length for Ifx_SPU_MD_METADATA_Bits.SMPLCNT */
#define IFX_SPU_MD_METADATA_SMPLCNT_LEN (12u)

/** \brief Mask for Ifx_SPU_MD_METADATA_Bits.SMPLCNT */
#define IFX_SPU_MD_METADATA_SMPLCNT_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_MD_METADATA_Bits.SMPLCNT */
#define IFX_SPU_MD_METADATA_SMPLCNT_OFF (0u)

/** \brief Length for Ifx_SPU_MD_METADATA_Bits.RES */
#define IFX_SPU_MD_METADATA_RES_LEN (4u)

/** \brief Mask for Ifx_SPU_MD_METADATA_Bits.RES */
#define IFX_SPU_MD_METADATA_RES_MSK (0xfu)

/** \brief Offset for Ifx_SPU_MD_METADATA_Bits.RES */
#define IFX_SPU_MD_METADATA_RES_OFF (12u)

/** \brief Length for Ifx_SPU_MD_METADATA_Bits.EXPNT */
#define IFX_SPU_MD_METADATA_EXPNT_LEN (5u)

/** \brief Mask for Ifx_SPU_MD_METADATA_Bits.EXPNT */
#define IFX_SPU_MD_METADATA_EXPNT_MSK (0x1fu)

/** \brief Offset for Ifx_SPU_MD_METADATA_Bits.EXPNT */
#define IFX_SPU_MD_METADATA_EXPNT_OFF (16u)

/** \brief Length for Ifx_SPU_IDMCNT_Bits.CNT */
#define IFX_SPU_IDMCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_IDMCNT_Bits.CNT */
#define IFX_SPU_IDMCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_IDMCNT_Bits.CNT */
#define IFX_SPU_IDMCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_IDMCNT_Bits.RES */
#define IFX_SPU_IDMCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_IDMCNT_Bits.RES */
#define IFX_SPU_IDMCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_IDMCNT_Bits.RES */
#define IFX_SPU_IDMCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_IBMCNT_Bits.CNT */
#define IFX_SPU_IBMCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_IBMCNT_Bits.CNT */
#define IFX_SPU_IBMCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_IBMCNT_Bits.CNT */
#define IFX_SPU_IBMCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_IBMCNT_Bits.RES */
#define IFX_SPU_IBMCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_IBMCNT_Bits.RES */
#define IFX_SPU_IBMCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_IBMCNT_Bits.RES */
#define IFX_SPU_IBMCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_LDRCNT_Bits.CNT */
#define IFX_SPU_LDRCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_LDRCNT_Bits.CNT */
#define IFX_SPU_LDRCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_LDRCNT_Bits.CNT */
#define IFX_SPU_LDRCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_LDRCNT_Bits.RES */
#define IFX_SPU_LDRCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_LDRCNT_Bits.RES */
#define IFX_SPU_LDRCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_LDRCNT_Bits.RES */
#define IFX_SPU_LDRCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_FFTWCNT_Bits.CNT */
#define IFX_SPU_FFTWCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_FFTWCNT_Bits.CNT */
#define IFX_SPU_FFTWCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_FFTWCNT_Bits.CNT */
#define IFX_SPU_FFTWCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_FFTWCNT_Bits.RES */
#define IFX_SPU_FFTWCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_FFTWCNT_Bits.RES */
#define IFX_SPU_FFTWCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_FFTWCNT_Bits.RES */
#define IFX_SPU_FFTWCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_FFTRCNT_Bits.CNT */
#define IFX_SPU_FFTRCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_FFTRCNT_Bits.CNT */
#define IFX_SPU_FFTRCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_FFTRCNT_Bits.CNT */
#define IFX_SPU_FFTRCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_FFTRCNT_Bits.RES */
#define IFX_SPU_FFTRCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_FFTRCNT_Bits.RES */
#define IFX_SPU_FFTRCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_FFTRCNT_Bits.RES */
#define IFX_SPU_FFTRCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_ULDRCNT_Bits.CNT */
#define IFX_SPU_ULDRCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_ULDRCNT_Bits.CNT */
#define IFX_SPU_ULDRCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_ULDRCNT_Bits.CNT */
#define IFX_SPU_ULDRCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_ULDRCNT_Bits.RES */
#define IFX_SPU_ULDRCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_ULDRCNT_Bits.RES */
#define IFX_SPU_ULDRCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_ULDRCNT_Bits.RES */
#define IFX_SPU_ULDRCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_ODMCNT_Bits.CNT */
#define IFX_SPU_ODMCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_ODMCNT_Bits.CNT */
#define IFX_SPU_ODMCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_ODMCNT_Bits.CNT */
#define IFX_SPU_ODMCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_ODMCNT_Bits.RES */
#define IFX_SPU_ODMCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_ODMCNT_Bits.RES */
#define IFX_SPU_ODMCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_ODMCNT_Bits.RES */
#define IFX_SPU_ODMCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_BRCNT_Bits.CNT */
#define IFX_SPU_BRCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_BRCNT_Bits.CNT */
#define IFX_SPU_BRCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_BRCNT_Bits.CNT */
#define IFX_SPU_BRCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_BRCNT_Bits.RES */
#define IFX_SPU_BRCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_BRCNT_Bits.RES */
#define IFX_SPU_BRCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_BRCNT_Bits.RES */
#define IFX_SPU_BRCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_CFARCNT_Bits.CNT */
#define IFX_SPU_CFARCNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_CFARCNT_Bits.CNT */
#define IFX_SPU_CFARCNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_CFARCNT_Bits.CNT */
#define IFX_SPU_CFARCNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_CFARCNT_Bits.RES */
#define IFX_SPU_CFARCNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_CFARCNT_Bits.RES */
#define IFX_SPU_CFARCNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_CFARCNT_Bits.RES */
#define IFX_SPU_CFARCNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_ODMACNT_ODMACNT_Bits.CNT */
#define IFX_SPU_ODMACNT_ODMACNT_CNT_LEN (20u)

/** \brief Mask for Ifx_SPU_ODMACNT_ODMACNT_Bits.CNT */
#define IFX_SPU_ODMACNT_ODMACNT_CNT_MSK (0xfffffu)

/** \brief Offset for Ifx_SPU_ODMACNT_ODMACNT_Bits.CNT */
#define IFX_SPU_ODMACNT_ODMACNT_CNT_OFF (0u)

/** \brief Length for Ifx_SPU_ODMACNT_ODMACNT_Bits.RES */
#define IFX_SPU_ODMACNT_ODMACNT_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_ODMACNT_ODMACNT_Bits.RES */
#define IFX_SPU_ODMACNT_ODMACNT_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_ODMACNT_ODMACNT_Bits.RES */
#define IFX_SPU_ODMACNT_ODMACNT_RES_OFF (20u)

/** \brief Length for Ifx_SPU_CNTCLR_Bits.CLR */
#define IFX_SPU_CNTCLR_CLR_LEN (2u)

/** \brief Mask for Ifx_SPU_CNTCLR_Bits.CLR */
#define IFX_SPU_CNTCLR_CLR_MSK (0x3u)

/** \brief Offset for Ifx_SPU_CNTCLR_Bits.CLR */
#define IFX_SPU_CNTCLR_CLR_OFF (0u)

/** \brief Length for Ifx_SPU_CNTCLR_Bits.RES */
#define IFX_SPU_CNTCLR_RES_LEN (30u)

/** \brief Mask for Ifx_SPU_CNTCLR_Bits.RES */
#define IFX_SPU_CNTCLR_RES_MSK (0x3fffffffu)

/** \brief Offset for Ifx_SPU_CNTCLR_Bits.RES */
#define IFX_SPU_CNTCLR_RES_OFF (2u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.RAMP */
#define IFX_SPU_MONITOR_RAMP_LEN (11u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.RAMP */
#define IFX_SPU_MONITOR_RAMP_MSK (0x7ffu)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.RAMP */
#define IFX_SPU_MONITOR_RAMP_OFF (0u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.RES */
#define IFX_SPU_MONITOR_RES_LEN (1u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.RES */
#define IFX_SPU_MONITOR_RES_MSK (0x1u)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.RES */
#define IFX_SPU_MONITOR_RES_OFF (11u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.SAMPLE */
#define IFX_SPU_MONITOR_SAMPLE_LEN (11u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.SAMPLE */
#define IFX_SPU_MONITOR_SAMPLE_MSK (0x7ffu)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.SAMPLE */
#define IFX_SPU_MONITOR_SAMPLE_OFF (12u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.IDM_BUSY */
#define IFX_SPU_MONITOR_IDM_BUSY_LEN (1u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.IDM_BUSY */
#define IFX_SPU_MONITOR_IDM_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.IDM_BUSY */
#define IFX_SPU_MONITOR_IDM_BUSY_OFF (24u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.LDR_BUSY */
#define IFX_SPU_MONITOR_LDR_BUSY_LEN (1u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.LDR_BUSY */
#define IFX_SPU_MONITOR_LDR_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.LDR_BUSY */
#define IFX_SPU_MONITOR_LDR_BUSY_OFF (25u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.M1_BUSY */
#define IFX_SPU_MONITOR_M1_BUSY_LEN (1u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.M1_BUSY */
#define IFX_SPU_MONITOR_M1_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.M1_BUSY */
#define IFX_SPU_MONITOR_M1_BUSY_OFF (26u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.UL_BUSY */
#define IFX_SPU_MONITOR_UL_BUSY_LEN (1u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.UL_BUSY */
#define IFX_SPU_MONITOR_UL_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.UL_BUSY */
#define IFX_SPU_MONITOR_UL_BUSY_OFF (27u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.M2_BUSY */
#define IFX_SPU_MONITOR_M2_BUSY_LEN (1u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.M2_BUSY */
#define IFX_SPU_MONITOR_M2_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.M2_BUSY */
#define IFX_SPU_MONITOR_M2_BUSY_OFF (28u)

/** \brief Length for Ifx_SPU_MONITOR_Bits.ODM_BUSY */
#define IFX_SPU_MONITOR_ODM_BUSY_LEN (1u)

/** \brief Mask for Ifx_SPU_MONITOR_Bits.ODM_BUSY */
#define IFX_SPU_MONITOR_ODM_BUSY_MSK (0x1u)

/** \brief Offset for Ifx_SPU_MONITOR_Bits.ODM_BUSY */
#define IFX_SPU_MONITOR_ODM_BUSY_OFF (29u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN0_EN */
#define IFX_SPU_ACCEN0_EN0_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN0_EN */
#define IFX_SPU_ACCEN0_EN0_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN0_EN */
#define IFX_SPU_ACCEN0_EN0_EN_OFF (0u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN1_EN */
#define IFX_SPU_ACCEN0_EN1_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN1_EN */
#define IFX_SPU_ACCEN0_EN1_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN1_EN */
#define IFX_SPU_ACCEN0_EN1_EN_OFF (1u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN2_EN */
#define IFX_SPU_ACCEN0_EN2_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN2_EN */
#define IFX_SPU_ACCEN0_EN2_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN2_EN */
#define IFX_SPU_ACCEN0_EN2_EN_OFF (2u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN3_EN */
#define IFX_SPU_ACCEN0_EN3_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN3_EN */
#define IFX_SPU_ACCEN0_EN3_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN3_EN */
#define IFX_SPU_ACCEN0_EN3_EN_OFF (3u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN4_EN */
#define IFX_SPU_ACCEN0_EN4_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN4_EN */
#define IFX_SPU_ACCEN0_EN4_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN4_EN */
#define IFX_SPU_ACCEN0_EN4_EN_OFF (4u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN5_EN */
#define IFX_SPU_ACCEN0_EN5_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN5_EN */
#define IFX_SPU_ACCEN0_EN5_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN5_EN */
#define IFX_SPU_ACCEN0_EN5_EN_OFF (5u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN6_EN */
#define IFX_SPU_ACCEN0_EN6_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN6_EN */
#define IFX_SPU_ACCEN0_EN6_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN6_EN */
#define IFX_SPU_ACCEN0_EN6_EN_OFF (6u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN7_EN */
#define IFX_SPU_ACCEN0_EN7_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN7_EN */
#define IFX_SPU_ACCEN0_EN7_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN7_EN */
#define IFX_SPU_ACCEN0_EN7_EN_OFF (7u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN8_EN */
#define IFX_SPU_ACCEN0_EN8_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN8_EN */
#define IFX_SPU_ACCEN0_EN8_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN8_EN */
#define IFX_SPU_ACCEN0_EN8_EN_OFF (8u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN9_EN */
#define IFX_SPU_ACCEN0_EN9_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN9_EN */
#define IFX_SPU_ACCEN0_EN9_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN9_EN */
#define IFX_SPU_ACCEN0_EN9_EN_OFF (9u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN10_EN */
#define IFX_SPU_ACCEN0_EN10_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN10_EN */
#define IFX_SPU_ACCEN0_EN10_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN10_EN */
#define IFX_SPU_ACCEN0_EN10_EN_OFF (10u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN11_EN */
#define IFX_SPU_ACCEN0_EN11_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN11_EN */
#define IFX_SPU_ACCEN0_EN11_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN11_EN */
#define IFX_SPU_ACCEN0_EN11_EN_OFF (11u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN12_EN */
#define IFX_SPU_ACCEN0_EN12_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN12_EN */
#define IFX_SPU_ACCEN0_EN12_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN12_EN */
#define IFX_SPU_ACCEN0_EN12_EN_OFF (12u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN13_EN */
#define IFX_SPU_ACCEN0_EN13_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN13_EN */
#define IFX_SPU_ACCEN0_EN13_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN13_EN */
#define IFX_SPU_ACCEN0_EN13_EN_OFF (13u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN14_EN */
#define IFX_SPU_ACCEN0_EN14_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN14_EN */
#define IFX_SPU_ACCEN0_EN14_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN14_EN */
#define IFX_SPU_ACCEN0_EN14_EN_OFF (14u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN15_EN */
#define IFX_SPU_ACCEN0_EN15_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN15_EN */
#define IFX_SPU_ACCEN0_EN15_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN15_EN */
#define IFX_SPU_ACCEN0_EN15_EN_OFF (15u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN16_EN */
#define IFX_SPU_ACCEN0_EN16_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN16_EN */
#define IFX_SPU_ACCEN0_EN16_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN16_EN */
#define IFX_SPU_ACCEN0_EN16_EN_OFF (16u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN17_EN */
#define IFX_SPU_ACCEN0_EN17_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN17_EN */
#define IFX_SPU_ACCEN0_EN17_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN17_EN */
#define IFX_SPU_ACCEN0_EN17_EN_OFF (17u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN18_EN */
#define IFX_SPU_ACCEN0_EN18_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN18_EN */
#define IFX_SPU_ACCEN0_EN18_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN18_EN */
#define IFX_SPU_ACCEN0_EN18_EN_OFF (18u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN19_EN */
#define IFX_SPU_ACCEN0_EN19_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN19_EN */
#define IFX_SPU_ACCEN0_EN19_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN19_EN */
#define IFX_SPU_ACCEN0_EN19_EN_OFF (19u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN20_EN */
#define IFX_SPU_ACCEN0_EN20_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN20_EN */
#define IFX_SPU_ACCEN0_EN20_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN20_EN */
#define IFX_SPU_ACCEN0_EN20_EN_OFF (20u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN21_EN */
#define IFX_SPU_ACCEN0_EN21_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN21_EN */
#define IFX_SPU_ACCEN0_EN21_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN21_EN */
#define IFX_SPU_ACCEN0_EN21_EN_OFF (21u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN22_EN */
#define IFX_SPU_ACCEN0_EN22_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN22_EN */
#define IFX_SPU_ACCEN0_EN22_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN22_EN */
#define IFX_SPU_ACCEN0_EN22_EN_OFF (22u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN23_EN */
#define IFX_SPU_ACCEN0_EN23_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN23_EN */
#define IFX_SPU_ACCEN0_EN23_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN23_EN */
#define IFX_SPU_ACCEN0_EN23_EN_OFF (23u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN24_EN */
#define IFX_SPU_ACCEN0_EN24_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN24_EN */
#define IFX_SPU_ACCEN0_EN24_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN24_EN */
#define IFX_SPU_ACCEN0_EN24_EN_OFF (24u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN25_EN */
#define IFX_SPU_ACCEN0_EN25_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN25_EN */
#define IFX_SPU_ACCEN0_EN25_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN25_EN */
#define IFX_SPU_ACCEN0_EN25_EN_OFF (25u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN26_EN */
#define IFX_SPU_ACCEN0_EN26_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN26_EN */
#define IFX_SPU_ACCEN0_EN26_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN26_EN */
#define IFX_SPU_ACCEN0_EN26_EN_OFF (26u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN27_EN */
#define IFX_SPU_ACCEN0_EN27_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN27_EN */
#define IFX_SPU_ACCEN0_EN27_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN27_EN */
#define IFX_SPU_ACCEN0_EN27_EN_OFF (27u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN28_EN */
#define IFX_SPU_ACCEN0_EN28_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN28_EN */
#define IFX_SPU_ACCEN0_EN28_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN28_EN */
#define IFX_SPU_ACCEN0_EN28_EN_OFF (28u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN29_EN */
#define IFX_SPU_ACCEN0_EN29_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN29_EN */
#define IFX_SPU_ACCEN0_EN29_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN29_EN */
#define IFX_SPU_ACCEN0_EN29_EN_OFF (29u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN30_EN */
#define IFX_SPU_ACCEN0_EN30_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN30_EN */
#define IFX_SPU_ACCEN0_EN30_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN30_EN */
#define IFX_SPU_ACCEN0_EN30_EN_OFF (30u)

/** \brief Length for Ifx_SPU_ACCEN0_Bits.EN31_EN */
#define IFX_SPU_ACCEN0_EN31_EN_LEN (1u)

/** \brief Mask for Ifx_SPU_ACCEN0_Bits.EN31_EN */
#define IFX_SPU_ACCEN0_EN31_EN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ACCEN0_Bits.EN31_EN */
#define IFX_SPU_ACCEN0_EN31_EN_OFF (31u)

/** \brief Length for Ifx_SPU_ACCEN1_Bits.RES */
#define IFX_SPU_ACCEN1_RES_LEN (32u)

/** \brief Mask for Ifx_SPU_ACCEN1_Bits.RES */
#define IFX_SPU_ACCEN1_RES_MSK (0xffffffffu)

/** \brief Offset for Ifx_SPU_ACCEN1_Bits.RES */
#define IFX_SPU_ACCEN1_RES_OFF (0u)

/** \brief Length for Ifx_SPU_OCS_Bits.TGS */
#define IFX_SPU_OCS_TGS_LEN (2u)

/** \brief Mask for Ifx_SPU_OCS_Bits.TGS */
#define IFX_SPU_OCS_TGS_MSK (0x3u)
/** \brief Mask for Ifx_SPU_OCS_Bits.TGS */
#define IFX_SPU_OCS_TGS_MSK (0x3u)

/** \brief Offset for Ifx_SPU_OCS_Bits.TGS */
#define IFX_SPU_OCS_TGS_OFF (0u)

/** \brief Length for Ifx_SPU_OCS_Bits.TGB */
#define IFX_SPU_OCS_TGB_LEN (1u)

/** \brief Mask for Ifx_SPU_OCS_Bits.TGB */
#define IFX_SPU_OCS_TGB_MSK (0x1u)
/** \brief Mask for Ifx_SPU_OCS_Bits.TGB */
#define IFX_SPU_OCS_TGB_MSK (0x1u)

/** \brief Offset for Ifx_SPU_OCS_Bits.TGB */
#define IFX_SPU_OCS_TGB_OFF (2u)

/** \brief Length for Ifx_SPU_OCS_Bits.TG_P */
#define IFX_SPU_OCS_TG_P_LEN (1u)

/** \brief Mask for Ifx_SPU_OCS_Bits.TG_P */
#define IFX_SPU_OCS_TG_P_MSK (0x1u)
/** \brief Mask for Ifx_SPU_OCS_Bits.TG_P */
#define IFX_SPU_OCS_TG_P_MSK (0x1u)

/** \brief Offset for Ifx_SPU_OCS_Bits.TG_P */
#define IFX_SPU_OCS_TG_P_OFF (3u)

/** \brief Length for Ifx_SPU_OCS_Bits.RES */
#define IFX_SPU_OCS_RES_LEN (12u)

/** \brief Mask for Ifx_SPU_OCS_Bits.RES */
#define IFX_SPU_OCS_RES_MSK (0xfffu)
/** \brief Mask for Ifx_SPU_OCS_Bits.RES */
#define IFX_SPU_OCS_RES_MSK (0xfffu)

/** \brief Offset for Ifx_SPU_OCS_Bits.RES */
#define IFX_SPU_OCS_RES_OFF (4u)

/** \brief Length for Ifx_SPU_OCS_Bits.TRSCTRL */
#define IFX_SPU_OCS_TRSCTRL_LEN (8u)

/** \brief Mask for Ifx_SPU_OCS_Bits.TRSCTRL */
#define IFX_SPU_OCS_TRSCTRL_MSK (0xffu)
/** \brief Mask for Ifx_SPU_OCS_Bits.TRSCTRL */
#define IFX_SPU_OCS_TRSCTRL_MSK (0xffu)

/** \brief Offset for Ifx_SPU_OCS_Bits.TRSCTRL */
#define IFX_SPU_OCS_TRSCTRL_OFF (16u)

/** \brief Length for Ifx_SPU_OCS_Bits.SUS */
#define IFX_SPU_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_SPU_OCS_Bits.SUS */
#define IFX_SPU_OCS_SUS_MSK (0xfu)
/** \brief Mask for Ifx_SPU_OCS_Bits.SUS */
#define IFX_SPU_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_SPU_OCS_Bits.SUS */
#define IFX_SPU_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_SPU_OCS_Bits.SUS_P */
#define IFX_SPU_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_SPU_OCS_Bits.SUS_P */
#define IFX_SPU_OCS_SUS_P_MSK (0x1u)
/** \brief Mask for Ifx_SPU_OCS_Bits.SUS_P */
#define IFX_SPU_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_SPU_OCS_Bits.SUS_P */
#define IFX_SPU_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_SPU_OCS_Bits.SUSSTA */
#define IFX_SPU_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_SPU_OCS_Bits.SUSSTA */
#define IFX_SPU_OCS_SUSSTA_MSK (0x1u)
/** \brief Mask for Ifx_SPU_OCS_Bits.SUSSTA */
#define IFX_SPU_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_SPU_OCS_Bits.SUSSTA */
#define IFX_SPU_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_SPU_ODA_Bits.DDREN */
#define IFX_SPU_ODA_DDREN_LEN (1u)

/** \brief Mask for Ifx_SPU_ODA_Bits.DDREN */
#define IFX_SPU_ODA_DDREN_MSK (0x1u)
/** \brief Mask for Ifx_SPU_ODA_Bits.DDREN */
#define IFX_SPU_ODA_DDREN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ODA_Bits.DDREN */
#define IFX_SPU_ODA_DDREN_OFF (0u)

/** \brief Length for Ifx_SPU_ODA_Bits.DREN */
#define IFX_SPU_ODA_DREN_LEN (1u)

/** \brief Mask for Ifx_SPU_ODA_Bits.DREN */
#define IFX_SPU_ODA_DREN_MSK (0x1u)
/** \brief Mask for Ifx_SPU_ODA_Bits.DREN */
#define IFX_SPU_ODA_DREN_MSK (0x1u)

/** \brief Offset for Ifx_SPU_ODA_Bits.DREN */
#define IFX_SPU_ODA_DREN_OFF (1u)

/** \brief Length for Ifx_SPU_ODA_Bits.RES */
#define IFX_SPU_ODA_RES_LEN (30u)

/** \brief Mask for Ifx_SPU_ODA_Bits.RES */
#define IFX_SPU_ODA_RES_MSK (0x3fffffffu)
/** \brief Mask for Ifx_SPU_ODA_Bits.RES */
#define IFX_SPU_ODA_RES_MSK (0x3fffffffu)

/** \brief Offset for Ifx_SPU_ODA_Bits.RES */
#define IFX_SPU_ODA_RES_OFF (2u)

/** \brief Length for Ifx_SPU_KRST0_Bits.RST */
#define IFX_SPU_KRST0_RST_LEN (1u)

/** \brief Mask for Ifx_SPU_KRST0_Bits.RST */
#define IFX_SPU_KRST0_RST_MSK (0x1u)
/** \brief Mask for Ifx_SPU_KRST0_Bits.RST */
#define IFX_SPU_KRST0_RST_MSK (0x1u)

/** \brief Offset for Ifx_SPU_KRST0_Bits.RST */
#define IFX_SPU_KRST0_RST_OFF (0u)

/** \brief Length for Ifx_SPU_KRST0_Bits.RSTSTAT */
#define IFX_SPU_KRST0_RSTSTAT_LEN (1u)

/** \brief Mask for Ifx_SPU_KRST0_Bits.RSTSTAT */
#define IFX_SPU_KRST0_RSTSTAT_MSK (0x1u)
/** \brief Mask for Ifx_SPU_KRST0_Bits.RSTSTAT */
#define IFX_SPU_KRST0_RSTSTAT_MSK (0x1u)

/** \brief Offset for Ifx_SPU_KRST0_Bits.RSTSTAT */
#define IFX_SPU_KRST0_RSTSTAT_OFF (1u)

/** \brief Length for Ifx_SPU_KRST0_Bits.RES */
#define IFX_SPU_KRST0_RES_LEN (30u)

/** \brief Mask for Ifx_SPU_KRST0_Bits.RES */
#define IFX_SPU_KRST0_RES_MSK (0x3fffffffu)
/** \brief Mask for Ifx_SPU_KRST0_Bits.RES */
#define IFX_SPU_KRST0_RES_MSK (0x3fffffffu)

/** \brief Offset for Ifx_SPU_KRST0_Bits.RES */
#define IFX_SPU_KRST0_RES_OFF (2u)

/** \brief Length for Ifx_SPU_KRST1_Bits.RST */
#define IFX_SPU_KRST1_RST_LEN (1u)

/** \brief Mask for Ifx_SPU_KRST1_Bits.RST */
#define IFX_SPU_KRST1_RST_MSK (0x1u)
/** \brief Mask for Ifx_SPU_KRST1_Bits.RST */
#define IFX_SPU_KRST1_RST_MSK (0x1u)

/** \brief Offset for Ifx_SPU_KRST1_Bits.RST */
#define IFX_SPU_KRST1_RST_OFF (0u)

/** \brief Length for Ifx_SPU_KRST1_Bits.RES */
#define IFX_SPU_KRST1_RES_LEN (31u)

/** \brief Mask for Ifx_SPU_KRST1_Bits.RES */
#define IFX_SPU_KRST1_RES_MSK (0x7fffffffu)
/** \brief Mask for Ifx_SPU_KRST1_Bits.RES */
#define IFX_SPU_KRST1_RES_MSK (0x7fffffffu)

/** \brief Offset for Ifx_SPU_KRST1_Bits.RES */
#define IFX_SPU_KRST1_RES_OFF (1u)

/** \brief Length for Ifx_SPU_KRSTCLR_Bits.CLR */
#define IFX_SPU_KRSTCLR_CLR_LEN (1u)

/** \brief Mask for Ifx_SPU_KRSTCLR_Bits.CLR */
#define IFX_SPU_KRSTCLR_CLR_MSK (0x1u)
/** \brief Mask for Ifx_SPU_KRSTCLR_Bits.CLR */
#define IFX_SPU_KRSTCLR_CLR_MSK (0x1u)

/** \brief Offset for Ifx_SPU_KRSTCLR_Bits.CLR */
#define IFX_SPU_KRSTCLR_CLR_OFF (0u)

/** \brief Length for Ifx_SPU_KRSTCLR_Bits.RES */
#define IFX_SPU_KRSTCLR_RES_LEN (31u)

/** \brief Mask for Ifx_SPU_KRSTCLR_Bits.RES */
#define IFX_SPU_KRSTCLR_RES_MSK (0x7fffffffu)
/** \brief Mask for Ifx_SPU_KRSTCLR_Bits.RES */
#define IFX_SPU_KRSTCLR_RES_MSK (0x7fffffffu)

/** \brief Offset for Ifx_SPU_KRSTCLR_Bits.RES */
#define IFX_SPU_KRSTCLR_RES_OFF (1u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSPU_BF_H */
