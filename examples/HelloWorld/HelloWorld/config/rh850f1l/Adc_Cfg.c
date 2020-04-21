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
 * AUTOSAR version:   4.1.3
 */

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=RH850F1H */

#include "Adc.h"
#include "Adc_Cfg.h"

const Adc_HWConfigurationType AdcHWUnitConfiguration_AdcHwUnit =
{
  .hwUnitId = HWUNIT_ADCA0,
  .resolution =  ADC_RESOLUTION_12_BITS };

const Adc_ChannelType Adc_AdcHwUnit_AdcGroup1_ChannelList[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS] =
{
ADCAnI6,

};


Adc_GroupStatus AdcGroupStatus_AdcHwUnit[ADC_NBR_OF_ADCHWUNIT_GROUPS]=
{
	{ // ADC_ADCHWUNIT_ADCGROUP1
		.notifictionEnable = 0,
		.resultBufferPtr = NULL,
		.groupStatus = ADC_IDLE,
		.currSampleCount = 0,
		.currResultBufPtr = NULL,
	},

};	

const Adc_GroupDefType AdcGroupConfiguration_AdcHwUnit[] =
{
   {    	 
     .accessMode        = ADC_ACCESS_MODE_SINGLE,
     .conversionMode    = ADC_CONV_MODE_ONESHOT,
     .triggerSrc        = ADC_TRIGG_SRC_SW,          
/* @req SWS_Adc_00084 */     
     .groupCallback     = IoHwAb_AdcConversionComplete,
     .streamBufferMode  = ADC_STREAM_BUFFER_LINEAR,
     .streamNumSamples  = 1,
     .channelList       = Adc_AdcHwUnit_AdcGroup1_ChannelList,
     .numberOfChannels  = (Adc_ChannelType)ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS,
     .status            = &AdcGroupStatus_AdcHwUnit[0],
	.hwUnit				= 0,
   },

};


const Adc_ConfigType AdcConfig[] =
{
  {
   .hwConfigPtr      = &AdcHWUnitConfiguration_AdcHwUnit,
   .groupConfigPtr   = AdcGroupConfiguration_AdcHwUnit,
   .nbrOfGroups      = ADC_NBR_OF_ADCHWUNIT_GROUPS,
  },

};
