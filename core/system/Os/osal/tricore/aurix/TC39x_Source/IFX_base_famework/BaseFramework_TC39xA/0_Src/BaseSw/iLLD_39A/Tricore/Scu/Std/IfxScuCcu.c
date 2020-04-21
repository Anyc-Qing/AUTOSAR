/**
 * \file IfxScuCcu.c
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

#include "IfxScuCcu.h"

/******************************************************************************/
/*------------------------Private Variables/Constants-------------------------*/
/******************************************************************************/

/** \brief Flash wait state config
 */
IFX_STATIC IFX_CONST IfxScuCcu_FlashWaitstateConfig IfxScuCcu_defaultFlashWaitstateConfig = IFXSCU_CFG_FLASH_WAITSTATE;

/** \brief Default configuration for the PLL initial steps
 * This is a structure array and the values are defined at the Scu implementation as #define macro
 */
IFX_STATIC IFX_CONST IfxScuCcu_PllStepConfig IfxScuCcu_defaultPllConfigSteps[] = {
    IFXSCU_CFG_PLL_STEPS
};

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/

IFX_CONST IfxScuCcu_Config IfxScuCcu_defaultClockConfig = {
    /*IfxScuCcu_InitialStepConfig: Configuration of first step which is same as internal osc frequency. */
    IFXSCU_CFG_PLL_INITIAL_STEP,
    /*IfxScuCcu_PllThrottleConfig: Configuration of PLL throttling. */
    {
        sizeof(IfxScuCcu_defaultPllConfigSteps) / sizeof(IfxScuCcu_PllStepConfig),
        IfxScuCcu_defaultPllConfigSteps
    },
    IFXSCU_CFG_CLK_DISTRIBUTION,
    &IfxScuCcu_defaultFlashWaitstateConfig
};

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void IfxScuCcu_distributeClock(IfxScuCcu_ClockDistributionConfig *clockDistributionConfig)
{
    IfxScuCcu_distributeClockInline(clockDistributionConfig);
}


float32 IfxScuCcu_getAsclinSFrequency(void)
{
    float32 freq          = 0;
    float32 source        = 0;

    uint8   asclindiv[16] = {1, 1, 2, 3, 4, 5, 6, 6, 8, 8, 10, 10, 12, 12, 12, 15};

    switch (SCU_CCUCON2.B.CLKSELASCLINS)
    {
    case 1:
    {
        source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_1);
    }
    break;
    case 2:
    {
        source = IfxScuCcu_getOsc0Frequency();
    }
    break;
    default:
        break;
    }

    if (SCU_CCUCON2.B.ASCLINSDIV)
    {
        freq = source / asclindiv[SCU_CCUCON2.B.ASCLINSDIV];
    }

    return freq;
}


float32 IfxScuCcu_getBbbFrequency(void)
{
    float32 bbbFrequency;
    float32 sourceFrequency;

    sourceFrequency = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_0);

    switch (SCU_CCUCON0.B.LPDIV)
    {
    case 0:                    /*Not in low power mode */

        if (SCU_CCUCON0.B.BBBDIV == 0)

        {
            bbbFrequency = 0.0;
        }
        else
        {
            bbbFrequency = sourceFrequency / SCU_CCUCON0.B.BBBDIV;
        }

        break;
    case 1:
        bbbFrequency = sourceFrequency / 30;
        break;
    case 2:
        bbbFrequency = sourceFrequency / 60;
        break;
    case 3:
        bbbFrequency = sourceFrequency / 120;
        break;
    case 4:
        bbbFrequency = sourceFrequency / 240;
        break;
    default:
        bbbFrequency = 0.0;
        break;
    }

    return bbbFrequency;
}


