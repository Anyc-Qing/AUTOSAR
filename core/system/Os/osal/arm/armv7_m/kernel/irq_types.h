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

#ifndef IRQ_TYPES_H
#define IRQ_TYPES_H

/*
 * So,
 * ARM HW:  "normally" have 16 priorities, 0-highest
 * Arccore: 32 priorities, 0 - lowest, 31 highest.
 *
 * This is Arccore priority
 */

#ifndef IRQ_PENDSV_PRIORITY
#define IRQ_PENDSV_PRIORITY     20
#endif

#if defined(CFG_JACINTO)
#include "irq_jacinto.h"
#elif defined(CFG_STM32)
#include "irq_stm32.h"
#elif defined(CFG_S32K144)
#include "irq_s32k144.h"
#elif defined (CFG_S32K148)
#include "irq_s32k148.h"
#else
#error No CPU defined
#endif

#endif /* IRQ_TYPES_H */
