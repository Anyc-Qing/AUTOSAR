/*
 * Generator version: 3.0.0
 * AUTOSAR version:   4.1.2
 */

#include "Gpt.h"
#include "Gpt_Cfg.h"



extern void Gpt_NotifCh0 (void);



extern void Gpt_NotifCh1 (void);



const Gpt_ConfigType GptConfigData[] =
{

	{ // GptCh0
		.GptChannelId    		 = GPT_CHANNEL_PIT_0,
		.GptChannelMode  		 = GPT_CH_MODE_CONTINUOUS,
		.GptNotification 		 = Gpt_NotifCh0,
		.GptChannelPrescale 	 = 0,
		.GptNotificationPriority = 0,
		
	},

	{ // GptCh1
		.GptChannelId    		 = GPT_CHANNEL_PIT_1,
		.GptChannelMode  		 = GPT_CH_MODE_CONTINUOUS,
		.GptNotification 		 = Gpt_NotifCh1,
		.GptChannelPrescale 	 = 0,
		.GptNotificationPriority = 0,
		
	},

 	{
		.GptChannelId 			 = GPT_CHANNEL_ILL,
		.GptChannelMode  		 = GPT_CH_MODE_ONESHOT,
		.GptNotification 		 = NULL,
		.GptChannelPrescale 	 = 0,
		.GptNotificationPriority = 0,
#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)
		.GptWakeupSource 		 = 0,
#endif
  	}
};
