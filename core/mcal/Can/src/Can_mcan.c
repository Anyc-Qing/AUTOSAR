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
/** @tagSettings DEFAULT_ARCHITECTURE=MPC5777M */
/* ----------------------------[information]----------------------------------*/
/*
 *
 * Description:
 *   Implements the Can Driver module for M_CAN module
 *
 *
 * Support:
 *   General                  Have Support
 *   -------------------------------------------
 *   CAN_DEV_ERROR_DETECT            Y
 *   CAN_HW_TRANSMIT_CANCELLATION    Y
 *   CAN_IDENTICAL_ID_CANCELLATION   N
 *   CAN_INDEX                       N
 *   CAN_MULTIPLEXED_TRANSMISSION    N
 *   CAN_TIMEOUT_DURATION            N
 *   CAN_VERSION_INFO_API            Y
 *
 *   Controller                  Have Support
 *   -------------------------------------------
 *   CAN_BUSOFF_PROCESSING           Y
 *   CAN_RX_PROCESSING               Y
 *   CAN_TX_PROCESSING               Y
 *   CAN_WAKEUP_PROCESSING           N
 *   CAN_CPU_CLOCK_REFERENCE         N  , *)
 *   CanWakeupSourceRef              N  , **)
 *
 *	*) It assumes that there is a PERIPHERAL clock defined.
 *
 *
 * Implementation Notes:
 *   FIFO
 *   - Is always ON.
 *     IMPROVEMENT:    Add FIFO error handling (full/overrun/overflow etc.)
 *
 *    AUTOSAR API
 *			IMPROVEMENT: Separate Autosar API and the hardware specific part
 *
 *
 * */
/*
 * General requirements
 * */
/** @req SWS_Can_00237 No transmit triggered by RTR */
/** @req SWS_Can_00236 No transmit triggered by RTR */
/** @req SWS_Can_00238 On-chip controller, does not use other drivers */
/** @req SWS_Can_00401 Multiple mbs per HTH */
/** @req SWS_Can_00402 Multiplexed transmission, possible to identify free mb */
/** @req SWS_Can_00403 Multiplexed transmission for device sending in priority (and we don't touch the LBUF bit which is 0 default ) */
/** @req SWS_Can_00007 Complete polling configurable */
/** @req SWS_Can_00220 Precompile variant */
/** @req SWS_Can_00035 No callbacks */
/** @req SWS_Can_00413 Can_ConfigType */
/** @req SWS_Can_00079 Coding guidelines (compiler abstraction not used)*/

/* ----------------------------[includes]------------------------------------*/
#include "Cpu.h"
#include "Can.h"
#if defined (CFG_PPC)
#include "mpc55xx.h"
#else
#include "ip_mcan.h"
#endif
#include "Mcu.h"
#if defined (CFG_MPC5777M)
#include "irq_mpc5777m.h"
#elif defined (CFG_RH850P1M_C)
#include "irq_rh850p1m_c.h"
#endif
#include "CanIf_Cbk.h"
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#if defined(USE_DEM)
#include "Dem.h"
#endif
#include "SchM_Can.h"
#include "isr.h"
#include "arc.h"
#include "message_RAM.h"
#include <string.h>
#include "Can_Internal.h"
#if defined (CFG_RH850P1M_C)
#include "Mcu_integration.h"
#endif
/*
 * Lint Exceptions For this file:
 * - Allow use of union based types (9018)
 */
/*lint -save -e9018*/

/* ----------------------------[private define]------------------------------*/

#if defined (CFG_MPC5777M)
#define MAX_MESSAGE_RAM_SIZE_PER_CTRLR 			0x1200UL //SRAM size used by one MCAN controller
#define FULL_SRAM_BASE_ADDR_MSG_RAM 	0xFFED4000UL	//MCAN shared SRAM base address
#define MESSAGE_RAM_CLEAR_VALUE			0x00000000uL
#define FULL_SRAM_BASE_ADDR_CAN_HW		0xFFEE4000UL
#define FULL_SRAM_OFFSET_ADDR_CAN_HW	0x4000
#define INTERRUPT_LINE_SELECT_REG_VALUE	0xFFF50000UL

/* DRXE, TCFE, TCE, RF1LE, RF1NE, RF0LE, RF0NE */
#define CAN_LINE0_MASK 						0x00080699UL
/* STE, FOE, ACKE, BE, CRCE, BO */
#define CAN_LINE1_MASK 						0xFA000000UL

#define ERR_STE_MASK 						(0x80000000UL)
#define ERR_FOE_MASK 						(0x40000000UL)
#define ERR_ACKE_MASK 						(0x20000000UL)
#define ERR_BE_MASK 						(0x10000000UL)
#define ERR_CRCE_MASK 						(0x08000000UL)


#elif defined (CFG_RH850P1M_C)

#define MESSAGE_RAM_CLEAR_VALUE			0x00000000uL
#define INTERRUPT_LINE_SELECT_REG_VALUE	0x1FF50000UL

#define MCAN_0_BASE_ADDRESS				0xFFEF0000UL
#define MCAN_1_BASE_ADDRESS				0xFFD31000UL

#define FULL_SRAM_BASE_ADDR_CAN_HW		MCAN_0_BASE_ADDRESS
#define FULL_SRAM_OFFSET_ADDR_CAN_HW	0x1BF000UL



#define MCAN_0_RAM_START_ADDRESS		0xFFEF8000UL
#define MCAN_1_RAM_START_ADDRESS		0xFFD3A000UL
#define FULL_SRAM_BASE_ADDR_MSG_RAM 	MCAN_0_RAM_START_ADDRESS
#define MESSAGE_RAM_OFFSET_ADDRESS	 	0x1BE000UL
#define MAX_MESSAGE_RAM_SIZE_PER_CTRLR	0x2000UL //SRAM size used by one MCAN controller


#define ECC_MCAN_0_BASE_ADDRESS			0xFFC79000UL
#define ECC_MCAN_1_BASE_ADDRESS			0xFFC71100UL
#define ECC_MCAN_SIZE					0x20u

#define STAC_LM3               (*(volatile uint32 *)0xFFF81720)
#define SWLRESA3               (*(volatile uint32 *)0xFFF81708)
#define SWLRESS3               (*(volatile uint32 *)0xFFF8170C)
#define MSR_LM3                (*(volatile uint32 *)0xFFF81710)
#define RZEROMD_ENABLED					3ul
#define SWLRESA3_0_GENERATE_RESET		1ul
#define MCAN_CLK_ENABLE					0ul
/* DRXE, TCFE, TCE, RF1LE, RF1NE, RF0LE, RF0NE */
#define CAN_LINE0_MASK                      0x00080699UL
/* PEDE, PEAE, BOE */
#define CAN_LINE1_MASK 						0x1A000000UL
#define ERR_PED_MASK 						(0x10000000UL)
#define ERR_PEA_MASK                        (0x08000000UL)
#define ERR_BO_MASK                         (0x02000000UL)
#define ERR_EW_MASK                         (0x01000000UL)

#define SUTFF_ERR_CODE                      1u
#define FORM_ERR_CODE                       2u
#define ACK_ERR_CODE                        3u
#define BIT_0_ERR_CODE                      4u
#define BIT_1_ERR_CODE                      5u
#define CRC_ERR_CODE                        6u

#endif /* CFG_MPC5777M */


#define INVALID_CANID 					0xFFFFFFFFUL
#define EXTENDED_CANID_MAX 				0x1FFFFFFFUL

#define USE_CAN_STATISTICS      		STD_OFF

#define COPY_DATA_TX_BUFFER					1
#define COPY_DATA_RX_BUFFER					0

#define STANDARD_FILTER_ELEMENTS            128u   /* No. of standard filter elements */
#define STANDARDID_FILTER_START_ADDRESS     0x0000u /* 32-bit word address */
#define STANDARDID_FILTER_SIZE              STANDARD_FILTER_ELEMENTS   /* No. of words */

#define EXTENDED_FILTER_ELEMENTS            64u    /* No. of standard filter elements */
#define EXTENDEDID_FILTER_START_ADDRESS     STANDARDID_FILTER_START_ADDRESS + STANDARDID_FILTER_SIZE /* 32-bit word address */
#define EXTENDEDID_FILTER_SIZE              128u /* No. of words */

#define BUFFER_ELEMENT_SIZE                 16u /* Takes 4 words */
#define RXFIFO0_ELEMENTS                    64u
#define RXFIFO0_START_ADDRESS				EXTENDEDID_FILTER_START_ADDRESS + EXTENDEDID_FILTER_SIZE
#define RXFIFO0_SIZE                        256u /* No. of words = 64 * 4 words */

#define RXFIFO1_ELEMENTS                    64u
#define RXFIFO1_START_ADDRESS				RXFIFO0_START_ADDRESS + RXFIFO0_SIZE
#define RXFIFO1_SIZE                        256u /* No. of words = 64 * 4 words */

#define RXBUFFER_ELEMENTS                   64u
#define RXBUFFER_START_ADDRESS				RXFIFO1_START_ADDRESS + RXFIFO1_SIZE
#define RXBUFFER_SIZE                       256u /* No. of words = 64 * 4 words */

#define TXBUFFER_ELEMENTS                   32u
#define TXBUFFER_START_ADDRESS				RXBUFFER_START_ADDRESS + RXBUFFER_SIZE
#define TXBUFFER_SIZE                       128u /* No. of words = 32 * 4 words */


#define STDID_CHK_MASK 						0xfffff800UL

#define REG_MASK(_bit)              (1UL << _bit)

#define FIFO0_NEWMSG_INT_MASK 				REG_MASK(0u)
#define FIFO1_NEWMSG_INT_MASK 				REG_MASK(4u)
#define BUFFER_NEWMSG_INT_MASK				REG_MASK(19u)
#define FIFO0_MSGLOST_INT_MASK				REG_MASK(3u)
#define FIFO1_MSGLOST_INT_MASK				REG_MASK(7u)
#define TX_CFRM_INT_MASK                    REG_MASK(9u)
#define TX_CNCL_INT_MASK                    REG_MASK(10u)



#define REJECT_NON_MATCHING_FRAME_ID_STD_MASK        REG_MASK(5u)
#define REJECT_NON_MATCHING_FRAME_ID_EXTD_MASK       REG_MASK(3u)
#define REJECT_REMOTE_FRAME_ID_STD_MASK              REG_MASK(1u)
#define REJECT_REMOTE_FRAME_ID_EXTD_MASK             REG_MASK(0u)

#define FIFO_OVERWRITE_MODE                  REG_MASK(31u)

#define FILTER_TYPE_CLASSIC                 2u
#define FILTER_TYPE_DUAL_ID                 1u

#define RESET_ZERO                          0u
#define SET_ONE                             1u
#define INTERRUPT_LINE_ZERO                 0u
#define INTERRUPT_LINE_ONE                  1u
#define INTERRUPT_REGISTER_CLEAR            0xFFFFFFFFUL

#define CAN_PAY_LOAD_LEN                    8u

/* ----------------------------[private macro]-------------------------------*/

#define CTRL_TO_UNIT_PTR(_controller)   	&CanUnit[_controller]
#define HWUNIT_TO_CONTROLLER_ID(_hwunit)	Can_Global.config->CanConfigSetPtr->ArcHwUnitToController[_hwunit]
#define VALID_CONTROLLER(_ctrl)         	((_ctrl) < CAN_ARC_CTRL_CONFIG_CNT)

#if defined (CFG_MPC5777M)

#define GET_CAN_HW(_hwUnit) 	  			((m_can_t *)(FULL_SRAM_BASE_ADDR_CAN_HW + (FULL_SRAM_OFFSET_ADDR_CAN_HW*(uint32)(_hwUnit))))
#define GET_BASE_ADDR_MSG_RAM(_canId)		(FULL_SRAM_BASE_ADDR_MSG_RAM + (MAX_MESSAGE_RAM_SIZE_PER_CTRLR * (uint32)(_canId)))

#elif defined (CFG_RH850P1M_C)

#define GET_CAN_HW(_hwUnit) 	  			((m_can_t *)(FULL_SRAM_BASE_ADDR_CAN_HW - (FULL_SRAM_OFFSET_ADDR_CAN_HW*(uint32)(_hwUnit))))
#define GET_BASE_ADDR_MSG_RAM(_canId)		(FULL_SRAM_BASE_ADDR_MSG_RAM - (MESSAGE_RAM_OFFSET_ADDRESS * (uint32)(_canId)))


#endif /* CFG_MPC5777M */


#define CHK_NULL_PTR(_ptr) \
        if( _ptr == NULL ) { \
            return; \
        }


#if ( CAN_DEV_ERROR_DETECT == STD_ON )
/** @req 4.0.3/CAN027 */
/** @req 4.1.2/SWS_Can_00091*/
/** @req 4.1.2/SWS_Can_00089*/
#define VALIDATE_RV(_exp,_api,_err,_rv) \
        if( !(_exp) ) { \
          (void)Det_ReportError(CAN_MODULE_ID,0,_api,_err); \
          return _rv; \
        }

#define VALIDATE(_exp,_api,_err ) \
        VALIDATE_RV(_exp,_api,_err, (E_NOT_OK))

#define VALIDATE_NO_RV(_exp,_api,_err ) \
        if( !(_exp) ) { \
          (void)Det_ReportError(CAN_MODULE_ID,0,_api,_err); \
          return; \
        }

