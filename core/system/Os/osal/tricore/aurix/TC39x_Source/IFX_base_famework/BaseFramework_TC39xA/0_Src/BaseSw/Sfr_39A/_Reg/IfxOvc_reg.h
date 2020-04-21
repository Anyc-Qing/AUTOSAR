/**
 * \file IfxOvc_reg.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC29XB_UM_V1.2.R0
 * Specification: tc29xB_um_v1.2_MCSFR.xml (Revision: UM_V1.2)
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
 * \defgroup IfxLld_Ovc_Cfg Ovc address
 * \ingroup IfxLld_Ovc
 *
 * \defgroup IfxLld_Ovc_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Ovc_Cfg
 *
 * \defgroup IfxLld_Ovc_Cfg_Ovc0 2-OVC0
 * \ingroup IfxLld_Ovc_Cfg
 *
 * \defgroup IfxLld_Ovc_Cfg_Ovc1 2-OVC1
 * \ingroup IfxLld_Ovc_Cfg
 *
 * \defgroup IfxLld_Ovc_Cfg_Ovc2 2-OVC2
 * \ingroup IfxLld_Ovc_Cfg
 *
 */
#ifndef IFXOVC_REG_H
#define IFXOVC_REG_H 1
/******************************************************************************/
#include "IfxOvc_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ovc_Cfg_BaseAddress
 * \{  */

/** \\brief  OVC object */
#define MODULE_OVC0 /*lint --e(923)*/ ((*(Ifx_OVC *)0xF880FB00u))

/** \\brief  OVC object */
#define MODULE_OVC1 /*lint --e(923)*/ ((*(Ifx_OVC *)0xF882FB00u))

/** \\brief  OVC object */
#define MODULE_OVC2 /*lint --e(923)*/ ((*(Ifx_OVC *)0xF884FB00u))

#define MODULE_OVC3 /*lint --e(923)*/ ((*(Ifx_OVC *)0xF886FB00u))

#define MODULE_OVC4 /*lint --e(923)*/ ((*(Ifx_OVC *)0xF888FB00u))

#define MODULE_OVC5 /*lint --e(923)*/ ((*(Ifx_OVC *)0xF88CFB00u))

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ovc_Cfg_Ovc0
 * \{  */

/** \\brief  18, Overlay Mask Register */
#define OVC0_BLK0_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB18u)

/** Alias (User Manual Name) for OVC0_BLK0_OMASK.
 * To use register names with standard convension, please use OVC0_BLK0_OMASK.
 */
#define OVC0_OMASK0      (OVC0_BLK0_OMASK)

/** \\brief  14, Overlay Target Address Register */
#define OVC0_BLK0_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB14u)

/** Alias (User Manual Name) for OVC0_BLK0_OTAR.
 * To use register names with standard convension, please use OVC0_BLK0_OTAR.
 */
#define OVC0_OTAR0       (OVC0_BLK0_OTAR)

/** \\brief  10, Redirected Address Base Register */
#define OVC0_BLK0_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB10u)

/** Alias (User Manual Name) for OVC0_BLK0_RABR.
 * To use register names with standard convension, please use OVC0_BLK0_RABR.
 */
#define OVC0_RABR0       (OVC0_BLK0_RABR)

/** \\brief  90, Overlay Mask Register */
#define OVC0_BLK10_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB90u)

/** Alias (User Manual Name) for OVC0_BLK10_OMASK.
 * To use register names with standard convension, please use OVC0_BLK10_OMASK.
 */
#define OVC0_OMASK10     (OVC0_BLK10_OMASK)

/** \\brief  8C, Overlay Target Address Register */
#define OVC0_BLK10_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB8Cu)

/** Alias (User Manual Name) for OVC0_BLK10_OTAR.
 * To use register names with standard convension, please use OVC0_BLK10_OTAR.
 */
#define OVC0_OTAR10      (OVC0_BLK10_OTAR)

/** \\brief  88, Redirected Address Base Register */
#define OVC0_BLK10_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB88u)

/** Alias (User Manual Name) for OVC0_BLK10_RABR.
 * To use register names with standard convension, please use OVC0_BLK10_RABR.
 */
#define OVC0_RABR10      (OVC0_BLK10_RABR)

/** \\brief  9C, Overlay Mask Register */
#define OVC0_BLK11_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB9Cu)

/** Alias (User Manual Name) for OVC0_BLK11_OMASK.
 * To use register names with standard convension, please use OVC0_BLK11_OMASK.
 */
#define OVC0_OMASK11     (OVC0_BLK11_OMASK)

/** \\brief  98, Overlay Target Address Register */
#define OVC0_BLK11_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB98u)

/** Alias (User Manual Name) for OVC0_BLK11_OTAR.
 * To use register names with standard convension, please use OVC0_BLK11_OTAR.
 */
#define OVC0_OTAR11      (OVC0_BLK11_OTAR)

/** \\brief  94, Redirected Address Base Register */
#define OVC0_BLK11_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB94u)

/** Alias (User Manual Name) for OVC0_BLK11_RABR.
 * To use register names with standard convension, please use OVC0_BLK11_RABR.
 */
#define OVC0_RABR11      (OVC0_BLK11_RABR)

/** \\brief  A8, Overlay Mask Register */
#define OVC0_BLK12_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FBA8u)

/** Alias (User Manual Name) for OVC0_BLK12_OMASK.
 * To use register names with standard convension, please use OVC0_BLK12_OMASK.
 */
#define OVC0_OMASK12     (OVC0_BLK12_OMASK)

/** \\brief  A4, Overlay Target Address Register */
#define OVC0_BLK12_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FBA4u)

/** Alias (User Manual Name) for OVC0_BLK12_OTAR.
 * To use register names with standard convension, please use OVC0_BLK12_OTAR.
 */
#define OVC0_OTAR12      (OVC0_BLK12_OTAR)

/** \\brief  A0, Redirected Address Base Register */
#define OVC0_BLK12_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FBA0u)

/** Alias (User Manual Name) for OVC0_BLK12_RABR.
 * To use register names with standard convension, please use OVC0_BLK12_RABR.
 */
#define OVC0_RABR12      (OVC0_BLK12_RABR)

/** \\brief  B4, Overlay Mask Register */
#define OVC0_BLK13_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FBB4u)

/** Alias (User Manual Name) for OVC0_BLK13_OMASK.
 * To use register names with standard convension, please use OVC0_BLK13_OMASK.
 */
#define OVC0_OMASK13     (OVC0_BLK13_OMASK)

/** \\brief  B0, Overlay Target Address Register */
#define OVC0_BLK13_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FBB0u)

/** Alias (User Manual Name) for OVC0_BLK13_OTAR.
 * To use register names with standard convension, please use OVC0_BLK13_OTAR.
 */
#define OVC0_OTAR13      (OVC0_BLK13_OTAR)

/** \\brief  AC, Redirected Address Base Register */
#define OVC0_BLK13_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FBACu)

/** Alias (User Manual Name) for OVC0_BLK13_RABR.
 * To use register names with standard convension, please use OVC0_BLK13_RABR.
 */
#define OVC0_RABR13      (OVC0_BLK13_RABR)

/** \\brief  C0, Overlay Mask Register */
#define OVC0_BLK14_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FBC0u)

/** Alias (User Manual Name) for OVC0_BLK14_OMASK.
 * To use register names with standard convension, please use OVC0_BLK14_OMASK.
 */
#define OVC0_OMASK14     (OVC0_BLK14_OMASK)

/** \\brief  BC, Overlay Target Address Register */
#define OVC0_BLK14_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FBBCu)

/** Alias (User Manual Name) for OVC0_BLK14_OTAR.
 * To use register names with standard convension, please use OVC0_BLK14_OTAR.
 */
#define OVC0_OTAR14      (OVC0_BLK14_OTAR)

/** \\brief  B8, Redirected Address Base Register */
#define OVC0_BLK14_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FBB8u)

/** Alias (User Manual Name) for OVC0_BLK14_RABR.
 * To use register names with standard convension, please use OVC0_BLK14_RABR.
 */
#define OVC0_RABR14      (OVC0_BLK14_RABR)

/** \\brief  CC, Overlay Mask Register */
#define OVC0_BLK15_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FBCCu)

/** Alias (User Manual Name) for OVC0_BLK15_OMASK.
 * To use register names with standard convension, please use OVC0_BLK15_OMASK.
 */
#define OVC0_OMASK15     (OVC0_BLK15_OMASK)

/** \\brief  C8, Overlay Target Address Register */
#define OVC0_BLK15_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FBC8u)

/** Alias (User Manual Name) for OVC0_BLK15_OTAR.
 * To use register names with standard convension, please use OVC0_BLK15_OTAR.
 */
#define OVC0_OTAR15      (OVC0_BLK15_OTAR)

/** \\brief  C4, Redirected Address Base Register */
#define OVC0_BLK15_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FBC4u)

/** Alias (User Manual Name) for OVC0_BLK15_RABR.
 * To use register names with standard convension, please use OVC0_BLK15_RABR.
 */
#define OVC0_RABR15      (OVC0_BLK15_RABR)

/** \\brief  D8, Overlay Mask Register */
#define OVC0_BLK16_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FBD8u)

/** Alias (User Manual Name) for OVC0_BLK16_OMASK.
 * To use register names with standard convension, please use OVC0_BLK16_OMASK.
 */
#define OVC0_OMASK16     (OVC0_BLK16_OMASK)

/** \\brief  D4, Overlay Target Address Register */
#define OVC0_BLK16_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FBD4u)

/** Alias (User Manual Name) for OVC0_BLK16_OTAR.
 * To use register names with standard convension, please use OVC0_BLK16_OTAR.
 */
#define OVC0_OTAR16      (OVC0_BLK16_OTAR)

/** \\brief  D0, Redirected Address Base Register */
#define OVC0_BLK16_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FBD0u)

/** Alias (User Manual Name) for OVC0_BLK16_RABR.
 * To use register names with standard convension, please use OVC0_BLK16_RABR.
 */
#define OVC0_RABR16      (OVC0_BLK16_RABR)

/** \\brief  E4, Overlay Mask Register */
#define OVC0_BLK17_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FBE4u)

/** Alias (User Manual Name) for OVC0_BLK17_OMASK.
 * To use register names with standard convension, please use OVC0_BLK17_OMASK.
 */
#define OVC0_OMASK17     (OVC0_BLK17_OMASK)

/** \\brief  E0, Overlay Target Address Register */
#define OVC0_BLK17_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FBE0u)

/** Alias (User Manual Name) for OVC0_BLK17_OTAR.
 * To use register names with standard convension, please use OVC0_BLK17_OTAR.
 */
#define OVC0_OTAR17      (OVC0_BLK17_OTAR)

/** \\brief  DC, Redirected Address Base Register */
#define OVC0_BLK17_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FBDCu)

/** Alias (User Manual Name) for OVC0_BLK17_RABR.
 * To use register names with standard convension, please use OVC0_BLK17_RABR.
 */
#define OVC0_RABR17      (OVC0_BLK17_RABR)

/** \\brief  F0, Overlay Mask Register */
#define OVC0_BLK18_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FBF0u)

/** Alias (User Manual Name) for OVC0_BLK18_OMASK.
 * To use register names with standard convension, please use OVC0_BLK18_OMASK.
 */
#define OVC0_OMASK18     (OVC0_BLK18_OMASK)

/** \\brief  EC, Overlay Target Address Register */
#define OVC0_BLK18_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FBECu)

/** Alias (User Manual Name) for OVC0_BLK18_OTAR.
 * To use register names with standard convension, please use OVC0_BLK18_OTAR.
 */
#define OVC0_OTAR18      (OVC0_BLK18_OTAR)

/** \\brief  E8, Redirected Address Base Register */
#define OVC0_BLK18_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FBE8u)

/** Alias (User Manual Name) for OVC0_BLK18_RABR.
 * To use register names with standard convension, please use OVC0_BLK18_RABR.
 */
#define OVC0_RABR18      (OVC0_BLK18_RABR)

/** \\brief  FC, Overlay Mask Register */
#define OVC0_BLK19_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FBFCu)

/** Alias (User Manual Name) for OVC0_BLK19_OMASK.
 * To use register names with standard convension, please use OVC0_BLK19_OMASK.
 */
#define OVC0_OMASK19     (OVC0_BLK19_OMASK)

/** \\brief  F8, Overlay Target Address Register */
#define OVC0_BLK19_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FBF8u)

/** Alias (User Manual Name) for OVC0_BLK19_OTAR.
 * To use register names with standard convension, please use OVC0_BLK19_OTAR.
 */
#define OVC0_OTAR19      (OVC0_BLK19_OTAR)

/** \\brief  F4, Redirected Address Base Register */
#define OVC0_BLK19_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FBF4u)

/** Alias (User Manual Name) for OVC0_BLK19_RABR.
 * To use register names with standard convension, please use OVC0_BLK19_RABR.
 */
#define OVC0_RABR19      (OVC0_BLK19_RABR)

/** \\brief  24, Overlay Mask Register */
#define OVC0_BLK1_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB24u)

/** Alias (User Manual Name) for OVC0_BLK1_OMASK.
 * To use register names with standard convension, please use OVC0_BLK1_OMASK.
 */
#define OVC0_OMASK1      (OVC0_BLK1_OMASK)

/** \\brief  20, Overlay Target Address Register */
#define OVC0_BLK1_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB20u)

/** Alias (User Manual Name) for OVC0_BLK1_OTAR.
 * To use register names with standard convension, please use OVC0_BLK1_OTAR.
 */
#define OVC0_OTAR1       (OVC0_BLK1_OTAR)

/** \\brief  1C, Redirected Address Base Register */
#define OVC0_BLK1_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB1Cu)

/** Alias (User Manual Name) for OVC0_BLK1_RABR.
 * To use register names with standard convension, please use OVC0_BLK1_RABR.
 */
#define OVC0_RABR1       (OVC0_BLK1_RABR)

/** \\brief  108, Overlay Mask Register */
#define OVC0_BLK20_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC08u)

/** Alias (User Manual Name) for OVC0_BLK20_OMASK.
 * To use register names with standard convension, please use OVC0_BLK20_OMASK.
 */
#define OVC0_OMASK20     (OVC0_BLK20_OMASK)

/** \\brief  104, Overlay Target Address Register */
#define OVC0_BLK20_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC04u)

/** Alias (User Manual Name) for OVC0_BLK20_OTAR.
 * To use register names with standard convension, please use OVC0_BLK20_OTAR.
 */
#define OVC0_OTAR20      (OVC0_BLK20_OTAR)

/** \\brief  100, Redirected Address Base Register */
#define OVC0_BLK20_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC00u)

/** Alias (User Manual Name) for OVC0_BLK20_RABR.
 * To use register names with standard convension, please use OVC0_BLK20_RABR.
 */
#define OVC0_RABR20      (OVC0_BLK20_RABR)

/** \\brief  114, Overlay Mask Register */
#define OVC0_BLK21_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC14u)

/** Alias (User Manual Name) for OVC0_BLK21_OMASK.
 * To use register names with standard convension, please use OVC0_BLK21_OMASK.
 */
#define OVC0_OMASK21     (OVC0_BLK21_OMASK)

/** \\brief  110, Overlay Target Address Register */
#define OVC0_BLK21_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC10u)

/** Alias (User Manual Name) for OVC0_BLK21_OTAR.
 * To use register names with standard convension, please use OVC0_BLK21_OTAR.
 */
#define OVC0_OTAR21      (OVC0_BLK21_OTAR)

/** \\brief  10C, Redirected Address Base Register */
#define OVC0_BLK21_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC0Cu)

/** Alias (User Manual Name) for OVC0_BLK21_RABR.
 * To use register names with standard convension, please use OVC0_BLK21_RABR.
 */
#define OVC0_RABR21      (OVC0_BLK21_RABR)

/** \\brief  120, Overlay Mask Register */
#define OVC0_BLK22_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC20u)

/** Alias (User Manual Name) for OVC0_BLK22_OMASK.
 * To use register names with standard convension, please use OVC0_BLK22_OMASK.
 */
#define OVC0_OMASK22     (OVC0_BLK22_OMASK)

/** \\brief  11C, Overlay Target Address Register */
#define OVC0_BLK22_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC1Cu)

/** Alias (User Manual Name) for OVC0_BLK22_OTAR.
 * To use register names with standard convension, please use OVC0_BLK22_OTAR.
 */
#define OVC0_OTAR22      (OVC0_BLK22_OTAR)

/** \\brief  118, Redirected Address Base Register */
#define OVC0_BLK22_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC18u)

/** Alias (User Manual Name) for OVC0_BLK22_RABR.
 * To use register names with standard convension, please use OVC0_BLK22_RABR.
 */
#define OVC0_RABR22      (OVC0_BLK22_RABR)

/** \\brief  12C, Overlay Mask Register */
#define OVC0_BLK23_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC2Cu)

/** Alias (User Manual Name) for OVC0_BLK23_OMASK.
 * To use register names with standard convension, please use OVC0_BLK23_OMASK.
 */
#define OVC0_OMASK23     (OVC0_BLK23_OMASK)

/** \\brief  128, Overlay Target Address Register */
#define OVC0_BLK23_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC28u)

/** Alias (User Manual Name) for OVC0_BLK23_OTAR.
 * To use register names with standard convension, please use OVC0_BLK23_OTAR.
 */
#define OVC0_OTAR23      (OVC0_BLK23_OTAR)

/** \\brief  124, Redirected Address Base Register */
#define OVC0_BLK23_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC24u)

/** Alias (User Manual Name) for OVC0_BLK23_RABR.
 * To use register names with standard convension, please use OVC0_BLK23_RABR.
 */
#define OVC0_RABR23      (OVC0_BLK23_RABR)

/** \\brief  138, Overlay Mask Register */
#define OVC0_BLK24_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC38u)

/** Alias (User Manual Name) for OVC0_BLK24_OMASK.
 * To use register names with standard convension, please use OVC0_BLK24_OMASK.
 */
#define OVC0_OMASK24     (OVC0_BLK24_OMASK)

/** \\brief  134, Overlay Target Address Register */
#define OVC0_BLK24_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC34u)

/** Alias (User Manual Name) for OVC0_BLK24_OTAR.
 * To use register names with standard convension, please use OVC0_BLK24_OTAR.
 */
#define OVC0_OTAR24      (OVC0_BLK24_OTAR)

/** \\brief  130, Redirected Address Base Register */
#define OVC0_BLK24_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC30u)

/** Alias (User Manual Name) for OVC0_BLK24_RABR.
 * To use register names with standard convension, please use OVC0_BLK24_RABR.
 */
#define OVC0_RABR24      (OVC0_BLK24_RABR)

/** \\brief  144, Overlay Mask Register */
#define OVC0_BLK25_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC44u)

/** Alias (User Manual Name) for OVC0_BLK25_OMASK.
 * To use register names with standard convension, please use OVC0_BLK25_OMASK.
 */
#define OVC0_OMASK25     (OVC0_BLK25_OMASK)

/** \\brief  140, Overlay Target Address Register */
#define OVC0_BLK25_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC40u)

/** Alias (User Manual Name) for OVC0_BLK25_OTAR.
 * To use register names with standard convension, please use OVC0_BLK25_OTAR.
 */
#define OVC0_OTAR25      (OVC0_BLK25_OTAR)

/** \\brief  13C, Redirected Address Base Register */
#define OVC0_BLK25_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC3Cu)

/** Alias (User Manual Name) for OVC0_BLK25_RABR.
 * To use register names with standard convension, please use OVC0_BLK25_RABR.
 */
#define OVC0_RABR25      (OVC0_BLK25_RABR)

/** \\brief  150, Overlay Mask Register */
#define OVC0_BLK26_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC50u)

/** Alias (User Manual Name) for OVC0_BLK26_OMASK.
 * To use register names with standard convension, please use OVC0_BLK26_OMASK.
 */
#define OVC0_OMASK26     (OVC0_BLK26_OMASK)

/** \\brief  14C, Overlay Target Address Register */
#define OVC0_BLK26_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC4Cu)

/** Alias (User Manual Name) for OVC0_BLK26_OTAR.
 * To use register names with standard convension, please use OVC0_BLK26_OTAR.
 */
#define OVC0_OTAR26      (OVC0_BLK26_OTAR)

/** \\brief  148, Redirected Address Base Register */
#define OVC0_BLK26_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC48u)

/** Alias (User Manual Name) for OVC0_BLK26_RABR.
 * To use register names with standard convension, please use OVC0_BLK26_RABR.
 */
#define OVC0_RABR26      (OVC0_BLK26_RABR)

/** \\brief  15C, Overlay Mask Register */
#define OVC0_BLK27_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC5Cu)

/** Alias (User Manual Name) for OVC0_BLK27_OMASK.
 * To use register names with standard convension, please use OVC0_BLK27_OMASK.
 */
#define OVC0_OMASK27     (OVC0_BLK27_OMASK)

/** \\brief  158, Overlay Target Address Register */
#define OVC0_BLK27_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC58u)

/** Alias (User Manual Name) for OVC0_BLK27_OTAR.
 * To use register names with standard convension, please use OVC0_BLK27_OTAR.
 */
#define OVC0_OTAR27      (OVC0_BLK27_OTAR)

/** \\brief  154, Redirected Address Base Register */
#define OVC0_BLK27_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC54u)

/** Alias (User Manual Name) for OVC0_BLK27_RABR.
 * To use register names with standard convension, please use OVC0_BLK27_RABR.
 */
#define OVC0_RABR27      (OVC0_BLK27_RABR)

/** \\brief  168, Overlay Mask Register */
#define OVC0_BLK28_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC68u)

/** Alias (User Manual Name) for OVC0_BLK28_OMASK.
 * To use register names with standard convension, please use OVC0_BLK28_OMASK.
 */
#define OVC0_OMASK28     (OVC0_BLK28_OMASK)

/** \\brief  164, Overlay Target Address Register */
#define OVC0_BLK28_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC64u)

/** Alias (User Manual Name) for OVC0_BLK28_OTAR.
 * To use register names with standard convension, please use OVC0_BLK28_OTAR.
 */
#define OVC0_OTAR28      (OVC0_BLK28_OTAR)

/** \\brief  160, Redirected Address Base Register */
#define OVC0_BLK28_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC60u)

/** Alias (User Manual Name) for OVC0_BLK28_RABR.
 * To use register names with standard convension, please use OVC0_BLK28_RABR.
 */
#define OVC0_RABR28      (OVC0_BLK28_RABR)

/** \\brief  174, Overlay Mask Register */
#define OVC0_BLK29_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC74u)

/** Alias (User Manual Name) for OVC0_BLK29_OMASK.
 * To use register names with standard convension, please use OVC0_BLK29_OMASK.
 */
#define OVC0_OMASK29     (OVC0_BLK29_OMASK)

/** \\brief  170, Overlay Target Address Register */
#define OVC0_BLK29_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC70u)

/** Alias (User Manual Name) for OVC0_BLK29_OTAR.
 * To use register names with standard convension, please use OVC0_BLK29_OTAR.
 */
#define OVC0_OTAR29      (OVC0_BLK29_OTAR)

/** \\brief  16C, Redirected Address Base Register */
#define OVC0_BLK29_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC6Cu)

/** Alias (User Manual Name) for OVC0_BLK29_RABR.
 * To use register names with standard convension, please use OVC0_BLK29_RABR.
 */
#define OVC0_RABR29      (OVC0_BLK29_RABR)

/** \\brief  30, Overlay Mask Register */
#define OVC0_BLK2_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB30u)

/** Alias (User Manual Name) for OVC0_BLK2_OMASK.
 * To use register names with standard convension, please use OVC0_BLK2_OMASK.
 */
#define OVC0_OMASK2      (OVC0_BLK2_OMASK)

/** \\brief  2C, Overlay Target Address Register */
#define OVC0_BLK2_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB2Cu)

/** Alias (User Manual Name) for OVC0_BLK2_OTAR.
 * To use register names with standard convension, please use OVC0_BLK2_OTAR.
 */
#define OVC0_OTAR2       (OVC0_BLK2_OTAR)

/** \\brief  28, Redirected Address Base Register */
#define OVC0_BLK2_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB28u)

/** Alias (User Manual Name) for OVC0_BLK2_RABR.
 * To use register names with standard convension, please use OVC0_BLK2_RABR.
 */
#define OVC0_RABR2       (OVC0_BLK2_RABR)

/** \\brief  180, Overlay Mask Register */
#define OVC0_BLK30_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC80u)

/** Alias (User Manual Name) for OVC0_BLK30_OMASK.
 * To use register names with standard convension, please use OVC0_BLK30_OMASK.
 */
#define OVC0_OMASK30     (OVC0_BLK30_OMASK)

/** \\brief  17C, Overlay Target Address Register */
#define OVC0_BLK30_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC7Cu)

/** Alias (User Manual Name) for OVC0_BLK30_OTAR.
 * To use register names with standard convension, please use OVC0_BLK30_OTAR.
 */
#define OVC0_OTAR30      (OVC0_BLK30_OTAR)

/** \\brief  178, Redirected Address Base Register */
#define OVC0_BLK30_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC78u)

/** Alias (User Manual Name) for OVC0_BLK30_RABR.
 * To use register names with standard convension, please use OVC0_BLK30_RABR.
 */
#define OVC0_RABR30      (OVC0_BLK30_RABR)

/** \\brief  18C, Overlay Mask Register */
#define OVC0_BLK31_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FC8Cu)

/** Alias (User Manual Name) for OVC0_BLK31_OMASK.
 * To use register names with standard convension, please use OVC0_BLK31_OMASK.
 */
#define OVC0_OMASK31     (OVC0_BLK31_OMASK)

/** \\brief  188, Overlay Target Address Register */
#define OVC0_BLK31_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FC88u)

/** Alias (User Manual Name) for OVC0_BLK31_OTAR.
 * To use register names with standard convension, please use OVC0_BLK31_OTAR.
 */
#define OVC0_OTAR31      (OVC0_BLK31_OTAR)

/** \\brief  184, Redirected Address Base Register */
#define OVC0_BLK31_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FC84u)

/** Alias (User Manual Name) for OVC0_BLK31_RABR.
 * To use register names with standard convension, please use OVC0_BLK31_RABR.
 */
#define OVC0_RABR31      (OVC0_BLK31_RABR)

/** \\brief  3C, Overlay Mask Register */
#define OVC0_BLK3_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB3Cu)

/** Alias (User Manual Name) for OVC0_BLK3_OMASK.
 * To use register names with standard convension, please use OVC0_BLK3_OMASK.
 */
#define OVC0_OMASK3      (OVC0_BLK3_OMASK)

/** \\brief  38, Overlay Target Address Register */
#define OVC0_BLK3_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB38u)

/** Alias (User Manual Name) for OVC0_BLK3_OTAR.
 * To use register names with standard convension, please use OVC0_BLK3_OTAR.
 */
#define OVC0_OTAR3       (OVC0_BLK3_OTAR)

/** \\brief  34, Redirected Address Base Register */
#define OVC0_BLK3_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB34u)

/** Alias (User Manual Name) for OVC0_BLK3_RABR.
 * To use register names with standard convension, please use OVC0_BLK3_RABR.
 */
#define OVC0_RABR3       (OVC0_BLK3_RABR)

/** \\brief  48, Overlay Mask Register */
#define OVC0_BLK4_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB48u)

/** Alias (User Manual Name) for OVC0_BLK4_OMASK.
 * To use register names with standard convension, please use OVC0_BLK4_OMASK.
 */
#define OVC0_OMASK4      (OVC0_BLK4_OMASK)

/** \\brief  44, Overlay Target Address Register */
#define OVC0_BLK4_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB44u)

/** Alias (User Manual Name) for OVC0_BLK4_OTAR.
 * To use register names with standard convension, please use OVC0_BLK4_OTAR.
 */
#define OVC0_OTAR4       (OVC0_BLK4_OTAR)

/** \\brief  40, Redirected Address Base Register */
#define OVC0_BLK4_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB40u)

/** Alias (User Manual Name) for OVC0_BLK4_RABR.
 * To use register names with standard convension, please use OVC0_BLK4_RABR.
 */
#define OVC0_RABR4       (OVC0_BLK4_RABR)

/** \\brief  54, Overlay Mask Register */
#define OVC0_BLK5_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB54u)

/** Alias (User Manual Name) for OVC0_BLK5_OMASK.
 * To use register names with standard convension, please use OVC0_BLK5_OMASK.
 */
#define OVC0_OMASK5      (OVC0_BLK5_OMASK)

/** \\brief  50, Overlay Target Address Register */
#define OVC0_BLK5_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB50u)

/** Alias (User Manual Name) for OVC0_BLK5_OTAR.
 * To use register names with standard convension, please use OVC0_BLK5_OTAR.
 */
#define OVC0_OTAR5       (OVC0_BLK5_OTAR)

/** \\brief  4C, Redirected Address Base Register */
#define OVC0_BLK5_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB4Cu)

/** Alias (User Manual Name) for OVC0_BLK5_RABR.
 * To use register names with standard convension, please use OVC0_BLK5_RABR.
 */
#define OVC0_RABR5       (OVC0_BLK5_RABR)

/** \\brief  60, Overlay Mask Register */
#define OVC0_BLK6_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB60u)

/** Alias (User Manual Name) for OVC0_BLK6_OMASK.
 * To use register names with standard convension, please use OVC0_BLK6_OMASK.
 */
#define OVC0_OMASK6      (OVC0_BLK6_OMASK)

/** \\brief  5C, Overlay Target Address Register */
#define OVC0_BLK6_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB5Cu)

/** Alias (User Manual Name) for OVC0_BLK6_OTAR.
 * To use register names with standard convension, please use OVC0_BLK6_OTAR.
 */
#define OVC0_OTAR6       (OVC0_BLK6_OTAR)

/** \\brief  58, Redirected Address Base Register */
#define OVC0_BLK6_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB58u)

/** Alias (User Manual Name) for OVC0_BLK6_RABR.
 * To use register names with standard convension, please use OVC0_BLK6_RABR.
 */
#define OVC0_RABR6       (OVC0_BLK6_RABR)

/** \\brief  6C, Overlay Mask Register */
#define OVC0_BLK7_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB6Cu)

/** Alias (User Manual Name) for OVC0_BLK7_OMASK.
 * To use register names with standard convension, please use OVC0_BLK7_OMASK.
 */
#define OVC0_OMASK7      (OVC0_BLK7_OMASK)

/** \\brief  68, Overlay Target Address Register */
#define OVC0_BLK7_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB68u)

/** Alias (User Manual Name) for OVC0_BLK7_OTAR.
 * To use register names with standard convension, please use OVC0_BLK7_OTAR.
 */
#define OVC0_OTAR7       (OVC0_BLK7_OTAR)

/** \\brief  64, Redirected Address Base Register */
#define OVC0_BLK7_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB64u)

/** Alias (User Manual Name) for OVC0_BLK7_RABR.
 * To use register names with standard convension, please use OVC0_BLK7_RABR.
 */
#define OVC0_RABR7       (OVC0_BLK7_RABR)

/** \\brief  78, Overlay Mask Register */
#define OVC0_BLK8_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB78u)

/** Alias (User Manual Name) for OVC0_BLK8_OMASK.
 * To use register names with standard convension, please use OVC0_BLK8_OMASK.
 */
#define OVC0_OMASK8      (OVC0_BLK8_OMASK)

/** \\brief  74, Overlay Target Address Register */
#define OVC0_BLK8_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB74u)

/** Alias (User Manual Name) for OVC0_BLK8_OTAR.
 * To use register names with standard convension, please use OVC0_BLK8_OTAR.
 */
#define OVC0_OTAR8       (OVC0_BLK8_OTAR)

/** \\brief  70, Redirected Address Base Register */
#define OVC0_BLK8_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB70u)

/** Alias (User Manual Name) for OVC0_BLK8_RABR.
 * To use register names with standard convension, please use OVC0_BLK8_RABR.
 */
#define OVC0_RABR8       (OVC0_BLK8_RABR)

/** \\brief  84, Overlay Mask Register */
#define OVC0_BLK9_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF880FB84u)

/** Alias (User Manual Name) for OVC0_BLK9_OMASK.
 * To use register names with standard convension, please use OVC0_BLK9_OMASK.
 */
#define OVC0_OMASK9      (OVC0_BLK9_OMASK)

/** \\brief  80, Overlay Target Address Register */
#define OVC0_BLK9_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF880FB80u)

/** Alias (User Manual Name) for OVC0_BLK9_OTAR.
 * To use register names with standard convension, please use OVC0_BLK9_OTAR.
 */
#define OVC0_OTAR9       (OVC0_BLK9_OTAR)

/** \\brief  7C, Redirected Address Base Register */
#define OVC0_BLK9_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF880FB7Cu)

/** Alias (User Manual Name) for OVC0_BLK9_RABR.
 * To use register names with standard convension, please use OVC0_BLK9_RABR.
 */
#define OVC0_RABR9       (OVC0_BLK9_RABR)

/** \\brief  0, Overlay Range Select Register */
#define OVC0_OSEL        /*lint --e(923)*/ (*(volatile Ifx_OVC_OSEL *)0xF880FB00u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ovc_Cfg_Ovc1
 * \{  */

/** \\brief  18, Overlay Mask Register */
#define OVC1_BLK0_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB18u)

/** Alias (User Manual Name) for OVC1_BLK0_OMASK.
 * To use register names with standard convension, please use OVC1_BLK0_OMASK.
 */
#define OVC1_OMASK0      (OVC1_BLK0_OMASK)

/** \\brief  14, Overlay Target Address Register */
#define OVC1_BLK0_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB14u)

/** Alias (User Manual Name) for OVC1_BLK0_OTAR.
 * To use register names with standard convension, please use OVC1_BLK0_OTAR.
 */
#define OVC1_OTAR0       (OVC1_BLK0_OTAR)

/** \\brief  10, Redirected Address Base Register */
#define OVC1_BLK0_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB10u)

/** Alias (User Manual Name) for OVC1_BLK0_RABR.
 * To use register names with standard convension, please use OVC1_BLK0_RABR.
 */
#define OVC1_RABR0       (OVC1_BLK0_RABR)

/** \\brief  90, Overlay Mask Register */
#define OVC1_BLK10_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB90u)

/** Alias (User Manual Name) for OVC1_BLK10_OMASK.
 * To use register names with standard convension, please use OVC1_BLK10_OMASK.
 */
#define OVC1_OMASK10     (OVC1_BLK10_OMASK)

/** \\brief  8C, Overlay Target Address Register */
#define OVC1_BLK10_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB8Cu)

/** Alias (User Manual Name) for OVC1_BLK10_OTAR.
 * To use register names with standard convension, please use OVC1_BLK10_OTAR.
 */
#define OVC1_OTAR10      (OVC1_BLK10_OTAR)

/** \\brief  88, Redirected Address Base Register */
#define OVC1_BLK10_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB88u)

/** Alias (User Manual Name) for OVC1_BLK10_RABR.
 * To use register names with standard convension, please use OVC1_BLK10_RABR.
 */
#define OVC1_RABR10      (OVC1_BLK10_RABR)

/** \\brief  9C, Overlay Mask Register */
#define OVC1_BLK11_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB9Cu)

/** Alias (User Manual Name) for OVC1_BLK11_OMASK.
 * To use register names with standard convension, please use OVC1_BLK11_OMASK.
 */
#define OVC1_OMASK11     (OVC1_BLK11_OMASK)

/** \\brief  98, Overlay Target Address Register */
#define OVC1_BLK11_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB98u)

/** Alias (User Manual Name) for OVC1_BLK11_OTAR.
 * To use register names with standard convension, please use OVC1_BLK11_OTAR.
 */
#define OVC1_OTAR11      (OVC1_BLK11_OTAR)

/** \\brief  94, Redirected Address Base Register */
#define OVC1_BLK11_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB94u)

/** Alias (User Manual Name) for OVC1_BLK11_RABR.
 * To use register names with standard convension, please use OVC1_BLK11_RABR.
 */
#define OVC1_RABR11      (OVC1_BLK11_RABR)

/** \\brief  A8, Overlay Mask Register */
#define OVC1_BLK12_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FBA8u)

/** Alias (User Manual Name) for OVC1_BLK12_OMASK.
 * To use register names with standard convension, please use OVC1_BLK12_OMASK.
 */
#define OVC1_OMASK12     (OVC1_BLK12_OMASK)

/** \\brief  A4, Overlay Target Address Register */
#define OVC1_BLK12_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FBA4u)

/** Alias (User Manual Name) for OVC1_BLK12_OTAR.
 * To use register names with standard convension, please use OVC1_BLK12_OTAR.
 */
#define OVC1_OTAR12      (OVC1_BLK12_OTAR)

/** \\brief  A0, Redirected Address Base Register */
#define OVC1_BLK12_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FBA0u)

/** Alias (User Manual Name) for OVC1_BLK12_RABR.
 * To use register names with standard convension, please use OVC1_BLK12_RABR.
 */
#define OVC1_RABR12      (OVC1_BLK12_RABR)

/** \\brief  B4, Overlay Mask Register */
#define OVC1_BLK13_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FBB4u)

/** Alias (User Manual Name) for OVC1_BLK13_OMASK.
 * To use register names with standard convension, please use OVC1_BLK13_OMASK.
 */
#define OVC1_OMASK13     (OVC1_BLK13_OMASK)

/** \\brief  B0, Overlay Target Address Register */
#define OVC1_BLK13_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FBB0u)

/** Alias (User Manual Name) for OVC1_BLK13_OTAR.
 * To use register names with standard convension, please use OVC1_BLK13_OTAR.
 */
#define OVC1_OTAR13      (OVC1_BLK13_OTAR)

/** \\brief  AC, Redirected Address Base Register */
#define OVC1_BLK13_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FBACu)

/** Alias (User Manual Name) for OVC1_BLK13_RABR.
 * To use register names with standard convension, please use OVC1_BLK13_RABR.
 */
#define OVC1_RABR13      (OVC1_BLK13_RABR)

/** \\brief  C0, Overlay Mask Register */
#define OVC1_BLK14_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FBC0u)

/** Alias (User Manual Name) for OVC1_BLK14_OMASK.
 * To use register names with standard convension, please use OVC1_BLK14_OMASK.
 */
#define OVC1_OMASK14     (OVC1_BLK14_OMASK)

/** \\brief  BC, Overlay Target Address Register */
#define OVC1_BLK14_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FBBCu)

/** Alias (User Manual Name) for OVC1_BLK14_OTAR.
 * To use register names with standard convension, please use OVC1_BLK14_OTAR.
 */
#define OVC1_OTAR14      (OVC1_BLK14_OTAR)

/** \\brief  B8, Redirected Address Base Register */
#define OVC1_BLK14_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FBB8u)

/** Alias (User Manual Name) for OVC1_BLK14_RABR.
 * To use register names with standard convension, please use OVC1_BLK14_RABR.
 */
#define OVC1_RABR14      (OVC1_BLK14_RABR)

/** \\brief  CC, Overlay Mask Register */
#define OVC1_BLK15_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FBCCu)

/** Alias (User Manual Name) for OVC1_BLK15_OMASK.
 * To use register names with standard convension, please use OVC1_BLK15_OMASK.
 */
#define OVC1_OMASK15     (OVC1_BLK15_OMASK)

/** \\brief  C8, Overlay Target Address Register */
#define OVC1_BLK15_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FBC8u)

/** Alias (User Manual Name) for OVC1_BLK15_OTAR.
 * To use register names with standard convension, please use OVC1_BLK15_OTAR.
 */
#define OVC1_OTAR15      (OVC1_BLK15_OTAR)

/** \\brief  C4, Redirected Address Base Register */
#define OVC1_BLK15_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FBC4u)

/** Alias (User Manual Name) for OVC1_BLK15_RABR.
 * To use register names with standard convension, please use OVC1_BLK15_RABR.
 */
#define OVC1_RABR15      (OVC1_BLK15_RABR)

/** \\brief  D8, Overlay Mask Register */
#define OVC1_BLK16_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FBD8u)

/** Alias (User Manual Name) for OVC1_BLK16_OMASK.
 * To use register names with standard convension, please use OVC1_BLK16_OMASK.
 */
#define OVC1_OMASK16     (OVC1_BLK16_OMASK)

/** \\brief  D4, Overlay Target Address Register */
#define OVC1_BLK16_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FBD4u)

/** Alias (User Manual Name) for OVC1_BLK16_OTAR.
 * To use register names with standard convension, please use OVC1_BLK16_OTAR.
 */
#define OVC1_OTAR16      (OVC1_BLK16_OTAR)

/** \\brief  D0, Redirected Address Base Register */
#define OVC1_BLK16_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FBD0u)

/** Alias (User Manual Name) for OVC1_BLK16_RABR.
 * To use register names with standard convension, please use OVC1_BLK16_RABR.
 */
#define OVC1_RABR16      (OVC1_BLK16_RABR)

/** \\brief  E4, Overlay Mask Register */
#define OVC1_BLK17_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FBE4u)

/** Alias (User Manual Name) for OVC1_BLK17_OMASK.
 * To use register names with standard convension, please use OVC1_BLK17_OMASK.
 */
#define OVC1_OMASK17     (OVC1_BLK17_OMASK)

/** \\brief  E0, Overlay Target Address Register */
#define OVC1_BLK17_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FBE0u)

/** Alias (User Manual Name) for OVC1_BLK17_OTAR.
 * To use register names with standard convension, please use OVC1_BLK17_OTAR.
 */
#define OVC1_OTAR17      (OVC1_BLK17_OTAR)

/** \\brief  DC, Redirected Address Base Register */
#define OVC1_BLK17_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FBDCu)

/** Alias (User Manual Name) for OVC1_BLK17_RABR.
 * To use register names with standard convension, please use OVC1_BLK17_RABR.
 */
#define OVC1_RABR17      (OVC1_BLK17_RABR)

/** \\brief  F0, Overlay Mask Register */
#define OVC1_BLK18_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FBF0u)

/** Alias (User Manual Name) for OVC1_BLK18_OMASK.
 * To use register names with standard convension, please use OVC1_BLK18_OMASK.
 */
#define OVC1_OMASK18     (OVC1_BLK18_OMASK)

/** \\brief  EC, Overlay Target Address Register */
#define OVC1_BLK18_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FBECu)

/** Alias (User Manual Name) for OVC1_BLK18_OTAR.
 * To use register names with standard convension, please use OVC1_BLK18_OTAR.
 */
#define OVC1_OTAR18      (OVC1_BLK18_OTAR)

/** \\brief  E8, Redirected Address Base Register */
#define OVC1_BLK18_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FBE8u)

/** Alias (User Manual Name) for OVC1_BLK18_RABR.
 * To use register names with standard convension, please use OVC1_BLK18_RABR.
 */
#define OVC1_RABR18      (OVC1_BLK18_RABR)

/** \\brief  FC, Overlay Mask Register */
#define OVC1_BLK19_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FBFCu)

/** Alias (User Manual Name) for OVC1_BLK19_OMASK.
 * To use register names with standard convension, please use OVC1_BLK19_OMASK.
 */
#define OVC1_OMASK19     (OVC1_BLK19_OMASK)

/** \\brief  F8, Overlay Target Address Register */
#define OVC1_BLK19_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FBF8u)

/** Alias (User Manual Name) for OVC1_BLK19_OTAR.
 * To use register names with standard convension, please use OVC1_BLK19_OTAR.
 */
#define OVC1_OTAR19      (OVC1_BLK19_OTAR)

/** \\brief  F4, Redirected Address Base Register */
#define OVC1_BLK19_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FBF4u)

/** Alias (User Manual Name) for OVC1_BLK19_RABR.
 * To use register names with standard convension, please use OVC1_BLK19_RABR.
 */
#define OVC1_RABR19      (OVC1_BLK19_RABR)

/** \\brief  24, Overlay Mask Register */
#define OVC1_BLK1_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB24u)

/** Alias (User Manual Name) for OVC1_BLK1_OMASK.
 * To use register names with standard convension, please use OVC1_BLK1_OMASK.
 */
#define OVC1_OMASK1      (OVC1_BLK1_OMASK)

/** \\brief  20, Overlay Target Address Register */
#define OVC1_BLK1_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB20u)

/** Alias (User Manual Name) for OVC1_BLK1_OTAR.
 * To use register names with standard convension, please use OVC1_BLK1_OTAR.
 */
#define OVC1_OTAR1       (OVC1_BLK1_OTAR)

/** \\brief  1C, Redirected Address Base Register */
#define OVC1_BLK1_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB1Cu)

/** Alias (User Manual Name) for OVC1_BLK1_RABR.
 * To use register names with standard convension, please use OVC1_BLK1_RABR.
 */
#define OVC1_RABR1       (OVC1_BLK1_RABR)

/** \\brief  108, Overlay Mask Register */
#define OVC1_BLK20_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC08u)

/** Alias (User Manual Name) for OVC1_BLK20_OMASK.
 * To use register names with standard convension, please use OVC1_BLK20_OMASK.
 */
#define OVC1_OMASK20     (OVC1_BLK20_OMASK)

/** \\brief  104, Overlay Target Address Register */
#define OVC1_BLK20_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC04u)

/** Alias (User Manual Name) for OVC1_BLK20_OTAR.
 * To use register names with standard convension, please use OVC1_BLK20_OTAR.
 */
#define OVC1_OTAR20      (OVC1_BLK20_OTAR)

/** \\brief  100, Redirected Address Base Register */
#define OVC1_BLK20_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC00u)

/** Alias (User Manual Name) for OVC1_BLK20_RABR.
 * To use register names with standard convension, please use OVC1_BLK20_RABR.
 */
#define OVC1_RABR20      (OVC1_BLK20_RABR)

/** \\brief  114, Overlay Mask Register */
#define OVC1_BLK21_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC14u)

/** Alias (User Manual Name) for OVC1_BLK21_OMASK.
 * To use register names with standard convension, please use OVC1_BLK21_OMASK.
 */
#define OVC1_OMASK21     (OVC1_BLK21_OMASK)

/** \\brief  110, Overlay Target Address Register */
#define OVC1_BLK21_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC10u)

/** Alias (User Manual Name) for OVC1_BLK21_OTAR.
 * To use register names with standard convension, please use OVC1_BLK21_OTAR.
 */
#define OVC1_OTAR21      (OVC1_BLK21_OTAR)

/** \\brief  10C, Redirected Address Base Register */
#define OVC1_BLK21_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC0Cu)

/** Alias (User Manual Name) for OVC1_BLK21_RABR.
 * To use register names with standard convension, please use OVC1_BLK21_RABR.
 */
#define OVC1_RABR21      (OVC1_BLK21_RABR)

/** \\brief  120, Overlay Mask Register */
#define OVC1_BLK22_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC20u)

/** Alias (User Manual Name) for OVC1_BLK22_OMASK.
 * To use register names with standard convension, please use OVC1_BLK22_OMASK.
 */
#define OVC1_OMASK22     (OVC1_BLK22_OMASK)

/** \\brief  11C, Overlay Target Address Register */
#define OVC1_BLK22_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC1Cu)

/** Alias (User Manual Name) for OVC1_BLK22_OTAR.
 * To use register names with standard convension, please use OVC1_BLK22_OTAR.
 */
#define OVC1_OTAR22      (OVC1_BLK22_OTAR)

/** \\brief  118, Redirected Address Base Register */
#define OVC1_BLK22_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC18u)

/** Alias (User Manual Name) for OVC1_BLK22_RABR.
 * To use register names with standard convension, please use OVC1_BLK22_RABR.
 */
#define OVC1_RABR22      (OVC1_BLK22_RABR)

/** \\brief  12C, Overlay Mask Register */
#define OVC1_BLK23_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC2Cu)

/** Alias (User Manual Name) for OVC1_BLK23_OMASK.
 * To use register names with standard convension, please use OVC1_BLK23_OMASK.
 */
#define OVC1_OMASK23     (OVC1_BLK23_OMASK)

/** \\brief  128, Overlay Target Address Register */
#define OVC1_BLK23_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC28u)

/** Alias (User Manual Name) for OVC1_BLK23_OTAR.
 * To use register names with standard convension, please use OVC1_BLK23_OTAR.
 */
#define OVC1_OTAR23      (OVC1_BLK23_OTAR)

/** \\brief  124, Redirected Address Base Register */
#define OVC1_BLK23_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC24u)

/** Alias (User Manual Name) for OVC1_BLK23_RABR.
 * To use register names with standard convension, please use OVC1_BLK23_RABR.
 */
#define OVC1_RABR23      (OVC1_BLK23_RABR)

/** \\brief  138, Overlay Mask Register */
#define OVC1_BLK24_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC38u)

/** Alias (User Manual Name) for OVC1_BLK24_OMASK.
 * To use register names with standard convension, please use OVC1_BLK24_OMASK.
 */
#define OVC1_OMASK24     (OVC1_BLK24_OMASK)

/** \\brief  134, Overlay Target Address Register */
#define OVC1_BLK24_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC34u)

/** Alias (User Manual Name) for OVC1_BLK24_OTAR.
 * To use register names with standard convension, please use OVC1_BLK24_OTAR.
 */
#define OVC1_OTAR24      (OVC1_BLK24_OTAR)

/** \\brief  130, Redirected Address Base Register */
#define OVC1_BLK24_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC30u)

/** Alias (User Manual Name) for OVC1_BLK24_RABR.
 * To use register names with standard convension, please use OVC1_BLK24_RABR.
 */
#define OVC1_RABR24      (OVC1_BLK24_RABR)

/** \\brief  144, Overlay Mask Register */
#define OVC1_BLK25_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC44u)

/** Alias (User Manual Name) for OVC1_BLK25_OMASK.
 * To use register names with standard convension, please use OVC1_BLK25_OMASK.
 */
#define OVC1_OMASK25     (OVC1_BLK25_OMASK)

/** \\brief  140, Overlay Target Address Register */
#define OVC1_BLK25_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC40u)

/** Alias (User Manual Name) for OVC1_BLK25_OTAR.
 * To use register names with standard convension, please use OVC1_BLK25_OTAR.
 */
#define OVC1_OTAR25      (OVC1_BLK25_OTAR)

/** \\brief  13C, Redirected Address Base Register */
#define OVC1_BLK25_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC3Cu)

/** Alias (User Manual Name) for OVC1_BLK25_RABR.
 * To use register names with standard convension, please use OVC1_BLK25_RABR.
 */
#define OVC1_RABR25      (OVC1_BLK25_RABR)

/** \\brief  150, Overlay Mask Register */
#define OVC1_BLK26_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC50u)

/** Alias (User Manual Name) for OVC1_BLK26_OMASK.
 * To use register names with standard convension, please use OVC1_BLK26_OMASK.
 */
#define OVC1_OMASK26     (OVC1_BLK26_OMASK)

/** \\brief  14C, Overlay Target Address Register */
#define OVC1_BLK26_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC4Cu)

/** Alias (User Manual Name) for OVC1_BLK26_OTAR.
 * To use register names with standard convension, please use OVC1_BLK26_OTAR.
 */
#define OVC1_OTAR26      (OVC1_BLK26_OTAR)

/** \\brief  148, Redirected Address Base Register */
#define OVC1_BLK26_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC48u)

/** Alias (User Manual Name) for OVC1_BLK26_RABR.
 * To use register names with standard convension, please use OVC1_BLK26_RABR.
 */
#define OVC1_RABR26      (OVC1_BLK26_RABR)

/** \\brief  15C, Overlay Mask Register */
#define OVC1_BLK27_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC5Cu)

/** Alias (User Manual Name) for OVC1_BLK27_OMASK.
 * To use register names with standard convension, please use OVC1_BLK27_OMASK.
 */
#define OVC1_OMASK27     (OVC1_BLK27_OMASK)

/** \\brief  158, Overlay Target Address Register */
#define OVC1_BLK27_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC58u)

/** Alias (User Manual Name) for OVC1_BLK27_OTAR.
 * To use register names with standard convension, please use OVC1_BLK27_OTAR.
 */
#define OVC1_OTAR27      (OVC1_BLK27_OTAR)

/** \\brief  154, Redirected Address Base Register */
#define OVC1_BLK27_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC54u)

/** Alias (User Manual Name) for OVC1_BLK27_RABR.
 * To use register names with standard convension, please use OVC1_BLK27_RABR.
 */
#define OVC1_RABR27      (OVC1_BLK27_RABR)

/** \\brief  168, Overlay Mask Register */
#define OVC1_BLK28_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC68u)

/** Alias (User Manual Name) for OVC1_BLK28_OMASK.
 * To use register names with standard convension, please use OVC1_BLK28_OMASK.
 */
#define OVC1_OMASK28     (OVC1_BLK28_OMASK)

/** \\brief  164, Overlay Target Address Register */
#define OVC1_BLK28_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC64u)

/** Alias (User Manual Name) for OVC1_BLK28_OTAR.
 * To use register names with standard convension, please use OVC1_BLK28_OTAR.
 */
#define OVC1_OTAR28      (OVC1_BLK28_OTAR)

/** \\brief  160, Redirected Address Base Register */
#define OVC1_BLK28_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC60u)

/** Alias (User Manual Name) for OVC1_BLK28_RABR.
 * To use register names with standard convension, please use OVC1_BLK28_RABR.
 */
#define OVC1_RABR28      (OVC1_BLK28_RABR)

/** \\brief  174, Overlay Mask Register */
#define OVC1_BLK29_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC74u)

/** Alias (User Manual Name) for OVC1_BLK29_OMASK.
 * To use register names with standard convension, please use OVC1_BLK29_OMASK.
 */
#define OVC1_OMASK29     (OVC1_BLK29_OMASK)

/** \\brief  170, Overlay Target Address Register */
#define OVC1_BLK29_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC70u)

/** Alias (User Manual Name) for OVC1_BLK29_OTAR.
 * To use register names with standard convension, please use OVC1_BLK29_OTAR.
 */
#define OVC1_OTAR29      (OVC1_BLK29_OTAR)

/** \\brief  16C, Redirected Address Base Register */
#define OVC1_BLK29_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC6Cu)

/** Alias (User Manual Name) for OVC1_BLK29_RABR.
 * To use register names with standard convension, please use OVC1_BLK29_RABR.
 */
#define OVC1_RABR29      (OVC1_BLK29_RABR)

/** \\brief  30, Overlay Mask Register */
#define OVC1_BLK2_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB30u)

/** Alias (User Manual Name) for OVC1_BLK2_OMASK.
 * To use register names with standard convension, please use OVC1_BLK2_OMASK.
 */
#define OVC1_OMASK2      (OVC1_BLK2_OMASK)

/** \\brief  2C, Overlay Target Address Register */
#define OVC1_BLK2_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB2Cu)

/** Alias (User Manual Name) for OVC1_BLK2_OTAR.
 * To use register names with standard convension, please use OVC1_BLK2_OTAR.
 */
#define OVC1_OTAR2       (OVC1_BLK2_OTAR)

/** \\brief  28, Redirected Address Base Register */
#define OVC1_BLK2_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB28u)

/** Alias (User Manual Name) for OVC1_BLK2_RABR.
 * To use register names with standard convension, please use OVC1_BLK2_RABR.
 */
#define OVC1_RABR2       (OVC1_BLK2_RABR)

/** \\brief  180, Overlay Mask Register */
#define OVC1_BLK30_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC80u)

/** Alias (User Manual Name) for OVC1_BLK30_OMASK.
 * To use register names with standard convension, please use OVC1_BLK30_OMASK.
 */
#define OVC1_OMASK30     (OVC1_BLK30_OMASK)

/** \\brief  17C, Overlay Target Address Register */
#define OVC1_BLK30_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC7Cu)

/** Alias (User Manual Name) for OVC1_BLK30_OTAR.
 * To use register names with standard convension, please use OVC1_BLK30_OTAR.
 */
#define OVC1_OTAR30      (OVC1_BLK30_OTAR)

/** \\brief  178, Redirected Address Base Register */
#define OVC1_BLK30_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC78u)

/** Alias (User Manual Name) for OVC1_BLK30_RABR.
 * To use register names with standard convension, please use OVC1_BLK30_RABR.
 */
#define OVC1_RABR30      (OVC1_BLK30_RABR)

/** \\brief  18C, Overlay Mask Register */
#define OVC1_BLK31_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FC8Cu)

/** Alias (User Manual Name) for OVC1_BLK31_OMASK.
 * To use register names with standard convension, please use OVC1_BLK31_OMASK.
 */
#define OVC1_OMASK31     (OVC1_BLK31_OMASK)

/** \\brief  188, Overlay Target Address Register */
#define OVC1_BLK31_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FC88u)

/** Alias (User Manual Name) for OVC1_BLK31_OTAR.
 * To use register names with standard convension, please use OVC1_BLK31_OTAR.
 */
#define OVC1_OTAR31      (OVC1_BLK31_OTAR)

/** \\brief  184, Redirected Address Base Register */
#define OVC1_BLK31_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FC84u)

/** Alias (User Manual Name) for OVC1_BLK31_RABR.
 * To use register names with standard convension, please use OVC1_BLK31_RABR.
 */
#define OVC1_RABR31      (OVC1_BLK31_RABR)

/** \\brief  3C, Overlay Mask Register */
#define OVC1_BLK3_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB3Cu)

/** Alias (User Manual Name) for OVC1_BLK3_OMASK.
 * To use register names with standard convension, please use OVC1_BLK3_OMASK.
 */
#define OVC1_OMASK3      (OVC1_BLK3_OMASK)

/** \\brief  38, Overlay Target Address Register */
#define OVC1_BLK3_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB38u)

/** Alias (User Manual Name) for OVC1_BLK3_OTAR.
 * To use register names with standard convension, please use OVC1_BLK3_OTAR.
 */
#define OVC1_OTAR3       (OVC1_BLK3_OTAR)

/** \\brief  34, Redirected Address Base Register */
#define OVC1_BLK3_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB34u)

/** Alias (User Manual Name) for OVC1_BLK3_RABR.
 * To use register names with standard convension, please use OVC1_BLK3_RABR.
 */
#define OVC1_RABR3       (OVC1_BLK3_RABR)

/** \\brief  48, Overlay Mask Register */
#define OVC1_BLK4_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB48u)

/** Alias (User Manual Name) for OVC1_BLK4_OMASK.
 * To use register names with standard convension, please use OVC1_BLK4_OMASK.
 */
#define OVC1_OMASK4      (OVC1_BLK4_OMASK)

/** \\brief  44, Overlay Target Address Register */
#define OVC1_BLK4_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB44u)

/** Alias (User Manual Name) for OVC1_BLK4_OTAR.
 * To use register names with standard convension, please use OVC1_BLK4_OTAR.
 */
#define OVC1_OTAR4       (OVC1_BLK4_OTAR)

/** \\brief  40, Redirected Address Base Register */
#define OVC1_BLK4_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB40u)

/** Alias (User Manual Name) for OVC1_BLK4_RABR.
 * To use register names with standard convension, please use OVC1_BLK4_RABR.
 */
#define OVC1_RABR4       (OVC1_BLK4_RABR)

/** \\brief  54, Overlay Mask Register */
#define OVC1_BLK5_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB54u)

/** Alias (User Manual Name) for OVC1_BLK5_OMASK.
 * To use register names with standard convension, please use OVC1_BLK5_OMASK.
 */
#define OVC1_OMASK5      (OVC1_BLK5_OMASK)

/** \\brief  50, Overlay Target Address Register */
#define OVC1_BLK5_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB50u)

/** Alias (User Manual Name) for OVC1_BLK5_OTAR.
 * To use register names with standard convension, please use OVC1_BLK5_OTAR.
 */
#define OVC1_OTAR5       (OVC1_BLK5_OTAR)

/** \\brief  4C, Redirected Address Base Register */
#define OVC1_BLK5_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB4Cu)

/** Alias (User Manual Name) for OVC1_BLK5_RABR.
 * To use register names with standard convension, please use OVC1_BLK5_RABR.
 */
#define OVC1_RABR5       (OVC1_BLK5_RABR)

/** \\brief  60, Overlay Mask Register */
#define OVC1_BLK6_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB60u)

/** Alias (User Manual Name) for OVC1_BLK6_OMASK.
 * To use register names with standard convension, please use OVC1_BLK6_OMASK.
 */
#define OVC1_OMASK6      (OVC1_BLK6_OMASK)

/** \\brief  5C, Overlay Target Address Register */
#define OVC1_BLK6_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB5Cu)

/** Alias (User Manual Name) for OVC1_BLK6_OTAR.
 * To use register names with standard convension, please use OVC1_BLK6_OTAR.
 */
#define OVC1_OTAR6       (OVC1_BLK6_OTAR)

/** \\brief  58, Redirected Address Base Register */
#define OVC1_BLK6_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB58u)

/** Alias (User Manual Name) for OVC1_BLK6_RABR.
 * To use register names with standard convension, please use OVC1_BLK6_RABR.
 */
#define OVC1_RABR6       (OVC1_BLK6_RABR)

/** \\brief  6C, Overlay Mask Register */
#define OVC1_BLK7_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB6Cu)

/** Alias (User Manual Name) for OVC1_BLK7_OMASK.
 * To use register names with standard convension, please use OVC1_BLK7_OMASK.
 */
#define OVC1_OMASK7      (OVC1_BLK7_OMASK)

/** \\brief  68, Overlay Target Address Register */
#define OVC1_BLK7_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB68u)

/** Alias (User Manual Name) for OVC1_BLK7_OTAR.
 * To use register names with standard convension, please use OVC1_BLK7_OTAR.
 */
#define OVC1_OTAR7       (OVC1_BLK7_OTAR)

/** \\brief  64, Redirected Address Base Register */
#define OVC1_BLK7_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB64u)

/** Alias (User Manual Name) for OVC1_BLK7_RABR.
 * To use register names with standard convension, please use OVC1_BLK7_RABR.
 */
#define OVC1_RABR7       (OVC1_BLK7_RABR)

/** \\brief  78, Overlay Mask Register */
#define OVC1_BLK8_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB78u)

/** Alias (User Manual Name) for OVC1_BLK8_OMASK.
 * To use register names with standard convension, please use OVC1_BLK8_OMASK.
 */
#define OVC1_OMASK8      (OVC1_BLK8_OMASK)

/** \\brief  74, Overlay Target Address Register */
#define OVC1_BLK8_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB74u)

/** Alias (User Manual Name) for OVC1_BLK8_OTAR.
 * To use register names with standard convension, please use OVC1_BLK8_OTAR.
 */
#define OVC1_OTAR8       (OVC1_BLK8_OTAR)

/** \\brief  70, Redirected Address Base Register */
#define OVC1_BLK8_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB70u)

/** Alias (User Manual Name) for OVC1_BLK8_RABR.
 * To use register names with standard convension, please use OVC1_BLK8_RABR.
 */
#define OVC1_RABR8       (OVC1_BLK8_RABR)

/** \\brief  84, Overlay Mask Register */
#define OVC1_BLK9_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF882FB84u)

/** Alias (User Manual Name) for OVC1_BLK9_OMASK.
 * To use register names with standard convension, please use OVC1_BLK9_OMASK.
 */
#define OVC1_OMASK9      (OVC1_BLK9_OMASK)

/** \\brief  80, Overlay Target Address Register */
#define OVC1_BLK9_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF882FB80u)

/** Alias (User Manual Name) for OVC1_BLK9_OTAR.
 * To use register names with standard convension, please use OVC1_BLK9_OTAR.
 */
#define OVC1_OTAR9       (OVC1_BLK9_OTAR)

/** \\brief  7C, Redirected Address Base Register */
#define OVC1_BLK9_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF882FB7Cu)

/** Alias (User Manual Name) for OVC1_BLK9_RABR.
 * To use register names with standard convension, please use OVC1_BLK9_RABR.
 */
#define OVC1_RABR9       (OVC1_BLK9_RABR)

/** \\brief  0, Overlay Range Select Register */
#define OVC1_OSEL        /*lint --e(923)*/ (*(volatile Ifx_OVC_OSEL *)0xF882FB00u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ovc_Cfg_Ovc2
 * \{  */

/** \\brief  18, Overlay Mask Register */
#define OVC2_BLK0_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB18u)

/** Alias (User Manual Name) for OVC2_BLK0_OMASK.
 * To use register names with standard convension, please use OVC2_BLK0_OMASK.
 */
#define OVC2_OMASK0      (OVC2_BLK0_OMASK)

/** \\brief  14, Overlay Target Address Register */
#define OVC2_BLK0_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB14u)

/** Alias (User Manual Name) for OVC2_BLK0_OTAR.
 * To use register names with standard convension, please use OVC2_BLK0_OTAR.
 */
#define OVC2_OTAR0       (OVC2_BLK0_OTAR)

/** \\brief  10, Redirected Address Base Register */
#define OVC2_BLK0_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB10u)

/** Alias (User Manual Name) for OVC2_BLK0_RABR.
 * To use register names with standard convension, please use OVC2_BLK0_RABR.
 */
#define OVC2_RABR0       (OVC2_BLK0_RABR)

/** \\brief  90, Overlay Mask Register */
#define OVC2_BLK10_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB90u)

/** Alias (User Manual Name) for OVC2_BLK10_OMASK.
 * To use register names with standard convension, please use OVC2_BLK10_OMASK.
 */
#define OVC2_OMASK10     (OVC2_BLK10_OMASK)

/** \\brief  8C, Overlay Target Address Register */
#define OVC2_BLK10_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB8Cu)

/** Alias (User Manual Name) for OVC2_BLK10_OTAR.
 * To use register names with standard convension, please use OVC2_BLK10_OTAR.
 */
#define OVC2_OTAR10      (OVC2_BLK10_OTAR)

/** \\brief  88, Redirected Address Base Register */
#define OVC2_BLK10_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB88u)

/** Alias (User Manual Name) for OVC2_BLK10_RABR.
 * To use register names with standard convension, please use OVC2_BLK10_RABR.
 */
#define OVC2_RABR10      (OVC2_BLK10_RABR)

/** \\brief  9C, Overlay Mask Register */
#define OVC2_BLK11_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB9Cu)

/** Alias (User Manual Name) for OVC2_BLK11_OMASK.
 * To use register names with standard convension, please use OVC2_BLK11_OMASK.
 */
#define OVC2_OMASK11     (OVC2_BLK11_OMASK)

/** \\brief  98, Overlay Target Address Register */
#define OVC2_BLK11_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB98u)

/** Alias (User Manual Name) for OVC2_BLK11_OTAR.
 * To use register names with standard convension, please use OVC2_BLK11_OTAR.
 */
#define OVC2_OTAR11      (OVC2_BLK11_OTAR)

/** \\brief  94, Redirected Address Base Register */
#define OVC2_BLK11_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB94u)

/** Alias (User Manual Name) for OVC2_BLK11_RABR.
 * To use register names with standard convension, please use OVC2_BLK11_RABR.
 */
#define OVC2_RABR11      (OVC2_BLK11_RABR)

/** \\brief  A8, Overlay Mask Register */
#define OVC2_BLK12_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FBA8u)

/** Alias (User Manual Name) for OVC2_BLK12_OMASK.
 * To use register names with standard convension, please use OVC2_BLK12_OMASK.
 */
#define OVC2_OMASK12     (OVC2_BLK12_OMASK)

/** \\brief  A4, Overlay Target Address Register */
#define OVC2_BLK12_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FBA4u)

/** Alias (User Manual Name) for OVC2_BLK12_OTAR.
 * To use register names with standard convension, please use OVC2_BLK12_OTAR.
 */
#define OVC2_OTAR12      (OVC2_BLK12_OTAR)

/** \\brief  A0, Redirected Address Base Register */
#define OVC2_BLK12_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FBA0u)

/** Alias (User Manual Name) for OVC2_BLK12_RABR.
 * To use register names with standard convension, please use OVC2_BLK12_RABR.
 */
#define OVC2_RABR12      (OVC2_BLK12_RABR)

/** \\brief  B4, Overlay Mask Register */
#define OVC2_BLK13_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FBB4u)

/** Alias (User Manual Name) for OVC2_BLK13_OMASK.
 * To use register names with standard convension, please use OVC2_BLK13_OMASK.
 */
#define OVC2_OMASK13     (OVC2_BLK13_OMASK)

/** \\brief  B0, Overlay Target Address Register */
#define OVC2_BLK13_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FBB0u)

/** Alias (User Manual Name) for OVC2_BLK13_OTAR.
 * To use register names with standard convension, please use OVC2_BLK13_OTAR.
 */
#define OVC2_OTAR13      (OVC2_BLK13_OTAR)

/** \\brief  AC, Redirected Address Base Register */
#define OVC2_BLK13_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FBACu)

/** Alias (User Manual Name) for OVC2_BLK13_RABR.
 * To use register names with standard convension, please use OVC2_BLK13_RABR.
 */
#define OVC2_RABR13      (OVC2_BLK13_RABR)

/** \\brief  C0, Overlay Mask Register */
#define OVC2_BLK14_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FBC0u)

/** Alias (User Manual Name) for OVC2_BLK14_OMASK.
 * To use register names with standard convension, please use OVC2_BLK14_OMASK.
 */
#define OVC2_OMASK14     (OVC2_BLK14_OMASK)

/** \\brief  BC, Overlay Target Address Register */
#define OVC2_BLK14_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FBBCu)

/** Alias (User Manual Name) for OVC2_BLK14_OTAR.
 * To use register names with standard convension, please use OVC2_BLK14_OTAR.
 */
#define OVC2_OTAR14      (OVC2_BLK14_OTAR)

/** \\brief  B8, Redirected Address Base Register */
#define OVC2_BLK14_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FBB8u)

/** Alias (User Manual Name) for OVC2_BLK14_RABR.
 * To use register names with standard convension, please use OVC2_BLK14_RABR.
 */
#define OVC2_RABR14      (OVC2_BLK14_RABR)

/** \\brief  CC, Overlay Mask Register */
#define OVC2_BLK15_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FBCCu)

/** Alias (User Manual Name) for OVC2_BLK15_OMASK.
 * To use register names with standard convension, please use OVC2_BLK15_OMASK.
 */
#define OVC2_OMASK15     (OVC2_BLK15_OMASK)

/** \\brief  C8, Overlay Target Address Register */
#define OVC2_BLK15_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FBC8u)

/** Alias (User Manual Name) for OVC2_BLK15_OTAR.
 * To use register names with standard convension, please use OVC2_BLK15_OTAR.
 */
#define OVC2_OTAR15      (OVC2_BLK15_OTAR)

/** \\brief  C4, Redirected Address Base Register */
#define OVC2_BLK15_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FBC4u)

/** Alias (User Manual Name) for OVC2_BLK15_RABR.
 * To use register names with standard convension, please use OVC2_BLK15_RABR.
 */
#define OVC2_RABR15      (OVC2_BLK15_RABR)

/** \\brief  D8, Overlay Mask Register */
#define OVC2_BLK16_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FBD8u)

/** Alias (User Manual Name) for OVC2_BLK16_OMASK.
 * To use register names with standard convension, please use OVC2_BLK16_OMASK.
 */
#define OVC2_OMASK16     (OVC2_BLK16_OMASK)

/** \\brief  D4, Overlay Target Address Register */
#define OVC2_BLK16_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FBD4u)

/** Alias (User Manual Name) for OVC2_BLK16_OTAR.
 * To use register names with standard convension, please use OVC2_BLK16_OTAR.
 */
#define OVC2_OTAR16      (OVC2_BLK16_OTAR)

/** \\brief  D0, Redirected Address Base Register */
#define OVC2_BLK16_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FBD0u)

/** Alias (User Manual Name) for OVC2_BLK16_RABR.
 * To use register names with standard convension, please use OVC2_BLK16_RABR.
 */
#define OVC2_RABR16      (OVC2_BLK16_RABR)

/** \\brief  E4, Overlay Mask Register */
#define OVC2_BLK17_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FBE4u)

/** Alias (User Manual Name) for OVC2_BLK17_OMASK.
 * To use register names with standard convension, please use OVC2_BLK17_OMASK.
 */
#define OVC2_OMASK17     (OVC2_BLK17_OMASK)

/** \\brief  E0, Overlay Target Address Register */
#define OVC2_BLK17_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FBE0u)

/** Alias (User Manual Name) for OVC2_BLK17_OTAR.
 * To use register names with standard convension, please use OVC2_BLK17_OTAR.
 */
#define OVC2_OTAR17      (OVC2_BLK17_OTAR)

/** \\brief  DC, Redirected Address Base Register */
#define OVC2_BLK17_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FBDCu)

/** Alias (User Manual Name) for OVC2_BLK17_RABR.
 * To use register names with standard convension, please use OVC2_BLK17_RABR.
 */
#define OVC2_RABR17      (OVC2_BLK17_RABR)

/** \\brief  F0, Overlay Mask Register */
#define OVC2_BLK18_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FBF0u)

/** Alias (User Manual Name) for OVC2_BLK18_OMASK.
 * To use register names with standard convension, please use OVC2_BLK18_OMASK.
 */
#define OVC2_OMASK18     (OVC2_BLK18_OMASK)

/** \\brief  EC, Overlay Target Address Register */
#define OVC2_BLK18_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FBECu)

/** Alias (User Manual Name) for OVC2_BLK18_OTAR.
 * To use register names with standard convension, please use OVC2_BLK18_OTAR.
 */
#define OVC2_OTAR18      (OVC2_BLK18_OTAR)

/** \\brief  E8, Redirected Address Base Register */
#define OVC2_BLK18_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FBE8u)

/** Alias (User Manual Name) for OVC2_BLK18_RABR.
 * To use register names with standard convension, please use OVC2_BLK18_RABR.
 */
#define OVC2_RABR18      (OVC2_BLK18_RABR)

/** \\brief  FC, Overlay Mask Register */
#define OVC2_BLK19_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FBFCu)

/** Alias (User Manual Name) for OVC2_BLK19_OMASK.
 * To use register names with standard convension, please use OVC2_BLK19_OMASK.
 */
#define OVC2_OMASK19     (OVC2_BLK19_OMASK)

/** \\brief  F8, Overlay Target Address Register */
#define OVC2_BLK19_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FBF8u)

/** Alias (User Manual Name) for OVC2_BLK19_OTAR.
 * To use register names with standard convension, please use OVC2_BLK19_OTAR.
 */
#define OVC2_OTAR19      (OVC2_BLK19_OTAR)

/** \\brief  F4, Redirected Address Base Register */
#define OVC2_BLK19_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FBF4u)

/** Alias (User Manual Name) for OVC2_BLK19_RABR.
 * To use register names with standard convension, please use OVC2_BLK19_RABR.
 */
#define OVC2_RABR19      (OVC2_BLK19_RABR)

/** \\brief  24, Overlay Mask Register */
#define OVC2_BLK1_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB24u)

/** Alias (User Manual Name) for OVC2_BLK1_OMASK.
 * To use register names with standard convension, please use OVC2_BLK1_OMASK.
 */
#define OVC2_OMASK1      (OVC2_BLK1_OMASK)

/** \\brief  20, Overlay Target Address Register */
#define OVC2_BLK1_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB20u)

/** Alias (User Manual Name) for OVC2_BLK1_OTAR.
 * To use register names with standard convension, please use OVC2_BLK1_OTAR.
 */
#define OVC2_OTAR1       (OVC2_BLK1_OTAR)

/** \\brief  1C, Redirected Address Base Register */
#define OVC2_BLK1_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB1Cu)

/** Alias (User Manual Name) for OVC2_BLK1_RABR.
 * To use register names with standard convension, please use OVC2_BLK1_RABR.
 */
#define OVC2_RABR1       (OVC2_BLK1_RABR)

/** \\brief  108, Overlay Mask Register */
#define OVC2_BLK20_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC08u)

/** Alias (User Manual Name) for OVC2_BLK20_OMASK.
 * To use register names with standard convension, please use OVC2_BLK20_OMASK.
 */
#define OVC2_OMASK20     (OVC2_BLK20_OMASK)

/** \\brief  104, Overlay Target Address Register */
#define OVC2_BLK20_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC04u)

/** Alias (User Manual Name) for OVC2_BLK20_OTAR.
 * To use register names with standard convension, please use OVC2_BLK20_OTAR.
 */
#define OVC2_OTAR20      (OVC2_BLK20_OTAR)

/** \\brief  100, Redirected Address Base Register */
#define OVC2_BLK20_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC00u)

/** Alias (User Manual Name) for OVC2_BLK20_RABR.
 * To use register names with standard convension, please use OVC2_BLK20_RABR.
 */
#define OVC2_RABR20      (OVC2_BLK20_RABR)

/** \\brief  114, Overlay Mask Register */
#define OVC2_BLK21_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC14u)

/** Alias (User Manual Name) for OVC2_BLK21_OMASK.
 * To use register names with standard convension, please use OVC2_BLK21_OMASK.
 */
#define OVC2_OMASK21     (OVC2_BLK21_OMASK)

/** \\brief  110, Overlay Target Address Register */
#define OVC2_BLK21_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC10u)

/** Alias (User Manual Name) for OVC2_BLK21_OTAR.
 * To use register names with standard convension, please use OVC2_BLK21_OTAR.
 */
#define OVC2_OTAR21      (OVC2_BLK21_OTAR)

/** \\brief  10C, Redirected Address Base Register */
#define OVC2_BLK21_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC0Cu)

/** Alias (User Manual Name) for OVC2_BLK21_RABR.
 * To use register names with standard convension, please use OVC2_BLK21_RABR.
 */
#define OVC2_RABR21      (OVC2_BLK21_RABR)

/** \\brief  120, Overlay Mask Register */
#define OVC2_BLK22_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC20u)

/** Alias (User Manual Name) for OVC2_BLK22_OMASK.
 * To use register names with standard convension, please use OVC2_BLK22_OMASK.
 */
#define OVC2_OMASK22     (OVC2_BLK22_OMASK)

/** \\brief  11C, Overlay Target Address Register */
#define OVC2_BLK22_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC1Cu)

/** Alias (User Manual Name) for OVC2_BLK22_OTAR.
 * To use register names with standard convension, please use OVC2_BLK22_OTAR.
 */
#define OVC2_OTAR22      (OVC2_BLK22_OTAR)

/** \\brief  118, Redirected Address Base Register */
#define OVC2_BLK22_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC18u)

/** Alias (User Manual Name) for OVC2_BLK22_RABR.
 * To use register names with standard convension, please use OVC2_BLK22_RABR.
 */
#define OVC2_RABR22      (OVC2_BLK22_RABR)

/** \\brief  12C, Overlay Mask Register */
#define OVC2_BLK23_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC2Cu)

/** Alias (User Manual Name) for OVC2_BLK23_OMASK.
 * To use register names with standard convension, please use OVC2_BLK23_OMASK.
 */
#define OVC2_OMASK23     (OVC2_BLK23_OMASK)

/** \\brief  128, Overlay Target Address Register */
#define OVC2_BLK23_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC28u)

/** Alias (User Manual Name) for OVC2_BLK23_OTAR.
 * To use register names with standard convension, please use OVC2_BLK23_OTAR.
 */
#define OVC2_OTAR23      (OVC2_BLK23_OTAR)

/** \\brief  124, Redirected Address Base Register */
#define OVC2_BLK23_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC24u)

/** Alias (User Manual Name) for OVC2_BLK23_RABR.
 * To use register names with standard convension, please use OVC2_BLK23_RABR.
 */
#define OVC2_RABR23      (OVC2_BLK23_RABR)

/** \\brief  138, Overlay Mask Register */
#define OVC2_BLK24_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC38u)

/** Alias (User Manual Name) for OVC2_BLK24_OMASK.
 * To use register names with standard convension, please use OVC2_BLK24_OMASK.
 */
#define OVC2_OMASK24     (OVC2_BLK24_OMASK)

/** \\brief  134, Overlay Target Address Register */
#define OVC2_BLK24_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC34u)

/** Alias (User Manual Name) for OVC2_BLK24_OTAR.
 * To use register names with standard convension, please use OVC2_BLK24_OTAR.
 */
#define OVC2_OTAR24      (OVC2_BLK24_OTAR)

/** \\brief  130, Redirected Address Base Register */
#define OVC2_BLK24_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC30u)

/** Alias (User Manual Name) for OVC2_BLK24_RABR.
 * To use register names with standard convension, please use OVC2_BLK24_RABR.
 */
#define OVC2_RABR24      (OVC2_BLK24_RABR)

/** \\brief  144, Overlay Mask Register */
#define OVC2_BLK25_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC44u)

/** Alias (User Manual Name) for OVC2_BLK25_OMASK.
 * To use register names with standard convension, please use OVC2_BLK25_OMASK.
 */
#define OVC2_OMASK25     (OVC2_BLK25_OMASK)

/** \\brief  140, Overlay Target Address Register */
#define OVC2_BLK25_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC40u)

/** Alias (User Manual Name) for OVC2_BLK25_OTAR.
 * To use register names with standard convension, please use OVC2_BLK25_OTAR.
 */
#define OVC2_OTAR25      (OVC2_BLK25_OTAR)

/** \\brief  13C, Redirected Address Base Register */
#define OVC2_BLK25_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC3Cu)

/** Alias (User Manual Name) for OVC2_BLK25_RABR.
 * To use register names with standard convension, please use OVC2_BLK25_RABR.
 */
#define OVC2_RABR25      (OVC2_BLK25_RABR)

/** \\brief  150, Overlay Mask Register */
#define OVC2_BLK26_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC50u)

/** Alias (User Manual Name) for OVC2_BLK26_OMASK.
 * To use register names with standard convension, please use OVC2_BLK26_OMASK.
 */
#define OVC2_OMASK26     (OVC2_BLK26_OMASK)

/** \\brief  14C, Overlay Target Address Register */
#define OVC2_BLK26_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC4Cu)

/** Alias (User Manual Name) for OVC2_BLK26_OTAR.
 * To use register names with standard convension, please use OVC2_BLK26_OTAR.
 */
#define OVC2_OTAR26      (OVC2_BLK26_OTAR)

/** \\brief  148, Redirected Address Base Register */
#define OVC2_BLK26_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC48u)

/** Alias (User Manual Name) for OVC2_BLK26_RABR.
 * To use register names with standard convension, please use OVC2_BLK26_RABR.
 */
#define OVC2_RABR26      (OVC2_BLK26_RABR)

/** \\brief  15C, Overlay Mask Register */
#define OVC2_BLK27_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC5Cu)

/** Alias (User Manual Name) for OVC2_BLK27_OMASK.
 * To use register names with standard convension, please use OVC2_BLK27_OMASK.
 */
#define OVC2_OMASK27     (OVC2_BLK27_OMASK)

/** \\brief  158, Overlay Target Address Register */
#define OVC2_BLK27_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC58u)

/** Alias (User Manual Name) for OVC2_BLK27_OTAR.
 * To use register names with standard convension, please use OVC2_BLK27_OTAR.
 */
#define OVC2_OTAR27      (OVC2_BLK27_OTAR)

/** \\brief  154, Redirected Address Base Register */
#define OVC2_BLK27_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC54u)

/** Alias (User Manual Name) for OVC2_BLK27_RABR.
 * To use register names with standard convension, please use OVC2_BLK27_RABR.
 */
#define OVC2_RABR27      (OVC2_BLK27_RABR)

/** \\brief  168, Overlay Mask Register */
#define OVC2_BLK28_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC68u)

/** Alias (User Manual Name) for OVC2_BLK28_OMASK.
 * To use register names with standard convension, please use OVC2_BLK28_OMASK.
 */
#define OVC2_OMASK28     (OVC2_BLK28_OMASK)

/** \\brief  164, Overlay Target Address Register */
#define OVC2_BLK28_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC64u)

/** Alias (User Manual Name) for OVC2_BLK28_OTAR.
 * To use register names with standard convension, please use OVC2_BLK28_OTAR.
 */
#define OVC2_OTAR28      (OVC2_BLK28_OTAR)

/** \\brief  160, Redirected Address Base Register */
#define OVC2_BLK28_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC60u)

/** Alias (User Manual Name) for OVC2_BLK28_RABR.
 * To use register names with standard convension, please use OVC2_BLK28_RABR.
 */
#define OVC2_RABR28      (OVC2_BLK28_RABR)

/** \\brief  174, Overlay Mask Register */
#define OVC2_BLK29_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC74u)

/** Alias (User Manual Name) for OVC2_BLK29_OMASK.
 * To use register names with standard convension, please use OVC2_BLK29_OMASK.
 */
#define OVC2_OMASK29     (OVC2_BLK29_OMASK)

/** \\brief  170, Overlay Target Address Register */
#define OVC2_BLK29_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC70u)

/** Alias (User Manual Name) for OVC2_BLK29_OTAR.
 * To use register names with standard convension, please use OVC2_BLK29_OTAR.
 */
#define OVC2_OTAR29      (OVC2_BLK29_OTAR)

/** \\brief  16C, Redirected Address Base Register */
#define OVC2_BLK29_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC6Cu)

/** Alias (User Manual Name) for OVC2_BLK29_RABR.
 * To use register names with standard convension, please use OVC2_BLK29_RABR.
 */
#define OVC2_RABR29      (OVC2_BLK29_RABR)

/** \\brief  30, Overlay Mask Register */
#define OVC2_BLK2_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB30u)

/** Alias (User Manual Name) for OVC2_BLK2_OMASK.
 * To use register names with standard convension, please use OVC2_BLK2_OMASK.
 */
#define OVC2_OMASK2      (OVC2_BLK2_OMASK)

/** \\brief  2C, Overlay Target Address Register */
#define OVC2_BLK2_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB2Cu)

/** Alias (User Manual Name) for OVC2_BLK2_OTAR.
 * To use register names with standard convension, please use OVC2_BLK2_OTAR.
 */
#define OVC2_OTAR2       (OVC2_BLK2_OTAR)

/** \\brief  28, Redirected Address Base Register */
#define OVC2_BLK2_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB28u)

/** Alias (User Manual Name) for OVC2_BLK2_RABR.
 * To use register names with standard convension, please use OVC2_BLK2_RABR.
 */
#define OVC2_RABR2       (OVC2_BLK2_RABR)

/** \\brief  180, Overlay Mask Register */
#define OVC2_BLK30_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC80u)

/** Alias (User Manual Name) for OVC2_BLK30_OMASK.
 * To use register names with standard convension, please use OVC2_BLK30_OMASK.
 */
#define OVC2_OMASK30     (OVC2_BLK30_OMASK)

/** \\brief  17C, Overlay Target Address Register */
#define OVC2_BLK30_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC7Cu)

/** Alias (User Manual Name) for OVC2_BLK30_OTAR.
 * To use register names with standard convension, please use OVC2_BLK30_OTAR.
 */
#define OVC2_OTAR30      (OVC2_BLK30_OTAR)

/** \\brief  178, Redirected Address Base Register */
#define OVC2_BLK30_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC78u)

/** Alias (User Manual Name) for OVC2_BLK30_RABR.
 * To use register names with standard convension, please use OVC2_BLK30_RABR.
 */
#define OVC2_RABR30      (OVC2_BLK30_RABR)

/** \\brief  18C, Overlay Mask Register */
#define OVC2_BLK31_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FC8Cu)

/** Alias (User Manual Name) for OVC2_BLK31_OMASK.
 * To use register names with standard convension, please use OVC2_BLK31_OMASK.
 */
#define OVC2_OMASK31     (OVC2_BLK31_OMASK)

/** \\brief  188, Overlay Target Address Register */
#define OVC2_BLK31_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FC88u)

/** Alias (User Manual Name) for OVC2_BLK31_OTAR.
 * To use register names with standard convension, please use OVC2_BLK31_OTAR.
 */
#define OVC2_OTAR31      (OVC2_BLK31_OTAR)

/** \\brief  184, Redirected Address Base Register */
#define OVC2_BLK31_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FC84u)

/** Alias (User Manual Name) for OVC2_BLK31_RABR.
 * To use register names with standard convension, please use OVC2_BLK31_RABR.
 */
#define OVC2_RABR31      (OVC2_BLK31_RABR)

/** \\brief  3C, Overlay Mask Register */
#define OVC2_BLK3_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB3Cu)

/** Alias (User Manual Name) for OVC2_BLK3_OMASK.
 * To use register names with standard convension, please use OVC2_BLK3_OMASK.
 */
#define OVC2_OMASK3      (OVC2_BLK3_OMASK)

/** \\brief  38, Overlay Target Address Register */
#define OVC2_BLK3_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB38u)

/** Alias (User Manual Name) for OVC2_BLK3_OTAR.
 * To use register names with standard convension, please use OVC2_BLK3_OTAR.
 */
#define OVC2_OTAR3       (OVC2_BLK3_OTAR)

/** \\brief  34, Redirected Address Base Register */
#define OVC2_BLK3_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB34u)

/** Alias (User Manual Name) for OVC2_BLK3_RABR.
 * To use register names with standard convension, please use OVC2_BLK3_RABR.
 */
#define OVC2_RABR3       (OVC2_BLK3_RABR)

/** \\brief  48, Overlay Mask Register */
#define OVC2_BLK4_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB48u)

/** Alias (User Manual Name) for OVC2_BLK4_OMASK.
 * To use register names with standard convension, please use OVC2_BLK4_OMASK.
 */
#define OVC2_OMASK4      (OVC2_BLK4_OMASK)

/** \\brief  44, Overlay Target Address Register */
#define OVC2_BLK4_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB44u)

/** Alias (User Manual Name) for OVC2_BLK4_OTAR.
 * To use register names with standard convension, please use OVC2_BLK4_OTAR.
 */
#define OVC2_OTAR4       (OVC2_BLK4_OTAR)

/** \\brief  40, Redirected Address Base Register */
#define OVC2_BLK4_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB40u)

/** Alias (User Manual Name) for OVC2_BLK4_RABR.
 * To use register names with standard convension, please use OVC2_BLK4_RABR.
 */
#define OVC2_RABR4       (OVC2_BLK4_RABR)

/** \\brief  54, Overlay Mask Register */
#define OVC2_BLK5_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB54u)

/** Alias (User Manual Name) for OVC2_BLK5_OMASK.
 * To use register names with standard convension, please use OVC2_BLK5_OMASK.
 */
#define OVC2_OMASK5      (OVC2_BLK5_OMASK)

/** \\brief  50, Overlay Target Address Register */
#define OVC2_BLK5_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB50u)

/** Alias (User Manual Name) for OVC2_BLK5_OTAR.
 * To use register names with standard convension, please use OVC2_BLK5_OTAR.
 */
#define OVC2_OTAR5       (OVC2_BLK5_OTAR)

/** \\brief  4C, Redirected Address Base Register */
#define OVC2_BLK5_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB4Cu)

/** Alias (User Manual Name) for OVC2_BLK5_RABR.
 * To use register names with standard convension, please use OVC2_BLK5_RABR.
 */
#define OVC2_RABR5       (OVC2_BLK5_RABR)

/** \\brief  60, Overlay Mask Register */
#define OVC2_BLK6_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB60u)

/** Alias (User Manual Name) for OVC2_BLK6_OMASK.
 * To use register names with standard convension, please use OVC2_BLK6_OMASK.
 */
#define OVC2_OMASK6      (OVC2_BLK6_OMASK)

/** \\brief  5C, Overlay Target Address Register */
#define OVC2_BLK6_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB5Cu)

/** Alias (User Manual Name) for OVC2_BLK6_OTAR.
 * To use register names with standard convension, please use OVC2_BLK6_OTAR.
 */
#define OVC2_OTAR6       (OVC2_BLK6_OTAR)

/** \\brief  58, Redirected Address Base Register */
#define OVC2_BLK6_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB58u)

/** Alias (User Manual Name) for OVC2_BLK6_RABR.
 * To use register names with standard convension, please use OVC2_BLK6_RABR.
 */
#define OVC2_RABR6       (OVC2_BLK6_RABR)

/** \\brief  6C, Overlay Mask Register */
#define OVC2_BLK7_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB6Cu)

/** Alias (User Manual Name) for OVC2_BLK7_OMASK.
 * To use register names with standard convension, please use OVC2_BLK7_OMASK.
 */
#define OVC2_OMASK7      (OVC2_BLK7_OMASK)

/** \\brief  68, Overlay Target Address Register */
#define OVC2_BLK7_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB68u)

/** Alias (User Manual Name) for OVC2_BLK7_OTAR.
 * To use register names with standard convension, please use OVC2_BLK7_OTAR.
 */
#define OVC2_OTAR7       (OVC2_BLK7_OTAR)

/** \\brief  64, Redirected Address Base Register */
#define OVC2_BLK7_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB64u)

/** Alias (User Manual Name) for OVC2_BLK7_RABR.
 * To use register names with standard convension, please use OVC2_BLK7_RABR.
 */
#define OVC2_RABR7       (OVC2_BLK7_RABR)

/** \\brief  78, Overlay Mask Register */
#define OVC2_BLK8_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB78u)

/** Alias (User Manual Name) for OVC2_BLK8_OMASK.
 * To use register names with standard convension, please use OVC2_BLK8_OMASK.
 */
#define OVC2_OMASK8      (OVC2_BLK8_OMASK)

/** \\brief  74, Overlay Target Address Register */
#define OVC2_BLK8_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB74u)

/** Alias (User Manual Name) for OVC2_BLK8_OTAR.
 * To use register names with standard convension, please use OVC2_BLK8_OTAR.
 */
#define OVC2_OTAR8       (OVC2_BLK8_OTAR)

/** \\brief  70, Redirected Address Base Register */
#define OVC2_BLK8_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB70u)

/** Alias (User Manual Name) for OVC2_BLK8_RABR.
 * To use register names with standard convension, please use OVC2_BLK8_RABR.
 */
#define OVC2_RABR8       (OVC2_BLK8_RABR)

/** \\brief  84, Overlay Mask Register */
#define OVC2_BLK9_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF884FB84u)

/** Alias (User Manual Name) for OVC2_BLK9_OMASK.
 * To use register names with standard convension, please use OVC2_BLK9_OMASK.
 */
#define OVC2_OMASK9      (OVC2_BLK9_OMASK)

/** \\brief  80, Overlay Target Address Register */
#define OVC2_BLK9_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF884FB80u)

/** Alias (User Manual Name) for OVC2_BLK9_OTAR.
 * To use register names with standard convension, please use OVC2_BLK9_OTAR.
 */
#define OVC2_OTAR9       (OVC2_BLK9_OTAR)

/** \\brief  7C, Redirected Address Base Register */
#define OVC2_BLK9_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF884FB7Cu)

/** Alias (User Manual Name) for OVC2_BLK9_RABR.
 * To use register names with standard convension, please use OVC2_BLK9_RABR.
 */
#define OVC2_RABR9       (OVC2_BLK9_RABR)

/** \\brief  0, Overlay Range Select Register */
#define OVC2_OSEL        /*lint --e(923)*/ (*(volatile Ifx_OVC_OSEL *)0xF884FB00u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ovc_Cfg_Ovc3
 * \{  */

/** \\brief  18, Overlay Mask Register */
#define OVC3_BLK0_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB18u)

/** Alias (User Manual Name) for OVC3_BLK0_OMASK.
 * To use register names with standard convension, please use OVC3_BLK0_OMASK.
 */
#define OVC3_OMASK0      (OVC3_BLK0_OMASK)

/** \\brief  14, Overlay Target Address Register */
#define OVC3_BLK0_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB14u)

/** Alias (User Manual Name) for OVC3_BLK0_OTAR.
 * To use register names with standard convension, please use OVC3_BLK0_OTAR.
 */
#define OVC3_OTAR0       (OVC3_BLK0_OTAR)

/** \\brief  10, Redirected Address Base Register */
#define OVC3_BLK0_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB10u)

/** Alias (User Manual Name) for OVC3_BLK0_RABR.
 * To use register names with standard convension, please use OVC3_BLK0_RABR.
 */
#define OVC3_RABR0       (OVC3_BLK0_RABR)

/** \\brief  90, Overlay Mask Register */
#define OVC3_BLK10_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB90u)

/** Alias (User Manual Name) for OVC3_BLK10_OMASK.
 * To use register names with standard convension, please use OVC3_BLK10_OMASK.
 */
#define OVC3_OMASK10     (OVC3_BLK10_OMASK)

/** \\brief  8C, Overlay Target Address Register */
#define OVC3_BLK10_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB8Cu)

/** Alias (User Manual Name) for OVC3_BLK10_OTAR.
 * To use register names with standard convension, please use OVC3_BLK10_OTAR.
 */
#define OVC3_OTAR10      (OVC3_BLK10_OTAR)

/** \\brief  88, Redirected Address Base Register */
#define OVC3_BLK10_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB88u)

/** Alias (User Manual Name) for OVC3_BLK10_RABR.
 * To use register names with standard convension, please use OVC3_BLK10_RABR.
 */
#define OVC3_RABR10      (OVC3_BLK10_RABR)

/** \\brief  9C, Overlay Mask Register */
#define OVC3_BLK11_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB9Cu)

/** Alias (User Manual Name) for OVC3_BLK11_OMASK.
 * To use register names with standard convension, please use OVC3_BLK11_OMASK.
 */
#define OVC3_OMASK11     (OVC3_BLK11_OMASK)

/** \\brief  98, Overlay Target Address Register */
#define OVC3_BLK11_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB98u)

/** Alias (User Manual Name) for OVC3_BLK11_OTAR.
 * To use register names with standard convension, please use OVC3_BLK11_OTAR.
 */
#define OVC3_OTAR11      (OVC3_BLK11_OTAR)

/** \\brief  94, Redirected Address Base Register */
#define OVC3_BLK11_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB94u)

/** Alias (User Manual Name) for OVC3_BLK11_RABR.
 * To use register names with standard convension, please use OVC3_BLK11_RABR.
 */
#define OVC3_RABR11      (OVC3_BLK11_RABR)

/** \\brief  A8, Overlay Mask Register */
#define OVC3_BLK12_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FBA8u)

/** Alias (User Manual Name) for OVC3_BLK12_OMASK.
 * To use register names with standard convension, please use OVC3_BLK12_OMASK.
 */
#define OVC3_OMASK12     (OVC3_BLK12_OMASK)

/** \\brief  A4, Overlay Target Address Register */
#define OVC3_BLK12_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FBA4u)

/** Alias (User Manual Name) for OVC3_BLK12_OTAR.
 * To use register names with standard convension, please use OVC3_BLK12_OTAR.
 */
#define OVC3_OTAR12      (OVC3_BLK12_OTAR)

/** \\brief  A0, Redirected Address Base Register */
#define OVC3_BLK12_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FBA0u)

/** Alias (User Manual Name) for OVC3_BLK12_RABR.
 * To use register names with standard convension, please use OVC3_BLK12_RABR.
 */
#define OVC3_RABR12      (OVC3_BLK12_RABR)

/** \\brief  B4, Overlay Mask Register */
#define OVC3_BLK13_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FBB4u)

/** Alias (User Manual Name) for OVC3_BLK13_OMASK.
 * To use register names with standard convension, please use OVC3_BLK13_OMASK.
 */
#define OVC3_OMASK13     (OVC3_BLK13_OMASK)

/** \\brief  B0, Overlay Target Address Register */
#define OVC3_BLK13_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FBB0u)

/** Alias (User Manual Name) for OVC3_BLK13_OTAR.
 * To use register names with standard convension, please use OVC3_BLK13_OTAR.
 */
#define OVC3_OTAR13      (OVC3_BLK13_OTAR)

/** \\brief  AC, Redirected Address Base Register */
#define OVC3_BLK13_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FBACu)

/** Alias (User Manual Name) for OVC3_BLK13_RABR.
 * To use register names with standard convension, please use OVC3_BLK13_RABR.
 */
#define OVC3_RABR13      (OVC3_BLK13_RABR)

/** \\brief  C0, Overlay Mask Register */
#define OVC3_BLK14_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FBC0u)

/** Alias (User Manual Name) for OVC3_BLK14_OMASK.
 * To use register names with standard convension, please use OVC3_BLK14_OMASK.
 */
#define OVC3_OMASK14     (OVC3_BLK14_OMASK)

/** \\brief  BC, Overlay Target Address Register */
#define OVC3_BLK14_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FBBCu)

/** Alias (User Manual Name) for OVC3_BLK14_OTAR.
 * To use register names with standard convension, please use OVC3_BLK14_OTAR.
 */
#define OVC3_OTAR14      (OVC3_BLK14_OTAR)

/** \\brief  B8, Redirected Address Base Register */
#define OVC3_BLK14_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FBB8u)

/** Alias (User Manual Name) for OVC3_BLK14_RABR.
 * To use register names with standard convension, please use OVC3_BLK14_RABR.
 */
#define OVC3_RABR14      (OVC3_BLK14_RABR)

/** \\brief  CC, Overlay Mask Register */
#define OVC3_BLK15_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FBCCu)

/** Alias (User Manual Name) for OVC3_BLK15_OMASK.
 * To use register names with standard convension, please use OVC3_BLK15_OMASK.
 */
#define OVC3_OMASK15     (OVC3_BLK15_OMASK)

/** \\brief  C8, Overlay Target Address Register */
#define OVC3_BLK15_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FBC8u)

/** Alias (User Manual Name) for OVC3_BLK15_OTAR.
 * To use register names with standard convension, please use OVC3_BLK15_OTAR.
 */
#define OVC3_OTAR15      (OVC3_BLK15_OTAR)

/** \\brief  C4, Redirected Address Base Register */
#define OVC3_BLK15_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FBC4u)

/** Alias (User Manual Name) for OVC3_BLK15_RABR.
 * To use register names with standard convension, please use OVC3_BLK15_RABR.
 */
#define OVC3_RABR15      (OVC3_BLK15_RABR)

/** \\brief  D8, Overlay Mask Register */
#define OVC3_BLK16_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FBD8u)

/** Alias (User Manual Name) for OVC3_BLK16_OMASK.
 * To use register names with standard convension, please use OVC3_BLK16_OMASK.
 */
#define OVC3_OMASK16     (OVC3_BLK16_OMASK)

/** \\brief  D4, Overlay Target Address Register */
#define OVC3_BLK16_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FBD4u)

/** Alias (User Manual Name) for OVC3_BLK16_OTAR.
 * To use register names with standard convension, please use OVC3_BLK16_OTAR.
 */
#define OVC3_OTAR16      (OVC3_BLK16_OTAR)

/** \\brief  D0, Redirected Address Base Register */
#define OVC3_BLK16_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FBD0u)

/** Alias (User Manual Name) for OVC3_BLK16_RABR.
 * To use register names with standard convension, please use OVC3_BLK16_RABR.
 */
#define OVC3_RABR16      (OVC3_BLK16_RABR)

/** \\brief  E4, Overlay Mask Register */
#define OVC3_BLK17_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FBE4u)

/** Alias (User Manual Name) for OVC3_BLK17_OMASK.
 * To use register names with standard convension, please use OVC3_BLK17_OMASK.
 */
#define OVC3_OMASK17     (OVC3_BLK17_OMASK)

/** \\brief  E0, Overlay Target Address Register */
#define OVC3_BLK17_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FBE0u)

/** Alias (User Manual Name) for OVC3_BLK17_OTAR.
 * To use register names with standard convension, please use OVC3_BLK17_OTAR.
 */
#define OVC3_OTAR17      (OVC3_BLK17_OTAR)

/** \\brief  DC, Redirected Address Base Register */
#define OVC3_BLK17_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FBDCu)

/** Alias (User Manual Name) for OVC3_BLK17_RABR.
 * To use register names with standard convension, please use OVC3_BLK17_RABR.
 */
#define OVC3_RABR17      (OVC3_BLK17_RABR)

/** \\brief  F0, Overlay Mask Register */
#define OVC3_BLK18_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FBF0u)

/** Alias (User Manual Name) for OVC3_BLK18_OMASK.
 * To use register names with standard convension, please use OVC3_BLK18_OMASK.
 */
#define OVC3_OMASK18     (OVC3_BLK18_OMASK)

/** \\brief  EC, Overlay Target Address Register */
#define OVC3_BLK18_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FBECu)

/** Alias (User Manual Name) for OVC3_BLK18_OTAR.
 * To use register names with standard convension, please use OVC3_BLK18_OTAR.
 */
#define OVC3_OTAR18      (OVC3_BLK18_OTAR)

/** \\brief  E8, Redirected Address Base Register */
#define OVC3_BLK18_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FBE8u)

/** Alias (User Manual Name) for OVC3_BLK18_RABR.
 * To use register names with standard convension, please use OVC3_BLK18_RABR.
 */
#define OVC3_RABR18      (OVC3_BLK18_RABR)

/** \\brief  FC, Overlay Mask Register */
#define OVC3_BLK19_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FBFCu)

/** Alias (User Manual Name) for OVC3_BLK19_OMASK.
 * To use register names with standard convension, please use OVC3_BLK19_OMASK.
 */
#define OVC3_OMASK19     (OVC3_BLK19_OMASK)

/** \\brief  F8, Overlay Target Address Register */
#define OVC3_BLK19_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FBF8u)

/** Alias (User Manual Name) for OVC3_BLK19_OTAR.
 * To use register names with standard convension, please use OVC3_BLK19_OTAR.
 */
#define OVC3_OTAR19      (OVC3_BLK19_OTAR)

/** \\brief  F4, Redirected Address Base Register */
#define OVC3_BLK19_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FBF4u)

/** Alias (User Manual Name) for OVC3_BLK19_RABR.
 * To use register names with standard convension, please use OVC3_BLK19_RABR.
 */
#define OVC3_RABR19      (OVC3_BLK19_RABR)

/** \\brief  24, Overlay Mask Register */
#define OVC3_BLK1_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB24u)

/** Alias (User Manual Name) for OVC3_BLK1_OMASK.
 * To use register names with standard convension, please use OVC3_BLK1_OMASK.
 */
#define OVC3_OMASK1      (OVC3_BLK1_OMASK)

/** \\brief  20, Overlay Target Address Register */
#define OVC3_BLK1_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB20u)

/** Alias (User Manual Name) for OVC3_BLK1_OTAR.
 * To use register names with standard convension, please use OVC3_BLK1_OTAR.
 */
#define OVC3_OTAR1       (OVC3_BLK1_OTAR)

/** \\brief  1C, Redirected Address Base Register */
#define OVC3_BLK1_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB1Cu)

/** Alias (User Manual Name) for OVC3_BLK1_RABR.
 * To use register names with standard convension, please use OVC3_BLK1_RABR.
 */
#define OVC3_RABR1       (OVC3_BLK1_RABR)

/** \\brief  108, Overlay Mask Register */
#define OVC3_BLK20_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC08u)

/** Alias (User Manual Name) for OVC3_BLK20_OMASK.
 * To use register names with standard convension, please use OVC3_BLK20_OMASK.
 */
#define OVC3_OMASK20     (OVC3_BLK20_OMASK)

/** \\brief  104, Overlay Target Address Register */
#define OVC3_BLK20_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC04u)

/** Alias (User Manual Name) for OVC3_BLK20_OTAR.
 * To use register names with standard convension, please use OVC3_BLK20_OTAR.
 */
#define OVC3_OTAR20      (OVC3_BLK20_OTAR)

/** \\brief  100, Redirected Address Base Register */
#define OVC3_BLK20_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC00u)

/** Alias (User Manual Name) for OVC3_BLK20_RABR.
 * To use register names with standard convension, please use OVC3_BLK20_RABR.
 */
#define OVC3_RABR20      (OVC3_BLK20_RABR)

/** \\brief  114, Overlay Mask Register */
#define OVC3_BLK21_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC14u)

/** Alias (User Manual Name) for OVC3_BLK21_OMASK.
 * To use register names with standard convension, please use OVC3_BLK21_OMASK.
 */
#define OVC3_OMASK21     (OVC3_BLK21_OMASK)

/** \\brief  110, Overlay Target Address Register */
#define OVC3_BLK21_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC10u)

/** Alias (User Manual Name) for OVC3_BLK21_OTAR.
 * To use register names with standard convension, please use OVC3_BLK21_OTAR.
 */
#define OVC3_OTAR21      (OVC3_BLK21_OTAR)

/** \\brief  10C, Redirected Address Base Register */
#define OVC3_BLK21_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC0Cu)

/** Alias (User Manual Name) for OVC3_BLK21_RABR.
 * To use register names with standard convension, please use OVC3_BLK21_RABR.
 */
#define OVC3_RABR21      (OVC3_BLK21_RABR)

/** \\brief  120, Overlay Mask Register */
#define OVC3_BLK22_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC20u)

/** Alias (User Manual Name) for OVC3_BLK22_OMASK.
 * To use register names with standard convension, please use OVC3_BLK22_OMASK.
 */
#define OVC3_OMASK22     (OVC3_BLK22_OMASK)

/** \\brief  11C, Overlay Target Address Register */
#define OVC3_BLK22_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC1Cu)

/** Alias (User Manual Name) for OVC3_BLK22_OTAR.
 * To use register names with standard convension, please use OVC3_BLK22_OTAR.
 */
#define OVC3_OTAR22      (OVC3_BLK22_OTAR)

/** \\brief  118, Redirected Address Base Register */
#define OVC3_BLK22_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC18u)

/** Alias (User Manual Name) for OVC3_BLK22_RABR.
 * To use register names with standard convension, please use OVC3_BLK22_RABR.
 */
#define OVC3_RABR22      (OVC3_BLK22_RABR)

/** \\brief  12C, Overlay Mask Register */
#define OVC3_BLK23_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC2Cu)

/** Alias (User Manual Name) for OVC3_BLK23_OMASK.
 * To use register names with standard convension, please use OVC3_BLK23_OMASK.
 */
#define OVC3_OMASK23     (OVC3_BLK23_OMASK)

/** \\brief  128, Overlay Target Address Register */
#define OVC3_BLK23_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC28u)

/** Alias (User Manual Name) for OVC3_BLK23_OTAR.
 * To use register names with standard convension, please use OVC3_BLK23_OTAR.
 */
#define OVC3_OTAR23      (OVC3_BLK23_OTAR)

/** \\brief  124, Redirected Address Base Register */
#define OVC3_BLK23_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC24u)

/** Alias (User Manual Name) for OVC3_BLK23_RABR.
 * To use register names with standard convension, please use OVC3_BLK23_RABR.
 */
#define OVC3_RABR23      (OVC3_BLK23_RABR)

/** \\brief  138, Overlay Mask Register */
#define OVC3_BLK24_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC38u)

/** Alias (User Manual Name) for OVC3_BLK24_OMASK.
 * To use register names with standard convension, please use OVC3_BLK24_OMASK.
 */
#define OVC3_OMASK24     (OVC3_BLK24_OMASK)

/** \\brief  134, Overlay Target Address Register */
#define OVC3_BLK24_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC34u)

/** Alias (User Manual Name) for OVC3_BLK24_OTAR.
 * To use register names with standard convension, please use OVC3_BLK24_OTAR.
 */
#define OVC3_OTAR24      (OVC3_BLK24_OTAR)

/** \\brief  130, Redirected Address Base Register */
#define OVC3_BLK24_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC30u)

/** Alias (User Manual Name) for OVC3_BLK24_RABR.
 * To use register names with standard convension, please use OVC3_BLK24_RABR.
 */
#define OVC3_RABR24      (OVC3_BLK24_RABR)

/** \\brief  144, Overlay Mask Register */
#define OVC3_BLK25_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC44u)

/** Alias (User Manual Name) for OVC3_BLK25_OMASK.
 * To use register names with standard convension, please use OVC3_BLK25_OMASK.
 */
#define OVC3_OMASK25     (OVC3_BLK25_OMASK)

/** \\brief  140, Overlay Target Address Register */
#define OVC3_BLK25_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC40u)

/** Alias (User Manual Name) for OVC3_BLK25_OTAR.
 * To use register names with standard convension, please use OVC3_BLK25_OTAR.
 */
#define OVC3_OTAR25      (OVC3_BLK25_OTAR)

/** \\brief  13C, Redirected Address Base Register */
#define OVC3_BLK25_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC3Cu)

/** Alias (User Manual Name) for OVC3_BLK25_RABR.
 * To use register names with standard convension, please use OVC3_BLK25_RABR.
 */
#define OVC3_RABR25      (OVC3_BLK25_RABR)

/** \\brief  150, Overlay Mask Register */
#define OVC3_BLK26_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC50u)

/** Alias (User Manual Name) for OVC3_BLK26_OMASK.
 * To use register names with standard convension, please use OVC3_BLK26_OMASK.
 */
#define OVC3_OMASK26     (OVC3_BLK26_OMASK)

/** \\brief  14C, Overlay Target Address Register */
#define OVC3_BLK26_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC4Cu)

/** Alias (User Manual Name) for OVC3_BLK26_OTAR.
 * To use register names with standard convension, please use OVC3_BLK26_OTAR.
 */
#define OVC3_OTAR26      (OVC3_BLK26_OTAR)

/** \\brief  148, Redirected Address Base Register */
#define OVC3_BLK26_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC48u)

/** Alias (User Manual Name) for OVC3_BLK26_RABR.
 * To use register names with standard convension, please use OVC3_BLK26_RABR.
 */
#define OVC3_RABR26      (OVC3_BLK26_RABR)

/** \\brief  15C, Overlay Mask Register */
#define OVC3_BLK27_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC5Cu)

/** Alias (User Manual Name) for OVC3_BLK27_OMASK.
 * To use register names with standard convension, please use OVC3_BLK27_OMASK.
 */
#define OVC3_OMASK27     (OVC3_BLK27_OMASK)

/** \\brief  158, Overlay Target Address Register */
#define OVC3_BLK27_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC58u)

/** Alias (User Manual Name) for OVC3_BLK27_OTAR.
 * To use register names with standard convension, please use OVC3_BLK27_OTAR.
 */
#define OVC3_OTAR27      (OVC3_BLK27_OTAR)

/** \\brief  154, Redirected Address Base Register */
#define OVC3_BLK27_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC54u)

/** Alias (User Manual Name) for OVC3_BLK27_RABR.
 * To use register names with standard convension, please use OVC3_BLK27_RABR.
 */
#define OVC3_RABR27      (OVC3_BLK27_RABR)

/** \\brief  168, Overlay Mask Register */
#define OVC3_BLK28_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC68u)

/** Alias (User Manual Name) for OVC3_BLK28_OMASK.
 * To use register names with standard convension, please use OVC3_BLK28_OMASK.
 */
#define OVC3_OMASK28     (OVC3_BLK28_OMASK)

/** \\brief  164, Overlay Target Address Register */
#define OVC3_BLK28_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC64u)

/** Alias (User Manual Name) for OVC3_BLK28_OTAR.
 * To use register names with standard convension, please use OVC3_BLK28_OTAR.
 */
#define OVC3_OTAR28      (OVC3_BLK28_OTAR)

/** \\brief  160, Redirected Address Base Register */
#define OVC3_BLK28_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC60u)

/** Alias (User Manual Name) for OVC3_BLK28_RABR.
 * To use register names with standard convension, please use OVC3_BLK28_RABR.
 */
#define OVC3_RABR28      (OVC3_BLK28_RABR)

/** \\brief  174, Overlay Mask Register */
#define OVC3_BLK29_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC74u)

/** Alias (User Manual Name) for OVC3_BLK29_OMASK.
 * To use register names with standard convension, please use OVC3_BLK29_OMASK.
 */
#define OVC3_OMASK29     (OVC3_BLK29_OMASK)

/** \\brief  170, Overlay Target Address Register */
#define OVC3_BLK29_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC70u)

/** Alias (User Manual Name) for OVC3_BLK29_OTAR.
 * To use register names with standard convension, please use OVC3_BLK29_OTAR.
 */
#define OVC3_OTAR29      (OVC3_BLK29_OTAR)

/** \\brief  16C, Redirected Address Base Register */
#define OVC3_BLK29_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC6Cu)

/** Alias (User Manual Name) for OVC3_BLK29_RABR.
 * To use register names with standard convension, please use OVC3_BLK29_RABR.
 */
#define OVC3_RABR29      (OVC3_BLK29_RABR)

/** \\brief  30, Overlay Mask Register */
#define OVC3_BLK2_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB30u)

/** Alias (User Manual Name) for OVC3_BLK2_OMASK.
 * To use register names with standard convension, please use OVC3_BLK2_OMASK.
 */
#define OVC3_OMASK2      (OVC3_BLK2_OMASK)

/** \\brief  2C, Overlay Target Address Register */
#define OVC3_BLK2_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB2Cu)

/** Alias (User Manual Name) for OVC3_BLK2_OTAR.
 * To use register names with standard convension, please use OVC3_BLK2_OTAR.
 */
#define OVC3_OTAR2       (OVC3_BLK2_OTAR)

/** \\brief  28, Redirected Address Base Register */
#define OVC3_BLK2_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB28u)

/** Alias (User Manual Name) for OVC3_BLK2_RABR.
 * To use register names with standard convension, please use OVC3_BLK2_RABR.
 */
#define OVC3_RABR2       (OVC3_BLK2_RABR)

/** \\brief  180, Overlay Mask Register */
#define OVC3_BLK30_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC80u)

/** Alias (User Manual Name) for OVC3_BLK30_OMASK.
 * To use register names with standard convension, please use OVC3_BLK30_OMASK.
 */
#define OVC3_OMASK30     (OVC3_BLK30_OMASK)

/** \\brief  17C, Overlay Target Address Register */
#define OVC3_BLK30_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC7Cu)

/** Alias (User Manual Name) for OVC3_BLK30_OTAR.
 * To use register names with standard convension, please use OVC3_BLK30_OTAR.
 */
#define OVC3_OTAR30      (OVC3_BLK30_OTAR)

/** \\brief  178, Redirected Address Base Register */
#define OVC3_BLK30_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC78u)

/** Alias (User Manual Name) for OVC3_BLK30_RABR.
 * To use register names with standard convension, please use OVC3_BLK30_RABR.
 */
#define OVC3_RABR30      (OVC3_BLK30_RABR)

/** \\brief  18C, Overlay Mask Register */
#define OVC3_BLK31_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FC8Cu)

/** Alias (User Manual Name) for OVC3_BLK31_OMASK.
 * To use register names with standard convension, please use OVC3_BLK31_OMASK.
 */
#define OVC3_OMASK31     (OVC3_BLK31_OMASK)

/** \\brief  188, Overlay Target Address Register */
#define OVC3_BLK31_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FC88u)

/** Alias (User Manual Name) for OVC3_BLK31_OTAR.
 * To use register names with standard convension, please use OVC3_BLK31_OTAR.
 */
#define OVC3_OTAR31      (OVC3_BLK31_OTAR)

/** \\brief  184, Redirected Address Base Register */
#define OVC3_BLK31_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FC84u)

/** Alias (User Manual Name) for OVC3_BLK31_RABR.
 * To use register names with standard convension, please use OVC3_BLK31_RABR.
 */
#define OVC3_RABR31      (OVC3_BLK31_RABR)

/** \\brief  3C, Overlay Mask Register */
#define OVC3_BLK3_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB3Cu)

/** Alias (User Manual Name) for OVC3_BLK3_OMASK.
 * To use register names with standard convension, please use OVC3_BLK3_OMASK.
 */
#define OVC3_OMASK3      (OVC3_BLK3_OMASK)

/** \\brief  38, Overlay Target Address Register */
#define OVC3_BLK3_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB38u)

/** Alias (User Manual Name) for OVC3_BLK3_OTAR.
 * To use register names with standard convension, please use OVC3_BLK3_OTAR.
 */
#define OVC3_OTAR3       (OVC3_BLK3_OTAR)

/** \\brief  34, Redirected Address Base Register */
#define OVC3_BLK3_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB34u)

/** Alias (User Manual Name) for OVC3_BLK3_RABR.
 * To use register names with standard convension, please use OVC3_BLK3_RABR.
 */
#define OVC3_RABR3       (OVC3_BLK3_RABR)

/** \\brief  48, Overlay Mask Register */
#define OVC3_BLK4_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB48u)

/** Alias (User Manual Name) for OVC3_BLK4_OMASK.
 * To use register names with standard convension, please use OVC3_BLK4_OMASK.
 */
#define OVC3_OMASK4      (OVC3_BLK4_OMASK)

/** \\brief  44, Overlay Target Address Register */
#define OVC3_BLK4_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB44u)

/** Alias (User Manual Name) for OVC3_BLK4_OTAR.
 * To use register names with standard convension, please use OVC3_BLK4_OTAR.
 */
#define OVC3_OTAR4       (OVC3_BLK4_OTAR)

/** \\brief  40, Redirected Address Base Register */
#define OVC3_BLK4_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB40u)

/** Alias (User Manual Name) for OVC3_BLK4_RABR.
 * To use register names with standard convension, please use OVC3_BLK4_RABR.
 */
#define OVC3_RABR4       (OVC3_BLK4_RABR)

/** \\brief  54, Overlay Mask Register */
#define OVC3_BLK5_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB54u)

/** Alias (User Manual Name) for OVC3_BLK5_OMASK.
 * To use register names with standard convension, please use OVC3_BLK5_OMASK.
 */
#define OVC3_OMASK5      (OVC3_BLK5_OMASK)

/** \\brief  50, Overlay Target Address Register */
#define OVC3_BLK5_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB50u)

/** Alias (User Manual Name) for OVC3_BLK5_OTAR.
 * To use register names with standard convension, please use OVC3_BLK5_OTAR.
 */
#define OVC3_OTAR5       (OVC3_BLK5_OTAR)

/** \\brief  4C, Redirected Address Base Register */
#define OVC3_BLK5_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB4Cu)

/** Alias (User Manual Name) for OVC3_BLK5_RABR.
 * To use register names with standard convension, please use OVC3_BLK5_RABR.
 */
#define OVC3_RABR5       (OVC3_BLK5_RABR)

/** \\brief  60, Overlay Mask Register */
#define OVC3_BLK6_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB60u)

/** Alias (User Manual Name) for OVC3_BLK6_OMASK.
 * To use register names with standard convension, please use OVC3_BLK6_OMASK.
 */
#define OVC3_OMASK6      (OVC3_BLK6_OMASK)

/** \\brief  5C, Overlay Target Address Register */
#define OVC3_BLK6_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB5Cu)

/** Alias (User Manual Name) for OVC3_BLK6_OTAR.
 * To use register names with standard convension, please use OVC3_BLK6_OTAR.
 */
#define OVC3_OTAR6       (OVC3_BLK6_OTAR)

/** \\brief  58, Redirected Address Base Register */
#define OVC3_BLK6_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB58u)

/** Alias (User Manual Name) for OVC3_BLK6_RABR.
 * To use register names with standard convension, please use OVC3_BLK6_RABR.
 */
#define OVC3_RABR6       (OVC3_BLK6_RABR)

/** \\brief  6C, Overlay Mask Register */
#define OVC3_BLK7_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB6Cu)

/** Alias (User Manual Name) for OVC3_BLK7_OMASK.
 * To use register names with standard convension, please use OVC3_BLK7_OMASK.
 */
#define OVC3_OMASK7      (OVC3_BLK7_OMASK)

/** \\brief  68, Overlay Target Address Register */
#define OVC3_BLK7_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB68u)

/** Alias (User Manual Name) for OVC3_BLK7_OTAR.
 * To use register names with standard convension, please use OVC3_BLK7_OTAR.
 */
#define OVC3_OTAR7       (OVC3_BLK7_OTAR)

/** \\brief  64, Redirected Address Base Register */
#define OVC3_BLK7_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB64u)

/** Alias (User Manual Name) for OVC3_BLK7_RABR.
 * To use register names with standard convension, please use OVC3_BLK7_RABR.
 */
#define OVC3_RABR7       (OVC3_BLK7_RABR)

/** \\brief  78, Overlay Mask Register */
#define OVC3_BLK8_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB78u)

/** Alias (User Manual Name) for OVC3_BLK8_OMASK.
 * To use register names with standard convension, please use OVC3_BLK8_OMASK.
 */
#define OVC3_OMASK8      (OVC3_BLK8_OMASK)

/** \\brief  74, Overlay Target Address Register */
#define OVC3_BLK8_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB74u)

/** Alias (User Manual Name) for OVC3_BLK8_OTAR.
 * To use register names with standard convension, please use OVC3_BLK8_OTAR.
 */
#define OVC3_OTAR8       (OVC3_BLK8_OTAR)

/** \\brief  70, Redirected Address Base Register */
#define OVC3_BLK8_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB70u)

/** Alias (User Manual Name) for OVC3_BLK8_RABR.
 * To use register names with standard convension, please use OVC3_BLK8_RABR.
 */
#define OVC3_RABR8       (OVC3_BLK8_RABR)

/** \\brief  84, Overlay Mask Register */
#define OVC3_BLK9_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF886FB84u)

/** Alias (User Manual Name) for OVC3_BLK9_OMASK.
 * To use register names with standard convension, please use OVC3_BLK9_OMASK.
 */
#define OVC3_OMASK9      (OVC3_BLK9_OMASK)

/** \\brief  80, Overlay Target Address Register */
#define OVC3_BLK9_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF886FB80u)

/** Alias (User Manual Name) for OVC3_BLK9_OTAR.
 * To use register names with standard convension, please use OVC3_BLK9_OTAR.
 */
#define OVC3_OTAR9       (OVC3_BLK9_OTAR)

/** \\brief  7C, Redirected Address Base Register */
#define OVC3_BLK9_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF886FB7Cu)

/** Alias (User Manual Name) for OVC3_BLK9_RABR.
 * To use register names with standard convension, please use OVC3_BLK9_RABR.
 */
#define OVC3_RABR9       (OVC3_BLK9_RABR)

/** \\brief  0, Overlay Range Select Register */
#define OVC3_OSEL        /*lint --e(923)*/ (*(volatile Ifx_OVC_OSEL *)0xF886FB00u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ovc_Cfg_Ovc4
 * \{  */

/** \\brief  18, Overlay Mask Register */
#define OVC4_BLK0_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB18u)

/** Alias (User Manual Name) for OVC4_BLK0_OMASK.
 * To use register names with standard convension, please use OVC4_BLK0_OMASK.
 */
#define OVC4_OMASK0      (OVC4_BLK0_OMASK)

/** \\brief  14, Overlay Target Address Register */
#define OVC4_BLK0_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB14u)

/** Alias (User Manual Name) for OVC4_BLK0_OTAR.
 * To use register names with standard convension, please use OVC4_BLK0_OTAR.
 */
#define OVC4_OTAR0       (OVC4_BLK0_OTAR)

/** \\brief  10, Redirected Address Base Register */
#define OVC4_BLK0_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB10u)

/** Alias (User Manual Name) for OVC4_BLK0_RABR.
 * To use register names with standard convension, please use OVC4_BLK0_RABR.
 */
#define OVC4_RABR0       (OVC4_BLK0_RABR)

/** \\brief  90, Overlay Mask Register */
#define OVC4_BLK10_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB90u)

/** Alias (User Manual Name) for OVC4_BLK10_OMASK.
 * To use register names with standard convension, please use OVC4_BLK10_OMASK.
 */
#define OVC4_OMASK10     (OVC4_BLK10_OMASK)

/** \\brief  8C, Overlay Target Address Register */
#define OVC4_BLK10_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB8Cu)

/** Alias (User Manual Name) for OVC4_BLK10_OTAR.
 * To use register names with standard convension, please use OVC4_BLK10_OTAR.
 */
#define OVC4_OTAR10      (OVC4_BLK10_OTAR)

/** \\brief  88, Redirected Address Base Register */
#define OVC4_BLK10_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB88u)

/** Alias (User Manual Name) for OVC4_BLK10_RABR.
 * To use register names with standard convension, please use OVC4_BLK10_RABR.
 */
#define OVC4_RABR10      (OVC4_BLK10_RABR)

/** \\brief  9C, Overlay Mask Register */
#define OVC4_BLK11_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB9Cu)

/** Alias (User Manual Name) for OVC4_BLK11_OMASK.
 * To use register names with standard convension, please use OVC4_BLK11_OMASK.
 */
#define OVC4_OMASK11     (OVC4_BLK11_OMASK)

/** \\brief  98, Overlay Target Address Register */
#define OVC4_BLK11_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB98u)

/** Alias (User Manual Name) for OVC4_BLK11_OTAR.
 * To use register names with standard convension, please use OVC4_BLK11_OTAR.
 */
#define OVC4_OTAR11      (OVC4_BLK11_OTAR)

/** \\brief  94, Redirected Address Base Register */
#define OVC4_BLK11_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB94u)

/** Alias (User Manual Name) for OVC4_BLK11_RABR.
 * To use register names with standard convension, please use OVC4_BLK11_RABR.
 */
#define OVC4_RABR11      (OVC4_BLK11_RABR)

/** \\brief  A8, Overlay Mask Register */
#define OVC4_BLK12_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FBA8u)

/** Alias (User Manual Name) for OVC4_BLK12_OMASK.
 * To use register names with standard convension, please use OVC4_BLK12_OMASK.
 */
#define OVC4_OMASK12     (OVC4_BLK12_OMASK)

/** \\brief  A4, Overlay Target Address Register */
#define OVC4_BLK12_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FBA4u)

/** Alias (User Manual Name) for OVC4_BLK12_OTAR.
 * To use register names with standard convension, please use OVC4_BLK12_OTAR.
 */
#define OVC4_OTAR12      (OVC4_BLK12_OTAR)

/** \\brief  A0, Redirected Address Base Register */
#define OVC4_BLK12_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FBA0u)

/** Alias (User Manual Name) for OVC4_BLK12_RABR.
 * To use register names with standard convension, please use OVC4_BLK12_RABR.
 */
#define OVC4_RABR12      (OVC4_BLK12_RABR)

/** \\brief  B4, Overlay Mask Register */
#define OVC4_BLK13_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FBB4u)

/** Alias (User Manual Name) for OVC4_BLK13_OMASK.
 * To use register names with standard convension, please use OVC4_BLK13_OMASK.
 */
#define OVC4_OMASK13     (OVC4_BLK13_OMASK)

/** \\brief  B0, Overlay Target Address Register */
#define OVC4_BLK13_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FBB0u)

/** Alias (User Manual Name) for OVC4_BLK13_OTAR.
 * To use register names with standard convension, please use OVC4_BLK13_OTAR.
 */
#define OVC4_OTAR13      (OVC4_BLK13_OTAR)

/** \\brief  AC, Redirected Address Base Register */
#define OVC4_BLK13_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FBACu)

/** Alias (User Manual Name) for OVC4_BLK13_RABR.
 * To use register names with standard convension, please use OVC4_BLK13_RABR.
 */
#define OVC4_RABR13      (OVC4_BLK13_RABR)

/** \\brief  C0, Overlay Mask Register */
#define OVC4_BLK14_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FBC0u)

/** Alias (User Manual Name) for OVC4_BLK14_OMASK.
 * To use register names with standard convension, please use OVC4_BLK14_OMASK.
 */
#define OVC4_OMASK14     (OVC4_BLK14_OMASK)

/** \\brief  BC, Overlay Target Address Register */
#define OVC4_BLK14_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FBBCu)

/** Alias (User Manual Name) for OVC4_BLK14_OTAR.
 * To use register names with standard convension, please use OVC4_BLK14_OTAR.
 */
#define OVC4_OTAR14      (OVC4_BLK14_OTAR)

/** \\brief  B8, Redirected Address Base Register */
#define OVC4_BLK14_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FBB8u)

/** Alias (User Manual Name) for OVC4_BLK14_RABR.
 * To use register names with standard convension, please use OVC4_BLK14_RABR.
 */
#define OVC4_RABR14      (OVC4_BLK14_RABR)

/** \\brief  CC, Overlay Mask Register */
#define OVC4_BLK15_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FBCCu)

/** Alias (User Manual Name) for OVC4_BLK15_OMASK.
 * To use register names with standard convension, please use OVC4_BLK15_OMASK.
 */
#define OVC4_OMASK15     (OVC4_BLK15_OMASK)

/** \\brief  C8, Overlay Target Address Register */
#define OVC4_BLK15_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FBC8u)

/** Alias (User Manual Name) for OVC4_BLK15_OTAR.
 * To use register names with standard convension, please use OVC4_BLK15_OTAR.
 */
#define OVC4_OTAR15      (OVC4_BLK15_OTAR)

/** \\brief  C4, Redirected Address Base Register */
#define OVC4_BLK15_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FBC4u)

/** Alias (User Manual Name) for OVC4_BLK15_RABR.
 * To use register names with standard convension, please use OVC4_BLK15_RABR.
 */
#define OVC4_RABR15      (OVC4_BLK15_RABR)

/** \\brief  D8, Overlay Mask Register */
#define OVC4_BLK16_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FBD8u)

/** Alias (User Manual Name) for OVC4_BLK16_OMASK.
 * To use register names with standard convension, please use OVC4_BLK16_OMASK.
 */
#define OVC4_OMASK16     (OVC4_BLK16_OMASK)

/** \\brief  D4, Overlay Target Address Register */
#define OVC4_BLK16_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FBD4u)

/** Alias (User Manual Name) for OVC4_BLK16_OTAR.
 * To use register names with standard convension, please use OVC4_BLK16_OTAR.
 */
#define OVC4_OTAR16      (OVC4_BLK16_OTAR)

/** \\brief  D0, Redirected Address Base Register */
#define OVC4_BLK16_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FBD0u)

/** Alias (User Manual Name) for OVC4_BLK16_RABR.
 * To use register names with standard convension, please use OVC4_BLK16_RABR.
 */
#define OVC4_RABR16      (OVC4_BLK16_RABR)

/** \\brief  E4, Overlay Mask Register */
#define OVC4_BLK17_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FBE4u)

/** Alias (User Manual Name) for OVC4_BLK17_OMASK.
 * To use register names with standard convension, please use OVC4_BLK17_OMASK.
 */
#define OVC4_OMASK17     (OVC4_BLK17_OMASK)

/** \\brief  E0, Overlay Target Address Register */
#define OVC4_BLK17_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FBE0u)

/** Alias (User Manual Name) for OVC4_BLK17_OTAR.
 * To use register names with standard convension, please use OVC4_BLK17_OTAR.
 */
#define OVC4_OTAR17      (OVC4_BLK17_OTAR)

/** \\brief  DC, Redirected Address Base Register */
#define OVC4_BLK17_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FBDCu)

/** Alias (User Manual Name) for OVC4_BLK17_RABR.
 * To use register names with standard convension, please use OVC4_BLK17_RABR.
 */
#define OVC4_RABR17      (OVC4_BLK17_RABR)

/** \\brief  F0, Overlay Mask Register */
#define OVC4_BLK18_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FBF0u)

/** Alias (User Manual Name) for OVC4_BLK18_OMASK.
 * To use register names with standard convension, please use OVC4_BLK18_OMASK.
 */
#define OVC4_OMASK18     (OVC4_BLK18_OMASK)

/** \\brief  EC, Overlay Target Address Register */
#define OVC4_BLK18_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FBECu)

/** Alias (User Manual Name) for OVC4_BLK18_OTAR.
 * To use register names with standard convension, please use OVC4_BLK18_OTAR.
 */
#define OVC4_OTAR18      (OVC4_BLK18_OTAR)

/** \\brief  E8, Redirected Address Base Register */
#define OVC4_BLK18_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FBE8u)

/** Alias (User Manual Name) for OVC4_BLK18_RABR.
 * To use register names with standard convension, please use OVC4_BLK18_RABR.
 */
#define OVC4_RABR18      (OVC4_BLK18_RABR)

/** \\brief  FC, Overlay Mask Register */
#define OVC4_BLK19_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FBFCu)

/** Alias (User Manual Name) for OVC4_BLK19_OMASK.
 * To use register names with standard convension, please use OVC4_BLK19_OMASK.
 */
#define OVC4_OMASK19     (OVC4_BLK19_OMASK)

/** \\brief  F8, Overlay Target Address Register */
#define OVC4_BLK19_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FBF8u)

/** Alias (User Manual Name) for OVC4_BLK19_OTAR.
 * To use register names with standard convension, please use OVC4_BLK19_OTAR.
 */
#define OVC4_OTAR19      (OVC4_BLK19_OTAR)

/** \\brief  F4, Redirected Address Base Register */
#define OVC4_BLK19_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FBF4u)

/** Alias (User Manual Name) for OVC4_BLK19_RABR.
 * To use register names with standard convension, please use OVC4_BLK19_RABR.
 */
#define OVC4_RABR19      (OVC4_BLK19_RABR)

/** \\brief  24, Overlay Mask Register */
#define OVC4_BLK1_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB24u)

/** Alias (User Manual Name) for OVC4_BLK1_OMASK.
 * To use register names with standard convension, please use OVC4_BLK1_OMASK.
 */
#define OVC4_OMASK1      (OVC4_BLK1_OMASK)

/** \\brief  20, Overlay Target Address Register */
#define OVC4_BLK1_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB20u)

/** Alias (User Manual Name) for OVC4_BLK1_OTAR.
 * To use register names with standard convension, please use OVC4_BLK1_OTAR.
 */
#define OVC4_OTAR1       (OVC4_BLK1_OTAR)

/** \\brief  1C, Redirected Address Base Register */
#define OVC4_BLK1_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB1Cu)

/** Alias (User Manual Name) for OVC4_BLK1_RABR.
 * To use register names with standard convension, please use OVC4_BLK1_RABR.
 */
#define OVC4_RABR1       (OVC4_BLK1_RABR)

/** \\brief  108, Overlay Mask Register */
#define OVC4_BLK20_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC08u)

/** Alias (User Manual Name) for OVC4_BLK20_OMASK.
 * To use register names with standard convension, please use OVC4_BLK20_OMASK.
 */
#define OVC4_OMASK20     (OVC4_BLK20_OMASK)

/** \\brief  104, Overlay Target Address Register */
#define OVC4_BLK20_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC04u)

/** Alias (User Manual Name) for OVC4_BLK20_OTAR.
 * To use register names with standard convension, please use OVC4_BLK20_OTAR.
 */
#define OVC4_OTAR20      (OVC4_BLK20_OTAR)

/** \\brief  100, Redirected Address Base Register */
#define OVC4_BLK20_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC00u)

/** Alias (User Manual Name) for OVC4_BLK20_RABR.
 * To use register names with standard convension, please use OVC4_BLK20_RABR.
 */
#define OVC4_RABR20      (OVC4_BLK20_RABR)

/** \\brief  114, Overlay Mask Register */
#define OVC4_BLK21_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC14u)

/** Alias (User Manual Name) for OVC4_BLK21_OMASK.
 * To use register names with standard convension, please use OVC4_BLK21_OMASK.
 */
#define OVC4_OMASK21     (OVC4_BLK21_OMASK)

/** \\brief  110, Overlay Target Address Register */
#define OVC4_BLK21_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC10u)

/** Alias (User Manual Name) for OVC4_BLK21_OTAR.
 * To use register names with standard convension, please use OVC4_BLK21_OTAR.
 */
#define OVC4_OTAR21      (OVC4_BLK21_OTAR)

/** \\brief  10C, Redirected Address Base Register */
#define OVC4_BLK21_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC0Cu)

/** Alias (User Manual Name) for OVC4_BLK21_RABR.
 * To use register names with standard convension, please use OVC4_BLK21_RABR.
 */
#define OVC4_RABR21      (OVC4_BLK21_RABR)

/** \\brief  120, Overlay Mask Register */
#define OVC4_BLK22_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC20u)

/** Alias (User Manual Name) for OVC4_BLK22_OMASK.
 * To use register names with standard convension, please use OVC4_BLK22_OMASK.
 */
#define OVC4_OMASK22     (OVC4_BLK22_OMASK)

/** \\brief  11C, Overlay Target Address Register */
#define OVC4_BLK22_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC1Cu)

/** Alias (User Manual Name) for OVC4_BLK22_OTAR.
 * To use register names with standard convension, please use OVC4_BLK22_OTAR.
 */
#define OVC4_OTAR22      (OVC4_BLK22_OTAR)

/** \\brief  118, Redirected Address Base Register */
#define OVC4_BLK22_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC18u)

/** Alias (User Manual Name) for OVC4_BLK22_RABR.
 * To use register names with standard convension, please use OVC4_BLK22_RABR.
 */
#define OVC4_RABR22      (OVC4_BLK22_RABR)

/** \\brief  12C, Overlay Mask Register */
#define OVC4_BLK23_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC2Cu)

/** Alias (User Manual Name) for OVC4_BLK23_OMASK.
 * To use register names with standard convension, please use OVC4_BLK23_OMASK.
 */
#define OVC4_OMASK23     (OVC4_BLK23_OMASK)

/** \\brief  128, Overlay Target Address Register */
#define OVC4_BLK23_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC28u)

/** Alias (User Manual Name) for OVC4_BLK23_OTAR.
 * To use register names with standard convension, please use OVC4_BLK23_OTAR.
 */
#define OVC4_OTAR23      (OVC4_BLK23_OTAR)

/** \\brief  124, Redirected Address Base Register */
#define OVC4_BLK23_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC24u)

/** Alias (User Manual Name) for OVC4_BLK23_RABR.
 * To use register names with standard convension, please use OVC4_BLK23_RABR.
 */
#define OVC4_RABR23      (OVC4_BLK23_RABR)

/** \\brief  138, Overlay Mask Register */
#define OVC4_BLK24_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC38u)

/** Alias (User Manual Name) for OVC4_BLK24_OMASK.
 * To use register names with standard convension, please use OVC4_BLK24_OMASK.
 */
#define OVC4_OMASK24     (OVC4_BLK24_OMASK)

/** \\brief  134, Overlay Target Address Register */
#define OVC4_BLK24_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC34u)

/** Alias (User Manual Name) for OVC4_BLK24_OTAR.
 * To use register names with standard convension, please use OVC4_BLK24_OTAR.
 */
#define OVC4_OTAR24      (OVC4_BLK24_OTAR)

/** \\brief  130, Redirected Address Base Register */
#define OVC4_BLK24_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC30u)

/** Alias (User Manual Name) for OVC4_BLK24_RABR.
 * To use register names with standard convension, please use OVC4_BLK24_RABR.
 */
#define OVC4_RABR24      (OVC4_BLK24_RABR)

/** \\brief  144, Overlay Mask Register */
#define OVC4_BLK25_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC44u)

/** Alias (User Manual Name) for OVC4_BLK25_OMASK.
 * To use register names with standard convension, please use OVC4_BLK25_OMASK.
 */
#define OVC4_OMASK25     (OVC4_BLK25_OMASK)

/** \\brief  140, Overlay Target Address Register */
#define OVC4_BLK25_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC40u)

/** Alias (User Manual Name) for OVC4_BLK25_OTAR.
 * To use register names with standard convension, please use OVC4_BLK25_OTAR.
 */
#define OVC4_OTAR25      (OVC4_BLK25_OTAR)

/** \\brief  13C, Redirected Address Base Register */
#define OVC4_BLK25_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC3Cu)

/** Alias (User Manual Name) for OVC4_BLK25_RABR.
 * To use register names with standard convension, please use OVC4_BLK25_RABR.
 */
#define OVC4_RABR25      (OVC4_BLK25_RABR)

/** \\brief  150, Overlay Mask Register */
#define OVC4_BLK26_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC50u)

/** Alias (User Manual Name) for OVC4_BLK26_OMASK.
 * To use register names with standard convension, please use OVC4_BLK26_OMASK.
 */
#define OVC4_OMASK26     (OVC4_BLK26_OMASK)

/** \\brief  14C, Overlay Target Address Register */
#define OVC4_BLK26_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC4Cu)

/** Alias (User Manual Name) for OVC4_BLK26_OTAR.
 * To use register names with standard convension, please use OVC4_BLK26_OTAR.
 */
#define OVC4_OTAR26      (OVC4_BLK26_OTAR)

/** \\brief  148, Redirected Address Base Register */
#define OVC4_BLK26_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC48u)

/** Alias (User Manual Name) for OVC4_BLK26_RABR.
 * To use register names with standard convension, please use OVC4_BLK26_RABR.
 */
#define OVC4_RABR26      (OVC4_BLK26_RABR)

/** \\brief  15C, Overlay Mask Register */
#define OVC4_BLK27_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC5Cu)

/** Alias (User Manual Name) for OVC4_BLK27_OMASK.
 * To use register names with standard convension, please use OVC4_BLK27_OMASK.
 */
#define OVC4_OMASK27     (OVC4_BLK27_OMASK)

/** \\brief  158, Overlay Target Address Register */
#define OVC4_BLK27_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC58u)

/** Alias (User Manual Name) for OVC4_BLK27_OTAR.
 * To use register names with standard convension, please use OVC4_BLK27_OTAR.
 */
#define OVC4_OTAR27      (OVC4_BLK27_OTAR)

/** \\brief  154, Redirected Address Base Register */
#define OVC4_BLK27_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC54u)

/** Alias (User Manual Name) for OVC4_BLK27_RABR.
 * To use register names with standard convension, please use OVC4_BLK27_RABR.
 */
#define OVC4_RABR27      (OVC4_BLK27_RABR)

/** \\brief  168, Overlay Mask Register */
#define OVC4_BLK28_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC68u)

/** Alias (User Manual Name) for OVC4_BLK28_OMASK.
 * To use register names with standard convension, please use OVC4_BLK28_OMASK.
 */
#define OVC4_OMASK28     (OVC4_BLK28_OMASK)

/** \\brief  164, Overlay Target Address Register */
#define OVC4_BLK28_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC64u)

/** Alias (User Manual Name) for OVC4_BLK28_OTAR.
 * To use register names with standard convension, please use OVC4_BLK28_OTAR.
 */
#define OVC4_OTAR28      (OVC4_BLK28_OTAR)

/** \\brief  160, Redirected Address Base Register */
#define OVC4_BLK28_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC60u)

/** Alias (User Manual Name) for OVC4_BLK28_RABR.
 * To use register names with standard convension, please use OVC4_BLK28_RABR.
 */
#define OVC4_RABR28      (OVC4_BLK28_RABR)

/** \\brief  174, Overlay Mask Register */
#define OVC4_BLK29_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC74u)

/** Alias (User Manual Name) for OVC4_BLK29_OMASK.
 * To use register names with standard convension, please use OVC4_BLK29_OMASK.
 */
#define OVC4_OMASK29     (OVC4_BLK29_OMASK)

/** \\brief  170, Overlay Target Address Register */
#define OVC4_BLK29_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC70u)

/** Alias (User Manual Name) for OVC4_BLK29_OTAR.
 * To use register names with standard convension, please use OVC4_BLK29_OTAR.
 */
#define OVC4_OTAR29      (OVC4_BLK29_OTAR)

/** \\brief  16C, Redirected Address Base Register */
#define OVC4_BLK29_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC6Cu)

/** Alias (User Manual Name) for OVC4_BLK29_RABR.
 * To use register names with standard convension, please use OVC4_BLK29_RABR.
 */
#define OVC4_RABR29      (OVC4_BLK29_RABR)

/** \\brief  30, Overlay Mask Register */
#define OVC4_BLK2_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB30u)

/** Alias (User Manual Name) for OVC4_BLK2_OMASK.
 * To use register names with standard convension, please use OVC4_BLK2_OMASK.
 */
#define OVC4_OMASK2      (OVC4_BLK2_OMASK)

/** \\brief  2C, Overlay Target Address Register */
#define OVC4_BLK2_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB2Cu)

/** Alias (User Manual Name) for OVC4_BLK2_OTAR.
 * To use register names with standard convension, please use OVC4_BLK2_OTAR.
 */
#define OVC4_OTAR2       (OVC4_BLK2_OTAR)

/** \\brief  28, Redirected Address Base Register */
#define OVC4_BLK2_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB28u)

/** Alias (User Manual Name) for OVC4_BLK2_RABR.
 * To use register names with standard convension, please use OVC4_BLK2_RABR.
 */
#define OVC4_RABR2       (OVC4_BLK2_RABR)

/** \\brief  180, Overlay Mask Register */
#define OVC4_BLK30_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC80u)

/** Alias (User Manual Name) for OVC4_BLK30_OMASK.
 * To use register names with standard convension, please use OVC4_BLK30_OMASK.
 */
#define OVC4_OMASK30     (OVC4_BLK30_OMASK)

/** \\brief  17C, Overlay Target Address Register */
#define OVC4_BLK30_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC7Cu)

/** Alias (User Manual Name) for OVC4_BLK30_OTAR.
 * To use register names with standard convension, please use OVC4_BLK30_OTAR.
 */
#define OVC4_OTAR30      (OVC4_BLK30_OTAR)

/** \\brief  178, Redirected Address Base Register */
#define OVC4_BLK30_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC78u)

/** Alias (User Manual Name) for OVC4_BLK30_RABR.
 * To use register names with standard convension, please use OVC4_BLK30_RABR.
 */
#define OVC4_RABR30      (OVC4_BLK30_RABR)

/** \\brief  18C, Overlay Mask Register */
#define OVC4_BLK31_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FC8Cu)

/** Alias (User Manual Name) for OVC4_BLK31_OMASK.
 * To use register names with standard convension, please use OVC4_BLK31_OMASK.
 */
#define OVC4_OMASK31     (OVC4_BLK31_OMASK)

/** \\brief  188, Overlay Target Address Register */
#define OVC4_BLK31_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FC88u)

/** Alias (User Manual Name) for OVC4_BLK31_OTAR.
 * To use register names with standard convension, please use OVC4_BLK31_OTAR.
 */
#define OVC4_OTAR31      (OVC4_BLK31_OTAR)

/** \\brief  184, Redirected Address Base Register */
#define OVC4_BLK31_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FC84u)

/** Alias (User Manual Name) for OVC4_BLK31_RABR.
 * To use register names with standard convension, please use OVC4_BLK31_RABR.
 */
#define OVC4_RABR31      (OVC4_BLK31_RABR)

/** \\brief  3C, Overlay Mask Register */
#define OVC4_BLK3_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB3Cu)

/** Alias (User Manual Name) for OVC4_BLK3_OMASK.
 * To use register names with standard convension, please use OVC4_BLK3_OMASK.
 */
#define OVC4_OMASK3      (OVC4_BLK3_OMASK)

/** \\brief  38, Overlay Target Address Register */
#define OVC4_BLK3_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB38u)

/** Alias (User Manual Name) for OVC4_BLK3_OTAR.
 * To use register names with standard convension, please use OVC4_BLK3_OTAR.
 */
#define OVC4_OTAR3       (OVC4_BLK3_OTAR)

/** \\brief  34, Redirected Address Base Register */
#define OVC4_BLK3_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB34u)

/** Alias (User Manual Name) for OVC4_BLK3_RABR.
 * To use register names with standard convension, please use OVC4_BLK3_RABR.
 */
#define OVC4_RABR3       (OVC4_BLK3_RABR)

/** \\brief  48, Overlay Mask Register */
#define OVC4_BLK4_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB48u)

/** Alias (User Manual Name) for OVC4_BLK4_OMASK.
 * To use register names with standard convension, please use OVC4_BLK4_OMASK.
 */
#define OVC4_OMASK4      (OVC4_BLK4_OMASK)

/** \\brief  44, Overlay Target Address Register */
#define OVC4_BLK4_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB44u)

/** Alias (User Manual Name) for OVC4_BLK4_OTAR.
 * To use register names with standard convension, please use OVC4_BLK4_OTAR.
 */
#define OVC4_OTAR4       (OVC4_BLK4_OTAR)

/** \\brief  40, Redirected Address Base Register */
#define OVC4_BLK4_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB40u)

/** Alias (User Manual Name) for OVC4_BLK4_RABR.
 * To use register names with standard convension, please use OVC4_BLK4_RABR.
 */
#define OVC4_RABR4       (OVC4_BLK4_RABR)

/** \\brief  54, Overlay Mask Register */
#define OVC4_BLK5_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB54u)

/** Alias (User Manual Name) for OVC4_BLK5_OMASK.
 * To use register names with standard convension, please use OVC4_BLK5_OMASK.
 */
#define OVC4_OMASK5      (OVC4_BLK5_OMASK)

/** \\brief  50, Overlay Target Address Register */
#define OVC4_BLK5_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB50u)

/** Alias (User Manual Name) for OVC4_BLK5_OTAR.
 * To use register names with standard convension, please use OVC4_BLK5_OTAR.
 */
#define OVC4_OTAR5       (OVC4_BLK5_OTAR)

/** \\brief  4C, Redirected Address Base Register */
#define OVC4_BLK5_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB4Cu)

/** Alias (User Manual Name) for OVC4_BLK5_RABR.
 * To use register names with standard convension, please use OVC4_BLK5_RABR.
 */
#define OVC4_RABR5       (OVC4_BLK5_RABR)

/** \\brief  60, Overlay Mask Register */
#define OVC4_BLK6_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB60u)

/** Alias (User Manual Name) for OVC4_BLK6_OMASK.
 * To use register names with standard convension, please use OVC4_BLK6_OMASK.
 */
#define OVC4_OMASK6      (OVC4_BLK6_OMASK)

/** \\brief  5C, Overlay Target Address Register */
#define OVC4_BLK6_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB5Cu)

/** Alias (User Manual Name) for OVC4_BLK6_OTAR.
 * To use register names with standard convension, please use OVC4_BLK6_OTAR.
 */
#define OVC4_OTAR6       (OVC4_BLK6_OTAR)

/** \\brief  58, Redirected Address Base Register */
#define OVC4_BLK6_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB58u)

/** Alias (User Manual Name) for OVC4_BLK6_RABR.
 * To use register names with standard convension, please use OVC4_BLK6_RABR.
 */
#define OVC4_RABR6       (OVC4_BLK6_RABR)

/** \\brief  6C, Overlay Mask Register */
#define OVC4_BLK7_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB6Cu)

/** Alias (User Manual Name) for OVC4_BLK7_OMASK.
 * To use register names with standard convension, please use OVC4_BLK7_OMASK.
 */
#define OVC4_OMASK7      (OVC4_BLK7_OMASK)

/** \\brief  68, Overlay Target Address Register */
#define OVC4_BLK7_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB68u)

/** Alias (User Manual Name) for OVC4_BLK7_OTAR.
 * To use register names with standard convension, please use OVC4_BLK7_OTAR.
 */
#define OVC4_OTAR7       (OVC4_BLK7_OTAR)

/** \\brief  64, Redirected Address Base Register */
#define OVC4_BLK7_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB64u)

/** Alias (User Manual Name) for OVC4_BLK7_RABR.
 * To use register names with standard convension, please use OVC4_BLK7_RABR.
 */
#define OVC4_RABR7       (OVC4_BLK7_RABR)

/** \\brief  78, Overlay Mask Register */
#define OVC4_BLK8_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB78u)

/** Alias (User Manual Name) for OVC4_BLK8_OMASK.
 * To use register names with standard convension, please use OVC4_BLK8_OMASK.
 */
#define OVC4_OMASK8      (OVC4_BLK8_OMASK)

/** \\brief  74, Overlay Target Address Register */
#define OVC4_BLK8_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB74u)

/** Alias (User Manual Name) for OVC4_BLK8_OTAR.
 * To use register names with standard convension, please use OVC4_BLK8_OTAR.
 */
#define OVC4_OTAR8       (OVC4_BLK8_OTAR)

/** \\brief  70, Redirected Address Base Register */
#define OVC4_BLK8_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB70u)

/** Alias (User Manual Name) for OVC4_BLK8_RABR.
 * To use register names with standard convension, please use OVC4_BLK8_RABR.
 */
#define OVC4_RABR8       (OVC4_BLK8_RABR)

/** \\brief  84, Overlay Mask Register */
#define OVC4_BLK9_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF888FB84u)

/** Alias (User Manual Name) for OVC4_BLK9_OMASK.
 * To use register names with standard convension, please use OVC4_BLK9_OMASK.
 */
#define OVC4_OMASK9      (OVC4_BLK9_OMASK)

/** \\brief  80, Overlay Target Address Register */
#define OVC4_BLK9_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF888FB80u)

/** Alias (User Manual Name) for OVC4_BLK9_OTAR.
 * To use register names with standard convension, please use OVC4_BLK9_OTAR.
 */
#define OVC4_OTAR9       (OVC4_BLK9_OTAR)

/** \\brief  7C, Redirected Address Base Register */
#define OVC4_BLK9_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF888FB7Cu)

/** Alias (User Manual Name) for OVC4_BLK9_RABR.
 * To use register names with standard convension, please use OVC4_BLK9_RABR.
 */
#define OVC4_RABR9       (OVC4_BLK9_RABR)

/** \\brief  0, Overlay Range Select Register */
#define OVC4_OSEL        /*lint --e(923)*/ (*(volatile Ifx_OVC_OSEL *)0xF888FB00u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ovc_Cfg_Ovc5
 * \{  */

/** \\brief  18, Overlay Mask Register */
#define OVC5_BLK0_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB18u)

/** Alias (User Manual Name) for OVC5_BLK0_OMASK.
 * To use register names with standard convension, please use OVC5_BLK0_OMASK.
 */
#define OVC5_OMASK0      (OVC5_BLK0_OMASK)

/** \\brief  14, Overlay Target Address Register */
#define OVC5_BLK0_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB14u)

/** Alias (User Manual Name) for OVC5_BLK0_OTAR.
 * To use register names with standard convension, please use OVC5_BLK0_OTAR.
 */
#define OVC5_OTAR0       (OVC5_BLK0_OTAR)

/** \\brief  10, Redirected Address Base Register */
#define OVC5_BLK0_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB10u)

/** Alias (User Manual Name) for OVC5_BLK0_RABR.
 * To use register names with standard convension, please use OVC5_BLK0_RABR.
 */
#define OVC5_RABR0       (OVC5_BLK0_RABR)

/** \\brief  90, Overlay Mask Register */
#define OVC5_BLK10_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB90u)

/** Alias (User Manual Name) for OVC5_BLK10_OMASK.
 * To use register names with standard convension, please use OVC5_BLK10_OMASK.
 */
#define OVC5_OMASK10     (OVC5_BLK10_OMASK)

/** \\brief  8C, Overlay Target Address Register */
#define OVC5_BLK10_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB8Cu)

/** Alias (User Manual Name) for OVC5_BLK10_OTAR.
 * To use register names with standard convension, please use OVC5_BLK10_OTAR.
 */
#define OVC5_OTAR10      (OVC5_BLK10_OTAR)

/** \\brief  88, Redirected Address Base Register */
#define OVC5_BLK10_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB88u)

/** Alias (User Manual Name) for OVC5_BLK10_RABR.
 * To use register names with standard convension, please use OVC5_BLK10_RABR.
 */
#define OVC5_RABR10      (OVC5_BLK10_RABR)

/** \\brief  9C, Overlay Mask Register */
#define OVC5_BLK11_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB9Cu)

/** Alias (User Manual Name) for OVC5_BLK11_OMASK.
 * To use register names with standard convension, please use OVC5_BLK11_OMASK.
 */
#define OVC5_OMASK11     (OVC5_BLK11_OMASK)

/** \\brief  98, Overlay Target Address Register */
#define OVC5_BLK11_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB98u)

/** Alias (User Manual Name) for OVC5_BLK11_OTAR.
 * To use register names with standard convension, please use OVC5_BLK11_OTAR.
 */
#define OVC5_OTAR11      (OVC5_BLK11_OTAR)

/** \\brief  94, Redirected Address Base Register */
#define OVC5_BLK11_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB94u)

/** Alias (User Manual Name) for OVC5_BLK11_RABR.
 * To use register names with standard convension, please use OVC5_BLK11_RABR.
 */
#define OVC5_RABR11      (OVC5_BLK11_RABR)

/** \\brief  A8, Overlay Mask Register */
#define OVC5_BLK12_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFBA8u)

/** Alias (User Manual Name) for OVC5_BLK12_OMASK.
 * To use register names with standard convension, please use OVC5_BLK12_OMASK.
 */
#define OVC5_OMASK12     (OVC5_BLK12_OMASK)

/** \\brief  A4, Overlay Target Address Register */
#define OVC5_BLK12_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFBA4u)

/** Alias (User Manual Name) for OVC5_BLK12_OTAR.
 * To use register names with standard convension, please use OVC5_BLK12_OTAR.
 */
#define OVC5_OTAR12      (OVC5_BLK12_OTAR)

/** \\brief  A0, Redirected Address Base Register */
#define OVC5_BLK12_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFBA0u)

/** Alias (User Manual Name) for OVC5_BLK12_RABR.
 * To use register names with standard convension, please use OVC5_BLK12_RABR.
 */
#define OVC5_RABR12      (OVC5_BLK12_RABR)

/** \\brief  B4, Overlay Mask Register */
#define OVC5_BLK13_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFBB4u)

/** Alias (User Manual Name) for OVC5_BLK13_OMASK.
 * To use register names with standard convension, please use OVC5_BLK13_OMASK.
 */
#define OVC5_OMASK13     (OVC5_BLK13_OMASK)

/** \\brief  B0, Overlay Target Address Register */
#define OVC5_BLK13_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFBB0u)

/** Alias (User Manual Name) for OVC5_BLK13_OTAR.
 * To use register names with standard convension, please use OVC5_BLK13_OTAR.
 */
#define OVC5_OTAR13      (OVC5_BLK13_OTAR)

/** \\brief  AC, Redirected Address Base Register */
#define OVC5_BLK13_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFBACu)

/** Alias (User Manual Name) for OVC5_BLK13_RABR.
 * To use register names with standard convension, please use OVC5_BLK13_RABR.
 */
#define OVC5_RABR13      (OVC5_BLK13_RABR)

/** \\brief  C0, Overlay Mask Register */
#define OVC5_BLK14_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFBC0u)

/** Alias (User Manual Name) for OVC5_BLK14_OMASK.
 * To use register names with standard convension, please use OVC5_BLK14_OMASK.
 */
#define OVC5_OMASK14     (OVC5_BLK14_OMASK)

/** \\brief  BC, Overlay Target Address Register */
#define OVC5_BLK14_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFBBCu)

/** Alias (User Manual Name) for OVC5_BLK14_OTAR.
 * To use register names with standard convension, please use OVC5_BLK14_OTAR.
 */
#define OVC5_OTAR14      (OVC5_BLK14_OTAR)

/** \\brief  B8, Redirected Address Base Register */
#define OVC5_BLK14_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFBB8u)

/** Alias (User Manual Name) for OVC5_BLK14_RABR.
 * To use register names with standard convension, please use OVC5_BLK14_RABR.
 */
#define OVC5_RABR14      (OVC5_BLK14_RABR)

/** \\brief  CC, Overlay Mask Register */
#define OVC5_BLK15_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFBCCu)

/** Alias (User Manual Name) for OVC5_BLK15_OMASK.
 * To use register names with standard convension, please use OVC5_BLK15_OMASK.
 */
#define OVC5_OMASK15     (OVC5_BLK15_OMASK)

/** \\brief  C8, Overlay Target Address Register */
#define OVC5_BLK15_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFBC8u)

/** Alias (User Manual Name) for OVC5_BLK15_OTAR.
 * To use register names with standard convension, please use OVC5_BLK15_OTAR.
 */
#define OVC5_OTAR15      (OVC5_BLK15_OTAR)

/** \\brief  C4, Redirected Address Base Register */
#define OVC5_BLK15_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFBC4u)

/** Alias (User Manual Name) for OVC5_BLK15_RABR.
 * To use register names with standard convension, please use OVC5_BLK15_RABR.
 */
#define OVC5_RABR15      (OVC5_BLK15_RABR)

/** \\brief  D8, Overlay Mask Register */
#define OVC5_BLK16_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFBD8u)

/** Alias (User Manual Name) for OVC5_BLK16_OMASK.
 * To use register names with standard convension, please use OVC5_BLK16_OMASK.
 */
#define OVC5_OMASK16     (OVC5_BLK16_OMASK)

/** \\brief  D4, Overlay Target Address Register */
#define OVC5_BLK16_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFBD4u)

/** Alias (User Manual Name) for OVC5_BLK16_OTAR.
 * To use register names with standard convension, please use OVC5_BLK16_OTAR.
 */
#define OVC5_OTAR16      (OVC5_BLK16_OTAR)

/** \\brief  D0, Redirected Address Base Register */
#define OVC5_BLK16_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFBD0u)

/** Alias (User Manual Name) for OVC5_BLK16_RABR.
 * To use register names with standard convension, please use OVC5_BLK16_RABR.
 */
#define OVC5_RABR16      (OVC5_BLK16_RABR)

/** \\brief  E4, Overlay Mask Register */
#define OVC5_BLK17_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFBE4u)

/** Alias (User Manual Name) for OVC5_BLK17_OMASK.
 * To use register names with standard convension, please use OVC5_BLK17_OMASK.
 */
#define OVC5_OMASK17     (OVC5_BLK17_OMASK)

/** \\brief  E0, Overlay Target Address Register */
#define OVC5_BLK17_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFBE0u)

/** Alias (User Manual Name) for OVC5_BLK17_OTAR.
 * To use register names with standard convension, please use OVC5_BLK17_OTAR.
 */
#define OVC5_OTAR17      (OVC5_BLK17_OTAR)

/** \\brief  DC, Redirected Address Base Register */
#define OVC5_BLK17_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFBDCu)

/** Alias (User Manual Name) for OVC5_BLK17_RABR.
 * To use register names with standard convension, please use OVC5_BLK17_RABR.
 */
#define OVC5_RABR17      (OVC5_BLK17_RABR)

/** \\brief  F0, Overlay Mask Register */
#define OVC5_BLK18_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFBF0u)

/** Alias (User Manual Name) for OVC5_BLK18_OMASK.
 * To use register names with standard convension, please use OVC5_BLK18_OMASK.
 */
#define OVC5_OMASK18     (OVC5_BLK18_OMASK)

/** \\brief  EC, Overlay Target Address Register */
#define OVC5_BLK18_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFBECu)

/** Alias (User Manual Name) for OVC5_BLK18_OTAR.
 * To use register names with standard convension, please use OVC5_BLK18_OTAR.
 */
#define OVC5_OTAR18      (OVC5_BLK18_OTAR)

/** \\brief  E8, Redirected Address Base Register */
#define OVC5_BLK18_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFBE8u)

/** Alias (User Manual Name) for OVC5_BLK18_RABR.
 * To use register names with standard convension, please use OVC5_BLK18_RABR.
 */
#define OVC5_RABR18      (OVC5_BLK18_RABR)

/** \\brief  FC, Overlay Mask Register */
#define OVC5_BLK19_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFBFCu)

/** Alias (User Manual Name) for OVC5_BLK19_OMASK.
 * To use register names with standard convension, please use OVC5_BLK19_OMASK.
 */
#define OVC5_OMASK19     (OVC5_BLK19_OMASK)

/** \\brief  F8, Overlay Target Address Register */
#define OVC5_BLK19_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFBF8u)

/** Alias (User Manual Name) for OVC5_BLK19_OTAR.
 * To use register names with standard convension, please use OVC5_BLK19_OTAR.
 */
#define OVC5_OTAR19      (OVC5_BLK19_OTAR)

/** \\brief  F4, Redirected Address Base Register */
#define OVC5_BLK19_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFBF4u)

/** Alias (User Manual Name) for OVC5_BLK19_RABR.
 * To use register names with standard convension, please use OVC5_BLK19_RABR.
 */
#define OVC5_RABR19      (OVC5_BLK19_RABR)

/** \\brief  24, Overlay Mask Register */
#define OVC5_BLK1_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB24u)

/** Alias (User Manual Name) for OVC5_BLK1_OMASK.
 * To use register names with standard convension, please use OVC5_BLK1_OMASK.
 */
#define OVC5_OMASK1      (OVC5_BLK1_OMASK)

/** \\brief  20, Overlay Target Address Register */
#define OVC5_BLK1_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB20u)

/** Alias (User Manual Name) for OVC5_BLK1_OTAR.
 * To use register names with standard convension, please use OVC5_BLK1_OTAR.
 */
#define OVC5_OTAR1       (OVC5_BLK1_OTAR)

/** \\brief  1C, Redirected Address Base Register */
#define OVC5_BLK1_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB1Cu)

/** Alias (User Manual Name) for OVC5_BLK1_RABR.
 * To use register names with standard convension, please use OVC5_BLK1_RABR.
 */
#define OVC5_RABR1       (OVC5_BLK1_RABR)

/** \\brief  108, Overlay Mask Register */
#define OVC5_BLK20_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC08u)

/** Alias (User Manual Name) for OVC5_BLK20_OMASK.
 * To use register names with standard convension, please use OVC5_BLK20_OMASK.
 */
#define OVC5_OMASK20     (OVC5_BLK20_OMASK)

/** \\brief  104, Overlay Target Address Register */
#define OVC5_BLK20_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC04u)

/** Alias (User Manual Name) for OVC5_BLK20_OTAR.
 * To use register names with standard convension, please use OVC5_BLK20_OTAR.
 */
#define OVC5_OTAR20      (OVC5_BLK20_OTAR)

/** \\brief  100, Redirected Address Base Register */
#define OVC5_BLK20_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC00u)

/** Alias (User Manual Name) for OVC5_BLK20_RABR.
 * To use register names with standard convension, please use OVC5_BLK20_RABR.
 */
#define OVC5_RABR20      (OVC5_BLK20_RABR)

/** \\brief  114, Overlay Mask Register */
#define OVC5_BLK21_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC14u)

/** Alias (User Manual Name) for OVC5_BLK21_OMASK.
 * To use register names with standard convension, please use OVC5_BLK21_OMASK.
 */
#define OVC5_OMASK21     (OVC5_BLK21_OMASK)

/** \\brief  110, Overlay Target Address Register */
#define OVC5_BLK21_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC10u)

/** Alias (User Manual Name) for OVC5_BLK21_OTAR.
 * To use register names with standard convension, please use OVC5_BLK21_OTAR.
 */
#define OVC5_OTAR21      (OVC5_BLK21_OTAR)

/** \\brief  10C, Redirected Address Base Register */
#define OVC5_BLK21_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC0Cu)

/** Alias (User Manual Name) for OVC5_BLK21_RABR.
 * To use register names with standard convension, please use OVC5_BLK21_RABR.
 */
#define OVC5_RABR21      (OVC5_BLK21_RABR)

/** \\brief  120, Overlay Mask Register */
#define OVC5_BLK22_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC20u)

/** Alias (User Manual Name) for OVC5_BLK22_OMASK.
 * To use register names with standard convension, please use OVC5_BLK22_OMASK.
 */
#define OVC5_OMASK22     (OVC5_BLK22_OMASK)

/** \\brief  11C, Overlay Target Address Register */
#define OVC5_BLK22_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC1Cu)

/** Alias (User Manual Name) for OVC5_BLK22_OTAR.
 * To use register names with standard convension, please use OVC5_BLK22_OTAR.
 */
#define OVC5_OTAR22      (OVC5_BLK22_OTAR)

/** \\brief  118, Redirected Address Base Register */
#define OVC5_BLK22_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC18u)

/** Alias (User Manual Name) for OVC5_BLK22_RABR.
 * To use register names with standard convension, please use OVC5_BLK22_RABR.
 */
#define OVC5_RABR22      (OVC5_BLK22_RABR)

/** \\brief  12C, Overlay Mask Register */
#define OVC5_BLK23_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC2Cu)

/** Alias (User Manual Name) for OVC5_BLK23_OMASK.
 * To use register names with standard convension, please use OVC5_BLK23_OMASK.
 */
#define OVC5_OMASK23     (OVC5_BLK23_OMASK)

/** \\brief  128, Overlay Target Address Register */
#define OVC5_BLK23_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC28u)

/** Alias (User Manual Name) for OVC5_BLK23_OTAR.
 * To use register names with standard convension, please use OVC5_BLK23_OTAR.
 */
#define OVC5_OTAR23      (OVC5_BLK23_OTAR)

/** \\brief  124, Redirected Address Base Register */
#define OVC5_BLK23_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC24u)

/** Alias (User Manual Name) for OVC5_BLK23_RABR.
 * To use register names with standard convension, please use OVC5_BLK23_RABR.
 */
#define OVC5_RABR23      (OVC5_BLK23_RABR)

/** \\brief  138, Overlay Mask Register */
#define OVC5_BLK24_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC38u)

/** Alias (User Manual Name) for OVC5_BLK24_OMASK.
 * To use register names with standard convension, please use OVC5_BLK24_OMASK.
 */
#define OVC5_OMASK24     (OVC5_BLK24_OMASK)

/** \\brief  134, Overlay Target Address Register */
#define OVC5_BLK24_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC34u)

/** Alias (User Manual Name) for OVC5_BLK24_OTAR.
 * To use register names with standard convension, please use OVC5_BLK24_OTAR.
 */
#define OVC5_OTAR24      (OVC5_BLK24_OTAR)

/** \\brief  130, Redirected Address Base Register */
#define OVC5_BLK24_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC30u)

/** Alias (User Manual Name) for OVC5_BLK24_RABR.
 * To use register names with standard convension, please use OVC5_BLK24_RABR.
 */
#define OVC5_RABR24      (OVC5_BLK24_RABR)

/** \\brief  144, Overlay Mask Register */
#define OVC5_BLK25_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC44u)

/** Alias (User Manual Name) for OVC5_BLK25_OMASK.
 * To use register names with standard convension, please use OVC5_BLK25_OMASK.
 */
#define OVC5_OMASK25     (OVC5_BLK25_OMASK)

/** \\brief  140, Overlay Target Address Register */
#define OVC5_BLK25_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC40u)

/** Alias (User Manual Name) for OVC5_BLK25_OTAR.
 * To use register names with standard convension, please use OVC5_BLK25_OTAR.
 */
#define OVC5_OTAR25      (OVC5_BLK25_OTAR)

/** \\brief  13C, Redirected Address Base Register */
#define OVC5_BLK25_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC3Cu)

/** Alias (User Manual Name) for OVC5_BLK25_RABR.
 * To use register names with standard convension, please use OVC5_BLK25_RABR.
 */
#define OVC5_RABR25      (OVC5_BLK25_RABR)

/** \\brief  150, Overlay Mask Register */
#define OVC5_BLK26_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC50u)

/** Alias (User Manual Name) for OVC5_BLK26_OMASK.
 * To use register names with standard convension, please use OVC5_BLK26_OMASK.
 */
#define OVC5_OMASK26     (OVC5_BLK26_OMASK)

/** \\brief  14C, Overlay Target Address Register */
#define OVC5_BLK26_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC4Cu)

/** Alias (User Manual Name) for OVC5_BLK26_OTAR.
 * To use register names with standard convension, please use OVC5_BLK26_OTAR.
 */
#define OVC5_OTAR26      (OVC5_BLK26_OTAR)

/** \\brief  148, Redirected Address Base Register */
#define OVC5_BLK26_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC48u)

/** Alias (User Manual Name) for OVC5_BLK26_RABR.
 * To use register names with standard convension, please use OVC5_BLK26_RABR.
 */
#define OVC5_RABR26      (OVC5_BLK26_RABR)

/** \\brief  15C, Overlay Mask Register */
#define OVC5_BLK27_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC5Cu)

/** Alias (User Manual Name) for OVC5_BLK27_OMASK.
 * To use register names with standard convension, please use OVC5_BLK27_OMASK.
 */
#define OVC5_OMASK27     (OVC5_BLK27_OMASK)

/** \\brief  158, Overlay Target Address Register */
#define OVC5_BLK27_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC58u)

/** Alias (User Manual Name) for OVC5_BLK27_OTAR.
 * To use register names with standard convension, please use OVC5_BLK27_OTAR.
 */
#define OVC5_OTAR27      (OVC5_BLK27_OTAR)

/** \\brief  154, Redirected Address Base Register */
#define OVC5_BLK27_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC54u)

/** Alias (User Manual Name) for OVC5_BLK27_RABR.
 * To use register names with standard convension, please use OVC5_BLK27_RABR.
 */
#define OVC5_RABR27      (OVC5_BLK27_RABR)

/** \\brief  168, Overlay Mask Register */
#define OVC5_BLK28_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC68u)

/** Alias (User Manual Name) for OVC5_BLK28_OMASK.
 * To use register names with standard convension, please use OVC5_BLK28_OMASK.
 */
#define OVC5_OMASK28     (OVC5_BLK28_OMASK)

/** \\brief  164, Overlay Target Address Register */
#define OVC5_BLK28_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC64u)

/** Alias (User Manual Name) for OVC5_BLK28_OTAR.
 * To use register names with standard convension, please use OVC5_BLK28_OTAR.
 */
#define OVC5_OTAR28      (OVC5_BLK28_OTAR)

/** \\brief  160, Redirected Address Base Register */
#define OVC5_BLK28_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC60u)

/** Alias (User Manual Name) for OVC5_BLK28_RABR.
 * To use register names with standard convension, please use OVC5_BLK28_RABR.
 */
#define OVC5_RABR28      (OVC5_BLK28_RABR)

/** \\brief  174, Overlay Mask Register */
#define OVC5_BLK29_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC74u)

/** Alias (User Manual Name) for OVC5_BLK29_OMASK.
 * To use register names with standard convension, please use OVC5_BLK29_OMASK.
 */
#define OVC5_OMASK29     (OVC5_BLK29_OMASK)

/** \\brief  170, Overlay Target Address Register */
#define OVC5_BLK29_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC70u)

/** Alias (User Manual Name) for OVC5_BLK29_OTAR.
 * To use register names with standard convension, please use OVC5_BLK29_OTAR.
 */
#define OVC5_OTAR29      (OVC5_BLK29_OTAR)

/** \\brief  16C, Redirected Address Base Register */
#define OVC5_BLK29_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC6Cu)

/** Alias (User Manual Name) for OVC5_BLK29_RABR.
 * To use register names with standard convension, please use OVC5_BLK29_RABR.
 */
#define OVC5_RABR29      (OVC5_BLK29_RABR)

/** \\brief  30, Overlay Mask Register */
#define OVC5_BLK2_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB30u)

/** Alias (User Manual Name) for OVC5_BLK2_OMASK.
 * To use register names with standard convension, please use OVC5_BLK2_OMASK.
 */
#define OVC5_OMASK2      (OVC5_BLK2_OMASK)

/** \\brief  2C, Overlay Target Address Register */
#define OVC5_BLK2_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB2Cu)

/** Alias (User Manual Name) for OVC5_BLK2_OTAR.
 * To use register names with standard convension, please use OVC5_BLK2_OTAR.
 */
#define OVC5_OTAR2       (OVC5_BLK2_OTAR)

/** \\brief  28, Redirected Address Base Register */
#define OVC5_BLK2_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB28u)

/** Alias (User Manual Name) for OVC5_BLK2_RABR.
 * To use register names with standard convension, please use OVC5_BLK2_RABR.
 */
#define OVC5_RABR2       (OVC5_BLK2_RABR)

/** \\brief  180, Overlay Mask Register */
#define OVC5_BLK30_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC80u)

/** Alias (User Manual Name) for OVC5_BLK30_OMASK.
 * To use register names with standard convension, please use OVC5_BLK30_OMASK.
 */
#define OVC5_OMASK30     (OVC5_BLK30_OMASK)

/** \\brief  17C, Overlay Target Address Register */
#define OVC5_BLK30_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC7Cu)

/** Alias (User Manual Name) for OVC5_BLK30_OTAR.
 * To use register names with standard convension, please use OVC5_BLK30_OTAR.
 */
#define OVC5_OTAR30      (OVC5_BLK30_OTAR)

/** \\brief  178, Redirected Address Base Register */
#define OVC5_BLK30_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC78u)

/** Alias (User Manual Name) for OVC5_BLK30_RABR.
 * To use register names with standard convension, please use OVC5_BLK30_RABR.
 */
#define OVC5_RABR30      (OVC5_BLK30_RABR)

/** \\brief  18C, Overlay Mask Register */
#define OVC5_BLK31_OMASK /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFC8Cu)

/** Alias (User Manual Name) for OVC5_BLK31_OMASK.
 * To use register names with standard convension, please use OVC5_BLK31_OMASK.
 */
#define OVC5_OMASK31     (OVC5_BLK31_OMASK)

/** \\brief  188, Overlay Target Address Register */
#define OVC5_BLK31_OTAR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFC88u)

/** Alias (User Manual Name) for OVC5_BLK31_OTAR.
 * To use register names with standard convension, please use OVC5_BLK31_OTAR.
 */
#define OVC5_OTAR31      (OVC5_BLK31_OTAR)

/** \\brief  184, Redirected Address Base Register */
#define OVC5_BLK31_RABR  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFC84u)

/** Alias (User Manual Name) for OVC5_BLK31_RABR.
 * To use register names with standard convension, please use OVC5_BLK31_RABR.
 */
#define OVC5_RABR31      (OVC5_BLK31_RABR)

/** \\brief  3C, Overlay Mask Register */
#define OVC5_BLK3_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB3Cu)

/** Alias (User Manual Name) for OVC5_BLK3_OMASK.
 * To use register names with standard convension, please use OVC5_BLK3_OMASK.
 */
#define OVC5_OMASK3      (OVC5_BLK3_OMASK)

/** \\brief  38, Overlay Target Address Register */
#define OVC5_BLK3_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB38u)

/** Alias (User Manual Name) for OVC5_BLK3_OTAR.
 * To use register names with standard convension, please use OVC5_BLK3_OTAR.
 */
#define OVC5_OTAR3       (OVC5_BLK3_OTAR)

/** \\brief  34, Redirected Address Base Register */
#define OVC5_BLK3_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB34u)

/** Alias (User Manual Name) for OVC5_BLK3_RABR.
 * To use register names with standard convension, please use OVC5_BLK3_RABR.
 */
#define OVC5_RABR3       (OVC5_BLK3_RABR)

/** \\brief  48, Overlay Mask Register */
#define OVC5_BLK4_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB48u)

/** Alias (User Manual Name) for OVC5_BLK4_OMASK.
 * To use register names with standard convension, please use OVC5_BLK4_OMASK.
 */
#define OVC5_OMASK4      (OVC5_BLK4_OMASK)

/** \\brief  44, Overlay Target Address Register */
#define OVC5_BLK4_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB44u)

/** Alias (User Manual Name) for OVC5_BLK4_OTAR.
 * To use register names with standard convension, please use OVC5_BLK4_OTAR.
 */
#define OVC5_OTAR4       (OVC5_BLK4_OTAR)

/** \\brief  40, Redirected Address Base Register */
#define OVC5_BLK4_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB40u)

/** Alias (User Manual Name) for OVC5_BLK4_RABR.
 * To use register names with standard convension, please use OVC5_BLK4_RABR.
 */
#define OVC5_RABR4       (OVC5_BLK4_RABR)

/** \\brief  54, Overlay Mask Register */
#define OVC5_BLK5_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB54u)

/** Alias (User Manual Name) for OVC5_BLK5_OMASK.
 * To use register names with standard convension, please use OVC5_BLK5_OMASK.
 */
#define OVC5_OMASK5      (OVC5_BLK5_OMASK)

/** \\brief  50, Overlay Target Address Register */
#define OVC5_BLK5_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB50u)

/** Alias (User Manual Name) for OVC5_BLK5_OTAR.
 * To use register names with standard convension, please use OVC5_BLK5_OTAR.
 */
#define OVC5_OTAR5       (OVC5_BLK5_OTAR)

/** \\brief  4C, Redirected Address Base Register */
#define OVC5_BLK5_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB4Cu)

/** Alias (User Manual Name) for OVC5_BLK5_RABR.
 * To use register names with standard convension, please use OVC5_BLK5_RABR.
 */
#define OVC5_RABR5       (OVC5_BLK5_RABR)

/** \\brief  60, Overlay Mask Register */
#define OVC5_BLK6_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB60u)

/** Alias (User Manual Name) for OVC5_BLK6_OMASK.
 * To use register names with standard convension, please use OVC5_BLK6_OMASK.
 */
#define OVC5_OMASK6      (OVC5_BLK6_OMASK)

/** \\brief  5C, Overlay Target Address Register */
#define OVC5_BLK6_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB5Cu)

/** Alias (User Manual Name) for OVC5_BLK6_OTAR.
 * To use register names with standard convension, please use OVC5_BLK6_OTAR.
 */
#define OVC5_OTAR6       (OVC5_BLK6_OTAR)

/** \\brief  58, Redirected Address Base Register */
#define OVC5_BLK6_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB58u)

/** Alias (User Manual Name) for OVC5_BLK6_RABR.
 * To use register names with standard convension, please use OVC5_BLK6_RABR.
 */
#define OVC5_RABR6       (OVC5_BLK6_RABR)

/** \\brief  6C, Overlay Mask Register */
#define OVC5_BLK7_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB6Cu)

/** Alias (User Manual Name) for OVC5_BLK7_OMASK.
 * To use register names with standard convension, please use OVC5_BLK7_OMASK.
 */
#define OVC5_OMASK7      (OVC5_BLK7_OMASK)

/** \\brief  68, Overlay Target Address Register */
#define OVC5_BLK7_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB68u)

/** Alias (User Manual Name) for OVC5_BLK7_OTAR.
 * To use register names with standard convension, please use OVC5_BLK7_OTAR.
 */
#define OVC5_OTAR7       (OVC5_BLK7_OTAR)

/** \\brief  64, Redirected Address Base Register */
#define OVC5_BLK7_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB64u)

/** Alias (User Manual Name) for OVC5_BLK7_RABR.
 * To use register names with standard convension, please use OVC5_BLK7_RABR.
 */
#define OVC5_RABR7       (OVC5_BLK7_RABR)

/** \\brief  78, Overlay Mask Register */
#define OVC5_BLK8_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB78u)

/** Alias (User Manual Name) for OVC5_BLK8_OMASK.
 * To use register names with standard convension, please use OVC5_BLK8_OMASK.
 */
#define OVC5_OMASK8      (OVC5_BLK8_OMASK)

/** \\brief  74, Overlay Target Address Register */
#define OVC5_BLK8_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB74u)

/** Alias (User Manual Name) for OVC5_BLK8_OTAR.
 * To use register names with standard convension, please use OVC5_BLK8_OTAR.
 */
#define OVC5_OTAR8       (OVC5_BLK8_OTAR)

/** \\brief  70, Redirected Address Base Register */
#define OVC5_BLK8_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB70u)

/** Alias (User Manual Name) for OVC5_BLK8_RABR.
 * To use register names with standard convension, please use OVC5_BLK8_RABR.
 */
#define OVC5_RABR8       (OVC5_BLK8_RABR)

/** \\brief  84, Overlay Mask Register */
#define OVC5_BLK9_OMASK  /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OMASK *)0xF88CFB84u)

/** Alias (User Manual Name) for OVC5_BLK9_OMASK.
 * To use register names with standard convension, please use OVC5_BLK9_OMASK.
 */
#define OVC5_OMASK9      (OVC5_BLK9_OMASK)

/** \\brief  80, Overlay Target Address Register */
#define OVC5_BLK9_OTAR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_OTAR *)0xF88CFB80u)

/** Alias (User Manual Name) for OVC5_BLK9_OTAR.
 * To use register names with standard convension, please use OVC5_BLK9_OTAR.
 */
#define OVC5_OTAR9       (OVC5_BLK9_OTAR)

/** \\brief  7C, Redirected Address Base Register */
#define OVC5_BLK9_RABR   /*lint --e(923)*/ (*(volatile Ifx_OVC_BLK_RABR *)0xF88CFB7Cu)

/** Alias (User Manual Name) for OVC5_BLK9_RABR.
 * To use register names with standard convension, please use OVC5_BLK9_RABR.
 */
#define OVC5_RABR9       (OVC5_BLK9_RABR)

/** \\brief  0, Overlay Range Select Register */
#define OVC5_OSEL        /*lint --e(923)*/ (*(volatile Ifx_OVC_OSEL *)0xF88CFB00u)
/** \}  */
/******************************************************************************/

#endif /* IFXOVC_REG_H */
