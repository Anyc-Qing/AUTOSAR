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

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */
/** @tagSettings DEFAULT_ARCHITECTURE=MPC5744P|MPC5777M|MPC5748G|MPC5747C|MPC5777C */

/* Global requirements */
/* @req SWS_Mcu_00237 Mcu_ModeType specifies the identification mode */
/* @req SWS_Mcu_00232 Mcu_ClockType defines the identification of clock type*/
/* @req SWS_Mcu_00152 Imported types */

#define _DEBUG_

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
#include "mpc55xx.h"
#include "Cpu.h"
#include "io.h"
#if defined(USE_KERNEL)
#include "irq.h"
#endif
#include "debug.h"
#include "Mcu_Arc.h"
#include "arc_assert.h"

/* ----------------------------[private define]------------------------------*/

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(_x)  (sizeof(_x)/sizeof((_x)[0u]))
#endif

#define CORE_PVR_E200Z4251N3    0x81560011uL
#define CORE_PVR_E200Z425N3     0x815F8000uL
#define CORE_PVR_E200Z720N3     0x81680000uL
#define CORE_PVR_E200Z210N3     0x81680000uL
#define CORE_PVR_E200Z4204N3    0x81530000uL
#define CORE_PVR_E200Z759N3     0x816A0000uL

#define WDG_SOFTLOCK_WORD_1   0x0000c520uL
#define WDG_SOFTLOCK_WORD_2   0x0000d928uL

/* ----------------------------[private macro]-------------------------------*/

#if defined(CFG_MPC5744P)
#define CALC_SYSTEM_CLOCK(_extal,_emfd,_eprediv,_erfd)  \
            ( (((_extal)/(_eprediv))*(_emfd)) / ((_erfd)) )
#elif defined(CFG_MPC5777M)
// This macro is not used on this target since it is hard to define what the system clock is
#endif

/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/

/*lint -e9003 -e1776 MISRA:OTHER:Readability:[MISRA 2012 Rule 8.9, advisory]*/
const cpu_info_t cpu_info_list[] = {

#if defined(CFG_MPC5744P)
        {
            .name = "MPC5744P",
            .pvr = CORE_PVR_E200Z4251N3,
            .info = "aa"
        },
#elif defined(CFG_MPC5746C)
        {
            .name = "MPC5746C",
            .pvr = CORE_PVR_E200Z4204N3,
            .info = "Core 0"
        },
        {
            .name = "MPC5746C",
            .pvr = CORE_PVR_E200Z210N3,
            .info = "Core 1"
        },
#elif defined(CFG_MPC5748G)
        {
            .name = "MPC5748G",
            .pvr = CORE_PVR_E200Z4204N3,
            .info = "Core 0"
        },
        {
            .name = "MPC5748G",
            .pvr = CORE_PVR_E200Z4204N3,
            .info = "Core 1"
        },
        {
            .name = "MPC5748G",
            .pvr = CORE_PVR_E200Z210N3,
            .info = "Core 3"
        },
#elif defined(CFG_MPC5747C)

        {
            .name = "MPC5747C",
            .pvr = CORE_PVR_E200Z4204N3,
            .info = "Core 0"
        },
        /** The Z2 is still called Core 3 on this chip,
         * even with the Z4 only being single-core
         */
        {
            .name = "MPC5747C",
            .pvr = CORE_PVR_E200Z210N3,
            .info = "Core 3"
        },

#elif defined(CFG_MPC5777M)
        {
            .name = "MPC5777M",
            .pvr = CORE_PVR_E200Z720N3,
            .info = ""
        },
        {
            .name = "MPC5777M",
            .pvr = CORE_PVR_E200Z720N3,
            .info = ""
        },
        {
            .name = "MPC5777M",
            .pvr = CORE_PVR_E200Z425N3,
            .info = ""
        },
#elif defined(CFG_MPC5777C)
        {
            .name = "MPC5777C",
            .pvr = CORE_PVR_E200Z759N3,
            .info = "Core 0"
        },
        {
            .name = "MPC5777C",
            .pvr = CORE_PVR_E200Z759N3,
            .info = "Core 1"
        },
#endif
    };
