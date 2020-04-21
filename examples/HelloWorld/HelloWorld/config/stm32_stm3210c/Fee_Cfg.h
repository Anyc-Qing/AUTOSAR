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

#ifndef FEE_CFG_H_
#define FEE_CFG_H_

#include "MemIf_Types.h"
#include "Fee_ConfigTypes.h"

#define FEE_DEV_ERROR_DETECT		STD_ON
#define FEE_INDEX					0
#define FEE_POLLING_MODE			STD_ON
#define FEE_SET_MODE_SUPPORTED		STD_OFF /* Not supported  */
#define FEE_VERSION_INFO_API		STD_OFF
#define FEE_VIRTUAL_PAGE_SIZE		8
#define FEE_USE_JOB_NOTIFICATIONS	STD_ON

#define FEE_NUM_OF_BLOCKS			2

#define FeeConf_FeeBlockConfiguration_SwcMem_Block1	1
#define FeeConf_FeeBlockConfiguration_SwcMem_Block2	2




#define FEE_MAX_NUM_SETS			1

#endif /* FEE_CFG_H_ */ 

