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

/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|PPC|TMS570|MPC5607B|MPC5645S|MPC5748G|MPC5646B|MPC5744P|MPC5747C|RH850F1H|STM32|JACINTO5|JACINTO6 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0|4.1.2 */

/** @file Adc.h
 *
 *  The Adc driver initializes and controls the internal Analogue Digital Converter Unit(s) of the microcontroller.
 *  It provides services to start and stop a conversion respectively to enable and disable the trigger source for a conversion.
 *  Furthermore it provides services to enable and disable a notification mechanism and routines to query the status and result of a conversion.
 *  This file will contain the Adc Type definitions and API definitions.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Adc
  *  This is the Mcal Adc Group
  *  @{
  */
#ifndef ADC_H_
#define ADC_H_

/** @req:TMS570|RH850F1H|JACINTO5|JACINTO6|MPC5607B|MPC5645S|PPC|MPC5748G|MPC5646B|MPC5744P|MPC5747C|MPC5777C 4.1.2|4.3.0/SWS_Adc_00267 The file include structure shall be as described in Adc ASR 4.3.0 section 5.1.1.*/
#include "Std_Types.h"


/* ----------------------------[Version Check]----------------- */
/**
  * @name    Module ID and Version Number
  * @{
  */
#define ADC_VENDOR_ID                       60u		/**< @brief Adc Vendor Id  */
#define ADC_MODULE_ID                       123u	/**< @brief Adc Module Id  */

#if defined(CFG_TMS570LS12X) || defined(CFG_MPC5604B) || defined(CFG_MPC5668) || defined(CFG_MPC5744P) || defined(CFG_MPC5777M) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C) || defined(CFG_MPC5645S) || defined(CFG_MPC5646B) || defined(CFG_MPC5643L) || defined(CFG_SPC56XL70) || defined(CFG_MPC5777C)
#define ADC_SW_MAJOR_VERSION   3u /**< @brief Adc Module Software Major Version Number */
#define ADC_SW_MINOR_VERSION   0u /**< @brief Adc Module Software Minor Version Number */
#define ADC_SW_PATCH_VERSION   0u /**< @brief Adc Module Software Patch Version Number */

#define ADC_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Adc Module Autosar Major Version Number */
#define ADC_AR_RELEASE_MINOR_VERSION   3u /**< @brief Adc Module Autosar Minor Version Number */
#define ADC_AR_RELEASE_PATCH_VERSION   0u /**< @brief Adc Module Autosar Patch Version Number */

#else
/** @cond DOXYGEN_EXCLUDE */
#define ADC_SW_MAJOR_VERSION   2u /**< @brief Adc Module Software Major Version Number for other architectures */
#define ADC_SW_MINOR_VERSION   0u /**< @brief Adc Module Software Minor Version Number for other architectures */
#define ADC_SW_PATCH_VERSION   0u /**< @brief Adc Module Software Patch Version Number for other architectures */

#define ADC_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Adc Module Autosar Major Version Number for other architectures */
#define ADC_AR_RELEASE_MINOR_VERSION   1u /**< @brief Adc Module Autosar Minor Version Number for other architectures */
#define ADC_AR_RELEASE_PATCH_VERSION   2u /**< @brief Adc Module Autosar Patch Version Number for other architectures */
/** @endcond */
#endif

/** @} */

#if defined(USE_KERNEL)
#include "Os.h"

/* Assign application according to define */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS) && !defined(ADC_ARC_ISR_APP)
#if ((OS_SC3 == STD_ON) || (OS_SC4 == STD_ON))
#error You must define ADC_ARC_ISR_APP
#else
#define ADC_ARC_ISR_APP             0
#endif
#endif

#endif

/* ----------------------------[Public Macros]-----------------*/
/**
  * @name    Error Code - AUTOSAR
  * @{
  */
