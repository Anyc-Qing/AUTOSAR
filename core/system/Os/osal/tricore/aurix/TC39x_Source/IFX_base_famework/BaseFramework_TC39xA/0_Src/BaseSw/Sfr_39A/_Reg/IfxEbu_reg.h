/**
 * \file IfxEbu_reg.h
 * \brief
 * \copyright Copyright (c) 2015 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2015-12-17 16:14:49 GMT
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
 * \defgroup IfxLld_Ebu_Registers_Cfg Ebu address
 * \ingroup IfxLld_Ebu_Registers
 * 
 * \defgroup IfxLld_Ebu_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxLld_Ebu_Registers_Cfg
 *
 * \defgroup IfxLld_Ebu_Registers_Cfg_Ebu 2-EBU
 * \ingroup IfxLld_Ebu_Registers_Cfg
 *
 *
 */
#ifndef IFXEBU_REG_H
#define IFXEBU_REG_H 1
/******************************************************************************/
#include "IfxEbu_regdef.h"
/******************************************************************************/
/** \addtogroup IfxLld_Ebu_Cfg_BaseAddress
 * \{  */

/** \brief EBU object */
#define MODULE_EBU /*lint --e(923)*/ ((*(Ifx_EBU*)0xF8400000u))
/** \}  */

/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Ebu_Cfg_Ebu
 * \{  */
/** \brief 0, EBU Clock Control Register */
#define EBU_CLC /*lint --e(923)*/ (*(volatile Ifx_EBU_CLC*)0xF8400000u)

/** \brief 4, EBU Configuration Register */
#define EBU_MODCON /*lint --e(923)*/ (*(volatile Ifx_EBU_MODCON*)0xF8400004u)

/** \brief 4, EBU Configuration Register */
#define EBU_VIEW_2 /*lint --e(923)*/ (*(volatile Ifx_EBU_VIEW_2*)0xF8400004u)

/** \brief 8, EBU Module Identification Register */
#define EBU_ID /*lint --e(923)*/ (*(volatile Ifx_EBU_ID*)0xF8400008u)

/** \brief C, EBU Test/Control Configuration Register */
#define EBU_USERCON /*lint --e(923)*/ (*(volatile Ifx_EBU_USERCON*)0xF840000Cu)

/** \brief 10, EBU External Boot Configuration Register */
#define EBU_EXTBOOT /*lint --e(923)*/ (*(volatile Ifx_EBU_EXTBOOT*)0xF8400010u)

/** \brief 28, EBU Bus Configuration Register */
#define EBU_BUS0_RCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_RCON*)0xF8400028u)
/** Alias (User Manual Name) for EBU_BUS0_RCON.
* To use register names with standard convension, please use EBU_BUS0_RCON.
*/
#define EBU_BUSRCON0 (EBU_BUS0_RCON)

/** \brief 2C, EBU Bus Read Access Parameter Register */
#define EBU_BUS0_RAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_RAP*)0xF840002Cu)
/** Alias (User Manual Name) for EBU_BUS0_RAP.
* To use register names with standard convension, please use EBU_BUS0_RAP.
*/
#define EBU_BUSRAP0 (EBU_BUS0_RAP)

/** \brief 30, EBU Address Select Register ${x}\n */
#define EBU_ADDRSEL0 /*lint --e(923)*/ (*(volatile Ifx_EBU_ADDRSEL*)0xF8400030u)

/** \brief 30, EBU Bus Write Configuration Register */
#define EBU_BUS0_WCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_WCON*)0xF8400030u)
/** Alias (User Manual Name) for EBU_BUS0_WCON.
* To use register names with standard convension, please use EBU_BUS0_WCON.
*/
#define EBU_BUSWCON0 (EBU_BUS0_WCON)

/** \brief 34, EBU Bus Write Access Parameter Register */
#define EBU_BUS0_WAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_WAP*)0xF8400034u)
/** Alias (User Manual Name) for EBU_BUS0_WAP.
* To use register names with standard convension, please use EBU_BUS0_WAP.
*/
#define EBU_BUSWAP0 (EBU_BUS0_WAP)

/** \brief 38, EBU Bus Configuration Register */
#define EBU_BUS1_RCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_RCON*)0xF8400038u)
/** Alias (User Manual Name) for EBU_BUS1_RCON.
* To use register names with standard convension, please use EBU_BUS1_RCON.
*/
#define EBU_BUSRCON1 (EBU_BUS1_RCON)

/** \brief 3C, EBU Bus Read Access Parameter Register */
#define EBU_BUS1_RAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_RAP*)0xF840003Cu)
/** Alias (User Manual Name) for EBU_BUS1_RAP.
* To use register names with standard convension, please use EBU_BUS1_RAP.
*/
#define EBU_BUSRAP1 (EBU_BUS1_RAP)

/** \brief 40, EBU Bus Write Configuration Register */
#define EBU_BUS1_WCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_WCON*)0xF8400040u)
/** Alias (User Manual Name) for EBU_BUS1_WCON.
* To use register names with standard convension, please use EBU_BUS1_WCON.
*/
#define EBU_BUSWCON1 (EBU_BUS1_WCON)

/** \brief 44, EBU Bus Write Access Parameter Register */
#define EBU_BUS1_WAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_WAP*)0xF8400044u)
/** Alias (User Manual Name) for EBU_BUS1_WAP.
* To use register names with standard convension, please use EBU_BUS1_WAP.
*/
#define EBU_BUSWAP1 (EBU_BUS1_WAP)

/** \brief 48, EBU Bus Configuration Register */
#define EBU_BUS2_RCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_RCON*)0xF8400048u)
/** Alias (User Manual Name) for EBU_BUS2_RCON.
* To use register names with standard convension, please use EBU_BUS2_RCON.
*/
#define EBU_BUSRCON2 (EBU_BUS2_RCON)

/** \brief 4C, EBU Address Select Register ${x}\n */
#define EBU_ADDRSEL1 /*lint --e(923)*/ (*(volatile Ifx_EBU_ADDRSEL*)0xF840004Cu)

/** \brief 4C, EBU Bus Read Access Parameter Register */
#define EBU_BUS2_RAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_RAP*)0xF840004Cu)
/** Alias (User Manual Name) for EBU_BUS2_RAP.
* To use register names with standard convension, please use EBU_BUS2_RAP.
*/
#define EBU_BUSRAP2 (EBU_BUS2_RAP)

/** \brief 50, EBU Bus Write Configuration Register */
#define EBU_BUS2_WCON /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_WCON*)0xF8400050u)
/** Alias (User Manual Name) for EBU_BUS2_WCON.
* To use register names with standard convension, please use EBU_BUS2_WCON.
*/
#define EBU_BUSWCON2 (EBU_BUS2_WCON)

/** \brief 54, EBU Bus Write Access Parameter Register */
#define EBU_BUS2_WAP /*lint --e(923)*/ (*(volatile Ifx_EBU_BUS_WAP*)0xF8400054u)
/** Alias (User Manual Name) for EBU_BUS2_WAP.
* To use register names with standard convension, please use EBU_BUS2_WAP.
*/
#define EBU_BUSWAP2 (EBU_BUS2_WAP)

/** \brief 68, EBU Address Select Register ${x}\n */
#define EBU_ADDRSEL2 /*lint --e(923)*/ (*(volatile Ifx_EBU_ADDRSEL*)0xF8400068u)

/** \brief 68, EBU SDRAM Control Register */
#define EBU_SDR_CON /*lint --e(923)*/ (*(volatile Ifx_EBU_SDR_CON*)0xF8400068u)

/** \brief 6C, EBU SDRAM Mode Register */
#define EBU_SDR_MOD /*lint --e(923)*/ (*(volatile Ifx_EBU_SDR_MOD*)0xF840006Cu)

/** \brief 70, EBU SDRAM Refresh Control Register */
#define EBU_SDR_REF /*lint --e(923)*/ (*(volatile Ifx_EBU_SDR_REF*)0xF8400070u)

/** \brief 74, EBU SDRAM Status Register */
#define EBU_SDR_STAT /*lint --e(923)*/ (*(volatile Ifx_EBU_SDR_STAT*)0xF8400074u)

/** \brief B0, EBU Access Enable Register 0 */
#define EBU_ACCEN0 /*lint --e(923)*/ (*(volatile Ifx_EBU_ACCEN0*)0xF84000B0u)

/** \brief B4, EBU Access Enable Register 1 */
#define EBU_ACCEN1 /*lint --e(923)*/ (*(volatile Ifx_EBU_ACCEN1*)0xF84000B4u)

/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXEBU_REG_H */