float32 IfxScuCcu_getCpuFrequency(const IfxCpu_ResourceCpu cpu)
{
    float32 frequency = IfxScuCcu_getSriFrequency();
    uint32  cpuDiv    = 0;

    switch (cpu)
    {
    case IfxCpu_ResourceCpu_0:
        cpuDiv = SCU_CCUCON6.U;
        break;
    case IfxCpu_ResourceCpu_1:
        cpuDiv = SCU_CCUCON7.U;
        break;

    case IfxCpu_ResourceCpu_2:
        cpuDiv = SCU_CCUCON8.U;
        break;

    case IfxCpu_ResourceCpu_3:
        cpuDiv = SCU_CCUCON9.U;
        break;

    case IfxCpu_ResourceCpu_4:
        cpuDiv = SCU_CCUCON10.U;
        break;
    case IfxCpu_ResourceCpu_5:
        cpuDiv = SCU_CCUCON11.U;
        break;

    default:
        frequency = 0.0;
        break;
    }

    if (cpuDiv != 0)
    {
        frequency = frequency * ((64 - cpuDiv) / 64);
    }

    return frequency;
}


float32 IfxScuCcu_getFsi2Frequency(void)
{
    float32         frequency;
    Ifx_SCU_CCUCON0 ccucon0 = SCU_CCUCON0;

    if (ccucon0.B.FSI2DIV == 0)
    {
        frequency = 0;
    }
    else
    {
        frequency = IfxScuCcu_getSriFrequency();

        if ((ccucon0.B.SRIDIV == 1) || (ccucon0.B.SRIDIV == 2))
        {
            frequency = frequency / ccucon0.B.FSI2DIV;
        }
    }

    return frequency;
}


float32 IfxScuCcu_getFsiFrequency(void)
{
    float32         frequency;
    Ifx_SCU_CCUCON0 ccucon0 = SCU_CCUCON0;

    if (ccucon0.B.FSIDIV == 0)
    {
        frequency = 0;
    }
    else
    {
        frequency = IfxScuCcu_getSriFrequency();

        if ((ccucon0.B.SRIDIV == 1) || (ccucon0.B.SRIDIV == 2))
        {
            frequency = frequency / ccucon0.B.FSIDIV;
        }
    }

    return frequency;
}


float32 IfxScuCcu_getMcanFrequency(void)
{
    float32 mcanFreq   = 0;
    float32 mcanSource = 0;

    switch (SCU_CCUCON1.B.CLKSELMCAN)
    {
    case 1:
    {
        mcanSource = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_1);
    }
    break;
    case 2:
    {
        mcanSource = IfxScuCcu_getOsc0Frequency();
    }
    break;
    default:
        break;
    }

    if (SCU_CCUCON1.B.MCANDIV)
    {
        mcanFreq = mcanSource / SCU_CCUCON1.B.MCANDIV;
    }

    return mcanFreq;
}


float32 IfxScuCcu_getModuleFrequency(void)
{
    float32     spbFreq;
    float32     moduleFreq;
    Ifx_SCU_FDR scuFdr;
    scuFdr  = SCU_FDR;
    spbFreq = IfxScuCcu_getSpbFrequency();

    if (scuFdr.B.DM == 1)
    {
        moduleFreq = spbFreq / (1024 - scuFdr.B.STEP);
    }
    else if (scuFdr.B.DM == 2)
    {
        moduleFreq = (spbFreq * scuFdr.B.STEP) / 1024;
    }
    else
    {
        moduleFreq = 0;
    }

    return moduleFreq;
}


float32 IfxScuCcu_getMscFrequency(void)
{
    float32 mscFreq   = 0;
    float32 mscSource = 0;

    switch (SCU_CCUCON1.B.CLKSELMSC)
    {
    case 1:
    {
        mscSource = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_1);
    }
    break;
    case 2:
    {
        mscSource = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_2);
    }
    break;
    default:
        break;
    }

    if (SCU_CCUCON1.B.MSCDIV)
    {
        mscFreq = mscSource / SCU_CCUCON1.B.MSCDIV;
    }

    return mscFreq;
}


