
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
#ifndef ETHSM_CFG_H
#define ETHSM_CFG_H

#if !(((ETHSM_SW_MAJOR_VERSION == 2) && (ETHSM_SW_MINOR_VERSION == 0)) )
#error EthSM: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((ETHSM_AR_RELEASE_MAJOR_VERSION == 4) && (ETHSM_AR_RELEASE_MINOR_VERSION == 2)) )
#error EthSM: Configuration file expected AUTOSAR version to be 4.2.*
#endif

#define ETHSM_DEV_ERROR_DETECT		            STD_ON
#define ETHSM_VERSION_INFO_API		            STD_ON
#define ETHSM_DUMMY_MODE    		            STD_ON 
#define ETHSM_ETH_TRCV_SUPPORT		            STD_OFF
#define ETHSM_MAIN_FUNC_PERIOD		            0.01 /* @req 4.2.2/SWS_EthSM_00093 */ /* Use this period (in seconds) for your allocation*/
#define ETHSM_NOF_ETHIF_CONTROLLERS	            1
#define ETHSM_NETWORK_COUNT                     1 /* May be - allocate buffers depending on this count */


#endif /*ETHSM_CFG_H*/

