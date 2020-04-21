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
/** @tagSettings DEFAULT_ARCHITECTURE=MPC5777C */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Wdg.c
 *
 *  The Wdg.c file will contain the generic implementation of all the API mentioned in Wdg driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Wdg_Hw_* .c file (depends on the architecture).
 *  Each API will have the Det error check mentioned in section 7.3 (Wdg driver SWS document) and will call the the hardware specific implementation function if the check passes.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */
 /** \addtogroup Wdg
  *  This is the Mcal Wdg Group
  *  @{
  */

#include "Wdg.h"
#include "Wdg_Internal.h"
#include "Wdg_MemMap.h"
#include "Wdg_Cbk.h"
#include "SchM_Wdg.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM) || defined (WDG_USE_DEM)
#include "Dem.h"
#endif
#ifdef CFG_TMS570
#include "os_trap.h"
#endif

/* ----------------------------[Version Check]-----------------*/
/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X)
#define WDG_SW_MAJOR_VERSION_INT   3u /**< @brief Wdg Module Software Major Version Number for TMS570 */
#define WDG_SW_MINOR_VERSION_INT   0u /**< @brief Wdg Module Software Minor Version Number for TMS570 */
#define WDG_SW_PATCH_VERSION_INT   0u /**< @brief Wdg Module Software Patch Version Number for TMS570 */

#define WDG_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Wdg Module Autosar Major Version Number  */
#define WDG_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Wdg Module Autosar Minor Version Number  */
#define WDG_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Wdg Module Autosar Patch Version Number  */
#else
/** @cond DOXYGEN_EXCLUDE */
#define WDG_SW_MAJOR_VERSION_INT   2u
#define WDG_SW_MINOR_VERSION_INT   0u
#define WDG_SW_PATCH_VERSION_INT   0u

#define WDG_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Wdg Module Autosar Major Version Number  */
#define WDG_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Wdg Module Autosar Minor Version Number  */
/** @endcond */
#define WDG_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Wdg Module Autosar Patch Version Number  */
#endif
/** @} */

#if (WDG_SW_MAJOR_VERSION != WDG_SW_MAJOR_VERSION_INT) || (WDG_SW_MINOR_VERSION != WDG_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Wdg.c and Wdg.h"
#endif

#if (WDG_AR_RELEASE_MAJOR_VERSION != WDG_AR_RELEASE_MAJOR_VERSION_INT) || (WDG_AR_RELEASE_MINOR_VERSION != WDG_AR_RELEASE_MINOR_VERSION_INT)
#error "AR Version mismatch between Wdg.c and Wdg.h"
#endif


/* ----------------------------[Macro Definition]--------------*/
#if defined(CFG_RH850)
#if defined(USE_DEM) || defined (CFG_WDG_USE_DEM)
#define WDG_REPORT_DEM_ERROR(event, status) if (event != DEM_EVENT_ID_NULL) { Dem_ReportErrorStatus(event, status); }
#else
#define WDG_REPORT_DEM_ERROR(event, status)
#endif
#endif


/**
 * @brief   moduleState - Indicates the watchdog state, can be WDG_UNINIT, WDG_IDLE, WDG_BUSY.
 */
#define WDG_START_SEC_VAR_INIT_UNSPECIFIED
#include "Wdg_MemMap.h"
static volatile WdgInternalState moduleState = WDG_UNINIT;
#define WDG_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Wdg_MemMap.h"  /*lint !e9019 OTHER [MISRA 2012 Rule 20.1, advisory] OTHER AUTOSAR specified way of using MemMap*/


/* ----------------------------[Static Function]---------------*/
/**
 * @brief  validate function that will be used in API's that can be used to check the expression and report Det errors if WDG_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[in] _rvPtr - Returns the validity of the expression provided
 */
 static inline void validate (boolean exp,uint8 apiid,uint8 errid, Std_ReturnType* _rvPtr){
 	  if ((E_OK == *_rvPtr) && (exp == FALSE)) {
		#if (WDG_DEV_ERROR_DETECT == STD_ON)
 			 (void)Det_ReportError(WDG_MODULE_ID, 0, apiid, errid);
		#endif
 		 *_rvPtr = E_NOT_OK;
 	  }
 }


/* ----------------------------[Public Function]-----------------*/

/** @req SWS_Wdg_00031 The Wdg module shall not implement an interface for de-initialization/shutdown. */
/** @req SWS_Wdg_00086 The Wdg module shall statically check the configuration parameters (at the latest during compile time) for correctness. */
/** @req SWS_Wdg_00171 Wdg_ConfigType: Structure to hold the watchdog driver configuration set. */
/** !req SWS_Wdg_00025 If disabling the watchdog is not allowed (because pre-compile configuration parameter WdgDisableAllowed==OFF) and
 * if the default mode given in the provided configuration set disables the watchdog, the Wdg_Init function shall not
 * execute the initialization but raise the extended production error WDG_E_DISABLE_REJECTED.*/
