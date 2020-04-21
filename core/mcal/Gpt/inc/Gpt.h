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

/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|PPC|MPC5645S|MPC5646B|MPC5607B|MPC5748G|MPC5747C|MPC5744P|TMS570|RH850F1H|JACINTO5|JACINTO6|STM32 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

/** @file Gpt.h
 *
 *  The Gpt driver provides API for Starting and stopping hardware timers, Getting timer values, Controlling time triggered interrupt notifications and Controlling time triggered wakeup interrupts.
 *  This file will contain the Gpt Type definitions and API definitions
 */

 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  @{
  */

 /** \addtogroup Gpt
  *  This is the Mcal Gpt Group
  *  @{
  */

#ifndef GPT_H_
#define GPT_H_

/*------------------------------------------ Not Supported Requirements -------------------------------------------*/

/** !req SWS_Gpt_00261 - Gpt_Irq.c shall include Gpt.h for the prototype declaration of the notification functions. */

/** !req SWS_Gpt_00389 - Gpt_PredefTimerType */

/** !req SWS_Gpt_00390 - The function Gpt_Init shall start all enabled GPT Predef Timers at value “0”. */

/** !req SWS_Gpt_00392 - If the parameter Mode has the value GPT_MODE_NORMAL: If the driver is in “sleep mode”, the function Gpt_SetMode shall restart all enabled GPT Predef Timers at value “0”. */

/* GPT PreDef not supported */
/** !req SWS_Gpt_00394 - Gpt_GetPredefTimerValue */
/** !req SWS_Gpt_00395 - The function Gpt_GetPredefTimerValue shall return the current value of the GPT Predef Timer passed by PredefTimer.  */
/** !req SWS_Gpt_00396 - If the timer value of the function Gpt_GetPredefTimerValue is less than 32 bit (16bit or 24bit timer), the upper bits shall be filled with zero. */
/** !req SWS_Gpt_00397 - The function Gpt_GetPredefTimerValue shall be fully reentrant, this means even for the same GPT Predef Timer.  */
/** !req SWS_Gpt_00398 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_GetPredefTimerValue shall raise the error GPT_E_UNINIT. Otherwise (if default error detection is not enabled), it shall return E_NOT_OK. */
/** !req SWS_Gpt_00399 - If default error detection for the GPT module is enabled: If the parameter PredefTimer is invalid, the function Gpt_GetPredefTimerValue shall raise the development error GPT_E_PARAM_PREDEF_TIMER. Otherwise (if default error detection is not enabled), it shall return E_NOT_OK. */
/** !req SWS_Gpt_00400 - If default error detection for the GPT module is enabled: If the GPT Predef Timer passed by the parameter PredefTimer is not enabled, the function Gpt_GetPredefTimerValue shall raise the development error GPT_E_PARAM_PREDEF_TIMER. Otherwise (if default error detection is not enabled), it shall return E_NOT_OK. */
/** !req SWS_Gpt_00401 - If default error detection for the GPT module is enabled: If the driver is in "sleep mode", the function Gpt_GetPredefTimerValue shall raise the error GPT_E_MODE. Otherwise (if default error detection is not enabled), it shall return E_NOT_OK.  */
/** !req SWS_Gpt_00402 - If the GPT driver is not initialized, in “sleep mode” or the GPT Predef Timer is not enabled, the function Gpt_GetPredefTimerValue shall return E_NOT_OK. */
/** !req SWS_Gpt_00403 - If default error detection for the GPT module is enabled: If the parameter TimeValuePtr is a null pointer, the function Gpt_GetPredefTimerValue shall raise the development error GPT_E_PARAM_POINTER. Otherwise (if default error detection is not enabled), it shall return E_NOT_OK. */

/* Not supported for TMS570 */
/** !req:TMS570 4.3.0/SWS_Gpt_00288 - Gpt_SetMode */
/** !req:TMS570 4.3.0/SWS_Gpt_00289 - Gpt_DisableWakeup */
/** !req:TMS570 4.3.0/SWS_Gpt_00290 - Gpt_EnableWakeup */
/** !req:TMS570 4.3.0/SWS_Gpt_00328 - Gpt_CheckWakeup */

/* Not supported in Gpt module */
/** !req SWS_Gpt_00353 - If the register can affect several hardware modules and if it is an I/O register it shall be initialized by the PORT driver.  */
/** !req SWS_Gpt_00354 -  If the register can affect several hardware modules and if it is not an I/O register it shall be initialized by the MCU driver. */
/** !req SWS_Gpt_00355 -  One-time writable registers that require initialization directly after reset shall be initialized by the startup code. */
/** !req SWS_Gpt_00356 -  All other registers shall be initialized by the startup code. */
/*------------------------------------------ General Implemented Requirements -------------------------------------------*/

/** @req 4.1.2|4.3.0/SWS_Gpt_00357 - Gpt_ConfigType . Type : Structure  */


/* ----------------------------[includes]------------------------------------*/

/** @req 4.1.2|4.3.0/SWS_Gpt_00278 - Imported types (EcuM and STd_Types) */

#include "Std_Types.h"

/* GPT WAKEUP FUNCTIONALITY is NOT SUPPORTED in TMS570. But other architectures support this functionality.
 * So EcuM_Cbk should be included if WAKEUP FUNCTIONALITY is enabled.
 * The config needs EcuM_WakeupSourceType from EcuM */

#if ( GPT_WAKEUP_FUNCTIONALITY_API == STD_ON )
#include "EcuM_Cbk.h"
#endif

/**
  * @name    Module ID and Version Number
  * @{
  */

#define GPT_VENDOR_ID                       60u  /**< @brief Gpt Vendor Id*/
#define GPT_MODULE_ID                       100u /**< @brief Gpt Module Id*/

#if defined(CFG_TMS570LS12X)

#define GPT_SW_MAJOR_VERSION                4u /**< @brief Gpt Module Software Major Version Number for TMS570 */
#define GPT_SW_MINOR_VERSION                0u /**< @brief Gpt Module Software Minor Version Number for TMS570 */
#define GPT_SW_PATCH_VERSION                0u /**< @brief Gpt Module Software Patch Version Number for TMS570 */

#define GPT_AR_RELEASE_MAJOR_VERSION        4u /**< @brief Gpt Module Autosar Major Version Number for TMS570 */
#define GPT_AR_RELEASE_MINOR_VERSION        3u /**< @brief Gpt Module Autosar Minor Version Number for TMS570 */
#define GPT_AR_RELEASE_PATCH_VERSION        0u /**< @brief Gpt Module Autosar Patch Version Number for TMS570 */

#else

/** @cond DOXYGEN_EXCLUDE */

#define GPT_SW_MAJOR_VERSION   3u /**< @brief Gpt Module Software Major Version Number for other architecture */
#define GPT_SW_MINOR_VERSION   0u /**< @brief Gpt Module Software Minor Version Number for other architecture */
#define GPT_SW_PATCH_VERSION   0u /**< @brief Gpt Module Software Patch Version Number for other architecture */

#define GPT_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Gpt Module Autosar Major Version Number for other architecture */
#define GPT_AR_RELEASE_MINOR_VERSION   1u /**< @brief Gpt Module Autosar Minor Version Number for other architecture */
#define GPT_AR_RELEASE_PATCH_VERSION   2u /**< @brief Gpt Module Software Patch Version Number for other architecture */

/** @endcond */
#endif

/** @} */

#if defined(USE_KERNEL)
#include "Os.h"

/* Assign application according to define */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS) && !defined(GPT_ARC_ISR_APP)
#if ((OS_SC3 == STD_ON) || (OS_SC4 == STD_ON))
#error You must define GPT_ARC_ISR_APP
#else
#define GPT_ARC_ISR_APP             0
#endif
#endif
#endif

