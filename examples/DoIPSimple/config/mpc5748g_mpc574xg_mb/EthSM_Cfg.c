
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

/* Generator version: 2.0.0
 * AUTOSAR version:   4.2.2
 */

#include "EthSM.h"
#if ETHSM_DUMMY_MODE != STD_ON
#include "EthIf.h"
#include "EthIf_PBcfg.h"
#endif

static const EthSM_NetworkConfigType EthSMNetworks[] = {
	{
		.EthIfControllerId  		    = 0,	/* No reference, assigned by default */
		.ComMNetworkHandle 				= ComMConf_ComMChannel_EthChnl,        		
#if defined(USE_DEM) 
		.ETHSM_E_LINK_DOWN              = DEM_EVENT_ID_NULL,
#endif
		.EthTrcvAvailable		        = STD_OFF
	},
};


static const EthSM_ConfigSetType EthSMConfigSet = {
	.NofNetworks =              1,
	.Networks =                 EthSMNetworks,
};
/* @req 4.2.2/SWS_EthSM_00061 */
/* @req 4.2.2/SWS_EthSM_00081 */
const EthSM_ConfigType EthSMConfig = {	
	.ConfigSet =                &EthSMConfigSet,
};

