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

/* Generator version: 2.1.0
 * AUTOSAR version:   4.1.2
 */

#ifndef PWM_CFG_H_
#define PWM_CFG_H_

#if !(((PWM_SW_MAJOR_VERSION == 2) && (PWM_SW_MINOR_VERSION == 1)) )
#error Pwm: Configuration file expected BSW module version to be 2.1.*
#endif

#if !(((PWM_AR_RELEASE_MAJOR_VERSION == 4) && (PWM_AR_RELEASE_MINOR_VERSION == 1)) )
#error Pwm: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#include "Pwm_ConfigTypes.h"

/****************************************************************************
 * Global configuration options and defines
 */

// PWM003
#define PWM_DEV_ERROR_DETECT                STD_ON
#define PWM_NOTIFICATION_SUPPORTED          STD_OFF

// PWM132
#define PWM_DUTYCYCLE_UPDATED_ENDPERIOD     STD_OFF
#define PWM_PERIOD_UPDATED_ENDPERIOD        STD_OFF

// Define what functions to enable.
#define PWM_GET_OUTPUT_STATE_API            STD_OFF
#define PWM_SET_PERIOD_AND_DUTY_API         STD_OFF
#define PWM_DE_INIT_API                     STD_OFF
#define PWM_SET_DUTY_CYCLE_API              STD_ON
#define PWM_SET_OUTPUT_TO_IDLE_API          STD_OFF
#define PWM_VERSION_INFO_API                STD_OFF


// Legacy module support
#define PWM_STATICALLY_CONFIGURED 		STD_OFF

typedef enum {
  PWM_TIM1_CHANNEL1 = PWM_CHANNEL_11,	// TIM1 Channel 1
  PWM_TIM1_CHANNEL2 = PWM_CHANNEL_12,
  PWM_TIM1_CHANNEL3 = PWM_CHANNEL_13,
  PWM_TIM1_CHANNEL4 = PWM_CHANNEL_14,
  PWM_TIM2_CHANNEL1 = PWM_CHANNEL_21,     // TIM2 Channel 1
  PWM_TIM2_CHANNEL2 = PWM_CHANNEL_22,
  PWM_TIM2_CHANNEL3 = PWM_CHANNEL_23,
  PWM_TIM2_CHANNEL4 = PWM_CHANNEL_24,
  PWM_TIM3_CHANNEL1 = PWM_CHANNEL_31,     // TIM3 Channel 1
  PWM_TIM3_CHANNEL2 = PWM_CHANNEL_32,
  PWM_TIM3_CHANNEL3 = PWM_CHANNEL_33,
  PWM_TIM3_CHANNEL4 = PWM_CHANNEL_34,
  PWM_TIM4_CHANNEL1 = PWM_CHANNEL_41,     // TIM4 Channel 1
  PWM_TIM4_CHANNEL2 = PWM_CHANNEL_42,
  PWM_TIM4_CHANNEL3 = PWM_CHANNEL_43,
  PWM_TIM4_CHANNEL4 = PWM_CHANNEL_44,
} PwmNamedChannelMapping;

/*
 * Setting to ON freezes the current output state of a PWM channel when in
 * debug mode.
 */
#define PWM_FREEZE_ENABLE	STD_ON

#define PwmConf_PwmChannel_Channel_LED_3 PWM_CHANNEL_42 
#define Pwm_Channel_LED_3 PwmConf_PwmChannel_Channel_LED_3

#define PWM_NUMBER_OF_CHANNELS 1


typedef struct {
	Pwm_ChannelConfigurationType Channels[PWM_NUMBER_OF_CHANNELS];
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
	Pwm_NotificationHandlerType NotificationHandlers[PWM_NUMBER_OF_CHANNELS];
#endif
#if PWM_SET_PERIOD_AND_DUTY_API==STD_ON
	Pwm_ChannelClassType  ChannelClass[PWM_NUMBER_OF_CHANNELS];
#endif
} Pwm_ConfigType;

/* Configuration Set Handles */
#define PwmChannelConfigSet (PwmConfig)
#define Pwm_PwmChannelConfigSet (PwmConfig)


#endif /* PWM_CFG_H_ */

