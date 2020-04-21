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

/** @file Gpt.c
 *
 *  The Gpt.c file will contain the generic implementation of all the API mentioned in Gpt driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Gpt_Hw_* .c file (depends on the architecture).
 *  Each API will have the Det error check mentioned in Gpt driver SWS document and will call the the hardware specific implementation function if the check passes.
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
/**
  * @name    NOT SUPPORTED REQUIREMENTS FOR TMS570
  * @{
  */
/*------------------------------------------[ Not Supported Requirements ]-------------------------------------------*/

/** !req:TMS570 4.3.0/SWS_Gpt_00127 - WAKEUP functions are not supported in TMS570*/
/** !req:TMS570 4.3.0/SWS_Gpt_00326 - EcuM_CheckWakeup shall be called within the Interrupt Service Routine, servicing the GPT channel wakeup event on wakeup-capable channels. */
/** !req:TMS570 4.3.0/SWS_Gpt_00327 - The ISR´s, providing the wakeup events, shall be responsible for resetting the interrupt flags (if needed by hardware). */

/* Gpt_DeInit */
/** !req:TMS570 4.3.0/SWS_Gpt_00162 - The function Gpt_DeInit shall influence only the peripherals, which are allocated by the static configuration. */
/** !req:TMS570 4.3.0/SWS_Gpt_00391 - The function Gpt_DeInit shall stop all enabled GPT Predef Timers. */

/* Gpt Predef Timer  */
/** !req:TMS570 4.3.0/SWS_Gpt_00382 - GPT Predef timer */
/** !req:TMS570 4.3.0/SWS_Gpt_00383 - GPT Predef timer types */
/** !req:TMS570 4.3.0/SWS_Gpt_00384 - GPT Predef Timer shall have a maximum tick tolerance of +/- 1 tick to ensure accuracy of time based functionality. */
/** !req:TMS570 4.3.0/SWS_Gpt_00385 - It shall be possible to configure which GPT Predef Timers are enabled.*/
/** !req:TMS570 4.3.0/SWS_Gpt_00386 - If a GPT Predef Timer is enabled, the timer(s) with the same tick duration and lower bit number(s) shall be enabled also. */

/** !req:TMS570 4.3.0/SWS_Gpt_00275 - If configured and enabled, an interrupt notification or a wakeup interrupt occurs, when the target time is reached. */

/* Gpt Set Mode */
/** !req:TMS570 4.3.0/SWS_Gpt_00151 - The function Gpt_SetMode shall set the operation mode of the GPT driver to the given mode parameter. */
/** !req:TMS570 4.3.0/SWS_Gpt_00255 - The function Gpt_SetMode is only available if the configuration parameter GptReportWakeupSource is enabled.  */
/** !req:TMS570 4.3.0/SWS_Gpt_00152 - If the parameter Mode has the value GPT_MODE_NORMAL: The function Gpt_SetMode shall enable the interrupt notification for all channels which are configured for notification and the notification is enabled (stored attribute) via the function Gpt_EnableNotification prior. All other interrupt notifications shall be disabled. */
/** !req:TMS570 4.3.0/SWS_Gpt_00153 - If the parameter Mode has the value GPT_MODE_SLEEP: The function Gpt_SetMode shall enable the wakeup interrupts for all channels which are configured for wakeup and the wakeup is enabled (stored attribute) via the function Gpt_EnableWakeup prior. All other wakeup interrupts shall be disabled  */
/** !req:TMS570 4.3.0/SWS_Gpt_00164 - If the function Gpt_SetMode is called with parameter Mode has the value GPT_MODE_SLEEP: All timer channels in state "running" which are not configured for wakeup or not enabled for wakeup interruption (stored attribute) via Gpt_EnableWakeup shall be stopped and their state shall be changed to "stopped".   */
/** !req:TMS570 4.3.0/SWS_Gpt_00165 - If the parameter Mode has the value GPT_MODE_NORMAL, the function Gpt_SetMode shall not restart automatically the timer channels which have been stopped by entering the sleep mode.  */
/** !req:TMS570 4.3.0/SWS_Gpt_00341 - If the parameter has the value GPT_MODE_SLEEP the function Gpt_SetMode shall not start a wakeup timer automatically. First, the user shall call Gpt_StartTimer to start a wakeup timer, after this the user shall call Gpt_SetMode with parameter GPT_MODE_SLEEP.  */
/** !req:TMS570 4.3.0/SWS_Gpt_00201 - The function Gpt_SetMode shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi.   */
/** !req:TMS570 4.3.0/SWS_Gpt_00392 - If the parameter Mode has the value GPT_MODE_NORMAL: If the driver is in “sleep mode”, the function Gpt_SetMode shall restart all enabled GPT Predef Timers at value “0”.   */
/** !req:TMS570 4.3.0/SWS_Gpt_00393 - If the parameter Mode has the value GPT_MODE_SLEEP: The function Gpt_SetMode shall stop all enabled GPT Predef Timers.  */

/** !req:TMS570 4.3.0/SWS_Gpt_00202 - The function Gpt_DisableWakeup shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi. */
/** !req:TMS570 4.3.0/SWS_Gpt_00203 - The function Gpt_EnableWakeup shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi. */
/** !req:TMS570 4.3.0/SWS_Gpt_00324 - The function Gpt_CheckWakeup shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi. */

/** @} */
/* ----------------------------[includes]------------------------------------*/



/** @req SWS_Gpt_00293 - Gpt.c shall include Gpt.h. */

