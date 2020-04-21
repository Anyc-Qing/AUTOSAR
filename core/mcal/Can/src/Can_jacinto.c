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

/** @tagSettings DEFAULT_ARCHITECTURE=JACINTO5|JACINTO6 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

/* General requirements */
/** @req 4.1.2/SWS_Can_00035 *//* No callbacks */
/** @req 4.1.2/SWS_Can_00079 *//* Coding guidelines */
/** @req 4.1.2/SWS_Can_00220 *//* Precompile variant */
/** @req 4.1.2/SWS_Can_00237 *//* No transmit triggered by RTR */
/** @req 4.1.2/SWS_Can_00236 *//* No transmit triggered by RTR */
/** @req 4.1.2/SWS_Can_00238 *//* On-chip controller, does not use other drivers */
/** @req 4.1.2/SWS_Can_00103 */
/** @req 4.1.2/SWS_Can_00104 */
/** @req 4.1.2|4.3.0/SWS_Can_00413 Can_ConfigType*/

#include "Can.h"
#include "irq_jacinto.h"
#include "Can_Hw_jacinto.h"
#if defined(USE_DEM)
#include "Dem.h"
#endif
#if defined(USE_DET)
#include "Det.h"
#endif
#include "CanIf_Cbk.h"
#include "SchM_Can.h"
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
#include "isr.h"
#endif
#include "Mcu.h"
#include "arc.h"
#include <string.h>


#include "Os.h"
#include "Can_Internal.h"
#include "EcuM_Cbk.h"
#include "MemMap.h"


#define GET_PRIVATE_DATA(_controller) &CanUnits[_controller]


/** @req 4.0.3/CAN027 */
/** @req 4.1.2/SWS_Can_00091*/
/** @req 4.1.2/SWS_Can_00089*/
#if ( CAN_DEV_ERROR_DETECT == STD_ON )
#define VALIDATE(_exp,_api,_err) \
        if( !(_exp) ) { \
          (void)Det_ReportError(CAN_MODULE_ID,0,_api,_err); \
          return CAN_NOT_OK; \
        }

#define VALIDATE_STD_RV(_exp,_api,_err) \
        if( !(_exp) ) { \
          (void)Det_ReportError(CAN_MODULE_ID,0,_api,_err); \
          return E_NOT_OK; \
        }

#define VALIDATE_NO_RV(_exp,_api,_err) \
        if( !(_exp) ) { \
          (void)Det_ReportError(CAN_MODULE_ID,0,_api,_err); \
          return; \
        }

#define DET_REPORTERROR(_x,_y,_z,_q) Det_ReportError(_x, _y, _z, _q)
#else
#define VALIDATE(_exp,_api,_err)
#define VALIDATE_STD_RV(_exp,_api,_err)
#define VALIDATE_NO_RV(_exp,_api,_err)
#define DET_REPORTERROR(_x,_y,_z,_q)
#endif

#if !defined(USE_DEM)
// If compiled without the DEM, calls to DEM are simply ignored.
#define Dem_ReportErrorStatus(...)
#endif








extern const Can_ControllerConfigType CanControllerConfigData[];








/* Mapping between HRH and Controller//HOH */
typedef struct Can_Arc_ObjectHOHMapStruct {
    CanControllerIdType CanControllerRef;
    const Can_HardwareObjectType* CanHOHRef;
} Can_Arc_ObjectHOHMapType;









/* Driver must know how often Can_DisableControllerInterrupts() has been called */
static uint32 IntDisableCount[CAN_ARC_CTRL_CONFIG_CNT];



/* ----------------------------[Static Function]---------------*/
/**
 * @brief  validate function that will be used in API's that can be used to check the expression and report Det errors
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[inout] _rvPtr - Returns the validity of the expression provided
 */
static inline void validate (boolean exp,uint8 apiid,uint8 errid, Std_ReturnType* _rvPtr){
	  if ((E_OK == *_rvPtr) && (exp == FALSE)) {
		#if (CAN_DEV_ERROR_DETECT == STD_ON)
			 /** @req:TMS570 4.1.2|4.3.0/SWS_Adc_00377 Det_ReportError */
			 (void)Det_ReportError(CAN_MODULE_ID, 0, apiid, errid);
		#endif
		 *_rvPtr = E_NOT_OK;
	  }
}








