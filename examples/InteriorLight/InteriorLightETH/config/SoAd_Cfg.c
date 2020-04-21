
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

/*lint -w2 GENERATED_FILE */

#include "SoAd.h"
#include "SoAd_Cfg.h"

// -------------------------- nPduUdpTxBuffers --------------------------------
/** @req SWS_SOAD_00546 */ // This req implemented in the .xpt file.

// -------------------------- TcpRxBuffers ------------------------------------ 
uint8 SoAd_tmpTcpRxBuf[tmpTcpRxBufSize];


// ----------------------- TriggerTransmitBuffer ------------------------------
uint8 SoAd_triggerTransmitBuffer[TRIGGER_TRANMSIT_BUFFER_SIZE];

// -------------------------- Remote Addresses --------------------------------
SoAd_SocketRemoteAddressType SoAd_SoAdSocketConnectionGroupUDPCom_SoAdSocketConnectionUdpCom_RemoteAddress = {
	.Domain = TCPIP_AF_INET,
    .Set = true,        
    .SocketRemotePort = 6666,
    .SocketRemoteIpAddress[0] = 192, 
    .SocketRemoteIpAddress[1] = 168, 
    .SocketRemoteIpAddress[2] = 0, 
    .SocketRemoteIpAddress[3] = 5, 
};

// ------------------------- Socket Connections--------------------------------
const SoAd_SocketConnectionType SoAd_SoAdSocketConnectionGroupUDPCom_SocketConnections[] = {
	{
		// Name : "SoAdSocketConnectionUdpCom"
		//.SocketId = SOAD_SOCON_SOCKET_ID_SOADSOCKETCONNECTIONUDPCOM,
		.SocketId = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPUDPCOM_SOADSOCKETCONNECTIONUDPCOM,
		.SoAdSocketRemoteAddress = &SoAd_SoAdSocketConnectionGroupUDPCom_SoAdSocketConnectionUdpCom_RemoteAddress,
		/** @req SWS_SOAD_00546 */ // This req implemented in the .xpt file.			
		.nPduUdpTxBuffer = NULL,
		.nPduUdpTxBufferSize = 0,
		.TcpRxBuffer = NULL,
		.TcpRxBufferSize = 0,
																
		.GroupNr = 0,
		.IndexInGroup = 0 		
	},
};

// --------------------------- Socket Protocols -------------------------------
	

const SoAd_SocketUdpType SoAd_SoAdSocketConnectionGroupUDPCom_SocketUdp = {
	.UdpAliveSupervisionTimeout = 0, // In millisec,
    .SocketUdpListenOnly = FALSE,
    .SocketUdpStrictHeaderLenCheckEnabled = FALSE,
    .SocketUdpTriggerTimeout = 0, // In millisec,
    
};
// ---------------------- Socket Connection Groups ----------------------------
const SoAd_SocketConnectionGroupType SoAd_SocketConnectionGroups[] = {
	{
		 // Name : "SoAdSocketConnectionGroupUDPCom"
		.PduHeaderEnable = FALSE,
		.ResourceManagementEnable = FALSE,
		.SocketAutomaticSoConSetup = TRUE,
		.SocketFramePriorityUsed =FALSE,		
		.SocketFramePriority = 0,
		.SocketIpAddrAssignmentChgNotification = FALSE,		
		.SocketIpAddrAssignmentChgNotificationFunction = NULL,
		.SocketLocalPort = 1234,
		.SocketMsgAcceptanceFilterEnabled = TRUE,
		.SocketSoConModeChgNotification = FALSE,		
		.SocketSoConModeChgNotificationFunction = NULL,		 		
		.SocketTpRxBufferMin = 0,
		.SocketLocalAddressRef =  TcpIpConf_TcpIpLocalAddr_TcpIpLocalAddr , 
		.SoAdSocketConnection = SoAd_SoAdSocketConnectionGroupUDPCom_SocketConnections,
		.SocketProtocol = SOAD_SOCKET_PROT_UDP,
		.SocketProtocolUdp =  &SoAd_SoAdSocketConnectionGroupUDPCom_SocketUdp,
		.SocketProtocolTcp = NULL,
		.GroupType = SOAD_GROUPTYPE_LONELY_UDP, 
		.NrOfSocketConnections = 1				     
	},
};

