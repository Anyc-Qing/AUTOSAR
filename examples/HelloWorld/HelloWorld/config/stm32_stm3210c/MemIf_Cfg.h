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

#if !(((MEMIF_SW_MAJOR_VERSION == 1) && (MEMIF_SW_MINOR_VERSION == 0)) )
#error MemIf: Configuration file expected BSW module version to be 1.0.X*
#endif

#if !(((MEMIF_AR_RELEASE_MAJOR_VERSION == 4) && (MEMIF_AR_RELEASE_MINOR_VERSION == 0)) )
#error MemIf: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#ifndef MEMIF_CFG_H_
#define MEMIF_CFG_H_

#include "MemIf_Types.h"

#if defined(USE_FEE)
#include "Fee.h"
#endif

#if defined(USE_EA)
#include "Ea.h"
#endif

/* @req MemIf060 */

#define MEMIF_VERSION_INFO_API    		STD_OFF
#define MEMIF_DEV_ERROR_DETECT			STD_OFF										
#define MEMIF_NUMBER_OF_DEVICES			1 

#if (MEMIF_NUMBER_OF_DEVICES == 1)
#if defined(USE_FEE) && defined(USE_EA)
#error Only one of Fee oe EA can be used at a time.
#else
#if defined(USE_FEE)
#define MEMIF_DEVICE_TO_USE				FLS_DRIVER_INDEX // not generated
#endif
#if defined(USE_EA)
#define MEMIF_DEVICE_TO_USE				EEP_DRIVER_INDEX // not generated
#endif
#endif
#endif
#endif /*MEMIF_CFG_H_*/

