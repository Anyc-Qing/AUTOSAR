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
 * AUTOSAR version:   4.1.3
 */

#if !(((XCP_SW_MAJOR_VERSION == 2) && (XCP_SW_MINOR_VERSION == 0)) )
#error Xcp: Configuration file expected BSW module version to be 2.0.*
#endif

#if !(((XCP_AR_RELEASE_MAJOR_VERSION == 4) && (XCP_AR_RELEASE_MINOR_VERSION == 1)) )
#error Xcp: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#ifndef XCP_CFG_H_
#define XCP_CFG_H_

#include "Std_Types.h"

#define XCP_PROTOCOL_ETHERNET 0x0
#define XCP_PROTOCOL_CAN      0x1
#define XCP_PROTOCOL_USB      0x2
#define XCP_PROTOCOL_FLEXRAY  0x3
#define XCP_PROTOCOL          XCP_PROTOCOL_ETHERNET

/* Include the proper header file where the necessary Pdu Ids are defined.*/
#if XCP_PROTOCOL == XCP_PROTOCOL_CAN
#include "CanIf.h"
#include "CanIf_PBCfg.h"
#elif XCP_PROTOCOL == XCP_PROTOCOL_ETHERNET
#include "SoAd.h"
#endif

#define XCP_DEV_ERROR_DETECT STD_ON    
#define XCP_VERSION_INFO_API STD_OFF 

#define XCP_FEATURE_PROTECTION      STD_ON 
#define XCP_FEATURE_CALPAG          STD_OFF 
#define XCP_FEATURE_DIO             STD_OFF 
#define XCP_FEATURE_BLOCKMODE       STD_ON 
#define XCP_FEATURE_GET_SLAVE_ID    STD_OFF
#define XCP_FEATURE_STIM            STD_OFF
#define XCP_FEATURE_PGM             STD_OFF
#define XCP_FEATURE_DAQ             STD_ON

#define DAQ_STATIC 0U
#define DAQ_DYNAMIC 1U
#define XCP_DAQ_CONFIG_TYPE    DAQ_DYNAMIC

#define XCP_DAQ_COUNT          4   
#define XCP_ODT_COUNT		   4	
#define XCP_ODT_ENTRIES_COUNT  4

#define XCP_EVENT_COUNT        1

#define XCP_RX_CH_NUMBER  1
#define XCP_TX_CH_NUMBER  1

/*This Pdu Id will be used by lower layer when it calls Xcp_<Lo>RxIndication()*/
#define XCP_PDU_ID_XCP_RX_PDU 0u
#define XcpConf_Pdu_XCP_RX_PDU 0u

/*This Pdu Id will be used by the lower layer when it calls Xcp_<Lo>TxConfirmation()*/
#define XCP_PDU_ID_XCP_TX_PDU 0u
#define XCP_REVERSE_PDU_ID_XCP_TX_PDU 0u

#if ((XCP_FEATURE_GET_SLAVE_ID == STD_ON) && (XCP_PROTOCOL == XCP_PROTOCOL_CAN))
#endif /* XCP_FEATURE_GET_SLAVE_ID == STD_ON && XCP_PROTOCOL == XCP_PROTOCOL_CAN*/

#define XCP_TIMESTAMP_UNIT   XCP_TIMESTAMP_UNIT_1MS
#define XCP_TIMESTAMP_SIZE   0
#define XCP_COUNTER_ID       COUNTER_ID_OsCounter
#define XCP_IDENTIFICATION   XCP_IDENTIFICATION_ABSOLUTE 
  
#define XCP_MAX_RXTX_QUEUE   10
#define XCP_MIN_DAQ          0
#define XCP_MAX_CTO          8
#define XCP_MAX_DTO          8


/*This wrapper function is intended to be called from periodic task, 
  which has the period: 10 millisecond. */
extern void Xcp_Arc_WrapperForEventChannel_XcpEventChannel(void);

#endif /* XCP_CFG_H_ */
