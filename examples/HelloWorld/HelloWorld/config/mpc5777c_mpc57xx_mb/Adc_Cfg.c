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
#include "Dma.h"

const Dma_TcdType AdcGroupDMACommandConfig [];
const Dma_TcdType AdcGroupDMAResultConfig [];


Adc_GroupStatus AdcGroupStatus_AdcHwUnit[] =
{
	{
		.notifictionEnable = 0,
	},

};	

const Adc_HWConfigurationType AdcHWUnitConfiguration_AdcHwUnit =
{
     .hwUnitId = 0,
     .adcPrescale = ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_20,
     .clockSource = ADC_SYSTEM_CLOCK
};

const Adc_ChannelConfigurationType AdcChannelConfiguration_AdcHwUnit[] =
{
 { ADC_CONVERSION_TIME_128_CLOCKS, true }, /* AdcChannel1 */

};

const Adc_InternalChannelIdType Adc_AdcHwUnit_AdcGroup1_ChannelList[ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS] =
{
	ADC_CH9_ID,

};


/* Ram buffers for command and result queues. These are located here in the
   configuration to be able to reconfigure system without recompiling the
   drivers. */


/* AdcGroup1 */
Adc_ValueGroupType Adc_AdcHwUnit_AdcGroup1_Buffer [sizeof(Adc_AdcHwUnit_AdcGroup1_ChannelList)/sizeof(Adc_AdcHwUnit_AdcGroup1_ChannelList[0])];
Adc_CommandType Adc_AdcHwUnit_AdcGroup1_Commands [sizeof(Adc_AdcHwUnit_AdcGroup1_ChannelList)/sizeof(Adc_AdcHwUnit_AdcGroup1_ChannelList[0])];


const Dma_TcdType AdcGroupDMACommandConfig_AdcHwUnit[ADC_NBR_OF_ADCHWUNIT_GROUPS] =
{
  {
    .SADDR       = (uint32_t)Adc_AdcHwUnit_AdcGroup1_Commands,
    .SMOD        = 0,
    .SSIZE       = DMA_TRANSFER_SIZE_32BITS,
    .DMOD        = 0,
    .DSIZE       = DMA_TRANSFER_SIZE_32BITS,
    .SOFF        = sizeof(Adc_CommandType),
    .NBYTESu.R   = sizeof(Adc_CommandType),
    .SLAST       = -sizeof(Adc_AdcHwUnit_AdcGroup1_Commands),
     .DADDR       = (vuint32_t)&EQADC_A.CFPR[ADC_ADCHWUNIT_ADCGROUP1].R,
    .CITERE_LINK = 0,
    .CITER       = sizeof(Adc_AdcHwUnit_AdcGroup1_Commands)/sizeof(Adc_AdcHwUnit_AdcGroup1_Commands[0]),
    .DOFF        = 0,
    .DLAST_SGA   = 0,
    .BITERE_LINK = 0,
    .BITER       = sizeof(Adc_AdcHwUnit_AdcGroup1_Commands)/sizeof(Adc_AdcHwUnit_AdcGroup1_Commands[0]),
    .BWC         = 0,
    .MAJORLINKCH = 0,
    .DONE        = 0,
    .ACTIVE      = 0,
    .MAJORE_LINK = 0,
    .E_SG        = 0,
    .D_REQ       = 0,
    .INT_HALF    = 0,
    .INT_MAJ     = 0,
    .START       = 0
  },

};

