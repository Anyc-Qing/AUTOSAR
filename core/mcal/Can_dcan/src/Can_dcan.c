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
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570|ZYNQ */

/** @file Can.c
 *
 *  The Can.c file contains the generic implementation of all the API mentioned in Can driver SWS document.
 *  The hardware specific implementations are done in Can_Hw_* .c file (depends on the architecture).
 *  Each API will have the Det error check and will call the the hardware specific implementation function if the check passes.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */
 /** \addtogroup Can
  *  This is the Mcal Can Group
  *  @{
  */


/* General requirements */
/** @req 4.1.2|4.3.0/SWS_Can_00035 The Can module does not provide callback functions (no Can_Cbk.h, see also SWS_Can_00244)*/
/** @req 4.1.2|4.3.0/SWS_Can_00079 The Can module shall fulfill all design and implementation guidelines described in [2].*/
/** @req 4.1.2/SWS_Can_00220 Precompile variant*/
/** @req 4.1.2|4.3.0/SWS_Can_00237 The Can module shall not transmit messages triggered by remote transmission requests.*/
/** @req 4.1.2|4.3.0/SWS_Can_00236 The Can module shall initialize the CAN HW to ignore any remote transmission requests.*/
/** @req 4.1.2|4.3.0/SWS_Can_00238 If the CAN controller is on-chip, the Can module shall not use any service of other drivers.*/
/** @req 4.1.2|4.3.0/SWS_Can_00103 After power-up/reset, the Can module shall be in the state CAN_UNINIT.*/
/** @req 4.1.2|4.3.0/SWS_Can_00104 The Can module shall be able to detect the following errors and exceptions depending on its configuration (default/production)*/
/** @req 4.1.2|4.3.0/SWS_Can_00413 Can_ConfigType*/

/* ----------------------------[includes]------------------------------------*/

#include "Can_dcan.h"
#if defined(USE_DEM)
#include "Dem.h"
#endif
#if defined(USE_DET)
#include "Det.h"
#endif
#include "CanIf_dcan_Cbk.h"
#include "SchM_Can_dcan.h"

#include "Os.h"
#include "Can_dcan_Internal.h"
#include "EcuM_Cbk.h"
#include "Can_MemMap.h"


/*lint -e904 MISRA:OTHER:Readability:[MISRA 2004 Rule 14.7, required], [MISRA 2012 Rule 15.5, advisory] */

/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[Version Check]-----------------*/
/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X)
#define CAN_SW_MAJOR_VERSION_INT   6u /**< @brief Can Module Software Major Version Number for TMS570 */
#define CAN_SW_MINOR_VERSION_INT   0u /**< @brief Can Module Software Minor Version Number for TMS570 */
#define CAN_SW_PATCH_VERSION_INT   0u /**< @brief Can Module Software Patch Version Number for TMS570 */

#define CAN_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Can Module Autosar Major Version Number for TMS570 */
#define CAN_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Can Module Autosar Minor Version Number for TMS570 */
#define CAN_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Can Module Autosar Patch Version Number for TMS570 */

#else
/** @cond DOXYGEN_EXCLUDE */
#define CAN_SW_MAJOR_VERSION_INT   5u /**< @brief Can Module Software Major Version Number for other architectures */
#define CAN_SW_MINOR_VERSION_INT   0u /**< @brief Can Module Software Minor Version Number for other architectures */
#define CAN_SW_PATCH_VERSION_INT   0u /**< @brief Can Module Software Patch Version Number for other architectures */

#define CAN_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Can Module Autosar Major Version Number for other architectures */
#define CAN_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Can Module Autosar Minor Version Number for other architectures */
#define CAN_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Can Module Autosar Patch Version Number for other architectures */
/** @endcond */
#endif
/** @} */

#if (CAN_SW_MAJOR_VERSION != CAN_SW_MAJOR_VERSION_INT) || (CAN_SW_MINOR_VERSION != CAN_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Can.c and Can_dcan.h"
#endif

#if (CAN_AR_MAJOR_VERSION != CAN_AR_RELEASE_MAJOR_VERSION_INT) || (CAN_AR_MINOR_VERSION != CAN_AR_RELEASE_MINOR_VERSION_INT)
#error "AR Version mismatch between Can.c and Can_dcan.h"
#endif

/* ----------------------------[private variables]---------------------------*/

Can_dcan_GlobalType Can_dcan_Global = { .initRun = CAN_UNINIT, }; /** @req 4.1.2/SWS_Can_00103 */
 Can_dcan_UnitType Can_dcan_Unit[6];

/* ----------------------------[function definitions]-------------------------------*/

static Can_ReturnType can_Transition( uint8 ch,  CanIf_ControllerModeType state , Can_StateTransitionType transition ) {

    Can_dcan_UnitType *unitPtr = &Can_dcan_Unit[ch];

    unitPtr->state = state;

    /* Save the transition for the Mode mainfunction */
    unitPtr->transition = transition;
    unitPtr->transitonPending = true;

    /* Make it happen in HW */
    return Can_dcan_Hw_SetControllerMode( ChannelToHwChannel(ch), transition );
}


