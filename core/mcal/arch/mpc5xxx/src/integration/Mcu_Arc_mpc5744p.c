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

/**
 * @file    Mcu_Arc_Mpc5744p.c
 * @brief   Mcu clock and mode setup
 *
 * @addtogroup Mcu
 * @details This is an integration file that can be changed. It contains
 *          a sane setup of:
 *          - Power to peripheral modules.
 *          - Clocks
 *          - Clock Monitoring.
 *          .
 *          <h2>Clocks</h2>
 *          The editor lets you configure:
 *          - PLL0 and PLL1
 *          - XOSC frequency
 *          .
 *          A number of other clocks are setup to their maximum clocks.
 *          The defines starting with "CLK_" is the frequency that the
 *          clocks should be setup to.
 *          .
 *          Clock monitoring is setup for the frequencies in the "CLK_".
 *          .
 *          CMUs 0 to 3 are used ( the ones with X are used ):
 *          .
 *          CMU0  : X MOTC_CLK (CLKMN1 for CMU0), XOSC, IRCOSC
 *          CMU1  : X CHKR_CLK
 *          CMU2  : X PBRIDGE0_CLK, PBRIDGE1_CLK
 *          CMU3  : X ADC_CLK
 *          CMU4  :   SENT_CLK
 * @{
 */


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
#if defined(USE_ECUM_FIXED) || defined(USE_ECUM_FLEXIBLE)
#include "EcuM.h"
#endif
#if defined(USE_KERNEL)
#include "isr.h"
#endif
#include "Mcu_Internal.h"

#include "debug.h"
#include <string.h>


/* ----------------------------[private define]------------------------------*/

#define CALC_SYSTEM_CLOCK(_extal,_emfd,_eprediv,_erfd)  \
            ( (((_extal)/(_eprediv))*(_emfd)) / ((_erfd)) )

/* MemProt macros */
#define MODULE_GCR_ADR(_base) \
    (vuint32_t*) ((vuint32_t)(_base) + 0x3FFCUL)

#define SET_USER_ACCESS_ALLOWED(_base) \
    (*MODULE_GCR_ADR(&_base) = *MODULE_GCR_ADR(&_base) | (1UL<<23UL))

/* CMU calculation macros
 * ref = (xREF / 16) * (fCLKMT0_RMN / 4)
 * --> xREF = (ref * 16 * 4 ) / fCLKMT0_RMN
 * --> xREF = ( ref * 64 ) / 16000000
 * */
#define CALC_HREF(_x)       (((_x/1000000UL) * 4UL * 108UL)/100UL)
#define CALC_LREF(_x)       (((_x/1000000UL) * 4UL * 92UL)/100UL)

#define ME_RUN_PC0      0U
#define ME_RUN_PC1      1UL

/* From Table 13-2. Maximum system level clock frequencies */
#define CLK_SYS_CLOCK           200000000UL
#define CLK_PBRIDGE_0            50000000UL
#define CLK_MOTC_CLK            160000000UL
#define CLK_ADC                  80000000UL
#define CLK_ENET_CLK             50000000UL
#define CLK_ENET_TIME_CLK        50000000UL
#define CLK_FRAY_CLK             80000000UL
#define CLK_CAN_CLK              80000000UL


/* ----------------------------[private macro]-------------------------------*/
/* ----------------------------[private typedef]-----------------------------*/
/* ----------------------------[private function prototypes]-----------------*/
/* ----------------------------[private variables]---------------------------*/

/* ----------------------------[private functions]---------------------------*/


/**
 * Calculate DIV bit value
 * @param clock
 * @param freq
 * @return
 */
static uint32 getDivider( uint32 clock, uint32 freq ) {
    uint32 divider = clock / freq;
    ASSERT (divider >= 1u );

    /* return the DIV bit value */
    return (divider - 1u) ;
}

