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

/** @tagSettings DEFAULT_ARCHITECTURE=PPC|SPC56XL70|MPC5607B|MPC5744P|JACINTO5|JACINTO6|TMS570|ZYNQ */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Pwm.c
 * 	The Pwm.c file contains the generic implementation of all the API mentioned in Pwm driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Pwm_Hw_* .c file (depends on the architecture).
 *  Each API has the Det error check mentioned in section 7.5 (Pwm driver SWS document) and calls the the
 *  hardware specific implementation function if the check passes.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Pwm
  *  This is the Mcal Pwm Group
  *  @{
  */

/** @file Pwm.c
 *  The Pwm.c file will contain the generic implementation of all the API mentioned in Pwm driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Pwm_Hw_*.c file (depends on the architecture).
 *  Each API will have the Det error check mentioned in section 7.5 (Pwm driver SWS document) and will call the the
 *  hardware specific implementation function if the check passes.
 *
 */

/** @req 4.1.2|4.3.0/SWS_Pwm_00070 All time units shall be in ticks. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00088 Re-entrant functions. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00121 Re-initialization with Pwm_Init requires call to Pwm_DeInit before. */
/** @req 4.1.2|4.3.0/SWS_Pwm_10051 Report to Det if enabled. */
/** @req 4.1.2|4.3.0/SWS_Pwm_20002 Return PWM_E_UNINIT when API service is used without module initialization. */
/** @req 4.1.2|4.3.0/SWS_Pwm_30002 Return PWM_E_PARAM_CHANNEL when API service is used with an invalid channel Identifier. */
/** @req 4.1.2|4.3.0/SWS_Pwm_40002 Return PWM_E_PERIOD_UNCHANGEABLE if user is trying to change period on a channel
 * not configured as variable period. */
/** @req 4.1.2|4.3.0/SWS_Pwm_20051 Do not perform action if Det is enabled and error is detected.
 * Supported with some exceptions (Pwm_Init and PWM_E_EXECUTION_ERROR). */
/** @req 4.1.2|4.3.0/SWS_Pwm_50002 - The PWM Driver module shall report the development error "PWM_E_ALREADY_INITIALIZED(0x14)",
 * when API Pwm_Init service is called while the PWM driver has already been initialized.  */
/** @req:PPC|SPC56XL70|MPC5607B|MPC5744P|TMS570  4.1.2|4.3.0/SWS_Pwm_50075 - Pwm.c shall include Pwm.h, Pwm_MemMap.h, Det.h and SchM_Pwm.h.*/
/** @req  4.1.2|4.3.0/SWS_PWM_00018 - The driver shall forbid the spike on the PWM output signal. */
/** @req  4.1.2|4.3.0/SWS_PWM_00047 - If default error detection for the Pwm module is enabled: the PWM functions shall check the parameter
 * ChannelNumber and raise development error PWM_E_PARAM_CHANNEL if the parameter ChannelNumber is invalid. */
/** @req  4.1.2|4.3.0/SWS_Pwm_00117 - If default error detection for the Pwm module is enabled: if any function (except Pwm_Init) is called before
 * Pwm_Init has been called, the called function shall raise development error PWM_E_UNINIT. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00119 - After the call of the function Pwm_SetOutputToIdle, fixed period type channels shall be reactivated using only
 * the API Pwm_SetDutyCycle() to activate the PWM channel with the old period */
/** @req:PPC|SPC56XL70|MPC5607B|MPC5744P|TMS570 4.1.2|4.3.0/SWS_Pwm_00065 - The Pwm SWS shall not define the code file structure. */

/**************************************************************
 *  				includes
 **************************************************************/
/*lint -e553 MISRA:STANDARDIZED_INTERFACE:Undefined preprocessor variable, assumed 0:[MISRA 2012 Rule 20.9, required] */
#if PWM_DEV_ERROR_DETECT==STD_ON
#include "Det.h"
#endif
#include "Pwm_MemMap.h"
#include "Pwm.h"
#include "Pwm_Internal.h"
#include "SchM_Pwm.h"

/* ----------------------------[private define]------------------------------*/
/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X)|| defined(CFG_MPC5744P)
#define PWM_SW_MAJOR_VERSION_INT   3u /**< @brief Pwm Module Software Major Version Number */
#define PWM_SW_MINOR_VERSION_INT   1u /**< @brief Pwm Module Software Minor Version Number */
#define PWM_SW_PATCH_VERSION_INT   0u /**< @brief Port Module Software Patch Version Number */

#define PWM_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Port Module Autosar Major Version Number  */
#define PWM_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Port Module Autosar Minor Version Number  */
#define PWM_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Port Module Autosar Patch Version Number  */