/* ----------------------------[Service / API Id]-----------------*/

/**
  * @name    Service Id
  * @{
  */
#define GPT_GETVERSIONINFO_SERVICE_ID       0x00u
#define GPT_INIT_SERVICE_ID                 0x01u
#define GPT_DEINIT_SERVICE_ID               0x02u
#define GPT_GETTIMEELAPSED_SERVICE_ID       0x03u
#define GPT_GETTIMEREMAINING_SERVICE_ID     0x04u
#define GPT_STARTTIMER_SERVICE_ID           0x05u
#define GPT_STOPTIMER_SERVICE_ID            0x06u
#define GPT_ENABLENOTIFICATION_SERVICE_ID   0x07u
#define GPT_DISABLENOTIFICATION_SERVICE_ID  0x08u
#define GPT_SETMODE_SERVICE_ID              0x09u
#define GPT_DISABLEWAKEUP_SERVICE_ID        0x0au
#define GPT_ENABLEWAKEUP_SERVICE_ID         0x0bu
#define GPT_CHECKWAKEUP_SERVICE_ID          0x0cu
/** @} */

/* ----------------------------[Error Code and Id]-----------------*/

/**
  * @name    Error Code - AUTOSAR
  * @{
  */

/** @req 4.3.0/SWS_Gpt_00345 - API service called without module initialization*/
#define GPT_E_UNINIT                        0x0Au /**< @brief Error Id if API is called without Gpt module initialization, Value : 0x0A  */