/**
 * Calculate DIV bit value, return odd DIV
 * @param clock
 * @param freq
 * @return
 */
 static uint32 getDividerOdd( uint32 clock, uint32 freq ) {
     uint32 divider = clock / freq;
     ASSERT (divider >= 1u );

     divider = (divider - 1u);

     /* check if even, if so return odd higher value */
     if( (divider & (uint32)1u) == 0u ) {
         divider += 1u;
     }

     return divider;
 }



/**
 * @brief   Function to init CMU.
 * @details This function needs to be called after Mcu_InitClock(..) have been called.
 */
static void CMU_Init( void ) {

    /**
     * Clock         Freq
     * -----------------------
     * MOTC_CKL      160
     * CHKR_CLK      200
     * PBRIDGE0_CLK  50
     * ADC_CLK       80
     *
     *
     * The IRCOSC is used as a reference clock for all CMUs. The manuals however does not
     * say how good the clock is when trimming information is supplied (only the un-trimmed
     * values are in the data-sheet).
     *
     * For mpc57xx devices:
     * - CLKMT0_RMN is IRCOSC
     * - CLKMN0_RMT is XOSC
     *
     * HFREF are converted according to:  (HFREF / 16) * (fCLKMT0_RMN / 4).
     * LFREF are converted according to : (LFREF / 16) * (fCLKMT0_RMN / 4).
     *
     *
     *
     * Figure out the frequency of IRCOSC */


    uint32 duration = 10000UL;
    uint32 freqBits;
    uint32 f_sel ;
    uint32 extal = Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting].McuClockReferencePointFrequency;

    CMU_0.MDR.B.MD  = duration;
    CMU_0.CSR.B.SFM = 1UL;      /* Start */

    /* Wait for MD */
    while(CMU_0.CSR.B.SFM == 1UL ) {};

    freqBits = CMU_0.FDR.B.FD;

    f_sel = (uint32)((uint64)extal * duration / freqBits);
    (void)f_sel;

    /** CMU0 - Monitor XOSC
     * In RM "13.7.1 CMU configuration" describes the CMU_0 block.
     * Enable "CLKMN0_RMT Supervisor"
     * */
    CMU_0.CSR.B.RCDIV = 0UL;    /* fCLKMN0_RMT < (fCLKMT0_RMN / 2^RCDIV), i.e. */
                                /* XOSC < ( IRCOSC / 2^RCDIV) */

    /* CMU0 - Monitor MOTC_CLK  */
    CMU_0.HFREFR.B.HFREF = CALC_HREF(CLK_MOTC_CLK);
    CMU_0.LFREFR.B.LFREF = CALC_LREF(CLK_MOTC_CLK);
    CMU_0.CSR.B.CME = 1UL;

    /* CMU1 - Monitor System Clock  */
    CMU_1.HFREFR.B.HFREF = CALC_HREF(CLK_SYS_CLOCK);
    CMU_1.LFREFR.B.LFREF = CALC_LREF(CLK_SYS_CLOCK);
    CMU_1.CSR.B.CME = 1UL;

    /* CMU2 - Monitor PBrigde Clocks  */
    CMU_2.HFREFR.B.HFREF = CALC_HREF(CLK_PBRIDGE_0);
    CMU_2.LFREFR.B.LFREF = CALC_LREF(CLK_PBRIDGE_0);
    CMU_2.CSR.B.CME = 1UL;

    /* CMU3 - ADC */
    CMU_3.HFREFR.B.HFREF = CALC_HREF(CLK_ADC);
    CMU_3.LFREFR.B.LFREF = CALC_LREF(CLK_ADC);
    CMU_3.CSR.B.CME = 1UL;
}

/* ----------------------------[public functions]----------------------------*/

void Mcu_Arc_SetModePost( Mcu_ModeType mcuMode);
void Mcu_Arc_SetModePre(Mcu_ModeType mcuMode);

void Mcu_Arc_InitPre(const Mcu_ConfigType *configPtr) {
    /*lint -e{920} MISRA:STANDARDIZED_INTERFACE: General interface, the configPtr may be needed for other architectures */
    (void) configPtr;
}

