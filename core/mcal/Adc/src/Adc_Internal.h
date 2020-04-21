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

/** @tagSettings DEFAULT_ARCHITECTURE=TMS570|RH850F1H|JACINTO5 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

/** @file Adc_Internal.h
 *  This files contains the hardware specific API definitions.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Adc
  *  This is the Mcal Adc Group
  *  @{
  */

#ifndef ADC_INTERNAL_H_
#define ADC_INTERNAL_H_


/* ----------------------------[Internal Types]----------------*/
/** @enum Adc_StateType
*   @brief   ArcCore type definition
*   State of the Module.
*/
typedef enum
{
  ADC_STATE_UNINIT,
  ADC_STATE_INIT,
}Adc_StateType;


/**
  * @brief   ADC related configuration sets.
  * @details ArcCore type definition
  * This structure contains an array pointer config, which points to the configuration set of ADC
  */
#if !(defined(CFG_MPC5516)||defined(CFG_MPC5567)||defined(CFG_MPC5644A)||defined(CFG_MPC5777C)||defined(CFG_MPC5634M))
typedef struct {
    /* Our config */
    const Adc_ConfigType *config;
} Adc_GlobalType;
#endif


/** @enum 	 Adc_ArcStateChangeType
*   @brief   ArcCore type definition
*   When the state of a group is changed, this type specify whether the state change is error prone.
*/
typedef enum{
	ADC_STATE_CHANGE_NOT,		// state is not changed
	ADC_STATE_CHANGE_NO_ERROR,	// state is changed without error
	ADC_STATE_CHANGE_ERROR		// state is changed with error
}Adc_ArcStateChangeType;


/* ----------------------------[HW Specific Functions]---------*/
/** @brief Hardware specific implementation of Adc_Init
 *  @param[in] ConfigPtr - Pointer to configuration set
 */
void Adc_Hw_Init(const Adc_ConfigType* ConfigPtr);


/** @brief Hardware specific implementation of Adc_DeInit
 */
void Adc_Hw_DeInit(void);


/** @brief Hardware specific implementation of Adc_StartGroupConversion
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 */
void Adc_Hw_StartGroupConversion (Adc_GroupType Group);


/** @brief Hardware specific implementation of Adc_StopGroupConversion
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 */
void Adc_Hw_StopGroupConversion (Adc_GroupType Group);


/** @brief Hardware specific implementation of Adc_EnableHardwareTrigger
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 */
void Adc_Hw_EnableHardwareTrigger(Adc_GroupType Group);


/** @brief Hardware specific implementation of Adc_DisableHardwareTrigger
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 */
void Adc_Hw_DisableHardwareTrigger(Adc_GroupType Group);


#if defined(CFG_TMS570)
/** @brief Interrupt handler for processing ADC conversion interrupts, e.g. group conversion is completed, results have to be read from result register.
 *  @param[in] Adc - ADC hardware unit ID, for TMS570, it can be 0 or 1(TMS570 microcontroller has two instances of ADC module).
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 */
void Adc_Hw_ADCConversionComplete_Isr(uint32 Adc, Adc_GroupType Group);
#endif


/** @brief Based on the configuration of group, e.g. conversion mode and access mode, this function handles mainly the result buffer pointer.
 *  @param[in] GroupPtr - Pointer points to a certain requested channel group.
 */
void Adc_Hw_Isr(const Adc_GroupDefType * GroupPtr);

/** @brief Last step in the interrupt handling
 *  @param[in] groupPtr - Pointer points to a certain requested channel group.
 *  @param[in] enableInt - Specifies whether or not the interrupt should be re-enabled after the current interrupt process.
 */
void Adc_Hw_IsrPost( const Adc_GroupDefType * groupPtr, boolean enableInt);


/** @brief Returns the Adc_GroupDefType pointer which points to the group specified by group ID
 *  @param[in] Group - Numeric ID of an ADC channel group.
 *  @return Adc_GroupDefType pointer
 *  @retval Constant pointer to Adc_GroupDefType
 */
const Adc_GroupDefType * Adc_Hw_getGroupPtr(Adc_GroupType Group);


/** @brief Validates the group ID
 *  @param[in] Group - Numeric ID of an ADC channel group.
 *  @return Boolean
 *  @retval TRUE	Group ID is valid
 *  @retval FALSE	Group ID is invalid
 */
boolean Adc_Hw_validGroupId(Adc_GroupType Group);


/** @brief Returns the status of a group specified by group ID
 *  @param[in] Group - Numeric ID of an ADC channel group.
 *  @return Adc_StatusType
 *  @retval ADC_IDLE				The group is in IDLE status, no conversion is going on
 *  @retval ADC_BUSY				The group is in BUSY status, conversion is going on
 *  @retval ADC_COMPLETED			A conversion round (which is not the final one) of the specified group has been finished. A result is available for all channels of the group.
 *  @retval ADC_STREAM_COMPLETED	The result buffer is completely filled - For each channel of the selected group the number of samples to be acquired is available.
 */
Adc_StatusType Adc_Hw_getGroupStatus(Adc_GroupType Group);


/** @brief Changes the status of a group, it calls functions: Adc_Hw_StreamCompleted_To_Busy, Adc_Hw_StreamCompleted_To_Idle, Adc_Hw_ADCCompleted_To_Busy
 *  @param[in] Group - Numeric ID of an ADC channel group.
 *  @return Adc_ArcStateChangeType
 *  @retval ADC_STATE_CHANGE_NOT		The group status is not changed
 *  @retval ADC_STATE_CHANGE_NO_ERROR	The group status is changed and no error occurs in the process
 *  @retval ADC_STATE_CHANGE_ERROR		The group status is not changed and error occurs in the process
 */
Adc_ArcStateChangeType Adc_Hw_GroupStatusChange(Adc_GroupType Group);


/** @brief Validate the group status, if the status is ADC_IDLE or ADC_STREAM_COMPLETED
 *  @param[in] ConfigId - Numeric ID of an ADC channel.
 *  @return Std_ReturnType
 *  @retval E_OK				The group status is either ADC_IDLE or ADC_STREAM_COMPLETED
 *  @retval E_NOT_OK			The group status is neither ADC_IDLE nor ADC_STREAM_COMPLETED
 */
Std_ReturnType Adc_Hw_Validate_Group_Status(uint32 ConfigId);


/** @brief Returns the Adc_ConfigType pointer which points to a channel specified by the channel number
 *  @param[in] AdcCtrlNum - Numeric ID of an ADC controller.
 *  @return Adc_ConfigType pointer
 *  @retval Configuration pointer points to a specific channel.
 */
const Adc_ConfigType* Adc_Hw_GetConfigPTR(uint32 AdcCtrlNum);


/** @brief Returns the state of the Adc module.
 * @return Adc_StateType
 *  @retval ADC_STATE_UNINIT	Adc module is not initialized
 *  @retval ADC_STATE_INIT		Adc module is initialized
 */
Adc_StateType Adc_Hw_GetAdcState(void);


/** @brief Returns the global pointer which points to the Adc configuration set.
 * @return Adc_GlobalType pointer
 *  @retval Pointer points to the configuration set.
 */
#if !(defined(CFG_MPC5516)||defined(CFG_MPC5567)||defined(CFG_MPC5644A)||defined(CFG_MPC5777C)||defined(CFG_MPC5634M))
Adc_GlobalType* Adc_Hw_GetGlobalTypeAddr(void);
#endif


#endif /* ADC_INTERNAL_H_ */

/** @}*/
/** @}*/
