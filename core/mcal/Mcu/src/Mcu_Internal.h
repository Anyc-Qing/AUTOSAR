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

/** @tagSettings DEFAULT_ARCHITECTURE=RH850F1H|TMS570|MPC5607B|MPC5645S|MPC5646B|MPC5748G|MPC5744P */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2|4.3.0 */

#ifndef MCU_INTERNAL_H_
#define MCU_INTERNAL_H_


/* Development error macros. */
/** @req 4.1.2|4.3.0/SWS_Mcu_00163 - Optional Interfaces (Section 8.6.2) API Det_ReportError */

/** VALIDATE and VALIDATE_W_RV macros are still used for other architectures other than TMS570 */
#if ( MCU_DEV_ERROR_DETECT == STD_ON )

#if !defined(USE_DET)
#error DET not configured when MCU_DEV_ERROR_DETECT is set
#endif

#define VALIDATE(_exp,_api,_err ) \
        if( !(_exp) ) { \
          (void)Det_ReportError(MCU_MODULE_ID,0,_api,_err); \
          return; \
        }

#define VALIDATE_W_RV(_exp,_api,_err,_rv ) \
        if( !(_exp) ) { \
          (void)Det_ReportError(MCU_MODULE_ID,0u,_api,_err); \
          return (_rv); \
        }
#define REPORT_ERROR(_api,_err) \
        (void)Det_ReportError(MCU_MODULE_ID,0u,_api,_err)
#else
#define VALIDATE(_exp,_api,_err )
#define VALIDATE_W_RV(_exp,_api,_err,_rv )
#define REPORT_ERROR(_api,_err)
#endif


/**
 * Type that holds all global data for MCU
 */
typedef struct
{
    boolean              initRun;      /**< @brief Set if Mcu_Init() have been called                 */
    const Mcu_ConfigType *config;      /**< @brief Saved pointer to the configuration from Mcu_Init() */
    Mcu_ClockType        clockSetting; /**< @brief Saved clock setting from Mcu_InitClock()           */
    Mcu_RawResetType     rawResetvalue; /**< @brief Reset value */
    Mcu_ResetType        resetReason;  /**< @brief Reset Reason */
} Mcu_GlobalType;

/*lint -e9003 MISRA:FALSE_POSITIVE:could define variable 'Mcu_Global' at block scope[MISRA 2012 Rule 8.9, advisory]*/
extern Mcu_GlobalType Mcu_Global;

void              Mcu_Hw_Init(const Mcu_ConfigType *ConfigPtr);
Std_ReturnType    Mcu_Hw_InitClock(const Mcu_ClockSettingConfigType *clkPtr);
Mcu_PllStatusType Mcu_Hw_GetPllStatus(void);
void              Mcu_Hw_SetMode( Mcu_ModeType mcuMode);
void              Mcu_Hw_PerformReset(void);
Std_ReturnType    Mcu_Hw_DistributePllClock(void);


#endif /* MCU_INTERNAL_H_ */
