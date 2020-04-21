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
/** @tagSettings DEFAULT_ARCHITECTURE=PPC|MPC5607B|MPC5645S|MPC5646B|MPC5748G|MPC5747C|MPC5744P|MPC5777C */


/* ----------------------------[information]----------------------------------*/
/*
 * Author: mahi
 *
 *
 * Description:
 *   Implements the Can Driver module
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
 *   CAN_BUSOFF_PROCESSING           N  , Interrupt only
 *   CAN_RX_PROCESSING               N  , Interrupt only
 *   CAN_TX_PROCESSING               N  , Interrupt only
 *   CAN_WAKEUP_PROCESSING           N  , Interrupt only
 *   CAN_CPU_CLOCK_REFERENCE         N  , *)
 *   CanWakeupSourceRef              N  , **)
 *
 *   *) It assumes that there is a PERIPHERAL clock defined.
 *   **) The flexcan hardware cannot detect wakeup (at least now the ones
 *       this driver supports)
 *
 *   MPC5554 is NOT supported (no individual mask)
 *
 * Implementation Notes:
 *   - Individual RXMASKs are always ON. No support for "old" chips.
 *   FIFO
 *   - Is always ON.
 *   - Is masked ONLY against 8 extended IDs
 *   - Have depth 6, with 8 ID and 8 RXMASK
 *
 *   MBOX ALLOCATION
 *     RX
 *       - First 8 boxes always allocated for RX FIFO
 *       - software filter for RX FIFO, to identify the right HRH.
 *       - HRHs are global indexed from 00
 *     TX
 *       - One HTH for each HOH (the HOH can have a number of mailboxes, in sequence)
 *       - HTHs are global (at least for each driver) indexed from 0
 *
 *    EXAMPLE ALLOCATION
 *      0 ,
 *      1  |
 *      2  |
 *      3  |   RX FIFO -> software lookup to map to right HTH
 *      4  |              1 FULL_CAN    HOH_0
 *      5  |              1 BASIC_CAN   HOH_1
 *      6  |
 *      7
 *
 *      8   RX FULL_CAN  -  HOH_2
 *      9   RX FULL_CAN  -  HOH_3
 *      10  RX BASIC_CAN  - HOH_4   |  RX with 2 boxes
 *      11                - HOH_4   |
 *      12  TX FULL_CAN   - HOH_5
 *      13  TX BASIC_CAN  - HOH_6   |  TX with 2 boxes
 *      14                - HOH_6   |
 */

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
/** @req SWS_Can_00079 Coding guidlines (compiler abstraction not used)*/



/* ----------------------------[includes]------------------------------------*/
#include "Can.h"
#include "mpc55xx.h"
#include "Cpu.h"
#include "Mcu.h"
#include "CanIf_Cbk.h"
#if (CAN_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
#endif
#if defined(USE_DEM)
#include "Dem.h"
#endif
#include "arc_assert.h"
#include <string.h>
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
#include "isr.h"
#include "irq.h"
#include "Os.h"
#endif
#include "arc.h"
//#define USE_LDEBUG_PRINTF
#include "debug.h"
#include "SchM_Can.h"
//#include "Can_Internal.h"
#include "os_peripheral_i.h"
/*
 * Lint Exceptions For this file:
 * - Allow use of union based types (9018)
 */
/*lint -save -e9018*/

/* ----------------------------[private define]------------------------------*/

#define MAX_NUM_OF_MAILBOXES    64
#define USE_CAN_STATISTICS      STD_OFF

#define BUF_USED_BY_FIFO 6 // FIFO buffer depth = 6 Verified for MPC5744P, MPC5748G.

#define INVALID_CANID 0xFFFFFFFFuL
#define EXTENDED_CANID_MAX 0x1FFFFFFFuL
#define STANDARD_CANID_MAX 0x7FFuL
// Message box status defines
#define MB_TX_ONCE              0xCu
#define MB_INACTIVE             0x8u
#define MB_RX                   0x4u
#define MB_ABORT                0x9u
#define MB_RX_OVERRUN           0x6u

#define MCR_FRZ                 (0x40000000UL)
#define MCR_HALT                (0x10000000UL)
#define MCR_NOTRDY              (0x08000000UL)
#define MCR_WRNEN               (0x00200000UL)

// FIFO interrupt flag positions
#define IFLAG_FIFO_OVERFLOW 7u
#define IFLAG_FIFO_WARNING 6u
#define IFLAG_FIFO_FRAME_AVAIL 5u

// Buffer RAM space
#if defined(CFG_MPC5744P) ||  defined(CFG_MPC5746C) || defined(CFG_MPC5777C)

#define MB_RAM_START 0x80uL /* Offset address of MB */
#define MB_RAM_LENGTH 0x400uL /* 64 * 16 */

#define RXIMR_RAM_START 0x880uL /* Offset address of RXIMR */
#define RXIMR_RAM_LENGTH 0x100uL /* 64 * 4 */

#endif

// FIFO ID table layout
#define FIFO_IDTAB_STD_POS 19u
#define FIFO_IDTAB_EXT_POS 1u
#define FIFO_IDTAB_EXT_FLAG 0x40000000uL

/* Position of StdId in ExtId */
#define STD_ID_POS_IN_EXT_ID 18u

#define MODIFY_PERIPERAL32(_addr, _clearmask, _setmask)   ModifyPeripheral32(0, (uint32*)(_addr),_clearmask , _setmask )
#define READ_PERIPHERAL32(_addr, _val)                    ReadPeripheral32(0, (const uint32*)(_addr),_val )

/* ----------------------------[private typedef]-----------------------------*/

typedef volatile struct FLEXCAN_tag flexcan_t;

#if defined(CFG_CAN_TEST)
Can_TestType Can_Test;
#endif


/*lint -esym(754, TWRNINT) HW register description, not all members accessed. */
/*lint -esym(754, RWRNINT) HW register description, not all members accessed. */
/*lint -esym(754, IDLE) HW register description, not all members accessed. */
/*lint -esym(754, TXRX) HW register description, not all members accessed. */
/*lint -esym(754, FLTCONF) HW register description, not all members accessed. */
/*lint -esym(754, WAKINT) HW register description, not all members accessed. */
typedef union {
    vuint32_t R;
    struct {
        vuint32_t :14;
        vuint32_t TWRNINT :1;
        vuint32_t RWRNINT :1;
        vuint32_t BIT1ERR :1;
        vuint32_t BIT0ERR :1;
        vuint32_t ACKERR :1;
        vuint32_t CRCERR :1;
        vuint32_t FRMERR :1;
        vuint32_t STFERR :1;
        vuint32_t TXWRN :1;
        vuint32_t RXWRN :1;
        vuint32_t IDLE :1;
        vuint32_t TXRX :1;
        vuint32_t FLTCONF :2;
        vuint32_t :1;
        vuint32_t BOFFINT :1;
        vuint32_t ERRINT :1;
        vuint32_t WAKINT :1;
    } B;
} ESRType; /* Error and Status Register */


/* Type for holding global information used by the driver */
typedef struct {
    Can_DriverStateType     initRun;            /* If Can_Init() have been run */
    const Can_ConfigType *  config;             /* Pointer to config */
} Can_GlobalType;

#define MAX_NO_FIFO 8


/* Type for holding information about each controller */
typedef struct {
    CanIf_ControllerModeType            state;
    const Can_ControllerConfigType *    cfgCtrlPtr;     /* Pointer to controller config  */
    const Can_HardwareObjectType *      cfgHohPtr;     /* List of HOHs */
    flexcan_t *                         hwPtr;          /* Controller hardware pointer*/
    uint32      lock_cnt;
    uint64      Can_Arc_RxMbMask;
    uint64      Can_Arc_TxMbMask;
    uint64      mbTxFree;
    uint8     numMbMax;                           /* Max number of mailboxes available for this unit */
    Can_CtrlPendingStateIndicationType  pendingStateIndication;
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
    uint64     mbTxCancel;
    uint64     suppressMbTxCancel;
#endif
#if (USE_CAN_STATISTICS == STD_ON)
    Can_Arc_StatisticsType stats;
#endif
    uint32_t RXIMR_FifoMasks[MAX_NO_FIFO];
    boolean fifoEn;
} Can_UnitType;


/* ----------------------------[private macro]-------------------------------*/

#define CTRL_TO_UNIT_PTR(_controller)   &CanUnit[_controller]
#define HWUNIT_TO_CONTROLLER_ID(_hwunit)   Can_Global.config->CanConfigSetPtr->ArcHwUnitToController[_hwunit]
#define VALID_CONTROLLER(_ctrl)         ((_ctrl) < CAN_ARC_CTRL_CONFIG_CNT)
#if defined(CFG_MPC5604P)
#define GET_CAN_HW(_hwUnit)     \
                            ((flexcan_t *)(0xFFFC0000uL + (0x28000uL*(_hwUnit))))
#elif defined(CFG_MPC5744P)
#define GET_CAN_HW(_hwUnit) ((flexcan_t *)((uint8*)&CAN_0 + (((uint8*)&CAN_1 - (uint8*)&CAN_0) * _hwUnit)))

#elif defined(CFG_MPC5777C)
static flexcan_t * const CAN_HW[] = {(flexcan_t *) &CAN_0, (flexcan_t *) &CAN_1, (flexcan_t *) &CAN_2, (flexcan_t *) &CAN_3};
#define GET_CAN_HW(_hwUnit) CAN_HW[_hwUnit]

#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
/*lint -e{923, 929} OTHER To increase readability */
static flexcan_t * const CAN_HW[] = {(flexcan_t *) &CAN_0, (flexcan_t *) &CAN_1, (flexcan_t *) &CAN_2, (flexcan_t *) &CAN_3, (flexcan_t *) &CAN_4, (flexcan_t *) &CAN_5, (flexcan_t *) &CAN_6, (flexcan_t *) &CAN_7};
#define GET_CAN_HW(_hwUnit) CAN_HW[_hwUnit]
#else
#define GET_CAN_HW(_hwUnit) ((flexcan_t *)(0xFFFC0000uL + (0x4000uL*(_hwUnit))))
#endif

#define INSTALL_HANDLER4(_name, _can_entry, _vector, _priority, _app)\
    do { \
        ISR_INSTALL_ISR2(_name, _can_entry, ((_vector)), _priority, _app); \
        ISR_INSTALL_ISR2(_name, _can_entry, ((_vector)+1), _priority, _app); \
        ISR_INSTALL_ISR2(_name, _can_entry, ((_vector)+2), _priority, _app); \
        ISR_INSTALL_ISR2(_name, _can_entry, ((_vector)+3), _priority, _app); \
    } while(FALSE)

#define INSTALL_HANDLER16(_name, _can_entry, _vector, _priority, _app)\
    do { \
        INSTALL_HANDLER4(_name, _can_entry, ((_vector)), _priority, _app); \
        INSTALL_HANDLER4(_name, _can_entry, ((_vector)+4), _priority, _app); \
        INSTALL_HANDLER4(_name, _can_entry, ((_vector)+8), _priority, _app); \
        INSTALL_HANDLER4(_name, _can_entry, ((_vector)+12),_priority, _app); \
    } while(FALSE)

//-------------------------------------------------------------------

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



/* ----------------------------[private function prototypes]-----------------*/
static void Can_Isr(CanHwUnitIdType unit);
static void Can_Err(CanHwUnitIdType unit);
static void Can_BusOff(CanHwUnitIdType unit);
static void setupMessageboxes(Can_UnitType *canUnit);

/* ----------------------------[private variables]---------------------------*/

#define CAN_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"
static Can_UnitType    CanUnit[CAN_ARC_CTRL_CONFIG_CNT];
#define CAN_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"

#define CAN_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"
static Can_GlobalType  Can_Global = { .initRun = CAN_UNINIT, };/** @req 4.1.2/SWS_Can_00103 */
#define CAN_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "MemMap.h"

/* ----------------------------[private functions]---------------------------*/
/**
 * Clear message box flag for a controller
 * @param hw - Pointer to controller hardware structure
 * @param mb - The messagebox index
 */