#define DET_REPORTERROR(_x,_y,_z,_q) (void)Det_ReportError(_x, _y, _z, _q)
#else
/** @req 4.0.3/CAN424 */
#define VALIDATE_RV(_exp,_api,_err,rv )
#define VALIDATE(_exp,_api,_err )
#define VALIDATE_NO_RV(_exp,_api,_err )
#define DET_REPORTERROR(_x,_y,_z,_q)
#endif

#if defined(USE_DEM)
#define VALIDATE_DEM(_exp,_err,_rv) \
        if( !(_exp) ) { \
          Dem_ReportErrorStatus(_err, DEM_EVENT_STATUS_FAILED); \
          return _rv; \
        }
#else
#define VALIDATE_DEM(_exp,_err,_rv )
#endif



/* ----------------------------[private typedef]-----------------------------*/

#if defined(CFG_CAN_TEST)
Can_TestType Can_Test;
#endif

typedef volatile struct M_CAN_tag m_can_t;
typedef volatile struct M_CAN_SIDF_tag m_can_sidf_t;
typedef volatile struct M_CAN_EIDF_tag m_can_eidf_t;
typedef volatile struct M_CAN_Rx_FIFO_tag m_can_rx_fifo_t;
typedef volatile struct M_CAN_Tx_BUF_tag m_can_tx_buf_t;


/* Type for holding global information used by the driver */
typedef struct {
    Can_DriverStateType     initRun;            /* If Can_Init() have been run */
    const Can_ConfigType *  config;             /* Pointer to config */
} Can_GlobalType;


/* Type for holding information about each controller */
typedef struct {
    /* This unit have uses controller */
    CanIf_ControllerModeType            state;
    const Can_ControllerConfigType *    cfgCtrlPtr;     	/* Pointer to controller config  */
    const Can_HardwareObjectType *      cfgHohPtr;     		/* List of HOHs */
    m_can_t *                         	hwPtr;
    m_can_sidf_t 	*					SIdFilterPtr;
    m_can_eidf_t 	*					EIdFilterPtr;
    m_can_rx_fifo_t *					RxFIFO0Ptr;
    m_can_rx_fifo_t *					RxFIFO1Ptr;
    m_can_rx_fifo_t *					RxBUFPtr;
    m_can_tx_buf_t 	*					TxBUFPtr;
    uint32      						lock_cnt;
    uint64      						Can_Arc_RxBufMask;
    uint32      						Can_Arc_TxBufMask;
    uint32      						bufTxFree;
    Can_CtrlPendingStateIndicationType  pendingStateIndication;
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
    uint32     bufTxCancel;
    uint32     suppressBufTxCancel;
#endif
#if (USE_CAN_STATISTICS == STD_ON)
    Can_Arc_StatisticsType stats;
#endif
} Can_UnitType;



/* ----------------------------[private function prototypes]-----------------*/

static void Can_Isr_Tx(Can_UnitType *uPtr, boolean cancellationIsr);
static void Can_Isr_Rx(const Can_UnitType *uPtr);
static void Can_Err(CanHwUnitIdType unit);
static void Can_BusOff(CanHwUnitIdType unit);
static void Can_AbortTx(m_can_t *canHw, Can_UnitType *canUnit);
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
static void copyMsgToPdu(uint8 RxTx,const PduInfoType *pdu,const Can_UnitType *unit, uint32 buf);
#endif
static void copyPduToData(uint8 RxTx,const Can_PduType *pdu,const Can_UnitType *unit, uint32 buf);
static void Can_Isr_Line_0(CanHwUnitIdType hwUnit);
static void Can_Isr_Line_1(CanHwUnitIdType hwUnit);
static inline uint8 ilog2_64(uint64_t val);
static void installControllerInterrupts(CanHwUnitIdType hwUnit, uint32 ArcFlags);
static void mappingMessageRam(Can_UnitType *Controller, uint8 canID);
#if !defined(CFG_RH850P1M_C)
static void clearMessageRam(uint8 canID);
#endif
static void initMessageRam(const Can_UnitType *Controller);
static void addFilters(const Can_ControllerConfigType * config, Can_UnitType *canUnit);
static void enableInterrupt (uint8 lineno, m_can_t *Hw);
static void processRxFifo0(const Can_UnitType *uPtr);
static void processRxFifo1(const Can_UnitType *uPtr);

/* ----------------------------[private variables]---------------------------*/

Can_UnitType    CanUnit[CAN_ARC_CTRL_CONFIG_CNT];
Can_GlobalType  Can_Global = { .initRun = CAN_UNINIT, };/** @req 4.1.2/SWS_Can_00103 */

/* ----------------------------[private functions]---------------------------*/
/**
 * @brief Can_Hw_DisableControllerInterrupts Disables interrupts in the hardware.
 * Does not perform any other logic like changing the disable interrupt count.
 * @param Controller Hardware index of the controller.
 */
void Can_Hw_DisableControllerInterrupts(uint8 Controller) {

    Can_UnitType *canUnit;
    m_can_t *canHw;

    canUnit = CTRL_TO_UNIT_PTR(Controller);
    /* Don't try to be intelligent, turn everything off */
    canHw = canUnit->hwPtr;

    /* Disable interrupts on line 0 */
    canHw->ILE.B.EINT0 = RESET_ZERO;
    /* Disable interrupts on line 1 */
    canHw->ILE.B.EINT1 = RESET_ZERO;
    //Disableing all interrupts
    canHw->IE.R = RESET_ZERO;
}

/**
 * @brief Can_Hw_EnableControllerInterrupts Enables the interrupts in the hardware.
 * Does not perform any other logic like changing the disable interrupt count.
 * @param Controller Hardware index of the controller.
 */
void Can_Hw_EnableControllerInterrupts(uint8 Controller) {

    Can_UnitType *canUnit;
    m_can_t *canHw;

    canUnit = CTRL_TO_UNIT_PTR(Controller);
    canHw = canUnit->hwPtr;

    //IMPROVEMENT: Replace magic numbers with macros.

    //clear interrupt register
    canHw->IR.R = INTERRUPT_REGISTER_CLEAR;

    /* Interrupt Line Select Register */
    canHw->ILS.R = INTERRUPT_LINE_SELECT_REG_VALUE;

    //Disabling all interrupts
    canHw->IE.R = RESET_ZERO;

    if ((canUnit->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_TX_PROCESSING_INTERRUPT) ||
             (canUnit->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_RX_PROCESSING_INTERRUPT )) {
        /* Turn on the interrupts on line 0 */
        canHw->ILE.B.EINT0 = SET_ONE;
        enableInterrupt(INTERRUPT_LINE_ZERO, canHw);
    }

    if ((canUnit->cfgCtrlPtr->Can_Arc_Flags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) ||
            (canUnit->cfgCtrlPtr->Can_Arc_Flags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT)) {
        /* Turn on the interrupts on line 1 */
        canHw->ILE.B.EINT1 = SET_ONE;
        enableInterrupt(INTERRUPT_LINE_ONE, canHw);
    }
}

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
/**
 * Copy contents of the transfer register in the correct sequence to the PDU
 *
 * @param RxTx
 * @param pdu
 * @param unit
 * @param buf
 */
static void copyMsgToPdu(uint8 RxTx,const PduInfoType *pdu,const Can_UnitType *unit, uint32 buf)
{
#if defined (CFG_MPC5777M)
    uint8 idx;
    idx = 0;
    /* Note: MCAN hardware accesses the Message RAM in terms of 32 bit words.
     * MCAN hardware operates in a Little Endian format and MCU is Big Endian format.
     * To handle correct order of transmission and reception we have the following manipulations
     * while reading from message RAM.
     */
    /** @req 4.1.2/SWS_Can_00059 */
    if ((pdu != NULL) &&(unit != NULL)) {
        if(RxTx == COPY_DATA_TX_BUFFER){            //Tx
            for( ;idx < (uint8)pdu->SduLength;idx++) {
                if(idx < 4) {
                    pdu->SduDataPtr[idx] = unit->TxBUFPtr[buf].TD[0].B.DB[3 - idx];
                } else {
                    pdu->SduDataPtr[idx] = unit->TxBUFPtr[buf].TD[1].B.DB[7 - idx];
                }
            }
        }else if (RxTx == COPY_DATA_RX_BUFFER){       //Rx
            for( ;idx < (uint8)pdu->SduLength;idx++) {
                if(idx < 4) {
                    pdu->SduDataPtr[idx] = unit->RxBUFPtr[buf].RD[0].B.DB[3 - idx];
                } else {
                    pdu->SduDataPtr[idx] = unit->RxBUFPtr[buf].RD[1].B.DB[7 - idx];
                }
            }
        } else {/* Do nothing */ }
    }
#elif defined(CFG_RH850P1M_C)
    /** @req 4.1.2/SWS_Can_00059 *//* Definition of data structure */
    if ((pdu != NULL) &&(unit != NULL)) {
        if(RxTx == COPY_DATA_TX_BUFFER){			//Tx
            memcpy(pdu->SduDataPtr,(uint8 *)unit->TxBUFPtr[buf].TD, (uint8)pdu->SduLength);
        }
        else if (RxTx == COPY_DATA_RX_BUFFER){		//Rx
            memcpy(pdu->SduDataPtr, (uint8 *)unit->RxBUFPtr[buf].RD, (uint8)pdu->SduLength);
        } else { /* Do nothing */ }
    }
#endif
}
#endif

/**
 * Copy contents of the PDU in the correct sequence to the data transfer register
 *
 * @param RxTx
 * @param pdu
 * @param unit
 * @param buf
 */
static void copyPduToData(uint8 RxTx,const Can_PduType *pdu,const Can_UnitType *unit, uint32 buf) {

#if defined (CFG_MPC5777M)


		    uint8 idx = 0;
		    uint32 data = 0;
		    if ((pdu != NULL) &&(unit != NULL)) {
		        if(RxTx == COPY_DATA_TX_BUFFER){
		            for( ;idx < (uint8)pdu->length;idx++) {
		                data = (uint32)pdu->sdu[idx];
		                if(idx < 4) {
		                    unit->TxBUFPtr[buf].TD[0].R |= (vuint32_t)(data << (idx * 8));
		                } else {
		                    unit->TxBUFPtr[buf].TD[1].R |= (vuint32_t)(data << ((idx - 4) * 8));
		                }
		            }
		        }
		        if (RxTx == COPY_DATA_RX_BUFFER){
		            for( ;idx < (uint8)pdu->length;idx++) {
		                data = (uint32)pdu->sdu[idx];
		                if(idx < 4) {
		                    unit->RxBUFPtr[buf].RD[0].R |= (vuint32_t)(data << (idx * 8));
		                } else {
		                    unit->RxBUFPtr[buf].RD[1].R |= (vuint32_t)(data << ((idx - 4) * 8));
		                }
		            }
		        }
		    }

#elif defined(CFG_RH850P1M_C)
    /** @req 4.1.2/SWS_Can_00059 *//* Definition of data structure */
    if ((pdu != NULL) &&(unit != NULL)) {
        if(RxTx == COPY_DATA_TX_BUFFER){
            memcpy((uint8 *)unit->TxBUFPtr[buf].TD, pdu->sdu,(uint8)pdu->length);
        }
        else if (RxTx == COPY_DATA_RX_BUFFER){
            memcpy((uint8 *)unit->RxBUFPtr[buf].RD, pdu->sdu,(uint8)pdu->length);
        } else { /* Do nothing */  }
    }
#endif
}
/**
 * ISR for CAN line 0
 *
 * @param hwUnit CAN controller number( from 0 )
 */
static void Can_Isr_Line_0(CanHwUnitIdType hwUnit)
{

    Can_UnitType *uPtr;

    uPtr = CTRL_TO_UNIT_PTR(HWUNIT_TO_CONTROLLER_ID(hwUnit));
    //Manage interrupts for Rx and Tx
    if(((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_TX_PROCESSING_INTERRUPT ) != NULL) && (uPtr->hwPtr->IR.B.TC == SET_ONE)) {
        Can_Isr_Tx(uPtr, FALSE);
        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        /* Clear Transmit interrupt flag */
        uPtr->hwPtr->IR.R = TX_CFRM_INT_MASK;
    }
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
    if (((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_TX_PROCESSING_INTERRUPT ) != NULL) && (uPtr->hwPtr->IR.B.TCF == SET_ONE)) {
        Can_Isr_Tx(uPtr, TRUE);
        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        /* Clear Transmit interrupt flag */
        uPtr->hwPtr->IR.R = TX_CNCL_INT_MASK;
    }
#endif

    if(((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_RX_PROCESSING_INTERRUPT ) != NULL) &&
            ((uPtr->hwPtr->IR.R &
             (FIFO0_NEWMSG_INT_MASK|FIFO1_NEWMSG_INT_MASK|BUFFER_NEWMSG_INT_MASK
                     |FIFO1_MSGLOST_INT_MASK|FIFO0_MSGLOST_INT_MASK)) != NULL )) {
        Can_Isr_Rx(uPtr);
    }
}
/**
 * ISR for CAN line 1
 *
 * @param hwUnit CAN controller number( from 0 )
 */
