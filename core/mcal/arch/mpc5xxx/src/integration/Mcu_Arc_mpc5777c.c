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
#include "arc_assert.h"
#include "Std_Types.h"
#include "Mcu.h"
#include "io.h"
#include "mpc55xx.h"
#include "Mcu_Arc.h"
#if defined(USE_FEE)
#include "Fee_Memory_Cfg.h"
#endif
#if defined(USE_DMA)
#include "Dma.h"
#endif
#include "asm_ppc.h"
#include "Os.h"
#include "EcuM.h"
#include "isr.h"
#include "Mcu_Internal.h"

#include "debug.h"
#include <string.h>




/* ----------------------------[private define]------------------------------*/

/* ----------------------------[private macro]-------------------------------*/
#define CALC_SYSTEM_CLOCK(_extal,_emfd,_eprediv,_erfd)  \
            ( (((_extal)/(_eprediv))*(_emfd)) / ((_erfd)) )

/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/

/* ----------------------------[private functions]---------------------------*/

/* ----------------------------[public functions]----------------------------*/

void Mcu_Arc_InitPre(const Mcu_ConfigType *configPtr) {
    /*lint -e{920} General interface, the configPtr may be needed for other architectures */
    (void) configPtr;
}

void Mcu_Arc_InitPost( const Mcu_ConfigType *configPtr ) {
    /*lint -e{920} General interface, the configPtr may be needed for other architectures */
    (void)configPtr;
}

void Mcu_Arc_InitClockPre( const Mcu_ClockSettingConfigType *clockSettingsPtr )
{
     /*lint -e{920} General interface, the clockSettingsPtr may be needed for other architectures */
    (void)clockSettingsPtr; // get rid of compiler warning
}

#if (MCU_CLOCK_SRC_FAILURE_NOTIFICATION == STD_ON)
/**
 * Called when loss of lock from interrupt
 */
void Mcu_Arc_LossOfLock( void  ){


  /*
   * NOTE!!!
   * This interrupt may be triggered more than expected.
   * If you are going to use this interrupt, see [Freescale Device Errata MPC5510ACE, Rev. 10 APR 2009, errata ID: 6764].
   *
   */
    PLLDIG.PLL1SR.B.LOLF = 1u;
}
#endif

