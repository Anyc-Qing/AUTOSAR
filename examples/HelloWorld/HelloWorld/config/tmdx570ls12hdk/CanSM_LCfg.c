
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

/* Generator version: 3.2.0
 * AUTOSAR version:   4.0.3
 */

#include "CanSM.h"
#include "ComM.h"
#include "CanIf.h"

const CanSM_ControllerType Controllers_CanSMManagerNetwork[] = {
	{
		.CanIfControllerId = CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg,
	},
};

/* Map ComM channel Id to the corresponding CanSM index */
const NetworkHandleType CanSMComMHandleToCanSMIndex[1] = {
	[0u] = 0u,/* ComMChannel -> CanSMManagerNetwork */
};


const CanSM_NetworkType Networks[] = {
	{
		.Controllers 					= Controllers_CanSMManagerNetwork,
		.ControllerCount 				= 1,
		.ComMNetworkHandle 				= 0u,/* ComMConf_ComMChannel_ComMChannel */
		.CanSMBorTimeTxEnsured 			= 20,//in num main calls
		.CanSMBorTimeL1 				= 10,//in num main calls
		.CanSMBorTimeL2 				= 10,//in num main calls
		.CanSMBorCounterL1ToL2 			= 10,
		.CanSMBorTxConfirmationPolling	= false,//NOT SUPPORTED IN TOOLS
#if defined(USE_DEM)
		.CanSMDemEventId 				= DEM_EVENT_ID_NULL,
#endif
		.CanTrcvAvailable				= STD_OFF,
		.CanIfTransceiverId				= 0,
		.CanSMTrcvPNEnabled				= STD_OFF,
	},
};

const CanSM_ConfigType CanSM_Config = {
	.CanSMModeRequestRepetitionMax 		= 254,
	.CanSMModeRequestRepetitionTime 	= 20,//in num main calls
	.Networks 							= Networks,
	.ChannelMap							= CanSMComMHandleToCanSMIndex,
	.ChannelMapSize   					= 1,
};

