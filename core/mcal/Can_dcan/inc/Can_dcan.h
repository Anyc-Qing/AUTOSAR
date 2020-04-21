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
/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|PPC|TMS570|MPC5607B|MPC5645S|RH850F1H|MPC5777M|MPC5748G|JACINTO5|JACINTO6|STM32|MPC5744P */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */



/** @file Can_dcan.h
 *
 *  The Can driver initializes and controls the internal DCAN controller of the microcontroller.
 *  The Can module provides services for initiating transmissions and calls the callback functions of the CanIf module for notifying events, independently from the hardware.
 *  Furthermore, it provides services to control the behavior and state of the CAN controllers that are belonging to the same CAN Hardware Unit.
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

#ifndef CAN_H_
#define CAN_H_

/** @req 4.1.2|4.3.0/SWS_Can_00388 The header file Can_dcan.h shall include the header file ComStack_Types.h.*/
#include "ComStack_Types.h"
#include "Mcu.h"


/* ----------------------------[Version Check]----------------- */
/**
  * @name    Module ID and Version Number
  * @{
  */
#define CAN_VENDOR_ID               60u		/**< @brief Can Module vendor ID */
#define CAN_MODULE_ID               80u		/**< @brief Can Module module ID */

#if defined(CFG_TMS570LS12X)
#define CAN_SW_MAJOR_VERSION        6u		/**< @brief Can Module Software Major Version Number for TMS570 */
#define CAN_SW_MINOR_VERSION        0u		/**< @brief Can Module Software Minor Version Number for TMS570 */
#define CAN_SW_PATCH_VERSION        0u		/**< @brief Can Module Software Patch Version Number for TMS570 */

#define CAN_AR_MAJOR_VERSION        4u		/**< @brief Can Module Autosar Major Version Number for TMS570 */
#define CAN_AR_MINOR_VERSION        3u		/**< @brief Can Module Autosar Minor Version Number for TMS570 */
#define CAN_AR_PATCH_VERSION        0u		/**< @brief Can Module Autosar Patch Version Number for TMS570 */
#else
/** @cond DOXYGEN_EXCLUDE */
#define CAN_SW_MAJOR_VERSION        5u		/**< @brief Can Module Software Major Version Number for other architectures */
#define CAN_SW_MINOR_VERSION        0u		/**< @brief Can Module Software Minor Version Number for other architectures */
#define CAN_SW_PATCH_VERSION        0u		/**< @brief Can Module Software Patch Version Number for other architectures */

#define CAN_AR_MAJOR_VERSION        4u		/**< @brief Can Module Autosar Major Version Number for other architectures */
#define CAN_AR_MINOR_VERSION        1u		/**< @brief Can Module Autosar Minor Version Number for other architectures */
#define CAN_AR_PATCH_VERSION        2u		/**< @brief Can Module Autosar Patch Version Number for other architectures */
/** @endcond */
#endif
/** @} */

/* Form a version to compare with, e.g. 4.3.0 is 40300 */
#define CAN_AR_VERSION          ((CAN_AR_MAJOR_VERSION * 10000u) + (CAN_AR_MINOR_VERSION * 100u) + CAN_AR_PATCH_VERSION)

#if defined(USE_KERNEL)
#include "Os.h"

/* Assign application according to define */
#if !defined(CFG_DRIVERS_USE_CONFIG_ISRS) && !defined(CAN_DCAN_ARC_ISR_APP)
#if ((OS_SC3 == STD_ON) || (OS_SC4 == STD_ON))
#error You must define CAN_DCAN_ARC_ISR_APP
#else
#define CAN_DCAN_ARC_ISR_APP             0
#endif
#endif

#endif

#include "Can_dcan_Cfg.h"			// has to be included after version check and all the type definitions
#include "Can_GeneralTypes.h"
/** @req 4.1.2|4.3.0/SWS_Can_00435 The Can_dcan.h file shall include Can_GeneralTypes.h.*/

/* ----------------------------[Public Macros]-----------------*/
/**
  * @name    Error Code - AUTOSAR specified
  * @{
  */
#define CAN_E_PARAM_POINTER         0x01u
#define CAN_E_PARAM_HANDLE          0x02u
#define CAN_E_PARAM_DATA_LENGTH     0x03u		// In ASR 4.1.2 it is CAN_E_PARAM_DATA_DLC
#define CAN_E_PARAM_CONTROLLER      0x04u
#define CAN_E_UNINIT                0x05u		// API service used without initialization
#define CAN_E_TRANSITION            0x06u		// Init transition for current mode
#define CAN_E_DATALOST              0x07u
#define CAN_E_PARAM_BAUDRATE        0x08u
/** @} */

/**
  * @name    Error Code - ArcCore specified
  * @{
  */
#define CAN_E_PARAM_TIMING          0x09u
#define CAN_E_UNEXPECTED_EXECUTION  0x20u
/** @} */

/**
  * @name    Service Id
  * @{
  */
