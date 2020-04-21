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
/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|PPC|TMS570|MPC5607B|MPC5645S|RH850F1H|MPC5748G */

/** @file Wdg_Internal.h
 *  This files contains the hardware specific API definitions.
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

#ifndef WDG_INTERNAL_H_
#define WDG_INTERNAL_H_

#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM) || defined (WDG_USE_DEM)
#include "Dem.h"
#endif


#if !defined(CFG_TMS570)
#if (WDG_DEV_ERROR_DETECT)
#define VALIDATE(_exp,_api,_err ) \
        /*lint -save -e506 -e774*/ \
        if( !(_exp) ) { \
          (void)Det_ReportError(WDG_MODULE_ID,0,_api,_err); \
          return; /*lint -restore*/\
        }
#define VALIDATE_RV(_exp,_api,_err,_ret ) \
        if( !(_exp) ) { \
          (void)Det_ReportError(WDG_MODULE_ID,0,_api,_err); \
          return _ret; \
        }
#define VALIDATE_FAIL(_api,_err) \
          (void)Det_ReportError(WDG_MODULE_ID,0,_api,_err); \
          return
#define VALIDATE_FAIL_RV(_api,_err,_ret ) \
          (void)Det_ReportError(WDG_MODULE_ID,0,_api,_err); \
          return _ret
#define VALIDARE_FAIL_REPORT(_api,_err) \
        (void)Det_ReportError(WDG_MODULE_ID,0,_api,_err)
#else
#define VALIDATE(_exp,_api,_err )
#define VALIDATE_RV(_exp,_api,_err,_ret )
#define VALIDATE_FAIL(_api,_err)
#define VALIDATE_FAIL_RV(_api,_err,_ret )
#define VALIDARE_FAIL_REPORT(_api,_err)
#endif

#if defined(USE_DEM) || defined (CFG_WDG_USE_DEM)
#define WDG_REPORT_DEM_ERROR(event, status) if (event != DEM_EVENT_ID_NULL) { Dem_ReportErrorStatus(event, status); }
#else
#define WDG_REPORT_DEM_ERROR(event, status)
#endif
#endif


#define MAX_FAST_PERIOD_HERZ	200

/* ----------------------------[HW Specific Functions]---------*/

/** @brief Calculate the timeout for the watchdog hardware, the value will be written to DWDPRLD register
 *  @param[in] period - The timeout in Hz
 *  @retval	Value to be written to DWDPRLD.
 */
uint32 calcWatchdogTimeout(uint16 period);

/** @brief TMS570 hardware specific implementation of Wdg_SetTriggerCondition.
 *  @param[in] timeout - Timeout value (milliseconds) for setting the trigger counter
 */
void Wdg_Hw_SetTriggerCondition(uint16 timeout);

#if defined (CFG_TMS570) || defined (CFG_PPC)

/** @brief TMS570 hardware specific implementation of Wdg_Init
 *  @param[in] ConfigPtr - Pointer to configuration set
 */
void Wdg_Hw_Init(const Wdg_ConfigType* ConfigPtr);

/** @brief TMS570 hardware specific implementation of Wdg_SetMode
 *  @param[in] Mode - mode that watchdog should be switched into
 */
Std_ReturnType Wdg_Hw_SetMode(WdgIf_ModeType Mode);

/** @brief Writes the WDKEY register and decreases trigger counter value.
 */
void Wdg_Hw_KickWdg(void);

#else

Std_ReturnType Wdg_Hw_Init(const Wdg_ConfigType* ConfigPtr);
Std_ReturnType Wdg_Hw_SetMode(WdgIf_ModeType Mode, const Wdg_ConfigType* ConfigPtr, uint8 callingServiceId);
/**
 * __brief Validates that timeout is within the allowed range.
 * __param timeout This is the watchdog timeout period for WDGIF_FAST_MODE or
 * WDGIF_SLOW_MODE.
 * __return E_OK if the timeout is valid, else E_NOT_OK.
 */
Std_ReturnType Wdg_Hw_ValidateTimeout(uint16 timeout);		// used by rh850

#endif


/* ----------------------------[Test Function]-----------------*/
#ifdef HOST_TEST
uint32 Wdg_Arc_GetTriggerCounter(void);
#endif
#endif /* WDG_INTERNAL_H_ */

/** @}*/
/** @}*/
