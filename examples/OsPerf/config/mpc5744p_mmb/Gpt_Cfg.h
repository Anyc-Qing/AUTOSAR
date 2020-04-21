/*
 * Generator version: 3.0.0
 * AUTOSAR version:   4.1.2
 */


#ifndef GPT_CFG_H_
#define GPT_CFG_H_

#if !(((GPT_SW_MAJOR_VERSION == 3) && (GPT_SW_MINOR_VERSION == 0)) )
#error Gpt: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((GPT_AR_RELEASE_MAJOR_VERSION == 4) && (GPT_AR_RELEASE_MINOR_VERSION == 1)) )
#error Gpt: Configuration file expected AUTOSAR version to be 4.1.*
#endif

/** HW PIT channels */
#define GPT_CHANNEL_PIT_0	0
#define GPT_CHANNEL_PIT_1	1
#define GPT_CHANNEL_PIT_2	2
#define GPT_CHANNEL_PIT_3	3
#define GPT_CHANNEL_PIT_4	4
#define GPT_CHANNEL_PIT_5	5
#if defined(CFG_MPC5606B) || defined(CFG_MPC5606S) || defined(CFG_SPC560B54) || defined(CFG_MPC5668)
#define GPT_CHANNEL_PIT_6	6
#define GPT_CHANNEL_PIT_7	7
#define GPT_CHANNEL_CNT     8
#else
#define GPT_CHANNEL_CNT     6
#endif

/* Symbolic Channels */
#define GptConf_GptChannelConfiguration_GptCh0  (Gpt_ChannelType)GPT_CHANNEL_PIT_0
#define Gpt_GptCh0  GptConf_GptChannelConfiguration_GptCh0
#define GptConf_GptChannelConfiguration_GptCh1  (Gpt_ChannelType)GPT_CHANNEL_PIT_1
#define Gpt_GptCh1  GptConf_GptChannelConfiguration_GptCh1


#define GPT_CHANNEL_ILL	31


#define GPT_DEV_ERROR_DETECT				STD_ON	
#define GPT_REPORT_WAKEUP_SOURCE			STD_OFF
#define GPT_DEINIT_API  					STD_OFF	
#define GPT_ENABLE_DISABLE_NOTIFICATION_API STD_ON    
#define GPT_TIME_REMAINING_API				STD_OFF	
#define GPT_TIME_ELAPSED_API                STD_OFF    
#define GPT_VERSION_INFO_API				STD_OFF	
#define GPT_WAKEUP_FUNCTIONALITY_API		STD_OFF
#define GPT_POSTBUILD_VARIANT 			    STD_OFF

#if (GPT_REPORT_WAKEUP_SOURCE==STD_ON)
#include "EcuM_Cbk.h"
#endif

#include "Gpt_ConfigTypes.h"

/* Configuration Set Handles */
#define GptChannelConfigSet (GptConfigData)
#define Gpt_GptChannelConfigSet (GptConfigData)

extern const Gpt_ConfigType GptConfigData[];

#endif /*GPT_CFG_H_*/

