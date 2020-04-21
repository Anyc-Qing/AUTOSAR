/**
 * \file IfxSbcu_bf.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:16:00 GMT
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
 * \defgroup IfxLld_Sbcu_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxLld_Sbcu_Registers
 * 
 */
#ifndef IFXSBCU_BF_H
#define IFXSBCU_BF_H 1
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Sbcu_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_SBCU_ID_Bits.MOD_REV */
#define IFX_SBCU_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_SBCU_ID_Bits.MOD_REV */
#define IFX_SBCU_ID_MOD_REV_MSK (0x0u)

/** \brief Offset for Ifx_SBCU_ID_Bits.MOD_REV */
#define IFX_SBCU_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_SBCU_ID_Bits.MOD_NUMBER */
#define IFX_SBCU_ID_MOD_NUMBER_LEN (8u)

/** \brief Mask for Ifx_SBCU_ID_Bits.MOD_NUMBER */
#define IFX_SBCU_ID_MOD_NUMBER_MSK (0xffu)

/** \brief Offset for Ifx_SBCU_ID_Bits.MOD_NUMBER */
#define IFX_SBCU_ID_MOD_NUMBER_OFF (8u)

/** \brief Length for Ifx_SBCU_CON_Bits.TOUT */
#define IFX_SBCU_CON_TOUT_LEN (16u)

/** \brief Mask for Ifx_SBCU_CON_Bits.TOUT */
#define IFX_SBCU_CON_TOUT_MSK (0xffffu)

/** \brief Offset for Ifx_SBCU_CON_Bits.TOUT */
#define IFX_SBCU_CON_TOUT_OFF (0u)

/** \brief Length for Ifx_SBCU_CON_Bits.DBG */
#define IFX_SBCU_CON_DBG_LEN (1u)

/** \brief Mask for Ifx_SBCU_CON_Bits.DBG */
#define IFX_SBCU_CON_DBG_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_CON_Bits.DBG */
#define IFX_SBCU_CON_DBG_OFF (16u)

/** \brief Length for Ifx_SBCU_CON_Bits.SPC */
#define IFX_SBCU_CON_SPC_LEN (8u)

/** \brief Mask for Ifx_SBCU_CON_Bits.SPC */
#define IFX_SBCU_CON_SPC_MSK (0xffu)

/** \brief Offset for Ifx_SBCU_CON_Bits.SPC */
#define IFX_SBCU_CON_SPC_OFF (24u)

/** \brief Length for Ifx_SBCU_PRIOH_Bits.CPU2 */
#define IFX_SBCU_PRIOH_CPU2_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOH_Bits.CPU2 */
#define IFX_SBCU_PRIOH_CPU2_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOH_Bits.CPU2 */
#define IFX_SBCU_PRIOH_CPU2_OFF (0u)

/** \brief Length for Ifx_SBCU_PRIOH_Bits.CPU3 */
#define IFX_SBCU_PRIOH_CPU3_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOH_Bits.CPU3 */
#define IFX_SBCU_PRIOH_CPU3_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOH_Bits.CPU3 */
#define IFX_SBCU_PRIOH_CPU3_OFF (4u)

/** \brief Length for Ifx_SBCU_PRIOH_Bits.CPU4 */
#define IFX_SBCU_PRIOH_CPU4_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOH_Bits.CPU4 */
#define IFX_SBCU_PRIOH_CPU4_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOH_Bits.CPU4 */
#define IFX_SBCU_PRIOH_CPU4_OFF (8u)

/** \brief Length for Ifx_SBCU_PRIOH_Bits.CPU5 */
#define IFX_SBCU_PRIOH_CPU5_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOH_Bits.CPU5 */
#define IFX_SBCU_PRIOH_CPU5_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOH_Bits.CPU5 */
#define IFX_SBCU_PRIOH_CPU5_OFF (12u)

/** \brief Length for Ifx_SBCU_PRIOH_Bits.HSMRMI */
#define IFX_SBCU_PRIOH_HSMRMI_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOH_Bits.HSMRMI */
#define IFX_SBCU_PRIOH_HSMRMI_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOH_Bits.HSMRMI */
#define IFX_SBCU_PRIOH_HSMRMI_OFF (16u)

/** \brief Length for Ifx_SBCU_PRIOH_Bits.HSMCMI */
#define IFX_SBCU_PRIOH_HSMCMI_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOH_Bits.HSMCMI */
#define IFX_SBCU_PRIOH_HSMCMI_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOH_Bits.HSMCMI */
#define IFX_SBCU_PRIOH_HSMCMI_OFF (20u)

/** \brief Length for Ifx_SBCU_PRIOL_Bits.SFI_S2F */
#define IFX_SBCU_PRIOL_SFI_S2F_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOL_Bits.SFI_S2F */
#define IFX_SBCU_PRIOL_SFI_S2F_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOL_Bits.SFI_S2F */
#define IFX_SBCU_PRIOL_SFI_S2F_OFF (0u)

/** \brief Length for Ifx_SBCU_PRIOL_Bits.SDMMC */
#define IFX_SBCU_PRIOL_SDMMC_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOL_Bits.SDMMC */
#define IFX_SBCU_PRIOL_SDMMC_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOL_Bits.SDMMC */
#define IFX_SBCU_PRIOL_SDMMC_OFF (8u)

/** \brief Length for Ifx_SBCU_PRIOL_Bits.HSSL0 */
#define IFX_SBCU_PRIOL_HSSL0_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOL_Bits.HSSL0 */
#define IFX_SBCU_PRIOL_HSSL0_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOL_Bits.HSSL0 */
#define IFX_SBCU_PRIOL_HSSL0_OFF (12u)

/** \brief Length for Ifx_SBCU_PRIOL_Bits.HSSL1 */
#define IFX_SBCU_PRIOL_HSSL1_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOL_Bits.HSSL1 */
#define IFX_SBCU_PRIOL_HSSL1_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOL_Bits.HSSL1 */
#define IFX_SBCU_PRIOL_HSSL1_OFF (16u)

