
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
 * AUTOSAR version:   4.3.0
 */

#if !(((ADC_SW_MAJOR_VERSION == 3) && (ADC_SW_MINOR_VERSION == 0)))
#error Adc: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((ADC_AR_RELEASE_MAJOR_VERSION == 4) && (ADC_AR_RELEASE_MINOR_VERSION == 3)) )
#error Adc: Configuration file expected AUTOSAR version to be 4.3.*
#endif

#ifndef ADC_CFG_H_
#define ADC_CFG_H_

#define ADC_DEINIT_API                    STD_ON
#define ADC_DEV_ERROR_DETECT              STD_ON
#define ADC_ENABLE_QUEUING                STD_ON
#define ADC_ENABLE_START_STOP_GROUP_API   STD_ON
#define ADC_GRP_NOTIF_CAPABILITY          STD_ON
#define ADC_HW_TRIGGER_API                STD_OFF           /* Not implemented. */
#define ADC_PRIORITY_IMPLEMENTATION       STD_OFF			/* Not implemented. */
#define ADC_READ_GROUP_API                STD_ON
#define ADC_VERSION_INFO_API              STD_ON
#define ADC_WAKEUP_FUNCTIONALITY_API	  STD_OFF		

/** Not supported. */
typedef enum
{
  ADC_NO_TIMER,
} Adc_HwTriggerTimerType;

#include "Adc_ConfigTypes.h"

#define ADC_NOF_GROUP_PER_CONTROLLER 	100uL
#define ADC_ARC_CTRL_CONFIG_CNT 		1uL

#define ADC_ARC_NR_OF_GROUPS 			1uL

#define ADC_CHANNEL_MASK_GROUP_NUM 		1uL

/* Not defined in Autosar */
#if !defined(ADC_ISR_PRIORITY)
#define ADC_ISR_PRIORITY	30
#endif

#define ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS  1

typedef uint16 Adc_ArcChannelWithinGroupType;

#define ADC_ADCHWUNIT_ADCGROUP1_ADCCHANNEL1 ((Adc_ArcChannelWithinGroupType)0)
#define ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS 1

#define AdcChannel1 0 



extern void IoHwAb_AdcConversionComplete(void);


#define ADC_CORE1 0
#define ADC_CORE2 1

typedef uint16 Adc_GroupType;
#define ADC_ADCHWUNIT_ADCGROUP1  (Adc_GroupType)((ADC_CORE1 * 100) + 0)



/* Generated symbolic names */
#define	AdcConf_AdcGroup_AdcGroup1 ADC_ADCHWUNIT_ADCGROUP1
#define	Adc_AdcGroup1 AdcConf_AdcGroup_AdcGroup1  

#define ADC_ADCGROUP1_HWUNIT ADC_CORE1
	

/* Configuration Set Handles */
#define AdcConfigSet (AdcConfig)
#define Adc_AdcConfigSet (AdcConfig)
extern uint32 ChannelMask[][ADC_CHANNEL_MASK_GROUP_NUM];

#endif /*ADC_CFG_H_*/
