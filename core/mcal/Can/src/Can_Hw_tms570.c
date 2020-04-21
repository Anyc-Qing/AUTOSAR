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

/** @file Can_Hw_tms570.c
 *  This file contains the TMS570 hardware specific implementation of the API's.
 */
/** \addtogroup Mcal
 * @brief This is the major Mcal folder
 *
 *  This group is for the TMS570 Mcal
 *  @{
 */

/** \addtogroup Can
 *  This is the TMS570 Mcal Can Group
 *  @{
 */

#include "Can.h"
#include "Can_Hw_tms570.h"
#include "Can_Internal.h"
#if defined(USE_DEM)
#include "Dem.h"
#endif
#if defined(USE_DET)
#include "Det.h"
#endif
#include "CanIf_Cbk.h"
#include "isr.h"
#include <string.h>

/* ----------------------------[Variable Definition]-----------*/
/**
 * @brief   canInterruptErrors - Record of interrupt errors.
 */

/**
 * @brief   RxShadowBuf[]- Rx buffer.
 */

/**
 * @brief  ElementIndex[] - Used to order Data Bytes according to hardware registers in DCAN.
 * TMS570 is big-endian (BE32).
 */
static const uint8 ElementIndex[] = { 3, 2, 1, 0, 7, 6, 5, 4 };

/* ----------------------------[Variable Initialization]-----------*/

/* Array for easy access to DCAN register definitions. */
/*lint -e{923} MISRA:HARDWARE_ACCESS:cast fron unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
static Can_RegisterType* const CanRegs[] = {
	DCAN1_Base,
	DCAN2_Base,
	DCAN3_Base
};

/* ----------------------------[Function Implementation]---------------*/
/**
 * @brief  validate function that will be used in API's that can be used to check the expression and report Det errors
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[inout] _rvPtr - Returns the validity of the expression provided
 */
static inline void validate(boolean exp, uint8 apiid, uint8 errid, Std_ReturnType* const _rvPtr) {
    if ((E_OK == *_rvPtr) && (exp == FALSE)) {
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError(CAN_MODULE_ID, 0, apiid, errid);
#endif
        *_rvPtr = E_NOT_OK;
    }
}

/**
 * @brief Arccore specified function. 64-bit integer log2.
 * @param[in] value - input value to the function.
 * @return uint8.
 * @retval log2 of value.
 */
static uint8 ilog2_64(uint64 value) {
    uint8 ret = 0x0u;
    uint32 upper32Bit = (uint32) (value >> 32u);

    /* @CODECOV:OTHER_TEST_EXIST: Not necessary to test all mailboxes */
    if (upper32Bit != 0x0uL) {
    	/*lint -e9033 MISRA:ARGUMENT_CHECK:The return value will remain inside 0 to 64 which is within the range of uint8:[MISRA 2012 Rule 2.7, advisory] */
        ret = (uint8) ((ilog2(upper32Bit)) + 32u);
    } else {
    	/*lint -e9033 MISRA:ARGUMENT_CHECK:The return value will remain inside 0 to 64 which is within the range of uint8:[MISRA 2012 Rule 2.7, advisory] */
        ret = ilog2((uint32) value);
    }

    return ret;
}

/**
 * @brief Arccore specified function. Return a controller handle in the Can unit.
 * @param[in] logController - logical controller.
 * @return Can_UnitType pointer.
 * @retval A controller handle, it is a structure.
 */
static Can_UnitType* const get_private_data(uint8 logController) {
    return &Can_Unit[logController];
}

/**
 * @brief Arccore specified function. Return hardware handle of a unit.
 * @param[in] handle - Represents the hardware object handle number of a CAN hardware unit.
 * @return Can_HardwareObjectType pointer.
 * @retval Hardware object handle.
 */
static const Can_HardwareObjectType * Can_FindHoh(Can_HwHandleType handle) {
    return &Can_Global.config->CanConfigSetPtr->ArcCanHardwareObjects[handle];
}

/**
 * @brief Busy wait. It loops while the dcan controller is busy.
 * @param[in] ControllerId - CAN controller id.
 * @param[in] IfRegId - register index within Can interface register set in TMS570.
 */
static void waitUntilNotBusy(uint8 hwCh, uint32 IfRegId) {
    uint32 ErrCounter = CAN_TIMEOUT_DURATION;
    /* @CODECOV: HARDWARE_DEPENDENCY_STATUS_BIT: The dcan controller usually is not busy, skipping the true condition */
    while ((CanRegs[hwCh]->IFx[IfRegId].CMD & 0x00008000u) > 0) {
        ErrCounter--;
        if (ErrCounter == 0) {
#if defined(USE_DEM)
            Dem_ReportErrorStatus(DemConf_DemEventParameter_CAN_E_TIMEOUT, DEM_EVENT_STATUS_FAILED);
#endif
            break;
        }
    }

}

/**
 * @brief Arccore specified function. Return hardware handle of a unit.
 * @param[in] controllerNr - Can controller Id.
 * @param[in] MsgNr - Message Id.
 */
