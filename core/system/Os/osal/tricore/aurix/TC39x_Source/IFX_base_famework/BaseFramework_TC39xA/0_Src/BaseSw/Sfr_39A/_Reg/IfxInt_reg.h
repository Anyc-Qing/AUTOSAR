/**
 * \file IfxInt_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: TC39xA_INT_ITS_MCSFR.xml
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
 * \defgroup IfxLld_Int_Cfg Int address
 * \ingroup IfxLld_Int
 * 
 * \defgroup IfxLld_Int_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Int_Cfg
 * 
 * \defgroup IfxLld_Int_Cfg_Int 2-INT
 * \ingroup IfxLld_Int_Cfg
 * 
 */
#ifndef IFXINT_REG_H
#define IFXINT_REG_H 1
/******************************************************************************/
#include "IfxInt_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Int_Cfg_BaseAddress
 * \{  */

/** \brief  Interrupt router object */
#define MODULE_INT /*lint --e(923)*/ (*(Ifx_INT*)0xF0037000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Int_Cfg_Int
 * \{  */

/** \brief  F0, Access Enable CONFIG, Register 0 */
#define INT_ACCEN_CONFIG0 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_CONFIG0*)0xF00370F0u)

/** \brief  F4, Access Enable CONFIG, Register 1 */
#define INT_ACCEN_CONFIG1 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_CONFIG1*)0xF00370F4u)

/** \brief  100, Access Enable SRB0, Register 0 */
#define INT_ACCEN_SRB00 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB00*)0xF0037100u)

/** \brief  104, Access Enable SRB0, Register 1 */
#define INT_ACCEN_SRB01 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB01*)0xF0037104u)

/** \brief  108, Access Enable SRB1, Register 0 */
#define INT_ACCEN_SRB10 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB10*)0xF0037108u)

/** \brief  10C, Access Enable SRB1, Register 1 */
#define INT_ACCEN_SRB11 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB11*)0xF003710Cu)

/** \brief  110, Access Enable SRB2, Register 0 */
#define INT_ACCEN_SRB20 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB20*)0xF0037110u)

/** \brief  114, Access Enable SRB2, Register 1 */
#define INT_ACCEN_SRB21 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB21*)0xF0037114u)

/** \brief  118, Access Enable SRB3, Register 0 */
#define INT_ACCEN_SRB30 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB30*)0xF0037118u)

/** \brief  11C, Access Enable SRB3, Register 1 */
#define INT_ACCEN_SRB31 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB31*)0xF003711Cu)

/** \brief  120, Access Enable SRB4, Register 0 */
#define INT_ACCEN_SRB40 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB40*)0xF0037120u)

/** \brief  124, Access Enable SRB4, Register 1 */
#define INT_ACCEN_SRB41 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB41*)0xF0037124u)

/** \brief  128, Access Enable SRB5, Register 0 */
#define INT_ACCEN_SRB50 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB50*)0xF0037128u)

/** \brief  12C, Access Enable SRB5, Register 1 */
#define INT_ACCEN_SRB51 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRB51*)0xF003712Cu)

/** \brief  180, Access Enable SRC[31:16] TOS0, Register 0 */
#define INT_ACCEN_SRC_TOS00 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS00*)0xF0037180u)

/** \brief  184, Access Enable SRC[15:0] TOS0, Register 1 */
#define INT_ACCEN_SRC_TOS01 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS01*)0xF0037184u)

/** \brief  188, Access Enable SRC[31:16] TOS1, Register 0 */
#define INT_ACCEN_SRC_TOS10 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS10*)0xF0037188u)

/** \brief  18C, Access Enable SRC[15:0] TOS1, Register 1 */
#define INT_ACCEN_SRC_TOS11 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS11*)0xF003718Cu)

/** \brief  190, Access Enable SRC[31:16] TOS2, Register 0 */
#define INT_ACCEN_SRC_TOS20 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS20*)0xF0037190u)

/** \brief  194, Access Enable SRC[15:0] TOS2, Register 1 */
#define INT_ACCEN_SRC_TOS21 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS21*)0xF0037194u)

/** \brief  198, Access Enable SRC[31:16] TOS3, Register 0 */
#define INT_ACCEN_SRC_TOS30 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS30*)0xF0037198u)

/** \brief  19C, Access Enable SRC[15:0] TOS3, Register 1 */
#define INT_ACCEN_SRC_TOS31 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS31*)0xF003719Cu)

/** \brief  1A0, Access Enable SRC[31:16] TOS4, Register 0 */
#define INT_ACCEN_SRC_TOS40 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS40*)0xF00371A0u)

/** \brief  1A4, Access Enable SRC[15:0] TOS4, Register 1 */
#define INT_ACCEN_SRC_TOS41 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS41*)0xF00371A4u)

/** \brief  1A8, Access Enable SRC[31:16] TOS5, Register 0 */
#define INT_ACCEN_SRC_TOS50 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS50*)0xF00371A8u)

/** \brief  1AC, Access Enable SRC[15:0] TOS5, Register 1 */
#define INT_ACCEN_SRC_TOS51 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS51*)0xF00371ACu)

/** \brief  1B0, Access Enable SRC[31:16] TOS6, Register 0 */
#define INT_ACCEN_SRC_TOS60 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS60*)0xF00371B0u)

/** \brief  1B4, Access Enable SRC[15:0] TOS6, Register 1 */
#define INT_ACCEN_SRC_TOS61 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS61*)0xF00371B4u)

/** \brief  1B8, Access Enable SRC[31:16] TOS7, Register 0 */
#define INT_ACCEN_SRC_TOS70 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS70*)0xF00371B8u)

/** \brief  1BC, Access Enable SRC[15:0] TOS7, Register 1 */
#define INT_ACCEN_SRC_TOS71 /*lint --e(923)*/ (*(volatile Ifx_INT_ACCEN_SRC_TOS71*)0xF00371BCu)

/** \brief  208, Error Capture Register */
#define INT_CH0_ECR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR*)0xF0037208u)

/** Alias (User Manual Name) for INT_CH0_ECR.
* To use register names with standard convension, please use INT_CH0_ECR.
*/
#define	INT_ECR0	(INT_CH0_ECR)

/** \brief  204, Last Acknowledged Service Request Register */
#define INT_CH0_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR*)0xF0037204u)

/** Alias (User Manual Name) for INT_CH0_LASR.
* To use register names with standard convension, please use INT_CH0_LASR.
*/
#define	INT_LASR0	(INT_CH0_LASR)

/** \brief  200, Latest Winning Service Request Register */
#define INT_CH0_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR*)0xF0037200u)

/** Alias (User Manual Name) for INT_CH0_LWSR.
* To use register names with standard convension, please use INT_CH0_LWSR.
*/
#define	INT_LWSR0	(INT_CH0_LWSR)

/** \brief  218, Error Capture Register */
#define INT_CH1_ECR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR*)0xF0037218u)

/** Alias (User Manual Name) for INT_CH1_ECR.
* To use register names with standard convension, please use INT_CH1_ECR.
*/
#define	INT_ECR1	(INT_CH1_ECR)

/** \brief  214, Last Acknowledged Service Request Register */
#define INT_CH1_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR*)0xF0037214u)

/** Alias (User Manual Name) for INT_CH1_LASR.
* To use register names with standard convension, please use INT_CH1_LASR.
*/
#define	INT_LASR1	(INT_CH1_LASR)

/** \brief  210, Latest Winning Service Request Register */
#define INT_CH1_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR*)0xF0037210u)

/** Alias (User Manual Name) for INT_CH1_LWSR.
* To use register names with standard convension, please use INT_CH1_LWSR.
*/
#define	INT_LWSR1	(INT_CH1_LWSR)

/** \brief  228, Error Capture Register */
#define INT_CH2_ECR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR*)0xF0037228u)

/** Alias (User Manual Name) for INT_CH2_ECR.
* To use register names with standard convension, please use INT_CH2_ECR.
*/
#define	INT_ECR2	(INT_CH2_ECR)

/** \brief  224, Last Acknowledged Service Request Register */
#define INT_CH2_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR*)0xF0037224u)

/** Alias (User Manual Name) for INT_CH2_LASR.
* To use register names with standard convension, please use INT_CH2_LASR.
*/
#define	INT_LASR2	(INT_CH2_LASR)

/** \brief  220, Latest Winning Service Request Register */
#define INT_CH2_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR*)0xF0037220u)

/** Alias (User Manual Name) for INT_CH2_LWSR.
* To use register names with standard convension, please use INT_CH2_LWSR.
*/
#define	INT_LWSR2	(INT_CH2_LWSR)

/** \brief  238, Error Capture Register */
#define INT_CH3_ECR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR*)0xF0037238u)

/** Alias (User Manual Name) for INT_CH3_ECR.
* To use register names with standard convension, please use INT_CH3_ECR.
*/
#define	INT_ECR3	(INT_CH3_ECR)

/** \brief  234, Last Acknowledged Service Request Register */
#define INT_CH3_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR*)0xF0037234u)

/** Alias (User Manual Name) for INT_CH3_LASR.
* To use register names with standard convension, please use INT_CH3_LASR.
*/
#define	INT_LASR3	(INT_CH3_LASR)

/** \brief  230, Latest Winning Service Request Register */
#define INT_CH3_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR*)0xF0037230u)

/** Alias (User Manual Name) for INT_CH3_LWSR.
* To use register names with standard convension, please use INT_CH3_LWSR.
*/
#define	INT_LWSR3	(INT_CH3_LWSR)

/** \brief  248, Error Capture Register */
#define INT_CH4_ECR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR*)0xF0037248u)

/** Alias (User Manual Name) for INT_CH4_ECR.
* To use register names with standard convension, please use INT_CH4_ECR.
*/
#define	INT_ECR4	(INT_CH4_ECR)

/** \brief  244, Last Acknowledged Service Request Register */
#define INT_CH4_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR*)0xF0037244u)

/** Alias (User Manual Name) for INT_CH4_LASR.
* To use register names with standard convension, please use INT_CH4_LASR.
*/
#define	INT_LASR4	(INT_CH4_LASR)

/** \brief  240, Latest Winning Service Request Register */
#define INT_CH4_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR*)0xF0037240u)

/** Alias (User Manual Name) for INT_CH4_LWSR.
* To use register names with standard convension, please use INT_CH4_LWSR.
*/
#define	INT_LWSR4	(INT_CH4_LWSR)

/** \brief  258, Error Capture Register */
#define INT_CH5_ECR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR*)0xF0037258u)

/** Alias (User Manual Name) for INT_CH5_ECR.
* To use register names with standard convension, please use INT_CH5_ECR.
*/
#define	INT_ECR5	(INT_CH5_ECR)

/** \brief  254, Last Acknowledged Service Request Register */
#define INT_CH5_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR*)0xF0037254u)

/** Alias (User Manual Name) for INT_CH5_LASR.
* To use register names with standard convension, please use INT_CH5_LASR.
*/
#define	INT_LASR5	(INT_CH5_LASR)

/** \brief  250, Latest Winning Service Request Register */
#define INT_CH5_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR*)0xF0037250u)

/** Alias (User Manual Name) for INT_CH5_LWSR.
* To use register names with standard convension, please use INT_CH5_LWSR.
*/
#define	INT_LWSR5	(INT_CH5_LWSR)

/** \brief  268, Error Capture Register */
#define INT_CH6_ECR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR*)0xF0037268u)

/** Alias (User Manual Name) for INT_CH6_ECR.
* To use register names with standard convension, please use INT_CH6_ECR.
*/
#define	INT_ECR6	(INT_CH6_ECR)

/** \brief  264, Last Acknowledged Service Request Register */
#define INT_CH6_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR*)0xF0037264u)

/** Alias (User Manual Name) for INT_CH6_LASR.
* To use register names with standard convension, please use INT_CH6_LASR.
*/
#define	INT_LASR6	(INT_CH6_LASR)

/** \brief  260, Latest Winning Service Request Register */
#define INT_CH6_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR*)0xF0037260u)

/** Alias (User Manual Name) for INT_CH6_LWSR.
* To use register names with standard convension, please use INT_CH6_LWSR.
*/
#define	INT_LWSR6	(INT_CH6_LWSR)

/** \brief  278, Error Capture Register */
#define INT_CH7_ECR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_ECR*)0xF0037278u)

/** Alias (User Manual Name) for INT_CH7_ECR.
* To use register names with standard convension, please use INT_CH7_ECR.
*/
#define	INT_ECR7	(INT_CH7_ECR)

/** \brief  274, Last Acknowledged Service Request Register */
#define INT_CH7_LASR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LASR*)0xF0037274u)

/** Alias (User Manual Name) for INT_CH7_LASR.
* To use register names with standard convension, please use INT_CH7_LASR.
*/
#define	INT_LASR7	(INT_CH7_LASR)

/** \brief  270, Latest Winning Service Request Register */
#define INT_CH7_LWSR /*lint --e(923)*/ (*(volatile Ifx_INT_ICU_LWSR*)0xF0037270u)

/** Alias (User Manual Name) for INT_CH7_LWSR.
* To use register names with standard convension, please use INT_CH7_LWSR.
*/
#define	INT_LWSR7	(INT_CH7_LWSR)

/** \brief  8, Module Identification Register */
#define INT_ID /*lint --e(923)*/ (*(volatile Ifx_INT_ID*)0xF0037008u)

/** \brief  A0, OTGM IRQ Trace */
#define INT_OIT /*lint --e(923)*/ (*(volatile Ifx_INT_OIT*)0xF00370A0u)

/** \brief  8C, OTGM IRQ MUX Missed IRQ Select */
#define INT_OIXMS /*lint --e(923)*/ (*(volatile Ifx_INT_OIXMS*)0xF003708Cu)

/** \brief  90, OTGM IRQ MUX Select 0 */
#define INT_OIXS0 /*lint --e(923)*/ (*(volatile Ifx_INT_OIXS0*)0xF0037090u)

/** \brief  94, OTGM IRQ MUX Select 1 */
#define INT_OIXS1 /*lint --e(923)*/ (*(volatile Ifx_INT_OIXS1*)0xF0037094u)

/** \brief  88, OTGM IRQ MUX Trigger Set Select */
#define INT_OIXTS /*lint --e(923)*/ (*(volatile Ifx_INT_OIXTS*)0xF0037088u)

/** \brief  A8, OTGM MCDS I/F Sensitivity Negedge */
#define INT_OMISN /*lint --e(923)*/ (*(volatile Ifx_INT_OMISN*)0xF00370A8u)

/** \brief  A4, OTGM MCDS I/F Sensitivity Posedge */
#define INT_OMISP /*lint --e(923)*/ (*(volatile Ifx_INT_OMISP*)0xF00370A4u)

/** \brief  80, OTGM OTGB0/1 Status */
#define INT_OOBS /*lint --e(923)*/ (*(volatile Ifx_INT_OOBS*)0xF0037080u)

/** \brief  84, OTGM SSI Control */
#define INT_OSSIC /*lint --e(923)*/ (*(volatile Ifx_INT_OSSIC*)0xF0037084u)

/** \brief  10, Service Request Broadcast Register 0 */
#define INT_SRB0 /*lint --e(923)*/ (*(volatile Ifx_INT_SRB*)0xF0037010u)

/** \brief  14, Service Request Broadcast Register 0 */
#define INT_SRB1 /*lint --e(923)*/ (*(volatile Ifx_INT_SRB*)0xF0037014u)

/** \brief  18, Service Request Broadcast Register 0 */
#define INT_SRB2 /*lint --e(923)*/ (*(volatile Ifx_INT_SRB*)0xF0037018u)

/** \brief  1C, Service Request Broadcast Register 0 */
#define INT_SRB3 /*lint --e(923)*/ (*(volatile Ifx_INT_SRB*)0xF003701Cu)

/** \brief  20, Service Request Broadcast Register 0 */
#define INT_SRB4 /*lint --e(923)*/ (*(volatile Ifx_INT_SRB*)0xF0037020u)

/** \brief  24, Service Request Broadcast Register 0 */
#define INT_SRB5 /*lint --e(923)*/ (*(volatile Ifx_INT_SRB*)0xF0037024u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXINT_REG_H */
