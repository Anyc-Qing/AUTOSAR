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

/* ----------------------------[includes]------------------------------------*/

#include "Std_Types.h"
#include "Mcu.h"
#include "core_cr4.h"
#include "MemMap.h"
#if defined(USE_FEE)
#include "Fee_Memory_Cfg.h"
#endif
#if defined(USE_DMA)
#include "Dma.h"
#endif
#include "asm_arm.h"
#include "Os.h"
#include "arc.h"

#if defined(CFG_TMS570LS12X)
#if !(((MCU_SW_MAJOR_VERSION == 3) && (MCU_SW_MINOR_VERSION == 0)) )
#error Mcu: Configuration file expected BSW module version to be 3.0.X*
#endif
#if !(((MCU_AR_RELEASE_MAJOR_VERSION == 4) && (MCU_AR_RELEASE_MINOR_VERSION == 3)) )
#error Mcu: Configuration file expected AUTOSAR version to be 4.3.*
#endif
#else
#if !(((MCU_SW_MAJOR_VERSION == 2) && (MCU_SW_MINOR_VERSION == 0)) )
#error Mcu: Configuration file expected BSW module version to be 2.0.X*
#endif
#if !(((MCU_AR_RELEASE_MAJOR_VERSION == 4) && (MCU_AR_RELEASE_MINOR_VERSION == 1)) )
#error Mcu: Configuration file expected AUTOSAR version to be 4.1.*
#endif
#endif
/* ----------------------------[private define]------------------------------*/
/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/
/* ----------------------------[private functions]---------------------------*/
/* ----------------------------[public functions]----------------------------*/

/**
 * Called by lower level exception handlers and tries to handle
 * the exception.
 *
 * @param exceptionVector The exception vector.
 * @return
 */
uint32 Cpu_ExceptionHandler(uint32 exceptionVector) {
	uint32 rv = EXC_NOT_HANDLED;
	/*lint -e10 -e19 -e26  MISRA:OTHER:variables are used based on case in below switch case statements:[MISRA 2004 Info, advisory] */
	uint32 far;
	uint32 fsr;
	uint16 status;

//	Mpc5xxx_vectorMask |= (1<<exceptionVector);

	/* The MPU can generate
	 * - Background fault
	 * - Permission fault
	 * - Alignment fault
	 *
	 * and generates a prefetch or data abort.
	 */

	switch (exceptionVector) {
	    case EXC_PREFETCH_ABORT:

	        /* IFSR */
            fsr = CoreGetIFSR();
            /*lint -e534 MISRA:OTHER:ignoring return value:[MISRA 2012 Rule 17.7, required]*/
            far = CoreGetIFAR();

	        (void)far;
	        (void)fsr;

	        break;
	    case EXC_DATA_ABORT:
	        /* DFSR */
	        fsr = CoreGetDFSR();
	        far = CoreGetDFAR();

	        status = (uint16)((fsr & 0xfUL) & ((fsr >> 7U) & 0x10UL));

	        /* Check for MMU things */
	        if( (status == 0x1U) || (status == 0x0U) || (status == 0xdU) ) {
	            rv = EXC_NOT_HANDLED | EXC_ADJUST_ADDR;
	        }

	        break;
        case EXC_UNDEFINED_INSTRUCTION:
            /* flow down */
	    case EXC_SVC_CALL:
	        /* flow down */
	    default:
	        break;
	}

	return rv;
}