#define  ADC_E_UNINIT               0x0Au
#define  ADC_E_BUSY                 0x0Bu
#define  ADC_E_IDLE                 0x0Cu
#define  ADC_E_ALREADY_INITIALIZED  0x0Du
#define  ADC_E_PARAM_CONFIG         0x0Eu
#define  ADC_E_PARAM_POINTER        0x14u
#define  ADC_E_PARAM_GROUP          0x15u
#define  ADC_E_WRONG_CONV_MODE      0x16u
#define  ADC_E_WRONG_TRIGG_SRC      0x17u
#define  ADC_E_NOTIF_CAPABILITY     0x18u
#define  ADC_E_BUFFER_UNINIT        0x19u

/** @} */
/**
  * @name    Service Id
  * @{
  */
#define   ADC_INIT_ID                           0x00u
#define   ADC_DEINIT_ID                         0x01u
#define   ADC_STARTGROUPCONVERSION_ID           0x02u
#define   ADC_STOPGROUPCONVERSION_ID            0x03u
#define   ADC_READGROUP_ID                      0x04u
#define   ADC_ENABLEHARDWARETRIGGER_ID          0x05u
#define   ADC_DISABLEHARDWARETRIGGER_ID         0x06u
#define   ADC_ENABLEGROUPNOTIFICATION_ID        0x07u
#define   ADC_DISABLEGROUPNOTIFICATION_ID       0x08u
#define   ADC_GETGROUPSTATUS_ID                 0x09u
#define   ADC_GETVERSIONINFO_ID                 0x0Au
#define   ADC_GETSTREAMLASTPOINTER_ID           0x0Bu
#define   ADC_SETUPRESULTBUFFER_ID              0x0Cu

/** @} */


/* ----------------------------[Public Types]------------------*/
/** @req 4.1.2|4.3.0/SWS_Adc_00513 Adc_StatusType - enum */

/** @enum Adc_StatusType
*   @brief   AUTOSAR Specified Group status Type Definition
*   Current status of the conversion of the requested ADC Channel group.
*/
typedef enum {
  ADC_IDLE,
  ADC_BUSY,
  ADC_COMPLETED,
  ADC_STREAM_COMPLETED,
}Adc_StatusType;
/** @} */

/** @req 4.1.2|4.3.0/SWS_Adc_00528 Adc_GroupAccessModeType - enum*/

/** @enum Adc_GroupAccessModeType
*   @brief   AUTOSAR Specified Group access mode Type Definition
*   Type for configuring the access mode to group conversion results.
*/
typedef enum {
  ADC_ACCESS_MODE_SINGLE,
  ADC_ACCESS_MODE_STREAMING
}Adc_GroupAccessModeType;


/** @req 4.1.2|4.3.0/SWS_Adc_00514 Adc_TriggerSourceType - enum */

/** @enum Adc_TriggerSourceType
*   @brief   AUTOSAR Specified Group trigger source Type Definition
*   Type for configuring the trigger source for an ADC Channel group.
*/
typedef enum {
  ADC_TRIGG_SRC_SW,
  ADC_TRIGG_SRC_HW
}Adc_TriggerSourceType;


/** !req 4.1.2|4.3.0/SWS_Adc_00520 Adc_HwTriggerSignalType - enum */

/** @enum Adc_HwTriggerSignalType	(Not supported)
*   @brief   AUTOSAR Specified Hardware trigger edge Type Definition.
*   Type for configuring on which edge of the hardware trigger signal the driver should react, i.e. start the conversion (only if supported by the ADC hardware).
*/
typedef enum {
  ADC_HW_TRIG_FALLING_EDGE,
  ADC_HW_TRIG_RISING_EDGE,
  ADC_HW_TRIG_BOTH_EDGES,
}Adc_HwTriggerSignalType;


/** @req 4.1.2|4.3.0/SWS_Adc_00519 Adc_StreamBufferModeType - eum */