static void Can_Isr_Line_1(CanHwUnitIdType hwUnit)
{
    const Can_UnitType *uPtr;

    uPtr = CTRL_TO_UNIT_PTR(HWUNIT_TO_CONTROLLER_ID(hwUnit));
    //Manage interrupts for errors
    /* Note bus off interrupt is meant for bus off status change (i.e no bus off to bus off and bus off to no bus off).
     * i.e Interrupt is triggered twice 1. When bus off occurs it stops Can hardware and sets CCR.INIT bit
     * 2. When Software clears CCR.INIT bit. CAN hardware monitors 129 occurrences of Bus Idle (129 * 11
        consecutive recessive bits) before resuming normal operation. When bus off is no longer detected another interrupt is triggered. But this time PSR.BO is reset.
        So it becomes necessary to check both IR.BO and PSR.BO
     */
    if ((uPtr->hwPtr->IR.B.BO) && (uPtr->hwPtr->PSR.B.BO == SET_ONE)
            && (uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT)){ //Bus_off status has changed
        Can_BusOff(hwUnit);
    }
#if defined (CFG_MPC5777M)
    //Error
    else if(((uPtr->hwPtr->IR.B.STE)||		//Stuff Error
            (uPtr->hwPtr->IR.B.FOE)||	//Format Error
            (uPtr->hwPtr->IR.B.ACKE)||	//Acknowledge Error
            (uPtr->hwPtr->IR.B.BE)||	//Bit Error
            (uPtr->hwPtr->IR.B.CRCE)) &&
            (uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_ERROR_PROCESSING_INTERRUPT)){	//CRC Error
        Can_Err(hwUnit);
    }
#elif defined (CFG_RH850P1M_C)
    //Error
    else if(((uPtr->hwPtr->IR.B.PED) || (uPtr->hwPtr->IR.B.PEA))
            && (uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_ERROR_PROCESSING_INTERRUPT)){
        Can_Err(hwUnit);
    }
#endif
    else {
        /* We have to clear other bits in IR register which are not handled in above cases.
         * Ex.  When bus off status change interrupt is triggered for recovery case (bus off to no bus off case). To clear IR.BO bit we need this.
         *
         */
        uPtr->hwPtr->IR.R = uPtr->hwPtr->IR.R;
    }

}



/**
 * Hardware error ISR for CAN
 *
 * @param unit CAN controller number( from 0 )
 */

static void Can_Err(CanHwUnitIdType hwUnit)
{
    m_can_t *canHw;
    Can_Arc_ErrorType err;
    uint8 controller;

    controller = HWUNIT_TO_CONTROLLER_ID(hwUnit);
    /** @req 4.0.3/CAN033 *//** @req 4.1.2/SWS_Can_00033 */
    /*lint -e923 -e9033 Intentional cast from integer literal HW register address to pointer */
    canHw = GET_CAN_HW(hwUnit);

    err.R = RESET_ZERO; // Reset error status register

#if defined (CFG_MPC5777M)
    // Copy err flags
    err.B.STE   = (uint32)canHw->IR.B.STE;
    err.B.FOE   = (uint32)canHw->IR.B.FOE;
    err.B.ACKE  = (uint32)canHw->IR.B.ACKE;
    err.B.BE    = (uint32)canHw->IR.B.BE;
    err.B.CRCE  = (uint32)canHw->IR.B.CRCE;
#elif defined (CFG_RH850P1M_C)
    // Copy err flags
    switch ((uint32)canHw->PSR.B.LEC) {

        case SUTFF_ERR_CODE:
            err.B.STE   = SET_ONE;
            break;
        case FORM_ERR_CODE:
            err.B.FOE   = SET_ONE;
            break;
        case ACK_ERR_CODE:
            err.B.ACKE  = SET_ONE;
            break;
        case BIT_0_ERR_CODE:
        case BIT_1_ERR_CODE:
            err.B.BE    = SET_ONE;
            break;
        case CRC_ERR_CODE:
            err.B.CRCE  = SET_ONE;
            break;
        default:
            break;

    }
#endif

    if(err.R != RESET_ZERO)
    {
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
        Can_Arc_Error(Can_Global.config->CanConfigSetPtr->CanController[controller].Can_Arc_CanIfControllerId, err);
#else
        Can_Arc_Error(controller, err);
#endif
#if defined (CFG_MPC5777M)
        // Clear ERRINT
        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        canHw->IR.R = ERR_STE_MASK 		|
                        ERR_FOE_MASK 	|
                        ERR_ACKE_MASK 	|
                        ERR_BE_MASK 	|
                        ERR_CRCE_MASK;

#elif defined (CFG_RH850P1M_C)
    	// Clear ERRINT
    	/** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
    	canHw->IR.R = ERR_PED_MASK |ERR_PEA_MASK ;

#endif

    }
    /* In case hardware has set INIT bit because of errors, clear INIT bit */
    while(canHw->CCCR.B.INIT != RESET_ZERO) {
           canHw->CCCR.B.INIT = RESET_ZERO;
    }

}

/**
 * BusOff ISR for CAN
 *
 * @param unit CAN controller number( from 0 )
 */
static void Can_BusOff(CanHwUnitIdType hwUnit)
{
    /** @req 4.0.3/CAN033 *//** @req 4.1.2/SWS_Can_00033 */
    m_can_t *canHw;
    Can_UnitType *canUnit;
    uint8 controllerId;

    controllerId = HWUNIT_TO_CONTROLLER_ID(hwUnit);
    canHw = GET_CAN_HW(hwUnit);
    canUnit = CTRL_TO_UNIT_PTR(controllerId);

#if (USE_CAN_STATISTICS == STD_ON)
    canUnit->stats.boffCnt++;
#endif
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
    CanIf_ControllerBusOff(Can_Global.config->CanConfigSetPtr->CanController[controllerId].Can_Arc_CanIfControllerId);
#else
    CanIf_ControllerBusOff(controllerId);
#endif

    /* @req SWS_Can_00020 */
    /** @req 4.0.3/CAN272 *//** @req 4.1.2/SWS_Can_00272 */
    /* NOTE: This will give an indication to CanIf that stopped is reached. Should it? */
    (void)Can_SetControllerMode(controllerId, (Can_StateTransitionType)CAN_T_STOP);

    /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
    /* Note When bus off occurs other than BO bit, PEA and EW bits can also be set. So reset IR register. */
#if defined (CFG_RH850P1M_C)
    canHw->IR.R = ERR_BO_MASK | ERR_PEA_MASK | ERR_EW_MASK;
#else
    canHw->IR.B.BO = 0x1u;
#endif
    Can_AbortTx(canHw, canUnit);/** @req 4.0.3/CAN273 *//** @req 4.1.2/SWS_Can_00273 */

}


/**
 * ISR for Tx
 * @param uPtr
 * @param cancellationIsr Indicates whether this function is triggered based on cancellation
 */
static void Can_Isr_Tx(Can_UnitType *uPtr, boolean cancellationIsr)
{
    /** @req 4.0.3/CAN033 *//** @req 4.1.2/SWS_Can_00033 */
    m_can_t *canHw;
    uint32 bufMask;
    uint32 tmp;
    PduIdType pduId;
    PduInfoType pduInfo;
    uint8 bufNr;

    pduInfo.SduLength = 0;

    CHK_NULL_PTR(uPtr)
    canHw = uPtr->hwPtr;

    if (cancellationIsr == TRUE) {
        bufMask = canHw->TXBCF.R;
    } else {
#if defined(CFG_CAN_TEST)
        Can_Test.mbMaskTx |= bufMask;
#endif
        bufMask = canHw->TXBTO.R;
    }

    bufMask &= (uint32)uPtr->Can_Arc_TxBufMask;
    for (; ( bufMask != NULL ) && ((uPtr->bufTxFree & bufMask) != bufMask) ; bufMask &= ~(tmp)) {
        bufNr = (uint8)ilog2((uint32)bufMask);
        tmp = REG_MASK(bufNr);

        pduId = uPtr->cfgCtrlPtr->Can_Arc_TxPduHandles[bufNr];
        /** @req 4.1.2/SWS_Can_00276 */
        uPtr->cfgCtrlPtr->Can_Arc_TxPduHandles[bufNr] = RESET_ZERO;

        //mark txBox as Free
        uPtr->bufTxFree |= tmp;

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)

        /* Checking if cancellation is complete */
        if( (uPtr->bufTxCancel & tmp) ) {
            /* Clear pending cancel on this mb */
            uPtr->bufTxCancel &= ~(tmp);
            /* This was an abort and it should not be suppressed */
            pduInfo.SduLength = (PduLengthType)uPtr->TxBUFPtr[bufNr].T1.B.DLC;
            copyMsgToPdu(COPY_DATA_TX_BUFFER, &pduInfo, uPtr, (uint32)bufNr);
            /** @req 4.0.3/CAN287 */ /** @req 4.1.2/SWS_Can_00287 */
            CanIf_CancelTxConfirmation(pduId, &pduInfo); /*lint !e934 Impl of callback function responsible for supplied temporary pointer usage */
        } else
#endif
        {
            /** @req 4.1.2/SWS_Can_00016 */
            CanIf_TxConfirmation(pduId);
        }
    }
    (void)pduInfo;
}

/**
 * Uses 25.4.5.1 Transmission Abort Mechanism
 * @param canHw
 * @param canUnit
 */
static void Can_AbortTx(m_can_t *canHw, Can_UnitType *canUnit)
{
    uint32 bufMask;
    CHK_NULL_PTR(canHw)
    CHK_NULL_PTR(canUnit)
    // Find our Tx boxes.
    bufMask = (uint32)canUnit->Can_Arc_TxBufMask;

    //Request cancellation
    canHw->TXBCR.R = (vuint32_t)bufMask;
    //cancellation finished check
    uint32 i = 0;
    while((((uint32)canHw->TXBCF.R)^(bufMask)) != 0x0) {
        i++;
        if (i > 1000) {
            break;
        }
    }
    canUnit->bufTxFree |= (uint32)bufMask;
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
    canUnit->suppressBufTxCancel |= (uint32)bufMask;
    canUnit->bufTxCancel &= (uint32)~(bufMask);
#endif
}

static inline uint8 ilog2_64( uint64_t val ) {
    uint32 t = (uint32)(val >> 32);

    if( t != 0) {
        return (uint8)(ilog2(t) + 32);
    }
    return ilog2((uint32)(0xFFFFFFFFUL & val));
}

/*lint -save -e957 No prototype needed for ISR funcs */
#if USE_CAN_CTRL_A == STD_ON
ISR(Can_1_INT_LINE_0) {Can_Isr_Line_0(CAN_CTRL_A);}
ISR(Can_1_INT_LINE_1) {Can_Isr_Line_1(CAN_CTRL_A);}
#endif


#if USE_CAN_CTRL_B == STD_ON
ISR(Can_2_INT_LINE_0) {Can_Isr_Line_0(CAN_CTRL_B);}
ISR(Can_2_INT_LINE_1) {Can_Isr_Line_1(CAN_CTRL_B);}
#endif


#if USE_CAN_CTRL_C == STD_ON
ISR(Can_3_INT_LINE_0) {Can_Isr_Line_0(CAN_CTRL_C);}
ISR(Can_3_INT_LINE_1) {Can_Isr_Line_1(CAN_CTRL_C);}
#endif


#if USE_CAN_CTRL_D == STD_ON
ISR(Can_4_INT_LINE_0) {Can_Isr_Line_0(CAN_CTRL_D);}
ISR(Can_4_INT_LINE_1) {Can_Isr_Line_1(CAN_CTRL_D);}
#endif
/*lint -restore*/

static void installControllerInterrupts(CanHwUnitIdType hwUnit, uint32 ArcFlags)
{
    switch (hwUnit) {
#if USE_CAN_CTRL_A == STD_ON
        case CAN_CTRL_A:
            if((ArcFlags &  CAN_CTRL_TX_PROCESSING_INTERRUPT) || (ArcFlags &  CAN_CTRL_RX_PROCESSING_INTERRUPT)){
                ISR_INSTALL_ISR2( "Can", Can_1_INT_LINE_0, M_CAN_1_0, 2, 0);
            }
            if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) ||(ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT)){
                ISR_INSTALL_ISR2( "Can", Can_1_INT_LINE_1, M_CAN_1_1, 2, 0 );
            }
        break;
#endif
#if USE_CAN_CTRL_B == STD_ON
        case CAN_CTRL_B:
            if((ArcFlags &  CAN_CTRL_TX_PROCESSING_INTERRUPT) || (ArcFlags &  CAN_CTRL_RX_PROCESSING_INTERRUPT)){
                ISR_INSTALL_ISR2( "Can", Can_2_INT_LINE_0, M_CAN_2_0, 2, 0);
            }
            if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) ||(ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT)){
                ISR_INSTALL_ISR2( "Can", Can_2_INT_LINE_1, M_CAN_2_1, 2, 0 );
            }
        break;
#endif
#if USE_CAN_CTRL_C == STD_ON
        case CAN_CTRL_C:
            if((ArcFlags &  CAN_CTRL_TX_PROCESSING_INTERRUPT) || (ArcFlags &  CAN_CTRL_RX_PROCESSING_INTERRUPT)){
                ISR_INSTALL_ISR2( "Can", Can_3_INT_LINE_0, M_CAN_3_0, 2, 0);
            }
            if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) ||(ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT)){
                ISR_INSTALL_ISR2( "Can", Can_3_INT_LINE_1, M_CAN_3_1, 2, 0 );
            }
        break;
#endif
#if USE_CAN_CTRL_D == STD_ON
        case CAN_CTRL_D:
            if((ArcFlags &  CAN_CTRL_TX_PROCESSING_INTERRUPT) || (ArcFlags &  CAN_CTRL_RX_PROCESSING_INTERRUPT)){
                ISR_INSTALL_ISR2( "Can", Can_4_INT_LINE_0, M_CAN_4_0, 2, 0);
            }
            if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) ||(ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT)){
                ISR_INSTALL_ISR2( "Can", Can_4_INT_LINE_1, M_CAN_4_1, 2, 0 );
            }
        break;
