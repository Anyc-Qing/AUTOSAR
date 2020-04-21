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

/* Lint Exceptions:
 * - Unpermitted operand to operator '|' (9027)
 * - designated initializer used with array of unspecified dimension (9054)
 * - A zero has been given as right argument to operator '|' (835)
 */
/*lint -save -e9027 -e9054 -e835*/

#define COUNTOF(a) (sizeof(a)/sizeof(*(a)))


	
SECTION_POSTBUILD_DATA const Can_HardwareFilterType CanHardwareFilterConfig_CanController0_Ctrl_0_Rx_0[] = {
		{
			.CanHwFilterCode	=   0x0,
			.CanHwFilterMask	=   0x0,
		},
};
	
SECTION_POSTBUILD_DATA const Can_HardwareObjectType CanHardwareObjectConfig_CanController0[] = {
	{
		.CanObjectId 		=	CanConf_CanHardwareObject_Ctrl_0_Rx_0,
		.CanHandleType  	=	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType 			=	CAN_ID_TYPE_STANDARD,
		.CanObjectType 		=	CAN_OBJECT_TYPE_RECEIVE,

		.CanHwFilterSize    =   COUNTOF(CanHardwareFilterConfig_CanController0_Ctrl_0_Rx_0),
		.CanHwFilterPtr     =   CanHardwareFilterConfig_CanController0_Ctrl_0_Rx_0,
	},
	{
		.CanObjectId 		=	CanConf_CanHardwareObject_Ctrl_0_Tx_0,
		.CanHandleType  	=	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType 			=	CAN_ID_TYPE_STANDARD,
		.CanObjectType 		=	CAN_OBJECT_TYPE_TRANSMIT,

		.CanHwFilterSize    =   0,        /* No filter for Txobject */
		.CanHwFilterPtr     =   NULL_PTR, /* No filter for Txobject */	
	},
};	




SECTION_POSTBUILD_DATA const Can_ControllerBaudrateConfigType Can_SupportedBaudrates_CanController0[] =
{
	{
		.CanControllerBaudRate = 		500,
		.CanControllerPropSeg =			6,
		.CanControllerSeg1 =			6,
		.CanControllerSeg2 =			3,
		.CanControllerSyncJumpWidth = 	2,
	},
};

SECTION_POSTBUILD_DATA const Can_ControllerConfigType CanControllerConfigData[] =
{
	{
		.CanControllerActivation =	TRUE,
		.Can_Arc_HwUnitId =		    CAN_CTRL_0,

		.CanControllerDefaultBaudrate = &Can_SupportedBaudrates_CanController0[CanConf_CanControllerBaudrateConfig_CanControllerBaudrateConfig],		
		.CanControllerSupportedBaudrates = Can_SupportedBaudrates_CanController0,
		.CanControllerSupportedBaudratesCount = 1,
    	.CanWakeupSourceRef =		0, /* CanWakeupSourceRef is not supported */ 
		.Can_Arc_Hoh =				&CanHardwareObjectConfig_CanController0[0],
    	.Can_Arc_HohCnt =			2,
		.Can_Arc_Flags =			(CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT |
									 CAN_CTRL_RX_PROCESSING_INTERRUPT |
									 CAN_CTRL_TX_PROCESSING_INTERRUPT |
									 0 |
									 CAN_CTRL_ACTIVATION | 
									 0 | 
									 0 |
									 0),
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
    	.Can_Arc_CanIfControllerId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg,
#endif
  	},
};

SECTION_POSTBUILD_DATA const uint8 Can_HthToSymbolicCtrl[] = {
	[CAN_ARC_CANHARDWAREOBJECT_CTRL_0_TX_0] = CanConf_CanController_CanController0,
};

SECTION_POSTBUILD_DATA const uint8 Can_HthToHohMap[] = {
	[CAN_ARC_CANHARDWAREOBJECT_CTRL_0_TX_0] = 1,
};

SECTION_POSTBUILD_DATA const uint8 Can_HwUnitToControllerId[] = {
     [CAN_CTRL_0] = CanConf_CanController_CanController0,
};

SECTION_POSTBUILD_DATA const Can_HwHandleType Can_SymbolicHohToInternalHohMap [] = {
	[CanConf_CanHardwareObject_Ctrl_0_Rx_0] = CAN_ARC_CANHARDWAREOBJECT_CTRL_0_RX_0,
	[CanConf_CanHardwareObject_Ctrl_0_Tx_0] = CAN_ARC_CANHARDWAREOBJECT_CTRL_0_TX_0,
};


SECTION_POSTBUILD_DATA const Can_ConfigSetType CanConfigSetData =
{
	.CanController = CanControllerConfigData,
	.ArcHthToSymbolicController = Can_HthToSymbolicCtrl,
	.ArcHthToHoh = Can_HthToHohMap,
	.ArcSymbolicHohToInternalHoh =	Can_SymbolicHohToInternalHohMap,
	.ArcHwUnitToController = Can_HwUnitToControllerId,
};

SECTION_POSTBUILD_DATA const Can_ConfigType CanConfigData = {
	.CanConfigSetPtr =	&CanConfigSetData,
};	
/*lint -restore*/
	