static void Can_HandleTxOk(CanControllerIdType controllerNr, uint8 MsgNr) {
    Can_UnitType* const canUnit = get_private_data((uint8) controllerNr);

    /** @req 4.1.2|4.3.0/SWS_Can_00033 The Can module shall implement the interrupt service routines for all CAN Hardware Unit interrupts that are needed.*/
    /* Clear busy flag */
    canUnit->mxBoxBusyMask &= ~((uint64) 1uL << (MsgNr - (uint8) 1));

    /** @req 4.1.2|4.3.0/SWS_Can_00016 The Can module shall call CanIf_TxConfirmation to indicate a successful transmission. It shall either called by the TX-interrupt service routine of the corresponding HW resource or inside the Can_MainFunction_Write in case of polling mode.*/
    CanIf_TxConfirmation(canUnit->transmittedPduIds[(MsgNr - 1)]);
}

/**
 * @brief Arccore specified function. When interrupt error occurs, increment the counter.
 */
/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: HW errors are not possible to simulate in our test environment */
static void Can_HandleInterruptError(void) {
    static uint32 canInterruptErrors = 0;
    canInterruptErrors++;
} /*lint !e550 LINT:OTHER:canInterruptErrors variable is reserved for further improvement */

/**
 * @brief Arccore specified function. Handle busoff state, switch the controller state.
 * @param[in] controllerNr - CAN controller id
 */
/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: HW errors are not possible to simulate in our test environment */
static void Can_HandleBusOff(CanControllerIdType controllerNr) {
    /** @req 4.1.2|4.3.0/SWS_Can_00020 State transition caused by Bus-Off*/
    /** @req 4.1.2|4.3.0/SWS_Can_00272 After bus-off detection, the CAN controller shall transition to the state STOPPED and the Can module shall ensure that the CAN controller doesn’t participate on the network anymore.*/
    /** @req 4.1.2|4.3.0/SWS_Can_00273 After bus-off detection, the Can module shall cancel still pending messages.*/
    Can_ReturnType status;
    //This will also indicate controller mode to CanIF, it probably should not
    status = Can_SetControllerMode(HwChannelToChannel(controllerNr), CAN_T_STOP); /*lint !e641 LINT:PERFORMANCE:convert enum to int */
    if (status == CAN_NOT_OK) {
        ;   // do nothing
    }
}

/**
 * @brief Arccore specified function. Initialize the hardware register of a certain controller. It is called by Can_Hw_Init.
 * @param[in] controllerConfig - Pointer to controller configuration.
 */
static void Can_InitHardwareObjects(const Can_ControllerConfigType * controllerConfig) {
    uint32 	rx = 0x0uL;
    uint32 	tx = 0x0uL;
    uint32 	extended = 0x0uL;
    uint32 	eob = 0x1uL;
    uint64 	mbMask = 0x0uLL;
    uint8 	mbNr = 0x0u;
    uint8 mbN = 0x0u;
    const Can_HardwareObjectType* hoh = controllerConfig->Can_Arc_Hoh; //Configure the HOHs for this controller.
    Can_RegisterType * canCtrlRegs = CanRegs[controllerConfig->CanHwUnitId];

    hoh--;
    do
    {
		hoh++;
		extended = 0x0uL;
		rx = 0x0uL;
		tx = 0x0uL;
		eob = 0x1uL;
    	if (hoh->ArcCanHwControllerId == (uint8)controllerConfig->CanHwUnitId) {
			if ((hoh->CanObjectType == CAN_OBJECT_TYPE_RECEIVE)) {
				rx = 0x1uL;
			}
			else {
				tx = 0x1uL;
			}

			if (hoh->CanIdType == CAN_ID_TYPE_EXTENDED) {
				extended = 0x1uL;
			}

			/* For every message object in this hoh */
			mbMask = hoh->ArcMailboxMask;
			mbNr = 0x0u;
			mbN = 0x0u;
			for (; mbMask != 0; mbMask &= ~(1uLL << mbNr)) {
				mbNr = ilog2_64(mbMask);
				mbN++;

				/* Check if this is the last message box for this hoh. */
				if ((hoh->CanObjectType == CAN_OBJECT_TYPE_RECEIVE) && (mbN != (hoh->Can_Arc_NrMessageBoxes))) {
					/* EndOfBlock Bit will not be set */
					eob = 0x0uL;
				}

				if (rx == 0x1uL) {
					/* Setup mask register */
					if (extended == 0uL) {
						canCtrlRegs->IFx[CAN_REG_IF_1].MASK = (hoh->CanHwFilterMask & STD_ID_MASK) << CAN_REG_IFX_MASK_STDMSK_BIT;
						canCtrlRegs->IFx[CAN_REG_IF_1].ARB = (hoh->CanHwFilterCode & STD_ID_MASK) << CAN_REG_IFX_ARB_STDID_BIT;
					}
					else {
						canCtrlRegs->IFx[CAN_REG_IF_1].MASK = hoh->CanHwFilterMask & EXT_ID_MASK;
						canCtrlRegs->IFx[CAN_REG_IF_1].ARB = hoh->CanHwFilterCode & EXT_ID_MASK;
					}

					canCtrlRegs->IFx[CAN_REG_IF_1].MASK |= extended << CAN_REG_IFX_MASK_MXTD_BIT;
					canCtrlRegs->IFx[CAN_REG_IF_1].MASK |= rx << CAN_REG_IFX_MASK_MDIR_BIT;
				}

				/* Setup arbitration register */
				canCtrlRegs->IFx[CAN_REG_IF_1].ARB |= (1uL << CAN_REG_IFX_ARB_MSGVAL_BIT) | (extended << CAN_REG_IFX_ARB_XTD_BIT) | (tx << CAN_REG_IFX_ARB_DIR_BIT);

				/* Setup message control register */
				canCtrlRegs->IFx[CAN_REG_IF_1].MCTL = IF_MC_MASK(8uL, rx, rx, tx, eob);

				/* Setup command register */
				canCtrlRegs->IFx[CAN_REG_IF_1].CMD = 0x00F00000uL | (((uint32) mbNr) + 1);

				waitUntilNotBusy((uint8)(controllerConfig->CanHwUnitId), CAN_REG_IF_1);
			}
    	}
    } while (hoh->Can_Arc_EOL == 0);
}