static void clearMbFlag( flexcan_t * hw,  uint8 mb ) {
    if(hw == NULL_PTR)
    {
        return;
    }
    
    if( mb >= 32u) {
        hw->IFRH.R = (1uL<<(mb-32u));
    } else {
        hw->IFRL.R = (1uL<<mb);
    }
}


/**
 * Integer log2
 * @param val - input
 * @return calculated value
 */
static inline uint8 ilog2_64( uint64 val ) {
    uint32 t = (uint32)(val >> 32u);
    uint8 retval;
    retval= ilog2((uint32)(0xFFFFFFFFuL & val));

    if( t != 0) {
        retval = ilog2(t) + 32u;
    }
    return retval;
}

/**
 * @brief Can_Hw_DisableControllerInterrupts Disables interrupts in the hardware.
 * Does not perform any other logic like changing the disable interrupt count.
 * @param Controller Hardware index of the controller.
 */
void Can_Hw_DisableControllerInterrupts(uint8 Controller) {

    Can_UnitType *canUnit;
    flexcan_t *canHw;

    canUnit = CTRL_TO_UNIT_PTR(Controller);

    if(canUnit == NULL_PTR)
    {   
        return;
    }
    
    /* Don't try to be intelligent, turn everything off */
    canHw = canUnit->hwPtr;

    if(canHw == NULL_PTR)
    {
        return;
    }
            
            
    /* Turn off the interrupt mailboxes */
    if (canUnit->numMbMax > 32u) {
        canHw->IMRH.R = 0uL;
    }
    canHw->IMRL.R = 0uL;
    /*lint -e954 HARDWARE_ACESSS */
    /* Turn off the bus off/tx warning/rx warning and error */

    /* canHw->MCR.B.WRNEN = 0u; */ /* Disable warning int */
    MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_WRNEN, 0UL);
    canHw->CR.B.ERRMSK = 0u; /* Disable error interrupt */
    canHw->CR.B.BOFFMSK = 0u; /* Disable bus-off interrupt */
    canHw->CR.B.TWRNMSK = 0u; /* Disable Tx warning */
    canHw->CR.B.RWRNMSK = 0u; /* Disable Rx warning */
}

/**
 * @brief Can_Hw_EnableControllerInterrupts Enables the interrupts in the hardware.
 * Does not perform any other logic like changing the disable interrupt count.
 * @param Controller Hardware index of the controller.
 */