/* ----------------------------[Static Function]---------------*/
/** @req 4.1.2|4.3.0/SWS_Can_00091 After return of the DET the Can module’s function that raised the default error shall return immediately.*/
/** @req 4.1.2|4.3.0/SWS_Can_00089 The Can module’s environment shall indicate Default errors only in the return values of a function of the Can module when DET is switched on and the function provides a return value. The returned value is CAN_NOT_OK.*/
/**
 * @brief  validate function that will be used in API's that can be used to check the expression and report Det errors
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @retval E_OK if exp was TRUE
 * @retval E_NOT_OK if exp was FALSE
 *
 */
static Std_ReturnType validate (boolean exp,uint8 apiid,uint8 errid ){
	Std_ReturnType rv = E_OK;

	if (exp == FALSE) {
#if (CAN_DEV_ERROR_DETECT == STD_ON)
		(void)Det_ReportError(CAN_MODULE_ID, 0, apiid, errid);
#endif
		rv = E_NOT_OK;
	}
	return rv;
}


/** @brief API that initializes the CAN hardware units and driver.
 *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
 *         Function have multiple exist points for readability.
 *         Synchronous
 *  @note  Non Reentrant
 *  @param[in] Config - Pointer to driver configuration
 */
void Can_dcan_Init(const Can_ConfigType *Config) {

    /* @req 4.1.2|4.3.0/SWS_Can_00053 Can_dcan_Init shall not change registers of CAN controller Hardware resources that are not used.*//* Don't change registers for controllers not used. */
    /* @req 4.1.2|4.3.0/SWS_Can_00239 The function Can_dcan_Init shall initialize all on-chip hardware resources that are used by the CAN controller. The only exception to this is the digital I/O pin configuration (of pins used by CAN), which is done by the port driver.*//* Init all on chip hardware */
    /* @req 4.1.2|4.3.0/SWS_Can_00250 The function Can_dcan_Init shall initialize several contents*//* Initialize variables, init controllers. */
    /* @req 4.1.2|4.3.0/SWS_Can_00021 The desired CAN controller configuration can be selected with the parameter Config.*/
    /* @req 4.1.2|4.3.0/SWS_Can_00291 Config is a pointer into an array of implementation specific data structure stored in ROM. The different controller configuration sets are located as data structures in ROM.*/
    /* @req 4.1.2|4.3.0/SWS_Can_00174 If default error detection for the Can module is enabled: The function Can_dcan_Init shall raise the error CAN_E_TRANSITION if the driver is not in state CAN_UNINIT.*/
    /* @req 4.1.2/SWS_Can_00175 */
    /* @req 4.1.2|4.3.0/SWS_Can_00223 void Can_dcan_Init( const Can_ConfigType* Config )*/

    uint8 hwCh = 0x0u;

    /* DET Error Check */
    if ( E_OK != validate((boolean) (Can_dcan_Global.initRun == CAN_UNINIT), CAN_INIT_SERVICE_ID, CAN_E_TRANSITION)) {
        return;
    }

    if ( E_OK != validate((boolean) (Config != NULL_PTR), CAN_INIT_SERVICE_ID, CAN_E_PARAM_POINTER)) {
        return;
    }

    /* Save the configuration */
    Can_dcan_Global.config = Config;

    for (uint8 ch = 0; ch < CAN_ARC_CTRL_CONFIG_CNT; ch++) {
        hwCh = ((uint8) Can_dcan_Global.config->CanConfigSetPtr->CanController[ch].CanHwUnitId);
        Can_dcan_Global.channelToHwChannel[ch] = hwCh;
        Can_dcan_Global.channelMap[hwCh] = ch;
        Can_dcan_Unit[ch].state = CANIF_CS_STOPPED;

    }

    Can_dcan_Hw_Init(Config);

    /** @req 4.1.2|4.3.0/SWS_Can_00246 The function Can_dcan_Init shall change the module state to CAN_READY, after initializing all controllers inside the HW Unit.*//* Should be done after initializing all controllers */
    Can_dcan_Global.initRun = CAN_READY;
}

#if ( CAN_VERSION_INFO_API == STD_ON )
/** @brief API that returns the version information of this module.
 *         Synchronous
 *  @note  Reentrant
 *  @param[out] versioninfo - Pointer to where to store the version information of this module.
 */