/** \brief Length for Ifx_SBCU_PRIOL_Bits.CPU0 */
#define IFX_SBCU_PRIOL_CPU0_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOL_Bits.CPU0 */
#define IFX_SBCU_PRIOL_CPU0_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOL_Bits.CPU0 */
#define IFX_SBCU_PRIOL_CPU0_OFF (24u)

/** \brief Length for Ifx_SBCU_PRIOL_Bits.CPU1 */
#define IFX_SBCU_PRIOL_CPU1_LEN (4u)

/** \brief Mask for Ifx_SBCU_PRIOL_Bits.CPU1 */
#define IFX_SBCU_PRIOL_CPU1_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_PRIOL_Bits.CPU1 */
#define IFX_SBCU_PRIOL_CPU1_OFF (28u)

/** \brief Length for Ifx_SBCU_ECON_Bits.ERRCNT */
#define IFX_SBCU_ECON_ERRCNT_LEN (14u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.ERRCNT */
#define IFX_SBCU_ECON_ERRCNT_MSK (0x3fffu)

/** \brief Offset for Ifx_SBCU_ECON_Bits.ERRCNT */
#define IFX_SBCU_ECON_ERRCNT_OFF (0u)

/** \brief Length for Ifx_SBCU_ECON_Bits.TOUT */
#define IFX_SBCU_ECON_TOUT_LEN (1u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.TOUT */
#define IFX_SBCU_ECON_TOUT_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ECON_Bits.TOUT */
#define IFX_SBCU_ECON_TOUT_OFF (14u)

/** \brief Length for Ifx_SBCU_ECON_Bits.RDY */
#define IFX_SBCU_ECON_RDY_LEN (1u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.RDY */
#define IFX_SBCU_ECON_RDY_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ECON_Bits.RDY */
#define IFX_SBCU_ECON_RDY_OFF (15u)

/** \brief Length for Ifx_SBCU_ECON_Bits.ABT */
#define IFX_SBCU_ECON_ABT_LEN (1u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.ABT */
#define IFX_SBCU_ECON_ABT_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ECON_Bits.ABT */
#define IFX_SBCU_ECON_ABT_OFF (16u)

/** \brief Length for Ifx_SBCU_ECON_Bits.ACK */
#define IFX_SBCU_ECON_ACK_LEN (2u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.ACK */
#define IFX_SBCU_ECON_ACK_MSK (0x3u)

/** \brief Offset for Ifx_SBCU_ECON_Bits.ACK */
#define IFX_SBCU_ECON_ACK_OFF (17u)

/** \brief Length for Ifx_SBCU_ECON_Bits.SVM */
#define IFX_SBCU_ECON_SVM_LEN (1u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.SVM */
#define IFX_SBCU_ECON_SVM_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ECON_Bits.SVM */
#define IFX_SBCU_ECON_SVM_OFF (19u)

/** \brief Length for Ifx_SBCU_ECON_Bits.WRN */
#define IFX_SBCU_ECON_WRN_LEN (1u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.WRN */
#define IFX_SBCU_ECON_WRN_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ECON_Bits.WRN */
#define IFX_SBCU_ECON_WRN_OFF (20u)

/** \brief Length for Ifx_SBCU_ECON_Bits.RDN */
#define IFX_SBCU_ECON_RDN_LEN (1u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.RDN */
#define IFX_SBCU_ECON_RDN_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ECON_Bits.RDN */
#define IFX_SBCU_ECON_RDN_OFF (21u)

/** \brief Length for Ifx_SBCU_ECON_Bits.TAG */
#define IFX_SBCU_ECON_TAG_LEN (6u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.TAG */
#define IFX_SBCU_ECON_TAG_MSK (0x3fu)

/** \brief Offset for Ifx_SBCU_ECON_Bits.TAG */
#define IFX_SBCU_ECON_TAG_OFF (22u)

/** \brief Length for Ifx_SBCU_ECON_Bits.OPC */
#define IFX_SBCU_ECON_OPC_LEN (4u)

/** \brief Mask for Ifx_SBCU_ECON_Bits.OPC */
#define IFX_SBCU_ECON_OPC_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_ECON_Bits.OPC */
#define IFX_SBCU_ECON_OPC_OFF (28u)

/** \brief Length for Ifx_SBCU_EADD_Bits.FPIADR */
#define IFX_SBCU_EADD_FPIADR_LEN (32u)

/** \brief Mask for Ifx_SBCU_EADD_Bits.FPIADR */
#define IFX_SBCU_EADD_FPIADR_MSK (0xffffffffu)

/** \brief Offset for Ifx_SBCU_EADD_Bits.FPIADR */
#define IFX_SBCU_EADD_FPIADR_OFF (0u)

/** \brief Length for Ifx_SBCU_EDAT_Bits.FPIDAT */
#define IFX_SBCU_EDAT_FPIDAT_LEN (32u)

/** \brief Mask for Ifx_SBCU_EDAT_Bits.FPIDAT */
#define IFX_SBCU_EDAT_FPIDAT_MSK (0xffffffffu)

