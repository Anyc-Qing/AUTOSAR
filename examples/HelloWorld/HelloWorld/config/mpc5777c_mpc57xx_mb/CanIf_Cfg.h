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

/* Generator version: 5.3.0
 * AUTOSAR version:   4.0.3
 */

#if !(((CANIF_SW_MAJOR_VERSION == 5) && (CANIF_SW_MINOR_VERSION == 3)) )
#error CanIf: Configuration file expected BSW module version to be 5.3.*
#endif

/* @req 4.0.3/CANIF021 */
#if !(((CANIF_AR_RELEASE_MAJOR_VERSION == 4) && (CANIF_AR_RELEASE_MINOR_VERSION == 0)) )
#error CanIf: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#ifndef CANIF_CFG_H_
#define CANIF_CFG_H_

/* @req 4.0.3/CANIF377 */
#include "Can.h"

#define CANIF_PUBLIC_CANCEL_TRANSMIT_SUPPORT			STD_OFF  // Not supported
#define CANIF_PUBLIC_CHANGE_BAUDRATE_SUPPORT			STD_OFF  // Not supported
#define CANIF_PUBLIC_DEV_ERROR_DETECT					STD_ON
#define CANIF_PUBLIC_MULTIPLE_DRV_SUPPORT				STD_OFF  // Not supported
#define CANIF_PUBLIC_PN_SUPPORT							STD_OFF
#define CANIF_PUBLIC_READRXPDU_DATA_API					STD_OFF  // Not supported
#define CANIF_PUBLIC_READRXPDU_NOTIFY_STATUS_API		STD_OFF  // Not supported
#define CANIF_PUBLIC_READTXPDU_NOTIFY_STATUS_API		STD_OFF  // Not supported
#define CANIF_PUBLIC_SETDYNAMICTXID_API					STD_OFF  // Not supported
#define CANIF_PUBLIC_TX_BUFFERING						STD_OFF
#define CANIF_PUBLIC_TXCONFIRM_POLLING_SUPPORT			STD_OFF  // Not supported
#define CANIF_PUBLIC_VERSION_INFO_API					STD_OFF
#define CANIF_PUBLIC_WAKEUP_CHECK_VALID_BY_NM			STD_OFF  // Not supported
#define CANIF_PUBLIC_WAKEUP_CHECK_VALIDATION_SUPPORT	STD_OFF

#define CANIF_PRIVATE_DLC_CHECK							STD_ON


#define CANIF_CTRL_WAKEUP_SUPPORT						STD_OFF  // Not supported 
#define CANIF_TRCV_WAKEUP_SUPPORT						STD_OFF

#define CANIF_CTRLDRV_TX_CANCELLATION					STD_OFF

// ArcCore
#define CANIF_ARC_RUNTIME_PDU_CONFIGURATION				STD_OFF  // Not supported
#define CANIF_ARC_TRANSCEIVER_API						STD_OFF
#define CANIF_OSEKNM_SUPPORT							STD_OFF
#define NO_CANIF_HRH 0xFFFFu
#define CANIF_OSEKNM_INVALID_NET_ID	0xFFu

//Software filter
#define CANIF_PRIVATE_SOFTWARE_FILTER_TYPE_LINEAR

typedef uint8 CanIf_Arc_ChannelIdType;
#define CanIfConf_CanIfCtrlCfg_CanIfCtrlCfg	(CanIf_Arc_ChannelIdType)0
#define CANIF_CHANNEL_CNT (CanIf_Arc_ChannelIdType)1


#define CANIF_TRANSCEIVER_CHANNEL_CNT	(uint8)

#define	CANNM_CALLOUT    0u
#define	CANTP_CALLOUT    1u
#define	J1939TP_CALLOUT  2u
#define	PDUR_CALLOUT     3u
#define	XCP_CALLOUT      4u

#define ARC_T1_RX_CBK_CALLOUT 5u   

#define ARC_T1_TX_CBK_CALLOUT 5u 

#define CANIF_PDU_ID_T1_RX_PDU        0
#define CANIF_PDU_ID_XCP_RX_PDU        1

#define CANIF_PDU_ID_T1_TX_PDU        0
#define CANIF_PDU_ID_XCP_TX_PDU        1

#include "CanIf_ConfigTypes.h"

#endif