#else
#define PWM_SW_MAJOR_VERSION_INT   2u
#define PWM_SW_MINOR_VERSION_INT   1u
#define PWM_SW_PATCH_VERSION_INT   0u

#define PWM_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Port Module Autosar Major Version Number  */
#define PWM_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Port Module Autosar Minor Version Number  */
#define PWM_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Port Module Autosar Patch Version Number  */
#endif


/** @} */

#if (PWM_SW_MAJOR_VERSION != PWM_SW_MAJOR_VERSION_INT) || (PWM_SW_MINOR_VERSION != PWM_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Pwm.c and Pwm.h"
#endif

#if (PWM_AR_RELEASE_MAJOR_VERSION != PWM_AR_RELEASE_MAJOR_VERSION_INT) || (PWM_AR_RELEASE_MINOR_VERSION != PWM_AR_RELEASE_MINOR_VERSION_INT)
#error "AR Version mismatch between Pwm.c and Pwm.h"
#endif

/* ----------------------------[private macro]-------------------------------*/
/**************************************************************
 *  				private typedef
 **************************************************************/
/** @enum 	Pwm_ModuleStateType
*   @brief	Data type for state of the Pwm module. It shall be uint8, uint16 or uint32 depending on the architecture.
*/
typedef enum {
    PWM_STATE_UNINITIALIZED,	/**< @brief value 0 is used for uninitialized Pwm module *///!< PWM_STATE_UNINITIALIZED
    PWM_STATE_INITIALIZED		/**< @brief value 1 is used for initialized Pwm module */    //!< PWM_STATE_INITIALIZED
} Pwm_ModuleStateType;

/**************************************************************
 *  				variables
 **************************************************************/


/** @brief State of the Pwm module. Default is PWM_STATE_UNINITIALIZED */
static Pwm_ModuleStateType Pwm_ModuleState = PWM_STATE_UNINITIALIZED;

/**************************************************************
 *  				functions
 **************************************************************/
/***************************************************************************//**
 * @brief  	Function used to validate custom expressions.
 * @details If the validation fails, an error is reported to default error tracer
 * 			if PWM_DEV_ERROR_DETECT is STD_ON.
 * @param[in]			exp - boolean expression to be validated
 * @param[in] 			apiid - AUTOSAR specified API Id for each module
 * @param[in] 			errid - AUTOSAR specified Error Id for each type of error
 * 						specific to each API
 * @return              validation status
 * @retval E_OK      	validation successful (boolean expression evaluates to true).
 * @retval E_NOT_OK  	validation unsuccessful (boolean expression evaluates to false).
 ******************************************************************************/
static inline void Pwm_validate(boolean exp, uint8 apiid, uint8 errid, Std_ReturnType* rv){

	if((*rv == E_OK) && (exp == FALSE)){
	/*lint -e553 MISRA:STANDARDIZED_INTERFACE:Undefined preprocessor variable, assumed 0:[MISRA 2012 Rule 20.9, required] */
#if PWM_DEV_ERROR_DETECT==STD_ON
		(void)Det_ReportError( PWM_MODULE_ID, 0, apiid, errid);
#endif
		*rv = E_NOT_OK;
	}
}

 /* @brief  	Generic service for PWM initialization.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note                Non-reentrant
 * @param[in] 			ConfigPtr Pointer to configuration set
 */
void Pwm_Init( const Pwm_ConfigType *ConfigPtr ) {
	Std_ReturnType validate_rv = E_OK;

	/**  @req 4.1.2 SWS_Pwm_00046 - Null pointer check*/
	/**  @req:PPC|SPC56XL70|MPC5607B|MPC5744P|TMS570 4.1.2|4.3.0/SWS_Pwm_10120 - For pre-compile and link time configuration variants, a NULL pointer shall be passed to the initialization routine */
	/**  @req:PPC|SPC56XL70|MPC5607B|MPC5744P|TMS570 4.1.2|4.3.0/SWS_Pwm_20120 - In this case the check for this NULL pointer has to be omitted */
#if (PWM_STATICALLY_CONFIGURED == STD_OFF)
	Pwm_validate((boolean)(ConfigPtr != NULL_PTR), PWM_INIT_SERVICE_ID, PWM_E_PARAM_CONFIG, &validate_rv);
#else
#error "PWM_STATICALLY_CONFIGURED is not supported"
#endif

    /** @req 4.1.2|4.3.0/SWS_Pwm_00118 - calling the routine Pwm_Init while the PWM driver and hardware are already initialized
     * will cause a development error PWM_E_ALREADY_INITIALIZED.*/
	Pwm_validate((boolean)(Pwm_ModuleState != PWM_STATE_INITIALIZED), PWM_INIT_SERVICE_ID, PWM_E_ALREADY_INITIALIZED, &validate_rv);

	if(validate_rv == E_OK)
	{
		uint8 result = Pwm_Hw_Init(ConfigPtr);
		if( result == E_OK ){
			Pwm_ModuleState = PWM_STATE_INITIALIZED;
		}else{
		/*lint -e553 MISRA:STANDARDIZED_INTERFACE:Undefined preprocessor variable, assumed 0:[MISRA 2012 Rule 20.9, required] */
#if (PWM_DEV_ERROR_DETECT == STD_ON)
			(void)Det_ReportError( PWM_MODULE_ID, 0, PWM_INIT_SERVICE_ID, result);
#endif
		}
	}

}

