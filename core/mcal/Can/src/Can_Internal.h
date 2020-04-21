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
/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|RH850F1H|TMS570 */


/** @file Can_Internal.h
 *  This files contains the hardware specific API definitions.
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


#ifndef CAN_INTERNAL_H_
#define CAN_INTERNAL_H_

#include "Can_GeneralTypes.h"

#if !defined(CAN_ARC_LOG_UNIT_CNT)
#define CAN_ARC_LOG_UNIT_CNT CAN_ARC_CTRL_CONFIG_CNT
#endif

#define VALID_CONTROLLER(_ctrl)          ((_ctrl) < CAN_ARC_CTRL_CONFIG_CNT)


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

typedef enum {
    CAN_CTRL_PENDING,
    CAN_CTRL_MODE_STOP,
    CAN_CTRL_MODE_RESET,
    CAN_CTRL_MODE_HALT,
    CAN_CTRL_MODE_COMM,
    CAN_CTRL_MODE_SLEEP,
} Can_Arc_ModeType;


#if defined(CFG_JACINTO)
/* Xpt generated type --> Do nothing */
#elif defined(CFG_STM32) || defined(CFG_PPC)
/* Own type --> Do nothing */
#else
/* TMS570, ZYNQ */
typedef struct {
    struct canPrivateData *privateData;
    CanIf_ControllerModeType state;

    // Data stored for Txconfirmation callbacks to CanIf
    Can_StateTransitionType transition;
    boolean transitonPending;
    uint8 lockCnt;

    //QQ New for tms570, check
    uint64 mxBoxBusyMask;
    PduIdType transmittedPduIds[64];
    uint32 WakeupSrc;

} Can_UnitType;

/*lint -e9003 MISRA:FALSE_POSITIVE:could define variable 'Can_Unit' at block scope[MISRA 2012 Rule 8.9, advisory]*/
extern Can_UnitType Can_Unit[];

#endif

typedef uint8 Can_Hw_CtrlType;

#if defined(CFG_TMS570)
/* Type for holding global information used by the driver */
typedef struct {
    Can_DriverStateType initRun;
    const Can_ConfigType *config;
    /* One bit for each channel that is configured.
     * Used to determine if validity of a channel
     * 1 - configured
     * 0 - NOT configured */
    uint32 configured;
    /* Maps the a channel id to a configured channel id. */
    uint8 channelMap[CAN_ARC_HW_UNIT_CNT];
    uint8 channelToHwChannel[CAN_ARC_LOG_UNIT_CNT];

} Can_GlobalType;

extern Can_GlobalType Can_Global;
#endif


#if defined(CFG_TMS570) || defined(CFG_ZYNQ) || defined(CFG_RH850)

static inline uint8 HwChannelToChannel(Can_Hw_CtrlType ch) {
    return Can_Global.channelMap[ch];
}
static inline Can_Hw_CtrlType ChannelToHwChannel(uint8 ch) {
    return Can_Global.channelToHwChannel[ch];
}

#endif


/* Old, soon deprecated */
void Can_Arc_DeInit(void);
void Can_Arc_Hw_DeInit(void);

/** @brief Hardware specific implementation of Can_Init
 *  @param[in] Config - Pointer to configuration set
 */
void Can_Hw_Init( const Can_ConfigType *Config );
void Can_Hw_DeInit(void);

void Can_Hw_MainFunction_Mode( void );
/** @brief Hardware specific implementation of Can_DisableControllerInterrupts. Does not perform any other logic like changing the disable interrupt count.
 *  @param[in] Controller - CAN controller id, for which the interrupts shall be disabled.
 */
void Can_Hw_DisableControllerInterrupts( uint8 Controller );
void Can_Hw_EnableControllerInterrupts( uint8 Controller );

/**
 * @brief Hardware specific implementation of Can_SetControllerMode
 * @param[in] Controller - CAN controller id, for which the status shall be changed
 * @param[in] Transition - Transition value to request new CAN controller state
 * @return Can_ReturnType.
 * @retval CAN_OK: request accepted
 * @retval CAN_NOT_OK: request not accepted, a development error occurred
 */
Can_ReturnType Can_Hw_SetControllerMode( uint8 Controller, Can_StateTransitionType Transition );


/**
 * @brief Hardware specific implementation of Can_Write
 * @param[in] Hth - information which HW-transmit handle shall be used for transmit. Implicitly this is also the information about the controller to use because the Hth numbers are unique inside one hardware unit.
 * @param[in] PduInfo - Pointer to SDU user memory, Data Length and Identifier.
 * @return Can_ReturnType
 * @retval CAN_OK: Write command has been accepted
 * @retval CAN_NOT_OK: Development error occurred
 * @retval CAN_BUSY: No TX hardware buffer available or pre-emptive call of Can_Write that can't be implemented re-entrant
 */
Can_ReturnType Can_Hw_Write( Can_HwHandleType Hth, const Can_PduType *PduInfo );


/**
 * @brief Hardware specific implementation of Can_CheckWakeup
 * @param[in] Controller - CAN controller id, for which the wakeup shall be checked
 * @return Can_ReturnType.
 * @retval CAN_OK: request accepted
 * @retval CAN_NOT_OK: request not accepted, a development error occurred
 */
Can_ReturnType Can_Hw_CheckWakeup( uint8 Controller );

