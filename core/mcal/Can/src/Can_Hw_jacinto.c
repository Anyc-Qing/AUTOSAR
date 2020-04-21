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
/** @tagSettings DEFAULT_ARCHITECTURE=JACINTO5|JACINTO6 */

#include "Can_Hw_jacinto.h"
#include "Can.h"
#include "Can_Internal.h"
#if defined(USE_DEM)
#include "Dem.h"
#endif
#if defined(USE_DET)
#include "Det.h"
#endif
#include "Cpu.h"
#include "arc_assert.h"
#include "CanIf_Cbk.h"
#include "isr.h"

#define GET_PRIVATE_DATA(_controller) &CanUnits[_controller];

static uint32 canInterruptErrors = 0;
static uint8 RxShadowBuf[CAN_ARC_CTRL_CONFIG_CNT][8];
Can_GlobalType Can_Global = { .initRun = CAN_UNINIT };

Can_UnitType CanUnits[] = {
    {
        .state = CANIF_CS_UNINIT,
        .pendingStateIndication = CAN_CTRL_INDICATION_NONE,
        .MaxBoxes = DCAN1_MAX_MESSAGEBOXES,
        .WakeupSrc = 0,
        .mxBoxBusyMask = 0,
    },
    {
        .state = CANIF_CS_UNINIT,
        .pendingStateIndication = CAN_CTRL_INDICATION_NONE,
        .MaxBoxes = DCAN2_MAX_MESSAGEBOXES,
        .WakeupSrc = 0,
        .mxBoxBusyMask = 0
    }
};

/* Array for easy access to DCAN register definitions. */
/*lint -e{923} cast from unsigned int to pointer - OK, necessary to use SFR of MCU. */
Can_RegisterType* CanRegs[] = {
        DCAN1_Base,
        DCAN2_Base,
};


Can_ReturnType DCAN_WAIT_UNTIL_NOT_BUSY(uint8 ControllerId, uint32 IfRegId){
	uint32 ErrCounter = CAN_TIMEOUT_DURATION;
	while((CanRegs[ControllerId]->IFx[IfRegId].CMD & 0x00008000u) > 0u) {
		ErrCounter--;
		if(ErrCounter == 0) {
			#if defined(USE_DEM)
			Dem_ReportErrorStatus(DemConf_DemEventParameter_CAN_E_TIMEOUT, DEM_EVENT_STATUS_FAILED);
			#endif
			ErrCounter = CAN_TIMEOUT_DURATION;
			return CAN_NOT_OK;
		}
	}
}

void DCAN_WAIT_UNTIL_NOT_BUSY_NO_RV(uint8 ControllerId, uint32 IfRegId){
	uint32 ErrCounter = CAN_TIMEOUT_DURATION;
	while((CanRegs[ControllerId]->IFx[IfRegId].CMD & 0x00008000u) > 0) {
		ErrCounter--;
		if(ErrCounter == 0) {
			#if defined(USE_DEM)
			Dem_ReportErrorStatus(DemConf_DemEventParameter_CAN_E_TIMEOUT, DEM_EVENT_STATUS_FAILED);
			#endif
			ErrCounter = CAN_TIMEOUT_DURATION;
			return;
		}
	}
}



/**
 * @brief Can_Hw_DisableControllerInterrupts Disables interrupts in the hardware.
 * Does not perform any other logic like changing the disable interrupt count.
 * @param Controller Hardware index of the controller.
 */
void Can_Hw_DisableControllerInterrupts(uint8 Controller) {

    Can_RegisterType *canCtrlRegs = CanRegs[Controller];

    // Set init bit in CTL
    canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_INIT_BIT);

    canCtrlRegs->CTL &= ~CAN_CTL_INTERRUPT_MASK;

    // Clear init bit in CTL
    canCtrlRegs->CTL &= ~(1uL << CAN_REG_CTL_INIT_BIT);
}

/**
 * @brief Can_Hw_EnableControllerInterrupts Enables the interrupts in the hardware.
 * Does not perform any other logic like changing the disable interrupt count.
 * @param Controller Hardware index of the controller.
 */
void Can_Hw_EnableControllerInterrupts(uint8 Controller) {

    Can_RegisterType *canCtrlRegs = CanRegs[Controller];

    // Set init bit in CTL
    canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_INIT_BIT);

    /* Set IE */
    canCtrlRegs->CTL |= CAN_CTL_INTERRUPT_MASK;

    // Clear init bit in CTL
    canCtrlRegs->CTL &= ~(1uL << CAN_REG_CTL_INIT_BIT);
}