#endif
    default:
        ASSERT(0);
        break;
    }
}

/**
 * Mapping MessageRAM to struture for use
 *
 * @param Controller
 * @param canID
 */
static void mappingMessageRam(Can_UnitType *Controller, uint8 canID)
{
    CHK_NULL_PTR(Controller)
    //Mapping of structures into message RAM
    Controller->SIdFilterPtr 	= (m_can_sidf_t *)(GET_BASE_ADDR_MSG_RAM(canID) + 	((uint32)Controller->hwPtr->SIDFC.B.FLSSA << 2U));
    Controller->EIdFilterPtr 	= (m_can_eidf_t *)(GET_BASE_ADDR_MSG_RAM(canID) + 	((uint32)Controller->hwPtr->XIDFC.B.FLESA << 2U));
    Controller->RxFIFO0Ptr 		= (m_can_rx_fifo_t *)(GET_BASE_ADDR_MSG_RAM(canID) + ((uint32)Controller->hwPtr->RXF0C.B.F0SA << 2U));
    Controller->RxFIFO1Ptr 		= (m_can_rx_fifo_t *)(GET_BASE_ADDR_MSG_RAM(canID) + ((uint32)Controller->hwPtr->RXF1C.B.F1SA << 2U));
    Controller->RxBUFPtr 		= (m_can_rx_fifo_t *)(GET_BASE_ADDR_MSG_RAM(canID) + ((uint32)Controller->hwPtr->RXBC.B.RBSA << 2U));
    Controller->TxBUFPtr 		= (m_can_tx_buf_t *)(GET_BASE_ADDR_MSG_RAM(canID) + ((uint32)Controller->hwPtr->TXBC.B.TBSA << 2U));

}

#if !defined(CFG_RH850P1M_C)
/**
 * Initializing message RAM with maximum size for all sections
 *
 * @param canID
 */
static void clearMessageRam(uint8 canID)
{
    //IMPROVEMENT: use memset to clear message ram

    for (uint32 i=0 ;i<MAX_MESSAGE_RAM_SIZE_PER_CTRLR ;i+=4) {
        *(vuint32_t*)(GET_BASE_ADDR_MSG_RAM(canID) +  i) = MESSAGE_RAM_CLEAR_VALUE;
    }
}
#endif

/**
 * Initializing message RAM with maximum size for all sections
 * @param Controller
 */
static void initMessageRam(const Can_UnitType *Controller)
{
    /*
     * Message Ram Structure(Static)		Relative word address
     *
     * ***********************************	0x0000
     * 		11-bit Filter
     * ***********************************	0x0080
     * 		29-bit Filter
     * ***********************************	0x0100
     * 		Rx FIFO 0
     * ***********************************	0x0200
     * 		Rx FIFO 1
     * ***********************************	0x0300
     * 		Rx Buffers
     * ***********************************	0x0400
     * 		Tx Buffers
     * ***********************************  0x0480
     */

    CHK_NULL_PTR(Controller)

    //Standard ID Filter Configuration
    Controller->hwPtr->SIDFC.B.FLSSA   =   STANDARDID_FILTER_START_ADDRESS ; //Filter List Standard Start Address
    Controller->hwPtr->SIDFC.B.LSS     =   STANDARD_FILTER_ELEMENTS ; //List Size Standard filter (0 - 0x80 elements)

    //Extended ID Filter Configuration
    Controller->hwPtr->XIDFC.B.FLESA   =   EXTENDEDID_FILTER_START_ADDRESS; //Filter List Extended Start Address
    Controller->hwPtr->XIDFC.B.LSE     =   EXTENDED_FILTER_ELEMENTS ; // List Size Extended(0x0-x40 elements)

    //Rx FIFO 0 Configuration
    Controller->hwPtr->RXF0C.B.F0SA    =   RXFIFO0_START_ADDRESS; 	//Rx FIFO 0 Start Address
    Controller->hwPtr->RXF0C.B.F0S     =   RXFIFO0_ELEMENTS ; 	//Rx FIFO 0 Size(0x0-0x40 elements)

    //Rx FIFO 1 Configuration
    Controller->hwPtr->RXF1C.B.F1SA    =   RXFIFO1_START_ADDRESS; 	//Rx FIFO 1 Start Address
    Controller->hwPtr->RXF1C.B.F1S	   =   RXFIFO1_ELEMENTS ;	//Rx FIFO 1 Size(0x0-0x40 elements)

    //Rx Buffer Configuration
    Controller->hwPtr->RXBC.B.RBSA     =   RXBUFFER_START_ADDRESS; 	// Start Address

    //Tx Buffer Configuration
    Controller->hwPtr->TXBC.B.TBSA     =   TXBUFFER_START_ADDRESS; 	//Tx Buffers Start Address
    //The hardware takes all the last 16 bits for calculating the address of the TX buffer
    Controller->hwPtr->TXBC.B.NDTB     =   TXBUFFER_ELEMENTS; 	//Number of Dedicated Transmit Buffers(0x0-0x20 elements)

}
/**
 * Adding filter masks to the Message Ram
 * @param config
 * @param canUnit
 */
static void addFilters(const Can_ControllerConfigType * config, Can_UnitType *canUnit)
{
    uint64 bufMask;
    const Can_HardwareObjectType *hohPtr;
    uint32 i;
    uint8 filterType;
    uint8 filterCfg;
    uint8 bufNr;
    CHK_NULL_PTR(config)
    CHK_NULL_PTR(canUnit)

    /* Global filter configuration */
    canUnit->hwPtr->GFC.R = (REJECT_NON_MATCHING_FRAME_ID_STD_MASK | REJECT_NON_MATCHING_FRAME_ID_EXTD_MASK |
          REJECT_REMOTE_FRAME_ID_STD_MASK | REJECT_REMOTE_FRAME_ID_EXTD_MASK);

    /* Setup mailboxes for this controller */
    hohPtr = config->Can_Arc_Hoh;
    CHK_NULL_PTR(hohPtr)

     /* The generated HOHs are sorted by FIFO(FULL_CAN), FIFO(BASIC_CAN),
     * FULL_CAN(no FIFO) and last BASIC_CAN(no FIFO) */
    /*lint -e9008 -e9049 Looping over index variable and its corresponding object pointer */
    for( i=0; i < (uint8)(config->Can_Arc_HohCnt);i++,hohPtr++) {
        if( ( hohPtr->CanObjectType == CAN_OBJECT_TYPE_RECEIVE) ) {

            /* Assign FIFO first it will search for match first there (its the first MBs) */
            if ( (hohPtr->Can_Arc_Flags == CAN_HOH_FIFO_0_FLAG_MASK ) ||
                    (  hohPtr->Can_Arc_Flags == CAN_HOH_FIFO_1_FLAG_MASK )) {
                //Fifo 0/1
                filterCfg = hohPtr->Can_Arc_Flags;
                //Classic filter: SF1ID = filter, SF2ID = mask
                //Classic filter: EF1ID = filter, EF2ID = mask
                filterType = FILTER_TYPE_CLASSIC;

                if (hohPtr->CanIdType == CAN_ID_TYPE_EXTENDED) {
                    canUnit->EIdFilterPtr->F0.B.EFEC  = (vuint32_t)filterCfg;
                    canUnit->EIdFilterPtr->F1.B.EFT   = filterType;
                    canUnit->EIdFilterPtr->F0.B.EFID1 =  (hohPtr->CanHwFilterCode);
                    canUnit->EIdFilterPtr->F1.B.EFID2 = (vuint32_t)(hohPtr->CanHwFilterMask);
                    canUnit->EIdFilterPtr++;
                } else {
                    canUnit->SIdFilterPtr->S.B.SFEC  = (vuint32_t)filterCfg;
                    canUnit->SIdFilterPtr->S.B.SFT   = filterType;
                    canUnit->SIdFilterPtr->S.B.SFID1 =  (hohPtr->CanHwFilterCode);
                    canUnit->SIdFilterPtr->S.B.SFID2 =  (vuint32_t)(hohPtr->CanHwFilterMask);
                    canUnit->SIdFilterPtr++;
                }
            }else{
                //Buffer
                filterCfg = hohPtr->Can_Arc_Flags;
                /* Note: SF2ID cannot be used as classic filter mask for Rx buffers. It is Rx buffer index for storage */
                /* Note: EF2ID cannot be used as classic filter mask for Rx buffers. It is Rx buffer index for storage */
                filterType = FILTER_TYPE_DUAL_ID;

                bufMask = hohPtr->Can_Arc_BufferMask;
                do {
                    bufNr =  (uint8)ilog2_64(bufMask);

                    if (hohPtr->CanIdType == CAN_ID_TYPE_EXTENDED) {
                        canUnit->EIdFilterPtr->F0.B.EFEC = (vuint32_t)filterCfg;
                        canUnit->EIdFilterPtr->F1.B.EFT  = filterType;
                        canUnit->EIdFilterPtr->F0.B.EFID1 =  (hohPtr->CanHwFilterCode);
                        canUnit->EIdFilterPtr->F1.B.EFID2 = bufNr;
                        canUnit->EIdFilterPtr++;
                    } else {
                        canUnit->SIdFilterPtr->S.B.SFEC = (vuint32_t)filterCfg;
                        canUnit->SIdFilterPtr->S.B.SFT= filterType;
                        canUnit->SIdFilterPtr->S.B.SFID1 =  (hohPtr->CanHwFilterCode);
                        canUnit->SIdFilterPtr->S.B.SFID2 = bufNr;
                        canUnit->SIdFilterPtr++;
                    }
                    //Removing that entry from newData
                    bufMask &= ~(1ULL << (bufNr));
                }while(bufMask != NULL);
            }
        }
    }
}

/**
 * Enabling Interrupts that are going to be used
 * @param lineno
 * @param Hw
 */
static void enableInterrupt (uint8 lineno, m_can_t *Hw)
{
    CHK_NULL_PTR(Hw)
    //Enabling interrupts that are assigned to the line
    if(lineno == 1) {
        Hw->IE.R  |= CAN_LINE1_MASK;
    } else if(lineno == 0){
        Hw->IE.R  |= CAN_LINE0_MASK;
    } else {
        /* For Lint */
    }
    // Disabling all unused interrupts
    /** @req 4.0.3/CAN419 *//** @req 4.1.2/SWS_Can_00419 */

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
    Hw->TXBCIE.R = 0xFFFFFFFFUL;	/* Tx Buffer Cancellation Finished Interrupt Enable */
#endif

    Hw->TXBTIE.R = 0xFFFFFFFFUL; 	/* Tx Buffer Transmission Interrupt Enable */
}

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
static void HandlePendingTxCancel(Can_UnitType *canUnit)
{
    m_can_t *canHw;
    PduIdType pduId;
    PduInfoType pduInfo;
    uint32 bufCancelMask;
    uint8 bufNr;
    CHK_NULL_PTR(canUnit)
    canHw = canUnit->hwPtr;

    SchM_Enter_Can_EA_0();
    bufCancelMask = (uint32)canUnit->bufTxCancel;
    for( ; bufCancelMask; bufCancelMask &= (uint32)~(1UL << bufNr) ) {
        bufNr = (uint8)ilog2(bufCancelMask);
        canHw->TXBCR.R |= (vuint32_t)(1UL << bufNr);
        // Did it take
        if (canHw->TXBCF.R && (1UL << bufNr)) {
            // Aborted
            canUnit->bufTxFree |= (uint32)(1UL << bufNr);
            pduId = canUnit->cfgCtrlPtr->Can_Arc_TxPduHandles[bufNr];
            pduInfo.SduLength = (PduLengthType)(canUnit->TxBUFPtr[bufNr].T1.B.DLC);
            copyMsgToPdu(COPY_DATA_TX_BUFFER, &pduInfo, canUnit, (uint32)bufNr);
            /** @req 4.0.3/CAN287 *//** @req 4.1.2/SWS_Can_00287 */
            CanIf_CancelTxConfirmation(pduId, &pduInfo); /*lint !e934 Impl of callback function responsible for supplied temporary pointer usage */
        } else {
            /* Did not take. Interrupt will be generated.
             * CancelTxConfirmation will be handled there. */
        }
        canUnit->bufTxCancel &= (uint32)~(1UL<<bufNr);
        canUnit->suppressBufTxCancel &= (uint32)~(1UL<<bufNr);
    }
    SchM_Exit_Can_EA_0();
}
#endif

