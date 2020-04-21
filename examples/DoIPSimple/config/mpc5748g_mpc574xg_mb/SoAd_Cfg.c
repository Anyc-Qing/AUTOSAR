
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
SoAd_SocketRemoteAddressType SoAd_SoAdSocketConnectionGroup_DoIP_TCP_SoAdSocketConnection_DoIP_TCP_RemoteAddress = {
	.Domain = TCPIP_AF_INET,
    .Set = true,        
    .SocketRemotePort = 0,
    .SocketRemoteIpAddress[0] = 198, 
    .SocketRemoteIpAddress[1] = 18, 
    .SocketRemoteIpAddress[2] = 32, 
    .SocketRemoteIpAddress[3] = 1, 
};
SoAd_SocketRemoteAddressType SoAd_SoAdSocketConnectionGroup_DoIP_UDP_SoAdSocketConnection_DoIP_UDP_RemoteAddress = {
	.Domain = TCPIP_AF_INET,
    .Set = true,        
    .SocketRemotePort = 0,
    .SocketRemoteIpAddress[0] = 198, 
    .SocketRemoteIpAddress[1] = 18, 
    .SocketRemoteIpAddress[2] = 32, 
    .SocketRemoteIpAddress[3] = 1, 
};

// ------------------------- Socket Connections--------------------------------
const SoAd_SocketConnectionType SoAd_SoAdSocketConnectionGroup_DoIP_TCP_SocketConnections[] = {
	{
		// Name : "SoAdSocketConnection_DoIP_TCP"
		//.SocketId = SOAD_SOCON_SOCKET_ID_SOADSOCKETCONNECTION_DOIP_TCP,
		.SocketId = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUP_DOIP_TCP_SOADSOCKETCONNECTION_DOIP_TCP,
		.SoAdSocketRemoteAddress = &SoAd_SoAdSocketConnectionGroup_DoIP_TCP_SoAdSocketConnection_DoIP_TCP_RemoteAddress,
		/** @req SWS_SOAD_00546 */ // This req implemented in the .xpt file.			
		.nPduUdpTxBuffer = NULL,
		.nPduUdpTxBufferSize = 0,
		.TcpRxBuffer = NULL,
		.TcpRxBufferSize = 0,
																
		.GroupNr = 0,
		.IndexInGroup = 0 		
	},
};

const SoAd_SocketConnectionType SoAd_SoAdSocketConnectionGroup_DoIP_UDP_SocketConnections[] = {
	{
		// Name : "SoAdSocketConnection_DoIP_UDP"
		//.SocketId = SOAD_SOCON_SOCKET_ID_SOADSOCKETCONNECTION_DOIP_UDP,
		.SocketId = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUP_DOIP_UDP_SOADSOCKETCONNECTION_DOIP_UDP,
		.SoAdSocketRemoteAddress = &SoAd_SoAdSocketConnectionGroup_DoIP_UDP_SoAdSocketConnection_DoIP_UDP_RemoteAddress,
		/** @req SWS_SOAD_00546 */ // This req implemented in the .xpt file.			
		.nPduUdpTxBuffer = NULL,
		.nPduUdpTxBufferSize = 0,
		.TcpRxBuffer = NULL,
		.TcpRxBufferSize = 0,
																
		.GroupNr = 1,
		.IndexInGroup = 0 		
	},
};

// --------------------------- Socket Protocols -------------------------------
	
const SoAd_SocketTcpType SoAd_SoAdSocketConnectionGroup_DoIP_TCP_SocketTcp = {
	.SocketTcpImmediateTpTxConfirmation = FALSE,
    .SocketTcpInitiate = FALSE,
    .SocketTcpKeepAlive = FALSE,
    .SocketTcpKeepAliveInterval = 0, // In millisec
    .SocketTcpKeepAliveProbesMax = 0,
    .SocketTcpKeepAliveTime = 0, // In millisec
    .SocketTcpNoDelay = 0,
    .SocketTcpTxQuota = 0,
};
	

