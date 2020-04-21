
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
 
#ifndef ADC_CFG_H_
#define ADC_CFG_H_

#if !(((ADC_SW_MAJOR_VERSION == 3) && (ADC_SW_MINOR_VERSION == 0)) )
#error Adc: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((ADC_AR_RELEASE_MAJOR_VERSION == 4) && (ADC_AR_RELEASE_MINOR_VERSION == 3)) )
#error Adc: Configuration file expected AUTOSAR version to be 4.3.*
#endif



/** HW priority mechanism only. @see ADC_PRIORITY_IMPLEMENTATION */
#define ADC_PRIORITY_HW                   0u
/** HW and SW priority mechanism. @see ADC_PRIORITY_IMPLEMENTATION  */
#define ADC_PRIORITY_HW_SW                1u
/** No priority mechanism. @see ADC_PRIORITY_IMPLEMENTATION  */
#define ADC_PRIORITY_NONE                 2u
/** Build DeInit API */
/* @req SWS_Adc_00228 The function Adc_DeInit shall be pre compile time configurable On/Off by the configuration parameter: AdcDeInitApi.*/
#define ADC_DEINIT_API                    STD_ON
/** Enable Development Error Trace */
#define ADC_DEV_ERROR_DETECT              STD_ON
/** Not supported. */
#define ADC_ENABLE_LIMIT_CHECK			  STD_OFF
/** Not supported. */
#define ADC_ENABLE_QUEUING                STD_OFF
/** Build Start/Stop group API. */
/* @req SWS_Adc_00259 The function Adc_StartGroupConversion shall be pre-compile time configurable On/Off by the configuration parameter AdcEnableStartStopGroupApi.*/
/* @req SWS_Adc_00260 The function Adc_StopGroupConversion shall be pre compile time configurable On/Off by the configuration parameter AdcEnableStartStopGroupApi.*/
#define ADC_ENABLE_START_STOP_GROUP_API   STD_ON
/** Enable group conversion notification. */
/** @req SWS_Adc_00100 The function Adc_EnableGroupNotification shall be pre-compile time configurable On/Off by the configuration parameter AdcGrpNotifCapability.*/
/** @req SWS_Adc_00101 The function Adc_DisableGroupNotification shall be pre-compile time configurable On/Off by the configuration parameter AdcGrpNotifCapability*/
#define ADC_GRP_NOTIF_CAPABILITY          STD_ON
/** Not supported. */
#define ADC_HW_TRIGGER_API                STD_OFF
/** Implemented priority mechanism. */
#define ADC_PRIORITY_IMPLEMENTATION       STD_OFF
/** Build Read group API */
#define ADC_READ_GROUP_API                STD_ON
/** AdcResultAlignment is not supported */
#define ADC_RESULT_ALIGNMENT			  ADC_ALIGN_LEFT
/** Build version info API  */
#define ADC_VERSION_INFO_API              STD_ON
/** Not supported */
#define ADC_CHANNEL_LIMIT_CHECK			  STD_OFF
/** Not supported */
#define ADC_CHANNEL_VALUESIGNED			  STD_OFF
/** Not supported */
#define ADC_GROUP_FIRST_CHANNEL_FIXED     STD_OFF
#define ADC_WAKEUP_FUNCTIONALITY_API	  STD_OFF


typedef uint16_t Adc_ValueGroupType;

#define ADC_HWUNIT_ADC_CTRL_0_ENABLED

/** ID of channel */
typedef uint32 Adc_ChannelType;

