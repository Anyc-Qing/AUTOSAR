
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

/** @file Adc_Cfg.h
 * Definitions of configuration parameters for ADC Driver.
 */
 
#ifndef ADC_CFG_H_
#define ADC_CFG_H_

#if !(((ADC_SW_MAJOR_VERSION == 2) && (ADC_SW_MINOR_VERSION == 0)) )
#error Adc: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((ADC_AR_RELEASE_MAJOR_VERSION == 4) && (ADC_AR_RELEASE_MINOR_VERSION == 1)) )
#error Adc: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#define ADC_DEINIT_API                    STD_ON
#define ADC_DEV_ERROR_DETECT              STD_ON
#define ADC_ENABLE_QUEUING                STD_OFF			/* Not implemented. */
#define ADC_ENABLE_START_STOP_GROUP_API   STD_ON
/* @req SWS_Adc_00101 */
#define ADC_GRP_NOTIF_CAPABILITY          STD_ON
#define ADC_HW_TRIGGER_API                STD_OFF			/* Not implemented. */
#define ADC_PRIORITY_IMPLEMENTATION       STD_OFF			/* Not implemented. */
#define ADC_READ_GROUP_API                STD_ON
#define ADC_VERSION_INFO_API              STD_ON

/* @req SWS_Adc_00506 */
typedef uint32 Adc_ChannelType;
/* @req SWS_Adc_00507 */
typedef uint16 Adc_GroupType;
/* @req SWS_Adc_00508 */
typedef uint16_t Adc_ValueGroupType;
/* @req SWS_Adc_00518 */
typedef uint16_t Adc_StreamNumSampleType;

#define ADC_NOF_GROUP_PER_CONTROLLER 100uL
#define ADC_ARC_CTRL_CONFIG_CNT 1

#define ADC_RESOLUTION_MASK    0x00000010uL
#define ADC_RESOLUTION_12_BITS 0x00000000uL
#define ADC_RESOLUTION_10_BITS 0x00000010uL

/* Not defined in Autosar */
#if !defined(ADC_ISR_PRIORITY)
#define ADC_ISR_PRIORITY	30uL
#endif

#define ADC_HWUNIT_HWUNIT_ADCA0_ENABLED

#define ADCAnI0   (Adc_ChannelType)0
#define ADCAnI1   (Adc_ChannelType)1
#define ADCAnI2   (Adc_ChannelType)2
#define ADCAnI3   (Adc_ChannelType)3
#define ADCAnI4   (Adc_ChannelType)4
#define ADCAnI5   (Adc_ChannelType)5
#define ADCAnI6   (Adc_ChannelType)6
#define ADCAnI7   (Adc_ChannelType)7
#define ADCAnI8   (Adc_ChannelType)8
#define ADCAnI9   (Adc_ChannelType)9
#define ADCAnI10  (Adc_ChannelType)10
#define ADCAnI11  (Adc_ChannelType)11
#define ADCAnI12  (Adc_ChannelType)12
#define ADCAnI13  (Adc_ChannelType)13
#define ADCAnI14  (Adc_ChannelType)14
#define ADCAnI15  (Adc_ChannelType)15
#define ADCAnI0S  (Adc_ChannelType)16
#define ADCAnI1S  (Adc_ChannelType)17
#define ADCAnI2S  (Adc_ChannelType)18
#define ADCAnI3S  (Adc_ChannelType)19
#define ADCAnI4S  (Adc_ChannelType)20
#define ADCAnI5S  (Adc_ChannelType)21
#define ADCAnI6S  (Adc_ChannelType)22
#define ADCAnI7S  (Adc_ChannelType)23
#define ADCAnI8S  (Adc_ChannelType)24
#define ADCAnI9S  (Adc_ChannelType)25
#define ADCAnI10S (Adc_ChannelType)26
#define ADCAnI11S (Adc_ChannelType)27
#define ADCAnI12S (Adc_ChannelType)28
#define ADCAnI13S (Adc_ChannelType)29
#define ADCAnI14S (Adc_ChannelType)30
#define ADCAnI15S (Adc_ChannelType)31
#define ADCAnI16S (Adc_ChannelType)32
#define ADCAnI17S (Adc_ChannelType)33
#define ADCAnI18S (Adc_ChannelType)34
#define ADCAnI19S (Adc_ChannelType)35
#define ADC_NBR_OF_CHANNELS (Adc_ChannelType)36

/* These are only defined here to be used by IoHwAb */
#define AdcChannel1 ADCAnI6 
  
/** Container for HW setup. */   
typedef struct   
{   
  uint32             hwUnitId;
  uint32			 resolution;     
}Adc_HWConfigurationType;

/** Channel resolution. */
typedef uint8 Adc_ResolutionType;

#define ADC_RESOLUTION_10BITS (Adc_ResolutionType)0

/** Container for channel configuration. */
typedef struct
{
  //Adc_VoltageSourceType  adcChannelRefVoltSrcLow;
  //Adc_VoltageSourceType  adcChannelRefVoltSrcHigh;
  Adc_ResolutionType     adcChannelResolution;
}Adc_ChannelConfigurationType;

/** Channel conversion mode. */
typedef enum
{
ADC_CONV_MODE_ONESHOT = 0,
ADC_CONV_MODE_CONTINUOUS = 0x00000020
} Adc_GroupConvModeType;

/** Container for groups status info. */
typedef struct
{
  uint8 notifictionEnable;
  Adc_ValueGroupType *resultBufferPtr;
  Adc_StatusType groupStatus;
  Adc_StreamNumSampleType currSampleCount;   /* Streaming sample counter of current group */
  Adc_ValueGroupType *currResultBufPtr;   /* Streaming sample current buffer pointer */
}Adc_GroupStatus;

typedef uint32 Adc_ArcControllerIdType;

#define HWUNIT_ADCA0 (Adc_ArcControllerIdType)0
#define HWUNIT_ADCA1 (Adc_ArcControllerIdType)1

/* Group definitions. */

#define ADC_NBR_OF_ADCHWUNIT_GROUPS  1


#define ADC_ADCHWUNIT_ADCGROUP1  (Adc_GroupType)((HWUNIT_ADCA0 * 100) + 0)



/* Generated symbolic names */
#define	AdcConf_AdcGroup_AdcGroup1 ADC_ADCHWUNIT_ADCGROUP1
#define	Adc_AdcGroup1 AdcConf_AdcGroup_AdcGroup1  

#define ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS 1


/** Container for group setup. */
typedef struct
{  
  Adc_GroupAccessModeType      accessMode;
  Adc_GroupConvModeType        conversionMode;
  Adc_TriggerSourceType        triggerSrc;    
  /* @req SWS_Adc_00085 */
  void                         (*groupCallback)(void);
  Adc_StreamBufferModeType     streamBufferMode;
  Adc_StreamNumSampleType      streamNumSamples;
  const Adc_ChannelType        *channelList;  
  Adc_ChannelType              numberOfChannels;
  Adc_GroupStatus              *status;
  uint32 						hwUnit;  
}Adc_GroupDefType;

/** Container for module initialization parameters. */
typedef struct
{
  const Adc_HWConfigurationType*      hwConfigPtr;
  const Adc_GroupDefType*             groupConfigPtr;
  const Adc_GroupType                 nbrOfGroups;
}Adc_ConfigType;

extern const Adc_ConfigType AdcConfig [];

void IoHwAb_AdcConversionComplete (void);



#endif /*ADC_CFG_H_*/