/**
 * @brief Arccore specified function. Return the driver state.
 * @return Can_DriverStateType.
 * @retval CAN_UNINIT: Can driver is not initialized.
 * @retval CAN_READY: Can driver is initialized and ready to be used.
 */
Can_DriverStateType Can_Hw_GetDriverState(void) {
    return Can_Global.initRun;
}

/**
 * @brief  Calculate bit timing register value.
 * @param[in] ctrl - Controller configuration pointer.
 * @return uint32
 * @retval value to set bit timing register in TMS570
 */
static uint32 Can_CalculateBTR(const Can_ControllerConfigType * ctrl) {

    uint32 clock = Mcu_Arc_GetPeripheralClock(PERIPHERAL_CLOCK_CAN);
    uint32 tseg1 = ctrl->CanControllerPropSeg + ctrl->CanControllerSeg1 - 1;
    uint32 tseg2 = ctrl->CanControllerSeg2 - 1;

    uint32 ntq = tseg1 + tseg2 + 1 + 1 + 1;
    uint32 brp = (clock / (ctrl->CanControllerDefaultBaudrate * 1000 * ntq)) - 1;

    /* Verify that the values for propagation and phase segments work by checking that we get
     * the original clock value back if we go backwards. */
    uint32 clockCheck = (brp + 1) * (ctrl->CanControllerDefaultBaudrate * 1000 * ntq);
    CONFIG_ASSERT(clockCheck == clock);

    uint32 brpStandard = brp & CAN_REG_BTR_BRP_MASK;
    uint32 brpExtended = (brp & CAN_REG_BTR_BRPE_MASK) >> CAN_REG_BTR_BRPE_RSHIFT;

    /* No need to set SJW if it is 0 (the actual value will be 1 not 0). */
    uint32 retVal = (brpStandard | (brpExtended << CAN_REG_BTR_BRPE_OFFSET) | (tseg1 << CAN_REG_BTR_TSEG1_OFFSET) | (tseg2 << CAN_REG_BTR_TSEG2_OFFSET));

    return retVal;
}

/**
 * @brief  Return Can hardware transmit handle.
 * @param[in] hth - Can hardware unit handle Id.
 * @return Can_HardwareObjectType pointer.
 * @retval Can hardware transmit handle.
 */
static inline const Can_HardwareObjectType * Can_FindTxHoh(Can_HwHandleType hth) {
    const Can_HardwareObjectType * hoh;
    hoh = &Can_Global.config->CanConfigSetPtr->ArcCanHardwareObjects[hth];
    if ((hoh->CanObjectType != CAN_OBJECT_TYPE_TRANSMIT)) {
        hoh = NULL_PTR;
    }
    return hoh;
}

/**
 * @brief  set up id type for hardware object handler
 * @param[in] idType - ArcCore Specified L-PDU identifier type
 * @param[in] regs - Pointer to Can hardware register set.
 * @param[in] PduInfo - A Can L-PDU pointer
 */
static void Can_SetId(Can_IdTypeType idType, Can_RegisterType * regs, const Can_PduType *PduInfo) {

    if (idType == CAN_ID_TYPE_STANDARD) {
        /* Standard ID */
        regs->IFx[CAN_REG_IF_1].ARB |= (PduInfo->id & STD_ID_MASK) << CAN_REG_IFX_ARB_STDID_BIT;
    }
    else if (idType == CAN_ID_TYPE_EXTENDED) {
        /* Extended ID */
        regs->IFx[CAN_REG_IF_1].ARB |= PduInfo->id & EXT_ID_MASK;
    }
    else {
        /* Mixed ID */
        if ((PduInfo->id & EXT_ID_BIT) == EXT_ID_BIT) {
            /* Extended ID */
            regs->IFx[CAN_REG_IF_1].ARB |= (1uL << CAN_REG_IFX_ARB_XTD_BIT);
            regs->IFx[CAN_REG_IF_1].ARB |= PduInfo->id & EXT_ID_MASK;
        }
        else {
            /* Standard ID */
            regs->IFx[CAN_REG_IF_1].ARB &= ~(1uL << CAN_REG_IFX_ARB_XTD_BIT);
            regs->IFx[CAN_REG_IF_1].ARB |= (PduInfo->id & STD_ID_MASK) << CAN_REG_IFX_ARB_STDID_BIT;
        }
    }
}

/**
 * @brief Arccore specified function. Return configuration of a controller.
 * @param[in] logCh - The logical Channel
 * @return Can_ControllerConfigType pointer.
 * @retval Config structure of a controller.
 */
