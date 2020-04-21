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

/** @tagSettings DEFAULT_ARCHITECTURE=PPC|SPC56XL70|MPC5607B|MPC5744P|MPC5604P|MPC5643L|JACINTO5|JACINTO6|TMS570|ZYNQ */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** Pwm.h
 *  This files contains the hardware specific API definitions.
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

/** @file Pwm.h
 * 	The Pwm driver provides functions for initialization and control of the microcontroller internal PWM hw unit.
 * 	The Pwm module generates pulses with variable pulse width. It allows the selection of the duty cycle and the signal period time.
 *  This files contains the hardware specific register definitions that are required by the Pwm module.
 */

#ifndef PWM_H_
#define PWM_H_

/**  General tagging */
/** @req 4.1.2|4.3.0/SWS_Pwm_00094 Imported types. Partly implemented, Dem not used. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00104 Error reporting functions. Partly implemented, Dem not used. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00106 Pwm_ChannelType */
/** @req 4.1.2|4.3.0/SWS_Pwm_00107 Pwm_PeriodType */
/** @req 4.1.2|4.3.0/SWS_Pwm_00111 Pwm_ConfigType */
/** @req 4.1.2|4.3.0/SWS_Pwm_00061 Pwm_ConfigType contains initialization data for the PWM driver*/
/** @req:TMS570|PPC|MPC5744P|MPC5604P|MPC5643L 4.3.0/SWS_Pwm_40075 - Pwm_Lcfg.c shall include Pwm.h and Pwm_Memmap.h */
/** @req:TMS570|PPC|MPC5744P|MPC5604P|MPC5643L 4.3.0/SWS_Pwm_60075 Pwm_PBcfg.c shall include Pwm_MemMap.h and Pwm.h. */
/** @req:TMS570|PPC|MPC5744P|MPC5604P|MPC5643L 4.3.0/SWS_Pwm_70075 Pwm_Irq.c shall include Pwm_MemMap.h and Pwm.h. */

#include "Std_Types.h"

/**************************************************************
 *  Module constants.
 **************************************************************/

/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X) || defined(CFG_MPC5744P)
#define PWM_SW_MAJOR_VERSION        3u		/**< @brief Pwm Module Software Major Version Number */
#define PWM_SW_MINOR_VERSION        1u		/**< @brief Pwm Module Software Minor Version Number */
#define PWM_SW_PATCH_VERSION        0u		/**< @brief Pwm Module Software Patch Version Number */

#define PWM_AR_RELEASE_MAJOR_VERSION        4u	/**< @brief Pwm Module Autosar Major Version Number */
#define PWM_AR_RELEASE_MINOR_VERSION        3u	/**< @brief Pwm Module Autosar Minor Version Number */
#define PWM_AR_RELEASE_PATCH_VERSION        0u	/**< @brief Pwm Module Autosar Patch Version Number */

#else
#define PWM_SW_MAJOR_VERSION   2u /**< @brief Pwm Module Software Major Version Number for other architectures */
#define PWM_SW_MINOR_VERSION   1u /**< @brief Pwm Module Software Minor Version Number for other architectures */
#define PWM_SW_PATCH_VERSION   0u /**< @brief Pwm Module Software Patch Version Number for other architectures */

#define PWM_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Pwm Module Autosar Major Version Number for other architectures */
#define PWM_AR_RELEASE_MINOR_VERSION   1u /**< @brief Pwm Module Autosar Minor Version Number for other architectures */
#define PWM_AR_RELEASE_PATCH_VERSION   2u /**< @brief Pwm Module Autosar Patch Version Number for other architectures */

#endif

#if defined(USE_KERNEL)
#include "Os.h"

/* Assign application according to define */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS) && !defined(PWM_ARC_ISR_APP)
#if ((OS_SC3 == STD_ON) || (OS_SC4 == STD_ON))
#error You must define PWM_ARC_ISR_APP
#else
#define PWM_ARC_ISR_APP             0
#endif
#endif

#endif

#define PWM_MODULE_ID			121u	/**< @brief Pwm Module Id  */
#define PWM_VENDOR_ID			60u		/**< @brief Pwm Vendor Id  */
/** @} */

/**
  * @name    Service id's
  * @{
  */