/** \brief Offset for Ifx_SBCU_EDAT_Bits.FPIDAT */
#define IFX_SBCU_EDAT_FPIDAT_OFF (0u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.EO */
#define IFX_SBCU_DBCNTL_EO_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.EO */
#define IFX_SBCU_DBCNTL_EO_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.EO */
#define IFX_SBCU_DBCNTL_EO_OFF (0u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.OA */
#define IFX_SBCU_DBCNTL_OA_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.OA */
#define IFX_SBCU_DBCNTL_OA_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.OA */
#define IFX_SBCU_DBCNTL_OA_OFF (1u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.RA */
#define IFX_SBCU_DBCNTL_RA_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.RA */
#define IFX_SBCU_DBCNTL_RA_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.RA */
#define IFX_SBCU_DBCNTL_RA_OFF (4u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.HSMTRTREN */
#define IFX_SBCU_DBCNTL_HSMTRTREN_LEN (2u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.HSMTRTREN */
#define IFX_SBCU_DBCNTL_HSMTRTREN_MSK (0x3u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.HSMTRTREN */
#define IFX_SBCU_DBCNTL_HSMTRTREN_OFF (5u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.HSMDBGEN */
#define IFX_SBCU_DBCNTL_HSMDBGEN_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.HSMDBGEN */
#define IFX_SBCU_DBCNTL_HSMDBGEN_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.HSMDBGEN */
#define IFX_SBCU_DBCNTL_HSMDBGEN_OFF (7u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.CONCOM0 */
#define IFX_SBCU_DBCNTL_CONCOM0_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.CONCOM0 */
#define IFX_SBCU_DBCNTL_CONCOM0_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.CONCOM0 */
#define IFX_SBCU_DBCNTL_CONCOM0_OFF (12u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.CONCOM1 */
#define IFX_SBCU_DBCNTL_CONCOM1_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.CONCOM1 */
#define IFX_SBCU_DBCNTL_CONCOM1_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.CONCOM1 */
#define IFX_SBCU_DBCNTL_CONCOM1_OFF (13u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.CONCOM2 */
#define IFX_SBCU_DBCNTL_CONCOM2_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.CONCOM2 */
#define IFX_SBCU_DBCNTL_CONCOM2_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.CONCOM2 */
#define IFX_SBCU_DBCNTL_CONCOM2_OFF (14u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.ONG */
#define IFX_SBCU_DBCNTL_ONG_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.ONG */
#define IFX_SBCU_DBCNTL_ONG_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.ONG */
#define IFX_SBCU_DBCNTL_ONG_OFF (16u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.ONA1 */
#define IFX_SBCU_DBCNTL_ONA1_LEN (2u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.ONA1 */
#define IFX_SBCU_DBCNTL_ONA1_MSK (0x3u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.ONA1 */
#define IFX_SBCU_DBCNTL_ONA1_OFF (20u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.ONA2 */
#define IFX_SBCU_DBCNTL_ONA2_LEN (2u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.ONA2 */
#define IFX_SBCU_DBCNTL_ONA2_MSK (0x3u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.ONA2 */
#define IFX_SBCU_DBCNTL_ONA2_OFF (24u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.ONBOS0 */
#define IFX_SBCU_DBCNTL_ONBOS0_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.ONBOS0 */
#define IFX_SBCU_DBCNTL_ONBOS0_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.ONBOS0 */
#define IFX_SBCU_DBCNTL_ONBOS0_OFF (28u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.ONBOS1 */
#define IFX_SBCU_DBCNTL_ONBOS1_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.ONBOS1 */
#define IFX_SBCU_DBCNTL_ONBOS1_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.ONBOS1 */
#define IFX_SBCU_DBCNTL_ONBOS1_OFF (29u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.ONBOS2 */
#define IFX_SBCU_DBCNTL_ONBOS2_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.ONBOS2 */
#define IFX_SBCU_DBCNTL_ONBOS2_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.ONBOS2 */
#define IFX_SBCU_DBCNTL_ONBOS2_OFF (30u)

/** \brief Length for Ifx_SBCU_DBCNTL_Bits.ONBOS3 */
#define IFX_SBCU_DBCNTL_ONBOS3_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBCNTL_Bits.ONBOS3 */
#define IFX_SBCU_DBCNTL_ONBOS3_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBCNTL_Bits.ONBOS3 */
#define IFX_SBCU_DBCNTL_ONBOS3_OFF (31u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.SFI_S2F */
#define IFX_SBCU_DBGRNT_SFI_S2F_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.SFI_S2F */
#define IFX_SBCU_DBGRNT_SFI_S2F_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.SFI_S2F */
#define IFX_SBCU_DBGRNT_SFI_S2F_OFF (0u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.SDMMC */
#define IFX_SBCU_DBGRNT_SDMMC_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.SDMMC */
#define IFX_SBCU_DBGRNT_SDMMC_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.SDMMC */
#define IFX_SBCU_DBGRNT_SDMMC_OFF (2u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.HSSL0 */
#define IFX_SBCU_DBGRNT_HSSL0_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.HSSL0 */
#define IFX_SBCU_DBGRNT_HSSL0_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.HSSL0 */
#define IFX_SBCU_DBGRNT_HSSL0_OFF (3u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.HSSL1 */
#define IFX_SBCU_DBGRNT_HSSL1_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.HSSL1 */
#define IFX_SBCU_DBGRNT_HSSL1_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.HSSL1 */
#define IFX_SBCU_DBGRNT_HSSL1_OFF (4u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.CPU0 */
#define IFX_SBCU_DBGRNT_CPU0_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.CPU0 */
#define IFX_SBCU_DBGRNT_CPU0_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.CPU0 */
#define IFX_SBCU_DBGRNT_CPU0_OFF (6u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.CPU1 */
#define IFX_SBCU_DBGRNT_CPU1_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.CPU1 */
#define IFX_SBCU_DBGRNT_CPU1_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.CPU1 */
#define IFX_SBCU_DBGRNT_CPU1_OFF (7u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.CPU2 */
#define IFX_SBCU_DBGRNT_CPU2_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.CPU2 */
#define IFX_SBCU_DBGRNT_CPU2_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.CPU2 */
#define IFX_SBCU_DBGRNT_CPU2_OFF (8u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.CPU3 */
#define IFX_SBCU_DBGRNT_CPU3_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.CPU3 */
#define IFX_SBCU_DBGRNT_CPU3_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.CPU3 */
#define IFX_SBCU_DBGRNT_CPU3_OFF (9u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.CPU4 */
#define IFX_SBCU_DBGRNT_CPU4_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.CPU4 */
#define IFX_SBCU_DBGRNT_CPU4_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.CPU4 */
#define IFX_SBCU_DBGRNT_CPU4_OFF (10u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.CPU5 */
#define IFX_SBCU_DBGRNT_CPU5_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.CPU5 */
#define IFX_SBCU_DBGRNT_CPU5_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.CPU5 */
#define IFX_SBCU_DBGRNT_CPU5_OFF (11u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.HSMRMI */
#define IFX_SBCU_DBGRNT_HSMRMI_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.HSMRMI */
#define IFX_SBCU_DBGRNT_HSMRMI_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.HSMRMI */
#define IFX_SBCU_DBGRNT_HSMRMI_OFF (12u)

