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

/* Generator version: 3.0.1
 * AUTOSAR version:   4.0.3
 */

#include "PduR.h"
#include "MemMap.h"

#if PDUR_CANIF_SUPPORT == STD_ON
#include "CanIf.h"
#include "CanIf_PBCfg.h"
#endif
#if PDUR_CANNM_SUPPORT == STD_ON
#include "CanNm.h"
#include "CanNm_PBCfg.h"
#endif
#if PDUR_UDPNM_SUPPORT == STD_ON
#include "UdpNm.h"
#include "UdpNm_PBCfg.h"
#endif
#if PDUR_CANTP_SUPPORT == STD_ON
#include "CanTp.h"
#include "CanTp_PBCfg.h"
#endif
#if PDUR_LINIF_SUPPORT == STD_ON
#include "LinIf.h"
#endif
#if PDUR_CDD_LINSLV_SUPPORT == STD_ON
#include "CDD_LinSlv.h"
#endif
#if PDUR_CDDPDUR_SUPPORT == STD_ON
#include "CddPduR.h"
#endif
#if PDUR_COM_SUPPORT == STD_ON
#include "Com.h"
#include "Com_PbCfg.h"
#endif
#if PDUR_DCM_SUPPORT == STD_ON
#include "Dcm.h"
#endif
#if PDUR_SOAD_SUPPORT == STD_ON
#include "SoAd.h"
#endif
#if PDUR_J1939TP_SUPPORT == STD_ON
#include "J1939Tp.h"
#endif
#if PDUR_IPDUM_SUPPORT == STD_ON
#include "IpduM.h"
#endif
#if PDUR_SECOC_SUPPORT == STD_ON
#include "SecOC.h"
#endif
#if PDUR_FRIF_SUPPORT == STD_ON
#include "FrIf.h"
#include "FrIf_PBcfg.h"
#endif
#if PDUR_FRNM_SUPPORT == STD_ON
#include "FrNm.h"
#include "FrNm_Cfg.h"
#include "FrNm_PBcfg.h"
#endif
#if PDUR_FRTP_SUPPORT == STD_ON
#include "FrTp.h"
#include "FrTp_PBCfg.h"
#endif
#if PDUR_LDCOM_SUPPORT == STD_ON
#include "LdCom.h"
#include "LdCom_PBCfg.h"
#endif


// Destinations
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_PduRRoutingPath1_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_COM,
		.DestPduId		= ComConf_ComIPdu_IPDU_UDP6661_RX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_PduRRoutingPath2_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_SOADIF,
		.DestPduId		= SOAD_PDU_ID_PDU_UDP6661_TX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_DIRECT ,
		.TxBufferId		= PDUR_NO_BUFFER
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_PduRRoutingPath_CddPduR_Dlt_Rx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_CDDPDUR,
		.DestPduId		= CDDPDUR_PDU_ID_DLT_RX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_PduRRoutingPath_CddPduR_Dlt_Tx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_SOADIF,
		.DestPduId		= SOAD_PDU_ID_DLT_TX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_PduRRoutingPath_Test_Rx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_CDDPDUR,
		.DestPduId		= CDDPDUR_PDU_ID_TEST_RX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_PduRRoutingPath_Test_Tx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_SOADTP,
		.DestPduId		= SOAD_PDU_ID_TEST_TX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 



SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_PduRRoutingPath1[] = {
	&PduRDestination_PduRRoutingPath1_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_PduRRoutingPath2[] = {
	&PduRDestination_PduRRoutingPath2_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_PduRRoutingPath_CddPduR_Dlt_Rx[] = {
	&PduRDestination_PduRRoutingPath_CddPduR_Dlt_Rx_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_PduRRoutingPath_CddPduR_Dlt_Tx[] = {
	&PduRDestination_PduRRoutingPath_CddPduR_Dlt_Tx_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_PduRRoutingPath_Test_Rx[] = {
	&PduRDestination_PduRRoutingPath_Test_Rx_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_PduRRoutingPath_Test_Tx[] = {
	&PduRDestination_PduRRoutingPath_Test_Tx_PduRDestPdu,
	NULL
};

// Routing paths

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_PduRRoutingPath1 = { 
	.SrcModule = ARC_PDUR_SOADIF,
	.SrcPduId = SOAD_PDU_ID_PDU_UDP6661_RX,
	.PduRDestPdus = PduRDestinations_PduRRoutingPath1,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_PduRRoutingPath2 = { 
	.SrcModule = ARC_PDUR_COM,
	.SrcPduId = ComConf_ComIPdu_IPDU_UDP6661_TX,
	.PduRDestPdus = PduRDestinations_PduRRoutingPath2,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_PduRRoutingPath_CddPduR_Dlt_Rx = { 
	.SrcModule = ARC_PDUR_SOADIF,
	.SrcPduId = SOAD_PDU_ID_DLT_RX,
	.PduRDestPdus = PduRDestinations_PduRRoutingPath_CddPduR_Dlt_Rx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_PduRRoutingPath_CddPduR_Dlt_Tx = { 
	.SrcModule = ARC_PDUR_CDDPDUR,
	.SrcPduId = CDDPDUR_PDU_ID_DLT_TX,
	.PduRDestPdus = PduRDestinations_PduRRoutingPath_CddPduR_Dlt_Tx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_PduRRoutingPath_Test_Rx = { 
	.SrcModule = ARC_PDUR_SOADTP,
	.SrcPduId = SOAD_PDU_ID_TEST_RX,
	.PduRDestPdus = PduRDestinations_PduRRoutingPath_Test_Rx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_PduRRoutingPath_Test_Tx = { 
	.SrcModule = ARC_PDUR_CDDPDUR,
	.SrcPduId = CDDPDUR_PDU_ID_TEST_TX,
	.PduRDestPdus = PduRDestinations_PduRRoutingPath_Test_Tx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	


SECTION_POSTBUILD_DATA const PduRRoutingPath_type * const PduRRoutingPaths[] = { 
	&PduRRoutingPath_PduRRoutingPath_CddPduR_Dlt_Rx,
	&PduRRoutingPath_PduRRoutingPath_CddPduR_Dlt_Tx,
	&PduRRoutingPath_PduRRoutingPath1,
	&PduRRoutingPath_PduRRoutingPath_Test_Rx,
	&PduRRoutingPath_PduRRoutingPath_Test_Tx,
	&PduRRoutingPath_PduRRoutingPath2,
	NULL
};

// Default values


// Tx buffer default value pointer list (sorted in the same order as Tx buffer IDs)
SECTION_POSTBUILD_DATA const uint8 * const PduRTxBufferDefaultValues[] =
{
	NULL
};

// Tx buffer default value length list (sorted in the same order as Tx buffer IDs)
SECTION_POSTBUILD_DATA const uint32 * const PduRTxBufferDefaultValueLengths[] =
{
	NULL
};



// Exported config
SECTION_POSTBUILD_DATA const PduR_PBConfigType PduR_Config = {
	.PduRConfigurationId = 0,
	.RoutingPaths = PduRRoutingPaths,
	.NRoutingPaths = 6,
	.DefaultValues = PduRTxBufferDefaultValues,
	.DefaultValueLengths = PduRTxBufferDefaultValueLengths,
	.NofRoutingPathGroups = 0,
	.RoutingPathGroups = NULL,
};