float32 IfxScuCcu_getPerPllFrequency1(void)
{
    Ifx_SCU *scu = &MODULE_SCU;
    float32  pllFrequency1;
    float32  oscFreq;
    oscFreq       = IfxScuCcu_getOscFrequency();

    pllFrequency1 = (oscFreq * (scu->PERPLLCON0.B.NDIV + 1)) / ((scu->PERPLLCON0.B.PDIV + 1) * (scu->PERPLLCON1.B.K2DIV + 1));
    return pllFrequency1;
}


float32 IfxScuCcu_getPerPllFrequency2(void)
{
    Ifx_SCU *scu = &MODULE_SCU;
    float32  pllFrequency2;
    float32  oscFreq;
    oscFreq = IfxScuCcu_getOscFrequency();

    if (!(scu->PERPLLCON0.U & 0x1)) // FIXME: replace with DIVBY register bit field once available
    {
        pllFrequency2 = (oscFreq * (scu->PERPLLCON0.B.NDIV + 1)) / ((scu->PERPLLCON0.B.PDIV + 1) * (scu->PERPLLCON1.B.K3DIV + 1) * 1.6);
    }
    else
    {
        pllFrequency2 = (oscFreq * (scu->PERPLLCON0.B.NDIV + 1)) / ((scu->PERPLLCON0.B.PDIV + 1) * (scu->PERPLLCON1.B.K3DIV + 1));
    }

    return pllFrequency2;
}


float32 IfxScuCcu_getPllFrequency(void)
{
    Ifx_SCU *scu = &MODULE_SCU;
    float32  oscFreq;
    float32  freq;

    oscFreq = IfxScuCcu_getOscFrequency();
    freq    = (oscFreq * (scu->SYSPLLCON0.B.NDIV + 1)) / ((scu->SYSPLLCON1.B.K2DIV + 1) * (scu->SYSPLLCON0.B.PDIV + 1));
    return freq;
}


float32 IfxScuCcu_getQspiFrequency(void)
{
    float32 freq   = 0;
    float32 source = 0;

    switch (SCU_CCUCON1.B.CLKSELQSPI)
    {
    case 1:
    {
        source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_1);
    }
    break;
    case 2:
    {
        source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_2);
    }
    break;
    default:
        break;
    }

    if (SCU_CCUCON1.B.QSPIDIV)
    {
        freq = source / SCU_CCUCON1.B.QSPIDIV;
    }

    return freq;
}


float32 IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource fsource)
{
    float32 sourcefreq;

    switch (SCU_CCUCON0.B.CLKSEL)
    {
    case IfxScu_CCUCON0_CLKSEL_fBack:
        sourcefreq = IfxScuCcu_getEvrFrequency();
        break;
    case IfxScu_CCUCON0_CLKSEL_fPll:

        switch (fsource)
        {
        case IfxScuCcu_Fsource_0:
            sourcefreq = IfxScuCcu_getPllFrequency();
            break;
        case IfxScuCcu_Fsource_1:
            sourcefreq = IfxScuCcu_getPerPllFrequency1() / 2;
            break;
        case IfxScuCcu_Fsource_2:
            sourcefreq = IfxScuCcu_getPerPllFrequency2();
            break;
        default:
            sourcefreq = 0;
            break;
        }

        break;
    default:
        sourcefreq = 0;
        break;
    }

    return sourcefreq;
}


float32 IfxScuCcu_getSpbFrequency(void)
{
    float32 spbFrequency;
    float32 sourceFrequency;
    sourceFrequency = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_0);

    switch (SCU_CCUCON0.B.LPDIV)
    {
    case 0:                    /*Not in low power mode */

        if ((SCU_CCUCON0.B.SPBDIV == 0) ||
            (SCU_CCUCON0.B.SPBDIV == 1))

        {
            spbFrequency = 0.0;
        }
        else
        {
            spbFrequency = sourceFrequency / SCU_CCUCON0.B.SPBDIV;
        }

        break;
    case 1:
        spbFrequency = sourceFrequency / 30;
        break;
    case 2:
        spbFrequency = sourceFrequency / 60;
        break;
    case 3:
        spbFrequency = sourceFrequency / 120;
        break;
    case 4:
        spbFrequency = sourceFrequency / 240;
        break;
    default:
        spbFrequency = 0.0;
        break;
    }

    return spbFrequency;
}


