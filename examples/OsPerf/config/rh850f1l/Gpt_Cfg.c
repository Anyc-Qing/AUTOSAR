
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

/* Generator version: 3.0.0
 * AUTOSAR version:   4.1.3
 */

#include "Gpt.h"
#include "Mcu.h"

const Gpt_ConfigType GptConfigData[] =
{

	{ // GptCh0
		.GptChannelId    		 = 0,
		.GptChannelMode  		 = GPT_CH_MODE_CONTINUOUS,
		.GptNotification 		 = Gpt_NotifCh0,
		.GptChannelPrescale 	 = GPT_CH_PRESALER_CK0,
		.GptNotificationPriority = 0,
		.GptEnableWakeup		  = FALSE,
		
	},

	{ // GptCh1
		.GptChannelId    		 = 1,
		.GptChannelMode  		 = GPT_CH_MODE_CONTINUOUS,
		.GptNotification 		 = Gpt_NotifCh1,
		.GptChannelPrescale 	 = GPT_CH_PRESALER_CK0,
		.GptNotificationPriority = 0,
		.GptEnableWakeup		  = FALSE,
		
	},

};


