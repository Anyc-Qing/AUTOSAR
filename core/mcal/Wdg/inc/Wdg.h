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

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */
/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|PPC|TMS570|MPC5607B|MPC5645S|RH850F1H|MPC5748G|MPC5744P */

/** @file Wdg.h
 *
 *  The Wdg driver provides services for initialization, changing the operation mode and setting the trigger condition (timeout).
 *  This file contains the API prototypes.
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
#ifndef WDG_H_
#define WDG_H_


/**
  * @name    Module ID and Version Number
  * @{
  */
#define WDG_MODULE_ID           102u /**< @brief Wdg Module Id  */
#define WDG_VENDOR_ID           60u  /**< @brief Wdg Vendor Id  */


/* ----------------------------[Version Check]-----------------*/
#if defined(CFG_TMS570LS12X)
#define WDG_SW_MAJOR_VERSION   3u /**< @brief Wdg Module Software Major Version Number for TMS570 */
#define WDG_SW_MINOR_VERSION   0u /**< @brief Wdg Module Software Minor Version Number for TMS570 */
#define WDG_SW_PATCH_VERSION   0u /**< @brief Wdg Module Software Patch Version Number for TMS570 */

#define WDG_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Wdg Module Autosar Major Version Number for TMS570 */
#define WDG_AR_RELEASE_MINOR_VERSION   3u /**< @brief Wdg Module Autosar Minor Version Number for TMS570 */
#define WDG_AR_RELEASE_PATCH_VERSION   0u /**< @brief Wdg Module Autosar Patch Version Number for TMS570 */

#else
/** @cond DOXYGEN_EXCLUDE */
#define WDG_SW_MAJOR_VERSION   2u /**< @brief Wdg Module Software Major Version Number for other architectures */
#define WDG_SW_MINOR_VERSION   0u /**< @brief Wdg Module Software Minor Version Number for other architectures */
#define WDG_SW_PATCH_VERSION   0u /**< @brief Wdg Module Software Patch Version Number for other architectures */

#define WDG_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Wdg Module Autosar Major Version Number for other architectures */
#define WDG_AR_RELEASE_MINOR_VERSION   1u /**< @brief Wdg Module Autosar Minor Version Number for other architectures */
#define WDG_AR_RELEASE_PATCH_VERSION   2u /**< @brief Wdg Module Autosar Patch Version Number for other architectures */
/** @endcond */
#endif
/** @} */


/** @req:TMS570 4.1.2|4.3.0/SWS_Wdg_00061 - The Wdg module shall adhere to the Fig-1 in Wdg driver SWS (ASR 4.3.0) */
#include "WdgIf_Types.h"
#include "Wdg_Cfg.h"	/* Needs to be after the version macro definitions */

#if defined(USE_KERNEL)
#include "Os.h"

/* Assign application according to define */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS) && !defined(WDG_ARC_ISR_APP)
#if ((OS_SC3 == STD_ON) || (OS_SC4 == STD_ON))
#error You must define WDG_ARC_ISR_APP
#else
#define WDG_ARC_ISR_APP             0
#endif
#endif

#endif

/* ----------------------------[Public Macros]-----------------*/
/** @req 4.1.2|4.3.0/SWS_Wdg_00010 - The Wdg module shall detect the following development errors */
/** !req:TMS570 4.1.2|4.3.0/SWS_Wdg_00178 Extended production errors: WDG_E_MODE_FAILED */
/** !req:TMS570 4.1.2|4.3.0/SWS_Wdg_00180 The extended production error WDG_E_MODE_FAILED shall be reported with FAILED when setting of the watchdog mode failed. */
/** !req:TMS570 4.1.2|4.3.0/SWS_Wdg_00181 The extended production error WDG_E_MODE_FAILED shall be reported with PASSED when setting of the watchdog mode not failed. */
/** !req:TMS570 4.1.2|4.3.0/SWS_Wdg_00179 Extended production errors: WDG_E_DISABLE_REJECTED */
/** !req:TMS570 4.1.2|4.3.0/SWS_Wdg_00182 The extended production error WDG_E_DISABLE_REJECTED shall be reported with FAILED when disabling of the watchdog mode failed. */
/** !req:TMS570 4.1.2|4.3.0/SWS_Wdg_00183 The extended production error WDG_E_DISABLE_REJECTED shall be reported with PASSED when disabling of the watchdog mode not failed. */