static void processRxFifo1(const Can_UnitType *uPtr)
{
    static uint8 data[CAN_PAY_LOAD_LEN];
    m_can_t *Hw;
    uint32 id;
    uint32 initIdx;
    m_can_rx_fifo_t rxMsg;
    uint8 getIdx;
    uint8 idx;
    uint8 level;

    CHK_NULL_PTR(uPtr)
    Hw = uPtr->hwPtr;
    initIdx = (uint32)Hw->RXF1S.B.F1G1 ;
    level = (uint8)Hw->RXF1S.B.F1FL; 	//Total number of elements in FIFO
    /* @req SWS_Can_00012 */
    do {
        getIdx = (uint8)(Hw->RXF1S.B.F1G1) ;/*Rx FIFO 1 Get Index: read index pointer, range 0 to 63.*/
        rxMsg = uPtr->RxFIFO1Ptr[getIdx];

        if (rxMsg.R0.B.XTD != NULL) {
            id = rxMsg.R0.B.ID;
            id |= (uint32)0x80000000UL; /** @req 4.0.3/CAN423 *//** @req 4.1.2/SWS_Can_00423 */
        } else {
            id = rxMsg.R0.B.ID >> 18;
        }

        //Converting data format
#if defined (CFG_MPC5777M)
        for(idx = 0 ;idx < (uint8)rxMsg.R1.B.DLC;idx++) {
            if(idx < 4) {
                data[idx] = rxMsg.RD[0].B.DB[3u - idx];
            } else {
                data[idx] = rxMsg.RD[1].B.DB[7u - idx];
            }
        }
#elif defined (CFG_RH850P1M_C)
        memcpy(data, (uint8 *)rxMsg.RD, (uint8)rxMsg.R1.B.DLC );
#endif

        /** @req 4.0.3/CAN279 *//** @req 4.1.2/SWS_Can_00279 */
        /** @req 4.1.2/SWS_Can_00060 *//* Is according to definition */
        CanIf_RxIndication(uPtr->cfgCtrlPtr->Can_Arc_RxFIFO1ToSymbolicHrh[getIdx],
                                    id,
                                    (uint8)rxMsg.R1.B.DLC,
                                    data);

        //Updating index in FIFO1
        Hw->RXF1A.B.F1AI = (vuint32_t)getIdx;
        level--;

    }while (level != NULL);

    //resetting position of the put index for next write
    Hw->RXF1S.B.F1PI = (vuint32_t)initIdx;
}
/**
 *
 * @param fifoNo
 * @param uPtr
 */
static void processRxFifo0(const Can_UnitType *uPtr)
{
    m_can_t *Hw;
    uint32 id;
    m_can_rx_fifo_t rxMsg;
    uint8 getIdx;
    uint8 idx;
    static uint8 data[8];
    uint32 initIdx;
    uint8 level;
    CHK_NULL_PTR(uPtr)

    Hw = uPtr->hwPtr;
    initIdx = (uint32)Hw->RXF0S.B.F0GI ;
    level = (uint8)Hw->RXF0S.B.F0FL; 	//Total number of elements in FIFO
    /* @req SWS_Can_00012 */
    do {
        /*Rx FIFO 0 Get Index: read index pointer, range 0 to 63.*/
        getIdx = (uint8)Hw->RXF0S.B.F0GI ;
        rxMsg = uPtr->RxFIFO0Ptr[getIdx];
        if (rxMsg.R0.B.XTD != NULL) {
            id = rxMsg.R0.B.ID;
            id |= (uint32)0x80000000UL; /** @req 4.0.3/CAN423 *//** @req 4.1.2/SWS_Can_00423 */
        } else {
            id = rxMsg.R0.B.ID >> 18;
        }

        //Converting data format
#if defined (CFG_MPC5777M)
        for(idx = 0 ;idx < (uint8)rxMsg.R1.B.DLC;idx++) {
            if(idx < 4) {
                data[idx] = rxMsg.RD[0].B.DB[3u - idx];
            }  else {
                data[idx] = rxMsg.RD[1].B.DB[7u - idx];
            }
        }
#elif defined (CFG_RH850P1M_C)
        memcpy(data, (uint8 *)rxMsg.RD, (uint8)rxMsg.R1.B.DLC );
#endif

        /** @req 4.0.3/CAN279 *//** @req 4.1.2/SWS_Can_00279 */
        /** @req 4.1.2/SWS_Can_00060 *//* Is according to definition */
        CanIf_RxIndication(uPtr->cfgCtrlPtr->Can_Arc_RxFIFO0ToSymbolicHrh[getIdx],
                                        id,
                                        (uint8) rxMsg.R1.B.DLC,
                                        data);

        //Updating index in FIFO0
        Hw->RXF0A.B.F0AI = (vuint32_t)getIdx;
        level--;

    }while (level != NULL);

    //resetting position of the put index for next write
    Hw->RXF0S.B.F0PI = (vuint32_t)initIdx;

}
/**
 *
 * @param uPtr
 */
static void processRxBuffer(const Can_UnitType *uPtr) {
    uint64 temp;
    uint64 newData;
    static uint8 data[8];
    m_can_t *Hw;
    uint32 id;
    static m_can_rx_fifo_t rxMsg;
    uint8 BufNr;
    uint8 idx;

    CHK_NULL_PTR(uPtr)
    Hw = uPtr->hwPtr;

    newData = (uint64)(Hw->NDAT2.R);
    newData <<= 32u;
    newData |= (Hw->NDAT1.R);
    while(newData != NULL) {
        BufNr = (uint8)ilog2_64(newData);
        rxMsg = uPtr->RxBUFPtr[BufNr];
        if (rxMsg.R0.B.XTD != NULL) {
            id = rxMsg.R0.B.ID;
            id |= (uint32)0x80000000UL; /** @req 4.0.3/CAN423 *//** @req 4.1.2/SWS_Can_00423 */
        } else {
            id = rxMsg.R0.B.ID >> 18;
        }
        //Converting data format
#if defined (CFG_MPC5777M)
        for(idx = 0 ;idx < (uint8)rxMsg.R1.B.DLC;idx++) {
            if(idx < 4) {
                data[idx] = rxMsg.RD[0].B.DB[3u - idx];
            } else {
                data[idx] = rxMsg.RD[1].B.DB[7u - idx];
            }
        }
#elif defined (CFG_RH850P1M_C)
        memcpy(data, (uint8 *)rxMsg.RD, (uint8)rxMsg.R1.B.DLC );
#endif
        /** @req 4.1.2/SWS_Can_00396 */
        /** @req 4.0.3/CAN279 *//** @req 4.1.2/SWS_Can_00279 */
        /** @req 4.1.2/SWS_Can_00427 *//* Buffer is according to AUTOSAR definition */
        CanIf_RxIndication(uPtr->cfgCtrlPtr->Can_Arc_RxBufToSymbolicHrh[BufNr],
                                    id,
                                    (uint8)rxMsg.R1.B.DLC,
                                    data);
#if (USE_CAN_STATISTICS == STD_ON)
        uPtr->stats.rxSuccessCnt++;
#endif

        temp = (1ULL << (BufNr));
        //Removing that entry from newData
        newData &= ~temp;
        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        // Clear registers
        if(BufNr > 31) {
            Hw->NDAT2.R = (temp >> 32u);
        } else {
            Hw->NDAT1.R = temp;
        }
    }


}

/*lint -e818 Argument not a pointer to const in all cases. */
/**
 * ISR for Rx
 * @param uPtr
 */
static void Can_Isr_Rx(const Can_UnitType *uPtr)
{
    /** @req 4.0.3/CAN033 *//** @req 4.1.2/SWS_Can_00033 */
    CHK_NULL_PTR(uPtr)
    m_can_t *canHw;
    canHw = uPtr->hwPtr;
    uint32 iFlag;

    iFlag = (uint32)(canHw->IR.R);
#if defined(CFG_CAN_TEST)
    Can_Test.mbMaskRx |= uPtr->Can_Arc_RxBufMask;
#endif

    /* Check for FIFO0 new message */
    /*lint -e778 Known zero in evaluation of FIFO0_NEWMSG_INT_MASK*/
    if ((iFlag & FIFO0_NEWMSG_INT_MASK) != NULL) {
        processRxFifo0(uPtr);
        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        // Clear the interrupt
        canHw->IR.R = FIFO0_NEWMSG_INT_MASK; //Keep other bits unmodified
    }

    /* Check for FIFO1 new message */
    if ((iFlag & FIFO1_NEWMSG_INT_MASK) != NULL) {
        processRxFifo1(uPtr);
        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        // Clear the interrupt
        canHw->IR.R = FIFO1_NEWMSG_INT_MASK;
    }

    /* Check BUFFER new message */
    if ((iFlag & BUFFER_NEWMSG_INT_MASK) != NULL) {
        processRxBuffer(uPtr);
        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        canHw->IR.R = BUFFER_NEWMSG_INT_MASK;
    }

#if (USE_CAN_STATISTICS == STD_ON)
    /* Check FIFO0 message lost*/
    if ((iFlag & FIFO0_MSGLOST_INT_MASK) != NULL) {
        uPtr->stats.fifoOverflow++;
        /** @req 4.0.3/CAN395 *//** @req 4.1.2/SWS_Can_00395 */
        DET_REPORTERROR(CAN_MODULE_ID,0,0, CAN_E_DATALOST);
    }

    /* Check FIFO1 message lost*/
    if ((iFlag & FIFO1_MSGLOST_INT_MASK) != NULL) {
        uPtr->stats.fifoOverflow++;
        /** @req 4.0.3/CAN395 *//** @req 4.1.2/SWS_Can_00395 */
        DET_REPORTERROR(CAN_MODULE_ID,0,0, CAN_E_DATALOST); /** @req 4.0.3/CAN395 *//** @req 4.1.2/SWS_Can_00395 */
    }
#endif
    canHw->IR.R = (FIFO1_MSGLOST_INT_MASK | FIFO0_MSGLOST_INT_MASK);
}

/**
 * Unitialize the module
 */
void Can_Arc_DeInit(void)
{
    Can_UnitType *canUnit;

    if (CAN_UNINIT == Can_Global.initRun) {
        return;
    }

    for (uint8 controllerId = 0; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++) {

        canUnit = CTRL_TO_UNIT_PTR(controllerId);

        Can_DisableControllerInterrupts(controllerId);

        canUnit->state = CANIF_CS_UNINIT;

        canUnit->lock_cnt = 0;

#if (USE_CAN_STATISTICS == STD_ON)
        // Clear stats
        memset(&canUnit->stats, 0, sizeof(Can_Arc_StatisticsType));
#endif
    }

    Can_Global.config = NULL;
    Can_Global.initRun = CAN_UNINIT;

    return;
}

/**
 * Setting the required mode of operation for the CAN controller
 * @param Controller
 * @param Transition
 * @return
 */