/**
 * This function will handle fifo buffers as well as individual message rx objects.
 * Note that fifos must use consecutive message objects.
 *
 */
void Can_HandleRxOk(uint8 MsgObjectNr, const Can_ControllerConfigType * controllerConfig, const Can_HardwareObjectType * hrh) {
    uint32 MsgId;
    uint8 MsgDlc;
    uint8 DataByteIndex;
    uint8 *SduPtr;
    uint32 mc;
    uint32 arb;


    Can_RegisterType * canRegs = CanRegs[controllerConfig->CanControllerId];

    do {
        // Setup hardware to read arbitration, control and data Bits of the message object.
        // Clear IntPnd and Tx

        canRegs->IFx[CAN_REG_IF_2].CMD = (1uL << CAN_REG_IFX_COM_DATAB_BIT)
                | (1uL << CAN_REG_IFX_COM_DATAA_BIT)
                | (1uL << CAN_REG_IFX_COM_NEWDAT_BIT)
                | (1uL << CAN_REG_IFX_COM_CLEARINTPEND_BIT)
                | (1uL << CAN_REG_IFX_COM_CONTROL_BIT)
                | (1uL << CAN_REG_IFX_COM_ARB_BIT)
                | (MsgObjectNr);

        DCAN_WAIT_UNTIL_NOT_BUSY_NO_RV(controllerConfig->CanControllerId, CAN_REG_IF_2);

        // Read message control
        mc = canRegs->IFx[CAN_REG_IF_2].MCTL;
        arb = canRegs->IFx[CAN_REG_IF_2].ARB;

        // Is there a new message waiting?
        if ((mc & (1uL << DCAN_MC_NEWDAT)) == (1uL << DCAN_MC_NEWDAT)) {
            /* Extended Id */
            /** @req 4.1.2/SWS_Can_00423 */
            if ((arb & (1uL << CAN_REG_IFX_ARB_XTD_BIT)) == (1uL << CAN_REG_IFX_ARB_XTD_BIT)) {
                /* Bring Id to standardized format (MSB marks extended Id) */
                MsgId = (arb & EXT_ID_MASK) | EXT_ID_BIT;

            } else { /* Standard Id */
                /* Bring Id to standardized format (MSB marks extended Id) */
                MsgId = (arb >> CAN_REG_IFX_MASK_STDMSK_BIT) & STD_ID_MASK;
            }

            /* DLC (Max 8) */
            MsgDlc = mc & CAN_REG_MC_DLC_MASK;
            if (MsgDlc > 8) {
                MsgDlc = 8;
            }

            /* Let SduPtr point to Shadow Buffer */
            uint8 ix = getControllerConfigIdx(controllerConfig->CanControllerId);
            SduPtr = RxShadowBuf[ix];

            /* Copy Message Data to Shadow Buffer */
            for (DataByteIndex = 0; DataByteIndex < MsgDlc; DataByteIndex++) {
#if defined(CFG_JACINTO)	/* Jacinto is little-endian. */
                SduPtr[DataByteIndex] = canRegs->IFx[CAN_REG_IF_2].DATx[DataByteIndex];
#else
#error DCAN not supported for the used MCU.
#endif
            }

            /* Indicate successful Reception */
            /** @req 4.1.2/SWS_Can_00279 */
            /** @req 4.1.2/SWS_Can_00396 */
            CanIf_RxIndication(hrh->CanObjectId, MsgId, MsgDlc, SduPtr);

            if ((mc & (1uL << DCAN_MC_EOB)) == (1uL << DCAN_MC_EOB)) {
                break; // We have parsed the last object of this FIFO.
            }

        } else {
            break; // There is no new data in the fifo.

        }
        MsgObjectNr++;
    } while ((mc & (1uL << DCAN_MC_EOB)) == 0uL);
}

