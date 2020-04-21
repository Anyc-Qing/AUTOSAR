
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

// Number of controller configs
#define CAN_ARC_CTRL_CONFIG_CNT			1

#define CAN_DEV_ERROR_DETECT			STD_ON
#define CAN_VERSION_INFO_API			STD_ON
#define CAN_MULTIPLEXED_TRANSMISSION	STD_OFF  // Not supported
#define CAN_WAKEUP_SUPPORT				STD_OFF  // Not supported
#define CAN_HW_TRANSMIT_CANCELLATION	STD_OFF  // Not supported
#define CAN_USE_WRITE_POLLING			STD_OFF  // Not supported
#define CAN_USE_READ_POLLING			STD_OFF  // Not supported
#define CAN_USE_BUSOFF_POLLING			STD_OFF  // Not supported
#define CAN_USE_WAKEUP_POLLING			STD_OFF  // Not supported

#define NO_CANIF_CONTROLLER 0xFF

typedef enum {
	CAN_CTRL_1 = 0,
	CAN_CTRL_2 = 1,
	CAN_CONTROLLER_CNT = 2
} CanControllerIdType;

typedef union {
     uint32 R;
     struct {
         uint32:24;
         uint32 BIT1ERR:1;
         uint32 BIT0ERR:1;
         uint32 ACKERR:1;
         uint32 CRCERR:1;
         uint32 FRMERR:1;
         uint32 STFERR:1;
         uint32 TXWRN:1;
         uint32 RXWRN:1;
     } B;
 } Can_Arc_ErrorType;
 
 typedef struct Can_HardwareObjectStruct {
      /* PC/PB, Specifies the type (Full-CAN or Basic-CAN) of a hardware object. */
      Can_Arc_HohType CanHandleType;

      /* PC/PB, Specifies whether the IdValue is of type - standard identifier - extended
       * identifier - mixed mode ImplementationType: Can_IdType */
      Can_IdTypeType CanIdType;

      /* PC/PB Specifies (together with the filter mask) the identifiers range that passes
       *  the hardware filter. */
      uint32 CanHwFilterCode;

      /* PC/PB Holds the handle ID of HRH or HTH. The value of this parameter is unique
       *  in a given CAN Driver, and it should start with 0 and continue without any
       *  gaps. The HRH and HTH Ids are defined under two different name-spaces.
       *  Example: HRH0-0, HRH1-1, HTH0-2, HTH1-3 */
      uint32 CanObjectId;

      /* PC/PB, Specifies if the HardwareObject is used as Transmit or as Receive object */
      Can_ObjectTypeType CanObjectType;

      /* PC/PB The filter mask that is used for hardware filtering together
       * with the CanHwFilterCode */
      Can_FilterMaskType CanHwFilterMask;

      // A "1" in this mask tells the driver that that HW Message Box should be
      // occupied by this Hoh. A "1" in bit 31(ppc) occupies Mb 0 in HW.
      uint32 Can_Arc_MbMask;

      // End Of List. Set to TRUE is this is the last object in the list.
      boolean Can_Arc_EOL;
} Can_HardwareObjectType;

typedef struct {

       boolean CanControllerActivation;

       //  This parameter provides the controller ID which is unique in a given CAN
       //  Driver. The value for this parameter starts with 0 and continue without any
       //  gaps.

       CanControllerIdType CanControllerId;

       // Specifies the default baud rate in kbps (from the list CanControllerSupportedBaudrates)

       uint16 CanControllerDefaultBaudrate;

       // Specifies the supported baud rates
       const Can_ControllerBaudrateConfigType * const CanControllerSupportedBaudrates;

       // Specifices the length of the CanControllerSupportedBaudrates list
       uint16 CanControllerSupportedBaudratesCount;

       //  Reference to the CPU clock configuration, which is set in the MCU driver
       //  configuration
       uint32 CanCpuClockRef;

       //  This parameter contains a reference to the Wakeup Source for this
       //  controller as defined in the ECU State Manager. Implementation Type:
       //  reference to EcuM_WakeupSourceType
       uint32 CanWakeupSourceRef;

       // List of Hoh id's that belong to this controller
       const Can_HardwareObjectType  * const Can_Arc_Hoh;
  #if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
       uint8 Can_Arc_CanIfControllerId;
  #endif

       //  Enables / disables API Can_MainFunction_BusOff() for handling busoff
       //  events in polling mode.
       // INTERRUPT or POLLING
       Can_Arc_ProcessType CanBusOffProcessing;

       //  Enables / disables API Can_MainFunction_Read() for handling PDU
       //  reception events in polling mode.
       Can_Arc_ProcessType CanRxProcessing;

       //  Enables / disables API Can_MainFunction_Write() for handling PDU
       //  transmission events in polling mode.
       Can_Arc_ProcessType CanTxProcessing;

       //  Enables / disables API Can_MainFunction_Wakeup() for handling wakeup
       //  events in polling mode.
       Can_Arc_ProcessType CanWakeupProcessing;

       boolean Can_Arc_Loopback;

       const uint8 * const Can_Arc_MailBoxToHrh;

       // Set this to use the fifo
       boolean Can_Arc_Fifo;

       // A "1" in this mask tells the driver that that HW Message Box should be
       // occupied by this Hoh. A "1" in bit 31(ppc) occupies Mb 0 in HW.
       uint32 Can_Arc_MbMask;

       // End Of List. Set to TRUE is this is the last object in the list.
       boolean Can_Arc_EOL;
       // Specifies propagation delay in time quantas.
       uint32 CanControllerPropSeg;

       // Specifies phase segment 1 in time quantas.
       uint32 CanControllerSeg1;

       // Specifies phase segment 2 in time quantas.
       uint32 CanControllerSeg2;
} Can_ControllerConfigType;

typedef struct {
     const Can_ControllerConfigType *CanController;
} Can_ConfigSetType;

 /** @req 4.1.2|4.3.0/SWS_Can_00413 Can_ConfigType*//* Can_ConfigType */
 typedef struct {
      // This is the multiple configuration set container for CAN Driver
      // Multiplicity 1..*
      const Can_ConfigSetType  *CanConfigSetPtr;
  } Can_ConfigType;
  
/* Publish the configuration */
extern const Can_ConfigType CanConfigData;
  
#define CanConf_CanController_CanController0	(CanControllerIdType)0
#define Can_CanController0	CanConf_CanController_CanController0
#define CanConf_CanHardwareObject_Ctrl_0_Tx_0 (Can_HwHandleType)0
#define Can_Ctrl_0_Tx_0 CanConf_CanHardwareObject_Ctrl_0_Tx_0
#define NUM_OF_HTHS (Can_HwHandleType)1

#define CanConf_CanHardwareObject_Ctrl_0_Rx_0 (Can_HwHandleType)1
#define Can_Ctrl_0_Rx_0 CanConf_CanHardwareObject_Ctrl_0_Rx_0

/* Configuration Set Handles */
#define CanConfigSet (CanConfigData)
#define Can_CanConfigSet (CanConfigData)




#endif /*CAN_CFG_H_*/