Can_ReturnType Can_SetControllerMode(uint8 Controller, Can_StateTransitionType Transition)
{
    /** @req 4.0.3/CAN230 *//** @req 4.1.2/SWS_Can_00230 */
    /** @req 4.0.3/CAN017 *//** @req 4.1.2/SWS_Can_00017 */
    /** !req 4.0.3/CAN294 *//** !req 4.1.2/SWS_Can_00294 *//* Wakeup not supported */
    /** !req 4.0.3/CAN197 *//** !req 4.1.2/SWS_Can_00197 *//* Disable interrupts */
    /** !req 4.0.3/CAN426 *//** !req 4.1.2/SWS_Can_00426 *//* Disable interrupts */
    /** @req 4.0.3/CAN200 *//** @req 4.1.2/SWS_Can_00200 *//* Detect invalid transitions */
    /** @req 4.1.2/SWS_Can_00404 *//* Hardware stopped while logical sleep active */
    /** @req 4.1.2/SWS_Can_00405 *//* Logical sleep left on CAN_T_WAKEUP */
    m_can_t *canHw;
    Can_ReturnType rv = CAN_OK;

    /** @req 4.0.3/CAN104 *//** @req 4.1.2/SWS_Can_00104 */
    /** @req 4.0.3/CAN198 *//** @req 4.1.2/SWS_Can_00198 */
    VALIDATE_RV( (Can_Global.initRun == CAN_READY), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_UNINIT, CAN_NOT_OK );
    /** @req 4.0.3/CAN199 *//** @req 4.1.2/SWS_Can_00199 */
    VALIDATE_RV( VALID_CONTROLLER(Controller), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_PARAM_CONTROLLER, CAN_NOT_OK );
    Can_UnitType *canUnit = CTRL_TO_UNIT_PTR(Controller);
    VALIDATE_RV( (canUnit->state!=CANIF_CS_UNINIT), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_UNINIT, CAN_NOT_OK );

    canHw = canUnit->hwPtr;

    SchM_Enter_Can_EA_0();

    switch (Transition) {
    case CAN_T_START:
        /** @req 4.0.3/CAN409 *//** @req 4.1.2/SWS_Can_00409 */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        if (!(canUnit->state == CANIF_CS_STOPPED)) {

            SchM_Exit_Can_EA_0();

            (void) Det_ReportError(CAN_MODULE_ID, 0, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);

            return CAN_NOT_OK;
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        /** @req 4.0.3/CAN384 *//** @req 4.1.2/SWS_Can_00384 *//* I.e. present conf not changed */
        /** @req 4.1.2/SWS_Can_00261 */
        while (canHw->CCCR.B.CCE != 0x0u) {
            canHw->CCCR.B.CCE = 0x0u;
        }
        canHw->CCCR.B.INIT = 0x0u;
        canUnit->state = CANIF_CS_STARTED;
        /** @req 4.0.3/CAN196 *//** @req 4.1.2/SWS_Can_00196 */
        /** @req 4.0.3/CAN425 *//** @req 4.1.2/SWS_Can_00425 */
        if (canUnit->lock_cnt == 0) {
            Can_Hw_EnableControllerInterrupts(Controller);
        }
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_START;
        break;
    case CAN_T_WAKEUP:
        /** @req 4.0.3/CAN267 *//** @req 4.1.2/SWS_Can_00267 */
        /** @req 4.0.3/CAN412 *//** @req 4.1.2/SWS_Can_00412 */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        if (!((canUnit->state == CANIF_CS_SLEEP) || (canUnit->state == CANIF_CS_STOPPED))) {

            SchM_Exit_Can_EA_0();

            (void) Det_ReportError(CAN_MODULE_ID, 0, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);

            return CAN_NOT_OK;
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        // Wake from logical sleep mode or stop
        while (canHw->CCCR.B.INIT != 0x1u) {
            canHw->CCCR.B.INIT = 0x1u;
        }
        canHw->CCCR.B.CCE = 0x1u;
        canUnit->state = CANIF_CS_STOPPED;
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_STOP;
        break;
    case CAN_T_SLEEP:
        /** @req 4.0.3/CAN411 *//** @req 4.1.2/SWS_Can_00411 */
        /** @req 4.0.3/CAN258 *//** @req 4.1.2/SWS_Can_00258 */
        /** @req 4.0.3/CAN290 *//** @req 4.1.2/SWS_Can_00290 */
        /** !req 4.1.2/SWS_Can_00265 */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        if (!(canUnit->state == CANIF_CS_STOPPED)) {

            SchM_Exit_Can_EA_0();

            (void) Det_ReportError(CAN_MODULE_ID, 0, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);

            return CAN_NOT_OK;
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        // Logical sleep mode = Stop
        while (canHw->CCCR.B.INIT != 0x1u) {
            canHw->CCCR.B.INIT = 0x1u;
        }
        canHw->CCCR.B.CCE = 0x1u;

        canUnit->state = CANIF_CS_SLEEP;
        /** @req 4.1.2/SWS_Can_00283 *//* Can_AbortTx does not notify cancellation */
        Can_AbortTx(canHw, canUnit);
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_SLEEP;
        break;
    case CAN_T_STOP:
        /** @req 4.0.3/CAN410 *//** @req 4.1.2/SWS_Can_00410 */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        if (!((canUnit->state == CANIF_CS_STARTED) || (canUnit->state == CANIF_CS_STOPPED))) {

            SchM_Exit_Can_EA_0();

            (void) Det_ReportError(CAN_MODULE_ID, 0, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);

            return CAN_NOT_OK;
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        if (canUnit->lock_cnt == 0)
        {
            Can_Hw_DisableControllerInterrupts(Controller);
        }

        // Stop
        /** @req 4.1.2/SWS_Can_00263 */
        while (canHw->CCCR.B.INIT != 0x1u) {
            canHw->CCCR.B.INIT = 0x1u;
        }
        canHw->CCCR.B.CCE = 0x1u;
        canUnit->state = CANIF_CS_STOPPED;
        Can_AbortTx(canHw, canUnit); /** @req 4.0.3/CAN282 *//** @req 4.1.2/SWS_Can_00282 */
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_STOP;
        break;
    default:
        /** @req 4.0.3/CAN200 *//** @req 4.1.2/SWS_Can_00200 */
        /*lint -e774 -e506 Undefined transition leads to constant conditional for VALIDATE */
#if ( CAN_DEV_ERROR_DETECT == STD_ON )
    	// Undefined state transition shall always raise CAN_E_TRANSITION
    	(void) Det_ReportError(CAN_MODULE_ID,0,CAN_SETCONTROLLERMODE_SERVICE_ID,CAN_E_TRANSITION);
    	rv = CAN_NOT_OK;
#endif
    }

    SchM_Exit_Can_EA_0();

    return rv;
}

/**
 * Initializes ALL configured CAN controllers
 * @param Config
 */
void Can_Init(const Can_ConfigType *Config)
{
    /** @req 4.0.3/CAN223 *//** @req 4.1.2/SWS_Can_00223 */
    /** @req 4.1.2/SWS_Can_00021 */
    /** @req 4.1.2/SWS_Can_00291 */
    /** !req 4.1.2/SWS_Can_00408 */
    /** @req 4.1.2/SWS_Can_00419 *//* Disable all unused interrupts. We only enable the ones used.. */
    /** @req 4.1.2/SWS_Can_00053 *//* Don't change registers for controllers not used */
    /** @req 4.1.2/SWS_Can_00250 *//* Initialize variables, init controllers */
    /** @req SWS_Can_00239 Init all on chip hardware */

    Can_UnitType *unitPtr;

    /** @req 4.0.3/CAN104 *//** @req 4.1.2/SWS_Can_00104 */
    /** @req 4.0.3/CAN174 *//** @req 4.1.2/SWS_Can_00174 */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_UNINIT), CAN_INIT_SERVICE_ID, CAN_E_TRANSITION );
    /** @req 4.0.3/CAN175 *//** @req 4.1.2/SWS_Can_00175 */
    VALIDATE_NO_RV( (Config != NULL ), CAN_INIT_SERVICE_ID, CAN_E_PARAM_POINTER );

    // Save config
    Can_Global.config = Config;

    /** !req 4.1.2/SWS_Can_00246 *//* Should be done after initializing all controllers */
    /* Improvement: Modify Can_ChangeBaudrate so it calls another function, modifyBaudrate,
     * which does not require the Can module to be in state CAN_READY and thus can be called before it is. */
    Can_Global.initRun = CAN_READY;

#if defined(CFG_RH850P1M_C)
    STAC_LM3 = RZEROMD_ENABLED; //RAM Initialization Mode is enabled
    SWLRESA3 = SWLRESA3_0_GENERATE_RESET; //Do MCAN reset

    while(SWLRESS3 != SWLRESA3_0_GENERATE_RESET) {
    	//Reset is ongoing
    }



    while (MSR_LM3 != MCAN_CLK_ENABLE) {
        //Wait until clock is enabled
        MSR_LM3 = MCAN_CLK_ENABLE;
    }
#endif

    /** @req 4.1.2/SWS_Can_00245 */
    for (uint8 controllerId = 0; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++) {
        const Can_ControllerConfigType *cfgCtrlPtr  = &Can_Global.config->CanConfigSetPtr->CanController[controllerId];

        unitPtr = CTRL_TO_UNIT_PTR(controllerId);

        memset(unitPtr, 0, sizeof(Can_UnitType));

        unitPtr->hwPtr = GET_CAN_HW(cfgCtrlPtr->CanHwUnitId);

        //initializing
        while(unitPtr->hwPtr->CCCR.B.INIT != 0x1u) {
            unitPtr->hwPtr->CCCR.B.INIT = 0x1u;
        }
        unitPtr->hwPtr->CCCR.B.CCE = 0x1u;

        unitPtr->cfgCtrlPtr = cfgCtrlPtr;
        /** @req 4.0.3/CAN259 *//** @req 4.1.2/SWS_Can_00259 */
        unitPtr->state = CANIF_CS_STOPPED;
        unitPtr->cfgHohPtr = cfgCtrlPtr->Can_Arc_Hoh;

        unitPtr->Can_Arc_RxBufMask = cfgCtrlPtr->Can_Arc_RxBufferMask;
        unitPtr->Can_Arc_TxBufMask = cfgCtrlPtr->Can_Arc_TxBufferMask;

        unitPtr->pendingStateIndication = CAN_CTRL_INDICATION_NONE;

        /* Install the interrupts used */
        installControllerInterrupts(cfgCtrlPtr->CanHwUnitId, cfgCtrlPtr->Can_Arc_Flags);

#if !defined(CFG_RH850P1M_C) //For RH850 clearing RAM is taken care by hardware
        /*  Clearing MessageRAM */
        clearMessageRam(cfgCtrlPtr->CanHwUnitId);
#endif

        /* Initializing Message RAM */
        initMessageRam(unitPtr);

        /* Mapping Message RAM to message structures */
        mappingMessageRam(unitPtr, cfgCtrlPtr->CanHwUnitId);

        (void)Can_ChangeBaudrate(controllerId, (uint16)unitPtr->cfgCtrlPtr->CanControllerDefaultBaudrate);

        // disable CCE to prevent configuration changes
        unitPtr->hwPtr->CCCR.B.CCE = 0x0;
        //Return to normal operation
        while (unitPtr->hwPtr->CCCR.B.INIT != 0x0) {
            unitPtr->hwPtr->CCCR.B.INIT = 0x0;
        }

    }

}

/**
 * Disables Interrupts for the CAN controller
 * @param Controller
 */
void Can_DisableControllerInterrupts(uint8 Controller)
{
    /** @req 4.0.3/CAN231 *//** @req 4.1.2/SWS_Can_00231 */
    /** @req 4.0.3/CAN202 *//** @req 4.1.2/SWS_Can_00202 */
    /** !req 4.0.3/CAN204 *//** !req 4.1.2/SWS_Can_00204 */

    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN206 *//** @req 4.1.2/SWS_Can_00206*/
    VALIDATE_NO_RV( VALID_CONTROLLER(Controller), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_PARAM_CONTROLLER );
    Can_UnitType *canUnit = CTRL_TO_UNIT_PTR(Controller);
    /** @req 4.0.3/CAN205 *//** @req 4.1.2/SWS_Can_00205 */
    VALIDATE_NO_RV( (canUnit->state != CANIF_CS_UNINIT), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );

    SchM_Enter_Can_EA_0();

    /** @req 4.0.3/CAN049 *//** @req 4.1.2/SWS_Can_00049 */
    if (canUnit->lock_cnt > 0) {
        // Interrupts already disabled
        canUnit->lock_cnt++;
        SchM_Exit_Can_EA_0();
        return;
    }

    canUnit->lock_cnt++;

    Can_Hw_DisableControllerInterrupts(Controller);

    SchM_Exit_Can_EA_0();
}

/**
 * Enabling interrupts on a controller
 * @param Controller
 */
void Can_EnableControllerInterrupts(uint8 Controller)
{
    /** @req 4.0.3/CAN232 *//** @req 4.1.2/SWS_Can_00232 */
    /** @req 4.0.3/CAN050 *//** @req 4.1.2/SWS_Can_00050 */

    Can_UnitType *canUnit;

    /** @req 4.0.3/CAN209 *//** @req 4.1.2/SWS_Can_00209 */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN210 *//** @req 4.1.2/SWS_Can_00210 */
    VALIDATE_NO_RV( VALID_CONTROLLER(Controller), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_PARAM_CONTROLLER );
    canUnit = CTRL_TO_UNIT_PTR(Controller);
    VALIDATE_NO_RV( (canUnit->state != CANIF_CS_UNINIT), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );

    SchM_Enter_Can_EA_0();

    if (canUnit->lock_cnt > 1) {
        // IRQ should still be disabled so just decrement counter
        canUnit->lock_cnt--;
        SchM_Exit_Can_EA_0();
        return;
    } else if (canUnit->lock_cnt == 1) {
        Can_Hw_EnableControllerInterrupts(Controller);
        canUnit->lock_cnt = 0;
    } else {
        /** @req 4.0.3/CAN208 *//** @req 4.1.2/SWS_Can_00208 */
        /* Do nothing. */
    }

    SchM_Exit_Can_EA_0();
}

/**
 *  Checking validity of a configured baudrate
 * @param Controller
 * @param Baudrate
 * @return
 */
Std_ReturnType Can_CheckBaudrate(uint8 Controller, const uint16 Baudrate)
{
    /** @req 4.0.3/CAN454 *//** @req 4.1.2/SWS_Can_00454 *//* API */

    // Checks that the target baudrate is found among the configured
    // baudrates for this controller.

    const Can_UnitType *canUnit;
    const Can_ControllerConfigType *config;
    boolean supportedBR;

    /** @req 4.0.3/CAN456 *//** @req 4.1.2/SWS_Can_00456 *//* UNINIT  */
    VALIDATE( (Can_Global.initRun == CAN_READY), CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN457 *//** @req 4.1.2/SWS_Can_00457 *//* Invalid controller */
    VALIDATE( VALID_CONTROLLER(Controller) , CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_CONTROLLER );

    /** @req 4.0.3/CAN458 *//** @req 4.1.2/SWS_Can_00458 *//* Invalid baudrate value */
    VALIDATE( Baudrate <= 1000, CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_BAUDRATE );

    canUnit = CTRL_TO_UNIT_PTR(Controller);
    config = canUnit->cfgCtrlPtr;

    // Find the baudrate config for the target baudrate
    supportedBR = FALSE;
    for( uint32 i=0; i < config->CanControllerSupportedBaudratesCount; i++)
    {
        if (config->CanControllerSupportedBaudrates[i].CanControllerBaudRate == Baudrate)
        {
            supportedBR = TRUE;
        }
    }

    return (Std_ReturnType)(supportedBR ? CAN_OK : CAN_NOT_OK);
}

/**
 * Changing Can Controller Baudrate
 * @param Controller
 * @param Baudrate
 * @return
 */
Std_ReturnType Can_ChangeBaudrate(uint8 Controller, const uint16 Baudrate)
{
    /** @req 4.0.3/CAN449 *//** @req 4.1.2/SWS_Can_00449 */

    m_can_t *canHw;
    uint8 tq;
    uint8 tseg1;
    uint8 tseg2;
    uint32 sjw;
    uint32 clock;
    uint32 baudrate;
    Can_UnitType *canUnit;

    const Can_ControllerConfigType *config;
    const Can_ControllerBaudrateConfigType *baudratePtr;

    /** @req 4.0.3/CAN450 *//** @req 4.1.2/SWS_Can_00450 */
    VALIDATE( (Can_Global.initRun == CAN_READY), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN452 *//** @req 4.1.2/SWS_Can_00452 */
    VALIDATE( VALID_CONTROLLER(Controller) , CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_CONTROLLER );

    /** @req 4.0.3/CAN451 *//** @req 4.1.2/SWS_Can_00451 */
    VALIDATE(Can_CheckBaudrate(Controller, Baudrate) == E_OK, CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_BAUDRATE);

    canUnit = CTRL_TO_UNIT_PTR(Controller);

    /** @req 4.0.3/CAN453 *//** @req 4.1.2/SWS_Can_00453 */
    VALIDATE( (canUnit->state==CANIF_CS_STOPPED), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_TRANSITION );

    canHw = canUnit->hwPtr;
    config = canUnit->cfgCtrlPtr;

    // Find the baudrate config for the target baudrate
    baudratePtr = NULL;
    for( uint32 i=0; i < config->CanControllerSupportedBaudratesCount; i++) {
        if (config->CanControllerSupportedBaudrates[i].CanControllerBaudRate == Baudrate) {
            baudratePtr = &config->CanControllerSupportedBaudrates[0];
        }
    }
    // Catch NULL-pointer when no DET is available
    if (baudratePtr == NULL) {
        return (Std_ReturnType)CAN_NOT_OK; // Baudrate not found
    }

    baudrate = baudratePtr->CanControllerBaudRate;

    // Catch zero clock divisor
    if (baudrate == 0) {
        return E_NOT_OK; // Baudrate incorrect
    }

    /* Re-initialize the CAN controller and the controller specific settings. */
    /** @req 4.0.3/CAN062*//** @req 4.1.2/SWS_Can_00062 */
    /* Only affect register areas that contain specific configuration for a single CAN controller. */
    /** @req 4.0.3/CAN255 *//** @req 4.1.2/SWS_Can_00255 */

    // Wait for it to reset
#if defined (CFG_MPC5777M)
    if (!SIMULATOR()) {
        /** @req 4.0.3/CAN422 *//** @req 4.1.2/SWS_Can_00422 */
        while(canHw->CCCR.B.INIT != 0x1u) {
            //reset
            canHw->CCCR.B.INIT = 0x1u;
        }
        //Entering config mode
        canHw->CCCR.B.CCE = 0x1u;
    }
    /* Set CAN engine clock source */
    /*
     *  True: The CAN engine clock source is the oscillator clock.
     *  False: The CAN engine clock source is the system clock(pll)
     *
     *
     **/
    if( config->Can_Arc_ClockSrcOsc ) {
        //XOSC
        MC_CGM.AC8_SC.B.SELCTL = 0x1;
    } else {
        //PLL0
        MC_CGM.AC8_SC.B.SELCTL = 0x2;
    }

#elif defined (CFG_RH850P1M_C)

    /** @req 4.0.3/CAN422 *//** @req 4.1.2/SWS_Can_00422 */
    while(canHw->CCCR.B.INIT != 0x1u) {
        //reset
        canHw->CCCR.B.INIT = 0x1u;
    }
    //Entering config mode
    canHw->CCCR.B.CCE = 0x1u;

#endif

    //Resetting the timestamp and timeout registers
    canHw->TSCC.R = 0x0;   //Timestamp Counter Configuration Register
    canHw->TOCC.R = 0x0;   //Timeout Counter Configuration Register

    /* Disable self-reception, if not loopback  */
    //Disabling loopback
    canHw->CCCR.B.TEST  = 0x1;// Enabling the test register in order to disable the loopback
    canHw->TEST.B.LBCK = (config->Can_Arc_Flags & CAN_CTRL_LOOPBACK) ? 0 : 1;
    canHw->CCCR.B.MON = (config->Can_Arc_Flags & CAN_CTRL_LOOPBACK) ? 0 : 1; //Disabling internal loopback mode

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
    canHw->TXBCIE.R = 0xFFFFFFFFuL;
    //Transmit Cancellation for all bufferes as init
    canHw->TXBCR.R = 0xFFFFFFFFuL;
#endif

    /* Clock calucation
     * * -------------------------------------------------------------------
     * * * 1 TQ = Sclk period( also called SCK )
     * * Ftq = Fcanclk / ( PRESDIV + 1 ) = Sclk
     *   ( Fcanclk can come from crystal or from the peripheral dividers )
     *
     * -->
     * TQ = 1/Ftq = (PRESDIV+1)/Fcanclk --> PRESDIV = (TQ * Fcanclk - 1 )
     * TQ is between 4 and 81 for MPC5777M
     * TQ is between 4 and 385 for RH850P1M_C
     * -------------------------------------------------------------------
     */

    /* Calculate the number of timequanta's*/
    tseg1 = baudratePtr->CanControllerPropSeg + baudratePtr->CanControllerSeg1;
    tseg2 = baudratePtr->CanControllerSeg2;
    tq = 1uL + tseg1 + tseg2;
    sjw = baudratePtr->CanControllerSyncJumpWidth;

#if defined (CFG_MPC5777M)
    // Check TQ limitations..
    VALIDATE_DEM(( (tseg1>=1) && (tseg1<=63)), DemConf_DemEventParameter_CAN_E_TIMEOUT, E_NOT_OK);
    VALIDATE_DEM(( (tseg2>=1) && (tseg2<=15)), DemConf_DemEventParameter_CAN_E_TIMEOUT, E_NOT_OK);
    VALIDATE_DEM(( (tq>=4) && (tq<=81 )), DemConf_DemEventParameter_CAN_E_TIMEOUT, E_NOT_OK);

#elif defined (CFG_RH850P1M_C)
    // Check TQ limitations..
    VALIDATE_DEM(( (tseg1>=1) && (tseg1<=255)), DemConf_DemEventParameter_CAN_E_TIMEOUT, E_NOT_OK);
    VALIDATE_DEM(( (tseg2>=1) && (tseg2<=127)), DemConf_DemEventParameter_CAN_E_TIMEOUT, E_NOT_OK);
    VALIDATE_DEM(( (tq>=4) && (tq<=385 )), DemConf_DemEventParameter_CAN_E_TIMEOUT, E_NOT_OK);
#endif

    clock = Mcu_Arc_GetPeripheralClock((Mcu_Arc_PeriperalClock_t) config->CanCpuClockRef);

    uint32 brp = (uint32)(clock / (baudratePtr->CanControllerBaudRate * 1000uL * tq)) - 1UL;

    canHw->BTP.B.BRP = brp;
    canHw->BTP.B.SJW = (sjw - 1u);
    canHw->BTP.B.TSEG1 = (tseg1 - 1u);
    canHw->BTP.B.TSEG2 = (tseg2 - 1u);

    //Can loop back
    //canHw->CCCR.B.TEST  = 0x1;// Enabling the test register in order to disable the loopback

    if ((config->Can_Arc_Flags & CAN_CTRL_LOOPBACK) != 0) {
        canHw->TEST.B.LBCK  = 0x1u;
        //Enabling internal loopback mode
        canHw->CCCR.B.MON	= 0x1u;
    } else {
        canHw->CCCR.B.MON	= 0x0u;
        canHw->CCCR.B.TEST  = 0x0u;
    }
    /** @req 4.1.2/SWS_Can_00274 */
    // Disable bus off recovery
    //Busoff recovery starts on clearing CCCR.INIT

    addFilters(config,canUnit);


    canUnit->bufTxFree = canUnit->Can_Arc_TxBufMask;

    /** @req 4.0.3/CAN260 *//** @req 4.1.2/SWS_Can_00260 */
    canUnit->state = CANIF_CS_STOPPED;

    return (Std_ReturnType)CAN_OK;
}

/**
 * Transmit Pdu
 * @param Hth
 * @param PduInfo
 * @return
 */
Can_ReturnType Can_Write(Can_HwHandleType Hth, const Can_PduType *PduInfo)
{

    /** @req 4.0.3/CAN233 *//** @req 4.1.2/SWS_Can_00233 */
    /** @req 4.0.3/CAN214 *//** @req 4.1.2/SWS_Can_00214 */
    /** @req 4.0.3/CAN272 *//** @req 4.1.2/SWS_Can_00272 */
    /** @req 4.1.2/SWS_Can_00011 */
    /** @req 4.1.2/SWS_Can_00275 */

    uint32 freeMbox;
    Can_ReturnType rv = CAN_OK;
    uint32 bufNr;
    m_can_t *canHw;
    const Can_HardwareObjectType *hohObj;
    Can_UnitType *canUnit;
    Can_HwHandleType internalHth;

    /** @req 4.0.3/CAN104 *//** @req 4.1.2/SWS_Can_00104 */
    /** @req 4.0.3/CAN216 *//** @req 4.1.2/SWS_Can_00216 */
    VALIDATE_RV( (Can_Global.initRun == CAN_READY), 0x6, CAN_E_UNINIT, CAN_NOT_OK );
    /** @req 4.0.3/CAN219 *//** @req 4.1.2/SWS_Can_00219 */
    VALIDATE_RV( (PduInfo != NULL), 0x6, CAN_E_PARAM_POINTER, CAN_NOT_OK );
    VALIDATE_RV( (PduInfo->sdu != NULL), 0x6, CAN_E_PARAM_POINTER, CAN_NOT_OK );
    /** @req 4.0.3/CAN218 *//** @req 4.1.2/SWS_Can_00218 */
    VALIDATE_RV( (PduInfo->length <= 8), 0x6, CAN_E_PARAM_DATA_LENGTH, CAN_NOT_OK );
    /** @req 4.0.3/CAN217 *//** @req 4.1.2/SWS_Can_00217 */
    VALIDATE_RV( (Hth < NUM_OF_HOHS ), 0x6, CAN_E_PARAM_HANDLE, CAN_NOT_OK );
    /* Hth is the symbolic name for this hoh. Get the internal id */
    internalHth = Can_Global.config->CanConfigSetPtr->ArcSymbolicHohToInternalHoh[Hth];
    VALIDATE_RV( (internalHth < NUM_OF_HTHS ), 0x6, CAN_E_PARAM_HANDLE, CAN_NOT_OK );
    canUnit = CTRL_TO_UNIT_PTR(Can_Global.config->CanConfigSetPtr->ArcHthToSymbolicController[internalHth]);
    hohObj  =  &canUnit->cfgHohPtr[Can_Global.config->CanConfigSetPtr->ArcHthToHoh[internalHth]];
    canHw   =  canUnit->hwPtr;

    /* We have the hohObj, we need to know what box we can send on */
    SchM_Enter_Can_EA_0();

    /* Buffer elements that are occupied */
    uint32 pendingHwFlag = (uint32)canHw->TXBRP.R;
    /* Check for configuration faults: hardware object contains valid buffer mask (Overlaps with tx buffer mask of the controller)  */
    ASSERT( (canUnit->Can_Arc_TxBufMask & hohObj->Can_Arc_BufferMask));
    /* Get free transmit message boxes */
    freeMbox = (uint32)(~pendingHwFlag &  (uint32)canUnit->bufTxFree & (uint32)hohObj->Can_Arc_BufferMask);
    /** @req 4.0.3/CAN212 *//** @req 4.1.2/SWS_Can_00212 */
    /*Tx Buffer available*/
    if (freeMbox != 0x0) {
        bufNr = (uint32)ilog2((uint32)freeMbox ); // find buffer number
        /* Indicate that we are sending this BUFFER */
        canUnit->bufTxFree &= (uint32)~(1UL<<bufNr);
        /* Filling Buffer to send */
        canUnit->TxBUFPtr[bufNr].T0.R = 0x0;
        canUnit->TxBUFPtr[bufNr].T1.R = 0x0;
        canUnit->TxBUFPtr[bufNr].TD[0].R = 0x0;
        canUnit->TxBUFPtr[bufNr].TD[1].R = 0x0;

        // Setup message box type
        if (hohObj->CanIdType == CAN_ID_TYPE_EXTENDED) {
            canUnit->TxBUFPtr[bufNr].T0.B.XTD = 1;
        } else if (hohObj->CanIdType == CAN_ID_TYPE_STANDARD) {
            canUnit->TxBUFPtr[bufNr].T0.B.XTD = 0;
        } else {
            // No support for mixed in this processor
            ASSERT(0);
        }

        // Send on buf
        if (hohObj->CanIdType == CAN_ID_TYPE_EXTENDED) {
            canUnit->TxBUFPtr[bufNr].T0.B.ID = (vuint32_t)(PduInfo->id); // Write 29-bit IDs
        } else {
            ASSERT( (PduInfo->id & STDID_CHK_MASK) == 0 );
            canUnit->TxBUFPtr[bufNr].T0.B.ID = (vuint32_t)(PduInfo->id << 18); //29 to 11 bits conversion
        }
        /** @req 4.1.2/SWS_Can_00059 *//* Definition of data structure */
        copyPduToData(COPY_DATA_TX_BUFFER, PduInfo, canUnit, bufNr);
        canUnit->TxBUFPtr[bufNr].T1.B.EFC = 0;
        canUnit->TxBUFPtr[bufNr].T0.B.RTR = 0;
        canUnit->TxBUFPtr[bufNr].T1.B.DLC = (vuint32_t)(PduInfo->length);
        /*start transmission*/
        canHw->TXBAR.R = (vuint32_t)(1UL << (bufNr));

#if (USE_CAN_STATISTICS == STD_ON)
        canUnit->stats.txSuccessCnt++;
#endif

        // Store pdu handle in unit to be used by TxConfirmation
        /** @req 4.1.2/SWS_Can_00276 */
        canUnit->cfgCtrlPtr->Can_Arc_TxPduHandles[bufNr] = PduInfo->swPduHandle;

    } else
    {
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        /** @req 4.0.3/CAN213 *//** @req 4.1.2/SWS_Can_00213 */
        /** @req 4.0.3/CAN215 *//** @req 4.1.2/SWS_Can_00215 */
        /** @req 4.0.3/CAN278 *//** @req 4.1.2/SWS_Can_00278 */
        /* Check if there are messages that may be cancelled */
        /* Find the one with the lowest priority */
        /* Assume that mixed is not supported, i.e. only check the canid */
        uint32 tmp = (uint32)(hohObj->Can_Arc_BufferMask & ~canUnit->bufTxCancel);
        Can_IdType lowestPrioCanId = INVALID_CANID;
        Can_IdType bufCanId = 0;
        uint8 bufCancel = 0;
        while(tmp) {
            bufNr = (uint32)ilog2(tmp);
            if (hohObj->CanIdType == CAN_ID_TYPE_EXTENDED) {
                bufCanId = (Can_IdType)(canUnit->TxBUFPtr[bufNr].T0.B.ID);
            } else {
                bufCanId = (Can_IdType)(canUnit->TxBUFPtr[bufNr].T0.B.ID >> 18);
            }
            if( (lowestPrioCanId < bufCanId) || (INVALID_CANID == lowestPrioCanId) ) {
                lowestPrioCanId = bufCanId;
                bufCancel = (uint8)bufNr;
            }
            tmp &= (uint32)~(1UL<<bufNr);
        }
        /** @req 4.0.3/CAN286 *//** @req 4.1.2/SWS_Can_00286 */
        /** @req 4.0.3/CAN399 *//** @req 4.1.2/SWS_Can_00399 */
        if( (lowestPrioCanId > PduInfo->id) && (INVALID_CANID != lowestPrioCanId) ) {
            /* Cancel this */
            canUnit->bufTxCancel |= (uint32)(1UL<<bufCancel);
            /* Canceling in hardware */
            canHw->TXBCR.R |= (vuint32_t)(1UL << bufCancel);
        } else {
            /** @req 4.0.3/CAN213 *//** @req 4.1.2/SWS_Can_00213 */
        }
#endif
        /** @req 4.1.2/SWS_Can_00434 *//* But CanIdenticalIdCancellation not supported */
        rv = CAN_BUSY;
    }
    SchM_Exit_Can_EA_0();

    return rv;


}
/**
 * Check wakeup:  NOT SUPPORTED
 * @param Controller
 * @return
 */
Can_ReturnType Can_CheckWakeup( uint8 Controller ) {
    /** !req 4.0.3/CAN360 *//** !req 4.1.2/SWS_Can_00360 */
    /** !req 4.0.3/CAN361 *//** !req 4.1.2/SWS_Can_00361 */
    /** !req 4.0.3/CAN362 *//** !req 4.1.2/SWS_Can_00362 */
    /** !req 4.0.3/CAN363 *//** !req 4.1.2/SWS_Can_00363 */
    /** !req 4.1.2/SWS_Can_00484 */
    /** !req 4.1.2/SWS_Can_00485 */

    /* NOT SUPPORTED */
    (void)Controller;
    return CAN_NOT_OK;
}

#if (CAN_USE_WRITE_POLLING == STD_ON)
/**
 * Can write polling
 */
void Can_MainFunction_Write( void ) {
    /** @req 4.0.3/CAN225 *//** @req 4.1.2/SWS_Can_00225 */
    /** @req 4.0.3/CAN031 *//** @req 4.1.2/SWS_Can_00031 */
    /** !req 4.1.2/SWS_Can_00441 */

    Can_UnitType *uPtr;

    /** @req 4.0.3/CAN179 *//** @req 4.1.2/SWS_Can_00179 *//* CAN_E_UNINIT */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_MAINFUNCTION_WRITE_SERVICE_ID, CAN_E_UNINIT );

    /** @req 4.0.3/CAN431 *//* On Uninit, return immediately without prod err */
    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }

    for(uint32 i=0u;i<CAN_ARC_CTRL_CONFIG_CNT; i++ ) {
        uPtr = &CanUnit[i];
        if( (uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_TX_PROCESSING_INTERRUPT) == 0 ) {
            Can_Isr_Tx(uPtr, FALSE);
        }
    }
}
#endif

#if (CAN_USE_READ_POLLING == STD_ON)
/**
 * Rx polling events
 */
void Can_MainFunction_Read(void)
{
    /** @req 4.0.3/CAN226 *//** @req 4.1.2/SWS_Can_00226 */
    /** @req 4.0.3/CAN108 *//** @req 4.1.2/SWS_Can_00108 */
    /** !req 4.1.2/SWS_Can_00442 */

    Can_UnitType *uPtr;

    /** @req 4.0.3/CAN181 *//** @req 4.1.2/SWS_Can_00181 *//* CAN_E_UNINIT */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_MAINFUNCTION_READ_SERVICE_ID, CAN_E_UNINIT );

    /** @req 4.0.3/CAN431 *//* On Uninit, return immediately without prod err */
    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }

    for(uint32 i=0u;i<CAN_ARC_CTRL_CONFIG_CNT; i++ ) {
        uPtr = &CanUnit[i];
        if( ((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_RX_PROCESSING_INTERRUPT) == 0 ) &&
                ((uPtr->hwPtr->IR.R &
                 (FIFO0_NEWMSG_INT_MASK|FIFO1_NEWMSG_INT_MASK|BUFFER_NEWMSG_INT_MASK
                         |FIFO1_MSGLOST_INT_MASK|FIFO0_MSGLOST_INT_MASK)) != NULL )){
            Can_Isr_Rx(uPtr);
        }
    }
}
#endif

