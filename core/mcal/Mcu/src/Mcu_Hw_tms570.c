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

/*
* Copyright (C) 2009-2015 Texas Instruments Incorporated - www.ti.com
*
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/

/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** @addtogroup Mcu
  *  This is the TMS 570 Mcal Mcu Group
  *  @{
  */

/* ----------------------------[Information]---------------------------------*/
/*
 * Manual updates from TI: (that are not SPNU515B, April 2015)
 * - VCLKACON1
 *   26:24 	VCLKA4R(2:0)
 *   20    	VCLKA4_DIV_CDDIS
 *   19:16 	VCLKA4S(3:0)
 *   10:8  	VCLKA3R(2:0)
 *   4		VCLKA3_DIV_CDDIS
 *   3:0  	VCLKA3S(3:0)
 *
 * - CLK2CNTRL
 *   11:8 	VCLK4R(3:0)
 *   3:0	VCLK3R(3:0)
 *
 * - CDDIS   (just added ones are here)
 *   10     CLRVCLKA3OFF
 *   7      RTICLK2OFF
 */
/* ----------------------------[includes]------------------------------------*/
#include "Mcu.h"
#include "Mcu_Arc.h"
#include "Mcu_MemMap.h"
#include "Mcu_Hw_tms570.h"
#include "Mcu_Internal.h"
#include "SchM_Mcu.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM)
#include "Dem.h"
#endif
#if defined(USE_KERNEL)
#include "irq.h"
#endif

/* ----------------------------[private define]------------------------------*/


/* PLLCTL1 register */
#define	MCU_RESET_ON_SLIP				0uL  	/**< @brief Reset on slip is off */
#define	MCU_RESET_ON_SLIP_OFFSET		31u  	/**< @brief Offset in PLLCTL1 */

#define	MCU_BYPASS_ON_SLIP				2uL		/**< @brief Bypass on slip is off */
#define	MCU_BYPASS_ON_SLIP_OFFSET		29u  	/**< @brief Offset in PLLCTL1 (2 bits) */

#define	MCU_RESET_ON_OSC_FAIL			0uL  	/**< @brief Reset on oscillator fail is off */
#define	MCU_RESET_ON_OSC_FAIL_OFFSET	23u  	/**< @brief Offset in PLLCTL1 */

#define	MCU_PLLDIV_OFFSET				24u  	/**< @brief Offset in PLLCTL1 (5 bits) */
#define MCU_PLLDIV_MASK     			(0x1FuL << MCU_PLLDIV_OFFSET) /**< @brief PLL Div Mask*/
#define	MCU_REFCLKDIV_OFFSET			16u  	/**< @brief Offset in PLLCTL1 (6 bits) */
#define MCU_REFCLKDIV_MASK  			(0x3FuL << MCU_REFCLKDIV_OFFSET) /**< @brief PLL Refernce Clock Div Mask*/
#define	MCU_PLLMUL_OFFSET				0u 		/**< @brief Offset in PLLCTL1 (16 bits) */
#define MCU_PLLMUL_MASK     			(0xFFFFuL << MCU_PLLMUL_OFFSET) /**< @brief PLL Mul Mask*/

/* PLLCTL2 register */
#define MCU_FM_ENABLE					0  		/**< @brief Frequency modulation is off */
#define MCU_FM_ENABLE_OFFSET			31 		/**< @brief Offset in PLLCTL2 */

#define MCU_SPREADING_RATE				0		/**< @brief Spreading rate */
#define MCU_SPREADING_RATE_OFFSET		22 		/**< @brief Offset in PLLCTL2 (9 bits)*/

#define MCU_BWADJ						0 		/**< @brief Bandwidth adjustment */
#define MCU_BWADJ_OFFSET				12 		/**< @brief Offset in PLLCTL2 (9 bits) */

#define MCU_ODPLL_OFFSET				9uL		/**< @brief Offset in PLLCTL2 (3 bits) */
#define MCU_ODPLL_MASK     				(0x7uL << MCU_ODPLL_OFFSET) /**< @brief Mcu ODPLL */

#define MCU_SPREADING_AMOUNT			0 		/**< @brief Spreading amount */
#define MCU_SPREADING_AMOUT_OFFSET		0 		/**< @brief Offset in PLLCTL2 (9 bits) */


/* CSDIS (Clock source disable) register offsets */
#define CLK_SRC_OSC_MASK			(1uL<<0u) /**< @brief Clock Source Oscillator Mask */
#define CLK_SRC_PLL1_MASK			(1uL<<1u) /**< @brief Clock Source PLL 1 Mask */
#define CLK_SRC_LPO_MASK			(1uL<<4u) /**< @brief Clock Source LPO Mask */
#define CLK_SRC_HPO_MASK			(1uL<<5u) /**< @brief Clock Source HPO Mask */
#define CLK_SRC_PLL2_MASK			(1uL<<6u) /**< @brief Clock Source PLL 2 Mask */

/* GLBSTAT */
#define GLBSTAT_OSCFAIL_MASK	    (1uL<<0u) /**< @brief Global Status Oscillator Fail Mask */
#define GLBSTAT_RFSLIP_MASK		    (1uL<<8u) /**< @brief Global Status RFSLIP Mask */
#define GLBSTAT_FBSLIP_MASK		    (1uL<<9u) /**< @brief Global Status FBSLIP Mask */

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(_x)  (sizeof(_x)/sizeof((_x)[0])) /**< @brief Array Size */
#endif

#ifdef CFG_ARM_CR4
#define CORE_CPUID_CORTEX_R4   	0x0UL		/* This is not checked for the moment */
#elif defined(CFG_ARM_CR5)
#define CORE_CPUID_CORTEX_R5   	0x0UL		/* This is not checked for the moment */
#endif


#if defined(CFG_TMS570LS12X)
#define MSINENA_DCAN			((1uL << 5) | (1uL << 6) | (1uL << 10)) /**< @brief MSI Enable for Can */
#elif defined(CFG_TMS570LC43X)
#define MSINENA_DCAN        	((1uL << 5) | (1uL << 6) | (1uL << 10) | (1uL << 20)) /**< @brief MSI Enable Can for TMS570LC43X */
/* The SPI RAM is initialized by the SPI driver instead.
 * MSINENA_SPI				((1uL << 7) | (1uL << 18) | (1uL << 11) | (1uL << 19) | (1uL << 12))
 */
