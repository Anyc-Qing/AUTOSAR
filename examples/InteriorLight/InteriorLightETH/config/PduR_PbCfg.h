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

#ifndef PDUR_PBCFG_H
#define PDUR_PBCFG_H

#include "PduR.h"

#if !(((PDUR_SW_MAJOR_VERSION == 3) && (PDUR_SW_MINOR_VERSION == 0)) )
#error PduR: Configuration file expected BSW module version to be 3.0.*
#endif

#if !(((PDUR_AR_RELEASE_MAJOR_VERSION == 4) && (PDUR_AR_RELEASE_MINOR_VERSION == 0)) )
#error PduR: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#include "PduR_Types.h"


extern const PduR_PBConfigType PduR_Config;

// Alphabeticaly output Symbolic names id's for PB modules, continuing id's consecutively from non-PB ones. 
#define PduRConf_Pdu_PDU_UDP6661_TX 1u 


// Alphabeticaly output Polite Define id's for PB modules, continuing id's consecutively from non-PB ones.
// Offset at the back id's for which Tp is overriden as source module.
#define PDUR_PDU_ID_PDU_UDP6661_TX					1UL
#define PDUR_REVERSE_PDU_ID_PDU_UDP6661_TX			1UL



#endif

