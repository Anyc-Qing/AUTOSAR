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

#ifndef COMM_PBCFG_H_
#define COMM_PBCFG_H_

#if !(((COMM_SW_MAJOR_VERSION == 3) && (COMM_SW_MINOR_VERSION == 0)) )
#error ComM: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((COMM_AR_RELEASE_MAJOR_VERSION == 4) && (COMM_AR_RELEASE_MINOR_VERSION == 0)) )
#error ComM: Configuration file expected AUTOSAR version to be 4.0.*
#endif

/* ComM module configuration. */
extern const ComM_ConfigType ComM_Config;

#endif /*COMM_PBCFG_H_*/