#else
#error MCU not defined.
#endif
#define MSINENA_HET_TU			((1uL << 4) | (1uL << 16))  /**< @brief MSI Enable for HET module */
#define MSINENA_N2HET			((1uL << 3) | (1uL << 15))  /**< @brief MSI Enable for N2HET module */
#define MSINENA_ADC				((1uL << 8) | (1uL << 14))  /**< @brief MSI Enable for Adc module */
#define MSINENA_FLEXRAY_TU		(1uL << 13)                 /**< @brief MSI Enable for Flexray module */
#if defined(CFG_TMS570LS12X)
#define MSINENA_MASK			(MSINENA_DCAN | MSINENA_HET_TU | MSINENA_N2HET | MSINENA_ADC)   /**< @brief MSI Enable Mask for Can,HET,N2HET and Adc modules */
#elif defined(CFG_TMS570LC43X)
#define MSINENA_MASK			(MSINENA_DCAN | MSINENA_HET_TU | MSINENA_N2HET | MSINENA_ADC)   /**< @brief MSI Enable Mask for Can,HET,N2HET and Adc modules for TMS570LC43X */
#endif
#define MINIDONE_MASK			0x100uL   /**< @brief Mini Done Mask */
#define MINIDONE_FINISHED		0x0uL     /**< @brief Mini Finished Status */
#define MEM_INIT_ENABLE_KEY		0xAuL     /**< @brief Mem Init Enable Key */
#define MEM_INIT_DISABLE_KEY	0x5uL     /**< @brief Mem Init Disable Key */

#define FRDCNTL_RWAIT_OFFSET	8uL       /**< @brief Flash Control Wait Offset */
#define FRDCNTL_PFUENB_OFFSET	1uL       /**< @brief Flash Control Enable Offset */

/* FRDCNTL_PFUENA_OFFSET = 0 */
#define FSM_WRITE_ENABLE		0x5uL /**< @brief FSM Write Enable  */
#define FSM_WRITE_DISABLE		0x0uL /**< @brief FSM Write Disable */
#define EEPROM_CONFIG_REG_RWAIT_OFFSET	16u /**< @brief EEPROM Configuration Offset */

#define MCU_CORE_ID 0uL /**< @brief Mcu Core Id */

/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/

/**
*   @brief  Internal Clock Types
*/
/*lint -e749 MISRA:PERFORMANCE:Something with the internal clock type: */
typedef enum {
    GCLK,
    GCLK2,
    HCLK,
    VCLK,
    VCLK2,
    VCLK3,
    VCLK4,
    VCLKA1,
    VCLKA2,
    VCLKA4,
    VCLKA4_DIVR,
    RTICLK,
} InternalClockType;

/* ----------------------------[private function prototypes]-----------------*/

void Mcu_ConfigureFlash(const Mcu_ClockSettingConfigType *clockSettingsPtr);
static uint32 getClockSource( systemClockSource_t clockSource);
static uint32 getInternalClock(InternalClockType type);
static uint32 Mcu_CheckCpu( void );

/**
*   @brief  Error Data for Cortex 4 - 66
*/
void _errata_CORTEXR4_66_(void);

/**
*   @brief  Error Data for Cortex 4 - 57
*/
void _errata_CORTEXR4_57_(void);

/* ----------------------------[private variables]---------------------------*/

#if defined(CFG_TMS570LS12X)
/**
 *  Haven't found any ID accessable from memory.
 * There is the DBGMCU_IDCODE (0xe0042000) found in RM0041 but it
 * you can't read from that address..
 */
const cpu_info_t cpu_info_list[] = {
    {
    .name = "TMS570LS12",
    .pvr = 0,
	.info = ""
    },
    {
    .name = NULL_PTR,
    }
};

/**
 *  The supported cores
 */
const core_info_t core_info_list[] = {
    {
    .name = "CORE_ARM_CORTEX_R4",
    .pvr = CORE_CPUID_CORTEX_R4,
    .info = "Max Freq: 180Mhz, Cache: NO",
    },
    {
    .name = NULL_PTR,
    }
};

#elif defined(CFG_TMS570LC43X)
const cpu_info_t cpu_info_list[] = {
    {
    .name = "TMS570LC43",
    .pvr = 0,
    },
    {
    .name = NULL_PTR,
    }

};

/**
 *  The supported cores
 */
const core_info_t core_info_list[] = {
    {
    .name = "CORE_ARM_CORTEX_R5",
    .pvr = CORE_CPUID_CORTEX_R5,
    .info = "Max Freq: 300Mhz, Cache: YES",
    },
    {
    .name = NULL_PTR,
    }
};
#else
#error Mcu driver not implemented for this tms570 version.
#endif

/* ----------------------------[private functions]---------------------------*/

/**
 * @brief Identify the core, just to check that we have support for it.
 * @return Core ID.
 */
static uint32 Mcu_CheckCpu( void ) {
    return MCU_CORE_ID;
}

/**
 * @brief Initialise peripheral memory. Will set all to 0 and calculate ECC things.
 *
 * @param[in] mask Bit mask for the peripheral to be initialised.
 */
static void initPeripheralMemory( uint32 mask ) {

	/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.6, required]*/
    systemREG1->MINITGCR = MEM_INIT_ENABLE_KEY;
    systemREG1->MSINENA =  mask;

    do {
        /* Wait until all is done */
    } while( (systemREG1->MSTCGSTAT & MINIDONE_MASK) == MINIDONE_FINISHED);

    systemREG1->MINITGCR = MEM_INIT_DISABLE_KEY;
}


#if  defined(CFG_TMS570LS12X)
/**
 * @biref Initialize Peripherals clocks
 */