/*lint -e9003 MISRA:OTHER:Readability:[MISRA 2012 Rule 8.9, advisory]*/
const core_info_t core_info_list[] =
        {
#if defined(CFG_MPC5744P)
        {
            .name = "MPC5744P",
            .pvr = CORE_PVR_E200Z4251N3,
            .info = "Max Freq: 200Mhz, ICache: Yes (8KB)"
        },
#elif defined(CFG_MPC5777M)
        {
            .name = "E200Z720",
            .pvr = CORE_PVR_E200Z720N3,
            .info = ""
        },
        {
            .name = "E200Z720",
            .pvr = CORE_PVR_E200Z720N3,
            .info = ""
        },
        {
            .name = "E200Z4251N3",
            .pvr = CORE_PVR_E200Z425N3,
            .info = ""
        },
#elif defined(CFG_MPC5746C)
        {
            .name = "E200Z420",
            .pvr = CORE_PVR_E200Z4204N3,
            .info = "Main Core 0: Max freq. 160MHz, 8KB i-cache, 4KB d-cache"
        },
        {
            .name = "E200Z210",
            .pvr = CORE_PVR_E200Z210N3,
            .info = "Peripheral Core 1: Max freq. 80MHz"
        },
#elif defined(CFG_MPC5748G)
        {
            .name = "E200Z420",
            .pvr = CORE_PVR_E200Z4204N3,
            .info = "Main Core 0: Max freq. 160MHz, 8KB i-cache, 4KB d-cache"
        },
        {
            .name = "E200Z420",
            .pvr = CORE_PVR_E200Z4204N3,
            .info = "Main Core 1: Max freq. 160MHz, 8KB i-cache, 4KB d-cache"
        },
        {
            .name = "E200Z210",
            .pvr = CORE_PVR_E200Z210N3,
            .info = "Peripheral Core 2: Max freq: 80Mhz"
        },
#elif defined(CFG_MPC5747C)
        {
            .name = "E200Z420",
            .pvr = CORE_PVR_E200Z4204N3,
            .info = "Main Core 0: Max freq. 160MHz, 8KB i-cache, 4KB d-cache"
        },
        {
            .name = "E200Z210",
            .pvr = CORE_PVR_E200Z210N3,
            .info = "Peripheral Core 2: Max freq: 80Mhz"
        },
#elif defined(CFG_MPC5777C)
        {
            .name = "E200Z759",
            .pvr = CORE_PVR_E200Z759N3,
            .info = "Main boot computational core 0: Max freq. 264 MHz, 16 KB I-Cache and 16 KB D-Cache"
        },
        {
            .name = "E200Z759",
            .pvr = CORE_PVR_E200Z759N3,
            .info = "Duplicated computational core 1: Max freq: 264 Mhz, 16 KB I-Cache and 16 KB D-Cache"
        },
#endif
    };

/* ----------------------------[private functions]---------------------------*/

