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


#include <string.h>
#include "Std_Types.h"
#include "SchM_Mcu.h"
#include "Mcu.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM)
#include "Dem.h"
#endif
#include "Cpu.h"
#include "io.h"
#if defined(USE_KERNEL)
#include "irq.h"
#endif

#include "IfxScuCcu.h"

//#define USE_LDEBUG_PRINTF 1
#if defined(USE_LDEBUG_PRINTF)
#include "debug.h"
#endif



/* ----------------------------[private define]------------------------------*/

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(_x)  (sizeof(_x)/sizeof((_x)[0]))
#endif

/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/

typedef struct {
  char *name;
  uint32 pvr;
  const char *info;
} core_info_t;

typedef struct {
  char *name;
  uint32 pvr;
} cpu_info_t;

/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/

const cpu_info_t cpu_info_list[] = {
    {
    .name = "TC399TX",
    .pvr = 0,
    },
};

const core_info_t core_info_list[] = {
    {
    .name = "TC399TX",
    .pvr = 0,
    .info = "Max Freq: 300Mhz, ICache: Yes",
    },
};


/* ----------------------------[private functions]---------------------------*/

/*lint -e{715} Info: Symbol 'ConfigPtr' not referenced. */
void Mcu_Hw_Init( const Mcu_ConfigType *ConfigPtr ) {
	/* Stub as this is not the real MCAL */
}

Std_ReturnType Mcu_Hw_InitClock( const Mcu_ClockSettingConfigType *clkPtr ) {
    /* Stub as this is not the real MCAL */
    return E_OK;
}

//-------------------------------------------------------------------

Std_ReturnType Mcu_Hw_DistributePllClock(void) {
    /* Stub as this is not the real MCAL */
    return E_OK;
}

//-------------------------------------------------------------------

/* !req SWS_Mcu_00008 */
Mcu_PllStatusType Mcu_Hw_GetPllStatus(void) {
    /* Stub as this is not the real MCAL */
    /* There is no such function in the chip */
    return MCU_PLL_LOCKED;
}

#if ( MCU_PERFORM_RESET_API == STD_ON )
/* @req SWS_Mcu_00143 */
/* !req SWS_Mcu_00144 */
void Mcu_Hw_PerformReset(void) {
    /* Stub as this is not the real MCAL */
}
#endif

//-------------------------------------------------------------------


/*lint -e{715} Info: Symbol 'mcuMode' not referenced.
 * This is OK. For other implementations than RH850F1H the variable might be used. */
void Mcu_Hw_SetMode( Mcu_ModeType mcuMode) {
    /* Stub as this is not the real MCAL */
}

/*lint -save -e970 Note: Use of modifier or type 'unsigned', 'long', etc outside of a typedef. OK, comes from a Renesas h-file. */
/*lint -save -e9048 Note: Unsigned integer literal without a 'U' suffix. OK, comes from a Renesas h-file. */
/*lint -save -e923 Note: Cast from unsigned int to pointer. OK, comes from a Renesas h-file. */
//static uint32 getCpuClk( Mcu_ClockType clockIdx ) {
    /* Stub as this is not the real MCAL */
//    return 0u;
//}
/*lint -restore -e923 */
/*lint -restore -e9048 */
/*lint -restore -e970 */

/*lint -save -e970 Note: Use of modifier or type 'unsigned', 'long', etc outside of a typedef. OK, comes from a Renesas h-file. */
/*lint -save -e9048 Note: Unsigned integer literal without a 'U' suffix. OK, comes from a Renesas h-file. */
/*lint -save -e923 Note: Cast from unsigned int to pointer. OK, comes from a Renesas h-file. */
uint32 Mcu_Arc_GetPeripheralClock(Mcu_Arc_PeriperalClock_t type) {
    uint32 clock;
    uint32 divider = 1uL;

    /* Read clock source (CKSC_xxS_ACT) and dividers (CKSC_xxD_ACT) */
    switch(type) {
        /* Directly from the PLLs */
        case CLOCK_CPU0:
            //IfxScuCcu_getCpuFrequency();
        case CLOCK_STM:
            clock = IfxScuCcu_getStmFrequency();
            /* To be fixed: Wrong */
            break;
        default:
            break;
    }

    return clock/divider;
}
/*lint -restore -e923 */
void Mcu_Arc_PrintInfo( void )
{

}

void Mcu_Arc_InitZero(void)
{

}

