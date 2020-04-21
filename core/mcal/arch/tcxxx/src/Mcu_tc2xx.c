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
#include "Mcu_Internal.h"
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
    .name = "TC297TX",
    .pvr = 0,
    },
};

const core_info_t core_info_list[] = {
    {
    .name = "TC297TX",
    .pvr = 0,
    .info = "Max Freq: 200Mhz, ICache: Yes",
    },
};


/* ----------------------------[private functions]---------------------------*/

/*lint -e{715} Info: Symbol 'ConfigPtr' not referenced.
 * This is OK. For other implementations than RH850F1H the variable might be used. */
void Mcu_Hw_Init( const Mcu_ConfigType *ConfigPtr ) {
#if 0
    GetAndClearResetCause();
#endif
}


#if ( MCU_NO_PLL == STD_OFF )
/**
 * Init PLL's
 *
 * @return
 */

Std_ReturnType Mcu_Hw_InitClock( const Mcu_ClockSettingConfigType *clkPtr ) {

    /* Default Setup from IfxScu_Cfg.h
     * IFX_CFG_SCU_XTAL_FREQUENCY 	20000000
     * IFX_CFG_SCU_PLL_FREQUENCY	200000000
     *
     * This is done in IfxCpu_CStart0.c....so already done.
     */
    return STD_ON;
}

#endif /*  ( MCU_NO_PLL == STD_OFF ) */


//-------------------------------------------------------------------

Std_ReturnType Mcu_Hw_DistributePllClock(void)
{
    return E_OK;
}

//-------------------------------------------------------------------

/* !req SWS_Mcu_00008 */
Mcu_PllStatusType Mcu_Hw_GetPllStatus(void)
{
    /* There is no such function in the chip */
    return MCU_PLL_LOCKED;
}

#if ( MCU_PERFORM_RESET_API == STD_ON )
/* @req SWS_Mcu_00143 */
/* !req SWS_Mcu_00144 */
void Mcu_Hw_PerformReset(void)
{
}
#endif

//-------------------------------------------------------------------


/*lint -e{715} Info: Symbol 'mcuMode' not referenced.
 * This is OK. For other implementations than RH850F1H the variable might be used. */
void Mcu_Hw_SetMode( Mcu_ModeType mcuMode)
{

}

/*lint -restore -e923 */
/*lint -restore -e9048 */
/*lint -restore -e970 */

/*lint -save -e970 Note: Use of modifier or type 'unsigned', 'long', etc outside of a typedef. OK, comes from a Renesas h-file. */
/*lint -save -e9048 Note: Unsigned integer literal without a 'U' suffix. OK, comes from a Renesas h-file. */
/*lint -save -e923 Note: Cast from unsigned int to pointer. OK, comes from a Renesas h-file. */
uint32 Mcu_Arc_GetPeripheralClock(Mcu_Arc_PeriperalClock_t type) {
    uint32 clock;
    uint32 divider = 1uL;

    // Mcu_ClockType clockIdx = Mcu_Global.config->McuDefaultClockSettings;

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
#if 0
    uint32 i;
    printf( "CPU: %s\n"
            "  Cores: %d\n",cpu_info_list[0].name, sizeof(core_info_list)/sizeof(core_info_t));
    for (i = 0; i < ARRAY_SIZE(core_info_list); i++) {
        printf("  %10s %10s\n",core_info_list[i].name, core_info_list[i].info  );
    }
    printf("  Actual Core Freq: %d [Hz]\n",Mcu_Arc_GetPeripheralClock(C_CPLLCLK));
#endif
}

void Mcu_Arc_InitZero(void)
{

}


