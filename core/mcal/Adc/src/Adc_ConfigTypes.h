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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570|JACINTO */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */


/** @file Adc_ConfigTypes.h
 *  This file contains the microcontroller dependent Adc type definitions and non standard ArcCore type definitions.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Adc
  *  This is the TMS570 Mcal Adc Group
  *  @{
  */

#ifndef ADC_CONFIGTYPES_H_
#define ADC_CONFIGTYPES_H_

#if defined(CFG_TMS570)

/**
*   @brief  Adc_ValueGroupType is AUTOSAR specified type, it is implementation dependent.
*   		Type for reading the converted values of a channel group (raw, without further scaling, alignment according precompile switch ADC_RESULT_ALIGNMENT).
*/
typedef uint16 Adc_ValueGroupType;
/* Group definitions. */


/** @enum 	 Adc_ChannelType is AUTOSAR specified type, it is μC specific and has to be described by the supplier.
*   @brief   Numeric ID of an ADC channel.
*/
typedef enum {
  ADC_CH0,
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
  ADC_NBR_OF_CHANNELS,
} Adc_ChannelType;


/** @enum 	 Adc_ClockSourceType
*   @brief   It is is ArcCore specified type. Specifies the clock source.
*/
typedef enum {
  ADC_SYSTEM_CLOCK
}Adc_ClockSourceType;


/**
*   @brief  Adc_PrescaleType is AUTOSAR specified type, it is implementation dependent.
*   		Type of clock prescaler factor.
*/
/* Std-type, supplier defined
 * 0 - Divide by 1
 * 1 - Divide by 2
 * 2 - Divide by 3
 * etc....
 * */
typedef uint8 Adc_PrescaleType;


/**
*   @brief  Adc_PrescaleType is AUTOSAR specified type, it is implementation dependent.
*   		Type of conversion time, i.e. the time during which the sampled analogue value is converted into digital representation.
*/
/* Std-type, supplier defined */
typedef uint16 Adc_ConversionTimeType; //2 - 2048 range on TMS570LS1227


typedef uint8 Adc_ResolutionType;

/**
  * @brief   ArcCore type definition.
  * @details ADC related configuration type.
  */
/* Non-standard type */
typedef struct
{
  Adc_ClockSourceType 	clockSource;
  uint8             	hwUnitId;
  Adc_PrescaleType    	adcPrescale;
  Adc_ConversionTimeType convTime;
  Adc_ResolutionType 	adcResolution;
}Adc_HWConfigurationType;


/**
  * @brief   ArcCore type definition.
  * @details ADC related configuration type. The type contained in this structure Adc_ConversionTimeType is AUTOSAR specified.
  */
/* Channel definitions, std container */
typedef struct
{
  Adc_ConversionTimeType adcChannelConvTime;
  // NOT SUPPORTED Adc_VoltageSourceType  adcChannelRefVoltSrcLow;
  // NOT SUPPORTED Adc_VoltageSourceType  adcChannelRefVoltSrcHigh;
  Adc_ResolutionType     adcChannelResolution;
  // NOT SUPPORTED Adc_CalibrationType    adcChannelCalibrationEnable;
} Adc_ChannelConfigurationType;


/**
*   @brief  Adc_StreamNumSampleType is AUTOSAR specified type, it is implementation dependent.
*   		Type for configuring the number of group conversions in streaming access mode (in single access mode, parameter is 1).
*/
typedef uint16 Adc_StreamNumSampleType;


/**
  * @brief   ArcCore type definition.
  * @details ADC group related type, e.g. status.
  */
typedef struct
{
  uint8 notifictionEnable;
  uint8 hwTriggerEnable;
  Adc_ValueGroupType *resultBufferPtr;
  Adc_StatusType groupStatus;
  Adc_StreamNumSampleType currSampleCount;   /* Streaming sample counter of current group */
  Adc_ValueGroupType *currResultBufPtr;   /* Streaming sample current buffer pointer */
}Adc_GroupStatus;


/** @enum 	 Adc_GroupConvModeType
*   @brief   Type for configuring the conversion mode of an ADC Channel group.
*/
/* Std-type, supplier defined */
typedef enum
{
  ADC_CONV_MODE_DISABLED,
  ADC_CONV_MODE_ONESHOT   = 1,
  ADC_CONV_MODE_CONTINUOUS = 9,
} Adc_GroupConvModeType;


/**
  * @brief   ArcCore type definition.
  * @details Type for assignment of channels to a channel group.
  */
