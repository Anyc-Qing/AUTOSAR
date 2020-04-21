
/* Generator version: 3.0.0
 * AUTOSAR version:   4.3.0
 -------------------------------- Arctic Core ------------------------------
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
 *-------------------------------- Arctic Core -----------------------------
 */
 
#ifndef PWM_CFG_H_
#define PWM_CFG_H_

#if !(((PWM_SW_MAJOR_VERSION == 3u) && (PWM_SW_MINOR_VERSION == 1u)) )
#error Pwm: Configuration file expected BSW module version to be 3.1.*
#endif

#if !(((PWM_AR_RELEASE_MAJOR_VERSION == 4u) && (PWM_AR_RELEASE_MINOR_VERSION == 3u)) )
#error Pwm: Configuration file expected AUTOSAR version to be 4.3.*
#endif



/** @brief Global configuration options and defines */

// PWM003
#define PWM_DEV_ERROR_DETECT                STD_ON	/**< @brief use development error detection */ 
#define PWM_NOTIFICATION_SUPPORTED          STD_ON	/**< @brief use Pwm notifications */

// PWM132
#define PWM_DUTYCYCLE_UPDATED_ENDPERIOD     STD_ON	/**< @brief Update duty cycle at the end of period */
#define PWM_PERIOD_UPDATED_ENDPERIOD        STD_ON	/**< @brief Update period at the end of period */

/** @brief Define what functions to enable. */
#define PWM_GET_OUTPUT_STATE_API            STD_OFF /**< @brief GetOutputState Api is not supported */
#define PWM_SET_PERIOD_AND_DUTY_API         STD_OFF	/**< @brief Enable SetPeriodAndDuty Api */
#define PWM_DE_INIT_API                     STD_OFF	/**< @brief Enable DeInit Api */
#define PWM_SET_DUTY_CYCLE_API              STD_ON	/**< @brief Enable SetDutyCycle Api */
#define PWM_SET_OUTPUT_TO_IDLE_API          STD_OFF	/**< @brief Enable SetOutputToIdle Api */
#define PWM_VERSION_INFO_API                STD_OFF	/**< @brief Enable GetVersionInfo Api */


// Legacy module support
#define PWM_STATICALLY_CONFIGURED 		STD_OFF	/**< @brief Static configuration of PWM channel is not supported */

#define PWM_ISR_PRIORITY	30u		/**< @brief ISR priority. Not defined in Autosar. */

/*
 * @brief Setting to ON freezes the current output state of a PWM channel when in
 * debug mode.
 */
#define PWM_FREEZE_ENABLE	STD_ON

typedef uint16 Pwm_PeriodType;

/* Pwm_ChannelType == eemios channel id.  */
typedef uint8 Pwm_ChannelType;

#define  PwmConf_PwmChannel_Channel_LED_3 (Pwm_ChannelType)0
#define  PWM_CHANNEL_1 PwmConf_PwmChannel_Channel_LED_3
#define PWM_TOTAL_NOF_CHANNELS 1


typedef enum {
    PWM_CHANNEL_PRESCALER_1=0,
    PWM_CHANNEL_PRESCALER_2,
    PWM_CHANNEL_PRESCALER_3,
    PWM_CHANNEL_PRESCALER_4,
} Pwm_ChannelPrescalerType;

typedef struct {
    /* Number of duty ticks */
    uint16_t                 duty:16;
    /* Frequency in Hz */
    uint32_t                 frequency:32;
    /* Counter */
    uint16_t                 counter:16;
    /* Custom notification part of period */
    uint8_t					 midPeriodInterrupt:1;
    /* Prescale the emios clock some more? */
    Pwm_ChannelPrescalerType prescaler:2;
    /* Prescale the emios clock some more? */
    uint32_t				 usePrescaler:1;
    /* Polarity of the channel */
    Pwm_OutputStateType		 polarity:1;
    /* Idle state */
    Pwm_OutputStateType      idleState:1;
    /* Class */
    Pwm_ChannelClassType	 class:2;
    /* Deadband delay frequency in Hz */
    uint32_t				 deadband:32;
} Pwm_ChannelSettingsType;

typedef struct {
    Pwm_ChannelSettingsType settings;
    Pwm_ChannelType channel;
} Pwm_ChannelConfigurationType;





#define PWM_NUMBER_OF_CHANNELS 1u	/**< @brief number of configured channels. */


typedef struct {
	Pwm_ChannelConfigurationType Channels[PWM_NUMBER_OF_CHANNELS];
#if (PWM_NOTIFICATION_SUPPORTED==STD_ON)
	Pwm_NotificationHandlerType NotificationHandlers[PWM_NUMBER_OF_CHANNELS];
#endif
	Pwm_NotificationHandlerType ArcNotificationHandlers[PWM_NUMBER_OF_CHANNELS];

#if PWM_SET_PERIOD_AND_DUTY_API==STD_ON
	Pwm_ChannelClassType  ChannelClass[PWM_NUMBER_OF_CHANNELS];
#endif
} Pwm_ConfigType;


/** @brief Configuration Set Handles */
extern const Pwm_ConfigType PwmConfig;
#define PwmChannelConfigSet (&PwmConfig)
#define Pwm_PwmChannelConfigSet (&PwmConfig)


#endif /* PWM_CFG_H_ */