static inline const Can_HardwareObjectType * Can_FindTxHoh(Can_HwHandleType hth) {
    const Can_HardwareObjectType * hoh = &Can_Global.config->CanConfigSetPtr->ArcCanHardwareObjects[hth];
    if ((hoh->CanObjectType != CAN_OBJECT_TYPE_TRANSMIT) || (hoh->CanObjectId != hth)) {
        return NULL;
    }
    return hoh;
}



static inline uint8 Can_FindControllerId(Can_HwHandleType handle) {
    const Can_HardwareObjectType * hoh = &Can_Global.config->CanConfigSetPtr->ArcCanHardwareObjects[handle];
    return hoh->ArcCanControllerId;
}

static void Can_SetId(Can_IdTypeType idType, Can_RegisterType * regs, const Can_PduType *PduInfo) {

    if (idType == CAN_ID_TYPE_STANDARD) {
        /* Standard ID */
        regs->IFx[CAN_REG_IF_1].ARB |= (PduInfo->id & STD_ID_MASK) << CAN_REG_IFX_ARB_STDID_BIT;
    } else if (idType == CAN_ID_TYPE_EXTENDED) {
        /* Extended ID */
        regs->IFx[CAN_REG_IF_1].ARB |= PduInfo->id & EXT_ID_MASK;
    } else {
        /* Mixed ID */
        if ((PduInfo->id & EXT_ID_BIT) == EXT_ID_BIT) {
            /* Extended ID */
            regs->IFx[CAN_REG_IF_1].ARB |= (1uL << CAN_REG_IFX_ARB_XTD_BIT);
            regs->IFx[CAN_REG_IF_1].ARB |= PduInfo->id & EXT_ID_MASK;
        } else {
            /* Standard ID */
            regs->IFx[CAN_REG_IF_1].ARB &= ~(1uL << CAN_REG_IFX_ARB_XTD_BIT);
            regs->IFx[CAN_REG_IF_1].ARB |= (PduInfo->id & STD_ID_MASK) << CAN_REG_IFX_ARB_STDID_BIT;
        }
    }
}























void Can_Init(const Can_ConfigType *Config) {
    /** @req 4.1.2/SWS_Can_00053 *//* Don't change registers for controllers not used. */
    /** @req 4.1.2/SWS_Can_00239 *//* Init all on chip hardware */
    /** @req 4.1.2/SWS_Can_00250 *//* Initialize variables, init controllers. */
    /** @req 4.1.2/SWS_Can_00021 */
    /** @req 4.1.2/SWS_Can_00291 */
    /** @req 4.1.2/SWS_Can_00174 */
    /** @req 4.1.2/SWS_Can_00175 */
    /** @req 4.1.2/SWS_Can_00223 */
    /* DET Error Check */
	Std_ReturnType validate_rv = E_OK;
    validate((boolean)(Can_Global.initRun == CAN_UNINIT), CAN_INIT_SERVICE_ID, CAN_E_TRANSITION, &validate_rv);

    validate((boolean)(Config != NULL), CAN_INIT_SERVICE_ID, CAN_E_PARAM_POINTER, &validate_rv);

    if(E_OK == validate_rv){
        SchM_Enter_Can_EA_0();

        Can_Global.config = Config;
        Can_Hw_Init(Config);

        SchM_Exit_Can_EA_0();

        /** @req 4.1.2/SWS_Can_00246 *//* Should be done after initializing all controllers */
        Can_Global.initRun = CAN_READY;
    }

}

#if ( CAN_VERSION_INFO_API == STD_ON )
void Can_GetVersionInfo( Std_VersionInfoType* versioninfo) {
	Std_ReturnType validate_rv = E_OK;
    /* @req SWS_Can_00224 */
    /* @req SWS_Can_00177 */
	validate((boolean)( NULL != versioninfo ), CAN_GETVERSIONINFO_SERVICE_ID, CAN_E_PARAM_POINTER, &validate_rv);

    versioninfo->vendorID = CAN_VENDOR_ID;
    versioninfo->moduleID = CAN_MODULE_ID;
    versioninfo->sw_major_version = CAN_SW_MAJOR_VERSION;
    versioninfo->sw_minor_version = CAN_SW_MINOR_VERSION;
    versioninfo->sw_patch_version = CAN_SW_PATCH_VERSION;
}
#endif


