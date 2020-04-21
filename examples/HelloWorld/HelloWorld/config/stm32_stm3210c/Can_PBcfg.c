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

#include <stdlib.h>
#include "Can.h"
#include "CanIf_Cbk.h"
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
#include "CanIf.h"
#endif

#include "MemMap.h"

SECTION_POSTBUILD_DATA const Can_HardwareObjectType CanHardwareObjectConfig_CanController0[] = {
	{
		.CanObjectId	=	CanConf_CanHardwareObject_Ctrl_0_Rx_0,//Ctrl_0_Rx_0,
		.CanHandleType	=	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType		=	CAN_ID_TYPE_STANDARD,
		.CanObjectType	=	CAN_OBJECT_TYPE_RECEIVE,
		.CanHwFilterCode =  0x0,
		.CanHwFilterMask =	0x0,
		
		.Can_Arc_EOL	= 	0
		
	},
	{
		.CanObjectId	=	CanConf_CanHardwareObject_Ctrl_0_Tx_0,//Ctrl_0_Tx_0,
		.CanHandleType	=	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType		=	CAN_ID_TYPE_STANDARD,
		.CanObjectType	=	CAN_OBJECT_TYPE_TRANSMIT,
		.CanHwFilterMask =	0, // Not applicable for Transmit object
		.Can_Arc_EOL	= 	1
	},
};

SECTION_POSTBUILD_DATA  const  Can_ControllerBaudrateConfigType Can_SupportedBaudrates_CanController0[] =
{
	{
		.CanControllerBaudRate = 		500,
		.CanControllerPropSeg =			8,
		.CanControllerSeg1 =			5,
		.CanControllerSeg2 =			4,
		.CanControllerSyncJumpWidth = 	1,
	},
};

SECTION_POSTBUILD_DATA  const  Can_ControllerConfigType CanControllerConfigData[] =
{
	{
		.CanControllerActivation	=	TRUE,
		.CanControllerId	 		=	CAN_CTRL_1,
		.CanBusOffProcessing 		=	CAN_ARC_PROCESS_TYPE_INTERRUPT,
		.CanRxProcessing 			=	CAN_ARC_PROCESS_TYPE_INTERRUPT,
		.CanTxProcessing			=	CAN_ARC_PROCESS_TYPE_INTERRUPT,
		.CanWakeupProcessing		=	CAN_ARC_PROCESS_TYPE_INTERRUPT,
		.CanCpuClockRef 			=	0,
 		.Can_Arc_Hoh 				=	&CanHardwareObjectConfig_CanController0[0],
    	.Can_Arc_Loopback 			=	FALSE,
    	.Can_Arc_Fifo 				= 	0, 
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
    	.Can_Arc_CanIfControllerId = NO_CANIF_CONTROLLER,
#endif
		.CanControllerDefaultBaudrate = 500,
    	.CanControllerSupportedBaudrates = Can_SupportedBaudrates_CanController0,
    	.CanControllerSupportedBaudratesCount = 1,
    	 	 	
  	},
};

SECTION_POSTBUILD_DATA  const  Can_ConfigSetType CanConfigSetData =
{
	.CanController =	CanControllerConfigData,
};

SECTION_POSTBUILD_DATA  const  Can_ConfigType CanConfigData = {
	.CanConfigSetPtr =	&CanConfigSetData
};
