
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

#if !(((CANTP_AR_RELEASE_MAJOR_VERSION == 4) && (CANTP_AR_RELEASE_MINOR_VERSION == 0)) )
#error CanTp: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#if !(((CANTP_SW_MAJOR_VERSION == 2 ) && (CANTP_SW_MINOR_VERSION == 0)) )
#error CanTp: Configuration file expected BSW module version to be 2.0.*
#endif

#ifndef CANTP_CFG_H_
#define CANTP_CFG_H_

#include "CanTp_Types.h"
#define CANTP_MAX_NOF_SDUS				3

#define FRTP_CANCEL_TRANSMIT_REQUEST 	STD_ON
#define CANTP_VERSION_INFO_API          STD_OFF  /**< Build version info API */
#define CANTP_DEV_ERROR_DETECT          STD_ON
 
#define NO_REFERRING_TX_INDEX			0xFFFF

/** Not Supported*/
#define CANTP_CHANGE_PARAMETER_API		STD_OFF
/** Not Supported*/
#define CANTP_READ_PARAMETER_API		STD_OFF

/* CanFD support */
#define CANTP_CANFD_SUPPORT			    STD_OFF
#define CANTP_MAX_NO_CHANNELS			1

#endif /* CANTP_CFG_H_ */