float32 IfxScuCcu_getSriFrequency(void)
{
    float32 sriFrequency;
    float32 sourceFrequency;
    sourceFrequency = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_0);

    switch (SCU_CCUCON0.B.LPDIV)
    {
    case 0:                    /*Not in low power mode */

        if (SCU_CCUCON0.B.SRIDIV == 0)
        {
            sriFrequency = 0.0;
        }
        else
        {
            sriFrequency = sourceFrequency / SCU_CCUCON0.B.SRIDIV;
        }

        break;
    case 1:
        sriFrequency = sourceFrequency / 30;
        break;
    case 2:
        sriFrequency = sourceFrequency / 60;
        break;
    case 3:
        sriFrequency = sourceFrequency / 120;
        break;
    case 4:
        sriFrequency = sourceFrequency / 240;
        break;
    default:
        sriFrequency = 0.0;
        break;
    }

    return sriFrequency;
}


boolean IfxScuCcu_init(const IfxScuCcu_Config *config)
{
    boolean status = 0;
    status = IfxScuCcu_configureCcuInitialStep(&config->pllInitialStepConfig);

    if (!status)
    {
        status = IfxScuCcu_distributeClockInline(&config->clockDistribution);
    }

    if (&config->flashFconWaitStateConfig != ((void *)0))
    {                                                    /*FIXME: is the required? Configure the wait state based on higher CPU freq*/
    }

    if (!status)
    {
        status = IfxScuCcu_throttleSysPllClockInline(&config->sysPllThrottleConfig);
    }

    return status;
}


void IfxScuCcu_initConfig(IfxScuCcu_Config *cfg)
{
    *cfg = IfxScuCcu_defaultClockConfig;
}


float32 IfxScuCcu_setAsclinFFrequency(float32 asclinFFreq)
{
    float32         freq       = 0;
    float32         source     = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_2);
    uint16          l_SEndInitPW;
    Ifx_SCU_CCUCON2 ccucon2    = SCU_CCUCON2;

    uint32          asclinFDiv = (uint32)__roundf(source / asclinFFreq);
    asclinFDiv = __maxu(asclinFDiv, 1);

    if ((asclinFDiv >= 7) && (asclinFDiv < 14) && ((asclinFDiv & 1) == 1))
    {
        asclinFDiv = asclinFDiv - 1;
    }

    if (asclinFDiv == 14)
    {
        asclinFDiv = 12;
    }

    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

    ccucon2.B.ASCLINFDIV = asclinFDiv;
    SCU_CCUCON2.U        = ccucon2.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);
    freq = IfxScuCcu_getAsclinFFrequency();
    return freq;
}


float32 IfxScuCcu_setAsclinSFrequency(float32 asclinSFreq)
{
    float32         freq    = 0;
    float32         source  = 0;
    uint16          l_SEndInitPW;
    Ifx_SCU_CCUCON2 ccucon2 = SCU_CCUCON2;

    switch (ccucon2.B.CLKSELASCLINS)
    {
    case 1:
    {
        source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_1);
    }
    break;
    case 2:
    {
        source = IfxScuCcu_getOsc0Frequency();
    }
    break;
    default:
        break;
    }

    uint32 asclinSDiv = (uint32)__roundf(source / asclinSFreq);
    asclinSDiv = __maxu(asclinSDiv, 1);

    if ((asclinSDiv >= 7) && (asclinSDiv < 14) && ((asclinSDiv & 1) == 1))
    {
        asclinSDiv = asclinSDiv - 1;
    }

    if (asclinSDiv == 14)
    {
        asclinSDiv = 12;
    }

    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

    ccucon2.B.ASCLINSDIV = asclinSDiv;
    SCU_CCUCON2.U        = ccucon2.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);
    freq = IfxScuCcu_getAsclinSFrequency();
    return freq;
}


