
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
#include "Pwm.h"

/*
 * Notification routines are defined elsewhere but need to be linked from here,
 * so we define the routines as external here.
 */

const Pwm_ConfigType PwmConfig = {
	.Channels = {
		
		PWM_CHANNEL_CONFIG(
							 PwmConf_PwmChannel_Channel_LED_3,
							// Period in ticks. Target: 0.001 Actual: 0.001
							36000u,
							// Duty cycle (0 ~> 0%, 0x8000 ~> 100%)
							16384u,
							// Local prescaler zero base register value
							1u,
							// Polarity
							1u),
	},
#if PWM_SET_PERIOD_AND_DUTY_API==STD_ON
	.ChannelClass={	
		PWM_FIXED_PERIOD,
	},
#endif
#if PWM_NOTIFICATION_SUPPORTED==STD_ON
	.NotificationHandlers = {
		// Notification routine for Pwm_Channel_LED_3
		NULL,
	}
#endif
};