/* Implementation specific */
typedef struct {
  Adc_GroupAccessModeType      accessMode;
  Adc_GroupConvModeType        conversionMode;
  Adc_TriggerSourceType        triggerSrc;
  Adc_HwTriggerSignalType      hwTriggerSignal;
  Adc_HwTriggerTimerType       hwTriggerTimer;
  void                         (*groupCallback)(void);
  Adc_StreamBufferModeType     streamBufferMode;
  Adc_StreamNumSampleType      streamNumSamples;
  const Adc_ChannelType        *channelList;
  Adc_ValueGroupType           *resultBuffer;
  // NOT SUPPORTED  Adc_CommandType              *commandBuffer;
  Adc_ChannelType              numberOfChannels;
  Adc_GroupStatus              *status;
  // NOT SUPPORTED  Dma_ChannelType              dmaCommandChannel;
  // NOT SUPPORTED  Dma_ChannelType              dmaResultChannel;
  // NOT SUPPORTED  const struct tcd_t *		   groupDMACommands;
  // NOT SUPPORTED  const struct tcd_t *		   groupDMAResults;
  uint32 						arcAdcGroupSampTime;
  uint8 						hwUnit;
  uint16						groupId;
} Adc_GroupDefType;



/**
  * @brief   ArcCore type definition.
  * @details Data structure containing the set of configuration parameters required for initializing the ADC Driver and ADC HW Unit(s).
  */
typedef struct {
  const Adc_HWConfigurationType*      hwConfigPtr;
  const Adc_ChannelConfigurationType* channelConfigPtr;
  const uint16                      nbrOfChannels;
  const Adc_GroupDefType*             groupConfigPtr;
  const uint16                      nbrOfGroups;
} Adc_ConfigType;

/*lint -e9003 MISRA:OTHER:Since AdcConfig isgetting values form cfg files it can't be in block scope:[MISRA 2012 Rule 8.9, advisory]*/
extern const Adc_ConfigType AdcConfig [];

#elif defined(CFG_JACINTO)

/* @req:JACINTO5 SWS_Adc_00508 */
typedef uint16_t Adc_ValueGroupType;

/* @req:JACINTO5 SWS_Adc_00507 */
typedef uint16 Adc_GroupType;

/* @req:JACINTO5 SWS_Adc_00506 */
typedef uint8_t  Adc_ChannelType;

/* @req:JACINTO5 SWS_Adc_00509 */
typedef uint16_t Adc_PrescaleType;

/* !req:JACINTO5 SWS_Adc_00510 Adc_ConversionTimeType not configurable */

/* !req:JACINTO5 SWS_Adc_00511 Adc_SamplingTimeType not configurable */

/* !req:JACINTO5 SWS_Adc_00512 Adc_ResolutionType not configurable*/

/* @req:JACINTO5 SWS_Adc_00518 */
typedef uint16_t Adc_StreamNumSampleType;

/* @req:JACINTO5 SWS_Adc_00515 */
typedef enum
{
    ADC_CONV_MODE_ONESHOT = 0,
    ADC_CONV_MODE_CONTINUOUS
} Adc_GroupConvModeType;

typedef uint32 Adc_ArcControllerIdType;

/* Channel definitions, std container */
typedef struct
{
    Adc_ChannelType Adc_Channel;
    uint32          Adc_ChnDiff;
    uint32          Adc_ChnSelrfm;
    uint32          Adc_ChnSelrfp;
} Adc_ChannelConfigurationType;

typedef struct
{
  uint8                     notifictionEnable;
  Adc_ValueGroupType        *resultBufferPtr;
  Adc_StatusType            groupStatus;
  Adc_StreamNumSampleType   currSampleCount;   /* Samples per group counter. =0 until first round of conversions complete
                                                  (all channels in group). Then =1 until second round of conversions complete and so on.*/
  Adc_ValueGroupType        *currResultBufPtr;   /* Streaming sample current buffer pointer */
} Adc_GroupStatus;

typedef struct
{
  uint8_t             hwUnitId;
  Adc_PrescaleType    adcPrescale;
  uint32              numberOfChannels;
  const Adc_ChannelConfigurationType        *channelList;
}Adc_HWConfigurationType;

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
  const uint32                 *channelMappingList;
  Adc_ChannelType              numberOfChannels;
  Adc_GroupStatus              *status;
  uint32                        hwUnit;
#if defined(CFG_BRD_JAC6_VAYU_EVM)
  uint32						ExtChannelId;
  uint32						ExtSequenceId;
#endif /* defined(CFG_BRD_JAC6_VAYU_EVM) */
}Adc_GroupDefType;

/** Container for module initialization parameters. */
typedef struct
{
  const Adc_HWConfigurationType*      hwConfigPtr;
  const Adc_GroupDefType*             groupConfigPtr;
  const Adc_GroupType                 nbrOfGroups;
}Adc_ConfigType;

#elif defined(CFG_STM32F1X)


typedef uint16_t Adc_ValueGroupType;
/* Group definitions. */

