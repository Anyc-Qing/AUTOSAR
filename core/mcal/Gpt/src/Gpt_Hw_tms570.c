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

/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Gpt_Hw_tms570.c
 *
 *  The Gpt_Hw_tms570.c file contains the hardware specific implementation of all the API mentioned in Gpt driver SWS document (ASR 4.3.0)
 *  This file corresponds to TMS570 architecture.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  @{
  */

 /** \addtogroup Gpt
  *  This is the TMS 570 Mcal Gpt Group
  *  @{
  */
/* ----------------------------[includes]------------------------------------*/

/* @req SWS_Gpt_00293 - Gpt.c shall include Gpt.h.*/
#include "Gpt.h"
#include "Gpt_Hw_tms570.h"
#include "Gpt_Internal.h"
#include "Gpt_MemMap.h"

#include "irq_tms570.h"
#if defined(USE_DET)
#include "Det.h"
#endif

/* ISR_INSTALL_ISR2 function is in isr.h. So this file should be included. */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
#include "isr.h"
#endif

/* Gpt module use RTI module in the hardware. Gpt channel use RTI timer. So this file should be included */
#include "timer_rti.h"

/* ----------------------------[private define]------------------------------*/

#if !defined(GPT_ISR_PRIORITY)
/**
 * @brief Priority for interrupt for Gpt
 */
#define GPT_ISR_PRIORITY            4u
#endif

/**
 * @brief Value used for Gpt channel mask
 */
#define GPT_COMP_CTRL_COMPSEL_JUMP	4u

/**
 * @brief Gpt Counter value
 */
#define GPT_COUNTER_BIT         	2uL

/* ----------------------------[private macro]-------------------------------*/

/**
 * @brief Value denoting the start of the timer for a particular Gpt channel
 */
#define MEM_START(_ch)				(_ch * 2uL)

/**
 * @brief Value denoting the target of the timer for a particular Gpt channel
 */
#define MEM_TARGET(_ch)				((_ch * 2uL) + 1uL)

/**
 * @brief Value denoting the stop of the timer for a particular Gpt channel
 */
#define MEM_STOP(_ch)				((_ch * 2uL) + 2uL)


/* ----------------------------[private typedef]-----------------------------*/

/* lint --e{754} We don't reference all members of the structure */

/* Indexed with HW channel */
static uint32 Gpt_Hw_ChannelMemory[GPT_MAXIMUM_CHANNELS * 3uL];


/* ----------------------------[private function prototypes]-----------------*/

/*Interrupt Service Routine for Gpt */

/**
 * @brief Prototype of Interrupt service routine for Gpt channel 0
 */
ISR(Gpt_0_Isr);

/**
 * @brief Prototype of Interrupt service routine for Gpt channel 1
 */
ISR(Gpt_1_Isr);

/**
 * @brief Prototype of Interrupt service routine for Gpt channel 2
 */
ISR(Gpt_2_Isr);

/**
 * @brief This function installs the Interrupt for specific Gpt channel
 * @param[in] hwChannel - Hardware Gpt channel for which the interrupt is installed
 */

static void Gpt_Isr(uint8 hwChannel);

ISR(Gpt_0_Isr) {
    Gpt_Isr(1u);
}
ISR(Gpt_1_Isr) {
    Gpt_Isr(2u);
}
/* @CODECOV:IDENTICAL_HARDWARE_INTERRUPTS:Code coverage for the 3rd channel can be excluded. Gpt can use only 2 channels. 3rd channel will be used by Wdg ( Watchdog) */
ISR(Gpt_2_Isr) {
    Gpt_Isr(3u);
}

/* ----------------------------[private variables]---------------------------*/


/* ----------------------------[private functions]---------------------------*/

#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)

static void installChannelInterrupt(uint8 Chnl) {
    switch (Chnl) {
        case 1:
            ISR_INSTALL_ISR2("Gpt", Gpt_0_Isr, (IrqType )(RTI_COMPARE_1), GPT_ISR_PRIORITY, GPT_ARC_ISR_APP);
            break;

        case 2:
            ISR_INSTALL_ISR2("Gpt", Gpt_1_Isr, (IrqType )(RTI_COMPARE_2),GPT_ISR_PRIORITY, GPT_ARC_ISR_APP);
            break;

        /* @CODECOV:IDENTICAL_HARDWARE_INTERRUPTS:Code coverage for the 3rd channel can be excluded. Gpt can use only 2 channels. 3rd channel will be used by Wdg ( Watchdog) */
        case 3:
            ISR_INSTALL_ISR2("Gpt", Gpt_2_Isr, (IrqType )(RTI_COMPARE_3), GPT_ISR_PRIORITY, GPT_ARC_ISR_APP);
            break;
        /* @CODECOV:DEFAULT_CASE: Chnl won't be greater than 3 */
        default:
            break;

    }
}
#endif

/**
 * @brief This function installs the Interrupt for specific Gpt channel
 * @param[in] hwChannel - Hardware Gpt channel for which the interrupt is installed
 */

static void Gpt_Isr(uint8 hwChannel) {
    uint8 channel = HwChannelToChannel(hwChannel);

    /* Clear Interrupt */
    /*lint -e923  MISRA:HARDWARE ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required]*/
    rtiREG1->INTFLAG |= (1u << hwChannel);

    if (GPT_CH_MODE_ONESHOT == GET_CONFIG(channel).GptChannelMode ) {
        Gpt_Hw_StopTimer(hwChannel);

        /** @req SWS_Gpt_00185  - If a timer channel is configured in "one-shot mode": If the timer has reached the target time (timer value = target time), the timer shall
			stop automatically and maintain its timer value unchanged. The channel state shall
			change from "running" to "expired".*/
        Gpt_Global.Gpt_ChannelState[channel] = GPT_STATE_EXPIRED;

        /** @req SWS_Gpt_00206 - ISR is responsible for resetting interrupt flags and calling respective notification function.*/
        /* Disable the interrupt */
        rtiREG1->CLEARINT |= (1uL << hwChannel);

#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)
        /* Report wake up to ECUM */
        if (Gpt_Global.Gpt_WakUpEnable[channel]) {
            EcuM_CheckWakeup(GET_CONFIG(channel).GptWakeupSource);
        }
#endif
    }

#if ( GPT_ENABLE_DISABLE_NOTIFICATION_API == STD_ON )
    /* Notify */
    /** @req SWS_Gpt_00086 - The callback notifications Gpt_Notification_<channel> shall be configurable as pointers to user defined functions within the configuration structure. */
    if (((boolean)(Gpt_Global.Gpt_NotifEnable[channel]) & (boolean)(GET_CONFIG(channel).GptNotification != NULL_PTR))== TRUE) {
        GET_CONFIG(channel).GptNotification();
    }
#endif

}

/* ----------------------------[Public functions]---------------------------*/
/**
 * @brief This API will have the hardware specific implementation of Gpt module Initialization.
 * @param[in] ConfigPtr - Pointer that holds the configuration of the pins that should be configured.
 * @note Non-Reentrant
 */
void Gpt_Hw_Init(const Gpt_ConfigType* ConfigPtr) {
    uint8 hwChannel;

    /*lint -e{920} MISRA:STANDARDIZED_INTERFACE::[MISRA 2012 Rule 1.3, required] */
    (void) ConfigPtr;

    uint32 chanCmpMask = 0;

    /* Loop over all configured channels */
    for (uint8 chnlcnt = 0; chnlcnt < GPT_CHANNEL_CNT; chnlcnt++) {

        /* Override Init settings of HW channel so we don't have to
         * adjust in all functions. */
        hwChannel = GET_CONFIG(chnlcnt).GptChannelId;

        Gpt_Global.channelToHwChannel[chnlcnt] = hwChannel + 1;
        Gpt_Global.channelMap[hwChannel + 1] = chnlcnt;

        /** @req SWS_Gpt_00068 - The function Gpt_Init shall only initialize the configured resources. Resources that are not configured in the configuration file shall not be touched. */
        hwChannel = ChannelToHwChannel(chnlcnt);

#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
        installChannelInterrupt(hwChannel);
#endif
        /* Disable the hardware interrupts for compare registers. */
        rtiREG1->CLEARINT = (1uL << hwChannel);

        Gpt_Hw_DisableNotification(hwChannel);

        chanCmpMask |= (1uL << (GPT_COMP_CTRL_COMPSEL_JUMP * hwChannel));
    }

    /* RTI Timer called */
    Timer_Rt1Init();

    /* Compare Control Register  set for the Gpt hardware channel*/
    rtiREG1->COMPCTRL |= chanCmpMask;
}


#if GPT_DEINIT_API == STD_ON

/**
 * @brief This API will have the hardware specific implementation to De-Initialize Gpt module.
 * @note Non-Reentrant
 */
void Gpt_Hw_DeInit( void ) {
    uint8 hwChannel;

    /** @req SWS_Gpt_00105 - The function Gpt_DeInit shall disable all interrupt notifications and wakeup interrupts, controlled by the GPT driver.*/
    for (uint8 chnlcnt = 0; chnlcnt < GPT_CHANNEL_CNT; chnlcnt++) {
        hwChannel = ChannelToHwChannel(chnlcnt);
        rtiREG1->CLEARINT = (1u << hwChannel);
    }

    /* Also disable the counter itself */
    rtiREG1->GCTRL &= ~GPT_COUNTER_BIT;
}
#endif

#if ( GPT_TIME_ELAPSED_API == STD_ON )

/**
 * @brief This API contains hardware specific implementation of calculating the time already elapsed.
 * @note Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ValueType - Elapsed timer value (in number of ticks).
 * @retval 0 ... Elapsed Time
 */
Gpt_ValueType Gpt_Hw_GetTimeElapsed( Gpt_Hw_ChannelType Channel ) {
    Gpt_ValueType val;

    if ( Gpt_Global.Gpt_ChannelState[HwChannelToChannel(Channel)] == GPT_STATE_STOPPED )
    {
        /** @req SWS_Gpt_00297 - If the function Gpt_GetTimeElapsed is called on a timer channel in state "stopped", the function shall return the time value at the moment of stopping.  */
        val = (Gpt_Hw_ChannelMemory[MEM_STOP(Channel)]) - (Gpt_Hw_ChannelMemory[MEM_START(Channel)]);
    } else {
        val = rtiREG1->CNT[1].FRCx - Gpt_Hw_ChannelMemory[MEM_START(Channel)];
    }

    return val;
}
#endif

#if ( GPT_TIME_REMAINING_API == STD_ON )

/**
 * @brief This API contains hardware specific implementation of calculating remaining time.
 * @note Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ValueType - Elapsed timer value (in number of ticks).
 * @retval 0 ... Elapsed Time
 */
Gpt_ValueType Gpt_Hw_GetTimeRemaining( Gpt_Hw_ChannelType Channel ) {
    Gpt_ValueType val;

    if ( Gpt_Global.Gpt_ChannelState[HwChannelToChannel(Channel)] == GPT_STATE_STOPPED )
    {
    	/** @req SWS_Gpt_00083 - The function Gpt_GetTimeRemaining shall return the timer value remaining until the target time will be reached next time. The remaining time is the "target time" minus the time already elapsed. */
    	/** @req SWS_Gpt_00303 - If the function Gpt_GetTimeRemaining is called on a timer channel in state "stopped", the function shall return the remaining time value at the moment of stopping. */
        val = (Gpt_Hw_ChannelMemory[MEM_TARGET(Channel)]) - (Gpt_Hw_ChannelMemory[MEM_STOP(Channel)]);
    } else {
        val = (Gpt_Hw_ChannelMemory[MEM_TARGET(Channel)]) - (rtiREG1->CNT[1].FRCx);
    }

    return val;
}
#endif

/**
 * @brief API used to load the registers with required value in ticks and starts timer.
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @param[in] Value   - Target time in number of ticks.
 */
void Gpt_Hw_StartTimer(Gpt_Hw_ChannelType Channel, Gpt_ValueType Value ) {

    /** @req SWS_Gpt_00274 - The function Gpt_StartTimer shall start the selected timer channel with a defined target time. */
    /* Clear interrupt */
    rtiREG1->INTFLAG |= (1uL << Channel);

    /* Grab the free-running counter */
    uint32 current = rtiREG1->CNT[1].FRCx;

    /* We want a trigger Value ahead so write that into compare for the channel */
    rtiREG1->CMP[Channel].COMPx = current + Value;

    if (GPT_CH_MODE_ONESHOT == GET_CONFIG(HwChannelToChannel(Channel)).GptChannelMode ) {
        rtiREG1->CMP[Channel].UDCPx = 0xffffffffuL;
    } else {
        /* Value added once an for continuous operation */
        rtiREG1->CMP[Channel].UDCPx = Value;
    }

    /* Save current and target value for later */
    Gpt_Hw_ChannelMemory[MEM_TARGET(Channel)] = current + Value;
    Gpt_Hw_ChannelMemory[MEM_START(Channel)] = current;

    /* Enable interrupt */
    rtiREG1->SETINT = (1uL << Channel);
}

/**
 * @brief This API has the hardware specific implementation to stop a timer channel and  disable (and if necessary clears) interrupts.
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_Hw_StopTimer(Gpt_Hw_ChannelType Channel) {
    /** @req SWS_Gpt_00013 - The function Gpt_StopTimer shall stop the selected timer channel. */

    /* Disable Interrupt */
    rtiREG1->CLEARINT = (1uL << Channel);

    /* Save counter register value at the time of stopping */
    Gpt_Hw_ChannelMemory[MEM_STOP(Channel)] = rtiREG1->CNT[1].FRCx;
}

#if ( GPT_ENABLE_DISABLE_NOTIFICATION_API == STD_ON )

/**
 * @brief API that contains hardware specific implementation to enable interrupt notification for a channel (relevant in normal mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_Hw_EnableNotification( Gpt_Hw_ChannelType Channel ) {
    Gpt_Global.Gpt_NotifEnable[Channel] = TRUE;
}

/**
 * @brief API that contains hardware specific implementation to disable interrupt notification for a channel (relevant in normal mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_Hw_DisableNotification( Gpt_Hw_ChannelType Channel ) {
    Gpt_Global.Gpt_NotifEnable[Channel] = FALSE;
}
#endif

/* Arccore Internal defined functions */

/**
 * @brief Get the frequency in Hz for a particular channel. Used to calculate how long a "tick" is.
 * Must not be called before Gpt_Init (the value will not be valid).
 * @note  Reentrant
 * @param[in] Channel
 * @return The frequency in Hz
 */
uint32 Gpt_Arc_GetClock(Gpt_ChannelType Channel) {

    (void) Channel;

    return Timer_Rt1GetClock();
}

/** @}*/
/** @}*/