/** !req SWS_Wdg_00051 The configuration set provided to the Wdg module initialization routine shall contain the hardware / driver specific parameters
 * to be used in the different watchdog modes.*/
/** !req SWS_Wdg_00078 The Wdg module shall add all parameters required for accessing the external watchdog hardware, e.g. the used SPI channel or
 * DIO port, to the module’s published parameters and to the module’s configuration parameters. */

/* @brief API that initializes the watchdog module
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] ConfigPtr - Pointer to configuration set
 */
void Wdg_Init(const Wdg_ConfigType* ConfigPtr) {
	Std_ReturnType validate_rv = E_OK;

	validate((boolean)(NULL_PTR != ConfigPtr), WDG_INIT_SERVICE_ID, WDG_E_PARAM_POINTER, &validate_rv);

	if(E_OK == validate_rv){
		Wdg_Hw_Init(ConfigPtr);
		/** @req:TMS570 4.1.2|4.3.0/SWS_Wdg_00019 When development error detection is enabled for the Wdg module: The Wdg_Init function shall set the Wdg module internal state
		* from WDG_UNINIT (the default state indicating a non-initialized module) to WDG_IDLE if the initialization was successful.*/
		moduleState = WDG_IDLE;
	}
}

/** @req SWS_Wdg_00105 Imported types: Dem_EventIdType, Dem_EventStatusType, Std_ReturnType, Std_VersionInfoType, WdgIf_ModeType */

/* @brief API that switches the watchdog into a certain mode.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] Mode - mode that watchdog should be switched into
 *  @retval E_OK       The mode is successfully switched into
 * 	@retval E_NOT_OK   The mode can not be successfully switched into
 */
Std_ReturnType Wdg_SetMode(WdgIf_ModeType Mode) {
	Std_ReturnType validate_rv = E_OK;

	/** @req SWS_Wdg_00091 When development error detection is enabled for the Wdg module: The Wdg_SetMode function shall check that the parameter Mode is within the allowed range.*/
#if defined (CFG_SAFETY_PLATFORM)
    /** @req SWS_Wdg_00091 When development error detection is enabled for the Wdg module: The Wdg_SetMode function shall check that the parameter Mode is within the allowed range.*/
    validate((boolean)((Mode == WDGIF_FAST_MODE) || (Mode == WDGIF_SLOW_MODE) || (Mode == WDGIF_OFF_MODE)), WDG_SET_MODE_SERVICE_ID, WDG_E_PARAM_MODE, &validate_rv);
    /** !req SWS_Wdg_00173 If switching the Wdg module and the watchdog hardware into the default mode is not possible,
     * e.g. because of inconsistent mode settings or because some timing constraints have not been met,
     * the Wdg_Init function shall raise the extended production error WDG_E_MODE_FAILED. */
    /** @req SWS_Wdg_00026 If disabling the watchdog is not allowed (e.g. in safety relevant systems, seeECUC_Wdg_00115) the Wdg_SetMode function shall check
     * whether the settings for the requested mode would disable the watchdog. Support: return E_NOT_OK    not support: report WDG_E_DISABLE_REJECTED
     */
    validate((boolean)(Mode != WDGIF_OFF_MODE), WDG_SET_MODE_SERVICE_ID, WDG_E_PARAM_MODE, &validate_rv);

    /** @req:TMS570|MPC5744P 4.1.2|4.3.0/SWS_Wdg_00017 When development error detection is enabled for the Wdg module: The Wdg_SetMode function shall check that the Wdg module state is
	 * 	WDG_IDLE (meaning the Wdg module and the watchdog hardware are initialized and the watchdog is currently not being triggered or switched).*/
    validate((boolean)(moduleState == WDG_IDLE), WDG_SET_MODE_SERVICE_ID, WDG_E_DRIVER_STATE, &validate_rv);

    if(E_OK == validate_rv){
    	moduleState = WDG_BUSY;
    	/** !req SWS_Wdg_00092 When development error detection is enabled for the Wdg module: The Wdg_SetMode function shall check that the (hardware specific) settings for the requested mode are within the allowed boundaries.*/
    	validate_rv = Wdg_Hw_SetMode(Mode);
    	moduleState = WDG_IDLE;
    }
	/** @req SWS_Wdg_00103 The Wdg_SetMode function shall return E_OK if the mode switch has been executed completely and successfully */
    return validate_rv;

#else
     /** @req SWS_Wdg_00160 The function Wdg_SetMode shall switch the watchdog driver from the current watchdog mode into the mode given by the argument
     * Mode. This means: By choosing one of a limited number of statically configured settings (e.g.toggle or window watchdog, different timeout periods)
     * the Wdg module and the watchdog hardware are switched to one of the following three different modes:
     * WDGIF_OFF_MODE
     * WDGIF_SLOW_MODE
     * WDGIF_FAST_MODE
     */
    validate((boolean)((Mode == WDGIF_FAST_MODE) || (Mode == WDGIF_OFF_MODE) || (Mode == WDGIF_SLOW_MODE)), WDG_SET_MODE_SERVICE_ID, WDG_E_PARAM_MODE, &validate_rv);

    /** @req:TMS570|MPC5744P 4.1.2|4.3.0/SWS_Wdg_00017 When development error detection is enabled for the Wdg module: The Wdg_SetMode function shall check that the Wdg module state is
     *  WDG_IDLE (meaning the Wdg module and the watchdog hardware are initialized and the watchdog is currently not being triggered or switched).*/
    validate((boolean)(moduleState == WDG_IDLE), WDG_SET_MODE_SERVICE_ID, WDG_E_DRIVER_STATE, &validate_rv);

    if(E_OK == validate_rv){
        moduleState = WDG_BUSY;
        /** !req SWS_Wdg_00092 When development error detection is enabled for the Wdg module: The Wdg_SetMode function shall check that the (hardware specific) settings for the requested mode are within the allowed boundaries.*/
        validate_rv = Wdg_Hw_SetMode(Mode);
        moduleState = WDG_IDLE;
    }
    /** @req SWS_Wdg_00103 The Wdg_SetMode function shall return E_OK if the mode switch has been executed completely and successfully */
    return validate_rv;
#endif

}

