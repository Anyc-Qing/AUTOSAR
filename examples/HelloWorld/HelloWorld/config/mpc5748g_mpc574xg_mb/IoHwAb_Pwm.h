
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

#ifndef IOHWAB_PWM_H_
#define IOHWAB_PWM_H_

#include "Std_Types.h"
#include "Pwm.h"


#define IOHWAB_SIGNAL_PWMSIGNAL_LED3 ((IoHwAb_SignalType)0)



Std_ReturnType IoHwAb_Pwm_Set_Duty(IoHwAb_SignalType signal, IoHwAb_DutyType duty, IoHwAb_StatusType *status);



#endif /* IOHWAB_PWM_H_ */