#include "Gpt.h"
#include "Gpt_Internal.h"
#include "SchM_Gpt.h"
#include "Gpt_MemMap.h"
#include <string.h>

// General requirements implemented/inspected
/** @req 4.1.2|4.3.0/SWS_Gpt_00352 - the hardware allows for only one usage of the register, the driver module implementing that functionality is responsible for initializing the register.
 * TMS 570 : Implemented in Gpt_Hw_tms570.h file.  */

/* Gpt Notification */
/** @req 4.1.2|4.3.0/SWS_Gpt_00209 - Each channel shall provide its own notification if configured */
/** @req 4.1.2|4.3.0/SWS_Gpt_00233 - The GPT Driver shall invoke a notification whenever the defined target time of the channel is reached. */
/** @req 4.1.2|4.3.0/SWS_Gpt_00362 - For all available channels, callback functions have to be declared by the configuration tool. */

/** @req 4.1.2/SWS_Gpt_00342  - Dem*/

/* Configuration parameters  */
/** @req 4.1.2|4.3.0/SWS_Gpt_00270 -  Within one container it shall not be possible to mix parameters assigned to different configuration classes. */


/** @req 4.1.2|4.3.0/SWS_Gpt_00375 - If Default Error Tracer for the GPT module is enabled: Gpt.c shall include Det.h  */
#if defined(USE_DET) && (GPT_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif


/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X)
#define GPT_SW_MAJOR_VERSION_INT   4u /**< @brief Gpt Module Software Major Version Number for TMS570 */
#define GPT_SW_MINOR_VERSION_INT   0u /**< @brief Gpt Module Software Minor Version Number for TMS570 */
#define GPT_SW_PATCH_VERSION_INT   0u /**< @brief Gpt Module Software Patch Version Number for TMS570 */


#define GPT_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Gpt Module Autosar Major Version Number  */
#define GPT_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Gpt Module Autosar Minor Version Number  */
#define GPT_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Gpt Module Autosar Patch Version Number  */
#else
/** @cond DOXYGEN_EXCLUDE */

#define GPT_SW_MAJOR_VERSION_INT   3u /**< @brief Gpt Module Software Major Version Number for other architectures */
#define GPT_SW_MINOR_VERSION_INT   0u /**< @brief Gpt Module Software Minor Version Number for other architectures */
#define GPT_SW_PATCH_VERSION_INT   0u /**< @brief Gpt Module Software Patch Version Number for other architectures */


#define GPT_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Gpt Module Autosar Major Version Number  */
#define GPT_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Gpt Module Autosar Minor Version Number  */
#define GPT_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Gpt Module Autosar Patch Version Number  */
/** @endcond */
#endif

/** @} */
/* ----------------------------[version check ]------------------------------*/

#if (GPT_SW_MAJOR_VERSION != GPT_SW_MAJOR_VERSION_INT) || (GPT_SW_MINOR_VERSION != GPT_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Gpt.c and Gpt.h"
#endif

#if (GPT_AR_RELEASE_MAJOR_VERSION != GPT_AR_RELEASE_MAJOR_VERSION_INT) || (GPT_AR_RELEASE_MINOR_VERSION != GPT_AR_RELEASE_MINOR_VERSION_INT)
#error "AR Version mismatch between Gpt.c and Gpt.h"
#endif

/* ----------------------------[private define]------------------------------*/

/**
 * @brief Default return value will be 0. It will be used in TIME_ELAPSED and TIME_REMAINING function.
 */
#define DEFAULT_RETURN_VALUE	0

/* ----------------------------[private macro]-------------------------------*/

/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/

Gpt_GlobalType Gpt_Global;

/* ----------------------------[private functions]---------------------------*/


/** @req 4.1.2|4.3.0/SWS_Gpt_00332 - If the GptDevErrorDetect switch is enabled: When a development error occurs the corresponding GPT function shall skip the desired functionality (leave service without any action).*/

/**
 * @brief  Validate function that will be used in API's that can be used to check the expression and report Det errors if PORT_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[in] rv - Return value based on which the further execution of API is determined. RANGE : E_OK or E_NOT_OK.
 */
static inline void validateGptParameter (boolean exp,uint8 apiid,uint8 errid,Std_ReturnType* rv){
	if((*rv == E_OK) && (exp == FALSE)){
		*rv = E_NOT_OK;
#if(GPT_DEV_ERROR_DETECT == STD_ON)
			(void)Det_ReportError(GPT_MODULE_ID, 0,apiid,errid);
#endif
	}
}


/**
 * @brief  Internal function to verify the validity of the channel
 * @param[in] ch - Channel for which the validity should be checked
 * @return boolean - Returns boolean whether the validity is TRUE or FALSE
 */
static boolean isChannelValid (Gpt_ChannelType ch){
	return (boolean)(((GPT_CHANNELS_CONFIGURED & (1u << ch))!=0));
}

/**
  * @brief   Check the validity of the Value passed to the StartTimer whether it is not equal to zero
  * @param[in] value - Target time in number of ticks.
  * @return boolean - TRUE if the channel is valid and FALSE if not valid.
  */
static boolean isTargetValid(Gpt_ValueType value){
	return (boolean)((value != 0));
}
/* ----------------------------[public functions]----------------------------*/

/** @req 4.1.2|4.3.0/SWS_Gpt_00279 - Gpt_GetVersionInfo */

#if (GPT_VERSION_INFO_API == STD_ON)

/*
 * @brief API that returns the version information of this module.
 * @param[in] VersionInfoPtr - Pointer that holds the version info.
 * @note Reentrant
 */
