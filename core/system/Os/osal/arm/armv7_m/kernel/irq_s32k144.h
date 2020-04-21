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

#ifndef IRQ_S32K144_H
#define IRQ_S32K144_H

#if defined(CFG_S32K144)

#include "s32k144.h"


/*
 * Configuration of the Cortex-M4 Processor and Core Peripherals
 */
//#define __CM4_REV                 0x0001  /*!< Core revision r0p1                             */
//#define __MPU_PRESENT             1       /*!< STM32F303xB/STM32F303xC devices provide an MPU */
#define __NVIC_PRIO_BITS          4       /*!< STM32F303xB/STM32F303xC devices use 4 Bits for the Priority Levels */
//#define __Vendor_SysTickConfig    0       /*!< Set to 1 if different SysTick Config is used */
//#define __FPU_PRESENT             1       /*!< STM32F303xB/STM32F303xC devices provide an FPU */


#include "core_cm3.h"



/* Offset from start of exceptions to interrupts
 * Exceptions have negative offsets while interrupts have positive
 */
#define IRQ_INTERRUPT_OFFSET 16

#define Irq_SOI()

typedef IRQn_Type IrqType;

#define NUMBER_OF_INTERRUPTS_AND_EXCEPTIONS ((uint32)NUMBER_OF_INT_VECTORS)

// TBD
typedef enum {
      PERIPHERAL_CLOCK_0,
      PERIPHERAL_CLOCK_1,
      PERIPHERAL_CLOCK_2,
} Mcu_Arc_PeriperalClock_t;


typedef enum {
    CPU_0=0,
} Cpu_t;

#else
#error No CPU defined
#endif

#endif /* IRQ_S32K144_H */
