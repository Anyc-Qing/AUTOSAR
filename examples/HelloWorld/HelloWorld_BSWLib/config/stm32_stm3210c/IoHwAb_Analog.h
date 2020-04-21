
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

/* Generator version: 1.1.0
 * AUTOSAR version:   4.0.3
 */

#ifndef IOHWAB_ANALOG_H_
#define IOHWAB_ANALOG_H_


/* @req ARCIOHWAB005 */

#include "Std_Types.h"
#include "Adc.h"

typedef IoHwAb_AnalogValueType IoHwAb_AmpereType;
typedef IoHwAb_AnalogValueType IoHwAb_VoltType;
typedef IoHwAb_AnalogValueType IoHwAb_OhmType;

#define IOHWAB_SIGNAL_ANALOGSIGNAL ((IoHwAb_SignalType)0)


Std_ReturnType IoHwAb_Analog_Read(IoHwAb_SignalType signal, IoHwAb_AnalogValueType *value, IoHwAb_StatusType *status);


#endif /* IOHWAB_ANALOG_H_ */