const SoAd_SocketUdpType SoAd_SoAdSocketConnectionGroup_DoIP_UDP_SocketUdp = {
	.UdpAliveSupervisionTimeout = 0, // In millisec,
    .SocketUdpListenOnly = FALSE,
    .SocketUdpStrictHeaderLenCheckEnabled = FALSE,
    .SocketUdpTriggerTimeout = 0, // In millisec,
    
};
// ---------------------- Socket Connection Groups ----------------------------
const SoAd_SocketConnectionGroupType SoAd_SocketConnectionGroups[] = {
	{
		 // Name : "SoAdSocketConnectionGroup_DoIP_TCP"
		.PduHeaderEnable = FALSE,
		.ResourceManagementEnable = FALSE,
		.SocketAutomaticSoConSetup = FALSE,
		.SocketFramePriorityUsed =FALSE,		
		.SocketFramePriority = 0,
		.SocketIpAddrAssignmentChgNotification = FALSE,		
		.SocketIpAddrAssignmentChgNotificationFunction = NULL,
		.SocketLocalPort = 13400,
		.SocketMsgAcceptanceFilterEnabled = FALSE,
		.SocketSoConModeChgNotification = TRUE,		
		.SocketSoConModeChgNotificationFunction = SOAD_DOIP_MODE_CHANGE_FUNCTION,		 		
		.SocketTpRxBufferMin = 0,
		.SocketLocalAddressRef =  TcpIpConf_TcpIpLocalAddr_TcpIpLocalAddr , 
		.SoAdSocketConnection = SoAd_SoAdSocketConnectionGroup_DoIP_TCP_SocketConnections,
		.SocketProtocol = SOAD_SOCKET_PROT_TCP,
		.SocketProtocolUdp = NULL,
		.SocketProtocolTcp =  &SoAd_SoAdSocketConnectionGroup_DoIP_TCP_SocketTcp,
		.GroupType = SOAD_GROUPTYPE_LISTEN_TCP, 
		.NrOfSocketConnections = 1				     
	},
	{
		 // Name : "SoAdSocketConnectionGroup_DoIP_UDP"
		.PduHeaderEnable = FALSE,
		.ResourceManagementEnable = FALSE,
		.SocketAutomaticSoConSetup = FALSE,
		.SocketFramePriorityUsed =FALSE,		
		.SocketFramePriority = 0,
		.SocketIpAddrAssignmentChgNotification = FALSE,		
		.SocketIpAddrAssignmentChgNotificationFunction = NULL,
		.SocketLocalPort = 13400,
		.SocketMsgAcceptanceFilterEnabled = FALSE,
		.SocketSoConModeChgNotification = TRUE,		
		.SocketSoConModeChgNotificationFunction = SOAD_DOIP_MODE_CHANGE_FUNCTION,		 		
		.SocketTpRxBufferMin = 0,
		.SocketLocalAddressRef =  TcpIpConf_TcpIpLocalAddr_TcpIpLocalAddr , 
		.SoAdSocketConnection = SoAd_SoAdSocketConnectionGroup_DoIP_UDP_SocketConnections,
		.SocketProtocol = SOAD_SOCKET_PROT_UDP,
		.SocketProtocolUdp =  &SoAd_SoAdSocketConnectionGroup_DoIP_UDP_SocketUdp,
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
const SoAd_SocketRouteDestType SoAd_SoAdSocketRoute_DoIP_UDP_SocketRouteDest = {
	.SocketRouteIndex = 0,	// For now there is only 1:1 between SocketRoute and SocketRouteDest but this can change.
    //.RxPduId = 0,
	//.RxPduRef = SoAdConf_Pdu_DoIP_SoAd_UDP_Rx,
	.RxPduRef = 	DoIPConf_Pdu_DoIP_SoAd_UDP_Rx,
	.RxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
	.RxRoutingGroupRef = NULL,
	.RxIndicationFunction = SOAD_DOIP_RX_INDICATION_FUNCTION,
	
	.NrOfRoutingGroups = 0,		
};
const SoAd_SocketRouteDestType SoAd_SoAdSocketRoute_DoIP_TCP_SocketRouteDest = {
	.SocketRouteIndex = 1,	// For now there is only 1:1 between SocketRoute and SocketRouteDest but this can change.
    //.RxPduId = 0,
	//.RxPduRef = SoAdConf_Pdu_DoIP_SoAd_TCP_Rx,
	.RxPduRef = 	DoIPConf_Pdu_DoIP_SoAd_TCP_Rx,
	.RxUpperLayerType = SOAD_RX_UPPER_LAYER_TP,
	.RxRoutingGroupRef = NULL,
	.RxIndicationFunction = SOAD_DOIP_RX_INDICATION_FUNCTION,
	.SoAdTpCopyRxData = SOAD_DOIP_TP_COPY_RX_DATA_FUNCTION,
	.SoAdTpStartofReception = SOAD_DOIP_TP_START_OF_RECEPTION,
	.TpRxIndicationFunction = SOAD_DOIP_TP_RX_INDICATION_FUNCTION,
	
	.NrOfRoutingGroups = 0,		
};
// --------------------------- Socket Routes ----------------------------------
const SoAd_SocketRouteType SoAd_SocketRoutes[] = {
	{
		.RxPduHeaderId = 0uL,			
		.GroupUsed = false,
		
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUP_DOIP_UDP_SOADSOCKETCONNECTION_DOIP_UDP,							
		.SocketRouteDest = &SoAd_SoAdSocketRoute_DoIP_UDP_SocketRouteDest
	},
	{
		.RxPduHeaderId = 0uL,			
		.GroupUsed = false,
		
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUP_DOIP_TCP_SOADSOCKETCONNECTION_DOIP_TCP,							
		.SocketRouteDest = &SoAd_SoAdSocketRoute_DoIP_TCP_SocketRouteDest
	},
};
// --------------------- TxRoutingGroupRefs ----------------------------


// ----------------------- Pdu Route Destinations -----------------------------
const SoAd_PduRouteDestType SoAd_SoAdPduRoute_DoIP_UDP_PduRouteDests[] = {
	{
		.TxPduHeaderId = 0uL,
		
		.TxUdpTriggerMode = SOAD_TRIGGER_ALWAYS,
		.TxUdpTriggerTimeout = 0,
		.TxRoutingGroupRef = NULL,
		.GroupUsed = false,
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUP_DOIP_UDP_SOADSOCKETCONNECTION_DOIP_UDP,
        .NrOfRoutingGroups = 0,																												
	},	
};
const SoAd_PduRouteDestType SoAd_SoAdPduRoute_DoIP_TCP_PduRouteDests[] = {
	{
		.TxPduHeaderId = 0uL,
		
		.TxUdpTriggerMode = SOAD_TRIGGER_ALWAYS,
		.TxUdpTriggerTimeout = 0,
		.TxRoutingGroupRef = NULL,
		.GroupUsed = false,
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUP_DOIP_TCP_SOADSOCKETCONNECTION_DOIP_TCP,
        .NrOfRoutingGroups = 0,																												
	},	
};

// --------------------------- PDU Routes -------------------------------------
const SoAd_PduRouteType SoAd_PduRoutes[] = {
	{							
		.TxPduRef =  DoIPConf_Pdu_DoIP_SoAd_UDP_Tx,
		.TxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
		.PduRouteDest = SoAd_SoAdPduRoute_DoIP_UDP_PduRouteDests,
		.TxConfirmationFunction = SOAD_DOIP_TX_CONFIRMATION_FUNCTION,
		.TriggerTransmitFunction = SOAD_DOIP_TRIGGER_TRANSMIT_FUNCTION,
		.NrOfPduRouteDest = 1
	},
	{							
		.TxPduRef =  DoIPConf_Pdu_DoIP_SoAd_TCP_Tx,
		.TxUpperLayerType = SOAD_RX_UPPER_LAYER_TP,
		.PduRouteDest = SoAd_SoAdPduRoute_DoIP_TCP_PduRouteDests,
		.TriggerTransmitFunction = SOAD_DOIP_TRIGGER_TRANSMIT_FUNCTION,
		.TpTxConfirmationFunction = SOAD_DOIP_TP_TX_CONFIRMATION_FUNCTION,
		.SoAdTpCopyTxData = SOAD_DOIP_TP_COPY_TX_DATA_FUNCTION,
		.NrOfPduRouteDest = 1
	},
};

const SoAd_ConfigType SoAd_Config = {
	.PduRoute = SoAd_PduRoutes,
	.RoutingGroup = SoAd_RoutingGroups,
	.SocketConnectionGroup =  SoAd_SocketConnectionGroups,
	.SocketRoute = SoAd_SocketRoutes,
	.NrOfSocketConnectionGroups = 2
};

// ------------------------- BswModules ---------------------------------------
const SoAd_BswModulesType SoAd_BswModules[] = {
	{
		.If = true,		    
	    .IfTriggerTransmit = false,
	    .IfTxConfirmation = true,
	    .LocalIpAddrAssigmentChg = false,
	    .SoConModeChg = true,
	    .Tp = true,
	    .UseCallerInfix = true,
	    .UseTypeInfix = true,	    
	    .BswModuleRefType = SOAD_BSW_MOD_REF_DOIP
	    //.BswModuleRefName;
	},
};