void Mcu_Arc_InitClockPost( const Mcu_ClockSettingConfigType *clockSettingsPtr )
{
    /*
     * Follow "21.10 PLLDIG initialization information" from TRM
     */
    uint32 pll0_PREDIV = clockSettingsPtr->Mcu_Hw_ClockSettings->pll0_PREDIV;
    uint32 pll0_MFD = clockSettingsPtr->Mcu_Hw_ClockSettings->pll0_MFD;
    uint32 pll0_RFDPHI = clockSettingsPtr->Mcu_Hw_ClockSettings->pll0_RFDPHI;

    uint32 pll1_MFD = clockSettingsPtr->Mcu_Hw_ClockSettings->pll1_MFD;
    uint32 pll1_RFDPHI = clockSettingsPtr->Mcu_Hw_ClockSettings->pll1_RFDPHI;
    uint32 pll1fm_MODEN = clockSettingsPtr->Mcu_Hw_ClockSettings->pll1fm_MODEN;

    // ensure that pll settings are within range
    CONFIG_ASSERT(pll0_PREDIV >=1 && pll0_PREDIV <= 7);
    CONFIG_ASSERT(pll0_MFD >=8 && pll0_MFD <= 127);
    CONFIG_ASSERT(pll0_RFDPHI >=1 && pll0_RFDPHI <= 63);


    // ensure that VCO freq is within range
    uint32 extal = Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting].McuClockReferencePointFrequency;
    _debug_("EXTAL         : %d\n",extal);
    _debug_("PLL\n");

    /* 25.8.2 Clock configuration : Fpll0_vco = (fpll0_ref * PLL0DV[MFD] * 2) / PLL0DV[PREDIV] */
    uint64 vcoFreq = (((extal * pll0_MFD) * 2ULL) / pll0_PREDIV);
    CONFIG_ASSERT( (vcoFreq >= 600000000) && (vcoFreq <= 1250000000) ); /* see Data Sheet for mpc5777c */
    _debug_("  VCOpll0     : %10d (600 to 1250Mhz)\n",(uint32)vcoFreq);

    uint32 pll0_phi = (vcoFreq / (2*pll0_RFDPHI));
    CONFIG_ASSERT(pll0_phi <= 200000000);
    _debug_("  Fpll0_phi   : %10d (Max 200Mhz)\n",pll0_phi);

    //Power down PLL0

    PLLDIG.PLL0CR.B.CLKCFG = 0;
    //1. Configure PLL0 and related modules
    PLLDIG.PLL0DV.B.PREDIV = pll0_PREDIV;
    PLLDIG.PLL0DV.B.MFD = pll0_MFD;
    PLLDIG.PLL0DV.B.RFDPHI = pll0_RFDPHI;
    /* set PHI1 divider to generate freq between 40 - 78,5MHz */
    PLLDIG.PLL0DV.B.RFDPHI1 = pll0_phi / extal;

    //2. Oscillator Stable
    CONFIG_ASSERT(SIU.RSR.B.XOSC != 0) ;

    //3. Turn on PLL0
    PLLDIG.PLL0CR.B.CLKCFG = 3;

    while(PLLDIG.PLL0SR.B.LOCK != 1) {
        //Waiting for PLL lock
    }

    // ensure that pll settings are within range
    CONFIG_ASSERT(pll1_MFD >=16 && pll1_MFD <= 34);
    CONFIG_ASSERT(pll1_RFDPHI >=1 && pll1_RFDPHI <= 63);

    vcoFreq = extal * (uint64)pll1_MFD;
    CONFIG_ASSERT( (vcoFreq >= 600000000UL) && (vcoFreq <= 1250000000UL) ); /* see Data Sheet for mpc5777c */
    _debug_("  VCOpll1     : %10d (600 to 1250Mhz)\n",(uint32)vcoFreq);

    uint32 pll1_phi = (vcoFreq / (2*pll1_RFDPHI));
    CONFIG_ASSERT(pll1_phi <= 264000000);
    _debug_("  Fpll1_phi   : %10d (max 264Mhz)\n",pll1_phi);

    //Power down PLL1

    PLLDIG.PLL1CR.B.CLKCFG = 0;
    //4. Configure PLL1 and related modules

    PLLDIG.PLL1DV.B.MFD = pll1_MFD;
    PLLDIG.PLL1DV.B.RFDPHI = pll1_RFDPHI;
    PLLDIG.PLL1FM.B.MODEN = pll1fm_MODEN; //FM mode enable/disable
    if(pll1fm_MODEN == TRUE){
        PLLDIG.PLL1FM.B.MODPRD = clockSettingsPtr->Mcu_Hw_ClockSettings->pll1fm_MODPRD;
        PLLDIG.PLL1FM.B.INCSTP = clockSettingsPtr->Mcu_Hw_ClockSettings->pll1fm_INCSTP;
    }
    //5. Turn on PLL1
    PLLDIG.PLL1CR.B.CLKCFG = 3;

    while(PLLDIG.PLL1SR.B.LOCK != 1) {
        //Waiting for PLL lock
    }

    SIU.SYSDIV.B.LCK = 0;//unlock SIU_SYSDIV register
    SIU.SYSDIV.B.SYSCLKSEL = 2; // pll1, system clock = pll1
    SIU.SYSDIV.B.SYSCLKDIV = 4; // divide by 1
    SIU.SYSDIV.B.PERCLKSEL = 1; //pll0, per_clk should be non modulated hence pll0 is chosen
    SIU.SYSDIV.B.PERDIV = 0;  //divide by 2
    SIU.SYSDIV.B.FMPERDIV = 0; //divide by 2
    SIU.SYSDIV.B.LCK = 1;//lock SIU_SYSDIV register

}

void Mcu_Arc_SetModePre(Mcu_ModeType mcuMode) {
    /*lint -e{920} General interface, the configPtr may be needed for other architectures */
    (void)mcuMode;
}

void Mcu_Arc_SetModePost( Mcu_ModeType mcuMode)
{
    /*lint -e{920} General interface, the configPtr may be needed for other architectures */
    (void)mcuMode;
}
