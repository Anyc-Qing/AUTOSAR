
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

/* Generator version: 5.0.0
 * AUTOSAR version:   4.1.2
 */

#ifndef CAN_CFG_H_
#define CAN_CFG_H_
#include "Can_GeneralTypes.h"

#if !(((CAN_SW_MAJOR_VERSION == 5) && (CAN_SW_MINOR_VERSION == 0)) )
#error Can: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((CAN_AR_MAJOR_VERSION == 4) && (CAN_AR_MINOR_VERSION == 1)) )
#error Can: Configuration file expected AUTOSAAR version to be 4.1.*
#endif

/* Number of controller configs */
#define CAN_ARC_CTRL_CONFIG_CNT			1



#define CAN_DEV_ERROR_DETECT			STD_ON
#define CAN_VERSION_INFO_API			STD_ON
#define CAN_MULTIPLEXED_TRANSMISSION	STD_OFF  /* Not supported */
#define CAN_WAKEUP_SUPPORT				STD_OFF  /* Not supported */
#define CAN_HW_TRANSMIT_CANCELLATION	STD_OFF  /* Not supported */
#define ARC_CAN_ERROR_POLLING			STD_OFF
#define CAN_USE_WRITE_POLLING			STD_OFF
#define CAN_USE_READ_POLLING			STD_OFF
#define CAN_USE_BUSOFF_POLLING			STD_OFF
#define CAN_USE_WAKEUP_POLLING			STD_OFF  /* Not supported */

#define CAN_ARC_LOG_UNIT_CNT			1U
#define CAN_ARC_HW_UNIT_HIGH			0
#define CAN_ARC_HW_UNIT_CNT				(CAN_ARC_HW_UNIT_HIGH + 1U) 

#define USE_CAN_CTRL_0 STD_ON
#define USE_CAN_CTRL_1 STD_OFF

typedef enum {
	CAN_CTRL_0 = 0u,
	CAN_CTRL_1 = 1u,
} CanHwUnitIdType;

typedef union {
    uint32 R;
    struct {
        uint32:27;
        uint32 ACKER:1;
        uint32 BERR:1;
        uint32 STER:1;
        uint32 FMER:1;
        uint32 CRCER:1;
    } B;
  } Can_Arc_ErrorType;


 typedef struct Can_HardwareFilterStruct {
     /* PC/PB Specifies (together with the filter mask) the identifiers range that passes
      *  the hardware filter. */
     uint32 CanHwFilterCode;

     /* PC/PB The filter mask that is used for hardware filtering together
      * with the CanHwFilterCode */
     uint32 CanHwFilterMask;
 }Can_HardwareFilterType;

 typedef struct Can_HardwareObjectStruct {
     /* PC/PB Holds the handle ID of HRH or HTH. The value of this parameter is unique
     *  in a given CAN Driver, and it should start with 0 and continue without any
     *  gaps. The HRH and HTH Ids are defined under two different name-spaces.
     *  Example: HRH0-0, HRH1-1, HTH0-2, HTH1-3 */
     uint8 CanObjectId;

     /* PC/PB, Specifies the type (Full-CAN or Basic-CAN) of a hardware object. */
     Can_Arc_HohType CanHandleType;

     /* PC/PB, Specifies whether the IdValue is of type - standard identifier - extended
     * identifier - mixed mode ImplementationType: Can_IdType */
     Can_IdTypeType CanIdType;

     /* PC/PB, Specifies if the HardwareObject is used as Transmit or as Receive object */
     Can_ObjectTypeType CanObjectType;

     /* Size of the Filter assigned to the Hardware Object*/
     uint16 CanHwFilterSize;

     /* Pointer to the list of the Hardware Filters*/
     const Can_HardwareFilterType* const CanHwFilterPtr;
  } Can_HardwareObjectType;

  typedef struct Can_ControllerConfigStruct{
      /* Defines if a CAN controller is used in the configuration - Currently not used. */
      bool CanControllerActivation;

      /* This parameter provides the controller ID which is unique in a given CAN
      Driver. The value for this parameter starts with 0 and continue without any gaps. */
      CanHwUnitIdType Can_Arc_HwUnitId;

      /* Specifies the default baud rate in kbps (from the list CanControllerSupportedBaudrates). */
      const Can_ControllerBaudrateConfigType *CanControllerDefaultBaudrate;

      /* Specifies the supported baud rates. */
      const Can_ControllerBaudrateConfigType * const CanControllerSupportedBaudrates;

      /* Specifices the length of the CanControllerSupportedBaudrates list. */
      uint16 CanControllerSupportedBaudratesCount;

      /* This parameter contains a reference to the Wakeup Source for this controller as defined
       in the ECU State Manager. Implementation Type: reference to EcuM_WakeupSourceType */
      uint32 CanWakeupSourceRef;

      /* List of Hoh id's that belong to this controller*/
      const Can_HardwareObjectType  * const Can_Arc_Hoh;

      /* Total number of HOHs in Can_Arc_Hoh */
      uint8 Can_Arc_HohCnt;

      /* Flags, See CAN_CTRL_XX macros */
      uint32 Can_Arc_Flags;

  #if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
      uint8 Can_Arc_CanIfControllerId;
  #endif

  } Can_ControllerConfigType;
  
  typedef struct {
     const Can_ControllerConfigType *CanController;

     const  uint8 * const ArcHthToSymbolicController;
     const  uint8 * const ArcHthToHoh;
     const  uint8 * const ArcHwUnitToController;
     const Can_HwHandleType * const ArcSymbolicHohToInternalHoh;
} Can_ConfigSetType;

 /** @req 4.1.2|4.3.0/SWS_Can_00413 Can_ConfigType*//* Can_ConfigType */
 typedef struct {
      // This is the multiple configuration set container for CAN Driver
      // Multiplicity 1..*
      const Can_ConfigSetType  *CanConfigSetPtr;
  } Can_ConfigType;