#define PWM_INIT_SERVICE_ID                         0x00u	/**< @brief Service Id for Pwm_Init API */
#define PWM_DEINIT_SERVICE_ID                       0x01u	/**< @brief Service Id for Pwm_DeInit API */
#define PWM_SETDUTYCYCLE_SERVICE_ID                 0x02u	/**< @brief Service Id for Pwm_SetDutyCycle API */
#define PWM_SETPERIODANDDUTY_SERVICE_ID             0x03u	/**< @brief Service Id for Pwm_SetPeriodAndDuty API */
#define PWM_SETOUTPUTTOIDLE_SERVICE_ID              0x04u	/**< @brief Service Id for Pwm_SetOutputToIdle API */
#define PWM_GETOUTPUTSTATE_SERVICE_ID               0x05u	/**< @brief Service Id for Pwm_GetOutputState API */
#define PWM_DISABLENOTIFICATION_SERVICE_ID          0x06u	/**< @brief Service Id for Pwm_DisableNotification API */
#define PWM_ENABLENOTIFICATION_SERVICE_ID           0x07u	/**< @brief Service Id for Pwm_EnableNotification API */
#define PWM_GETVERSIONINFO_SERVICE_ID               0x08u	/**< @brief Service Id for Pwm_GetVersionInfo API */
#define PWM_SETPOWERSTATE_SERVICE_ID                0x09u	/**< @brief Service Id for Pwm_SetPowerState API (not supported) */
#define PWM_GETPOWERSTATE_SERVICE_ID                0x0Au	/**< @brief Service Id for Pwm_GetTargetPowerState API (not supported) */
#define PWM_GETTARGETPOWERSTATE_SERVICE_ID          0x0Bu	/**< @brief Service Id for Pwm_GetTargetPowerState API (not supported) */
#define PWM_PREPAREPOWERSTATE_SERVICE_ID            0x0Cu	/**< @brief Service Id for Pwm_PreparePowerState API (not supported) */
#define PWM_MAIN_POWERTRANSITIONMANAGER_SERVICE_ID  0x0Du	/**< @brief Service Id for Pwm_Main_PowerTransitionManager API (not supported) */
#define PWM_GLOBAL_SERVICE_ID  						0x10u	/**< @brief Global Id for the Pwm Module */
/** @} */

/**
  * @name    Error Codes - AUTOSAR
  * @{
  */
/** @req 4.1.2|4.3.0/SWS_Pwm_00201 Development Error Types */
#define PWM_E_PARAM_CONFIG              0x10u	/**< @brief API Pwm_Init service called with wrong parameter. Autosar 4.1.2 */
#define PWM_E_INIT_FAILED				0x10u 	/**< @brief API Pwm_Init service called with wrong parameter. Autosar 4.3.0 */
#define PWM_E_UNINIT                    0x11u	/**< @brief API service called without module initialization. Autosar 4.3.0 */
#define PWM_E_PARAM_CHANNEL             0x12u	/**< @brief API service used with an invalid channel Identifier. Autosar 4.3.0 */
#define PWM_E_PERIOD_UNCHANGEABLE       0x13u	/**< @brief Usage of unauthorized PWM service on PWM channel configured a fixed period. Autosar 4.3.0 */
#define PWM_E_ALREADY_INITIALIZED       0x14u	/**< @brief API Pwm_Init service called while the PWM driver has already been initialised. Autosar 4.3.0 */
#define PWM_E_PARAM_POINTER             0x15u	/**< @brief API Pwm_GetVersionInfo is called with a NULL parameter. Autosar 4.3.0 */
#define PWM_E_NOT_DISENGAGED            0x16u	/**< @brief API Pwm_SetPowerState is called while the PWM module is still in use. Autosar 4.3.0 */
#define PWM_E_POWER_STATE_NOT_SUPPORTED 0x17u	/**< @brief The requested power state is not supported by the PWM module. Autosar 4.3.0 */
#define PWM_E_TRANSITION_NOT POSSIBLE   0x18u	/**< @brief The requested power state is not reachable from the current one. Autosar 4.3.0 */
#define PWM_E_PERIPHERAL_NOT_PREPARED   0x19u	/**< @brief API Pwm_SetPowerState has been called without having called the API Pwm_PreparePowerState before. Autosar 4.3.0 */
#define PWM_E_EXECUTION_ERROR		    0x20u	/**< @brief Error durint Pwm_Init. Autosar 4.1.2 */
/** @} */


/** @req 4.1.2|4.3.0/SWS_PWM_00059 The Pwm module shall comply with the following
 * scaling scheme for the duty cycle:
 * 0x0000 means 0%.
 * 0x8000 means 100%.
 * 0x8000 gives the highest resolution while allowing 100% duty cycle
 * to be represented with a 16 bit value.*/
