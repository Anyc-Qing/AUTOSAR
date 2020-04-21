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
#include "Adc_Cfg.h"

const Adc_HWConfigurationType AdcHWUnitConfiguration_AdcHwUnit =
{
  .hwUnitId = ADC_CTRL_0,
  .adcPrescale = ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_2,
  .clockSource = ADC_SYSTEM_CLOCK,
};

const Adc_ChannelType Adc_AdcHwUnit_AdcGroup1_ChannelList[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS] =
{
ADC_CH32,

};



#define ADC_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

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

#define ADC_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/

const Adc_GroupDefType AdcGroupConfiguration_AdcHwUnit[] =
{
   { 
   	 .adcChannelConvTime= {

   	    	 				    .INPLATCH = ADC_INPLATCH_1,
   	 							.INPCMP = ADC_INPCPM_3,
   	 							   	 						
   	 							.INPSAMP = 255
   	 					   },
     .accessMode        = ADC_ACCESS_MODE_SINGLE,
     .conversionMode    = ADC_CONV_MODE_ONESHOT,
     .triggerSrc        = ADC_TRIGG_SRC_SW,
     .hwTriggerSignal   = ADC_HW_TRIG_FALLING_EDGE,
     .hwTriggerTimer    = ADC_NO_TIMER,
/* @req SWS_Adc_00084 */     
     .groupCallback     = IoHwAb_AdcConversionComplete,
     .streamBufferMode  = ADC_STREAM_BUFFER_LINEAR,
     .streamNumSamples  = 1,
     .channelList       = Adc_AdcHwUnit_AdcGroup1_ChannelList,
     .numberOfChannels  = (Adc_ChannelType)ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS,
     .status            = &AdcGroupStatus_AdcHwUnit[0]
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