static void periphInit( void  )
{
    /* From Datasheet:
     * The clocks to a module must be turned off before powering down the
     * core domain that contains the module. */


    /* Write PENA bit to turn off the clocks to the peripherals */
	/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.6, required]*/
	systemREG1->CLKCNTL &= 0xFFFFFEFFU;

    /* TI manual is not really clear what the PENA bit does, so turn off all clocks */
    pmmREG->PDCLKDISSET = 0x1f;

    /* From RM:
     * - 7 power domains in total: PD1, PD2, PD3, PD4, PD5, RAM_PD1, and RAM_PD2.
     * - There are 4 power registers, PSPWRDWNxxx, where there is 4 bits to describe
     *   each power domain. The PS[x]s are listed in Table 2-3. Sooo
     *   PSPWRDWNCLR0 0:3 is PS[0]  = MibSPI5
     *   PSPWRDWNCLR0 4:7 is PS[1]  = SPI4
     *   ..
     *   PSPWRDWNCLR1 0:3 is PS[8]  = DCAN1, DCAN2
     *   etc.
     * */

    /* Powerup all peripherals...how this is mapped is not known it seems */

    pcrREG->PSPWRDWNCLR0 = 0xFFFFFFFFU;
    pcrREG->PSPWRDWNCLR1 = 0xFFFFFFFFU;
    pcrREG->PSPWRDWNCLR2 = 0xFFFFFFFFU;
    pcrREG->PSPWRDWNCLR3 = 0xFFFFFFFFU;

    /* Enable clocks again */
    pmmREG->PDCLKDISCLR = 0x1f;

    /* Set PENA bit again to enable clocks  */
    systemREG1->CLKCNTL |= 0x00000100U;
}
#endif /* CFG_TMS570LS12X */

//-------------------------------------------------------------------

/**
 * @brief Get reset cause from MCU, save the status and clear register.
 */
static void GetAndClearResetCause(void) {
    Mcu_ResetType resetReason = MCU_RESET_UNDEFINED;

    /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
    uint32 status = systemREG1->SYSESR;

    /* Get RAW reset value and resetReson value and save it */
    Mcu_Global.rawResetvalue = status;

    /* @CODECOV:OTHER_TEST_EXIST: Other reset reasons should be tested on integration level */
    if ((status & 0x00008000UL) == 0x00008000UL) {
        resetReason = MCU_POWER_ON_RESET;
    } else if ((status & 0x00004000UL) == 0x00004000UL) {
        resetReason = MCU_OSC_FAILURE_RESET;
    } else if ((status & 0x00002000UL) == 0x00002000UL) {
        resetReason = MCU_WATCHDOG_RESET;
    } else if ((status & 0x00000020UL) == 0x00000020UL) {
        resetReason = MCU_CPU_RESET;
    } else if ((status & 0x00000010UL) == 0x00000010UL) {
        resetReason = MCU_SW_RESET;
    } else if ((status & 0x00000008UL) == 0x00000008UL) {
        resetReason = MCU_EXT_RESET;
    } else {
        resetReason = MCU_RESET_UNDEFINED;
    }

    /* Clear */
    systemREG1->SYSESR = status;

    /** @req SWS_Mcu_00005 - The function Mcu_GetResetReason shall read the reset reason from the hardware and return this reason if supported by the hardware. If the hardware does not support the hardware detection of the reset reason, the return value from the function Mcu_GetResetReason shall always be MCU_POWER_ON_RESET. */
    Mcu_Global.resetReason = resetReason;
}

#if defined(CFG_TMS570LS12X)
static void mapClocks( const Mcu_ClockSettingConfigType *clockSettingsPtr ) {
    uint32 SYS_CSVSTAT, SYS_CSDIS;

    /* CSDIS - Clock Source Disable Register
     * CDDIS - Clock Domain Disable Register
     * */

    /* Bit 11: VCLKA4
     * Bit 10: VCLKA3
     * Bit 9 : VCLK4 (etpwm,etc)
     * Bit 8 : VCLK3 (ethernet, etc)  Must be on for PWM!!!!
     * Bit 7 : RTICLK2
     * Bit 6 : RTICLK1
     * Bit 5 : VCLKA2 (Flexray)
     * Bit 4 : VCLKA1 (DCAN)
     * Bit 3 : VCLK2 (NHET)
     * Bit 2 : VCLK_periph
     * Bit 1 : HCLK and VCLK_sys
     * Bit 0 : CPU
     */
    /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
    systemREG1->CDDIS = (1uL<<5uL);	/*  VCLKA2 (Flexray)  */

     /* Work Around for Errata SYS#46:
     *
     * Errata Description:
     *            Clock Source Switching Not Qualified with Clock Source Enable And Clock Source Valid
     * Workaround:
     *            Always check the CSDIS register to make sure the clock source is turned on and check
     * the CSVSTAT register to make sure the clock source is valid. Then write to GHVSRC to switch the clock.
     */

    /*  Wait for until ALL clocks are locked */
    /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
    SYS_CSVSTAT = systemREG1->CSVSTAT;
    SYS_CSDIS = systemREG1->CSDIS;
    while ((SYS_CSVSTAT & ((SYS_CSDIS ^ 0xFFU) & 0xFFU)) != ((SYS_CSDIS ^ 0xFFU) & 0xFFU)) {
        SYS_CSVSTAT = systemREG1->CSVSTAT;
        SYS_CSDIS = systemREG1->CSDIS;
    }


    /* Run PLL at full speed */
    systemREG1->PLLCTL1 = (systemREG1->PLLCTL1 & 0xE0FFFFFFu) | ((((uint32)clockSettingsPtr->R - 1)) << 24u);

    /* Enable/Disable Frequency modulation */
    systemREG1->PLLCTL2 |= 0x00000000U;

    /* - Setup GCLK, HCLK and VCLK clock source for normal operation, power down mode and after wakeup */
    systemREG1->GHVSRC =  ((((uint32)SYS_OSC) << 24u) | ((uint32) SYS_PLL1) );

    /*  VCLK1, VCLK2 setup at half HCLK frequency */
    /* Must write VCLK2R first */
    systemREG1->CLKCNTL = (systemREG1->CLKCNTL & 0xF0FFFFFFU) | (uint32) ((uint32) 1U << 24U);  /* divide by 2 */
    /* Then VCLKR */
    systemREG1->CLKCNTL = (systemREG1->CLKCNTL & 0xFFF0FFFFU)| (uint32) ((uint32) 1U << 16U);	/* divide by 2 */

    /* VCLK3 and VCLK4 is HCLK / 2 */
    systemREG2->CLK2CNTRL = ((1uL<<8uL) | (1uL<<0uL)) ;

    /* - Setup RTICLK1 and RTICLK2 clocks */
    systemREG1->RCLKSRC  = (uint32) ( (0UL << 8UL) 	// RTICLK1 divider is 1
                                    | ((uint32) SYS_VCLK) ) ; // Select VCLK as source for RTICLK1.

    /* - Setup asynchronous peripheral clock sources for AVCLK1 and AVCLK2 */
    /* OSCIN for VCLKA1 and VCLK for VCLKA2 */
    systemREG1->VCLKASRC =  ((((uint32)SYS_VCLK) << 8U));
}

/**
 * @brief Initialize Flash, PLL and clocks.
 */
