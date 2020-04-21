/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0|4.1.2  */
/** @tagSettings DEFAULT_ARCHITECTURE= MPC5607B|MPC5645S|MPC5748G|MPC5646B|MPC5744P|MPC5747C */

/** In order to support multiple hw units we need to match group to a certain hw controller.
 *  We handle this in a very simple way i.e. group 0-99 -> hwUnitId 0, group 100-199 -> hwUnitId 1 etc.*
 */

/* ----------------------------[Supported Requirements]---------*/
/* @req SWS_Adc_00080 If for a notification call-back the NULL pointer is configured, no call-back shall be executed. */
/* @req SWS_Adc_00356 The ADC module shall support the start condition “Software API Call” for all conversion modes. The trigger source “Software API Call” means that the conversion of an ADC Channel group is started/stopped with a service provided by the ADC module*/
/* @req SWS_Adc_00279 The ADC module shall allow configuring exactly one trigger source for each ADC Channel group.
 * 					  Configuration: Only Software trigger source is supported */

/* ----------------------------[includes]------------------------------------*/

#include "arc_assert.h"
#include "Std_Types.h"
#include "mpc55xx.h"
#include "Mcu.h"
#include "Adc.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM) || defined (WDG_USE_DEM)
#include "Dem.h"
#endif
#include "Os.h"
#include "isr.h"
#include "irq.h"
#include "arc.h"
#include "Adc_Hw_Helpers.h"
#include "Adc_Hw_Common.h"
#include "Adc_Internal.h"

/* ----------------------------[private define]------------------------------*/

/* DMA support is only experimental for 5606 */
#define DONT_USE_DMA_IN_ADC_MPC560X

#if ( defined(CFG_MPC5606S) && !defined(DONT_USE_DMA_IN_ADC_MPC560X) )
#define ADC_USES_DMA
#include "Dma.h"
#endif

#if ( defined(ADC_USES_DMA) && !defined(USE_DMA) )
#error Adc is configured to use Dma but the module is not enabled.
#endif

#if defined(CFG_MPC5668)
#define ADC0_EOC_INT    ADC_A_EOC
#define ADC0_ER_INT     ADC_A_ERR
#define ADC0_WD_INT     ADC_A_WD
#define ADC1_EOC_INT    ADC_B_EOC
#define ADC1_ER_INT     ADC_B_ERR
#define ADC1_WD_INT     ADC_B_WD
#endif

#if defined(CFG_MPC5668)
#define ADC_BASE_ADDRESS 0xFFF80000uL
#define GET_HW_CONTROLLER(_controller)  \
                            ((volatile struct ADC_tag *)(ADC_BASE_ADDRESS + 0x4000uL*(_controller)))
#elif defined(CFG_MPC5744P)
/*lint -e725 -e904 Misra :Configuration : Return statement before end of function 'GET_HW_CONTROLLER(uint32)' [MISRA 2012 Rule 15.5, advisory]*/
static volatile struct ADC_tag* const GET_HW_CONTROLLER(uint32 _controller) {
    static volatile struct ADC_tag* const ADC_HW[] = {&ADC_0, &ADC_1, &ADC_2, &ADC_3};
    if ( _controller > 3u) {
        ASSERT(0u);
        return (volatile struct ADC_tag *)0u;
    }
    return ADC_HW[_controller];

}

#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
/*lint -e725 -e904 Misra :Configuration : Return statement before end of function 'GET_HW_CONTROLLER(uint32)' [MISRA 2012 Rule 15.5, advisory]*/
static volatile struct ADC_tag* const GET_HW_CONTROLLER(uint32 _controller) {
    static volatile struct ADC_tag* const ADC_HW[] = {&ADC_0, &ADC_1};
    if ( _controller > 1u) {
        ASSERT(0u);
        return (volatile struct ADC_tag *)0u;
    }
    return ADC_HW[_controller];

}

#elif defined(CFG_MPC5777M)
#define ADC_tag SARADC_tag
/*lint -e725 -e904 Misra :Configuration : Return statement before end of function 'GET_HW_CONTROLLER(uint32)' [MISRA 2012 Rule 15.5, advisory]*/
static volatile struct ADC_tag* const GET_HW_CONTROLLER(uint32 _controller) {
    static volatile struct ADC_tag* const ADC_HW[] = {&SARADC_0, &SARADC_1, &SARADC_2, &SARADC_3, &SARADC_4, &SARADC_5, &SARADC_6, &SARADC_7, &SARADC_8, &SARADC_9, &SARADC_10, &SARADC_B};
    if ( _controller > 11u) {
        ASSERT(0u);
        return (volatile struct ADC_tag *)0u;
    }
    return ADC_HW[_controller];

}

#else
#define ADC_BASE_ADDRESS 0xFFE00000uL
#define GET_HW_CONTROLLER(_controller)  \
                            ((volatile struct ADC_tag *)(ADC_BASE_ADDRESS + ((_controller)*0x00004000uL)))
#endif

/* Assign application according to define */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS) && !defined(ADC_ARC_ISR_APP)
#if ((OS_SC3 == STD_ON) || (OS_SC4 == STD_ON))
#error You must define ADC_ARC_ISR_APP
#else
#define ADC_ARC_ISR_APP             0u
#endif
#endif

#define GET_HWUNITID_FROM_GROUP(_group) (_group / ADC_NOF_GROUP_PER_CONTROLLER)

/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
#ifdef ADC_HWUNIT_ADC_CTRL_0_ENABLED
/**
 * Interrupt Service Routine for HW unit 0
 */
ISR(Group0ConversionComplete_ADC0);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_1_ENABLED
/**
 * Interrupt Service Routine for HW unit 1
 */
ISR(Group0ConversionComplete_ADC1);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_2_ENABLED
/**
 * Interrupt Service Routine for HW unit 2
 */
ISR(Group0ConversionComplete_ADC2);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_3_ENABLED
/**
 * Interrupt Service Routine for HW unit 3
 */
ISR(Group0ConversionComplete_ADC3);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_4_ENABLED
/**
 * Interrupt Service Routine for HW unit 4
 */
ISR(Group0ConversionComplete_ADC4);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_5_ENABLED
/**
 * Interrupt Service Routine for HW unit 5
 */
ISR(Group0ConversionComplete_ADC5);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_6_ENABLED
/**
 * Interrupt Service Routine for HW unit 6
 */
ISR(Group0ConversionComplete_ADC6);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_7_ENABLED
/**
 * Interrupt Service Routine for HW unit 7
 */
ISR(Group0ConversionComplete_ADC7);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_8_ENABLED
/**
 * Interrupt Service Routine for HW unit 8
 */
ISR(Group0ConversionComplete_ADC8);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_9_ENABLED
/**
 * Interrupt Service Routine for HW unit 9
 */
ISR(Group0ConversionComplete_ADC9);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_10_ENABLED
/**
 * Interrupt Service Routine for HW unit 10
 */
ISR(Group0ConversionComplete_ADC10);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_11_ENABLED
/**
 * Interrupt Service Routine for HW unit 11
 */
ISR(Group0ConversionComplete_ADC11);
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_B_ENABLED
/**
 * Interrupt Service Routine for HW unit B
 */