/** \brief Length for Ifx_SBCU_DBGRNT_Bits.HSMCMI */
#define IFX_SBCU_DBGRNT_HSMCMI_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGRNT_Bits.HSMCMI */
#define IFX_SBCU_DBGRNT_HSMCMI_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGRNT_Bits.HSMCMI */
#define IFX_SBCU_DBGRNT_HSMCMI_OFF (13u)

/** \brief Length for Ifx_SBCU_DBADR1_Bits.ADR1 */
#define IFX_SBCU_DBADR1_ADR1_LEN (32u)

/** \brief Mask for Ifx_SBCU_DBADR1_Bits.ADR1 */
#define IFX_SBCU_DBADR1_ADR1_MSK (0xffffffffu)

/** \brief Offset for Ifx_SBCU_DBADR1_Bits.ADR1 */
#define IFX_SBCU_DBADR1_ADR1_OFF (0u)

/** \brief Length for Ifx_SBCU_DBADR2_Bits.ADR2 */
#define IFX_SBCU_DBADR2_ADR2_LEN (32u)

/** \brief Mask for Ifx_SBCU_DBADR2_Bits.ADR2 */
#define IFX_SBCU_DBADR2_ADR2_MSK (0xffffffffu)

/** \brief Offset for Ifx_SBCU_DBADR2_Bits.ADR2 */
#define IFX_SBCU_DBADR2_ADR2_OFF (0u)

/** \brief Length for Ifx_SBCU_DBBOS_Bits.OPC */
#define IFX_SBCU_DBBOS_OPC_LEN (4u)

/** \brief Mask for Ifx_SBCU_DBBOS_Bits.OPC */
#define IFX_SBCU_DBBOS_OPC_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_DBBOS_Bits.OPC */
#define IFX_SBCU_DBBOS_OPC_OFF (0u)

/** \brief Length for Ifx_SBCU_DBBOS_Bits.SVM */
#define IFX_SBCU_DBBOS_SVM_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOS_Bits.SVM */
#define IFX_SBCU_DBBOS_SVM_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOS_Bits.SVM */
#define IFX_SBCU_DBBOS_SVM_OFF (4u)

/** \brief Length for Ifx_SBCU_DBBOS_Bits.WR */
#define IFX_SBCU_DBBOS_WR_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOS_Bits.WR */
#define IFX_SBCU_DBBOS_WR_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOS_Bits.WR */
#define IFX_SBCU_DBBOS_WR_OFF (8u)

/** \brief Length for Ifx_SBCU_DBBOS_Bits.RD */
#define IFX_SBCU_DBBOS_RD_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOS_Bits.RD */
#define IFX_SBCU_DBBOS_RD_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOS_Bits.RD */
#define IFX_SBCU_DBBOS_RD_OFF (12u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.SFI_S2F */
#define IFX_SBCU_DBGNTT_SFI_S2F_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.SFI_S2F */
#define IFX_SBCU_DBGNTT_SFI_S2F_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.SFI_S2F */
#define IFX_SBCU_DBGNTT_SFI_S2F_OFF (0u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.SDMMC */
#define IFX_SBCU_DBGNTT_SDMMC_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.SDMMC */
#define IFX_SBCU_DBGNTT_SDMMC_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.SDMMC */
#define IFX_SBCU_DBGNTT_SDMMC_OFF (2u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.HSSL0 */
#define IFX_SBCU_DBGNTT_HSSL0_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.HSSL0 */
#define IFX_SBCU_DBGNTT_HSSL0_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.HSSL0 */
#define IFX_SBCU_DBGNTT_HSSL0_OFF (3u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.HSSL1 */
#define IFX_SBCU_DBGNTT_HSSL1_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.HSSL1 */
#define IFX_SBCU_DBGNTT_HSSL1_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.HSSL1 */
#define IFX_SBCU_DBGNTT_HSSL1_OFF (4u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.CPU0 */
#define IFX_SBCU_DBGNTT_CPU0_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.CPU0 */
#define IFX_SBCU_DBGNTT_CPU0_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.CPU0 */
#define IFX_SBCU_DBGNTT_CPU0_OFF (6u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.CPU1 */
#define IFX_SBCU_DBGNTT_CPU1_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.CPU1 */
#define IFX_SBCU_DBGNTT_CPU1_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.CPU1 */
#define IFX_SBCU_DBGNTT_CPU1_OFF (7u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.CPU2 */
#define IFX_SBCU_DBGNTT_CPU2_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.CPU2 */
#define IFX_SBCU_DBGNTT_CPU2_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.CPU2 */
#define IFX_SBCU_DBGNTT_CPU2_OFF (8u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.CPU3 */
#define IFX_SBCU_DBGNTT_CPU3_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.CPU3 */
#define IFX_SBCU_DBGNTT_CPU3_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.CPU3 */
#define IFX_SBCU_DBGNTT_CPU3_OFF (9u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.CPU4 */
#define IFX_SBCU_DBGNTT_CPU4_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.CPU4 */
#define IFX_SBCU_DBGNTT_CPU4_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.CPU4 */
#define IFX_SBCU_DBGNTT_CPU4_OFF (10u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.CPU5 */
#define IFX_SBCU_DBGNTT_CPU5_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.CPU5 */
#define IFX_SBCU_DBGNTT_CPU5_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.CPU5 */
#define IFX_SBCU_DBGNTT_CPU5_OFF (11u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.HSMRMI */
#define IFX_SBCU_DBGNTT_HSMRMI_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.HSMRMI */
#define IFX_SBCU_DBGNTT_HSMRMI_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.HSMRMI */
#define IFX_SBCU_DBGNTT_HSMRMI_OFF (12u)

/** \brief Length for Ifx_SBCU_DBGNTT_Bits.HSMCMI */
#define IFX_SBCU_DBGNTT_HSMCMI_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBGNTT_Bits.HSMCMI */
#define IFX_SBCU_DBGNTT_HSMCMI_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBGNTT_Bits.HSMCMI */
#define IFX_SBCU_DBGNTT_HSMCMI_OFF (13u)

/** \brief Length for Ifx_SBCU_DBADRT_Bits.FPIADR */
#define IFX_SBCU_DBADRT_FPIADR_LEN (32u)

