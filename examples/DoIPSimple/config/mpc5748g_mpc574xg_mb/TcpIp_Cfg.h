
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

#if !(((TCPIP_SW_MAJOR_VERSION == 2) && (TCPIP_SW_MINOR_VERSION == 0)))
#error TcpIp: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((TCPIP_AR_RELEASE_MAJOR_VERSION == 4) && (TCPIP_AR_RELEASE_MINOR_VERSION == 2)))
#error TcpIp: Configuration file expected AUTOSAR version to be 4.2.*
#endif


#ifndef TCPIP_CFG_H_
#define TCPIP_CFG_H_

#include "SoAd.h"
#include "SoAd_Cbk.h"

#define TCPIP_DEV_ERROR_DETECT               STD_ON
#define TCPIP_VERSION_INFO_API               STD_ON
#define TCPIP_RESET_IP_ASSIGNMENT_API        STD_ON
#define TCPIP_MAIN_FUNCTION_PERIOD_MS        (5u)
#define TCPIP_TCP_SOCKET_MAX                 (3u)
#define TCPIP_UDP_SOCKET_MAX                 (3u)
#define TCPIP_MAX_NOF_SOCKETS                (TCPIP_TCP_SOCKET_MAX+TCPIP_UDP_SOCKET_MAX)
#define TCPIP_TCP_ENABLED                    STD_ON
#define TCPIP_UDP_ENABLED                    STD_ON
#define TCPIP_IPV4_ENABLED                   STD_ON
#define TCPIP_DHCP_CLIENT_ENABLED            STD_OFF
#define TCPIP_IPV6_ENABLED                   STD_OFF

#define TcpIpConf_TcpIpCtrl_TcpIpCtrl 0u


#define TCPIP_NOF_CONTROLLERS 1u



#define TCPIP_NOF_LOCALADDR 1u



#define TCPIP_NOF_SOCKETOWNERS 1u


Std_ReturnType TcpIp_GetSocket(uint8 SocketOwnerId,TcpIp_DomainType Domain, TcpIp_ProtocolType Protocol, TcpIp_SocketIdType* SocketIdPtr);

/** @req 4.2.2/SWS_TCPIP_00018 */
/** @req 4.2.2/SWS_TCPIP_00222 */
/* For each configured TcpIpSocketOwner TcpIp shall provide
a separate TcpIp_<Up>GetSocket API by replacing the tag <Up> with the short
name of the TcpIpSocketOwner container. Sockets allocated by a dedicated
TcpIp_<Up>GetSocket API shall be assigned exclusively to the respective upper
layer.*/
        // Name : "SoAd"
#define TcpIp_SoAdGetSocket(_Domain, _Protocol, _SocketIdPtr) TcpIp_GetSocket(0u,_Domain,_Protocol,_SocketIdPtr)

#define TcpIpConf_TcpIpLocalAddr_TcpIpLocalAddr 1u


#define TCPIP_RX_BUFFER_SIZE 1500u
    

#endif /* TCPIP_CFG_H_ */
