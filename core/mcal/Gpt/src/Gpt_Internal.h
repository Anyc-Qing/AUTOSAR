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

/** @tagSettings DEFAULT_ARCHITECTURE=RH850F1H|TMS570|JACINTO5|JACINTO6 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

#ifndef GPT_INTERNAL_H_
#define GPT_INTERNAL_H_

/** @file Gpt_Internal.h
 *
 *  This file contains the hardware specific API declaration, Gpt_ChannelStateType and Gpt_GlobalType variable definition.
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
#if !defined(GPT_ARC_HW_UNIT_CNT)

#if defined(CFG_TMS570)
#define GPT_MAXIMUM_CHANNELS        4u /**< @brief Maximum number of Gpt Channels for TMS570*/
#elif defined(CFG_RH850F1H)
#define GPT_MAXIMUM_CHANNELS        4u /**< @brief Maximum number of Gpt Channels for RH850F1H*/
#endif

/* New style, define it */
/**
 * @brief Count of the hardware unit available for Gpt
 */
#define GPT_ARC_HW_UNIT_CNT			GPT_MAXIMUM_CHANNELS
#endif

#if !defined(GPT_ARC_LOG_UNIT_CNT)
/**
 * @brief Count of the channel available for Gpt
 */
#define GPT_ARC_LOG_UNIT_CNT	GPT_CHANNEL_CNT
#endif

/*===========================================================================*/
/* Module macros.                                                            */
/*===========================================================================*/


/**
  * @brief   Get the configuration of the channel
  * @param[in] ch - Numeric ID of the channel
  */
#define GET_CONFIG(ch)			(*Gpt_Global.config)[ch]

/**
 * Type that holds all state of the Gpt channel
 */
typedef enum {
    GPT_STATE_STOPPED = 0,  /**< @brief  State of the Gpt channel - Stopped */           //!< GPT_STATE_STOPPED
    GPT_STATE_RUNNING,      /**< @brief  State of the Gpt channel - Running */           //!< GPT_STATE_RUNNING
    GPT_STATE_EXPIRED,      /**< @brief  State of the Gpt channel - Expired */           //!< GPT_STATE_EXPIRED
    GPT_STATE_INITIALIZED   /**< @brief  State of the Gpt channel - Already Initialized*///!< GPT_STATE_INITIALIZED
} Gpt_ChannelStateType;

/**
 * Type that holds all global data for Gpt
 */
typedef struct {

	boolean initRun;   /**< @brief Status of the Gpt module. It will be assigned TRUE when the Gpt module is initialized. */
    Gpt_ModeType mode; /**< @brief Gpt driver mode */
    const Gpt_ConfigType (*config)[GPT_ARC_LOG_UNIT_CNT]; /**< @brief  Gpt driver configuration */

#if ( GPT_WAKEUP_FUNCTIONALITY_API == STD_ON )
    uint8 wakeupEnabled; /**< @brief Wakeup Enable available only if WAKEUP FUNCTIONALITY is supported */
#endif

    uint8 channelMap[GPT_ARC_HW_UNIT_CNT];           /**< @brief Maps the a physical channel id to configured channel index  */
    uint8 channelToHwChannel[GPT_ARC_LOG_UNIT_CNT];  /**< @brief Maps the a channel id to HW channel */
    Gpt_ChannelStateType Gpt_ChannelState[GPT_ARC_LOG_UNIT_CNT]; /**< @brief State of the Gpt Channel */
    Gpt_ValueType Gpt_ChannelTargetValue[GPT_ARC_LOG_UNIT_CNT];  /**< @brief Target value of the Gpt Channel */
    boolean Gpt_NotifEnable[GPT_ARC_LOG_UNIT_CNT];   /**< @brief Notification enable for the Gpt Channel */
    boolean Gpt_WakUpEnable[GPT_ARC_LOG_UNIT_CNT];   /**< @brief Wakeup enable for the Gpt Channel */
} Gpt_GlobalType;

/**
 * @brief Variable of Gpt_GlobalType. This vairable holds all the parameters required for configuring the Gpt channel.
 * @note Gpt_Global variable is used by TMS570, JACINTO and RH850F1H architectures. It is used in  HwChannelToChannel and ChannelToHwChannel functions.
 * These functions are called in the respective hardware implementation file.
 */