/** @req 4.3.0/SWS_Gpt_00346 - API service called when timer channel is still busy (running)*/
#define GPT_E_BUSY                          0x0Bu /**< @brief Error Id if API is called when the timer is running, Value : 0x0B  */

/** @req 4.3.0/SWS_Gpt_00387 - API service called when driver is in wrong mode*/
#define GPT_E_MODE                          0x0Cu /**< @brief Error Id if API is called when the driver is in wrong mode, Value : 0x0C  */

/** @req 4.3.0/SWS_Gpt_00347 - API service for initialization called when already initialized*/
#define GPT_E_ALREADY_INITIALIZED           0x0Du /**< @brief Error Id if Gpt_Ínit is called when Gpt is already initialized , Value : 0x0D */

/** @req 4.3.0/SWS_Gpt_00404 - API error return code: Init function failed */
#define GPT_E_INIT_FAILED                   0x0Eu /**< @brief Error Id if API is called when Init failed, Value : 0x0E */

/** @req 4.3.0/SWS_Gpt_00348 - API parameter checking: invalid channel */
#define GPT_E_PARAM_CHANNEL                 0x14u /**< @brief Error Id if API is called when the channel provided is invalid, Value : 0x14 */

/** @req 4.3.0/SWS_Gpt_00349 - API parameter checking: invalid value */
#define GPT_E_PARAM_VALUE                   0x15u /**< @brief Error Id if API is called when the value provided is invalid, Value : 0x15 */

/** @req 4.3.0/SWS_Gpt_00350 - API parameter checking: invalid pointer */
#define GPT_E_PARAM_POINTER                 0x16u /**< @brief Error Id if API is called when the pointer provided is invalid, Value : 0x16 */

/** @req 4.3.0/SWS_Gpt_00388 - API parameter checking: invalid Predef Timer */
#define GPT_E_PARAM_PREDEF_TIMER            0x17u /**< @brief Error Id if API is called when the Predef timer provided is invalid, Value : 0x17 */

/** @req 4.3.0/SWS_Gpt_00351 - API parameter checking: invalid mode*/
#define GPT_E_PARAM_MODE                    0x1Fu /**< @brief Error Id if API is called when the mode provided is invalid, Value : 0x1F */

/** @} */

/* ----------------------------[Type Definitions]-----------------*/

/* Channel id type */
/** @req 4.1.2|4.3.0/SWS_Gpt_00358 - Gpt_ChannelType */

/**
 *   @brief Numeric ID of a GPT channel.
 */
typedef uint8 Gpt_ChannelType;


/* Channel time value type */
/** @req 4.1.2|4.3.0/SWS_Gpt_00359 - Gpt_ValueType*/

#if defined(CFG_ZYNQ) || defined(CFG_STM32)
typedef uint16 Gpt_ValueType;
#else
/**
 *   @brief Type for reading and setting the timer values (in number of ticks).
 */
typedef uint32 Gpt_ValueType;
#endif

/* Channel behavior */

/** @req 4.1.2|4.3.0/SWS_Gpt_00360 - Gpt_ModeType*/

/**
*   @brief Modes of the GPT driver.
*/
typedef enum {
  GPT_MODE_NORMAL=0,     /**< @brief Normal operation mode of the Gpt, Value : 0x00 */
  GPT_MODE_SLEEP,        /**< @brief Operation for reduced power operation mode. In sleep mode only wakeup capable channels are available., Value : 0x01 */
  GPT_MODE_UNINTIALIZED  /**< @brief Gpt Uninitialized */
} Gpt_ModeType;