#define PWM_100_PERCENT     0x8000U		/**< @brief Value for 100% duty cycle */
#define PWM_50_PERCENT      0x4000U		/**< @brief Value for 50% duty cycle */
#define PWM_0_PERCENT		0U			/**< @brief Value for 0% duty cycle */

#define PWM_NO_NOTIFICATION 0xFFu			/**< @brief used for signifying that no notification will be called. (Used for TMS570) */
#define PWM_NO_EDGES (PWM_BOTH_EDGES + 1)	/**< @brief used for signifying that no notification will be called. (Used for flex platform) */


/**************************************************************
 *  Type definitions
 **************************************************************/

/** @req 4.1.2|4.3.0/SWS_Pwm_00108 Pwm_OutputStateType is a type for defining output state of a Pwm channel */
/** @enum Pwm_OutputStateType
*   @brief   AUTOSAR Specified Pwm output state type Definition
*   This type is used define the possible values of a Pwm channel.
*   It shall be uint8, uint16 or uint32 depending on the architecture.
*/
typedef enum {
    PWM_LOW,	/**< @brief channel in low state is assigned with value 0 */
    PWM_HIGH	/**< @brief channel in high state is assigned with value 1 */
} Pwm_OutputStateType;


/** @req 4.1.2|4.3.0/SWS_Pwm_00109 Pwm_EdgeNotificationType is type of edge notification of a PWM channel. */
/** @enum 	Pwm_EdgeNotificationType
*   @brief	Data type for symbolic name of edge notification. It shall be uint8, uint16 or uint32 depending on the architecture.
*/
typedef enum {
    PWM_FALLING_EDGE = PWM_LOW,		/**< @brief value 0 is used for signifying that notification will be called
    											when a falling edge occurs on the PWM output signal. */
    PWM_RISING_EDGE =  PWM_HIGH,	/**< @brief value 1 is used for signifying that notification will be called
    											when a rising edge occurs on the PWM output signal. */
    PWM_BOTH_EDGES					/**< @brief value 2 is used for signifying that notification will be called
    											when either a rising edge or falling edge occur on the PWM output signal. */
} Pwm_EdgeNotificationType;



/** @req 4.1.2|4.3.0/SWS_Pwm_00110 Pwm_ChannelClassType defines the class of a PWM channel */
/** @enum 	Pwm_ChannelClassType
*   @brief	AUTOSAR specified data type for symbolic name of channel class.
*   It shall be uint8, uint16 or uint32 depending on the architecture.
*/
typedef enum {
    PWM_VARIABLE_PERIOD,		/**< @brief value 0 is used for the Pwm channel with a variable period.
    										The duty cycle and the period can be changed. */
    PWM_FIXED_PERIOD,			/**< @brief value 1 is used for the Pwm channel with a fixed period.
    										Only the duty cycle can be changed. */
    PWM_FIXED_PERIOD_SHIFTED	/**< @brief value 1 is used for the Pwm channel with a fixed shifted period.
    										Impossible to change it (not supported by tms570 hardware) */
} Pwm_ChannelClassType;

/** @typedef Pwm_NotificationHandlerType
*   @brief   type for pointer to hold the address of a user created notification routine
*/
typedef void (*Pwm_NotificationHandlerType)(void);

/** @req  4.1.2|4.3.0/SWS_Pwm_10075 Pwm.h shall include Pwm_Cfg.h */
#include "Pwm_Cfg.h"

/**
 * @struct Pwm_ChannelStructType
 * @brief Structure containing run-time variables.
 */
typedef struct {
    uint16 DutyCycle;			/**< @brief Variable to hold duty cycle of configured channel */
    Pwm_PeriodType Period;		/**< @brief Variable to hold 16 bit long period of configured channel */
    uint8 NotificationState;	/**< @brief Variable to hold configured notification state of configured channel */
} Pwm_ChannelStructType;

/**************************************************************
 *  Global variables
 **************************************************************/

/**
 *  @brief Global variable needed in EcuM_PBcfg.c.
 *  @details For TMS570 platform this same declaration is generated in Pwm_Cfg.h
 *  so this is not needed, but for other platforms, Pwm_Cfg.h should be adjusted
 *  the same way so this can be removed.
 */
#if !defined(CFG_TMS570LS12X) && !defined(CFG_TMS570LC43X)
extern const Pwm_ConfigType PwmConfig;
#endif



#if defined(CFG_TMS570LS12X) || defined(CFG_TMS570LC43X)

