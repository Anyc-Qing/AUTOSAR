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

/** @file Adc_Cfg.h
 * Definitions of configuration parameters for ADC Driver.
 */
 
#if !(((ADC_SW_MAJOR_VERSION == 3) && (ADC_SW_MINOR_VERSION == 0)) )
#error Adc: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((ADC_AR_RELEASE_MAJOR_VERSION == 4) && (ADC_AR_RELEASE_MINOR_VERSION == 3)) )
#error Adc: Configuration file expected AUTOSAR version to be 4.3.*
#endif

#ifndef ADC_CFG_H_
#define ADC_CFG_H_

#include "Dma.h"
#include "Platform_Types.h"
#include "Arc_Types.h"

/** HW priority mechanism only. @see ADC_PRIORITY_IMPLEMENTATION */
#define ADC_PRIORITY_HW                   0
/** HW and SW priority mechanism. @see ADC_PRIORITY_IMPLEMENTATION  */
#define ADC_PRIORITY_HW_SW                1
/** No priority mechanism. @see ADC_PRIORITY_IMPLEMENTATION  */
#define ADC_PRIORITY_NONE                 2
/** Build DeInit API */
#define ADC_DEINIT_API                    STD_ON
/** Enable Development Error Trace */
#define ADC_DEV_ERROR_DETECT              STD_ON
/** Not supported. */
#define ADC_ENABLE_QUEUING                STD_OFF
/** Build Start/Stop group API. */
#define ADC_ENABLE_START_STOP_GROUP_API   STD_ON
/** Enable group conversion notification. */
#define ADC_GRP_NOTIF_CAPABILITY          STD_ON
/** Not supported. */
#define ADC_HW_TRIGGER_API                STD_OFF
/** Build Read group API */
#define ADC_READ_GROUP_API                STD_ON
/** Build version info API  */
#define ADC_VERSION_INFO_API              STD_ON

#define ADC_ARC_CTRL_CONFIG_CNT           1



#define ADC_HWUNIT_EQADC_CTRL_A_ENABLED

typedef uint32 Adc_ArcControllerIdType;
typedef uint16 Adc_GroupType;
#define ADC_ADCHWUNIT_ADCGROUP1  (Adc_GroupType)(0)





/* Generated symbolic names */
#define	AdcConf_AdcGroup_AdcGroup1 ADC_ADCHWUNIT_ADCGROUP1
#define	Adc_AdcGroup1 AdcConf_AdcGroup_AdcGroup1

typedef uint16 Adc_ArcChannelWithinGroupType;


/* Channel indexes in group buffers */
#define ADC_ADCHWUNIT_ADCGROUP1_ADCCHANNEL1 ((Adc_ArcChannelWithinGroupType)0) 
#define ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS 1


typedef enum
{
  ADC_CH0 = 0, /* 40 Channels available for MPC5567 */ 
  ADC_CH1,
  ADC_CH2,
  ADC_CH3,
  ADC_CH4,
  ADC_CH5,
  ADC_CH6,
  ADC_CH7,
  ADC_CH8,
  ADC_CH9,
  ADC_CH10,
  ADC_CH11,
  ADC_CH12,
  ADC_CH13,
  ADC_CH14,
  ADC_CH15,
  ADC_CH16,
  ADC_CH17,
  ADC_CH18,
  ADC_CH19,
  ADC_CH20,
  ADC_CH21,
  ADC_CH22,
  ADC_CH23,
  ADC_CH24,
  ADC_CH25,
  ADC_CH26,
  ADC_CH27,
  ADC_CH28,
  ADC_CH29,
  ADC_CH30,
  ADC_CH31,
  ADC_CH32,
  ADC_CH33,
  ADC_CH34,
  ADC_CH35,
  ADC_CH36,
  ADC_CH37,
  ADC_CH38,
  ADC_CH39
}Adc_ChannelDefType;

typedef enum
{
	AdcChannel1,
	ADC_NBR_OF_CHANNELS
}Adc_ChannelType;

#define ADC_CH9_ID ADC_CH9



typedef uint8_t Adc_InternalChannelIdType;

typedef uint16_t Adc_ValueGroupType;

/* Non-standard type */
typedef union
{
  vuint32_t R;
  struct
  {
    vuint32_t EOQ:1;
    vuint32_t PAUSE:1;
    vuint32_t :4;
    vuint32_t BN:1;
    vuint32_t CAL:1;
    vuint32_t MESSAGE_TAG:4;
    vuint32_t LST:2;
    vuint32_t TSR:1;
    vuint32_t FMT:1;
    vuint32_t CHANNEL_NUMBER:8;
    vuint32_t :8;
   } B;
}Adc_CommandType;