#define ADC_CH0 (Adc_ChannelType)0u /* Internal Precision Channels */
#define ADC_CH1 (Adc_ChannelType)1u
#define ADC_CH2 (Adc_ChannelType)2u
#define ADC_CH3 (Adc_ChannelType)3u
#define ADC_CH4 (Adc_ChannelType)4u
#define ADC_CH5 (Adc_ChannelType)5u
#define ADC_CH6 (Adc_ChannelType)6u
#define ADC_CH7 (Adc_ChannelType)7u
#define ADC_CH8 (Adc_ChannelType)8u
#define ADC_CH9 (Adc_ChannelType)9u
#define ADC_CH10 (Adc_ChannelType)10u
#define ADC_CH11 (Adc_ChannelType)11u
#define ADC_CH12 (Adc_ChannelType)12u
#define ADC_CH13 (Adc_ChannelType)13u
#define ADC_CH14 (Adc_ChannelType)14u
#define ADC_CH15 (Adc_ChannelType)15u
#define ADC_CH16 (Adc_ChannelType)16u
#define ADC_CH17 (Adc_ChannelType)17u
#define ADC_CH18 (Adc_ChannelType)18u
#define ADC_CH19 (Adc_ChannelType)19u
#define ADC_CH20 (Adc_ChannelType)20u
#define ADC_CH21 (Adc_ChannelType)21u
#define ADC_CH22 (Adc_ChannelType)22u
#define ADC_CH23 (Adc_ChannelType)23u
#define ADC_CH24 (Adc_ChannelType)24u
#define ADC_CH25 (Adc_ChannelType)25u
#define ADC_CH26 (Adc_ChannelType)26u
#define ADC_CH27 (Adc_ChannelType)27u
#define ADC_CH28 (Adc_ChannelType)28u
#define ADC_CH29 (Adc_ChannelType)29u
#define ADC_CH30 (Adc_ChannelType)30u
#define ADC_CH31 (Adc_ChannelType)31u
#define ADC_CH32 (Adc_ChannelType)32u /* Internal Standard Channels */
#define ADC_CH33 (Adc_ChannelType)33u
#define ADC_CH34 (Adc_ChannelType)34u
#define ADC_CH35 (Adc_ChannelType)35u
#define ADC_CH36 (Adc_ChannelType)36u
#define ADC_CH37 (Adc_ChannelType)37u
#define ADC_CH38 (Adc_ChannelType)38u
#define ADC_CH39 (Adc_ChannelType)39u
#define ADC_CH40 (Adc_ChannelType)40u
#define ADC_CH41 (Adc_ChannelType)41u
#define ADC_CH42 (Adc_ChannelType)42u
#define ADC_CH43 (Adc_ChannelType)43u
#define ADC_CH44 (Adc_ChannelType)44u
#define ADC_CH45 (Adc_ChannelType)45u
#define ADC_CH46 (Adc_ChannelType)46u
#define ADC_CH47 (Adc_ChannelType)47u
#define ADC_CH48 (Adc_ChannelType)48u
#define ADC_CH49 (Adc_ChannelType)49uL
#define ADC_CH50 (Adc_ChannelType)50u
#define ADC_CH51 (Adc_ChannelType)51u
#define ADC_CH52 (Adc_ChannelType)52u
#define ADC_CH53 (Adc_ChannelType)53u
#define ADC_CH54 (Adc_ChannelType)54u
#define ADC_CH55 (Adc_ChannelType)55u
#define ADC_CH56 (Adc_ChannelType)56u
#define ADC_CH57 (Adc_ChannelType)57u
#define ADC_CH58 (Adc_ChannelType)58u
#define ADC_CH59 (Adc_ChannelType)59u
#define ADC_CH60 (Adc_ChannelType)60u
#define ADC_CH61 (Adc_ChannelType)61u
#define ADC_CH62 (Adc_ChannelType)62u
#define ADC_CH63 (Adc_ChannelType)63u
#define ADC_CH64 (Adc_ChannelType)64u
#define ADC_CH65 (Adc_ChannelType)65u
#define ADC_CH66 (Adc_ChannelType)66u
#define ADC_CH67 (Adc_ChannelType)67u
#define ADC_CH68 (Adc_ChannelType)68u
#define ADC_CH69 (Adc_ChannelType)69u
#define ADC_CH70 (Adc_ChannelType)70u
#define ADC_CH71 (Adc_ChannelType)71u
#define ADC_CH72 (Adc_ChannelType)72u
#define ADC_CH73 (Adc_ChannelType)73u
#define ADC_CH74 (Adc_ChannelType)74u
#define ADC_CH75 (Adc_ChannelType)75u
#define ADC_CH76 (Adc_ChannelType)76u
#define ADC_CH77 (Adc_ChannelType)77u
#define ADC_CH78 (Adc_ChannelType)78u
#define ADC_CH79 (Adc_ChannelType)79u
#define ADC_CH80 (Adc_ChannelType)80u
#define ADC_CH81 (Adc_ChannelType)81u
#define ADC_CH82 (Adc_ChannelType)82u
#define ADC_CH83 (Adc_ChannelType)83u
#define ADC_CH84 (Adc_ChannelType)84u
#define ADC_CH85 (Adc_ChannelType)85u
#define ADC_CH86 (Adc_ChannelType)86u
#define ADC_CH87 (Adc_ChannelType)87u
#define ADC_CH88 (Adc_ChannelType)88u
#define ADC_CH89 (Adc_ChannelType)89u
#define ADC_CH90 (Adc_ChannelType)90u
#define ADC_CH91 (Adc_ChannelType)91u
#define ADC_CH92 (Adc_ChannelType)92u
#define ADC_CH93 (Adc_ChannelType)93u
#define ADC_CH94 (Adc_ChannelType)94u
#define ADC_CH95 (Adc_ChannelType)95u
#define ADC_NBR_OF_CHANNELS (Adc_ChannelType)96u