void Can_Hw_EnableControllerInterrupts(uint8 Controller) {

    Can_UnitType *canUnit;
    flexcan_t *canHw;

    canUnit = CTRL_TO_UNIT_PTR(Controller);
    if(canUnit == NULL_PTR)
    {
        return;
    }
    
    canHw = canUnit->hwPtr;
    if(canHw == NULL_PTR)
    {
        return;
    }
    if (canUnit->numMbMax > 32u) {
        canHw->IMRH.R = 0uL;
    }
    canHw->IMRL.R = 0uL;

    if ((canUnit->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_RX_PROCESSING_INTERRUPT) != 0) {
        /* Turn on the interrupt mailboxes */
        canHw->IMRL.R = (uint32)canUnit->Can_Arc_RxMbMask;
        if (canUnit->numMbMax > 32u) {
            canHw->IMRH.R = (uint32)(canUnit->Can_Arc_RxMbMask>>32u);
        }
    }

    if ((canUnit->cfgCtrlPtr->Can_Arc_Flags &  CAN_CTRL_TX_PROCESSING_INTERRUPT) != 0) {
        /* Turn on the interrupt mailboxes */
        canHw->IMRL.R |= (uint32)canUnit->Can_Arc_TxMbMask;
        if (canUnit->numMbMax > 32u) {
            canHw->IMRH.R |= (uint32)(canUnit->Can_Arc_TxMbMask>>32u);
        }
    }

    // BusOff and warnings
    if ((canUnit->cfgCtrlPtr->Can_Arc_Flags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0) {
        /* canHw->MCR.B.WRNEN = 1u; */ /* Turn On warning int */
        MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_WRNEN, MCR_WRNEN);
        canHw->CR.B.BOFFMSK = 1u; /* Enable bus-off interrupt */

#if (USE_CAN_STATISTICS == STD_ON)
        canHw->CR.B.TWRNMSK = 1u; /* Enable Tx warning */
        canHw->CR.B.RWRNMSK = 1u; /* Enable Rx warning */
#endif
    }

    // errors
    if ((canUnit->cfgCtrlPtr->Can_Arc_Flags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0) {
        canHw->CR.B.ERRMSK = 1u; /* Enable error interrupt */
    }

}

/*lint -save -e957 No prototype needed for ISR funcs */
#if USE_CAN_CTRL_A == STD_ON
ISR(Can_A_Isr) {Can_Isr(CAN_CTRL_A);}
ISR(Can_A_Err) {Can_Err(CAN_CTRL_A);}
ISR(Can_A_BusOff) {Can_BusOff(CAN_CTRL_A);}
#endif


#if USE_CAN_CTRL_B == STD_ON
ISR(Can_B_Isr) {Can_Isr(CAN_CTRL_B);}
ISR(Can_B_Err) {Can_Err(CAN_CTRL_B);}
ISR(Can_B_BusOff) {Can_BusOff(CAN_CTRL_B);}
#endif


#if USE_CAN_CTRL_C == STD_ON
ISR(Can_C_Isr) {Can_Isr(CAN_CTRL_C);}
ISR(Can_C_Err) {Can_Err(CAN_CTRL_C);}
ISR(Can_C_BusOff) {Can_BusOff(CAN_CTRL_C);}
#endif


#if USE_CAN_CTRL_D == STD_ON
ISR(Can_D_Isr) {Can_Isr(CAN_CTRL_D);}
ISR(Can_D_Err) {Can_Err(CAN_CTRL_D);}
ISR(Can_D_BusOff) {Can_BusOff(CAN_CTRL_D);}
#endif


#if USE_CAN_CTRL_E == STD_ON
ISR(Can_E_Isr) {Can_Isr(CAN_CTRL_E);}
ISR(Can_E_Err) {Can_Err(CAN_CTRL_E);}
ISR(Can_E_BusOff) {Can_BusOff(CAN_CTRL_E);}
#endif


#if USE_CAN_CTRL_F == STD_ON
ISR(Can_F_Isr) {Can_Isr(CAN_CTRL_F);}
ISR(Can_F_Err) {Can_Err(CAN_CTRL_F);}
ISR(Can_F_BusOff) {Can_BusOff(CAN_CTRL_F);}
#endif
/*lint -restore*/

//-------------------------------------------------------------------

#if defined(CFG_CAN_TEST)
/**
 * Returns test info
 */
Can_TestType * Can_Arc_GetTestInfo( void ) {
    return &Can_Test;
}


#endif


/**
 * Hardware error ISR for CAN
 * @param hwUnit - Hardware controller index
 */
static void Can_Err(CanHwUnitIdType hwUnit)
{
    uint8 controller = HWUNIT_TO_CONTROLLER_ID(hwUnit);
    /** @req 4.0.3/CAN033 *//** @req 4.1.2/SWS_Can_00033 */
    /*lint -e923 -e9033 Intentional cast from integer literal HW register address to pointer */
    flexcan_t *canHw = GET_CAN_HW(hwUnit);
    Can_Arc_ErrorType err;
    ESRType esr;
    ESRType esrWrite;

    if(canHw == NULL_PTR)
    {
        return;
    }
    // Clear bits 16-21 by read
    esr.R = canHw->ESR.R;

    // Copy err flags
    err.R = 0uL;
    err.B.BIT1ERR = esr.B.BIT1ERR;
    err.B.BIT0ERR = esr.B.BIT0ERR;
    err.B.ACKERR = esr.B.ACKERR;
    err.B.CRCERR = esr.B.CRCERR;
    err.B.FRMERR = esr.B.FRMERR;
    err.B.STFERR = esr.B.STFERR;
    err.B.TXWRN = esr.B.TXWRN;
    err.B.RXWRN = esr.B.RXWRN;

    if(esr.B.ERRINT != 0u)
    {
        (void)err;          /*lint !e920 STANDARDIZED_API */
        (void)controller;   /*lint !e920 STANDARDIZED_API */
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
        Can_Arc_Error(Can_Global.config->CanConfigSetPtr->CanController[controller].Can_Arc_CanIfControllerId, err);
#else
        Can_Arc_Error(controller, err);
#endif

        // Clear ERRINT
        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        esrWrite.R = 0uL;
        esrWrite.B.ERRINT = 1u;
        canHw->ESR.R = esrWrite.R;
    }
}

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
/**
 * Cancel pending tx request specified by canUnit->mbTxCancel
 * @param canUnit - Pointer to the unit that represents the controller
 */
static void HandlePendingTxCancel(Can_UnitType *canUnit)
{
    // Null-pointer guard
    if (canUnit == NULL) {
        return; // Ignore NULL arg call
    }

    uint8 mbNr;
    uint64 mbCancelMask;
    flexcan_t *canHw = canUnit->hwPtr;
    PduIdType pduId;
    PduInfoType pduInfo;
    if(canHw == NULL_PTR)
    {
        return;
    }
    
    SchM_Enter_Can_EA_0();
    mbCancelMask = canUnit->mbTxCancel;
    // Loop over mbCancelMask bitmap, until every bit that was set has been cleared
    for( ; mbCancelMask != 0uLL; mbCancelMask &= ~(1uLL << mbNr) ) {
        mbNr = ilog2_64(mbCancelMask);
        canHw->BUF[mbNr].CS.B.CODE = MB_ABORT;
        // Did it take
        if (canHw->BUF[mbNr].CS.B.CODE == MB_ABORT) {
            // Aborted
            // Clear interrupt
            clearMbFlag(canHw,mbNr);
            canUnit->mbTxFree |= (1uLL << mbNr);
            pduId = canUnit->cfgCtrlPtr->Can_Arc_TxPduHandles[mbNr - canUnit->cfgCtrlPtr->Can_Arc_TxMailboxStart];
            pduInfo.SduLength = (PduLengthType)canHw->BUF[mbNr].CS.B.LENGTH;
            pduInfo.SduDataPtr = (uint8*)&canHw->BUF[mbNr].DATA.B[0]; /*lint !e9005 !e926 Pointer must be supplied to upper layer for data copying */
            /** @req 4.0.3/CAN287 *//** @req 4.1.2/SWS_Can_00287 */
            CanIf_CancelTxConfirmation(pduId, &pduInfo); /*lint !e934 Impl of callback function responsible for supplied temporary pointer usage */
        } else {
            /* Did not take. Interrupt will be generated.
             * CancelTxConfirmation will be handled there. */
        }
        canUnit->mbTxCancel &= ~(1uLL<<mbNr);
        canUnit->suppressMbTxCancel &= ~(1uLL<<mbNr);
    }
    SchM_Exit_Can_EA_0();
}
#endif

/**
 * Uses 25.4.5.1 Transmission Abort Mechanism
 * @param canHw - Pointer to hardware controller structure
 * @param canUnit - Pointer to unit representing the controller
 */
static void Can_AbortTx(flexcan_t *canHw, Can_UnitType *canUnit)
{
    uint64 mbMask;
    uint8 mbNr;
    uint32 polls = 0uL;
    uint64 iflags = 0uLL;
    if((canUnit == NULL_PTR) || (canHw == NULL_PTR))
    {
        return;
    }
        
    // Find our Tx boxes.
    mbMask = canUnit->Can_Arc_TxMbMask;
    // Loop over the messageboxes set (to abort) in the mbMask bitmap, until every bit that was set has been cleared
    for (; mbMask != 0uLL; mbMask &= ~(1uLL << mbNr)) {
        mbNr = ilog2_64(mbMask);
        canHw->BUF[mbNr].CS.B.CODE = MB_ABORT;
        // Did it take
        if (canHw->BUF[mbNr].CS.B.CODE != MB_ABORT) {
            /* nope...
             * it's not sent or being sent.
             * Just wait for it...
             */
                polls = 0uL;
                iflags = 0uLL;
            do {
                /*lint -e9005 -e929 -e826 -e740 Intentional read of two adjacent 32-bit HW registers into one 64-bit variable */
                iflags = (canUnit->numMbMax > 32u) ? *((uint64 *)(&canHw->IFRH.R)) : (uint64)canHw->IFRL.R;
                polls++;
            } while (((iflags & (1uLL << mbNr)) != 0uLL) && (polls < 1000u));
        }

        // Clear interrupt
        clearMbFlag(canHw,mbNr);
        canUnit->mbTxFree |= (1uLL << mbNr);
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        canUnit->suppressMbTxCancel |= (1uLL<<mbNr);
        canUnit->mbTxCancel &= ~(1uLL << mbNr);
#endif
    }
}



/**
 * BusOff ISR for CAN
 * @param unit - Hardware controller index
 */
static void Can_BusOff(CanHwUnitIdType hwUnit)
{
    /** @req 4.0.3/CAN033 *//** @req 4.1.2/SWS_Can_00033 */
    uint8 controllerId = HWUNIT_TO_CONTROLLER_ID(hwUnit);
    flexcan_t *canHw = GET_CAN_HW(hwUnit);
    Can_UnitType *canUnit = CTRL_TO_UNIT_PTR(controllerId);
    ESRType esr;

    if((canHw == NULL_PTR) || (canUnit == NULL_PTR))
        { return; }
    // Clear bits 16-21 by read
    esr.R = canHw->ESR.R;

#if (USE_CAN_STATISTICS == STD_ON)
    if (esr.B.TWRNINT) {
        canUnit->stats.txErrorCnt++;
        canHw->ESR.B.TWRNINT = 1u;
    }

    if (esr.B.RWRNINT) {
        canUnit->stats.rxErrorCnt++;
        canHw->ESR.B.RWRNINT = 1u;
    }
#endif

    if (esr.B.BOFFINT != 0u) {
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
        (void)Can_SetControllerMode(controllerId, CAN_T_STOP);

        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        canHw->ESR.B.BOFFINT = 1u;

        Can_AbortTx(canHw, canUnit);/** @req 4.0.3/CAN273 *//** @req 4.1.2/SWS_Can_00273 */

        if (canHw->CR.B.BOFFREC != 0u) {
            canHw->CR.B.BOFFREC = 0u;
            canHw->CR.B.BOFFREC = 1u;
        }
    }
}

/**
 * Transmit ISR for CAN
 * @param uPtr - Pointer to the unit that represents the controller associated with the interrupt
 */
static void Can_Isr_Tx(Can_UnitType *uPtr)
{
    // Null-pointer guard
    /*lint -e{904} ARGUMENT_CHECK */
    if (uPtr == NULL) {
        return; // Ignore NULL arg call
    }

    /** @req 4.0.3/CAN033 *//** @req 4.1.2/SWS_Can_00033 */

    uint8 mbNr;
    flexcan_t *canHw;
    PduIdType pduId;


    canHw = uPtr->hwPtr;
    
    if(canHw == NULL_PTR)
        { return; }

    uint64 mbMask = (uPtr->numMbMax > 32u) ? *(uint64 *) (&canHw->IFRH.R) : (uint64) (canHw->IFRL.R);
    mbMask &= uPtr->Can_Arc_TxMbMask;

    /*
     * Tx
     */
#if defined(CFG_CAN_TEST)
    Can_Test.mbMaskTx |= mbMask;
#endif

    /* Loop over mbMask bitmap, until every bit that was set has been cleared */
    for (; mbMask != 0uLL; mbMask &= ~(1uLL << mbNr)) {
        mbNr = ilog2_64(mbMask);

        pduId = uPtr->cfgCtrlPtr->Can_Arc_TxPduHandles[mbNr - uPtr->cfgCtrlPtr->Can_Arc_TxMailboxStart];
        /** @req 4.1.2/SWS_Can_00276 */
        uPtr->cfgCtrlPtr->Can_Arc_TxPduHandles[mbNr - uPtr->cfgCtrlPtr->Can_Arc_TxMailboxStart] = 0;

        /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
        // Clear interrupt and mark txBox as Free
        clearMbFlag(canHw,mbNr);
        uPtr->mbTxFree |= (1uLL << mbNr);

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        /* Clear pending cancel on this mb */
        uPtr->mbTxCancel &= ~(1uLL<<mbNr);

        if( canHw->BUF[mbNr].CS.B.CODE == MB_ABORT) {
            if( (uPtr->suppressMbTxCancel & (1uLL<<mbNr)) == 0uLL ) {
                /* This was an abort and it should not be suppressed */
                PduInfoType pduInfo;
                pduInfo.SduLength = (PduLengthType)canHw->BUF[mbNr].CS.B.LENGTH;
                pduInfo.SduDataPtr = (uint8*)&canHw->BUF[mbNr].DATA.B[0]; /*lint !e9005 !e926 Pointer must be supplied to upper layer for data copying */
                /** @req 4.0.3/CAN287 */ /** @req 4.1.2/SWS_Can_00287 */
                CanIf_CancelTxConfirmation(pduId, &pduInfo); /*lint !e934 Impl of callback function responsible for supplied temporary pointer usage */
            }
        } else
#endif
        {
            /** @req 4.1.2/SWS_Can_00016 */
            CanIf_TxConfirmation(pduId);
        }
    }
}


/*lint -e818 Argument not a pointer to const in all cases. */
/**
 * Receive ISR for CAN
 * @param uPtr - Pointer to the unit that represents the controller associated with the interrupt
 */
static void Can_Isr_Rx(Can_UnitType *uPtr)
{
    /** @req 4.0.3/CAN033 *//** @req 4.1.2/SWS_Can_00033 */
    uint8 mbNr;
    uint32 id;
    uint32 mask;
    flexcan_t *canHw;
    if(uPtr == NULL_PTR)
        { return; }
    canHw = uPtr->hwPtr;

    if(canHw == NULL_PTR)
        { return; }
    uint64 iFlag = (uPtr->numMbMax > 32) ? (uint64) ((((uint64) canHw->IFRH.R)<<32u)|(canHw->IFRL.R)) : (uint64) (canHw->IFRL.R);

#if defined(CFG_CAN_TEST)
    Can_Test.mbMaskRx |= iFlag & uPtr->Can_Arc_RxMbMask;
#endif

    while ((iFlag & uPtr->Can_Arc_RxMbMask) != 0uLL) {
        /* Find mailbox */
        mbNr = ilog2_64(iFlag & uPtr->Can_Arc_RxMbMask);

        /* Check for FIFO interrupt */
        if ((TRUE == uPtr->fifoEn) && (((uint32)iFlag & (1uL << IFLAG_FIFO_FRAME_AVAIL)) != 0)) {
            /* Check overflow */
            if ((iFlag & (1uLL << IFLAG_FIFO_OVERFLOW)) != 0uLL) {
#if (USE_CAN_STATISTICS == STD_ON)
                uPtr->stats.fifoOverflow++;
#endif
                clearMbFlag(canHw, IFLAG_FIFO_OVERFLOW);
                DET_REPORTERROR(CAN_MODULE_ID,0,0, CAN_E_DATALOST); /** @req 4.0.3/CAN395 *//** @req 4.1.2/SWS_Can_00395 */
            }

#if (USE_CAN_STATISTICS == STD_ON)
            /* Check warning */
            if (iFlag & (1 << IFLAG_FIFO_WARNING)) {
                uPtr->stats.fifoWarning++;
                clearMbFlag(canHw, IFLAG_FIFO_WARNING);
            }
#endif

            /* @req SWS_Can_00012 */
            /* Activate the internal message box lock by doing a control/status word read */
            (void) canHw->BUF[0].CS.R;

            if (canHw->BUF[0].CS.B.IDE != 0) {
                id = canHw->BUF[0].ID.R;
                id |= 0x80000000uL; /** @req 4.0.3/CAN423 *//** @req 4.1.2/SWS_Can_00423 */
            } else {
                id = canHw->BUF[0].ID.B.STD_ID;
            }

            LDEBUG_PRINTF("FIFO_ID=%x  ",(unsigned int)id);

            /* Must now do a manual match to find the right CanHardwareObject
             * to pass to CanIf. We know that the FIFO objects are sorted first.
             */
            /* Match in order */
            /*lint -e954 This pointer points to a table of IDs each element 32-bits wide and
             * the table begins where BUF[6] should have been if not using FIFO. */
            struct FLEXCAN_RXFIFO_t *fifoIdPtr = (struct FLEXCAN_RXFIFO_t *) &canHw->BUF[0];

            for (uint8 fifoNr = 0; fifoNr < uPtr->cfgCtrlPtr->Can_Arc_HohFifoCnt; fifoNr++) {
                mask = uPtr->RXIMR_FifoMasks[fifoNr];
                if ((id & 0x80000000uL) != 0uL) {
                    if ((id & mask) != ((fifoIdPtr->IDTABLE[fifoNr].R >> FIFO_IDTAB_EXT_POS) & mask)) {
                        continue;
                    }
                } else {
                    if ((id & mask) != ((fifoIdPtr->IDTABLE[fifoNr].R >> FIFO_IDTAB_STD_POS) & mask)) {
                        continue;
                    }
                }

                /** @req 4.0.3/CAN279 *//** @req 4.1.2/SWS_Can_00279 */
                /** @req 4.1.2/SWS_Can_00060 *//* Is according to definition */
                CanIf_RxIndication(uPtr->cfgCtrlPtr->Can_Arc_MailBoxToSymbolicHrh[fifoNr],
                        id,
                        (uint8)canHw->BUF[0].CS.B.LENGTH,
                        (const uint8 *) &canHw->BUF[0].DATA.B[0]); /*lint !e926 Pointer must be supplied to upper layer for data copying */
                break;
            }

            /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
            // Clear the interrupt
            clearMbFlag(canHw, IFLAG_FIFO_FRAME_AVAIL);

            if( canHw->IFRL.B.BUF05I == 0u ) {
                iFlag ^= 1uLL << IFLAG_FIFO_FRAME_AVAIL; //FIXED!
            }

            /* unlock MB (dummy read timer) */
            (void) canHw->TIMER.R; //FIXED!

        } else {
            /* Not FIFO */
            iFlag ^= 1uLL << mbNr;

            /* @req SWS_Can_00012 */
            /* Activate the internal message box lock by doing a control/status word read */
            (void) canHw->BUF[mbNr].CS.R;

            if (canHw->BUF[mbNr].CS.B.IDE != 0u) {
                id = canHw->BUF[mbNr].ID.R;
                id |= 0x80000000uL; /** @req 4.0.3/CAN423 */
            } else {
                id = canHw->BUF[mbNr].ID.B.STD_ID;
            }

            LDEBUG_PRINTF("ID=%x  ",(unsigned int)id);

#if defined(USE_DET)
            if( canHw->BUF[mbNr].CS.B.CODE == MB_RX_OVERRUN ) {
                /* We have overwritten one frame */
                DET_REPORTERROR(CAN_MODULE_ID,0,0,CAN_E_DATALOST); /** @req 4.0.3/CAN395 *//** @req 4.1.2/SWS_Can_00395 */
            }
#endif

            /** @req 4.1.2/SWS_Can_00396 */
            /** @req 4.0.3/CAN279 *//** @req 4.1.2/SWS_Can_00279 */
            /** @req 4.1.2/SWS_Can_00427 *//* Buffer is according to AUTOSAR definition */
            CanIf_RxIndication(uPtr->cfgCtrlPtr->Can_Arc_MailBoxToSymbolicHrh[mbNr], id,
                    (uint8)canHw->BUF[mbNr].CS.B.LENGTH,
                    (const uint8 *) &canHw->BUF[mbNr].DATA.B[0]); /*lint !e926 Pointer must be supplied to upper layer for data copying */
#if (USE_CAN_STATISTICS == STD_ON)
            uPtr->stats.rxSuccessCnt++;
#endif
            /** @req 4.0.3/CAN420 *//** @req 4.1.2/SWS_Can_00420 */
            // Clear interrupt
            clearMbFlag(canHw, mbNr);
            
            /* unlock MB (dummy read timer) */
            (void) canHw->TIMER.R;
        }
    }
}


/**
 * ISR for CAN. Handles both RX and TX.
 * @param hwUnit - Hardware controller index associated with the interrupt
 */
static void Can_Isr(CanHwUnitIdType hwUnit )
{
    Can_UnitType *uPtr = CTRL_TO_UNIT_PTR(HWUNIT_TO_CONTROLLER_ID(hwUnit));

    
    if(uPtr == NULL_PTR)
        { return; }
    
    if((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_TX_PROCESSING_INTERRUPT) != 0uL ){
        Can_Isr_Tx(uPtr);
    }

    if((uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_RX_PROCESSING_INTERRUPT) != 0uL ){
        Can_Isr_Rx(uPtr);
    }
}

#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)   /*lint -e961 */

/**
 * @brief     Function that installs the hardware units specific interrupts
 *            according to the configured controllers
 * @details   This API is used to install the interrupts.
 * @param[in] hwUnit   Associated hardware controller index
 * @param[in] ArcFlags Enabled features flag mask
 * @return    none
 */

#if defined(CFG_MPC5777C)
static void installControllerInterrupts(CanHwUnitIdType hwUnit, uint32 ArcFlags)
{
    switch (hwUnit)
    {
        #if USE_CAN_CTRL_A == STD_ON
        case CAN_CTRL_A:
            if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL)
            {
                ISR_INSTALL_ISR2( "Can", Can_A_BusOff, (uint16)CANA_ESR1_BOFF_INT_TWRNINT_RWRNINT, 2, CAN_ARC_ISR_APP);
            }
            if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL)
            {
                ISR_INSTALL_ISR2( "Can", Can_A_Err, (uint16)CANA_ERROR,\
                                         2, CAN_ARC_ISR_APP );
            }
            if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL)
            {
                /*lint -esym(9036, ISR_INSTALL_ISR2) MISRA:OTHER:Since each buffer has it own interrupt address defined as iteration:
                                   [MISRA 2012 Rule 14.4, required] */
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF0, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF1, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF2, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF3, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF4, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF5, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF6, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF7, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF8, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF9, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF10, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF11, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF12, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF13, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF14, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF15, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRL_BUF31_16, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)CANA_IFRH_BUF63_32, 2, CAN_ARC_ISR_APP );
            }
        break;
        #endif

        #if USE_CAN_CTRL_B == STD_ON
        case CAN_CTRL_B:
            if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL)
            {
                ISR_INSTALL_ISR2( "Can", Can_B_BusOff, (uint16)CANB_ESR1_BOFF_INT_TWRNINT_RWRNINT, 2, CAN_ARC_ISR_APP);
            }
            if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL)
            {
                ISR_INSTALL_ISR2( "Can", Can_B_Err, (uint16)CANB_ERROR,\
                                         2, CAN_ARC_ISR_APP );
            }
            if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL)
            {
                /*lint -esym(9036, ISR_INSTALL_ISR2) MISRA:OTHER:Since each buffer has it own interrupt address defined as iteration:
                                   * [MISRA 2012 Rule 14.4, required] */
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF0, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF1, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF2, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF3, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF4, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF5, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF6, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF7, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF8, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF9, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF10, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF11, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF12, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF13, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF14, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF15, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRL_BUF31_16, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)CANB_IFRH_BUF63_32, 2, CAN_ARC_ISR_APP );
            }
        break;
        #endif

        #if USE_CAN_CTRL_C == STD_ON
        case CAN_CTRL_C:
            if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL)
            {
                ISR_INSTALL_ISR2( "Can", Can_C_BusOff, (uint16)CANC_ESR1_BOFF_INT_TWRNINT_RWRNINT, 2, CAN_ARC_ISR_APP);
            }
            if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL)
            {
                ISR_INSTALL_ISR2( "Can", Can_C_Err, (uint16)CANC_ERROR,\
                                         2, CAN_ARC_ISR_APP );
            }
            if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL)
            {
                /*lint -esym(9036, ISR_INSTALL_ISR2) MISRA:OTHER:Since each buffer has it own interrupt address defined as iteration:
                                   * [MISRA 2012 Rule 14.4, required] */
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF0, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF1, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF2, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF3, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF4, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF5, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF6, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF7, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF8, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF9, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF10, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF11, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF12, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF13, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF14, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF15, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRL_BUF31_16, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)CANC_IFRH_BUF63_32, 2, CAN_ARC_ISR_APP );
            }
        break;
        #endif

        #if USE_CAN_CTRL_D == STD_ON
        case CAN_CTRL_D:
            if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL)
            {
                ISR_INSTALL_ISR2( "Can", Can_D_BusOff, (uint16)CAND_ESR1_BOFF_INT_TWRNINT_RWRNINT, 2, CAN_ARC_ISR_APP);
            }
            if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL)
            {
                ISR_INSTALL_ISR2( "Can", Can_D_Err, (uint16)CAND_ERROR,\
                                         2, CAN_ARC_ISR_APP );
            }
            if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL)
            {
                /*lint -esym(9036, ISR_INSTALL_ISR2) MISRA:OTHER:Since each buffer has it own interrupt address defined as iteration:
                                   * [MISRA 2012 Rule 14.4, required] */
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF0, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF1, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF2, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF3, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF4, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF5, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF6, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF7, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF8, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF9, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF10, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF11, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF12, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF13, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF14, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF15, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRL_BUF31_16, 2, CAN_ARC_ISR_APP );
                ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)CAND_IFRH_BUF63_32, 2, CAN_ARC_ISR_APP );
            }
        break;
        #endif
    }

}
#else
static void installControllerInterrupts(CanHwUnitIdType hwUnit, uint32 ArcFlags)
{
    switch (hwUnit) {
#if defined(CFG_MPC560X) || defined(CFG_MPC5744P) || defined(CFG_MPC5748G) || defined(CFG_MPC5643L) || defined(CFG_SPC56XL70) || defined(CFG_MPC5645S) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C) || defined(CFG_MPC5646B)

#   if USE_CAN_CTRL_A == STD_ON
    case CAN_CTRL_A:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_A_BusOff, (uint16)FLEXCAN_0_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);

        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_A_Err, (uint16)FLEXCAN_0_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            /*lint -e{9036} OTHER to increase readability */
            INSTALL_HANDLER4( "Can", Can_A_Isr, (uint16)FLEXCAN_0_BUF_00_03, 2, CAN_ARC_ISR_APP ); /* 0-3, 4-7, 8-11, 12-15 */
            ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)FLEXCAN_0_BUF_16_31, 2, CAN_ARC_ISR_APP );