#if (CAN_USE_BUSOFF_POLLING == STD_ON)
/**
 * Bus-off polling events
 */
void Can_MainFunction_BusOff(void)
{
    /** @req 4.0.3/CAN227 *//** @req 4.1.2/SWS_Can_00227 */
    /** @req 4.0.3/CAN109 *//** @req 4.1.2/SWS_Can_00109 */

    /* Bus-off polling events */

    Can_UnitType *uPtr;

    /** @req 4.0.3/CAN184 *//** @req 4.1.2/SWS_Can_00184 *//* CAN_E_UNINIT */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_MAINFUNCTION_BUSOFF_SERVICE_ID, CAN_E_UNINIT );

    /** @req 4.0.3/CAN431 *//* On Uninit, return immediately without prod err */
    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }

    for(uint8 controllerId = 0; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++ ) {
        uPtr    = CTRL_TO_UNIT_PTR(controllerId);

        if( ((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) == 0 ) &&
                ((uPtr->hwPtr->IR.B.BO == 1) && (uPtr->hwPtr->PSR.B.BO == 1)){

            Can_BusOff(uPtr->cfgCtrlPtr->CanHwUnitId);
        }
    }
}
#endif

#if (ARC_CAN_ERROR_POLLING == STD_ON)
/**
 *  Error polling events
 */
