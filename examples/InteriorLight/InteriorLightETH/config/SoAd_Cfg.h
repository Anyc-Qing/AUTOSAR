
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
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.2.2 */ 

#ifndef SOAD_CFG_H_
#define SOAD_CFG_H_

#if !(((SOAD_SW_MAJOR_VERSION == 2) && (SOAD_SW_MINOR_VERSION == 0)) )
#error SoAd: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((SOAD_AR_RELEASE_MAJOR_VERSION == 4) && (SOAD_AR_RELEASE_MINOR_VERSION == 2)) )
#error SoAd: Configuration file expected AUTOSAR version to be 4.2.*
#endif


/* SoAdGeneral */
#define SOAD_DEV_ERROR_DETECT           STD_ON
#define SOAD_IPV6_ADDRESS_ENABLED       STD_OFF
#define SOAD_MAIN_FUNCTION_PERIOD_MS    4
#define SOAD_VERSION_INFO_API           STD_ON

#include "TcpIp.h"


/* BSW Modules */
#define SOAD_PDUR_SUPPORT				STD_ON
#define SOAD_SD_SUPPORT					STD_OFF
#define SOAD_DOIP_SUPPORT				STD_OFF
#define SOAD_XCP_SUPPORT				STD_OFF
#define SOAD_UDPNM_SUPPORT				STD_OFF

#define SOAD_PDUR_RX_INDICATION_FUNCTION	PduR_SoAdIfRxIndication
#define SOAD_PDUR_TRIGGER_TRANSMIT_FUNCTION NULL
#define SOAD_PDUR_TX_CONFIRMATION_FUNCTION	PduR_SoAdIfTxConfirmation
#define SOAD_PDUR_LOC_ADDR_ASGN_CHG_FUNCTION NULL
#define SOAD_PDUR_MODE_CHANGE_FUNCTION NULL

#if SOAD_PDUR_SUPPORT == STD_ON
#include "PduR.h"
#include "PduR_PbCfg.h"
#endif

#if SOAD_SD_SUPPORT == STD_ON
#include "SD.h"
#endif

#if SOAD_DOIP_SUPPORT == STD_ON
#include "DoIP.h"
#include "DoIP_Cfg.h"
#endif

#if SOAD_XCP_SUPPORT == STD_ON
#include "Xcp.h"
#include "Xcp_Cfg.h"
#endif

#if SOAD_UDPNM_SUPPORT == STD_ON
#include "UdpNm.h"
#include "UdpNm_Cfg.h"
#endif


// -------------------- PDU Symbolic Names ------------------------------------
//TODO Is this right? Should be RxPduId that has symbolic name?
#define SoAdConf_Pdu_PDU_UDP6661_TX 0u
#define SOAD_PDU_ID_PDU_UDP6661_TX 0u

#define SoAdConf_SoAdRoutingGroup_AlwaysEnable 0u

#define SoAdConf_Pdu_PDU_UDP6661_RX 0u
#define SOAD_PDU_ID_PDU_UDP6661_RX 0u




// -------------------- Socket Connection Ids --------------------------
#define SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPUDPCOM_SOADSOCKETCONNECTIONUDPCOM 0
#define SoAdConf_SoAdSocketConnection_SoAdSocketConnectionUdpCom 0

// -------------------- Socket Connection Group Ids --------------------------
#define SOAD_SOCON_GROUP_ID_SOADSOCKETCONNECTIONGROUPUDPCOM 0
#define SoAdConf_SoAdSocketConnectionGroup_SoAdSocketConnectionGroupUDPCom 0

// -------------------- Socket Connection References --------------------------
#define SOAD_SOADSOCKETCONNECTIONGROUPUDPCOM_SOADSOCKETCONNECTIONUDPCOM		&(SoAd_SoAdSocketConnectionGroupUDPCom_SocketConnections[0])

// ------------------ Socket Connection Group References  ---------------------
#define SOAD_SOADSOCKETCONNECTIONGROUPUDPCOM		&(SoAd_SocketConnectionGroups[0])

// --------------------------- Routing Groups ---------------------------------
#define SOAD_ALWAYSENABLE		&(SoAd_RoutingGroups[0])			


#define SOAD_NR_OF_SOCKET_CONNECTIONS 1 
#define SOAD_NR_OF_SOCKET_CONNECTION_GROUPS 1
#define SOAD_NR_OF_PDU_ROUTES 1
#define SOAD_NR_OF_SOCKET_ROUTES 1
#define SOAD_NR_OF_TX_PDUS 1
#define SOAD_NR_OF_RX_PDUS 1
#define SOAD_NR_OF_ROUTING_GROUPS 1
#define SOAD_NR_OF_NPDUUDPTXBUFFERS 0



#define SOAD_SOADPDUROUTETXUDP6661_SOADPDUROUTEDEST_ROUTING_GROUPS_CONNECTIONS (1 * 1)

// Total number of needed data elements to support individual states for each Socket Connection.
#define SOAD_NR_OF_PDU_ROUTING_GROUP_CONNECTIONS ( \
        SOAD_SOADPDUROUTETXUDP6661_SOADPDUROUTEDEST_ROUTING_GROUPS_CONNECTIONS + \
        0)


#define SOAD_NR_OF_SOCKET_ROUTING_GROUP_CONNECTIONS 1 // This can't be zero, set to one.

extern const SoAd_ConfigType SoAd_Config;


#define TRIGGER_TRANMSIT_BUFFER_SIZE 4
extern uint8 SoAd_triggerTransmitBuffer[];

#define tmpTcpRxBufSize 1 
extern uint8 SoAd_tmpTcpRxBuf[tmpTcpRxBufSize];

/* Configuration Set Handle */
#define SoAdConfig (SoAd_Config)
#define SoAd_SoAdConfig (SoAd_Config)


#endif /* SOAD_CFG_H_ */