#define CAN_INIT_SERVICE_ID                         0x00u
#define CAN_MAINFUNCTION_WRITE_SERVICE_ID           0x01u
#define CAN_SETCONTROLLERMODE_SERVICE_ID            0x03u
#define CAN_DISABLECONTROLLERINTERRUPTS_SERVICE_ID  0x04u
#define CAN_ENABLECONTROLLERINTERRUPTS_SERVICE_ID   0x05u
#define CAN_WRITE_SERVICE_ID                        0x06u
#define CAN_GETVERSIONINFO_SERVICE_ID               0x07u
#define CAN_MAINFUNCTION_READ_SERVICE_ID            0x08u
#define CAN_MAINFUNCTION_BUSOFF_SERVICE_ID          0x09u
#define CAN_MAINFUNCTION_WAKEUP_SERVICE_ID          0x0au
#define CAN_CBK_CHECKWAKEUP_SERVICE_ID              0x0bu
#define CAN_MAIN_FUNCTION_MODE_SERVICE_ID           0x0cu
#define CAN_CHANGE_BAUD_RATE_SERVICE_ID             0x0du
#define CAN_CHECK_BAUD_RATE_SERVICE_ID              0x0eu
#define CAN_DEINIT_SERVICE_ID                       0x10u	// CAN_DEINIT_ID, ASR 4.3.0
#define CAN_GLOBAL_ID                               0x11u  // Not in spec but follows pattern
#define CAN_MAINFUNCTION_ERROR_SERVICE_ID           0x12u  // Not in spec but follows pattern
/** @} */


 /* ----------------------------[Public Functions]--------------*/
 /** @brief API that initializes the CAN hardware units and driver.
  *         This generic function calls the HW specific implementation function if the API parameter checking is passed.
  *         Synchronous
  *  @note  Non Reentrant
  *  @param[in] Config - Pointer to driver configuration
  */
void Can_dcan_Init( const Can_ConfigType *Config );


#if ( CAN_VERSION_INFO_API == STD_ON )
/** @brief API that returns the version information of this module.
 *         Synchronous
 *  @note  Reentrant
 *  @param[out] versioninfo - Pointer to where to store the version information of this module.
 */
void Can_dcan_GetVersionInfo( Std_VersionInfoType* versioninfo);
#endif


/**
 * @brief This function performs software triggered state transitions of the CAN controller State machine.
 * 		  Asynchronous
 * @note  Non Reentrant
 * @param[in] Controller - CAN controller id, for which the status shall be changed
 * @param[in] Transition - Transition value to request new CAN controller state
 * @return Can_ReturnType.
 * @retval CAN_OK: request accepted
 * @retval CAN_NOT_OK: request not accepted, a development error occurred
 */
Can_ReturnType Can_dcan_SetControllerMode( uint8 Controller, Can_StateTransitionType Transition );


#if defined(CFG_TMS570)
/**
 * @brief This function de-initializes the module. Specified by ASR 4.3.0, not in ASR 4.1.2.
 * 		  Synchronous
 * @note  Non Reentrant
 */
void Can_dcan_DeInit(void);
#endif


/**
 * @brief This function disables all interrupts for this CAN controller.
 * 		  Synchronous
 * @note  Reentrant
 * @param[in] Controller - CAN controller id, for which the interrupts shall be disabled.
 */
void Can_dcan_DisableControllerInterrupts( uint8 Controller );


/**
 * @brief This function enables all allowed interrupts for this CAN controller.
 * 		  Synchronous
 * @note  Reentrant
 * @param[in] Controller - CAN controller id, for which the interrupts shall be re-enabled.
 */
void Can_dcan_EnableControllerInterrupts( uint8 Controller );


/**
 * @brief This function is called by CanIf to pass a CAN message to CanDrv for transmission.
 * 		  Synchronous
 * @note  Reentrant (thread-safe)
 * @param[in] Hth - information which HW-transmit handle shall be used for transmit. Implicitly this is also the information about the controller to use because the Hth numbers are unique inside one hardware unit.
 * @param[in] PduInfo - Pointer to SDU user memory, Data Length and Identifier.
 * @return Can_ReturnType
 * @retval CAN_OK: Write command has been accepted
 * @retval CAN_NOT_OK: Development error occurred
 * @retval CAN_BUSY: No TX hardware buffer available or pre-emptive call of Can_dcan_Write that can't be implemented re-entrant
 */
Can_ReturnType Can_dcan_Write( Can_HwHandleType Hth, const Can_PduType *PduInfo );


#if (CAN_AR_VERSION < 40300 )
/**
 * @brief Changes baudrate for a controller. This API is specified by ASR 4.1.2, but not in ASR 4.3.0
 * 		  Synchronous
 * @note  Non Reentrant
 * @param[in] Controller - controller id
 * @param[in] Baudrate - in kpbs
 * @return Std_ReturnType.
 * @retval E_OK: Service request accepted, baudrate change started
 * @retval E_NOT_OK: Service request not accepted
 */
Std_ReturnType Can_dcan_ChangeBaudrate(uint8 Controller, const uint16 Baudrate);			// not in 4.3.0