float32 IfxScuCcu_setBbbFrequency(float32 bbbFreq)
{
    float32         freq   = 0;
    float32         source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_0);
    Ifx_SCU_CCUCON0 ccucon0;
    uint16          l_SEndInitPW;
    uint32          bbbDiv = (uint32)__roundf(source / bbbFreq);
    bbbDiv = __maxu(bbbDiv, 1);

    if ((bbbDiv >= 7) && (bbbDiv < 14) && ((bbbDiv & 1) == 1))
    {
        bbbDiv = bbbDiv - 1;
    }

    if (bbbDiv == 14)
    {
        bbbDiv = 12;
    }

    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

    ccucon0.U        = SCU_CCUCON0.U;
    ccucon0.B.BBBDIV = bbbDiv;
    ccucon0.B.UP     = 1;
    SCU_CCUCON0.U    = ccucon0.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

    while (SCU_CCUCON0.B.LCK != 0U)
    {}

    freq = IfxScuCcu_getBbbFrequency();
    return freq;
}


float32 IfxScuCcu_setCpuFrequency(IfxCpu_ResourceCpu cpu, float32 cpuFreq)
{
    uint16  endinitSfty_pw;
    float32 sriFreq;
    uint32  cpuDiv;

    sriFreq = IfxScuCcu_getSriFrequency();

    if (cpuFreq >= sriFreq)
    {
        cpuDiv = 0;
    }
    else
    {
        cpuDiv = (uint32)(64 - ((64 * cpuFreq) / sriFreq));
    }

    endinitSfty_pw = IfxScuWdt_getSafetyWatchdogPassword();

    {
        IfxScuWdt_clearSafetyEndinit(endinitSfty_pw);

        switch (cpu)
        {
        case IfxCpu_ResourceCpu_0:
            SCU_CCUCON6.U = cpuDiv;
            break;
        case IfxCpu_ResourceCpu_1:
            SCU_CCUCON7.U = cpuDiv;
            break;

        case IfxCpu_ResourceCpu_2:
            SCU_CCUCON8.U = cpuDiv;
            break;
        case IfxCpu_ResourceCpu_3:
            SCU_CCUCON9.U = cpuDiv;
            break;
        case IfxCpu_ResourceCpu_4:
            SCU_CCUCON10.U = cpuDiv;
            break;
        case IfxCpu_ResourceCpu_5:
            SCU_CCUCON11.U = cpuDiv;
            break;

        default:
            sriFreq = 0;
            break;
        }

        IfxScuWdt_setSafetyEndinit(endinitSfty_pw);
    }

    if (cpuDiv != 0)
    {
        sriFreq = sriFreq * ((64 - cpuDiv) / 64);
    }

    return sriFreq;
}


float32 IfxScuCcu_setFsi2Frequency(float32 fsi2Freq)
{
    float32         frequency = 0;
    uint16          l_SEndInitPW;
    Ifx_SCU_CCUCON0 ccucon0   = SCU_CCUCON0;

    if ((ccucon0.B.SRIDIV == 1) || (ccucon0.B.SRIDIV == 2))
    {
        uint32 fsi2Div;
        frequency    = IfxScuCcu_getSriFrequency();
        fsi2Div      = (uint32)__roundf(frequency / fsi2Freq);
        IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, (fsi2Div <= 3));
        l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
        IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

        ccucon0.U         = SCU_CCUCON0.U;
        ccucon0.B.FSI2DIV = fsi2Div;
        ccucon0.B.UP      = 1;
        SCU_CCUCON0.U     = ccucon0.U;

        IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

        while (SCU_CCUCON0.B.LCK != 0U)
        {}
    }

    frequency = IfxScuCcu_getFsi2Frequency();

    return frequency;
}


