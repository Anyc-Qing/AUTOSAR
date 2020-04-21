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

/* Generator version: 1.2.2
 * AUTOSAR version:   4.0.3
 */

#ifndef COM_CFG_H
#define COM_CFG_H

#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 2)) )
#error Com: Configuration file expected BSW module version to be 1.2.*
#endif

#if !(((COM_AR_RELEASE_MAJOR_VERSION == 4) && (COM_AR_RELEASE_MINOR_VERSION == 0)) )
#error Com: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#define COM_DEV_ERROR_DETECT					STD_ON
#define COM_SIG_GATEWAY_ENABLE					STD_OFF
#define COM_VERSION_INFO_API					STD_OFF

#define COM_MAX_BUFFER_SIZE	 					208

#define COM_MAX_N_IPDUS								4
#define COM_MAX_N_SIGNALS							10
#define COM_MAX_N_GROUP_SIGNALS						0
#define COM_N_SUPPORTED_IPDU_GROUPS					2
#define COM_MAX_N_SUPPORTED_IPDU_COUNTERS			0
#define COM_MAX_N_SUPPORTED_GWSOURCE_DESCRIPTIONS 	1
#define COM_OSEKNM_SUPPORT							STD_OFF

#define COM_E_INVALID_FILTER_CONFIGURATION		101
#define COM_E_INITIALIZATION_FAILED				102
#define COM_E_INVALID_SIGNAL_CONFIGURATION		103
#define COM_INVALID_PDU_ID						104
#define COM_INVALID_SIGNAL_ID					109
#define COM_ERROR_SIGNAL_IS_SIGNALGROUP			105

#define COM_E_TOO_MANY_IPDU						106
#define COM_E_TOO_MANY_SIGNAL					107
#define COM_E_TOO_MANY_GROUPSIGNAL				108


#if COM_MAX_N_SUPPORTED_IPDU_COUNTERS == 0
#define COM_IPDU_COUNTING_ENABLE				STD_OFF
#else
#define COM_IPDU_COUNTING_ENABLE				STD_ON
#endif


//Invalid handle for gateway signal description
#define INVALID_GWSIGNAL_DESCRIPTION_HANDLE 	0xFFFFu
#define COM_OSEKNM_INVALID_NET_ID	0xFFu

// Notifications
void Rte_COMCbk_SwcMemRx_Request(void);
#define Rte_COMCbk_SwcMemRx_Request_CALLOUT 0u


// COM SIGNAL GROUPS and SIGNAL IDs
#define ComConf_ComSignal_AdcValue          0
#define ComConf_ComSignal_SwcMemRx_BlockId          1
#define ComConf_ComSignal_SwcMemRx_Data          2
#define ComConf_ComSignal_SwcMemRx_Request          3
#define ComConf_ComSignal_SwcMemTx_BlockId          4
#define ComConf_ComSignal_SwcMemTx_Data          5
#define ComConf_ComSignal_SwcMemTx_Result          6
#define ComConf_ComSignal_rxCmdSignal          7
#define ComConf_ComSignal_rxsignal01          8
#define ComConf_ComSignal_txsignal01          9

// COM GROUP SIGNAL IDs

// Rx callouts

// Tx callouts

// Trigger transmit callouts


#endif /*COM_CFG_H*/