/**
 * @brief Hardware specific implementation of Can_SetBaudrate
 * @param[in] Controller - CAN controller id, whose baud rate shall be set
 * @param[in] BaudRateConfigID - in kpbs, references a baud rate configuration by ID
 * @return Std_ReturnType.
 * @retval E_OK: Service request accepted, setting of (new) baud rate started
 * @retval E_NOT_OK: Service request not accepted
 */
Std_ReturnType Can_Hw_SetBaudrate( uint8 Controller, uint16 BaudRateConfigID );


Can_Arc_ModeType Can_Hw_GetControllerMode( uint8 hwCh );

/* Deprecated since 4.1 API */
Std_ReturnType Can_Hw_CheckBaudrate(uint8 Controller, const uint16 Baudrate);
//Std_ReturnType Can_Hw_ChangeBaudrate(uint8 Controller, const uint16 Baudrate);
Std_ReturnType Can_Hw_ChangeBaudrate(uint8 Controller, const Can_ControllerBaudrateConfigType *baudratePtr );

#if defined(CFG_TMS570)
/* Irq functions */

/**
 * @brief Arccore specified function. Return the driver state.
 * @return Can_DriverStateType.
 * @retval CAN_UNINIT: Can driver is not initialized.
 * @retval CAN_READY: Can driver is initialized and ready to be used.
 */
Can_DriverStateType Can_Hw_GetDriverState(void);

/**
 * @brief Arccore specified function. Install interrupt handlers to OS.
 * @param[in] ctrl - Can controller config data pointer.
 */
void Can_InstallInterruptHandlers(const Can_ControllerConfigType * ctrl);


/**
 * @brief Arccore specified function. Remove interrupt handlers to OS.
 * @param[in] ctrl - Can controller config data pointer.
 */
void Can_RemoveInterruptHandlers(const Can_ControllerConfigType * ctrl);

/**
 * @brief Arccore specified function. Handle the interrupt of a certain controller.
 * @param[in] controllerNr - CAN controller id.
 */
void Can_InterruptHandler(CanControllerIdType controllerNr);

/**
 * @brief Arccore specified function. This function will handle fifo buffers as well as individual message rx objects.
 * Note that fifos must use consecutive message objects.
 * @param[in] MsgObjectNr - message object number, it is used to access message object in hardware.
 * @param[in] controllerConfig - specific configuration set of a controller.
 * @param[in] hrh - Represents the hardware object handles of a CAN controller.
 */
void Can_HandleRxOk(uint8 MsgObjectNr, const Can_ControllerConfigType * controllerConfig, const Can_HardwareObjectType * hrh);

#endif

#if defined(CFG_JACINTO)
/**
 * @brief Arccore specified function. Gets the index of a controller in the global configuration structure.
 * @param[in] controller - CAN controller id
 * @return uint8.
 * @retval Config index.
 */
uint8 getControllerConfigIdx(uint8 controller);

/**
 * @brief Arccore specified function. Return configuration of a controller.
 * @param[in] _controllerID - CAN controller id
 * @return Can_ControllerConfigType pointer.
 * @retval Config structure of a controller.
 */
const Can_ControllerConfigType* GET_CONTROLLER_CONFIG(uint8 _controllerID);

/**
 * @brief Arccore specified function. When interrupt error occurs, increment the counter.
 */
void Can_HandleInterruptError(void);

/**
 * @brief Arccore specified function. Handle busoff state, switch the controller state.
 * @param[in] controllerNr - CAN controller id
 */
void Can_HandleBusOff(CanControllerIdType controllerNr);

/**
 * @brief Arccore specified function. Return hardware handle of a unit.
 * @param[in] handle - Represents the hardware object handle number of a CAN hardware unit.
 * @return Can_HardwareObjectType pointer.
 * @retval Hardware object handle.
 */
const Can_HardwareObjectType * Can_FindHoh(Can_HwHandleType handle);

/**
 * @brief Arccore specified function. Return hardware handle of a unit.
 * @param[in] controllerNr - Can controller Id.
 * @param[in] MsgNr - Message Id.
 */
void Can_HandleTxOk(CanControllerIdType controllerNr, uint8 MsgNr);

/**
 * @brief Arccore specified function. 64-bit integer log2.
 * @param[in] val - input value to the function.
 * @return uint8.
 * @retval log2 of val.
 */
uint8 ilog2_64(uint64 val);
#endif

#if (CAN_USE_WRITE_POLLING == STD_ON)
void Can_Hw_MainFunction_Write( void );
#endif /* CAN_USE_WRITE_POLLING == STD_ON */

#if (CAN_USE_READ_POLLING == STD_ON)
void Can_Hw_MainFunction_Read( void );
#endif /* CAN_USE_READ_POLLING == STD_ON */

#if (CAN_USE_BUSOFF_POLLING == STD_ON)
void Can_Hw_MainFunction_BusOff( void );
#endif /* CAN_USE_BUSOFF_POLLING == STD_ON */

#if (ARC_CAN_ERROR_POLLING == STD_ON)
void Can_Arc_Hw_MainFunction_Error(void);
#endif /*ARC_CAN_ERROR_POLLING == STD_ON*/

#if (CAN_USE_WAKEUP_POLLING == STD_ON)
void Can_Hw_MainFunction_Wakeup( void );
#endif /* CAN_USE_WAKEUP_POLLING == STD_ON */


#endif /* CAN_INTERNAL_H_ */