extern Can_RegisterType* CanRegs[];
Can_ReturnType Can_SetControllerMode(uint8 Controller, Can_StateTransitionType Transition) {

    Can_ReturnType status = CAN_OK;
    uint32 ErrCounter = CAN_TIMEOUT_DURATION;
    uint32 RegBuf;
    /** @req 4.1.2/SWS_Can_00017 */
    /** @req 4.1.2/SWS_Can_00230 */
    /** @req 4.0.3/CAN199 *//** @req 4.1.2/SWS_Can_00199 */
    Std_ReturnType validate_rv = E_OK;

    /** @req 4.0.3/CAN198 *//** @req 4.1.2/SWS_Can_00198 */
    validate((boolean)(Can_Global.initRun == CAN_READY), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_UNINIT, &validate_rv);

    validate((boolean)(getControllerConfigIdx(Controller) < CAN_CONTROLLER_CNT), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_PARAM_CONTROLLER, &validate_rv);




    Can_UnitType *canUnit = GET_PRIVATE_DATA(Controller);
    const Can_ControllerConfigType * controllerConfig = GET_CONTROLLER_CONFIG(Controller);
    Can_RegisterType *canCtrlRegs = CanRegs[controllerConfig->CanControllerId];

    canUnit->pendingStateIndication = CAN_CTRL_INDICATION_NONE;

    /** @req 4.1.2/SWS_Can_00417 */
    switch (Transition) {
    case CAN_T_START:
        /** @req 4.0.3/CAN200 *//** @req 4.1.2/SWS_Can_00200 */
        /** @req 4.0.3/CAN409 *//** @req 4.1.2/SWS_Can_00409 */
        /** @req 4.1.2/SWS_Can_00261 */
        VALIDATE(canUnit->state == CANIF_CS_STOPPED, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);

        SchM_Enter_Can_EA_0();

        /* Clear Init Bit */
        canCtrlRegs->CTL &= ~CAN_REG_CTL_INIT_MASK;
        /* Clear Status Register */
        canCtrlRegs->SR = (
                CAN_REG_ES_LEC_MASK |
                (1uL << CAN_REG_ES_TXOK_BIT) |
                (1uL << CAN_REG_ES_RXOK_BIT) |
                (1uL << CAN_REG_ES_PER_BIT)
                );

        /** @req 4.1.2/SWS_Can_00196 */
        canUnit->state = CANIF_CS_STARTED;

        /** @req 4.1.2/SWS_Can_00425 */
        /* Call Can_Hw_EnableControllerInterrupts instead of
         * Can_EnableControllerInterrupts so as not to
         * change the lock counter. */
        if (IntDisableCount[Controller] == 0) {
            Can_Hw_EnableControllerInterrupts(Controller);
        }

        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_START;

        SchM_Exit_Can_EA_0();

        break;

    case CAN_T_WAKEUP:
        /** @req 4.0.3/CAN412 *//** @req 4.1.2/SWS_Can_00412 */
        VALIDATE(((canUnit->state == CANIF_CS_SLEEP) || (canUnit->state == CANIF_CS_STOPPED)), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);

        SchM_Enter_Can_EA_0();

        /* Clear Power down bit */
        canCtrlRegs->CTL &= ~(1uL << CAN_REG_CTL_PDR_BIT);
        canUnit->state = CANIF_CS_STOPPED;
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_STOP;

        SchM_Exit_Can_EA_0();

        break;

    case CAN_T_STOP:

        SchM_Enter_Can_EA_0();

        /** @req 4.1.2/SWS_Can_00263 */
        /** @req 4.1.2/SWS_Can_00197 *//* Disable interrupts */
        /** @req 4.1.2/SWS_Can_00282 */
        /** @req 4.1.2/SWS_Can_00283 */
        /* Set Init Bit */
        canCtrlRegs->CTL |= CAN_REG_CTL_INIT_MASK;
        canUnit->state = CANIF_CS_STOPPED;

        /** @req 4.1.2/SWS_Can_00426 */
        /* Call Can_Hw_DisableControllerInterrupts instead of
         * Can_DisableControllerInterrupts so as not to
         * change the lock counter.
         * If the disable count is bigger than 0 then interrupts
         * already have been disabled. */
        if (IntDisableCount[Controller] == 0) {
            Can_Hw_DisableControllerInterrupts(Controller);
        }

        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_STOP;

        SchM_Exit_Can_EA_0();

        break;

    case CAN_T_SLEEP:
        /** @req 4.0.3/CAN411 *//** @req 4.1.2/SWS_Can_00411 */
        /** @req 4.1.2/SWS_Can_00257 */
        /** @req 4.1.2/SWS_Can_00265 */
        VALIDATE(canUnit->state == CANIF_CS_STOPPED, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);

        SchM_Enter_Can_EA_0();

        /* Set Power down bit */
        canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_PDR_BIT);
        /* Save actual Register status */
        RegBuf = canCtrlRegs->CTL;
        /* Disable WUBA and Status Interrupts */
        canCtrlRegs->CTL &= ~((1uL << CAN_REG_CTL_WUBA_BIT) | (1uL << CAN_REG_CTL_SIE_BIT));
        /* Wait until Local Power Down Mode acknowledged */
        while ((canCtrlRegs->SR & (1uL << CAN_REG_ES_PDA_BIT)) == 0) {
            /* Check if a WakeUp occurs */
            if ((canCtrlRegs->SR & (1uL << CAN_REG_ES_WKPEND_BIT)) == (1uL << CAN_REG_ES_WKPEND_BIT)) {
                status = CAN_NOT_OK;
                break;
            }
            ErrCounter--;
            if (ErrCounter == 0) {
                Dem_ReportErrorStatus(DemConf_DemEventParameter_CAN_E_TIMEOUT, DEM_EVENT_STATUS_FAILED);
                ErrCounter = CAN_TIMEOUT_DURATION;
                status = CAN_NOT_OK;
                break;
            }
        }
        /* Reset Control Register */
        canCtrlRegs->CTL = RegBuf;
        canUnit->state = CANIF_CS_SLEEP;
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_SLEEP;

        SchM_Exit_Can_EA_0();

        break;

    default:
        /** @req 4.0.3/CAN200 *//** @req 4.1.2/SWS_Can_00200 */
        VALIDATE(canUnit->state == CANIF_CS_STOPPED, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);
        break;
    }

    return status;
}