/** \brief Mask for Ifx_SBCU_DBADRT_Bits.FPIADR */
#define IFX_SBCU_DBADRT_FPIADR_MSK (0xffffffffu)

/** \brief Offset for Ifx_SBCU_DBADRT_Bits.FPIADR */
#define IFX_SBCU_DBADRT_FPIADR_OFF (0u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPIOPC */
#define IFX_SBCU_DBBOST_FPIOPC_LEN (4u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPIOPC */
#define IFX_SBCU_DBBOST_FPIOPC_MSK (0xfu)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPIOPC */
#define IFX_SBCU_DBBOST_FPIOPC_OFF (0u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPISVM */
#define IFX_SBCU_DBBOST_FPISVM_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPISVM */
#define IFX_SBCU_DBBOST_FPISVM_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPISVM */
#define IFX_SBCU_DBBOST_FPISVM_OFF (4u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPIACK */
#define IFX_SBCU_DBBOST_FPIACK_LEN (2u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPIACK */
#define IFX_SBCU_DBBOST_FPIACK_MSK (0x3u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPIACK */
#define IFX_SBCU_DBBOST_FPIACK_OFF (5u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPIRDY */
#define IFX_SBCU_DBBOST_FPIRDY_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPIRDY */
#define IFX_SBCU_DBBOST_FPIRDY_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPIRDY */
#define IFX_SBCU_DBBOST_FPIRDY_OFF (7u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPIWR */
#define IFX_SBCU_DBBOST_FPIWR_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPIWR */
#define IFX_SBCU_DBBOST_FPIWR_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPIWR */
#define IFX_SBCU_DBBOST_FPIWR_OFF (8u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPIRST */
#define IFX_SBCU_DBBOST_FPIRST_LEN (2u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPIRST */
#define IFX_SBCU_DBBOST_FPIRST_MSK (0x3u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPIRST */
#define IFX_SBCU_DBBOST_FPIRST_OFF (9u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPIOPS */
#define IFX_SBCU_DBBOST_FPIOPS_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPIOPS */
#define IFX_SBCU_DBBOST_FPIOPS_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPIOPS */
#define IFX_SBCU_DBBOST_FPIOPS_OFF (11u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPIRD */
#define IFX_SBCU_DBBOST_FPIRD_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPIRD */
#define IFX_SBCU_DBBOST_FPIRD_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPIRD */
#define IFX_SBCU_DBBOST_FPIRD_OFF (12u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPIABORT */
#define IFX_SBCU_DBBOST_FPIABORT_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPIABORT */
#define IFX_SBCU_DBBOST_FPIABORT_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPIABORT */
#define IFX_SBCU_DBBOST_FPIABORT_OFF (13u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPITOUT */
#define IFX_SBCU_DBBOST_FPITOUT_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPITOUT */
#define IFX_SBCU_DBBOST_FPITOUT_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPITOUT */
#define IFX_SBCU_DBBOST_FPITOUT_OFF (14u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.ENDINIT */
#define IFX_SBCU_DBBOST_ENDINIT_LEN (1u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.ENDINIT */
#define IFX_SBCU_DBBOST_ENDINIT_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.ENDINIT */
#define IFX_SBCU_DBBOST_ENDINIT_OFF (15u)

/** \brief Length for Ifx_SBCU_DBBOST_Bits.FPITAG */
#define IFX_SBCU_DBBOST_FPITAG_LEN (6u)

/** \brief Mask for Ifx_SBCU_DBBOST_Bits.FPITAG */
#define IFX_SBCU_DBBOST_FPITAG_MSK (0x3fu)

/** \brief Offset for Ifx_SBCU_DBBOST_Bits.FPITAG */
#define IFX_SBCU_DBBOST_FPITAG_OFF (16u)

/** \brief Length for Ifx_SBCU_DBDAT_Bits.FPIDATA */
#define IFX_SBCU_DBDAT_FPIDATA_LEN (32u)

/** \brief Mask for Ifx_SBCU_DBDAT_Bits.FPIDATA */
#define IFX_SBCU_DBDAT_FPIDATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_SBCU_DBDAT_Bits.FPIDATA */
#define IFX_SBCU_DBDAT_FPIDATA_OFF (0u)

/** \brief Length for Ifx_SBCU_ALSTAT0_Bits.SBCU_S */
#define IFX_SBCU_ALSTAT0_SBCU_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT0_Bits.SBCU_S */
#define IFX_SBCU_ALSTAT0_SBCU_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT0_Bits.SBCU_S */
#define IFX_SBCU_ALSTAT0_SBCU_S_OFF (0u)

/** \brief Length for Ifx_SBCU_ALSTAT0_Bits.CERBERUS_S */
#define IFX_SBCU_ALSTAT0_CERBERUS_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT0_Bits.CERBERUS_S */
#define IFX_SBCU_ALSTAT0_CERBERUS_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT0_Bits.CERBERUS_S */
#define IFX_SBCU_ALSTAT0_CERBERUS_S_OFF (1u)

/** \brief Length for Ifx_SBCU_ALSTAT0_Bits.IR_S */
#define IFX_SBCU_ALSTAT0_IR_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT0_Bits.IR_S */
#define IFX_SBCU_ALSTAT0_IR_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT0_Bits.IR_S */
#define IFX_SBCU_ALSTAT0_IR_S_OFF (2u)

/** \brief Length for Ifx_SBCU_ALSTAT0_Bits.SFI_F2S_S */
#define IFX_SBCU_ALSTAT0_SFI_F2S_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT0_Bits.SFI_F2S_S */
#define IFX_SBCU_ALSTAT0_SFI_F2S_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT0_Bits.SFI_F2S_S */
#define IFX_SBCU_ALSTAT0_SFI_F2S_S_OFF (3u)

/** \brief Length for Ifx_SBCU_ALSTAT0_Bits.SCU_S */
#define IFX_SBCU_ALSTAT0_SCU_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT0_Bits.SCU_S */
#define IFX_SBCU_ALSTAT0_SCU_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT0_Bits.SCU_S */
#define IFX_SBCU_ALSTAT0_SCU_S_OFF (4u)