float32 IfxScuCcu_setFsiFrequency(float32 fsiFreq)
{
    float32         frequency = 0;
    uint16          l_SEndInitPW;
    Ifx_SCU_CCUCON0 ccucon0   = SCU_CCUCON0;

    if ((ccucon0.B.SRIDIV == 1) || (ccucon0.B.SRIDIV == 2))
    {
        uint32 fsiDiv;
        frequency    = IfxScuCcu_getSriFrequency();
        fsiDiv       = (uint32)__roundf(frequency / fsiFreq);
        IFX_ASSERT(IFX_VERBOSE_LEVEL_ERROR, (fsiDiv <= 3));
        l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
        IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

        ccucon0.U        = SCU_CCUCON0.U;
        ccucon0.B.FSIDIV = fsiDiv;
        ccucon0.B.UP     = 1;
        SCU_CCUCON0.U    = ccucon0.U;

        IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

        while (SCU_CCUCON0.B.LCK != 0U)
        {}
    }

    frequency = IfxScuCcu_getFsiFrequency();

    return frequency;
}


float32 IfxScuCcu_setGtmFrequency(float32 gtmFreq)
{
    uint16          l_SEndInitPW;
    Ifx_SCU_CCUCON0 ccucon0 = SCU_CCUCON0;
    uint32          gtmDiv  = 0;

    if (gtmFreq == (IfxScuCcu_getSpbFrequency() * 2))
    {
        gtmDiv = 1; //  if GtmDiv ==1, source Freq is (IfxScuCcu_getSpbFrequency() * 2);
    }
    else
    {
        float32 inputFreq = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_0);
        gtmDiv = (uint32)__roundf(inputFreq / gtmFreq);
        gtmDiv = __maxu(gtmDiv, 1);
    }

    if ((gtmDiv >= 7) && (gtmDiv < 14) && ((gtmDiv & 1) == 1))
    {
        gtmDiv = gtmDiv - 1;
    }

    if (gtmDiv == 14)
    {
        gtmDiv = 12;
    }

    l_SEndInitPW     = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);
    ccucon0.B.GTMDIV = gtmDiv;
    ccucon0.B.UP     = 1;
    SCU_CCUCON0.U    = ccucon0.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

    while (SCU_CCUCON0.B.LCK != 0U)
    {}

    return IfxScuCcu_getGtmFrequency();
}


float32 IfxScuCcu_setMcanFrequency(float32 mcanFreq)
{
    float32         source  = 0;
    Ifx_SCU_CCUCON1 ccucon1 = SCU_CCUCON1;
    uint16          l_SEndInitPW;

    switch (ccucon1.B.CLKSELMCAN)
    {
    case 1:
    {
        source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_1);
    }
    break;
    case 2:
    {
        source = IfxScuCcu_getOsc0Frequency();
    }
    break;
    default:
        break;
    }

    uint32 mcanDiv = (uint32)__roundf(source / mcanFreq);
    mcanDiv = __maxu(mcanDiv, 1);

    if ((mcanDiv >= 7) && (mcanDiv < 14) && ((mcanDiv & 1) == 1))
    {
        mcanDiv = mcanDiv - 1;
    }

    if (mcanDiv == 14)
    {
        mcanDiv = 12;
    }

    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

    ccucon1.B.MCANDIV = mcanDiv;
    SCU_CCUCON1.U     = ccucon1.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

    while (SCU_CCUCON1.B.LCK != 0U)
    {}

    return IfxScuCcu_getMcanFrequency();
}


float32 IfxScuCcu_setMscFrequency(float32 mscFreq)
{
    float32         mscSource = 0;
    Ifx_SCU_CCUCON1 ccucon1   = SCU_CCUCON1;
    uint16          l_SEndInitPW;

    switch (ccucon1.B.CLKSELMSC)
    {
    case 1:
    {
        mscSource = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_1);
    }
    break;
    case 2:
    {
        mscSource = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_2);
    }
    break;
    default:
        break;
    }

    uint32 mscDiv = (uint32)__roundf(mscSource / mscFreq);
    mscDiv = __maxu(mscDiv, 1);

    if ((mscDiv >= 7) && (mscDiv < 14) && ((mscDiv & 1) == 1))
    {
        mscDiv = mscDiv - 1;
    }

    if (mscDiv == 14)
    {
        mscDiv = 12;
    }

    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

    ccucon1.B.MSCDIV = mscDiv;
    SCU_CCUCON1.U    = ccucon1.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

    while (SCU_CCUCON1.B.LCK != 0U)
    {}

    return IfxScuCcu_getMscFrequency();
}