void Mcu_Arc_InitPost( const Mcu_ConfigType *configPtr ) {
    /*lint -e{920} MISRA:STANDARDIZED_INTERFACE: General interface, the configPtr may be needed for other architectures */
    (void)configPtr;
}

void Mcu_Arc_InitClockPre( const Mcu_ClockSettingConfigType *clockSettingsPtr )
{
     /*lint -e{920} MISRA:STANDARDIZED_INTERFACE: General interface, the clockSettingsPtr may be needed for other architectures */
    (void)clockSettingsPtr; // get rid of compiler warning
}

/*lint -e753 -e754 LINT:OTHER:Maybe used in other file */
struct EccInitTableS {
    uint8 *start;
    uint32 length;
};
/*lint -e{923, 1776, 40, 9033, 10, 63, 950} MISRA:HARDWARE_ACCESS:HARDWARE DEFINITION[MISRA 2012 Rule 8.9, advisory] */
void Mcu_Arc_InitClockPost( const Mcu_ClockSettingConfigType *clockSettingsPtr )
{
    /*
     * Follow "13.5.1.4 PLLDIG initialization information" from TRM
     */
    uint32 pll0_PREDIV = clockSettingsPtr->Mcu_Hw_ClockSettings->pll0_PREDIV;
    uint32 pll0_MFD = clockSettingsPtr->Mcu_Hw_ClockSettings->pll0_MFD;
    uint32 pll0_RFDPHI = clockSettingsPtr->Mcu_Hw_ClockSettings->pll0_RFDPHI;

    // ensure that pll settings are within range
    CONFIG_ASSERT((pll0_PREDIV >=1U) && (pll0_PREDIV <= 7U));
    CONFIG_ASSERT((pll0_MFD >=8U) &&( pll0_MFD <= 127U));
    CONFIG_ASSERT((pll0_RFDPHI >=1U) &&( pll0_RFDPHI <= 63U));

    _debug_("Current Mode:%d\n",Mcu_Arc_GetMode());

    // setup clock source to xosc for PLL0
    MC_CGM.AC3_SC.B.SELCTL = 1U;

    // ensure that VCO freq is within range
    uint32 extal = Mcu_Global.config->McuClockSettingConfig[Mcu_Global.clockSetting].McuClockReferencePointFrequency;
    _debug_("EXTAL         : %d\n",extal);
    _debug_("PLL\n");

    /* 25.8.2 Clock configuration : Fpll0_vco = (fpll0_ref * PLL0DV[MFD] * 2U) / PLL0DV[PREDIV] */
    uint64 vcoFreq = (extal * ((uint64)pll0_MFD * 2UL)) / pll0_PREDIV;
    CONFIG_ASSERT( (vcoFreq >= 600000000UL) && (vcoFreq <= 1250000000UL) ); /* see Data Sheet for mpc5744p */
    _debug_("  VCOpll0     : %10d (600 to 1250Mhz)\n",(uint32)vcoFreq);

    uint32 pll0_phi = (uint32)vcoFreq / (2U*pll0_RFDPHI);
    CONFIG_ASSERT(pll0_phi <= 200000000UL);
    _debug_("  Fpll0_phi   : %10d (Max 160Mhz)\n",pll0_phi);

    PLLDIG.PLL0DV.B.PREDIV = pll0_PREDIV;
    PLLDIG.PLL0DV.B.MFD = pll0_MFD;
    PLLDIG.PLL0DV.B.RFDPHI = pll0_RFDPHI;
    /* set PHI1 divider to generate freq between 40 - 78,5MHz */
    PLLDIG.PLL0DV.B.RFDPHI1 = pll0_phi / extal;

    /* start xosc: configure run mode to have xosc enabled */
    MC_ME.DRUN_MC.B.XOSCON = 1U;
    /* configure the new run mode */
    MC_ME.DRUN_MC.B.PLL0ON = 1U;
    /* and select PLL0 as clock source */
    MC_ME.DRUN_MC.B.SYSCLK = 2U;     /* 2-Primary PLL(PLL0),4-Secondary PLL(PLL1)*/

    _debug_("Switching to DRUN\n");
    _debug_("  SYSCLK=2 (PLL0)\n");

    /* Switch to DRUN */
    Mcu_Arc_SwitchMode(3U);

    /*
     * PLL1 (FMPLL)
     */
    uint32 pll1_MFD = clockSettingsPtr->Mcu_Hw_ClockSettings->pll1_MFD;
    uint32 pll1_RFDPHI = clockSettingsPtr->Mcu_Hw_ClockSettings->pll1_RFDPHI;

    /* Turn it off */
    MC_ME.DRUN_MC.B.PLL1ON = 0U;
    Mcu_Arc_SwitchMode(3U);

    // ensure that pll settings are within range
    CONFIG_ASSERT((pll1_MFD >=8U) && (pll1_MFD <= 127U));
    CONFIG_ASSERT((pll1_RFDPHI >=1U) && (pll1_RFDPHI <= 63U));


    // setup clock source tp xosc for PLL1
    MC_CGM.AC4_SC.B.SELCTL = 1U;

    /* 25.8.2 Clock configuration : Fpll1_vco = (fpll1_ref * PLL1DV[MFD]) (FRCDIV disabled) */
    vcoFreq = extal * (uint64)pll1_MFD;
    CONFIG_ASSERT( (vcoFreq >= 600000000UL) && (vcoFreq <= 1250000000UL) ); /* see Data Sheet for mpc5744p */
    _debug_("  VCOpll1     : %10d (600 to 1250Mhz)\n",(uint32)vcoFreq);

    uint32 pll1_phi = ((uint32)vcoFreq / (2UL*pll1_RFDPHI));
    CONFIG_ASSERT(pll1_phi <= 200000000UL);
    _debug_("  Fpll1_phi   : %10d (max 200Mhz)\n",pll1_phi);

    PLLDIG.PLL1DV.B.MFD = pll1_MFD;
    PLLDIG.PLL1DV.B.RFDPHI = pll1_RFDPHI;

    /* Turn PLL1 on */
    MC_ME.DRUN_MC.B.PLL1ON = 1U;

    Mcu_Arc_SwitchMode(3U);

    typeof(MC_CGM.SC_DC0.B) scDc0 = { .DE = 1U };
    scDc0.DIV = getDivider(pll1_phi,CLK_PBRIDGE_0);
    MC_CGM.SC_DC0.B = scDc0; // register can only be accessed through full register write

    _debug_("PBRIDGE\n");
    _debug_("  System Clock Sel 0 : SEE RUN0 mode\n");
    _debug_("  System Clock div : %d\n", scDc0.DIV);
    _debug_("    -->            : %d\n", pll1_phi / (scDc0.DIV+1U));

    /*
     * MOTC + ADC
     */
    typeof(MC_CGM.AC0_DC0.B) ac0Dc0 = { .DE = 1U };
    ac0Dc0.DIV = getDividerOdd(pll0_phi,CLK_MOTC_CLK);
    MC_CGM.AC0_DC0.B = ac0Dc0;

    _debug_("MOTC_CLK + ADC_CLK\n");
    _debug_("  Aux Clock Sel 0  : %d (2=PLL0=%d)\n", MC_CGM.AC0_SC.B.SELCTL,pll0_phi);
    _debug_("  Aux Div 0        : %d\n", ac0Dc0.DIV);
    _debug_("    -->            : %d\n", pll0_phi / (ac0Dc0.DIV+1U));

    typeof(MC_CGM.AC0_DC2.B) ac0Dc2 = { .DE = 1U };
    ac0Dc2.DIV = getDivider(pll0_phi,CLK_ADC);
    MC_CGM.AC0_DC2.B = ac0Dc2;
    _debug_("  Aux Div 2        : %d\n", ac0Dc2.DIV);
    _debug_("    -->            : %d\n", pll0_phi / (ac0Dc2.DIV+1U));

    /*
     * CAN
     */
    typeof(MC_CGM.AC2_DC0.B) ac2Dc0 = { .DE = 1U };
    ac2Dc0.DIV = getDivider(pll0_phi,CLK_ADC);
    MC_CGM.AC2_DC0.B = ac2Dc0;

    _debug_("CAN_CLK (PLL0_PHI only)\n");
    _debug_("  Aux Div 2        : %d (+1 for divider)\n", ac2Dc0.DIV);
    _debug_("     -->           : %d\n", pll0_phi / (ac2Dc0.DIV+1U) );

#if defined(USE_ETH)
    /*
     * ENET
     */
    typeof(MC_CGM.AC10_DC0.B) ac10Dc0 = { .DE = 1U };
    ac10Dc0.DIV = getDivider(pll0_phi,CLK_ENET_CLK);
    MC_CGM.AC10_DC0.B = ac10Dc0;
    MC_CGM.AC10_SC.B.SELCTL = 2U; /* PLL0 as source */

    typeof(MC_CGM.AC11_DC0.B) ac11Dc0 = { .DE = 1U };
    ac11Dc0.DIV = getDivider(pll0_phi,CLK_ENET_TIME_CLK);
    MC_CGM.AC11_DC0.B = ac11Dc0;
    MC_CGM.AC11_SC.B.SELCTL = 2U; /* PLL0 as source */
#endif

    MC_CGM.AC0_SC.B.SELCTL = 2U;  /* 0-IRC,1-XOSC,2- PLL0_PHI */

    uint32 runPC = ME_RUN_PC1;

    /* Enable RUN0 mode in Periconfig 1 */
    _debug_("Enabling RUN0 mode in RUN_PC%d\n",runPC);
    MC_ME.RUN_PC[1].R = 0x00000010U;


    _debug_("Peripheral configuration: %d\n",runPC);

    /* Put them all to RUN_PC1 */
    MC_ME.PCTL9.R =  (uint8)runPC;   /* LFAST_0 */
    MC_ME.PCTL11.R = (uint8)runPC;  /* SIPI_0 */
    MC_ME.PCTL12.R = (uint8)runPC;  /* ENET_0 */
    MC_ME.PCTL30.R = (uint8)runPC;  /* PIT_0  */
    MC_ME.PCTL36.R = (uint8)runPC;  /* DMAMUX_0 */
    MC_ME.PCTL38.R = (uint8)runPC;  /* CRC_0 */
    MC_ME.PCTL77.R = (uint8)runPC;  /* CAN_2 */
    MC_ME.PCTL78.R = (uint8)runPC;  /* CAN_1 */
    MC_ME.PCTL79.R = (uint8)runPC;  /* CAN_0 */
    MC_ME.PCTL91.R = (uint8)runPC;  /* LINFlex_1 */
    MC_ME.PCTL98.R = (uint8)runPC;  /* DSPI_1 */
    MC_ME.PCTL99.R = (uint8)runPC;  /* DSPI_0 */
    MC_ME.PCTL104.R = (uint8)runPC; /* SENT_0 */
    MC_ME.PCTL107.R = (uint8)runPC; /* FLEXRAY */
    MC_ME.PCTL124.R = (uint8)runPC; /* ADC_3 */
    MC_ME.PCTL126.R = (uint8)runPC; /* ADC_1 */
    MC_ME.PCTL137.R = (uint8)runPC; /* ETIMER_1 */
    MC_ME.PCTL141.R = (uint8)runPC; /* CTU_1 */
    MC_ME.PCTL144.R = (uint8)runPC; /* PWM_1 */
    MC_ME.PCTL146.R = (uint8)runPC; /* DMAMUX_1 */
    MC_ME.PCTL204.R = (uint8)runPC; /* LINFlex_0 */
    MC_ME.PCTL208.R = (uint8)runPC; /* DSPI_3 */
    MC_ME.PCTL209.R = (uint8)runPC; /* DSPI_2 */
    MC_ME.PCTL214.R = (uint8)runPC; /* SENT_1 */
    MC_ME.PCTL235.R = (uint8)runPC; /* ADC_2 */
    MC_ME.PCTL237.R = (uint8)runPC; /* ADC_0 */
    MC_ME.PCTL239.R = (uint8)runPC; /* SGEN_0 */
    MC_ME.PCTL245.R = (uint8)runPC; /* ETIMER_2 */
    MC_ME.PCTL247.R = (uint8)runPC; /* ETIMER_0 */
    MC_ME.PCTL251.R = (uint8)runPC; /* CTU_0 */
    MC_ME.PCTL255.R = (uint8)runPC; /* PWM_0 */

    /* Enabling clocks for RUN0 */
    typeof(MC_ME.RUN0_MC) val = {
            .B.PDO=1U,
            .B.MVRON=1U,
            .B.FLAON=3U,
            .B.XOSCON=1U,
            .B.PLL0ON=1U,
            .B.PLL1ON=1U,
            .B.IRCON=1U,
            .B.SYSCLK=4U      /* PLL1 ("secondary" PLL as SYS_CLK) */
    };
    MC_ME.RUN0_MC.R = val.R;

    _debug_("Switching to RUN0\n");
    _debug_("  SYSCLK=4 (secondary PLL = PLL1) \n");
    Mcu_Arc_SwitchMode(MODE_RUN0);

    /* Enable user mode access */
    /* ADC */
    SET_USER_ACCESS_ALLOWED(ADC_0);
    SET_USER_ACCESS_ALLOWED(ADC_1);
    SET_USER_ACCESS_ALLOWED(ADC_2);
    SET_USER_ACCESS_ALLOWED(ADC_3);

    /* CAN */
    SET_USER_ACCESS_ALLOWED(CAN_0);
    SET_USER_ACCESS_ALLOWED(CAN_1);
    SET_USER_ACCESS_ALLOWED(CAN_2);

    /* E_TIMER */
    SET_USER_ACCESS_ALLOWED(ETIMER_0);
    SET_USER_ACCESS_ALLOWED(ETIMER_1);
    SET_USER_ACCESS_ALLOWED(ETIMER_2);

    /* PWM */
    SET_USER_ACCESS_ALLOWED(FLEXPWM_0);
    SET_USER_ACCESS_ALLOWED(FLEXPWM_1);

    /* Mcu stuff */
    SET_USER_ACCESS_ALLOWED(FCCU);
    SET_USER_ACCESS_ALLOWED(MC_CGM);
    SET_USER_ACCESS_ALLOWED(MC_ME);
    SET_USER_ACCESS_ALLOWED(MC_RGM);
    SET_USER_ACCESS_ALLOWED(MEMU);

    /* Flash */
    SET_USER_ACCESS_ALLOWED(C55FMC);

    /* Lin */
    SET_USER_ACCESS_ALLOWED(LINFlexD_0);
    SET_USER_ACCESS_ALLOWED(LINFlexD_1);

    /* PIT */
    SET_USER_ACCESS_ALLOWED(PIT);

    /* SIUL */
    SET_USER_ACCESS_ALLOWED(SIUL2);

    /* SPI */
    SET_USER_ACCESS_ALLOWED(SPI_0);
    SET_USER_ACCESS_ALLOWED(SPI_1);
    SET_USER_ACCESS_ALLOWED(SPI_2);
    SET_USER_ACCESS_ALLOWED(SPI_3);

    /* STM */


    /* WDG */


    CMU_Init();
}



void Mcu_Arc_SetModePre(Mcu_ModeType mcuMode) {

    (void)mcuMode;
}


void Mcu_Arc_SetModePost( Mcu_ModeType mcuMode){

    (void)mcuMode;
}

/** @} */