/** \brief Length for Ifx_SBCU_ALSTAT0_Bits.SMU_S */
#define IFX_SBCU_ALSTAT0_SMU_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT0_Bits.SMU_S */
#define IFX_SBCU_ALSTAT0_SMU_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT0_Bits.SMU_S */
#define IFX_SBCU_ALSTAT0_SMU_S_OFF (5u)

/** \brief Length for Ifx_SBCU_ALSTAT0_Bits.PMC_S */
#define IFX_SBCU_ALSTAT0_PMC_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT0_Bits.PMC_S */
#define IFX_SBCU_ALSTAT0_PMC_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT0_Bits.PMC_S */
#define IFX_SBCU_ALSTAT0_PMC_S_OFF (6u)

/** \brief Length for Ifx_SBCU_ALSTAT0_Bits.MTU_S */
#define IFX_SBCU_ALSTAT0_MTU_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT0_Bits.MTU_S */
#define IFX_SBCU_ALSTAT0_MTU_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT0_Bits.MTU_S */
#define IFX_SBCU_ALSTAT0_MTU_S_OFF (7u)

/** \brief Length for Ifx_SBCU_ALSTAT1_Bits.EVADC_S */
#define IFX_SBCU_ALSTAT1_EVADC_S_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT1_Bits.EVADC_S */
#define IFX_SBCU_ALSTAT1_EVADC_S_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT1_Bits.EVADC_S */
#define IFX_SBCU_ALSTAT1_EVADC_S_OFF (9u)

/** \brief Length for Ifx_SBCU_ALSTAT2_Bits.SBCU_M */
#define IFX_SBCU_ALSTAT2_SBCU_M_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT2_Bits.SBCU_M */
#define IFX_SBCU_ALSTAT2_SBCU_M_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT2_Bits.SBCU_M */
#define IFX_SBCU_ALSTAT2_SBCU_M_OFF (31u)

/** \brief Length for Ifx_SBCU_ALSTAT3_Bits.A_EN */
#define IFX_SBCU_ALSTAT3_A_EN_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT3_Bits.A_EN */
#define IFX_SBCU_ALSTAT3_A_EN_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT3_Bits.A_EN */
#define IFX_SBCU_ALSTAT3_A_EN_OFF (0u)

/** \brief Length for Ifx_SBCU_ALSTAT3_Bits.ABORT_EN */
#define IFX_SBCU_ALSTAT3_ABORT_EN_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT3_Bits.ABORT_EN */
#define IFX_SBCU_ALSTAT3_ABORT_EN_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT3_Bits.ABORT_EN */
#define IFX_SBCU_ALSTAT3_ABORT_EN_OFF (1u)

/** \brief Length for Ifx_SBCU_ALSTAT3_Bits.ACK_EN */
#define IFX_SBCU_ALSTAT3_ACK_EN_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT3_Bits.ACK_EN */
#define IFX_SBCU_ALSTAT3_ACK_EN_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT3_Bits.ACK_EN */
#define IFX_SBCU_ALSTAT3_ACK_EN_OFF (2u)

/** \brief Length for Ifx_SBCU_ALSTAT3_Bits.D_EN */
#define IFX_SBCU_ALSTAT3_D_EN_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT3_Bits.D_EN */
#define IFX_SBCU_ALSTAT3_D_EN_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT3_Bits.D_EN */
#define IFX_SBCU_ALSTAT3_D_EN_OFF (3u)

/** \brief Length for Ifx_SBCU_ALSTAT3_Bits.SFI_S2F */
#define IFX_SBCU_ALSTAT3_SFI_S2F_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT3_Bits.SFI_S2F */
#define IFX_SBCU_ALSTAT3_SFI_S2F_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT3_Bits.SFI_S2F */
#define IFX_SBCU_ALSTAT3_SFI_S2F_OFF (16u)