float32 IfxScuCcu_setQspiFrequency(float32 qspiFreq)
{
    float32         source  = 0;
    Ifx_SCU_CCUCON1 ccucon1 = SCU_CCUCON1;
    uint16          l_SEndInitPW;

    switch (SCU_CCUCON1.B.CLKSELQSPI)
    {
    case 1:
    {
        source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_1);
    }
    break;
    case 2:
    {
        source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_2);
    }
    break;
    default:
        break;
    }

    uint32 qspiDiv = (uint32)__roundf(source / qspiFreq);
    qspiDiv = __maxu(qspiDiv, 1);

    if ((qspiDiv >= 7) && (qspiDiv < 14) && ((qspiDiv & 1) == 1))
    {
        qspiDiv = qspiDiv - 1;
    }

    if (qspiDiv == 14)
    {
        qspiDiv = 12;
    }

    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

    ccucon1.B.QSPIDIV = qspiDiv;
    SCU_CCUCON1.U     = ccucon1.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

    while (SCU_CCUCON1.B.LCK != 0U)
    {}

    return IfxScuCcu_getQspiFrequency();
}


float32 IfxScuCcu_setSpbFrequency(float32 spbFreq)
{
    /* TODO: check whether it is necessary to disable trap and/or the safety */
    uint16          l_EndInitPW;
    uint16          l_SEndInitPW;
    Ifx_SCU_CCUCON0 ccucon0;
    float32         inputFreq = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_0);
    uint32          spbDiv    = (uint32)(inputFreq / spbFreq);
    spbDiv = __maxu(spbDiv, 2);

    if ((spbDiv >= 7) && (spbDiv < 14) && ((spbDiv & 1) == 1))
    {
        spbDiv = spbDiv - 1;
    }

    if (spbDiv == 14)
    {
        spbDiv = 12;
    }

    l_EndInitPW  = IfxScuWdt_getCpuWatchdogPassword();
    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();

    IfxScuWdt_clearCpuEndinit(l_EndInitPW);
    Ifx_SCU_TRAPDIS0 trapdis0;
    trapdis0.U      = SCU_TRAPDIS0.U;
    SCU_TRAPDIS0.U |= 0x3E0U;
    IfxScuWdt_setCpuEndinit(l_EndInitPW);

    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);
    ccucon0.U        = SCU_CCUCON0.U;
    ccucon0.B.SPBDIV = spbDiv;
    ccucon0.B.UP     = 1;
    SCU_CCUCON0.U    = ccucon0.U;
    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

    IfxScuWdt_clearCpuEndinit(l_EndInitPW);
    SCU_TRAPDIS0.U = trapdis0.U;
    IfxScuWdt_setCpuEndinit(l_EndInitPW);

    while (SCU_CCUCON0.B.LCK != 0U)
    {}

    return IfxScuCcu_getSpbFrequency();
}


float32 IfxScuCcu_setSriFrequency(float32 sriFreq)
{
    float32         freq   = 0;
    float32         source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_0);
    Ifx_SCU_CCUCON0 ccucon0;
    uint16          l_SEndInitPW;
    uint32          sriDiv = (uint32)__roundf(source / sriFreq);
    sriDiv = __maxu(sriDiv, 1);

    if ((sriDiv >= 7) && (sriDiv < 14) && ((sriDiv & 1) == 1))
    {
        sriDiv = sriDiv - 1;
    }

    if (sriDiv == 14)
    {
        sriDiv = 12;
    }

    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

    ccucon0.U        = SCU_CCUCON0.U;
    ccucon0.B.SRIDIV = sriDiv;
    ccucon0.B.UP     = 1;
    SCU_CCUCON0.U    = ccucon0.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

    while (SCU_CCUCON0.B.LCK != 0U)
    {}

    freq = IfxScuCcu_getSriFrequency();
    return freq;
}


