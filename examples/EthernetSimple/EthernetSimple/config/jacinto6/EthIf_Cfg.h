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
#ifndef ETHIF_CFG_H_
#define ETHIF_CFG_H_

/* @req 4.2.2/SWS_EthIf_00013 */
/* @req 4.2.2/SWS_EthIf_00118 */
#include "EthIf_Types.h"

/* @req 4.2.2/SWS_EthIf_00007 */ /* @req 4.2.2/SWS_EthIf_00012 */
#if !(((ETHIF_SW_MAJOR_VERSION == 1) && (ETHIF_SW_MINOR_VERSION == 1)) )
#error EthIf: Configuration file expected BSW module version to be 1.1.*
#endif

#if !(((ETHIF_AR_RELEASE_MAJOR_VERSION == 4) && (ETHIF_AR_RELEASE_MINOR_VERSION == 2)) )
#error EthIf: Configuration file expected AUTOSAR version to be 4.2.*
#endif


#define ETHIF_DEV_ERROR_DETECT                  STD_ON
#define ETHIF_ENABLE_RX_INTERRUPT               STD_ON
#define ETHIF_ENABLE_TX_INTERRUPT               STD_ON
#define ETHIF_GET_BAUDRATE                      STD_OFF
#define ETHIF_GET_COUNTER_STATE                 STD_OFF
#define ETHIF_GET_TRCV_WAKEUP_MODE_API          STD_OFF
#define ETHIF_GLOBAL_TIME_SUPPORT               STD_OFF
#define ETHIF_MAIN_FUNCTION_PERIOD              10u
#define ETHIF_MAIN_FUNCTION_RX_TIMEOUT          0u
#define ETHIF_MAX_TRCV_TOTAL                    1u
#define ETHIF_RX_INDICATION_ITERATIONS          1u
#define ETHIF_START_AUTO_NEGOTIATION            STD_OFF
#define ETHIF_TRCV_LINK_STATECHG_MAIN_RELOAD    2u    
#define ETHIF_VERSION_INFO_API                  STD_ON
#define ETHIF_VERSION_INFO_API_MACRO            STD_ON
#define ETHIF_WAKE_UP_SUPPORT                   STD_OFF
#define ETHIF_MAX_FRAME_OWNER_CFG				5

#define INVALID_VLAN_ID 0xFFFFu  /* If VLAN is not Configured, ID = 0xFFFF */
#define INVALID_TRCV_ID 0xFFu    /* If TRCV is not Configured, ID = 0xFF */
#define INVALID_ETHIF_HANDLE 0xFFu /* Invalid transmit confirmation function handle */

#define ETHIF_TRCV_SUPPORT                      STD_OFF
#define ETHIF_SWITCH_SUPPORT                    STD_OFF

#define ETHIF_CTRLS_CNT      1u  /* No of Controllers configured */
#define ETHIF_SWITCHS_CNT    0u  /* No of switches configured */


/* EthIf module configuration. */
extern const EthIf_ConfigType EthIfConfigData;

#endif /* ETHIF_CFG_H_ */
