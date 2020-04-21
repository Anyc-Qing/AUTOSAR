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

/* Generator version: 4.0.0
 * AUTOSAR version:   4.0.3
 */

#ifndef CDD_PDUR_CFG_H
#define CDD_PDUR_CFG_H

/* CddPduR IPDU IDs	*/
#define CDDPDUR_PDU_ID_DLT_RX  0 
#define CDDPDUR_PDU_ID_CDDPDURIPDU_DLT_RX  CDDPDUR_PDU_ID_DLT_RX

/* CddPduR IPDU IDs	*/
#define CDDPDUR_PDU_ID_DLT_TX  1 
#define CDDPDUR_PDU_ID_CDDPDURIPDU_DLT_TX  CDDPDUR_PDU_ID_DLT_TX

/* CddPduR IPDU IDs	*/
#define CDDPDUR_PDU_ID_TEST_RX  2 
#define CDDPDUR_PDU_ID_CDDPDURIPDU_TEST_RX  CDDPDUR_PDU_ID_TEST_RX

/* CddPduR IPDU IDs	*/
#define CDDPDUR_PDU_ID_TEST_TX  3 
#define CDDPDUR_PDU_ID_CDDPDURIPDU_TEST_TX  CDDPDUR_PDU_ID_TEST_TX


#define CDDPDUR_MAX_N_IPDUS 4	

extern PduIdType CddPduR_PduMap[CDDPDUR_MAX_N_IPDUS];

#endif