/** @req 4.1.2|4.3.0/SWS_Pwm_20080 - Pwm_DeInit shall be configurable On/Off by
 * the configuration parameter PwmDeInitApi {PWM_DE_INIT_API}*/
#if (PWM_DE_INIT_API == STD_ON )
/** @req 4.1.2|4.3.0/SWS_PWM_00096 Pwm_DeInit */
/** @req 4.1.2|4.3.0/SWS_Pwm_00011 - The function Pwm_DeInit shall set the state of the PWM output signals to the idle state. */
/* @brief  	Generic service for PWM de-initialization.
 * @details	This generic function calls the HW specific implementation function if
 * 			Pwm driver initialization check is passed. If it is not passed an error
 * 			is reported to default error tracer
 * @note    Non-reentrant
 */
void Pwm_DeInit( void ) {
	Std_ReturnType validate_rv = E_OK;

	Pwm_validate((boolean)(Pwm_ModuleState == PWM_STATE_INITIALIZED), PWM_DEINIT_SERVICE_ID, PWM_E_UNINIT, &validate_rv);

    if(validate_rv == E_OK){
		/** @req 4.1.2|4.3.0/SWS_Pwm_00011 - Pwm_DeInit shall set the state of the PWM output signals to the idle state. */
		/** @req 4.1.2|4.3.0/SWS_Pwm_00012 - The function Pwm_DeInit shall disable PWM interrupts and PWM signal edge notifications. */

		Pwm_Hw_Deinit();
		/** @req 4.1.2|4.3.0/SWS_Pwm_00010 - Pwm_DeInit shall de-initialize the PWM module. */
		Pwm_ModuleState = PWM_STATE_UNINITIALIZED;
    }
}
#endif

/** @req 4.1.2|4.3.0/SWS_Pwm_20082 - Pwm_SetDutyCycle shall be configurable On/Off by the configuration parameter */
#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
/** @req:PPC|SPC56XL70|MPC5607B|MPC5744P|TMS570 4.1.2|4.3.0/SWS_Pwm_00020  - When updating the PWM period and duty, the driver shall repress any spikes
 * on the PWM output signal */
/* @brief  	Generic API for setting PWM duty-cycle.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 	channel number
 * @param[in] 	DutyCycle 	Duty-cycle to set
 */
void Pwm_SetDutyCycle( Pwm_ChannelType Channel, uint16 DutyCycle )
{
	Std_ReturnType validate_rv = E_OK;

	Pwm_validate((boolean)(Pwm_ModuleState == PWM_STATE_INITIALIZED), PWM_SETDUTYCYCLE_SERVICE_ID, PWM_E_UNINIT, &validate_rv);
	Pwm_validate(Pwm_Hw_isChannelConfigured( Channel ), PWM_SETDUTYCYCLE_SERVICE_ID, PWM_E_PARAM_CHANNEL, &validate_rv);

	if(validate_rv == E_OK){
		Pwm_Hw_setDutyCycle(Channel, DutyCycle);
	}
}
#endif

/** @req 4.1.2|4.3.0/SWS_Pwm_20083 - Pwm_SetPeriodAndDuty shall be configurable On/Off by the configuration parameter */
#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Pwm_00019 - The function Pwm_SetPeriodAndDuty shall set the period and the duty cycle of a PWM channel */
/** @req 4.1.2|4.3.0/SWS_Pwm_00045 If default error detection for the Pwm module is enabled: The API
* Pwm_SetPeriodAndDuty() shall check if the given PWM channel is of the channel class type PWM_VARIABLE_PERIOD.*/
/** @req:PPC|SPC56XL70|MPC5607B|MPC5744P|TMS570|ZYNQ 4.1.2|4.3.0/SWS_Pwm_00076 The function Pwm_SetPeriodAndDuty shall update the period always at the end of the current period
 * if supported by the implementation and configured with PwmPeriodUpdatedEndperiod.*/
