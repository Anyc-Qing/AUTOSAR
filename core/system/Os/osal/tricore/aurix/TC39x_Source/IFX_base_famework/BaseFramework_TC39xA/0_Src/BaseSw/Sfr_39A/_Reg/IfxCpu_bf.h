/**
 * \file IfxCpu_bf.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: corex_CSFR_MCSFR.xml , corex_SFR_MCSFR.xml dated xx.09.2014
 * Specification: TBD
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
 * \defgroup IfxLld_Cpu_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxLld_Cpu
 * 
 */
#ifndef IFXCPU_BF_H
#define IFXCPU_BF_H 1
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Cpu_BitfieldsMask
 * \{  */

/** \brief  Length for Ifx_CPU_A_Bits.ADDR */
#define IFX_CPU_A_ADDR_LEN (32)

/** \brief  Mask for Ifx_CPU_A_Bits.ADDR */
#define IFX_CPU_A_ADDR_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_A_Bits.ADDR */
#define IFX_CPU_A_ADDR_OFF (0)

/** \brief  Length for Ifx_CPU_BIV_Bits.BIV */
#define IFX_CPU_BIV_BIV_LEN (31)

/** \brief  Mask for Ifx_CPU_BIV_Bits.BIV */
#define IFX_CPU_BIV_BIV_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_BIV_Bits.BIV */
#define IFX_CPU_BIV_BIV_OFF (1)

/** \brief  Length for Ifx_CPU_BIV_Bits.VSS */
#define IFX_CPU_BIV_VSS_LEN (1)

/** \brief  Mask for Ifx_CPU_BIV_Bits.VSS */
#define IFX_CPU_BIV_VSS_MSK (0x1)

/** \brief  Offset for Ifx_CPU_BIV_Bits.VSS */
#define IFX_CPU_BIV_VSS_OFF (0)

/** \brief  Length for Ifx_CPU_BTV_Bits.BTV */
#define IFX_CPU_BTV_BTV_LEN (31)

/** \brief  Mask for Ifx_CPU_BTV_Bits.BTV */
#define IFX_CPU_BTV_BTV_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_BTV_Bits.BTV */
#define IFX_CPU_BTV_BTV_OFF (1)

/** \brief  Length for Ifx_CPU_CCNT_Bits.CountValue */
#define IFX_CPU_CCNT_COUNTVALUE_LEN (31)

/** \brief  Mask for Ifx_CPU_CCNT_Bits.CountValue */
#define IFX_CPU_CCNT_COUNTVALUE_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_CCNT_Bits.CountValue */
#define IFX_CPU_CCNT_COUNTVALUE_OFF (0)

/** \brief  Length for Ifx_CPU_CCNT_Bits.SOvf */
#define IFX_CPU_CCNT_SOVF_LEN (1)

/** \brief  Mask for Ifx_CPU_CCNT_Bits.SOvf */
#define IFX_CPU_CCNT_SOVF_MSK (0x1)

/** \brief  Offset for Ifx_CPU_CCNT_Bits.SOvf */
#define IFX_CPU_CCNT_SOVF_OFF (31)

/** \brief  Length for Ifx_CPU_CCTRL_Bits.CE */
#define IFX_CPU_CCTRL_CE_LEN (1)

/** \brief  Mask for Ifx_CPU_CCTRL_Bits.CE */
#define IFX_CPU_CCTRL_CE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_CCTRL_Bits.CE */
#define IFX_CPU_CCTRL_CE_OFF (1)

/** \brief  Length for Ifx_CPU_CCTRL_Bits.CM */
#define IFX_CPU_CCTRL_CM_LEN (1)

/** \brief  Mask for Ifx_CPU_CCTRL_Bits.CM */
#define IFX_CPU_CCTRL_CM_MSK (0x1)

/** \brief  Offset for Ifx_CPU_CCTRL_Bits.CM */
#define IFX_CPU_CCTRL_CM_OFF (0)

/** \brief  Length for Ifx_CPU_CCTRL_Bits.M1 */
#define IFX_CPU_CCTRL_M1_LEN (3)

/** \brief  Mask for Ifx_CPU_CCTRL_Bits.M1 */
#define IFX_CPU_CCTRL_M1_MSK (0x7)

/** \brief  Offset for Ifx_CPU_CCTRL_Bits.M1 */
#define IFX_CPU_CCTRL_M1_OFF (2)

/** \brief  Length for Ifx_CPU_CCTRL_Bits.M2 */
#define IFX_CPU_CCTRL_M2_LEN (3)

/** \brief  Mask for Ifx_CPU_CCTRL_Bits.M2 */
#define IFX_CPU_CCTRL_M2_MSK (0x7)

/** \brief  Offset for Ifx_CPU_CCTRL_Bits.M2 */
#define IFX_CPU_CCTRL_M2_OFF (5)

/** \brief  Length for Ifx_CPU_CCTRL_Bits.M3 */
#define IFX_CPU_CCTRL_M3_LEN (3)

/** \brief  Mask for Ifx_CPU_CCTRL_Bits.M3 */
#define IFX_CPU_CCTRL_M3_MSK (0x7)

/** \brief  Offset for Ifx_CPU_CCTRL_Bits.M3 */
#define IFX_CPU_CCTRL_M3_OFF (8)

/** \brief  Length for Ifx_CPU_COMPAT_Bits.RM */
#define IFX_CPU_COMPAT_RM_LEN (1)

/** \brief  Mask for Ifx_CPU_COMPAT_Bits.RM */
#define IFX_CPU_COMPAT_RM_MSK (0x1)

/** \brief  Offset for Ifx_CPU_COMPAT_Bits.RM */
#define IFX_CPU_COMPAT_RM_OFF (3)

/** \brief  Length for Ifx_CPU_COMPAT_Bits.SP */
#define IFX_CPU_COMPAT_SP_LEN (1)

/** \brief  Mask for Ifx_CPU_COMPAT_Bits.SP */
#define IFX_CPU_COMPAT_SP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_COMPAT_Bits.SP */
#define IFX_CPU_COMPAT_SP_OFF (4)

/** \brief  Length for Ifx_CPU_CORE_ID_Bits.CORE_ID */
#define IFX_CPU_CORE_ID_CORE_ID_LEN (3)

/** \brief  Mask for Ifx_CPU_CORE_ID_Bits.CORE_ID */
#define IFX_CPU_CORE_ID_CORE_ID_MSK (0x7)

/** \brief  Offset for Ifx_CPU_CORE_ID_Bits.CORE_ID */
#define IFX_CPU_CORE_ID_CORE_ID_OFF (0)

/** \brief  Length for Ifx_CPU_CPR_L_Bits.LOWBND */
#define IFX_CPU_CPR_L_LOWBND_LEN (29)

/** \brief  Mask for Ifx_CPU_CPR_L_Bits.LOWBND */
#define IFX_CPU_CPR_L_LOWBND_MSK (0x1fffffff)

/** \brief  Offset for Ifx_CPU_CPR_L_Bits.LOWBND */
#define IFX_CPU_CPR_L_LOWBND_OFF (3)

/** \brief  Length for Ifx_CPU_CPR_U_Bits.UPPBND */
#define IFX_CPU_CPR_U_UPPBND_LEN (29)

/** \brief  Mask for Ifx_CPU_CPR_U_Bits.UPPBND */
#define IFX_CPU_CPR_U_UPPBND_MSK (0x1fffffff)

/** \brief  Offset for Ifx_CPU_CPR_U_Bits.UPPBND */
#define IFX_CPU_CPR_U_UPPBND_OFF (3)

/** \brief  Length for Ifx_CPU_CPU_ID_Bits.MOD_32B */
#define IFX_CPU_CPU_ID_MOD_32B_LEN (8)

/** \brief  Mask for Ifx_CPU_CPU_ID_Bits.MOD_32B */
#define IFX_CPU_CPU_ID_MOD_32B_MSK (0xff)

/** \brief  Offset for Ifx_CPU_CPU_ID_Bits.MOD_32B */
#define IFX_CPU_CPU_ID_MOD_32B_OFF (8)

/** \brief  Length for Ifx_CPU_CPU_ID_Bits.MOD */
#define IFX_CPU_CPU_ID_MOD_LEN (16)

/** \brief  Mask for Ifx_CPU_CPU_ID_Bits.MOD */
#define IFX_CPU_CPU_ID_MOD_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_CPU_ID_Bits.MOD */
#define IFX_CPU_CPU_ID_MOD_OFF (16)

/** \brief  Length for Ifx_CPU_CPU_ID_Bits.MOD_REV */
#define IFX_CPU_CPU_ID_MOD_REV_LEN (8)

/** \brief  Mask for Ifx_CPU_CPU_ID_Bits.MOD_REV */
#define IFX_CPU_CPU_ID_MOD_REV_MSK (0xff)

/** \brief  Offset for Ifx_CPU_CPU_ID_Bits.MOD_REV */
#define IFX_CPU_CPU_ID_MOD_REV_OFF (0)

/** \brief  Length for Ifx_CPU_CPXE_0_Bits.XE */
#define IFX_CPU_CPXE_0_XE_LEN (10)

/** \brief  Mask for Ifx_CPU_CPXE_0_Bits.XE */
#define IFX_CPU_CPXE_0_XE_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_CPXE_0_Bits.XE */
#define IFX_CPU_CPXE_0_XE_OFF (0)

/** \brief  Length for Ifx_CPU_CPXE_1_Bits.XE */
#define IFX_CPU_CPXE_1_XE_LEN (10)

/** \brief  Mask for Ifx_CPU_CPXE_1_Bits.XE */
#define IFX_CPU_CPXE_1_XE_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_CPXE_1_Bits.XE */
#define IFX_CPU_CPXE_1_XE_OFF (0)

/** \brief  Length for Ifx_CPU_CPXE_2_Bits.XE */
#define IFX_CPU_CPXE_2_XE_LEN (10)

/** \brief  Mask for Ifx_CPU_CPXE_2_Bits.XE */
#define IFX_CPU_CPXE_2_XE_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_CPXE_2_Bits.XE */
#define IFX_CPU_CPXE_2_XE_OFF (0)

/** \brief  Length for Ifx_CPU_CPXE_3_Bits.XE */
#define IFX_CPU_CPXE_3_XE_LEN (10)

/** \brief  Mask for Ifx_CPU_CPXE_3_Bits.XE */
#define IFX_CPU_CPXE_3_XE_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_CPXE_3_Bits.XE */
#define IFX_CPU_CPXE_3_XE_OFF (0)

/** \brief  Length for Ifx_CPU_CPXE_4_Bits.XE */
#define IFX_CPU_CPXE_4_XE_LEN (10)

/** \brief  Mask for Ifx_CPU_CPXE_4_Bits.XE */
#define IFX_CPU_CPXE_4_XE_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_CPXE_4_Bits.XE */
#define IFX_CPU_CPXE_4_XE_OFF (0)

/** \brief  Length for Ifx_CPU_CPXE_5_Bits.XE */
#define IFX_CPU_CPXE_5_XE_LEN (10)

/** \brief  Mask for Ifx_CPU_CPXE_5_Bits.XE */
#define IFX_CPU_CPXE_5_XE_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_CPXE_5_Bits.XE */
#define IFX_CPU_CPXE_5_XE_OFF (0)

/** \brief  Length for Ifx_CPU_CREVT_Bits.BBM */
#define IFX_CPU_CREVT_BBM_LEN (1)

/** \brief  Mask for Ifx_CPU_CREVT_Bits.BBM */
#define IFX_CPU_CREVT_BBM_MSK (0x1)

/** \brief  Offset for Ifx_CPU_CREVT_Bits.BBM */
#define IFX_CPU_CREVT_BBM_OFF (3)

/** \brief  Length for Ifx_CPU_CREVT_Bits.BOD */
#define IFX_CPU_CREVT_BOD_LEN (1)

/** \brief  Mask for Ifx_CPU_CREVT_Bits.BOD */
#define IFX_CPU_CREVT_BOD_MSK (0x1)

/** \brief  Offset for Ifx_CPU_CREVT_Bits.BOD */
#define IFX_CPU_CREVT_BOD_OFF (4)

/** \brief  Length for Ifx_CPU_CREVT_Bits.CNT */
#define IFX_CPU_CREVT_CNT_LEN (2)

/** \brief  Mask for Ifx_CPU_CREVT_Bits.CNT */
#define IFX_CPU_CREVT_CNT_MSK (0x3)

/** \brief  Offset for Ifx_CPU_CREVT_Bits.CNT */
#define IFX_CPU_CREVT_CNT_OFF (6)

/** \brief  Length for Ifx_CPU_CREVT_Bits.EVTA */
#define IFX_CPU_CREVT_EVTA_LEN (3)

/** \brief  Mask for Ifx_CPU_CREVT_Bits.EVTA */
#define IFX_CPU_CREVT_EVTA_MSK (0x7)

/** \brief  Offset for Ifx_CPU_CREVT_Bits.EVTA */
#define IFX_CPU_CREVT_EVTA_OFF (0)

/** \brief  Length for Ifx_CPU_CREVT_Bits.SUSP */
#define IFX_CPU_CREVT_SUSP_LEN (1)

/** \brief  Mask for Ifx_CPU_CREVT_Bits.SUSP */
#define IFX_CPU_CREVT_SUSP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_CREVT_Bits.SUSP */
#define IFX_CPU_CREVT_SUSP_OFF (5)

/** \brief  Length for Ifx_CPU_CUS_ID_Bits.CID */
#define IFX_CPU_CUS_ID_CID_LEN (3)

/** \brief  Mask for Ifx_CPU_CUS_ID_Bits.CID */
#define IFX_CPU_CUS_ID_CID_MSK (0x7)

/** \brief  Offset for Ifx_CPU_CUS_ID_Bits.CID */
#define IFX_CPU_CUS_ID_CID_OFF (0)

/** \brief  Length for Ifx_CPU_D_Bits.DATA */
#define IFX_CPU_D_DATA_LEN (32)

/** \brief  Mask for Ifx_CPU_D_Bits.DATA */
#define IFX_CPU_D_DATA_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_D_Bits.DATA */
#define IFX_CPU_D_DATA_OFF (0)

/** \brief  Length for Ifx_CPU_DATR_Bits.CFE */
#define IFX_CPU_DATR_CFE_LEN (1)

/** \brief  Mask for Ifx_CPU_DATR_Bits.CFE */
#define IFX_CPU_DATR_CFE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DATR_Bits.CFE */
#define IFX_CPU_DATR_CFE_OFF (10)

/** \brief  Length for Ifx_CPU_DATR_Bits.CWE */
#define IFX_CPU_DATR_CWE_LEN (1)

/** \brief  Mask for Ifx_CPU_DATR_Bits.CWE */
#define IFX_CPU_DATR_CWE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DATR_Bits.CWE */
#define IFX_CPU_DATR_CWE_OFF (9)

/** \brief  Length for Ifx_CPU_DATR_Bits.SBE */
#define IFX_CPU_DATR_SBE_LEN (1)

/** \brief  Mask for Ifx_CPU_DATR_Bits.SBE */
#define IFX_CPU_DATR_SBE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DATR_Bits.SBE */
#define IFX_CPU_DATR_SBE_OFF (3)

/** \brief  Length for Ifx_CPU_DATR_Bits.SOE */
#define IFX_CPU_DATR_SOE_LEN (1)

/** \brief  Mask for Ifx_CPU_DATR_Bits.SOE */
#define IFX_CPU_DATR_SOE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DATR_Bits.SOE */
#define IFX_CPU_DATR_SOE_OFF (14)

/** \brief  Length for Ifx_CPU_DBGSR_Bits.DE */
#define IFX_CPU_DBGSR_DE_LEN (1)

/** \brief  Mask for Ifx_CPU_DBGSR_Bits.DE */
#define IFX_CPU_DBGSR_DE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DBGSR_Bits.DE */
#define IFX_CPU_DBGSR_DE_OFF (0)

/** \brief  Length for Ifx_CPU_DBGSR_Bits.EVTSRC */
#define IFX_CPU_DBGSR_EVTSRC_LEN (5)

/** \brief  Mask for Ifx_CPU_DBGSR_Bits.EVTSRC */
#define IFX_CPU_DBGSR_EVTSRC_MSK (0x1f)

/** \brief  Offset for Ifx_CPU_DBGSR_Bits.EVTSRC */
#define IFX_CPU_DBGSR_EVTSRC_OFF (8)

/** \brief  Length for Ifx_CPU_DBGSR_Bits.HALT */
#define IFX_CPU_DBGSR_HALT_LEN (2)

/** \brief  Mask for Ifx_CPU_DBGSR_Bits.HALT */
#define IFX_CPU_DBGSR_HALT_MSK (0x3)

/** \brief  Offset for Ifx_CPU_DBGSR_Bits.HALT */
#define IFX_CPU_DBGSR_HALT_OFF (1)

/** \brief  Length for Ifx_CPU_DBGSR_Bits.PEVT */
#define IFX_CPU_DBGSR_PEVT_LEN (1)

/** \brief  Mask for Ifx_CPU_DBGSR_Bits.PEVT */
#define IFX_CPU_DBGSR_PEVT_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DBGSR_Bits.PEVT */
#define IFX_CPU_DBGSR_PEVT_OFF (7)

/** \brief  Length for Ifx_CPU_DBGSR_Bits.PREVSUSP */
#define IFX_CPU_DBGSR_PREVSUSP_LEN (1)

/** \brief  Mask for Ifx_CPU_DBGSR_Bits.PREVSUSP */
#define IFX_CPU_DBGSR_PREVSUSP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DBGSR_Bits.PREVSUSP */
#define IFX_CPU_DBGSR_PREVSUSP_OFF (6)

/** \brief  Length for Ifx_CPU_DBGSR_Bits.SIH */
#define IFX_CPU_DBGSR_SIH_LEN (1)

/** \brief  Mask for Ifx_CPU_DBGSR_Bits.SIH */
#define IFX_CPU_DBGSR_SIH_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DBGSR_Bits.SIH */
#define IFX_CPU_DBGSR_SIH_OFF (3)

/** \brief  Length for Ifx_CPU_DBGSR_Bits.SUSP */
#define IFX_CPU_DBGSR_SUSP_LEN (1)

/** \brief  Mask for Ifx_CPU_DBGSR_Bits.SUSP */
#define IFX_CPU_DBGSR_SUSP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DBGSR_Bits.SUSP */
#define IFX_CPU_DBGSR_SUSP_OFF (4)

/** \brief  Length for Ifx_CPU_DBGTCR_Bits.DTA */
#define IFX_CPU_DBGTCR_DTA_LEN (1)

/** \brief  Mask for Ifx_CPU_DBGTCR_Bits.DTA */
#define IFX_CPU_DBGTCR_DTA_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DBGTCR_Bits.DTA */
#define IFX_CPU_DBGTCR_DTA_OFF (0)

/** \brief  Length for Ifx_CPU_DCON0_Bits.DCBYP */
#define IFX_CPU_DCON0_DCBYP_LEN (1)

/** \brief  Mask for Ifx_CPU_DCON0_Bits.DCBYP */
#define IFX_CPU_DCON0_DCBYP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DCON0_Bits.DCBYP */
#define IFX_CPU_DCON0_DCBYP_OFF (1)

/** \brief  Length for Ifx_CPU_DCON2_Bits.DCACHE_SZE */
#define IFX_CPU_DCON2_DCACHE_SZE_LEN (16)

/** \brief  Mask for Ifx_CPU_DCON2_Bits.DCACHE_SZE */
#define IFX_CPU_DCON2_DCACHE_SZE_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_DCON2_Bits.DCACHE_SZE */
#define IFX_CPU_DCON2_DCACHE_SZE_OFF (0)

/** \brief  Length for Ifx_CPU_DCON2_Bits.DSCRATCH_SZE */
#define IFX_CPU_DCON2_DSCRATCH_SZE_LEN (16)

/** \brief  Mask for Ifx_CPU_DCON2_Bits.DSCRATCH_SZE */
#define IFX_CPU_DCON2_DSCRATCH_SZE_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_DCON2_Bits.DSCRATCH_SZE */
#define IFX_CPU_DCON2_DSCRATCH_SZE_OFF (16)

/** \brief  Length for Ifx_CPU_DCX_Bits.DCXValue */
#define IFX_CPU_DCX_DCXVALUE_LEN (26)

/** \brief  Mask for Ifx_CPU_DCX_Bits.DCXValue */
#define IFX_CPU_DCX_DCXVALUE_MSK (0x3ffffff)

/** \brief  Offset for Ifx_CPU_DCX_Bits.DCXValue */
#define IFX_CPU_DCX_DCXVALUE_OFF (6)

/** \brief  Length for Ifx_CPU_DEADD_Bits.ERROR_ADDRESS */
#define IFX_CPU_DEADD_ERROR_ADDRESS_LEN (32)

/** \brief  Mask for Ifx_CPU_DEADD_Bits.ERROR_ADDRESS */
#define IFX_CPU_DEADD_ERROR_ADDRESS_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DEADD_Bits.ERROR_ADDRESS */
#define IFX_CPU_DEADD_ERROR_ADDRESS_OFF (0)

/** \brief  Length for Ifx_CPU_DIEAR_Bits.TA */
#define IFX_CPU_DIEAR_TA_LEN (32)

/** \brief  Mask for Ifx_CPU_DIEAR_Bits.TA */
#define IFX_CPU_DIEAR_TA_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DIEAR_Bits.TA */
#define IFX_CPU_DIEAR_TA_OFF (0)

/** \brief  Length for Ifx_CPU_DIETR_Bits.E_INFO */
#define IFX_CPU_DIETR_E_INFO_LEN (6)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.E_INFO */
#define IFX_CPU_DIETR_E_INFO_MSK (0x3f)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.E_INFO */
#define IFX_CPU_DIETR_E_INFO_OFF (5)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_BI */
#define IFX_CPU_DIETR_IE_BI_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_BI */
#define IFX_CPU_DIETR_IE_BI_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_BI */
#define IFX_CPU_DIETR_IE_BI_OFF (4)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_BS */
#define IFX_CPU_DIETR_IE_BS_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_BS */
#define IFX_CPU_DIETR_IE_BS_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_BS */
#define IFX_CPU_DIETR_IE_BS_OFF (13)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_C */
#define IFX_CPU_DIETR_IE_C_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_C */
#define IFX_CPU_DIETR_IE_C_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_C */
#define IFX_CPU_DIETR_IE_C_OFF (2)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_DLMU */
#define IFX_CPU_DIETR_IE_DLMU_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_DLMU */
#define IFX_CPU_DIETR_IE_DLMU_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_DLMU */
#define IFX_CPU_DIETR_IE_DLMU_OFF (14)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_LPB */
#define IFX_CPU_DIETR_IE_LPB_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_LPB */
#define IFX_CPU_DIETR_IE_LPB_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_LPB */
#define IFX_CPU_DIETR_IE_LPB_OFF (15)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_S */
#define IFX_CPU_DIETR_IE_S_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_S */
#define IFX_CPU_DIETR_IE_S_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_S */
#define IFX_CPU_DIETR_IE_S_OFF (3)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_SP */
#define IFX_CPU_DIETR_IE_SP_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_SP */
#define IFX_CPU_DIETR_IE_SP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_SP */
#define IFX_CPU_DIETR_IE_SP_OFF (12)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_T */
#define IFX_CPU_DIETR_IE_T_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_T */
#define IFX_CPU_DIETR_IE_T_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_T */
#define IFX_CPU_DIETR_IE_T_OFF (1)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IE_UNC */
#define IFX_CPU_DIETR_IE_UNC_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IE_UNC */
#define IFX_CPU_DIETR_IE_UNC_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IE_UNC */
#define IFX_CPU_DIETR_IE_UNC_OFF (11)

/** \brief  Length for Ifx_CPU_DIETR_Bits.IED */
#define IFX_CPU_DIETR_IED_LEN (1)

/** \brief  Mask for Ifx_CPU_DIETR_Bits.IED */
#define IFX_CPU_DIETR_IED_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DIETR_Bits.IED */
#define IFX_CPU_DIETR_IED_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGN_ACCENA_W_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGN_ACCENA_W_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGN_ACCENA_W_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGN_ACCENA_W_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGN_LA_Bits.ADDR */
#define IFX_CPU_DLMU_SPROT_RGN_LA_ADDR_LEN (27)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGN_LA_Bits.ADDR */
#define IFX_CPU_DLMU_SPROT_RGN_LA_ADDR_MSK (0x7ffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGN_LA_Bits.ADDR */
#define IFX_CPU_DLMU_SPROT_RGN_LA_ADDR_OFF (5)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGN_UA_Bits.ADDR */
#define IFX_CPU_DLMU_SPROT_RGN_UA_ADDR_LEN (27)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGN_UA_Bits.ADDR */
#define IFX_CPU_DLMU_SPROT_RGN_UA_ADDR_MSK (0x7ffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGN_UA_Bits.ADDR */
#define IFX_CPU_DLMU_SPROT_RGN_UA_ADDR_OFF (5)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGNACCENA0_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA0_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGNACCENA0_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA0_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGNACCENA0_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA0_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGNACCENA1_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA1_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGNACCENA1_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA1_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGNACCENA1_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA1_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGNACCENA2_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA2_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGNACCENA2_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA2_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGNACCENA2_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA2_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGNACCENA3_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA3_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGNACCENA3_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA3_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGNACCENA3_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA3_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGNACCENA4_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA4_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGNACCENA4_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA4_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGNACCENA4_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA4_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGNACCENA5_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA5_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGNACCENA5_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA5_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGNACCENA5_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA5_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGNACCENA6_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA6_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGNACCENA6_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA6_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGNACCENA6_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA6_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DLMU_SPROT_RGNACCENA7_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA7_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_DLMU_SPROT_RGNACCENA7_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA7_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_DLMU_SPROT_RGNACCENA7_R_Bits.EN */
#define IFX_CPU_DLMU_SPROT_RGNACCENA7_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_DMS_Bits.DMSValue */
#define IFX_CPU_DMS_DMSVALUE_LEN (31)

/** \brief  Mask for Ifx_CPU_DMS_Bits.DMSValue */
#define IFX_CPU_DMS_DMSVALUE_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_DMS_Bits.DMSValue */
#define IFX_CPU_DMS_DMSVALUE_OFF (1)

/** \brief  Length for Ifx_CPU_DPR_L_Bits.LOWBND */
#define IFX_CPU_DPR_L_LOWBND_LEN (29)

/** \brief  Mask for Ifx_CPU_DPR_L_Bits.LOWBND */
#define IFX_CPU_DPR_L_LOWBND_MSK (0x1fffffff)

/** \brief  Offset for Ifx_CPU_DPR_L_Bits.LOWBND */
#define IFX_CPU_DPR_L_LOWBND_OFF (3)

/** \brief  Length for Ifx_CPU_DPR_U_Bits.UPPBND */
#define IFX_CPU_DPR_U_UPPBND_LEN (29)

/** \brief  Mask for Ifx_CPU_DPR_U_Bits.UPPBND */
#define IFX_CPU_DPR_U_UPPBND_MSK (0x1fffffff)

/** \brief  Offset for Ifx_CPU_DPR_U_Bits.UPPBND */
#define IFX_CPU_DPR_U_UPPBND_OFF (3)

/** \brief  Length for Ifx_CPU_DPRE_0_Bits.RE */
#define IFX_CPU_DPRE_0_RE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPRE_0_Bits.RE */
#define IFX_CPU_DPRE_0_RE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPRE_0_Bits.RE */
#define IFX_CPU_DPRE_0_RE_OFF (0)

/** \brief  Length for Ifx_CPU_DPRE_1_Bits.RE */
#define IFX_CPU_DPRE_1_RE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPRE_1_Bits.RE */
#define IFX_CPU_DPRE_1_RE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPRE_1_Bits.RE */
#define IFX_CPU_DPRE_1_RE_OFF (0)

/** \brief  Length for Ifx_CPU_DPRE_2_Bits.RE */
#define IFX_CPU_DPRE_2_RE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPRE_2_Bits.RE */
#define IFX_CPU_DPRE_2_RE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPRE_2_Bits.RE */
#define IFX_CPU_DPRE_2_RE_OFF (0)

/** \brief  Length for Ifx_CPU_DPRE_3_Bits.RE */
#define IFX_CPU_DPRE_3_RE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPRE_3_Bits.RE */
#define IFX_CPU_DPRE_3_RE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPRE_3_Bits.RE */
#define IFX_CPU_DPRE_3_RE_OFF (0)

/** \brief  Length for Ifx_CPU_DPRE_4_Bits.RE */
#define IFX_CPU_DPRE_4_RE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPRE_4_Bits.RE */
#define IFX_CPU_DPRE_4_RE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPRE_4_Bits.RE */
#define IFX_CPU_DPRE_4_RE_OFF (0)

/** \brief  Length for Ifx_CPU_DPRE_5_Bits.RE */
#define IFX_CPU_DPRE_5_RE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPRE_5_Bits.RE */
#define IFX_CPU_DPRE_5_RE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPRE_5_Bits.RE */
#define IFX_CPU_DPRE_5_RE_OFF (0)

/** \brief  Length for Ifx_CPU_DPWE_0_Bits.WE */
#define IFX_CPU_DPWE_0_WE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPWE_0_Bits.WE */
#define IFX_CPU_DPWE_0_WE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPWE_0_Bits.WE */
#define IFX_CPU_DPWE_0_WE_OFF (0)

/** \brief  Length for Ifx_CPU_DPWE_1_Bits.WE */
#define IFX_CPU_DPWE_1_WE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPWE_1_Bits.WE */
#define IFX_CPU_DPWE_1_WE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPWE_1_Bits.WE */
#define IFX_CPU_DPWE_1_WE_OFF (0)

/** \brief  Length for Ifx_CPU_DPWE_2_Bits.WE */
#define IFX_CPU_DPWE_2_WE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPWE_2_Bits.WE */
#define IFX_CPU_DPWE_2_WE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPWE_2_Bits.WE */
#define IFX_CPU_DPWE_2_WE_OFF (0)

/** \brief  Length for Ifx_CPU_DPWE_3_Bits.WE */
#define IFX_CPU_DPWE_3_WE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPWE_3_Bits.WE */
#define IFX_CPU_DPWE_3_WE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPWE_3_Bits.WE */
#define IFX_CPU_DPWE_3_WE_OFF (0)

/** \brief  Length for Ifx_CPU_DPWE_4_Bits.WE */
#define IFX_CPU_DPWE_4_WE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPWE_4_Bits.WE */
#define IFX_CPU_DPWE_4_WE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPWE_4_Bits.WE */
#define IFX_CPU_DPWE_4_WE_OFF (0)

/** \brief  Length for Ifx_CPU_DPWE_5_Bits.WE */
#define IFX_CPU_DPWE_5_WE_LEN (18)

/** \brief  Mask for Ifx_CPU_DPWE_5_Bits.WE */
#define IFX_CPU_DPWE_5_WE_MSK (0x3ffff)

/** \brief  Offset for Ifx_CPU_DPWE_5_Bits.WE */
#define IFX_CPU_DPWE_5_WE_OFF (0)

/** \brief  Length for Ifx_CPU_DSTR_Bits.ALN */
#define IFX_CPU_DSTR_ALN_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.ALN */
#define IFX_CPU_DSTR_ALN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.ALN */
#define IFX_CPU_DSTR_ALN_OFF (24)

/** \brief  Length for Ifx_CPU_DSTR_Bits.CAC */
#define IFX_CPU_DSTR_CAC_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.CAC */
#define IFX_CPU_DSTR_CAC_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.CAC */
#define IFX_CPU_DSTR_CAC_OFF (18)

/** \brief  Length for Ifx_CPU_DSTR_Bits.CLE */
#define IFX_CPU_DSTR_CLE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.CLE */
#define IFX_CPU_DSTR_CLE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.CLE */
#define IFX_CPU_DSTR_CLE_OFF (20)

/** \brief  Length for Ifx_CPU_DSTR_Bits.CRE */
#define IFX_CPU_DSTR_CRE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.CRE */
#define IFX_CPU_DSTR_CRE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.CRE */
#define IFX_CPU_DSTR_CRE_OFF (6)

/** \brief  Length for Ifx_CPU_DSTR_Bits.DTME */
#define IFX_CPU_DSTR_DTME_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.DTME */
#define IFX_CPU_DSTR_DTME_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.DTME */
#define IFX_CPU_DSTR_DTME_OFF (14)

/** \brief  Length for Ifx_CPU_DSTR_Bits.GAE */
#define IFX_CPU_DSTR_GAE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.GAE */
#define IFX_CPU_DSTR_GAE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.GAE */
#define IFX_CPU_DSTR_GAE_OFF (1)

/** \brief  Length for Ifx_CPU_DSTR_Bits.LBE */
#define IFX_CPU_DSTR_LBE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.LBE */
#define IFX_CPU_DSTR_LBE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.LBE */
#define IFX_CPU_DSTR_LBE_OFF (2)

/** \brief  Length for Ifx_CPU_DSTR_Bits.LOE */
#define IFX_CPU_DSTR_LOE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.LOE */
#define IFX_CPU_DSTR_LOE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.LOE */
#define IFX_CPU_DSTR_LOE_OFF (15)

/** \brief  Length for Ifx_CPU_DSTR_Bits.MPE */
#define IFX_CPU_DSTR_MPE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.MPE */
#define IFX_CPU_DSTR_MPE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.MPE */
#define IFX_CPU_DSTR_MPE_OFF (19)

/** \brief  Length for Ifx_CPU_DSTR_Bits.SCE */
#define IFX_CPU_DSTR_SCE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.SCE */
#define IFX_CPU_DSTR_SCE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.SCE */
#define IFX_CPU_DSTR_SCE_OFF (17)

/** \brief  Length for Ifx_CPU_DSTR_Bits.SDE */
#define IFX_CPU_DSTR_SDE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.SDE */
#define IFX_CPU_DSTR_SDE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.SDE */
#define IFX_CPU_DSTR_SDE_OFF (16)

/** \brief  Length for Ifx_CPU_DSTR_Bits.SRE */
#define IFX_CPU_DSTR_SRE_LEN (1)

/** \brief  Mask for Ifx_CPU_DSTR_Bits.SRE */
#define IFX_CPU_DSTR_SRE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_DSTR_Bits.SRE */
#define IFX_CPU_DSTR_SRE_OFF (0)

/** \brief  Length for Ifx_CPU_EXEVT_Bits.BBM */
#define IFX_CPU_EXEVT_BBM_LEN (1)

/** \brief  Mask for Ifx_CPU_EXEVT_Bits.BBM */
#define IFX_CPU_EXEVT_BBM_MSK (0x1)

/** \brief  Offset for Ifx_CPU_EXEVT_Bits.BBM */
#define IFX_CPU_EXEVT_BBM_OFF (3)

/** \brief  Length for Ifx_CPU_EXEVT_Bits.BOD */
#define IFX_CPU_EXEVT_BOD_LEN (1)

/** \brief  Mask for Ifx_CPU_EXEVT_Bits.BOD */
#define IFX_CPU_EXEVT_BOD_MSK (0x1)

/** \brief  Offset for Ifx_CPU_EXEVT_Bits.BOD */
#define IFX_CPU_EXEVT_BOD_OFF (4)

/** \brief  Length for Ifx_CPU_EXEVT_Bits.CNT */
#define IFX_CPU_EXEVT_CNT_LEN (2)

/** \brief  Mask for Ifx_CPU_EXEVT_Bits.CNT */
#define IFX_CPU_EXEVT_CNT_MSK (0x3)

/** \brief  Offset for Ifx_CPU_EXEVT_Bits.CNT */
#define IFX_CPU_EXEVT_CNT_OFF (6)

/** \brief  Length for Ifx_CPU_EXEVT_Bits.EVTA */
#define IFX_CPU_EXEVT_EVTA_LEN (3)

/** \brief  Mask for Ifx_CPU_EXEVT_Bits.EVTA */
#define IFX_CPU_EXEVT_EVTA_MSK (0x7)

/** \brief  Offset for Ifx_CPU_EXEVT_Bits.EVTA */
#define IFX_CPU_EXEVT_EVTA_OFF (0)

/** \brief  Length for Ifx_CPU_EXEVT_Bits.SUSP */
#define IFX_CPU_EXEVT_SUSP_LEN (1)

/** \brief  Mask for Ifx_CPU_EXEVT_Bits.SUSP */
#define IFX_CPU_EXEVT_SUSP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_EXEVT_Bits.SUSP */
#define IFX_CPU_EXEVT_SUSP_OFF (5)

/** \brief  Length for Ifx_CPU_FCX_Bits.FCXO */
#define IFX_CPU_FCX_FCXO_LEN (16)

/** \brief  Mask for Ifx_CPU_FCX_Bits.FCXO */
#define IFX_CPU_FCX_FCXO_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_FCX_Bits.FCXO */
#define IFX_CPU_FCX_FCXO_OFF (0)

/** \brief  Length for Ifx_CPU_FCX_Bits.FCXS */
#define IFX_CPU_FCX_FCXS_LEN (4)

/** \brief  Mask for Ifx_CPU_FCX_Bits.FCXS */
#define IFX_CPU_FCX_FCXS_MSK (0xf)

/** \brief  Offset for Ifx_CPU_FCX_Bits.FCXS */
#define IFX_CPU_FCX_FCXS_OFF (16)

/** \brief  Length for Ifx_CPU_FLASHCON0_Bits.TAG1 */
#define IFX_CPU_FLASHCON0_TAG1_LEN (6)

/** \brief  Mask for Ifx_CPU_FLASHCON0_Bits.TAG1 */
#define IFX_CPU_FLASHCON0_TAG1_MSK (0x3f)

/** \brief  Offset for Ifx_CPU_FLASHCON0_Bits.TAG1 */
#define IFX_CPU_FLASHCON0_TAG1_OFF (0)

/** \brief  Length for Ifx_CPU_FLASHCON0_Bits.TAG2 */
#define IFX_CPU_FLASHCON0_TAG2_LEN (6)

/** \brief  Mask for Ifx_CPU_FLASHCON0_Bits.TAG2 */
#define IFX_CPU_FLASHCON0_TAG2_MSK (0x3f)

/** \brief  Offset for Ifx_CPU_FLASHCON0_Bits.TAG2 */
#define IFX_CPU_FLASHCON0_TAG2_OFF (8)

/** \brief  Length for Ifx_CPU_FLASHCON0_Bits.TAG3 */
#define IFX_CPU_FLASHCON0_TAG3_LEN (6)

/** \brief  Mask for Ifx_CPU_FLASHCON0_Bits.TAG3 */
#define IFX_CPU_FLASHCON0_TAG3_MSK (0x3f)

/** \brief  Offset for Ifx_CPU_FLASHCON0_Bits.TAG3 */
#define IFX_CPU_FLASHCON0_TAG3_OFF (16)

/** \brief  Length for Ifx_CPU_FLASHCON0_Bits.TAG4 */
#define IFX_CPU_FLASHCON0_TAG4_LEN (6)

/** \brief  Mask for Ifx_CPU_FLASHCON0_Bits.TAG4 */
#define IFX_CPU_FLASHCON0_TAG4_MSK (0x3f)

/** \brief  Offset for Ifx_CPU_FLASHCON0_Bits.TAG4 */
#define IFX_CPU_FLASHCON0_TAG4_OFF (24)

/** \brief  Length for Ifx_CPU_FLASHCON1_Bits.MASKUECC */
#define IFX_CPU_FLASHCON1_MASKUECC_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON1_Bits.MASKUECC */
#define IFX_CPU_FLASHCON1_MASKUECC_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON1_Bits.MASKUECC */
#define IFX_CPU_FLASHCON1_MASKUECC_OFF (16)

/** \brief  Length for Ifx_CPU_FLASHCON1_Bits.SPARE17 */
#define IFX_CPU_FLASHCON1_SPARE17_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON1_Bits.SPARE17 */
#define IFX_CPU_FLASHCON1_SPARE17_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON1_Bits.SPARE17 */
#define IFX_CPU_FLASHCON1_SPARE17_OFF (17)

/** \brief  Length for Ifx_CPU_FLASHCON1_Bits.SPARE1 */
#define IFX_CPU_FLASHCON1_SPARE1_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON1_Bits.SPARE1 */
#define IFX_CPU_FLASHCON1_SPARE1_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON1_Bits.SPARE1 */
#define IFX_CPU_FLASHCON1_SPARE1_OFF (1)

/** \brief  Length for Ifx_CPU_FLASHCON1_Bits.SPARE24 */
#define IFX_CPU_FLASHCON1_SPARE24_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON1_Bits.SPARE24 */
#define IFX_CPU_FLASHCON1_SPARE24_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON1_Bits.SPARE24 */
#define IFX_CPU_FLASHCON1_SPARE24_OFF (24)

/** \brief  Length for Ifx_CPU_FLASHCON1_Bits.SPARE25 */
#define IFX_CPU_FLASHCON1_SPARE25_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON1_Bits.SPARE25 */
#define IFX_CPU_FLASHCON1_SPARE25_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON1_Bits.SPARE25 */
#define IFX_CPU_FLASHCON1_SPARE25_OFF (25)

/** \brief  Length for Ifx_CPU_FLASHCON1_Bits.SPARE8 */
#define IFX_CPU_FLASHCON1_SPARE8_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON1_Bits.SPARE8 */
#define IFX_CPU_FLASHCON1_SPARE8_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON1_Bits.SPARE8 */
#define IFX_CPU_FLASHCON1_SPARE8_OFF (8)

/** \brief  Length for Ifx_CPU_FLASHCON1_Bits.SPARE9 */
#define IFX_CPU_FLASHCON1_SPARE9_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON1_Bits.SPARE9 */
#define IFX_CPU_FLASHCON1_SPARE9_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON1_Bits.SPARE9 */
#define IFX_CPU_FLASHCON1_SPARE9_OFF (9)

/** \brief  Length for Ifx_CPU_FLASHCON1_Bits.STALL */
#define IFX_CPU_FLASHCON1_STALL_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON1_Bits.STALL */
#define IFX_CPU_FLASHCON1_STALL_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON1_Bits.STALL */
#define IFX_CPU_FLASHCON1_STALL_OFF (0)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.DBABCLR */
#define IFX_CPU_FLASHCON2_DBABCLR_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.DBABCLR */
#define IFX_CPU_FLASHCON2_DBABCLR_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.DBABCLR */
#define IFX_CPU_FLASHCON2_DBABCLR_OFF (25)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.ECCCORDIS */
#define IFX_CPU_FLASHCON2_ECCCORDIS_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.ECCCORDIS */
#define IFX_CPU_FLASHCON2_ECCCORDIS_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.ECCCORDIS */
#define IFX_CPU_FLASHCON2_ECCCORDIS_OFF (1)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.ECCSCLR */
#define IFX_CPU_FLASHCON2_ECCSCLR_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.ECCSCLR */
#define IFX_CPU_FLASHCON2_ECCSCLR_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.ECCSCLR */
#define IFX_CPU_FLASHCON2_ECCSCLR_OFF (16)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.HMARGIN */
#define IFX_CPU_FLASHCON2_HMARGIN_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.HMARGIN */
#define IFX_CPU_FLASHCON2_HMARGIN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.HMARGIN */
#define IFX_CPU_FLASHCON2_HMARGIN_OFF (8)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.MBABCLR */
#define IFX_CPU_FLASHCON2_MBABCLR_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.MBABCLR */
#define IFX_CPU_FLASHCON2_MBABCLR_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.MBABCLR */
#define IFX_CPU_FLASHCON2_MBABCLR_OFF (26)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.MSEL */
#define IFX_CPU_FLASHCON2_MSEL_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.MSEL */
#define IFX_CPU_FLASHCON2_MSEL_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.MSEL */
#define IFX_CPU_FLASHCON2_MSEL_OFF (9)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.RECDIS */
#define IFX_CPU_FLASHCON2_RECDIS_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.RECDIS */
#define IFX_CPU_FLASHCON2_RECDIS_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.RECDIS */
#define IFX_CPU_FLASHCON2_RECDIS_OFF (0)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.SBABCLR */
#define IFX_CPU_FLASHCON2_SBABCLR_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.SBABCLR */
#define IFX_CPU_FLASHCON2_SBABCLR_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.SBABCLR */
#define IFX_CPU_FLASHCON2_SBABCLR_OFF (24)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.SPARE2 */
#define IFX_CPU_FLASHCON2_SPARE2_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.SPARE2 */
#define IFX_CPU_FLASHCON2_SPARE2_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.SPARE2 */
#define IFX_CPU_FLASHCON2_SPARE2_OFF (2)

/** \brief  Length for Ifx_CPU_FLASHCON2_Bits.ZBABCLR */
#define IFX_CPU_FLASHCON2_ZBABCLR_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON2_Bits.ZBABCLR */
#define IFX_CPU_FLASHCON2_ZBABCLR_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON2_Bits.ZBABCLR */
#define IFX_CPU_FLASHCON2_ZBABCLR_OFF (27)

/** \brief  Length for Ifx_CPU_FLASHCON3_Bits.DBABERRINJ */
#define IFX_CPU_FLASHCON3_DBABERRINJ_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON3_Bits.DBABERRINJ */
#define IFX_CPU_FLASHCON3_DBABERRINJ_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON3_Bits.DBABERRINJ */
#define IFX_CPU_FLASHCON3_DBABERRINJ_OFF (3)

/** \brief  Length for Ifx_CPU_FLASHCON3_Bits.ECCERRINJ */
#define IFX_CPU_FLASHCON3_ECCERRINJ_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON3_Bits.ECCERRINJ */
#define IFX_CPU_FLASHCON3_ECCERRINJ_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON3_Bits.ECCERRINJ */
#define IFX_CPU_FLASHCON3_ECCERRINJ_OFF (0)

/** \brief  Length for Ifx_CPU_FLASHCON3_Bits.EDCERRINJ */
#define IFX_CPU_FLASHCON3_EDCERRINJ_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON3_Bits.EDCERRINJ */
#define IFX_CPU_FLASHCON3_EDCERRINJ_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON3_Bits.EDCERRINJ */
#define IFX_CPU_FLASHCON3_EDCERRINJ_OFF (1)

/** \brief  Length for Ifx_CPU_FLASHCON3_Bits.MBABERRINJ */
#define IFX_CPU_FLASHCON3_MBABERRINJ_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON3_Bits.MBABERRINJ */
#define IFX_CPU_FLASHCON3_MBABERRINJ_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON3_Bits.MBABERRINJ */
#define IFX_CPU_FLASHCON3_MBABERRINJ_OFF (4)

/** \brief  Length for Ifx_CPU_FLASHCON3_Bits.SBABERRINJ */
#define IFX_CPU_FLASHCON3_SBABERRINJ_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON3_Bits.SBABERRINJ */
#define IFX_CPU_FLASHCON3_SBABERRINJ_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON3_Bits.SBABERRINJ */
#define IFX_CPU_FLASHCON3_SBABERRINJ_OFF (2)

/** \brief  Length for Ifx_CPU_FLASHCON3_Bits.SPARELBYTE */
#define IFX_CPU_FLASHCON3_SPARELBYTE_LEN (8)

/** \brief  Mask for Ifx_CPU_FLASHCON3_Bits.SPARELBYTE */
#define IFX_CPU_FLASHCON3_SPARELBYTE_MSK (0xff)

/** \brief  Offset for Ifx_CPU_FLASHCON3_Bits.SPARELBYTE */
#define IFX_CPU_FLASHCON3_SPARELBYTE_OFF (16)

/** \brief  Length for Ifx_CPU_FLASHCON3_Bits.SPAREUBYTE */
#define IFX_CPU_FLASHCON3_SPAREUBYTE_LEN (8)

/** \brief  Mask for Ifx_CPU_FLASHCON3_Bits.SPAREUBYTE */
#define IFX_CPU_FLASHCON3_SPAREUBYTE_MSK (0xff)

/** \brief  Offset for Ifx_CPU_FLASHCON3_Bits.SPAREUBYTE */
#define IFX_CPU_FLASHCON3_SPAREUBYTE_OFF (24)

/** \brief  Length for Ifx_CPU_FLASHCON3_Bits.ZBABERRINJ */
#define IFX_CPU_FLASHCON3_ZBABERRINJ_LEN (1)

/** \brief  Mask for Ifx_CPU_FLASHCON3_Bits.ZBABERRINJ */
#define IFX_CPU_FLASHCON3_ZBABERRINJ_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FLASHCON3_Bits.ZBABERRINJ */
#define IFX_CPU_FLASHCON3_ZBABERRINJ_OFF (5)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FI */
#define IFX_CPU_FPU_TRAP_CON_FI_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FI */
#define IFX_CPU_FPU_TRAP_CON_FI_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FI */
#define IFX_CPU_FPU_TRAP_CON_FI_OFF (30)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FIE */
#define IFX_CPU_FPU_TRAP_CON_FIE_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FIE */
#define IFX_CPU_FPU_TRAP_CON_FIE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FIE */
#define IFX_CPU_FPU_TRAP_CON_FIE_OFF (22)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FU */
#define IFX_CPU_FPU_TRAP_CON_FU_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FU */
#define IFX_CPU_FPU_TRAP_CON_FU_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FU */
#define IFX_CPU_FPU_TRAP_CON_FU_OFF (27)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FUE */
#define IFX_CPU_FPU_TRAP_CON_FUE_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FUE */
#define IFX_CPU_FPU_TRAP_CON_FUE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FUE */
#define IFX_CPU_FPU_TRAP_CON_FUE_OFF (19)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FV */
#define IFX_CPU_FPU_TRAP_CON_FV_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FV */
#define IFX_CPU_FPU_TRAP_CON_FV_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FV */
#define IFX_CPU_FPU_TRAP_CON_FV_OFF (29)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FVE */
#define IFX_CPU_FPU_TRAP_CON_FVE_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FVE */
#define IFX_CPU_FPU_TRAP_CON_FVE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FVE */
#define IFX_CPU_FPU_TRAP_CON_FVE_OFF (21)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FX */
#define IFX_CPU_FPU_TRAP_CON_FX_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FX */
#define IFX_CPU_FPU_TRAP_CON_FX_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FX */
#define IFX_CPU_FPU_TRAP_CON_FX_OFF (26)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FXE */
#define IFX_CPU_FPU_TRAP_CON_FXE_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FXE */
#define IFX_CPU_FPU_TRAP_CON_FXE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FXE */
#define IFX_CPU_FPU_TRAP_CON_FXE_OFF (18)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FZ */
#define IFX_CPU_FPU_TRAP_CON_FZ_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FZ */
#define IFX_CPU_FPU_TRAP_CON_FZ_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FZ */
#define IFX_CPU_FPU_TRAP_CON_FZ_OFF (28)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.FZE */
#define IFX_CPU_FPU_TRAP_CON_FZE_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.FZE */
#define IFX_CPU_FPU_TRAP_CON_FZE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.FZE */
#define IFX_CPU_FPU_TRAP_CON_FZE_OFF (20)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.RM */
#define IFX_CPU_FPU_TRAP_CON_RM_LEN (2)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.RM */
#define IFX_CPU_FPU_TRAP_CON_RM_MSK (0x3)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.RM */
#define IFX_CPU_FPU_TRAP_CON_RM_OFF (8)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.TCL */
#define IFX_CPU_FPU_TRAP_CON_TCL_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.TCL */
#define IFX_CPU_FPU_TRAP_CON_TCL_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.TCL */
#define IFX_CPU_FPU_TRAP_CON_TCL_OFF (1)

/** \brief  Length for Ifx_CPU_FPU_TRAP_CON_Bits.TST */
#define IFX_CPU_FPU_TRAP_CON_TST_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_CON_Bits.TST */
#define IFX_CPU_FPU_TRAP_CON_TST_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_CON_Bits.TST */
#define IFX_CPU_FPU_TRAP_CON_TST_OFF (0)

/** \brief  Length for Ifx_CPU_FPU_TRAP_OPC_Bits.DREG */
#define IFX_CPU_FPU_TRAP_OPC_DREG_LEN (4)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_OPC_Bits.DREG */
#define IFX_CPU_FPU_TRAP_OPC_DREG_MSK (0xf)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_OPC_Bits.DREG */
#define IFX_CPU_FPU_TRAP_OPC_DREG_OFF (16)

/** \brief  Length for Ifx_CPU_FPU_TRAP_OPC_Bits.FMT */
#define IFX_CPU_FPU_TRAP_OPC_FMT_LEN (1)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_OPC_Bits.FMT */
#define IFX_CPU_FPU_TRAP_OPC_FMT_MSK (0x1)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_OPC_Bits.FMT */
#define IFX_CPU_FPU_TRAP_OPC_FMT_OFF (8)

/** \brief  Length for Ifx_CPU_FPU_TRAP_OPC_Bits.OPC */
#define IFX_CPU_FPU_TRAP_OPC_OPC_LEN (8)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_OPC_Bits.OPC */
#define IFX_CPU_FPU_TRAP_OPC_OPC_MSK (0xff)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_OPC_Bits.OPC */
#define IFX_CPU_FPU_TRAP_OPC_OPC_OFF (0)

/** \brief  Length for Ifx_CPU_FPU_TRAP_PC_Bits.PC */
#define IFX_CPU_FPU_TRAP_PC_PC_LEN (32)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_PC_Bits.PC */
#define IFX_CPU_FPU_TRAP_PC_PC_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_PC_Bits.PC */
#define IFX_CPU_FPU_TRAP_PC_PC_OFF (0)

/** \brief  Length for Ifx_CPU_FPU_TRAP_SRC1_Bits.SRC1 */
#define IFX_CPU_FPU_TRAP_SRC1_SRC1_LEN (32)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_SRC1_Bits.SRC1 */
#define IFX_CPU_FPU_TRAP_SRC1_SRC1_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_SRC1_Bits.SRC1 */
#define IFX_CPU_FPU_TRAP_SRC1_SRC1_OFF (0)

/** \brief  Length for Ifx_CPU_FPU_TRAP_SRC2_Bits.SRC2 */
#define IFX_CPU_FPU_TRAP_SRC2_SRC2_LEN (32)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_SRC2_Bits.SRC2 */
#define IFX_CPU_FPU_TRAP_SRC2_SRC2_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_SRC2_Bits.SRC2 */
#define IFX_CPU_FPU_TRAP_SRC2_SRC2_OFF (0)

/** \brief  Length for Ifx_CPU_FPU_TRAP_SRC3_Bits.SRC3 */
#define IFX_CPU_FPU_TRAP_SRC3_SRC3_LEN (32)

/** \brief  Mask for Ifx_CPU_FPU_TRAP_SRC3_Bits.SRC3 */
#define IFX_CPU_FPU_TRAP_SRC3_SRC3_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_FPU_TRAP_SRC3_Bits.SRC3 */
#define IFX_CPU_FPU_TRAP_SRC3_SRC3_OFF (0)

/** \brief  Length for Ifx_CPU_ICNT_Bits.CountValue */
#define IFX_CPU_ICNT_COUNTVALUE_LEN (31)

/** \brief  Mask for Ifx_CPU_ICNT_Bits.CountValue */
#define IFX_CPU_ICNT_COUNTVALUE_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_ICNT_Bits.CountValue */
#define IFX_CPU_ICNT_COUNTVALUE_OFF (0)

/** \brief  Length for Ifx_CPU_ICNT_Bits.SOvf */
#define IFX_CPU_ICNT_SOVF_LEN (1)

/** \brief  Mask for Ifx_CPU_ICNT_Bits.SOvf */
#define IFX_CPU_ICNT_SOVF_MSK (0x1)

/** \brief  Offset for Ifx_CPU_ICNT_Bits.SOvf */
#define IFX_CPU_ICNT_SOVF_OFF (31)

/** \brief  Length for Ifx_CPU_ICR_Bits.CCPN */
#define IFX_CPU_ICR_CCPN_LEN (10)

/** \brief  Mask for Ifx_CPU_ICR_Bits.CCPN */
#define IFX_CPU_ICR_CCPN_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_ICR_Bits.CCPN */
#define IFX_CPU_ICR_CCPN_OFF (0)

/** \brief  Length for Ifx_CPU_ICR_Bits.IE */
#define IFX_CPU_ICR_IE_LEN (1)

/** \brief  Mask for Ifx_CPU_ICR_Bits.IE */
#define IFX_CPU_ICR_IE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_ICR_Bits.IE */
#define IFX_CPU_ICR_IE_OFF (15)

/** \brief  Length for Ifx_CPU_ICR_Bits.PIPN */
#define IFX_CPU_ICR_PIPN_LEN (10)

/** \brief  Mask for Ifx_CPU_ICR_Bits.PIPN */
#define IFX_CPU_ICR_PIPN_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_ICR_Bits.PIPN */
#define IFX_CPU_ICR_PIPN_OFF (16)

/** \brief  Length for Ifx_CPU_ISP_Bits.ISP */
#define IFX_CPU_ISP_ISP_LEN (32)

/** \brief  Mask for Ifx_CPU_ISP_Bits.ISP */
#define IFX_CPU_ISP_ISP_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_ISP_Bits.ISP */
#define IFX_CPU_ISP_ISP_OFF (0)

/** \brief  Length for Ifx_CPU_KRST0_Bits.RST */
#define IFX_CPU_KRST0_RST_LEN (1)

/** \brief  Mask for Ifx_CPU_KRST0_Bits.RST */
#define IFX_CPU_KRST0_RST_MSK (0x1)

/** \brief  Offset for Ifx_CPU_KRST0_Bits.RST */
#define IFX_CPU_KRST0_RST_OFF (0)

/** \brief  Length for Ifx_CPU_KRST0_Bits.RSTSTAT */
#define IFX_CPU_KRST0_RSTSTAT_LEN (2)

/** \brief  Mask for Ifx_CPU_KRST0_Bits.RSTSTAT */
#define IFX_CPU_KRST0_RSTSTAT_MSK (0x3)

/** \brief  Offset for Ifx_CPU_KRST0_Bits.RSTSTAT */
#define IFX_CPU_KRST0_RSTSTAT_OFF (1)

/** \brief  Length for Ifx_CPU_KRST1_Bits.RST */
#define IFX_CPU_KRST1_RST_LEN (1)

/** \brief  Mask for Ifx_CPU_KRST1_Bits.RST */
#define IFX_CPU_KRST1_RST_MSK (0x1)

/** \brief  Offset for Ifx_CPU_KRST1_Bits.RST */
#define IFX_CPU_KRST1_RST_OFF (0)

/** \brief  Length for Ifx_CPU_KRSTCLR_Bits.CLR */
#define IFX_CPU_KRSTCLR_CLR_LEN (1)

/** \brief  Mask for Ifx_CPU_KRSTCLR_Bits.CLR */
#define IFX_CPU_KRSTCLR_CLR_MSK (0x1)

/** \brief  Offset for Ifx_CPU_KRSTCLR_Bits.CLR */
#define IFX_CPU_KRSTCLR_CLR_OFF (0)

/** \brief  Length for Ifx_CPU_LCX_Bits.LCXO */
#define IFX_CPU_LCX_LCXO_LEN (16)

/** \brief  Mask for Ifx_CPU_LCX_Bits.LCXO */
#define IFX_CPU_LCX_LCXO_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_LCX_Bits.LCXO */
#define IFX_CPU_LCX_LCXO_OFF (0)

/** \brief  Length for Ifx_CPU_LCX_Bits.LCXS */
#define IFX_CPU_LCX_LCXS_LEN (4)

/** \brief  Mask for Ifx_CPU_LCX_Bits.LCXS */
#define IFX_CPU_LCX_LCXS_MSK (0xf)

/** \brief  Offset for Ifx_CPU_LCX_Bits.LCXS */
#define IFX_CPU_LCX_LCXS_OFF (16)

/** \brief  Length for Ifx_CPU_LPB_SPROT_ACCENA_R_Bits.EN */
#define IFX_CPU_LPB_SPROT_ACCENA_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_LPB_SPROT_ACCENA_R_Bits.EN */
#define IFX_CPU_LPB_SPROT_ACCENA_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_LPB_SPROT_ACCENA_R_Bits.EN */
#define IFX_CPU_LPB_SPROT_ACCENA_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_M1CNT_Bits.CountValue */
#define IFX_CPU_M1CNT_COUNTVALUE_LEN (31)

/** \brief  Mask for Ifx_CPU_M1CNT_Bits.CountValue */
#define IFX_CPU_M1CNT_COUNTVALUE_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_M1CNT_Bits.CountValue */
#define IFX_CPU_M1CNT_COUNTVALUE_OFF (0)

/** \brief  Length for Ifx_CPU_M1CNT_Bits.SOvf */
#define IFX_CPU_M1CNT_SOVF_LEN (1)

/** \brief  Mask for Ifx_CPU_M1CNT_Bits.SOvf */
#define IFX_CPU_M1CNT_SOVF_MSK (0x1)

/** \brief  Offset for Ifx_CPU_M1CNT_Bits.SOvf */
#define IFX_CPU_M1CNT_SOVF_OFF (31)

/** \brief  Length for Ifx_CPU_M2CNT_Bits.CountValue */
#define IFX_CPU_M2CNT_COUNTVALUE_LEN (31)

/** \brief  Mask for Ifx_CPU_M2CNT_Bits.CountValue */
#define IFX_CPU_M2CNT_COUNTVALUE_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_M2CNT_Bits.CountValue */
#define IFX_CPU_M2CNT_COUNTVALUE_OFF (0)

/** \brief  Length for Ifx_CPU_M2CNT_Bits.SOvf */
#define IFX_CPU_M2CNT_SOVF_LEN (1)

/** \brief  Mask for Ifx_CPU_M2CNT_Bits.SOvf */
#define IFX_CPU_M2CNT_SOVF_MSK (0x1)

/** \brief  Offset for Ifx_CPU_M2CNT_Bits.SOvf */
#define IFX_CPU_M2CNT_SOVF_OFF (31)

/** \brief  Length for Ifx_CPU_M3CNT_Bits.CountValue */
#define IFX_CPU_M3CNT_COUNTVALUE_LEN (31)

/** \brief  Mask for Ifx_CPU_M3CNT_Bits.CountValue */
#define IFX_CPU_M3CNT_COUNTVALUE_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_M3CNT_Bits.CountValue */
#define IFX_CPU_M3CNT_COUNTVALUE_OFF (0)

/** \brief  Length for Ifx_CPU_M3CNT_Bits.SOvf */
#define IFX_CPU_M3CNT_SOVF_LEN (1)

/** \brief  Mask for Ifx_CPU_M3CNT_Bits.SOvf */
#define IFX_CPU_M3CNT_SOVF_MSK (0x1)

/** \brief  Offset for Ifx_CPU_M3CNT_Bits.SOvf */
#define IFX_CPU_M3CNT_SOVF_OFF (31)

/** \brief  Length for Ifx_CPU_OMASK0_Bits.OMASK */
#define IFX_CPU_OMASK0_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK0_Bits.OMASK */
#define IFX_CPU_OMASK0_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK0_Bits.OMASK */
#define IFX_CPU_OMASK0_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK0_Bits.ONE */
#define IFX_CPU_OMASK0_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK0_Bits.ONE */
#define IFX_CPU_OMASK0_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK0_Bits.ONE */
#define IFX_CPU_OMASK0_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK10_Bits.OMASK */
#define IFX_CPU_OMASK10_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK10_Bits.OMASK */
#define IFX_CPU_OMASK10_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK10_Bits.OMASK */
#define IFX_CPU_OMASK10_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK10_Bits.ONE */
#define IFX_CPU_OMASK10_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK10_Bits.ONE */
#define IFX_CPU_OMASK10_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK10_Bits.ONE */
#define IFX_CPU_OMASK10_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK11_Bits.OMASK */
#define IFX_CPU_OMASK11_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK11_Bits.OMASK */
#define IFX_CPU_OMASK11_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK11_Bits.OMASK */
#define IFX_CPU_OMASK11_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK11_Bits.ONE */
#define IFX_CPU_OMASK11_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK11_Bits.ONE */
#define IFX_CPU_OMASK11_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK11_Bits.ONE */
#define IFX_CPU_OMASK11_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK12_Bits.OMASK */
#define IFX_CPU_OMASK12_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK12_Bits.OMASK */
#define IFX_CPU_OMASK12_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK12_Bits.OMASK */
#define IFX_CPU_OMASK12_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK12_Bits.ONE */
#define IFX_CPU_OMASK12_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK12_Bits.ONE */
#define IFX_CPU_OMASK12_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK12_Bits.ONE */
#define IFX_CPU_OMASK12_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK13_Bits.OMASK */
#define IFX_CPU_OMASK13_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK13_Bits.OMASK */
#define IFX_CPU_OMASK13_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK13_Bits.OMASK */
#define IFX_CPU_OMASK13_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK13_Bits.ONE */
#define IFX_CPU_OMASK13_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK13_Bits.ONE */
#define IFX_CPU_OMASK13_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK13_Bits.ONE */
#define IFX_CPU_OMASK13_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK14_Bits.OMASK */
#define IFX_CPU_OMASK14_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK14_Bits.OMASK */
#define IFX_CPU_OMASK14_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK14_Bits.OMASK */
#define IFX_CPU_OMASK14_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK14_Bits.ONE */
#define IFX_CPU_OMASK14_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK14_Bits.ONE */
#define IFX_CPU_OMASK14_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK14_Bits.ONE */
#define IFX_CPU_OMASK14_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK15_Bits.OMASK */
#define IFX_CPU_OMASK15_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK15_Bits.OMASK */
#define IFX_CPU_OMASK15_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK15_Bits.OMASK */
#define IFX_CPU_OMASK15_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK15_Bits.ONE */
#define IFX_CPU_OMASK15_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK15_Bits.ONE */
#define IFX_CPU_OMASK15_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK15_Bits.ONE */
#define IFX_CPU_OMASK15_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK16_Bits.OMASK */
#define IFX_CPU_OMASK16_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK16_Bits.OMASK */
#define IFX_CPU_OMASK16_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK16_Bits.OMASK */
#define IFX_CPU_OMASK16_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK16_Bits.ONE */
#define IFX_CPU_OMASK16_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK16_Bits.ONE */
#define IFX_CPU_OMASK16_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK16_Bits.ONE */
#define IFX_CPU_OMASK16_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK17_Bits.OMASK */
#define IFX_CPU_OMASK17_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK17_Bits.OMASK */
#define IFX_CPU_OMASK17_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK17_Bits.OMASK */
#define IFX_CPU_OMASK17_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK17_Bits.ONE */
#define IFX_CPU_OMASK17_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK17_Bits.ONE */
#define IFX_CPU_OMASK17_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK17_Bits.ONE */
#define IFX_CPU_OMASK17_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK18_Bits.OMASK */
#define IFX_CPU_OMASK18_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK18_Bits.OMASK */
#define IFX_CPU_OMASK18_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK18_Bits.OMASK */
#define IFX_CPU_OMASK18_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK18_Bits.ONE */
#define IFX_CPU_OMASK18_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK18_Bits.ONE */
#define IFX_CPU_OMASK18_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK18_Bits.ONE */
#define IFX_CPU_OMASK18_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK19_Bits.OMASK */
#define IFX_CPU_OMASK19_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK19_Bits.OMASK */
#define IFX_CPU_OMASK19_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK19_Bits.OMASK */
#define IFX_CPU_OMASK19_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK19_Bits.ONE */
#define IFX_CPU_OMASK19_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK19_Bits.ONE */
#define IFX_CPU_OMASK19_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK19_Bits.ONE */
#define IFX_CPU_OMASK19_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK1_Bits.OMASK */
#define IFX_CPU_OMASK1_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK1_Bits.OMASK */
#define IFX_CPU_OMASK1_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK1_Bits.OMASK */
#define IFX_CPU_OMASK1_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK1_Bits.ONE */
#define IFX_CPU_OMASK1_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK1_Bits.ONE */
#define IFX_CPU_OMASK1_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK1_Bits.ONE */
#define IFX_CPU_OMASK1_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK20_Bits.OMASK */
#define IFX_CPU_OMASK20_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK20_Bits.OMASK */
#define IFX_CPU_OMASK20_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK20_Bits.OMASK */
#define IFX_CPU_OMASK20_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK20_Bits.ONE */
#define IFX_CPU_OMASK20_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK20_Bits.ONE */
#define IFX_CPU_OMASK20_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK20_Bits.ONE */
#define IFX_CPU_OMASK20_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK21_Bits.OMASK */
#define IFX_CPU_OMASK21_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK21_Bits.OMASK */
#define IFX_CPU_OMASK21_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK21_Bits.OMASK */
#define IFX_CPU_OMASK21_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK21_Bits.ONE */
#define IFX_CPU_OMASK21_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK21_Bits.ONE */
#define IFX_CPU_OMASK21_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK21_Bits.ONE */
#define IFX_CPU_OMASK21_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK22_Bits.OMASK */
#define IFX_CPU_OMASK22_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK22_Bits.OMASK */
#define IFX_CPU_OMASK22_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK22_Bits.OMASK */
#define IFX_CPU_OMASK22_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK22_Bits.ONE */
#define IFX_CPU_OMASK22_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK22_Bits.ONE */
#define IFX_CPU_OMASK22_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK22_Bits.ONE */
#define IFX_CPU_OMASK22_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK23_Bits.OMASK */
#define IFX_CPU_OMASK23_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK23_Bits.OMASK */
#define IFX_CPU_OMASK23_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK23_Bits.OMASK */
#define IFX_CPU_OMASK23_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK23_Bits.ONE */
#define IFX_CPU_OMASK23_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK23_Bits.ONE */
#define IFX_CPU_OMASK23_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK23_Bits.ONE */
#define IFX_CPU_OMASK23_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK24_Bits.OMASK */
#define IFX_CPU_OMASK24_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK24_Bits.OMASK */
#define IFX_CPU_OMASK24_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK24_Bits.OMASK */
#define IFX_CPU_OMASK24_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK24_Bits.ONE */
#define IFX_CPU_OMASK24_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK24_Bits.ONE */
#define IFX_CPU_OMASK24_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK24_Bits.ONE */
#define IFX_CPU_OMASK24_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK25_Bits.OMASK */
#define IFX_CPU_OMASK25_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK25_Bits.OMASK */
#define IFX_CPU_OMASK25_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK25_Bits.OMASK */
#define IFX_CPU_OMASK25_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK25_Bits.ONE */
#define IFX_CPU_OMASK25_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK25_Bits.ONE */
#define IFX_CPU_OMASK25_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK25_Bits.ONE */
#define IFX_CPU_OMASK25_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK26_Bits.OMASK */
#define IFX_CPU_OMASK26_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK26_Bits.OMASK */
#define IFX_CPU_OMASK26_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK26_Bits.OMASK */
#define IFX_CPU_OMASK26_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK26_Bits.ONE */
#define IFX_CPU_OMASK26_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK26_Bits.ONE */
#define IFX_CPU_OMASK26_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK26_Bits.ONE */
#define IFX_CPU_OMASK26_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK27_Bits.OMASK */
#define IFX_CPU_OMASK27_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK27_Bits.OMASK */
#define IFX_CPU_OMASK27_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK27_Bits.OMASK */
#define IFX_CPU_OMASK27_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK27_Bits.ONE */
#define IFX_CPU_OMASK27_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK27_Bits.ONE */
#define IFX_CPU_OMASK27_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK27_Bits.ONE */
#define IFX_CPU_OMASK27_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK28_Bits.OMASK */
#define IFX_CPU_OMASK28_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK28_Bits.OMASK */
#define IFX_CPU_OMASK28_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK28_Bits.OMASK */
#define IFX_CPU_OMASK28_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK28_Bits.ONE */
#define IFX_CPU_OMASK28_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK28_Bits.ONE */
#define IFX_CPU_OMASK28_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK28_Bits.ONE */
#define IFX_CPU_OMASK28_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK29_Bits.OMASK */
#define IFX_CPU_OMASK29_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK29_Bits.OMASK */
#define IFX_CPU_OMASK29_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK29_Bits.OMASK */
#define IFX_CPU_OMASK29_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK29_Bits.ONE */
#define IFX_CPU_OMASK29_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK29_Bits.ONE */
#define IFX_CPU_OMASK29_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK29_Bits.ONE */
#define IFX_CPU_OMASK29_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK2_Bits.OMASK */
#define IFX_CPU_OMASK2_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK2_Bits.OMASK */
#define IFX_CPU_OMASK2_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK2_Bits.OMASK */
#define IFX_CPU_OMASK2_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK2_Bits.ONE */
#define IFX_CPU_OMASK2_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK2_Bits.ONE */
#define IFX_CPU_OMASK2_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK2_Bits.ONE */
#define IFX_CPU_OMASK2_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK30_Bits.OMASK */
#define IFX_CPU_OMASK30_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK30_Bits.OMASK */
#define IFX_CPU_OMASK30_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK30_Bits.OMASK */
#define IFX_CPU_OMASK30_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK30_Bits.ONE */
#define IFX_CPU_OMASK30_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK30_Bits.ONE */
#define IFX_CPU_OMASK30_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK30_Bits.ONE */
#define IFX_CPU_OMASK30_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK31_Bits.OMASK */
#define IFX_CPU_OMASK31_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK31_Bits.OMASK */
#define IFX_CPU_OMASK31_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK31_Bits.OMASK */
#define IFX_CPU_OMASK31_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK31_Bits.ONE */
#define IFX_CPU_OMASK31_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK31_Bits.ONE */
#define IFX_CPU_OMASK31_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK31_Bits.ONE */
#define IFX_CPU_OMASK31_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK3_Bits.OMASK */
#define IFX_CPU_OMASK3_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK3_Bits.OMASK */
#define IFX_CPU_OMASK3_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK3_Bits.OMASK */
#define IFX_CPU_OMASK3_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK3_Bits.ONE */
#define IFX_CPU_OMASK3_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK3_Bits.ONE */
#define IFX_CPU_OMASK3_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK3_Bits.ONE */
#define IFX_CPU_OMASK3_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK4_Bits.OMASK */
#define IFX_CPU_OMASK4_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK4_Bits.OMASK */
#define IFX_CPU_OMASK4_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK4_Bits.OMASK */
#define IFX_CPU_OMASK4_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK4_Bits.ONE */
#define IFX_CPU_OMASK4_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK4_Bits.ONE */
#define IFX_CPU_OMASK4_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK4_Bits.ONE */
#define IFX_CPU_OMASK4_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK5_Bits.OMASK */
#define IFX_CPU_OMASK5_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK5_Bits.OMASK */
#define IFX_CPU_OMASK5_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK5_Bits.OMASK */
#define IFX_CPU_OMASK5_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK5_Bits.ONE */
#define IFX_CPU_OMASK5_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK5_Bits.ONE */
#define IFX_CPU_OMASK5_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK5_Bits.ONE */
#define IFX_CPU_OMASK5_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK6_Bits.OMASK */
#define IFX_CPU_OMASK6_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK6_Bits.OMASK */
#define IFX_CPU_OMASK6_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK6_Bits.OMASK */
#define IFX_CPU_OMASK6_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK6_Bits.ONE */
#define IFX_CPU_OMASK6_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK6_Bits.ONE */
#define IFX_CPU_OMASK6_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK6_Bits.ONE */
#define IFX_CPU_OMASK6_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK7_Bits.OMASK */
#define IFX_CPU_OMASK7_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK7_Bits.OMASK */
#define IFX_CPU_OMASK7_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK7_Bits.OMASK */
#define IFX_CPU_OMASK7_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK7_Bits.ONE */
#define IFX_CPU_OMASK7_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK7_Bits.ONE */
#define IFX_CPU_OMASK7_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK7_Bits.ONE */
#define IFX_CPU_OMASK7_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK8_Bits.OMASK */
#define IFX_CPU_OMASK8_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK8_Bits.OMASK */
#define IFX_CPU_OMASK8_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK8_Bits.OMASK */
#define IFX_CPU_OMASK8_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK8_Bits.ONE */
#define IFX_CPU_OMASK8_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK8_Bits.ONE */
#define IFX_CPU_OMASK8_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK8_Bits.ONE */
#define IFX_CPU_OMASK8_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OMASK9_Bits.OMASK */
#define IFX_CPU_OMASK9_OMASK_LEN (12)

/** \brief  Mask for Ifx_CPU_OMASK9_Bits.OMASK */
#define IFX_CPU_OMASK9_OMASK_MSK (0xfff)

/** \brief  Offset for Ifx_CPU_OMASK9_Bits.OMASK */
#define IFX_CPU_OMASK9_OMASK_OFF (5)

/** \brief  Length for Ifx_CPU_OMASK9_Bits.ONE */
#define IFX_CPU_OMASK9_ONE_LEN (11)

/** \brief  Mask for Ifx_CPU_OMASK9_Bits.ONE */
#define IFX_CPU_OMASK9_ONE_MSK (0x7ff)

/** \brief  Offset for Ifx_CPU_OMASK9_Bits.ONE */
#define IFX_CPU_OMASK9_ONE_OFF (17)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN0 */
#define IFX_CPU_OSEL_SHOVEN0_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN0 */
#define IFX_CPU_OSEL_SHOVEN0_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN0 */
#define IFX_CPU_OSEL_SHOVEN0_OFF (0)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN10 */
#define IFX_CPU_OSEL_SHOVEN10_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN10 */
#define IFX_CPU_OSEL_SHOVEN10_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN10 */
#define IFX_CPU_OSEL_SHOVEN10_OFF (10)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN11 */
#define IFX_CPU_OSEL_SHOVEN11_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN11 */
#define IFX_CPU_OSEL_SHOVEN11_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN11 */
#define IFX_CPU_OSEL_SHOVEN11_OFF (11)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN12 */
#define IFX_CPU_OSEL_SHOVEN12_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN12 */
#define IFX_CPU_OSEL_SHOVEN12_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN12 */
#define IFX_CPU_OSEL_SHOVEN12_OFF (12)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN13 */
#define IFX_CPU_OSEL_SHOVEN13_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN13 */
#define IFX_CPU_OSEL_SHOVEN13_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN13 */
#define IFX_CPU_OSEL_SHOVEN13_OFF (13)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN14 */
#define IFX_CPU_OSEL_SHOVEN14_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN14 */
#define IFX_CPU_OSEL_SHOVEN14_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN14 */
#define IFX_CPU_OSEL_SHOVEN14_OFF (14)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN15 */
#define IFX_CPU_OSEL_SHOVEN15_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN15 */
#define IFX_CPU_OSEL_SHOVEN15_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN15 */
#define IFX_CPU_OSEL_SHOVEN15_OFF (15)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN16 */
#define IFX_CPU_OSEL_SHOVEN16_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN16 */
#define IFX_CPU_OSEL_SHOVEN16_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN16 */
#define IFX_CPU_OSEL_SHOVEN16_OFF (16)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN17 */
#define IFX_CPU_OSEL_SHOVEN17_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN17 */
#define IFX_CPU_OSEL_SHOVEN17_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN17 */
#define IFX_CPU_OSEL_SHOVEN17_OFF (17)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN18 */
#define IFX_CPU_OSEL_SHOVEN18_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN18 */
#define IFX_CPU_OSEL_SHOVEN18_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN18 */
#define IFX_CPU_OSEL_SHOVEN18_OFF (18)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN19 */
#define IFX_CPU_OSEL_SHOVEN19_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN19 */
#define IFX_CPU_OSEL_SHOVEN19_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN19 */
#define IFX_CPU_OSEL_SHOVEN19_OFF (19)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN1 */
#define IFX_CPU_OSEL_SHOVEN1_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN1 */
#define IFX_CPU_OSEL_SHOVEN1_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN1 */
#define IFX_CPU_OSEL_SHOVEN1_OFF (1)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN20 */
#define IFX_CPU_OSEL_SHOVEN20_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN20 */
#define IFX_CPU_OSEL_SHOVEN20_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN20 */
#define IFX_CPU_OSEL_SHOVEN20_OFF (20)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN21 */
#define IFX_CPU_OSEL_SHOVEN21_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN21 */
#define IFX_CPU_OSEL_SHOVEN21_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN21 */
#define IFX_CPU_OSEL_SHOVEN21_OFF (21)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN22 */
#define IFX_CPU_OSEL_SHOVEN22_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN22 */
#define IFX_CPU_OSEL_SHOVEN22_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN22 */
#define IFX_CPU_OSEL_SHOVEN22_OFF (22)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN23 */
#define IFX_CPU_OSEL_SHOVEN23_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN23 */
#define IFX_CPU_OSEL_SHOVEN23_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN23 */
#define IFX_CPU_OSEL_SHOVEN23_OFF (23)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN24 */
#define IFX_CPU_OSEL_SHOVEN24_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN24 */
#define IFX_CPU_OSEL_SHOVEN24_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN24 */
#define IFX_CPU_OSEL_SHOVEN24_OFF (24)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN25 */
#define IFX_CPU_OSEL_SHOVEN25_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN25 */
#define IFX_CPU_OSEL_SHOVEN25_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN25 */
#define IFX_CPU_OSEL_SHOVEN25_OFF (25)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN26 */
#define IFX_CPU_OSEL_SHOVEN26_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN26 */
#define IFX_CPU_OSEL_SHOVEN26_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN26 */
#define IFX_CPU_OSEL_SHOVEN26_OFF (26)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN27 */
#define IFX_CPU_OSEL_SHOVEN27_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN27 */
#define IFX_CPU_OSEL_SHOVEN27_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN27 */
#define IFX_CPU_OSEL_SHOVEN27_OFF (27)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN28 */
#define IFX_CPU_OSEL_SHOVEN28_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN28 */
#define IFX_CPU_OSEL_SHOVEN28_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN28 */
#define IFX_CPU_OSEL_SHOVEN28_OFF (28)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN29 */
#define IFX_CPU_OSEL_SHOVEN29_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN29 */
#define IFX_CPU_OSEL_SHOVEN29_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN29 */
#define IFX_CPU_OSEL_SHOVEN29_OFF (29)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN2 */
#define IFX_CPU_OSEL_SHOVEN2_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN2 */
#define IFX_CPU_OSEL_SHOVEN2_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN2 */
#define IFX_CPU_OSEL_SHOVEN2_OFF (2)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN30 */
#define IFX_CPU_OSEL_SHOVEN30_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN30 */
#define IFX_CPU_OSEL_SHOVEN30_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN30 */
#define IFX_CPU_OSEL_SHOVEN30_OFF (30)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN31 */
#define IFX_CPU_OSEL_SHOVEN31_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN31 */
#define IFX_CPU_OSEL_SHOVEN31_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN31 */
#define IFX_CPU_OSEL_SHOVEN31_OFF (31)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN3 */
#define IFX_CPU_OSEL_SHOVEN3_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN3 */
#define IFX_CPU_OSEL_SHOVEN3_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN3 */
#define IFX_CPU_OSEL_SHOVEN3_OFF (3)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN4 */
#define IFX_CPU_OSEL_SHOVEN4_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN4 */
#define IFX_CPU_OSEL_SHOVEN4_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN4 */
#define IFX_CPU_OSEL_SHOVEN4_OFF (4)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN5 */
#define IFX_CPU_OSEL_SHOVEN5_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN5 */
#define IFX_CPU_OSEL_SHOVEN5_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN5 */
#define IFX_CPU_OSEL_SHOVEN5_OFF (5)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN6 */
#define IFX_CPU_OSEL_SHOVEN6_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN6 */
#define IFX_CPU_OSEL_SHOVEN6_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN6 */
#define IFX_CPU_OSEL_SHOVEN6_OFF (6)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN7 */
#define IFX_CPU_OSEL_SHOVEN7_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN7 */
#define IFX_CPU_OSEL_SHOVEN7_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN7 */
#define IFX_CPU_OSEL_SHOVEN7_OFF (7)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN8 */
#define IFX_CPU_OSEL_SHOVEN8_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN8 */
#define IFX_CPU_OSEL_SHOVEN8_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN8 */
#define IFX_CPU_OSEL_SHOVEN8_OFF (8)

/** \brief  Length for Ifx_CPU_OSEL_Bits.SHOVEN9 */
#define IFX_CPU_OSEL_SHOVEN9_LEN (1)

/** \brief  Mask for Ifx_CPU_OSEL_Bits.SHOVEN9 */
#define IFX_CPU_OSEL_SHOVEN9_MSK (0x1)

/** \brief  Offset for Ifx_CPU_OSEL_Bits.SHOVEN9 */
#define IFX_CPU_OSEL_SHOVEN9_OFF (9)

/** \brief  Length for Ifx_CPU_OTAR0_Bits.TBASE */
#define IFX_CPU_OTAR0_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR0_Bits.TBASE */
#define IFX_CPU_OTAR0_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR0_Bits.TBASE */
#define IFX_CPU_OTAR0_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR10_Bits.TBASE */
#define IFX_CPU_OTAR10_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR10_Bits.TBASE */
#define IFX_CPU_OTAR10_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR10_Bits.TBASE */
#define IFX_CPU_OTAR10_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR11_Bits.TBASE */
#define IFX_CPU_OTAR11_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR11_Bits.TBASE */
#define IFX_CPU_OTAR11_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR11_Bits.TBASE */
#define IFX_CPU_OTAR11_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR12_Bits.TBASE */
#define IFX_CPU_OTAR12_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR12_Bits.TBASE */
#define IFX_CPU_OTAR12_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR12_Bits.TBASE */
#define IFX_CPU_OTAR12_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR13_Bits.TBASE */
#define IFX_CPU_OTAR13_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR13_Bits.TBASE */
#define IFX_CPU_OTAR13_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR13_Bits.TBASE */
#define IFX_CPU_OTAR13_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR14_Bits.TBASE */
#define IFX_CPU_OTAR14_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR14_Bits.TBASE */
#define IFX_CPU_OTAR14_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR14_Bits.TBASE */
#define IFX_CPU_OTAR14_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR15_Bits.TBASE */
#define IFX_CPU_OTAR15_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR15_Bits.TBASE */
#define IFX_CPU_OTAR15_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR15_Bits.TBASE */
#define IFX_CPU_OTAR15_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR16_Bits.TBASE */
#define IFX_CPU_OTAR16_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR16_Bits.TBASE */
#define IFX_CPU_OTAR16_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR16_Bits.TBASE */
#define IFX_CPU_OTAR16_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR17_Bits.TBASE */
#define IFX_CPU_OTAR17_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR17_Bits.TBASE */
#define IFX_CPU_OTAR17_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR17_Bits.TBASE */
#define IFX_CPU_OTAR17_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR18_Bits.TBASE */
#define IFX_CPU_OTAR18_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR18_Bits.TBASE */
#define IFX_CPU_OTAR18_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR18_Bits.TBASE */
#define IFX_CPU_OTAR18_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR19_Bits.TBASE */
#define IFX_CPU_OTAR19_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR19_Bits.TBASE */
#define IFX_CPU_OTAR19_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR19_Bits.TBASE */
#define IFX_CPU_OTAR19_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR1_Bits.TBASE */
#define IFX_CPU_OTAR1_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR1_Bits.TBASE */
#define IFX_CPU_OTAR1_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR1_Bits.TBASE */
#define IFX_CPU_OTAR1_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR20_Bits.TBASE */
#define IFX_CPU_OTAR20_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR20_Bits.TBASE */
#define IFX_CPU_OTAR20_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR20_Bits.TBASE */
#define IFX_CPU_OTAR20_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR21_Bits.TBASE */
#define IFX_CPU_OTAR21_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR21_Bits.TBASE */
#define IFX_CPU_OTAR21_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR21_Bits.TBASE */
#define IFX_CPU_OTAR21_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR22_Bits.TBASE */
#define IFX_CPU_OTAR22_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR22_Bits.TBASE */
#define IFX_CPU_OTAR22_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR22_Bits.TBASE */
#define IFX_CPU_OTAR22_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR23_Bits.TBASE */
#define IFX_CPU_OTAR23_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR23_Bits.TBASE */
#define IFX_CPU_OTAR23_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR23_Bits.TBASE */
#define IFX_CPU_OTAR23_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR24_Bits.TBASE */
#define IFX_CPU_OTAR24_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR24_Bits.TBASE */
#define IFX_CPU_OTAR24_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR24_Bits.TBASE */
#define IFX_CPU_OTAR24_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR25_Bits.TBASE */
#define IFX_CPU_OTAR25_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR25_Bits.TBASE */
#define IFX_CPU_OTAR25_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR25_Bits.TBASE */
#define IFX_CPU_OTAR25_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR26_Bits.TBASE */
#define IFX_CPU_OTAR26_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR26_Bits.TBASE */
#define IFX_CPU_OTAR26_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR26_Bits.TBASE */
#define IFX_CPU_OTAR26_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR27_Bits.TBASE */
#define IFX_CPU_OTAR27_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR27_Bits.TBASE */
#define IFX_CPU_OTAR27_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR27_Bits.TBASE */
#define IFX_CPU_OTAR27_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR28_Bits.TBASE */
#define IFX_CPU_OTAR28_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR28_Bits.TBASE */
#define IFX_CPU_OTAR28_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR28_Bits.TBASE */
#define IFX_CPU_OTAR28_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR29_Bits.TBASE */
#define IFX_CPU_OTAR29_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR29_Bits.TBASE */
#define IFX_CPU_OTAR29_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR29_Bits.TBASE */
#define IFX_CPU_OTAR29_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR2_Bits.TBASE */
#define IFX_CPU_OTAR2_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR2_Bits.TBASE */
#define IFX_CPU_OTAR2_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR2_Bits.TBASE */
#define IFX_CPU_OTAR2_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR30_Bits.TBASE */
#define IFX_CPU_OTAR30_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR30_Bits.TBASE */
#define IFX_CPU_OTAR30_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR30_Bits.TBASE */
#define IFX_CPU_OTAR30_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR31_Bits.TBASE */
#define IFX_CPU_OTAR31_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR31_Bits.TBASE */
#define IFX_CPU_OTAR31_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR31_Bits.TBASE */
#define IFX_CPU_OTAR31_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR3_Bits.TBASE */
#define IFX_CPU_OTAR3_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR3_Bits.TBASE */
#define IFX_CPU_OTAR3_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR3_Bits.TBASE */
#define IFX_CPU_OTAR3_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR4_Bits.TBASE */
#define IFX_CPU_OTAR4_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR4_Bits.TBASE */
#define IFX_CPU_OTAR4_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR4_Bits.TBASE */
#define IFX_CPU_OTAR4_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR5_Bits.TBASE */
#define IFX_CPU_OTAR5_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR5_Bits.TBASE */
#define IFX_CPU_OTAR5_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR5_Bits.TBASE */
#define IFX_CPU_OTAR5_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR6_Bits.TBASE */
#define IFX_CPU_OTAR6_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR6_Bits.TBASE */
#define IFX_CPU_OTAR6_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR6_Bits.TBASE */
#define IFX_CPU_OTAR6_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR7_Bits.TBASE */
#define IFX_CPU_OTAR7_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR7_Bits.TBASE */
#define IFX_CPU_OTAR7_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR7_Bits.TBASE */
#define IFX_CPU_OTAR7_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR8_Bits.TBASE */
#define IFX_CPU_OTAR8_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR8_Bits.TBASE */
#define IFX_CPU_OTAR8_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR8_Bits.TBASE */
#define IFX_CPU_OTAR8_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_OTAR9_Bits.TBASE */
#define IFX_CPU_OTAR9_TBASE_LEN (23)

/** \brief  Mask for Ifx_CPU_OTAR9_Bits.TBASE */
#define IFX_CPU_OTAR9_TBASE_MSK (0x7fffff)

/** \brief  Offset for Ifx_CPU_OTAR9_Bits.TBASE */
#define IFX_CPU_OTAR9_TBASE_OFF (5)

/** \brief  Length for Ifx_CPU_PC_Bits.PC */
#define IFX_CPU_PC_PC_LEN (31)

/** \brief  Mask for Ifx_CPU_PC_Bits.PC */
#define IFX_CPU_PC_PC_MSK (0x7fffffff)

/** \brief  Offset for Ifx_CPU_PC_Bits.PC */
#define IFX_CPU_PC_PC_OFF (1)

/** \brief  Length for Ifx_CPU_PCON0_Bits.PCBYP */
#define IFX_CPU_PCON0_PCBYP_LEN (1)

/** \brief  Mask for Ifx_CPU_PCON0_Bits.PCBYP */
#define IFX_CPU_PCON0_PCBYP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PCON0_Bits.PCBYP */
#define IFX_CPU_PCON0_PCBYP_OFF (1)

/** \brief  Length for Ifx_CPU_PCON1_Bits.PBINV */
#define IFX_CPU_PCON1_PBINV_LEN (1)

/** \brief  Mask for Ifx_CPU_PCON1_Bits.PBINV */
#define IFX_CPU_PCON1_PBINV_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PCON1_Bits.PBINV */
#define IFX_CPU_PCON1_PBINV_OFF (1)

/** \brief  Length for Ifx_CPU_PCON1_Bits.PCINV */
#define IFX_CPU_PCON1_PCINV_LEN (1)

/** \brief  Mask for Ifx_CPU_PCON1_Bits.PCINV */
#define IFX_CPU_PCON1_PCINV_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PCON1_Bits.PCINV */
#define IFX_CPU_PCON1_PCINV_OFF (0)

/** \brief  Length for Ifx_CPU_PCON2_Bits.PCACHE_SZE */
#define IFX_CPU_PCON2_PCACHE_SZE_LEN (16)

/** \brief  Mask for Ifx_CPU_PCON2_Bits.PCACHE_SZE */
#define IFX_CPU_PCON2_PCACHE_SZE_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_PCON2_Bits.PCACHE_SZE */
#define IFX_CPU_PCON2_PCACHE_SZE_OFF (0)

/** \brief  Length for Ifx_CPU_PCON2_Bits.PSCRATCH_SZE */
#define IFX_CPU_PCON2_PSCRATCH_SZE_LEN (16)

/** \brief  Mask for Ifx_CPU_PCON2_Bits.PSCRATCH_SZE */
#define IFX_CPU_PCON2_PSCRATCH_SZE_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_PCON2_Bits.PSCRATCH_SZE */
#define IFX_CPU_PCON2_PSCRATCH_SZE_OFF (16)

/** \brief  Length for Ifx_CPU_PCXI_Bits.PCPN */
#define IFX_CPU_PCXI_PCPN_LEN (10)

/** \brief  Mask for Ifx_CPU_PCXI_Bits.PCPN */
#define IFX_CPU_PCXI_PCPN_MSK (0x3ff)

/** \brief  Offset for Ifx_CPU_PCXI_Bits.PCPN */
#define IFX_CPU_PCXI_PCPN_OFF (22)

/** \brief  Length for Ifx_CPU_PCXI_Bits.PCXO */
#define IFX_CPU_PCXI_PCXO_LEN (16)

/** \brief  Mask for Ifx_CPU_PCXI_Bits.PCXO */
#define IFX_CPU_PCXI_PCXO_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_PCXI_Bits.PCXO */
#define IFX_CPU_PCXI_PCXO_OFF (0)

/** \brief  Length for Ifx_CPU_PCXI_Bits.PCXS */
#define IFX_CPU_PCXI_PCXS_LEN (4)

/** \brief  Mask for Ifx_CPU_PCXI_Bits.PCXS */
#define IFX_CPU_PCXI_PCXS_MSK (0xf)

/** \brief  Offset for Ifx_CPU_PCXI_Bits.PCXS */
#define IFX_CPU_PCXI_PCXS_OFF (16)

/** \brief  Length for Ifx_CPU_PCXI_Bits.PIE */
#define IFX_CPU_PCXI_PIE_LEN (1)

/** \brief  Mask for Ifx_CPU_PCXI_Bits.PIE */
#define IFX_CPU_PCXI_PIE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PCXI_Bits.PIE */
#define IFX_CPU_PCXI_PIE_OFF (21)

/** \brief  Length for Ifx_CPU_PCXI_Bits.UL */
#define IFX_CPU_PCXI_UL_LEN (1)

/** \brief  Mask for Ifx_CPU_PCXI_Bits.UL */
#define IFX_CPU_PCXI_UL_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PCXI_Bits.UL */
#define IFX_CPU_PCXI_UL_OFF (20)

/** \brief  Length for Ifx_CPU_PIEAR_Bits.TA */
#define IFX_CPU_PIEAR_TA_LEN (32)

/** \brief  Mask for Ifx_CPU_PIEAR_Bits.TA */
#define IFX_CPU_PIEAR_TA_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_PIEAR_Bits.TA */
#define IFX_CPU_PIEAR_TA_OFF (0)

/** \brief  Length for Ifx_CPU_PIETR_Bits.E_INFO */
#define IFX_CPU_PIETR_E_INFO_LEN (6)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.E_INFO */
#define IFX_CPU_PIETR_E_INFO_MSK (0x3f)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.E_INFO */
#define IFX_CPU_PIETR_E_INFO_OFF (5)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IE_ADDR */
#define IFX_CPU_PIETR_IE_ADDR_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IE_ADDR */
#define IFX_CPU_PIETR_IE_ADDR_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IE_ADDR */
#define IFX_CPU_PIETR_IE_ADDR_OFF (14)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IE_BI */
#define IFX_CPU_PIETR_IE_BI_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IE_BI */
#define IFX_CPU_PIETR_IE_BI_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IE_BI */
#define IFX_CPU_PIETR_IE_BI_OFF (4)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IE_BS */
#define IFX_CPU_PIETR_IE_BS_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IE_BS */
#define IFX_CPU_PIETR_IE_BS_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IE_BS */
#define IFX_CPU_PIETR_IE_BS_OFF (13)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IE_C */
#define IFX_CPU_PIETR_IE_C_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IE_C */
#define IFX_CPU_PIETR_IE_C_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IE_C */
#define IFX_CPU_PIETR_IE_C_OFF (2)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IE_LPB */
#define IFX_CPU_PIETR_IE_LPB_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IE_LPB */
#define IFX_CPU_PIETR_IE_LPB_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IE_LPB */
#define IFX_CPU_PIETR_IE_LPB_OFF (15)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IE_S */
#define IFX_CPU_PIETR_IE_S_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IE_S */
#define IFX_CPU_PIETR_IE_S_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IE_S */
#define IFX_CPU_PIETR_IE_S_OFF (3)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IE_SP */
#define IFX_CPU_PIETR_IE_SP_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IE_SP */
#define IFX_CPU_PIETR_IE_SP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IE_SP */
#define IFX_CPU_PIETR_IE_SP_OFF (12)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IE_UNC */
#define IFX_CPU_PIETR_IE_UNC_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IE_UNC */
#define IFX_CPU_PIETR_IE_UNC_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IE_UNC */
#define IFX_CPU_PIETR_IE_UNC_OFF (11)

/** \brief  Length for Ifx_CPU_PIETR_Bits.IED */
#define IFX_CPU_PIETR_IED_LEN (1)

/** \brief  Mask for Ifx_CPU_PIETR_Bits.IED */
#define IFX_CPU_PIETR_IED_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PIETR_Bits.IED */
#define IFX_CPU_PIETR_IED_OFF (0)

/** \brief  Length for Ifx_CPU_PMA0_Bits.DAC */
#define IFX_CPU_PMA0_DAC_LEN (3)

/** \brief  Mask for Ifx_CPU_PMA0_Bits.DAC */
#define IFX_CPU_PMA0_DAC_MSK (0x7)

/** \brief  Offset for Ifx_CPU_PMA0_Bits.DAC */
#define IFX_CPU_PMA0_DAC_OFF (13)

/** \brief  Length for Ifx_CPU_PMA1_Bits.CAC */
#define IFX_CPU_PMA1_CAC_LEN (2)

/** \brief  Mask for Ifx_CPU_PMA1_Bits.CAC */
#define IFX_CPU_PMA1_CAC_MSK (0x3)

/** \brief  Offset for Ifx_CPU_PMA1_Bits.CAC */
#define IFX_CPU_PMA1_CAC_OFF (14)

/** \brief  Length for Ifx_CPU_PMA2_Bits.PSI */
#define IFX_CPU_PMA2_PSI_LEN (16)

/** \brief  Mask for Ifx_CPU_PMA2_Bits.PSI */
#define IFX_CPU_PMA2_PSI_MSK (0xffff)

/** \brief  Offset for Ifx_CPU_PMA2_Bits.PSI */
#define IFX_CPU_PMA2_PSI_OFF (0)

/** \brief  Length for Ifx_CPU_PSTR_Bits.FBE */
#define IFX_CPU_PSTR_FBE_LEN (1)

/** \brief  Mask for Ifx_CPU_PSTR_Bits.FBE */
#define IFX_CPU_PSTR_FBE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSTR_Bits.FBE */
#define IFX_CPU_PSTR_FBE_OFF (2)

/** \brief  Length for Ifx_CPU_PSTR_Bits.FME */
#define IFX_CPU_PSTR_FME_LEN (1)

/** \brief  Mask for Ifx_CPU_PSTR_Bits.FME */
#define IFX_CPU_PSTR_FME_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSTR_Bits.FME */
#define IFX_CPU_PSTR_FME_OFF (14)

/** \brief  Length for Ifx_CPU_PSTR_Bits.FPE */
#define IFX_CPU_PSTR_FPE_LEN (1)

/** \brief  Mask for Ifx_CPU_PSTR_Bits.FPE */
#define IFX_CPU_PSTR_FPE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSTR_Bits.FPE */
#define IFX_CPU_PSTR_FPE_OFF (12)

/** \brief  Length for Ifx_CPU_PSTR_Bits.FRE */
#define IFX_CPU_PSTR_FRE_LEN (1)

/** \brief  Mask for Ifx_CPU_PSTR_Bits.FRE */
#define IFX_CPU_PSTR_FRE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSTR_Bits.FRE */
#define IFX_CPU_PSTR_FRE_OFF (0)

/** \brief  Length for Ifx_CPU_PSW_Bits.AV */
#define IFX_CPU_PSW_AV_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.AV */
#define IFX_CPU_PSW_AV_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.AV */
#define IFX_CPU_PSW_AV_OFF (28)

/** \brief  Length for Ifx_CPU_PSW_Bits.C */
#define IFX_CPU_PSW_C_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.C */
#define IFX_CPU_PSW_C_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.C */
#define IFX_CPU_PSW_C_OFF (31)

/** \brief  Length for Ifx_CPU_PSW_Bits.CDC */
#define IFX_CPU_PSW_CDC_LEN (7)

/** \brief  Mask for Ifx_CPU_PSW_Bits.CDC */
#define IFX_CPU_PSW_CDC_MSK (0x7f)

/** \brief  Offset for Ifx_CPU_PSW_Bits.CDC */
#define IFX_CPU_PSW_CDC_OFF (0)

/** \brief  Length for Ifx_CPU_PSW_Bits.CDE */
#define IFX_CPU_PSW_CDE_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.CDE */
#define IFX_CPU_PSW_CDE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.CDE */
#define IFX_CPU_PSW_CDE_OFF (7)

/** \brief  Length for Ifx_CPU_PSW_Bits.GW */
#define IFX_CPU_PSW_GW_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.GW */
#define IFX_CPU_PSW_GW_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.GW */
#define IFX_CPU_PSW_GW_OFF (8)

/** \brief  Length for Ifx_CPU_PSW_Bits.IO */
#define IFX_CPU_PSW_IO_LEN (2)

/** \brief  Mask for Ifx_CPU_PSW_Bits.IO */
#define IFX_CPU_PSW_IO_MSK (0x3)

/** \brief  Offset for Ifx_CPU_PSW_Bits.IO */
#define IFX_CPU_PSW_IO_OFF (10)

/** \brief  Length for Ifx_CPU_PSW_Bits.IS */
#define IFX_CPU_PSW_IS_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.IS */
#define IFX_CPU_PSW_IS_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.IS */
#define IFX_CPU_PSW_IS_OFF (9)

/** \brief  Length for Ifx_CPU_PSW_Bits.PRS2 */
#define IFX_CPU_PSW_PRS2_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.PRS2 */
#define IFX_CPU_PSW_PRS2_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.PRS2 */
#define IFX_CPU_PSW_PRS2_OFF (15)

/** \brief  Length for Ifx_CPU_PSW_Bits.PRS */
#define IFX_CPU_PSW_PRS_LEN (2)

/** \brief  Mask for Ifx_CPU_PSW_Bits.PRS */
#define IFX_CPU_PSW_PRS_MSK (0x3)

/** \brief  Offset for Ifx_CPU_PSW_Bits.PRS */
#define IFX_CPU_PSW_PRS_OFF (12)

/** \brief  Length for Ifx_CPU_PSW_Bits.S */
#define IFX_CPU_PSW_S_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.S */
#define IFX_CPU_PSW_S_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.S */
#define IFX_CPU_PSW_S_OFF (14)

/** \brief  Length for Ifx_CPU_PSW_Bits.SAV */
#define IFX_CPU_PSW_SAV_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.SAV */
#define IFX_CPU_PSW_SAV_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.SAV */
#define IFX_CPU_PSW_SAV_OFF (27)

/** \brief  Length for Ifx_CPU_PSW_Bits.SV */
#define IFX_CPU_PSW_SV_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.SV */
#define IFX_CPU_PSW_SV_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.SV */
#define IFX_CPU_PSW_SV_OFF (29)

/** \brief  Length for Ifx_CPU_PSW_Bits.V */
#define IFX_CPU_PSW_V_LEN (1)

/** \brief  Mask for Ifx_CPU_PSW_Bits.V */
#define IFX_CPU_PSW_V_MSK (0x1)

/** \brief  Offset for Ifx_CPU_PSW_Bits.V */
#define IFX_CPU_PSW_V_OFF (30)

/** \brief  Length for Ifx_CPU_RABR0_Bits.OBASE */
#define IFX_CPU_RABR0_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR0_Bits.OBASE */
#define IFX_CPU_RABR0_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR0_Bits.OBASE */
#define IFX_CPU_RABR0_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR0_Bits.OMEM */
#define IFX_CPU_RABR0_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR0_Bits.OMEM */
#define IFX_CPU_RABR0_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR0_Bits.OMEM */
#define IFX_CPU_RABR0_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR0_Bits.OVEN */
#define IFX_CPU_RABR0_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR0_Bits.OVEN */
#define IFX_CPU_RABR0_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR0_Bits.OVEN */
#define IFX_CPU_RABR0_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR10_Bits.OBASE */
#define IFX_CPU_RABR10_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR10_Bits.OBASE */
#define IFX_CPU_RABR10_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR10_Bits.OBASE */
#define IFX_CPU_RABR10_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR10_Bits.OMEM */
#define IFX_CPU_RABR10_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR10_Bits.OMEM */
#define IFX_CPU_RABR10_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR10_Bits.OMEM */
#define IFX_CPU_RABR10_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR10_Bits.OVEN */
#define IFX_CPU_RABR10_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR10_Bits.OVEN */
#define IFX_CPU_RABR10_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR10_Bits.OVEN */
#define IFX_CPU_RABR10_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR11_Bits.OBASE */
#define IFX_CPU_RABR11_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR11_Bits.OBASE */
#define IFX_CPU_RABR11_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR11_Bits.OBASE */
#define IFX_CPU_RABR11_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR11_Bits.OMEM */
#define IFX_CPU_RABR11_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR11_Bits.OMEM */
#define IFX_CPU_RABR11_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR11_Bits.OMEM */
#define IFX_CPU_RABR11_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR11_Bits.OVEN */
#define IFX_CPU_RABR11_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR11_Bits.OVEN */
#define IFX_CPU_RABR11_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR11_Bits.OVEN */
#define IFX_CPU_RABR11_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR12_Bits.OBASE */
#define IFX_CPU_RABR12_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR12_Bits.OBASE */
#define IFX_CPU_RABR12_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR12_Bits.OBASE */
#define IFX_CPU_RABR12_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR12_Bits.OMEM */
#define IFX_CPU_RABR12_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR12_Bits.OMEM */
#define IFX_CPU_RABR12_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR12_Bits.OMEM */
#define IFX_CPU_RABR12_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR12_Bits.OVEN */
#define IFX_CPU_RABR12_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR12_Bits.OVEN */
#define IFX_CPU_RABR12_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR12_Bits.OVEN */
#define IFX_CPU_RABR12_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR13_Bits.OBASE */
#define IFX_CPU_RABR13_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR13_Bits.OBASE */
#define IFX_CPU_RABR13_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR13_Bits.OBASE */
#define IFX_CPU_RABR13_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR13_Bits.OMEM */
#define IFX_CPU_RABR13_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR13_Bits.OMEM */
#define IFX_CPU_RABR13_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR13_Bits.OMEM */
#define IFX_CPU_RABR13_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR13_Bits.OVEN */
#define IFX_CPU_RABR13_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR13_Bits.OVEN */
#define IFX_CPU_RABR13_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR13_Bits.OVEN */
#define IFX_CPU_RABR13_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR14_Bits.OBASE */
#define IFX_CPU_RABR14_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR14_Bits.OBASE */
#define IFX_CPU_RABR14_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR14_Bits.OBASE */
#define IFX_CPU_RABR14_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR14_Bits.OMEM */
#define IFX_CPU_RABR14_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR14_Bits.OMEM */
#define IFX_CPU_RABR14_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR14_Bits.OMEM */
#define IFX_CPU_RABR14_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR14_Bits.OVEN */
#define IFX_CPU_RABR14_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR14_Bits.OVEN */
#define IFX_CPU_RABR14_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR14_Bits.OVEN */
#define IFX_CPU_RABR14_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR15_Bits.OBASE */
#define IFX_CPU_RABR15_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR15_Bits.OBASE */
#define IFX_CPU_RABR15_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR15_Bits.OBASE */
#define IFX_CPU_RABR15_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR15_Bits.OMEM */
#define IFX_CPU_RABR15_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR15_Bits.OMEM */
#define IFX_CPU_RABR15_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR15_Bits.OMEM */
#define IFX_CPU_RABR15_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR15_Bits.OVEN */
#define IFX_CPU_RABR15_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR15_Bits.OVEN */
#define IFX_CPU_RABR15_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR15_Bits.OVEN */
#define IFX_CPU_RABR15_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR16_Bits.OBASE */
#define IFX_CPU_RABR16_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR16_Bits.OBASE */
#define IFX_CPU_RABR16_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR16_Bits.OBASE */
#define IFX_CPU_RABR16_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR16_Bits.OMEM */
#define IFX_CPU_RABR16_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR16_Bits.OMEM */
#define IFX_CPU_RABR16_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR16_Bits.OMEM */
#define IFX_CPU_RABR16_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR16_Bits.OVEN */
#define IFX_CPU_RABR16_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR16_Bits.OVEN */
#define IFX_CPU_RABR16_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR16_Bits.OVEN */
#define IFX_CPU_RABR16_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR17_Bits.OBASE */
#define IFX_CPU_RABR17_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR17_Bits.OBASE */
#define IFX_CPU_RABR17_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR17_Bits.OBASE */
#define IFX_CPU_RABR17_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR17_Bits.OMEM */
#define IFX_CPU_RABR17_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR17_Bits.OMEM */
#define IFX_CPU_RABR17_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR17_Bits.OMEM */
#define IFX_CPU_RABR17_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR17_Bits.OVEN */
#define IFX_CPU_RABR17_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR17_Bits.OVEN */
#define IFX_CPU_RABR17_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR17_Bits.OVEN */
#define IFX_CPU_RABR17_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR18_Bits.OBASE */
#define IFX_CPU_RABR18_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR18_Bits.OBASE */
#define IFX_CPU_RABR18_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR18_Bits.OBASE */
#define IFX_CPU_RABR18_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR18_Bits.OMEM */
#define IFX_CPU_RABR18_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR18_Bits.OMEM */
#define IFX_CPU_RABR18_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR18_Bits.OMEM */
#define IFX_CPU_RABR18_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR18_Bits.OVEN */
#define IFX_CPU_RABR18_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR18_Bits.OVEN */
#define IFX_CPU_RABR18_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR18_Bits.OVEN */
#define IFX_CPU_RABR18_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR19_Bits.OBASE */
#define IFX_CPU_RABR19_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR19_Bits.OBASE */
#define IFX_CPU_RABR19_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR19_Bits.OBASE */
#define IFX_CPU_RABR19_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR19_Bits.OMEM */
#define IFX_CPU_RABR19_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR19_Bits.OMEM */
#define IFX_CPU_RABR19_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR19_Bits.OMEM */
#define IFX_CPU_RABR19_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR19_Bits.OVEN */
#define IFX_CPU_RABR19_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR19_Bits.OVEN */
#define IFX_CPU_RABR19_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR19_Bits.OVEN */
#define IFX_CPU_RABR19_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR1_Bits.OBASE */
#define IFX_CPU_RABR1_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR1_Bits.OBASE */
#define IFX_CPU_RABR1_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR1_Bits.OBASE */
#define IFX_CPU_RABR1_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR1_Bits.OMEM */
#define IFX_CPU_RABR1_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR1_Bits.OMEM */
#define IFX_CPU_RABR1_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR1_Bits.OMEM */
#define IFX_CPU_RABR1_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR1_Bits.OVEN */
#define IFX_CPU_RABR1_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR1_Bits.OVEN */
#define IFX_CPU_RABR1_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR1_Bits.OVEN */
#define IFX_CPU_RABR1_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR20_Bits.OBASE */
#define IFX_CPU_RABR20_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR20_Bits.OBASE */
#define IFX_CPU_RABR20_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR20_Bits.OBASE */
#define IFX_CPU_RABR20_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR20_Bits.OMEM */
#define IFX_CPU_RABR20_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR20_Bits.OMEM */
#define IFX_CPU_RABR20_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR20_Bits.OMEM */
#define IFX_CPU_RABR20_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR20_Bits.OVEN */
#define IFX_CPU_RABR20_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR20_Bits.OVEN */
#define IFX_CPU_RABR20_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR20_Bits.OVEN */
#define IFX_CPU_RABR20_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR21_Bits.OBASE */
#define IFX_CPU_RABR21_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR21_Bits.OBASE */
#define IFX_CPU_RABR21_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR21_Bits.OBASE */
#define IFX_CPU_RABR21_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR21_Bits.OMEM */
#define IFX_CPU_RABR21_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR21_Bits.OMEM */
#define IFX_CPU_RABR21_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR21_Bits.OMEM */
#define IFX_CPU_RABR21_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR21_Bits.OVEN */
#define IFX_CPU_RABR21_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR21_Bits.OVEN */
#define IFX_CPU_RABR21_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR21_Bits.OVEN */
#define IFX_CPU_RABR21_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR22_Bits.OBASE */
#define IFX_CPU_RABR22_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR22_Bits.OBASE */
#define IFX_CPU_RABR22_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR22_Bits.OBASE */
#define IFX_CPU_RABR22_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR22_Bits.OMEM */
#define IFX_CPU_RABR22_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR22_Bits.OMEM */
#define IFX_CPU_RABR22_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR22_Bits.OMEM */
#define IFX_CPU_RABR22_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR22_Bits.OVEN */
#define IFX_CPU_RABR22_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR22_Bits.OVEN */
#define IFX_CPU_RABR22_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR22_Bits.OVEN */
#define IFX_CPU_RABR22_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR23_Bits.OBASE */
#define IFX_CPU_RABR23_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR23_Bits.OBASE */
#define IFX_CPU_RABR23_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR23_Bits.OBASE */
#define IFX_CPU_RABR23_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR23_Bits.OMEM */
#define IFX_CPU_RABR23_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR23_Bits.OMEM */
#define IFX_CPU_RABR23_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR23_Bits.OMEM */
#define IFX_CPU_RABR23_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR23_Bits.OVEN */
#define IFX_CPU_RABR23_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR23_Bits.OVEN */
#define IFX_CPU_RABR23_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR23_Bits.OVEN */
#define IFX_CPU_RABR23_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR24_Bits.OBASE */
#define IFX_CPU_RABR24_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR24_Bits.OBASE */
#define IFX_CPU_RABR24_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR24_Bits.OBASE */
#define IFX_CPU_RABR24_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR24_Bits.OMEM */
#define IFX_CPU_RABR24_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR24_Bits.OMEM */
#define IFX_CPU_RABR24_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR24_Bits.OMEM */
#define IFX_CPU_RABR24_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR24_Bits.OVEN */
#define IFX_CPU_RABR24_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR24_Bits.OVEN */
#define IFX_CPU_RABR24_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR24_Bits.OVEN */
#define IFX_CPU_RABR24_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR25_Bits.OBASE */
#define IFX_CPU_RABR25_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR25_Bits.OBASE */
#define IFX_CPU_RABR25_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR25_Bits.OBASE */
#define IFX_CPU_RABR25_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR25_Bits.OMEM */
#define IFX_CPU_RABR25_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR25_Bits.OMEM */
#define IFX_CPU_RABR25_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR25_Bits.OMEM */
#define IFX_CPU_RABR25_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR25_Bits.OVEN */
#define IFX_CPU_RABR25_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR25_Bits.OVEN */
#define IFX_CPU_RABR25_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR25_Bits.OVEN */
#define IFX_CPU_RABR25_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR26_Bits.OBASE */
#define IFX_CPU_RABR26_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR26_Bits.OBASE */
#define IFX_CPU_RABR26_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR26_Bits.OBASE */
#define IFX_CPU_RABR26_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR26_Bits.OMEM */
#define IFX_CPU_RABR26_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR26_Bits.OMEM */
#define IFX_CPU_RABR26_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR26_Bits.OMEM */
#define IFX_CPU_RABR26_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR26_Bits.OVEN */
#define IFX_CPU_RABR26_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR26_Bits.OVEN */
#define IFX_CPU_RABR26_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR26_Bits.OVEN */
#define IFX_CPU_RABR26_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR27_Bits.OBASE */
#define IFX_CPU_RABR27_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR27_Bits.OBASE */
#define IFX_CPU_RABR27_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR27_Bits.OBASE */
#define IFX_CPU_RABR27_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR27_Bits.OMEM */
#define IFX_CPU_RABR27_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR27_Bits.OMEM */
#define IFX_CPU_RABR27_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR27_Bits.OMEM */
#define IFX_CPU_RABR27_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR27_Bits.OVEN */
#define IFX_CPU_RABR27_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR27_Bits.OVEN */
#define IFX_CPU_RABR27_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR27_Bits.OVEN */
#define IFX_CPU_RABR27_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR28_Bits.OBASE */
#define IFX_CPU_RABR28_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR28_Bits.OBASE */
#define IFX_CPU_RABR28_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR28_Bits.OBASE */
#define IFX_CPU_RABR28_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR28_Bits.OMEM */
#define IFX_CPU_RABR28_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR28_Bits.OMEM */
#define IFX_CPU_RABR28_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR28_Bits.OMEM */
#define IFX_CPU_RABR28_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR28_Bits.OVEN */
#define IFX_CPU_RABR28_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR28_Bits.OVEN */
#define IFX_CPU_RABR28_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR28_Bits.OVEN */
#define IFX_CPU_RABR28_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR29_Bits.OBASE */
#define IFX_CPU_RABR29_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR29_Bits.OBASE */
#define IFX_CPU_RABR29_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR29_Bits.OBASE */
#define IFX_CPU_RABR29_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR29_Bits.OMEM */
#define IFX_CPU_RABR29_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR29_Bits.OMEM */
#define IFX_CPU_RABR29_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR29_Bits.OMEM */
#define IFX_CPU_RABR29_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR29_Bits.OVEN */
#define IFX_CPU_RABR29_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR29_Bits.OVEN */
#define IFX_CPU_RABR29_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR29_Bits.OVEN */
#define IFX_CPU_RABR29_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR2_Bits.OBASE */
#define IFX_CPU_RABR2_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR2_Bits.OBASE */
#define IFX_CPU_RABR2_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR2_Bits.OBASE */
#define IFX_CPU_RABR2_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR2_Bits.OMEM */
#define IFX_CPU_RABR2_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR2_Bits.OMEM */
#define IFX_CPU_RABR2_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR2_Bits.OMEM */
#define IFX_CPU_RABR2_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR2_Bits.OVEN */
#define IFX_CPU_RABR2_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR2_Bits.OVEN */
#define IFX_CPU_RABR2_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR2_Bits.OVEN */
#define IFX_CPU_RABR2_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR30_Bits.OBASE */
#define IFX_CPU_RABR30_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR30_Bits.OBASE */
#define IFX_CPU_RABR30_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR30_Bits.OBASE */
#define IFX_CPU_RABR30_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR30_Bits.OMEM */
#define IFX_CPU_RABR30_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR30_Bits.OMEM */
#define IFX_CPU_RABR30_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR30_Bits.OMEM */
#define IFX_CPU_RABR30_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR30_Bits.OVEN */
#define IFX_CPU_RABR30_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR30_Bits.OVEN */
#define IFX_CPU_RABR30_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR30_Bits.OVEN */
#define IFX_CPU_RABR30_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR31_Bits.OBASE */
#define IFX_CPU_RABR31_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR31_Bits.OBASE */
#define IFX_CPU_RABR31_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR31_Bits.OBASE */
#define IFX_CPU_RABR31_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR31_Bits.OMEM */
#define IFX_CPU_RABR31_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR31_Bits.OMEM */
#define IFX_CPU_RABR31_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR31_Bits.OMEM */
#define IFX_CPU_RABR31_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR31_Bits.OVEN */
#define IFX_CPU_RABR31_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR31_Bits.OVEN */
#define IFX_CPU_RABR31_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR31_Bits.OVEN */
#define IFX_CPU_RABR31_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR3_Bits.OBASE */
#define IFX_CPU_RABR3_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR3_Bits.OBASE */
#define IFX_CPU_RABR3_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR3_Bits.OBASE */
#define IFX_CPU_RABR3_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR3_Bits.OMEM */
#define IFX_CPU_RABR3_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR3_Bits.OMEM */
#define IFX_CPU_RABR3_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR3_Bits.OMEM */
#define IFX_CPU_RABR3_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR3_Bits.OVEN */
#define IFX_CPU_RABR3_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR3_Bits.OVEN */
#define IFX_CPU_RABR3_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR3_Bits.OVEN */
#define IFX_CPU_RABR3_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR4_Bits.OBASE */
#define IFX_CPU_RABR4_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR4_Bits.OBASE */
#define IFX_CPU_RABR4_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR4_Bits.OBASE */
#define IFX_CPU_RABR4_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR4_Bits.OMEM */
#define IFX_CPU_RABR4_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR4_Bits.OMEM */
#define IFX_CPU_RABR4_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR4_Bits.OMEM */
#define IFX_CPU_RABR4_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR4_Bits.OVEN */
#define IFX_CPU_RABR4_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR4_Bits.OVEN */
#define IFX_CPU_RABR4_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR4_Bits.OVEN */
#define IFX_CPU_RABR4_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR5_Bits.OBASE */
#define IFX_CPU_RABR5_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR5_Bits.OBASE */
#define IFX_CPU_RABR5_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR5_Bits.OBASE */
#define IFX_CPU_RABR5_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR5_Bits.OMEM */
#define IFX_CPU_RABR5_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR5_Bits.OMEM */
#define IFX_CPU_RABR5_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR5_Bits.OMEM */
#define IFX_CPU_RABR5_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR5_Bits.OVEN */
#define IFX_CPU_RABR5_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR5_Bits.OVEN */
#define IFX_CPU_RABR5_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR5_Bits.OVEN */
#define IFX_CPU_RABR5_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR6_Bits.OBASE */
#define IFX_CPU_RABR6_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR6_Bits.OBASE */
#define IFX_CPU_RABR6_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR6_Bits.OBASE */
#define IFX_CPU_RABR6_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR6_Bits.OMEM */
#define IFX_CPU_RABR6_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR6_Bits.OMEM */
#define IFX_CPU_RABR6_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR6_Bits.OMEM */
#define IFX_CPU_RABR6_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR6_Bits.OVEN */
#define IFX_CPU_RABR6_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR6_Bits.OVEN */
#define IFX_CPU_RABR6_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR6_Bits.OVEN */
#define IFX_CPU_RABR6_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR7_Bits.OBASE */
#define IFX_CPU_RABR7_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR7_Bits.OBASE */
#define IFX_CPU_RABR7_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR7_Bits.OBASE */
#define IFX_CPU_RABR7_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR7_Bits.OMEM */
#define IFX_CPU_RABR7_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR7_Bits.OMEM */
#define IFX_CPU_RABR7_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR7_Bits.OMEM */
#define IFX_CPU_RABR7_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR7_Bits.OVEN */
#define IFX_CPU_RABR7_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR7_Bits.OVEN */
#define IFX_CPU_RABR7_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR7_Bits.OVEN */
#define IFX_CPU_RABR7_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR8_Bits.OBASE */
#define IFX_CPU_RABR8_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR8_Bits.OBASE */
#define IFX_CPU_RABR8_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR8_Bits.OBASE */
#define IFX_CPU_RABR8_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR8_Bits.OMEM */
#define IFX_CPU_RABR8_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR8_Bits.OMEM */
#define IFX_CPU_RABR8_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR8_Bits.OMEM */
#define IFX_CPU_RABR8_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR8_Bits.OVEN */
#define IFX_CPU_RABR8_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR8_Bits.OVEN */
#define IFX_CPU_RABR8_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR8_Bits.OVEN */
#define IFX_CPU_RABR8_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_RABR9_Bits.OBASE */
#define IFX_CPU_RABR9_OBASE_LEN (17)

/** \brief  Mask for Ifx_CPU_RABR9_Bits.OBASE */
#define IFX_CPU_RABR9_OBASE_MSK (0x1ffff)

/** \brief  Offset for Ifx_CPU_RABR9_Bits.OBASE */
#define IFX_CPU_RABR9_OBASE_OFF (5)

/** \brief  Length for Ifx_CPU_RABR9_Bits.OMEM */
#define IFX_CPU_RABR9_OMEM_LEN (4)

/** \brief  Mask for Ifx_CPU_RABR9_Bits.OMEM */
#define IFX_CPU_RABR9_OMEM_MSK (0xf)

/** \brief  Offset for Ifx_CPU_RABR9_Bits.OMEM */
#define IFX_CPU_RABR9_OMEM_OFF (24)

/** \brief  Length for Ifx_CPU_RABR9_Bits.OVEN */
#define IFX_CPU_RABR9_OVEN_LEN (1)

/** \brief  Mask for Ifx_CPU_RABR9_Bits.OVEN */
#define IFX_CPU_RABR9_OVEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_RABR9_Bits.OVEN */
#define IFX_CPU_RABR9_OVEN_OFF (31)

/** \brief  Length for Ifx_CPU_SEGEN_Bits.ADFLIP */
#define IFX_CPU_SEGEN_ADFLIP_LEN (8)

/** \brief  Mask for Ifx_CPU_SEGEN_Bits.ADFLIP */
#define IFX_CPU_SEGEN_ADFLIP_MSK (0xff)

/** \brief  Offset for Ifx_CPU_SEGEN_Bits.ADFLIP */
#define IFX_CPU_SEGEN_ADFLIP_OFF (0)

/** \brief  Length for Ifx_CPU_SEGEN_Bits.ADTYPE */
#define IFX_CPU_SEGEN_ADTYPE_LEN (2)

/** \brief  Mask for Ifx_CPU_SEGEN_Bits.ADTYPE */
#define IFX_CPU_SEGEN_ADTYPE_MSK (0x3)

/** \brief  Offset for Ifx_CPU_SEGEN_Bits.ADTYPE */
#define IFX_CPU_SEGEN_ADTYPE_OFF (8)

/** \brief  Length for Ifx_CPU_SEGEN_Bits.AE */
#define IFX_CPU_SEGEN_AE_LEN (1)

/** \brief  Mask for Ifx_CPU_SEGEN_Bits.AE */
#define IFX_CPU_SEGEN_AE_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SEGEN_Bits.AE */
#define IFX_CPU_SEGEN_AE_OFF (31)

/** \brief  Length for Ifx_CPU_SFR_SPROT_ACCENA_W_Bits.EN */
#define IFX_CPU_SFR_SPROT_ACCENA_W_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SFR_SPROT_ACCENA_W_Bits.EN */
#define IFX_CPU_SFR_SPROT_ACCENA_W_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SFR_SPROT_ACCENA_W_Bits.EN */
#define IFX_CPU_SFR_SPROT_ACCENA_W_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SMACON_Bits.IODT */
#define IFX_CPU_SMACON_IODT_LEN (1)

/** \brief  Mask for Ifx_CPU_SMACON_Bits.IODT */
#define IFX_CPU_SMACON_IODT_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SMACON_Bits.IODT */
#define IFX_CPU_SMACON_IODT_OFF (24)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGN_ACCENA_W_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGN_ACCENA_W_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGN_ACCENA_W_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGN_ACCENA_W_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGN_ACCENA_W_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGN_ACCENA_W_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGN_LA_Bits.ADDR */
#define IFX_CPU_SPR_SPROT_RGN_LA_ADDR_LEN (27)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGN_LA_Bits.ADDR */
#define IFX_CPU_SPR_SPROT_RGN_LA_ADDR_MSK (0x7ffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGN_LA_Bits.ADDR */
#define IFX_CPU_SPR_SPROT_RGN_LA_ADDR_OFF (5)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGN_UA_Bits.ADDR */
#define IFX_CPU_SPR_SPROT_RGN_UA_ADDR_LEN (27)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGN_UA_Bits.ADDR */
#define IFX_CPU_SPR_SPROT_RGN_UA_ADDR_MSK (0x7ffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGN_UA_Bits.ADDR */
#define IFX_CPU_SPR_SPROT_RGN_UA_ADDR_OFF (5)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGNACCENA0_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA0_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGNACCENA0_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA0_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGNACCENA0_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA0_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGNACCENA1_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA1_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGNACCENA1_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA1_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGNACCENA1_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA1_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGNACCENA2_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA2_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGNACCENA2_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA2_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGNACCENA2_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA2_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGNACCENA3_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA3_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGNACCENA3_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA3_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGNACCENA3_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA3_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGNACCENA4_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA4_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGNACCENA4_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA4_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGNACCENA4_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA4_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGNACCENA5_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA5_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGNACCENA5_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA5_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGNACCENA5_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA5_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGNACCENA6_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA6_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGNACCENA6_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA6_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGNACCENA6_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA6_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SPR_SPROT_RGNACCENA7_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA7_R_EN_LEN (32)

/** \brief  Mask for Ifx_CPU_SPR_SPROT_RGNACCENA7_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA7_R_EN_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_SPR_SPROT_RGNACCENA7_R_Bits.EN */
#define IFX_CPU_SPR_SPROT_RGNACCENA7_R_EN_OFF (0)

/** \brief  Length for Ifx_CPU_SWEVT_Bits.BBM */
#define IFX_CPU_SWEVT_BBM_LEN (1)

/** \brief  Mask for Ifx_CPU_SWEVT_Bits.BBM */
#define IFX_CPU_SWEVT_BBM_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SWEVT_Bits.BBM */
#define IFX_CPU_SWEVT_BBM_OFF (3)

/** \brief  Length for Ifx_CPU_SWEVT_Bits.BOD */
#define IFX_CPU_SWEVT_BOD_LEN (1)

/** \brief  Mask for Ifx_CPU_SWEVT_Bits.BOD */
#define IFX_CPU_SWEVT_BOD_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SWEVT_Bits.BOD */
#define IFX_CPU_SWEVT_BOD_OFF (4)

/** \brief  Length for Ifx_CPU_SWEVT_Bits.CNT */
#define IFX_CPU_SWEVT_CNT_LEN (2)

/** \brief  Mask for Ifx_CPU_SWEVT_Bits.CNT */
#define IFX_CPU_SWEVT_CNT_MSK (0x3)

/** \brief  Offset for Ifx_CPU_SWEVT_Bits.CNT */
#define IFX_CPU_SWEVT_CNT_OFF (6)

/** \brief  Length for Ifx_CPU_SWEVT_Bits.EVTA */
#define IFX_CPU_SWEVT_EVTA_LEN (3)

/** \brief  Mask for Ifx_CPU_SWEVT_Bits.EVTA */
#define IFX_CPU_SWEVT_EVTA_MSK (0x7)

/** \brief  Offset for Ifx_CPU_SWEVT_Bits.EVTA */
#define IFX_CPU_SWEVT_EVTA_OFF (0)

/** \brief  Length for Ifx_CPU_SWEVT_Bits.SUSP */
#define IFX_CPU_SWEVT_SUSP_LEN (1)

/** \brief  Mask for Ifx_CPU_SWEVT_Bits.SUSP */
#define IFX_CPU_SWEVT_SUSP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SWEVT_Bits.SUSP */
#define IFX_CPU_SWEVT_SUSP_OFF (5)

/** \brief  Length for Ifx_CPU_SYSCON_Bits.BHALT */
#define IFX_CPU_SYSCON_BHALT_LEN (1)

/** \brief  Mask for Ifx_CPU_SYSCON_Bits.BHALT */
#define IFX_CPU_SYSCON_BHALT_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SYSCON_Bits.BHALT */
#define IFX_CPU_SYSCON_BHALT_OFF (24)

/** \brief  Length for Ifx_CPU_SYSCON_Bits.FCDSF */
#define IFX_CPU_SYSCON_FCDSF_LEN (1)

/** \brief  Mask for Ifx_CPU_SYSCON_Bits.FCDSF */
#define IFX_CPU_SYSCON_FCDSF_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SYSCON_Bits.FCDSF */
#define IFX_CPU_SYSCON_FCDSF_OFF (0)

/** \brief  Length for Ifx_CPU_SYSCON_Bits.IS */
#define IFX_CPU_SYSCON_IS_LEN (1)

/** \brief  Mask for Ifx_CPU_SYSCON_Bits.IS */
#define IFX_CPU_SYSCON_IS_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SYSCON_Bits.IS */
#define IFX_CPU_SYSCON_IS_OFF (3)

/** \brief  Length for Ifx_CPU_SYSCON_Bits.IT */
#define IFX_CPU_SYSCON_IT_LEN (1)

/** \brief  Mask for Ifx_CPU_SYSCON_Bits.IT */
#define IFX_CPU_SYSCON_IT_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SYSCON_Bits.IT */
#define IFX_CPU_SYSCON_IT_OFF (4)

/** \brief  Length for Ifx_CPU_SYSCON_Bits.PROTEN */
#define IFX_CPU_SYSCON_PROTEN_LEN (1)

/** \brief  Mask for Ifx_CPU_SYSCON_Bits.PROTEN */
#define IFX_CPU_SYSCON_PROTEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SYSCON_Bits.PROTEN */
#define IFX_CPU_SYSCON_PROTEN_OFF (1)

/** \brief  Length for Ifx_CPU_SYSCON_Bits.TPROTEN */
#define IFX_CPU_SYSCON_TPROTEN_LEN (1)

/** \brief  Mask for Ifx_CPU_SYSCON_Bits.TPROTEN */
#define IFX_CPU_SYSCON_TPROTEN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_SYSCON_Bits.TPROTEN */
#define IFX_CPU_SYSCON_TPROTEN_OFF (2)

/** \brief  Length for Ifx_CPU_TASK_ASI_Bits.ASI */
#define IFX_CPU_TASK_ASI_ASI_LEN (5)

/** \brief  Mask for Ifx_CPU_TASK_ASI_Bits.ASI */
#define IFX_CPU_TASK_ASI_ASI_MSK (0x1f)

/** \brief  Offset for Ifx_CPU_TASK_ASI_Bits.ASI */
#define IFX_CPU_TASK_ASI_ASI_OFF (0)

/** \brief  Length for Ifx_CPU_TPS_CON_Bits.TEXP0 */
#define IFX_CPU_TPS_CON_TEXP0_LEN (1)

/** \brief  Mask for Ifx_CPU_TPS_CON_Bits.TEXP0 */
#define IFX_CPU_TPS_CON_TEXP0_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TPS_CON_Bits.TEXP0 */
#define IFX_CPU_TPS_CON_TEXP0_OFF (0)

/** \brief  Length for Ifx_CPU_TPS_CON_Bits.TEXP1 */
#define IFX_CPU_TPS_CON_TEXP1_LEN (1)

/** \brief  Mask for Ifx_CPU_TPS_CON_Bits.TEXP1 */
#define IFX_CPU_TPS_CON_TEXP1_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TPS_CON_Bits.TEXP1 */
#define IFX_CPU_TPS_CON_TEXP1_OFF (1)

/** \brief  Length for Ifx_CPU_TPS_CON_Bits.TEXP2 */
#define IFX_CPU_TPS_CON_TEXP2_LEN (1)

/** \brief  Mask for Ifx_CPU_TPS_CON_Bits.TEXP2 */
#define IFX_CPU_TPS_CON_TEXP2_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TPS_CON_Bits.TEXP2 */
#define IFX_CPU_TPS_CON_TEXP2_OFF (2)

/** \brief  Length for Ifx_CPU_TPS_CON_Bits.TTRAP */
#define IFX_CPU_TPS_CON_TTRAP_LEN (1)

/** \brief  Mask for Ifx_CPU_TPS_CON_Bits.TTRAP */
#define IFX_CPU_TPS_CON_TTRAP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TPS_CON_Bits.TTRAP */
#define IFX_CPU_TPS_CON_TTRAP_OFF (16)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits.EXTIM_CLASS_EN */
#define IFX_CPU_TPS_EXTIM_CLASS_EN_EXTIM_CLASS_EN_LEN (8)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits.EXTIM_CLASS_EN */
#define IFX_CPU_TPS_EXTIM_CLASS_EN_EXTIM_CLASS_EN_MSK (0xff)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_CLASS_EN_Bits.EXTIM_CLASS_EN */
#define IFX_CPU_TPS_EXTIM_CLASS_EN_EXTIM_CLASS_EN_OFF (0)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_CVAL_Bits.ENTRY_CVAL */
#define IFX_CPU_TPS_EXTIM_CVAL_ENTRY_CVAL_LEN (8)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_CVAL_Bits.ENTRY_CVAL */
#define IFX_CPU_TPS_EXTIM_CVAL_ENTRY_CVAL_MSK (0xff)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_CVAL_Bits.ENTRY_CVAL */
#define IFX_CPU_TPS_EXTIM_CVAL_ENTRY_CVAL_OFF (24)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_CVAL_Bits.EXIT_CVAL */
#define IFX_CPU_TPS_EXTIM_CVAL_EXIT_CVAL_LEN (24)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_CVAL_Bits.EXIT_CVAL */
#define IFX_CPU_TPS_EXTIM_CVAL_EXIT_CVAL_MSK (0xffffff)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_CVAL_Bits.EXIT_CVAL */
#define IFX_CPU_TPS_EXTIM_CVAL_EXIT_CVAL_OFF (0)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_FCX_Bits.EXIT_FCX */
#define IFX_CPU_TPS_EXTIM_FCX_EXIT_FCX_LEN (20)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_FCX_Bits.EXIT_FCX */
#define IFX_CPU_TPS_EXTIM_FCX_EXIT_FCX_MSK (0xfffff)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_FCX_Bits.EXIT_FCX */
#define IFX_CPU_TPS_EXTIM_FCX_EXIT_FCX_OFF (0)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_LVAL_Bits.ENTRY_LVAL */
#define IFX_CPU_TPS_EXTIM_LVAL_ENTRY_LVAL_LEN (4)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_LVAL_Bits.ENTRY_LVAL */
#define IFX_CPU_TPS_EXTIM_LVAL_ENTRY_LVAL_MSK (0xf)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_LVAL_Bits.ENTRY_LVAL */
#define IFX_CPU_TPS_EXTIM_LVAL_ENTRY_LVAL_OFF (28)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_LVAL_Bits.EXIT_LVAL */
#define IFX_CPU_TPS_EXTIM_LVAL_EXIT_LVAL_LEN (20)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_LVAL_Bits.EXIT_LVAL */
#define IFX_CPU_TPS_EXTIM_LVAL_EXIT_LVAL_MSK (0xfffff)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_LVAL_Bits.EXIT_LVAL */
#define IFX_CPU_TPS_EXTIM_LVAL_EXIT_LVAL_OFF (4)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_AT */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_AT_LEN (1)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_AT */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_AT_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_AT */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_AT_OFF (31)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_CLASS */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_CLASS_LEN (3)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_CLASS */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_CLASS_MSK (0x7)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_CLASS */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_CLASS_OFF (24)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_TIN */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_TIN_LEN (8)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_TIN */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_TIN_MSK (0xff)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_STAT_Bits.ENTRY_TIN */
#define IFX_CPU_TPS_EXTIM_STAT_ENTRY_TIN_OFF (16)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_AT */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_AT_LEN (1)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_AT */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_AT_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_AT */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_AT_OFF (15)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_CLASS */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_CLASS_LEN (3)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_CLASS */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_CLASS_MSK (0x7)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_CLASS */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_CLASS_OFF (8)

/** \brief  Length for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_TIN */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_TIN_LEN (8)

/** \brief  Mask for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_TIN */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_TIN_MSK (0xff)

/** \brief  Offset for Ifx_CPU_TPS_EXTIM_STAT_Bits.EXIT_TIN */
#define IFX_CPU_TPS_EXTIM_STAT_EXIT_TIN_OFF (0)

/** \brief  Length for Ifx_CPU_TPS_TIMER_Bits.Timer */
#define IFX_CPU_TPS_TIMER_TIMER_LEN (32)

/** \brief  Mask for Ifx_CPU_TPS_TIMER_Bits.Timer */
#define IFX_CPU_TPS_TIMER_TIMER_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_TPS_TIMER_Bits.Timer */
#define IFX_CPU_TPS_TIMER_TIMER_OFF (0)

/** \brief  Length for Ifx_CPU_TR_ADR_Bits.ADDR */
#define IFX_CPU_TR_ADR_ADDR_LEN (32)

/** \brief  Mask for Ifx_CPU_TR_ADR_Bits.ADDR */
#define IFX_CPU_TR_ADR_ADDR_MSK (0xffffffff)

/** \brief  Offset for Ifx_CPU_TR_ADR_Bits.ADDR */
#define IFX_CPU_TR_ADR_ADDR_OFF (0)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.ALD */
#define IFX_CPU_TR_EVT_ALD_LEN (1)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.ALD */
#define IFX_CPU_TR_EVT_ALD_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.ALD */
#define IFX_CPU_TR_EVT_ALD_OFF (28)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.ASI_EN */
#define IFX_CPU_TR_EVT_ASI_EN_LEN (1)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.ASI_EN */
#define IFX_CPU_TR_EVT_ASI_EN_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.ASI_EN */
#define IFX_CPU_TR_EVT_ASI_EN_OFF (15)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.ASI */
#define IFX_CPU_TR_EVT_ASI_LEN (5)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.ASI */
#define IFX_CPU_TR_EVT_ASI_MSK (0x1f)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.ASI */
#define IFX_CPU_TR_EVT_ASI_OFF (16)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.AST */
#define IFX_CPU_TR_EVT_AST_LEN (1)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.AST */
#define IFX_CPU_TR_EVT_AST_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.AST */
#define IFX_CPU_TR_EVT_AST_OFF (27)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.BBM */
#define IFX_CPU_TR_EVT_BBM_LEN (1)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.BBM */
#define IFX_CPU_TR_EVT_BBM_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.BBM */
#define IFX_CPU_TR_EVT_BBM_OFF (3)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.BOD */
#define IFX_CPU_TR_EVT_BOD_LEN (1)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.BOD */
#define IFX_CPU_TR_EVT_BOD_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.BOD */
#define IFX_CPU_TR_EVT_BOD_OFF (4)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.CNT */
#define IFX_CPU_TR_EVT_CNT_LEN (2)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.CNT */
#define IFX_CPU_TR_EVT_CNT_MSK (0x3)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.CNT */
#define IFX_CPU_TR_EVT_CNT_OFF (6)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.EVTA */
#define IFX_CPU_TR_EVT_EVTA_LEN (3)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.EVTA */
#define IFX_CPU_TR_EVT_EVTA_MSK (0x7)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.EVTA */
#define IFX_CPU_TR_EVT_EVTA_OFF (0)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.RNG */
#define IFX_CPU_TR_EVT_RNG_LEN (1)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.RNG */
#define IFX_CPU_TR_EVT_RNG_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.RNG */
#define IFX_CPU_TR_EVT_RNG_OFF (13)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.SUSP */
#define IFX_CPU_TR_EVT_SUSP_LEN (1)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.SUSP */
#define IFX_CPU_TR_EVT_SUSP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.SUSP */
#define IFX_CPU_TR_EVT_SUSP_OFF (5)

/** \brief  Length for Ifx_CPU_TR_EVT_Bits.TYP */
#define IFX_CPU_TR_EVT_TYP_LEN (1)

/** \brief  Mask for Ifx_CPU_TR_EVT_Bits.TYP */
#define IFX_CPU_TR_EVT_TYP_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TR_EVT_Bits.TYP */
#define IFX_CPU_TR_EVT_TYP_OFF (12)

/** \brief  Length for Ifx_CPU_TRIG_ACC_Bits.T0 */
#define IFX_CPU_TRIG_ACC_T0_LEN (1)

/** \brief  Mask for Ifx_CPU_TRIG_ACC_Bits.T0 */
#define IFX_CPU_TRIG_ACC_T0_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TRIG_ACC_Bits.T0 */
#define IFX_CPU_TRIG_ACC_T0_OFF (0)

/** \brief  Length for Ifx_CPU_TRIG_ACC_Bits.T1 */
#define IFX_CPU_TRIG_ACC_T1_LEN (1)

/** \brief  Mask for Ifx_CPU_TRIG_ACC_Bits.T1 */
#define IFX_CPU_TRIG_ACC_T1_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TRIG_ACC_Bits.T1 */
#define IFX_CPU_TRIG_ACC_T1_OFF (1)

/** \brief  Length for Ifx_CPU_TRIG_ACC_Bits.T2 */
#define IFX_CPU_TRIG_ACC_T2_LEN (1)

/** \brief  Mask for Ifx_CPU_TRIG_ACC_Bits.T2 */
#define IFX_CPU_TRIG_ACC_T2_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TRIG_ACC_Bits.T2 */
#define IFX_CPU_TRIG_ACC_T2_OFF (2)

/** \brief  Length for Ifx_CPU_TRIG_ACC_Bits.T3 */
#define IFX_CPU_TRIG_ACC_T3_LEN (1)

/** \brief  Mask for Ifx_CPU_TRIG_ACC_Bits.T3 */
#define IFX_CPU_TRIG_ACC_T3_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TRIG_ACC_Bits.T3 */
#define IFX_CPU_TRIG_ACC_T3_OFF (3)

/** \brief  Length for Ifx_CPU_TRIG_ACC_Bits.T4 */
#define IFX_CPU_TRIG_ACC_T4_LEN (1)

/** \brief  Mask for Ifx_CPU_TRIG_ACC_Bits.T4 */
#define IFX_CPU_TRIG_ACC_T4_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TRIG_ACC_Bits.T4 */
#define IFX_CPU_TRIG_ACC_T4_OFF (4)

/** \brief  Length for Ifx_CPU_TRIG_ACC_Bits.T5 */
#define IFX_CPU_TRIG_ACC_T5_LEN (1)

/** \brief  Mask for Ifx_CPU_TRIG_ACC_Bits.T5 */
#define IFX_CPU_TRIG_ACC_T5_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TRIG_ACC_Bits.T5 */
#define IFX_CPU_TRIG_ACC_T5_OFF (5)

/** \brief  Length for Ifx_CPU_TRIG_ACC_Bits.T6 */
#define IFX_CPU_TRIG_ACC_T6_LEN (1)

/** \brief  Mask for Ifx_CPU_TRIG_ACC_Bits.T6 */
#define IFX_CPU_TRIG_ACC_T6_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TRIG_ACC_Bits.T6 */
#define IFX_CPU_TRIG_ACC_T6_OFF (6)

/** \brief  Length for Ifx_CPU_TRIG_ACC_Bits.T7 */
#define IFX_CPU_TRIG_ACC_T7_LEN (1)

/** \brief  Mask for Ifx_CPU_TRIG_ACC_Bits.T7 */
#define IFX_CPU_TRIG_ACC_T7_MSK (0x1)

/** \brief  Offset for Ifx_CPU_TRIG_ACC_Bits.T7 */
#define IFX_CPU_TRIG_ACC_T7_OFF (7)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXCPU_BF_H */
