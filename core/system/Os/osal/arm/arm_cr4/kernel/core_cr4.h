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

#ifndef CORE_CR4_H_
#define CORE_CR4_H_

#include "Std_Types.h"

/*lint -esym(950, asm) MISRA:FALSE_POSITIVE:keyword asm for assembly instruction execution:[MISRA 2012 Directive 2.1, required] */

static inline uint32 CoreGetIFSR( void ) {
    uint32 __val = 0;
    asm volatile (" mrc   p15, #0, %0, c5, c0, #1" : "=r"(__val) :);
    return __val;
}

static inline uint32 CoreGetDFSR( void ) {
    uint32 __val = 0;
    asm volatile (" mrc   p15, #0, %0, c5, c0, #0" : "=r"(__val) :);
    return __val;
}


static inline uint32 CoreGetIFAR( void ) {
    uint32 __val = 0;
    asm volatile (" mrc   p15, #0, %0, c6, c0, #2" : "=r"(__val) :);
    return __val;
}

static inline uint32 CoreGetDFAR( void ) {
    uint32 __val = 0;
    asm volatile (" mrc   p15, #0, %0, c6, c0, #0" : "=r"(__val) :);
    return __val;
}

static inline uint32 CoreGetCPSR( void ) {
    uint32 __val = 0;
    asm volatile (" mrs %0, cpsr" : "=r"(__val) :);
    return __val;
}


#endif /* CORE_CR4_H_ */