/* These are only defined here to be used by IoHwAb */
#define AdcChannel1 ADC_CH7 

/** Type of clock input for the conversion unit. */
typedef enum
{
  ADC_SYSTEM_CLOCK
}Adc_ClockSourceType;

/** Clock prescaler factor. */
typedef uint32 Adc_PrescaleType;
#define ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_2 (Adc_PrescaleType)0u /* half bus clock */
#define ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_1 (Adc_PrescaleType)1u /* same bus clock */

  
/** Container for HW setup. */   
typedef struct   
{   
  Adc_ClockSourceType clockSource;   
  uint32             hwUnitId;   
  Adc_PrescaleType    adcPrescale;   
}Adc_HWConfigurationType;

/** Reference voltage source. */
typedef enum
{
  ADC_REFERENCE_VOLTAGE_GROUND,
  ADC_REFERENCE_VOLTAGE_5V,
}Adc_VoltageSourceType;

/** Duration of conversion. */
typedef uint32_t Adc_ConversionTimeType;
typedef uint32_t Adc_SampTimeType;

typedef uint32 Adc_LatchTimeType;
#define	ADC_INPLATCH_0 (Adc_LatchTimeType)0u
#define ADC_INPLATCH_1 (Adc_LatchTimeType)1u


typedef uint32 Adc_CmpTimeType;
#define ADC_INPCPM_0 (Adc_CmpTimeType)0u
#define ADC_INPCPM_1 (Adc_CmpTimeType)1u
#define ADC_INPCPM_2 (Adc_CmpTimeType)2u
#define ADC_INPCPM_3 (Adc_CmpTimeType)3u


typedef struct
{
	Adc_LatchTimeType	INPLATCH;
	Adc_CmpTimeType		INPCMP;
	Adc_SampTimeType	INPSAMP;
}Adc_Channel_Phase_DurationType;

/** Enable/disable calibration. */
typedef enum
{
  ADC_CALIBRATION_DISABLED,
  ADC_CALIBRATION_ENABLED
}Adc_CalibrationType;

/** Channel resolution. */
typedef uint8 Adc_ResolutionType;
#define ADC_RESOLUTION_10BITS (Adc_ResolutionType)0u


/** Container for channel configuration. */
typedef struct
{
  Adc_VoltageSourceType  adcChannelRefVoltSrcLow;
  Adc_VoltageSourceType  adcChannelRefVoltSrcHigh;
  Adc_ResolutionType     adcChannelResolution;
  Adc_CalibrationType    adcChannelCalibrationEnable;
}Adc_ChannelConfigurationType;

/** Channel conversion mode. */
typedef enum
{
ADC_CONV_MODE_ONESHOT,
ADC_CONV_MODE_CONTINUOUS
} Adc_GroupConvModeType;


/** Not supported. */
typedef enum
{
  ADC_NO_TIMER,
}Adc_HwTriggerTimerType;

/** Not supported. */
typedef uint16_t Adc_StreamNumSampleType;

typedef enum
{
  ADC_GROUP_UNSTART,
  ADC_GROUP_START
}Adc_GroupStartStatusType;

/** Container for groups status info. */
typedef struct
{
  uint8 notifictionEnable;
  Adc_ValueGroupType *resultBufferPtr;
  Adc_StatusType groupStatus;
  Adc_StreamNumSampleType currSampleCount;   /* Streaming sample counter of current group */
  Adc_ValueGroupType *currResultBufPtr;   /* Streaming sample current buffer pointer */
}Adc_GroupStatus;