void Gpt_GetVersionInfo(Std_VersionInfoType* VersionInfoPtr) {

    Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00338 - If the parameter VersionInfoPtr is a null pointer, the function Gpt_GetVersionInfo shall raise the error GPT_E_PARAM_POINTER. */
    validateGptParameter((boolean)(VersionInfoPtr != NULL_PTR), GPT_GETVERSIONINFO_SERVICE_ID,GPT_E_PARAM_POINTER,&validate_rv);

    if (validate_rv == E_OK){
    	VersionInfoPtr->vendorID = GPT_VENDOR_ID;
    	VersionInfoPtr->moduleID = GPT_MODULE_ID;
    	VersionInfoPtr->sw_major_version = GPT_SW_MAJOR_VERSION;
    	VersionInfoPtr->sw_minor_version = GPT_SW_MINOR_VERSION;
    	VersionInfoPtr->sw_patch_version = GPT_SW_PATCH_VERSION;
    }
}
#endif /* (GPT_VERSION_INFO_API == STD_ON) */

/** @req 4.1.2|4.3.0/SWS_Gpt_00280 - Gpt_Init */
/** @req 4.1.2|4.3.0/SWS_Gpt_00309 - A re-initialization of the GPT driver by executing the Gpt_Init function requires a de-initialization before by executing a Gpt_DeInit.  */

/*
 * @brief Initialize the Gpt module.
 * @param[in] ConfigPtr - Pointer that holds the configuration of the pins that should be configured.
 * @note Non-Reentrant
 */
void Gpt_Init(const Gpt_ConfigType* ConfigPtr) {
    uint8 hwCh;

    Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00307 - If Default Error Tracer for the GPT module is enabled: If the GPT driver is not in operation mode "uninitialized", the function Gpt_Init shall raise the error GPT_E_ALREADY_INITIALIZED. */
    validateGptParameter ((boolean)(Gpt_Global.initRun == FALSE), GPT_INIT_SERVICE_ID, GPT_E_ALREADY_INITIALIZED,&validate_rv);

    /** @req 4.1.2/SWS_Gpt_00294
      * @note SWS_Gpt_00294 removed in ASR 4.3.0 */
    validateGptParameter((boolean)(ConfigPtr != NULL_PTR), GPT_INIT_SERVICE_ID, GPT_E_PARAM_POINTER,&validate_rv);

    if (validate_rv == E_OK){
    	/** @req 4.1.2|4.3.0/SWS_Gpt_00107 - The function Gpt_Init shall disable all interrupt notifications, controlled by the GPT driver. */
        /** @req 4.1.2|4.3.0/SWS_Gpt_00258 - The function Gpt_Init shall disable all wakeup interrupts, controlled by the GPT driver. */

        /* Memory for the Gpt_Global variable should be allocated. */
    	memset(&Gpt_Global, 0, sizeof(Gpt_Global));

        /** @req 4.1.2|4.3.0/SWS_Gpt_00006 - The function Gpt_Init shall initialize the hardware timer module according to a configuration set referenced by ConfigPtr. */
        /*lint -e929 -e740 -e826  MISRA:FALSE POSITIVE:Configuration is of same type:[MISRA 2012 Rule 1.3, required]*/
    	Gpt_Global.config = (const Gpt_ConfigType (*)[GPT_ARC_LOG_UNIT_CNT]) ConfigPtr;

        for (uint8 ch = 0; ch < GPT_ARC_LOG_UNIT_CNT; ch++){
        	hwCh = GET_CONFIG(ch).GptChannelId;

            Gpt_Global.channelToHwChannel[ch] = hwCh;
            Gpt_Global.channelMap[hwCh] = ch;

            Gpt_Global.Gpt_ChannelState[ch] = GPT_STATE_INITIALIZED;
        }

        Gpt_Hw_Init(ConfigPtr);

        /** @req 4.1.2|4.3.0/SWS_Gpt_00339 - The function Gpt_Init shall set the operation mode of the GPT driver to "normal mode". This leads to a behavior like Gpt_SetMode is called with parameter GPT_MODE_NORMAL. */
        Gpt_Global.mode = GPT_MODE_NORMAL;
        Gpt_Global.initRun = STD_ON;
    }
}

/** @req 4.1.2|4.3.0/SWS_Gpt_00308 - If a postbuild multiple selectable configuration variant was used, the function Gpt_DeInit shall further influence only the peripherals, which are allocated by the runtime configuration set passed by the previous call of the function Gpt_Init. */
/** @req 4.1.2|4.3.0/SWS_Gpt_00194 - The function Gpt_DeInit shall be pre compile time configurable On/Off by the configuration parameter: GptDeInitApi.*/

#if ((defined (USE_WDG)) && (GPT_DEINIT_API == STD_ON))

#error "Gpt DeInit cannot be used if the watchdog is used "

#else

/** @req 4.1.2|4.3.0/SWS_Gpt_00281 - Gpt_DeInit */
/* @CODECOV:CONFIG_LIMITATION: If watchdog is used Gpt_DeInit cannot be used as both the modules share the RTI unit. So this API cannot be tested. */
/*
 * @brief De-Initialize the hardware used by the GPT driver.
 * @note Non-Reentrant
 */
