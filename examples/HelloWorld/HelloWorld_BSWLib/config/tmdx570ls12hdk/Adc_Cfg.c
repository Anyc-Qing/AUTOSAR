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

#include "Adc.h"
#include "Adc_MemMap.h"


Adc_GroupStatus AdcGroupStatus_AdcHwUnit[1];

const Adc_HWConfigurationType AdcHWUnitConfiguration_AdcHwUnit =
{
	.hwUnitId = 0,
	.adcPrescale = 8,
	.clockSource = ADC_SYSTEM_CLOCK,
	/*lint -e785 CONFIGURATION Some elements are not initialized for TMS570*/
	.adcResolution = 10,
};

const Adc_ChannelConfigurationType AdcChannelConfiguration_AdcHwUnit[] =
{
	{ 
		.adcChannelResolution = 10 
	},
};

const Adc_ChannelType Adc_AdcHwUnit_AdcGroup1_ChannelList[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS] = 
{
	ADC_CH0
};

Adc_ValueGroupType Adc_AdcHwUnit_AdcGroup1_Buffer[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS];
	
	

const Adc_GroupDefType AdcGroupConfiguration_AdcHwUnit[] =
{	
	{
     	.accessMode         = ADC_ACCESS_MODE_SINGLE,
     	.conversionMode     = ADC_CONV_MODE_ONESHOT,
     	.triggerSrc         = ADC_TRIGG_SRC_SW,			/* TRIGG_SRC_HW not supported */
     	.hwTriggerSignal    = ADC_HW_TRIG_FALLING_EDGE, /* TRIGG_SRC_HW supported */
     	.hwTriggerTimer     = ADC_NO_TIMER,				/* TRIGG_SRC_HW supported */ 
		.groupCallback 		= IoHwAb_AdcConversionComplete,
     	.streamBufferMode   = ADC_STREAM_BUFFER_LINEAR,
		 
		.streamNumSamples   = 1,
				
		.channelList 		= Adc_AdcHwUnit_AdcGroup1_ChannelList,
		.resultBuffer       = Adc_AdcHwUnit_AdcGroup1_Buffer,		
		/*lint -e64 */
		.numberOfChannels   = ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS,
		.status             = &AdcGroupStatus_AdcHwUnit[0],
		.hwUnit				= 0,
		.groupId 			= (0 * 100) + 0,
		.arcAdcGroupSampTime = 4,
	},
};

uint32 ChannelMask[1u][1u];

const Adc_ConfigType AdcConfig[] =
{
	{
		.hwConfigPtr      = &AdcHWUnitConfiguration_AdcHwUnit,
		.channelConfigPtr = AdcChannelConfiguration_AdcHwUnit,
		.nbrOfChannels    = 1,
		.groupConfigPtr   = AdcGroupConfiguration_AdcHwUnit,
		.nbrOfGroups      = 1
	},
};
