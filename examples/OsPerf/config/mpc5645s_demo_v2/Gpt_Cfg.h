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

#define GPT_CHANNEL_PIT_0     0   /* First PIT channel is designated as GPT_CHANNEL_PIT_0 is not configurable using GPT. This is because it can be used by OS */  
#define GPT_CHANNEL_PIT_1     1
#define GPT_CHANNEL_PIT_2     2
#define GPT_CHANNEL_PIT_3     3
#define GPT_CHANNEL_PIT_4     4
#define GPT_CHANNEL_PIT_5     5
#define GPT_CHANNEL_PIT_6     6
#define GPT_CHANNEL_PIT_7     7
#define GPT_CHANNEL_CNT       8

/* Symbolic Channels */
#define GptConf_GptChannelConfiguration_GptCh0  (Gpt_ChannelType)GPT_CHANNEL_PIT_0
#define Gpt_GptCh0  GptConf_GptChannelConfiguration_GptCh0
#define GptConf_GptChannelConfiguration_GptCh1  (Gpt_ChannelType)GPT_CHANNEL_PIT_1
#define Gpt_GptCh1  GptConf_GptChannelConfiguration_GptCh1


#define GPT_CHANNEL_ILL	31


#define GPT_DEV_ERROR_DETECT				STD_ON	
#define GPT_REPORT_WAKEUP_SOURCE			STD_OFF
#define GPT_DEINIT_API  					STD_ON	
#define GPT_ENABLE_DISABLE_NOTIFICATION_API STD_ON    
#define GPT_TIME_REMAINING_API				STD_OFF	
#define GPT_TIME_ELAPSED_API                STD_ON    
#define GPT_VERSION_INFO_API				STD_OFF	
#define GPT_WAKEUP_FUNCTIONALITY_API		STD_OFF

#if (GPT_REPORT_WAKEUP_SOURCE==STD_ON)
#include "EcuM_Cbk.h"
#endif

#include "Gpt_ConfigTypes.h"

/* Configuration Set Handles */
#define GptChannelConfigSet (GptConfigData)
#define Gpt_GptChannelConfigSet (GptConfigData)

extern const Gpt_ConfigType GptConfigData[];

#endif /*GPT_CFG_H_*/

