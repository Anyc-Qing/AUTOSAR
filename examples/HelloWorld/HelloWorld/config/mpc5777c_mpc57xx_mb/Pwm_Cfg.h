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


/****************************************************************************
 * Global configuration options and defines
 */

// PWM003
#define PWM_DEV_ERROR_DETECT                STD_ON


#define PWM_NOTIFICATION_SUPPORTED          STD_ON

// PWM132. Currently only ON is supported.
#define PWM_DUTYCYCLE_UPDATED_ENDPERIOD     STD_ON
#define PWM_PERIOD_UPDATED_ENDPERIOD        STD_ON

// Define what functions to enable.

#define PWM_GET_OUTPUT_STATE_API            STD_OFF

#define PWM_SET_PERIOD_AND_DUTY_API         STD_OFF
#define PWM_DE_INIT_API                     STD_OFF

#define PWM_SET_DUTY_CYCLE_API              STD_ON

#define PWM_SET_OUTPUT_TO_IDLE_API          STD_OFF
#define PWM_VERSION_INFO_API                STD_OFF


/****************************************************************************
 * Not defined in AUTOSAR.
 */

// Global prescaler values


#define PWM_PRESCALER_EMIOS_0				4
#define PWM_PRESCALER_EMIOS_1				4





#define PWM_ISR_PRIORITY				4u



#define PWM_NUMBER_OF_EACH_EMIOS		32u
#define PWM_MAX_CHANNEL					64u





// PWM modes (HW Channel CCR.B.MODE register setting)
#define PWM_MODE_BASIC 					0x62u
#define PWM_MODE_FREQ_MOD 				0x5au
#define PWM_MODE_TRIGGERED 				0x26u
#define PWM_MODE_CENTER_ALGN_LEAD_DT	0x5fu
#define PWM_MODE_CENTER_ALGN_TRAIL_DT	0x5eu
#define PWM_MODE_COUNTER_BUS_PROVIDER_MCB_UP	0x50u

// Clock sources (HW Channel CCR.B.BSL register setting)
#define PWM_CLKSRC_COUNTER_BUS_A 		0x0u
#define PWM_CLKSRC_COUNTER_BUS_B_TO_E 	0x1u
#define PWM_CLKSRC_INTERNAL_COUNTER 	0x3u

/*
 * Setting to ON freezes the current output state of a PWM channel when in
 * debug mode.
 */
#define PWM_FREEZE_ENABLE	STD_ON

/* Pwm_ChannelType == eemios channel id.  */
typedef uint8 Pwm_ChannelType;

/* Channels - Symbolic Names */
#define  PwmConf_PwmChannel_Channel_LED_3 (Pwm_ChannelType)22
#define  Pwm_Channel_LED_3 PwmConf_PwmChannel_Channel_LED_3
#define  PwmConf_PwmChannel_Channel_LED_4 (Pwm_ChannelType)23
#define  Pwm_Channel_LED_4 PwmConf_PwmChannel_Channel_LED_4
#define PWM_NUMBER_OF_CHANNELS 2 


/*
 * PWM070: All time units used within the API services of the PWM module shall
 * be of the unit ticks.
 */
typedef uint16 Pwm_PeriodType;
#define PWM_MAX_TICKS (Pwm_PeriodType)0xFFFF

typedef uint8 Pwm_ChannelPrescalerType;
#define PWM_CHANNEL_PRESCALER_1 		(Pwm_ChannelPrescalerType)0
#define PWM_CHANNEL_PRESCALER_2			(Pwm_ChannelPrescalerType)1
#define PWM_CHANNEL_PRESCALER_3			(Pwm_ChannelPrescalerType)2
#define PWM_CHANNEL_PRESCALER_4			(Pwm_ChannelPrescalerType)3
#define PWM_CHANNEL_PRESCALER_AUTO		(Pwm_ChannelPrescalerType)4


/*
 * Since the AUTOSAR PWM specification uses a different unit for the duty,
 * the following macro can be used to convert between that format and the
 * mpc5516 format.
 */
#define DUTY_AND_PERIOD(_duty,_period) .duty = (_duty*_period)>>15, .period = _period

typedef struct {
	Pwm_ChannelType				channel;
	uint32						frequency;
	uint16						duty;
	uint8 						mode;
	uint8 						clksrc;
	Pwm_OutputStateType			polarity;
	Pwm_ChannelPrescalerType	prescaler;
} Pwm_ChannelConfigurationType;

typedef struct {
	Pwm_ChannelConfigurationType Channels[PWM_NUMBER_OF_CHANNELS];

	Pwm_OutputStateType IdleState[PWM_NUMBER_OF_CHANNELS];

#if PWM_SET_PERIOD_AND_DUTY_API==STD_ON
		Pwm_ChannelClassType  ChannelClass[PWM_NUMBER_OF_CHANNELS];
#endif

#if PWM_NOTIFICATION_SUPPORTED==STD_ON
	Pwm_NotificationHandlerType NotificationHandlers[PWM_NUMBER_OF_CHANNELS];
#endif
} Pwm_ConfigType;

/* Configuration Set Handles */
#define PwmChannelConfigSet (PwmConfig)
#define Pwm_PwmChannelConfigSet (PwmConfig)


#endif /* PWM_CFG_H_ */