static void setupPLL(const Mcu_ClockSettingConfigType *clockSettingsPtr) {

    /* Check if already running the PLL, if so select OSC source for GCLK */
	/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
	/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: It depends on microcontroller's status register */
    if ( (systemREG1->GHVSRC & 0xFuL) == 0xFuL) {
        /* Start over again, assign to oscillator */
    	/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
        systemREG1->GHVSRC = 0;
    }

    /* Disable the PLL1 and PLL2 to set them up */
    /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
    systemREG1->CSDISSET = CLK_SRC_PLL1_MASK | CLK_SRC_PLL2_MASK;

    /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: It depends on microcontroller's status register */
    while ((systemREG1->CSDIS & (CLK_SRC_PLL1_MASK | CLK_SRC_PLL2_MASK)) != (CLK_SRC_PLL1_MASK | CLK_SRC_PLL2_MASK)) {
        /* Wait for lock */
    }

    /* Clear Global Status Register */
    systemREG1->GBLSTAT = (GLBSTAT_OSCFAIL_MASK | GLBSTAT_RFSLIP_MASK | GLBSTAT_FBSLIP_MASK);

    /*
     * Make sure we full fill table 10-1 from RM
     */

    /* Setup PLL1, use max divider for now */
    systemREG1->PLLCTL1 = 	  (MCU_RESET_ON_SLIP 	 << MCU_RESET_ON_SLIP_OFFSET)
                            | (MCU_BYPASS_ON_SLIP 	 << MCU_BYPASS_ON_SLIP_OFFSET)
                            /* | (MCU_RESET_ON_OSC_FAIL << MCU_RESET_ON_OSC_FAIL_OFFSET) */
                            | ((((uint32)clockSettingsPtr->NF - 1) * 256UL) << 0u) 		/* PLL_MULT */
                            | (((uint32)clockSettingsPtr->NR - 1) << 16u) 		/* REF_CLK_DIV */
                            | ((0x1fuL) << 24u); 				/* PLLDIV */

    /* ODPLL */
    systemREG1->PLLCTL2 = 	(systemREG1->PLLCTL2 & 0xfffff1ffU)
                            | ((((uint32)clockSettingsPtr->ODPLL - 1) << MCU_ODPLL_OFFSET));

    /* Enable the main PLL (PLL1) among others */
    systemREG1->CSDIS =    (1u<<7u)	/*  EXTCLKIN2 	    */
                         | (1u<<6u)	/*  PLL2 (FPLL) 	*/
                         | (1u<<3u)	/*  EXTCLKIN  			*/
                         | (1u<<2u);/*  Not Implemented   	*/

}

#endif /* CFG_TMS570LS12X */

#ifdef CFG_TMS570LC43X
static void setupPLL(const Mcu_ClockSettingConfigType *clockSettingsPtr)
{
    /* Check if already running the PLL, if so select OSC source for GCLK */
    if ( systemREG1->GHVSRC & 0xfuL) {
        /* Start over again, assign to oscillator */
        systemREG1->GHVSRC = 0;
    }

    /* Disable PLL1 and PLL2 */
    systemREG1->CSDISSET = 0x00000002U | 0x00000040U;
    /*SAFETYMCUSW 28 D MR:NA <APPROVED> "Hardware status bit read check" */
    while((systemREG1->CSDIS & 0x42U) != 0x42U)
    {
    /* Wait */
    }

    /* Clear Global Status Register */
    systemREG1->GBLSTAT = 0x301U;

    /* - Configure PLL control registers */
    /*   - Setup pll control register 1:
    *     - Setup reset on oscillator slip
    *     - Setup bypass on pll slip
    *     - setup Pll output clock divider to max before Lock
    *     - Setup reset on oscillator fail
    *     - Setup reference clock divider
    *     - Setup Pll multiplier
    */
    systemREG1->PLLCTL1 = 	  (MCU_RESET_ON_SLIP 	 << MCU_RESET_ON_SLIP_OFFSET)
                            | (MCU_BYPASS_ON_SLIP 	 << MCU_BYPASS_ON_SLIP_OFFSET)
                            | (MCU_RESET_ON_OSC_FAIL << MCU_RESET_ON_OSC_FAIL_OFFSET)
                            | (((clockSettingsPtr->NF - 1) * 256UL) << 0u) 		/* PLL_MULT */
                            | ((clockSettingsPtr->NR - 1) << 16u) 		/* REF_CLK_DIV */
                            | ((0x1f) << 24u); 				/* PLLDIV */

    /*    - Setup pll control register 2
    *     - Setup spreading rate
    *     - Setup bandwidth adjustment
    *     - Setup internal Pll output divider
    *     - Setup spreading amount
    */
    systemREG1->PLLCTL2 =  (uint32)((uint32)255U << 22U)
                        |  (uint32)((uint32)7U << 12U)
                        |  (uint32)((uint32)(1U - 1U) << 9U)
                        |  (uint32)61U;

    /*    - Setup pll3 control register :
    *     - setup Pll output clock divider to max before Lock
    *     - Setup reference clock divider
    *     - Setup internal Pll output divider
    *     - Setup Pll multiplier
    */
    systemREG2->PLLCTL3 = (uint32)((uint32)(1U - 1U) << 29U)
                        | (uint32)((uint32)0x1FU << 24U)
                        | (uint32)((uint32)(8U - 1U)<< 16U)
                        | (uint32)((uint32)(150U - 1U) << 8U);

    /* - Enable PLL(s) to start up or Lock */
    systemREG1->CSDIS = 0x00000000U
                      | 0x00000000U
                      | 0x00000008U
                      | 0x00000080U
                      | 0x00000000U
                      | 0x00000000U
                      | 0x00000000U
                      | 0x00000004U;
}

void setupFlash(void)
{
    /* - Setup flash read mode, address wait states and data wait states */
    flashWREG->FRDCNTL =  0x00000000U
                       | (uint32)((uint32)3U << 8U)
                       |  3U;

    /* - Setup flash access wait states for bank 7 */
    FSM_WR_ENA_HL    = 0x5U;
    EEPROM_CONFIG_HL = 0x00000000U | (uint32)((uint32)9U << 16U) ;


    /* - Disable write access to flash state machine registers */
    FSM_WR_ENA_HL    = 0x2U;

    /* - Setup flash bank power modes */
    flashWREG->FBPWRMODE = 0x00000000U
                          | (uint32)((uint32)SYS_ACTIVE << 14U) /* BANK 7 */
                          | (uint32)((uint32)SYS_ACTIVE << 2U)  /* BANK 1 */
                          | (uint32)((uint32)SYS_ACTIVE << 0U); /* BANK 0 */
}