#define ADC_NOF_GROUP_PER_CONTROLLER 100u
#define ADC_ARC_CTRL_CONFIG_CNT 1

typedef uint32 Adc_ArcControllerIdType;

#define ADC_CTRL_0 (Adc_ArcControllerIdType)0u
#define ADC_CTRL_1 (Adc_ArcControllerIdType)1u
#define ADC_CTRL_2 (Adc_ArcControllerIdType)2u
#define ADC_CTRL_3 (Adc_ArcControllerIdType)3u
#define ADC_CTRL_4 (Adc_ArcControllerIdType)4u
#define ADC_CTRL_5 (Adc_ArcControllerIdType)5u
#define ADC_CTRL_6 (Adc_ArcControllerIdType)6u
#define ADC_CTRL_7 (Adc_ArcControllerIdType)7u
#define ADC_CTRL_8 (Adc_ArcControllerIdType)8u
#define ADC_CTRL_9 (Adc_ArcControllerIdType)9u
#define ADC_CTRL_10 (Adc_ArcControllerIdType)10u
#define ADC_CTRL_B (Adc_ArcControllerIdType)11u

/* Group definitions. */

#define ADC_NBR_OF_ADCHWUNIT_GROUPS  1


typedef uint16 Adc_GroupType;
#define ADC_ADCHWUNIT_ADCGROUP1  (Adc_GroupType)((ADC_CTRL_0 * 100uL) + 0)



/* Generated symbolic names */
#define	AdcConf_AdcGroup_AdcGroup1 ADC_ADCHWUNIT_ADCGROUP1
#define	Adc_AdcGroup1 AdcConf_AdcGroup_AdcGroup1  

typedef uint16 Adc_ArcChannelWithinGroupType;

/* Channel indexes in group buffers */
#define ADC_ADCHWUNIT_ADCGROUP1_ADCCHANNEL1  ((Adc_ArcChannelWithinGroupType)0) 

#define ADC_NBR_OF_ADCHWUNIT_ADCGROUP1_CHANNELS 1

/** Container for group setup. */
typedef struct
{
  Adc_Channel_Phase_DurationType adcChannelConvTime;
  Adc_GroupAccessModeType      accessMode;
  Adc_GroupConvModeType        conversionMode;
  Adc_TriggerSourceType        triggerSrc;
  Adc_HwTriggerSignalType      hwTriggerSignal;
  Adc_HwTriggerTimerType       hwTriggerTimer;
  void                         (*groupCallback)(void);
  Adc_StreamBufferModeType     streamBufferMode;
  Adc_StreamNumSampleType      streamNumSamples;
  const Adc_ChannelType        *channelList;  
  Adc_ChannelType              numberOfChannels;
  Adc_GroupStatus              *status;
}Adc_GroupDefType;

/** Container for module initialization parameters. */
typedef struct
{
  const Adc_HWConfigurationType*      hwConfigPtr;
  const Adc_GroupDefType*             groupConfigPtr;
  const Adc_GroupType                 nbrOfGroups;
}Adc_ConfigType;

extern const Adc_ConfigType AdcConfig [];

typedef enum
{
  ADC_ALIGN_LEFT,
  ADC_ALIGN_RIGHT
}Adc_ResultAlignmentType;

typedef enum
{
  ADC_RANGE_ALWAYS,
  ADC_RANGE_BETWEEN,
  ADC_RANGE_NOT_BETWEEN,
  ADC_RANGE_NOT_OVER_HIGH,
  ADC_RANGE_NOT_UNDER_LOW,
  ADC_RANGE_OVER_HIGH,
  ADC_RANGE_UNDER_LOW
}Adc_ChannelRangeSelectType;

typedef uint8_t Adc_GroupPriorityType;

typedef enum
{
  ADC_GROUP_REPL_ABORT_RESTART,
  ADC_GROUP_REPL_SUSPEND_RESUME
}Adc_GroupReplacementType;

void IoHwAb_AdcConversionComplete (void);



/* Configuration Set Handles */
#define AdcConfigSet (AdcConfig)
#define Adc_AdcConfigSet (AdcConfig)


#endif /*ADC_CFG_H_*/