static const Can_ControllerConfigType* getControllerConfig(uint8 logCh) {
    ASSERT(logCh < CAN_ARC_LOG_UNIT_CNT);
    return &Can_Global.config->CanConfigSetPtr->CanController[logCh];
}

/**
 * @brief  Return a Can hardware transmit handle.
 * @param[in] handle - Hardware handle Id
 * @return uint8
 * @retval Can controller Id.
 */
static inline uint8 Can_FindControllerId(Can_HwHandleType handle) {
    const Can_HardwareObjectType * hoh = &Can_Global.config->CanConfigSetPtr->ArcCanHardwareObjects[handle];
    return hoh->ArcCanControllerId;
}

/** @brief Hardware specific implementation of Can_Init
 *  @param[in] Config - Pointer to configuration set
 */
void Can_Hw_Init(const Can_ConfigType *Config) {
    uint8 hwCh = 0u;

    /** @req 4.1.2|4.3.0/SWS_Can_00245 The function Can_Init shall initialize all CAN controllers according to their configuration.*/
    for (uint8 ch = 0; ch < CAN_ARC_LOG_UNIT_CNT; ch++) {
        hwCh = ChannelToHwChannel(ch);
        const Can_ControllerConfigType * controllerConfig = getControllerConfig(ch);

#if CAN_AR_VERSION < 40300
        Can_Global.configured |= (1uL << controllerConfig->CanHwUnitId);
#endif

        /** @req 4.1.2|4.3.0/SWS_Can_00259 The function Can_Init shall set all CAN controllers in the state STOPPED.*//* Reset the controller. The device goes to Configuration Mode immediately. */
        Can_UnitType* const canUnit = get_private_data(ch);
        canUnit->mxBoxBusyMask = 0;

        memset(&canUnit->transmittedPduIds[0], 0, sizeof(canUnit->transmittedPduIds));

        /* MaxBoxes - initialized statically, never changes. */
        canUnit->WakeupSrc = 0;

        Can_RegisterType *canCtrlRegs = CanRegs[hwCh];

        canCtrlRegs->CTL |= CAN_REG_CTL_INIT_MASK;
        canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_SWR_BIT); /* Perform sw reset */

        /* DAR bit should be 0 for automatic retransmission so nothing to set.
         * WUBA off - No detection of dominant CAN bus while in power down. */
        /*lint -e{845} LINT:OTHER:test enable/disable bit can be 0 */
        canCtrlRegs->CTL = ((1uL << CAN_REG_CTL_INIT_BIT) | // Init enable
                (1uL << CAN_REG_CTL_CCE_BIT) | // CCE enable
                (1uL << CAN_REG_CTL_ABO_BIT) | // ABO enable
                (CAN_REG_CTL_PARITY_DISABLED << CAN_REG_CTL_PARITY_BIT) | // Parity disable
                CAN_CTL_INTERRUPT_MASK | (controllerConfig->Can_Arc_Loopback << CAN_REG_CTL_TEST_MODE_BIT) // Test mode enable/disable
        );

        /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Remove condition because it depends on a status bit of the micro-controller */
        while ((canCtrlRegs->CTL & (1uL << CAN_REG_CTL_INIT_BIT)) == 0uL) {
            /* Wait for controller to bit initialized */
        }

        /* Clear all pending error flags and reset current status - only reading clears the flags */
        canCtrlRegs->SR = canCtrlRegs->SR;

        /* @CODECOV:CONFIG_LIMITATION: Loopback is required for MCAL testing, thus it cannot be false */
        /* Test Mode only for Development time: Silent Loopback */
        if (controllerConfig->Can_Arc_Loopback == TRUE) {
            canCtrlRegs->TR = (1uL << CAN_REG_TR_LBACK_BIT);
        }

        Can_InitHardwareObjects(controllerConfig);

        /* Set CCE Bit to allow access to BitTiming Register (Init already set, in mode "stopped") */
        canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_CCE_BIT);
        /* Set Bit Timing Register */
        canCtrlRegs->BTR = Can_CalculateBTR(controllerConfig);

        /* Turn off write access to configuration registers. */
        canCtrlRegs->CTL &= ~(1uL << CAN_REG_CTL_CCE_BIT);

        /* Normal operation. */
        canCtrlRegs->CTL &= ~(1uL << CAN_REG_CTL_INIT_BIT);

#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
        Can_InstallInterruptHandlers(controllerConfig);
#endif
    }
} /*IMPROVEMENT: PC-lint: Symbol 'Config' (line 377) not referenced will be solved when SSP-404 */

/**
 * @brief Hardware specific implementation of Can_SetControllerMode
 * @param[in] Controller - CAN controller id, for which the status shall be changed
 * @param[in] Transition - Transition value to request new CAN controller state
 * @return Can_ReturnType.
 * @retval CAN_OK: request accepted
 * @retval CAN_NOT_OK: request not accepted, a development error occurred
 */