/** @enum Adc_StreamBufferModeType
*   @brief   AUTOSAR Specified Group Stream buffer mode Type Definition.
*   Type for configuring the streaming access mode buffer type.
*/
typedef enum {
  ADC_STREAM_BUFFER_LINEAR,
  ADC_STREAM_BUFFER_CIRCULAR
}Adc_StreamBufferModeType;


/** @req 4.1.2|4.3.0/SWS_Adc_00505 Adc_ConfigType - structure */
/** @req 4.1.2|4.3.0/SWS_Adc_00506 Adc_ChannelType - uint */
/** @req 4.1.2|4.3.0/SWS_Adc_00507 Adc_GroupType - uint */
/** @req 4.1.2|4.3.0/SWS_Adc_00508 Adc_ValueGroupType - int */
/** @req 4.1.2|4.3.0/SWS_Adc_00509 Adc_PrescaleType - uint */
/** @req:PPC|MPC5607B|RH850F1H|MPC560X|MPC5668|MPC5744P|MPC5777M|MPC5748G|MPC5747C|MPC5746C|MPC5645S|MPC5646B|MPC5643L|SPC56XL70|TMS570|ZYNQ|STM32 4.1.2|4.3.0/SWS_Adc_00510 Adc_ConversionTimeType - uint */
/** @req 4.1.2|4.3.0/SWS_Adc_00515 Adc_GroupConvModeType - Enumeration */
/** @req 4.1.2|4.3.0/SWS_Adc_00517 Adc_GroupDefType */
/** @req 4.1.2|4.3.0/SWS_Adc_00518 Adc_StreamNumSampleType - uint */

/** @req 4.1.2|4.3.0/SWS_Adc_00098 All channels of a group share the same group configuration */
/** @req 4.1.2|4.3.0/SWS_Adc_00099 Symbolic names of channels and groups shall be defined by the configurator*/
/** @req 4.1.2/SWS_Adc_00363 VARIANT-POST-BUILD: Parameters with “Pre-compile time”, “Link time” and “Post-build time” are allowed */
/** @req 4.1.2|4.3.0/SWS_Adc_00364 Imported types: Dem_EventIdType, Dem_EventStatusType, Std_Types, Std_ReturnType, Std_VersionInfoType */
/** @req:PPC|MPC5607B|MPC560X|MPC5668|MPC5744P|MPC5777M|MPC5748G|MPC5747C|MPC5746C|MPC5645S|MPC5646B|MPC5643L|SPC56XL70|TMS570 4.1.2|4.3.0/SWS_Adc_00084 Every group shall have a call-back. */
/** @req:PPC|MPC5607B|MPC560X|MPC5668|MPC5744P|MPC5777M|MPC5748G|MPC5747C|MPC5746C|MPC5645S|MPC5646B|MPC5643L|SPC56XL70|TMS570 4.1.2|4.3.0/SWS_Adc_00085 The call-backs shall be configured as pointers to functions. */
/** @req:PPC|MPC5607B|JACINTO5|RH850F1H|MPC560X|MPC5668|MPC5744P|MPC5777M|MPC5748G|MPC5747C|MPC5746C|MPC5645S|MPC5646B|MPC5643L|SPC56XL70|TMS570 4.1.2|4.3.0/SWS_Adc_00104 Individual notification per channel group. */
/** @req:PPC|MPC5607B|JACINTO5|RH850F1H|MPC560X|MPC5668|MPC5744P|MPC5777M|MPC5748G|MPC5747C|MPC5746C|MPC5645S|MPC5646B|MPC5643L|SPC56XL70 4.1.2|4.3.0/SWS_Adc_00416 No buffering of nofifications when notifications are disabled. */
#include "Adc_Cfg.h"	// Adc_Cfg.h need the types defined as above, so the include has to be put here.


/* ----------------------------[Public Functions]--------------*/
/** @req 4.1.2|4.3.0/SWS_Adc_00365 void Adc_Init( const Adc_ConfigType* ConfigPtr )*/

/** @brief API that initializes the ADC hardware units and driver.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] ConfigPtr - Pointer to configuration set in Variant PB
 */
