/**
 * \file IfxPmsEvr.c
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

#include "IfxPmsEvr.h"

/******************************************************************************/
/*-----------------------Private Function Prototypes--------------------------*/
/******************************************************************************/

/**
 */
IFX_STATIC boolean IfxPmsEvr_areInitValuesRightLocal(const IfxPmsEvr_checkRegConfig *const checkConfig);

/**
 */
IFX_STATIC boolean IfxPmsEvr_runInitSequenceLocal(const IfxPmsEvr_initSequence *const sequence);

/******************************************************************************/
/*-----------------------Exported Variables/Constants-------------------------*/
/******************************************************************************/


IFX_CONST IfxPmsEvr_StepDownRegulatorRegConfig IfxPmsEvr_cfgPhase1Default[]       = {
    {&PMS_EVRSDCOEFF6.U, (0x00881B02U), (0xFFFFFFFFU)}, /*EVRSDCOEFF6 (Driver) = 0088 1B02H*/
    {&PMS_EVRSDCOEFF7.U, (0x0000D8A6U), (0xFFFFFFFFU)}, /*EVRSDCOEFF7 (Driver) = 0000 D8A6H*/
    {&PMS_EVRSDCOEFF8.U, (0x00881B02U), (0xFFFFFFFFU)}, /*EVRSDCOEFF8 (Driver) = 0088 1B02H*/
    {&PMS_EVRSDCOEFF9.U, (0x0000D8A6U), (0xFFFFFFFFU)}, /*EVRSDCOEFF9 (Driver) = 0000 D8A6H*/
    {&PMS_EVRSDCTRL7.U,  (0x000002C8U), (0xFFFFFFFFU)}, /*EVRSDCTRL7 (Driver) = 0000 02C8H*/
};

IFX_CONST IfxPmsEvr_StepDownRegulatorRegConfig IfxPmsEvr_cfgPhase2Default[] = {
    {&PMS_EVRSDCTRL7.U, (0x00000000U), (IFX_PMS_EVRSDCTRL_CTRL7_DRVSLOMODE_MSK << IFX_PMS_EVRSDCTRL_CTRL7_DRVSLOMODE_OFF)},   /*EVRSDCTRL7.DRVSLOMODE = 00B*/
};

IFX_CONST IfxPmsEvr_StepDownRegulatorRegConfig IfxPmsEvr_cfgPhase3Default[] = {
    {&PMS_EVRSDCTRL0.U,  (0x20360002U), (0xFFFFFFFFU)}, /*EVRSDCTRL0 (Freq, Spreading) = 2036 0002H*/
    {&PMS_EVRSDCTRL1.U,  (0x0B690708U), (0xFFFFFFFFU)}, /*EVRSDCTRL1 (PWM mode) = 0B69 0708H*/
    {&PMS_EVRSDCOEFF0.U, (0x350873B6U), (0xFFFFFFFFU)}, /*EVRSDCOEFF0 (PWM mode) = 3508 73B6H*/
    {&PMS_EVRSDCOEFF1.U, (0x02946C46U), (0xFFFFFFFFU)}, /*EVRSDCOEFF1 (PWM mode) = 0294 6C46H*/
    {&PMS_EVRSDCTRL2.U,  (0x0036033BU), (0xFFFFFFFFU)}, /*EVRSDCTRL2 (LP mode) = 0036 033BH*/
    {&PMS_EVRSDCTRL3.U,  (0x0B690810U), (0xFFFFFFFFU)}, /*EVRSDCTRL3 (LP mode) = 0B69 0810H*/
    {&PMS_EVRSDCOEFF2.U, (0x3408710EU), (0xFFFFFFFFU)}, /*EVRSDCOEFF2 (LP mode) = 3408 710EH*/
    {&PMS_EVRSDCOEFF3.U, (0x02946C44U), (0xFFFFFFFFU)}, /*EVRSDCOEFF3 (LP mode) = 0294 6C44H*/
    {&PMS_EVRSDCTRL4.U,  (0x00360009U), (0xFFFFFFFFU)}, /*EVRSDCTRL4 (Start mode) = 0036 0009H*/
    {&PMS_EVRSDCTRL5.U,  (0x0B690808U), (0xFFFFFFFFU)}, /*EVRSDCTRL5 (Start mode) = 0B69 0808H*/
    {&PMS_EVRSDCTRL6.U,  (0x00231C94U), (0xFFFFFFFFU)}, /*EVRSDCTRL6 (Open Loop) = 0023 1C94H*/
    {&PMS_EVRSDCOEFF4.U, (0x1B0823B6U), (0xFFFFFFFFU)}, /*EVRSDCOEFF4 (Start mode) = 1B08 23B6H*/
    {&PMS_EVRSDCOEFF5.U, (0x02946C44U), (0xFFFFFFFFU)}, /*EVRSDCOEFF5 (Start mode) = 0294 6C44H*/
    {&PMS_EVRSDCTRL8.U,  (0x1121048EU), (0xFFFFFFFFU)}, /*EVRSDCTRL8 (FBADC) = 1121 048EH*/
    {&PMS_EVRSDCTRL9.U,  (0x00000434U), (0xFFFFFFFFU)}, /*EVRSDCTRL9 (FFADC) = 0000 0434H*/
    {&PMS_EVRSDCTRL10.U, (0x00000000U), (0xFFFFFFFFU)}, /*EVRSDCTRL10 (Short) = 0000 0000H*/
    {&PMS_EVRSDCTRL11.U, (0x12070909U), (0xFFFFFFFFU)}, /*EVRSDCTRL11 (Droop) = 1207 0909H*/
};