void periphInit(void)
{
    /* - Disable Peripherals before peripheral powerup*/
    systemREG1->CLKCNTL &= 0xFFFFFEFFU;

    /* - Release peripherals from reset and enable clocks to all peripherals */
    /* - Power-up all peripherals */
    pcrREG1->PSPWRDWNCLR0 = 0xFFFFFFFFU;
    pcrREG1->PSPWRDWNCLR1 = 0xFFFFFFFFU;
    pcrREG1->PSPWRDWNCLR2 = 0xFFFFFFFFU;
    pcrREG1->PSPWRDWNCLR3 = 0xFFFFFFFFU;

    pcrREG2->PSPWRDWNCLR0 = 0xFFFFFFFFU;
    pcrREG2->PSPWRDWNCLR1 = 0xFFFFFFFFU;
    pcrREG2->PSPWRDWNCLR2 = 0xFFFFFFFFU;
    pcrREG2->PSPWRDWNCLR3 = 0xFFFFFFFFU;

    pcrREG3->PSPWRDWNCLR0 = 0xFFFFFFFFU;
    pcrREG3->PSPWRDWNCLR1 = 0xFFFFFFFFU;
    pcrREG3->PSPWRDWNCLR2 = 0xFFFFFFFFU;
    pcrREG3->PSPWRDWNCLR3 = 0xFFFFFFFFU;

    /* - Enable Peripherals */
    systemREG1->CLKCNTL |= 0x00000100U;
}

void mapClocks(const Mcu_ClockSettingConfigType *clockSettingsPtr)
{
    uint32 SYS_CSVSTAT, SYS_CSDIS;
    /* - Setup system clock divider for HCLK */
    systemREG2->HCLKCNTL = 1U;

    /* - Disable / Enable clock domain */
    systemREG1->CDDIS = (uint32)((uint32)0U << 4U ) /* AVCLK 1 OFF */
                      | (uint32)((uint32)1U << 5U ) /* AVCLK 2 OFF */
                      | (uint32)((uint32)0U << 8U ) /* VCLK3 OFF */
                      | (uint32)((uint32)0U << 9U ) /* VCLK4 OFF */
                      | (uint32)((uint32)0U << 10U) /* AVCLK 3 OFF */
                      | (uint32)((uint32)0U << 11U); /* AVCLK 4 OFF */

    /* Always check the CSDIS register to make sure the clock source is turned on and check
     * the CSVSTAT register to make sure the clock source is valid. Then write to GHVSRC to switch the clock.
     */
    /* - Wait for until clocks are locked */
    SYS_CSVSTAT = systemREG1->CSVSTAT;
    SYS_CSDIS = systemREG1->CSDIS;
    while ((SYS_CSVSTAT & ((SYS_CSDIS ^ 0xFFU) & 0xFFU)) != ((SYS_CSDIS ^ 0xFFU) & 0xFFU))
    {
        SYS_CSVSTAT = systemREG1->CSVSTAT;
        SYS_CSDIS = systemREG1->CSDIS;
    } /* Wait */


    /* - Setup GCLK, HCLK and VCLK clock source for normal operation, power down mode and after wakeup */
    systemREG1->GHVSRC = (uint32)((uint32)SYS_PLL1 << 24U)
                       | (uint32)((uint32)SYS_PLL1 << 16U)
                       | (uint32)((uint32)SYS_PLL1 << 0U);

    /* - Setup RTICLK1 and RTICLK2 clocks */
    systemREG1->RCLKSRC = (uint32)((uint32)1U << 24U)        /* RTI2 divider (Not applicable for lock-step device)  */
                        | (uint32)((uint32)SYS_VCLK << 16U) /* RTI2 clock source (Not applicable for lock-step device) */
                        | (uint32)((uint32)1U << 8U)         /* RTI1 divider */
                        | (uint32)((uint32)SYS_VCLK << 0U); /* RTI1 clock source */

    /* - Setup asynchronous peripheral clock sources for AVCLK1 and AVCLK2 */
    systemREG1->VCLKASRC = (uint32)((uint32)SYS_VCLK << 8U)
                         | (uint32)((uint32)SYS_OSC  << 0U);

    /* - Setup synchronous peripheral clock dividers for VCLK1, VCLK2, VCLK3 */
    systemREG1->CLKCNTL  = (systemREG1->CLKCNTL & 0xF0FFFFFFU)
                         | (uint32)((uint32)1U << 24U);
    systemREG1->CLKCNTL  = (systemREG1->CLKCNTL & 0xFFF0FFFFU)
                         | (uint32)((uint32)1U << 16U);
    systemREG2->CLK2CNTRL = (systemREG2->CLK2CNTRL & 0xFFFFFFF0U)
                         | (uint32)((uint32)1U << 0U);

    systemREG2->VCLKACON1 =  (uint32)((uint32)(1U - 1U) << 24U)
                           | (uint32)((uint32)0U << 20U)
                           | (uint32)((uint32)SYS_VCLK << 16U)
                           | (uint32)((uint32)(1U - 1U) << 8U)
                           | (uint32)((uint32)0U << 4U)
                           | (uint32)((uint32)SYS_VCLK << 0U);


    /* Now the PLLs are locked and the PLL outputs can be sped up */
    /* The R-divider was programmed to be 0xF. Now this divider is changed to programmed value */
    systemREG1->PLLCTL1 = (systemREG1->PLLCTL1 & 0xE0FFFFFFU) | (uint32)((uint32)(clockSettingsPtr->R - 1U) << 24U);
    /*SAFETYMCUSW 134 S MR:12.2 <APPROVED> " Clear and write to the volatile register " */
    systemREG2->PLLCTL3 = (systemREG2->PLLCTL3 & 0xE0FFFFFFU) | (uint32)((uint32)(1U - 1U) << 24U);

    /* Enable/Disable Frequency modulation */
    systemREG1->PLLCTL2 |= 0x00000000U;

}
#endif /* CFG_TMS570LC43X */

/* ----------------------------[public functions]----------------------------*/

/**
 * @brief Mcu HW specific init function
 *
 * @note Non reentrant
 *
 * @param[in] configPtr Pointer to configuration generated by Arctic Studio
 */
