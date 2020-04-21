/**
 * \file IfxPmsPm.h
 * \brief PMS  basic functionality
 * \ingroup IfxLld_Pms
 *
 * \version iLLD_1_0_0_12_0
 * \copyright Copyright (c) 2016 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 *
 *
 * \defgroup IfxLld_Pms_Std_Pm Pm Basic Functionality
 * \ingroup IfxLld_Pms_Std
 * \defgroup IfxLld_Pms_Std_Pm_Enumeration Enumerations
 * \ingroup IfxLld_Pms_Std_Pm
 * \defgroup IfxLld_Pms_Std_Pm_Data Structures Data Structures
 * \ingroup IfxLld_Pms_Std_Pm
 * \defgroup IfxLld_Pms_Std_Pm_System Modes System Modes
 * \ingroup IfxLld_Pms_Std_Pm
 * \defgroup IfxLld_Pms_Std_Pm_Cpu Modes Cpu Modes
 * \ingroup IfxLld_Pms_Std_Pm
 * \defgroup IfxLld_Pms_Std_Pm_Wakeup Mode WakeupModes
 * \ingroup IfxLld_Pms_Std_Pm
 */

#ifndef IFXPMSPM_H
#define IFXPMSPM_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "_Impl/IfxPms_cfg.h"
#include "Scu/Std/IfxScuWdt.h"
#include "IfxPms_reg.h"
#include "Cpu/Irq/IfxCpu_Irq.h"
#include "Scu/Std/IfxScuCcu.h"
#include "IfxCpu_bf.h"

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Pms_Std_Pm_Enumeration
 * \{ */
/** \brief The Digital filter enable/disabled
 * As defined in Ifx_PMS.PMSW.CR0.B.ESRxDFEN and Ifx_PMS.PMSW.CR0.B.PINxDFEN
 */
typedef enum
{
    IfxPmsPm_DigitalFilter_bypassed = 0,  /**< \brief The Filter is Bypassed */
    IfxPmsPm_DigitalFilter_used     = 1   /**< \brief The Filter is Used */
} IfxPmsPm_DigitalFilter;

/** \brief Edge detection control mode for ESR and PINA/PINB
 * As defined in Ifx_PMS.PMSW.CR0.B.ESRxEDCON  and Ifx_PMS.PMSW.CR0.B.PINxEDCON
 */
typedef enum
{
    IfxPmsPm_EdgeDetectionControl_never         = 0,  /**< \brief No Trigger is Generated */
    IfxPmsPm_EdgeDetectionControl_onRisingEdge  = 1,  /**< \brief Trigger is generated upon a Rising edge */
    IfxPmsPm_EdgeDetectionControl_onFallingEdge = 2,  /**< \brief Triggerr is generated upon a falling edge */
    IfxPmsPm_EdgeDetectionControl_always        = 3   /**< \brief A trigger is generated upon a either edges */
} IfxPmsPm_EdgeDetectionControl;

/** \brief System power mode
 * As defined in Ifx_SCU.PMCSR[x].B.REQSLP
 */
typedef enum
{
    IfxPmsPm_RequestPowerMode_run     = 0, /**< \brief Request CPU Run Mode */
    IfxPmsPm_RequestPowerMode_idle    = 1, /**< \brief Request CPU Idle Mode */
    IfxPmsPm_RequestPowerMode_sleep   = 2, /**< \brief Request CPU Sleep Mode */
    IfxPmsPm_RequestPowerMode_standby = 3  /**< \brief Request CPU Standby Mode */
} IfxPmsPm_RequestPowerMode;

/** \brief The RAM being used in Standby mode
 * As defined in Ifx_PMS.PMSW.CR0.B.STBYRAMSEL
 */
typedef enum
{
    IfxPmsPm_StandbyRamSupply_never       = 0,  /**< \brief Standby RAM is not supplied */
    IfxPmsPm_StandbyRamSupply_cpu0Block0  = 1,  /**< \brief Standby RAM (CPU0 dLMU RAM Block 0) is supplied */
    IfxPmsPm_StandbyRamSupply_cpu0Block01 = 2,  /**< \brief Standby RAM (CPU0 dLMU RAM Block0 + Block1) is supplied */
    IfxPmsPm_StandbyRamSupply_cpu1Block01 = 4,  /**< \brief Standby RAM (CPU1 dLMU RAM Block0 + Block1) is supplied */
    IfxPmsPm_StandbyRamSupply_cpu0Cpu1    = 7   /**< \brief Standby RAM (CPU0 dLMU RAM Block0 + Block1) &  (CPU1 dLMU RAM Block0 + Block1)  is supplied */
} IfxPmsPm_StandbyRamSupply;

/** \brief Wake up configuration defined in Ifx_PMS.PMSW.CR0.B.ESRxWKEN,Ifx_PMS.PMSW.CR0.B.PINxWKEN
 * and Ifx_PMS.PMSW.CR0.B.PORSTWKEN
 */
typedef enum
{
    IfxPmsPm_WakeupOn_esr0  = 0,  /**< \brief ESR0 Wake-up enable from Standby */
    IfxPmsPm_WakeupOn_esr1  = 1,  /**< \brief ESR1 Wake-up enable from Standby */
    IfxPmsPm_WakeupOn_pinA  = 2,  /**< \brief PINA Wake-up enable from Standby */
    IfxPmsPm_WakeupOn_pinB  = 3,  /**< \brief PINB Wake-up enable from Standby */
    IfxPmsPm_WakeupOn_porst = 4,  /**< \brief PORST Wake-up enable from Standby */
    IfxPmsPm_WakeupOn_timer = 5   /**< \brief WUT Wake-up enable from Standby */
} IfxPmsPm_WakeupOn;

/** \brief Select wakup timer operation mode
 * As defined in Ifx_PMS.PMSW.CR3.B.WUTMODE
 */
typedef enum
{
    IfxPmsPm_WakeupTimerMode_autoReload = 0,  /**< \brief WUT auto reload mode selected */
    IfxPmsPm_WakeupTimerMode_autoStop   = 1   /**< \brief WUT auto stop mode selected */
} IfxPmsPm_WakeupTimerMode;

/** \} */

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/** \addtogroup IfxLld_Pms_Std_Pm_Data Structures
 * \{ */
/** \brief Configure Wakeup in standby mode
 */
typedef struct
{
    IfxPmsPm_WakeupOn             wakeup;              /**< \brief wake-up configuration */
    IfxPmsPm_DigitalFilter        filter;              /**< \brief bypass/use digital filter */
    IfxPmsPm_EdgeDetectionControl trigger;             /**< \brief Enable Wake-up on rising or falling edge */
    IfxPmsPm_StandbyRamSupply     standbyRam;          /**< \brief RAM being supply during standby mode */
    IfxPmsPm_WakeupTimerMode      mode;                /**< \brief wake-up timer mode */
    uint32                        reloadCounter;       /**< \brief reload count from where value starts counting down used in case of WUT configuration */
} IfxPmsPm_WakeupConfig;

/** \} */

/** \addtogroup IfxLld_Pms_Std_Pm_System Modes
 * \{ */

/******************************************************************************/
/*-------------------------Inline Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief set system into sleep mode
 * \param powerMode Select System power mode
 * \return None
 *
 * IfxPmsPm_setSleepMode(IfxPmsPm_RequestPowerMode_idle);
 *
 */
IFX_INLINE void IfxPmsPm_setSleepMode(IfxPmsPm_RequestPowerMode powerMode);

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief set system into stand by mode
 * Note: In this API Alarm has been disabled.Enable of SMU alarm has to be taken care
 * seprately at application level
 * \param pms Pointer to Module Space
 * \param config Pointer to Wakeup configuration Structure
 * \param powerMode Selects System standby mode
 * \return None
 *
 * IfxPmsPm_WakeupConfig config;
 * config.wakeup =IfxPmsPm_WakeupOn_esr1;           //Wakeup using ESR1
 * config.filter      = IfxPmsPm_DigitalFilter_used;     //Digital Filter is used
 * config.trigger     = IfxPmsPm_EdgeDetectionControl_onRisingEdge; //Trigger is generated upon rising edge
 * config.standbyRam  = IfxPmsPm_StandbyRamSupply_cpu0Block0; // Standby RAM (CPU0 dLMU RAM Block 0) is supplied
 * IfxPmsPm_setStandbyMode(&MODULE_PMS,&config, IfxPmsPm_RequestPowerMode_standby);
 *
 */
IFX_EXTERN void IfxPmsPm_setStandbyMode(Ifx_PMS *pms, IfxPmsPm_WakeupConfig *config, IfxPmsPm_RequestPowerMode powerMode);

/** \} */

/** \addtogroup IfxLld_Pms_Std_Pm_Cpu Modes
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Set core mode(Idle/Run)
 * \param cpuIndex specifies cpu index
 * \param mode Select mode to be set to put CPU into IDLE/RUN State
 * \return TRUE: If activity successfully performed
 * FALSE: If Activity is not performed successfully
 *
 * IfxCpu_setCoreMode(&MODULE_CPU0, IfxCpu_CoreMode_idle);
 *
 */
IFX_EXTERN boolean IfxPmsPm_setCoreMode(IfxCpu_ResourceCpu cpuIndex, IfxCpu_CoreMode mode);

/** \} */

/** \addtogroup IfxLld_Pms_Std_Pm_Wakeup Mode
 * \{ */

/******************************************************************************/
/*-------------------------Global Function Prototypes-------------------------*/
/******************************************************************************/

/** \brief Enable Wakeup using PORST/ESR1/PINA/PINB/WUT
 * \param pms Pointer to PMS Module space
 * \param wakeup Pointer to  wakeup configuration strucutre
 * \return None
 */
IFX_EXTERN void IfxPmsPm_enableWakeup(Ifx_PMS *pms, IfxPmsPm_WakeupConfig *wakeup);

/** \} */

/******************************************************************************/
/*---------------------Inline Function Implementations------------------------*/
/******************************************************************************/

IFX_INLINE void IfxPmsPm_setSleepMode(IfxPmsPm_RequestPowerMode powerMode)
{
    uint16 cpuWdtPw = IfxScuWdt_getCpuWatchdogPassword();
    uint8  index    = (IfxCpu_getCoreIndex() + 3) % 6;
    IfxScuWdt_clearCpuEndinit(cpuWdtPw);
    MODULE_SCU.PMCSR[index].B.REQSLP = powerMode;
    IfxScuWdt_setCpuEndinit(cpuWdtPw);
}


#endif /* IFXPMSPM_H */
