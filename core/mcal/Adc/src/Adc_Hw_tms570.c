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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Adc_Hw_tms570.c
 *  This file contains the TMS570 hardware specific implementation of the API's.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Adc
  *  This is the TMS570 Mcal Adc Group
  *  @{
  */

#include "Adc_Hw_tms570.h"
#include "irq_tms570.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM) || defined (WDG_USE_DEM)
#include "Dem.h"
#endif
#include "SchM_Adc.h"
#include "isr.h"
#include "Adc_MemMap.h"
#include "Adc.h"
#include "Adc_Internal.h"
#include "Adc_Hw_Common.h"
#include "isr.h"
#include <string.h>


/* ----------------------------[Macro Definitions]--------------*/
/**
  * @name    Hardware specific macros
  * @{
  */
#define EV_THR_INT_FLG_MASK	(1uL<<0u)				/**< 0x00000001: ADGxINTFLG Register bit 0, group threshold interrupt flag*/
#define EV_END_MASK			(1uL<<3u)				/**< 0x00001000: ADGxINTFLG Register bit 3, group conversion end interrupt flag*/
#define GxBUF_DATA10_MASK 	0x3ffuL					/**< 0x000003ff: conversion result data mask,10 bits*/
#define GxBUF_DATA12_MASK 	0xfffuL					/**< 0x00000fff: conversion result data mask,12 bits*/
#define RSTCR_RELEASE		0x0uL					/**< 0x00000000: ADRSTCR Register bit 0, module is released from the reset state*/
#define GxSAMP_ACQ_MASK		0x3ffuL					/**< 0x000003ff: ADGxSAMP Register bit 0 to 11 mask*/
#define ADC_EN_10BIT		0x00140001uL			/**< 0x00140001: ADOPMODECR Register setting: 10-bit resolution, other bits are default*/
#define ADC_EN_12BIT		0x80140001uL			/**< 0x80140001: ADOPMODECR Register setting: 12-bit resolution, other bits are default*/
#define ADC_HW_CNTR_NUM		0x2uL					/**< 0x00000002: Total number of ADC hardware core module in TMS570*/

/** @} */

/* ----------------------------[Function Declaration]-----------*/
ISR( ADC1Grp1ConversionComplete_Isr);
ISR( ADC1Grp2ConversionComplete_Isr);
ISR( ADC2Grp1ConversionComplete_Isr);
ISR( ADC2Grp2ConversionComplete_Isr);


/* ----------------------------[Variable Definition]-----------*/
/**
 * @brief   adcState - Specifies the state of Adc module, either initialized or uninitialized.
 */
static volatile Adc_StateType adcState = ADC_STATE_UNINIT;

/**
 * @brief   Adc_Global - Represents the configuration set of the whole Adc module.
 */
static Adc_GlobalType Adc_Global;


/* ----------------------------[Static Function]-----------------*/

/**
 * @brief  get the register set base address of hardware controller
 * @param[in] _unit - hardware controller id, controller 0 or controller 1
 * @return adcBASE_t pointer
 * @retval pointer to register set base address
 */
static inline adcBASE_t* GET_HW_PTR(uint32 _unit){
	/*lint -e{923} MISRA:PERFORMANCE:cast from unsigned int to pointer:[MISRA 2012 Rule 11.1, required]*/
	adcBASE_t* BaseAddress[]={adcREG1,adcREG2};
	return BaseAddress[_unit];
}

/* ----------------------------[Supported Requirements]---------*/
/** @req SWS_Adc_00080 If for a notification call-back the NULL pointer is configured, no call-back shall be executed. */
/** @req SWS_Adc_00356 The ADC module shall support the start condition “Software API Call” for all conversion modes. The trigger source “Software API Call” means that the conversion of an ADC Channel group is started/stopped with a service provided by the ADC module*/
/** @req SWS_Adc_00279 The ADC module shall allow configuring exactly one trigger source for each ADC Channel group. */

/* ----------------------------[Not Supported Requirements]---------*/
/** !req SWS_Adc_00357 The ADC module shall support the start condition “Hardware Event” for groups configured in One-Shot conversion mode. */
/** !req SWS_Adc_00288 The ADC module shall allow the configuration of a priority level for each channel group. */
/** !req SWS_Adc_00310 The ADC module’s priority mechanism shall allow aborting and restarting of channel group conversions. */
/** !req SWS_Adc_00345 The ADC module’s priority mechanism shall allow suspending and resuming of channel group conversions. */
/** !req SWS_Adc_00430 The ADC module shall allow a group specific configuration whether the abort/restart or suspend/resume mechanism is used for interrupted channel groups. */
/** !req SWS_Adc_00311 The ADC module’s priority mechanism shall allow the queuing of requests for different groups. */
/** !req SWS_Adc_00312 In the ADC module’s priority mechanism the lowest priority is 0. */
/** !req SWS_Adc_00289 In the ADC module’s priority mechanism the lowest priority is 0. */
/** !req SWS_Adc_00315 The ADC module shall support the static configuration option to disable the priority mechanism. */
/** !req SWS_Adc_00340 The ADC module shall support the static configuration option to enable the priority mechanism ADC_PRIORITY_HW_SW. */
/** !req SWS_Adc_00341 If the priority mechanism is supported by the hardware: The ADC module shall support the static configuration option ADC_PRIORITY_HW */
/** !req SWS_Adc_00339 If hardware priority mechanism is supported and selected: The ADC module shall allow the mapping of the configured priority levels (0-255) to the available hardware priority levels. */
/** !req SWS_Adc_00332 If the priority mechanism is active, the ADC module shall support a queuing of conversion requests. */
/** !req SWS_Adc_00417 If the priority mechanism is active, the ADC module shall handle channel group conversion requests for groups with the same priority level, in a ‘first come first served’ order. */
/** !req SWS_Adc_00333 If the priority mechanism is not active and if the static configuration parameter AdcEnableQueuing is set to ON, the ADC module shall support a queuing of conversion requests and shall service the software groups in a ‘first come first served’ order.*/
/** !req SWS_Adc_00335 If the queuing mechanism is active (priority mechanism active or queuing explicitly activated), the ADC module shall store each software conversion request per channel group at most one time in the software queue.*/
/** !req SWS_Adc_00336 Enable hardware trigger requests’, generated with API function Adc_EnableHardwareTrigger, shall not be stored in any queue. */
/** !req SWS_Adc_00337 The hardware prioritization mechanism shall be used in case of hardware triggered conversion requests. */
/** !req SWS_Adc_00338 The ADC module shall not store additional software conversion requests for the same group, whose group status is not equal to ADC_IDLE. */
/** !req SWS_Adc_00445 The ADC module shall allow configuring limit checking for ADC Channels. */
/** !req SWS_Adc_00446 If limit checking is active for an ADC Channel, only ADC conversion results, which are in the configured range, are taken into account for updating the user specified ADC result buffer. */
/** !req SWS_Adc_00447 If limit checking is active for an ADC Channel, only ADC conversion results, which are in the configured range, are taken into account for triggering state transitions of the ADC group status. */
/** !req SWS_Adc_00448 If continuous conversion mode with SW trigger source is selected: if limit checking is active for an ADC Channel, ADC conversion results, which are not in the configured range, are neglected from the ADC driver, and the conversion is reiterated. */
/** !req SWS_Adc_00449 If one-shot conversion mode with SW trigger source is selected: if limit checking is active for an ADC Channel, an ADC conversion result, which is not in the configured range, is neglected from the ADC driver, and the ADC group, containing the ADC channel, will stay in state ADC_BUSY. */
/** !req SWS_Adc_00450 If one-shot conversion mode with HW trigger source is selected: if limit checking is active for an ADC Channel, ADC conversion results, which are not in the configured range, are neglected from the ADC driver, and the conversion is reissued, triggered by the next HW trigger. */

/** !req SWS_Adc_00462 The ADCDriver shall support power state changes and its APIs when the corresponding configuration parameter AdcLowPowerStatesSupport is set to TRUE. */
/** !req SWS_Adc_00463 If the parameter AdcLowPowerStatesSupport is enabled */
/** !req SWS_Adc_00464 The APIs Adc_GetTargetPowerState and Adc_GetCurrentPowerState shall be respectively used */
/** !req SWS_Adc_00465 The API Adc_PreparePowerState shall be used to start a power state transition. */
/** !req SWS_Adc_00466 After preparation for a power state is achieved by API Adc_PreparePowertState then the API Adc_SetPowerState shall be used to achieve the requested power state of the ADC module. */
/** !req SWS_Adc_00467 ADC Driver shall keep track of the call order of the APIs Adc_SetPowerState and Adc_PreparePowerState. */
/** !req SWS_Adc_00469 The Adc Module shall keep track of the current and of the target powerstate if the parameter AdcLowPowerStatesSupport is set to TRUE. */
/** !req SWS_Adc_00470 After the Initiliazation the power state of the module shall be always FULL POWER if the AdcLowPowerStatesSupport is set to TRUE. */
/** !req SWS_Adc_00471 The ADC Driver shall support synchronuous and asynchronous power state transitions */
/** !req SWS_Adc_00472 Related to configuration parameter AdcPowerStateAsynchTransitionMode */
/** !req SWS_Adc_00473 Related to parameter AdcPowerStateAsynchTransitionMode */

/** !req SWS_Adc_00511 Adc_SamplingTimeType */
/** !req SWS_Adc_00512 Adc_ResolutionType */
/** !req SWS_Adc_00521 Adc_HwTriggerTimerType */
/** !req SWS_Adc_00522 PriorityImplementationType */
/** !req SWS_Adc_00523 GroupReplacementType */
/** !req SWS_Adc_00524 ChannelRangeSelectType */
/** !req SWS_Adc_00525 ResultAlignmentType */
/** !req SWS_Adc_00526 Adc_PowerStateType */
/** !req SWS_Adc_00527 Adc_PowerStateRequestResultType */
/** !req SWS_Adc_00054 In case of Variant PB:The function Adc_Init shall initialize the ADC hardware units and driver according to the configuration set referenced by ConfigPtr. */
/** !req SWS_Adc_00437 When the ADC Channel Group is in one-shot and software-trigger mode, the function Adc_StopGroupConversion shall remove a start/restart request of the group from the queue */
/** !req SWS_Adc_00438 When the ADC Channel Group is in continuous-conversion and software-trigger mode, the function Adc_StopGroupConversion shall remove a start/restart request of the group from the queue */
/** !req SWS_Adc_00113 The function Adc_ReadGroup shall read the raw converted values without further scaling. The read values shall be aligned according the configuration parameter setting of ADC_RESULT_ALIGNMENT. */

/** !req SWS_Adc_00114 The function Adc_EnableHardwareTrigger shall enable the hardware trigger for the requested ADC Channel group. */
/** !req SWS_Adc_00144 A group with trigger source hardware, whose trigger was enabled with Adc_EnableHardwareTrigger, shall execute the group channel conversions, whenever a trigger event occurs. */
/** !req SWS_Adc_00432 The function Adc_EnableHardwareTrigger shall reset the internal group result buffer pointer */
/** !req SWS_Adc_00136 If development error detection for the ADC module is enabled: if the group is configured for software API trigger mode, the function Adc_EnableHardwareTrigger shall raise development error ADC_E_WRONG_TRIGG_SRC and return without any action. */
/** !req SWS_Adc_00281 If a HW group is erroneously configured for continuous conversion mode, the function Adc_EnableHardwareTrigger shall raise development error ADC_E_WRONG_CONV_MODE and return without any action. */
/** !req SWS_Adc_00429 The function Adc_DisableHardwareTrigger shall remove any queued start/restart request for the requested ADC Channel group if queuing is enabled. */
/** !req SWS_Adc_00145 The function Adc_DisableHardwareTrigger shall abort an ongoing conversion, if applicable (supported by the hardware). */
/** !req SWS_Adc_00129 If the channel group ID is non-existing, the function Adc_DisableHardwareTrigger shall raise development error ADC_E_PARAM_GROUP and return without any action. */
/** !req SWS_Adc_00137 If the group is configured for software API trigger mode, the function Adc_DisableHardwareTrigger shall raise development error ADC_E_WRONG_TRIGG_SRC and return without any action. */
/** !req SWS_Adc_00282 If a HW group is erroneously configured for continuous conversion mode, the function Adc_DisableHardwareTrigger shall raise development error ADC_E_WRONG_CONV_MODE and return without any action. */
/** !req SWS_Adc_00304 If the group is not enabled (with a previous call of Adc_EnableHardwareTrigger), the function Adc_DisableHardwareTrigger shall raise development error ADC_E_IDLE and return without any action. */
/** !req SWS_Adc_00298 If development error detection for the ADC module is enabled: if called prior to initializing the ADC module, Adc_DisableHardwareTrigger shall raise development error ADC_E_UNINIT and return without any action. */
/** !req SWS_Adc_00436 In case of an aborted/suspended group, the state of the queued group remains the same as it was before the group was aborted/suspended. */
/** !req SWS_Adc_00418 All values which the ADC driver stores in the ADC result buffer, are left without further scaling and shall be aligned according the configuration parameter setting of ADC_RESULT_ALIGNMENT. */

/** !req SWS_Adc_00475 Std_ReturnType Adc_SetPowerState( Adc_PowerStateRequestResultType* Result ) */
/** !req SWS_Adc_00481 The API configures the HW in order to enter the previously prepared Power State. */
/** !req SWS_Adc_00482 In case the target power state is the same as the current one, no action is executed and the API returns immediately with an E_OK result. */
/** !req SWS_Adc_00483 In case the normal Power State is requested, the API shall refer to the necessary parameters contained in the same containers used by Adc_Init. */
/** !req SWS_Adc_00484 For the other power states, only power state transition specific reconfigurations shall be executed in the context of this API (i.e. the API cannot be used to apply a completely new configuration to the Adc module). */
/** !req SWS_Adc_00485 The API shall refer to the configuration container related to the required Power State in order to derive some specific features of the state (e.g support of Power States). */
/** !req SWS_Adc_00486 In case development error reporting is activated: The API shall report the DET */
/** !req SWS_Adc_00487 The API shall report the DET error ADC_E_NOT_DISENGAGED in case this API is called when one or more HW channels (where applicable) are in a state different then IDLE (or similar non-operational states) and/or there are still notification registered for the HW module channels. */
/** !req SWS_Adc_00488 The API shall report the DET error ADC_E_POWER_STATE_NOT_SUPPORTED in case this API is called with an unsupported power state or the peripheral does not support low power states at all. */
/** !req SWS_Adc_00489 The API shall report the DET error ADC_E_TRANSITION_NOT POSSIBLE in case the requested power state cannot be directly reached from the current power state. */
/** !req SWS_Adc_00490 The API shall report the DET error ADC_E_PERIPHERAL_NOT_PREPARED in case the HW unit has not been previously prepared for the target power state by use of the API Adc_PreparePowerState(). */

/** !req SWS_Adc_00476 Std_ReturnType Adc_GetCurrentPowerState( Adc_PowerStateType* CurrentPowerState, Adc_PowerStateRequestResultType* Result ) */
/** !req SWS_Adc_00491 The API shall report the DET error ADC_E_UNINIT in case this API is called before having initialized the HW unit.*/

/** !req SWS_Adc_00477 Std_ReturnType Adc_GetTargetPowerState( Adc_PowerStateType* TargetPowerState, Adc_PowerStateRequestResultType* Result ) */
/** !req SWS_Adc_00492 This shall coincide with the current power state if no transition is ongoing. The API is considered to always succeed except in case of HW failures. */
/** !req SWS_Adc_00493 The API shall report the DET error ADC_E_UNINIT in case this API is called before having initialized the HW unit. */

/** !req SWS_Adc_00478 Std_ReturnType Adc_PreparePowerState( Adc_PowerStateType PowerState, Adc_PowerStateRequestResultType* Result ) */
/** !req SWS_Adc_00494 This API initiates all actions needed to enable a HW module to enter the target power state. */
/** !req SWS_Adc_00495 In case the target power state is the same as the current one, no action is executed and the API returns immediately with an E_OK result. */
/** !req SWS_Adc_00496 The API shall report the DET error ADC_E_UNINIT in case this API is called before having initialized the HW unit. */
/** !req SWS_Adc_00497 The API shall report the DET error ADC_E_POWER_MODE_NOT_SUPPORTED in case this API is called with an unsupported power state is requested or the peripheral does not support low power states at all. */
/** !req SWS_Adc_00498 The API shall report the DET error ADC_E_TRANSITION_NOT POSSIBLE in case the requested power state cannot be directly reached from the current power state. */

/** !req SWS_Adc_00479 void Adc_Main_PowerTransitionManager( void ) */
/** !req SWS_Adc_00499 This API executes any non-immediate action needed to finalize a power state transition requested by Adc_PreparePowerState(). */
/** !req SWS_Adc_00500 The rate of scheduling shall be defined by Adc MainSchedulePeriod and shall be variable, as the function only needs to be called if a transition has been requested */
/** !req SWS_Adc_00501 This API shall also issue callback notifications to the eventually registered users (IoHwAbs) as configured, only in case the asynch mode is chosen. */
/** !req SWS_Adc_00502 In case the ADC module is not initialized, this function shall simply return without any further elaboration. */

/** !req SWS_Adc_00480 void IoHwAb_Adc_NotifyReadyForPowerState<Mode>( void ) */
/** !req SWS_Adc_00451 The ADC module configuration shall be such that an ADC Channel group contains exactly one ADC Channel if the global limit checking feature is enabled and the channel specific limit checking is enabled for the ADC Channel. */
/** !req SWS_Adc_00516 Adc_GroupPriorityType */


/* ----------------------------[HW Specific Functions]---------*/
/* @brief Hardware specific implementation of Adc_Init
 * @param[in] ConfigPtr - ConfigPtr - Pointer to configuration set
 */
void Adc_Hw_Init(const Adc_ConfigType *ConfigPtr) {
    uint32 channels = 0;
	uint32 OPMODECR_reg_val = ADC_EN_10BIT;

	memset( &Adc_Global, 0, sizeof(Adc_Global));
	Adc_Global.config = ConfigPtr;

	/*Loop over the ADC controllers, this loop setup ASR specified Adc group status, current sample number*/
	for (uint32 configId = 0; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {


        const Adc_ConfigType *AdcConfigPtr = Adc_Hw_GetConfigPTR(configId);
        for (Adc_GroupType group = 0; group < AdcConfigPtr->nbrOfGroups; group++) {
            /** @req SWS_Adc_00307 The function Adc_Init shall set all groups to ADC_IDLE state.*/
            AdcConfigPtr->groupConfigPtr[group].status->groupStatus = ADC_IDLE;
            AdcConfigPtr->groupConfigPtr[group].status->currSampleCount = 0u;
            /** @req SWS_Adc_00077 The function Adc_Init shall disable the notifications and hardware trigger capability (if statically configured as active).*/
        #if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
            AdcConfigPtr->groupConfigPtr[group].status->notifictionEnable = 0;
        #endif
        }
	}

	/*
     * We have up to 2 controllers with 2 "normal" groups that
     * we need to initialize.
     *
     * Create the channels masks needed by HW
     * IMPROVEMENT: We should generate the mask
     */

    /* Loop over all controllers */
    for (uint32 configId = 0; configId < ADC_ARC_CTRL_CONFIG_CNT; configId++) {
    	/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Already validated during code generation */
    	if(Adc_Hw_GetConfigPTR(configId) != NULL_PTR){

    		const Adc_ConfigType *AdcConfigPtr = Adc_Hw_GetConfigPTR(configId);
            adcBASE_t *hwPtr = GET_HW_PTR(AdcConfigPtr->hwConfigPtr->hwUnitId);

            /* Release from Reset */
            hwPtr->RSTCR = RSTCR_RELEASE;

            /* Enable ADC and setup 10bit/12bit ADC(depends on the configuration), leave the rest of the values as reset */
            if(AdcConfigPtr->hwConfigPtr->adcResolution == 12){
            	OPMODECR_reg_val = ADC_EN_12BIT;
            }

            hwPtr->OPMODECR = OPMODECR_reg_val;

            /* Setup prescaler */
            hwPtr->CLOCKCR = AdcConfigPtr->hwConfigPtr->adcPrescale - 1uL;

            /* Loop over the groups */
            for (Adc_GroupType group = 0; group < AdcConfigPtr->nbrOfGroups; group++) {
            	const Adc_GroupDefType *groupPtr = &(AdcConfigPtr->groupConfigPtr[group]);
                /* Loop over the channels */
                for (uint32 i = 0u; i < (uint32) groupPtr->numberOfChannels; i++) {
                    /* Select physical channel. */
                    channels |= (1uL << (uint32) groupPtr->channelList[i]);
                }

                /* Assign the channels to the group */
                ChannelMask[AdcConfigPtr->hwConfigPtr->hwUnitId][group] = channels;
                channels = 0;

                /* Setup Sample time */
                hwPtr->GxSAMP[group + 1] = groupPtr->arcAdcGroupSampTime & GxSAMP_ACQ_MASK;
            }
        }
    }

    /* Install all handlers */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
    ISR_INSTALL_ISR2("ADC1Grp1ConvComplete", ADC1Grp1ConversionComplete_Isr, MIBADC1_GROUP_1, ADC_ISR_PRIORITY, 0);
    ISR_INSTALL_ISR2("ADC1Grp2ConvComplete", ADC1Grp2ConversionComplete_Isr, MIBADC1_GROUP_2, ADC_ISR_PRIORITY, 0);
    ISR_INSTALL_ISR2("ADC2Grp1ConvComplete", ADC2Grp1ConversionComplete_Isr, MIBADC2_GROUP_1, ADC_ISR_PRIORITY, 0);
    ISR_INSTALL_ISR2("ADC2Grp2ConvComplete", ADC2Grp2ConversionComplete_Isr, MIBADC2_GROUP_2, ADC_ISR_PRIORITY, 0);
#endif
    adcState = ADC_STATE_INIT;
}


#if (ADC_DEINIT_API == STD_ON)
/* @brief Hardware specific implementation of Adc_DeInit
 */
void Adc_Hw_DeInit (void) {
    /** @req SWS_Adc_00111 The function Adc_DeInit shall disable all used interrupts and notifications.*/
    /* Set AD Reset Control Register(ADRSTCR) to reset all ADC internal state
     * machines and control and status registers */
	/*lint -e{923} MISRA:PERFORMANCE:cast from unsigned int to pointer:[MISRA 2012 Rule 11.1, required]*/
	adcREG1->RSTCR = 0x1uL;
	/*lint -e{923} MISRA:PERFORMANCE:cast from unsigned int to pointer:[MISRA 2012 Rule 11.1, required]*/
	adcREG2->RSTCR = 0x1uL;
    adcState = ADC_STATE_UNINIT;
}
#endif


#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/* @brief Hardware specific implementation of Adc_StartGroupConversion
 * @param[in] Group - Numeric ID of requested ADC channel group.
 */
void Adc_Hw_StartGroupConversion (Adc_GroupType Group){
    uint32 hwId = Group / ADC_NOF_GROUP_PER_CONTROLLER;
    uint32 groupIdx = Group % ADC_NOF_GROUP_PER_CONTROLLER;

    /* Generate interrupt at end of conversion  */
    GET_HW_PTR(hwId)->GxINTENA[groupIdx + 1] = ADC_GROUP_CONVERSION_END_ENABLE;
    GET_HW_PTR(hwId)->GxTHRINTCR[groupIdx+1] = 1; /* One conversion */

    /* Write to GxSEL to start the conversion */
    GET_HW_PTR(hwId)->GxSEL[groupIdx+1] = ChannelMask[hwId][groupIdx];
}


/* @brief Hardware specific implementation of Adc_StopGroupConversion
 * @param[in] Group - Numeric ID of requested ADC channel group.
 */
void Adc_Hw_StopGroupConversion (Adc_GroupType Group){
    uint32 hwId = Group / ADC_NOF_GROUP_PER_CONTROLLER;
    uint32 groupIdx = Group % ADC_NOF_GROUP_PER_CONTROLLER;

    /* disable interrupt for group   */
    GET_HW_PTR(hwId)->GxINTENA[groupIdx + 1] &= ~ADC_GROUP_CONVERSION_END_ENABLE;
    GET_HW_PTR(hwId)->GxTHRINTCR[groupIdx+1] = 0; /* No conversion */

    /** @req SWS_Adc_00385 When the ADC Channel Group is in one-shot and software-trigger mode, the function Adc_StopGroupConversion shall stop an ongoing conversion of the group.*/
    /** @req SWS_Adc_00386 When the ADC Channel Group is in continuous-conversion and software-trigger mode, the function Adc_StopGroupConversion shall stop an ongoing conversion of the group.*/

    /* Write to GxSEL to stop the conversion */
    GET_HW_PTR(hwId)->GxSEL[groupIdx+1] = 0;
}
#endif

/* @brief Returns the Adc_ConfigType pointer which points to a channel specified by the channel number
 * @param[in] AdcCtrlNum - Numeric ID of an ADC controller.
 * @return Adc_ConfigType pointer
 * @retval Configuration pointer points to a specific channel.
 */
const Adc_ConfigType* Adc_Hw_GetConfigPTR(uint32 AdcCtrlNum){
	return &Adc_Global.config[AdcCtrlNum];
}


/* @brief Returns the state of the Adc module.
 * @return Adc_StateType
 * @retval ADC_STATE_UNINIT	Adc module is not initialized
 * @retval ADC_STATE_INIT		Adc module is initialized
 */
Adc_StateType Adc_Hw_GetAdcState(void){
	return adcState;
}


/* @brief Returns the global pointer which points to the Adc configuration set.
 * @return Adc_GlobalType pointer
 * @retval Pointer points to the configuration set.
 */
Adc_GlobalType* Adc_Hw_GetGlobalTypeAddr(void){
	return &Adc_Global;
}


/* @brief Interrupt handler for processing ADC conversion interrupts, e.g. group conversion is completed, results have to be read from result register.
 * @param[in] Adc - ADC hardware unit ID, for TMS570, it can be 0 or 1(TMS570 microcontroller has two instances of ADC module).
 * @param[in] Group - Numeric ID of requested ADC channel group.
 */
void Adc_Hw_ADCConversionComplete_Isr(uint32 Adc, Adc_GroupType Group) {			// Parameters: HW ADC unit index, HW ADC group index
    uint32 data;
    adcBASE_t *hwPtr = GET_HW_PTR(Adc);
    uint32 dataMask = GxBUF_DATA10_MASK;		// default 10 bit resolution
    uint32 hwGroup = Group + 1;
    /* Get group, -1 is since hwGroup is TMS570 group that starts at 1...index starts at 0 */
    const Adc_GroupDefType * groupPtr = &(Adc_Hw_GetConfigPTR(Adc)->groupConfigPtr[Group]);     // Only addresses the ASR group0(in configuration, the name starts from 1, but array index starts from 0) and ASR group1

    /* Configuration is sorted according to HwUnit, and this is also the configuration */
    ASSERT( Adc_Hw_GetConfigPTR(Adc)->hwConfigPtr->hwUnitId == Adc );

    if(Adc_Hw_GetConfigPTR(Adc)->hwConfigPtr->adcResolution == 12) {     // 12-bit resolution
        dataMask = GxBUF_DATA12_MASK;
    }

    /* Copy the complete group to it's result registers */
    for (uint32 i = 0; i < (uint32) groupPtr->numberOfChannels; i++) {
        /* Read from FIFO */
        data = hwPtr->GxBUF[hwGroup].BUF0;				// Only maps ASR group0 to HW group1, ASR group1 to HW group2

        /* Mask away not needed things and put in result buffer */
        /** @req SWS_Adc_00122 If applicable, the function Adc_ReadGroup shall mask out all information or diagnostic bits provided by the conversion but not belonging to the conversion results themselves. */
        groupPtr->status->currResultBufPtr[i * groupPtr->streamNumSamples] = ((uint16) data & dataMask);
    }

    /* Clear interrupts */
    hwPtr->GxINTFLG[hwGroup] = (EV_END_MASK | EV_THR_INT_FLG_MASK);

    Adc_Hw_Isr(groupPtr);			// Only addresses ASR group0 and group1
}


/** @brief Based on the configuration of group, e.g. conversion mode and access mode, this function handles mainly the result buffer pointer.
 *  @param[in] GroupPtr - Pointer points to a certain requested channel group.
 */
void Adc_Hw_Isr(const Adc_GroupDefType * GroupPtr) {
	volatile uint32 *ADGxSEL_addr = NULL_PTR;

	/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Already validated during code generation */
    if (GroupPtr != NULL_PTR) {

    	if (ADC_ACCESS_MODE_SINGLE == GroupPtr->accessMode) {		// single access mode
            /*
             * ADC_ACCESS_MODE_SINGLE access mode
             */
            GroupPtr->status->currSampleCount = 1;
            /** @req SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
            GroupPtr->status->groupStatus = ADC_STREAM_COMPLETED;
#if(ADC_HW_TRIGGER_API == STD_ON)
            if ((GroupPtr->conversionMode == ADC_CONV_MODE_CONTINUOUS) ||
            	((GroupPtr->conversionMode == ADC_CONV_MODE_ONESHOT) && (ADC_TRIGG_SRC_HW == GroupPtr->triggerSrc))) {
#else
            if (GroupPtr->conversionMode == ADC_CONV_MODE_CONTINUOUS ) {
#endif
                /* Write to GxSEL to start the conversion */
            	ADGxSEL_addr = &(GET_HW_PTR(GroupPtr->hwUnit)->GxSEL[(GroupPtr->groupId % ADC_NOF_GROUP_PER_CONTROLLER) + 1]);
                *ADGxSEL_addr = *ADGxSEL_addr;				// reference: TMS570 reference manual P998

            }
        }
        else {	/*
        		 * ADC_ACCESS_MODE_STREAMING access mode, when SW trigger, only occurs in continuous conversion
        		 */
            if (ADC_STREAM_BUFFER_LINEAR == GroupPtr->streamBufferMode) {
                GroupPtr->status->currSampleCount++;
                if (GroupPtr->status->currSampleCount < GroupPtr->streamNumSamples) {
                    GroupPtr->status->currResultBufPtr++;
                    /** @req SWS_Adc_00224 The function Adc_GetGroupStatus shall return ADC_COMPLETED*/
                    GroupPtr->status->groupStatus = ADC_COMPLETED;

                    /* Write to GxSEL to start the conversion */
                    ADGxSEL_addr = &(GET_HW_PTR(GroupPtr->hwUnit)->GxSEL[(GroupPtr->groupId % ADC_NOF_GROUP_PER_CONTROLLER) + 1]);
                    *ADGxSEL_addr = *ADGxSEL_addr;

                }
                else {
                    /* All samples completed */
                    /** @req SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
                    GroupPtr->status->groupStatus = ADC_STREAM_COMPLETED;
                }

            }
            else{

                GroupPtr->status->currResultBufPtr++;

                /* Check for buffer wrapping */
                /*lint -e{946} MISRA:PERFORMANCE:Relational or subtract operator applied to pointers, working with pointer in a controlled way results more simplified and readable code:[MISRA 2012 Rule 18.2, required]*/
                /*lint -e{9016} MISRA:PERFORMANCE:pointer arithmetic other than array indexing used, working with pointer in a controlled way results more simplified and readable code:[MISRA 2012 Rule 18.4, advisory]*/
                if (GroupPtr->status->currResultBufPtr
                        >= (GroupPtr->status->resultBufferPtr + GroupPtr->streamNumSamples)) {
                    GroupPtr->status->currResultBufPtr = GroupPtr->status->resultBufferPtr;
                }

                GroupPtr->status->currSampleCount++;
                if (GroupPtr->status->currSampleCount < GroupPtr->streamNumSamples) {
                    /** @req SWS_Adc_00224 The function Adc_GetGroupStatus shall return ADC_COMPLETED*/
                    GroupPtr->status->groupStatus = ADC_COMPLETED;
                }
                else {
                    GroupPtr->status->currSampleCount = GroupPtr->streamNumSamples;
                    /* All samples completed */
                    /** @req SWS_Adc_00325 The function Adc_GetGroupStatus shall return ADC_STREAM_COMPLETED*/
                    GroupPtr->status->groupStatus = ADC_STREAM_COMPLETED;
                }

                /* Turn on the end of stream/conversion interrupt again */
                /* Write to GxSEL to start the conversion */
                ADGxSEL_addr = &(GET_HW_PTR(GroupPtr->hwUnit)->GxSEL[(GroupPtr->groupId % ADC_NOF_GROUP_PER_CONTROLLER) + 1]);
                *ADGxSEL_addr = *ADGxSEL_addr;
            }
        }
        /* Call notification if enabled. */
        /** @req SWS_Adc_00082 void IoHwAb_AdcNotification<groupID>( void ) */
        /** @req SWS_Adc_00083 When the notification mechanism is disabled, the ADC module shall send no notification. */
        /** @req SWS_Adc_00416 When the notifications are re-enabled, the ADC module shall not send notifications for events that occurred while notifications have been disabled. */
        /** @req SWS_Adc_00060 The ADC module shall call the group notification function, whenever a conversion of all channels of the requested group is completed and if the notification is configured and enabled. */
#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
        if ( (0u != GroupPtr->status->notifictionEnable))
        {
            GroupPtr->groupCallback();
        }
#endif
    }
}

/** @}*/
/** @}*/
