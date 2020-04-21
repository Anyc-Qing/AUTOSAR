/**
 * \file IfxPmsPm.c
 * \brief PMS  basic functionality
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
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "IfxPmsPm.h"

/** \addtogroup IfxLld_Pms_Std_Pm_System Modes
 * \{ */

/******************************************************************************/
/*-----------------------Private Function Prototypes--------------------------*/
/******************************************************************************/

/** \brief Handle Standby RAM. This perform redundancy check operation
 * \param standbyRam specifies stand by RAM
 * \return None
 */
IFX_STATIC void IfxPmsPm_handleStandbyRAM(IfxPmsPm_StandbyRamSupply standbyRam);

/** \} */

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void IfxPmsPm_setStandbyMode(Ifx_PMS *pms, IfxPmsPm_WakeupConfig *config, IfxPmsPm_RequestPowerMode powerMode)
{
    uint8  alarmGroup = 8;
    uint32 alarmMask  = 0x387;
    uint8  smuTrapEnable;
    /* Handle RAM redundancy data */
    IfxPmsPm_handleStandbyRAM(config->standbyRam);
    uint16 cpuWdtPw    = IfxScuWdt_getCpuWatchdogPassword();
    uint16 safetyWdtPw = IfxScuWdt_getSafetyWatchdogPassword();
    {
        /* Disable TRAP for SMU (oscillator watchdog and unlock detection) */
        IfxScuWdt_clearCpuEndinit(cpuWdtPw);
        smuTrapEnable           = SCU_TRAPDIS0.B.CPU0SMUT;
        SCU_TRAPDIS0.B.CPU0SMUT = 1U;
        IfxScuWdt_setCpuEndinit(cpuWdtPw);
    }

    /* Select fback (fosc-evr) as CCU input clock */
    IfxScuWdt_clearSafetyEndinit(safetyWdtPw);
    /* Disable SMU Alarms  */
    {
        /* Enable access to SMU registers */
        SMU_KEYS.U                       = (uint32)0x000000bc;
        /*Clear all SMU alarms for PLL and OSC*/
        MODULE_SMU.AGCF[alarmGroup][0].U = (MODULE_SMU.AGCF[alarmGroup][0].U & ~alarmMask);
        MODULE_SMU.AGCF[alarmGroup][1].U = (MODULE_SMU.AGCF[alarmGroup][1].U & ~alarmMask);
        MODULE_SMU.AGCF[alarmGroup][2].U = (MODULE_SMU.AGCF[alarmGroup][2].U & ~alarmMask);

        /* Clear the keys to avoid any further update to SMU registers */
        SMU_KEYS.U = (uint32)0U;
    }
    /* Select fback (fosc-evr) as CCU input clock */
    SCU_CCUCON0.B.CLKSEL = IfxScu_CCUCON0_CLKSEL_fBack;

    /* Update for all CCUCONx registers*/
    SCU_CCUCON0.B.UP       = 1U;

    SCU_SYSPLLCON0.B.INSEL = IfxScuCcu_PllInputClockSelection_fOsc1;
    /* Disable Oscillator and put PLL0 or PLL1 to power saving mode */
    SCU_OSCCON.B.MODE      = 3U;

    /* PLL block is put into the Power Saving Mode */
    SCU_SYSPLLCON0.B.PLLPWD = 0U;
    SCU_PERPLLCON0.B.PLLPWD = 0U;
    /* Configure IRADIS bit to disable Idle Request Acknowledge sequence
     * activation for fast Standby Mode entry. This ensures that standby request
     * is not blocked by pending request or sequence*/

    SCU_PMSWCR1.B.IRADIS = 1U;

    /* Configure Standby entry through REQSLP bit setting only */
    SCU_PMSWCR1.B.STBYEVEN = 1U;
    SCU_PMSWCR1.B.STBYEV   = 0U;

    /* Set all pads to tristate and enable Standby RAM */
    pms->PMSW.CR5.B.BPTRISTREQ = 1;
    pms->PMSW.CR5.B.TRISTREQ   = 0;
    pms->PMSW.CR0.B.STBYRAMSEL = config->standbyRam;
    IfxPmsPm_enableWakeup(pms, config);

    IfxScuWdt_setSafetyEndinit(safetyWdtPw);

    {
        /* Enable VCO unlock Trap if it was disabled before */
        IfxScuWdt_clearCpuEndinit(cpuWdtPw);
        SCU_TRAPCLR.B.SMUT      = 1U;
        SCU_TRAPDIS0.B.CPU0SMUT = smuTrapEnable;
        IfxScuWdt_setCpuEndinit(cpuWdtPw);
    }

    uint8 index = (IfxCpu_getCoreIndex() + 3) % 6;
    IfxScuWdt_clearCpuEndinit(cpuWdtPw);
    MODULE_SCU.PMCSR[index].B.REQSLP = powerMode;
    IfxScuWdt_setCpuEndinit(cpuWdtPw);
}