ISR(Group0ConversionComplete_ADCB);
#endif
/**
 * Interrupt Service Routine that all the others above use. This gets called when
 * an end of chain interrupt occurs.
 * @param unit Which HW unit
 */
void Group0ConversionComplete(uint32 unit);
/**
 * Sets the clock and powers up the ADC.
 * @param AdcConfigPtr  Pointer to the configuration to use.
 */
static void ConfigureADC(const Adc_ConfigType *AdcConfigPtr);
/**
 * Sets up the ISRs for ADC interrupts.
 */
static void ConfigureADCInterrupts(void);
/**
 * Called in interrupt context. Buffer pointers and sample counters are re-calculated here and
 * state is changed.
 *
 * @param adcGroup      Pointer to the groupDef to use.
 * @param hwPtr         Pointer to a struct of ADC registers for this hw unit.
 */
void GroupConversionComplete(const Adc_GroupDefType *adcGroup, volatile struct ADC_tag *hwPtr);

/* ----------------------------[private variables]---------------------------*/

/* static variable declarations */
#define ADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"     /*lint !e9019 MISRA : OTHER :OTHER AUTOSAR specified way of using MemMap [MISRA 2012 Rule 20.1, advisory]*/
static Adc_StateType adcState = ADC_STATE_UNINIT;
#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"     /*lint !e9019 MISRA : OTHER :OTHER AUTOSAR specified way of using MemMap [MISRA 2012 Rule 20.1, advisory]*/

#define ADC_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"     /*lint !e9019 MISRA : OTHER :OTHER AUTOSAR specified way of using MemMap [MISRA 2012 Rule 20.1, advisory]*/
static const Adc_ConfigType *AdcGlobalConfigPtr; /* Pointer to configuration structure. */
#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"     /*lint !e9019 MISRA : OTHER :OTHER AUTOSAR specified way of using MemMap [MISRA 2012 Rule 20.1, advisory]*/

#define ADC_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"     /*lint !e9019 MISRA : OTHER :OTHER AUTOSAR specified way of using MemMap [MISRA 2012 Rule 20.1, advisory]*/
static const Adc_GroupDefType *Adc_CurrentConvGroupPtr[ADC_ARC_CTRL_CONFIG_CNT];
#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"     /*lint !e9019 MISRA : OTHER :OTHER AUTOSAR specified way of using MemMap [MISRA 2012 Rule 20.1, advisory]*/

#define ADC_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"     /*lint !e9019 MISRA : OTHER :OTHER AUTOSAR specified way of using MemMap [MISRA 2012 Rule 20.1, advisory]*/
/*lint -e843 LINT:FALSE_POSITIVE:Variable 'Adc_Global' could be declared as const*/
static Adc_GlobalType Adc_Global= {NULL_PTR};
#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"     /*lint !e9019 MISRA : OTHER :OTHER AUTOSAR specified way of using MemMap [MISRA 2012 Rule 20.1, advisory]*/

/* ----------------------------[private functions]---------------------------*/

/**
 * Gets the index for the supplied HW unit.
 * @param unit Which HW unit
 * @return Index for this HW unit.
 */
