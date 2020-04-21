/**
 * \file IfxDmu_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC39XA_ITS_V3.0.R0
 * Specification: DMU_AURIXTC3XX_its_MCSFR.xml
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
 * \defgroup IfxLld_Dmu_Cfg Dmu address
 * \ingroup IfxLld_Dmu
 * 
 * \defgroup IfxLld_Dmu_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Dmu_Cfg
 * 
 * \defgroup IfxLld_Dmu_Cfg_Dmu 2-DMU
 * \ingroup IfxLld_Dmu_Cfg
 * 
 */
#ifndef IFXDMU_REG_H
#define IFXDMU_REG_H 1
/******************************************************************************/
#include "IfxDmu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Dmu_Cfg_BaseAddress
 * \{  */

/** \brief  DMU object */
#define MODULE_DMU /*lint --e(923)*/ (*(Ifx_DMU*)0xF8040000u)
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Dmu_Cfg_Dmu
 * \{  */

/** \brief  FC, Access Enable Register 0 */
#define DMU_HF_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_ACCEN0*)0xF80400FCu)

/** \brief  F8, Access Enable Register 1 */
#define DMU_HF_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_ACCEN1*)0xF80400F8u)

/** \brief  50, Cranking Control Register */
#define DMU_HF_CCONTROL /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_CCONTROL*)0xF8040050u)

/** \brief  38, Clear Error Register */
#define DMU_HF_CLRE /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_CLRE*)0xF8040038u)

/** \brief  20, Flash Confirm Status Register 0 */
#define DMU_HF_CONFIRM0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_CONFIRM0*)0xF8040020u)

/** \brief  24, Flash Confirm Status Register 1 */
#define DMU_HF_CONFIRM1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_CONFIRM1*)0xF8040024u)

/** \brief  28, Flash Confirm Status Register 2 */
#define DMU_HF_CONFIRM2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_CONFIRM2*)0xF8040028u)

/** \brief  14, Flash Control Register */
#define DMU_HF_CONTROL /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_CONTROL*)0xF8040014u)

/** \brief  A0, DFLASH Size Configuration Register */
#define DMU_HF_DSIZE /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_DSIZE*)0xF80400A0u)

/** \brief  6C, DFLASH Wait Cycle Register */
#define DMU_HF_DWAIT /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_DWAIT*)0xF804006Cu)

/** \brief  48, DF0 ECC Control Register */
#define DMU_HF_ECCC /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_ECCC*)0xF8040048u)

/** \brief  40, DF0 ECC Read Register */
#define DMU_HF_ECCR /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_ECCR*)0xF8040040u)

/** \brief  44, DF0 ECC Status Register */
#define DMU_HF_ECCS /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_ECCS*)0xF8040044u)

/** \brief  4C, DF0 ECC Write Register */
#define DMU_HF_ECCW /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_ECCW*)0xF804004Cu)

/** \brief  30, Enable Error Interrupt Control Register */
#define DMU_HF_EER /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_EER*)0xF8040030u)

/** \brief  34, Error Status Register */
#define DMU_HF_ERRSR /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_ERRSR*)0xF8040034u)

/** \brief  8, Module Identification Register */
#define DMU_HF_ID /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_ID*)0xF8040008u)

/** \brief  F4, Margin Control Register */
#define DMU_HF_MARGIN /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_MARGIN*)0xF80400F4u)

/** \brief  18, Flash Operation Register */
#define DMU_HF_OPERATION /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_OPERATION*)0xF8040018u)

/** \brief  64, Power Control Register */
#define DMU_HF_PCONTROL /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PCONTROL*)0xF8040064u)

/** \brief  90, Debug Interface Protection Configuration */
#define DMU_HF_PROCONDBG /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PROCONDBG*)0xF8040090u)

/** \brief  88, DFLASH Protection Configuration */
#define DMU_HF_PROCONDF /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PROCONDF*)0xF8040088u)

/** \brief  80, PFLASH Protection Configuration */
#define DMU_HF_PROCONPF /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PROCONPF*)0xF8040080u)

/** \brief  8C, RAM Configuration */
#define DMU_HF_PROCONRAM /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PROCONRAM*)0xF804008Cu)

/** \brief  84, Tuning Protection Configuration */
#define DMU_HF_PROCONTP /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PROCONTP*)0xF8040084u)

/** \brief  74, DF0 User Mode Control */
#define DMU_HF_PROCONUSR /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PROCONUSR*)0xF8040074u)

/** \brief  1C, Flash Protection Status Register */
#define DMU_HF_PROTECT /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PROTECT*)0xF804001Cu)

/** \brief  B0, PFLASH Bank Size Configuration Register */
#define DMU_HF_PSIZE0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PSIZE*)0xF80400B0u)

/** \brief  B4, PFLASH Bank Size Configuration Register */
#define DMU_HF_PSIZE1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PSIZE*)0xF80400B4u)

/** \brief  B8, PFLASH Bank Size Configuration Register */
#define DMU_HF_PSIZE2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PSIZE*)0xF80400B8u)

/** \brief  BC, PFLASH Bank Size Configuration Register */
#define DMU_HF_PSIZE3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PSIZE*)0xF80400BCu)

/** \brief  C0, PFLASH Bank Size Configuration Register */
#define DMU_HF_PSIZE4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PSIZE*)0xF80400C0u)

/** \brief  C4, PFLASH Bank Size Configuration Register */
#define DMU_HF_PSIZE5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PSIZE*)0xF80400C4u)

/** \brief  60, Power Status Register */
#define DMU_HF_PSTATUS /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PSTATUS*)0xF8040060u)

/** \brief  68, PFLASH Wait Cycle Register */
#define DMU_HF_PWAIT /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_PWAIT*)0xF8040068u)

/** \brief  10, Flash Status Register */
#define DMU_HF_STATUS /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_STATUS*)0xF8040010u)

/** \brief  F0, Suspend Control Register */
#define DMU_HF_SUSPEND /*lint --e(923)*/ (*(volatile Ifx_DMU_HF_SUSPEND*)0xF80400F0u)

/** \brief  10040, PFLASH Bank OTP Protection Configuration 0 */
#define DMU_HP_PROCON0_OTP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP0*)0xF8050040u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_OTP0.
* To use register names with standard convension, please use DMU_HP_PROCON0_OTP0.
*/
#define	DMU_HP_PROCONOTP00	(DMU_HP_PROCON0_OTP0)

/** \brief  10044, PFLASH Bank OTP Protection Configuration 1 */
#define DMU_HP_PROCON0_OTP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP1*)0xF8050044u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_OTP1.
* To use register names with standard convension, please use DMU_HP_PROCON0_OTP1.
*/
#define	DMU_HP_PROCONOTP01	(DMU_HP_PROCON0_OTP1)

/** \brief  10048, PFLASH Bank OTP Protection Configuration 2 */
#define DMU_HP_PROCON0_OTP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP2*)0xF8050048u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_OTP2.
* To use register names with standard convension, please use DMU_HP_PROCON0_OTP2.
*/
#define	DMU_HP_PROCONOTP02	(DMU_HP_PROCON0_OTP2)

/** \brief  1004C, PFLASH Bank OTP Protection Configuration 3 */
#define DMU_HP_PROCON0_OTP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP3*)0xF805004Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON0_OTP3.
* To use register names with standard convension, please use DMU_HP_PROCON0_OTP3.
*/
#define	DMU_HP_PROCONOTP03	(DMU_HP_PROCON0_OTP3)

/** \brief  10050, PFLASH Bank OTP Protection Configuration 4 */
#define DMU_HP_PROCON0_OTP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP4*)0xF8050050u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_OTP4.
* To use register names with standard convension, please use DMU_HP_PROCON0_OTP4.
*/
#define	DMU_HP_PROCONOTP04	(DMU_HP_PROCON0_OTP4)

/** \brief  10054, PFLASH Bank OTP Protection Configuration 5 */
#define DMU_HP_PROCON0_OTP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP5*)0xF8050054u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_OTP5.
* To use register names with standard convension, please use DMU_HP_PROCON0_OTP5.
*/
#define	DMU_HP_PROCONOTP05	(DMU_HP_PROCON0_OTP5)

/** \brief  10000, PFLASH Bank Protection Configuration 0 */
#define DMU_HP_PROCON0_P0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P0*)0xF8050000u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_P0.
* To use register names with standard convension, please use DMU_HP_PROCON0_P0.
*/
#define	DMU_HP_PROCONP00	(DMU_HP_PROCON0_P0)

/** \brief  10004, PFLASH Bank Protection Configuration 1 */
#define DMU_HP_PROCON0_P1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P1*)0xF8050004u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_P1.
* To use register names with standard convension, please use DMU_HP_PROCON0_P1.
*/
#define	DMU_HP_PROCONP01	(DMU_HP_PROCON0_P1)

/** \brief  10008, PFLASH Bank Protection Configuration 2 */
#define DMU_HP_PROCON0_P2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P2*)0xF8050008u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_P2.
* To use register names with standard convension, please use DMU_HP_PROCON0_P2.
*/
#define	DMU_HP_PROCONP02	(DMU_HP_PROCON0_P2)

/** \brief  1000C, PFLASH Bank Protection Configuration 3 */
#define DMU_HP_PROCON0_P3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P3*)0xF805000Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON0_P3.
* To use register names with standard convension, please use DMU_HP_PROCON0_P3.
*/
#define	DMU_HP_PROCONP03	(DMU_HP_PROCON0_P3)

/** \brief  10010, PFLASH Bank Protection Configuration 4 */
#define DMU_HP_PROCON0_P4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P4*)0xF8050010u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_P4.
* To use register names with standard convension, please use DMU_HP_PROCON0_P4.
*/
#define	DMU_HP_PROCONP04	(DMU_HP_PROCON0_P4)

/** \brief  10014, PFLASH Bank Protection Configuration 5 */
#define DMU_HP_PROCON0_P5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P5*)0xF8050014u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_P5.
* To use register names with standard convension, please use DMU_HP_PROCON0_P5.
*/
#define	DMU_HP_PROCONP05	(DMU_HP_PROCON0_P5)

/** \brief  10080, PFLASH Bank WOP Configuration 0 */
#define DMU_HP_PROCON0_WOP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP0*)0xF8050080u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_WOP0.
* To use register names with standard convension, please use DMU_HP_PROCON0_WOP0.
*/
#define	DMU_HP_PROCONWOP00	(DMU_HP_PROCON0_WOP0)

/** \brief  10084, PFLASH Bank WOP Configuration 1 */
#define DMU_HP_PROCON0_WOP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP1*)0xF8050084u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_WOP1.
* To use register names with standard convension, please use DMU_HP_PROCON0_WOP1.
*/
#define	DMU_HP_PROCONWOP01	(DMU_HP_PROCON0_WOP1)

/** \brief  10088, PFLASH Bank WOP Configuration 2 */
#define DMU_HP_PROCON0_WOP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP2*)0xF8050088u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_WOP2.
* To use register names with standard convension, please use DMU_HP_PROCON0_WOP2.
*/
#define	DMU_HP_PROCONWOP02	(DMU_HP_PROCON0_WOP2)

/** \brief  1008C, PFLASH Bank WOP Configuration 3 */
#define DMU_HP_PROCON0_WOP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP3*)0xF805008Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON0_WOP3.
* To use register names with standard convension, please use DMU_HP_PROCON0_WOP3.
*/
#define	DMU_HP_PROCONWOP03	(DMU_HP_PROCON0_WOP3)

/** \brief  10090, PFLASH Bank WOP Configuration 4 */
#define DMU_HP_PROCON0_WOP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP4*)0xF8050090u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_WOP4.
* To use register names with standard convension, please use DMU_HP_PROCON0_WOP4.
*/
#define	DMU_HP_PROCONWOP04	(DMU_HP_PROCON0_WOP4)

/** \brief  10094, PFLASH Bank WOP Configuration 5 */
#define DMU_HP_PROCON0_WOP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP5*)0xF8050094u)

/** Alias (User Manual Name) for DMU_HP_PROCON0_WOP5.
* To use register names with standard convension, please use DMU_HP_PROCON0_WOP5.
*/
#define	DMU_HP_PROCONWOP05	(DMU_HP_PROCON0_WOP5)

/** \brief  10140, PFLASH Bank OTP Protection Configuration 0 */
#define DMU_HP_PROCON1_OTP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP0*)0xF8050140u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_OTP0.
* To use register names with standard convension, please use DMU_HP_PROCON1_OTP0.
*/
#define	DMU_HP_PROCONOTP10	(DMU_HP_PROCON1_OTP0)

/** \brief  10144, PFLASH Bank OTP Protection Configuration 1 */
#define DMU_HP_PROCON1_OTP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP1*)0xF8050144u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_OTP1.
* To use register names with standard convension, please use DMU_HP_PROCON1_OTP1.
*/
#define	DMU_HP_PROCONOTP11	(DMU_HP_PROCON1_OTP1)

/** \brief  10148, PFLASH Bank OTP Protection Configuration 2 */
#define DMU_HP_PROCON1_OTP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP2*)0xF8050148u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_OTP2.
* To use register names with standard convension, please use DMU_HP_PROCON1_OTP2.
*/
#define	DMU_HP_PROCONOTP12	(DMU_HP_PROCON1_OTP2)

/** \brief  1014C, PFLASH Bank OTP Protection Configuration 3 */
#define DMU_HP_PROCON1_OTP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP3*)0xF805014Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON1_OTP3.
* To use register names with standard convension, please use DMU_HP_PROCON1_OTP3.
*/
#define	DMU_HP_PROCONOTP13	(DMU_HP_PROCON1_OTP3)

/** \brief  10150, PFLASH Bank OTP Protection Configuration 4 */
#define DMU_HP_PROCON1_OTP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP4*)0xF8050150u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_OTP4.
* To use register names with standard convension, please use DMU_HP_PROCON1_OTP4.
*/
#define	DMU_HP_PROCONOTP14	(DMU_HP_PROCON1_OTP4)

/** \brief  10154, PFLASH Bank OTP Protection Configuration 5 */
#define DMU_HP_PROCON1_OTP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP5*)0xF8050154u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_OTP5.
* To use register names with standard convension, please use DMU_HP_PROCON1_OTP5.
*/
#define	DMU_HP_PROCONOTP15	(DMU_HP_PROCON1_OTP5)

/** \brief  10100, PFLASH Bank Protection Configuration 0 */
#define DMU_HP_PROCON1_P0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P0*)0xF8050100u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_P0.
* To use register names with standard convension, please use DMU_HP_PROCON1_P0.
*/
#define	DMU_HP_PROCONP10	(DMU_HP_PROCON1_P0)

/** \brief  10104, PFLASH Bank Protection Configuration 1 */
#define DMU_HP_PROCON1_P1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P1*)0xF8050104u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_P1.
* To use register names with standard convension, please use DMU_HP_PROCON1_P1.
*/
#define	DMU_HP_PROCONP11	(DMU_HP_PROCON1_P1)

/** \brief  10108, PFLASH Bank Protection Configuration 2 */
#define DMU_HP_PROCON1_P2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P2*)0xF8050108u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_P2.
* To use register names with standard convension, please use DMU_HP_PROCON1_P2.
*/
#define	DMU_HP_PROCONP12	(DMU_HP_PROCON1_P2)

/** \brief  1010C, PFLASH Bank Protection Configuration 3 */
#define DMU_HP_PROCON1_P3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P3*)0xF805010Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON1_P3.
* To use register names with standard convension, please use DMU_HP_PROCON1_P3.
*/
#define	DMU_HP_PROCONP13	(DMU_HP_PROCON1_P3)

/** \brief  10110, PFLASH Bank Protection Configuration 4 */
#define DMU_HP_PROCON1_P4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P4*)0xF8050110u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_P4.
* To use register names with standard convension, please use DMU_HP_PROCON1_P4.
*/
#define	DMU_HP_PROCONP14	(DMU_HP_PROCON1_P4)

/** \brief  10114, PFLASH Bank Protection Configuration 5 */
#define DMU_HP_PROCON1_P5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P5*)0xF8050114u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_P5.
* To use register names with standard convension, please use DMU_HP_PROCON1_P5.
*/
#define	DMU_HP_PROCONP15	(DMU_HP_PROCON1_P5)

/** \brief  10180, PFLASH Bank WOP Configuration 0 */
#define DMU_HP_PROCON1_WOP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP0*)0xF8050180u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_WOP0.
* To use register names with standard convension, please use DMU_HP_PROCON1_WOP0.
*/
#define	DMU_HP_PROCONWOP10	(DMU_HP_PROCON1_WOP0)

/** \brief  10184, PFLASH Bank WOP Configuration 1 */
#define DMU_HP_PROCON1_WOP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP1*)0xF8050184u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_WOP1.
* To use register names with standard convension, please use DMU_HP_PROCON1_WOP1.
*/
#define	DMU_HP_PROCONWOP11	(DMU_HP_PROCON1_WOP1)

/** \brief  10188, PFLASH Bank WOP Configuration 2 */
#define DMU_HP_PROCON1_WOP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP2*)0xF8050188u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_WOP2.
* To use register names with standard convension, please use DMU_HP_PROCON1_WOP2.
*/
#define	DMU_HP_PROCONWOP12	(DMU_HP_PROCON1_WOP2)

/** \brief  1018C, PFLASH Bank WOP Configuration 3 */
#define DMU_HP_PROCON1_WOP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP3*)0xF805018Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON1_WOP3.
* To use register names with standard convension, please use DMU_HP_PROCON1_WOP3.
*/
#define	DMU_HP_PROCONWOP13	(DMU_HP_PROCON1_WOP3)

/** \brief  10190, PFLASH Bank WOP Configuration 4 */
#define DMU_HP_PROCON1_WOP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP4*)0xF8050190u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_WOP4.
* To use register names with standard convension, please use DMU_HP_PROCON1_WOP4.
*/
#define	DMU_HP_PROCONWOP14	(DMU_HP_PROCON1_WOP4)

/** \brief  10194, PFLASH Bank WOP Configuration 5 */
#define DMU_HP_PROCON1_WOP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP5*)0xF8050194u)

/** Alias (User Manual Name) for DMU_HP_PROCON1_WOP5.
* To use register names with standard convension, please use DMU_HP_PROCON1_WOP5.
*/
#define	DMU_HP_PROCONWOP15	(DMU_HP_PROCON1_WOP5)

/** \brief  10240, PFLASH Bank OTP Protection Configuration 0 */
#define DMU_HP_PROCON2_OTP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP0*)0xF8050240u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_OTP0.
* To use register names with standard convension, please use DMU_HP_PROCON2_OTP0.
*/
#define	DMU_HP_PROCONOTP20	(DMU_HP_PROCON2_OTP0)

/** \brief  10244, PFLASH Bank OTP Protection Configuration 1 */
#define DMU_HP_PROCON2_OTP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP1*)0xF8050244u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_OTP1.
* To use register names with standard convension, please use DMU_HP_PROCON2_OTP1.
*/
#define	DMU_HP_PROCONOTP21	(DMU_HP_PROCON2_OTP1)

/** \brief  10248, PFLASH Bank OTP Protection Configuration 2 */
#define DMU_HP_PROCON2_OTP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP2*)0xF8050248u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_OTP2.
* To use register names with standard convension, please use DMU_HP_PROCON2_OTP2.
*/
#define	DMU_HP_PROCONOTP22	(DMU_HP_PROCON2_OTP2)

/** \brief  1024C, PFLASH Bank OTP Protection Configuration 3 */
#define DMU_HP_PROCON2_OTP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP3*)0xF805024Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON2_OTP3.
* To use register names with standard convension, please use DMU_HP_PROCON2_OTP3.
*/
#define	DMU_HP_PROCONOTP23	(DMU_HP_PROCON2_OTP3)

/** \brief  10250, PFLASH Bank OTP Protection Configuration 4 */
#define DMU_HP_PROCON2_OTP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP4*)0xF8050250u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_OTP4.
* To use register names with standard convension, please use DMU_HP_PROCON2_OTP4.
*/
#define	DMU_HP_PROCONOTP24	(DMU_HP_PROCON2_OTP4)

/** \brief  10254, PFLASH Bank OTP Protection Configuration 5 */
#define DMU_HP_PROCON2_OTP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP5*)0xF8050254u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_OTP5.
* To use register names with standard convension, please use DMU_HP_PROCON2_OTP5.
*/
#define	DMU_HP_PROCONOTP25	(DMU_HP_PROCON2_OTP5)

/** \brief  10200, PFLASH Bank Protection Configuration 0 */
#define DMU_HP_PROCON2_P0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P0*)0xF8050200u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_P0.
* To use register names with standard convension, please use DMU_HP_PROCON2_P0.
*/
#define	DMU_HP_PROCONP20	(DMU_HP_PROCON2_P0)

/** \brief  10204, PFLASH Bank Protection Configuration 1 */
#define DMU_HP_PROCON2_P1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P1*)0xF8050204u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_P1.
* To use register names with standard convension, please use DMU_HP_PROCON2_P1.
*/
#define	DMU_HP_PROCONP21	(DMU_HP_PROCON2_P1)

/** \brief  10208, PFLASH Bank Protection Configuration 2 */
#define DMU_HP_PROCON2_P2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P2*)0xF8050208u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_P2.
* To use register names with standard convension, please use DMU_HP_PROCON2_P2.
*/
#define	DMU_HP_PROCONP22	(DMU_HP_PROCON2_P2)

/** \brief  1020C, PFLASH Bank Protection Configuration 3 */
#define DMU_HP_PROCON2_P3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P3*)0xF805020Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON2_P3.
* To use register names with standard convension, please use DMU_HP_PROCON2_P3.
*/
#define	DMU_HP_PROCONP23	(DMU_HP_PROCON2_P3)

/** \brief  10210, PFLASH Bank Protection Configuration 4 */
#define DMU_HP_PROCON2_P4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P4*)0xF8050210u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_P4.
* To use register names with standard convension, please use DMU_HP_PROCON2_P4.
*/
#define	DMU_HP_PROCONP24	(DMU_HP_PROCON2_P4)

/** \brief  10214, PFLASH Bank Protection Configuration 5 */
#define DMU_HP_PROCON2_P5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P5*)0xF8050214u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_P5.
* To use register names with standard convension, please use DMU_HP_PROCON2_P5.
*/
#define	DMU_HP_PROCONP25	(DMU_HP_PROCON2_P5)

/** \brief  10280, PFLASH Bank WOP Configuration 0 */
#define DMU_HP_PROCON2_WOP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP0*)0xF8050280u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_WOP0.
* To use register names with standard convension, please use DMU_HP_PROCON2_WOP0.
*/
#define	DMU_HP_PROCONWOP20	(DMU_HP_PROCON2_WOP0)

/** \brief  10284, PFLASH Bank WOP Configuration 1 */
#define DMU_HP_PROCON2_WOP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP1*)0xF8050284u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_WOP1.
* To use register names with standard convension, please use DMU_HP_PROCON2_WOP1.
*/
#define	DMU_HP_PROCONWOP21	(DMU_HP_PROCON2_WOP1)

/** \brief  10288, PFLASH Bank WOP Configuration 2 */
#define DMU_HP_PROCON2_WOP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP2*)0xF8050288u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_WOP2.
* To use register names with standard convension, please use DMU_HP_PROCON2_WOP2.
*/
#define	DMU_HP_PROCONWOP22	(DMU_HP_PROCON2_WOP2)

/** \brief  1028C, PFLASH Bank WOP Configuration 3 */
#define DMU_HP_PROCON2_WOP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP3*)0xF805028Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON2_WOP3.
* To use register names with standard convension, please use DMU_HP_PROCON2_WOP3.
*/
#define	DMU_HP_PROCONWOP23	(DMU_HP_PROCON2_WOP3)

/** \brief  10290, PFLASH Bank WOP Configuration 4 */
#define DMU_HP_PROCON2_WOP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP4*)0xF8050290u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_WOP4.
* To use register names with standard convension, please use DMU_HP_PROCON2_WOP4.
*/
#define	DMU_HP_PROCONWOP24	(DMU_HP_PROCON2_WOP4)

/** \brief  10294, PFLASH Bank WOP Configuration 5 */
#define DMU_HP_PROCON2_WOP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP5*)0xF8050294u)

/** Alias (User Manual Name) for DMU_HP_PROCON2_WOP5.
* To use register names with standard convension, please use DMU_HP_PROCON2_WOP5.
*/
#define	DMU_HP_PROCONWOP25	(DMU_HP_PROCON2_WOP5)

/** \brief  10340, PFLASH Bank OTP Protection Configuration 0 */
#define DMU_HP_PROCON3_OTP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP0*)0xF8050340u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_OTP0.
* To use register names with standard convension, please use DMU_HP_PROCON3_OTP0.
*/
#define	DMU_HP_PROCONOTP30	(DMU_HP_PROCON3_OTP0)

/** \brief  10344, PFLASH Bank OTP Protection Configuration 1 */
#define DMU_HP_PROCON3_OTP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP1*)0xF8050344u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_OTP1.
* To use register names with standard convension, please use DMU_HP_PROCON3_OTP1.
*/
#define	DMU_HP_PROCONOTP31	(DMU_HP_PROCON3_OTP1)

/** \brief  10348, PFLASH Bank OTP Protection Configuration 2 */
#define DMU_HP_PROCON3_OTP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP2*)0xF8050348u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_OTP2.
* To use register names with standard convension, please use DMU_HP_PROCON3_OTP2.
*/
#define	DMU_HP_PROCONOTP32	(DMU_HP_PROCON3_OTP2)

/** \brief  1034C, PFLASH Bank OTP Protection Configuration 3 */
#define DMU_HP_PROCON3_OTP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP3*)0xF805034Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON3_OTP3.
* To use register names with standard convension, please use DMU_HP_PROCON3_OTP3.
*/
#define	DMU_HP_PROCONOTP33	(DMU_HP_PROCON3_OTP3)

/** \brief  10350, PFLASH Bank OTP Protection Configuration 4 */
#define DMU_HP_PROCON3_OTP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP4*)0xF8050350u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_OTP4.
* To use register names with standard convension, please use DMU_HP_PROCON3_OTP4.
*/
#define	DMU_HP_PROCONOTP34	(DMU_HP_PROCON3_OTP4)

/** \brief  10354, PFLASH Bank OTP Protection Configuration 5 */
#define DMU_HP_PROCON3_OTP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP5*)0xF8050354u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_OTP5.
* To use register names with standard convension, please use DMU_HP_PROCON3_OTP5.
*/
#define	DMU_HP_PROCONOTP35	(DMU_HP_PROCON3_OTP5)

/** \brief  10300, PFLASH Bank Protection Configuration 0 */
#define DMU_HP_PROCON3_P0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P0*)0xF8050300u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_P0.
* To use register names with standard convension, please use DMU_HP_PROCON3_P0.
*/
#define	DMU_HP_PROCONP30	(DMU_HP_PROCON3_P0)

/** \brief  10304, PFLASH Bank Protection Configuration 1 */
#define DMU_HP_PROCON3_P1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P1*)0xF8050304u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_P1.
* To use register names with standard convension, please use DMU_HP_PROCON3_P1.
*/
#define	DMU_HP_PROCONP31	(DMU_HP_PROCON3_P1)

/** \brief  10308, PFLASH Bank Protection Configuration 2 */
#define DMU_HP_PROCON3_P2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P2*)0xF8050308u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_P2.
* To use register names with standard convension, please use DMU_HP_PROCON3_P2.
*/
#define	DMU_HP_PROCONP32	(DMU_HP_PROCON3_P2)

/** \brief  1030C, PFLASH Bank Protection Configuration 3 */
#define DMU_HP_PROCON3_P3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P3*)0xF805030Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON3_P3.
* To use register names with standard convension, please use DMU_HP_PROCON3_P3.
*/
#define	DMU_HP_PROCONP33	(DMU_HP_PROCON3_P3)

/** \brief  10310, PFLASH Bank Protection Configuration 4 */
#define DMU_HP_PROCON3_P4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P4*)0xF8050310u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_P4.
* To use register names with standard convension, please use DMU_HP_PROCON3_P4.
*/
#define	DMU_HP_PROCONP34	(DMU_HP_PROCON3_P4)

/** \brief  10314, PFLASH Bank Protection Configuration 5 */
#define DMU_HP_PROCON3_P5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P5*)0xF8050314u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_P5.
* To use register names with standard convension, please use DMU_HP_PROCON3_P5.
*/
#define	DMU_HP_PROCONP35	(DMU_HP_PROCON3_P5)

/** \brief  10380, PFLASH Bank WOP Configuration 0 */
#define DMU_HP_PROCON3_WOP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP0*)0xF8050380u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_WOP0.
* To use register names with standard convension, please use DMU_HP_PROCON3_WOP0.
*/
#define	DMU_HP_PROCONWOP30	(DMU_HP_PROCON3_WOP0)

/** \brief  10384, PFLASH Bank WOP Configuration 1 */
#define DMU_HP_PROCON3_WOP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP1*)0xF8050384u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_WOP1.
* To use register names with standard convension, please use DMU_HP_PROCON3_WOP1.
*/
#define	DMU_HP_PROCONWOP31	(DMU_HP_PROCON3_WOP1)

/** \brief  10388, PFLASH Bank WOP Configuration 2 */
#define DMU_HP_PROCON3_WOP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP2*)0xF8050388u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_WOP2.
* To use register names with standard convension, please use DMU_HP_PROCON3_WOP2.
*/
#define	DMU_HP_PROCONWOP32	(DMU_HP_PROCON3_WOP2)

/** \brief  1038C, PFLASH Bank WOP Configuration 3 */
#define DMU_HP_PROCON3_WOP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP3*)0xF805038Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON3_WOP3.
* To use register names with standard convension, please use DMU_HP_PROCON3_WOP3.
*/
#define	DMU_HP_PROCONWOP33	(DMU_HP_PROCON3_WOP3)

/** \brief  10390, PFLASH Bank WOP Configuration 4 */
#define DMU_HP_PROCON3_WOP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP4*)0xF8050390u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_WOP4.
* To use register names with standard convension, please use DMU_HP_PROCON3_WOP4.
*/
#define	DMU_HP_PROCONWOP34	(DMU_HP_PROCON3_WOP4)

/** \brief  10394, PFLASH Bank WOP Configuration 5 */
#define DMU_HP_PROCON3_WOP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP5*)0xF8050394u)

/** Alias (User Manual Name) for DMU_HP_PROCON3_WOP5.
* To use register names with standard convension, please use DMU_HP_PROCON3_WOP5.
*/
#define	DMU_HP_PROCONWOP35	(DMU_HP_PROCON3_WOP5)

/** \brief  10440, PFLASH Bank OTP Protection Configuration 0 */
#define DMU_HP_PROCON4_OTP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP0*)0xF8050440u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_OTP0.
* To use register names with standard convension, please use DMU_HP_PROCON4_OTP0.
*/
#define	DMU_HP_PROCONOTP40	(DMU_HP_PROCON4_OTP0)

/** \brief  10444, PFLASH Bank OTP Protection Configuration 1 */
#define DMU_HP_PROCON4_OTP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP1*)0xF8050444u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_OTP1.
* To use register names with standard convension, please use DMU_HP_PROCON4_OTP1.
*/
#define	DMU_HP_PROCONOTP41	(DMU_HP_PROCON4_OTP1)

/** \brief  10448, PFLASH Bank OTP Protection Configuration 2 */
#define DMU_HP_PROCON4_OTP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP2*)0xF8050448u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_OTP2.
* To use register names with standard convension, please use DMU_HP_PROCON4_OTP2.
*/
#define	DMU_HP_PROCONOTP42	(DMU_HP_PROCON4_OTP2)

/** \brief  1044C, PFLASH Bank OTP Protection Configuration 3 */
#define DMU_HP_PROCON4_OTP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP3*)0xF805044Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON4_OTP3.
* To use register names with standard convension, please use DMU_HP_PROCON4_OTP3.
*/
#define	DMU_HP_PROCONOTP43	(DMU_HP_PROCON4_OTP3)

/** \brief  10450, PFLASH Bank OTP Protection Configuration 4 */
#define DMU_HP_PROCON4_OTP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP4*)0xF8050450u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_OTP4.
* To use register names with standard convension, please use DMU_HP_PROCON4_OTP4.
*/
#define	DMU_HP_PROCONOTP44	(DMU_HP_PROCON4_OTP4)

/** \brief  10454, PFLASH Bank OTP Protection Configuration 5 */
#define DMU_HP_PROCON4_OTP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP5*)0xF8050454u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_OTP5.
* To use register names with standard convension, please use DMU_HP_PROCON4_OTP5.
*/
#define	DMU_HP_PROCONOTP45	(DMU_HP_PROCON4_OTP5)

/** \brief  10400, PFLASH Bank Protection Configuration 0 */
#define DMU_HP_PROCON4_P0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P0*)0xF8050400u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_P0.
* To use register names with standard convension, please use DMU_HP_PROCON4_P0.
*/
#define	DMU_HP_PROCONP40	(DMU_HP_PROCON4_P0)

/** \brief  10404, PFLASH Bank Protection Configuration 1 */
#define DMU_HP_PROCON4_P1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P1*)0xF8050404u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_P1.
* To use register names with standard convension, please use DMU_HP_PROCON4_P1.
*/
#define	DMU_HP_PROCONP41	(DMU_HP_PROCON4_P1)

/** \brief  10408, PFLASH Bank Protection Configuration 2 */
#define DMU_HP_PROCON4_P2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P2*)0xF8050408u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_P2.
* To use register names with standard convension, please use DMU_HP_PROCON4_P2.
*/
#define	DMU_HP_PROCONP42	(DMU_HP_PROCON4_P2)

/** \brief  1040C, PFLASH Bank Protection Configuration 3 */
#define DMU_HP_PROCON4_P3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P3*)0xF805040Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON4_P3.
* To use register names with standard convension, please use DMU_HP_PROCON4_P3.
*/
#define	DMU_HP_PROCONP43	(DMU_HP_PROCON4_P3)

/** \brief  10410, PFLASH Bank Protection Configuration 4 */
#define DMU_HP_PROCON4_P4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P4*)0xF8050410u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_P4.
* To use register names with standard convension, please use DMU_HP_PROCON4_P4.
*/
#define	DMU_HP_PROCONP44	(DMU_HP_PROCON4_P4)

/** \brief  10414, PFLASH Bank Protection Configuration 5 */
#define DMU_HP_PROCON4_P5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P5*)0xF8050414u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_P5.
* To use register names with standard convension, please use DMU_HP_PROCON4_P5.
*/
#define	DMU_HP_PROCONP45	(DMU_HP_PROCON4_P5)

/** \brief  10480, PFLASH Bank WOP Configuration 0 */
#define DMU_HP_PROCON4_WOP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP0*)0xF8050480u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_WOP0.
* To use register names with standard convension, please use DMU_HP_PROCON4_WOP0.
*/
#define	DMU_HP_PROCONWOP40	(DMU_HP_PROCON4_WOP0)

/** \brief  10484, PFLASH Bank WOP Configuration 1 */
#define DMU_HP_PROCON4_WOP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP1*)0xF8050484u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_WOP1.
* To use register names with standard convension, please use DMU_HP_PROCON4_WOP1.
*/
#define	DMU_HP_PROCONWOP41	(DMU_HP_PROCON4_WOP1)

/** \brief  10488, PFLASH Bank WOP Configuration 2 */
#define DMU_HP_PROCON4_WOP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP2*)0xF8050488u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_WOP2.
* To use register names with standard convension, please use DMU_HP_PROCON4_WOP2.
*/
#define	DMU_HP_PROCONWOP42	(DMU_HP_PROCON4_WOP2)

/** \brief  1048C, PFLASH Bank WOP Configuration 3 */
#define DMU_HP_PROCON4_WOP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP3*)0xF805048Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON4_WOP3.
* To use register names with standard convension, please use DMU_HP_PROCON4_WOP3.
*/
#define	DMU_HP_PROCONWOP43	(DMU_HP_PROCON4_WOP3)

/** \brief  10490, PFLASH Bank WOP Configuration 4 */
#define DMU_HP_PROCON4_WOP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP4*)0xF8050490u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_WOP4.
* To use register names with standard convension, please use DMU_HP_PROCON4_WOP4.
*/
#define	DMU_HP_PROCONWOP44	(DMU_HP_PROCON4_WOP4)

/** \brief  10494, PFLASH Bank WOP Configuration 5 */
#define DMU_HP_PROCON4_WOP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP5*)0xF8050494u)

/** Alias (User Manual Name) for DMU_HP_PROCON4_WOP5.
* To use register names with standard convension, please use DMU_HP_PROCON4_WOP5.
*/
#define	DMU_HP_PROCONWOP45	(DMU_HP_PROCON4_WOP5)

/** \brief  10540, PFLASH Bank OTP Protection Configuration 0 */
#define DMU_HP_PROCON5_OTP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP0*)0xF8050540u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_OTP0.
* To use register names with standard convension, please use DMU_HP_PROCON5_OTP0.
*/
#define	DMU_HP_PROCONOTP50	(DMU_HP_PROCON5_OTP0)

/** \brief  10544, PFLASH Bank OTP Protection Configuration 1 */
#define DMU_HP_PROCON5_OTP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP1*)0xF8050544u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_OTP1.
* To use register names with standard convension, please use DMU_HP_PROCON5_OTP1.
*/
#define	DMU_HP_PROCONOTP51	(DMU_HP_PROCON5_OTP1)

/** \brief  10548, PFLASH Bank OTP Protection Configuration 2 */
#define DMU_HP_PROCON5_OTP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP2*)0xF8050548u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_OTP2.
* To use register names with standard convension, please use DMU_HP_PROCON5_OTP2.
*/
#define	DMU_HP_PROCONOTP52	(DMU_HP_PROCON5_OTP2)

/** \brief  1054C, PFLASH Bank OTP Protection Configuration 3 */
#define DMU_HP_PROCON5_OTP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP3*)0xF805054Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON5_OTP3.
* To use register names with standard convension, please use DMU_HP_PROCON5_OTP3.
*/
#define	DMU_HP_PROCONOTP53	(DMU_HP_PROCON5_OTP3)

/** \brief  10550, PFLASH Bank OTP Protection Configuration 4 */
#define DMU_HP_PROCON5_OTP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP4*)0xF8050550u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_OTP4.
* To use register names with standard convension, please use DMU_HP_PROCON5_OTP4.
*/
#define	DMU_HP_PROCONOTP54	(DMU_HP_PROCON5_OTP4)

/** \brief  10554, PFLASH Bank OTP Protection Configuration 5 */
#define DMU_HP_PROCON5_OTP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_OTP5*)0xF8050554u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_OTP5.
* To use register names with standard convension, please use DMU_HP_PROCON5_OTP5.
*/
#define	DMU_HP_PROCONOTP55	(DMU_HP_PROCON5_OTP5)

/** \brief  10500, PFLASH Bank Protection Configuration 0 */
#define DMU_HP_PROCON5_P0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P0*)0xF8050500u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_P0.
* To use register names with standard convension, please use DMU_HP_PROCON5_P0.
*/
#define	DMU_HP_PROCONP50	(DMU_HP_PROCON5_P0)

/** \brief  10504, PFLASH Bank Protection Configuration 1 */
#define DMU_HP_PROCON5_P1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P1*)0xF8050504u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_P1.
* To use register names with standard convension, please use DMU_HP_PROCON5_P1.
*/
#define	DMU_HP_PROCONP51	(DMU_HP_PROCON5_P1)

/** \brief  10508, PFLASH Bank Protection Configuration 2 */
#define DMU_HP_PROCON5_P2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P2*)0xF8050508u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_P2.
* To use register names with standard convension, please use DMU_HP_PROCON5_P2.
*/
#define	DMU_HP_PROCONP52	(DMU_HP_PROCON5_P2)

/** \brief  1050C, PFLASH Bank Protection Configuration 3 */
#define DMU_HP_PROCON5_P3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P3*)0xF805050Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON5_P3.
* To use register names with standard convension, please use DMU_HP_PROCON5_P3.
*/
#define	DMU_HP_PROCONP53	(DMU_HP_PROCON5_P3)

/** \brief  10510, PFLASH Bank Protection Configuration 4 */
#define DMU_HP_PROCON5_P4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P4*)0xF8050510u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_P4.
* To use register names with standard convension, please use DMU_HP_PROCON5_P4.
*/
#define	DMU_HP_PROCONP54	(DMU_HP_PROCON5_P4)

/** \brief  10514, PFLASH Bank Protection Configuration 5 */
#define DMU_HP_PROCON5_P5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_P5*)0xF8050514u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_P5.
* To use register names with standard convension, please use DMU_HP_PROCON5_P5.
*/
#define	DMU_HP_PROCONP55	(DMU_HP_PROCON5_P5)

/** \brief  10580, PFLASH Bank WOP Configuration 0 */
#define DMU_HP_PROCON5_WOP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP0*)0xF8050580u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_WOP0.
* To use register names with standard convension, please use DMU_HP_PROCON5_WOP0.
*/
#define	DMU_HP_PROCONWOP50	(DMU_HP_PROCON5_WOP0)

/** \brief  10584, PFLASH Bank WOP Configuration 1 */
#define DMU_HP_PROCON5_WOP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP1*)0xF8050584u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_WOP1.
* To use register names with standard convension, please use DMU_HP_PROCON5_WOP1.
*/
#define	DMU_HP_PROCONWOP51	(DMU_HP_PROCON5_WOP1)

/** \brief  10588, PFLASH Bank WOP Configuration 2 */
#define DMU_HP_PROCON5_WOP2 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP2*)0xF8050588u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_WOP2.
* To use register names with standard convension, please use DMU_HP_PROCON5_WOP2.
*/
#define	DMU_HP_PROCONWOP52	(DMU_HP_PROCON5_WOP2)

/** \brief  1058C, PFLASH Bank WOP Configuration 3 */
#define DMU_HP_PROCON5_WOP3 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP3*)0xF805058Cu)

/** Alias (User Manual Name) for DMU_HP_PROCON5_WOP3.
* To use register names with standard convension, please use DMU_HP_PROCON5_WOP3.
*/
#define	DMU_HP_PROCONWOP53	(DMU_HP_PROCON5_WOP3)

/** \brief  10590, PFLASH Bank WOP Configuration 4 */
#define DMU_HP_PROCON5_WOP4 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP4*)0xF8050590u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_WOP4.
* To use register names with standard convension, please use DMU_HP_PROCON5_WOP4.
*/
#define	DMU_HP_PROCONWOP54	(DMU_HP_PROCON5_WOP4)

/** \brief  10594, PFLASH Bank WOP Configuration 5 */
#define DMU_HP_PROCON5_WOP5 /*lint --e(923)*/ (*(volatile Ifx_DMU_HP_PROCON_WOP5*)0xF8050594u)

/** Alias (User Manual Name) for DMU_HP_PROCON5_WOP5.
* To use register names with standard convension, please use DMU_HP_PROCON5_WOP5.
*/
#define	DMU_HP_PROCONWOP55	(DMU_HP_PROCON5_WOP5)

/** \brief  20038, Clear Error Register */
#define DMU_SF_CLRE /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_CLRE*)0xF8060038u)

/** \brief  20014, HSM Flash Configuration Register */
#define DMU_SF_CONTROL /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_CONTROL*)0xF8060014u)

/** \brief  20048, DF1 ECC Control Register */
#define DMU_SF_ECCC /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_ECCC*)0xF8060048u)

/** \brief  20040, DF1 ECC Read Register */
#define DMU_SF_ECCR /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_ECCR*)0xF8060040u)

/** \brief  20044, DF1 ECC Status Register */
#define DMU_SF_ECCS /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_ECCS*)0xF8060044u)

/** \brief  2004C, DF1 ECC Write Register */
#define DMU_SF_ECCW /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_ECCW*)0xF806004Cu)

/** \brief  20030, HSM Enable Error Interrupt Control Register */
#define DMU_SF_EER /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_EER*)0xF8060030u)

/** \brief  20034, HSM Error Status Register */
#define DMU_SF_ERRSR /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_ERRSR*)0xF8060034u)

/** \brief  200EC, DF1 Margin Control Register */
#define DMU_SF_MARGIN /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_MARGIN*)0xF80600ECu)

/** \brief  20018, Flash Operation Register */
#define DMU_SF_OPERATION /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_OPERATION*)0xF8060018u)

/** \brief  20074, DF1 User Mode Control */
#define DMU_SF_PROCONUSR /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_PROCONUSR*)0xF8060074u)

/** \brief  20010, HSM Flash Status Register */
#define DMU_SF_STATUS /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_STATUS*)0xF8060010u)

/** \brief  200E8, HSM Suspend Control Register */
#define DMU_SF_SUSPEND /*lint --e(923)*/ (*(volatile Ifx_DMU_SF_SUSPEND*)0xF80600E8u)

/** \brief  30040, HSM Interface Protection Configuration */
#define DMU_SP_PROCONHSM /*lint --e(923)*/ (*(volatile Ifx_DMU_SP_PROCONHSM*)0xF8070040u)

/** \brief  30004, HSM Code Boot Sector */
#define DMU_SP_PROCONHSMCBS /*lint --e(923)*/ (*(volatile Ifx_DMU_SP_PROCONHSMCBS*)0xF8070004u)

/** \brief  30000, HSM Protection Configuration */
#define DMU_SP_PROCONHSMCFG /*lint --e(923)*/ (*(volatile Ifx_DMU_SP_PROCONHSMCFG*)0xF8070000u)

/** \brief  30010, HSM Code OTP Protection Configuration */
#define DMU_SP_PROCONHSMCOTP0 /*lint --e(923)*/ (*(volatile Ifx_DMU_SP_PROCONHSMCOTP0*)0xF8070010u)

/** \brief  30014, HSM Code OTP Protection Configuration */
#define DMU_SP_PROCONHSMCOTP1 /*lint --e(923)*/ (*(volatile Ifx_DMU_SP_PROCONHSMCOTP1*)0xF8070014u)

/** \brief  30008, HSM Code Exclusive Protection Configuration */
#define DMU_SP_PROCONHSMCX0 /*lint --e(923)*/ (*(volatile Ifx_DMU_SP_PROCONHSMCX0*)0xF8070008u)

/** \brief  3000C, HSM Code Exclusive Protection Configuration */
#define DMU_SP_PROCONHSMCX1 /*lint --e(923)*/ (*(volatile Ifx_DMU_SP_PROCONHSMCX1*)0xF807000Cu)
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXDMU_REG_H */