IFX_CONST IfxPmsEvr_initSequencePhase          IfxPmsEvr_cfgPhasesDefault[] = {
    {
        sizeof(IfxPmsEvr_cfgPhase1Default) / sizeof(IfxPmsEvr_StepDownRegulatorRegConfig),
        IfxPmsEvr_cfgPhase1Default,
        (0.00002F)
    },
    {
        sizeof(IfxPmsEvr_cfgPhase2Default) / sizeof(IfxPmsEvr_StepDownRegulatorRegConfig),
        IfxPmsEvr_cfgPhase2Default,
        (0.00002F)
    },
    {
        sizeof(IfxPmsEvr_cfgPhase3Default) / sizeof(IfxPmsEvr_StepDownRegulatorRegConfig),
        IfxPmsEvr_cfgPhase3Default,
        (0.00002F)
    }
};

IFX_CONST IfxPmsEvr_initSequence               IfxPmsEvr_cfgSequenceDefault = {
    sizeof(IfxPmsEvr_cfgPhasesDefault) / sizeof(IfxPmsEvr_initSequencePhase),
    IfxPmsEvr_cfgPhasesDefault
};

IFX_CONST IfxPmsEvr_StepDownRegulatorRegConfig IfxPmsEvr_checkRegValuesDefault[] = {
    {&PMS_EVRSDCOEFF6.U, (0x00881B02U), (0xFFFFFFFFU)}, /*EVRSDCOEFF6 (Driver) = 0088 1B02H*/
    {&PMS_EVRSDCOEFF7.U, (0x0000D8A6U), (0xFFFFFFFFU)}, /*EVRSDCOEFF7 (Driver) = 0000 D8A6H*/
    {&PMS_EVRSDCOEFF8.U, (0x00881B02U), (0xFFFFFFFFU)}, /*EVRSDCOEFF8 (Driver) = 0088 1B02H*/
    {&PMS_EVRSDCOEFF9.U, (0x0000D8A6U), (0xFFFFFFFFU)}, /*EVRSDCOEFF9 (Driver) = 0000 D8A6H*/
    {&PMS_EVRSDCTRL7.U,  (0x000000C8U), (0xFFFFFFFFU)}, /*EVRSDCTRL7 (Driver) = 0000 00C8H*/
    {&PMS_EVRSDCTRL0.U,  (0x20360002U), (0xFFFFFFFFU)}, /*EVRSDCTRL0 (Freq, Spreading) = 2036 0002H*/
    {&PMS_EVRSDCTRL1.U,  (0x0B690708U), (0xFFFFFFFFU)}, /*EVRSDCTRL1 (PWM mode) = 0B69 0708H*/
    {&PMS_EVRSDCOEFF0.U, (0x350873B6U), (0xFFFFFFFFU)}, /*EVRSDCOEFF0 (PWM mode) = 3508 73B6H*/
    {&PMS_EVRSDCOEFF1.U, (0x02946C46U), (0xFFFFFFFFU)}, /*EVRSDCOEFF1 (PWM mode) = 0294 6C46H*/
    {&PMS_EVRSDCTRL2.U,  (0x0036033BU), (0xFFFFFFFFU)}, /*EVRSDCTRL2 (LP mode) = 0036 033BH*/
    {&PMS_EVRSDCTRL3.U,  (0x0B690810U), (0xFFFFFFFFU)}, /*EVRSDCTRL3 (LP mode) = 0B69 0810H*/
    {&PMS_EVRSDCOEFF2.U, (0x3408710EU), (0xFFFFFFFFU)}, /*EVRSDCOEFF2 (LP mode) = 3408 710EH*/
    {&PMS_EVRSDCOEFF3.U, (0x02946C44U), (0xFFFFFFFFU)}, /*EVRSDCOEFF3 (LP mode) = 0294 6C44H*/
    {&PMS_EVRSDCTRL4.U,  (0x00360009U), (0xFFFFFFFFU)}, /*EVRSDCTRL4 (Start mode) = 0036 0009H*/
    {&PMS_EVRSDCTRL5.U,  (0x0B690808U), (0xFFFFFFFFU)}, /*EVRSDCTRL5 (Start mode) = 0B69 0808H*/
    {&PMS_EVRSDCTRL6.U,  (0x00231C94U), (0xFFFFFFFFU)}, /*EVRSDCTRL6 (Open Loop) = 0023 1C94H*/
    {&PMS_EVRSDCOEFF4.U, (0x1B0823B6U), (0xFFFFFFFFU)}, /*EVRSDCOEFF4 (Start mode) = 1B08 23B6H*/
    {&PMS_EVRSDCOEFF5.U, (0x02946C44U), (0xFFFFFFFFU)}, /*EVRSDCOEFF5 (Start mode) = 0294 6C44H*/
    {&PMS_EVRSDCTRL8.U,  (0x1121048EU), (0xFFFFFFFFU)}, /*EVRSDCTRL8 (FBADC) = 1121 048EH*/
    {&PMS_EVRSDCTRL9.U,  (0x00000434U), (0xFFFFFFFFU)}, /*EVRSDCTRL9 (FFADC) = 0000 0434H*/
    {&PMS_EVRSDCTRL10.U, (0x00000000U), (0xFFFFFFFFU)}, /*EVRSDCTRL10 (Short) = 0000 0000H*/
    {&PMS_EVRSDCTRL11.U, (0x12070909U), (0xFFFFFFFFU)}, /*EVRSDCTRL11 (Droop) = 1207 0909H*/
};