/*lint -e{10, 40, 63, 9036, 737 } MISRA:HARDWARE_ACCESS: Conditional expression should have essentially Boolean type [MISRA 2012 Rule 14.4, required] */
static void GetAndClearResetCause(void) {
    Mcu_ResetType resetReason;

    #if defined(CFG_MPC5777C)

    typeof(SIU.RSR) rawValue;
    rawValue.R = SIU.RSR.R;

    SIU.RSR.R = rawValue.R; /* Clear */

    if( rawValue.B.SSRS ) {
        resetReason = MCU_SW_RESET;
    }
    else if( rawValue.B.PORS ) {
        resetReason = MCU_POWER_ON_RESET;
    }
    else {
        resetReason = MCU_RESET_UNDEFINED;
    }

    Mcu_Global.rawResetvalue = rawValue.R;
    Mcu_Global.resetReason = resetReason;

#else

    typeof(MC_RGM.DES) rawValueDES;
    typeof(MC_RGM.FES) rawValueFES;

    /* DES and FES is 32 bit */
    rawValueDES.R = MC_RGM.DES.R;
    rawValueFES.R = MC_RGM.FES.R;

    MC_RGM.DES.R = rawValueDES.R; /* Clear */
    MC_RGM.FES.R = rawValueFES.R; /* Clear */

#if defined(CFG_MPC5744P) || defined(CFG_MPC5777M)

    if( rawValueDES.B.F_EDR ) {
        resetReason = MCU_POWER_ON_RESET;
    }
    else if( rawValueFES.B.F_SOFT_FUNC ) {
        resetReason = MCU_SW_RESET;
#else

    if (rawValueFES.B.F_SOFT_FUNC) {
        resetReason = MCU_SW_RESET;
#endif
    }
    else if (rawValueDES.B.F_POR) {
        resetReason = MCU_POWER_ON_RESET;
    }
    else {
        resetReason = MCU_RESET_UNDEFINED;
	}
    /*lint -e539 LINT: HARDWARE_ACCESS: Something with the HW */
	Mcu_Global.rawResetvalue = ((((uint64) rawValueDES.R) << 32u) + rawValueFES.R);

	/* @req SWS_Mcu_00005 - The function Mcu_GetResetReason shall read the reset reason from the hardware and
	 * return this reason if supported by the hardware. If the hardware does not support the hardware detection
	 *  of the reset reason, the return value from the function Mcu_GetResetReason shall always be MCU_POWER_ON_RESET.
	 */
	Mcu_Global.resetReason = resetReason;
#endif
}

/* ----------------------------[Public functions]---------------------------*/
const cpu_info_t * Mcu_Arc_GetCpuInfoList(uint32 *num) {
    *num = (sizeof(cpu_info_list) / sizeof((cpu_info_list)[0u]));
    return cpu_info_list;
}

const core_info_t * Mcu_Arc_GetCoreInfoList(uint32 *num) {
    *num = (sizeof(core_info_list) / sizeof((cpu_info_list)[0u]));
    return core_info_list;
}

void Mcu_Hw_Init(const Mcu_ConfigType *ConfigPtr) {

    GetAndClearResetCause();

    /* Call Integration part */
    Mcu_Arc_InitPost(ConfigPtr);

#if (MCU_CLOCK_SRC_FAILURE_NOTIFICATION == STD_ON)
#if defined (CFG_MPC5777C)
    ISR_INSTALL_ISR1("LossOfLock", Mcu_Arc_LossOfLock, PLL0_SR_LOLF_PLL1_SR_LOLF, 10u , 0u );
    PLLDIG.PLL1SR.B.LOLF = 1u; //Clear flag
#endif
#endif
}

#if ( MCU_NO_PLL == STD_OFF )

#if ( MCU_INIT_CLOCK == STD_ON )

Std_ReturnType Mcu_Hw_InitClock( const Mcu_ClockSettingConfigType *clockSettingsPtr ) {
    /* Call integration part */
    Mcu_Arc_InitClockPre(clockSettingsPtr);

    /*lint -e{920} MISRA:STANDARDIZED_INTERFACE: the clockSettingsPtr may be needed for other architectures, [MISRA 2012 Rule 1.3, required] */
    (void)clockSettingsPtr;

    /* Handled individually for each mpc in post integration function */
    Mcu_Arc_InitClockPost(clockSettingsPtr);

    return E_OK;
}
#endif

#endif /*  ( MCU_NO_PLL == STD_OFF ) */

Mcu_PllStatusType Mcu_Hw_GetPllStatus(void) {
    Mcu_PllStatusType rv;

/*lint -e{923} MISRA:HARDWARE_ACCESS: cast from unsigned long to pointer, [MISRA 2012 Rule 11.6, required]*/
#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) ||defined(CFG_MPC5746C)

    if ( 0u == PLLDIG.PLLSR.B.LOCK) {
#else
    if (0u == PLLDIG.PLL0SR.B.LOCK) {
#endif
        rv = MCU_PLL_UNLOCKED;
    }
    else {
        rv = MCU_PLL_LOCKED;
    }

    /* @req SWS_Mcu_00008, The function Mcu_GetPllStatus shall return the lock status of the PLL*/
    return rv;
}

/*lint -e{923} MISRA:HARDWARE_ACCESS: cast from unsigned long to pointer, [MISRA 2012 Rule 11.6, required]*/
#if ( MCU_PERFORM_RESET_API == STD_ON )
/* @req SWS_Mcu_00143 - The function Mcu_PerformReset shall perform a microcontroller reset by using the hardware feature of the microcontroller. */

void Mcu_Hw_PerformReset(void)
{
    MC_ME.MCTL.R = 0x00005AF0uL; /* Reset, 0x5AF0 is control key to enable writing to register */
    MC_ME.MCTL.R = 0x0000A50FuL; /* Reset, 0xA50F is inverted control key to enable writing to register */

    while(MC_ME.GS.B.S_MTRANS != 0u) {}
    while(MC_ME.GS.B.S_CURRENTMODE != 0u) {}
}
#endif

/**
 * @brief This service activates the PLL clock to the MCU clock distribution.
 *
 * @note This function has no effect on MPC5744P. If called it will always return E_OK.
 *
 * @note Non reentrant
 * @retval E_OK     Command has been accepted.
 */
Std_ReturnType Mcu_Hw_DistributePllClock(void) {
    return E_OK;
}

/*lint -e{715} MISRA:OTHER: For other implementations than RH850F1H the variable might be used [MISRA 2012 Rule 2.7, advisory] */
void Mcu_Hw_SetMode(Mcu_ModeType mcuMode) {

}

/*lint -e{923, 950, 522, 10} MISRA:HARDWARE_ACCESS: cast from unsigned long to pointer, [MISRA 2012 Rule 11.6, required]*/
void Mcu_Arc_PlatformInit(void) {

#if defined(CFG_MPC5744P)

#if defined(CFG_MPC5744P_NO_INIT_SYSTEM_RAM)
    static const uint64 setVal = 0uL;

    /* Init System SRAM, 384K  */
    memset_uint64((void *)0x40000000uL, &setVal, 0x00060000uL);
#endif

    AIPS_0.MPRA.R = 0x70777700uL; /* Enable all */

    /* PACR */
    AIPS_0.PACR[0].R = 0uL; /* A */
    AIPS_0.PACR[1].R = 0uL; /* B */
    AIPS_0.PACR[2].R = 0uL; /* C */
    AIPS_0.PACR[3].R = 0uL; /* D */
    /* E is reserved */
    AIPS_0.PACR[5].R = 0uL; /* F */
    AIPS_0.PACR[6].R = 0uL; /* G */
    AIPS_0.PACR[7].R = 0uL; /* H */

    /* OPACR */
    for (uint32 i=0uL;i < 32u;i++) {
        AIPS_0.OPACR[i].R = 0uL;
    }

    AIPS_1.MPRA.R = 0x70777700uL; /* Enable all */

    /* PACR */
    AIPS_1.PACR[0u].R = 0uL; /* A */
    AIPS_1.PACR[1u].R = 0uL; /* B */
    AIPS_1.PACR[2u].R = 0uL; /* C */
    AIPS_1.PACR[3u].R = 0uL; /* D */
    /* E is reserved */
    AIPS_1.PACR[5u].R = 0uL; /* F */
    AIPS_1.PACR[6u].R = 0uL; /* G */
    AIPS_1.PACR[7u].R = 0uL; /* H */

    /* OPACR */
    for (uint32 i=0u;i < 32u;i++) {
        AIPS_1.OPACR[i].R = 0uL;
    }


    /* Make sure that bus aborts triggers Prefetch or Data Abort exception */
    SSCM.ERROR.B.PAE = 1u;
    SSCM.ERROR.B.RAE = 1u;

    /**
     * From MPC5744P datasheet.
     *                                RWSC  APC
     * 167 MHz < fCPU ≤ 200 MHz       5     2
     */
    const typeof(PFLASH.PFCR1.B) val = {
        .P0_M0PFE = 1u,
        .APC=2u,
        .RWSC=5u,
        .P0_DPFEN = 0u,
        .P0_IPFEN = 1u,
        .P0_PFLIM = 2u,
        .P0_BFEN = 1u};

    PFLASH.PFCR1.B = val;
#elif defined(CFG_MPC5748G) || defined(CFG_MPC5746C)

    AIPS_0.MPRA.R = 0x70777700uL; /* Enable all */

    /* PACR */
    AIPS_0.PACR[0].R = 0uL; /* A */
    AIPS_0.PACR[1].R = 0uL; /* B */
    AIPS_0.PACR[2].R = 0uL; /* C */
    AIPS_0.PACR[3].R = 0uL; /* D */
    /* E is reserved */
    AIPS_0.PACR[5].R = 0uL; /* F */
    AIPS_0.PACR[6].R = 0uL; /* G */
    AIPS_0.PACR[7].R = 0uL; /* H */


    /* OPACR */
    for (uint32 i=0uL;i < 32u;i++) {

        AIPS_0.OPACR[i].R = 0uL;
    }

    /*
     * From MPC5748 datasheet.
     *                                RWSC  APC
     * 133 MHz < fFlash <= 160 MHz       4    1
     * */

    const typeof(PFLASH.PFCR1.B) val = {
        .P0_M0PFE = 1u,
        .APC=1u,
        .RWSC=4u,
        .P0_DPFEN = 0u,
        .P0_IPFEN = 1u,
        .P0_PFLIM = 2u,
        .P0_BFEN = 1u};

    PFLASH.PFCR1.B = val;
#endif

}

/*lint -e{923} MISRA:HARDWARE_ACCESS: cast from unsigned long to pointer, [MISRA 2012 Rule 11.6, required]*/
void Mcu_Arc_WdgExtendTimeout(void) {
#if defined(CFG_MPC5744P)
//#define SWT SWT_0
    /* Disable watchdog. Watchdog is enabled default after reset.*/
    SWT.SR.R = WDG_SOFTLOCK_WORD_1;
    SWT.SR.R = WDG_SOFTLOCK_WORD_2;
    SWT.CR.R = 0x8000010AuL; /* Disable Watchdog */

#if defined(USE_WDG)
    SWT.TO.R = (uint32)(16000000uL*0.5f); /* set timeout to 500ms 16MHz IRC clock */
    SWT.CR.R = 0x8000011BuL; /* enable watchdog */
#endif
#endif

#if defined(CFG_MPC5777M)

    for(uint8 i=0uL; i<4uL; i++) {
        volatile struct SWT_tag *swtPtr = (volatile struct SWT_tag *)(0xFC050000uL + i*0x4000ul);

        /* Disable watchdog. Watchdog is enabled default after reset.*/
        swtPtr->SR.R = WDG_SOFTLOCK_WORD_1;
        swtPtr->SR.R = WDG_SOFTLOCK_WORD_2;
        swtPtr->CR.R = 0xE000010AuL; /* Disable Watchdog */
#if defined(USE_WDG)
        if(i==0u) {
            SWT_0.TO.R = (uint32)(16000000uL*0.5f); /* set timeout to 500ms 16MHz IRC clock */
            SWT_0.CR.R = 0xE000011BuL; /* Access for all cores */
        }
#endif
    }

#endif

#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) ||defined(CFG_MPC5746C)
    /* Disable watchdog fore Core 0. Watchdog is enabled default after reset.*/

    SWT_0.SR.R = 0xc520uL;
    SWT_0.SR.R = 0xd928uL;
    SWT_0.CR.R = 0xFF00010AuL;

#if defined(USE_WDG)
    SWT_0.TO.R = (uint32)(16000000uL*0.5f); /* set timeout to 500ms 16MHz IRC clock */
    SWT_0.CR.R = 0xE000011BuL; /* enable watchdog */
#endif

#endif
}

/*lint -e{923} MISRA:HARDWARE_ACCESS: cast from unsigned long to pointer, [MISRA 2012 Rule 11.6, required]*/
#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) ||defined(CFG_MPC5746C)
static uint32 getPllClock(Mcu_Arc_PeriperalClock_t type) {
    uint32 clock = 0uL;
    uint32 extal = Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting].McuClockReferencePointFrequency;

    switch( type ) {
        case C_PLL_PHI:
        /* Fpll = XOSC * PLL_MFD / ( 2* PLL_RFDPHI ) */

        clock = (uint32) (extal * PLLDIG.PLLDV.B.MFD / (2uL * (1uL<<(PLLDIG.PLLDV.B.RFDPHI))));
        break;
        default:
        ASSERT(0u);
        break;
    }

    return clock;
}
#else
static uint32 getPllClock(Mcu_Arc_PeriperalClock_t type) {
    uint32 clock = 0uL;
    uint32 extal =
            Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting].McuClockReferencePointFrequency;
    /*lint -e931 MISRA: :HARDWARE_ACCESS: :Both sides have side effects, [MISRA 2012 Rule 13.2, required]*/
    switch (type) {
        case C_PLL1_PHI:
            /* Fpll1 = XOSC * PLL1_MFD / ( 2* PLL1_RFDPHI ) */
            clock = extal * (PLLDIG.PLL1DV.B.MFD / ((uint32)2uL * PLLDIG.PLL1DV.B.RFDPHI));
            break;
        case C_PLL0_PHI:
            /* Fpll0 = XOSC * PLL0_MFD / ( PLL0_PREDIV * PLL0_RFDPHI ) */
            clock =  extal * (PLLDIG.PLL0DV.B.MFD
                    / ((uint32)PLLDIG.PLL0DV.B.PREDIV * PLLDIG.PLL0DV.B.RFDPHI));
            break;
        default:
            ASSERT(0u)
            ;
            break;
    }

    return clock;
}
#endif