void Can_InterruptHandler(CanControllerIdType controllerNr) {

    const Can_ControllerConfigType * controllerConfig = GET_CONTROLLER_CONFIG(controllerNr);
    Can_RegisterType * canRegs = CanRegs[controllerConfig->CanControllerId];
    uint32 ir;

    while ( (ir = canRegs->INT)  != 0 ) {
		/* Interrupt from status register */
		if ((ir & CAN_REG_IR_INT0ID_MASK) == CAN_REG_IR_BUSEVENT) {
			uint32 sr = canRegs->SR;

			if ((sr & (1uL << CAN_REG_ES_TXOK_BIT)) == (1uL << CAN_REG_ES_TXOK_BIT)) {
				Can_HandleInterruptError();

			} else if ((sr & (1uL << CAN_REG_ES_RXOK_BIT)) == (1uL << CAN_REG_ES_RXOK_BIT)) {
				Can_HandleInterruptError(); // This is not the way to handle rx interrupts for us.

			} else if ((sr & (1uL << CAN_REG_ES_BOFF_BIT)) == (1uL << CAN_REG_ES_BOFF_BIT)) {
				Can_HandleBusOff(controllerNr);
				CanIf_ControllerBusOff(controllerNr);

			} else if ((sr & (1uL << CAN_REG_ES_WKPEND_BIT)) == (1uL << CAN_REG_ES_WKPEND_BIT)) {
				/* No support for wakeup. */

			} else {
				/* Do nothing. MISRA-C compliance. */
			}

		} else {

			/* ir contains the message object number causing the interrupt */
			Can_HwHandleType hohHandle = controllerConfig->Can_Arc_MailBoxToHrh[ir - 1];
			const Can_HardwareObjectType * hoh = Can_FindHoh(hohHandle);

			if (hoh->CanObjectType == CAN_OBJECT_TYPE_RECEIVE) {
				Can_HandleRxOk((uint8) (ir & CAN_REG_IR_INT0ID_MSG_MASK), controllerConfig, hoh);

			} else {
				Can_HandleTxOk(controllerNr, (uint8) (ir & CAN_REG_IR_INT0ID_MSG_MASK));
			}

			/* Clear interrupt pending flag. */
			DCAN_WAIT_UNTIL_NOT_BUSY_NO_RV(controllerConfig->CanControllerId, CAN_REG_IF_2);

			canRegs->IFx[CAN_REG_IF_2].CMD = (1uL << CAN_REG_IFX_COM_CLEARINTPEND_BIT) | ir;

		}
    }
}

void Can_InitHardwareObjects( const Can_ControllerConfigType * controllerConfig) {
    uint32 rx;
    uint32 tx;
    uint32 extended;

    Can_RegisterType * canCtrlRegs = CanRegs[controllerConfig->CanControllerId];
    /* Configure the HOHs for this controller. */
    const Can_HardwareObjectType* hoh;
    hoh = controllerConfig->Can_Arc_Hoh;
    hoh--;
    do {
        hoh++;

        if (hoh->ArcCanControllerId != controllerConfig->CanControllerId) {
            continue;
        }

        if ((hoh->CanObjectType == CAN_OBJECT_TYPE_RECEIVE)) {
            rx = 1;
            tx = 0;
        } else {
            rx = 0;
            tx = 1;
        }

        if (hoh->CanIdType == CAN_ID_TYPE_EXTENDED) {
            extended = 1;
        } else {
            extended = 0;
        }

        /* For every message object in this hoh */
        uint64  mbMask = hoh->ArcMailboxMask;
        uint8   mbNr = 0;
        uint8 mbN = 0;
        for (; mbMask; mbMask &= ~(1uLL << mbNr)) {
            mbNr = ilog2_64(mbMask);
            mbN++;

            /* Check if this is the last message box for this hoh. */
            uint32 eob = 1;
            if ((hoh->CanObjectType == CAN_OBJECT_TYPE_RECEIVE) && (mbN != (hoh->Can_Arc_NrMessageBoxes))) {
                /* EndOfBlock Bit will not be set */
                eob = 0;
            }

            if (rx == 1u) {
                /* Setup mask register */
                if(extended == 0U) {
                    canCtrlRegs->IFx[CAN_REG_IF_1].MASK = (hoh->CanHwFilterMask & STD_ID_MASK) << CAN_REG_IFX_MASK_STDMSK_BIT;
                    canCtrlRegs->IFx[CAN_REG_IF_1].ARB = (hoh->CanHwFilterCode & STD_ID_MASK) << CAN_REG_IFX_ARB_STDID_BIT;
                } else {
                    canCtrlRegs->IFx[CAN_REG_IF_1].MASK = hoh->CanHwFilterMask & EXT_ID_MASK;
                    canCtrlRegs->IFx[CAN_REG_IF_1].ARB = hoh->CanHwFilterCode & EXT_ID_MASK;
                }

                canCtrlRegs->IFx[CAN_REG_IF_1].MASK |= extended << CAN_REG_IFX_MASK_MXTD_BIT;
                canCtrlRegs->IFx[CAN_REG_IF_1].MASK |= rx << CAN_REG_IFX_MASK_MDIR_BIT;
            }
            /* Setup arbitration register */
            canCtrlRegs->IFx[CAN_REG_IF_1].ARB |= (1uL << CAN_REG_IFX_ARB_MSGVAL_BIT)
                                    | (extended << CAN_REG_IFX_ARB_XTD_BIT)
                                    | (tx << CAN_REG_IFX_ARB_DIR_BIT);

            /* Setup message control register */
            canCtrlRegs->IFx[CAN_REG_IF_1].MCTL = IF_MC_MASK(8uL, rx, rx, tx, eob);

            /* Setup command register */
            canCtrlRegs->IFx[CAN_REG_IF_1].CMD = 0x00F00000uL | (((uint32) mbNr) + 1);

            DCAN_WAIT_UNTIL_NOT_BUSY_NO_RV(controllerConfig->CanControllerId, CAN_REG_IF_1);
        }
    } while (!hoh->Can_Arc_EOL);
}