#if defined(CFG_MPC5744P)
            INSTALL_HANDLER4( "Can", Can_A_Isr, (uint16)FLEXCAN_0_BUF_32_39, 2, CAN_ARC_ISR_APP ); /* 32-39, 40-47, 48-55, 56-63 */
#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C)|| defined(CFG_MPC5746C)
            ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)FLEXCAN_0_BUF_32_63, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)FLEXCAN_0_BUF_64_95, 2, CAN_ARC_ISR_APP );
#elif !defined (CFG_MPC5604P) && !defined(CFG_MPC5643L) && !defined(CFG_SPC56XL70)
            ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)FLEXCAN_0_BUF_32_63, 2, CAN_ARC_ISR_APP );
#endif
        }
        break;
#   endif

#   if USE_CAN_CTRL_B == STD_ON
    case CAN_CTRL_B:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_B_BusOff, (uint16)FLEXCAN_1_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_B_Err, (uint16)FLEXCAN_1_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            /*lint -e{9036} OTHER to increase readability */
            INSTALL_HANDLER4( "Can", Can_B_Isr, (uint16)FLEXCAN_1_BUF_00_03, 2, CAN_ARC_ISR_APP ); /* 0-3, 4-7, 8-11, 12-15 */
            ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)FLEXCAN_1_BUF_16_31, 2, CAN_ARC_ISR_APP );
#if defined(CFG_MPC5744P)
            INSTALL_HANDLER4( "Can", Can_B_Isr, (uint16)FLEXCAN_1_BUF_32_39, 2, CAN_ARC_ISR_APP ); /* 32-39, 40-47, 48-55, 56-63 */
#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C)|| defined(CFG_MPC5746C)
            ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)FLEXCAN_1_BUF_32_63, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)FLEXCAN_1_BUF_64_95, 2, CAN_ARC_ISR_APP );
#elif !defined (CFG_MPC5604P) && !defined(CFG_MPC5643L) && !defined(CFG_SPC56XL70)
            ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)FLEXCAN_1_BUF_32_63, 2, CAN_ARC_ISR_APP );
#endif
        }
        break;
#   endif

#if !defined(CFG_MPC5643L)
#   if USE_CAN_CTRL_C == STD_ON
    case CAN_CTRL_C:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_C_BusOff, (uint16)FLEXCAN_2_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_C_Err, (uint16)FLEXCAN_2_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER4( "Can", Can_C_Isr, (uint16)FLEXCAN_2_BUF_00_03, 2, CAN_ARC_ISR_APP ); /* 0-3, 4-7, 8-11, 12-15 */
            ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)FLEXCAN_2_BUF_16_31, 2, CAN_ARC_ISR_APP );
#if defined(CFG_MPC5744P)
            INSTALL_HANDLER4( "Can", Can_C_Isr, (uint16)FLEXCAN_2_BUF_32_39, 2, CAN_ARC_ISR_APP ); /* 32-39, 40-47, 48-55, 56-63 */
#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
            ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)FLEXCAN_2_BUF_32_63, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)FLEXCAN_2_BUF_64_95, 2, CAN_ARC_ISR_APP );
#elif !defined(CFG_SPC56XL70)
            ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)FLEXCAN_2_BUF_32_63, 2, CAN_ARC_ISR_APP );
#endif
        }
        break;
#endif
#   endif


#   if defined(CFG_MPC560XB) || defined(CFG_MPC5744P) || defined(CFG_MPC5645S) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C) || defined(CFG_MPC5646B)
#if USE_CAN_CTRL_D == STD_ON
    case CAN_CTRL_D:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_D_BusOff, (uint16)FLEXCAN_3_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_D_Err, (uint16)FLEXCAN_3_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER4( "Can", Can_D_Isr, (uint16)FLEXCAN_3_BUF_00_03, 2, CAN_ARC_ISR_APP ); /* 0-3, 4-7, 8-11, 12-15 */
            ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)FLEXCAN_3_BUF_16_31, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)FLEXCAN_3_BUF_32_63, 2, CAN_ARC_ISR_APP );
#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
            ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)FLEXCAN_3_BUF_64_95, 2, CAN_ARC_ISR_APP );
#endif
        }
        break;
#   endif

#if USE_CAN_CTRL_E == STD_ON
    case CAN_CTRL_E:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_E_BusOff, (uint16)FLEXCAN_4_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_E_Err, (uint16)FLEXCAN_4_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER4( "Can", Can_E_Isr, (uint16)FLEXCAN_4_BUF_00_03, 2, CAN_ARC_ISR_APP ); /* 0-3, 4-7, 8-11, 12-15 */
            ISR_INSTALL_ISR2( "Can", Can_E_Isr, (uint16)FLEXCAN_4_BUF_16_31, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_E_Isr, (uint16)FLEXCAN_4_BUF_32_63, 2, CAN_ARC_ISR_APP );
#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
            ISR_INSTALL_ISR2( "Can", Can_E_Isr, (uint16)FLEXCAN_4_BUF_64_95, 2, CAN_ARC_ISR_APP );
#endif
        }
        break;
#endif

#if USE_CAN_CTRL_F == STD_ON
    case CAN_CTRL_F:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_F_BusOff, (uint16)FLEXCAN_5_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_F_Err, (uint16)FLEXCAN_5_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER4( "Can", Can_F_Isr, (uint16)FLEXCAN_5_BUF_00_03, 2, CAN_ARC_ISR_APP ); /* 0-3, 4-7, 8-11, 12-15 */
            ISR_INSTALL_ISR2( "Can", Can_F_Isr, (uint16)FLEXCAN_5_BUF_16_31, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_F_Isr, (uint16)FLEXCAN_5_BUF_32_63, 2, CAN_ARC_ISR_APP );
#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
            ISR_INSTALL_ISR2( "Can", Can_F_Isr, (uint16)FLEXCAN_5_BUF_64_95, 2, CAN_ARC_ISR_APP );
#endif
        }
        break;
#endif