Can_ReturnType Can_Hw_SetControllerMode(uint8 Controller, Can_StateTransitionType Transition) {
    Can_ReturnType rv = CAN_OK;
    Can_RegisterType* const canCtrlRegs = CanRegs[Controller];
    uint32 RegBuf;
    uint32 ErrCounter = CAN_TIMEOUT_DURATION;

    switch (Transition) {
        case CAN_T_START:
            /* Clear Init Bit */
            canCtrlRegs->CTL &= ~CAN_REG_CTL_INIT_MASK;
            /* Clear Status Register */
            canCtrlRegs->SR = ( CAN_REG_ES_LEC_MASK | (1uL << CAN_REG_ES_TXOK_BIT) | (1uL << CAN_REG_ES_RXOK_BIT) | (1uL << CAN_REG_ES_PER_BIT));

            break;
        case CAN_T_WAKEUP:
            /* Clear Power down bit */
            canCtrlRegs->CTL &= ~(1uL << CAN_REG_CTL_PDR_BIT);
            break;
        case CAN_T_STOP:
            /** @req 4.1.2|4.3.0/SWS_Can_00263 The function Can_SetControllerMode(CAN_CS_STOPPED) shall set the bits inside the CAN hardware such that the CAN controller stops participating on the network.*/
            /** @req 4.1.2|4.3.0/SWS_Can_00282 The function Can_SetControllerMode(CAN_CS_STOPPED) shall cancel pending messages.*/
            /** @req 4.1.2/SWS_Can_00283 */
            /* Set Init Bit */
            canCtrlRegs->CTL |= CAN_REG_CTL_INIT_MASK;
            break;
        case CAN_T_SLEEP:
            /* Set Power down bit */
            canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_PDR_BIT);
            /* Save actual Register status */
            RegBuf = canCtrlRegs->CTL;
            /* Disable WUBA and Status Interrupts */
            canCtrlRegs->CTL &= ~((1uL << CAN_REG_CTL_WUBA_BIT) | (1uL << CAN_REG_CTL_SIE_BIT));

            /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Remove condition because it depends on a status bit of the micro-controller */
            /* Wait until Local Power Down Mode acknowledged */
            while ((canCtrlRegs->SR & (1uL << CAN_REG_ES_PDA_BIT)) == 0) {

                ErrCounter--;

                /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Remove condition because it depends on a status bit of the micro-controller */
                /* Check if a WakeUp occurs */
                if (((canCtrlRegs->SR & (1uL << CAN_REG_ES_WKPEND_BIT)) == (1uL << CAN_REG_ES_WKPEND_BIT)) || (ErrCounter == 0)) {

                    rv = CAN_NOT_OK;
#if defined(USE_DEM)
                    Dem_ReportErrorStatus(DemConf_DemEventParameter_CAN_E_TIMEOUT, DEM_EVENT_STATUS_FAILED);
#endif
                    break;
                }
            }
            /* Reset Control Register */
            canCtrlRegs->CTL = RegBuf;
            break;
            /* @CODECOV:DEFAULT_CASE: The Can generic will never pass an invalid mode */
        default:
            break;

    }
    return rv;
}

/**
 * Get the controller state
 * @param hwCh Controller
 * @return The mode the controller is in
 */
Can_Arc_ModeType Can_Hw_GetControllerMode( uint8 hwCh ) {

    const Can_RegisterType* const canCtrlRegs = CanRegs[hwCh];
    Can_Arc_ModeType mode = CAN_CTRL_PENDING;

    if ((canCtrlRegs->CTL & CAN_REG_CTL_PDR_MASK) == CAN_REG_CTL_PDR_MASK) {
        /* Local power down requested */
        /* Check for acknowledge in ES.PDA ==1 */
        if (( canCtrlRegs->SR & CAN_REG_ES_PDA_BIT) != FALSE  ) {
            mode = CAN_CTRL_MODE_SLEEP;
        }
    } else {
        if (( canCtrlRegs->CTL & CAN_REG_CTL_INIT_MASK ) == TRUE ) {
            /* CAN_T_STOP request CTL.INIT = 1 */
            mode = CAN_CTRL_MODE_STOP;
        } else {
            /* CAN_T_START request CTL.INIT = 0 */
            mode = CAN_CTRL_MODE_COMM;
        }
    }

    return mode;
}



/** @brief Hardware specific implementation of Can_DeInit
 */
void Can_Hw_DeInit(void) {
    Can_UnitType* canUnit;

    for (uint8 ch = 0; ch < CAN_ARC_CTRL_CONFIG_CNT; ch++) {

        canUnit = get_private_data(ch);
        canUnit->mxBoxBusyMask = 0;
        canUnit->WakeupSrc = 0;
        memset(&canUnit->transmittedPduIds[0], 0, sizeof(canUnit->transmittedPduIds));

        Can_RemoveInterruptHandlers(getControllerConfig(ch));
    }
}

/** @brief Hardware specific implementation of Can_DisableControllerInterrupts. Does not perform any other logic like changing the disable interrupt count.
 *  @param[in] Controller - CAN controller id, for which the interrupts shall be disabled.
 */
