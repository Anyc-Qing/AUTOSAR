
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
 * AUTOSAR version:   4.0.3
 */

#include "CanTp.h"
#include "CanTp_PBCfg.h"
#if defined(USE_CANIF)
#include "CanIf.h"
#include "CanIf_PBCfg.h"
#endif
#if defined(USE_PDUR)
#include "PduR.h"
#include "PduR_PbCfg.h"
#endif

#include "MemMap.h"

#define CANTP_MAIN_FUNCTION_PERIOD_TIME_MS	5
#define CANTP_CONVERT_MS_TO_MAIN_CYCLES(x)  ((x)/CANTP_MAIN_FUNCTION_PERIOD_TIME_MS)

SECTION_POSTBUILD_DATA const CanTp_GeneralType CanTpGeneralConfig =
{
  .main_function_period = 5,
  .number_of_sdus = CANTP_NOF_SDUS,
  .number_of_pdus = CANTP_NOF_PDUS,
  .pdu_list_size = CANTP_PDU_LIST_SIZE,
  .padding = 0
};

//NSa
SECTION_POSTBUILD_DATA const CanTp_NSaType CanTpNSaConfig_RxNSdu_DiagFunctionalRx = 
{
   .CanTpNSa = 0
};
SECTION_POSTBUILD_DATA const CanTp_NSaType CanTpNSaConfig_RxNSdu_DiagPhysicalRx = 
{
   .CanTpNSa = 0
};

SECTION_POSTBUILD_DATA const CanTp_NSaType CanTpNSaConfig_TxNSdu_DiagPhysicalTx = 
{
   .CanTpNSa = 0
};



//NTa
SECTION_POSTBUILD_DATA const CanTp_NTaType CanTpNTaConfig_RxNSdu_DiagFunctionalRx = 
{
   .CanTpNTa = 0
};
SECTION_POSTBUILD_DATA const CanTp_NTaType CanTpNTaConfig_RxNSdu_DiagPhysicalRx = 
{
   .CanTpNTa = 0
};

SECTION_POSTBUILD_DATA const CanTp_NTaType CanTpNTaConfig_TxNSdu_DiagPhysicalTx = 
{
   .CanTpNTa = 0
};



