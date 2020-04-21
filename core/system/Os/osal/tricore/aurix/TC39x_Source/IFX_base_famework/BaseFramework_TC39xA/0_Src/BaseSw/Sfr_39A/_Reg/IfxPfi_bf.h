/**
 * \file IfxPfi_bf.h
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
 * \defgroup IfxLld_Pfi_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxLld_Pfi
 * 
 */
#ifndef IFXPFI_BF_H
#define IFXPFI_BF_H 1
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Pfi_BitfieldsMask
 * \{  */

/** \brief  Length for Ifx_PFI_DBABRECORD_Bits.ADDR */
#define IFX_PFI_DBABRECORD_ADDR_LEN (23u)

/** \brief  Mask for Ifx_PFI_DBABRECORD_Bits.ADDR */
#define IFX_PFI_DBABRECORD_ADDR_MSK (0x7fffffu)

/** \brief  Offset for Ifx_PFI_DBABRECORD_Bits.ADDR */
#define IFX_PFI_DBABRECORD_ADDR_OFF (5u)

/** \brief  Length for Ifx_PFI_DBABRECORD_Bits.VLD */
#define IFX_PFI_DBABRECORD_VLD_LEN (1u)

/** \brief  Mask for Ifx_PFI_DBABRECORD_Bits.VLD */
#define IFX_PFI_DBABRECORD_VLD_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_DBABRECORD_Bits.VLD */
#define IFX_PFI_DBABRECORD_VLD_OFF (31u)

/** \brief  Length for Ifx_PFI_ECCR_Bits.RCODE */
#define IFX_PFI_ECCR_RCODE_LEN (22u)

/** \brief  Mask for Ifx_PFI_ECCR_Bits.RCODE */
#define IFX_PFI_ECCR_RCODE_MSK (0x3fffffu)

/** \brief  Offset for Ifx_PFI_ECCR_Bits.RCODE */
#define IFX_PFI_ECCR_RCODE_OFF (0u)

/** \brief  Length for Ifx_PFI_ECCR_Bits.RED */
#define IFX_PFI_ECCR_RED_LEN (2u)

/** \brief  Mask for Ifx_PFI_ECCR_Bits.RED */
#define IFX_PFI_ECCR_RED_MSK (0x3u)

/** \brief  Offset for Ifx_PFI_ECCR_Bits.RED */
#define IFX_PFI_ECCR_RED_OFF (22u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.AAL0 */
#define IFX_PFI_ECCS_AAL0_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.AAL0 */
#define IFX_PFI_ECCS_AAL0_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.AAL0 */
#define IFX_PFI_ECCS_AAL0_OFF (21u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.AAL1 */
#define IFX_PFI_ECCS_AAL1_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.AAL1 */
#define IFX_PFI_ECCS_AAL1_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.AAL1 */
#define IFX_PFI_ECCS_AAL1_OFF (22u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.AER1 */
#define IFX_PFI_ECCS_AER1_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.AER1 */
#define IFX_PFI_ECCS_AER1_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.AER1 */
#define IFX_PFI_ECCS_AER1_OFF (16u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.AER2 */
#define IFX_PFI_ECCS_AER2_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.AER2 */
#define IFX_PFI_ECCS_AER2_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.AER2 */
#define IFX_PFI_ECCS_AER2_OFF (17u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.AERANY */
#define IFX_PFI_ECCS_AERANY_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.AERANY */
#define IFX_PFI_ECCS_AERANY_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.AERANY */
#define IFX_PFI_ECCS_AERANY_OFF (23u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.AERM */
#define IFX_PFI_ECCS_AERM_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.AERM */
#define IFX_PFI_ECCS_AERM_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.AERM */
#define IFX_PFI_ECCS_AERM_OFF (19u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.ALL0 */
#define IFX_PFI_ECCS_ALL0_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.ALL0 */
#define IFX_PFI_ECCS_ALL0_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.ALL0 */
#define IFX_PFI_ECCS_ALL0_OFF (5u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.ALL1 */
#define IFX_PFI_ECCS_ALL1_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.ALL1 */
#define IFX_PFI_ECCS_ALL1_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.ALL1 */
#define IFX_PFI_ECCS_ALL1_OFF (6u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.ARRA */
#define IFX_PFI_ECCS_ARRA_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.ARRA */
#define IFX_PFI_ECCS_ARRA_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.ARRA */
#define IFX_PFI_ECCS_ARRA_OFF (20u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.ERR1 */
#define IFX_PFI_ECCS_ERR1_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.ERR1 */
#define IFX_PFI_ECCS_ERR1_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.ERR1 */
#define IFX_PFI_ECCS_ERR1_OFF (0u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.ERR2 */
#define IFX_PFI_ECCS_ERR2_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.ERR2 */
#define IFX_PFI_ECCS_ERR2_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.ERR2 */
#define IFX_PFI_ECCS_ERR2_OFF (1u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.ERRA */
#define IFX_PFI_ECCS_ERRA_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.ERRA */
#define IFX_PFI_ECCS_ERRA_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.ERRA */
#define IFX_PFI_ECCS_ERRA_OFF (4u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.ERRANY */
#define IFX_PFI_ECCS_ERRANY_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.ERRANY */
#define IFX_PFI_ECCS_ERRANY_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.ERRANY */
#define IFX_PFI_ECCS_ERRANY_OFF (7u)

/** \brief  Length for Ifx_PFI_ECCS_Bits.ERRM */
#define IFX_PFI_ECCS_ERRM_LEN (1u)

/** \brief  Mask for Ifx_PFI_ECCS_Bits.ERRM */
#define IFX_PFI_ECCS_ERRM_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ECCS_Bits.ERRM */
#define IFX_PFI_ECCS_ERRM_OFF (3u)

/** \brief  Length for Ifx_PFI_MBABRECORD_Bits.ADDR */
#define IFX_PFI_MBABRECORD_ADDR_LEN (23u)

/** \brief  Mask for Ifx_PFI_MBABRECORD_Bits.ADDR */
#define IFX_PFI_MBABRECORD_ADDR_MSK (0x7fffffu)

/** \brief  Offset for Ifx_PFI_MBABRECORD_Bits.ADDR */
#define IFX_PFI_MBABRECORD_ADDR_OFF (5u)

/** \brief  Length for Ifx_PFI_MBABRECORD_Bits.VLD */
#define IFX_PFI_MBABRECORD_VLD_LEN (1u)

/** \brief  Mask for Ifx_PFI_MBABRECORD_Bits.VLD */
#define IFX_PFI_MBABRECORD_VLD_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_MBABRECORD_Bits.VLD */
#define IFX_PFI_MBABRECORD_VLD_OFF (31u)

/** \brief  Length for Ifx_PFI_SBABRECORD_Bits.ADDR */
#define IFX_PFI_SBABRECORD_ADDR_LEN (23u)

/** \brief  Mask for Ifx_PFI_SBABRECORD_Bits.ADDR */
#define IFX_PFI_SBABRECORD_ADDR_MSK (0x7fffffu)

/** \brief  Offset for Ifx_PFI_SBABRECORD_Bits.ADDR */
#define IFX_PFI_SBABRECORD_ADDR_OFF (5u)

/** \brief  Length for Ifx_PFI_SBABRECORD_Bits.VLD */
#define IFX_PFI_SBABRECORD_VLD_LEN (1u)

/** \brief  Mask for Ifx_PFI_SBABRECORD_Bits.VLD */
#define IFX_PFI_SBABRECORD_VLD_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_SBABRECORD_Bits.VLD */
#define IFX_PFI_SBABRECORD_VLD_OFF (31u)

/** \brief  Length for Ifx_PFI_ZBABRECORD_Bits.ADDR */
#define IFX_PFI_ZBABRECORD_ADDR_LEN (23u)

/** \brief  Mask for Ifx_PFI_ZBABRECORD_Bits.ADDR */
#define IFX_PFI_ZBABRECORD_ADDR_MSK (0x7fffffu)

/** \brief  Offset for Ifx_PFI_ZBABRECORD_Bits.ADDR */
#define IFX_PFI_ZBABRECORD_ADDR_OFF (5u)

/** \brief  Length for Ifx_PFI_ZBABRECORD_Bits.VLD */
#define IFX_PFI_ZBABRECORD_VLD_LEN (1u)

/** \brief  Mask for Ifx_PFI_ZBABRECORD_Bits.VLD */
#define IFX_PFI_ZBABRECORD_VLD_MSK (0x1u)

/** \brief  Offset for Ifx_PFI_ZBABRECORD_Bits.VLD */
#define IFX_PFI_ZBABRECORD_VLD_OFF (31u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXPFI_BF_H */