/** @req 4.1.2|4.3.0/SWS_PWM_10086 After the call of the function Pwm_SetOutputToIdle, variable period type channels shall be reactivated
 * using the Api Pwm_SetPeriodAndDuty( ) to activate the PWM channel with the new passed period.*/
/* @brief  	Generic API for setting PWM period and duty.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 	channel number
 * @param[in] 	Period 		period to set
 * @param[in] 	DutyCycle 	Duty-cycle to set
 */
void Pwm_SetPeriodAndDuty(Pwm_ChannelType Channel, Pwm_PeriodType Period, uint16 DutyCycle) {


    Std_ReturnType validate_rv = E_OK;
	Pwm_validate((boolean)(Pwm_ModuleState == PWM_STATE_INITIALIZED), PWM_SETPERIODANDDUTY_SERVICE_ID, PWM_E_UNINIT, &validate_rv);
	Pwm_validate(Pwm_Hw_isChannelConfigured( Channel ), PWM_SETPERIODANDDUTY_SERVICE_ID, PWM_E_PARAM_CHANNEL, &validate_rv);

	if(validate_rv == E_OK){

		/** @req 4.1.2|4.3.0/SWS_PWM_00041 - The function Pwm_SetPeriodAndDuty shall allow changing the period
		 * only for the PWM channel declared as variable period type*/
		if (Pwm_Hw_getChannelClass(Channel) == PWM_VARIABLE_PERIOD) {
			/** @req 4.1.2|4.3.0/SWS_Pwm_00150 - If the period is set to zero the setting of the duty-cycle
			 * is not relevant. In this case the output shall be zero*/
			if (Period == 0) {
				Pwm_Hw_SetPeriodAndDuty(Channel, Period, 0);
			} else {
				Pwm_Hw_SetPeriodAndDuty(Channel, Period, DutyCycle);
			}
		}else{
/*lint -e553 MISRA:STANDARDIZED_INTERFACE:Undefined preprocessor variable, assumed 0:[MISRA 2012 Rule 20.9, required] */
#if (PWM_DEV_ERROR_DETECT == STD_ON)
			(void)Det_ReportError( PWM_MODULE_ID, 0, PWM_SETPERIODANDDUTY_SERVICE_ID, PWM_E_PERIOD_UNCHANGEABLE);
#endif /* (PWM_DEV_ERROR_DETECT == STD_ON) */

		}
	}


}
#endif

/** @req 4.1.2|4.3.0/SWS_Pwm_20112 - The function Pwm_DisableNotification shall be configurable On/Off by the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_20113 - The function Pwm_EnableNotification shall be configurable On/Off by the configuration parameter */
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
/* @brief  	Generic API for disabling channel notification.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 	channel number
 */
void Pwm_DisableNotification(Pwm_ChannelType Channel) {
	Std_ReturnType validate_rv = E_OK;

	Pwm_validate((boolean)(Pwm_ModuleState == PWM_STATE_INITIALIZED), PWM_DISABLENOTIFICATION_SERVICE_ID, PWM_E_UNINIT, &validate_rv);
	Pwm_validate(Pwm_Hw_isChannelConfigured( Channel ), PWM_DISABLENOTIFICATION_SERVICE_ID, PWM_E_PARAM_CHANNEL, &validate_rv);

    if(validate_rv == E_OK){
    	/** @req 4.1.2|4.3.0/SWS_Pwm_00023 - Pwm_DisableNotification shall disable the PWM signal edge notification */
    	Pwm_Hw_DisableNotification(Channel);
    }
}

/* @brief  	Generic API for enabling channel notification.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 		channel number
 * @param[in] 	Notification 	Notification type to enable
 */
void Pwm_EnableNotification(Pwm_ChannelType Channel, Pwm_EdgeNotificationType Notification) {
	Std_ReturnType validate_rv = E_OK;

	Pwm_validate(Pwm_Hw_isChannelConfigured( Channel ), PWM_ENABLENOTIFICATION_SERVICE_ID, PWM_E_PARAM_CHANNEL, &validate_rv);
	Pwm_validate((boolean)(Pwm_ModuleState == PWM_STATE_INITIALIZED), PWM_ENABLENOTIFICATION_SERVICE_ID, PWM_E_UNINIT, &validate_rv);

    if(validate_rv == E_OK){
		Pwm_Hw_EnableNotification(Channel, Notification);
    }
}
#endif