/**
 * Gets the index of a controller in the global configuration structure.
 * @param controller
 * @return controller index
 */
uint8 getControllerConfigIdx(uint8 controller) {

    if (Can_Global.initRun == CAN_UNINIT) {
        //Return the original value to catch out-of-bounds controllers
        return controller;
    }

    for (uint8 i = 0; i < CAN_ARC_CTRL_CONFIG_CNT; i++) {
        if (Can_Global.config->CanConfigSetPtr->CanController[i].CanControllerId == controller) {
            return i;
        }
    }
    return controller;
}


const Can_ControllerConfigType* GET_CONTROLLER_CONFIG(uint8 _controllerID){
	return &Can_Global.config->CanConfigSetPtr->CanController[getControllerConfigIdx(_controllerID)];
}

void Can_HandleInterruptError(void) {
    canInterruptErrors++;
}

void Can_HandleBusOff(CanControllerIdType controllerNr) {
    /** @req 4.1.2/SWS_Can_00020 */
    /** @req 4.1.2/SWS_Can_00272 */
    /** @req 4.1.2/SWS_Can_00273 */
    //This will also indicate controller mode to CanIF, it probably should not
    Can_SetControllerMode(controllerNr, CAN_T_STOP); // CANIF272
}

const Can_HardwareObjectType * Can_FindHoh(Can_HwHandleType handle) {
    return &Can_Global.config->CanConfigSetPtr->ArcCanHardwareObjects[handle];
}

void Can_HandleTxOk(CanControllerIdType controllerNr, uint8 MsgNr) {
    Can_UnitType *canUnit = GET_PRIVATE_DATA(controllerNr);

    /** @req 4.1.2/SWS_Can_00033 */
    /* Clear busy flag */
    canUnit->mxBoxBusyMask &= ~(1uLL << (MsgNr - 1));

    /** @req 4.1.2/SWS_Can_00016 */
    CanIf_TxConfirmation(canUnit->transmittedPduIds[(MsgNr - 1)]);
}

uint8 ilog2_64(uint64 val) {
    uint32 t = (uint32)(val >> 32);

    if (t != 0) {
        return ilog2(t) + 32;
    }

    return ilog2((uint32)(0xFFFFFFFFuL & val));
}


static inline uint32 Can_CalculateBTR(const Can_ControllerConfigType * ctrl) {

#if defined(CFG_TMS570)
    uint32 clock = Mcu_Arc_GetPeripheralClock(PERIPHERAL_CLOCK_CAN);
#elif defined(CFG_JACINTO)
    uint32 clock = Mcu_Arc_GetPeripheralClock(PERIPHERAL_CLOCK_DCAN);
#else
#error DCAN not supported for the used MCU.
#endif
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
    uint32 retVal = (
            brpStandard |
            (brpExtended << CAN_REG_BTR_BRPE_OFFSET) |
            (tseg1 << CAN_REG_BTR_TSEG1_OFFSET) |
            (tseg2 << CAN_REG_BTR_TSEG2_OFFSET));

    return retVal;
}

static ISR(Can1_Level0InterruptHandler) {
    Can_InterruptHandler(DCAN1);
}

static ISR(Can2_Level0InterruptHandler) {
    Can_InterruptHandler(DCAN2);
}

#if defined(CFG_TMS570)
static ISR(Can3_Level0InterruptHandler) {
    Can_InterruptHandler(DCAN3);
}
#endif

