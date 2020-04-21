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

/* Generator version: 6.0.0
 * AUTOSAR version:   4.3.0
 */
#include "Can.h"
#include "Can_MemMap.h"

SECTION_POSTBUILD_DATA const Can_HardwareObjectType CanHardwareObjectConfig[] = {
	{
		.CanObjectId	=	CanConf_CanHardwareObject_Ctrl_0_Rx_0, 
		.CanHandleType	=	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType		=	CAN_ID_TYPE_STANDARD,
		.CanObjectType	=	CAN_OBJECT_TYPE_RECEIVE,
		.CanHwFilterCode	= 	0x2U,
		.CanHwFilterMask 	=	0x0U,
		.Can_Arc_NrMessageBoxes = 1,
		.ArcMailboxMask 	    = 	0x1ULL,
		.ArcCanControllerId	 	=	0,
		.ArcCanHwControllerId	 	=	0,
		.Can_Arc_EOL	= 	0
	},
	{
		.CanObjectId	=	CanConf_CanHardwareObject_Ctrl_0_Tx_0, 
		.CanHandleType	=	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType		=	CAN_ID_TYPE_STANDARD,
		.CanObjectType	=	CAN_OBJECT_TYPE_TRANSMIT,
		.CanHwFilterCode	= 	0x0U,
		.CanHwFilterMask 	=	0x1fffffffU,
		.Can_Arc_NrMessageBoxes = 1,
		.ArcMailboxMask 	    = 	0x2ULL,
		.ArcCanControllerId	 	=	0,
		.ArcCanHwControllerId	 	=	0,
		.Can_Arc_EOL	= 	1
	},
};




SECTION_POSTBUILD_DATA const uint8 Can_MailBoxToHrh_CanController0[]= {
	CanConf_CanHardwareObject_Ctrl_0_Rx_0,
	CanConf_CanHardwareObject_Ctrl_0_Tx_0,
};

	
SECTION_POSTBUILD_DATA const Can_ControllerBaudrateConfigType Can_SupportedBaudrates_CanController0[] =
{
	{
		.CanControllerBaudRate = 		500,
		.CanControllerPropSeg =			8,
		.CanControllerSeg1 =			5,
		.CanControllerSeg2 =			2,
		.CanControllerSyncJumpWidth = 	1,
	},
};


	
SECTION_POSTBUILD_DATA const Can_ControllerConfigType CanControllerConfigData[] =
{
	{
		.CanControllerActivation	=	TRUE,
		.CanHwUnitId                =	(CanControllerIdType) 0,										
		
		.CanBusOffProcessing 		=	CAN_ARC_PROCESS_TYPE_INTERRUPT,
		.CanRxProcessing 			=	CAN_ARC_PROCESS_TYPE_INTERRUPT,
		.CanTxProcessing			=	CAN_ARC_PROCESS_TYPE_INTERRUPT,
		.CanWakeupProcessing		=	CAN_ARC_PROCESS_TYPE_INTERRUPT,
		
 		.Can_Arc_Hoh 				=	CanHardwareObjectConfig,
    	
		.CanControllerDefaultBaudrate = 500,
    	.CanControllerSupportedBaudrates = Can_SupportedBaudrates_CanController0,
    	.CanControllerSupportedBaudratesCount = 1,
    	.CanControllerPropSeg		=	8,
		.CanControllerSeg1			=	5,    	    	 	 	
		.CanControllerSeg2			=	2,
		.Can_Arc_MailBoxToHrh       =     Can_MailBoxToHrh_CanController0,
		.Can_Arc_Loopback           =   0,
  	},
};

SECTION_POSTBUILD_DATA const Can_ConfigSetType CanConfigSetData =
{
	.CanController 	=	CanControllerConfigData,
	.ArcCanHardwareObjects = CanHardwareObjectConfig
};

SECTION_POSTBUILD_DATA const Can_ConfigType CanConfigData = {
	.CanConfigSetPtr =	&CanConfigSetData,
};
