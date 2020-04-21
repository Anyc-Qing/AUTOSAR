/**
 * \file IfxScuLbist.c
 * \brief SCU  basic functionality
 *
 * \version iLLD_1_0_0_12_0
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
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
 *
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxScuLbist.h"

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

IFX_CONST IfxScuLbist_ParameterSet IfxScuLbist_defaultConfig = {
#ifndef IFX_CFG_ADAS_LBIST_ENABLED
    IfxScuLbist_Application_pt,
    IfxScuLbist_Freq_div6,
    IfxScuLbist_SplitShiftSel_fourScanPartitions,
    IFXSCULBIST_CFG_SEED,
    IFXSCULBIST_CFG_POWERTRAINPATTERN,
    IFXSCULBIST_CFG_POWERTRAINSIGNATURE,
#else
    IfxScuLbist_Application_body,
    IfxScuLbist_Freq_div6,
    IfxScuLbist_SplitShiftSel_fourScanPartitions,
    IFXSCULBIST_CFG_SEED,
    IFXSCULBIST_CFG_ADASPATTERN,
    IFXSCULBIST_CFG_ADASSIGNATURE,

#endif
};