void Can_dcan_GetVersionInfo( Std_VersionInfoType* versioninfo) {

    /** @req 4.1.2|4.3.0/SWS_Can_00224 void Can_dcan_GetVersionInfo( Std_VersionInfoType* versioninfo )*/
    /** @req 4.1.2|4.3.0/SWS_Can_00177 If default error detection for the Can module is enabled: The function Can_dcan_GetVersionInfo shall raise the error CAN_E_PARAM_POINTER if the parameter versionInfo is a null pointer.*/
    if ( E_OK == validate( (boolean)( NULL_PTR != versioninfo ), CAN_GETVERSIONINFO_SERVICE_ID, CAN_E_PARAM_POINTER ) ) {
        versioninfo->vendorID = CAN_VENDOR_ID;
        versioninfo->moduleID = CAN_MODULE_ID;
        versioninfo->sw_major_version = CAN_SW_MAJOR_VERSION;
        versioninfo->sw_minor_version = CAN_SW_MINOR_VERSION;
        versioninfo->sw_patch_version = CAN_SW_PATCH_VERSION;
    }
}
#endif


/**
 * @brief This function performs software triggered state transitions of the CAN controller State machine.
 *        Function have multiple exist points for readability.
 * 		  Asynchronous
 * @note  Non Reentrant
 * @param[in] Controller - CAN controller id, for which the status shall be changed
 * @param[in] Transition - Transition value to request new CAN controller state
 * @return Can_ReturnType.
 * @retval CAN_OK: request accepted
 * @retval CAN_NOT_OK: request not accepted, a development error occurred
 */
Can_ReturnType Can_dcan_SetControllerMode( uint8 Controller, Can_StateTransitionType Transition )
{
    uint8			ch = Controller;
    uint8           hwCh = ChannelToHwChannel(ch);
    Can_ReturnType retVal = CAN_NOT_OK;

    /** @req 4.1.2|4.3.0/SWS_Can_00017 The function Can_dcan_SetControllerMode shall perform software triggered state transitions of the CAN controller State machine.*/
    /** @req 4.1.2|4.3.0/SWS_Can_00230 Can_ReturnType Can_dcan_SetControllerMode( uint8 Controller, Can_StateTransitionType Transition )*/
    /** @req 4.1.2|4.3.0/SWS_Can_00199 If default error detection for the Can module is enabled: if the parameter Controller is out of range, the function Can_dcan_SetControllerMode shall raise default error CAN_E_PARAM_CONTROLLER and return CAN_NOT_OK.*/
    Std_ReturnType validate_rv = E_OK;


    /** @req 4.1.2/SWS_Can_00199 */
    if( E_OK != validate((boolean)(Controller < CAN_ARC_LOG_UNIT_CNT), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_PARAM_CONTROLLER ) ) {
        return CAN_NOT_OK;
    }

    /** @req 4.1.2|4.3.0/SWS_Can_00198 If default error detection for the Can module is enabled: if the module is not yet initialized, the function Can_dcan_SetControllerMode shall raise default error CAN_E_UNINIT and return CAN_NOT_OK.*/
    if( E_OK != validate((boolean) (Can_dcan_Global.initRun == CAN_READY), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_UNINIT) ) {
        return CAN_NOT_OK;
    }

    switch (Transition) {
    case CAN_T_START:
        /* @req 4.0.3/CAN409 *//** @req 4.1.2/SWS_Can_00409 */
        validate_rv = validate((boolean)(Can_dcan_Unit[ch].state == CANIF_CS_STOPPED), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);
        if( validate_rv == E_OK ) {
            retVal = can_Transition( ch, CANIF_CS_STARTED,  Transition );

            /* @req 4.1.2|4.3.0/SWS_Can_00196 The function Can_dcan_SetControllerMode shall enable interrupts that are needed in the new state.*/
            /* @req 4.1.2|4.3.0/SWS_Can_00425 Enabling of CAN interrupts shall not be executed, when CAN interrupts have been disabled by function Can_dcan_DisableControllerInterrupts.*/

            /* Call Can_dcan_Hw_EnableControllerInterrupts instead of  Can_dcan_EnableControllerInterrupts so as not to  change the lock counter. */
            if( Can_dcan_Unit[ch].lockCnt == 0u ) {
                Can_dcan_Hw_EnableControllerInterrupts(hwCh);
            }
        }
        break;
    case CAN_T_WAKEUP:
        validate_rv = validate( (boolean)((Can_dcan_Unit[ch].state == CANIF_CS_SLEEP) || (Can_dcan_Unit[ch].state == CANIF_CS_STOPPED)), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION );
        if( validate_rv == E_OK ) {
            retVal = can_Transition( ch, CANIF_CS_STOPPED,  Transition );
        }
        break;
    case CAN_T_STOP:
        /** @req 4.0.3/CAN410 */
        /** @req 4.1.2/SWS_Can_00410 */

        validate_rv = validate( (boolean)((Can_dcan_Unit[ch].state == CANIF_CS_STARTED) || (Can_dcan_Unit[ch].state == CANIF_CS_STOPPED)), 0x3, CAN_E_TRANSITION );
        if( validate_rv == E_OK ) {
            retVal = can_Transition( ch, CANIF_CS_STOPPED,  Transition );

            /* @req 4.1.2|4.3.0/SWS_Can_00426 Disabling of CAN interrupts shall not be executed, when CAN interrupts have been disabled by function Can_dcan_DisableControllerInterrupts.*/
            if( Can_dcan_Unit[ch].lockCnt == 0u ) {
                Can_dcan_Hw_DisableControllerInterrupts(hwCh);
            }
        }
        break;
    case CAN_T_SLEEP:
        /* @req 4.1.2|4.3.0/SWS_Can_00411 When the function Can_dcan_SetControllerMode(CAN_CS_SLEEP) is entered and the CAN controller is neither in state STOPPED nor in state SLEEP, it shall detect a invalid state transition (Compare to SWS_Can_00200).*/
        /* @req 4.1.2|4.3.0/SWS_Can_00257 When the CAN hardware supports sleep mode and is triggered to transition into SLEEP state, the Can module shall set the controller to the SLEEP state from which the hardware can be woken over CAN Bus.*/
        /* @req 4.1.2|4.3.0/SWS_Can_00265 The function Can_dcan_SetControllerMode(CAN_CS_SLEEP) shall set the controller into sleep mode.*/

        validate_rv = validate((boolean)(Can_dcan_Unit[ch].state == CANIF_CS_STOPPED), 0x3, CAN_E_TRANSITION );
        if( E_OK == validate_rv ) {
            retVal = can_Transition( ch, CANIF_CS_STOPPED,  Transition );
        }

        break;
    default:
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError(CAN_MODULE_ID, 0, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);
#endif
        break;
    }


    return retVal;
}