float32 IfxScuCcu_setStmFrequency(float32 stmFreq)
{
    float32         freq   = 0;
    float32         source = IfxScuCcu_getSourceFrequency(IfxScuCcu_Fsource_0);
    Ifx_SCU_CCUCON0 ccucon0;
    uint16          l_SEndInitPW;
    uint32          stmDiv = (uint32)__roundf(source / stmFreq);
    stmDiv = __maxu(stmDiv, 1);

    if ((stmDiv >= 7) && (stmDiv < 14) && ((stmDiv & 1) == 1))
    {
        stmDiv = stmDiv - 1;
    }

    if (stmDiv == 14)
    {
        stmDiv = 12;
    }

    l_SEndInitPW = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(l_SEndInitPW);

    ccucon0.U        = SCU_CCUCON0.U;
    ccucon0.B.STMDIV = stmDiv;
    ccucon0.B.UP     = 1;
    SCU_CCUCON0.U    = ccucon0.U;

    IfxScuWdt_setSafetyEndinit(l_SEndInitPW);

    while (SCU_CCUCON0.B.LCK != 0U)
    {}

    freq = IfxScuCcu_getStmFrequency();
    return freq;
}


void IfxScuCcu_switchToBackupClock(const IfxScuCcu_Config *cfg)
{
    uint16                      endinitSfty_pw;
    int                         pllStepsCount;
    IfxScuCcu_PllThrottleConfig pllThrottleConfig = cfg->sysPllThrottleConfig;

    if (SCU_CCUCON0.B.CLKSEL == 0) /* Already source is backup clock */
    {
        return;
    }

    endinitSfty_pw = IfxScuWdt_getSafetyWatchdogPassword();

    /*Start Pll ramp down sequence */
    for (pllStepsCount = pllThrottleConfig.numOfSteps; pllStepsCount > 0; pllStepsCount--)
    {                       /*iterate through number of pll steps */
        {
            IfxScuWdt_clearSafetyEndinit(endinitSfty_pw);

            /*Configure K2 divider */
            while (SCU_SYSPLLSTAT.B.K2RDY == 0U)
            {
                /*Wait until K2 divider is ready */
                /*No "timeout" required, because if it hangs, Safety Endinit will give a trap */
            }

            /*Now set the K2 divider value for the step corresponding to step count */
            SCU_SYSPLLCON1.B.K2DIV = pllThrottleConfig.pllSteps[pllStepsCount - 1].k2Step;
            IfxScuWdt_setSafetyEndinit(endinitSfty_pw);

            /*Wait for waitCounter corresponding to the pll step */
            //IfxScuCcu_wait(pllThrottleConfig.pllSteps[pllStepsCount - 1].waitTime);
        }
    }

    /* Reset Safety ENDINIT, SCU_CCUCON registers are protected*/
    IfxScuWdt_clearSafetyEndinitInline(endinitSfty_pw);

    while (SCU_CCUCON0.B.LCK != 0U)
    {} /*Wait till ccucon0 lock is set, No "timeout" required, ENDINIT watch-dog is active! */

    {
        Ifx_SCU_CCUCON0 scu_ccucon0;
        scu_ccucon0.U        = SCU_CCUCON0.U;
        scu_ccucon0.B.CLKSEL = 0; /*Select the EVR as fsource0/1/2 for the clock distribution */
        scu_ccucon0.B.UP     = 1; /*Update the ccucon0 register */
        SCU_CCUCON0.U        = scu_ccucon0.U;
    }
}


void IfxScuCcu_throttleSysPllClock(IfxScuCcu_PllThrottleConfig *pllThrottleConfig)
{
    IfxScuCcu_throttleSysPllClockInline(pllThrottleConfig);
}
