
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
SoAd_SocketRemoteAddressType SoAd_SoAdSocketConnectionGroupDltCom_SoAdSocketConnectionDltCom_RemoteAddress = {
	.Domain = TCPIP_AF_INET,
    .Set = true,        
    .SocketRemotePort = 0,
    .SocketRemoteIpAddress[0] = 0, 
    .SocketRemoteIpAddress[1] = 0, 
    .SocketRemoteIpAddress[2] = 0, 
    .SocketRemoteIpAddress[3] = 0, 
};
SoAd_SocketRemoteAddressType SoAd_SoAdSocketConnectionGroupXCP_SoAdSocketConnectionXcp_RemoteAddress = {
	.Domain = TCPIP_AF_INET,
    .Set = true,        
    .SocketRemotePort = 0,
    .SocketRemoteIpAddress[0] = 0, 
    .SocketRemoteIpAddress[1] = 0, 
    .SocketRemoteIpAddress[2] = 0, 
    .SocketRemoteIpAddress[3] = 0, 
};
SoAd_SocketRemoteAddressType SoAd_SoAdSocketConnectionGroupTest_SoAdSocketConnectionTest_RemoteAddress = {
	.Domain = TCPIP_AF_INET,
    .Set = true,        
    .SocketRemotePort = 0,
    .SocketRemoteIpAddress[0] = 0, 
    .SocketRemoteIpAddress[1] = 0, 
    .SocketRemoteIpAddress[2] = 0, 
    .SocketRemoteIpAddress[3] = 0, 
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

const SoAd_SocketConnectionType SoAd_SoAdSocketConnectionGroupDltCom_SocketConnections[] = {
	{
		// Name : "SoAdSocketConnectionDltCom"
		//.SocketId = SOAD_SOCON_SOCKET_ID_SOADSOCKETCONNECTIONDLTCOM,
		.SocketId = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPDLTCOM_SOADSOCKETCONNECTIONDLTCOM,
		.SoAdSocketRemoteAddress = &SoAd_SoAdSocketConnectionGroupDltCom_SoAdSocketConnectionDltCom_RemoteAddress,
		/** @req SWS_SOAD_00546 */ // This req implemented in the .xpt file.			
		.nPduUdpTxBuffer = NULL,
		.nPduUdpTxBufferSize = 0,
		.TcpRxBuffer = NULL,
		.TcpRxBufferSize = 0,
																
		.GroupNr = 1,
		.IndexInGroup = 0 		
	},
};

const SoAd_SocketConnectionType SoAd_SoAdSocketConnectionGroupXCP_SocketConnections[] = {
	{
		// Name : "SoAdSocketConnectionXcp"
		//.SocketId = SOAD_SOCON_SOCKET_ID_SOADSOCKETCONNECTIONXCP,
		.SocketId = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPXCP_SOADSOCKETCONNECTIONXCP,
		.SoAdSocketRemoteAddress = &SoAd_SoAdSocketConnectionGroupXCP_SoAdSocketConnectionXcp_RemoteAddress,
		/** @req SWS_SOAD_00546 */ // This req implemented in the .xpt file.			
		.nPduUdpTxBuffer = NULL,
		.nPduUdpTxBufferSize = 0,
		.TcpRxBuffer = NULL,
		.TcpRxBufferSize = 0,
																
		.GroupNr = 2,
		.IndexInGroup = 0 		
	},
};

const SoAd_SocketConnectionType SoAd_SoAdSocketConnectionGroupTest_SocketConnections[] = {
	{
		// Name : "SoAdSocketConnectionTest"
		//.SocketId = SOAD_SOCON_SOCKET_ID_SOADSOCKETCONNECTIONTEST,
		.SocketId = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPTEST_SOADSOCKETCONNECTIONTEST,
		.SoAdSocketRemoteAddress = &SoAd_SoAdSocketConnectionGroupTest_SoAdSocketConnectionTest_RemoteAddress,
		/** @req SWS_SOAD_00546 */ // This req implemented in the .xpt file.			
		.nPduUdpTxBuffer = NULL,
		.nPduUdpTxBufferSize = 0,
		.TcpRxBuffer = NULL,
		.TcpRxBufferSize = 0,
																
		.GroupNr = 3,
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
	
const SoAd_SocketTcpType SoAd_SoAdSocketConnectionGroupDltCom_SocketTcp = {
	.SocketTcpImmediateTpTxConfirmation = FALSE,
    .SocketTcpInitiate = FALSE,
    .SocketTcpKeepAlive = FALSE,
    .SocketTcpKeepAliveInterval = 0, // In millisec
    .SocketTcpKeepAliveProbesMax = 0,
    .SocketTcpKeepAliveTime = 0, // In millisec
    .SocketTcpNoDelay = 0,
    .SocketTcpTxQuota = 0,
};
	

const SoAd_SocketUdpType SoAd_SoAdSocketConnectionGroupXCP_SocketUdp = {
	.UdpAliveSupervisionTimeout = 0, // In millisec,
    .SocketUdpListenOnly = FALSE,
    .SocketUdpStrictHeaderLenCheckEnabled = FALSE,
    .SocketUdpTriggerTimeout = 0, // In millisec,
    
};
	
const SoAd_SocketTcpType SoAd_SoAdSocketConnectionGroupTest_SocketTcp = {
	.SocketTcpImmediateTpTxConfirmation = FALSE,
    .SocketTcpInitiate = FALSE,
    .SocketTcpKeepAlive = FALSE,
    .SocketTcpKeepAliveInterval = 0, // In millisec
    .SocketTcpKeepAliveProbesMax = 0,
    .SocketTcpKeepAliveTime = 0, // In millisec
    .SocketTcpNoDelay = 0,
    .SocketTcpTxQuota = 0,
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
	{
		 // Name : "SoAdSocketConnectionGroupDltCom"
		.PduHeaderEnable = FALSE,
		.ResourceManagementEnable = FALSE,
		.SocketAutomaticSoConSetup = TRUE,
		.SocketFramePriorityUsed =FALSE,		
		.SocketFramePriority = 0,
		.SocketIpAddrAssignmentChgNotification = FALSE,		
		.SocketIpAddrAssignmentChgNotificationFunction = NULL,
		.SocketLocalPort = 999,
		.SocketMsgAcceptanceFilterEnabled = TRUE,
		.SocketSoConModeChgNotification = FALSE,		
		.SocketSoConModeChgNotificationFunction = NULL,		 		
		.SocketTpRxBufferMin = 0,
		.SocketLocalAddressRef =  TcpIpConf_TcpIpLocalAddr_TcpIpLocalAddr , 
		.SoAdSocketConnection = SoAd_SoAdSocketConnectionGroupDltCom_SocketConnections,
		.SocketProtocol = SOAD_SOCKET_PROT_TCP,
		.SocketProtocolUdp = NULL,
		.SocketProtocolTcp =  &SoAd_SoAdSocketConnectionGroupDltCom_SocketTcp,
		.GroupType = SOAD_GROUPTYPE_LISTEN_TCP, 
		.NrOfSocketConnections = 1				     
	},
	{
		 // Name : "SoAdSocketConnectionGroupXCP"
		.PduHeaderEnable = FALSE,
		.ResourceManagementEnable = FALSE,
		.SocketAutomaticSoConSetup = TRUE,
		.SocketFramePriorityUsed =FALSE,		
		.SocketFramePriority = 0,
		.SocketIpAddrAssignmentChgNotification = FALSE,		
		.SocketIpAddrAssignmentChgNotificationFunction = NULL,
		.SocketLocalPort = 13600,
		.SocketMsgAcceptanceFilterEnabled = TRUE,
		.SocketSoConModeChgNotification = FALSE,		
		.SocketSoConModeChgNotificationFunction = NULL,		 		
		.SocketTpRxBufferMin = 0,
		.SocketLocalAddressRef =  TcpIpConf_TcpIpLocalAddr_TcpIpLocalAddr , 
		.SoAdSocketConnection = SoAd_SoAdSocketConnectionGroupXCP_SocketConnections,
		.SocketProtocol = SOAD_SOCKET_PROT_UDP,
		.SocketProtocolUdp =  &SoAd_SoAdSocketConnectionGroupXCP_SocketUdp,
		.SocketProtocolTcp = NULL,
		.GroupType = SOAD_GROUPTYPE_LONELY_UDP, 
		.NrOfSocketConnections = 1				     
	},
	{
		 // Name : "SoAdSocketConnectionGroupTest"
		.PduHeaderEnable = FALSE,
		.ResourceManagementEnable = FALSE,
		.SocketAutomaticSoConSetup = TRUE,
		.SocketFramePriorityUsed =FALSE,		
		.SocketFramePriority = 0,
		.SocketIpAddrAssignmentChgNotification = FALSE,		
		.SocketIpAddrAssignmentChgNotificationFunction = NULL,
		.SocketLocalPort = 111,
		.SocketMsgAcceptanceFilterEnabled = TRUE,
		.SocketSoConModeChgNotification = FALSE,		
		.SocketSoConModeChgNotificationFunction = NULL,		 		
		.SocketTpRxBufferMin = 0,
		.SocketLocalAddressRef =  TcpIpConf_TcpIpLocalAddr_TcpIpLocalAddr , 
		.SoAdSocketConnection = SoAd_SoAdSocketConnectionGroupTest_SocketConnections,
		.SocketProtocol = SOAD_SOCKET_PROT_TCP,
		.SocketProtocolUdp = NULL,
		.SocketProtocolTcp =  &SoAd_SoAdSocketConnectionGroupTest_SocketTcp,
		.GroupType = SOAD_GROUPTYPE_LISTEN_TCP, 
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
const SoAd_SocketRouteDestType SoAd_SoAdSocketRouteDltRxTcp_SocketRouteDest = {
	.SocketRouteIndex = 1,	// For now there is only 1:1 between SocketRoute and SocketRouteDest but this can change.
    //.RxPduId = 0,
	//.RxPduRef = SoAdConf_Pdu_Dlt_Rx,
	.RxPduRef = 	PduRConf_Pdu_Dlt_Rx,
	.RxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
	.RxRoutingGroupRef = NULL,
	.RxIndicationFunction = SOAD_PDUR_RX_INDICATION_FUNCTION,
	
	.NrOfRoutingGroups = 0,		
};
const SoAd_SocketRouteDestType SoAd_SoAdSocketRouteXcpRx_SocketRouteDest = {
	.SocketRouteIndex = 2,	// For now there is only 1:1 between SocketRoute and SocketRouteDest but this can change.
    //.RxPduId = 0,
	//.RxPduRef = SoAdConf_Pdu_XCP_RX_PDU,
	.RxPduRef = 	XcpConf_Pdu_XCP_RX_PDU,
	.RxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
	.RxRoutingGroupRef = NULL,
	.RxIndicationFunction = SOAD_XCP_RX_INDICATION_FUNCTION,
	
	.NrOfRoutingGroups = 0,		
};
const SoAd_SocketRouteDestType SoAd_SoAdSocketRouteTestRxTcp_SocketRouteDest = {
	.SocketRouteIndex = 3,	// For now there is only 1:1 between SocketRoute and SocketRouteDest but this can change.
    //.RxPduId = 0,
	//.RxPduRef = SoAdConf_Pdu_Test_Rx,
	.RxPduRef = 	PduRConf_Pdu_Test_Rx,
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
	{
		.RxPduHeaderId = 0uL,			
		.GroupUsed = false,
		
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPDLTCOM_SOADSOCKETCONNECTIONDLTCOM,							
		.SocketRouteDest = &SoAd_SoAdSocketRouteDltRxTcp_SocketRouteDest
	},
	{
		.RxPduHeaderId = 0uL,			
		.GroupUsed = true,
		
        .Index = SOAD_SOCON_GROUP_ID_SOADSOCKETCONNECTIONGROUPXCP,							
		.SocketRouteDest = &SoAd_SoAdSocketRouteXcpRx_SocketRouteDest
	},
	{
		.RxPduHeaderId = 0uL,			
		.GroupUsed = true,
		
        .Index = SOAD_SOCON_GROUP_ID_SOADSOCKETCONNECTIONGROUPTEST,							
		.SocketRouteDest = &SoAd_SoAdSocketRouteTestRxTcp_SocketRouteDest
	},
};
// --------------------- TxRoutingGroupRefs ----------------------------




// ----------------------- Pdu Route Destinations -----------------------------
const SoAd_PduRouteDestType SoAd_SoAdPduRouteTxUDP6661_PduRouteDests[] = {
	{
		.TxPduHeaderId = 0uL,
		
		.TxUdpTriggerMode = SOAD_TRIGGER_ALWAYS,
		.TxUdpTriggerTimeout = 0,
		.TxRoutingGroupRef = NULL,
		.GroupUsed = false,
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPUDPCOM_SOADSOCKETCONNECTIONUDPCOM,
        .NrOfRoutingGroups = 0,																												
	},	
};
const SoAd_PduRouteDestType SoAd_SoAdPduRouteDltTx_PduRouteDests[] = {
	{
		.TxPduHeaderId = 0uL,
		
		.TxUdpTriggerMode = SOAD_TRIGGER_ALWAYS,
		.TxUdpTriggerTimeout = 0,
		.TxRoutingGroupRef = NULL,
		.GroupUsed = false,
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPDLTCOM_SOADSOCKETCONNECTIONDLTCOM,
        .NrOfRoutingGroups = 0,																												
	},	
};
const SoAd_PduRouteDestType SoAd_SoAdPduRouteXcpTx_PduRouteDests[] = {
	{
		.TxPduHeaderId = 0uL,
		
		.TxUdpTriggerMode = SOAD_TRIGGER_ALWAYS,
		.TxUdpTriggerTimeout = 0,
		.TxRoutingGroupRef = NULL,
		.GroupUsed = false,
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPXCP_SOADSOCKETCONNECTIONXCP,
        .NrOfRoutingGroups = 0,																												
	},	
};
const SoAd_PduRouteDestType SoAd_SoAdPduRouteTestTx_PduRouteDests[] = {
	{
		.TxPduHeaderId = 0uL,
		
		.TxUdpTriggerMode = SOAD_TRIGGER_ALWAYS,
		.TxUdpTriggerTimeout = 0,
		.TxRoutingGroupRef = NULL,
		.GroupUsed = false,
        .Index = SOAD_SOCON_ID_SOADSOCKETCONNECTIONGROUPTEST_SOADSOCKETCONNECTIONTEST,
        .NrOfRoutingGroups = 0,																												
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
	{							
		.TxPduRef =  PDUR_REVERSE_PDU_ID_DLT_TX,
		.TxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
		.PduRouteDest = SoAd_SoAdPduRouteDltTx_PduRouteDests,
		.TxConfirmationFunction = SOAD_PDUR_TX_CONFIRMATION_FUNCTION,
		.TriggerTransmitFunction = SOAD_PDUR_TRIGGER_TRANSMIT_FUNCTION,
		.NrOfPduRouteDest = 1
	},
	{							
		.TxPduRef =  XCP_REVERSE_PDU_ID_XCP_TX_PDU,
		.TxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
		.PduRouteDest = SoAd_SoAdPduRouteXcpTx_PduRouteDests,
		.TxConfirmationFunction = SOAD_XCP_TX_CONFIRMATION_FUNCTION,
		.TriggerTransmitFunction = SOAD_XCP_TRIGGER_TRANSMIT_FUNCTION,
		.NrOfPduRouteDest = 1
	},
	{							
		.TxPduRef =  PDUR_REVERSE_PDU_ID_TEST_TX,
		.TxUpperLayerType = SOAD_RX_UPPER_LAYER_IF,
		.PduRouteDest = SoAd_SoAdPduRouteTestTx_PduRouteDests,
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
	.NrOfSocketConnectionGroups = 4
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
	{
		.If = true,		    
	    .IfTriggerTransmit = false,
	    .IfTxConfirmation = true,
	    .LocalIpAddrAssigmentChg = false,
	    .SoConModeChg = false,
	    .Tp = false,
	    .UseCallerInfix = true,
	    .UseTypeInfix = true,	    
	    .BswModuleRefType = SOAD_BSW_MOD_REF_XCP
	    //.BswModuleRefName;
	},
};