IFX_CONST IfxPmsEvr_checkRegConfig             IfxPmsEvr_checkRegCfgDefault = {
    sizeof(IfxPmsEvr_checkRegValuesDefault) / sizeof(IfxPmsEvr_StepDownRegulatorRegConfig),
    IfxPmsEvr_checkRegValuesDefault
};

IFX_CONST void *const                          IfxPmsEvr_runInitSequenceFunPtr = IfxPmsEvr_runInitSequenceLocal;
IFX_CONST void *const                          IfxPmsEvr_areInitValuesRightFunPtr = IfxPmsEvr_areInitValuesRightLocal;

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void IfxPmsEvr_filterSecondaryConversionResult(Ifx_PMS *pms, IfxPmsEvr_SupplyFilter adcFilterValue, IfxPmsEvr_SupplyMode supply)
{
    uint16              passwd = IfxScuWdt_getSafetyWatchdogPassword();
    Ifx_PMS_EVR_MONFILT tempMONFILT;
    IfxScuWdt_clearSafetyEndinit(passwd);
    tempMONFILT.U = pms->EVR.MONFILT.U;

    switch (supply)
    {
    case IfxPmsEvr_SupplyMode_evrc:
        tempMONFILT.B.EVRCFIL = adcFilterValue;
        break;
    case IfxPmsEvr_SupplyMode_evr33:
        tempMONFILT.B.EVR33FIL = adcFilterValue;
        break;
    case IfxPmsEvr_SupplyMode_swd:
        tempMONFILT.B.SWDFIL = adcFilterValue;
        break;
    case IfxPmsEvr_SupplyMode_evrpr:
        tempMONFILT.B.PREFIL = adcFilterValue;
        break;
    case IfxPmsEvr_SupplyMode_vddm:
        tempMONFILT.B.VDDMFIL = adcFilterValue;
        break;
    case IfxPmsEvr_SupplyMode_sb:
        tempMONFILT.B.SBFIL = adcFilterValue;
        break;
    }

    pms->EVR.MONFILT.U = tempMONFILT.U;
    IfxScuWdt_setSafetyEndinit(passwd);
}