/**
 * @brief This function de-initializes the module. Specified by ASR 4.3.0, not in ASR 4.1.2.
 *        Function have multiple exist points for readability.
 * 		  Synchronous
 * @note  Non Reentrant
 */
void Can_dcan_DeInit(void) {
    /** @req 4.3.0/SWS_Can_91002 void Can_dcan_DeInit( void )*/

    /** @req 4.3.0/SWS_Can_91011 The function Can_dcan_DeInit shall raise the error CAN_E_TRANSITION if the driver is not in state CAN_READY */
    if( E_OK != validate((boolean) (Can_dcan_Global.initRun == CAN_READY), CAN_DEINIT_SERVICE_ID, CAN_E_TRANSITION) ) {
        return;
    }

    for (uint8 ch = 0; ch < CAN_ARC_CTRL_CONFIG_CNT; ch++) {

        Can_dcan_Hw_DisableControllerInterrupts(ChannelToHwChannel(ch));

        /** @req 4.3.0/SWS_Can_91012 If development error detection for the Can module is enabled: The function Can_dcan_DeInit shall raise the error CAN_E_TRANSITION if any of the CAN controllers is in state STARTED.*/
        if( E_OK != validate((boolean) ((Can_dcan_Unit[ch].state) != CANIF_CS_STARTED), CAN_DEINIT_SERVICE_ID, CAN_E_TRANSITION) ) {
            return;
        }

        Can_dcan_Unit[ch].lockCnt = 0;
        /** @req 4.3.0/SWS_Can_91009 The function Can_dcan_DeInit shall change the module state to CAN_UNINIT before de-initializing all controllers inside the HW unit*/
        /** @req 4.3.0/SWS_Can_91010 The function Can_dcan_DeInit shall set all CAN controllers in the state UNINIT*/
        Can_dcan_Unit[ch].state = CANIF_CS_UNINIT;
    }

    Can_dcan_Hw_DeInit();

    Can_dcan_Global.config = NULL;
    /** @req 4.3.0/SWS_Can_91009 The function Can_dcan_DeInit shall change the module state to CAN_UNINIT before de-initializing all controllers inside the HW unit*/
    /** @req 4.3.0/SWS_Can_91010 The function Can_dcan_DeInit shall set all CAN controllers in the state UNINIT*/
    Can_dcan_Global.initRun = CAN_UNINIT;
}



/**
 * @brief This function disables all interrupts for this CAN controller.
 *        Function have multiple exist points for readability.
 * 		  Synchronous
 * @note  Reentrant
 * @param[in] Controller - CAN controller id, for which the interrupts shall be disabled.
 */