void Can_Hw_DisableControllerInterrupts(uint8 Controller) {
    Can_RegisterType *canCtrlRegs = CanRegs[Controller];

    // Check if init but in CTL is set or not
    if ((canCtrlRegs->CTL & (1uL << CAN_REG_CTL_INIT_BIT)) == FALSE) {

        // Set init bit in CTL
        canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_INIT_BIT);

        canCtrlRegs->CTL &= ~CAN_CTL_INTERRUPT_MASK; /*lint !e845 LINT:FALSE_POSITIVE:right argument to operator '|' is certain to be 0, however no '|' */

        // Clear init bit in CTL
        canCtrlRegs->CTL &= ~(1uL << CAN_REG_CTL_INIT_BIT);

    } else {

        canCtrlRegs->CTL &= ~CAN_CTL_INTERRUPT_MASK; /*lint !e845 LINT:FALSE_POSITIVE:right argument to operator '|' is certain to be 0, however no '|' */

    }
}

/** @brief Hardware specific implementation of Can_EnableControllerInterrupts
 * Does not perform any other logic like changing the disable interrupt count.
 *  @param[in] Controller - CAN controller id, for which the interrupts shall be enabled.
 */
void Can_Hw_EnableControllerInterrupts(uint8 Controller) {
    Can_RegisterType *canCtrlRegs = CanRegs[Controller];

    // Check if init but in CTL is set or not
    if ((canCtrlRegs->CTL & (1uL << CAN_REG_CTL_INIT_BIT)) == FALSE) {

    	// Set init bit in CTL
        canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_INIT_BIT);

        /* Set IE */
        canCtrlRegs->CTL |= CAN_CTL_INTERRUPT_MASK; /*lint !e845 LINT:FALSE_POSITIVE:right argument to operator '|' is certain to be 0, however it is not 0 */

        // Clear init bit in CTL
        canCtrlRegs->CTL &= ~(1uL << CAN_REG_CTL_INIT_BIT);

    } else {

        /* Set IE */
        canCtrlRegs->CTL |= CAN_CTL_INTERRUPT_MASK; /*lint !e845 LINT:FALSE_POSITIVE:right argument to operator '|' is certain to be 0, however it is not 0 */

    }
}

/**
 * @brief Hardware specific implementation of Can_Write
 * @param[in] Hth - information which HW-transmit handle shall be used for transmit. Implicitly this is also the information about the controller to use because the Hth numbers are unique inside one hardware unit.
 * @param[in] PduInfo - Pointer to SDU user memory, Data Length and Identifier.
 * @return Can_ReturnType
 * @retval CAN_OK: Write command has been accepted
 * @retval CAN_NOT_OK: Development error occurred
 * @retval CAN_BUSY: No TX hardware buffer available or pre-emptive call of Can_Write that can't be implemented re-entrant
 */
Can_ReturnType Can_Hw_Write(Can_HwHandleType Hth, const Can_PduType *PduInfo) {
    Can_ReturnType ret = CAN_OK;
    Std_ReturnType validate_rv = E_OK;
    uint32 ArbRegValue;
    uint8 DataByteIndex;
    uint8 ControllerId = Can_FindControllerId(Hth);
    const Can_HardwareObjectType *hoh = Can_FindTxHoh(Hth);

    validate((boolean) (hoh != NULL_PTR), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_HANDLE, &validate_rv);
    validate((boolean) (hoh->CanObjectType == CAN_OBJECT_TYPE_TRANSMIT), CAN_WRITE_SERVICE_ID, CAN_E_PARAM_HANDLE, &validate_rv);

    if (E_OK == validate_rv) {
        const Can_ControllerConfigType * controllerConfig = getControllerConfig(ControllerId);
        Can_UnitType* const canUnit = get_private_data(controllerConfig->CanHwUnitId); /*lint !e641 LINT:PERFORMANCE:convert enum to int */
        Can_RegisterType *canCtrlRegs = CanRegs[controllerConfig->CanHwUnitId];

        /* Check if any mailbox is free. If not, return CAN_BUSY. */
        if (hoh->ArcMailboxMask != (hoh->ArcMailboxMask & canUnit->mxBoxBusyMask)) {

            /* Bring Id Value to appropriate format and set ArbRegValue */
            if (hoh->CanIdType == CAN_ID_TYPE_EXTENDED) {
                /* MsgVal, Ext, Transmit, Extended Id */
                ArbRegValue = ((1uL << CAN_REG_IFX_ARB_MSGVAL_BIT) | (1uL << CAN_REG_IFX_ARB_XTD_BIT) | (1uL << CAN_REG_IFX_ARB_DIR_BIT));

            }
            else {
                /* MsgVal, Std, Transmit, Standard Id */
                ArbRegValue = ((1uL << CAN_REG_IFX_ARB_MSGVAL_BIT) | (1uL << CAN_REG_IFX_ARB_DIR_BIT));
            }

            waitUntilNotBusy(ControllerId, CAN_REG_IF_1);

            /* Set NewDat, TxIE (dep on ControllerConfig), TxRqst, EoB and DLC */
            canCtrlRegs->IFx[CAN_REG_IF_1].MCTL = IF_MC_MASK((uint32 ) PduInfo->length, 0uL, 0uL, 1uL, 1uL); /*lint !e845 LINT:FALSE_POSITIVE:right argument to operator '|' is certain to be 0, however no '|' found */

            /* Set ArbitrationRegister */
            canCtrlRegs->IFx[CAN_REG_IF_1].ARB = ArbRegValue;
            Can_SetId(hoh->CanIdType, canCtrlRegs, PduInfo);

            /* Set Databytes */
            /** @req 4.1.2|4.3.0/SWS_Can_00059 Data mapping by CAN to memory is defined in a way that the CAN data byte which is sent out first is array element 0, the CAN data byte which is sent out last is array element 7 or 63 in case of CAN FD.*/
            /** !req 4.1.2|4.3.0/SWS_Can_00427 If the presentation inside the CAN Hardware buffer differs from AUTOSAR definition, the Can module must provide an adapted SDU-Buffer for the upper layers.*/
            for (DataByteIndex = 0; DataByteIndex < PduInfo->length; DataByteIndex++) {
                canCtrlRegs->IFx[CAN_REG_IF_1].DATx[ElementIndex[DataByteIndex]] = PduInfo->sdu[DataByteIndex];
            }

            /* Find first free mb box */
            uint64 mbMask = hoh->ArcMailboxMask;
            uint64 mbNr = 0;

            for (; mbMask != 0; mbMask &= ~(1uLL << mbNr)) {

                mbNr = ilog2_64(mbMask);

                if ((canUnit->mxBoxBusyMask & mbMask) == 0) {
                    /* Set to 0 to exit for loop */
                    mbMask = 0;
                }
            }

            canUnit->mxBoxBusyMask |= (1uLL << mbNr); // Mark selected box as busy.
            /** @req 4.1.2|4.3.0/SWS_Can_00276 The function Can_Write shall store the swPduHandle that is given inside the parameter PduInfo until the Can module calls the CanIf_TxConfirmation for this request where the swPduHandle is given as parameter.*/
            canUnit->transmittedPduIds[mbNr] = PduInfo->swPduHandle;

            /* Start transmission to MessageRAM */
            canCtrlRegs->IFx[CAN_REG_IF_1].CMD = (0x00BF0000uL | (mbNr + 1)) & 0xFFFFFFFFuL;

        }
        else {
            /** @req 4.1.2|4.3.0/SWS_Can_00214 The function Can_Write shall return CAN_BUSY if a preemptive call of Can_Write has been issued, that could not be handled reentrant (i.e. a call with the same HTH).*/
            ret = CAN_BUSY;
        }
    }
    else {
        ret = CAN_NOT_OK;
    }
    return ret;
}