#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
#if USE_CAN_CTRL_G == STD_ON
    case CAN_CTRL_G:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_G_BusOff, (uint16)FLEXCAN_6_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_G_Err, (uint16)FLEXCAN_6_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER4( "Can", Can_G_Isr, (uint16)FLEXCAN_6_BUF_00_03, 2, CAN_ARC_ISR_APP ); /* 0-3, 4-7, 8-11, 12-15 */
            ISR_INSTALL_ISR2( "Can", Can_G_Isr, (uint16)FLEXCAN_6_BUF_16_31, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_G_Isr, (uint16)FLEXCAN_6_BUF_32_63, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_G_Isr, (uint16)FLEXCAN_6_BUF_64_95, 2, CAN_ARC_ISR_APP );
        }
        break;
#endif
#if USE_CAN_CTRL_H== STD_ON
    case CAN_CTRL_H:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_H_BusOff, (uint16)FLEXCAN_7_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_H_Err, (uint16)FLEXCAN_7_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER4( "Can", Can_H_Isr, (uint16)FLEXCAN_7_BUF_00_03, 2, CAN_ARC_ISR_APP ); /* 0-3, 4-7, 8-11, 12-15 */
            ISR_INSTALL_ISR2( "Can", Can_H_Isr, (uint16)FLEXCAN_7_BUF_16_31, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_H_Isr, (uint16)FLEXCAN_7_BUF_32_63, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_H_Isr, (uint16)FLEXCAN_7_BUF_64_95, 2, CAN_ARC_ISR_APP );
        }
        break;
#endif
#endif /* defined(CFG_MPC5748G) */
#endif
#elif defined(CFG_MPC5516) || defined(CFG_MPC5517) || defined(CFG_MPC5567) || defined(CFG_MPC5668) || defined(CFG_MPC563XM) || defined(CFG_MPC5644A)
#if USE_CAN_CTRL_A == STD_ON
    case CAN_CTRL_A:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_A_BusOff, (uint16)FLEXCAN_A_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP);
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_A_Err, (uint16)FLEXCAN_A_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER16( "Can", Can_A_Isr, (uint16)FLEXCAN_A_IFLAG1_BUF0I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)FLEXCAN_A_IFLAG1_BUF31_16I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_A_Isr, (uint16)FLEXCAN_A_IFLAG1_BUF63_32I, 2, CAN_ARC_ISR_APP );
        }
        break;
#endif
#if USE_CAN_CTRL_B == STD_ON
    case CAN_CTRL_B:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_B_BusOff, (uint16)FLEXCAN_B_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_B_Err, (uint16)FLEXCAN_B_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER16( "Can", Can_B_Isr, (uint16)FLEXCAN_B_IFLAG1_BUF0I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)FLEXCAN_B_IFLAG1_BUF31_16I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_B_Isr, (uint16)FLEXCAN_B_IFLAG1_BUF63_32I, 2, CAN_ARC_ISR_APP );
        }
        break;
#endif
#if USE_CAN_CTRL_C == STD_ON
    case CAN_CTRL_C:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_C_BusOff, (uint16)FLEXCAN_C_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_C_Err, (uint16)FLEXCAN_C_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER16( "Can", Can_C_Isr, (uint16)FLEXCAN_C_IFLAG1_BUF0I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)FLEXCAN_C_IFLAG1_BUF31_16I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_C_Isr, (uint16)FLEXCAN_C_IFLAG1_BUF63_32I, 2, CAN_ARC_ISR_APP );
        }
        break;
#endif
#if USE_CAN_CTRL_D == STD_ON
    case CAN_CTRL_D:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_D_BusOff, (uint16)FLEXCAN_D_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_D_Err, (uint16)FLEXCAN_D_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER16( "Can", Can_D_Isr, (uint16)FLEXCAN_D_IFLAG1_BUF0I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)FLEXCAN_D_IFLAG1_BUF31_16I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_D_Isr, (uint16)FLEXCAN_D_IFLAG1_BUF63_32I, 2, CAN_ARC_ISR_APP );
        }
        break;
#endif
#if USE_CAN_CTRL_E == STD_ON
    case CAN_CTRL_E:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_E_BusOff, (uint16)FLEXCAN_E_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_E_Err, (uint16)FLEXCAN_E_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER16( "Can", Can_E_Isr, (uint16)FLEXCAN_E_IFLAG1_BUF0I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_E_Isr, (uint16)FLEXCAN_E_IFLAG1_BUF31_16I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_E_Isr, (uint16)FLEXCAN_E_IFLAG1_BUF63_32I, 2, CAN_ARC_ISR_APP );
        }
        break;
#endif
#if defined(CFG_MPC5516) || defined(CFG_MPC5517) || defined(CFG_MPC5668)
#if USE_CAN_CTRL_F == STD_ON
    case CAN_CTRL_F:
        if((ArcFlags &  CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_F_BusOff, (uint16)FLEXCAN_F_ESR_BOFF_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  CAN_CTRL_ERROR_PROCESSING_INTERRUPT) != 0uL){
            ISR_INSTALL_ISR2( "Can", Can_F_Err, (uint16)FLEXCAN_F_ESR_ERR_INT, 2, CAN_ARC_ISR_APP );
        }
        if((ArcFlags &  (CAN_CTRL_TX_PROCESSING_INTERRUPT | CAN_CTRL_RX_PROCESSING_INTERRUPT)) != 0uL){
            INSTALL_HANDLER16( "Can", Can_F_Isr, (uint16)FLEXCAN_F_IFLAG1_BUF0I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_F_Isr, (uint16)FLEXCAN_F_IFLAG1_BUF31_16I, 2, CAN_ARC_ISR_APP );
            ISR_INSTALL_ISR2( "Can", Can_F_Isr, (uint16)FLEXCAN_F_IFLAG1_BUF63_32I, 2, CAN_ARC_ISR_APP );
        }
        break;
#endif
#endif
#endif
    default:
        ASSERT(0);
        break;
    }

}
#endif
#endif

/**
 * Setup message boxes for a controller
 * @param canUnit - Pointer to the unit that represents the controller
 */
static void setupMessageboxes(Can_UnitType *canUnit) {

    // Null-pointer guards
    // IMPROVEMENT: Add DET errors for these assertions
    /*lint -e{904} ARGUMENT_CHECK */
    if ((canUnit == NULL) || (canUnit->hwPtr == NULL) || (canUnit->cfgCtrlPtr == NULL) || (canUnit->cfgCtrlPtr->Can_Arc_Hoh == NULL)) {
        return; // Ignore NULL arg call
    }

    flexcan_t *canHw = canUnit->hwPtr;
    const Can_ControllerConfigType *config = canUnit->cfgCtrlPtr;
    uint8 fifoNr = 0u;
    const Can_HardwareObjectType *hohPtr = config->Can_Arc_Hoh;
    struct FLEXCAN_RXFIFO_t *fifoIdPtr = (struct FLEXCAN_RXFIFO_t *)&canHw->BUF[0];

    if ( (config->Can_Arc_Flags & CAN_CTRL_FIFO) != 0) {
        /*lint -e(928) -e(639) Clearing the complete MB structure */
        memset((void*)&canHw->BUF[BUF_USED_BY_FIFO], 0u, (size_t)(sizeof(struct canbuf_t) * (config->Can_Arc_MailboxMax-BUF_USED_BY_FIFO)));
        for(uint16 i=0u; i < 8u;i++) {
            canHw->RXIMR[i].R = 0xffffffffuL;
            canUnit->RXIMR_FifoMasks[i] = 0xffffffffuL;
            fifoIdPtr->IDTABLE[i].R = 0x0;
        }
    }else{
        /*lint -e(928) -e(639) Clearing the complete MB structure */
        memset((void*)&canHw->BUF[0], 0u, (size_t)(sizeof(struct canbuf_t) * config->Can_Arc_MailboxMax));
    }

    /* The HOHs are sorted by FIFO(FULL_CAN), FIFO(BASIC_CAN),
     * FULL_CAN(no FIFO) and last BASIC_CAN(no FIFO) */
    /*lint -e9008 -e9049 Looping over index variable and its corresponding object pointer */
    for(uint16 i=0u; i < config->Can_Arc_HohCnt; i++,hohPtr++) {
        if( ( hohPtr->CanObjectType != CAN_OBJECT_TYPE_RECEIVE) ) {
            continue;
        }

        /* Assign FIFO first it will search for match first there (its the first MBs) */
        if( fifoNr < config->Can_Arc_HohFifoCnt ) {
            /* IMPROVEMENT : Set IDAM */

            /* Set the ID */
            if (hohPtr->CanIdType == CAN_ID_TYPE_EXTENDED) {
                fifoIdPtr->IDTABLE[fifoNr].R =  ((hohPtr->CanHwFilterCode << FIFO_IDTAB_EXT_POS) | FIFO_IDTAB_EXT_FLAG) ;
                canHw->RXIMR[fifoNr].R = hohPtr->CanHwFilterMask << FIFO_IDTAB_EXT_POS;
            } else {
                fifoIdPtr->IDTABLE[fifoNr].R =  (hohPtr->CanHwFilterCode << FIFO_IDTAB_STD_POS) ;
                canHw->RXIMR[fifoNr].R = hohPtr->CanHwFilterMask << FIFO_IDTAB_STD_POS;
            }

            /* The Mask (we have FULL_CAN here) */
            canUnit->RXIMR_FifoMasks[fifoNr] = hohPtr->CanHwFilterMask;
            fifoNr++;
        } else {
            /* loop for multiplexed mailboxes, set as same as first */
            uint64  mbMask = hohPtr->ArcMailboxMask;
            uint8   mbTmp;
            /* Loop over mbMask bitmap, until every bit that was set has been cleared */
            for (; mbMask != 0uLL; mbMask &= ~(1uLL << mbTmp)) {
                mbTmp = ilog2_64(mbMask);

                canHw->BUF[mbTmp].CS.B.CODE  = MB_RX;

                if (hohPtr->CanIdType == CAN_ID_TYPE_EXTENDED) {
                    canHw->BUF[mbTmp].CS.B.IDE    = 1u;
                    canHw->BUF[mbTmp].ID.R        = hohPtr->CanHwFilterCode;
                    canHw->RXIMR[mbTmp].R        = hohPtr->CanHwFilterMask;
                } else {
                    canHw->BUF[mbTmp].CS.B.IDE    = 0u;
                    canHw->BUF[mbTmp].ID.B.STD_ID = hohPtr->CanHwFilterCode;
                    canHw->RXIMR[mbTmp].R        = (hohPtr->CanHwFilterMask<<STD_ID_POS_IN_EXT_ID);
                }
            }
        }
    }
}