void Adc_Init(const Adc_ConfigType *ConfigPtr);


/** @req 4.1.2|4.3.0/SWS_Adc_00366 void Adc_DeInit( void ) */
/** @req 4.1.2|4.3.0/SWS_Adc_00228 The function Adc_DeInit shall be pre compile time configurable On/Off by the configuration parameter: AdcDeInitApi.*/
#if (ADC_DEINIT_API == STD_ON)
/** @brief API that returns all ADC HW Units to a state comparable to their power on reset state.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 */
void Adc_DeInit(void);
#endif


/** @req 4.1.2|4.3.0/SWS_Adc_00419 Std_ReturnType Adc_SetupResultBuffer( Adc_GroupType Group, Adc_ValueGroupType* DataBufferPtr ) */
/** @brief API that initializes ADC driver with the group specific result buffer start address where the conversion results will be stored.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         The application has to ensure that the application buffer, where DataBufferPtr points to, can hold all the conversion results of the specified group.
 *         The initialization with Adc_SetupResultBuffer is required after reset, before a group conversion can be started.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 *  @param[in] DataBufferPtr - pointer to result data buffer.
 *  @return Std_ReturnType.
 *  @retval E_OK       result buffer pointer initialized correctly.
 * 	@retval E_NOT_OK   operation failed or development error occured.
 */
Std_ReturnType Adc_SetupResultBuffer (Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr);


/** @req 4.1.2|4.3.0/SWS_Adc_00367 void Adc_StartGroupConversion( Adc_GroupType Group )*/
/** @req 4.1.2|4.3.0/SWS_Adc_00259 The function Adc_StartGroupConversion shall be pre-compile time configurable On/Off by the configuration parameter AdcEnableStartStopGroupApi.*/
#if (ADC_ENABLE_START_STOP_GROUP_API == STD_ON)
/** @brief API that starts the conversion of all channels of the requested ADC Channel group.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Asynchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void	Adc_StartGroupConversion (Adc_GroupType Group);


/** @req 4.1.2|4.3.0/SWS_Adc_00368 void Adc_StopGroupConversion( Adc_GroupType Group )*/
/** @req 4.1.2|4.3.0/SWS_Adc_00260 The function Adc_StopGroupConversion shall be pre compile time configurable On/Off by the configuration parameter AdcEnableStartStopGroupApi.*/

/** @brief API that stops the conversion of all channels of the requested ADC Channel group.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void	Adc_StopGroupConversion (Adc_GroupType Group);
#endif


#if (ADC_READ_GROUP_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Adc_00369 Std_ReturnType Adc_ReadGroup( Adc_GroupType Group, Adc_ValueGroupType* DataBufferPtr )*/
/** @req 4.1.2|4.3.0/SWS_Adc_00359 The function Adc_ReadGroup shall be pre-compile configurable On/Off by the configuration parameter AdcReadGroupApi.*/
/** @req 4.1.2|4.3.0/SWS_Adc_00383 The ADC module shall support result access using the API function Adc_ReadGroup, if the generation of this API function is statically configured. */

/** @brief Reads the group conversion result of the last completed conversion round of the requested group and stores the channel values starting at the DataBufferPtr address.
 * 		   The group channel values are stored in ascending channel number order ( in contrast to the storage layout of the result buffer if streaming access is configured).
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 *  @param[in] DataBufferPtr - ADC results of all channels of the selected group are stored in the data buffer addressed with the pointer.
 *  @return Std_ReturnType.
 *  @retval E_OK       results are available and written to the data buffer.
 * 	@retval E_NOT_OK   no results are available or development error occured.
 */
Std_ReturnType Adc_ReadGroup (Adc_GroupType Group, Adc_ValueGroupType *DataBufferPtr);
#endif


