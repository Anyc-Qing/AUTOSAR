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

/* Generator version: 1.0.0
 * AUTOSAR version:   4.2.2
 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.2.2 */

#ifndef DOIP_CFG_H_
#define DOIP_CFG_H_

#if !(((DOIP_SW_MAJOR_VERSION == 1) && (DOIP_SW_MINOR_VERSION == 0)) )
#error DoIP: Configuration file expected BSW module version to be 1.0.*
#endif


#if !(((DOIP_AR_RELEASE_MAJOR_VERSION == 4) && (DOIP_AR_RELEASE_MINOR_VERSION == 2)) )
#error DoIP: Configuration file expected AUTOSAR version to be 4.2.*
#endif

#define DOIP_INVALID_PDU_ID                     0xFFFFu
#define DOIP_GATEWAY                            0u
#define DOIP_NODE                               1u

#define DOIP_DEV_ERROR_DETECT                   STD_ON
#define DOIP_DHCP_VIN_USE                       STD_OFF
#define DOIP_ENTITY_MAX_BYTE_USE                STD_OFF
#define DOIP_USE_EID_AS_GID                     STD_ON
#define DOIP_USE_MAC_ADD_FOR_ID                 STD_ON
#define DOIP_USE_VEHICLE_ID_SYNC_STATUS         STD_OFF
#define DOIP_VERSION_INFO_API                   STD_ON
#define DOIP_VIN_GID_MASTER                     STD_OFF



#define DOIP_GID_INVALIDITY_PATTERN             11uL

#define DOIP_HOST_NAME_SIZE_MAX                 66u
#define DOIP_INITIAL_INACTIVITY_TIME            1000uL
#define DOIP_MAIN_FUNCTION_PERIOD               5uL
#define DOIP_INITIAL_VEHICLE_ANNOUNCEMENT_TIME  1000uL
#define DOIP_MAX_REQUEST_BYTES                  20u
#define DOIP_MAX_TESTER_CONNECTIONS             1u
#define DOIP_MAX_UDP_REQUEST_MESSAGE            1u
#define DOIP_VEHICLE_ANNOUNCEMENT_INTERVAL      1000uL
#define DOIP_VEHICLE_ANNOUNCEMENT_REPETITION    5u
#define DOIP_VIN_INVALIDITY_PATTERN             0xbu
#define DOIP_NODE_TYPE                          DOIP_NODE
#define DOIP_CHANNEL_COUNT                      2u
#define DOIP_UDP_CON_NUM                        1u
#define DOIP_TCP_CON_NUM                        1u
#define DOIP_ALIVE_CHECK_RESPONSE_TIMEOUT       1000000uL
#define DOIP_GENERAL_INACTIVE_TIME              1000000uL

#define DOIPGETGIDCALLBACK_CONFIGURED           FALSE


#define DOIPPWRMODECALLBACK_CONFIGURED          FALSE

#define DOIPTGRGIDSYNCCALLBACK_CONFIGURED       FALSE

#define DOIP_CHANNEL_COUNT_NUM                  2u
#define DOIP_UDP_COUNT_NUM                      1u
#define DOIP_TCP_COUNT_NUM                      1u
#define DOIP_TESTER_COUNT                       1u

#if(STD_OFF == DOIP_USE_MAC_ADD_FOR_ID)
#define DOIP_EID_CONFIGURED                     TRUE
#define DOIP_EID                                0x2a62b1cuLL
#endif

#define DOIP_GID_CONFIGURED                     TRUE
#define DOIP_GID                                0x34fb5e3uLL
#define DoIP_LOGICAL_ADDRESS                    5523u
#define DOIP_NUM_ROUTING_ACTIVATION             1u
#define DOIP_UDP_RXPDU_NUM                      1u
#define DOIP_TCP_RXPDU_NUM                      1u


/* DoIPTesters */
#define DOIP_TESTER_DOIPTESTER           0u



/* DoIPChannels */
#define DOIP_CHANNEL_DOIPPDURRXPDUFUNC                 0u
#define DOIP_CHANNEL_DOIPPDURRXPDUPHY                 1u
#define DOIP_CHANNEL_DOIPPDURTXPDUPHY     0u
#define DOIP_CHANNEL_DOIPCHANNELFUNC                     0u
#define DOIP_CHANNEL_DOIPCHANNELPHY                     1u

/* DoIPConnections */
#define DOIP_TARGET_DoIPTargetAddressFunc 0u
#define DOIP_TARGET_DoIPTargetAddressPhy 1u
#define DOIP_TARGET_DoIPTcpConnection 0u
#define DOIP_TARGET_DoIPUdpConnection 0u

/* Defining PDU references*/
#define DOIPTP_PDU_ID_DOIP_PDUR_FUNCRX 0u
#define DOIP_PDU_ID_DOIP_PDUR_FUNCRX 0u
#define DOIPTP_PDU_ID_DOIP_PDUR_PHYRX 1u
#define DOIP_PDU_ID_DOIP_PDUR_PHYRX 1u

#define DOIPTP_PDU_ID_DOIP_PDUR_PHYTX 0u
#define DOIP_PDU_ID_DOIP_PDUR_PHYTX 0u

#define DOIP_PDU_ID_DOIP_SOAD_TCP_RX 0u
#define DOIP_TCP_RX_PDU_NUM 1u

#define DOIP_PDU_ID_DOIP_SOAD_TCP_TX 0u
#define DoIPConf_Pdu_DoIP_SoAd_TCP_Tx 0u
#define DOIP_TCP_TX_PDU_NUM 1U

#define DOIP_PDU_ID_DOIP_SOAD_UDP_RX 0u
#define DOIP_UDP_RX_PDU_NUM 1U

#define DOIP_PDU_ID_DOIP_SOAD_UDP_TX 0u
#define DoIPConf_Pdu_DoIP_SoAd_UDP_Tx 0u
#define DOIP_UDP_TX_PDU_NUM 1u
 
#define DOIP_DOIPROUTINGACTIVATION_ROUTING_ACTIVATION            0u

#define DOIPTARGETADDRESSFUNC DoIP_TargetAddresses[0]
#define DOIPTARGETADDRESSPHY DoIP_TargetAddresses[1]


#define DOIPTESTER     DoIP_Testers[0]    

/* This Pdu Id will be used by lower layer */
#define DoIPConf_Pdu_DoIP_SoAd_TCP_Rx 0u

#define DoIPConf_Pdu_DoIP_SoAd_UDP_Rx 0u


#endif /* DOIP_CFG_H_ */
