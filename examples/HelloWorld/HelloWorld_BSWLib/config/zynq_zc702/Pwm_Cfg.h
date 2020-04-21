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

/** @req SWS_PWM_0003 */
#define PWM_DEV_ERROR_DETECT                STD_ON

/** @req SWS_PWM_00132 */
#define PWM_DUTYCYCLE_UPDATED_ENDPERIOD     STD_OFF
#define PWM_PERIOD_UPDATED_ENDPERIOD        STD_OFF


// APIs not supported for ZYNQ
#define PWM_GET_OUTPUT_STATE_API            STD_OFF

// Define what APIs to enable.
#define PWM_NOTIFICATION_SUPPORTED          STD_OFF
#define PWM_SET_PERIOD_AND_DUTY_API         STD_OFF
#define PWM_SET_OUTPUT_TO_IDLE_API          STD_OFF
#define PWM_SET_DUTY_CYCLE_API              STD_ON
#define PWM_VERSION_INFO_API                STD_OFF
#define PWM_DE_INIT_API                     STD_OFF


/****************************************************************************
 * Not defined in AUTOSAR.
 */
#define PWM_ISR_PRIORITY	4
#define PWM_MAX_CHANNEL		6

/** @req SWS_PWM_00106 */
/* Pwm_ChannelType == [0-2]:ttc0  [3-5]:ttc1  */
typedef uint8 Pwm_ChannelType;

/* Channels - Symbolic Names */
#define  PwmConf_PwmChannel_Channel_LED_3 (Pwm_ChannelType)3
#define PWM_NUMBER_OF_CHANNELS 1 


/*
 * PWM070: All time units used within the API services of the PWM module shall
 * be of the unit ticks.
 */
 /** @req SWS_PWM_00070 */
 /** @req SWS_PWM_00107 */
typedef uint16 Pwm_PeriodType;

/* Values for setting the prescaler, actual prescale values will be 2^(N+1) */
typedef enum {
	PWM_CHANNEL_PRESCALER_NONE=-1,	/* Prescale value = 1 */
	PWM_CHANNEL_PRESCALER_0=0,   	/* Prescale value = 2 */
	PWM_CHANNEL_PRESCALER_1,		/* Prescale value = 4 */
	PWM_CHANNEL_PRESCALER_2,		/* etc. */
	PWM_CHANNEL_PRESCALER_3,
	PWM_CHANNEL_PRESCALER_4,
	PWM_CHANNEL_PRESCALER_5,
	PWM_CHANNEL_PRESCALER_6,
	PWM_CHANNEL_PRESCALER_7,
	PWM_CHANNEL_PRESCALER_8,
	PWM_CHANNEL_PRESCALER_9,
	PWM_CHANNEL_PRESCALER_10,
	PWM_CHANNEL_PRESCALER_11,
	PWM_CHANNEL_PRESCALER_12,
	PWM_CHANNEL_PRESCALER_13,
	PWM_CHANNEL_PRESCALER_14,
	PWM_CHANNEL_PRESCALER_15,
	PWM_CHANNEL_PRESCALER_AUTO,
} Pwm_ChannelPrescalerType;

/** @req SWS_PWM_00111 */
/** @req SWS_PWM_00061 */
typedef struct {
	Pwm_ChannelType				channel;
	uint32						frequency;
	uint16						duty;
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

