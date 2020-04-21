
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

/* Generator version: 5.18.0
 * AUTOSAR version:   4.0.3
 */

#if !(((DEM_SW_MAJOR_VERSION == 5) && (DEM_SW_MINOR_VERSION == 18)) )
#error Dem: Configuration file expected BSW module version to be 5.18.*
#endif

#if !(((DEM_AR_RELEASE_MAJOR_VERSION == 4) && (DEM_AR_RELEASE_MINOR_VERSION == 0)) )
#error DEM: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#ifndef DEMINTERRID_H_
#define DEMINTERRID_H_

#define DEM_EVENT_ID_NULL (Dem_EventIdType)0u
#define DEM_EVENT_ID_BSW_START (Dem_EventIdType)1u
#define DemConf_DemEventParameter_CAN_E_TIMEOUT	1u
#define DemConf_DemEventParameter_FLS_E_WRITE_FAILED	2u
#define DemConf_DemEventParameter_FLS_E_READ_FAILED	3u
#define DemConf_DemEventParameter_FLS_E_ERASE_FAILED	4u
#define DemConf_DemEventParameter_FLS_E_COMPARE_FAILED	5u
#define DEM_EVENT_ID_LAST_FOR_BSW (Dem_EventIdType)5
#endif /*DEMINTERRID_H_*/