uint8 IfxPmsEvr_getSecondaryAdcResult(Ifx_PMS *pms, IfxPmsEvr_SupplyMode supply)
{
    uint8 adcResult = 0;

    switch (supply)
    {
    case IfxPmsEvr_SupplyMode_evrc: adcResult  = pms->EVR.MONSTAT1.B.ADCCV;
        break;
    case IfxPmsEvr_SupplyMode_evr33: adcResult = pms->EVR.MONSTAT1.B.ADC33V;
        break;
    case IfxPmsEvr_SupplyMode_swd: adcResult   = pms->EVR.MONSTAT1.B.ADCSWDV;
        break;
    case IfxPmsEvr_SupplyMode_evrpr: adcResult = pms->EVR.MONSTAT2.B.ADCPRE;
        break;
    case IfxPmsEvr_SupplyMode_sb: adcResult    = pms->EVR.MONSTAT2.B.ADCSB;
        break;
    case IfxPmsEvr_SupplyMode_vddm: adcResult  = pms->EVR.MONSTAT2.B.ADCVDDM;
        break;
    }

    return adcResult;
}


void IfxPmsEvr_setSecondaryOverVoltageThreshold(Ifx_PMS *pms, uint8 thresholdLevel, IfxPmsEvr_SupplyMode supply)
{
    uint16             passwd = IfxScuWdt_getSafetyWatchdogPassword();
    Ifx_PMS_EVR_OVMON  tempOVMON;
    Ifx_PMS_EVR_OVMON2 tempOVMON2;
    IfxScuWdt_clearSafetyEndinit(passwd);

    tempOVMON.U  = pms->EVR.OVMON.U;
    tempOVMON2.U = pms->EVR.OVMON2.U;

    switch (supply)
    {
    case IfxPmsEvr_SupplyMode_evrc:
        tempOVMON.B.EVRCOVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_evr33:
        tempOVMON.B.EVR33OVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_swd:
        tempOVMON.B.SWDOVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_evrpr:
        tempOVMON2.B.PREOVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_vddm:
        tempOVMON2.B.VDDMOVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_sb:
        tempOVMON2.B.SBOVVAL = thresholdLevel;
        break;
    }

    pms->EVR.OVMON.U  = tempOVMON.U;
    pms->EVR.OVMON2.U = tempOVMON2.U;
    IfxScuWdt_setSafetyEndinit(passwd);
}


void IfxPmsEvr_setSecondaryUnderVoltageThreshold(Ifx_PMS *pms, uint8 thresholdLevel, IfxPmsEvr_SupplyMode supply)
{
    uint16             passwd = IfxScuWdt_getSafetyWatchdogPassword();
    Ifx_PMS_EVR_UVMON  tempUVMON;
    Ifx_PMS_EVR_UVMON2 tempUVMON2;
    IfxScuWdt_clearSafetyEndinit(passwd);
    tempUVMON.U  = pms->EVR.UVMON.U;
    tempUVMON2.U = pms->EVR.UVMON2.U;

    switch (supply)
    {
    case IfxPmsEvr_SupplyMode_evrc:
        tempUVMON.B.EVRCUVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_evr33:
        tempUVMON.B.EVR33UVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_swd:
        tempUVMON.B.SWDUVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_evrpr:
        tempUVMON2.B.PREUVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_vddm:
        tempUVMON2.B.VDDMUVVAL = thresholdLevel;
        break;
    case IfxPmsEvr_SupplyMode_sb:
        tempUVMON2.B.SBUVVAL = thresholdLevel;
        break;
    }

    pms->EVR.UVMON.U  = tempUVMON.U;
    pms->EVR.UVMON2.U = tempUVMON2.U;
    IfxScuWdt_setSafetyEndinit(passwd);
}

