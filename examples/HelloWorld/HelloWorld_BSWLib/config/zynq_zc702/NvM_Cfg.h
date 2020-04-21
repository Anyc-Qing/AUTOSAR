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

#if !(((NVM_SW_MAJOR_VERSION == 1) && (NVM_SW_MINOR_VERSION == 2)) )
#error NvM: Configuration file expected BSW module version to be 1.2.*
#endif

#ifndef NVM_CFG_H_
#define NVM_CFG_H_

#include "NvM_Types.h"
#include "NvM_ConfigTypes.h"

#define NVM_API_CONFIG_CLASS							NVM_API_CONFIG_CLASS_3
#define NVM_BSWM_MULTI_BLOCK_JOB_STATUS_INFORMATION		STD_OFF /* Not supported */
#define NVM_COMPILED_CONFIG_ID							0 /* Not supported */
#define NVM_CRC_NUM_OF_BYTES							0 /* Not supported */
#define NVM_DATASET_SELECTION_BITS						0u
#define NVM_DEV_ERROR_DETECT							STD_ON
#define NVM_DRV_MODE_SWITCH								STD_OFF /* Not supported */
#define NVM_DYNAMIC_CONFIGURATION						STD_OFF /* Not supported */
#define NVM_JOB_PRIORIZATION							STD_OFF /* Not supported */
#define NVM_POLLING_MODE								STD_OFF
#define NVM_REPEAT_MIRROR_OPERATIONS					0 /* Not suported  */
#define NVM_SET_RAM_BLOCK_STATUS_API					STD_ON
#define NVM_SIZE_STANDARD_JOB_QUEUE						5
#define NVM_VERSION_INFO_API							STD_OFF

#define NVM_NUM_OF_NVRAM_BLOCKS							3

/* This has been moved in AUTOSAR 4 */
#define NVM_MAX_NUMBER_OF_WRITE_RETRIES					2

#define NVM_MAX_BLOCK_LENGTH 							4
#define NVM_SwcMem_Block1_HANDLE (uint8)2
#define NvMConf_NvMBlockDescriptor_SwcMem_Block1	(uint8)2
#define NVM_SwcMem_Block1_SIZE 4
#define NVM_SwcMem_Block2_HANDLE (uint8)3
#define NvMConf_NvMBlockDescriptor_SwcMem_Block2	(uint8)3
#define NVM_SwcMem_Block2_SIZE 4


extern const NvM_ConfigType NvM_Config;

#endif /* NVM_CFG_H_ */