//-------------------------------------------------------------------


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
    ESRType esr;

    /** @req 4.0.3/CAN104 *//** @req 4.1.2/SWS_Can_00104 */
    /** @req 4.0.3/CAN174 *//** @req 4.1.2/SWS_Can_00174 */
    /*lint -save -e904 ARGUMENT_CHECK */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_UNINIT), CAN_INIT_SERVICE_ID, CAN_E_TRANSITION );
    /** @req 4.0.3/CAN175 *//** @req 4.1.2/SWS_Can_00175 */
    VALIDATE_NO_RV( (Config != NULL ), CAN_INIT_SERVICE_ID, CAN_E_PARAM_POINTER );
    /*lint -restore*/

    // Save config
    Can_Global.config = Config;

    /** !req 4.1.2/SWS_Can_00246 *//* Should be done after initializing all controllers */
    /* Improvement: Modify Can_ChangeBaudrate so it calls another function, modifyBaudrate,
     * which does not require the Can module to be in state CAN_READY and thus can be called before it is. */
    Can_Global.initRun = CAN_READY;

    /** @req 4.1.2/SWS_Can_00245 */
    for (uint8 controllerId = 0u; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++) {
        const Can_ControllerConfigType *cfgCtrlPtr  = &Can_Global.config->CanConfigSetPtr->CanController[controllerId];

        unitPtr = CTRL_TO_UNIT_PTR(controllerId);

        memset(unitPtr, 0u, sizeof(Can_UnitType));

        unitPtr->hwPtr = GET_CAN_HW(cfgCtrlPtr->CanHwUnitId);
        unitPtr->numMbMax = cfgCtrlPtr->Can_Arc_NumMsgBox;
        if(unitPtr->hwPtr->MCR.B.NOTRDY != 1u) {
            // reset controller if controller started when init called
            unitPtr->hwPtr->MCR.B.SOFTRST = 1u;
            // wait for reset done
            while(unitPtr->hwPtr->MCR.B.SOFTRST == 1u){}
        }

        /* Error status register, clear all old errors or pending interrupts */
        esr.R = unitPtr->hwPtr->ESR.R; // Clear bits 16-21 by read
        esr.R = 0uL;
        esr.B.ERRINT = 1u;
        esr.B.BOFFINT = 1u;
        esr.B.TWRNINT = 1u;
        esr.B.RWRNINT = 1u;
        unitPtr->hwPtr->ESR.R = esr.R;

        unitPtr->cfgCtrlPtr = cfgCtrlPtr;
        /** @req 4.0.3/CAN259 *//** @req 4.1.2/SWS_Can_00259 */
        unitPtr->state = CANIF_CS_STOPPED;
        unitPtr->cfgHohPtr = cfgCtrlPtr->Can_Arc_Hoh;

        unitPtr->Can_Arc_RxMbMask = cfgCtrlPtr->Can_Arc_RxMailBoxMask;
        unitPtr->Can_Arc_TxMbMask = cfgCtrlPtr->Can_Arc_TxMailBoxMask;

        unitPtr->pendingStateIndication = CAN_CTRL_INDICATION_NONE;

        /* Install the interrupts used */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS)
        installControllerInterrupts(cfgCtrlPtr->CanHwUnitId, cfgCtrlPtr->Can_Arc_Flags);
#endif
    }
    // Now init controllers and set set their baudrates
    for (uint8 controllerId = 0u; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++) {
        unitPtr = CTRL_TO_UNIT_PTR(controllerId);
#if defined(CFG_MPC5744P) || defined(CFG_MPC5777C)
        // init buffer RAM. Needed to get rid if ECC errors for hw with that kind of support
        /* Reset the memory in offset address range 0x80 to 0xADF which uses ECC (RAM region).
         * Care should be taken that we do not attempt write to reserved areas or non-writeable registers.
         * This includes MB, RXIMRs, RXMGMASK (offset RAM location 0x0AA0), RXFGMASK (offset RAM location 0x0AA4),
         * RX14MASK (offset RAM location 0x0AA8) & RX15MASK (offset RAM location 0x0AAC). For offset RAM location
         * refer CAN_ERRIAR. RXMGMASK, RXFGMASK, RX14MASK & RX15MASK are not accessible by driver hence ignored.
         * Without clearing these regions access of memory leads to ECC faults (both correctable & non-correctable)
         * as parity bits are not set.
         */
        unitPtr->hwPtr->CTRL2.B.WRMFRZ = 1u;
        memset((uint8*)(unitPtr->hwPtr) + MB_RAM_START, 0, MB_RAM_LENGTH);
        memset((uint8*)(unitPtr->hwPtr) + RXIMR_RAM_START, 0, RXIMR_RAM_LENGTH);
#endif

        (void)Can_ChangeBaudrate(controllerId, unitPtr->cfgCtrlPtr->CanControllerDefaultBaudrate);
    }
}

void Can_Arc_DeInit(void)
{
    Can_UnitType *canUnit;
    /*lint -e{904} ARGUMENT_CHECK */
    if (CAN_UNINIT == Can_Global.initRun) {
        return;
    }

    for (uint8 controllerId = 0u; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++) {
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

Std_ReturnType Can_CheckBaudrate(uint8 Controller, const uint16 Baudrate)
{
    /** @req 4.0.3/CAN454 *//** @req 4.1.2/SWS_Can_00454 *//* API */

    // Checks that the target baudrate is found among the configured
    // baudrates for this controller.

    Can_UnitType *canUnit;
    const Can_ControllerConfigType *config;
    boolean supportedBR;

    /** @req 4.0.3/CAN456 *//** @req 4.1.2/SWS_Can_00456 *//* UNINIT  */
    /*lint -save -e904 ARGUMENT_CHECK */
    VALIDATE( (Can_Global.initRun == CAN_READY), CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN457 *//** @req 4.1.2/SWS_Can_00457 *//* Invalid controller */
    VALIDATE( VALID_CONTROLLER(Controller) , CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_CONTROLLER );

    /** @req 4.0.3/CAN458 *//** @req 4.1.2/SWS_Can_00458 *//* Invalid baudrate value */
    VALIDATE( Baudrate <= 1000u, CAN_CHECK_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_BAUDRATE );
    /*lint -restore*/

    canUnit = CTRL_TO_UNIT_PTR(Controller);
    config = canUnit->cfgCtrlPtr;

    // Find the baudrate config for the target baudrate
    supportedBR = FALSE;
    for(uint32 i=0u; i < config->CanControllerSupportedBaudratesCount; i++)
    {
        if (config->CanControllerSupportedBaudrates[i].CanControllerBaudRate == Baudrate)
        {
            supportedBR = TRUE;
        }
    }

    return (TRUE == supportedBR) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_ChangeBaudrate(uint8 Controller, const uint16 Baudrate)
{
    /** @req 4.0.3/CAN449 *//** @req 4.1.2/SWS_Can_00449 */

    flexcan_t *canHw;
    uint8 tq;
    uint8 tq1;
    uint8 tq2;
    uint8 propseg;
    uint8 pseg1;
    uint8 pseg2;
    uint8 rjw;
    uint32 clock;
    uint32 baudrate;
    uint32 sClock;
    uint32 divider;
    Can_UnitType *canUnit;
    const Can_ControllerConfigType *config;
    const Can_ControllerBaudrateConfigType *baudratePtr;


    /** @req 4.0.3/CAN450 *//** @req 4.1.2/SWS_Can_00450 */
    /*lint -save -e904 ARGUMENT_CHECK */
    VALIDATE( (Can_Global.initRun == CAN_READY), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN452 *//** @req 4.1.2/SWS_Can_00452 */
    VALIDATE( VALID_CONTROLLER(Controller) , CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_CONTROLLER );

    /** @req 4.0.3/CAN451 *//** @req 4.1.2/SWS_Can_00451 */
    VALIDATE(Can_CheckBaudrate(Controller, Baudrate) == E_OK, CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_PARAM_BAUDRATE);
    /*lint -restore*/
    canUnit = CTRL_TO_UNIT_PTR(Controller);

    /** @req 4.0.3/CAN453 *//** @req 4.1.2/SWS_Can_00453 */
    /*lint -e{904} ARGUMENT_CHECK */
    VALIDATE( (canUnit->state==CANIF_CS_STOPPED), CAN_CHANGE_BAUD_RATE_SERVICE_ID, CAN_E_TRANSITION );


    canHw = canUnit->hwPtr;
    config = canUnit->cfgCtrlPtr;

    // Find the baudrate config for the target baudrate
    baudratePtr = NULL;
    for(uint32 i=0u; i < config->CanControllerSupportedBaudratesCount; i++) {
        if (config->CanControllerSupportedBaudrates[i].CanControllerBaudRate == Baudrate) {
            baudratePtr = &config->CanControllerSupportedBaudrates[0];
        }
    }
    // Catch NULL-pointer when no DET is available
    /*lint -e{904} ARGUMENT_CHECK */
    if (baudratePtr == NULL) {
        return E_NOT_OK; // Baudrate not found
    }

    baudrate = baudratePtr->CanControllerBaudRate;

    // Catch zero clock divisor
    /*lint -e{904} ARGUMENT_CHECK To increase readability */
    if (baudrate == 0) {
        return E_NOT_OK; // Baudrate incorrect
    }

    // Convert segment times to register format (register value 0 = logical value 1 time quanta)
    propseg = baudratePtr->CanControllerPropSeg - 1;
    pseg1   = baudratePtr->CanControllerSeg1 - 1;
    pseg2   = baudratePtr->CanControllerSeg2 - 1;
    rjw     = baudratePtr->CanControllerSyncJumpWidth - 1;

    /* Re-initialize the CAN controller and the controller specific settings. */
    /** @req 4.0.3/CAN062*//** @req 4.1.2/SWS_Can_00062 */
    /* Only affect register areas that contain specific configuration for a single CAN controller. */
    /** @req 4.0.3/CAN255 *//** @req 4.1.2/SWS_Can_00255 */

    // Start this baby up
    canHw->MCR.B.MDIS = 0;

    // Wait for it to reset
    if (!SIMULATOR()) {
        // Freeze to write all mem mapped registers ( see 25.4.8.1 )
        canHw->MCR.B.FRZ = 1;
        /** @req 4.0.3/CAN422 *//** @req 4.1.2/SWS_Can_00422 */
        canHw->MCR.B.HALT = 1;
        // wait for freeze ack
        while(canHw->MCR.B.FRZACK == 0) {}
    }

    if( (config->Can_Arc_Flags & CAN_CTRL_FIFO) != 0) {
        canHw->MCR.B.FEN = 1;       /*  Enable FIFO */
        canUnit->fifoEn = TRUE;
        canHw->MCR.B.IDAM = 0;      /* We want extended id's to match with */
    }
    else {
        canUnit->fifoEn = FALSE;
    }
    canHw->MCR.B.SUPV = 0;     /* Allow user mode access */
    canHw->MCR.B.BCC = 1;               /* Enable all nice features */

    /* Set CAN engine clock source */
    if( TRUE == config->Can_Arc_ClockSrcOsc ) {
        canHw->CR.B.CLKSRC = 0;
    } else {
        /* This bit can only be set when the clock is disabled */
        canHw->MCR.B.MDIS = 1;
        while (canHw->MCR.B.LPMACK == 0) {

        }
        canHw->CR.B.CLKSRC = 1;
        canHw->MCR.B.MDIS = 0;
    }

    canHw->MCR.B.MAXMB = (config->Can_Arc_MailboxMax - 1u);

    /* Disable self-reception, if not loopback  */
    canHw->MCR.B.SRXDIS = ((config->Can_Arc_Flags & CAN_CTRL_LOOPBACK) != 0) ? 0u : 1u;

#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
    canHw->MCR.B.AEN = 1;
#endif

    /* Clock calucation
     * -------------------------------------------------------------------
     *
     * * 1 TQ = Sclk period( also called SCK )
     * * Ftq = Fcanclk / ( PRESDIV + 1 ) = Sclk
     *   ( Fcanclk can come from crystal or from the peripheral dividers )
     *
     * -->
     * TQ = 1/Ftq = (PRESDIV+1)/Fcanclk --> PRESDIV = (TQ * Fcanclk - 1 )
     * TQ is between 8 and 25
     */

    /* Calculate the number of timequanta's (from "Protocol Timing"( chap. 25.4.7.4 )) */
    tq1 = (propseg + pseg1 + 2);
    tq2 = (pseg2 + 1);
    tq = 1 + tq1 + tq2;

    // Check TQ limitations..
    /*lint -save -e904 ARGUMENT_CHECK */
    VALIDATE(( (tq1>=4) && (tq1<=16)), CAN_E_PARAM_TIMING, E_NOT_OK);
    VALIDATE(( (tq2>=2) && (tq2<=8)), CAN_E_PARAM_TIMING, E_NOT_OK);
    VALIDATE(( (tq>=8) && (tq<=25 )), CAN_E_PARAM_TIMING, E_NOT_OK);
    /*lint -restore*/

    // Assume we're using the peripheral clock instead of the crystal.
    if (canHw->CR.B.CLKSRC == 1) {
        clock = Mcu_Arc_GetPeripheralClock((Mcu_Arc_PeriperalClock_t) config->CanCpuClockRef);
    } else {
        clock = Mcu_Arc_GetClockReferencePointFrequency();
    }

    divider = (clock / (Baudrate * 1000 * tq));
    sClock = clock / divider;

    CONFIG_ASSERT( (divider < 256)  );
    CONFIG_ASSERT( ((sClock)/tq) == (Baudrate *1000) );


    canHw->CR.B.PRESDIV = (clock / ((uint32)baudrate * 1000uL * (uint32)tq)) - 1uL; /*lint !e633 HW register write */
    canHw->CR.B.PROPSEG = propseg;
    canHw->CR.B.PSEG1   = pseg1;
    canHw->CR.B.PSEG2   = pseg2;
    canHw->CR.B.RJW     = rjw;
    canHw->CR.B.SMP     = 0; // 1 sample usually better than 3 (for higher baud rates)
    canHw->CR.B.LPB     = ((config->Can_Arc_Flags & CAN_CTRL_LOOPBACK) != 0u) ? 1u : 0u;
    /** @req 4.1.2/SWS_Can_00274 */
    canHw->CR.B.BOFFREC = 1; // Disable bus off recovery

    /* Setup mailboxes for this controller */
    setupMessageboxes(canUnit);

    canUnit->mbTxFree = canUnit->Can_Arc_TxMbMask;
    /** @req 4.0.3/CAN260 *//** @req 4.1.2/SWS_Can_00260 */
    canUnit->state = CANIF_CS_STOPPED;


    return E_OK;
}

/** @req 4.1.2/SWS_Can_00039 */
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
    flexcan_t *canHw;
    Can_ReturnType rv = CAN_OK;

    /** @req 4.0.3/CAN104 *//** @req 4.1.2/SWS_Can_00104 */
    /** @req 4.0.3/CAN198 *//** @req 4.1.2/SWS_Can_00198 */
    /*lint -save -e904 ARGUMENT_CHECK */
    VALIDATE_RV( (Can_Global.initRun == CAN_READY), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_UNINIT, CAN_NOT_OK );
    /** @req 4.0.3/CAN199 *//** @req 4.1.2/SWS_Can_00199 */
    VALIDATE_RV( VALID_CONTROLLER(Controller), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_PARAM_CONTROLLER, CAN_NOT_OK );
    Can_UnitType *canUnit = CTRL_TO_UNIT_PTR(Controller);
    VALIDATE_RV( (canUnit->state!=CANIF_CS_UNINIT), CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_UNINIT, CAN_NOT_OK );
    /*lint -restore*/

    canHw = canUnit->hwPtr;

    SchM_Enter_Can_EA_0();

    switch (Transition) {
    case CAN_T_START:
        /** @req 4.0.3/CAN409 *//** @req 4.1.2/SWS_Can_00409 */
#if (CAN_DEV_ERROR_DETECT == STD_ON)
        if (!(canUnit->state == CANIF_CS_STOPPED)) {

            SchM_Exit_Can_EA_0();

            (void) Det_ReportError(CAN_MODULE_ID, 0, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);
            /*lint -e{904} ARGUMENT_CHECK To increase readability*/
            return CAN_NOT_OK;
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        /** @req 4.0.3/CAN384 *//** @req 4.1.2/SWS_Can_00384 *//* I.e. present conf not changed */
        /** @req 4.1.2/SWS_Can_00261 */

        /** @req 4.0.3/CAN422 *//** @req 4.1.2/SWS_Can_00422 */
        /* canHw->MCR.B.FRZ = 0; */
        MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_FRZ, 0UL);
        /* canHw->MCR.B.HALT = 0; */
        MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_HALT, 0UL);
        canUnit->state = CANIF_CS_STARTED;
        /** @req 4.0.3/CAN196 *//** @req 4.1.2/SWS_Can_00196 */
        /** @req 4.0.3/CAN425 *//** @req 4.1.2/SWS_Can_00425 */
        if (canUnit->lock_cnt == 0)
        {
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
            /*lint -e{904} ARGUMENT_CHECK To increase readability*/
            return CAN_NOT_OK;
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        // Wake from logical sleep mode or stop
        /* canHw->MCR.B.HALT = 1; */
        MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_HALT, MCR_HALT );

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
            /*lint -e{904} ARGUMENT_CHECK To increase readability*/
            return CAN_NOT_OK;
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */

        // Logical sleep mode = Stop
        /* canHw->MCR.B.FRZ = 1; */
        MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_FRZ, MCR_FRZ );
        /* canHw->MCR.B.HALT = 1; */
        MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_HALT, MCR_HALT );
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
            /*lint -e{904} ARGUMENT_CHECK To increase readability*/
            return CAN_NOT_OK;
        }
#endif /* (CAN_DEV_ERROR_DETECT == STD_ON) */
        // Stop
        /** @req 4.1.2/SWS_Can_00263 */
        /* canHw->MCR.B.FRZ = 1; */
        MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_FRZ, MCR_FRZ );
        /* canHw->MCR.B.HALT = 1; */
        MODIFY_PERIPERAL32(&canHw->MCR, ~MCR_HALT, MCR_HALT );
        if (canUnit->lock_cnt == 0)
        {
            Can_Hw_DisableControllerInterrupts(Controller);
        }
        canUnit->state = CANIF_CS_STOPPED;
        Can_AbortTx(canHw, canUnit); /** @req 4.0.3/CAN282 *//** @req 4.1.2/SWS_Can_00282 */
        canUnit->pendingStateIndication = CAN_CTRL_INDICATION_PENDING_STOP;
        break;
    default:
        /** @req 4.0.3/CAN200 *//** @req 4.1.2/SWS_Can_00200 */
        DET_REPORTERROR(CAN_MODULE_ID, 0, CAN_SETCONTROLLERMODE_SERVICE_ID, CAN_E_TRANSITION);
        rv = CAN_NOT_OK;
        break;
    }

    SchM_Exit_Can_EA_0();

    return rv;
}

