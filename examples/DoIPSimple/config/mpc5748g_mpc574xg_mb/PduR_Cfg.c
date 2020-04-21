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





PduRTpBufferInfo_type PduRTpBuffers[] = {


	{
		.pduInfoPtr = NULL,
		.status = PDUR_BUFFER_NOT_ALLOCATED_FROM_UP_MODULE,
		.bufferSize = 0,
		.rxByteCount =0,
		.txByteCount ={0,0,0,0,0,0,0,0},
		.nAcc=0,
	}
};


PduRTpBufferInfo_type *PduRTpRouteBufferPtrs[] = {

	NULL,
	NULL,
	NULL,
	NULL
};







const PduR_RamBufCfgType PduR_RamBufCfg = {
	.TpBuffers = PduRTpBuffers,
	.TpRouteBuffers = PduRTpRouteBufferPtrs,
	.TxBuffers = NULL,
	.NTpBuffers = 1, // Including 1 non-allocated buffer place holder for Upper module allocated buffer
	.NTpRouteBuffers = PDUR_MAX_ROUTE_COUNT, 
	.NTxBuffers = 0
};