#if ((CAN_AR_MAJOR_VERSION == 4) && (CAN_AR_MINOR_VERSION == 3) && (CAN_AR_PATCH_VERSION == 0))
void Can_DeInit(void){

    Can_UnitType *canUnit;
    const Can_ControllerConfigType *canHwConfig;
    uint8 ctlrId;

    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }

    for (uint8 configId = 0; configId < CAN_ARC_CTRL_CONFIG_CNT; configId++) {

        canHwConfig = GET_CONTROLLER_CONFIG(configId);
        ctlrId = canHwConfig->CanControllerId;

        Can_DisableControllerInterrupts(ctlrId);

        canUnit = GET_PRIVATE_DATA(ctlrId);
        canUnit->state = CANIF_CS_UNINIT;
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_NONE;
        canUnit->mxBoxBusyMask = 0;
        memset(&canUnit->transmittedPduIds[0], 0, sizeof(canUnit->transmittedPduIds));
        /* MaxBoxes - initialized statically, never changes. */
        canUnit->WakeupSrc = 0;

        /* Reset the lock count. */
           IntDisableCount[configId] = 0;
    }

    Can_Global.config = NULL;
    Can_Global.initRun = CAN_UNINIT;
}

#else
void Can_Arc_DeInit(void) {

    Can_UnitType *canUnit;
    const Can_ControllerConfigType *canHwConfig;
    uint8 ctlrId;

    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }

    for (uint8 configId = 0; configId < CAN_ARC_CTRL_CONFIG_CNT; configId++) {

        canHwConfig = GET_CONTROLLER_CONFIG(configId);
        ctlrId = canHwConfig->CanControllerId;

        Can_DisableControllerInterrupts(ctlrId);

        canUnit = GET_PRIVATE_DATA(ctlrId);
        canUnit->state = CANIF_CS_UNINIT;
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_NONE;
        canUnit->mxBoxBusyMask = 0;
        memset(&canUnit->transmittedPduIds[0], 0, sizeof(canUnit->transmittedPduIds));
        /* MaxBoxes - initialized statically, never changes. */
        canUnit->WakeupSrc = 0;

        /* Reset the lock count. */
           IntDisableCount[configId] = 0;
    }

    Can_Global.config = NULL;
    Can_Global.initRun = CAN_UNINIT;

    return;
}
#endif