#if defined(CFG_MPC5744P)
static uint32 getOnChipClock(Mcu_Arc_PeriperalClock_t type) {

    uint32 clock = 0uL;
    uint32 prescaler = 1uL;

    switch( type ) {
        case C_SYS_CLK:
        /* Same as "system clock" */
        break;
        case C_PBRIDGE:
        clock = getPllClock(C_PLL1_PHI);
        prescaler = MC_CGM.SC_DC0.B.DIV + (uint32)1uL;//lint !e923 MISRA:HARDWARE_ACCESS: cast from unsigned long to pointer, [MISRA 2012 Rule 11.6, required]
        break;
        default:
        ASSERT(0uL);
        break;
    }

    return clock/prescaler;
}
#endif

/**
 * Get the system clock in Hz. It calculates the clock from the
 * different register settings in HW.
 * @return
 */
uint32 Mcu_Arc_GetSystemClock(void) {

    /* IMPROVEMENT: Check the runmode and then figure out the what PLL
     *              is currently system PLL, we now assume PLL1
     */
#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) ||defined(CFG_MPC5746C)
    return getPllClock(C_PLL_PHI);
#else
    return getPllClock(C_PLL1_PHI);
#endif
}

#if defined(CFG_MPC5744P)

/***
 * Gets a peripheral clock in Hz.
 * @param type
 * @return
 */