void Can_dcan_DisableControllerInterrupts(uint8 Controller) {
    /** @req 4.1.2|4.3.0/SWS_Can_00206 If default error detection for the Can module is enabled: The function Can_dcan_DisableControllerInterrupts shall raise the error CAN_E_PARAM_CONTROLLER if the parameter Controller is out of range.*/
    /** @req 4.1.2|4.3.0/SWS_Can_00049 The function Can_dcan_DisableControllerInterrupts shall access the CAN controller registers to disable all interrupts for that CAN controller only, if interrupts for that CAN Controller are enabled.*/
    /** @req 4.1.2|4.3.0/SWS_Can_00202 When Can_dcan_DisableControllerInterrupts has been called several times, Can_dcan_EnableControllerInterrupts must be called as many times before the interrupts are re-enabled.*/
    /** @req 4.1.2|4.3.0/SWS_Can_00205 If default error detection for the Can module is enabled: The function Can_dcan_DisableControllerInterrupts shall raise the error CAN_E_UNINIT if the driver not yet initialized.*/
    /** @req 4.1.2|4.3.0/SWS_Can_00231 void Can_dcan_DisableControllerInterrupts( uint8 Controller )*/
    Std_ReturnType validate_rv;

    validate_rv = validate((boolean) (Controller < CAN_ARC_LOG_UNIT_CNT), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_PARAM_CONTROLLER);
    if ( E_OK != validate_rv) {
        return;
    }

    /** @req 4.1.2|4.3.0/SWS_Can_00209 If default error detection for the Can module is enabled: The function Can_dcan_EnableControllerInterrupts shall raise the error CAN_E_UNINIT if the driver not yet initialized.*/
    validate_rv = validate((boolean) (Can_dcan_Global.initRun == CAN_READY), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );
    if ( E_OK != validate_rv) {
        return;
    }

    SchM_Enter_Can_EA_0();

    Can_dcan_Hw_DisableControllerInterrupts(ChannelToHwChannel(Controller));

    /* Increment Disable Counter */
    Can_dcan_Unit[Controller].lockCnt++;

    SchM_Exit_Can_EA_0();
}


/**
 * @brief This function enables all allowed interrupts for this CAN controller.
 *        Function have multiple exist points for readability.
 * 		  Synchronous
 * @note  Reentrant
 * @param[in] Controller - CAN controller id, for which the interrupts shall be re-enabled.
 */
void Can_dcan_EnableControllerInterrupts(uint8 Controller) {
    /** @req 4.1.2|4.3.0/SWS_Can_00210 If default error detection for the Can module is enabled: The function Can_dcan_EnableControllerInterrupts shall raise the error CAN_E_PARAM_CONTROLLER if the parameter Controller is out of range.*/
    /** @req 4.1.2|4.3.0/SWS_Can_00050 The function Can_dcan_EnableControllerInterrupts shall enable all interrupts that must be enabled according the current software status.*/
    /** @req 4.1.2|4.3.0/SWS_Can_00232 void Can_dcan_EnableControllerInterrupts( uint8 Controller )*/

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType validate_rv;

    validate_rv = validate((boolean) (Controller < CAN_ARC_LOG_UNIT_CNT), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_PARAM_CONTROLLER );
    if ( E_OK != validate_rv) {
        return;
    }
    validate_rv = validate((boolean) (Can_dcan_Global.initRun == CAN_READY), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );
    if ( E_OK != validate_rv) {
        return;
    }
#endif

    SchM_Enter_Can_EA_0();
    
    if (Can_dcan_Unit[Controller].lockCnt == 0) {
        /** @req 4.1.2|4.3.0/SWS_Can_00208 The function Can_dcan_EnableControllerInterrupts shall perform no action when Can_dcan_DisableControllerInterrupts has not been called before.*/
        /* Do nothing */
    } else {
        Can_dcan_Unit[Controller].lockCnt--;
        if (Can_dcan_Unit[Controller].lockCnt == 0) {
            Can_dcan_Hw_EnableControllerInterrupts(ChannelToHwChannel(Controller));
        }
    }
    
    SchM_Exit_Can_EA_0();
}


/**
 * @brief This function is called by CanIf to pass a CAN message to CanDrv for transmission.
 *        Function have multiple exist points for readability.
 * 		  Synchronous
 * @note  Reentrant (thread-safe)
 * @param[in] Hth - information which HW-transmit handle shall be used for transmit. Implicitly this is also the information about the controller to use because the Hth numbers are unique inside one hardware unit.
 * @param[in] PduInfo - Pointer to SDU user memory, Data Length and Identifier.
 * @return Can_ReturnType
 * @retval CAN_OK: Write command has been accepted
 * @retval CAN_NOT_OK: Development error occurred
 * @retval CAN_BUSY: No TX hardware buffer available or pre-emptive call of Can_dcan_Write that can't be implemented re-entrant
 */
