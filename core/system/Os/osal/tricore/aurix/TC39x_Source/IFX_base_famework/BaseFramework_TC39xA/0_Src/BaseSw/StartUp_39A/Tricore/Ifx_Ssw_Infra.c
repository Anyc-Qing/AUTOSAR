/*
 * Ifx_Ssw_Infra.c
 *
 *  Created on: 19.06.2016
 *      Author: abbi
 */
#include "Ifx_Cfg.h"
#include "Ifx_Ssw_Infra.h"

/******************************************************************************/
/*-------------------------Infrastructure Functions---------------------------*/
/******************************************************************************/

unsigned short Ifx_Ssw_getCpuWatchdogPassword(Ifx_SCU_WDTCPU *watchdog)
{
	return Ifx_Ssw_getCpuWatchdogPasswordInline(watchdog);
}

unsigned short Ifx_Ssw_getSafetyWatchdogPassword(void)
{
	return Ifx_Ssw_getSafetyWatchdogPasswordInline();
}

void Ifx_Ssw_clearCpuEndinit(Ifx_SCU_WDTCPU *watchdog, unsigned short password)
{
	Ifx_Ssw_clearCpuEndinitInline(watchdog, password);
}

void Ifx_Ssw_setCpuEndinit(Ifx_SCU_WDTCPU *watchdog, unsigned short password)
{
	Ifx_Ssw_setCpuEndinitInline(watchdog, password);
}

void Ifx_Ssw_clearSafetyEndinit(unsigned short password)
{
	Ifx_Ssw_clearSafetyEndinitInline(password);
}

void Ifx_Ssw_setSafetyEndinit(unsigned short password)
{
	Ifx_Ssw_setSafetyEndinitInline(password);
}

void Ifx_Ssw_disableCpuWatchdog(Ifx_SCU_WDTCPU *watchdog, unsigned short password)
{
    /* Select CPU Watchdog based on Core Id */
	unsigned int cpuIndex;
	cpuIndex = Ifx_Ssw_MFCR(CPU_CORE_ID);
	cpuIndex = (cpuIndex >> IFX_CPU_CORE_ID_CORE_ID_OFF) & IFX_CPU_CORE_ID_CORE_ID_MSK;
	cpuIndex = Ifx_Ssw_MINU(cpuIndex, 5);
    Ifx_SCU_WDTCPU *wdt    = &MODULE_SCU.WDTCPU[cpuIndex];

    Ifx_Ssw_clearCpuEndinit(wdt, password);
    wdt->CON1.B.DR = 1;         //Set DR bit in Config_1 register
    Ifx_Ssw_setCpuEndinit(wdt, password);
}

void Ifx_Ssw_enableCpuWatchdog(Ifx_SCU_WDTCPU *watchdog, unsigned short password)
{
    /* Select CPU Watchdog based on Core Id */
	unsigned int cpuIndex;
	cpuIndex = Ifx_Ssw_MFCR(CPU_CORE_ID);
	cpuIndex = (cpuIndex >> IFX_CPU_CORE_ID_CORE_ID_OFF) & IFX_CPU_CORE_ID_CORE_ID_MSK;
	cpuIndex = Ifx_Ssw_MINU(cpuIndex, 5);
    Ifx_SCU_WDTCPU *wdt    = &MODULE_SCU.WDTCPU[cpuIndex];

    Ifx_Ssw_clearCpuEndinit(wdt, password);
    wdt->CON1.B.DR = 0;         //Clear DR bit in Config_1 register
    Ifx_Ssw_setCpuEndinit(wdt, password);
}

void Ifx_Ssw_disableSafetyWatchdog(unsigned short password)
{
	Ifx_Ssw_clearSafetyEndinit(password);
	SCU_WDTS_CON1.B.DR = 1;     //Set DR bit in Config_1 register
	Ifx_Ssw_setSafetyEndinit(password);
}

void Ifx_Ssw_enableSafetyWatchdog(unsigned short password)
{
	Ifx_Ssw_clearSafetyEndinit(password);
    SCU_WDTS_CON1.B.DR = 0;     //Clear DR bit in Config_1 register
    Ifx_Ssw_setSafetyEndinit(password);
}

void Ifx_Ssw_startCore(Ifx_CPU *cpu, unsigned int programCounter)
{
    /* Set the PC */
	cpu->PC.B.PC = programCounter >> 1;;

    /* release boot halt mode if required */
    {
        Ifx_CPU_SYSCON syscon;
        syscon = cpu->SYSCON;

        if (syscon.B.BHALT)
        {
            syscon.B.BHALT = 0;
            cpu->SYSCON = syscon;
        }
    }
}

void Ifx_Ssw_setCpu0Idle(void)
{
	Ifx_SCU_WDTCPU *wdt    = &MODULE_SCU.WDTCPU[0];
	unsigned short cpuWdtPw = Ifx_Ssw_getCpuWatchdogPassword(wdt);
	Ifx_Ssw_clearCpuEndinit(wdt, cpuWdtPw);
	SCU_PMCSR0.B.REQSLP = 1;
	Ifx_Ssw_setCpuEndinit(wdt, cpuWdtPw);
}

float Ifx_Ssw_getStmFrequency(void)
{
	float oscFreq= IFX_CFG_SSW_XTAL_FREQUENCY;
    float sourcefreq= IFX_CFG_SSW_EVR_OSC_FREQUENCY;
    unsigned int insel= SCU_SYSPLLCON0.B.INSEL;

    if (insel == 2)
    {
    	oscFreq= IFX_CFG_SSW_SYSCLK_PIN_FREQUENCY;
    }
    else if(insel == 1)
    {
    	oscFreq= IFX_CFG_SSW_XTAL_FREQUENCY;
    }
    else
    {
    	oscFreq= IFX_CFG_SSW_EVR_OSC_FREQUENCY;
    }

    if(SCU_CCUCON0.B.CLKSEL)
    {
    	sourcefreq= (oscFreq * (SCU_SYSPLLCON0.B.NDIV + 1)) /
    				((SCU_SYSPLLCON0.B.PDIV + 1) * (SCU_SYSPLLCON1.B.K2DIV + 1));
    }

	return sourcefreq / SCU_CCUCON0.B.STMDIV;
}

void Ifx_Ssw_C_Init(void)
{
	unsigned int dummyVar= CPU1_CORE_ID.U + CPU2_CORE_ID.U + CPU3_CORE_ID.U + CPU4_CORE_ID.U + CPU5_CORE_ID.U;
	if(dummyVar <= 20)
	Ifx_Ssw_C_InitInline();
}
