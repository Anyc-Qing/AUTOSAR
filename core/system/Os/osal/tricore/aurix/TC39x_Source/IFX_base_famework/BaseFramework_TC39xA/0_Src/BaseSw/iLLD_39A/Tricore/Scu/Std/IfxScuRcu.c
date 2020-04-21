/**
 * \file IfxScuRcu.c
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

#include "IfxScuRcu.h"

/******************************************************************************/
/*----------------------------------Macros------------------------------------*/
/******************************************************************************/

#define IFXSCURCU_PERFORM_RESET_DELAY (90000U)

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

IfxScuRcu_ResetCode IfxScuRcu_evaluateReset(void)
{
    Ifx_SCU_RSTCON      Rstcon;
    Ifx_SCU_RSTSTAT     RstStat;
    IfxScuRcu_ResetCode resetCode;
    resetCode.cpuSafeState = (((MODULE_SCU.RSTCON2.U >> IFX_SCU_RSTCON2_CSSX_OFF) & IFX_SCU_RSTCON2_CSSX_MSK) == IFX_SCU_RSTCON2_CSSX_MSK);

    RstStat.U              = MODULE_SCU.RSTSTAT.U;
    Rstcon.U               = MODULE_SCU.RSTCON.U;

    if (RstStat.B.ESR0)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.ESR0;
        resetCode.resetTrigger = IfxScuRcu_Trigger_esr0;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.ESR1)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.ESR1;
        resetCode.resetTrigger = IfxScuRcu_Trigger_esr1;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.SMU)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.SMU;
        resetCode.resetTrigger = IfxScuRcu_Trigger_smu;
        resetCode.resetReason  = 0; //FIXME to be done
    }
    else if (RstStat.B.SW)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.SW;
        resetCode.resetTrigger = IfxScuRcu_Trigger_sw;
        resetCode.resetReason  = MODULE_SCU.RSTCON2.B.USRINFO;
    }
    else if (RstStat.B.STM0)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.STM0;
        resetCode.resetTrigger = IfxScuRcu_Trigger_stm0;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.STM1)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.STM1;
        resetCode.resetTrigger = IfxScuRcu_Trigger_stm1;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.STM2)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.STM2;
        resetCode.resetTrigger = IfxScuRcu_Trigger_stm2;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.STM3)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.STM3;
        resetCode.resetTrigger = IfxScuRcu_Trigger_stm3;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.STM4)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.STM4;
        resetCode.resetTrigger = IfxScuRcu_Trigger_stm4;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.STM5)
    {
        resetCode.resetType    = (IfxScuRcu_ResetType)Rstcon.B.STM5;
        resetCode.resetTrigger = IfxScuRcu_Trigger_stm5;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.PORST)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_warmpoweron;
        resetCode.resetTrigger = IfxScuRcu_Trigger_portst;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.CB0)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_system;
        resetCode.resetTrigger = IfxScuRcu_Trigger_cb0;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.CB1)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_debug;
        resetCode.resetTrigger = IfxScuRcu_Trigger_cb1;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.CB3)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_application;
        resetCode.resetTrigger = IfxScuRcu_Trigger_cb3;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.TP)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_application;
        resetCode.resetTrigger = IfxScuRcu_Trigger_tp;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.TCU)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_system;
        resetCode.resetTrigger = IfxScuRcu_Trigger_tcu;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.EVRC)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_coldpoweron;
        resetCode.resetTrigger = IfxScuRcu_Trigger_evrc;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.EVR33)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_coldpoweron;
        resetCode.resetTrigger = IfxScuRcu_Trigger_evr33;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.SWD)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_coldpoweron;
        resetCode.resetTrigger = IfxScuRcu_Trigger_swd;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.HSMS)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_system;
        resetCode.resetTrigger = IfxScuRcu_Trigger_hsms;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.HSMA)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_application;
        resetCode.resetTrigger = IfxScuRcu_Trigger_hsma;
        resetCode.resetReason  = 0;
    }
    else if (RstStat.B.STBYR)
    {
        resetCode.resetType    = IfxScuRcu_ResetType_coldpoweron;
        resetCode.resetTrigger = IfxScuRcu_Trigger_stbyr;
        resetCode.resetReason  = 0;
    }
    else
    {
        resetCode.resetType    = IfxScuRcu_ResetType_undefined;
        resetCode.resetTrigger = IfxScuRcu_Trigger_undefined;
        resetCode.resetReason  = 0;
    }

    return resetCode;
}


void IfxScuRcu_performReset(IfxScuRcu_ResetType resetType, uint16 userResetInfo)
{
    uint32 index;
    uint16 password;

    password = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinitInline(password);

    /* Write the Reset Type - Application or System Reset */
    if (IfxScuRcu_ResetType_system == resetType)
    {
        MODULE_SCU.RSTCON.B.SW = 1; /* System Reset */
    }
    else
    {
        MODULE_SCU.RSTCON.B.SW = 2; /* Application Reset */
    }

    /* Write the user DATA to reset evaluation */
    MODULE_SCU.RSTCON2.B.USRINFO = userResetInfo;

    /* software Reset can be performed by writing to Reset Request register  SWRSTCON */
    MODULE_SCU.SWRSTCON.B.SWRSTREQ = 1U;

    /* Add some delay for HW to reset */
    for (index = 0U; index < (uint32)IFXSCURCU_PERFORM_RESET_DELAY; index++)
    {}

    /*IfxScu_Wdt_enableSafetyEndinit() is not needed, as the micro would RESET */
}
