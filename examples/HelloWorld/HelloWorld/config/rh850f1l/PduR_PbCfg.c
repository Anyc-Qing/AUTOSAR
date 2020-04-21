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
#if PDUR_DOIP_SUPPORT == STD_ON
#include "DoIP.h"
#include "DoIP_Cfg.h"
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
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_Tester01_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_COM,
		.DestPduId		= ComConf_ComIPdu_Tester01,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_CASINE01_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_CANIF,
		.DestPduId		= CANIF_PDU_ID_ECU01,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_DiagPhysicalRx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_DCM,
		.DestPduId		= DCM_PDU_ID_DIAGPHYSICALRX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_DiagPhysicalTx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_CANTP,
		.DestPduId		= CANTP_PDU_ID_DIAGPHYSICALTX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_DiagFunctionalRx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_DCM,
		.DestPduId		= DCM_PDU_ID_DIAGFUNCTIONALRX,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_DiagUUDT_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_CANIF,
		.DestPduId		= CANIF_PDU_ID_DIAGUUDT,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_SwcMemTx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_CANIF,
		.DestPduId		= CANIF_PDU_ID_SWCMEM_TX_CANIF,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 
	
	
SECTION_POSTBUILD_DATA const PduRDestPdu_type PduRDestination_SwcMemRx_PduRDestPdu = {
		.DestModule 	= ARC_PDUR_COM,
		.DestPduId		= ComConf_ComIPdu_SwcMemRx,
		.NofGroupRefs = 0,
		.RoutingPathGroupRefs = NULL,
		.DataProvision	= PDUR_NO_PROVISION,
		.TxBufferId		= PDUR_NO_BUFFER	
}; 



SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_Tester01[] = {
	&PduRDestination_Tester01_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_CASINE01[] = {
	&PduRDestination_CASINE01_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_DiagPhysicalRx[] = {
	&PduRDestination_DiagPhysicalRx_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_DiagPhysicalTx[] = {
	&PduRDestination_DiagPhysicalTx_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_DiagFunctionalRx[] = {
	&PduRDestination_DiagFunctionalRx_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_DiagUUDT[] = {
	&PduRDestination_DiagUUDT_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_SwcMemTx[] = {
	&PduRDestination_SwcMemTx_PduRDestPdu,
	NULL
};

SECTION_POSTBUILD_DATA const PduRDestPdu_type * const PduRDestinations_SwcMemRx[] = {
	&PduRDestination_SwcMemRx_PduRDestPdu,
	NULL
};

// Routing paths

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_Tester01 = { 
	.SrcModule = ARC_PDUR_CANIF,
	.SrcPduId = CANIF_PDU_ID_TESTER01,
	.PduRDestPdus = PduRDestinations_Tester01,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_CASINE01 = { 
	.SrcModule = ARC_PDUR_COM,
	.SrcPduId = ComConf_ComIPdu_Ecu01,
	.PduRDestPdus = PduRDestinations_CASINE01,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_DiagPhysicalRx = { 
	.SrcModule = ARC_PDUR_CANTP,
	.SrcPduId = CANTP_PDU_ID_DIAGPHYSICALRX,
	.PduRDestPdus = PduRDestinations_DiagPhysicalRx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_DiagPhysicalTx = { 
	.SrcModule = ARC_PDUR_DCM,
	.SrcPduId = DCM_PDU_ID_DIAGPHYSICALTX,
	.PduRDestPdus = PduRDestinations_DiagPhysicalTx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_DiagFunctionalRx = { 
	.SrcModule = ARC_PDUR_CANTP,
	.SrcPduId = CANTP_PDU_ID_DIAGFUNCTIONALRX,
	.PduRDestPdus = PduRDestinations_DiagFunctionalRx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_DiagUUDT = { 
	.SrcModule = ARC_PDUR_DCM,
	.SrcPduId = DCM_PDU_ID_DIAGUUDT,
	.PduRDestPdus = PduRDestinations_DiagUUDT,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_SwcMemTx = { 
	.SrcModule = ARC_PDUR_COM,
	.SrcPduId = ComConf_ComIPdu_SwcMemTx,
	.PduRDestPdus = PduRDestinations_SwcMemTx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	

SECTION_POSTBUILD_DATA const PduRRoutingPath_type PduRRoutingPath_SwcMemRx = { 
	.SrcModule = ARC_PDUR_CANIF,
	.SrcPduId = CANIF_PDU_ID_SWCMEM_RX_CANIF,
	.PduRDestPdus = PduRDestinations_SwcMemRx,
	
	.PduRDirectGateway = TRUE,	/* Direct Gateway */
	
	.PduRTpThreshld = 0,
	.PduRDestinatnNum = 1
};	


SECTION_POSTBUILD_DATA const PduRRoutingPath_type * const PduRRoutingPaths[] = { 
	&PduRRoutingPath_DiagPhysicalTx,
	&PduRRoutingPath_DiagUUDT,
	&PduRRoutingPath_DiagFunctionalRx,
	&PduRRoutingPath_DiagPhysicalRx,
	&PduRRoutingPath_CASINE01,
	&PduRRoutingPath_SwcMemRx,
	&PduRRoutingPath_SwcMemTx,
	&PduRRoutingPath_Tester01,
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
	.NRoutingPaths = 8,
	.DefaultValues = PduRTxBufferDefaultValues,
	.DefaultValueLengths = PduRTxBufferDefaultValueLengths,
	.NofRoutingPathGroups = 0,
	.RoutingPathGroups = NULL,
};