static uint8 GetControllerIndexFromHwUnitId(uint32 unit) {
    uint8 idx = 0xffuL;

    if (adcState == ADC_STATE_INIT) {
        for (uint8 configId = 0u; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {
            if (unit == AdcGlobalConfigPtr[configId].hwConfigPtr->hwUnitId) {
                idx = configId;
                break;
            }
        }
    }
    ASSERT(idx < ADC_ARC_CTRL_CONFIG_CNT);

    return idx;
}
/**
 * Gets the configuration pointer for the supplied HW unit.
 * @param unit Which HW unit
 * @return Pointer to the Adc_Config for this HW unit.
 */

static const Adc_ConfigType * GetControllerConfigPtrFromHwUnitId(uint32 unit) {
    const Adc_ConfigType *AdcConfigPtr = NULL_PTR;

    if (adcState == ADC_STATE_INIT) {
        for (uint32 configId = 0uL; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {
            if (unit == AdcGlobalConfigPtr[configId].hwConfigPtr->hwUnitId) {
                AdcConfigPtr = &AdcGlobalConfigPtr[configId];
                break;
            }
        }
    }

    return AdcConfigPtr;
}

/**
 * Gets the configuration pointer for the HW unit for the supplied group
 * @param group Numeric ID of requested ADC Channel group
 * @return Pointer to the Adc_Config for this channel group
 */
static const Adc_ConfigType * GetControllerConfigPtrFromGroupId(Adc_GroupType group) {
    return GetControllerConfigPtrFromHwUnitId(GET_HWUNITID_FROM_GROUP(group));
}

/* ----------------------------[public functions]----------------------------*/

/* @req SWS_Adc_00228 The function Adc_DeInit shall be pre compile time configurable On/Off by the configuration parameter: AdcDeInitApi.*/
#if (ADC_DEINIT_API == STD_ON)
void Adc_Hw_DeInit (void)
{
    volatile struct ADC_tag *hwPtr;

    for (uint32 configId = 0uL; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {
        const Adc_ConfigType *AdcConfigPtr = &AdcGlobalConfigPtr[configId];

        Adc_CurrentConvGroupPtr[configId] = NULL_PTR;

        /* @req SWS_Adc_00110 The function Adc_DeInit shall return all ADC HW Units to a state comparable to their power on reset state. */
        hwPtr = GET_HW_CONTROLLER(AdcGlobalConfigPtr[configId].hwConfigPtr->hwUnitId);
        for(Adc_GroupType group = 0uL; group < AdcConfigPtr->nbrOfGroups; group++)
        {
            /* Set group status to idle. */
            AdcConfigPtr->groupConfigPtr[group].status->groupStatus = ADC_IDLE;
        }

//Disable DMA transfer
#ifdef ADC_USES_DMA
#ifndef CFG_MPC5604B
        hwPtr->DMAE.B.DMAEN = 0u;
#endif
#endif
        /* Power down ADC */
        hwPtr->MCR.R = 1uL;

        /* Disable all interrupt*/
        /* @req SWS_Adc_00111 The function Adc_DeInit shall disable all used interrupts and notifications.*/
        hwPtr->IMR.R = 0uL;
    }
    /* Clean internal status. */
    AdcGlobalConfigPtr = (Adc_ConfigType *)NULL_PTR;
    adcState = ADC_STATE_UNINIT;
}
#endif

/* @req SWS_Adc_00056  The function Adc_Init shall only initialize the configured resources. Resources that are not contained in the configuration
 * file shall not be touched.*/
/* @req SWS_Adc_00246  Module implementing function, writes the register.*/
/* @req SWS_Adc_00247  PORT should init register if reg is I/O and affetcs several modules*/
/* @req SWS_Adc_00248  MCU shold init register if not I/O but affects several modules*/
/* @req SWS_Adc_00249  One time writable registers that require init directly after reset should be inited by startup code*/
/* @req SWS_Adc_00250  All other registers shall be initialized by the startup code*/
void Adc_Hw_Init(const Adc_ConfigType *ConfigPtr) {
    /* ConfigPtr is checked before calling Adc_Hw_Init . */
    /* First of all, store the location of the global configuration data. */
    AdcGlobalConfigPtr = ConfigPtr;

    for (uint32 configId = 0uL; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {
        const Adc_ConfigType *AdcConfigPtr = &AdcGlobalConfigPtr[configId];

        Adc_CurrentConvGroupPtr[configId] = NULL_PTR;

        for (Adc_GroupType group = 0u; group < AdcConfigPtr->nbrOfGroups; group++) {
            /* @req  SWS_Adc_00307 The function Adc_Init shall set all groups to ADC_IDLE state.*/
            AdcConfigPtr->groupConfigPtr[group].status->groupStatus = ADC_IDLE;
            AdcConfigPtr->groupConfigPtr[group].status->currSampleCount = 0u;

            /* @req SWS_Adc_00077 The function Adc_Init shall disable the notifications and hardware trigger capability (if statically configured as active).*/
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
            AdcConfigPtr->groupConfigPtr[group].status->notifictionEnable = 0u;
#endif
        }

        /* Enable ADC. */
        ConfigureADC(AdcConfigPtr);
    }

    ConfigureADCInterrupts();

    /* Move on to INIT state. */
    adcState = ADC_STATE_INIT;
}

const Adc_GroupDefType *Adc_Hw_getGroupPtr(Adc_GroupType group) {

    const Adc_GroupDefType * retPtr = NULL_PTR;
    const Adc_ConfigType * configPtr = GetControllerConfigPtrFromGroupId(group);
    if (configPtr != NULL_PTR) {
        if (configPtr->nbrOfGroups > (group % ADC_NOF_GROUP_PER_CONTROLLER)) {
            retPtr = &configPtr->groupConfigPtr[group % ADC_NOF_GROUP_PER_CONTROLLER];
        }
    }
    return retPtr;
}

boolean Adc_Hw_validGroupId(Adc_GroupType group) {
    boolean result = (Adc_Hw_getGroupPtr(group) != NULL_PTR) ? TRUE : FALSE;

    return result;
}

/** @brief Validate the group status, if the status is ADC_IDLE or ADC_STREAM_COMPLETED
 * @param  [in] ConfigId - Numeric ID of an ADC channel.
 * @return Std_ReturnType
 * @retval E_OK             The group status is either ADC_IDLE or ADC_STREAM_COMPLETED
 * @retval E_NOT_OK         The group status is neither ADC_IDLE nor ADC_STREAM_COMPLETED
 */
Std_ReturnType Adc_Hw_Validate_Group_Status(uint32 configId) {
    Std_ReturnType returnValue = E_OK;
#if (ADC_DEINIT_API == STD_ON)
    /*lint -e774 MISRA:CONFIGURATION:Boolean within 'if' always evaluates to True:[MISRA 2012 Rule 14.3, required] */
    if (&AdcGlobalConfigPtr[configId] != NULL_PTR) {
        const Adc_ConfigType *ConfigPtr = &AdcGlobalConfigPtr[configId];

#if ( ADC_DEV_ERROR_DETECT == STD_ON )
        for (uint32 group = 0uL; group < (uint32)ConfigPtr->nbrOfGroups; group++)
        {
            /*  Check ADC is IDLE or COMPLETE*/
            if( (ConfigPtr->groupConfigPtr[(uint32)group % (uint32)ADC_NOF_GROUP_PER_CONTROLLER].status->groupStatus != ADC_IDLE) &&
                    (ConfigPtr->groupConfigPtr[(uint32)group % (uint32)ADC_NOF_GROUP_PER_CONTROLLER].status->groupStatus != ADC_STREAM_COMPLETED) )
            {
                (void)Det_ReportError(ADC_MODULE_ID,0uL,ADC_DEINIT_ID, ADC_E_BUSY );
                returnValue = E_NOT_OK;
            }
        }
#endif
    }
    else{
    returnValue = E_NOT_OK;
    }
#endif
    return (returnValue);
}

Adc_StateType Adc_Hw_GetAdcState(void) {
    return adcState;
}

void GroupConversionComplete(const Adc_GroupDefType *adcGroup, volatile struct ADC_tag *hwPtr) {
    if (ADC_ACCESS_MODE_SINGLE == adcGroup->accessMode) {
        /* @req SWS_Adc_00387 The function Adc_GetStreamLastPointer shall return the number of valid samples per channel, stored in the ADC result buffer. */
        adcGroup->status->currSampleCount = 1u;

        /* @req SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
        adcGroup->status->groupStatus = ADC_STREAM_COMPLETED;

        if (adcGroup->conversionMode == ADC_CONV_MODE_CONTINUOUS) {
            /* Turn on the end of chain interrupt again */
            hwPtr->IMR.B.MSKECH = 1u;

        }
        else {
            /* Stop sampling */
            hwPtr->MCR.B.NSTART = 0u;
        }
    }
    else {
        if (ADC_STREAM_BUFFER_LINEAR == adcGroup->streamBufferMode) {
            adcGroup->status->currResultBufPtr++;

            adcGroup->status->currSampleCount++;
            if (adcGroup->status->currSampleCount < adcGroup->streamNumSamples) {
                /* @req SWS_Adc_00224 The function Adc_GetGroupStatus shall return ADC_COMPLETED*/
                adcGroup->status->groupStatus = ADC_COMPLETED;

#if defined (ADC_USES_DMA)
                /* Increase current result buffer ptr */
                Dma_ConfigureDestinationAddress((uint32)adcGroup->status->currResultBufPtr, adcGroup->dmaResultChannel);
#endif

                hwPtr->IMR.B.MSKECH = 1u;
            }
            else {
                /* All sample completed. */
                /* @req SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
                adcGroup->status->groupStatus = ADC_STREAM_COMPLETED;

                /* Stop sampling */
                hwPtr->MCR.B.NSTART = 0u;

            }
        }
        else if (ADC_STREAM_BUFFER_CIRCULAR == adcGroup->streamBufferMode) {
            adcGroup->status->currResultBufPtr++;
            /* Check for buffer wrapping */
            /*lint -e946 MISRA:FALSE_POSITIVE: Both pointers pointing to same memory object, [MISRA 2012 Rule 18.3, required] */
            if (adcGroup->status->currResultBufPtr
                    >= &(adcGroup->status->resultBufferPtr[adcGroup->streamNumSamples])) {
                adcGroup->status->currResultBufPtr = adcGroup->status->resultBufferPtr;
            }

            adcGroup->status->currSampleCount++;
            if (adcGroup->status->currSampleCount < adcGroup->streamNumSamples) {
                /* @req SWS_Adc_00224 The function Adc_GetGroupStatus shall return ADC_COMPLETED*/
                adcGroup->status->groupStatus = ADC_COMPLETED;
            }
            else {
                adcGroup->status->currSampleCount = adcGroup->streamNumSamples;
                /* All samples completed */
                /* @req SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
                adcGroup->status->groupStatus = ADC_STREAM_COMPLETED;
            }

#if defined (ADC_USES_DMA)
            /* Increase current result buffer ptr */
            Dma_ConfigureDestinationAddress((uint32)adcGroup->status->currResultBufPtr, adcGroup->dmaResultChannel);
#endif
            hwPtr->IMR.B.MSKECH = 1u;
        }
        else {
            /* MISRA */
        }
    }
    /* Call notification if enabled. */
    /* @req SWS_Adc_00060 The ADC module shall call the group notification function, whenever a conversion of all channels of the requested group
     *  is completed and if the notification is configured and enabled. */
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    /* @req SWS_Adc_00083 When the notification mechanism is disabled, the ADC module shall send no notification. */

    if (adcGroup->status->notifictionEnable>0u) {
        /* @req SWS_Adc_00082 void IoHwAb_AdcNotification<groupID>( void ) */
        adcGroup->groupCallback();
    }
#endif
}
#if !defined(CFG_MPC5744P)
Adc_StatusType Adc_Hw_getGroupStatus(Adc_GroupType group) {
    return Adc_InternalGetGroupStatus(adcState, GetControllerConfigPtrFromGroupId(group), group);
}
#endif
void Group0ConversionComplete(uint32 unit) {
    volatile struct ADC_tag *hwPtr = GET_HW_CONTROLLER(unit);
    const Adc_GroupDefType *adcGroup = Adc_CurrentConvGroupPtr[GetControllerIndexFromHwUnitId(unit)];

    /* Clear ECH Flag and disable interrupt */
    /* @req SWS_Adc_00078 The ADC module’s ISR´s, providing the “conversion completed events”, shall be responsible for resetting the interrupt
     * flags (if needed by hardware) and calling the associated notification function. */
    hwPtr->ISR_STATUS.B.ECH = 1u;
    hwPtr->IMR.B.MSKECH = 0u;

#if !defined (ADC_USES_DMA)
    /** adcGroup is checked in Adc_StartGroupConversion before
     *  Copy to result buffer
     */
    for (Adc_ChannelType channel = 0u; channel < adcGroup->numberOfChannels; channel++) {
        /** To get the layout of the buffer right, first all samples from one channel,
         *  than all samples for the next etc.
         */
        Adc_ValueGroupType *resultBufPtr = &adcGroup->status->currResultBufPtr[channel
                * (uint32) adcGroup->streamNumSamples];
#if defined(CFG_MPC5606S) || defined(CFG_MPC5645S)
        uint32 chDataRegIndex = adcGroup->channelList[channel];
#else
        uint32 chDataRegIndex = adcGroup->channelList[channel];
#endif
        *resultBufPtr = hwPtr->CDR[chDataRegIndex].B.CDATA;
    }
#endif
    GroupConversionComplete(adcGroup, hwPtr);
}

#ifdef ADC_HWUNIT_ADC_CTRL_0_ENABLED
ISR(Group0ConversionComplete_ADC0) {
    Group0ConversionComplete(ADC_CTRL_0);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_1_ENABLED
ISR(Group0ConversionComplete_ADC1) {
    Group0ConversionComplete(ADC_CTRL_1);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_2_ENABLED
ISR(Group0ConversionComplete_ADC2) {
    Group0ConversionComplete(ADC_CTRL_2);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_3_ENABLED
ISR(Group0ConversionComplete_ADC3) {
    Group0ConversionComplete(ADC_CTRL_3);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_4_ENABLED
ISR(Group0ConversionComplete_ADC4) {
    Group0ConversionComplete(ADC_CTRL_4);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_5_ENABLED
ISR(Group0ConversionComplete_ADC5) {
    Group0ConversionComplete(ADC_CTRL_5);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_6_ENABLED
ISR(Group0ConversionComplete_ADC6) {
    Group0ConversionComplete(ADC_CTRL_6);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_7_ENABLED
ISR(Group0ConversionComplete_ADC7) {
    Group0ConversionComplete(ADC_CTRL_7);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_8_ENABLED
ISR(Group0ConversionComplete_ADC8) {
    Group0ConversionComplete(ADC_CTRL_8);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_9_ENABLED
ISR(Group0ConversionComplete_ADC9) {
    Group0ConversionComplete(ADC_CTRL_9);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_10_ENABLED
ISR(Group0ConversionComplete_ADC10) {
    Group0ConversionComplete(ADC_CTRL_10);
}
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_B_ENABLED
ISR(Group0ConversionComplete_ADCB) {
    Group0ConversionComplete(ADC_CTRL_B);
}
#endif

static void ConfigureADC(const Adc_ConfigType *AdcConfigPtr) {
    /* NULL pointer check */
    /*lint -e{904} MISRA:ARGUMENT_CHECK: ARGUMENT CHECK */
    if ((AdcConfigPtr == NULL_PTR) || (AdcConfigPtr->hwConfigPtr == NULL_PTR)) {
        return;
    }

    volatile struct ADC_tag *hwPtr = GET_HW_CONTROLLER(AdcConfigPtr->hwConfigPtr->hwUnitId);

    /* Set ADC CLOCK */
#if !defined(CFG_MPC5777M) && !defined(CFG_MPC5646B)
    hwPtr->MCR.B.ADCLKSEL = AdcConfigPtr->hwConfigPtr->adcPrescale;
#endif
#if !defined(CFG_MPC5744P) && !defined(CFG_MPC5643L) && !defined(CFG_SPC56XL70)
#if defined(CFG_MPC5777M)
    if((uint32)hwPtr==(uint32)&SARADC_B) { // DSDR only for ADC_B
        hwPtr->DSDR.B.DSD = 254u;
    }
#endif
#endif
    /* Power on ADC */
    hwPtr->MCR.B.PWDN = 0u;

#if defined(ADC_USES_DMA)
    /* Enable DMA. */
    hwPtr->DMAE.B.DMAEN = 1u;
#endif
}

static void ConfigureADCInterrupts(void) {
#ifdef ADC_HWUNIT_ADC_CTRL_0_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC0, ADC0_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_1_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC1, ADC1_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_2_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC2, ADC2_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_3_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC3, ADC3_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_4_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC4, ADC4_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_5_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC5, ADC5_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_6_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC6, ADC6_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_7_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC7, ADC7_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_8_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC8, ADC8_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_9_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC9, ADC9_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_10_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC10, ADC10_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_11_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADC11, ADC11_EOC_INT, 2u, ADC_ARC_ISR_APP );
#endif
#ifdef ADC_HWUNIT_ADC_CTRL_B_ENABLED
    ISR_INSTALL_ISR2( "Adc_Grp", Group0ConversionComplete_ADCB, ADCB_EOC_INT, 2u, ADC_ARC_ISR_APP );

#endif
}

/** @brief Change group state from ADC_STREAM_COMPLETED to ADC_BUSY.
 *         It is called in Adc_GetStreamLastPointer and Adc_ReadGroup when group status is ADC_STREAM_COMPLETED.
 *  @param[in] GroupPtr - Numeric ID of requested ADC channel group.
 *  @return Adc_ArcStateChangeType
 *  @retval ADC_STATE_CHANGE_NOT       Group state is not changed.
 *  @retval ADC_STATE_CHANGE_NO_ERROR  Group state is changed with no error.
 *  @retval ADC_STATE_CHANGE_ERROR      Group state is not changed and error occurs.
 */
static Adc_ArcStateChangeType Adc_Hw_StreamCompleted_To_Busy(const Adc_GroupDefType *GroupPtr) {
    Adc_ArcStateChangeType state_change_flag = ADC_STATE_CHANGE_NOT;
    /* @req 4.1.2|4.3.0/SWS_Adc_00326 Calling function Adc_GetStreamLastPointer while group status is ADC_STREAM_COMPLETED shall trigger a
     * state transition to ADC_BUSY for continuous conversion modes (single access mode or circular streaming buffer mode) and hardware triggered
     *  groups in single access mode or circular streaming access mode.*/

    /* @req 4.1.2|4.3.0/SWS_Adc_00329 Calling function Adc_ReadGroup while group status is ADC_STREAM_COMPLETED shall trigger a state transition
     * to ADC_BUSY for continuous conversion modes (single access mode or circular streaming buffer mode) and hardware triggered groups in single
     *  access mode or circular streaming access mode.*/
    if (ADC_STREAM_COMPLETED == GroupPtr->status->groupStatus) {
#if (ADC_HW_TRIGGER_API == STD_ON)
        if (ADC_TRIGG_SRC_SW == GroupPtr->triggerSrc) { // design doc: continuous conversion mode
#endif
        if (((ADC_ACCESS_MODE_SINGLE == GroupPtr->accessMode)
                && (ADC_CONV_MODE_CONTINUOUS == GroupPtr->conversionMode))
                || ((ADC_ACCESS_MODE_STREAMING == GroupPtr->accessMode)
                        && (ADC_STREAM_BUFFER_CIRCULAR == GroupPtr->streamBufferMode))) { // For SW trigger, streaming access only occur in continuous mode(ASR4.3.0 Sec7.3.2)
            GroupPtr->status->groupStatus = ADC_BUSY;
            state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
        }
#if (ADC_HW_TRIGGER_API == STD_ON)
    }
    else if (ADC_TRIGG_SRC_HW == GroupPtr->triggerSrc) { // HW trigger source is not supported
        if ((ADC_ACCESS_MODE_SINGLE == GroupPtr->accessMode)
                || ((ADC_ACCESS_MODE_STREAMING == GroupPtr->accessMode)
                        && (ADC_STREAM_BUFFER_CIRCULAR
                                == GroupPtr->streamBufferMode))) {
            GroupPtr->status->groupStatus = ADC_BUSY;
            state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
        }
    }
    else {
        /* Error*/
        state_change_flag = ADC_STATE_CHANGE_ERROR;
    }
#endif
    }
    return state_change_flag;
}

/** @brief Change group state from ADC_STREAM_COMPLETED to ADC_IDLE
 *         It is called in Adc_GetStreamLastPointer and Adc_ReadGroup when group status is ADC_STREAM_COMPLETED.
 *  @param[in] GroupPtr - Numeric ID of requested ADC channel group.
 *  @return Adc_ArcStateChangeType
 *  @retval ADC_STATE_CHANGE_NOT       Group state is not changed.
 *  @retval ADC_STATE_CHANGE_NO_ERROR  Group state is changed with no error.
 *  @retval ADC_STATE_CHANGE_ERROR      Group state is not changed and error occurs.
 */
static Adc_ArcStateChangeType Adc_Hw_StreamCompleted_To_Idle(const Adc_GroupDefType *GroupPtr) {
    Adc_ArcStateChangeType state_change_flag = ADC_STATE_CHANGE_NOT;
    /* @req 4.1.2|4.3.0/SWS_Adc_00327 Calling function Adc_GetStreamLastPointer while group status is ADC_STREAM_COMPLETED shall trigger a state
     *  transition to ADC_IDLE for software conversion modes which automatically stop the conversion (streaming buffer with linear access mode or
     *   one-shot conversion mode with single access) and for the hardware triggered conversion mode in combination with linear streaming access mode.*/

    /* @req 4.1.2|4.3.0/SWS_Adc_00330 Calling function Adc_ReadGroup while group status is ADC_STREAM_COMPLETED shall trigger a state transition
     *  to ADC_IDLE for software triggered conversion modes which automatically stop the conversion (streaming buffer with linear access mode or
     *  one-shot conversion mode with single access) and for the hardware triggered conversion mode in combination with linear streaming access mode.*/
    if (ADC_STREAM_COMPLETED == GroupPtr->status->groupStatus) {
#if (ADC_HW_TRIGGER_API == STD_ON)
        if (ADC_TRIGG_SRC_SW == GroupPtr->triggerSrc) { // SW trigger && [(streaming linear buffer) || (oneshot)]
#endif

        /** The following check is a redundant check. Other set of configuration will be checked in "Adc_Hw_StreamCompleted_To_Busy" in Adc_Hw_GroupStatusChange function.
         *  These conditions are mutually exclusive. So code coverage is put to OFF
         */
        if (((ADC_STREAM_BUFFER_LINEAR == GroupPtr->streamBufferMode)
                && (ADC_ACCESS_MODE_STREAMING == GroupPtr->accessMode)) // For SW trigger, streaming access only occur in continuous mode(ASR4.3.0 Sec7.3.2)
        || ((ADC_CONV_MODE_ONESHOT == GroupPtr->conversionMode))) {

            GroupPtr->status->groupStatus = ADC_IDLE;
            state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
        }

#if (ADC_HW_TRIGGER_API == STD_ON)
    }
    else if (ADC_TRIGG_SRC_HW == GroupPtr->triggerSrc) { // HW trigger && streaming linear buffer
        if ((ADC_ACCESS_MODE_STREAMING == GroupPtr->accessMode)
                && (ADC_STREAM_BUFFER_LINEAR == GroupPtr->streamBufferMode)) {
            GroupPtr->status->groupStatus = ADC_IDLE;
            state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
        }
    }
    else {
        /* Error*/
        state_change_flag = ADC_STATE_CHANGE_ERROR;
    }
#endif
    }
    return state_change_flag;
}

/** @brief Change group state from ADC_COMPLETED to ADC_BUSY
 *         It is called in Adc_GetStreamLastPointer and Adc_ReadGroup when group status is ADC_COMPLETED.
 *  @param[in] GroupPtr - Numeric ID of requested ADC channel group.
 *  @return Adc_ArcStateChangeType
 *  @retval ADC_STATE_CHANGE_NOT       Group state is not changed.
 *  @retval ADC_STATE_CHANGE_NO_ERROR  Group state is changed with no error.
 *  @retval ADC_STATE_CHANGE_ERROR      Group state is not changed and error occurs.
 */
static Adc_ArcStateChangeType Adc_Hw_ADCCompleted_To_Busy(const Adc_GroupDefType *GroupPtr) {
    Adc_ArcStateChangeType state_change_flag = ADC_STATE_CHANGE_NOT;
    if (ADC_COMPLETED == GroupPtr->status->groupStatus) {
        /* @req 4.1.2|4.3.0/SWS_Adc_00328 Calling function Adc_GetStreamLastPointer while group status is ADC_COMPLETED shall trigger a state transition to ADC_BUSY.*/
        /* @req 4.1.2|4.3.0/SWS_Adc_00331 Calling function Adc_ReadGroup while group status is ADC_COMPLETED shall trigger a state transition to ADC_BUSY.*/
        GroupPtr->status->groupStatus = ADC_BUSY;
        state_change_flag = ADC_STATE_CHANGE_NO_ERROR;
    }
    return state_change_flag;
}

/** @brief Changes the status of a group, it calls functions: Adc_Hw_StreamCompleted_To_Busy, Adc_Hw_StreamCompleted_To_Idle, Adc_Hw_ADCCompleted_To_Busy
 *  @param[in] Group - Numeric ID of an ADC channel group.
 *  @return Adc_ArcStateChangeType
 *  @retval ADC_STATE_CHANGE_NOT         The group status is not changed
 *  @retval ADC_STATE_CHANGE_NO_ERROR    The group status is changed and no error occurs in the process
 *  @retval ADC_STATE_CHANGE_ERROR       The group status is not changed and error occurs in the process
 */
Adc_ArcStateChangeType Adc_Hw_GroupStatusChange(Adc_GroupType Group) { // This implementation depends on the following certain status change calling sequence
    const Adc_GroupDefType *groupPtr = Adc_Hw_getGroupPtr(Group);
    Adc_ArcStateChangeType state_change_flag; // 3 changes: stream completed --> busy, stream completed --> idle, adc completed --> busy
                                              // Flags if any of this changes is performed
    Adc_ArcStateChangeType overall_change_flag = ADC_STATE_CHANGE_NO_ERROR; // Flags if the state of the Adc module is changed or not
    state_change_flag = Adc_Hw_StreamCompleted_To_Busy(groupPtr); // Status change: stream completed --> busy
    if (ADC_STATE_CHANGE_NOT == state_change_flag) {
        state_change_flag = Adc_Hw_StreamCompleted_To_Idle(groupPtr); // Status change: stream completed --> idle
        if (ADC_STATE_CHANGE_NOT == state_change_flag) {
            state_change_flag = Adc_Hw_ADCCompleted_To_Busy(groupPtr); // Status change: adc completed --> busy
            if (state_change_flag == ADC_STATE_CHANGE_NOT) {
                overall_change_flag = ADC_STATE_CHANGE_ERROR;
            }
        }

        /** state_change_flag will be set to ADC_STATE_CHANGE_ERROR only if the trigger source is neither hardware trigger source nor software trigger source.
         *  So this condition cannot be configured. So code coverage is put to OFF.
         */
        __CODE_COVERAGE_OFF__
        else if (ADC_STATE_CHANGE_ERROR == state_change_flag) {
            overall_change_flag = ADC_STATE_CHANGE_ERROR;
        }
        __CODE_COVERAGE_ON__
        else {
            ;   // do nothing
        }
    }
    /* */
    __CODE_COVERAGE_OFF__
    else if (ADC_STATE_CHANGE_ERROR == state_change_flag) {
        overall_change_flag = ADC_STATE_CHANGE_ERROR;
    }
    __CODE_COVERAGE_ON__
    else {
        ;   // do nothing
    }
    return overall_change_flag;
}

/* @req SWS_Adc_00259 The function Adc_StartGroupConversion shall be pre-compile time configurable On/Off by the configuration parameter AdcEnableStartStopGroupApi.*/
/* @req SWS_Adc_00260 The function Adc_StopGroupConversion shall be pre compile time configurable On/Off by the configuration parameter AdcEnableStartStopGroupApi.*/
#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/**
 * Configures the conversion time using the configuration parameters supplied.
 *
 * @param hwPtr Pointer to ADC hardware struct
 * @param convTimePtr Pointer to configuration struct for the Conversion Time.
 */
static void setConversionTime(volatile struct ADC_tag *hwPtr,
        const Adc_Channel_Phase_DurationType *convTimePtr) {
#if defined(CFG_MPC5643L) || defined(CFG_SPC56XL70)
    hwPtr->CTR0.B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR0.B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR0.B.INSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR1.B.INSAMP = convTimePtr->INPSAMP;
#elif defined(CFG_MPC5646B)
    hwPtr->CTR0.B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR0.B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR0.B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR0.B.OFFSHIFT = 3uL;

    hwPtr->CTR1.B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR1.B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR1.B.INPSAMP = convTimePtr->INPSAMP;

    /*** CTR2 is available only for ADC0 ***/
    if(hwPtr == (volatile struct ADC_tag *)ADC_BASE_ADDRESS) {
        hwPtr->CTR2.B.INPLATCH = convTimePtr->INPLATCH;
        hwPtr->CTR2.B.INPCMP = convTimePtr->INPCMP;
        hwPtr->CTR2.B.INPSAMP = convTimePtr->INPSAMP;
    }

#elif defined(CFG_MPC5606S) || defined(CFG_MPC5645S)
    hwPtr->CTR[1].B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR[1].B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR[1].B.INPSAMP = convTimePtr->INPSAMP;
#elif defined(CFG_MPC5744P)
    hwPtr->CTR[0].B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR[1].B.INPSAMP = convTimePtr->INPSAMP;
#elif defined(CFG_MPC5777M)
    hwPtr->CTR[0].B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR[1].B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR[2].B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR[3].B.INPSAMP = convTimePtr->INPSAMP;
#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
    hwPtr->CTR0.B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR1.B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR2.B.INPSAMP = convTimePtr->INPSAMP;
#elif defined(CFG_SPC560B54) || defined(CFG_MPC5606B)
    /*ADC0 has to three CTR registers and ADC1 has two CTR registers for SPC560B54  */
    hwPtr->CTR[0].B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR[0].B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR[0].B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR[1].B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR[1].B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR[1].B.INPSAMP = convTimePtr->INPSAMP;
    if(hwPtr == (volatile struct ADC_tag *)ADC_BASE_ADDRESS) {
        hwPtr->CTR[2].B.INPLATCH = convTimePtr->INPLATCH;
        hwPtr->CTR[2].B.INPCMP = convTimePtr->INPCMP;
        hwPtr->CTR[2].B.INPSAMP = convTimePtr->INPSAMP;
    }
#else
    hwPtr->CTR[0].B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR[0].B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR[0].B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR[1].B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR[1].B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR[1].B.INPSAMP = convTimePtr->INPSAMP;
    hwPtr->CTR[2].B.INPLATCH = convTimePtr->INPLATCH;
    hwPtr->CTR[2].B.INPCMP = convTimePtr->INPCMP;
    hwPtr->CTR[2].B.INPSAMP = convTimePtr->INPSAMP;
#endif
}

/**
 * Enables ADC conversion and interrupts for the channels in the bitmask.
 *
 * @param hwPtr Pointer to ADC hardware struct
 * @param groupChannelIdMaskPtr Pointer to bitmask for channels
 */
static void enableNormalConversionAndIntrpt(volatile struct ADC_tag *hwPtr, uint32 const *groupChannelIdMaskPtr)
{
#if defined(CFG_MPC5643L) || defined(CFG_SPC56XL70)
    /* Enable Normal conversion */
    hwPtr->NCMR0.R = groupChannelIdMaskPtr[0uL];

    /* Enable Channel Interrupt */
    hwPtr->CIMR0.R = groupChannelIdMaskPtr[0uL];
#elif defined(CFG_MPC5606S) || defined(CFG_MPC5645S)
    /* Enable Normal conversion */
    hwPtr->NCMR[1u].R = groupChannelIdMaskPtr[1u];

    /* Enable Channel Interrupt */
    hwPtr->CIMR[1u].R = groupChannelIdMaskPtr[1u];
#elif defined(CFG_MPC5744P)
    /* Enable Normal conversion */
    hwPtr->NCMR[0u].R = groupChannelIdMaskPtr[0u];

    /* Enable Channel Interrupt */
    hwPtr->CIMR[0u].R = groupChannelIdMaskPtr[0u];
#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
    /* Enable Normal conversion */
    hwPtr->NCMR0.R = groupChannelIdMaskPtr[0u];
    hwPtr->NCMR1.R = groupChannelIdMaskPtr[1u];
    hwPtr->NCMR2.R = groupChannelIdMaskPtr[2u];

    /* Enable Channel Interrupt */
    hwPtr->CIMR0.R = groupChannelIdMaskPtr[0u];
    hwPtr->CIMR1.R = groupChannelIdMaskPtr[1u];
    hwPtr->CIMR2.R = groupChannelIdMaskPtr[2u];

#elif defined(CFG_SPC560B54) || defined(CFG_MPC5606B)
    /*ADC0 has three NCMR and CIMR registers*/
    /* Enable Normal conversion */
    hwPtr->NCMR[0u].R = groupChannelIdMaskPtr[0u];
    hwPtr->NCMR[1u].R = groupChannelIdMaskPtr[1u];

    /* Enable Channel Interrupt */
    hwPtr->CIMR[0u].R = groupChannelIdMaskPtr[0u];
    hwPtr->CIMR[1u].R = groupChannelIdMaskPtr[1u];

    if(hwPtr == (volatile struct ADC_tag *)ADC_BASE_ADDRESS) {
        hwPtr->NCMR[2u].R = groupChannelIdMaskPtr[2u];
        hwPtr->CIMR[2u].R = groupChannelIdMaskPtr[2u];
    }

#elif defined(CFG_MPC5646B)
    /*ADC0 has three NCMR and CIMR registers*/
    /* Enable Normal conversion */
    hwPtr->NCMR0.R = groupChannelIdMaskPtr[0u];
    hwPtr->NCMR1.R = groupChannelIdMaskPtr[1u];

    /* Enable Channel Interrupt */
    hwPtr->CIMR0.R = groupChannelIdMaskPtr[0u];
    hwPtr->CIMR1.R = groupChannelIdMaskPtr[1u];

    if(hwPtr == (volatile struct ADC_tag *)ADC_BASE_ADDRESS) {
        hwPtr->NCMR2.R = groupChannelIdMaskPtr[2u];
        hwPtr->CIMR2.R = groupChannelIdMaskPtr[2u];
    }

#elif defined(CFG_MPC5777M)
    if((uint32)hwPtr==(uint32)&SARADC_B) {
        /* Enable Normal conversion */
        hwPtr->NCMR[0u].R = groupChannelIdMaskPtr[0u];
        hwPtr->NCMR[1u].R = groupChannelIdMaskPtr[1u];
        hwPtr->NCMR[2u].R = groupChannelIdMaskPtr[2u];

        /* Enable Channel Interrupt */
        hwPtr->CIMR[0u].R = groupChannelIdMaskPtr[0u];
        hwPtr->CIMR[1u].R = groupChannelIdMaskPtr[1u];
        hwPtr->CIMR[2u].R = groupChannelIdMaskPtr[2u];
    }
    else if( ((uint32)hwPtr==(uint32)&SARADC_0) ||
            ((uint32)hwPtr==(uint32)&SARADC_1) ||
            ((uint32)hwPtr==(uint32)&SARADC_2) ||
            ((uint32)hwPtr==(uint32)&SARADC_3) ) {
        /* Enable Normal conversion */
        hwPtr->NCMR[0u].R = groupChannelIdMaskPtr[0u];

        /* Enable Channel Interrupt */
        hwPtr->CIMR[0u].R = groupChannelIdMaskPtr[0u];
    }
    else if( ((uint32)hwPtr==(uint32)&SARADC_4) ||
            ((uint32)hwPtr==(uint32)&SARADC_5) ||
            ((uint32)hwPtr==(uint32)&SARADC_6) ||
            ((uint32)hwPtr==(uint32)&SARADC_7) ) {
        /* Enable Normal conversion */
        hwPtr->NCMR[1u].R = groupChannelIdMaskPtr[1u];

        /* Enable Channel Interrupt */
        hwPtr->CIMR[1u].R = groupChannelIdMaskPtr[1u];
    }
    else if( ((uint32)hwPtr==(uint32)&SARADC_8) ||
            ((uint32)hwPtr==(uint32)&SARADC_9) ||
            ((uint32)hwPtr==(uint32)&SARADC_10) ) {
        /* Enable Normal conversion */
        hwPtr->NCMR[2u].R = groupChannelIdMaskPtr[2u];

        /* Enable Channel Interrupt */
        hwPtr->CIMR[2u].R = groupChannelIdMaskPtr[2u];
    }
    else {
    }
#else
    /* Enable Normal conversion */
    hwPtr->NCMR[0u].R = groupChannelIdMaskPtr[0u];
    hwPtr->NCMR[1u].R = groupChannelIdMaskPtr[1u];
    hwPtr->NCMR[2u].R = groupChannelIdMaskPtr[2u];

    /* Enable Channel Interrupt */
    hwPtr->CIMR[0u].R = groupChannelIdMaskPtr[0u];
    hwPtr->CIMR[1u].R = groupChannelIdMaskPtr[1u];
    hwPtr->CIMR[2u].R = groupChannelIdMaskPtr[2u];
#endif
}

#if defined(ADC_USES_DMA)
/**
 * Enables DMA
 *
 * @param hwPtr Pointer to ADC hardware struct.
 * @param groupChannelIdMaskPtr Pointer to bitmask for channels
 */
static void enableDMA(volatile struct ADC_tag *hwPtr, uint32 *groupChannelIdMaskPtr)
{
#if defined(CFG_MPC5643L) || defined(CFG_SPC56XL70) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
    hwPtr->DMAE.R = 1u;
    /* Enable DMA Transfer */
    hwPtr->DMAR0.R = groupChannelIdMask;
    Dma_StartChannel(DMA_ADC_GROUP0_RESULT_CHANNEL); /* Enable EDMA channel for ADC */
#elif defined(CFG_MPC5646B)
    hwPtr->DMAE.R = 1u;
    /* Enable DMA Transfer */
    hwPtr->DMAR0.R = groupChannelIdMask[0u];
    hwPtr->DMAR1.R = groupChannelIdMask[1u];
    hwPtr->DMAR2.R = groupChannelIdMask[2u];
    Dma_StartChannel(DMA_ADC_GROUP0_RESULT_CHANNEL); /* Enable EDMA channel for ADC */

#elif defined(CFG_MPC5606S)
    hwPtr->DMAE.R = 1u;
    /* Enable DMA Transfer */

    hwPtr->DMAR[1uL].R = groupChannelIdMask;
    Dma_StartChannel(DMA_ADC_GROUP0_RESULT_CHANNEL); /* Enable EDMA channel for ADC */

#elif defined(CFG_MPC5744P) || defined(CFG_MPC5777M)
    hwPtr->DMAE.R = 1uL;
    /* Enable DMA Transfer */

    hwPtr->DMAR[1u].R = groupChannelIdMask;
    Dma_StartChannel(DMA_ADC_GROUP0_RESULT_CHANNEL); /* Enable EDMA channel for ADC */

#endif
}
#endif

void Adc_Hw_StartGroupConversion (Adc_GroupType group) {
    const Adc_ConfigType *AdcConfigPtr = GetControllerConfigPtrFromGroupId(group);
    /*AdcConfigPtr can't be null since it will be checked before comes here in Adc.c*/
    volatile struct ADC_tag *hwPtr = GET_HW_CONTROLLER(AdcConfigPtr->hwConfigPtr->hwUnitId);

    const Adc_GroupDefType *groupPtr = &AdcConfigPtr->groupConfigPtr[group%ADC_NOF_GROUP_PER_CONTROLLER];
    Adc_CurrentConvGroupPtr[GetControllerIndexFromHwUnitId(AdcConfigPtr->hwConfigPtr->hwUnitId)] = groupPtr;

    /* Disable trigger normal conversions for ADC0 */
    hwPtr->MCR.B.NSTART = 0u;

    /* Set group state to BUSY. */
    groupPtr->status->groupStatus = ADC_BUSY;

    groupPtr->status->currSampleCount = 0u;
    /* @req SWS_Adc_00431 */
    groupPtr->status->currResultBufPtr = groupPtr->status->resultBufferPtr; /* Set current result buffer */

#if defined(ADC_USES_DMA)
    Dma_ConfigureChannel ((Dma_TcdType *)groupPtr->groupDMAResults, groupPtr->dmaResultChannel);
    Dma_ConfigureDestinationAddress ((uint32)groupPtr->status->currResultBufPtr, groupPtr->dmaResultChannel);
#endif

    /* Set conversion mode. */
    /*lint -e641 LINT:OTHER: Should be enum acording to Autosar */
    hwPtr->MCR.B.MODE = groupPtr->conversionMode;

    /* Enable Overwrite*/
    hwPtr->MCR.B.OWREN = 1u;

    /* Set Conversion Time. */
    setConversionTime(hwPtr, &groupPtr->adcChannelConvTime);

    uint32 groupChannelIdMask[3u] = {0u,0u,0u};
    for(Adc_ChannelType i = 0u; i < groupPtr->numberOfChannels; i++) {
#if defined(CFG_MPC5668) || defined(CFG_MPC5777M)
        if(groupPtr->channelList[i] <= 31u) {
#else
        if(groupPtr->channelList[i] <= 15u) {
#endif
            groupChannelIdMask[0u] |= (1uL << groupPtr->channelList[i]);
#if defined(CFG_MPC5606B) || defined(CFG_SPC560B54)
        }
        else if((groupPtr->channelList[i] >= 32u) && (groupPtr->channelList[i] <=59u)) {
#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
        }
        else if((groupPtr->channelList[i] >= 32u) && (groupPtr->channelList[i] <=63u)) { /* ADC_0 has channels in the range 32 to 63 (standard channels) */
#else
        }
        else if((groupPtr->channelList[i] >= 32u) && (groupPtr->channelList[i] <=47u)) {
#endif
           groupChannelIdMask[1u] |= (1uL << (groupPtr->channelList[i] - 32));
        }
        else if((groupPtr->channelList[i] >= 64u) && (groupPtr->channelList[i] <=95u)) {
           groupChannelIdMask[2u] |= (1uL << (groupPtr->channelList[i] - 64u));
        }
        else {
                /* MISRA */
        }
    }

#if defined(ADC_USES_DMA)
    enableDMA(hwPtr, &groupChannelIdMask);
#endif
    /* Enable Normal conversion and channel interrupt */
    enableNormalConversionAndIntrpt(hwPtr, groupChannelIdMask);

    /* Clear interrupts */
    hwPtr->ISR_STATUS.B.ECH = 1u;
    /* Enable ECH interrupt */
    hwPtr->IMR.B.MSKECH = 1u;

    /* @req SWS_Adc_00061 The function Adc_StartGroupConversion shall start the conversion of all channels of the requested ADC Channel group.*/
    /* Trigger normal conversions for ADC0 */
    hwPtr->MCR.B.NSTART = 1u;
    /* @req SWS_Adc_00156 The function Adc_StartGroupConversion shall NOT automatically enable the notification mechanism for that group (this has
     *  to be done by a separate API call).
     */
}

void Adc_Hw_StopGroupConversion (Adc_GroupType group) {
    const Adc_ConfigType *AdcConfigPtr = GetControllerConfigPtrFromGroupId(group);
    /*Adc_CheckStopGroupConversion can't be false, since it will be performed previously*/
    volatile struct ADC_tag *hwPtr = GET_HW_CONTROLLER(AdcConfigPtr->hwConfigPtr->hwUnitId);

    /* Disable trigger normal conversions for ADC0 */
    /*@req SWS_Adc_00385 When the ADC Channel Group is in one-shot and software-trigger mode, the function Adc_StopGroupConversion shall stop an ongoing
     *  conversion of the group.*/
    /*@req SWS_Adc_00386 When the ADC Channel Group is in continuous-conversion and software-trigger mode, the function Adc_StopGroupConversion shall stop
     *  an ongoing conversion of the group.*/
    hwPtr->MCR.B.NSTART = 0uL;
    hwPtr->MCR.B.ABORTCHAIN = 1u;
    hwPtr->MCR.B.ABORT = 1u;
    /*lint -e{9036} LINT:OTHER:HARDWARE DEFINITION */
    while(hwPtr->MSR.B.NSTART) {
        /* Make sure that abort really hits. Mpc5668 have problem here */
        hwPtr->MCR.B.NSTART = 0u;
        hwPtr->MCR.B.ABORTCHAIN = 1u;
        hwPtr->MCR.B.ABORT = 1u;
    };

    /* Set group state to IDLE. */
    /* @req SWS_Adc_00360 The function Adc_StopGroupConversion shall set the group status to state ADC_IDLE. */
    AdcConfigPtr->groupConfigPtr[group%ADC_NOF_GROUP_PER_CONTROLLER].status->groupStatus = ADC_IDLE;

#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
    /* Disable group notification if enabled. */
    if(1uL == AdcConfigPtr->groupConfigPtr[group%ADC_NOF_GROUP_PER_CONTROLLER].status->notifictionEnable) {
        /* @req SWS_Adc_00155 The function Adc_StopGroupConversion shall automatically disable group notification for the requested group. */
        Adc_DisableGroupNotification (group);
    }
#endif
}
#endif  /* endof #if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON) */

const Adc_ConfigType* Adc_Hw_GetConfigPTR(uint32 AdcCtrlNum) {

    /**
     * @brief   Adc_Global - Represents the configuration set of the whole Adc module.
     */

    return &Adc_Global.config[AdcCtrlNum];
}