#if !defined(CFG_HC1X)
/** @req 4.1.2|4.3.0/SWS_Adc_00375 Adc_StreamNumSampleType Adc_GetStreamLastPointer( Adc_GroupType Group, Adc_ValueGroupType** PtrToSamplePtr )*/
/** @req 4.1.2|4.3.0/SWS_Adc_00382 The ADC module shall support result access using the API function Adc_GetStreamLastPointer. */

/** @brief Returns the number of valid samples per channel, stored in the result buffer. Reads a pointer, pointing to a position in the group result buffer.
 * 		   With the pointer position, the results of all group channels of the last completed conversion round can be accessed.
 * 		   With the pointer and the return value, all valid group conversion results can be accessed (the user has to take the layout of the result buffer into account).
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 *  @param[out] PtrToSamplePtr - Pointer to result buffer pointer.
 *  @return Adc_StreamNumSampleType.
 *  @retval Number of valid samples per channel.
 */
Adc_StreamNumSampleType Adc_GetStreamLastPointer(Adc_GroupType Group, Adc_ValueGroupType** PtrToSamplePtr);
#endif


#if (ADC_GRP_NOTIF_CAPABILITY == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Adc_00372 void Adc_EnableGroupNotification( Adc_GroupType Group )*/
/** @req 4.1.2|4.3.0/SWS_Adc_00100 The function Adc_EnableGroupNotification shall be pre-compile time configurable On/Off by the configuration parameter AdcGrpNotifCapability.*/

/** @brief API that enables the notification mechanism for the requested ADC Channel group.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void	Adc_EnableGroupNotification (Adc_GroupType Group);


/** @req 4.1.2|4.3.0/SWS_Adc_00373 void Adc_DisableGroupNotification( Adc_GroupType Group )*/
/** @req 4.1.2|4.3.0/SWS_Adc_00101 The function Adc_DisableGroupNotification shall be pre-compile time configurable On/Off by the configuration parameter AdcGrpNotifCapability*/

/** @brief API that disables the notification mechanism for the requested ADC Channel group.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void	Adc_DisableGroupNotification (Adc_GroupType Group);
#endif


/** @req 4.1.2|4.3.0/SWS_Adc_00374 Adc_StatusType Adc_GetGroupStatus( Adc_GroupType Group )*/

/** @brief Returns the conversion status of the requested ADC Channel group.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC channel group.
 *  @return Adc_StatusType.
 *  @retval Conversion status for the requested group.
 */
Adc_StatusType Adc_GetGroupStatus (Adc_GroupType Group);


#if (STD_ON == ADC_VERSION_INFO_API)
/** @req 4.1.2|4.3.0/SWS_Adc_00376 void Adc_GetVersionInfo( Std_VersionInfoType* versioninfo )*/

/** @brief API that returns the version information of this module.
 *         Synchronous
 *  @note  Reentrant
 *  @param[out] VersionInfoPtr - Pointer to where to store the version information of this module.
 */
void Adc_GetVersionInfo (Std_VersionInfoType* VersionInfoPtr);
#endif


#if (STD_ON == ADC_HW_TRIGGER_API)
/* @req:ZYNQ 4.1.2|4.3.0/SWS_Adc_00370 */
/* @req:ZYNQ 4.1.2|4.3.0/SWS_Adc_00265*/

/** @brief Enables the hardware trigger for the requested ADC Channel group. TMS570 does not support it.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void Adc_EnableHardwareTrigger(Adc_GroupType Group);


/* @req:ZYNQ 4.1.2|4.3.0/SWS_Adc_00371 */
/* @req:ZYNQ 4.1.2|4.3.0/SWS_Adc_00266 */

/** @brief Disables the hardware trigger for the requested ADC Channel group. TMS570 does not support it.
 *         Synchronous
 *  @note  Reentrant
 *  @param[in] Group - Numeric ID of requested ADC Channel group.
 */
void Adc_DisableHardwareTrigger(Adc_GroupType Group);
#endif


#endif /*ADC_H_*/
/** @}*/
/** @}*/
