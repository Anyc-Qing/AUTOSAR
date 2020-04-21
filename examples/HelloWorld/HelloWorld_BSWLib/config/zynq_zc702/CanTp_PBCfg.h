
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

#ifndef CANTP_PBCFG_H_
#define CANTP_PBCFG_H_

#if !(((CANTP_AR_RELEASE_MAJOR_VERSION == 4) && (CANTP_AR_RELEASE_MINOR_VERSION == 0)) )
#error CanTp: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#if !(((CANTP_SW_MAJOR_VERSION == 2 ) && (CANTP_SW_MINOR_VERSION == 0)) )
#error CanTp: Configuration file expected BSW module version to be 2.0.*
#endif

#include "CanTp_Types.h"




/* This is also the index in the configuration list defined in CanTp_Cfg.c*/
/* RxNSdus */
#define CANTP_PDU_ID_DIAGPHYSICALRX 0 /* DiagPhysicalRx */
#define CANTP_PDU_ID_DIAGFUNCTIONALRX 1 /* DiagFunctionalRx */
/* TxNSdus */
#define CANTP_PDU_ID_DIAGPHYSICALTX 2/* DiagPhysicalTx */

/* The number of Sdus */
#define CANTP_NOF_SDUS 3


/* The number of different pdus */
#define CANTP_NOF_PDUS 3
/* Size of CanTp_RxIdList */
#define CANTP_PDU_LIST_SIZE 4
#endif /* CANTP_PBCFG_H_ */