/*lint -e{923} MISRA:HARDWARE_ACCESS: cast from unsigned long to pointer, [MISRA 2012 Rule 11.6, required]*/
uint32 Mcu_Arc_GetPeripheralClock(Mcu_Arc_PeriperalClock_t type) {
    uint32 sysClock = Mcu_Arc_GetSystemClock();
    vuint32_t prescaler = 1uL;

    switch (type)
    {
        /* System clocks */
        case C_SYS_CLK:
        break;
        case C_PLL0_PHI:
        /* Non-modulated clock, max 160Mhz */
        break;
        case C_PLL1_PHI:
        /* Modulated clock, max 200Mhz */
        (void)getOnChipClock(C_PLL1_PHI);
        break;
        case PERIPHERAL_CLOCK_PIT_0:
        case PERIPHERAL_CLOCK_PIT_1:
        case PERIPHERAL_CLOCK_PIT_2:
        case PERIPHERAL_CLOCK_PIT_3:
        case PERIPHERAL_CLOCK_DSPI_A:
        case PERIPHERAL_CLOCK_DSPI_B:
        case PERIPHERAL_CLOCK_DSPI_C:
        case PERIPHERAL_CLOCK_DSPI_D:
        // phbridge clock
        prescaler = MC_CGM.SC_DC0.B.DIV + (uint32)1uL;
        break;
        case PERIPHERAL_CLOCK_FLEXPWM_0:
        // motc clock
        prescaler = MC_CGM.AC0_DC0.B.DIV + (uint32)1uL;
        break;
        case PERIPHERAL_CLOCK_LIN_A:
        case PERIPHERAL_CLOCK_LIN_B:
        // half sys clock
        prescaler = 2uL;
        break;
        case PERIPHERAL_CLOCK_FEC_0:
        prescaler = MC_CGM.AC10_DC0.B.DIV + (uint32)1uL;
        break;
        case PERIPHERAL_CLOCK_STM_0:
        sysClock = getOnChipClock(C_PBRIDGE);
        break;
        default:
        ASSERT(0u);
        break;
    }

    return sysClock/(prescaler);

}