Std_ReturnType Can_ChangeBaudrate(uint8 Controller, const uint16 Baudrate) {
    /** @req 4.0.3/CAN449 *//** @req 4.1.2/SWS_Can_00449 */

    /** @req 4.0.3/CAN450 *//** @req 4.1.2/SWS_Can_00450 */
    VALIDATE_STD_RV( (Can_Global.initRun == CAN_READY), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_UNINIT );

    /** @req 4.0.3/CAN452 *//** @req 4.1.2/SWS_Can_00452 */
    VALIDATE_STD_RV( (Controller < CAN_ARC_CTRL_CONFIG_CNT), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_CONTROLLER );

    /** @req 4.0.3/CAN451 *//** @req 4.1.2/SWS_Can_00451 */
    VALIDATE_STD_RV(Can_CheckBaudrate(Controller, Baudrate) == E_OK, CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_BAUDRATE);

    /** @req 4.0.3/CAN453 *//** @req 4.1.2/SWS_Can_00453 */
    VALIDATE_STD_RV( ((GET_PRIVATE_DATA(Controller))->state == CANIF_CS_STOPPED), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_TRANSITION );

    return E_NOT_OK ; // Not implemented.
}



void Can_DisableControllerInterrupts(uint8 Controller) {

    /** @req 4.0.3/CAN206 *//** @req 4.1.2/SWS_Can_00206*/
    /** @req 4.1.2/SWS_Can_00049*/
    /** @req 4.1.2/SWS_Can_00202*/
    /** @req 4.1.2/SWS_Can_00205 */
    /** @req 4.1.2/SWS_Can_00231 */
    VALIDATE_NO_RV( (getControllerConfigIdx(Controller) < CAN_CONTROLLER_CNT), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_PARAM_CONTROLLER );

    /** @req 4.0.3/CAN209 *//** @req 4.1.2/SWS_Can_00209 */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );

    SchM_Enter_Can_EA_0();

    /** @req 4.1.2/SWS_Can_00049 */
    if (IntDisableCount[Controller] == 0) {
        Can_Hw_DisableControllerInterrupts(Controller);
    }

    /* Increment Disable Counter */
    IntDisableCount[Controller]++;

    SchM_Exit_Can_EA_0();
}

void Can_EnableControllerInterrupts(uint8 Controller) {
    /** @req 4.0.3/CAN210 *//** @req 4.1.2/SWS_Can_00210 */
    /** @req 4.1.2/SWS_Can_00050 */
    /** @req 4.1.2/SWS_Can_00232 */
    VALIDATE_NO_RV( (getControllerConfigIdx(Controller) < CAN_CONTROLLER_CNT), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_PARAM_CONTROLLER );

    /** @req 4.0.3/CAN209 *//** @req 4.1.2/SWS_Can_00209 */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );

    SchM_Enter_Can_EA_0();

    /** @req 4.1.2/SWS_Can_00208 */
    if (IntDisableCount[Controller] > 0) {
        if (IntDisableCount[Controller] == 1) {
            Can_Hw_EnableControllerInterrupts(Controller);
        }

        IntDisableCount[Controller]--;
    }

    SchM_Exit_Can_EA_0();
}