Can_ReturnType Can_dcan_Write(Can_HwHandleType Hth, const Can_PduType *PduInfo) {

    /** @req 4.1.2|4.3.0/SWS_Can_00233 Can_ReturnType Can_dcan_Write( Can_HwHandleType Hth, const Can_PduType* PduInfo )*/
    /** @req 4.1.2|4.3.0/SWS_Can_00212 The function Can_dcan_Write shall perform following actions if the hardware transmit object is free:*/
    /** @req 4.1.2|4.3.0/SWS_Can_00011 The Can module shall directly copy the data from the upper layer buffers. It is the responsibility of the upper layer to keep the buffer consistent until return of function call (Can_dcan_Write).*/
    /** @req 4.1.2|4.3.0/SWS_Can_00275 The function Can_dcan_Write shall be non-blocking.*/
	/** @req 4.1.2|4.3.0/SWS_Can_00216 If default error detection for the Can module is enabled: The function Can_dcan_Write shall raise the error CAN_E_UNINIT and shall return CAN_NOT_OK if the driver is not yet initialized.*/

    Can_ReturnType ret;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    Std_ReturnType validate_rv;

    validate_rv = validate((boolean)(Can_dcan_Global.initRun == CAN_READY), CAN_WRITE_SERVICE_ID, CAN_E_UNINIT);
    if ( E_OK != validate_rv) {
        return CAN_NOT_OK;
    }
    /** @req 4.1.2|4.3.0/SWS_Can_00219 If default error detection for CanDrv is enabled: Can_dcan_Write() shall raise CAN_E_PARAM_POINTER and shall return CAN_NOT_OK if the parameter PduInfo is a null pointer.*/
    validate_rv = validate((boolean)(PduInfo != NULL_PTR), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_POINTER);
    if ( E_OK != validate_rv) {
        return CAN_NOT_OK;
    }
    validate_rv = validate((boolean)(PduInfo->sdu != NULL_PTR), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_POINTER);
    if ( E_OK != validate_rv) {
        return CAN_NOT_OK;
    }
    /** @req 4.1.2|4.3.0/SWS_Can_00218 The function Can_dcan_Write shall return CAN_NOT_OK and if default error detection for the CAN module is enabled shall raise the error CAN_E_PARAM_DATA_LENGTH:*/
    validate_rv = validate((boolean)(PduInfo->length <= 8), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_DATA_LENGTH);
    if ( E_OK != validate_rv) {
        return CAN_NOT_OK;
    }
    /** @req 4.1.2|4.3.0/SWS_Can_00217 If default error detection for the Can module is enabled: The function Can_dcan_Write shall raise the error CAN_E_PARAM_HANDLE and shall return CAN_NOT_OK if the parameter Hth is not a configured Hardware Transmit Handle.*/
    validate_rv = validate((boolean)(Hth < NUM_OF_HOHS ), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_HANDLE);
    if ( E_OK != validate_rv) {
        return CAN_NOT_OK;
    }
#endif

    // We cannot allow an interrupt or other task to play with the COM, MC and ARB registers here.
    SchM_Enter_Can_EA_0();
    ret = Can_dcan_Hw_Write(Hth, PduInfo);
    SchM_Exit_Can_EA_0();

    return ret;
}


#if (CAN_AR_VERSION < 40300 )
/**
 * @brief Changes baudrate for a controller. This API is specified by ASR 4.1.2, but not in ASR 4.3.0
 *        Function have multiple exist points for readability.
 * 		  Synchronous
 * @note  Non Reentrant
 * @param[in] Controller - controller id
 * @param[in] Baudrate - in kpbs
 * @return Std_ReturnType.
 * @retval E_OK: Service request accepted, baudrate change started
 * @retval E_NOT_OK: Service request not accepted
 */
Std_ReturnType Can_dcan_ChangeBaudrate(uint8 Controller, const uint16 Baudrate) {

	Std_ReturnType validate_rv = E_OK;
   	Std_ReturnType rv = E_NOT_OK;
	
    /** @req 4.1.2/SWS_Can_00449 */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
	 /** @req 4.1.2/SWS_Can_00450 */
    validate_rv = validate((boolean)(Can_dcan_Global.initRun == CAN_READY), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_UNINIT);
    if ( E_OK != validate_rv) {
        return E_NOT_OK;
    }

	/** @req 4.1.2/SWS_Can_00452 */
    validate_rv = validate((boolean)(Controller < CAN_ARC_CTRL_CONFIG_CNT), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_CONTROLLER);
    if ( E_OK != validate_rv) {
        return E_NOT_OK;
    }

	/** @req 4.1.2/SWS_Can_00451 */
    validate_rv = validate((boolean)(Can_dcan_CheckBaudrate(Controller, Baudrate) == E_OK), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_BAUDRATE);
    if ( E_OK != validate_rv) {
        return E_NOT_OK;
    }

	/** @req 4.1.2/SWS_Can_00453 */
    validate_rv = validate((boolean)(Can_dcan_Unit[Controller].state==CANIF_CS_STOPPED), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_TRANSITION);
    if ( E_OK != validate_rv) {
        return E_NOT_OK;
    }
#endif

    const Can_ControllerConfigType *config = &Can_dcan_Global.config->CanConfigSetPtr->CanController[Controller];

    /* Check if the baudrate is supported */
    for( uint32 i=0; i < config->CanControllerSupportedBaudratesCount; i++) {
        if (config->CanControllerSupportedBaudrates[i].CanControllerBaudRate == Baudrate) {
            /* We have found match */
            rv = Can_dcan_Hw_ChangeBaudrate( ChannelToHwChannel(Controller), &config->CanControllerSupportedBaudrates[i]);
        }
    }

    return rv ;
}


/**
 * @brief Checks if a baudrate is supported for a controller.	Specified in ASR 4.1.2, not in ASR 4.3.0.
 *        Function have multiple exist points for readability.
 * 		  Synchronous
 * @note  Reentrant
 * @param[in] Controller - controller id
 * @param[in] Baudrate - in kbps
 * @return Std_ReturnType.
 * @retval E_OK: Baudrate supported by the CAN Controller
 * @retval E_NOT_OK: Baudrate not supported / invalid CAN controller
 */
