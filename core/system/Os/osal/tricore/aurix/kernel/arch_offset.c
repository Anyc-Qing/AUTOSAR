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


#include <stddef.h>
#include "arch_stack.h"
#include "Compiler.h"
#include "Os.h"

#if defined(__GNUC__) || defined(__ghs__)
#define DECLARE(sym,val) \
    __asm("#define " #sym " %0" : : "i" ((val)))

#elif defined(__CWCC__)

#pragma section ".apa" ".apa"

#define DECLARE(_var,_offset) \
    __declspec(section ".apa") char _var[100+_offset]
#elif (defined(__DCC__))
#define DECLARE(_sym,_val) \
    const int arc_dummy_ ## _sym = _val
#endif

#if defined(__GNUC__) || defined(__ghs__)
void  oil_foo(void);

void  oil_foo(void) {
#endif
#if (OS_SC3 == STD_ON)
    DECLARE(OS_SC3_ASM, 1);
#endif
#if (OS_SC4 == STD_ON)
    DECLARE(OS_SC4_ASM, 1);
#endif

#if (OS_SC3 == STD_ON) || (OS_SC4 == STD_ON)
    DECLARE(SYS_CALL_CNT_ASM , SYS_CALL_CNT);
    DECLARE(E_OS_TRUSTED_INDEX_ASM , E_OS_TRUSTED_INDEX);
    DECLARE(E_OS_TRUSTED_FUNC_ASM , E_OS_TRUSTED_FUNC);
    DECLARE(TRAP_1_INTERNAL_PROTECTION_ASM , TRAP_1_INTERNAL_PROTECTION);
#endif


#if defined(__GNUC__) || defined(__ghs__)
}
#endif