/**
 * @brief Arccore specified function. This function will handle fifo buffers as well as individual message rx objects.
 * Note that fifos must use consecutive message objects.
 * @param[in] MsgObjectNr - message object number, it is used to access message object in hardware.
 * @param[in] controllerConfig - specific configuration set of a controller.
 * @param[in] hrh - Represents the hardware object handles of a CAN controller.
 */
void Can_HandleRxOk(uint8 MsgObjectNr, const Can_ControllerConfigType * controllerConfig, const Can_HardwareObjectType * hrh) {
    uint32 MsgId;
    uint8 MsgDlc;
    uint8 DataByteIndex;
    uint8 *SduPtr;
    uint32 mc;
    uint32 arb;
    static uint8 RxShadowBuf[CAN_ARC_CTRL_CONFIG_CNT][8];
    boolean break_flag = false;

    Can_RegisterType * canRegs = CanRegs[controllerConfig->CanHwUnitId];

    do {
        // Setup hardware to read arbitration, control and data Bits of the message object.
        // Clear IntPnd and Tx

        canRegs->IFx[CAN_REG_IF_2].CMD = (1uL << CAN_REG_IFX_COM_DATAB_BIT) | (1uL << CAN_REG_IFX_COM_DATAA_BIT) | (1uL << CAN_REG_IFX_COM_NEWDAT_BIT) | (1uL << CAN_REG_IFX_COM_CLEARINTPEND_BIT) | (1uL << CAN_REG_IFX_COM_CONTROL_BIT) | (1uL << CAN_REG_IFX_COM_ARB_BIT) | (MsgObjectNr);

        waitUntilNotBusy(controllerConfig->CanHwUnitId, CAN_REG_IF_2); /*lint !e641 LINT:PERFORMANCE:convert enum to int */

        // Read message control
        mc = canRegs->IFx[CAN_REG_IF_2].MCTL;
        arb = canRegs->IFx[CAN_REG_IF_2].ARB;

        /* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Can_HandleRxOk is called from interrupt handler always when there is a message waiting */
        // Is there a new message waiting?
        if ((mc & (1uL << DCAN_MC_NEWDAT)) == (1uL << DCAN_MC_NEWDAT)) {

            /* Extended Id */
            /** @req 4.1.2|4.3.0/SWS_Can_00423 In case of an Extended CAN frame, the Can module shall convert the ID to a standardized format since the Upper layer (CANIF) does not know whether the received CAN frame is a Standard CAN frame or Extended CAN frame. In case of an Extended CAN frame, MSB of a received CAN frame ID needs to be made as ‘1’ to mark the received CAN frame as Extended.*/
            if ((arb & (1uL << CAN_REG_IFX_ARB_XTD_BIT)) == (1uL << CAN_REG_IFX_ARB_XTD_BIT)) {
                /* Bring Id to standardized format (MSB marks extended Id) */
                MsgId = (arb & EXT_ID_MASK) | EXT_ID_BIT;

            }
            else { /* Standard Id */
                /* Bring Id to standardized format (MSB marks extended Id) */
                MsgId = (arb >> CAN_REG_IFX_MASK_STDMSK_BIT) & STD_ID_MASK;
            }

            /* DLC (Max 8) */
            MsgDlc = mc & CAN_REG_MC_DLC_MASK;

            /* @CODECOV:CONFIG_LIMITATION: Cannot be tested in loopback mode, because Can_Write validates if Dlc <= 8 */
            if (MsgDlc > 8) {
                MsgDlc = 8;
            }

            /* Let SduPtr point to Shadow Buffer */
            uint8 ch = HwChannelToChannel(controllerConfig->CanHwUnitId); /*lint !e641 LINT:PERFORMANCE:convert enum to int */
            SduPtr = RxShadowBuf[ch];

            /* Copy Message Data to Shadow Buffer */
            for (DataByteIndex = 0; DataByteIndex < MsgDlc; DataByteIndex++) {
                SduPtr[DataByteIndex] = canRegs->IFx[CAN_REG_IF_2].DATx[ElementIndex[DataByteIndex]];
            }

            /* Indicate successful Reception */
            /** @req 4.1.2|4.3.0/SWS_Can_00279 On L-PDU reception, the Can module shall call the RX indication callback function CanIf_RxIndication with ID, Hoh, abstract CanIf ControllerId in parameter Mailbox, and the Data Length and pointer to the L-SDU buffer in parameter PduInfoPtr.*/
            /** @req 4.1.2|4.3.0/SWS_Can_00396 The RX-interrupt service routine of the corresponding HW resource or the function Can_MainFunction_Read in case of polling mode shall call the callback function CanIf_RxIndication.*/
            CanIf_RxIndication((hrh->CanObjectId) & 0xFFuL, MsgId, MsgDlc, SduPtr);

            /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Cannot be tested in loopback mode */
            if ((mc & (1uL << DCAN_MC_EOB)) == (1uL << DCAN_MC_EOB)) {
                break_flag = true; // We have parsed the last object of this FIFO.
            }

        }
        else {
            break_flag = true; // There is no new data in the fifo.
        }
        MsgObjectNr++;
        /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Cannot be tested in loopback mode */
    } while (break_flag == false);
}