/**
*   @brief Mode of the Gpt Channel. Either ONESHOT or CONTINOUS.
*/
typedef enum {
  GPT_CH_MODE_ONESHOT=0, /**< @brief Gpt channel as One shot mode , Value : 0x00 */
  GPT_CH_MODE_CONTINUOUS /**< @brief Gpt channel as Continuous mode */
} Gpt_ChannelMode;

/* Gpt Configuration file uses Gpt type definition and also the release version informations.
 * So Gpt_Cfg.h should be included after all the type definitions */

#include "Gpt_Cfg.h"		/* @req 4.0.3/GPT259 - Gpt.h shall include Gpt_Cfg.h for the API pre-compiler switches. */

/* ----------------------------[Public API's]-----------------*/

/** @req 4.1.2|4.3.0/SWS_Gpt_00279 - Gpt_GetVersionInfo */

#if (GPT_VERSION_INFO_API == STD_ON)

/**
 * @brief API that returns the version information of this module.
 * @param[in] VersionInfoPtr - Pointer that holds the version info.
 * @note Reentrant
 */
void Gpt_GetVersionInfo(Std_VersionInfoType* VersionInfoPtr);
#endif

/** @req 4.1.2|4.3.0/SWS_Gpt_00280 - Gpt_Init */

/**
 * @brief Initialize the Gpt module.
 * @param[in] ConfigPtr - Pointer that holds the configuration of the pins that should be configured.
 * @note Non-Reentrant
 */
void Gpt_Init( const Gpt_ConfigType * ConfigPtr);

/** @req 4.1.2|4.3.0/SWS_Gpt_00281 - Gpt_DeInit */
/** @req 4.1.2|4.3.0/SWS_Gpt_00194 - The function Gpt_DeInit shall be pre compile time configurable On/Off by the configuration parameter: GptDeInitApi.*/

#if (GPT_DEINIT_API == STD_ON)

/**
 * @brief De-Initialize the hardware used by the GPT driver.
 * @note Non-Reentrant
 */
void Gpt_DeInit(void);
#endif

/** @req 4.1.2|4.3.0/SWS_Gpt_00282 - Gpt_GetTimeElapsed */
/** @req 4.1.2|4.3.0/SWS_Gpt_00195 - The function Gpt_GetTimeElapsed shall be pre compile time configurable On/Off by the configuration parameter: GptTimeElapsedApi. */

#if ( GPT_TIME_ELAPSED_API == STD_ON )

/**
 * @brief API that returns the time already elapsed.
 * @note Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ValueType - Elapsed timer value (in number of ticks).
 * @retval 0 ... Elapsed Time
 */
Gpt_ValueType Gpt_GetTimeElapsed(Gpt_ChannelType Channel);
#endif

/** @req 4.1.2|4.3.0/SWS_Gpt_00283 - Gpt_GetTimeRemaining*/
/** @req 4.1.2|4.3.0/SWS_Gpt_00196 - The function Gpt_GetTimeRemaining shall be pre compile time configurable On/Off by the configuration parameter: GptTimeRemainingApi. */

#if ( GPT_TIME_REMAINING_API == STD_ON )

/**
 * @brief API that returns the time remaining until the target time is reached.
 * @note Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ValueType - Remaining timer value (in number of ticks).
 * @retval 0 ... Remaining time
 */
Gpt_ValueType Gpt_GetTimeRemaining( Gpt_ChannelType Channel );
#endif


/** @req 4.1.2|4.3.0/SWS_Gpt_00284 - Gpt_StartTimer*/

/**
 * @brief API used to start a timer channel.
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @param[in] Value   - Target time in number of ticks.
 */
void Gpt_StartTimer(Gpt_ChannelType Channel, Gpt_ValueType Value);

/** @req 4.1.2|4.3.0/SWS_Gpt_00285 - Gpt_StopTimer*/

/**
 * @brief API used to stop a timer channel.
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_StopTimer(Gpt_ChannelType Channel);

/** @req 4.1.2|4.3.0/SWS_Gpt_00199 - The function Gpt_EnableNotification shall be pre compile time configurable On/Off by the configuration parameter:
GptEnableDisableNotificationApi.*/