void Mcu_Hw_Init(const Mcu_ConfigType *configPtr)
{
	/*lint --e{920} MISRA :STANDARDIZED INTERFACE::[MISRA 2012 Rule 1.3, required] */
	(void)configPtr;
    GetAndClearResetCause();

#if !defined(USE_SIMULATOR)
    (void)Mcu_CheckCpu();
#endif
}

/**
 * @brief Initialise PLL and other MCU specific clock options.
 *
 * @note Non reentrant.
 *
 * @param[in] clockSettingsPtr Clock settings.
 *
 * @retval E_OK     If success.
 * @retval E_NOT_OK In case of error.
 */
Std_ReturnType Mcu_Hw_InitClock(const Mcu_ClockSettingConfigType *clockSettingsPtr)
{

#if defined(CFG_TMS570LS12X)
	/* Configure PLL control registers and enable PLLs.*/
	setupPLL(clockSettingsPtr);

    /* Power Up Peripherals (clocks to module must be turned off) */
    periphInit();

    Mcu_ConfigureFlash(clockSettingsPtr);

    /* */
    mapClocks(clockSettingsPtr);

    /* IMPROVEMENT: For safety run PBIST */
    initPeripheralMemory(MSINENA_MASK);

#elif defined(CFG_TMS570LC43X)

    /* Configure PLL control registers and enable PLLs.
     * The PLL takes (127 + 1024 * NR) oscillator cycles to acquire lock.
     * This initialization sequence performs all the tasks that are not
     * required to be done at full application speed while the PLL locks.
     */
    setupPLL(clockSettingsPtr);

    /* Enable clocks to peripherals and release peripheral reset */
    periphInit();

    /* - Set up flash address and data wait states based on the target CPU clock frequency */
    Mcu_ConfigureFlash(clockSettingsPtr);

    /* - Wait for PLLs to start up and map clock domains to desired clock sources */
    mapClocks(clockSettingsPtr);

    initPeripheralMemory(MSINENA_MASK);

#else
#error Mcu driver not implemented for this tms570 version.
#endif

    return E_OK;
}


/**
 * @brief This service activates the PLL clock to the MCU clock distribution.
 *
 * @note This function has no effect on TMS570. If called it will always return E_OK.
 *
 * @note Non reentrant
 * @retval E_OK     Command has been accepted.
 */
Std_ReturnType Mcu_Hw_DistributePllClock(void)
{
    return E_OK;
}


/**
 * @brief This service gets the lock status of the PLL.
 *
 * @note Reentrant
 *
 * @retval MCU_PLL_LOCKED           PLL is locked.
 * @retval MCU_PLL_UNLOCKED         PLL is not locked.
 * @retval MCU_PLL_STATUS_UNDEFINED PLL is in an undefined state.
 */
Mcu_PllStatusType Mcu_Hw_GetPllStatus(void) {

	Mcu_PllStatusType status = MCU_PLL_LOCKED;
	uint32 mask;
	uint32 disClks;

    /** @req SWS_Mcu_00008, The function Mcu_GetPllStatus shall return the lock status of the PLL*/
	/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
	mask = ((systemREG1->CSDIS ^ 0xFFu) & 0xFFu);
	/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
	disClks = ((systemREG1->CSDIS ^ 0xFFu) & 0xFFu);

	/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
	/* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Simulate a PLL unlock is not possible without HW support */
    if ((systemREG1->CSVSTAT & mask) != disClks) {
        status = MCU_PLL_UNLOCKED;
    }

    return status;
}

#if ( MCU_PERFORM_RESET_API == STD_ON )
/**
 * @brief Allows the caller to perform a SW reset.
 *
 * @note Non reentrant
 */
void Mcu_Hw_PerformReset(void)
{
	/** @req SWS_Mcu_00143 - The function Mcu_PerformReset shall perform a microcontroller reset by using the hardware feature of the microcontroller. */
    WritePeripheral32(0,&systemREG1->SYSECR,0x00008000u);   /*lint !e923 MISRA:PERFORMANCE:cast from one type to other:[MISRA 2012 Rule 11.6, required] */
}
#endif

/**
 * @brief Changes Mcu to a desired pre-configured mode
 * @note Non reentrant
 * @note Not supported for TMS570
 *
 * @param[in] McuMode It could be e.g. MCU_MODE_RUN, MCU_MODE_SLEEP or MCU_MODE_NORMAL
 */
void Mcu_Hw_SetMode(const Mcu_ModeType McuMode)
{
	/*lint --e{920} MISRA :STANDARDIZED INTERFACE::[MISRA 2012 Rule 1.3, required] */
	(void)McuMode;
	/* NOT SUPPORTED */
}

/**
 * @brief Get the system clock in Hz. It calculates the clock from the
 *         different register settings in HW.
 *
 * @note The system clock in this case is assumed to be GCLK (Cortex Speed)
 *
 * @retval System clock frequency
 */
uint32 Mcu_Arc_GetSystemClock(void)
{
  uint32_t f_sys;

  // PLLCLK = (CLKIN * PLLMUL) / (REFCLKDIV * ODPLL * PLLDIV);
  /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
  uint32 odpll = ((systemREG1->PLLCTL2 & MCU_ODPLL_MASK) >> MCU_ODPLL_OFFSET) + 1u;

  /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
  uint32 plldiv = ((systemREG1->PLLCTL1 & MCU_PLLDIV_MASK) >> MCU_PLLDIV_OFFSET) + 1u;
  uint32 refclkdiv = ((systemREG1->PLLCTL1 & MCU_REFCLKDIV_MASK) >> MCU_REFCLKDIV_OFFSET) + 1u;
  uint32 pllmult = (((systemREG1->PLLCTL1 & MCU_PLLMUL_MASK) >> MCU_PLLMUL_OFFSET) / 256u) + 1u;

  f_sys = Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting].McuClockReferencePointFrequency;
  f_sys = f_sys * pllmult / (refclkdiv * odpll * plldiv);

  return f_sys;
}

/**
 * @brief Get frequency of the clock source.
 *
 * @param[in] clockSource Source the get frequency from.
 *
 * @retval Frequency in Hertz of the clock source.
 */
