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

#include "DoIP.h"
#include "DoIP_Cfg.h"
#include "SoAd.h"
#include "SoAd_Cfg.h"
#if defined(USE_PDUR)
#include "PduR.h"
#include "PduR_PbCfg.h"
#endif


/* DoIPConnections */
const DoIP_TargetAddrType DoIP_TargetAddresses[] = {
    {
        .DoIP_TargetAddrValue = 8191    
    },
    {
        .DoIP_TargetAddrValue = 4609    
    },
};


const uint16 DOIPROUTINGACTIVATION_TA[]= {
    4609,
    8191,
 };

/* DoIPRoutingActivation */
const DoIP_RoutActType DoIP_RoutingActivations[]= {
    {
        .DoIP_RoutActNum = 0,
        .DoIP_TargetRef = DOIPROUTINGACTIVATION_TA,  
        .DoIP_RoutActAuthRef = NULL,
        .DoIP_RoutActConfRef = NULL,         
        .DoIP_chnlTARef_Size = 2
    },
 };
 
 
const DoIP_RoutActType * DoIP_DoIPTester_RoutingActivRefs[1+1] = {
    &DoIP_RoutingActivations[DOIP_DOIPROUTINGACTIVATION_ROUTING_ACTIVATION],    
    (DoIP_RoutActType * )NULL
};

const DoIP_TesterType DoIP_Testers[] = {
    {
        .DoIP_NumByteDiagAckNack = 20,
        .DoIP_TesterSA         = 3712,
        .DoIP_RoutActRef       = DoIP_DoIPTester_RoutingActivRefs,
        .DoIp_RoutRefSize      = 1
    },
}; 
 
/* DoIPChannels */
const DoIP_PduReceiveType DoIP_PDUReceives[]= {
    {
        .DoIP_RxPduRef          = DOIP_PDU_ID_DOIP_PDUR_FUNCRX,
    },
    {
        .DoIP_RxPduRef          = DOIP_PDU_ID_DOIP_PDUR_PHYRX,
    },
};

const DoIP_PduTransmitType DoIP_PDUTransmits[] = {
    {
        .DoIP_TxPduRef          = DOIP_PDU_ID_DOIP_PDUR_PHYTX,
        .DoIP_TxPduType         = DOIP_TPPDU,
    },
};

const DoIP_ChannelType DoIP_Channels[] = {
    {
        .DoIP_ChannelSARef      = &DOIPTESTER,
        .DoIP_ChannelTARef      = &DOIPTARGETADDRESSFUNC,
        .DoIP_PduReceiveRef     = &DoIP_PDUReceives[DOIP_CHANNEL_DOIPPDURRXPDUFUNC],
        .DoIP_UpperLayerRxPduId = PDUR_PDU_ID_DOIP_PDUR_FUNCRX,
        .DoIP_RxPduId           = DOIP_PDU_ID_DOIP_PDUR_FUNCRX,
        .DoIP_PduTransmitRef    = NULL,
        .DoIP_UpperLayerTxPduId = DOIP_INVALID_PDU_ID,
        .DoIP_TxPduId           = DOIP_INVALID_PDU_ID,
    },
    {
        .DoIP_ChannelSARef      = &DOIPTESTER,
        .DoIP_ChannelTARef      = &DOIPTARGETADDRESSPHY,
        .DoIP_PduReceiveRef     = &DoIP_PDUReceives[DOIP_CHANNEL_DOIPPDURRXPDUPHY],
        .DoIP_UpperLayerRxPduId = PDUR_PDU_ID_DOIP_PDUR_PHYRX,
        .DoIP_RxPduId           = DOIP_PDU_ID_DOIP_PDUR_PHYRX,
        .DoIP_PduTransmitRef    = &DoIP_PDUTransmits[DOIP_CHANNEL_DOIPPDURTXPDUPHY],
        .DoIP_UpperLayerTxPduId = PDUR_REVERSE_PDU_ID_DOIP_PDUR_PHYTX,
        .DoIP_TxPduId = DOIP_PDU_ID_DOIP_PDUR_PHYTX,
    },
};

const DoIP_TcpType DoIPTCPs[]= {
    {
        .DoIP_TcpSoADRxPduRef   = SoAdConf_Pdu_DoIP_SoAd_TCP_Rx,
        .DoIP_TcpRxPduRef       = DoIPConf_Pdu_DoIP_SoAd_TCP_Rx,
        .DoIP_TcpSoADTxPduRef   = SoAdConf_Pdu_DoIP_SoAd_TCP_Tx,
        .DoIP_TcpTxPduRef       = DoIPConf_Pdu_DoIP_SoAd_TCP_Tx,
    },

};

const DoIP_UdpType DoIPUDPs[]= {
    {
        .DoIP_UdpSoADRxPduRef   = SoAdConf_Pdu_DoIP_SoAd_UDP_Rx,
        .DoIP_UdpRxPduRef       = DoIPConf_Pdu_DoIP_SoAd_UDP_Rx,
        .DoIP_UdpSoADTxPduRef   = SoAdConf_Pdu_DoIP_SoAd_UDP_Tx,
        .DoIP_UdpTxPduRef       = DoIPConf_Pdu_DoIP_SoAd_UDP_Tx,
    },   
};

const DoIP_ConfigType DoIP_Config = {
    .DoIP_Channel               = DoIP_Channels,
    .DoIP_TcpMsg                = DoIPTCPs,
    .DoIP_UdpMsg                = DoIPUDPs,
    .DoIP_TargetAddress         = DoIP_TargetAddresses,
    .DoIP_RoutingActivation     = DoIP_RoutingActivations,
    .DoIP_Tester                = DoIP_Testers,
};