Std_ReturnType Can_dcan_CheckBaudrate(uint8 Controller, const uint16 Baudrate) {
    /** @req 4.1.2/SWS_Can_00454 *//* API */
    Std_ReturnType validate_rv = E_NOT_OK;

	/** @req 4.1.2/SWS_Can_00454 */

#if (CAN_DEV_ERROR_DETECT == STD_ON)

	/** @req 4.1.2/SWS_Can_00456 */

    validate_rv = validate((boolean)(Can_dcan_Global.initRun == CAN_READY), CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_UNINIT);
    if ( E_OK != validate_rv) {
        return E_NOT_OK;
    }

    /** @req 4.1.2/SWS_Can_00457 */
    validate_rv = validate((boolean)((Can_dcan_Global.configured & (1uL << Controller)) == (1uL << Controller)) , CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_CONTROLLER );
    if ( E_OK != validate_rv) {
        return E_NOT_OK;
    }
    /** @req 4.1.2/SWS_Can_00458 */
    validate_rv = validate((boolean)(Baudrate <= 1000), CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_BAUDRATE );
    if ( E_OK != validate_rv) {
        return E_NOT_OK;
    }
#endif
    const Can_ControllerConfigType *ctrlConfig = &Can_dcan_Global.config->CanConfigSetPtr->CanController[Controller];

    for (uint16 i = 0u; i < ctrlConfig->CanControllerSupportedBaudratesCount; i++) {
        if (ctrlConfig->CanControllerSupportedBaudrates[i].CanControllerBaudRate == Baudrate) {
            validate_rv = E_OK;
            break;
        }
    }

    return validate_rv;
}

#endif

#if (CAN_USE_WRITE_POLLING == STD_ON)
/**
 * @brief This function performs the polling of TX confirmation and TX cancellation confirmation when CAN_TX_PROCESSING is set to POLLING.
 *        Function have multiple exist points for readability.
 */
void Can_dcan_MainFunction_Write( void )
{
    Std_ReturnType validate_rv;

    /** @req 4.1.2/SWS_Can_00225 */
    /** @req 4.1.2/SWS_Can_00179 */
    validate_rv = validate((boolean)(Can_dcan_Global.initRun == CAN_READY), CAN_MAINFUNCTION_WRITE_SERVICE_ID, CAN_E_UNINIT );
    if ( E_OK != validate_rv) {
        return;
    }

    Can_dcan_Hw_MainFunction_Write();
    return;
}
#endif

#if (CAN_USE_READ_POLLING == STD_ON)
/**
 * @brief This function performs the polling of RX indications when CAN_RX_PROCESSING is set to POLLING.
 *        Function have multiple exist points for readability.
 */
void Can_dcan_MainFunction_Read( void )
{
    Std_ReturnType validate_rv;

    /** @req 4.1.2/SWS_Can_00226 */
    /** @req 4.1.2/SWS_Can_00181 */
    validate_rv = validate((boolean)(Can_dcan_Global.initRun == CAN_READY), CAN_MAINFUNCTION_READ_SERVICE_ID, CAN_E_UNINIT );
    if ( E_OK != validate_rv) {
        return;
    }

    Can_dcan_Hw_MainFunction_Read();
    return;
}
#endif

#if (CAN_USE_BUSOFF_POLLING == STD_ON)
/**
 * @brief This function performs the polling of bus-off events that are configured statically as 'to be polled'.
 *        Function have multiple exist points for readability.
 */
void Can_dcan_MainFunction_BusOff( void )
{
    Std_ReturnType validate_rv;

    /** @req 4.1.2/SWS_Can_00227 */
    /** @req 4.1.2/SWS_Can_00184 */
    validate_rv = validate((boolean)(Can_dcan_Global.initRun == CAN_READY), CAN_MAINFUNCTION_BUSOFF_SERVICE_ID, CAN_E_UNINIT );
    if ( E_OK != validate_rv) {
        return;
    }

    Can_dcan_Hw_MainFunction_BusOff();
    return;
}
#endif

#if (CAN_USE_WAKEUP_POLLING == STD_ON)
/**
 * @brief This function performs the polling of wake-up events that are configured statically as 'to be polled'.
 *        Function have multiple exist points for readability.
 */
void Can_MainFunction_Wakeup( void )
{
    Std_ReturnType validate_rv;

    /** @req 4.1.2/SWS_Can_00186 */
    validate_rv = validate((boolean)(Can_dcan_Global.initRun == CAN_READY), CAN_MAINFUNCTION_WAKEUP_SERVICE_ID, CAN_E_UNINIT );
    if ( E_OK != validate_rv) {
        return;
    }

    Can_dcan_Hw_MainFunction_Wakeup();
    return;
}

#endif