/**
 * @brief Arccore specified function. Handle the interrupt of a certain controller.
 * @param[in] controllerNr - CAN controller id.
 */
void Can_InterruptHandler(CanControllerIdType hwCh) {
    uint8 ch = HwChannelToChannel((Can_Hw_CtrlType)hwCh);
    const Can_ControllerConfigType * controllerConfig = getControllerConfig(ch); /*lint !e641 LINT:PERFORMANCE:convert enum to int */
    Can_RegisterType * canRegs = CanRegs[hwCh];
    uint32 ir;

    while ((ir = canRegs->INT) != 0) {
        /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Errors are not possible to simulate in our test environment */
        /* Interrupt from status register */
        if ((ir & CAN_REG_IR_INT0ID_MASK) == CAN_REG_IR_BUSEVENT) {
            uint32 sr = canRegs->SR;

            if ((sr & (1uL << CAN_REG_ES_TXOK_BIT)) == (1uL << CAN_REG_ES_TXOK_BIT)) {
                Can_HandleInterruptError();

            }
            else if ((sr & (1uL << CAN_REG_ES_RXOK_BIT)) == (1uL << CAN_REG_ES_RXOK_BIT)) {
                Can_HandleInterruptError(); // This is not the way to handle rx interrupts for us.

            }
            else if ((sr & (1uL << CAN_REG_ES_BOFF_BIT)) == (1uL << CAN_REG_ES_BOFF_BIT)) {
                Can_HandleBusOff(hwCh);
                CanIf_ControllerBusOff(ch); /*lint !e641 LINT:PERFORMANCE:convert enum to int */

            }
            else if ((sr & (1uL << CAN_REG_ES_WKPEND_BIT)) == (1uL << CAN_REG_ES_WKPEND_BIT)) {
                /* No support for wakeup. */
            }
            else {
                /* Do nothing. MISRA-C compliance. */
            }

        }

        else {
            /* ir contains the message object number causing the interrupt */
            Can_HwHandleType hohHandle = controllerConfig->Can_Arc_MailBoxToHrh[ir - 1];
            const Can_HardwareObjectType * hoh = Can_FindHoh(hohHandle);

            if (hoh->CanObjectType == CAN_OBJECT_TYPE_RECEIVE) {
                Can_HandleRxOk((uint8) (ir & CAN_REG_IR_INT0ID_MSG_MASK), controllerConfig, hoh);
            }
            else {
                Can_HandleTxOk(hwCh, (uint8) (ir & CAN_REG_IR_INT0ID_MSG_MASK));
            }

            /* Clear interrupt pending flag. */
            waitUntilNotBusy(controllerConfig->CanHwUnitId, CAN_REG_IF_2); /*lint !e641 LINT:PERFORMANCE:convert enum to int */

            canRegs->IFx[CAN_REG_IF_2].CMD = (1uL << CAN_REG_IFX_COM_CLEARINTPEND_BIT) | ir;

        }
    }
}


#if (CAN_AR_VERSION < 40300 )
Std_ReturnType Can_Hw_ChangeBaudrate(uint8 Controller, const Can_ControllerBaudrateConfigType *baudratePtr ) {
    /* NOT SUPPORTED */
    return E_NOT_OK;
}

#endif

/** @}*/
/** @}*/