#elif defined(CFG_MPC5748G)  || defined(CFG_MPC5747C) ||defined(CFG_MPC5746C)

/***
 * Gets a peripheral clock in Hz.
 * @param type
 * @return
 */
uint32 Mcu_Arc_GetPeripheralClock(Mcu_Arc_PeriperalClock_t type) {
    uint32 sysClock = Mcu_Arc_GetSystemClock();
    vuint32_t prescaler = 1uL;

    switch (type)
    {
        /* System clocks */
        case C_SYS_CLK:
        break;
        case C_PLL_PHI:
        /* Modulated clock, max 200Mhz */
        //getOnChipClock(C_PLL_PHI);
        break;

#if defined(CFG_MPC5746C) || defined(CFG_MPC5747C) || defined(CFG_MPC5748G)
        /* SC_DC0 - S160
         * SC_DC1 - S80
         * SC_DC2 - S40
         * SC_DC3 - F40
         * SC_DC4 - F80
         * SC_DC5 - FS80
         * SC_DC6 - F20
         *
         * We want the baudrate clock for SPI, NOT peripheral clock
         * */

        case PERIPHERAL_CLOCK_SPI_0: /* SPI_0 */
        /* Baud Clock = FXOSC or F40. Per Clock = S40  */
        prescaler = MC_CGM.SC_DC3.B.DIV + (uint32)1u;
        break;
        case PERIPHERAL_CLOCK_SPI_1: /* SPI_1 */
        case PERIPHERAL_CLOCK_SPI_2: /* SPI_2 */
        /* Baud Clock = F80. Per Clock = S40  */
        prescaler = MC_CGM.SC_DC4.B.DIV + (uint32)1uL;
        break;
        case PERIPHERAL_CLOCK_SPI_3: /* SPI_3 */
#if defined(CFG_MPC5747C) || defined(CFG_MPC5748G)
        case PERIPHERAL_CLOCK_SPI_4: /* SPI_4 */
        case PERIPHERAL_CLOCK_SPI_5: /* SPI_5 */
        /* Baud Clock = F40. Per Clock = S40  */
        prescaler = MC_CGM.SC_DC3.B.DIV + (uint32)1uL;
        break;

#endif
#endif
        case PERIPHERAL_CLOCK_FLEXCAN_A:
        case PERIPHERAL_CLOCK_FLEXCAN_B:
        case PERIPHERAL_CLOCK_FLEXCAN_C:
        case PERIPHERAL_CLOCK_FLEXCAN_D:
        case PERIPHERAL_CLOCK_FLEXCAN_E:
        case PERIPHERAL_CLOCK_FLEXCAN_F:
        case PERIPHERAL_CLOCK_FLEXCAN_G:
        case PERIPHERAL_CLOCK_FLEXCAN_H:
        case PERIPHERAL_CLOCK_DSPI_A:
        case PERIPHERAL_CLOCK_DSPI_B:
        case PERIPHERAL_CLOCK_PIT_0:
        case PERIPHERAL_CLOCK_PIT_1:
        case PERIPHERAL_CLOCK_PIT_2:
        case PERIPHERAL_CLOCK_PIT_3:
        case PERIPHERAL_CLOCK_LIN_A:

        /* F40 - max 40 MHz (for PIT, etc.) */
        prescaler = MC_CGM.SC_DC3.B.DIV + (uint32)1uL;
        break;
        case PERIPHERAL_CLOCK_DSPI_C:
        case PERIPHERAL_CLOCK_DSPI_D:
        case PERIPHERAL_CLOCK_LIN_B:
        case PERIPHERAL_CLOCK_LIN_C:
        case PERIPHERAL_CLOCK_LIN_D:
        case PERIPHERAL_CLOCK_LIN_4:
        case PERIPHERAL_CLOCK_LIN_5:
        case PERIPHERAL_CLOCK_LIN_6:
        case PERIPHERAL_CLOCK_LIN_7:
        case PERIPHERAL_CLOCK_LIN_8:
        case PERIPHERAL_CLOCK_LIN_9:
        case PERIPHERAL_CLOCK_LIN_10:
        case PERIPHERAL_CLOCK_LIN_11:
        case PERIPHERAL_CLOCK_LIN_12:
        case PERIPHERAL_CLOCK_LIN_13:
        case PERIPHERAL_CLOCK_LIN_14:
        case PERIPHERAL_CLOCK_LIN_15:
        case PERIPHERAL_CLOCK_LIN_16:
        case PERIPHERAL_CLOCK_LIN_17:
        /* F80 - max 80 MHz */
        prescaler = MC_CGM.SC_DC4.B.DIV + (uint32)1uL;
        break;

        case PERIPHERAL_CLOCK_ENET:
        // sys clock / 2
        /* F80 - max 80 MHz */
        prescaler = MC_CGM.SC_DC4.B.DIV + (uint32)1uL;
        break;

        case PERIPHERAL_CLOCK_STM_0:
        prescaler = MC_CGM.SC_DC5.B.DIV + (uint32)1u; /*FS80 clock*/
        break;
        case PERIPHERAL_CLOCK_EMIOS_0:
        case PERIPHERAL_CLOCK_EMIOS_1:
#if defined(CFG_MPC5748G)  || defined(CFG_MPC5747C)
        case PERIPHERAL_CLOCK_EMIOS_2:
#endif
        prescaler = MC_CGM.SC_DC5.B.DIV + (uint32)1uL; /*FS80 clock*/
        break;
        default:
        ASSERT(0u);
        break;
    }

    return sysClock/(prescaler);

}