IFX_STATIC void IfxPmsPm_handleStandbyRAM(IfxPmsPm_StandbyRamSupply standbyRam)
{
    uint32  loopCtr;
    uint32 *rarPtr;

    /*Fixed me for the exact DLMU RAR size used below*/
    if ((standbyRam == IfxPmsPm_StandbyRamSupply_cpu0Block0) || (standbyRam == IfxPmsPm_StandbyRamSupply_cpu0Cpu1))
    {
        rarPtr = (uint32 *)IFXPMS_STANDBY_CPU0_DLMU_RAR_AREA;

        for (loopCtr = 0U; loopCtr < IFXPMS_STANDBY_DLMU_RAR_SIZE; loopCtr++)
        {
            if ((*rarPtr != 0xFFFFFFFFU) && (*rarPtr != 0x0U))
            {
                uint32 *addrPtr;
                addrPtr = (uint32 *)(*rarPtr);
                *rarPtr = *addrPtr;
            }

            rarPtr++;
        }
    }

    if ((standbyRam == IfxPmsPm_StandbyRamSupply_cpu1Block01) || (standbyRam == IfxPmsPm_StandbyRamSupply_cpu0Cpu1))
    {
        rarPtr = (uint32 *)IFXPMS_STANDBY_CPU1_DLMU_RAR_AREA;

        for (loopCtr = 0U; loopCtr < IFXPMS_STANDBY_DLMU_RAR_SIZE; loopCtr++)
        {
            if ((*rarPtr != 0xFFFFFFFFU) && (*rarPtr != 0x0U))
            {
                uint32 *addrPtr;
                addrPtr = (uint32 *)(*rarPtr);
                *rarPtr = *addrPtr;
            }

            rarPtr++;
        }
    }
    else
    {
        /* Do Nothing */
    }
}


boolean IfxPmsPm_setCoreMode(IfxCpu_ResourceCpu cpuIndex, IfxCpu_CoreMode mode)
{
    uint8            reqSleep = (uint8)-1;
    boolean          retValue;
    volatile uint32 *cpu;
    uint8            pmcIndex = (cpuIndex + 3) % 6;

    /*Modes such as HALT and STBY are not handled at CPU level */
    retValue = ((mode == IfxCpu_CoreMode_halt) || (mode == IfxCpu_CoreMode_stby)) ? FALSE : TRUE;

    switch (mode)
    {
    case IfxCpu_CoreMode_idle:
        reqSleep = IfxScu_PMCSR_REQSLP_Idle;
        break;
    case IfxCpu_CoreMode_run:
        reqSleep = IfxScu_PMCSR_REQSLP_Run;
        break;
    case IfxCpu_CoreMode_sleep:
        reqSleep = IfxScu_PMCSR_REQSLP_Sleep;
        break;
    default:
        return 0;
    }

    if (retValue == TRUE)
    {
        /*Check if the same core is requesting to change the core run mode */
        if (IfxCpu_getCoreIndex() != cpuIndex)
        {                       /*Request is for the other core */
            /*To access PMCSR of other CPUs handle the safety EndInit protection */
            uint16 safetyWdtPw = IfxScuWdt_getSafetyWatchdogPassword();
            IfxScuWdt_clearSafetyEndinit(safetyWdtPw);
            MODULE_SCU.PMCSR[pmcIndex].B.REQSLP = reqSleep;
            IfxScuWdt_setSafetyEndinit(safetyWdtPw);
            cpu                                 = (volatile uint32 *)IfxCpu_getAddress(cpuIndex);
            /*Temprory patch for MCMETILLD-682 FIXME*/
            (*(cpu + (0x1FD00 / 4)))           |= (2 << IFX_CPU_DBGSR_DE_MSK); /*reset the HALT bit, if it is already done it is no harm in writing again */
        }
        else
        {                                                                      /*Request is for self, this request normally only for halt, otherwise the core is already running anyway! */
            /*To access PMCSR of self handle the cpu EndInit protection */
            uint16 cpuWdtPw = IfxScuWdt_getCpuWatchdogPassword();
            IfxScuWdt_clearCpuEndinit(cpuWdtPw);
            MODULE_SCU.PMCSR[pmcIndex].B.REQSLP = reqSleep;
            IfxScuWdt_setCpuEndinit(cpuWdtPw);
        }
    }

    return retValue;
}