/** \brief Length for Ifx_SBCU_ALSTAT3_Bits.CPU0_M */
#define IFX_SBCU_ALSTAT3_CPU0_M_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALSTAT3_Bits.CPU0_M */
#define IFX_SBCU_ALSTAT3_CPU0_M_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALSTAT3_Bits.CPU0_M */
#define IFX_SBCU_ALSTAT3_CPU0_M_OFF (22u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR0 */
#define IFX_SBCU_ALCLR_CLR0_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR0 */
#define IFX_SBCU_ALCLR_CLR0_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR0 */
#define IFX_SBCU_ALCLR_CLR0_OFF (0u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR1 */
#define IFX_SBCU_ALCLR_CLR1_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR1 */
#define IFX_SBCU_ALCLR_CLR1_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR1 */
#define IFX_SBCU_ALCLR_CLR1_OFF (1u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR2 */
#define IFX_SBCU_ALCLR_CLR2_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR2 */
#define IFX_SBCU_ALCLR_CLR2_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR2 */
#define IFX_SBCU_ALCLR_CLR2_OFF (2u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR3 */
#define IFX_SBCU_ALCLR_CLR3_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR3 */
#define IFX_SBCU_ALCLR_CLR3_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR3 */
#define IFX_SBCU_ALCLR_CLR3_OFF (3u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR4 */
#define IFX_SBCU_ALCLR_CLR4_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR4 */
#define IFX_SBCU_ALCLR_CLR4_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR4 */
#define IFX_SBCU_ALCLR_CLR4_OFF (4u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR5 */
#define IFX_SBCU_ALCLR_CLR5_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR5 */
#define IFX_SBCU_ALCLR_CLR5_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR5 */
#define IFX_SBCU_ALCLR_CLR5_OFF (5u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR6 */
#define IFX_SBCU_ALCLR_CLR6_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR6 */
#define IFX_SBCU_ALCLR_CLR6_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR6 */
#define IFX_SBCU_ALCLR_CLR6_OFF (6u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR7 */
#define IFX_SBCU_ALCLR_CLR7_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR7 */
#define IFX_SBCU_ALCLR_CLR7_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR7 */
#define IFX_SBCU_ALCLR_CLR7_OFF (7u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR8 */
#define IFX_SBCU_ALCLR_CLR8_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR8 */
#define IFX_SBCU_ALCLR_CLR8_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR8 */
#define IFX_SBCU_ALCLR_CLR8_OFF (8u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR9 */
#define IFX_SBCU_ALCLR_CLR9_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR9 */
#define IFX_SBCU_ALCLR_CLR9_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR9 */
#define IFX_SBCU_ALCLR_CLR9_OFF (9u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR10 */
#define IFX_SBCU_ALCLR_CLR10_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR10 */
#define IFX_SBCU_ALCLR_CLR10_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR10 */
#define IFX_SBCU_ALCLR_CLR10_OFF (10u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR11 */
#define IFX_SBCU_ALCLR_CLR11_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR11 */
#define IFX_SBCU_ALCLR_CLR11_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR11 */
#define IFX_SBCU_ALCLR_CLR11_OFF (11u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR12 */
#define IFX_SBCU_ALCLR_CLR12_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR12 */
#define IFX_SBCU_ALCLR_CLR12_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR12 */
#define IFX_SBCU_ALCLR_CLR12_OFF (12u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR13 */
#define IFX_SBCU_ALCLR_CLR13_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR13 */
#define IFX_SBCU_ALCLR_CLR13_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR13 */
#define IFX_SBCU_ALCLR_CLR13_OFF (13u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR14 */
#define IFX_SBCU_ALCLR_CLR14_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR14 */
#define IFX_SBCU_ALCLR_CLR14_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR14 */
#define IFX_SBCU_ALCLR_CLR14_OFF (14u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR15 */
#define IFX_SBCU_ALCLR_CLR15_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR15 */
#define IFX_SBCU_ALCLR_CLR15_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR15 */
#define IFX_SBCU_ALCLR_CLR15_OFF (15u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR16 */
#define IFX_SBCU_ALCLR_CLR16_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR16 */
#define IFX_SBCU_ALCLR_CLR16_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR16 */
#define IFX_SBCU_ALCLR_CLR16_OFF (16u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR17 */
#define IFX_SBCU_ALCLR_CLR17_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR17 */
#define IFX_SBCU_ALCLR_CLR17_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR17 */
#define IFX_SBCU_ALCLR_CLR17_OFF (17u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR18 */
#define IFX_SBCU_ALCLR_CLR18_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR18 */
#define IFX_SBCU_ALCLR_CLR18_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR18 */
#define IFX_SBCU_ALCLR_CLR18_OFF (18u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR19 */
#define IFX_SBCU_ALCLR_CLR19_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR19 */
#define IFX_SBCU_ALCLR_CLR19_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR19 */
#define IFX_SBCU_ALCLR_CLR19_OFF (19u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR20 */
#define IFX_SBCU_ALCLR_CLR20_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR20 */
#define IFX_SBCU_ALCLR_CLR20_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR20 */
#define IFX_SBCU_ALCLR_CLR20_OFF (20u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR21 */
#define IFX_SBCU_ALCLR_CLR21_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR21 */
#define IFX_SBCU_ALCLR_CLR21_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR21 */
#define IFX_SBCU_ALCLR_CLR21_OFF (21u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR22 */
#define IFX_SBCU_ALCLR_CLR22_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR22 */
#define IFX_SBCU_ALCLR_CLR22_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR22 */
#define IFX_SBCU_ALCLR_CLR22_OFF (22u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR23 */
#define IFX_SBCU_ALCLR_CLR23_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR23 */
#define IFX_SBCU_ALCLR_CLR23_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR23 */
#define IFX_SBCU_ALCLR_CLR23_OFF (23u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR24 */
#define IFX_SBCU_ALCLR_CLR24_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR24 */
#define IFX_SBCU_ALCLR_CLR24_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR24 */
#define IFX_SBCU_ALCLR_CLR24_OFF (24u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR25 */
#define IFX_SBCU_ALCLR_CLR25_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR25 */
#define IFX_SBCU_ALCLR_CLR25_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR25 */
#define IFX_SBCU_ALCLR_CLR25_OFF (25u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR26 */
#define IFX_SBCU_ALCLR_CLR26_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR26 */
#define IFX_SBCU_ALCLR_CLR26_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR26 */
#define IFX_SBCU_ALCLR_CLR26_OFF (26u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR27 */
#define IFX_SBCU_ALCLR_CLR27_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR27 */
#define IFX_SBCU_ALCLR_CLR27_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR27 */
#define IFX_SBCU_ALCLR_CLR27_OFF (27u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR28 */
#define IFX_SBCU_ALCLR_CLR28_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR28 */
#define IFX_SBCU_ALCLR_CLR28_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR28 */
#define IFX_SBCU_ALCLR_CLR28_OFF (28u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR29 */
#define IFX_SBCU_ALCLR_CLR29_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR29 */
#define IFX_SBCU_ALCLR_CLR29_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR29 */
#define IFX_SBCU_ALCLR_CLR29_OFF (29u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR30 */
#define IFX_SBCU_ALCLR_CLR30_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR30 */
#define IFX_SBCU_ALCLR_CLR30_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR30 */
#define IFX_SBCU_ALCLR_CLR30_OFF (30u)

/** \brief Length for Ifx_SBCU_ALCLR_Bits.CLR31 */
#define IFX_SBCU_ALCLR_CLR31_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCLR_Bits.CLR31 */
#define IFX_SBCU_ALCLR_CLR31_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCLR_Bits.CLR31 */
#define IFX_SBCU_ALCLR_CLR31_OFF (31u)

/** \brief Length for Ifx_SBCU_ALCTRL_Bits.ALOV */
#define IFX_SBCU_ALCTRL_ALOV_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCTRL_Bits.ALOV */
#define IFX_SBCU_ALCTRL_ALOV_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCTRL_Bits.ALOV */
#define IFX_SBCU_ALCTRL_ALOV_OFF (0u)

/** \brief Length for Ifx_SBCU_ALCTRL_Bits.ALOVCLR */
#define IFX_SBCU_ALCTRL_ALOVCLR_LEN (1u)

/** \brief Mask for Ifx_SBCU_ALCTRL_Bits.ALOVCLR */
#define IFX_SBCU_ALCTRL_ALOVCLR_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ALCTRL_Bits.ALOVCLR */
#define IFX_SBCU_ALCTRL_ALOVCLR_OFF (1u)