#elif defined(CFG_MPC5777M)

/**
 * Gets AuxClock0
 * @return
 */
static uint32 GetAuxClock0(void) {
    uint32 clock = 0uL;
    if(MC_CGM.AC0_SC.B.SELCTL == 2u) {
        // sys clock is driven by pll0
        clock = getPllClock(C_PLL0_PHI);
    }
    return clock;
}

/***
 * Gets a peripheral clock in Hz.
 * @param type
 * @return
 */
uint32 Mcu_Arc_GetPeripheralClock(Mcu_Arc_PeriperalClock_t type) {
    uint32 clock = 0uL;
    vuint32_t prescaler = 1uL;

    switch (type)
    {
        case PERIPHERAL_CLOCK_M_CAN_1:
        case PERIPHERAL_CLOCK_M_CAN_2:
        case PERIPHERAL_CLOCK_M_CAN_3:
        case PERIPHERAL_CLOCK_M_CAN_4:
        // ppbridge clock
        if (MC_CGM.AC8_SC.B.SELCTL == 0x1u) {
            //external clock source
            clock = Mcu_Arc_GetClockReferencePointFrequency();
            MC_CGM.AC8_DC0.R = 0x80000000uL;
            //Div = 0 + 1
            // 40 MHz / 1 = 40 MHz

        }
        else if (MC_CGM.AC8_SC.B.SELCTL == 0x2u) {
            //PLL
            clock = getPllClock(C_PLL0_PHI);
            MC_CGM.AC8_DC0.R = 0x800E0000uL;
            //Div = 14 + 1
            // 600 MHz / 15 = 40 MHz
        }
        prescaler = MC_CGM.AC8_DC0.B.DIV + 1u;
        break;
        case PERIPHERAL_CLOCK_PIT_0:
        case PERIPHERAL_CLOCK_PIT_1:
        case PERIPHERAL_CLOCK_PIT_2:
        case PERIPHERAL_CLOCK_PIT_3:
        clock = GetAuxClock0();
        prescaler = MC_CGM.AC0_DC0.B.DIV + 1u;
        break;
        case PERIPHERAL_CLOCK_STM_0:
        // ppbridge clock
        clock = Mcu_Arc_GetSystemClock();
        prescaler = MC_CGM.SC_DC2.B.DIV + 1u;
        break;
        case PERIPHERAL_CLOCK_DSPI_A:
        case PERIPHERAL_CLOCK_DSPI_B:
        case PERIPHERAL_CLOCK_DSPI_C:
        case PERIPHERAL_CLOCK_DSPI_D:
        case PERIPHERAL_CLOCK_DSPI_12:
        case PERIPHERAL_CLOCK_LIN_A:
        case PERIPHERAL_CLOCK_LIN_B:
        case PERIPHERAL_CLOCK_LIN_14:
        case PERIPHERAL_CLOCK_LIN_15:
        case PERIPHERAL_CLOCK_LIN_16:
        clock = GetAuxClock0();
        prescaler = MC_CGM.AC0_DC4.B.DIV + 1u;
        break;
        case PERIPHERAL_CLOCK_DSPI_E:
        case PERIPHERAL_CLOCK_DSPI_F:
        case PERIPHERAL_CLOCK_DSPI_6:
        clock = GetAuxClock0();
        switch(MC_CGM.AC0_DC3.B.DIV_FMT) {
            case 0uL:
            // no fraction
            break;
            case 1u:
            clock = clock * 10uL;
            break;
            case 2u:
            clock = clock * 100uL;
            break;
            case 3u:
            clock = clock * 1000uL;
            break;
        }
        prescaler = MC_CGM.AC0_DC3.B.DIV + 1u;
        break;
        case PERIPHERAL_CLOCK_FEC_0:
        if ( MC_CGM.AC10_SC.B.SELCTL == 2u)
        {
            clock = getPllClock(C_PLL0_PHI);
        }
        else {
            clock = Mcu_Arc_GetClockReferencePointFrequency();
        }
        prescaler = MC_CGM.AC10_DC0.B.DIV + 1u;
        break;
        default:
        ASSERT(0u);
        break;
    }

    return clock/(prescaler);

}
#elif (CFG_MPC5777C)
/***
 * Gets a peripheral clock in Hz.
 * @param type
 * @return
 */
