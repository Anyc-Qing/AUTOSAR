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

/* ----------------------------[information]----------------------------------*/
/*
 * Author: lach
 *
 * Description: Trap handling stub for TC2xx
 *
 */


/* ----------------------------[includes]------------------------------------*/

#if CFG_TC2XX
#include "Std_Types.h"
#include "io.h"
#include "tc2xx.h"
#include "os_i.h"
#include "arc.h"
#include "Ifx_reg.h"
/* ----------------------------[private define]------------------------------*/

/* ----------------------------[private macro]-------------------------------*/



/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
#if defined(CFG_ARUIX_TCXXX_TEST)
MemProt_SEC_VAR_CLEARED_UNSPECIFIED uint32_t MPU_vectorMask;
MemProt_SEC_VAR_CLEARED_UNSPECIFIED uint32_t Exc_DEADD;
#endif
/* ----------------------------[public functions]----------------------------*/

/**
 * Called by lower level exception handlers and tries to handle
 * the exception.
 *
 * @param trap Class and trap number
 * @return trap handling
 */
uint32_t TC2xxTrapHandler(uint32_t trapClass, uint32_t tin ) {
	uint32_t rv = TRP_NOT_HANDLED;
#if defined(CFG_ARUIX_TCXXX_TEST)
	uint32_t psw = 0;
	MPU_vectorMask |= (1<<trapClass);
#endif
	switch (trapClass) {
	    // Handling InternalProtection trap
        case 1:
            rv = TRP_NOT_HANDLED | TRP_ADJUST_ADDR;
            // Memeory protection error
            if (tin == TRAP_1_INTERNAL_PROTECTION_MPW)
            {
#if defined(CFG_ARUIX_TCXXX_TEST)
                // get the address where the memory write trap occured
                Exc_DEADD = __mfcr(CPU_DEADD);
                psw = __mfcr(CPU_PSW);
#endif
            }
            break;
        case 2:
            rv = TRP_NOT_HANDLED | TRP_ADJUST_ADDR;
            break;
        default:
            break;
    }
	return rv;
}

#endif