extern Gpt_GlobalType Gpt_Global;

/**
 * Type that holds Gpt hardware channel.
 * RANGE : uint8
 */
typedef uint8 Gpt_Hw_ChannelType;

/**
 * @brief This inline functions is used to map Hardware channel to channel specified.
 * @param[in] ch - Channel for which the Hardware channel should be mapped.
 * @return Gpt_ChannelType - Numeric ID of a GPT channel.
 */
static inline Gpt_ChannelType HwChannelToChannel(Gpt_Hw_ChannelType ch) {
    return Gpt_Global.channelMap[ch];
}

/**
 * @brief This inline functions is used to map channel specified to hardware channel .
 * @param[in] ch - Channel for which the Hardware channel should be mapped.
 * @return Gpt_Hw_ChannelType - Numeric ID of a GPT hardware channel.
 */
static inline Gpt_Hw_ChannelType ChannelToHwChannel(Gpt_ChannelType ch) {
    return Gpt_Global.channelToHwChannel[ch];
}


/**
 * @brief This API will have the hardware specific implementation of Gpt module Initialization.
 * @param[in] ConfigPtr - Pointer that holds the configuration of the pins that should be configured.
 * @note Non-Reentrant
 */
void Gpt_Hw_Init(const Gpt_ConfigType* ConfigPtr);

/**
 * @brief This API will have the hardware specific implementation to De-Initialize Gpt module.
 * @note Non-Reentrant
 */
void Gpt_Hw_DeInit(void);

/**
 * @brief This API contains hardware specific implementation of calculating the time already elapsed.
 * @note Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ValueType - Elapsed timer value (in number of ticks).
 * @retval 0 ... Elapsed Time
 */
Gpt_ValueType Gpt_Hw_GetTimeElapsed(Gpt_Hw_ChannelType Channel);

/**
 * @brief This API contains hardware specific implementation of calculating remaining time.
 * @note Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ValueType - Elapsed timer value (in number of ticks).
 * @retval 0 ... Elapsed Time
 */
Gpt_ValueType Gpt_Hw_GetTimeRemaining(Gpt_Hw_ChannelType Channel);

/**
 * @brief API used to load the registers with required value in ticks and starts timer.
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @param[in] Value   - Target time in number of ticks.
 */
void Gpt_Hw_StartTimer(Gpt_Hw_ChannelType Channel, Gpt_ValueType Value);

/**
 * @brief This API has the hardware specific implementation to stop a timer channel and  disable (and if necessary clears) interrupts.
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_Hw_StopTimer(Gpt_Hw_ChannelType Channel);

/**
 * @brief API that contains hardware specific implementation to enable interrupt notification for a channel (relevant in normal mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_Hw_EnableNotification(Gpt_Hw_ChannelType Channel);

/**
 * @brief API that contains hardware specific implementation to disable interrupt notification for a channel (relevant in normal mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_Hw_DisableNotification(Gpt_Hw_ChannelType Channel);

/**
 * @brief API that contains hardware specific implementation to set the operation mode of the GPT.
 * @note  Non-Reentrant
 * @param[in] Mode - GPT_MODE_NORMAL or GPT_MODE_SLEEP.
 */
void Gpt_Hw_SetMode(Gpt_ModeType Mode);

/**
 * @brief API that contains hardware specific implementation to disable the wakeup interrupt of a channel (relevant in sleep mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_Hw_DisableWakeup(Gpt_Hw_ChannelType Channel);

/**
 * @brief API that contains hardware specific implementation to enable the wakeup interrupt of a channel (relevant in sleep mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_Hw_EnableWakeup(Gpt_Hw_ChannelType Channel);

#ifdef HOST_TEST

/**
 * @brief Arccore internal function used only for testing.
 * @param Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ChannelStateType
 */
Gpt_ChannelStateType Gpt_Test_GetChannelState(Gpt_ChannelType Channel);
#endif /* HOST_TEST */

#endif /* GPT_INTERNAL_H_ */

/** @}*/
/** @}*/