uint32 Mcu_Arc_GetPeripheralClock(Mcu_Arc_PeriperalClock_t type) {
    vuint32_t pll1_clk;
    vuint32_t pll0_clk;
    uint32 ret;

    pll1_clk = Mcu_Arc_GetSystemClock();
    pll0_clk = getPllClock(C_PLL0_PHI); //per_clk should be non modulated hence pll0 is chosen

    switch (type)
    {

        case PERIPHERAL_CLOCK_STM_0:
        case PERIPHERAL_CLOCK_FEC_0:
        ret = pll1_clk >> (SIU.SYSDIV.B.FMPERDIV + 1u);
        break;
        case PERIPHERAL_CLOCK_FLEXCAN_A:
        case PERIPHERAL_CLOCK_FLEXCAN_B:
        case PERIPHERAL_CLOCK_FLEXCAN_C:
        case PERIPHERAL_CLOCK_FLEXCAN_D:

        case PERIPHERAL_CLOCK_DSPI_A:
        case PERIPHERAL_CLOCK_DSPI_B:
        case PERIPHERAL_CLOCK_DSPI_C:
        case PERIPHERAL_CLOCK_DSPI_D:
        case PERIPHERAL_CLOCK_DSPI_E:

        case PERIPHERAL_CLOCK_SPI_0:
        case PERIPHERAL_CLOCK_SPI_1:
        case PERIPHERAL_CLOCK_SPI_2:
        case PERIPHERAL_CLOCK_SPI_3:
        case PERIPHERAL_CLOCK_SPI_4:

        case PERIPHERAL_CLOCK_PIT_0:
        case PERIPHERAL_CLOCK_PIT_1:
        case PERIPHERAL_CLOCK_PIT_2:
        case PERIPHERAL_CLOCK_PIT_3:

        case PERIPHERAL_CLOCK_EMIOS_0:
        case PERIPHERAL_CLOCK_EMIOS_1:
        ret = pll0_clk >> (SIU.SYSDIV.B.PERDIV + 1u);
        break;
        default:
        ASSERT(0u);
        break;
    }
    return ret;
}

#else
#error NO CPU defined
#endif