/**
  * @name    Error Code - AUTOSAR
  * @{
  */
#define WDG_E_DRIVER_STATE  0x10u	/**< @brief API service used in wrong context (e.g. module not initialized) */
#define WDG_E_PARAM_MODE    0x11u	/**< @brief API service called with wrong / inconsistent parameter(s) */
#define WDG_E_PARAM_CONFIG  0x12u	/**< @brief API service called with wrong / inconsistent parameter(s) */
#define WDG_E_PARAM_TIMEOUT 0x13u	/**< @brief The passed timeout value is higher than the maximum timeout value */
#define WDG_E_PARAM_POINTER 0x14u	/**< @brief API is called with wrong pointer value (e.g. NULL pointer) */
/** @} */


/** @} */
/**
  * @name    Service Id
  * @{
  */
/* Service Id */
#define WDG_INIT_SERVICE_ID                        0x00u	/**< @brief Service Id for Wdg_Init API */
#define WDG_SET_MODE_SERVICE_ID                    0x01u	/**< @brief Service Id for Wdg_SetMode API */
#define WDG_SET_TRIGGERING_CONDITION_SERVICE_ID    0x03u	/**< @brief Service Id for Wdg_SetTriggerCondition API */
#define WDG_GET_VERSION_INFO_SERVICE_ID            0x04u	/**< @brief Service Id for Wdg_GetVersionInfo API */
/** @} */


/*----------------------------[Internal Types]----------------*/
/** @typedef WdgInternalState
*   @brief   State of the Module, is specified by ASR.
*   This enum is used to define the state of the Wdg. Value range: WDG_UNINIT, WDG_IDLE, WDG_BUSY.
*/
typedef enum {
    WDG_UNINIT = 0u,	/**< @brief WDG_UNINIT state is assigned with value 0 and denotes that the Wdg module is not initialized*/
    WDG_IDLE,			/**< @brief WDG_IDLE state used to denote that the Wdg module is initialized and in state idle*/
    WDG_BUSY			/**< @brief WDG_BUSY state used to denote that the Wdg module is initialized and in state busy*/
} WdgInternalState;


/* ----------------------------[Public Functions]--------------*/
/** @req 4.1.2|4.3.0/SWS_Wdg_00106 - void Wdg_Init( const Wdg_ConfigType* ConfigPtr ) */
/** @brief API that initializes the watchdog
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] ConfigPtr - Pointer to configuration set
 */
void Wdg_Init (const Wdg_ConfigType* ConfigPtr);

/** @req 4.1.2|4.3.0/SWS_Wdg_00155 - void Wdg_SetTriggerCondition( uint16 timeout ) */
/** @brief API that sets the timeout value for the trigger counter
  *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
  *         Synchronous
  *  @note  Non Reentrant
  *  @param[in] timeout - Timeout value (milliseconds) for setting the trigger counter
*/
void Wdg_SetTriggerCondition (uint16 timeout);

/** @req 4.1.2|4.3.0/SWS_Wdg_00107 - Std_ReturnType Wdg_SetMode( WdgIf_ModeType Mode ) */
/** @brief API that switches the watchdog into a certain mode.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] Mode - mode that watchdog should be switched into
 *  @retval E_OK       The mode is successfully switched into
 * 	@retval E_NOT_OK   The mode can not be successfully switched into
 */
Std_ReturnType Wdg_SetMode (WdgIf_ModeType Mode);


#if (WDG_VERSION_INFO_API == STD_ON)
/** @req 4.1.2|4.3.0/SWS_Wdg_00109 - void Wdg_GetVersionInfo( Std_VersionInfoType* versioninfo )*/
/** @brief API that returns the version information of the module
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Synchronous
 *  @note  Reentrant
 *  @param[out] versionInfo - Pointer to where to store the version information of this module.
 */
void Wdg_GetVersionInfo( Std_VersionInfoType *versionInfo );
#endif


#endif /* WDG_H_ */

/** @}*/
/** @}*/