#if PWM_NUMBER_OF_CHANNELS > 7
#error "PWM_NUMBER_OF_CHANNELS is larger than supported by the target platform."
#endif

#elif defined(CFG_ZYNQ)

#if PWM_NUMBER_OF_CHANNELS > 5
#error "PWM_NUMBER_OF_CHANNELS is larger than supported by the target platform."
#endif

#elif defined(CFG_MPC5606B)

#if PWM_NUMBER_OF_CHANNELS > 64
#error "PWM_NUMBER_OF_CHANNELS is larger than supported by the target platform."
#endif


#else

#if PWM_NUMBER_OF_CHANNELS > 16
#error "PWM_NUMBER_OF_CHANNELS is larger than supported by the target platform."
#endif

#endif

/**************************************************************
 *  Public API's
 **************************************************************/

/** @req 4.1.2|4.3.0/SWS_Pwm_00095 Pwm_Init */
/***************************************************************************//**
 * @brief  	Generic service for PWM initialization.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note                Non-reentrant
 * @param[in] 			ConfigPtr Pointer to configuration set
 ******************************************************************************/
void Pwm_Init(const Pwm_ConfigType* ConfigPtr);

#if ( PWM_VERSION_INFO_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Pwm_20069 The function Pwm_GetVersionInfo shall be configurable On/Off by the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_00103 Service returns the version information of this module. */
/***************************************************************************//**
 * @brief  	Generic API that gets version information of the Pwm driver.
 * @details	If the requested channel is not configured an error is
 * 			reported to default error tracer. Currently this API returns PWM_LOW
 * 			in either case because the true functionality is not yet implemented.
 * @note     		Reentrant
 * @param[in/out] 	versioninfo 	struct holding the version info
 ******************************************************************************/
void Pwm_GetVersionInfo(Std_VersionInfoType* versioninfo);
#endif


#if (PWM_DE_INIT_API==STD_ON)
/** @req 4.1.2|4.3.0/SWS_Pwm_10080 The function Pwm_DeInit shall be pre compile time configurable On/Off by the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_20080 configuration parameter PwmDeInitApi {PWM_DE_INIT_API}.*/
/** @req 4.1.2|4.3.0/SWS_Pwm_00096 Pwm_DeInit */
/***************************************************************************//**
 * @brief  	Generic service for PWM de-initialization.
 * @details	This generic function calls the HW specific implementation function if
 * 			Pwm driver initialization check is passed. If it is not passed an error
 * 			is reported to default error tracer
 * @note    Non-reentrant
 ******************************************************************************/
void Pwm_DeInit(void);
#endif


#if (PWM_SET_PERIOD_AND_DUTY_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Pwm_10083 Pwm_SetPeriodAndDuty shall be pre compile time configurable On/Off by the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_20083 configuration parameter: PwmSetPeriodAndDuty {PWM_SET_PERIOD_AND_DUTY_API}.*/
/** @req 4.1.2|4.3.0/SWS_Pwm_00058 The width of the duty cycle parameter is 16 Bits.*/
/** @req 4.1.2|4.3.0/SWS_Pwm_00098 Pwm_SetPeriodAndDuty */
/***************************************************************************//**
 * @brief  	Generic API for setting PWM period and duty.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 	channel number
 * @param[in] 	Period 		period to set
 * @param[in] 	DutyCycle 	Duty-cycle to set
 ******************************************************************************/
void Pwm_SetPeriodAndDuty(Pwm_ChannelType ChannelNumber, Pwm_PeriodType Period, uint16 DutyCycle);
#endif

#if (PWM_SET_DUTY_CYCLE_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Pwm_10082 Pwm_SetDutyCycle shall be pre compile time configurable On/Off by the configuration parameter*/
/** @req 4.1.2|4.3.0/SWS_Pwm_20082 configuration parameter: PwmSetDutyCycle {PWM_SET_DUTY_CYCLE_API}. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00097 Pwm_SetDutyCycle */
/** @req 4.1.2|4.3.0/SWS_Pwm_00058 The width of the duty cycle parameter is 16 Bits.*/
/***************************************************************************//**
 * @brief  	Generic API for setting PWM duty-cycle.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 	channel number
 * @param[in] 	DutyCycle 	Duty-cycle to set
 ******************************************************************************/
void Pwm_SetDutyCycle(Pwm_ChannelType ChannelNumber, uint16 DutyCycle);
#endif


