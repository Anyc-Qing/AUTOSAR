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

/* Generator version: 1.1.0
 * AUTOSAR version:   4.2.2
 */

#include "EthIf.h"
#if defined(USE_ETHTRCV)
#include "EthTrcv_Cfg.h"
#endif
#if defined(USE_ETHSWITCH)
#include "EthSwitch_Cfg.h"
#endif
#include "Eth.h"
#include "EthIf_PBcfg.h"

/* Globally fulfilled requirements */
/*@req 4.2.2/SWS_EthIf_00117 */


/* @req 4.2.2/SWS_EthIf_00107 */ /* @req 4.2.2/SWS_EthIf_00106 */

/** EthIf RxIndication callback functions list */
const EthIfULRxIndicationType EthIfULRxIndicationCfg[] = {
	TcpIp_RxIndication,
	TcpIp_RxIndication,

};



/** EthIf Frame Owner configuration data **/
const EthIf_Frame_Owner_type EthIf_Owners[] = {
    {
        .EthIfFrameType 	= 2048,        
		.EthIfRxIndicationHandle  = ETHIF_RXHANDLE_ETHIFRXINDICATIONCONFIG1,
		.EthIfTxConfirmationHandle = INVALID_ETHIF_HANDLE,
	
    },
    {
        .EthIfFrameType 	= 2054,        
		.EthIfRxIndicationHandle  = ETHIF_RXHANDLE_ETHIFRXINDICATIONCONFIG2,
		.EthIfTxConfirmationHandle = INVALID_ETHIF_HANDLE,
	
    },
}; 

/** EthIf Controller Specific configuration data **/
const EthIf_Controller_type EthIf_Controllers[] = { 
    {
        .EthIfCtrlId        	= EthIfConf_EthIfController_EthIfController,
		.EthIfMaxTxBufsTotal 	= 2,
        .EthIfCtrlMtu 			= 1500,
        .EthIfEthCtrlId 		= EthConf_EthCtrlConfig_EthCtrlConfig,
        .EthIfEthTrcvId         = INVALID_TRCV_ID,  
        .EthIfVlanId 			= INVALID_VLAN_ID,
    },
};

/** EthIf configuration data initialization **/
const EthIf_ConfigType EthIfConfigData = {
	.EthIfCtrlCfg         = EthIf_Controllers,
	.EthIfOwnerCfg        = EthIf_Owners,
	.EthIfSwitchCfg       = NULL,	
	.EthIfULTxConfirmation  = NULL,
	.EthIfULRxIndication	= EthIfULRxIndicationCfg,

	.EthIfCtrlCount       = 1,
	.EthIfTrcvCount       = 0,
	.EthIfSwitchCount     = 0,
	.EthIfOwnersCount     = 2,
};