void Can_Arc_MainFunction_Error(void)
{
    /* Error polling events */
    // NOTE: remove function (not in req spec)

    Can_UnitType *uPtr;
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_MAINFUNCTION_ERROR_SERVICE_ID, CAN_E_UNINIT );

    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }
    for(uint8 controllerId = 0; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++ ) {
        uPtr = CTRL_TO_UNIT_PTR(controllerId);

#if defined (CFG_MPC5777M)
        if(((uPtr->hwPtr->IR.B.STE)||      //Stuff Error
                (uPtr->hwPtr->IR.B.FOE)||   //Format Error
                (uPtr->hwPtr->IR.B.ACKE)||  //Acknowledge Error
                (uPtr->hwPtr->IR.B.BE)||    //Bit Error
                (uPtr->hwPtr->IR.B.CRCE)) && //CRC Error
                ((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_ERROR_PROCESSING_INTERRUPT) == 0)
                && (uPtr->hwPtr->IR.B.BO == 0)){  //No bus off

            Can_Err(uPtr->cfgCtrlPtr->CanHwUnitId);
        }
#elif defined (CFG_RH850P1M_C)
        if(((uPtr->hwPtr->IR.B.PED) || (uPtr->hwPtr->IR.B.PEA))
                && ((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_ERROR_PROCESSING_INTERRUPT) == 0)
                && (uPtr->hwPtr->IR.B.BO == 0)){  //No bus off
            Can_Err(uPtr->cfgCtrlPtr->CanHwUnitId);
        }
#endif
    }
}


#endif

#if (CAN_USE_WAKEUP_POLLING == STD_ON)
/**
 * Wakeup polling events: NOT SUPPORTED
 */
void Can_MainFunction_Wakeup(void)
{
    /** !req 4.0.3/CAN228 *//** !req 4.1.2/SWS_Can_00228 */
    /** !req 4.0.3/CAN112 *//** !req 4.1.2/SWS_Can_00112 */
    /** !req 4.0.3/CAN186 *//** !req 4.1.2/SWS_Can_00186 */
    /* Wakeup polling events */

    /* NOT SUPPORTED */
}
#endif

/**
 * Main function
 */
void Can_MainFunction_Mode( void )
{
    /** @req 4.0.3/CAN368 *//** @req 4.1.2/SWS_Can_00368 *//* API */
    /** @req 4.0.3/CAN369 *//** @req 4.1.2/SWS_Can_00369 *//* Polling */

    /** !req 4.0.3/CAN398 *//** !req 4.1.2/SWS_Can_00398 *//* Blocking call not supported */
    /** !req 4.0.3/CAN371 *//** !req 4.1.2/SWS_Can_00371 *//* Blocking call not supported */
    /** !req 4.0.3/CAN372 *//** !req 4.1.2/SWS_Can_00372 *//* Blocking call not supported */

    Can_UnitType *uPtr;
    boolean clearPending;

    /** @req 4.0.3/CAN379 *//** @req 4.1.2/SWS_Can_00379 *//* CAN_E_UNINIT */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_MAIN_FUNCTION_MODE_SERVICE_ID, CAN_E_UNINIT );

    /** @req 4.0.3/CAN431 *//* On Uninit, return immediately without prod err */
    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }

    for(uint8 controllerId=0; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++ )
    {
        clearPending = TRUE;
        CanIf_ControllerModeType indicateMode = CANIF_CS_UNINIT;
        uPtr = CTRL_TO_UNIT_PTR(controllerId);
        switch (uPtr->pendingStateIndication)
        {
            case CAN_CTRL_INDICATION_PENDING_START:
                if (uPtr->state == CANIF_CS_STARTED) {
                    indicateMode = CANIF_CS_STARTED;
                }
                break;

            case CAN_CTRL_INDICATION_PENDING_STOP:
                if (uPtr->state == CANIF_CS_STOPPED) {
                    // Stopped, indicate to upper layer
                    indicateMode = CANIF_CS_STOPPED;
                }
                break;

            case CAN_CTRL_INDICATION_PENDING_SLEEP:
                if (uPtr->state == CANIF_CS_SLEEP) {
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
        if( (CANIF_CS_UNINIT != indicateMode) ) {
            /** @req 4.0.3/CAN370 *//** @req 4.1.2/SWS_Can_00370 */
            /** @req 4.0.3/CAN373 *//** @req 4.1.2/SWS_Can_00373 */
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
            CanIf_ControllerModeIndication(uPtr->cfgCtrlPtr->Can_Arc_CanIfControllerId, indicateMode);
#else
            CanIf_ControllerModeIndication(controllerId, indicateMode);
#endif
        }
        if (clearPending) {
            uPtr->pendingStateIndication = CAN_CTRL_INDICATION_NONE;
        }
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        if(0 != uPtr->bufTxCancel) {
            HandlePendingTxCancel(uPtr);
        }
#endif
    }
}

#if ( CAN_VERSION_INFO_API == STD_ON )
/**
 * Gets version information of the module
 * @param versioninfo
 */
void Can_GetVersionInfo( Std_VersionInfoType* versioninfo) {

    /* @req SWS_Can_00224 */
    /* @req SWS_Can_00177 */
    VALIDATE_NO_RV( ( NULL != versioninfo ), CAN_GETVERSIONINFO_SERVICE_ID, CAN_E_PARAM_POINTER);

    versioninfo->vendorID = CAN_VENDOR_ID;
    versioninfo->moduleID = CAN_MODULE_ID;
    versioninfo->sw_major_version = CAN_SW_MAJOR_VERSION;
    versioninfo->sw_minor_version = CAN_SW_MINOR_VERSION;
    versioninfo->sw_patch_version = CAN_SW_PATCH_VERSION;
}
#endif

#if (USE_CAN_STATISTICS == STD_ON)
/**
 * Gets Statistical data for the specific controller
 * @param controller
 * @param stats
 */
void Can_Arc_GetStatistics(uint8 controller, Can_Arc_StatisticsType *stats)
{
    if(Can_Global.initRun == CAN_READY)
    {
        Can_UnitType *canUnit = CTRL_TO_UNIT_PTR(controller);
        *stats = canUnit->stats;
    }
}
#endif

#if defined(CFG_CAN_TEST)
/**
 * Returns Test information for the CAN module
 */
Can_TestType * Can_Arc_GetTestInfo( void )
{
    return &Can_Test;
}
#endif

#ifdef HOST_TEST
Std_ReturnType Can_Test_DriverStateIsUninit(void) {
    return (Can_Global.initRun == CAN_UNINIT) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_Test_DriverStateIsReady(void) {
    return (Can_Global.initRun == CAN_READY) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_Test_AllUnitsInState(CanIf_ControllerModeType state) {

    Can_UnitType *unitPtr;

    for (uint8 controllerId = 0; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++) {

        unitPtr = CTRL_TO_UNIT_PTR(controllerId);

        if (unitPtr->state != state) {
            return E_NOT_OK;
        }
    }

    return E_OK;
}
#endif /* HOST_TEST */
