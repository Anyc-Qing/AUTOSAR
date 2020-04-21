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

/* Generator version: 3.0.0
 * AUTOSAR version:   4.0.3
 */

#include "ComM.h"

#if defined(USE_CANSM)
#include "CanSM.h"
#endif

#if defined(USE_NM)
#include "Nm.h" 
#endif

#if defined(USE_LINSM)
#include "LinSM.h"
#endif

#if defined(USE_ETHSM)
#include "EthSM.h"
#endif

extern void ComM_MainFunction(NetworkHandleType Channel);
 
/* @req COMM818 */
void ComM_MainFunction_ComMChannel1(void) {
   ComM_MainFunction(ComMConf_ComMChannel_ComMChannel1);
}
      