/** @req SWS_Wdg_00144
 * The Wdg Manager (or other entities) shall control the watchdog driver via a so called trigger condition: as long as the trigger condition is valid
 * the Wdg Driver services the watchdog hardware, if the trigger condition becomes invalid the Wdg Driver stops triggering and the watchdog expires.
 */
/** @req SWS_Wdg_00136 --need to be inspected
 * The function Wdg_SetTriggerCondition shall reset the watchdog timeout counter according to the timeout value passed. */
/** @req SWS_Wdg_00138 --need to be inspecteds
 * The timeout value passed shall be interpreted as 'milliseconds'. The conversion from milliseconds to the corresponding counter value
 * shall be done internally by the Wdg module.*/
/** !req SWS_Wdg_00139
 * The current watchdog mode shall be taken into account when calculating the counter value from the timeout parameter.*/
/** @req SWS_Wdg_00140
 * This function shall also allow to set 0 as the time frame for triggering which will result in an (almost) immediate stop of the
 * watchdog triggering and an (almost) instantaneous watchdog reset of the ECU. In case the counter value stored inside watchdog has the
 * value "0", the service Wdg_SetTriggerCondition shall do nothing, which means it shall ignore the counter passed by the parameter to
 * Wdg_SetTriggerCondition. */

/* @brief API that sets the timeout value for the trigger counter
  *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
  *         Synchronous
  *  @note  Non Reentrant
  *  @param[in] timeout - Timeout value (milliseconds) for setting the trigger counter
*/
void Wdg_SetTriggerCondition(uint16 timeout) {
	/** !req:TMS570 4.1.2|4.3.0/ SWS_Wdg_00146
	 * When development error detection is enabled for the module: The function Wdg_SetTriggerCondition shall check that the timeout parameter
	 * given is less or equal to the maximum timeout value (WdgMaxTimeout). If this is not the case the function shall not reload the timeout
	 * counter but raise the development error WDG_E_PARAM_TIMEOUT and return to the caller.
	 */
	Std_ReturnType validate_rv = E_OK;

	validate((boolean)(moduleState == WDG_IDLE), WDG_SET_TRIGGERING_CONDITION_SERVICE_ID, WDG_E_DRIVER_STATE, &validate_rv);
	if(E_OK == validate_rv){
		moduleState = WDG_BUSY;
		Wdg_Hw_SetTriggerCondition(timeout);
		moduleState = WDG_IDLE;
	}
}

#if (STD_ON == WDG_VERSION_INFO_API)
/* @brief API that returns the version information of the module
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Reentrant
 *  @param[out] versionInfo - Pointer to where to store the version information of this module.
 */
void Wdg_GetVersionInfo( Std_VersionInfoType* versioninfo ) {
    /** @req SWS_Wdg_00174 - If development error detection is enabled for the Wdg Driver module, the function Wdg_GetVersionInfo shall raise WDG_E_PARAM_POINTER,
     * if the argument is a NULL pointer and return without any action.
     **/
	Std_ReturnType validate_rv = E_OK;

	validate((boolean)(versioninfo != NULL_PTR), WDG_GET_VERSION_INFO_SERVICE_ID, WDG_E_PARAM_POINTER, &validate_rv);
    if(E_OK == validate_rv){
        versioninfo->vendorID = WDG_VENDOR_ID;
        versioninfo->moduleID = WDG_MODULE_ID;
        versioninfo->sw_major_version = WDG_SW_MAJOR_VERSION;
        versioninfo->sw_minor_version = WDG_SW_MINOR_VERSION;
        versioninfo->sw_patch_version = WDG_SW_PATCH_VERSION;
    }
}
#endif /* (STD_ON == WDG_VERSION_INFO_API) */

/** @}*/
/** @}*/
