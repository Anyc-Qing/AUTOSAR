
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

#include "TcpIp.h"
#if !defined(USE_NO_ETHIF)
#include "EthIf.h"
#include "EthIf_PBcfg.h"
#else
#include "ethernetif.h"
#endif




const TcpIp_AddressAssignmentType TcpIp_AddrAssignList_TcpIpLocalAddr[] = {
    {
        .AssignmentLifetime = TCPIP_FORGET,
        .AssignmentMethod = TCPIP_STATIC,
        .AssignmentPriority = 1,
        .AssignmentTrigger = TCPIP_AUTOMATIC,
    },
};
TcpIp_StaticIpAddressConfigType TcpIp_StaticIpAddressConfig_TcpIpLocalAddr = {
    .ArcValid = TRUE,
    .StaticIpAddress = IP4_ADDR_CHR_TO_UINT32(198,18,34,1), /*lint !e9027 !e845 */
    .DefaultRouter = 0,
    .Netmask = 16,
};

const TcpIp_LocalAddrType TcpIp_LocalAddrList[] = {
    {
        // Name : "TcpIpLocalAddr"
        .AddressId = 1u,
        .AddressType = TCPIP_UNICAST,
        .Domain = TCPIP_AF_INET,
        .TcpIpCtrlRef = TcpIpConf_TcpIpCtrl_TcpIpCtrl,
        .AddressAssignment = TcpIp_AddrAssignList_TcpIpLocalAddr,
        .StaticIpAddrConfig = &TcpIp_StaticIpAddressConfig_TcpIpLocalAddr,
    },
};



const TcpIp_TcpIpCtrlType TcpIp_CtrlList[] = {
    {
        // Name : "TcpIpCtrl"
    
        .FramePrioDefault = 0,
    
        .EthIfCtrlRef = EthIfConf_EthIfController_EthIfController,
#if defined(USE_DEM)
        /** @req 4.2.2/SWS_TCPIP_00043 */    
        /** @req 4.2.2/SWS_TCPIP_00207 */
        /** @req 4.2.2/SWS_TCPIP_00208 */
        /** @req 4.2.2/SWS_TCPIP_00209 */
        /** @req 4.2.2/SWS_TCPIP_00210 */
        .CtrlDemEventParameterRefs = {
                                .ConnRefused = DEM_EVENT_ID_NULL,
                                .HostUnreach = DEM_EVENT_ID_NULL,
                                .PacketToBig = DEM_EVENT_ID_NULL,
                                .Timedout = DEM_EVENT_ID_NULL,
                            },
#endif

    },
};


/** @req 4.2.2/SWS_TCPIP_00220 */
/** @req 4.2.2/SWS_TCPIP_00221 */
/** @req 4.2.2/SWS_TCPIP_00228 */
/** @req 4.2.2/SWS_TCPIP_00223 */
/** @req 4.2.2/SWS_TCPIP_00224 */
/** @req 4.2.2/SWS_TCPIP_00225 */
/** @req 4.2.2/SWS_TCPIP_00226 */
/** @req 4.2.2/SWS_TCPIP_00227 */
/** @req 4.2.2/SWS_TCPIP_00228 */
/** @req 4.2.2/SWS_TCPIP_00229 */
const TcpIp_SocketOwnerType TcpIpSocketOwnerList[] = {
    {
        // Name : "SoAd"
        .SocketOwnerCopyTxDataFncPtr = SoAd_CopyTxData,
        .SocketOwnerLocalIpAddrAssignmentChgFncPtr = SoAd_LocalIpAddrAssignmentChg,
        /** @req 4.2.2/SWS_TCPIP_00223 */
        .SocketOwnerRxIndicationFncPtr = SoAd_RxIndication,
        .SocketOwnerTcpAcceptedFncPtr = SoAd_TcpAccepted,
        .SocketOwnerTcpConnectedFncPtr = SoAd_TcpConnected,
        .SocketOwnerTcpIpEventFncPtr = SoAd_TcpIpEvent,
        .SocketOwnerTxConfirmationFncPtr = SoAd_TxConfirmation,
        .SocketOwnerUpperLayerType = TCPIP_SOAD,
    },
};

const TcpIp_ConfigType TcpIp_Config = {
    .Config = {
        .CtrlList = TcpIp_CtrlList,
        .LocalAddrList = TcpIp_LocalAddrList,
        .PhysAddrConfig = NULL,
        .SocketOwnerConfig = {
            .SocketOwnerList = TcpIpSocketOwnerList
        }
    }
};