/** @req 4.1.2|4.3.0/SWS_Gpt_00200 - The function Gpt_DisableNotification shall be pre compile time configurable On/Off by the configuration parameter:
GptEnableDisableNotificationApi.*/

#if ( GPT_ENABLE_DISABLE_NOTIFICATION_API == STD_ON )

/** @req 4.1.2|4.3.0/SWS_Gpt_00286 - Gpt_EnableNotification */

/**
 * @brief API that enables the interrupt notification for a channel (relevant in normal mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_EnableNotification( Gpt_ChannelType Channel);

/** @req 4.1.2|4.3.0/SWS_Gpt_00287 -  Gpt_DisableNotification */

/**
 * @brief API that disables the interrupt notification for a channel (relevant in normal mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_DisableNotification( Gpt_ChannelType Channel);
#endif

/* GPT_WAKEUP_FUNCTIONALITY_API is not available in TMS570.
 * This functionality is supported only in ZYNQ and JACINTO */

#if ( GPT_WAKEUP_FUNCTIONALITY_API == STD_ON ) && (defined(CFG_ZYNQ) || defined(CFG_JAC5) ||  defined(CFG_JAC5E) || defined(CFG_JAC6))
/** @req:ZYNQ SWS_Gpt_00288 - Gpt_SetMode  */

/** @req:ZYNQ SWS_Gpt_00201 - The function Gpt_SetMode shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi.*/

/** @req:ZYNQ SWS_Gpt_00255 - The function Gpt_SetMode is only available if the configuration parameter GptReportWakeupSource is enabled. */

#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON )

/**
 * @brief API that sets the operation mode of the GPT.
 * @note  Non-Reentrant
 * @param[in] Mode - GPT_MODE_NORMAL or GPT_MODE_SLEEP.
 */
void Gpt_SetMode( Gpt_ModeType Mode );


/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00289 - Gpt_DisableWakeup */
/** @req:ZYNQ SWS_Gpt_00202 - The function Gpt_DisableWakeup shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi. */

/**
 * @brief API that disables the wakeup interrupt of a channel (relevant in sleep mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_DisableWakeup( Gpt_ChannelType Channel );

/** @req:ZYNQ SWS_Gpt_00290 - Gpt_EnableWakeup*/
/** @req:ZYNQ SWS_Gpt_00203 - The function Gpt_EnableWakeup shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi. */

/**
 * @brief API that enables the wakeup interrupt of a channel (relevant in sleep mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_EnableWakeup( Gpt_ChannelType Channel );


/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00328 - Gpt_CheckWakeup */
/** @req:ZYNQ SWS_Gpt_00324 - The function Gpt_CheckWakeup shall be pre compile time configurable On/Off by the configuration parameter:
GptWakeupFunctionalityApi. */

/**
 * @brief API that checks if a wakeup capable GPT channel is the source for a wakeup event and calls the ECU state manager service EcuM_SetWakeupEvent in case of a valid GPT channel wakeup event.
 * @note  Reentrant
 * @param[in] WakeupSource - Information on wakeup source to be checked. The associated GPT channel can be determined from configuration data..
 */
void Gpt_CheckWakeup( EcuM_WakeupSourceType WakeupSource );
#endif

#endif

/** @req 4.1.2|4.3.0/SWS_Gpt_00292 - Gpt_Notification_<channel>. This prototypes are for the notification callback function and shall be implemented by the user.  */

/**
 * @brief Gpt Notification for Channel 0
 */
extern void Gpt_Notification_0( void );

/**
 * @brief Gpt Notification for Channel 1
 */
extern void Gpt_Notification_1( void );

/**
 * @brief Gpt Notification for Channel 2
 */
extern void Gpt_Notification_2( void );

/**
 * @brief Gpt Notification for Channel 3
 */
extern void Gpt_Notification_3( void );

/* Arccore Internal defined functions */

/**
 * @brief Get the frequency in Hz for a particular channel. Used to calculate how long a "tick" is.
 * Must not be called before Gpt_Init (the value will not be valid).
 *
 * @param Channel
 * @return The frequency in Hz
 */
uint32 Gpt_Arc_GetClock(Gpt_ChannelType Channel);


#endif /*GPT_H_*/
/** @}*/
/** @}*/
