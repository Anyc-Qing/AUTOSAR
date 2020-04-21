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
 * Author: mahi (@lach- this file is taken from PPC MPU handler)
 *
 * Description:
 *  Design decision:
 *  - Call Os_Panic() for all exceptions not setup by the system.
 *  - Place Os_Panic() in Mcu_<cpu>.c
 *  - IMPROVEMENT: FEE memory ranges must be set somewhere?
 *  - Mcu_AddExceptionHook()
 *
 */


/* ----------------------------[includes]------------------------------------*/
#include <stdint.h>
#include "Std_Types.h"
#include "tc2xx.h"
#include "Ifx_reg.h"
#include "arch_offset.h"

#define INST_32BIT (1UL)

/* ----------------------------[private define]------------------------------*/
/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/

extern uint32 TC2xxTrapHandler(uint32 trapClass, uint32 tin );
extern void Os_Arc_Panic(uint32 exception, void *pData);
/*
 * Gets the instruction length of instructions at an address.
 *
 * Opcode with 1 in the LSB is 32 bit, and 0 in LSB is 16-bit Instruction
 *
 */
static uint32 adjustReturnAddr( uint32 instrAddr ) {
    if ((instrAddr & INST_32BIT) == INST_32BIT) {
        instrAddr += 4;
    }
    else {
        instrAddr += 2;
    }
    return instrAddr;
}


/**
 * Calls higher level functions to handle the exception.
 *
 * @param exception The exception number
 * @param instrAddr RA address from the trap
 * @return Adjusted return address
 */
uint32 TC2xx_HandleTrap(uint32 tin , uint32 trapClass, uint32 instrAddr ) {
    uint32 rv = 0;
    uint32 retAddr = 0;

    /*lint -e838 LINT:FALSE_POSITIVE:rv reassigning from initialization:[MISRA 2004 Info, advisory] */
    rv = TC2xxTrapHandler( trapClass, tin );

    if( (rv & TRP_NOT_HANDLED) != FALSE) {
        /* The exception was not handled */
        Os_Arc_Panic(trapClass, NULL);
        /* We get back here only if protection hook is configured and returns PRO_IGNORE */
    }

    if( (rv & TRP_ADJUST_ADDR) != FALSE ) {
        retAddr = adjustReturnAddr( instrAddr );
    }

    return retAddr;
}