/** \brief Length for Ifx_SBCU_FEGEN_Bits.SEDM */
#define IFX_SBCU_FEGEN_SEDM_LEN (3u)

/** \brief Mask for Ifx_SBCU_FEGEN_Bits.SEDM */
#define IFX_SBCU_FEGEN_SEDM_MSK (0x7u)

/** \brief Offset for Ifx_SBCU_FEGEN_Bits.SEDM */
#define IFX_SBCU_FEGEN_SEDM_OFF (0u)

/** \brief Length for Ifx_SBCU_FEGEN_Bits.MEDM */
#define IFX_SBCU_FEGEN_MEDM_LEN (3u)

/** \brief Mask for Ifx_SBCU_FEGEN_Bits.MEDM */
#define IFX_SBCU_FEGEN_MEDM_MSK (0x7u)

/** \brief Offset for Ifx_SBCU_FEGEN_Bits.MEDM */
#define IFX_SBCU_FEGEN_MEDM_OFF (8u)

/** \brief Length for Ifx_SBCU_FEGEN_Bits.EN */
#define IFX_SBCU_FEGEN_EN_LEN (3u)

/** \brief Mask for Ifx_SBCU_FEGEN_Bits.EN */
#define IFX_SBCU_FEGEN_EN_MSK (0x7u)

/** \brief Offset for Ifx_SBCU_FEGEN_Bits.EN */
#define IFX_SBCU_FEGEN_EN_OFF (16u)

/** \brief Length for Ifx_SBCU_FEGEN_Bits.BCU */
#define IFX_SBCU_FEGEN_BCU_LEN (2u)

/** \brief Mask for Ifx_SBCU_FEGEN_Bits.BCU */
#define IFX_SBCU_FEGEN_BCU_MSK (0x3u)

/** \brief Offset for Ifx_SBCU_FEGEN_Bits.BCU */
#define IFX_SBCU_FEGEN_BCU_OFF (24u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN0 */
#define IFX_SBCU_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN0 */
#define IFX_SBCU_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN0 */
#define IFX_SBCU_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN1 */
#define IFX_SBCU_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN1 */
#define IFX_SBCU_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN1 */
#define IFX_SBCU_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN2 */
#define IFX_SBCU_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN2 */
#define IFX_SBCU_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN2 */
#define IFX_SBCU_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN3 */
#define IFX_SBCU_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN3 */
#define IFX_SBCU_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN3 */
#define IFX_SBCU_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN4 */
#define IFX_SBCU_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN4 */
#define IFX_SBCU_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN4 */
#define IFX_SBCU_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN5 */
#define IFX_SBCU_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN5 */
#define IFX_SBCU_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN5 */
#define IFX_SBCU_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN6 */
#define IFX_SBCU_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN6 */
#define IFX_SBCU_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN6 */
#define IFX_SBCU_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN7 */
#define IFX_SBCU_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN7 */
#define IFX_SBCU_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN7 */
#define IFX_SBCU_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN8 */
#define IFX_SBCU_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN8 */
#define IFX_SBCU_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN8 */
#define IFX_SBCU_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN9 */
#define IFX_SBCU_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN9 */
#define IFX_SBCU_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN9 */
#define IFX_SBCU_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN10 */
#define IFX_SBCU_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN10 */
#define IFX_SBCU_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN10 */
#define IFX_SBCU_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN11 */
#define IFX_SBCU_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN11 */
#define IFX_SBCU_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN11 */
#define IFX_SBCU_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN12 */
#define IFX_SBCU_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN12 */
#define IFX_SBCU_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN12 */
#define IFX_SBCU_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN13 */
#define IFX_SBCU_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN13 */
#define IFX_SBCU_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN13 */
#define IFX_SBCU_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN14 */
#define IFX_SBCU_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN14 */
#define IFX_SBCU_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN14 */
#define IFX_SBCU_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN15 */
#define IFX_SBCU_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN15 */
#define IFX_SBCU_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN15 */
#define IFX_SBCU_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN16 */
#define IFX_SBCU_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN16 */
#define IFX_SBCU_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN16 */
#define IFX_SBCU_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN17 */
#define IFX_SBCU_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN17 */
#define IFX_SBCU_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN17 */
#define IFX_SBCU_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN18 */
#define IFX_SBCU_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN18 */
#define IFX_SBCU_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN18 */
#define IFX_SBCU_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN19 */
#define IFX_SBCU_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN19 */
#define IFX_SBCU_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN19 */
#define IFX_SBCU_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN20 */
#define IFX_SBCU_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN20 */
#define IFX_SBCU_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN20 */
#define IFX_SBCU_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN21 */
#define IFX_SBCU_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN21 */
#define IFX_SBCU_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN21 */
#define IFX_SBCU_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN22 */
#define IFX_SBCU_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN22 */
#define IFX_SBCU_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN22 */
#define IFX_SBCU_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN23 */
#define IFX_SBCU_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN23 */
#define IFX_SBCU_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN23 */
#define IFX_SBCU_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN24 */
#define IFX_SBCU_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN24 */
#define IFX_SBCU_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN24 */
#define IFX_SBCU_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN25 */
#define IFX_SBCU_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN25 */
#define IFX_SBCU_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN25 */
#define IFX_SBCU_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN26 */
#define IFX_SBCU_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN26 */
#define IFX_SBCU_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN26 */
#define IFX_SBCU_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN27 */
#define IFX_SBCU_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN27 */
#define IFX_SBCU_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN27 */
#define IFX_SBCU_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN28 */
#define IFX_SBCU_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN28 */
#define IFX_SBCU_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN28 */
#define IFX_SBCU_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN29 */
#define IFX_SBCU_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN29 */
#define IFX_SBCU_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN29 */
#define IFX_SBCU_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN30 */
#define IFX_SBCU_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN30 */
#define IFX_SBCU_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN30 */
#define IFX_SBCU_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_SBCU_ACCEN0_Bits.EN31 */
#define IFX_SBCU_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_SBCU_ACCEN0_Bits.EN31 */
#define IFX_SBCU_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_SBCU_ACCEN0_Bits.EN31 */
#define IFX_SBCU_ACCEN0_EN31_OFF (31u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSBCU_BF_H */