/**
 * @brief Checks if a baudrate is supported for a controller. This API is specified by ASR 4.1.2, but not in ASR 4.3.0
 * 		  Synchronous
 * @note  Reentrant
 * @param[in] Controller - controller id
 * @param[in] Baudrate - in kbps
 * @return Std_ReturnType.
 * @retval E_OK: Baudrate supported by the CAN Controller
 * @retval E_NOT_OK: Baudrate not supported / invalid CAN controller
 */
Std_ReturnType Can_dcan_CheckBaudrate(uint8 Controller, const uint16 Baudrate);			// not in 4.3.0

#endif

#if (CAN_AR_VERSION >= 40300 )
/**
 * @brief This service shall set the baud rate configuration of the CAN controller.
 * 		  Synchronous
 * @note  Reentrant for different Controllers. Non reentrant for the same Controller.
 * @param[in] Controller - CAN controller id, whose baud rate shall be set
 * @param[in] BaudRateConfigID - in kpbs, references a baud rate configuration by ID
 * @return Std_ReturnType.
 * @retval E_OK: Service request accepted, setting of (new) baud rate started
 * @retval E_NOT_OK: Service request not accepted
 */
Std_ReturnType Can_SetBaudrate( uint8 Controller, uint16 BaudRateConfigID );

#endif

/**
 * @brief This function checks if a wakeup has occurred for the given CAN controller.
 * 		  Synchronous
 * @note  Non Reentrant
 * @param[in] Controller - CAN controller id, for which the wakeup shall be checked
 * @return Can_ReturnType.
 * @retval CAN_OK: request accepted
 * @retval CAN_NOT_OK: request not accepted, a development error occurred
 */
Can_ReturnType Can_dcan_CheckWakeup( uint8 Controller );



#if (CAN_USE_WRITE_POLLING == STD_ON)
/**
 * @brief This function performs the polling of TX confirmation and TX cancellation confirmation when CAN_TX_PROCESSING is set to POLLING.
 */
void Can_dcan_MainFunction_Write( void );
#else
/** @req 4.1.2|4.3.0/SWS_Can_00178 The Can module may implement the function Can_dcan_MainFunction_Write as empty define in case no polling at all is used.*/
#define Can_dcan_MainFunction_Write()
#endif


#if (CAN_USE_READ_POLLING == STD_ON)
/**
 * @brief This function performs the polling of RX indications when CAN_RX_PROCESSING is set to POLLING.
 */
void Can_dcan_MainFunction_Read( void );
#else
/** @req 4.1.2|4.3.0/SWS_Can_00180 The Can module may implement the function Can_dcan_MainFunction_Read as empty define in case no polling at all is used.*/
#define Can_dcan_MainFunction_Read()
#endif


#if (CAN_USE_BUSOFF_POLLING == STD_ON)
/**
 * @brief This function performs the polling of bus-off events that are configured statically as 'to be polled'.
 */
void Can_dcan_MainFunction_BusOff( void );
#else
/** @req 4.1.2|4.3.0/SWS_Can_00183 The Can module may implement the function Can_dcan_MainFunction_BusOff as empty define in case no polling at all is used.*/
#define Can_dcan_MainFunction_BusOff()
#endif


#if (CAN_USE_WAKEUP_POLLING == STD_ON)
/**
 * @brief This function performs the polling of wake-up events that are configured statically as 'to be polled'.
 */
void Can_MainFunction_Wakeup( void );
#else
/** @req 4.1.2|4.3.0/SWS_Can_00185 The Can module may implement the function Can_MainFunction_Wakeup as empty define in case no polling at all is used.*/
#define Can_MainFunction_Wakeup()
#endif


/**
 * @brief This function performs the polling of CAN controller mode transitions.
 */
void Can_dcan_MainFunction_Mode( void );

#if defined(HOST_TEST)
/* Whitebox testing APIs */

Std_ReturnType Can_dcan_Test_DriverStateIsUninit( void );
Std_ReturnType Can_dcan_Test_DriverStateIsReady(void);
Std_ReturnType Can_dcan_Test_AllUnitsInState(CanIf_ControllerModeType state);
#endif

#if defined(CFG_MPC5777M) || defined(CFG_STM32) || defined(CFG_PPC) || defined(CFG_MPC5607B) || defined(CFG_MPC5645S) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C)

/**
 * Get send/receive/error statistics for a controller
 *
 * @param controller - Controller id
 * @param stats - Pointer to buffer to copy statistics into
 */
void Can_Arc_GetStatistics( uint8 controller, Can_Arc_StatisticsType * stat);

/* ArcCore specific */
#if (ARC_CAN_ERROR_POLLING == STD_ON)
/**
 * @brief This function performs polling of CAN controller errors. Added by Arccore.
 */
void Can_Arc_MainFunction_Error( void );
#endif

#endif	/* defined(CFG_MPC5777M)... */



#endif /*CAN_H_*/
/** @}*/
/** @}*/