#if ( PWM_SET_OUTPUT_TO_IDLE_API == STD_ON )
/** @req 4.1.2|4.3.0/SWS_Pwm_10084 Pwm_SetOutputToIdle shall be configurable On/Off by the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_20084 configuration parameter: PwmSetOutputToIdle {PWM_SET_OUTPUT_TO_IDLE_API}. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00099 Pwm_SetOutputToIdle */
/***************************************************************************//**
 * @brief  	Generic API that sets output to idle.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 		channel number
 ******************************************************************************/
void Pwm_SetOutputToIdle(Pwm_ChannelType ChannelNumber);
#endif

#if (PWM_GET_OUTPUT_STATE_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Pwm_10085 Pwm_GetOutputState shall be pre compile time configurable On/Off using the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_20085 configuration parameter: PwmGetOutputState {PWM_GET_OUTPUT_STATE_API} */
/** @req 4.1.2|4.3.0/SWS_Pwm_00100 Pwm_GetOutputState */
/***************************************************************************//**
 * @brief  	Generic API that gets output state of a channel
 * @details	If the requested channel is not configured an error is
 * 			reported to default error tracer.
 * @note     	Reentrant
 * @param[in] 	Channel 		channel number
 * @return		State of the requested channel
 * @retval		PWM_LOW			Output state is low
 * @retval		PWM_HIGH		output state is high
 ******************************************************************************/
Pwm_OutputStateType Pwm_GetOutputState(Pwm_ChannelType ChannelNumber);
#endif


#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
/** @req 4.1.2|4.3.0/SWS_Pwm_10112 Pwm_DisableNotification Pwm_DisableNotification shall be pre compile time configurable On/Off using the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_20112 configuration parameter: PwmNotificationSupported {PWM_NOTIFICATION_SUPPORTED}.*/
/** @req 4.1.2|4.3.0/SWS_Pwm_00101 Pwm_DisableNotification */
/** @req 4.1.2|4.3.0/SWS_Pwm_10115 The Pwm module shall provide the functionality of Pwm_EnableNotification only when the configuration
 * parameter PwmNotificationSupported is ON. */
/** @req 4.1.2|4.3.0/SWS_PWM_20115 The Pwm module shall provide the functionality of Pwm_DisableNotification only when the configuration
 * parameter PwmNotificationSupported is ON. */
/***************************************************************************//**
 * @brief  	Generic API for disabling channel notification.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	Channel 	channel number
 ******************************************************************************/
void Pwm_DisableNotification(Pwm_ChannelType ChannelNumber);

/** @req 4.1.2|4.3.0/SWS_Pwm_10113 Pwm_EnableNotification shall be pre compile time configurable On/Off using the configuration parameter */
/** @req 4.1.2|4.3.0/SWS_Pwm_20113 configuration parameter: PwmNotificationSupported {PWM_NOTIFICATION_SUPPORTED}. */
/** @req 4.1.2|4.3.0/SWS_Pwm_00102 Pwm_EnableNotification */
/***************************************************************************//**
 * @brief  	Generic API for enabling channel notification.
 * @details	This generic function calls the HW specific implementation function if
 * 			the API parameter checking is passed. If it is not passed an error is
 * 			reported to default error tracer
 * @note     	Reentrant
 * @param[in] 	ChannelNumber	channel number
 * @param[in] 	Notification 	Notification type to enable
 ******************************************************************************/
void Pwm_EnableNotification(Pwm_ChannelType ChannelNumber, Pwm_EdgeNotificationType Notification);

#endif

#if (PWM_ARC_PERIOD_API==STD_ON)
/***************************************************************************//**
 * @brief  	Calculates the number microseconds corresponding
 * 			to a certain period in PMW hardware clock ticks.
 * @note     	Reentrant. Not yet implemented for TMS570.
 * @param[in] 	ChannelNumber 		channel number
 * @param[in] 	Period 				period to convert
 ******************************************************************************/
uint32 Pwm_Arc_Tick2us( Pwm_ChannelType ChannelNumber,Pwm_PeriodType Period);

/***************************************************************************//**
 * @brief  	Calculates the number of PMW hardware clock ticks corresponding
 * 			to a certain period in microseconds.
 * @note     	Reentrant. Not yet implemented for TMS570.
 * @param[in] 	ChannelNumber 		channel number
 * @param[in] 	us 					duration in microseconds
 ******************************************************************************/
Pwm_PeriodType Pwm_Arc_us2Tick( Pwm_ChannelType ChannelNumber,uint32 us);
#endif

#endif /* PWM_H_ */

/** @}*/
/** @}*/
