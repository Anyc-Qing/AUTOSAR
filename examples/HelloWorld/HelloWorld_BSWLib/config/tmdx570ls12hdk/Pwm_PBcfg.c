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
#include "Pwm.h"
#include "Pwm_MemMap.h"

/** 
 * @brief Notification routines are defined elsewhere but need to be linked from here,
 * so we define the routines as external here.
 */
extern void NotificationPwmCh1(void);

   
const Pwm_ConfigType PwmConfig = {
	.Channels = {
		
		{
			.channel = PwmConf_PwmChannel_Channel_LED_3,
			.settings = {
				/** @brief Desired period frequency in Hz. Desired period in seconds: 0.001 */							
				.frequency = 1000u,
				/** @brief Duty cycle (0 ~> 0%, 0x8000 ~> 100%) */
				.duty = 16384u,  
				
            	.usePrescaler = 1,
            	/** @brief Local prescaler zero base register value */
            	.prescaler = (Pwm_ChannelPrescalerType)0,
            	/** @brief Polarity */
            	.polarity = PWM_HIGH,
            	/** @brief Idle state */
            	.idleState = PWM_LOW,
            	/** @brief Channel class */
            	.class = PWM_FIXED_PERIOD,
			}
		},

	},
#if PWM_SET_PERIOD_AND_DUTY_API==STD_ON
	.ChannelClass={	
		PWM_FIXED_PERIOD,
	},
#endif
	.ArcNotificationHandlers = {
		/** @brief Custom notification routine for Pwm_Channel_LED_3 */
		NULL_PTR,
	},
#if PWM_NOTIFICATION_SUPPORTED==STD_ON
	.NotificationHandlers = {
		/** @brief Notification routine for Pwm_Channel_LED_3 */
		NotificationPwmCh1,
	}
#endif
};

