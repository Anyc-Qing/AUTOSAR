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

/* Generator version: 1.2.1
 * AUTOSAR version:   4.0.3
 */

#include "NvM.h"
/*lint -save -e18 */
#ifndef NVM_NOT_SERVICE_COMPONENT
#include "Rte_NvM.h"
#endif

#define DEVICE_ID_FEE 1u
#define DEVICE_ID_EA 0u
/*lint -restore */










const NvM_BlockDescriptorType BlockDescriptorList[] = {
	{
	/* Configuration ID */
		.BlockCRCType = 					NVM_CRC16,
		.BlockJobPriority = 				0,
		.BlockManagementType = 				NVM_BLOCK_NATIVE,
		.BlockUseCrc = 						false,

		.BlockWriteProt = 					false,

		.CalcRamBlockCrc = 					false,
		.InitBlockCallback =				NULL,


		.NvBlockBaseNumber = 				0,
		.NvBlockLength = 					2,
		.NvBlockNum = 						1,
		.NvramDeviceId =					0,
		.RamBlockDataAddress =				NULL,

		.ResistantToChangesSw =				false,
		.RomBlockDataAdress =				NULL,
		.RomBlockNum =						0,


		.SingleBlockCallback =				NULL,

		.WriteBlockOnce =					false,



	},
	{
		.BlockCRCType = 					NVM_CRC32,
		.BlockJobPriority = 				0,
		.BlockManagementType = 				NVM_BLOCK_NATIVE,
		.BlockUseCrc = 						true,

		.BlockWriteProt = 					false,

		.CalcRamBlockCrc = 					false,
#if defined(USE_RTE) && !defined(NVM_NOT_SERVICE_COMPONENT)
		.InitBlockCallback =				Rte_Call_PNInitBlock_SwcMem_Block1_InitBlock,
#else
		.InitBlockCallback =				NULL,
#endif		


		.NvBlockBaseNumber = 				1,
		.NvBlockLength = 					4,
		.NvBlockNum = 						1,
		.NvramDeviceId =					DEVICE_ID_FEE,
		.RamBlockDataAddress =				NULL,

		.ResistantToChangesSw =				FALSE, /* Not supported */
		.RomBlockDataAdress =				NULL,
		.RomBlockNum =						0,
		.SelectBlockForReadall = 			FALSE,

#ifdef USE_RTE
		.SingleBlockCallback =				Rte_Call_PNJobFinished_SwcMem_Block1_JobFinished,
#else
		.SingleBlockCallback =				NULL,	
#endif		

		.WriteBlockOnce =					FALSE,



	},
	{
		.BlockCRCType = 					NVM_CRC32,
		.BlockJobPriority = 				0,
		.BlockManagementType = 				NVM_BLOCK_NATIVE,
		.BlockUseCrc = 						true,

		.BlockWriteProt = 					false,

		.CalcRamBlockCrc = 					false,
#if defined(USE_RTE) && !defined(NVM_NOT_SERVICE_COMPONENT)
		.InitBlockCallback =				Rte_Call_PNInitBlock_SwcMem_Block2_InitBlock,
#else
		.InitBlockCallback =				NULL,
#endif		


		.NvBlockBaseNumber = 				1,
		.NvBlockLength = 					4,
		.NvBlockNum = 						1,
		.NvramDeviceId =					DEVICE_ID_EA,
		.RamBlockDataAddress =				NULL,

		.ResistantToChangesSw =				FALSE, /* Not supported */
		.RomBlockDataAdress =				NULL,
		.RomBlockNum =						0,
		.SelectBlockForReadall = 			FALSE,

#ifdef USE_RTE
		.SingleBlockCallback =				Rte_Call_PNJobFinished_SwcMem_Block2_JobFinished,
#else
		.SingleBlockCallback =				NULL,	
#endif		

		.WriteBlockOnce =					FALSE,



	}
};

const NvM_ConfigType NvM_Config = {
		.Common = {
				.MultiBlockCallback = NULL,
		},
#if defined(USE_DEM)
		.DemEvents = {
				.NvMIntegrityFailedDemEventId = DEM_EVENT_ID_NULL,
				.NvMReqFailedDemEventId = DEM_EVENT_ID_NULL,
		},
#endif
		.BlockDescriptor = BlockDescriptorList,
};