/*Add options to eliminate usage of stack pointers unnecessarily*/
#if defined(__GNUC__)
#pragma GCC optimize ("-O2")
#endif

static boolean IfxPmsEvr_runInitSequenceLocal(const IfxPmsEvr_initSequence *const sequence)
{
    boolean                                     pmsInitDone    = TRUE;
    uint32                                      regVal;
    uint16                                      endinitSfty_pw = IfxScuWdt_getGlobalSafetyEndinitPasswordInline();
    const IfxPmsEvr_initSequencePhase          *phaseConfig;
    const IfxPmsEvr_StepDownRegulatorRegConfig *regConfig;

    /*Loop through each configured phase*/
    for (phaseConfig = &sequence->phaseConfig[0];
         phaseConfig < &sequence->phaseConfig[sequence->numOfPhases];
         phaseConfig++)
    {
        IfxScuWdt_clearGlobalSafetyEndinitInline(endinitSfty_pw);

        /*Loop through each register which is configured in the phase configuration*/
        for (regConfig = &phaseConfig->regConfig[0];
             regConfig < &phaseConfig->regConfig[phaseConfig->numOfRegisters];
             regConfig++)
        {
            regVal  = (*((uint32 *)regConfig->regAddr));
            regVal &= ~regConfig->mask;
            regVal |= regConfig->value;

            /** During normal running one must wait for the LCK bit.
             * However, for this function, as this is used only with CPU0 startup no wait required
             */
            (*((uint32 *)regConfig->regAddr)) = regVal; /*Write to the physical register*/
        }

        PMS_EVRSDCTRL0.B.UP = 1;
        IfxScuWdt_setGlobalSafetyEndinitInline(endinitSfty_pw);

        /* wait for the UP bit*/
        sint32 timeoutCount = IFXPMSEVR_CTRL_UP_WAIT_TIMEOUTCOUNT;

        /*Now, wait for the UP bit at EVRSDCTRL0 is reset, which is to indicate the configurations are done*/
        do
        {
            if (--timeoutCount <= 0)
            {
                pmsInitDone = FALSE;
                break;
            }
        } while (PMS_EVRSDCTRL0.B.UP == 1);

        IfxPmsEvr_wait(phaseConfig->waitInSecs);            // wait for configured time
    }

    /*return the status*/
    __moveToDataParamRet(pmsInitDone);
    __jumpBackToLink();
    return pmsInitDone;
}
/*Restore the options to command line provided ones*/
#if defined(__GNUC__)
#pragma GCC reset_options
#endif

/*Add options to eliminate usage of stack pointers unnecessarily*/
#if defined(__GNUC__)
#pragma GCC optimize ("-O2")
#endif

static boolean IfxPmsEvr_areInitValuesRightLocal(const IfxPmsEvr_checkRegConfig *const checkConfig)
{
    boolean allRight = TRUE;
    sint32  regCfgCount;

    for (regCfgCount = 0; regCfgCount < checkConfig->numOfRegisters; regCfgCount++)
    {
        uint32                                      regVal;
        const IfxPmsEvr_StepDownRegulatorRegConfig *regConfig = &checkConfig->regConfig[regCfgCount];
        regVal  = (*((uint32 *)regConfig->regAddr));
        regVal &= regConfig->mask;

        if (regVal != regConfig->value)
        {
            allRight = FALSE;
        }
    }

    /*Check if EVRSTAT.SDVOK is set*/
    if (allRight == TRUE)
    {
        if (PMS_EVRSTAT.B.SDVOK != 1)
        {
            allRight = FALSE;
        }
    }

    __moveToDataParamRet(allRight);
    __jumpBackToLink();
    return allRight;
}

/*Restore the options to command line provided ones*/
#if defined(__GNUC__)
#pragma GCC reset_options
#endif

