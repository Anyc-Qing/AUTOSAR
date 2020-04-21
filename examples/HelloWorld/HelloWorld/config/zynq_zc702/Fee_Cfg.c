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
 * AUTOSAR version:   4.0.3
 */

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.0.3 */

#include "Fee.h"
#include "NvM_Cbk.h"

const Fee_BlockConfigType BlockConfigList[] = {
	{
		/* SwcMem_Block1 */
		.BlockNumber = 			1,
		.BlockSize = 			(256u + (FEE_VIRTUAL_PAGE_SIZE  - 1)) & ~ (FEE_VIRTUAL_PAGE_SIZE - 1u),/* @req FEE005 */
		.ImmediateData = 		FALSE, /* Not supported */
		.NumberOfWriteCycles = 	1,

	}

};

const Fee_ConfigType Fee_Config = {
		.General = {
		#if (FEE_USE_JOB_NOTIFICATIONS == STD_ON)
				.NvmJobEndCallbackNotificationCallback = NvM_JobEndNotification,
				.NvmJobErrorCallbackNotificationCallback = NvM_JobErrorNotification		
		#else
				.NvmJobEndCallbackNotificationCallback = NULL,
				.NvmJobErrorCallbackNotificationCallback = NULL
		#endif
		},
		.BlockConfig = BlockConfigList,
};