const Dma_TcdType AdcGroupDMAResultConfig_AdcHwUnit[ADC_NBR_OF_ADCHWUNIT_GROUPS] =
{
	{
		.SADDR       = (vint32_t)&EQADC_A.RFPR[ADC_ADCHWUNIT_ADCGROUP1].R + 2,    /* Source Address */
	    .SMOD        = 0,      /* Source modulo feature not used (fixed value) */
	    .SSIZE       = DMA_TRANSFER_SIZE_16BITS,      /* Read 2**2 = 2 byte per transfer (fixed value) */
	    .DMOD        = 0,      /* Destination modulo feature not used (fixed value) */
	    .DSIZE       = DMA_TRANSFER_SIZE_16BITS,      /* Write 2**2 = 2 byte per transfer (fixed value) */
	    .SOFF        = 0,      /* Fixed value */
	    .NBYTESu.R   = sizeof(Adc_ValueGroupType), /* Fixed value */
	    .SLAST       = 0,     /* Fixed value */
	    .DADDR       = (uint32_t)Adc_AdcHwUnit_AdcGroup1_Buffer,     /* Destination Address, to be changed later */
	    .CITERE_LINK = 0,   /* Linking disabled (fixed value) */
	    .CITER       = sizeof(Adc_AdcHwUnit_AdcGroup1_Buffer)/sizeof(Adc_AdcHwUnit_AdcGroup1_Buffer[0]),   /* Initialize current iteraction count */
	    .DOFF        = sizeof(Adc_ValueGroupType),     /* Do increment destination addr (fixed value) */
	    .DLAST_SGA   = -sizeof(Adc_AdcHwUnit_AdcGroup1_Buffer),     /* After major loop continue destination addr */
	    .BITERE_LINK = 0, /* Fixed value */
	    .BITER       = sizeof(Adc_AdcHwUnit_AdcGroup1_Buffer)/sizeof(Adc_AdcHwUnit_AdcGroup1_Buffer[0]),
	    .BWC         = 0,       /* Default bandwidth control- no stalls (fixed value) */
	    .MAJORLINKCH = 0,   /* Linking disabled (fixed value) */
	    .DONE        = 0, /* Fixed value */
	    .ACTIVE      = 0, /* Fixed value */
	    .MAJORE_LINK = 0, /* Fixed value */
	    .E_SG        = 0, /* Fixed value */
	    .D_REQ       = 0,     /* Disable channel when major loop is done (sending the buffer once) (fixed value) */
	    .INT_HALF    = 0, /* Fixed value */
	    .INT_MAJ     = 0, /* Fixed value */
	    .START       = 0 /* Fixed value */
	}, 

};

const Adc_GroupDefType AdcGroupConfiguration_AdcHwUnit[] =
{
   { 
     .accessMode        = ADC_ACCESS_MODE_SINGLE,
     .conversionMode    = ADC_CONV_MODE_ONESHOT,
     .triggerSrc        = ADC_TRIGG_SRC_SW,
     .hwTriggerSignal   = ADC_HW_TRIG_FALLING_EDGE,
     .hwTriggerTimer    = ADC_NO_TIMER,
     .groupCallback     = IoHwAb_AdcConversionComplete,
     .streamBufferMode  = ADC_STREAM_BUFFER_LINEAR,
     .streamNumSamples  = 1,
     .channelList       = Adc_AdcHwUnit_AdcGroup1_ChannelList,
     .commandBuffer     = Adc_AdcHwUnit_AdcGroup1_Commands,
     .numberOfChannels  = sizeof(Adc_AdcHwUnit_AdcGroup1_Commands)/sizeof(Adc_AdcHwUnit_AdcGroup1_Commands[0]),
     .status            = &AdcGroupStatus_AdcHwUnit[0],
     .dmaCommandChannel = DMA_ADC_GROUP0_COMMAND_CHANNEL,
     .dmaResultChannel  = DMA_ADC_GROUP0_RESULT_CHANNEL,
     .groupDMACommands  = &AdcGroupDMACommandConfig_AdcHwUnit[0],
     .groupDMAResults   = &AdcGroupDMAResultConfig_AdcHwUnit[0],
   },
};



const Adc_ConfigType AdcConfig[] =
{
  {
   .hwConfigPtr      = &AdcHWUnitConfiguration_AdcHwUnit,
   .channelConfigPtr = AdcChannelConfiguration_AdcHwUnit,
   .nbrOfChannels    = sizeof(AdcChannelConfiguration_AdcHwUnit)/sizeof(AdcChannelConfiguration_AdcHwUnit[0]),
   .groupConfigPtr   = AdcGroupConfiguration_AdcHwUnit,
   .nbrOfGroups      = sizeof(AdcGroupConfiguration_AdcHwUnit)/sizeof(AdcGroupConfiguration_AdcHwUnit[0]),
  },
};