SECTION_POSTBUILD_DATA const CanTp_NSduType CanTpNSduConfigList[] =
{
	{	/* DiagPhysicalRx */
		.direction = ISO15765_RECEIVE,
		.CanTpFDSupport = FALSE,
		/*lint -e651 */				
		.configData.CanTpRxNSdu.CanIf_FcPduId = CANIF_PDU_ID_DIAGPHYSICALTX,
		.configData.CanTpRxNSdu.PduR_PduId = PDUR_PDU_ID_DIAGPHYSICALRX,
		.configData.CanTpRxNSdu.CanTpRxChannel = 0,
		.configData.CanTpRxNSdu.CanTpAddressingFormant = CANTP_STANDARD,
		.configData.CanTpRxNSdu.CanTpBs = 0,
		.configData.CanTpRxNSdu.CanTpNar = CANTP_CONVERT_MS_TO_MAIN_CYCLES(1000),
		.configData.CanTpRxNSdu.CanTpNbr = CANTP_CONVERT_MS_TO_MAIN_CYCLES(20),
		.configData.CanTpRxNSdu.CanTpNcr = CANTP_CONVERT_MS_TO_MAIN_CYCLES(1000),
		.configData.CanTpRxNSdu.CanTpRxDI = 8,
		.configData.CanTpRxNSdu.CanTpRxPaddingActivation = CANTP_ON,
		.configData.CanTpRxNSdu.CanTpRxTaType = CANTP_PHYSICAL,
		.configData.CanTpRxNSdu.CanTpWftMax = 255,
		.configData.CanTpRxNSdu.CanTpSTmin = 5,
		.configData.CanTpRxNSdu.CanTpNSa = &CanTpNSaConfig_RxNSdu_DiagPhysicalRx,
		.configData.CanTpRxNSdu.CanTpNTa = &CanTpNTaConfig_RxNSdu_DiagPhysicalRx,
		.listItemType = CANTP_NOT_LAST_ENTRY	
	},
	{	/* DiagFunctionalRx */
		.direction = ISO15765_RECEIVE,
		.CanTpFDSupport = FALSE,
		/*lint -e651 */				
		.configData.CanTpRxNSdu.CanIf_FcPduId = NO_REFERRING_TX_INDEX,
		.configData.CanTpRxNSdu.PduR_PduId = PDUR_PDU_ID_DIAGFUNCTIONALRX,
		.configData.CanTpRxNSdu.CanTpRxChannel = 0,
		.configData.CanTpRxNSdu.CanTpAddressingFormant = CANTP_STANDARD,
		.configData.CanTpRxNSdu.CanTpBs = 0,
		.configData.CanTpRxNSdu.CanTpNar = CANTP_CONVERT_MS_TO_MAIN_CYCLES(1000),
		.configData.CanTpRxNSdu.CanTpNbr = CANTP_CONVERT_MS_TO_MAIN_CYCLES(20),
		.configData.CanTpRxNSdu.CanTpNcr = CANTP_CONVERT_MS_TO_MAIN_CYCLES(1000),
		.configData.CanTpRxNSdu.CanTpRxDI = 0,
		.configData.CanTpRxNSdu.CanTpRxPaddingActivation = CANTP_ON,
		.configData.CanTpRxNSdu.CanTpRxTaType = CANTP_FUNCTIONAL,
		.configData.CanTpRxNSdu.CanTpWftMax = 255,
		.configData.CanTpRxNSdu.CanTpSTmin = 5,
		.configData.CanTpRxNSdu.CanTpNSa = &CanTpNSaConfig_RxNSdu_DiagFunctionalRx,
		.configData.CanTpRxNSdu.CanTpNTa = &CanTpNTaConfig_RxNSdu_DiagFunctionalRx,
		.listItemType = CANTP_NOT_LAST_ENTRY	
	},
	{	/* DiagPhysicalTx */
		.direction = IS015765_TRANSMIT,
		.CanTpFDSupport = FALSE,
		/*lint -e651 */
		.configData.CanTpTxNSdu.CanIf_PduId = CANIF_PDU_ID_DIAGPHYSICALTX,
		.configData.CanTpTxNSdu.CanTpNPduLen = 8,		
		.configData.CanTpTxNSdu.PduR_PduId = PDUR_REVERSE_PDU_ID_DIAGPHYSICALTX, 
		.configData.CanTpTxNSdu.CanTpTxChannel = 0,	
		.configData.CanTpTxNSdu.CanTpAddressingMode = CANTP_STANDARD,
		.configData.CanTpTxNSdu.CanTpNas = CANTP_CONVERT_MS_TO_MAIN_CYCLES(1000),
		.configData.CanTpTxNSdu.CanTpNbs = CANTP_CONVERT_MS_TO_MAIN_CYCLES(1000),
		.configData.CanTpTxNSdu.CanTpNcs = CANTP_CONVERT_MS_TO_MAIN_CYCLES(900),
		.configData.CanTpTxNSdu.CanTpTxDI = 8,
		.configData.CanTpTxNSdu.CanTpTxPaddingActivation = CANTP_ON,
		.configData.CanTpTxNSdu.CanTpTxTaType = CANTP_PHYSICAL,
		.configData.CanTpTxNSdu.CanTpNSa = &CanTpNSaConfig_TxNSdu_DiagPhysicalTx,
		.configData.CanTpTxNSdu.CanTpNTa = &CanTpNTaConfig_TxNSdu_DiagPhysicalTx,
		.listItemType = CANTP_END_OF_LIST
	},
};


/* Test */
SECTION_POSTBUILD_DATA const CanTp_RxIdType CanTp_RxIdList[] = 
{
   /* DiagPhysicalRx */
   {
      .CanTpPduId = CANTP_PDU_ID_DIAGPHYSICALRX,
      .CanTpAddressingMode = CANTP_STANDARD,
      .CanTpNSduIndex = CANTP_PDU_ID_DIAGPHYSICALRX,
      .CanTpReferringTxIndex = CANTP_PDU_ID_DIAGPHYSICALTX
   },
   /* DiagFunctionalRx */
   {
      .CanTpPduId = CANTP_PDU_ID_DIAGFUNCTIONALRX,
      .CanTpAddressingMode = CANTP_STANDARD,
      .CanTpNSduIndex = CANTP_PDU_ID_DIAGFUNCTIONALRX,
      .CanTpReferringTxIndex = NO_REFERRING_TX_INDEX
   },
	/* DiagPhysicalTx */
	{
	  .CanTpPduId = CANTP_PDU_ID_DIAGPHYSICALTX,
      .CanTpAddressingMode = CANTP_STANDARD,
      .CanTpNSduIndex = CANTP_PDU_ID_DIAGPHYSICALTX,
      .CanTpReferringTxIndex = NO_REFERRING_TX_INDEX
	},
};

SECTION_POSTBUILD_DATA const CanTp_ConfigType CanTpConfig =
{
  .CanTpNSduList 	= 	CanTpNSduConfigList,
  .CanTpGeneral 	= 	&CanTpGeneralConfig,
  .CanTpRxIdList	=	CanTp_RxIdList
};



