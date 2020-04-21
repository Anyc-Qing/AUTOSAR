
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

/* Generator version: 2.0.0
 * AUTOSAR version:   4.1.2
 */

#ifndef ADC_CFG_H_
#define ADC_CFG_H_ 

/** @file Adc_Cfg.h
 * Definitions of configuration parameters for ADC Driver.
 */
 
#if !(((ADC_SW_MAJOR_VERSION == 2) && (ADC_SW_MINOR_VERSION == 0)) )
#error Adc: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((ADC_AR_RELEASE_MAJOR_VERSION == 4) && (ADC_AR_RELEASE_MINOR_VERSION == 1)) )
#error Adc: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#include "Adc_ConfigTypes.h"
#include "zynq.h"

#define ADC_DEINIT_API                    STD_ON
#define ADC_DEV_ERROR_DETECT              STD_ON
#define ADC_ENABLE_QUEUING                STD_OFF
#define ADC_ENABLE_START_STOP_GROUP_API   STD_ON
#define ADC_GRP_NOTIF_CAPABILITY          STD_ON
#define ADC_HW_TRIGGER_API                STD_ON
#define ADC_PRIORITY_IMPLEMENTATION       STD_OFF			/* Not implemented. */
#define ADC_READ_GROUP_API                STD_ON
#define ADC_VERSION_INFO_API              STD_ON

#define ADC_NOF_GROUP_PER_CONTROLLER 100
#define ADC_ARC_CTRL_CONFIG_CNT 1


#define ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS  1

#define ADC_ASSIGNED_IRQ_ID	61
#define ADC_AXI_IP_BASE_ADDR  1136656384
#define AXI_XADC          (*(struct AXI_XADC_reg *)ADC_AXI_IP_BASE_ADDR)

typedef uint16 Adc_ArcChannelWithinGroupType;

#define ADC_ADCHWUNIT_ADCGROUP1_ADCCHANNEL1 ((Adc_ArcChannelWithinGroupType)0)
#define ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS 1


extern void IoHwAb_AdcConversionComplete(void);

typedef enum
{
	ADC_ADCGROUP1 = 0,
}Adc_GroupType;

/* Generated symbolic names */
#define	AdcConf_AdcGroup_AdcGroup1 ADC_ADCGROUP1

/* These are only defined here to be used by IoHwAb */
#define AdcChannel1 INTERNAL_TEMP 

#define ADC_NBR_OF_GROUPS 1


/* Configuration Set Handles */
#define AdcConfigSet (AdcConfig)
#define Adc_AdcConfigSet (AdcConfig)


#endif /*ADC_CFG_H_*/