#if (ARC_CAN_ERROR_POLLING == STD_ON)
/**
 * This function performs the polling of error events that are configured statically as
 * 'to be polled'.
 *  Function have multiple exist points for readability.
 */
void Can_Arc_MainFunction_Error(void)
{
    Std_ReturnType validate_rv;

    /* Error polling events (not in req spec)*/
    validate_rv = validate((boolean)(Can_dcan_Global.initRun == CAN_READY), CAN_MAINFUNCTION_ERROR_SERVICE_ID, CAN_E_UNINIT );
    if ( E_OK != validate_rv) {
        return;
    }

    Can_dcan_Arc_Hw_MainFunction_Error();
    return;
}
#endif

/**
 * @brief This function performs the polling of CAN controller mode transitions.
 *        Function have multiple exist points for readability.
 */
void Can_dcan_MainFunction_Mode(void) {
    /** @req 4.1.2|4.3.0/SWS_Can_00368 void Can_dcan_MainFunction_Mode( void )*//* API */
    /** @req 4.1.2|4.3.0/SWS_Can_00369 The function Can_dcan_MainFunction_Mode shall implement the polling of CAN status register flags to detect transition of CAN Controller state. Compare to chapter 7.3.2.*/
    /** @req 4.1.2/SWS_Can_00379 */
    Can_Arc_ModeType hwMode;
    CanIf_ControllerModeType canIfMode = CANIF_CS_UNINIT;

#if (CAN_DEV_ERROR_DETECT == STD_ON)
    if( E_OK !=  validate((boolean) (Can_dcan_Global.initRun == CAN_READY), CAN_MAIN_FUNCTION_MODE_SERVICE_ID, CAN_E_UNINIT ) ) {
        return;
    }
#endif

    /* What happens here:
     * If there is a mode change Can_dcan_SetControllerMode() will have been called with a new mode.
     * The mode will be set in HW. The job here is to get the HW state and check if it's
     * what it is supposed to be. If so a state change is indicated to CanIf through a callback
     *
     * This means mapping the states : CAN_T_START, CAN_T_STOP, CAN_T_SLEEP, CAN_T_WAKEUP
     */

    /* Loop over all configured controllers */
    for (uint8 ch = 0; ch < CAN_ARC_LOG_UNIT_CNT; ch++) {
        boolean clearPending = TRUE;

        if ( FALSE == Can_dcan_Unit[ch].transitonPending) {
            continue;
        }

        hwMode = Can_dcan_Hw_GetControllerMode(ChannelToHwChannel(ch));

        if( CAN_CTRL_PENDING == hwMode ) {
            /* HW is not done yet */
            continue;
        }

        /* Check transition*/
        switch (Can_dcan_Unit[ch].transition) {
            case CAN_T_START:
                if (hwMode == CAN_CTRL_MODE_COMM) {
                    canIfMode = CANIF_CS_STARTED;
                }
                break;
            case CAN_T_STOP:
            case CAN_T_WAKEUP:
                if (hwMode == CAN_CTRL_MODE_STOP) {
                    canIfMode = CANIF_CS_STOPPED;
                }
                break;
            case CAN_T_SLEEP:
                if (hwMode == CAN_CTRL_MODE_SLEEP) {
                    canIfMode = CANIF_CS_SLEEP;
                }
                break;
            default:
                // No action necessary
                clearPending = FALSE;
                break;
        }

        if (canIfMode != CANIF_CS_UNINIT) {
            /** @req 4.1.2|4.3.0/SWS_Can_00373 The function Can_Mainfunction_Mode shall call the function CanIf_dcan_ControllerModeIndication to notify the upper layer about a successful state transition of the corresponding CAN controller referred by abstract CanIf ControllerId, in case the state transition was triggered by function Can_dcan_SetControllerMode.*/
            /** @req 4.1.2|4.3.0/SWS_Can_00370 The function Can_Mainfunction_Mode shall poll a flag of the CAN status register until the flag signals that the change takes effect and notify the upper layer with function CanIf_dcan_ControllerModeIndication about a successful state transition referring to the corresponding CAN controller with the abstract CanIf ControllerId.*/
            CanIf_dcan_ControllerModeIndication(ch, canIfMode);
        }
        if (clearPending == TRUE) {
            Can_dcan_Unit[ch].transitonPending = FALSE;
        }
    }
}

#ifdef HOST_TEST
Std_ReturnType Can_dcan_Test_DriverStateIsUninit(void) {
    return (Can_dcan_Global.initRun == CAN_UNINIT) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_dcan_Test_DriverStateIsReady(void) {
    return (Can_dcan_Global.initRun == CAN_READY) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_dcan_Test_AllUnitsInState(CanIf_ControllerModeType state) {

    for (uint8 ch = 0; ch < CAN_ARC_CTRL_CONFIG_CNT; ch++) {
        if (Can_dcan_Unit[ch].state != state) {
            return E_NOT_OK;
        }
    }

    return E_OK;
}


#endif /* HOST_TEST */

/** @}*/
/** @}*/