#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
static inline void Can_InstallInterruptHandlers(const Can_ControllerConfigType * ctrl) {

#if defined (CFG_TMS570)
    if (ctrl->CanControllerId == DCAN1) {
        ISR_INSTALL_ISR2("DCAN1Level0", Can1_Level0InterruptHandler, CAN1_LVL0_INT, CAN_IRQ_PRIORITY, 0);
    } else if (ctrl->CanControllerId == DCAN2) {
        ISR_INSTALL_ISR2("DCAN2Level0", Can2_Level0InterruptHandler, CAN2_LVL0_INT, CAN_IRQ_PRIORITY, 0);
    } else if (ctrl->CanControllerId == DCAN3) {
        ISR_INSTALL_ISR2("DCAN3Level0", Can3_Level0InterruptHandler, CAN3_LVL0_INT, CAN_IRQ_PRIORITY, 0);
    } else {
        /* Do nothing. */
    }
#elif defined(CFG_JACINTO)
    if (ctrl->CanControllerId == DCAN1) {
        ISR_INSTALL_ISR2("DCAN1Level0", Can1_Level0InterruptHandler, DCAN0_IRQ_INT0, CAN_IRQ_PRIORITY, 0);
    } else if (ctrl->CanControllerId == DCAN2) {
        ISR_INSTALL_ISR2("DCAN2Level0", Can2_Level0InterruptHandler, DCAN1_IRQ_INT0, CAN_IRQ_PRIORITY, 0);
    } else {
        /* Do nothing. */
    }
#else
#error DCAN not supported for the used MCU.
#endif
}
#endif /* !defined(CFG_DRIVERS_USE_CONFIG_ISRS) */

void Can_Hw_Init( const Can_ConfigType *Config ){

	/** @req 4.1.2/SWS_Can_00245 */
	    for (uint8 canCtrlNr = 0; canCtrlNr < CAN_CONTROLLER_CNT; canCtrlNr++) {

	        const Can_ControllerConfigType * controllerConfig = GET_CONTROLLER_CONFIG(canCtrlNr);

	        // Assign the configuration channel used later..
	        Can_Global.channelMap[controllerConfig->CanControllerId] = canCtrlNr;
	        Can_Global.configured |= (1uL << controllerConfig->CanControllerId);

	        /** @req 4.1.2/SWS_Can_00259 *//* Reset the controller. The device goes to Configuration Mode immediately. */
	        Can_UnitType * canUnit = GET_PRIVATE_DATA(controllerConfig->CanControllerId);
	        canUnit->state = CANIF_CS_STOPPED;
	        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_NONE;
	        canUnit->mxBoxBusyMask = 0;
	        memset(&canUnit->transmittedPduIds[0], 0, sizeof(canUnit->transmittedPduIds));
	        /* MaxBoxes - initialized statically, never changes. */
	        canUnit->WakeupSrc = 0;

	        Can_RegisterType *canCtrlRegs = CanRegs[controllerConfig->CanControllerId];

	        canCtrlRegs->CTL |= CAN_REG_CTL_INIT_MASK;
	        canCtrlRegs->CTL |= (1uL << CAN_REG_CTL_SWR_BIT); /* Perform sw reset */

	        /* DAR bit should be 0 for automatic retransmission so nothing to set.
	         * WUBA off - No detection of dominant CAN bus while in power down. */
	        canCtrlRegs->CTL = (
	                (1uL << CAN_REG_CTL_INIT_BIT) | // Init enable
	                (1uL << CAN_REG_CTL_CCE_BIT)  | // CCE enable
	                (1uL << CAN_REG_CTL_ABO_BIT)  | // ABO enable
	                (CAN_REG_CTL_PARITY_DISABLED << CAN_REG_CTL_PARITY_BIT) | // Parity disable
	                CAN_CTL_INTERRUPT_MASK |
	                (controllerConfig->Can_Arc_Loopback << CAN_REG_CTL_TEST_MODE_BIT) // Test mode enable/disable
	                );

	        while ((canCtrlRegs->CTL & (1uL << CAN_REG_CTL_INIT_BIT)) == 0uL) {};

	        /* Clear all pending error flags and reset current status - only reading clears the flags */
	        canCtrlRegs->SR = canCtrlRegs->SR;

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

	    for(uint32 i=0;i<sizeof(CanUnits)/sizeof(CanUnits[0]);i++ ) {
	    	CanUnits[i].mxBoxBusyMask = 0UL;
	    }

}