void Can_DisableControllerInterrupts(uint8 Controller)
{
    /** @req 4.0.3/CAN231 *//** @req 4.1.2/SWS_Can_00231 */
    /** @req 4.0.3/CAN202 *//** @req 4.1.2/SWS_Can_00202 */
    /** !req 4.0.3/CAN204 *//** !req 4.1.2/SWS_Can_00204 */
    /*lint -save -e904 ARGUMENT_CHECK */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN206 *//** @req 4.1.2/SWS_Can_00206*/
    VALIDATE_NO_RV( VALID_CONTROLLER(Controller) , CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_PARAM_CONTROLLER );
    /*lint -restore */
    Can_UnitType *canUnit = CTRL_TO_UNIT_PTR(Controller);
    /** @req 4.0.3/CAN205 *//** @req 4.1.2/SWS_Can_00205 */
    /*lint -e{904} ARGUMENT_CHECK */
    VALIDATE_NO_RV( (canUnit->state!=CANIF_CS_UNINIT), CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );

    SchM_Enter_Can_EA_0();

    /** @req 4.0.3/CAN049 *//** @req 4.1.2/SWS_Can_00049 */
    if (canUnit->lock_cnt > 0) {
        // Interrupts already disabled
        canUnit->lock_cnt++;
    } else {

        canUnit->lock_cnt++;

        Can_Hw_DisableControllerInterrupts(Controller);
    }
    SchM_Exit_Can_EA_0();
}

void Can_EnableControllerInterrupts(uint8 Controller)
{
    /** @req 4.0.3/CAN232 *//** @req 4.1.2/SWS_Can_00232 */
    /** @req 4.0.3/CAN050 *//** @req 4.1.2/SWS_Can_00050 */

    Can_UnitType *canUnit;

    /** @req 4.0.3/CAN209 *//** @req 4.1.2/SWS_Can_00209 */
    /*lint -save -e904 ARGUMENT_CHECK */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );
    /** @req 4.0.3/CAN210 *//** @req 4.1.2/SWS_Can_00210 */
    VALIDATE_NO_RV( VALID_CONTROLLER(Controller), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_PARAM_CONTROLLER );
    /*lint -restore */
    canUnit = CTRL_TO_UNIT_PTR(Controller);
    /*lint -e{904} ARGUMENT_CHECK */
    VALIDATE_NO_RV( (canUnit->state!=CANIF_CS_UNINIT), CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID, CAN_E_UNINIT );

    SchM_Enter_Can_EA_0();

    if (canUnit->lock_cnt > 1) {
        /* IRQ should still be disabled so just decrement counter. */
        canUnit->lock_cnt--;
        SchM_Exit_Can_EA_0();
        /*lint -e{904} OTHER To increase readability */
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

Can_ReturnType Can_Write(Can_HwHandleType Hth, const Can_PduType *PduInfo)
{
    /** @req 4.0.3/CAN233 *//** @req 4.1.2/SWS_Can_00233 */
    /** @req 4.0.3/CAN214 *//** @req 4.1.2/SWS_Can_00214 */
    /** @req 4.0.3/CAN272 *//** @req 4.1.2/SWS_Can_00272 */
    /** @req 4.1.2/SWS_Can_00011 */
    /** @req 4.1.2/SWS_Can_00275 */

    uint64 iflag;
    Can_ReturnType rv = CAN_OK;
    uint8 mbNr;
    flexcan_t *canHw;
    const Can_HardwareObjectType *hohObj;
    Can_UnitType *canUnit;
    Can_HwHandleType internalHth;

    /** @req 4.0.3/CAN104 *//** @req 4.1.2/SWS_Can_00104 */
    /** @req 4.0.3/CAN216 *//** @req 4.1.2/SWS_Can_00216 */
    /*lint -save -e904 ARGUMENT_CHECK */
    VALIDATE_RV( (Can_Global.initRun == CAN_READY), 0x6, CAN_E_UNINIT, CAN_NOT_OK );
    /** @req 4.0.3/CAN219 *//** @req 4.1.2/SWS_Can_00219 */
    VALIDATE_RV( (PduInfo != NULL), 0x6, CAN_E_PARAM_POINTER, CAN_NOT_OK );
    VALIDATE_RV( (PduInfo->sdu != NULL), 0x6, CAN_E_PARAM_POINTER, CAN_NOT_OK );
    /** @req 4.0.3/CAN218 *//** @req 4.1.2/SWS_Can_00218 */
    VALIDATE_RV( (PduInfo->length <= 8), 0x6, CAN_E_PARAM_DATA_LENGTH, CAN_NOT_OK );
    /** @req 4.0.3/CAN217 *//** @req 4.1.2/SWS_Can_00217 */
    VALIDATE_RV( (Hth < NUM_OF_HOHS ), 0x6, CAN_E_PARAM_HANDLE, CAN_NOT_OK );
    /*lint -restore*/
    /* Hth is the symbolic name for this hoh. Get the internal id */
    internalHth = Can_Global.config->CanConfigSetPtr->ArcSymbolicHohToInternalHoh[Hth];
    /*lint -e{904} ARGUMENT_CHECK */
    VALIDATE_RV( (internalHth < NUM_OF_HTHS ), 0x6, CAN_E_PARAM_HANDLE, CAN_NOT_OK );

    canUnit = CTRL_TO_UNIT_PTR(Can_Global.config->CanConfigSetPtr->ArcHthToSymbolicController[internalHth]);
    hohObj  =  &canUnit->cfgHohPtr[Can_Global.config->CanConfigSetPtr->ArcHthToHoh[internalHth]];
    canHw   =  canUnit->hwPtr;

    /* We have the hohObj, we need to know what box we can send on */
    SchM_Enter_Can_EA_0();
    /* Get all free TX mboxes */
    uint64 iHwFlag = (canUnit->numMbMax > 32u) ? *(uint64 *)(&canHw->IFRH.R) : (uint64)(canHw->IFRL.R);  /* These are occupied */
    ASSERT( (canUnit->Can_Arc_TxMbMask & hohObj->ArcMailboxMask));
    iflag = ~iHwFlag &  canUnit->mbTxFree & hohObj->ArcMailboxMask;
    /* Get the mbox(es) for this HTH */

    /** @req 4.0.3/CAN212 *//** @req 4.1.2/SWS_Can_00212 */
    if (iflag != 0uLL) {
        mbNr = ilog2_64(iflag ); // find mb number

        /* Indicate that we are sending this MB */
        canUnit->mbTxFree &= ~(1uLL<<mbNr);

        canHw->BUF[mbNr].CS.R = 0uL;
        canHw->BUF[mbNr].ID.R = 0uL;

        // Setup message box type
        if (hohObj->CanIdType == CAN_ID_TYPE_EXTENDED) {
            canHw->BUF[mbNr].CS.B.IDE = 1;
        } else if (hohObj->CanIdType == CAN_ID_TYPE_STANDARD) {
            canHw->BUF[mbNr].CS.B.IDE = 0;
        } else {
            // No support for mixed in this processor
            ASSERT(0);
        }

        // Send on buf
        canHw->BUF[mbNr].CS.B.CODE = MB_INACTIVE; // Hold the transmit buffer inactive
        if (hohObj->CanIdType == CAN_ID_TYPE_EXTENDED) {
            canHw->BUF[mbNr].ID.R = PduInfo->id;
        } else {
            ASSERT(((PduInfo->id <= STANDARD_CANID_MAX) ? 1:0));
            canHw->BUF[mbNr].ID.B.STD_ID = PduInfo->id;
        }

#if defined(CFG_MPC5516) || defined(CFG_MPC5517) || defined(CFG_MPC5606S) || defined(CFG_MPC560XB) || defined(CFG_MPC5668) || defined(CFG_MPC5604P)
        canHw->BUF[mbNr].ID.B.PRIO = 1; // Set Local Priority
#endif
        /** @req 4.1.2/SWS_Can_000059 *//* Definition of data structure */
        memset((void*)&canHw->BUF[mbNr].DATA.B[0], 0u, 8u);
        memcpy((void*)&canHw->BUF[mbNr].DATA.B[0], PduInfo->sdu, (size_t)PduInfo->length);

        canHw->BUF[mbNr].CS.B.SRR = 1;
        canHw->BUF[mbNr].CS.B.RTR = 0;

        canHw->BUF[mbNr].CS.B.LENGTH = PduInfo->length;
        canHw->BUF[mbNr].CS.B.CODE = MB_TX_ONCE; // Write tx once code
        /* unlock MB (dummy read timer) */
        (void) canHw->TIMER.R;

#if (USE_CAN_STATISTICS == STD_ON)
        canUnit->stats.txSuccessCnt++;
#endif

        // Store pdu handle in unit to be used by TxConfirmation
        /** @req 4.1.2/SWS_Can_00276 */
        canUnit->cfgCtrlPtr->Can_Arc_TxPduHandles[mbNr - canUnit->cfgCtrlPtr->Can_Arc_TxMailboxStart] = PduInfo->swPduHandle;

    } else {
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        /** @req 4.0.3/CAN213 *//** @req 4.1.2/SWS_Can_00213 */
        /** @req 4.0.3/CAN215 *//** @req 4.1.2/SWS_Can_00215 */
        /** @req 4.0.3/CAN278 *//** @req 4.1.2/SWS_Can_00278 */
        /* Check if there are messages that may be cancelled */
        /* Find the one with the lowest priority */
        /* Assume that mixed is not supported, i.e. only check the canid */
        uint64 tmp = (hohObj->ArcMailboxMask & ~canUnit->mbTxCancel);
        Can_IdType lowestPrioCanId = INVALID_CANID;
        Can_IdType mbCanId = 0;
        uint8 mbCancel = 0u;
        while(tmp != 0uLL) {
            mbNr = ilog2_64(tmp);
            if (hohObj->CanIdType == CAN_ID_TYPE_EXTENDED) {
                mbCanId = (Can_IdType)((canHw->BUF[mbNr].ID.R) & EXTENDED_CANID_MAX);
            } else {
                mbCanId = (Can_IdType)canHw->BUF[mbNr].ID.B.STD_ID;
            }
            if( (lowestPrioCanId < mbCanId) || (INVALID_CANID == lowestPrioCanId) ) {
                lowestPrioCanId = mbCanId;
                mbCancel = mbNr;
            }
            tmp &= ~(1uLL<<mbNr);
        }
        /** @req 4.0.3/CAN286 *//** @req 4.1.2/SWS_Can_00286 */
        /** @req 4.0.3/CAN399 *//** @req 4.1.2/SWS_Can_00399 */
        if( (lowestPrioCanId > (PduInfo->id & EXTENDED_CANID_MAX)) && (INVALID_CANID != lowestPrioCanId) ) {
            /* Cancel this */
            canUnit->mbTxCancel |= (1uLL<<mbCancel);
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
            Can_Isr_Tx(uPtr);
        }
    }
}
#endif

#if (CAN_USE_READ_POLLING == STD_ON)
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

    for(uint16 i=0u;i<CAN_ARC_CTRL_CONFIG_CNT; i++ ) {
        uPtr = &CanUnit[i];
        if( (uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_RX_PROCESSING_INTERRUPT) == 0 ) {
            Can_Isr_Rx(uPtr);
        }
    }
}
#endif