/** @req 4.1.2|4.3.0/SWS_Pwm_20084 - The function Pwm_SetOutputToIdle shall be configurable On/Off by the configuration parameter. */
#if (PWM_SET_OUTPUT_TO_IDLE_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_PWM_00099 Pwm_SetOutputToIdle */

/* @brief  	Generic API that sets output to idle.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 		channel number
 */
void Pwm_SetOutputToIdle(Pwm_ChannelType Channel) {
	Std_ReturnType validate_rv = E_OK;

	Pwm_validate(Pwm_Hw_isChannelConfigured( Channel ), PWM_SETOUTPUTTOIDLE_SERVICE_ID, PWM_E_PARAM_CHANNEL, &validate_rv);
	Pwm_validate((boolean)(Pwm_ModuleState == PWM_STATE_INITIALIZED), PWM_SETOUTPUTTOIDLE_SERVICE_ID, PWM_E_UNINIT, &validate_rv);

    if( validate_rv == E_OK){

		/** @req 4.3.0/SWS_Pwm_00021 - The function Pwm_SetOutputToIdle shall set immediately
		 * the PWM output to the configured Idle state.*/
		Pwm_Hw_setOutputState(Channel, Pwm_Hw_getConfiguredIdleState(Channel));

	#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
		Pwm_Hw_disableInt(Channel);
	#endif
    }
}
#endif

/** @req 4.1.2|4.3.0/SWS_Pwm_10085 Pwm_GetOutputState shall be pre compile time configurable On/Off using the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_20085 configuration parameter: PwmGetOutputState {PWM_GET_OUTPUT_STATE_API} */
#if (PWM_GET_OUTPUT_STATE_API == STD_ON)

/** @req:PPC|SPC56XL70|MPC5607B|MPC5744P 4.1.2|4.3.0/SWS_Pwm_00022 The function Pwm_GetOutputState shall read the internal state of the PWM output signal and return it.*/
/** @req 4.1.2|4.3.0/SWS_Pwm_30051 If Pwm_GetOutputState is called before module initialization,
or with an invalid channel, it shall return PWM_LOW.*/
/* @brief  	Generic API that gets output state of a channel
 * @details	If the requested channel is not configured an error is
 * 			reported to default error tracer.
 * @note     	Reentrant
 * @param[in] 	Channel 		channel number
 * @return		State of the requested channel
 * @retval		PWM_LOW			Output state is low
 * @retval		PWM_HIGH		output state is high
 */
Pwm_OutputStateType Pwm_GetOutputState(Pwm_ChannelType Channel) {
	Std_ReturnType validate_rv = E_OK;

	Pwm_validate(Pwm_Hw_isChannelConfigured( Channel ), PWM_GETOUTPUTSTATE_SERVICE_ID, PWM_E_PARAM_CHANNEL, &validate_rv);
	Pwm_validate((boolean)(Pwm_ModuleState == PWM_STATE_INITIALIZED), PWM_GETOUTPUTSTATE_SERVICE_ID, PWM_E_UNINIT, &validate_rv);

    if(validate_rv == E_OK){
    	return Pwm_Hw_GetOutputState(Channel);
    }else{
    	return PWM_LOW;
    }
}
#endif

/** @req 4.1.2|4.3.0/SWS_Pwm_20069 Pwm_GetVersionInfo shall be configurable On/Off
 * by the configuration parameter: PwmVersionInfoApi {PWM_VERSION_INFO_API}.*/
#if ( PWM_VERSION_INFO_API == STD_ON)

/* @brief  	Generic API that gets version information of the Pwm driver.
 * @details	If the requested channel is not configured an error is
 * 			reported to default error tracer. Currently this API returns PWM_LOW
 * 			in either case because the true functionality is not yet implemented.
 * @note     		Reentrant
 * @param [ in/out ] 	versioninfo 	struct holding the version info
 */
void Pwm_GetVersionInfo( Std_VersionInfoType* versioninfo) {
	Std_ReturnType validate_rv = E_OK;

	Pwm_validate((boolean)(versioninfo != NULL_PTR), PWM_GETVERSIONINFO_SERVICE_ID, PWM_E_PARAM_POINTER, &validate_rv);

    /** @req 4.1.2/SWS_Pwm_00151 */
	if(validate_rv == E_OK){
		versioninfo->vendorID = PWM_VENDOR_ID;
		versioninfo->moduleID = PWM_MODULE_ID;
		versioninfo->sw_major_version = PWM_SW_MAJOR_VERSION;
		versioninfo->sw_minor_version = PWM_SW_MINOR_VERSION;
		versioninfo->sw_patch_version = PWM_SW_PATCH_VERSION;
	}
}
#endif


/** @}*/
/** @}*/