static uint32 getClockSource( systemClockSource_t clockSource) {
    uint32 clock = 0uL;
    uint32 divider = 1uL;

    /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
    switch(clockSource) {
    case SYS_OSC:
        clock = Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting].McuClockReferencePointFrequency;
        break;
    /* @CODECOV:CONFIG_LIMITATION: Only possible if the Mcu config is change in Arctic Studio */
    case SYS_PLL1:
        clock = Mcu_Arc_GetSystemClock();
        break;
    case SYS_VCLK:
    	/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
        divider = ((systemREG1->CLKCNTL >> 16u) & 0xfu) + 1uL;
#if defined(CFG_TMS570LS12X)
        clock = Mcu_Arc_GetSystemClock();
#elif defined(CFG_TMS570LC43X)
        clock = Mcu_Arc_GetSystemClock() / 2;
#else
#error Mcu driver not implemented for this tms570 version.
#endif
        break;
    /* @CODECOV:DEFAULT_CASE: Not possible to reach */
    default:
    	/* unsupported sources will return 0 as clock */
        break;
    }

    return (clock / divider);
}

/**
 * @brief Get the internal clock in Hz for a specific device
 *
 * @param[in] TMS570 specific internal clock type.
 *
 * @retval Frequency in Hertz of the clock source.
 */
static uint32 getInternalClock(InternalClockType type) {

    uint32 clock = 0uL;
    uint32 divider = 1uL;
    uint32 src;
    systemClockSource_t clockSource;

    /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
    switch(type) {
#if 0 /* clock source not used yet. Reserved for future usage */
    case GCLK:
        clock = Mcu_Arc_GetSystemClock();
        break;
    case GCLK2:
        clock = Mcu_Arc_GetSystemClock();
        break;
#endif
    case HCLK:
#if defined(CFG_TMS570LS12X)
        clock = Mcu_Arc_GetSystemClock();
#elif defined(CFG_TMS570LC43X)
        clock = Mcu_Arc_GetSystemClock() / 2;
#else
#error Mcu driver not implemented for this tms570 version.
#endif
        break;
    case VCLK:
        /* default supply clock to peripherals */
#if defined(CFG_TMS570LS12X)
        clock = Mcu_Arc_GetSystemClock();
#elif defined(CFG_TMS570LC43X)
        clock = Mcu_Arc_GetSystemClock() / 2;
#else
#error Mcu driver not implemented for this tms570 version.
#endif
        /* VCLKR,  default=1 (ie divide by 2)  */
        /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
        divider = ((systemREG1->CLKCNTL >> 16u) & 0xfu) + 1uL;
        break;
#if 0 /* clock source not used yet. Reserved for future usage */
    case VCLK2:
#if defined(CFG_TMS570LS12X)
        clock = Mcu_Arc_GetSystemClock();
#elif defined(CFG_TMS570LC43X)
        clock = Mcu_Arc_GetSystemClock() / 2;
#else
#error Mcu driver not implemented for this tms570 version.
#endif
        /* VCLKR2, default=1 (ie divide by 2)  */
        divider = ((systemREG1->CLKCNTL >> 24u) & 0xfu) + 1uL;
        break;
#endif
    case VCLK3:
#if defined(CFG_TMS570LS12X)
        clock = Mcu_Arc_GetSystemClock();
#elif defined(CFG_TMS570LC43X)
        clock = Mcu_Arc_GetSystemClock() / 2;
#else
#error Mcu driver not implemented for this tms570 version.
#endif
        /* VCLK3R, default=1 (ie divide by 2)  */
        divider = ((systemREG2->CLK2CNTRL) & 0xfu) + 1uL;
        break;
    case VCLK4:
#if defined(CFG_TMS570LS12X)
        clock = Mcu_Arc_GetSystemClock();
#elif defined(CFG_TMS570LC43X)
        clock = Mcu_Arc_GetSystemClock() / 2;
#else
#error Mcu driver not implemented for this tms570 version.
#endif
        /* VCLK4R, default=1 (ie divide by 2)  */
        divider = ((systemREG2->CLK2CNTRL >> 8u) & 0xfu) + 1uL;
        break;
    case VCLKA1:
        /* CAN Controllers */
        src = (systemREG1->VCLKASRC & 0xfu);
        clockSource = (systemClockSource_t) src;
        clock = getClockSource(clockSource);
        /* No divider */
        break;
#if 0 /* clock source not used yet. Reserved for future usage */
    case VCLKA2:
        /* Flexray */
        src = ((systemREG1->VCLKASRC>>8u) & 0xfu);
        clockSource = (systemClockSource_t) src;
        clock = getClockSource(clockSource);
        /* No divider */
        break;
    case VCLKA4:
        break;
    case VCLKA4_DIVR:
        break;
#endif
    case RTICLK:
    	src = ((systemREG1->VCLKASRC>>8u) & 0xfu);
        clockSource = (systemClockSource_t) src;
        clock = getClockSource(clockSource);

        /* @CODECOV:CONFIG_LIMITATION: It depends on configuration parameters of the Mcu. */
        if( clockSource != SYS_VCLK ) {
            divider = (1uL << ((systemREG1->RCLKSRC >> 8u) & 0x3u));
        }

        break;
        /* @CODECOV:DEFAULT_CASE: Will never be reached. Left for MISRA compliance */
    default:
    	/* unsupported clock type will return 0 as clock */
        break;
    }

    return (clock/divider);
}

/**
 * @brief Get the peripheral clock in Hz for a specific peripheral.
 *
 * @param[in] type Peripheral
 *
 * @retval Frequency in Hz of the peripheral.
 */
uint32 Mcu_Arc_GetPeripheralClock(Mcu_Arc_PeriperalClock_t type) {

    uint32 clockInHz = 0uL;

    switch (type) {

    case PERIPHERAL_CLOCK_CAN:
        clockInHz = getInternalClock(VCLKA1);
        break;

    case PERIPHERAL_CLOCK_RTICLK:
    case PERIPHERAL_CLOCK_WDG:
        clockInHz = getInternalClock(RTICLK);
        break;

    case PERIPHERAL_CLOCK_FLASH:
        clockInHz = getInternalClock(HCLK);
        break;

    case PERIPHERAL_CLOCK_PWM:
#if defined(CFG_TMS570LS12X)
        clockInHz = getInternalClock(VCLK4);
#elif defined(CFG_TMS570LC43X)
        clockInHz = getInternalClock(VCLK3);
#else
#error Mcu driver not implemented for this tms570 version.
#endif
        break;
    case PERIPHERAL_CLOCK_LIN:
    case PERIPHERAL_CLOCK_SPI:
        clockInHz = getInternalClock(VCLK);
        break;
    default:
        /*IMPROVMENT: Add Det error */
        break;
    }

    return clockInHz;
}


