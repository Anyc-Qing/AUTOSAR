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

#include "Adc.h"
#include "Adc_Cfg.h"
#include "Adc_ConfigTypes.h"


Adc_GroupStatus AdcGroupStatus_AdcHwUnit[1];

/*lint -save -e785 Misra 2012 9.3  Too few initializers */
const Adc_HWConfigurationType AdcHWUnitConfiguration_AdcHwUnit =
{

	.adcPrescale = 20,
};
/*lint -restore*/

const Adc_ChannelConfigurationType AdcChannelConfiguration_AdcHwUnit[] =
{
	{ .adcChannel = INTERNAL_TEMP , .adcChannelSettlingTime = DEFAULT_FOUR_CYCLES, .adcChannelInputMode = DEFAULT_UNIPOLAR},
};

const Adc_ChannelType Adc_AdcHwUnit_AdcGroup1_ChannelList[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS] = 
{
		INTERNAL_TEMP
};

Adc_ValueGroupType Adc_AdcHwUnit_AdcGroup1_Buffer[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS];

const Adc_GroupDefType AdcGroupConfiguration_AdcHwUnit[] =
{	
	{
		.accessMode			= ADC_ACCESS_MODE_SINGLE,
		.conversionMode 	= ADC_CONV_MODE_ONESHOT,
		.triggerSrc 		= ADC_TRIGG_SRC_SW,
		.groupCallback 		= IoHwAb_AdcConversionComplete,
		.streamBufferMode   = ADC_STREAM_BUFFER_LINEAR,
		.streamNumSamples   = 1,
		.channelList 		= Adc_AdcHwUnit_AdcGroup1_ChannelList,
		.resultBuffer       = Adc_AdcHwUnit_AdcGroup1_Buffer,		
		.numberOfChannels   = ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS,
		.status             = &AdcGroupStatus_AdcHwUnit[0],
	},
};


const Adc_ConfigType Adc_GlobalConfig[] =
{
	{
		.hwConfigPtr      = &AdcHWUnitConfiguration_AdcHwUnit,
		.channelConfigPtr = AdcChannelConfiguration_AdcHwUnit,
		.nbrOfChannels    = 1,
		.groupConfigPtr   = AdcGroupConfiguration_AdcHwUnit,
		.nbrOfGroups      = 1
	},
};