void IfxPmsPm_enableWakeup(Ifx_PMS *pms, IfxPmsPm_WakeupConfig *wakeup)
{
    Ifx_PMS_PMSW_CR0 tempPMSW;

    switch (wakeup->wakeup)
    {
    case IfxPmsPm_WakeupOn_esr0:
        tempPMSW.U           = pms->PMSW.CR0.U;
        tempPMSW.B.PORSTWKEN = 0;
        tempPMSW.B.ESR0WKEN  = 1;
        tempPMSW.B.ESR0DFEN  = wakeup->filter;
        tempPMSW.B.ESR0EDCON = wakeup->trigger;
        pms->PMSW.CR0.U      = tempPMSW.U;
        break;
    case IfxPmsPm_WakeupOn_esr1:
        tempPMSW.U           = pms->PMSW.CR0.U;
        tempPMSW.B.PORSTWKEN = 0;
        tempPMSW.B.ESR1WKEN  = 1;
        tempPMSW.B.ESR1DFEN  = wakeup->filter;
        tempPMSW.B.ESR1EDCON = wakeup->trigger;
        pms->PMSW.CR0.U      = tempPMSW.U;
        break;
    case IfxPmsPm_WakeupOn_pinA:
        tempPMSW.U           = pms->PMSW.CR0.U;
        tempPMSW.B.PORSTWKEN = 0;
        tempPMSW.B.PINAWKEN  = 1;
        tempPMSW.B.PINADFEN  = wakeup->filter;
        tempPMSW.B.PINAEDCON = wakeup->trigger;
        pms->PMSW.CR0.U      = tempPMSW.U;
        break;
    case IfxPmsPm_WakeupOn_pinB:
        tempPMSW.U           = pms->PMSW.CR0.U;
        tempPMSW.B.PORSTWKEN = 0;
        tempPMSW.B.PINBWKEN  = 1;
        tempPMSW.B.PINBDFEN  = wakeup->filter;
        tempPMSW.B.PINBEDCON = wakeup->trigger;
        pms->PMSW.CR0.U      = tempPMSW.U;
        break;
    case IfxPmsPm_WakeupOn_timer:
        tempPMSW.U         = pms->PMSW.CR0.U;
        tempPMSW.B.WUTWKEN = 1;
        pms->PMSW.CR0.U    = tempPMSW.U;
        pms->PMSW.CR3.U   |= ((wakeup->mode << 30) | (1 << 27) | (wakeup->reloadCounter));
        break;
    case IfxPmsPm_WakeupOn_porst:
        tempPMSW.U           = pms->PMSW.CR0.U;
        tempPMSW.B.PORSTWKEN = 1;
        pms->PMSW.CR0.U      = tempPMSW.U;
        break;
    default:
        tempPMSW.U           = pms->PMSW.CR0.U;
        tempPMSW.B.PORSTWKEN = 1;
        pms->PMSW.CR0.U      = tempPMSW.U;
        break;
    }
}