/* Type for holding global information used by the driver */
typedef struct {
    Can_DriverStateType initRun; /* If Can_Init() have been run */
    const Can_ConfigType * config; /* Pointer to config */

    uint8 channelMap[CAN_ARC_HW_UNIT_CNT];
    uint8 channelToHwChannel[CAN_ARC_LOG_UNIT_CNT];
} Can_GlobalType;

extern Can_GlobalType Can_Global;
/* Publish the configuration */
extern const Can_ConfigType CanConfigData;


#define Can_Arc_Error(_id,_err)


#define CanConf_CanController_CanController0	(uint8)0
#define Can_CanController0	CanConf_CanController_CanController0

#define CAN_ARC_CANHARDWAREOBJECT_CTRL_0_TX_0 (Can_HwHandleType)0

#define NUM_OF_HTHS (Can_HwHandleType)1U

#define CAN_ARC_CANHARDWAREOBJECT_CTRL_0_RX_0 (Can_HwHandleType)1

#define CanConf_CanHardwareObject_Ctrl_0_Rx_0 (Can_HwHandleType)0
#define Can_Ctrl_0_Rx_0 CanConf_CanHardwareObject_Ctrl_0_Rx_0
#define CanConf_CanHardwareObject_Ctrl_0_Tx_0 (Can_HwHandleType)1
#define Can_Ctrl_0_Tx_0 CanConf_CanHardwareObject_Ctrl_0_Tx_0

#define NUM_OF_HOHS (Can_HwHandleType)2U

/* Configuration Set Handles */
#define CanConfigSet (CanConfigData)
#define Can_CanConfigSet (CanConfigData)

/* CanControllerBaudRateConfigID */
#define CanConf_CanControllerBaudrateConfig_CanControllerBaudrateConfig 0


/* HOH flags */
#define CAN_HOH_FIFO_MASK           (1UL)

/* Controller flags */
#define CAN_CTRL_RX_PROCESSING_INTERRUPT        ((uint32)1u)
#define CAN_CTRL_RX_PROCESSING_POLLING          0u
#define CAN_CTRL_TX_PROCESSING_INTERRUPT        ((uint32)1u<<1u)
#define CAN_CTRL_TX_PROCESSING_POLLING          0u
#define CAN_CTRL_WAKEUP_PROCESSING_INTERRUPT    ((uint32)1u<<2u)
#define CAN_CTRL_WAKEUP_PROCESSING_POLLING      0u
#define CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT    ((uint32)1u<<3u)
#define CAN_CTRL_BUSOFF_PROCESSING_POLLING      0u
#define CAN_CTRL_ACTIVATION                     ((uint32)1u<<4u)

#define CAN_CTRL_LOOPBACK                       ((uint32)1u<<5u)
#define CAN_CTRL_FIFO                           ((uint32)1u<<6u)

#define CAN_CTRL_ERROR_PROCESSING_INTERRUPT     ((uint32)1u<<7u)
#define CAN_CTRL_ERROR_PROCESSING_POLLING       0u


#endif /*CAN_CFG_H_*/