/**
 * @brief Function to setup the internal flash for optimal performance
 *
 * @param[in] clockSettingsPtr It contains the frequency point and PLL parameters.
 */
void Mcu_ConfigureFlash(const Mcu_ClockSettingConfigType *clockSettingsPtr)
{
#if defined(CFG_TMS570LS12X)
    uint32 readWaitStates = 3uL;

    /*lint --e{920} MISRA :STANDARDIZED INTERFACE::[MISRA 2012 Rule 1.3, required] */
    (void)clockSettingsPtr;
    /* Enable pipeline reads from flash
     * ZWT:
     *   - 180Mhz, Flash
     * PGE:
     *   - 160Mhz, Flash
     * */

    /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
    flashREG->FRDCNTL = (readWaitStates<<8) +	/* Read wait states    */
                        (1uL<<4u) + 	            /* Address wait states */
                        (1uL<<0u);		            /* Enable pipeline mode */

    /* Enable write to EEPROM_CONFIG_REG */
    FSM_WR_ENA_REG = 0x5uL;

    /* From RM: The same formulas that apply to RWAIT will apply to EWAIT in the EEPROM bank.
     * Write EWAIT , leave rest as on reset*/
    EEPROM_CONFIG_REG = 0x00000002uL | (readWaitStates << 16u) ;

    FSM_WR_ENA_REG = 0x0uL;

#elif defined(CFG_TMS570LC43X)
    uint32 readWaitStates;
    uint32 readWaitStatesEEPROM;

    //uint32 clock = getInternalClock(HCLK); Not used since PLL not correctly set up at this point.
    uint32 clock = ((clockSettingsPtr->McuClockReferencePointFrequency)*(clockSettingsPtr->NF))/((clockSettingsPtr->NR)*(clockSettingsPtr->ODPLL)*(clockSettingsPtr->R));
    clock /= 2; // GCLK/2 = HCLK
    clock /= 1000000; // More managable number.

    if (clock <= 15)
    {
        readWaitStates = 0;
        readWaitStatesEEPROM = 0;
    }
    else if (clock <= 30)
    {
        readWaitStates = 0;
        readWaitStatesEEPROM = 1;
    }
    else if (clock <= 45)
    {
        readWaitStates = 0;
        readWaitStatesEEPROM = 2;
    }
    else if (clock <= 60)
    {
        readWaitStates = 1;
        readWaitStatesEEPROM = 3;
    }
    else if (clock <= 75)
    {
        readWaitStates = 1;
        readWaitStatesEEPROM = 4;
    }
    else if (clock <= 90)
    {
        readWaitStates = 1;
        readWaitStatesEEPROM = 5;
    }
    else if (clock <= 105)
    {
        readWaitStates = 2;
        readWaitStatesEEPROM = 6;
    }
    else if (clock <= 120)
    {
        readWaitStates = 2;
        readWaitStatesEEPROM = 7;
    }
    else if (clock <= 135)
    {
        readWaitStates = 2;
        readWaitStatesEEPROM = 8;
    }
    else // (clock <= 150) 150MHz
    {
        readWaitStates = 3;
        readWaitStatesEEPROM = 9;
    }

    /* Address wait state is fixed to 1 HCLK cycle so cannot be set. */
    flashWREG->FRDCNTL = (readWaitStates << FRDCNTL_RWAIT_OFFSET) +
                        (1uL << FRDCNTL_PFUENB_OFFSET) +   /* Enable prefetch mode for PortB. */
                        1uL;    /* Enable prefetch mode for PortA. */

    /* Enable write to EEPROM_CONFIG_REG */
    FSM_WR_ENA_REG = FSM_WRITE_ENABLE;
    EEPROM_CONFIG_REG = (readWaitStatesEEPROM << EEPROM_CONFIG_REG_RWAIT_OFFSET);
    FSM_WR_ENA_REG = FSM_WRITE_DISABLE;

    flashWREG->FBPWRMODE = 0x00000000U
                          | (uint32)((uint32)SYS_ACTIVE << 14U) /* BANK 7 */
                          | (uint32)((uint32)SYS_ACTIVE << 2U)  /* BANK 1 */
                          | (uint32)((uint32)SYS_ACTIVE << 0U); /* BANK 0 */
#else
#error Mcu driver not implemented for this tms570 version.
#endif
}

/**
 * @brief Function that perform all necessary initialisation needed to to run software, such as disabling watchdog,
 * init ECC RAM, setup exception vectors etc.
 *
 * @note This function will be called before BSS and DATA are initialized.
 * Ensure that you do not access any global or static variables before
 * BSS and DATA is initialised.
 */
void Mcu_Arc_InitZero(void)
{
#if defined(CFG_EXCEPTION_OVERLAY)

    /* Map a RAM region down to flash to for an application exception table.
     * The overlay address (volatile memory) have it's upper 10 bits in
     * POMGLBCTRL.OTADDR and the overlay address defined in the region must
     * be 64 byte aligned.
     */

    extern char _exc_overlay_start[];
    extern char _exc_start[];
    uint32 overlay = (uint32)_exc_overlay_start;
    uint32 addr = (uint32)_exc_start;

    /* Copy vector table to overlay first */
    memcpy((void *)overlay,(void *)addr,64);

    /* POM Setup */
    pomREG->POMFLG = 0x700UL;
    pomREG->POMGLBCTRL =    (overlay & 0xff800000UL);

    pomREG->region[0].PROMPROGSTART = 0x0UL;
    pomREG->region[0].POMOVLSTART = (overlay & 0x007fffc0UL);
    pomREG->region[0].POMREGSIZE = 1ul;     /* 1-64bytes, 2-128 bytes, ... */
    pomREG->POMGLBCTRL |= 0xAul;            /* global enable */

#endif

    /* Correct chip errata's. Call TI prepared functions */
    /*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.4, required] */
    /* @CODECOV:HARDWARE_DEPENDENCY_STATUS_BIT: Not possible to test because it depends on HW register */
    if ((systemREG1->SYSESR & 0x00008000UL) == 0x00008000UL) {
#if defined(CFG_ARM_CR4)
        /* Workaround for Errata CORTEXR4 66 */
        _errata_CORTEXR4_66_();

        /* Workaround for Errata CORTEXR4 57 */
        _errata_CORTEXR4_57_();
#endif

    }


#if defined(USE_KERNEL)
    Irq_Init();
#endif
}

/** @}*/
/** @}*/