extern uint8 ElementIndex[];
Can_ReturnType Can_Write(Can_HwHandleType Hth, const Can_PduType *PduInfo) {

    uint8 ControllerId;
    uint32 ArbRegValue;
    uint8 DataByteIndex;
    /** @req 4.1.2/SWS_Can_00233 */
    /** @req 4.1.2/SWS_Can_00212 */
    /** @req 4.1.2/SWS_Can_00011 */
    /** @req 4.1.2/SWS_Can_00275 */
    /** @req 4.0.3/CAN216 *//** @req 4.1.2/SWS_Can_00216 */
    VALIDATE( (Can_Global.initRun == CAN_READY), CAN_WRITE_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN219 *//** @req 4.1.2/SWS_Can_00219 */
    VALIDATE( (PduInfo != NULL), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_POINTER );
    VALIDATE( (PduInfo->sdu != NULL), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_POINTER );
    /** @req 4.0.3/CAN218 *//** @req 4.1.2/SWS_Can_00218 */
    VALIDATE( (PduInfo->length <= 8), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_DATA_LENGTH );

    ControllerId = Can_FindControllerId(Hth);
    const Can_HardwareObjectType *hoh = Can_FindTxHoh(Hth);

    /** @req 4.0.3/CAN217 *//** @req 4.1.2/SWS_Can_00217 */
    VALIDATE( (Hth < NUM_OF_HOHS ), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_HANDLE );
    VALIDATE( (hoh != NULL ), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_HANDLE );

    VALIDATE( (hoh->CanObjectType == CAN_OBJECT_TYPE_TRANSMIT ), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_HANDLE );

    const Can_ControllerConfigType * controllerConfig = GET_CONTROLLER_CONFIG(ControllerId);
    Can_UnitType * canUnit = GET_PRIVATE_DATA(controllerConfig->CanControllerId);
    Can_RegisterType *canCtrlRegs = CanRegs[controllerConfig->CanControllerId];
    Can_ReturnType ret = CAN_OK;

    // We cannot allow an interrupt or other task to play with the COM, MC and ARB registers here.
    SchM_Enter_Can_EA_0();

    /* Check if any mailbox is free. If not, return CAN_BUSY. */
    /** @req 4.1.2/SWS_Can_00039 */
    if (hoh->ArcMailboxMask != (hoh->ArcMailboxMask & canUnit->mxBoxBusyMask)) {

        /* Bring Id Value to appropriate format and set ArbRegValue */
        if (hoh->CanIdType == CAN_ID_TYPE_EXTENDED) {
            /* MsgVal, Ext, Transmit, Extended Id */
            ArbRegValue = (
                    (1uL << CAN_REG_IFX_ARB_MSGVAL_BIT) |
                    (1uL << CAN_REG_IFX_ARB_XTD_BIT) |
                    (1uL << CAN_REG_IFX_ARB_DIR_BIT));

        } else {
            /* MsgVal, Std, Transmit, Standard Id */
            ArbRegValue = (
                    (1uL << CAN_REG_IFX_ARB_MSGVAL_BIT) |
                    (1uL << CAN_REG_IFX_ARB_DIR_BIT));
        }

        DCAN_WAIT_UNTIL_NOT_BUSY(ControllerId, CAN_REG_IF_1);

        /* Set NewDat, TxIE (dep on ControllerConfig), TxRqst, EoB and DLC */
        canCtrlRegs->IFx[CAN_REG_IF_1].MCTL = IF_MC_MASK((uint32) PduInfo->length, 0uL, 0uL, 1uL, 1uL);

        /* Set ArbitrationRegister */
        canCtrlRegs->IFx[CAN_REG_IF_1].ARB = ArbRegValue;
        Can_SetId(hoh->CanIdType, canCtrlRegs, PduInfo);

        /* Set Databytes */
        /** @req 4.1.2/SWS_Can_00059 */
        /** !req 4.1.2/SWS_Can_00427 */
#if defined(CFG_JACINTO)
        for (DataByteIndex = 0; DataByteIndex < PduInfo->length; DataByteIndex++) {
            canCtrlRegs->IFx[CAN_REG_IF_1].DATx[DataByteIndex] = PduInfo->sdu[DataByteIndex];
        }
#elif defined(CFG_TMS570)
        for (DataByteIndex = 0; DataByteIndex < PduInfo->length; DataByteIndex++) {
            canCtrlRegs->IFx[CAN_REG_IF_1].DATx[ElementIndex[DataByteIndex]] = PduInfo->sdu[DataByteIndex];
        }
#else
#error DCAN not supported for the used MCU.
#endif

        /* Find first free mb box */
        uint64 mbMask = hoh->ArcMailboxMask;
        uint64 mbNr = 0;

        for (; mbMask; mbMask &= ~(1uLL << mbNr)) {

            mbNr = ilog2_64(mbMask);

            if (!(canUnit->mxBoxBusyMask & mbMask)) {
                break;
            }
        }

        canUnit->mxBoxBusyMask |= (1uLL<< mbNr); // Mark selected box as busy.
        /** @req 4.1.2/SWS_Can_00276 */
        canUnit->transmittedPduIds[mbNr] = PduInfo->swPduHandle;

        /* Start transmission to MessageRAM */
        canCtrlRegs->IFx[CAN_REG_IF_1].CMD = 0x00BF0000uL | (mbNr + 1);

    } else {
        /** @req 4.1.2/SWS_Can_00214 */
        ret = CAN_BUSY;
    }

    SchM_Exit_Can_EA_0();

    return ret;
}

#if (CAN_USE_WRITE_POLLING == STD_ON)
void Can_MainFunction_Write()
{
#error "Polling write not supported by this driver."
    /** !req 4.0.3/CAN225 *//** !req 4.1.2/SWS_Can_00225 */
    /** !req 4.0.3/CAN031 *//** !req 4.1.2/SWS_Can_00031 */
    /** !req 4.1.2/SWS_Can_00441 */
    /** !req 4.0.3/CAN179 *//** !req 4.1.2/SWS_Can_00179 */
}
#endif

#if (CAN_USE_READ_POLLING == STD_ON)
void Can_MainFunction_Read()
{
#error "Polling read not supported by this driver."
    /** !req 4.0.3/CAN226 *//** !req 4.1.2/SWS_Can_00226 */
    /** !req 4.0.3/CAN108 *//** !req 4.1.2/SWS_Can_00108 */
    /** !req 4.1.2/SWS_Can_00442 */
    /** !req 4.0.3/CAN181 *//** !req 4.1.2/SWS_Can_00181 */
}
#endif

#if (CAN_USE_BUSOFF_POLLING == STD_ON)
void Can_MainFunction_BusOff()
{
#error "Polling bus off not supported by this driver."
    /** !req 4.0.3/CAN227 *//** !req 4.1.2/SWS_Can_00227 */
    /** !req 4.0.3/CAN109 *//** !req 4.1.2/SWS_Can_00109 */
    /** !req 4.0.3/CAN184 *//** !req 4.1.2/SWS_Can_00184 */
}
#endif

#if (CAN_USE_WAKEUP_POLLING == STD_ON)
void Can_MainFunction_Wakeup()
{
#error "Polling wakeup not supported by this driver."
    /** !req 4.0.3/CAN228 *//** !req 4.1.2/SWS_Can_00228 */
    /** !req 4.0.3/CAN112 *//** !req 4.1.2/SWS_Can_00112 */
    /** !req 4.0.3/CAN186 *//** !req 4.1.2/SWS_Can_00186 */
}
#endif

Std_ReturnType Can_CheckBaudrate(uint8 Controller, const uint16 Baudrate) {
    /** @req 4.0.3/CAN454 *//** @req 4.1.2/SWS_Can_00454 *//* API */

    // Checks that the target baudrate is found among the configured
    // baudrates for this controller.
    const Can_ControllerConfigType *config;
    Std_ReturnType supportedBR;

    /** @req 4.0.3/CAN456 UNINIT *//** @req 4.1.2/SWS_Can_00456 */
    VALIDATE_STD_RV( (Can_Global.initRun == CAN_READY), CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN457 Invalid controller *//** @req 4.1.2/SWS_Can_00457 */
    VALIDATE_STD_RV( ((Can_Global.configured & (1uL << Controller)) == (1uL << Controller)) , CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_CONTROLLER );

    /** @req 4.0.3/CAN458 Invalid baudrate value *//** @req 4.1.2/SWS_Can_00458 */
    VALIDATE_STD_RV( Baudrate <= 1000, CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_BAUDRATE );

    config = GET_CONTROLLER_CONFIG(Can_Global.channelMap[Controller]);

    // Find the baudrate config for the target baudrate
    supportedBR = E_NOT_OK;
    for (uint16 i = 0; i < config->CanControllerSupportedBaudratesCount; i++) {
        if (config->CanControllerSupportedBaudrates[i].CanControllerBaudRate == Baudrate) {
            supportedBR = E_OK;
            break;
        }
    }

    return supportedBR;
}

void Can_MainFunction_Mode(void) {
    /** @req 4.0.3/CAN368 *//** @req 4.1.2/SWS_Can_00368 *//* API */
    /** @req 4.0.3/CAN369 *//** @req 4.1.2/SWS_Can_00369 *//* Polling */

    /** !req 4.0.3/CAN398 *//** !req 4.1.2/SWS_Can_00398 *//* Blocking call not supported */
    /** !req 4.0.3/CAN371 *//** !req 4.1.2/SWS_Can_00371 *//* Blocking call not supported */
    /** !req 4.0.3/CAN372 *//** !req 4.1.2/SWS_Can_00372 *//* Blocking call not supported */


    /** @req 4.0.3/CAN379 *//** @req 4.1.2/SWS_Can_00379 *//* CAN_E_UNINIT */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_MAIN_FUNCTION_MODE_SERVICE_ID, CAN_E_UNINIT );

    /** @req 4.0.3/CAN431 *//* On Uninit, return immediately without prod err */
    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }

    for (uint8 configId = 0; configId < CAN_ARC_CTRL_CONFIG_CNT; configId++) {
        boolean clearPending = TRUE;
        CanIf_ControllerModeType indicateMode = CANIF_CS_UNINIT;
        //Get the controller from config index and index CanUnit
        const Can_ControllerConfigType * canHwConfig = GET_CONTROLLER_CONFIG(configId);

        Can_UnitType * canUnit = GET_PRIVATE_DATA(canHwConfig->CanControllerId);

        switch (canUnit->pendingStateIndication) {
        case CAN_CTRL_INDICATION_PENDING_START:
            if (canUnit->state == CANIF_CS_STARTED) {
                indicateMode = CANIF_CS_STARTED;
            }
            break;

        case CAN_CTRL_INDICATION_PENDING_STOP:
            if (canUnit->state == CANIF_CS_STOPPED) {
                // Stopped, indicate to upper layer
                indicateMode = CANIF_CS_STOPPED;
            }
            break;

        case CAN_CTRL_INDICATION_PENDING_SLEEP:
            if (canUnit->state == CANIF_CS_SLEEP) {
                // Stopped, indicate to upper layer
                indicateMode = CANIF_CS_SLEEP;
            }
            break;

        case CAN_CTRL_INDICATION_NONE:
        default:
            // No action necessary
            clearPending = FALSE;
            break;
        }
        if ((CANIF_CS_UNINIT != indicateMode) ) {
            /** @req 4.0.3/CAN370 *//** @req 4.1.2/SWS_Can_00370 */
            /** @req 4.0.3/CAN373 *//** @req 4.1.2/SWS_Can_00373 */
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
            CanIf_ControllerModeIndication(canHwConfig->Can_Arc_CanIfControllerId, indicateMode);
#else
            CanIf_ControllerModeIndication( canHwConfig->CanControllerId, indicateMode);
#endif
        }

        if (clearPending == TRUE) {
            canUnit->pendingStateIndication = CAN_CTRL_INDICATION_NONE;
        }
    }
}



#ifdef HOST_TEST
Std_ReturnType Can_Test_DriverStateIsUninit(void) {
    return (Can_Global.initRun == CAN_UNINIT) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_Test_DriverStateIsReady(void) {
    return (Can_Global.initRun == CAN_READY) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_Test_AllUnitsInState(CanIf_ControllerModeType state) {

    for (uint8 canCtrlNr = 0; canCtrlNr < CAN_CONTROLLER_CNT; canCtrlNr++) {

        const Can_ControllerConfigType *controllerConfig = GET_CONTROLLER_CONFIG(canCtrlNr);

        const Can_UnitType *canUnit = GET_PRIVATE_DATA(controllerConfig->CanControllerId);

        if (canUnit->state != state) {
            return E_NOT_OK;
        }
    }

    return E_OK;
}
#endif /* HOST_TEST */