// --------------------------- Routing Groups ---------------------------------

const SoAd_RoutingGroupType SoAd_RoutingGroups[] = {
	{
		.RoutingGroupId = 0,
		.RoutingGroupIsEnabledAtInit = TRUE,
		.RoutingGroupTxTriggerable = FALSE	
	},
};


// --------------------- RxRoutingGroupRefs ----------------------------

// -------------------- Socket Route Destinations -----------------------------
const SoAd_SocketRouteDestType SoAd_SoAdSocketRouteRxUdp6661_SocketRouteDest = {
	.SocketRouteIndex = 0,	// For now there is only 1:1 between SocketRoute and SocketRouteDest but this can change.
	//.RxPduId = 0,	
	//.RxPduRef = SoAdConf_Pdu_PDU_UDP6661_RX,
	.RxPduRef = 	PduRConf_Pdu_PDU_UDP6661_RX,
	.RxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
	.RxRoutingGroupRef = NULL,
	.RxIndicationFunction = SOAD_PDUR_RX_INDICATION_FUNCTION,
	
	.NrOfRoutingGroups = 0,		
};
// --------------------------- Socket Routes ----------------------------------
const SoAd_SocketRouteType SoAd_SocketRoutes[] = {
	{
		.RxPduHeaderId = 0uL,			
		.GroupUsed = false,
		
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPUDPCOM_SOADSOCKETCONNECTIONUDPCOM,							
		.SocketRouteDest = &SoAd_SoAdSocketRouteRxUdp6661_SocketRouteDest
	},
};
// --------------------- TxRoutingGroupRefs ----------------------------

const SoAd_RoutingGroupType* SoAd_SoAdPduRouteTxUDP6661_SoAdPduRouteDest_TxRoutingGroupRefs[] = {
		SOAD_ALWAYSENABLE,	
};

// ----------------------- Pdu Route Destinations -----------------------------
const SoAd_PduRouteDestType SoAd_SoAdPduRouteTxUDP6661_PduRouteDests[] = {
	{
		.TxPduHeaderId = 0uL,
		
		.TxUdpTriggerMode = SOAD_TRIGGER_ALWAYS,
		.TxUdpTriggerTimeout = 0,
		.TxRoutingGroupRef = SoAd_SoAdPduRouteTxUDP6661_SoAdPduRouteDest_TxRoutingGroupRefs,
		.GroupUsed = false,
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPUDPCOM_SOADSOCKETCONNECTIONUDPCOM,
        .NrOfRoutingGroups = 1,																												
	},	
};

// --------------------------- PDU Routes -------------------------------------
const SoAd_PduRouteType SoAd_PduRoutes[] = {
	{							
		.TxPduRef =  PDUR_REVERSE_PDU_ID_PDU_UDP6661_TX,
		.TxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
		.PduRouteDest = SoAd_SoAdPduRouteTxUDP6661_PduRouteDests,
		.TxConfirmationFunction = SOAD_PDUR_TX_CONFIRMATION_FUNCTION,
		.TriggerTransmitFunction = SOAD_PDUR_TRIGGER_TRANSMIT_FUNCTION,
		.NrOfPduRouteDest = 1
	},
};

const SoAd_ConfigType SoAd_Config = {
	.PduRoute = SoAd_PduRoutes,
	.RoutingGroup = SoAd_RoutingGroups,
	.SocketConnectionGroup =  SoAd_SocketConnectionGroups,
	.SocketRoute = SoAd_SocketRoutes,
	.NrOfSocketConnectionGroups = 1
};

// ------------------------- BswModules ---------------------------------------
const SoAd_BswModulesType SoAd_BswModules[] = {
	{
		.If = true,		    
	    .IfTriggerTransmit = false,
	    .IfTxConfirmation = true,
	    .LocalIpAddrAssigmentChg = false,
	    .SoConModeChg = false,
	    .Tp = false,
	    .UseCallerInfix = true,
	    .UseTypeInfix = true,	    
	    .BswModuleRefType = SOAD_BSW_MOD_REF_PDUR
	    //.BswModuleRefName;
	},
};

