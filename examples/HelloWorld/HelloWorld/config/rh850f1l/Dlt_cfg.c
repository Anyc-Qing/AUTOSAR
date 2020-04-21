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

#include "Dlt.h"

#if !(((DLT_SW_MAJOR_VERSION == 1) && (DLT_SW_MINOR_VERSION == 0)) )
#error Dlt: Configuration file expected BSW module version to be 1.1.*
#endif

#if !(((DLT_AR_MAJOR_VERSION == 4) && (DLT_AR_MINOR_VERSION == 0)) )
#error Dlt: Expected AUTOSAR version to be 4.0.*
#endif

const Dlt_ConfigType Dlt_Config = 
{
	.EcuId = "DLTT",
};