/** Type of clock input for the conversion unit. */
typedef enum
{
  ADC_SYSTEM_CLOCK
}Adc_ClockSourceType;

/* Std-type, supplier defined */
typedef enum
{
  ADC_SYSTEM_CLOCK_DISABLED,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_2,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_4,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_6,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_8,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_10,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_12,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_14,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_16,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_18,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_20,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_22,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_24,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_26,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_28,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_30,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_32,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_34,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_36,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_38,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_40,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_42,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_44,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_46,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_48,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_50,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_52,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_54,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_56,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_58,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_60,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_62,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_64,
}Adc_PrescaleType;

/** Container for HW setup. */
typedef struct
{
  Adc_ClockSourceType clockSource;
  uint8_t             hwUnitId;
  Adc_PrescaleType    adcPrescale;
}Adc_HWConfigurationType;

/** Duration of conversion. */
typedef enum
{
  ADC_CONVERSION_TIME_2_CLOCKS,
  ADC_CONVERSION_TIME_8_CLOCKS,
  ADC_CONVERSION_TIME_64_CLOCKS,
  ADC_CONVERSION_TIME_128_CLOCKS
}Adc_ConversionTimeType;

/* Non-standard type */
typedef boolean Adc_CalibrationType;

/* Non-standard type */
/* Channel definitions. */
typedef struct
{
  Adc_ConversionTimeType adcChannelConvTime;
  Adc_CalibrationType    adcChannelCalibrationEnable;
}Adc_ChannelConfigurationType;


/** Not supported. */
typedef enum
{
  ADC_NO_TIMER,
}Adc_HwTriggerTimerType;

/** Not supported. */
typedef uint16_t Adc_StreamNumSampleType;

/** Channel conversion mode. */
/* Std-type, supplier defined */
typedef enum
{
  ADC_CONV_MODE_DISABLED,
  ADC_CONV_MODE_ONESHOT    = 1,
  ADC_CONV_MODE_CONTINUOUS = 9,
}Adc_GroupConvModeType;

typedef struct
{
  uint8 notifictionEnable;
  Adc_ValueGroupType *resultBufferPtr;
  Adc_StatusType groupStatus;
  Adc_StreamNumSampleType currSampleCount;   /* Streaming sample counter of current group */
  Adc_ValueGroupType *currResultBufPtr;   /* Streaming sample current buffer pointer */
}Adc_GroupStatus;

/* Implementation specific */
typedef struct
{
  Adc_GroupAccessModeType      		accessMode;
  Adc_GroupConvModeType        		conversionMode;
  Adc_TriggerSourceType        		triggerSrc;
  Adc_HwTriggerSignalType      		hwTriggerSignal;
  Adc_HwTriggerTimerType       		hwTriggerTimer;
  void                         		(*groupCallback)(void);
  Adc_StreamBufferModeType     		streamBufferMode;
  Adc_StreamNumSampleType      		streamNumSamples;
  const Adc_InternalChannelIdType	*channelList;
  Adc_CommandType              		*commandBuffer;
  Adc_InternalChannelIdType    		numberOfChannels;
  Adc_GroupStatus              		*status;
  Dma_ChannelType              		dmaCommandChannel;
  Dma_ChannelType              		dmaResultChannel;
  const Dma_TcdType            		*groupDMACommands;
  const Dma_TcdType            		*groupDMAResults;
}Adc_GroupDefType;

/* Impl. specific */
typedef struct
{
  const Adc_HWConfigurationType*      hwConfigPtr;
  const Adc_ChannelConfigurationType* channelConfigPtr;
  const uint16_t                      nbrOfChannels;
  const Adc_GroupDefType*             groupConfigPtr;
  const uint16_t                      nbrOfGroups;
}Adc_ConfigType;

extern const Adc_ConfigType AdcConfig [];

extern const Dma_TcdType AdcGroupDMACommandConfig [];
extern const Dma_TcdType AdcGroupDMAResultConfig [];


/* Group definitions. */
#define ADC_NBR_OF_ADCHWUNIT_GROUPS  1



void IoHwAb_AdcConversionComplete (void);



/* Configuration Set Handles */
#define AdcConfigSet (AdcConfig)
#define Adc_AdcConfigSet (AdcConfig)


#endif /*ADC_CFG_H_*/

