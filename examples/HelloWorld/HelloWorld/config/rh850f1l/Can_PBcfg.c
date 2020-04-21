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
 */
/*lint -save -e9027 -e9054*/

	
SECTION_POSTBUILD_DATA const Can_HardwareObjectType CanHardwareObjectConfig_CanController0[] = {
	{
		.CanObjectId 		=	CanConf_CanHardwareObject_Ctrl_0_Rx_0,
		.CanHandleType  	=	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType 			=	CAN_ID_TYPE_STANDARD,
		.CanHwFilterCode	= 	0x2,
		.CanObjectType 		=	CAN_OBJECT_TYPE_RECEIVE,
		.CanHwFilterMask 	=	0x0,
		.Can_Arc_Flags 		= 	(CAN_HOH_FIFO_MASK),
	},
	{
		.CanObjectId 		=	CanConf_CanHardwareObject_Ctrl_0_Tx_0,
		.CanHandleType  	=	CAN_ARC_HANDLE_TYPE_BASIC,
		.CanIdType 			=	CAN_ID_TYPE_STANDARD,
		.CanHwFilterCode	= 	0x0,//No filter for Txobject,
		.CanObjectType 		=	CAN_OBJECT_TYPE_TRANSMIT,
		.CanHwFilterMask 	=	0x0,//No filter for Txobject ,
		.Can_Arc_Flags 		= 	(CAN_HOH_FIFO_MASK),
	},
};	
		
PduIdType  Can_swPduHandles_CanController0[16]; 


SECTION_POSTBUILD_DATA const Can_ControllerBaudrateConfigType Can_SupportedBaudrates_CanController0[] =
{
	{
		.CanControllerBaudRate = 		500,
		.CanControllerPropSeg =			2,
		.CanControllerSeg1 =			11,
		.CanControllerSeg2 =			2,
		.CanControllerSyncJumpWidth = 	1,
	},
};

SECTION_POSTBUILD_DATA const Can_ControllerConfigType CanControllerConfigData[] =
{
	{
		.CanControllerActivation =	TRUE,
		.Can_Arc_HwUnitId =			RSCAN_CH0,
		
		.CanControllerDefaultBaudrate = &Can_SupportedBaudrates_CanController0[CanConf_CanControllerBaudrateConfig_CanControllerBaudrateConfig],
		
		.CanControllerSupportedBaudrates = Can_SupportedBaudrates_CanController0,
		.CanControllerSupportedBaudratesCount = 1,
		.Can_Arc_Flags =			(CAN_CTRL_BUSOFF_PROCESSING_INTERRUPT |
									 CAN_CTRL_RX_PROCESSING_INTERRUPT |
									 CAN_CTRL_TX_PROCESSING_INTERRUPT |
									 0 |
									 CAN_CTRL_ACTIVATION | 
									 0 | 
									 CAN_CTRL_FIFO |
									 0),
		.CanCpuClockRef =			0, // TODO: PERIPHERAL_CLOCK_ ### invalid controller id ###,
    	.CanWakeupSourceRef =		0, // Unsupported
		.Can_Arc_Hoh =				&CanHardwareObjectConfig_CanController0[0],
    	.Can_Arc_HohCnt =			2,
    	.Can_Arc_TxPduHandles =     Can_swPduHandles_CanController0,
#if defined(CFG_CAN_USE_SYMBOLIC_CANIF_CONTROLLER_ID)
    	.Can_Arc_CanIfControllerId = NO_CANIF_CONTROLLER,
#endif
    	.Can_Arc_RxFifoSz	  = 	32
  	},
};

SECTION_POSTBUILD_DATA const uint8 Can_HthToSymbolicCtrl[] = {
	[CAN_ARC_CANHARDWAREOBJECT_CTRL_0_TX_0] = CanConf_CanController_CanController0,
};

SECTION_POSTBUILD_DATA const uint8 Can_HthToHohMap[] = {
	
	[CanConf_CanHardwareObject_Ctrl_0_Tx_0] = 1,
};

SECTION_POSTBUILD_DATA const uint8 Can_HwUnitToControllerId[] = {
     [RSCAN_CH0] = CanConf_CanController_CanController0,
};

SECTION_POSTBUILD_DATA const Can_HwHandleType Can_SymbolicHohToInternalHohMap [] = {
	[CanConf_CanHardwareObject_Ctrl_0_Rx_0] = CAN_ARC_CANHARDWAREOBJECT_CTRL_0_RX_0,
	[CanConf_CanHardwareObject_Ctrl_0_Tx_0] = CAN_ARC_CANHARDWAREOBJECT_CTRL_0_TX_0,
};

SECTION_POSTBUILD_DATA const Can_ConfigSetType CanConfigSetData =
{
	.CanController =	CanControllerConfigData,
	.ArcHthToSymbolicController = Can_HthToSymbolicCtrl,
	.ArcHthToHoh = Can_HthToHohMap,
	.ArcSymbolicHohToInternalHoh =	Can_SymbolicHohToInternalHohMap,
	.ArcHwUnitToController = Can_HwUnitToControllerId,
};

SECTION_POSTBUILD_DATA const Can_ConfigType CanConfigData = {
	.CanConfigSetPtr =	&CanConfigSetData,
};	

/*lint -restore*/	