#if (CAN_USE_BUSOFF_POLLING == STD_ON)
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

    for(uint8 controllerId = 0u; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++ ) {
        uPtr = CTRL_TO_UNIT_PTR(controllerId);
        if( (uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT) == 0 ) {
            Can_BusOff(uPtr->cfgCtrlPtr->CanHwUnitId);
        }
    }
}
#endif

#if (ARC_CAN_ERROR_POLLING == STD_ON)
void Can_Arc_MainFunction_Error(void)
{
    /* Error polling events */
    // NOTE: remove function (not in req spec)

    Can_UnitType *uPtr;
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_MAINFUNCTION_ERROR_SERVICE_ID, CAN_E_UNINIT );

    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }
    for(uint8 controllerId = 0u; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++ ) {
        uPtr = CTRL_TO_UNIT_PTR(controllerId);
        if( (uPtr->cfgCtrlPtr->Can_Arc_Flags & CAN_CTRL_ERROR_PROCESSING_INTERRUPT) == 0) {
            Can_Err(uPtr->cfgCtrlPtr->CanHwUnitId);
        }
    }
}
#endif

#if (CAN_USE_WAKEUP_POLLING == STD_ON)
void Can_MainFunction_Wakeup(void)
{
    /** !req 4.0.3/CAN228 *//** !req 4.1.2/SWS_Can_00228 */
    /** !req 4.0.3/CAN112 *//** !req 4.1.2/SWS_Can_00112 */
    /** !req 4.0.3/CAN186 *//** !req 4.1.2/SWS_Can_00186 */
    /* Wakeup polling events */

    /* NOT SUPPORTED */
}
#endif

void Can_MainFunction_Mode( void )
{
    /** @req 4.0.3/CAN368 *//** @req 4.1.2/SWS_Can_00368 *//* API */
    /** @req 4.0.3/CAN369 *//** @req 4.1.2/SWS_Can_00369 *//* Polling */

    /** !req 4.0.3/CAN398 *//** !req 4.1.2/SWS_Can_00398 *//* Blocking call not supported */
    /** !req 4.0.3/CAN371 *//** !req 4.1.2/SWS_Can_00371 *//* Blocking call not supported */
    /** !req 4.0.3/CAN372 *//** !req 4.1.2/SWS_Can_00372 *//* Blocking call not supported */

    Can_UnitType *uPtr;
    uint32 mcr = 0UL;

    /** @req 4.0.3/CAN379 *//** @req 4.1.2/SWS_Can_00379 *//* CAN_E_UNINIT */
    /*lint -e{904} ARGUMENT_CHECK */
    VALIDATE_NO_RV( (Can_Global.initRun == CAN_READY), CAN_MAIN_FUNCTION_MODE_SERVICE_ID, CAN_E_UNINIT );

    /** @req 4.0.3/CAN431 *//* On Uninit, return immediately without prod err */
    /*lint -e{904} OTHER To increase readability */
    if (Can_Global.initRun == CAN_UNINIT) {
        return;
    }

    for(uint8 controllerId=0; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++ )
    {
        CanIf_ControllerModeType indicateMode = CANIF_CS_UNINIT;
        uPtr = CTRL_TO_UNIT_PTR(controllerId);
        switch (uPtr->pendingStateIndication)
        {
            case CAN_CTRL_INDICATION_PENDING_START:
                if (uPtr->state == CANIF_CS_STARTED) {
#if defined(CFG_MPC5744P)
                    /* Toggling this bit does not seem to work from ISR. */
                    if (uPtr->hwPtr->CR.B.BOFFREC != 0u) {
                        uPtr->hwPtr->CR.B.BOFFREC = 0;
                        uPtr->hwPtr->CR.B.BOFFREC = 1;
                    }
#endif

                    READ_PERIPHERAL32(&uPtr->hwPtr->MCR,&mcr);
                    if ( ((mcr & MCR_NOTRDY) == 0 )
#if defined(CFG_MPC5744P)
                            /* Check that we are not in bus off state. */
                            && (0 == (uPtr->hwPtr->ESR.B.FLTCONF & 0x2u))
#endif

                            ) {
                        // NOTRDY==0 FlexCAN module is either in normal mode, listen-only mode or loop-back mode
                        // Started OK, indicate to upper layer
                        indicateMode = CANIF_CS_STARTED;
                    } 
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
                break;
        }
        if( (CANIF_CS_UNINIT != indicateMode) ) {
            uPtr->pendingStateIndication = CAN_CTRL_INDICATION_NONE;
            /** @req 4.0.3/CAN370 *//** @req 4.1.2/SWS_Can_00370 */
            /** @req 4.0.3/CAN373 *//** @req 4.1.2/SWS_Can_00373 */
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
            CanIf_ControllerModeIndication(uPtr->cfgCtrlPtr->Can_Arc_CanIfControllerId, indicateMode);
#else
            CanIf_ControllerModeIndication(controllerId, indicateMode);
#endif
        }
#if (CAN_HW_TRANSMIT_CANCELLATION == STD_ON)
        if(0 != uPtr->mbTxCancel) {
            HandlePendingTxCancel(uPtr);
        }
#endif
    }
}

#if ( CAN_VERSION_INFO_API == STD_ON )
void Can_GetVersionInfo( Std_VersionInfoType* versioninfo) {

    /* @req SWS_Can_00224 */
    /* @req SWS_Can_00177 */
    /*lint -e{904} ARGUMENT_CHECK */
    VALIDATE_NO_RV( ( NULL != versioninfo ), CAN_GETVERSIONINFO_SERVICE_ID, CAN_E_PARAM_POINTER);

    versioninfo->vendorID = CAN_VENDOR_ID;
    versioninfo->moduleID = CAN_MODULE_ID;
    versioninfo->sw_major_version = CAN_SW_MAJOR_VERSION;
    versioninfo->sw_minor_version = CAN_SW_MINOR_VERSION;
    versioninfo->sw_patch_version = CAN_SW_PATCH_VERSION;
}
#endif

#if (USE_CAN_STATISTICS == STD_ON)
void Can_Arc_GetStatistics(uint8 controller, Can_Arc_StatisticsType *stats)
{
    if(Can_Global.initRun == CAN_READY)
    {
        Can_UnitType *canUnit = CTRL_TO_UNIT_PTR(controller);
        *stats = canUnit->stats;
    }
}
#endif

/*lint -restore */

#ifdef HOST_TEST
Std_ReturnType Can_Test_DriverStateIsUninit(void) {
    return (Can_Global.initRun == CAN_UNINIT) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_Test_DriverStateIsReady(void) {
    return (Can_Global.initRun == CAN_READY) ? E_OK : E_NOT_OK;
}

Std_ReturnType Can_Test_AllUnitsInState(CanIf_ControllerModeType state) {

    Can_UnitType *unitPtr;
    Std_ReturnType status;
    status = E_OK;

    for (uint8 controllerId = 0; controllerId < CAN_ARC_CTRL_CONFIG_CNT; controllerId++) {

        unitPtr = CTRL_TO_UNIT_PTR(controllerId);

        if (unitPtr->state != state) {
            status = E_NOT_OK;
            break;
        }
    }

    return status;
}    /*lint !e954 FALSE_POSITIVE*/

Can_HardwareObjectType * getCanHwObject(uint8 controllerId, uint8 hwObjIndex) {
    // Get the configuration of the selected controller
    Can_UnitType * canUnit = &CanUnit[controllerId];
    // Get the configuration of the Can hardware object that references the selected controller
    Can_HardwareObjectType * hwObj = (Can_HardwareObjectType *) canUnit->cfgHohPtr;
    // A controller may have multiple hardware objects referencing it (usually a TX and a RX object)
    for (int i = 0; i < hwObjIndex; i++) {
        hwObj++;
    }

    return hwObj;
}
#endif /* HOST_TEST */