typedef enum
{
  ADC_CH0,
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
  ADC_NBR_OF_CHANNELS,
}Adc_ChannelType;

/* Std-type, supplier defined */
typedef enum
{
  ADC_SYSTEM_CLOCK
}Adc_ClockSourceType;


/* Std-type, supplier defined */
typedef enum
{
  ADC_SYSTEM_CLOCK_DISABLED,
  ADC_SYSTEM_CLOCK_DIVIDE_FACTOR_1,
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

/* Non-standard type */
typedef struct
{
  Adc_ClockSourceType clockSource;
  uint8_t             hwUnitId;
  Adc_PrescaleType    adcPrescale;
}Adc_HWConfigurationType;

/* Std-type, supplier defined */
typedef enum
{
  ADC_CONVERSION_TIME_2_CLOCKS,
  ADC_CONVERSION_TIME_8_CLOCKS,
  ADC_CONVERSION_TIME_64_CLOCKS,
  ADC_CONVERSION_TIME_128_CLOCKS
}Adc_ConversionTimeType;

/* Channel definitions, std container */
typedef struct
{
  Adc_ConversionTimeType adcChannelConvTime;
  // NOT SUPPORTED Adc_VoltageSourceType  adcChannelRefVoltSrcLow;
  // NOT SUPPORTED Adc_VoltageSourceType  adcChannelRefVoltSrcHigh;
  // NOT SUPPORTED Adc_ResolutionType     adcChannelResolution;
  // NOT SUPPORTED Adc_CalibrationType    adcChannelCalibrationEnable;
} Adc_ChannelConfigurationType;

/* Used ?? */
typedef struct
{
  uint8 				notifictionEnable;
  Adc_ValueGroupType *	resultBufferPtr;
  Adc_StatusType 		groupStatus;
} Adc_GroupStatus;


/* Std-type, supplier defined */
typedef enum
{
  ADC_CONV_MODE_DISABLED,
  ADC_CONV_MODE_ONESHOT   = 1,
  ADC_CONV_MODE_CONTINUOUS = 9,
} Adc_GroupConvModeType;

/** Not supported. */
typedef uint16_t Adc_StreamNumSampleType;

/* Implementation specific */
typedef struct
{
  // NOT SUPPORTED  Adc_GroupAccessModeType      accessMode;
  Adc_GroupConvModeType        conversionMode;
  Adc_TriggerSourceType        triggerSrc;
  // NOT SUPPORTED  Adc_HwTriggerSignalType      hwTriggerSignal;
  // NOT SUPPORTED  Adc_HwTriggerTimerType       hwTriggerTimer;
  void                         (*groupCallback)(void);
  // NOT SUPPORTED  Adc_StreamBufferModeType     streamBufferMode;
  // NOT SUPPORTED  Adc_StreamNumSampleType      streamNumSamples;
  const Adc_ChannelType        *channelList;
  Adc_ValueGroupType           *resultBuffer;
  // NOT SUPPORTED  Adc_CommandType              *commandBuffer;
  Adc_ChannelType              numberOfChannels;
  Adc_GroupStatus              *status;
  // NOT SUPPORTED  Dma_ChannelType              dmaCommandChannel;
  // NOT SUPPORTED  Dma_ChannelType              dmaResultChannel;
  // NOT SUPPORTED  const struct tcd_t *		   groupDMACommands;
  // NOT SUPPORTED  const struct tcd_t *		   groupDMAResults;
} Adc_GroupDefType;

/* Non-standard type */
typedef struct
{
  const Adc_HWConfigurationType*      hwConfigPtr;
  const Adc_ChannelConfigurationType* channelConfigPtr;
  const uint16_t                      nbrOfChannels;
  const Adc_GroupDefType*             groupConfigPtr;
  const uint16_t                      nbrOfGroups;
} Adc_ConfigType;

#elif defined(CFG_ZYNQ)

typedef uint16_t Adc_ValueGroupType;
/* Group definitions. */

typedef enum
{
  INTERNAL_XADC_CALIB = 0,
  INVALID_1,
  INVALID_2,
  INVALID_3,
  INVALID_4,
  INTERNAL_VCCPINT,
  INTERNAL_VCCPAUX,
  INTERNAL_VCC_DDR,
  INTERNAL_TEMP,
  INTERNAL_VCCINT,
  INTERNAL_VCCAUX,
  VP_VN,
  INTERNAL_VREFP,
  INTERNAL_VREFN,
  INTERNAL_VCCBRAM,
  INVALID_5,
  VAUX_0,
  VAUX_1,
  VAUX_2,
  VAUX_3,
  VAUX_4,
  VAUX_5,
  VAUX_6,
  VAUX_7,
  VAUX_8,
  VAUX_9,
  VAUX_10,
  VAUX_11,
  VAUX_12,
  VAUX_13,
  VAUX_14,
  VAUX_15,
  ADC_NBR_OF_CHANNELS,
}Adc_ChannelType;

typedef enum
{
  DEFAULT_FOUR_CYCLES = 0,
  TEN_CYCLES
}ArcAdc_ChannelSettlingTimeType;

typedef enum
{
    DEFAULT_UNIPOLAR = 0,
    BIPOLAR
}ArcAdc_ChannelAnalogInputModeType;

/* Std-type, supplier defined */
// XADC peripheral supports prescaler value of 0-255.
// A prescaler value of 0, 1 or 2 will equal to a division factor of 2.
typedef uint8_t Adc_PrescaleType;
// Base address to the LOGIC IP CORE AXI interface
typedef uint32_t Adc_IpCoreBaseAddr;

typedef uint16_t Adc_StreamNumSampleType;

/* Non-standard type */
typedef struct
{
  // NOT SUPPORTED Adc_ClockSourceType clockSource;
    uint8_t             hwUnitId;
    Adc_PrescaleType    adcPrescale;
    Adc_IpCoreBaseAddr  adcIpCorebaseAdrr;
}Adc_HWConfigurationType;

/* Std-type, supplier defined */
typedef Adc_PrescaleType Adc_ConversionTimeType;

/* Channel definitions, std container */
typedef struct
{
  // NOT SUPPORTED Adc_ConversionTimeType adcChannelConvTime;
  // NOT SUPPORTED Adc_VoltageSourceType  adcChannelRefVoltSrcLow;
  // NOT SUPPORTED Adc_VoltageSourceType  adcChannelRefVoltSrcHigh;
  // NOT SUPPORTED Adc_ResolutionType     adcChannelResolution;
  // NOT SUPPORTED Adc_CalibrationType    adcChannelCalibrationEnable;
    Adc_ChannelType adcChannel;
    ArcAdc_ChannelSettlingTimeType adcChannelSettlingTime;
    ArcAdc_ChannelAnalogInputModeType adcChannelInputMode;
} Adc_ChannelConfigurationType;

typedef struct
{
  uint8 				    notifictionEnable;
  Adc_ValueGroupType        *resultBufferPtr;
  Adc_StatusType 		    groupStatus;
  Adc_StreamNumSampleType   currSampleCount;   /* Samples per group counter. =0 until first round of conversions complete
                                                  (all channels in group). Then =1 until second round of conversions complete and so on.*/
  Adc_ValueGroupType        *currResultBufPtr;   /* Streaming sample current buffer pointer */
} Adc_GroupStatus;


/* Std-type, supplier defined */
typedef enum
{
  ADC_CONV_MODE_DISABLED,
  ADC_CONV_MODE_ONESHOT   = 1,
  ADC_CONV_MODE_CONTINUOUS = 9,
} Adc_GroupConvModeType;

/** Not supported. */
typedef uint16_t Adc_StreamNumSampleType;

/* Implementation specific */
typedef struct
{
  Adc_GroupAccessModeType      accessMode;
  Adc_GroupConvModeType        conversionMode;
  Adc_TriggerSourceType        triggerSrc;
  // NOT SUPPORTED  Adc_HwTriggerSignalType      hwTriggerSignal;
  // NOT SUPPORTED  Adc_HwTriggerTimerType       hwTriggerTimer;
  void                         (*groupCallback)(void);
  Adc_StreamBufferModeType     streamBufferMode;
  Adc_StreamNumSampleType      streamNumSamples;
  const Adc_ChannelType        *channelList;
  Adc_ValueGroupType           *resultBuffer;
  // NOT SUPPORTED  Adc_CommandType              *commandBuffer;
  const uint16_t               numberOfChannels;
  Adc_GroupStatus              *status;
  // NOT SUPPORTED  Dma_ChannelType              dmaCommandChannel;
  // NOT SUPPORTED  Dma_ChannelType              dmaResultChannel;
  // NOT SUPPORTED  const struct tcd_t *		   groupDMACommands;
  // NOT SUPPORTED  const struct tcd_t *		   groupDMAResults;
} Adc_GroupDefType;

/* Non-standard type */
typedef struct
{
  const Adc_HWConfigurationType*      hwConfigPtr;
  const Adc_ChannelConfigurationType* channelConfigPtr;
  const uint16_t                      nbrOfChannels;
  const Adc_GroupDefType*             groupConfigPtr;
  const uint16_t                      nbrOfGroups;
} Adc_ConfigType;

extern const Adc_ConfigType Adc_GlobalConfig [];

#endif

#endif /* ADC_CONFIGTYPES_H_ */

/** @}*/
/** @}*/