/*lint -e957 LINT:OTHER:Gpt_DeInit */
void Gpt_DeInit(void){

	Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00220 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_DeInit shall raise the error GPT_E_UNINIT. */
	validateGptParameter(Gpt_Global.initRun, GPT_DEINIT_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

	/** @req 4.1.2|4.3.0/SWS_Gpt_00008 - The function Gpt_DeInit shall deinitialize the hardware used by the GPT driver (depending on configuration) to the power on reset state. Values of registers which are not writeable are excluded. It’s the responsibility of the hardware design that the state does not lead to undefined activities in the μC. */

	for (uint8 chnlcnt = 0; chnlcnt < GPT_ARC_LOG_UNIT_CNT; chnlcnt++){

		/** @req 4.1.2|4.3.0/SWS_Gpt_00234 - If default error detection for the GPT module is enabled: If any timer channel is in state "running", the function Gpt_DeInit shall raise the error GPT_E_BUSY. */
		validateGptParameter((boolean)(GPT_STATE_RUNNING != Gpt_Global.Gpt_ChannelState[chnlcnt]),GPT_DEINIT_SERVICE_ID,GPT_E_BUSY,&validate_rv);
	}

    if (validate_rv == E_OK){
    	Gpt_Hw_DeInit();
        Gpt_Global.mode = GPT_MODE_UNINTIALIZED;
        /** @req 4.1.2|4.3.0/SWS_Gpt_00363 - The function Gpt_DeInit shall set the operation mode of the GPT driver to "uninitialized". */
        Gpt_Global.initRun = STD_OFF;
    }
}

#endif


/** @req 4.1.2|4.3.0/SWS_Gpt_00195 - The function Gpt_GetTimeElapsed shall be pre compile time configurable On/Off by the configuration parameter: GptTimeElapsedApi. */

#if ( GPT_TIME_ELAPSED_API == STD_ON )

/** @req 4.1.2|4.3.0/SWS_Gpt_00282 - Gpt_GetTimeElapsed */
/** @req 4.1.2|4.3.0/SWS_Gpt_00113 - The function Gpt_GetTimeElapsed shall be fully reentrant, this means even for the same timer channel.  */
/*
 * @brief API that returns the time already elapsed.
 * @note Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ValueType - Elapsed timer value (in number of ticks).
 * @retval 0 ... Elapsed Time
 */
Gpt_ValueType Gpt_GetTimeElapsed( Gpt_ChannelType Channel ) {

	Std_ReturnType validate_rv = E_OK;
    Gpt_ValueType gpt_time_elapsed_rv = DEFAULT_RETURN_VALUE;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00222 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_GetTimeElapsed shall raise the error GPT_E_UNINIT and shall return the value “0”. */
    validateGptParameter(Gpt_Global.initRun, GPT_GETTIMEELAPSED_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00210 - If default error detection for the GPT module is enabled: If the parameter Channel is invalid (not within the range specified by configuration), the function Gpt_GetTimeElapsed shall raise the development error GPT_E_PARAM_CHANNEL and shall return the value “0”. */
    validateGptParameter(isChannelValid(Channel), GPT_GETTIMEELAPSED_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    if (validate_rv == E_OK){

        if (GPT_STATE_INITIALIZED == Gpt_Global.Gpt_ChannelState[Channel]){
        	/** @req 4.1.2|4.3.0/SWS_Gpt_00295 - If the function Gpt_GetTimeElapsed is called on a timer channel in state "initialized" (channel started never before), the function shall return the value "0".  */
            gpt_time_elapsed_rv = DEFAULT_RETURN_VALUE;
        }else

        /** @req 4.1.2|4.3.0/SWS_Gpt_00299 - If the function Gpt_GetTimeElapsed is called on a channel configured for "one-shot mode" in state "expired" (timer has reached the target time), the function shall return the target time. */
        // Expired - Counter Freeze at target
        if ((GPT_CH_MODE_ONESHOT == GET_CONFIG(Channel).GptChannelMode) && (GPT_STATE_EXPIRED == Gpt_Global.Gpt_ChannelState[Channel])){
        	gpt_time_elapsed_rv = Gpt_Global.Gpt_ChannelTargetValue[Channel];
        }else {
        	/** @req 4.1.2|4.3.0/SWS_Gpt_00010 - The function Gpt_GetTimeElapsed shall return the time already elapsed. When the channel is in mode “one-shot mode”, this is the value relative to the point in time, the channel has been started. */
            /** @req 4.1.2|4.3.0/SWS_Gpt_00297 - If the function Gpt_GetTimeElapsed is called on a timer channel in state "stopped", the function shall return the time value at the moment of stopping. */
            /** @req 4.1.2|4.3.0/SWS_Gpt_00361 - When the channel is in mode "continuous mode", the return value of Gpt_GetTimeElapsed is the value relative to the last recurrence (target time reached) or to the start of the channel before the first recurrence occurs. */
            gpt_time_elapsed_rv = Gpt_Hw_GetTimeElapsed(ChannelToHwChannel(Channel));
        }
     }

    return gpt_time_elapsed_rv;
}

#endif

/** @req 4.1.2|4.3.0/SWS_Gpt_00196 - The function Gpt_GetTimeRemaining shall be pre compile time configurable On/Off by the configuration parameter: GptTimeRemainingApi. */
/** @req 4.1.2|4.3.0/SWS_Gpt_00114 - The function Gpt_GetTimeRemaining shall be fully reentrant, this means even for the same timer channel. */

#if ( GPT_TIME_REMAINING_API == STD_ON )

/** @req 4.1.2|4.3.0/SWS_Gpt_00283 - Gpt_GetTimeRemaining*/

/*
 * @brief API that returns the time remaining until the target time is reached.
 * @note Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ValueType - Remaining timer value (in number of ticks).
 * @retval 0 ... Remaining time
 */
Gpt_ValueType Gpt_GetTimeRemaining( Gpt_ChannelType Channel ){

    Gpt_ValueType gpt_time_remain_rv = DEFAULT_RETURN_VALUE;
    Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00223 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_GetTimeRemaining shall raise the error GPT_E_UNINIT and shall return the value “0”. */
    validateGptParameter(Gpt_Global.initRun, GPT_GETTIMEREMAINING_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00211 - If default error detection for the GPT module is enabled: If the parameter Channel is invalid (not within the range specified by configuration),the function Gpt_GetTimeRemaining shall raise the error GPT_E_PARAM_CHANNEL and shall return the value “0”.  */
    validateGptParameter(isChannelValid(Channel), GPT_GETTIMEREMAINING_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    if (validate_rv == E_OK){

        if (GPT_STATE_INITIALIZED == Gpt_Global.Gpt_ChannelState[Channel]){

        	/** @req 4.1.2|4.3.0/SWS_Gpt_00301 - If the function Gpt_GetTimeRemaining is called on a timer channel in state "initialized" (channel started never before), the function shall return the value "0". */
            gpt_time_remain_rv = DEFAULT_RETURN_VALUE;
        }else

        /** @req 4.1.2|4.3.0/SWS_Gpt_00305 - If the function Gpt_GetTimeRemaining is called on a channel configured for "one-shot mode" in state "expired" (timer has reached the target time), the function shall return the value “0”. */
        /* Expired - Counter Freeze at target */
        if ((GPT_CH_MODE_ONESHOT == GET_CONFIG(Channel).GptChannelMode)&&(GPT_STATE_EXPIRED == Gpt_Global.Gpt_ChannelState[Channel])){
        	gpt_time_remain_rv = DEFAULT_RETURN_VALUE;
        }else{
        	/** @req 4.1.2|4.3.0/SWS_Gpt_00083 - The function Gpt_GetTimeRemaining shall return the timer value remaining until the target time will be reached next time. The remaining time is the "target time" minus the time already elapsed. */
            /** @req 4.1.2|4.3.0/SWS_Gpt_00303 - If the function Gpt_GetTimeRemaining is called on a timer channel in state "stopped", the function shall return the remaining time value at the moment of stopping. */
            gpt_time_remain_rv = Gpt_Hw_GetTimeRemaining(ChannelToHwChannel(Channel)); /* Stopped */
        }
    }

    return gpt_time_remain_rv;
}
#endif

/** @req 4.1.2|4.3.0/SWS_Gpt_00284 - Gpt_StartTimer*/
/** @req 4.1.2|4.3.0/SWS_Gpt_00329 - A timer channel starts counting at value zero. */

/** @req 4.1.2|4.3.0/SWS_Gpt_00186  -  Timer in continuous mode will start counting up from a reload value (Max - TargetValue) till Maximum ex incase of JACINTO.
 * This in essence provides same interval as if counting from 0 till target value. After reaching Max (i.e completing the interval) it is reset to reload value */

/** @req 4.1.2|4.3.0/SWS_Gpt_00330 -  Timer reload value can be set to 0 to provide a free running counter for maximum duration possible */
/** @req 4.1.2|4.3.0/SWS_Gpt_00115 -  The function Gpt_StartTimer shall be reentrant, if the timer channels used in concurrent calls are different. */

/*
 * @brief API used to start a timer channel.
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @param[in] Value   - Target time in number of ticks.
 */
void Gpt_StartTimer(Gpt_ChannelType Channel, Gpt_ValueType Value) {

	Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00224 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_StartTimer shall raise the error GPT_E_UNINIT. */
	validateGptParameter(Gpt_Global.initRun, GPT_STARTTIMER_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00212 - If default error detection for the GPT module is enabled: If the parameter Channel is invalid (not within the range specified by configuration), the function Gpt_StartTimer shall raise the error GPT_E_PARAM_CHANNEL */
	validateGptParameter(isChannelValid(Channel), GPT_STARTTIMER_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00218 -  If default error detection for the GPT module is enabled: The function Gpt_StartTimer shall raise the error GPT_E_PARAM_VALUE if the parameter Value is "0" or not within the allowed range (exceeding the maximum timer resolution). */
    validateGptParameter(isTargetValid(Value), GPT_STARTTIMER_SERVICE_ID, GPT_E_PARAM_VALUE,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00084 - If default error detection for the GPT module is enabled: If the function Gpt_StartTimer is called on a channel in state "running", the function shall raise the error GPT_E_BUSY. */
    validateGptParameter((boolean)(GPT_STATE_RUNNING != Gpt_Global.Gpt_ChannelState[Channel]), GPT_STARTTIMER_SERVICE_ID, GPT_E_BUSY,&validate_rv);

    if (validate_rv == E_OK){

        Gpt_Global.Gpt_ChannelTargetValue[Channel] = Value;

        Gpt_Hw_StartTimer(ChannelToHwChannel(Channel), Value);

        /** @req 4.1.2|4.3.0/SWS_Gpt_00364 - The state of the selected timer channel shall be changed to "running" if Gpt_StartTimer is called. */
        Gpt_Global.Gpt_ChannelState[Channel] = GPT_STATE_RUNNING;
    }
}

/** @req 4.1.2|4.3.0/SWS_Gpt_00285 - Gpt_StopTimer*/
/** @req 4.1.2|4.3.0/SWS_Gpt_00116 - The function Gpt_StopTimer shall be reentrant, if the timer channels used in concurrent calls are different.  */

/*
 * @brief API used to stop a timer channel.
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_StopTimer(Gpt_ChannelType Channel) {

	Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00225 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_StopTimer shall raise the error GPT_E_UNINIT. */
	validateGptParameter(Gpt_Global.initRun, GPT_STOPTIMER_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00213 - If default error detection for the GPT module is enabled: If the parameter Channel is invalid (not within the range specified by configuration), the function Gpt_StopTimer shall raise the error GPT_E_PARAM_CHANNEL. */
	validateGptParameter(isChannelValid(Channel), GPT_STOPTIMER_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    if (validate_rv == E_OK){

    	Gpt_Hw_StopTimer(ChannelToHwChannel(Channel));


    	/* If the state of Gpt is not RUNNING then the function shall leave without any action */
        if (GPT_STATE_RUNNING == Gpt_Global.Gpt_ChannelState[Channel]) {


            /** @req 4.1.2|4.3.0/SWS_Gpt_00343 - The state of the selected timer channel shall be changed to "stopped" if Gpt_StopTimer is called. */
            Gpt_Global.Gpt_ChannelState[Channel] = GPT_STATE_STOPPED;

        }
        /** @req 4.1.2|4.3.0/SWS_Gpt_00099 - If default error detection for the GPT module is enabled: If the function Gpt_StopTimer is called on a channel in state "initialized", "stopped" or "expired", the function shall not raise a development error. */
        /** @req 4.1.2|4.3.0/SWS_Gpt_00344 - If the function Gpt_StopTimer is called on a channel in state "initialized", "stopped" or "expired", the function shall leave without any action (no change of the channel state). */
    }
}

/** @req 4.1.2|4.3.0/SWS_Gpt_00331 - Notification support */
/** @req 4.1.2|4.3.0/SWS_Gpt_00199 - The function Gpt_EnableNotification shall be pre compile time configurable On/Off by the configuration parameter: GptEnableDisableNotificationApi.*/
/** @req 4.1.2|4.3.0/SWS_Gpt_00200 - The function Gpt_DisableNotification shall be pre compile time configurable On/Off by the configuration parameter: GptEnableDisableNotificationApi.*/

#if ( GPT_ENABLE_DISABLE_NOTIFICATION_API == STD_ON )

/** @req 4.1.2|4.3.0/SWS_Gpt_00286 - Gpt_EnableNotification */
/** @req 4.1.2|4.3.0/SWS_Gpt_00117 - The function Gpt_EnableNotification shall be reentrant, if the timer channels used in concurrent calls are different.  */

/*
 * @brief API that enables the interrupt notification for a channel (relevant in normal mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_EnableNotification( Gpt_ChannelType Channel ) {

	Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00226 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_EnableNotification shall raise the error GPT_E_UNINIT. */
	validateGptParameter(Gpt_Global.initRun, GPT_ENABLENOTIFICATION_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00214 - If default error detection for the GPT module is enabled: If the parameter Channel is invalid (not within the range specified by configuration), the function Gpt_EnableNotification shall raise the error GPT_E_PARAM_CHANNEL. */
  	validateGptParameter(isChannelValid(Channel), GPT_ENABLENOTIFICATION_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00377 - If default error detection for the GPT module is enabled: If no valid notification function is configured (GptNotification), the function Gpt_EnableNotification shall raise the error GPT_E_PARAM_CHANNEL. */
    validateGptParameter((boolean)(NULL_PTR != GET_CONFIG(Channel).GptNotification), GPT_ENABLENOTIFICATION_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    if (validate_rv == E_OK){

    	Gpt_Hw_EnableNotification(ChannelToHwChannel(Channel));

        /** @req 4.1.2|4.3.0/SWS_Gpt_00014 - The function Gpt_EnableNotification shall enable the interrupt notification of the referenced channel configured for notification */
        Gpt_Global.Gpt_NotifEnable[Channel] = TRUE;
    }
}

/** @req 4.1.2|4.3.0/SWS_Gpt_00287 -  Gpt_DisableNotification */
/** @req 4.1.2|4.3.0/SWS_Gpt_00118 -  The function Gpt_DisableNotification shall be reentrant, if the timer channels used in concurrent calls are different. */

/*
 * @brief API that disables the interrupt notification for a channel (relevant in normal mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_DisableNotification( Gpt_ChannelType Channel ) {

	Std_ReturnType validate_rv = E_OK;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00227 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_DisableNotification shall raise the error GPT_E_UNINIT. */
	validateGptParameter(Gpt_Global.initRun, GPT_DISABLENOTIFICATION_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00217 - If default error detection for the GPT module is enabled: If the parameter Channel is invalid (not within the range specified by configuration), the function Gpt_DisableNotification shall raise the error GPT_E_PARAM_CHANNEL. */
    validateGptParameter(isChannelValid(Channel), GPT_DISABLENOTIFICATION_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00379 - If default error detection for the GPT module is enabled: If no valid notification function is configured (GptNotification), the function Gpt_DisableNotification shall raise the error GPT_E_PARAM_CHANNEL. */
    validateGptParameter((boolean)(NULL_PTR != GET_CONFIG(Channel).GptNotification), GPT_DISABLENOTIFICATION_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    if (validate_rv == E_OK){

    	Gpt_Hw_DisableNotification(ChannelToHwChannel(Channel));

        /** @req 4.1.2|4.3.0/SWS_Gpt_00015 - The function Gpt_DisableNotification shall disable the interrupt notification of the referenced channel configured for notification */
        Gpt_Global.Gpt_NotifEnable[Channel] = FALSE;
    }
}
#endif

/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00201 - The function Gpt_SetMode shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi.*/

/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00202 - The function Gpt_DisableWakeup shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi. */

/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00203 - The function Gpt_EnableWakeup shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi. */

/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00324 - The function Gpt_CheckWakeup shall be pre compile time configurable On/Off by the configuration parameter: GptWakeupFunctionalityApi. */

#if ( GPT_WAKEUP_FUNCTIONALITY_API == STD_ON )

/** @req 4.1.2|4.3.0/SWS_Gpt_00157 - The function Gpt_DisableWakeup is only feasible, if GptReportWakeupSource is statically configured available. */
/** @req SWS_Gpt_00255 - The function Gpt_SetMode is only available if the configuration parameter GptReportWakeupSource is enabled */
/** @req 4.1.2|4.3.0/SWS_Gpt_00158 - The function Gpt_EnableWakeup is only feasible, if GptReportWakeupSource is statically configured available. */
/** @req 4.1.2|4.3.0/SWS_Gpt_00322 - The function Gpt_CheckWakeup is only feasible, if GptReportWakeupSource is statically configured available.  */

#if (GPT_REPORT_WAKEUP_SOURCE == STD_ON)

/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00288 - Gpt_SetMode  */

/*
 * @brief API that sets the operation mode of the GPT.
 * @note  Non-Reentrant
 * @param[in] Mode - GPT_MODE_NORMAL or GPT_MODE_SLEEP.
 */
void Gpt_SetMode( Gpt_ModeType Mode ) {

	Std_ReturnType validate_rv;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00228 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_SetMode shall raise the error GPT_E_UNINIT. */
	validateGptParameter((STD_ON == Gpt_Global.initRun), GPT_SETMODE_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

	/** @req 4.1.2|4.3.0/SWS_Gpt_00231 - If default error detection for the GPT module is enabled: The function Gpt_SetMode shall raise the error GPT_E_PARAM_MODE if the parameter Mode is invalid. */
    validateGptParameter(((GPT_MODE_SLEEP == Mode) || (GPT_MODE_NORMAL == Mode)), GPT_SETMODE_SERVICE_ID, GPT_E_PARAM_MODE,&validate_rv);
    if (validate_rv == E_OK){
    	/** @req SWS_Gpt_00164 - If the function Gpt_SetMode is called with parameter Mode has the value GPT_MODE_SLEEP: All timer channels in state "running" which are not configured for wakeup or not enabled for wakeup interruption (stored attribute) via Gpt_EnableWakeup shall be stopped and their state shall be changed to "stopped".  */
        if (GPT_MODE_SLEEP == Mode) {
        	for (uint8 chnlCnt = 0; chnlCnt < GPT_ARC_LOG_UNIT_CNT; chnlCnt++) {
            if ((!Gpt_Global.Gpt_WakUpEnable[chnlCnt]) && (GPT_STATE_RUNNING == Gpt_Global.Gpt_ChannelState[chnlCnt])) {
            	Gpt_StopTimer( GET_CONFIG(chnlCnt).GptChannelId); //Stop channels not configured/Enabled for wakeup
            }
            /** @req SWS_Gpt_00153 - If the parameter Mode has the value GPT_MODE_SLEEP: The function Gpt_SetMode shall enable the wakeup interrupts for all channels which are configured for wakeup and the wakeup is enabled (stored attribute) via the function Gpt_EnableWakeup prior. All other wakeup interrupts shall be disabled.*/
            /** @req 4.1.2|4.3.0/SWS_Gpt_00093 - When disabled, the GPT Driver will send no notification */
            /** @req SWS_Gpt_00341 - If the parameter has the value GPT_MODE_SLEEP the function Gpt_SetMode shall not start a wakeup timer automatically. First, the user shall call Gpt_StartTimer to start a wakeup timer, after this the user shall call Gpt_SetMode with parameter GPT_MODE_SLEEP. */
            //No Wakeup timer started
            }
        }else {
        	/** @req SWS_Gpt_00165 - If the parameter Mode has the value GPT_MODE_NORMAL, the function Gpt_SetMode shall not restart automatically the timer channels which have been stopped by entering the sleep mode. */
        	//Other timers are not started in Normal mode
        }
            /** @req SWS_Gpt_00151 - The function Gpt_SetMode shall set the operation mode of the GPT driver to the given mode parameter. */
        Gpt_Global.mode = Mode;
    }

}

/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00289 - Gpt_DisableWakeup */
/** @req 4.1.2|4.3.0/SWS_Gpt_00155 - The function Gpt_DisableWakeup shall be reentrant, if the timer channels used in concurrent calls are different.  */

/*
 * @brief API that disables the wakeup interrupt of a channel (relevant in sleep mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_DisableWakeup( Gpt_ChannelType Channel ) {

    uint8 chnlidx;

    Std_ReturnType validate_rv;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00229 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_DisableWakeup shall raise the error GPT_E_UNINIT. */
    validateGptParameter((STD_ON == Gpt_Global.initRun), GPT_DISABLEWAKEUP_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00215 - If default error detection for the GPT module is enabled: If the parameter Channel is invalid (not within the range specified by configuration) or channel wakeup is not enabled by configuration (GptEnableWakeup), the function Gpt_DisableWakeup shall raise the error GPT_E_PARAM_CHANNEL. */
    validateGptParameter(isChannelValid(Channel), GPT_DISABLEWAKEUP_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    chnlidx = Gpt_Global.channelMap[Channel];

    validateGptParameter(GET_CONFIG(chnlidx).GptEnableWakeup, GPT_DISABLEWAKEUP_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    if (validate_rv == E_OK){
        /** @req 4.1.2|4.3.0/SWS_Gpt_00159 - The function Gpt_DisableWakeup shall disable the wakeup interrupt of the referenced channel configured for wakeup. The function shall save an attribute like "wakeup disabled" of the channel.*/
        Gpt_Global.Gpt_WakUpEnable[chnlidx] = FALSE;

    }
}

/** @req:ZYNQ|JACINTO5|JACINTO6 SWS_Gpt_00290 - Gpt_EnableWakeup*/
/** @req 4.1.2|4.3.0/SWS_Gpt_00156 - The function Gpt_EnableWakeup shall be reentrant, if the timer channels used in concurrent calls are different. */


/*
 * @brief API that enables the wakeup interrupt of a channel (relevant in sleep mode).
 * @note  Reentrant (but not for the same timer channel)
 * @param[in] Channel - Numeric identifier of the GPT channel.
 */
void Gpt_EnableWakeup( Gpt_ChannelType Channel ) {

    uint8 chnlidx;

    Std_ReturnType validate_rv;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00230 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_EnableWakeup shall raise the error GPT_E_UNINIT. */
    validateGptParameter((STD_ON == Gpt_Global.initRun), GPT_ENABLEWAKEUP_SERVICE_ID, GPT_E_UNINIT,&validate_rv);

    /** @req 4.1.2|4.3.0/SWS_Gpt_00216 - If default error detection for the GPT module is enabled: If the parameter Channel is invalid (not within the range specified by configuration) or channel wakeup is not enabled by configuration (GptEnableWakeup), the function Gpt_EnableWakeup shall raise the error GPT_E_PARAM_CHANNEL.  */
    validateGptParameter(isChannelValid(Channel), GPT_ENABLEWAKEUP_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    chnlidx = Gpt_Global.channelMap[Channel];

    validateGptParameter(GET_CONFIG(chnlidx).GptEnableWakeup, GPT_ENABLEWAKEUP_SERVICE_ID, GPT_E_PARAM_CHANNEL,&validate_rv);

    if (validate_rv == E_OK){
        /** @req 4.1.2|4.3.0/SWS_Gpt_00160 - The function Gpt_EnableWakeup shall enable the wakeup interrupt of the referenced channel configured for wakeup. The function shall save an attribute like "wakeup enabled" of the channel.  */
        Gpt_Global.Gpt_WakUpEnable[chnlidx] = TRUE;
    }
}

/** @req:ZYNQ SWS_Gpt_00328 - Gpt_CheckWakeup */
/** @req 4.1.2|4.3.0/SWS_Gpt_00323 -  The function Gpt_CheckWakeup shall be reentrant, by reason of possible usage in concurrent interrupt service routines. */

/*
 * @brief API that checks if a wakeup capable GPT channel is the source for a wakeup event and calls the ECU state manager service EcuM_SetWakeupEvent in case of a valid GPT channel wakeup event.
 * @note  Reentrant
 * @param[in] WakeupSource - Information on wakeup source to be checked. The associated GPT channel can be determined from configuration data..
 */
void Gpt_CheckWakeup( EcuM_WakeupSourceType WakeupSource ) {

	Std_ReturnType validate_rv;

    /** @req 4.1.2|4.3.0/SWS_Gpt_00325 - If default error detection for the GPT module is enabled: If the driver is not initialized, the function Gpt_CheckWakeup shall raise the error GPT_E_UNINIT. */
	validateGptParameter((STD_ON == Gpt_Global.initRun), GPT_CHECKWAKEUP_SERVICE_ID, GPT_E_UNINIT,&validate_rv);
    if (validate_rv == E_OK){
        for (uint8 chnlCnt = 0; chnlCnt < GPT_ARC_LOG_UNIT_CNT; chnlCnt++) {
            /** @req SWS_Gpt_00127 - If supported by hardware, a timer channel shall be able to be configured as wakeup source of the ECU. If enabled, the wakeup occurs when the target time is reached (timer value = target time). */
            // Loop over all channels to check if Wakeup source is found
            if (Gpt_Global.Gpt_WakUpEnable[chnlCnt] && (GET_CONFIG(chnlCnt).GptWakeupSource == WakeupSource)
                    && ( GPT_STATE_EXPIRED == Gpt_Global.Gpt_ChannelState[chnlCnt])) {
                /** @req 4.1.2|4.3.0/SWS_Gpt_00321 - The function Gpt_CheckWakeup shall check if a wakeup capable GPT channel is the source for a wakeup event and call EcuM_SetWakeupEvent to indicate a valid timer wakeup event to the ECU State Manager */
                EcuM_SetWakeupEvent(WakeupSource);
                break;
            }
        }
    }
}
#endif

#endif
/*lint -restore*/

#ifdef HOST_TEST

/**
 * @brief Arccore internal function used only for testing.
 * @note  Reentrant
 * @param[in] Channel - Numeric identifier of the GPT channel.
 * @return Gpt_ChannelStateType
 */
Gpt_ChannelStateType Gpt_Test_GetChannelState(Gpt_ChannelType Channel) {

    return Gpt_Global.Gpt_ChannelState[Channel];
}
#endif /* HOST_TEST */

/** @}*/
/** @}*/
