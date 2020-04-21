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
 * AUTOSAR version:   4.1.3
 */

#include "Pwm.h"

/*
 * Notification routines are defined elsewhere but need to be linked from here,
 * so we define the routines as external here, if any.
 */

const Pwm_ConfigType PwmConfig = {
    .Channels = {
        {
            .channel   = PwmConf_PwmChannel_Channel_LED_3,        
            .idleState = PWM_LOW, 
            .frequency = 1000, // Hz
            .duty      = 16384,
            .prescaler = PWM_CH_PRESALER_CK3,
            .polarity  = PWM_HIGH,
#if PWM_SET_PERIOD_AND_DUTY_API==STD_ON        
            .class     = PWM_FIXED_PERIOD,
#endif            
#if PWM_NOTIFICATION_SUPPORTED==STD_ON
            .notification = NULL,
#endif
        },
    },
};

