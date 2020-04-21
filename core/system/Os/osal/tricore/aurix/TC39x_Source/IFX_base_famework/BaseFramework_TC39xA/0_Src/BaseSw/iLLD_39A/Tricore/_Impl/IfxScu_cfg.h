/**
 * \file IfxScu_cfg.h
 * \brief SCU on-chip implementation data
 * \ingroup IfxLld_Scu
 *
 * \version iLLD_1_0_0_12_0
 * \copyright Copyright (c) 2012 Infineon Technologies AG. All rights reserved.
 *
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Scu SCU
 * \ingroup IfxLld
 * \defgroup IfxLld_Scu_Impl Implementation
 * \ingroup IfxLld_Scu
 * \defgroup IfxLld_Scu_Std Standard Driver
 * \ingroup IfxLld_Scu
 */

#ifndef IFXSCU_CFG_H
#define IFXSCU_CFG_H
/******************************************************************************/
#include "Ifx_Cfg.h"
#include "IfxScu_bf.h"

/******************************************************************************/
/*                           Macro                                            */
/******************************************************************************/
#ifndef IFX_CFG_SCU_XTAL_FREQUENCY
#    define IFX_CFG_SCU_XTAL_FREQUENCY   20000000   /**< \brief Default External oscillator frequency */
#    warning "IFX_CFG_SCU_XTAL_FREQUENCY not specified in your IfxCfg.h file."
#    warning "Please double check the external XTAL frequency with the default setting of 20 MHz!"
#endif

#ifndef IFX_CFG_SCU_SYSCLK_FREQUENCY
#    define IFX_CFG_SCU_SYSCLK_FREQUENCY 20000000     /**< \brief Default External SysClk pin frequency */
#endif

#ifndef IFX_CFG_SCU_PLL_FREQUENCY
#    define IFX_CFG_SCU_PLL_FREQUENCY    300000000  /**< \brief Default PLL frequency */
#endif

#ifndef IFX_CFG_SCU_PLL1_FREQUENCY
#    define IFX_CFG_SCU_PLL1_FREQUENCY   320000000   /**< \brief Default PER PLL1 frequency */
#endif

#ifndef IFX_CFG_SCU_PLL2_FREQUENCY
#    define IFX_CFG_SCU_PLL2_FREQUENCY   200000000   /**< \brief Default PER PLL2 frequency */
#endif

#define IFXSCU_VCO_BASE_FREQUENCY        (100000000.0)
#define IFXSCU_EVR_OSC_FREQUENCY         (100000000.0)

/*The following frequency is the PLL free running frequency */
/* FIXME is this not redundant to IFXSCU_VCO_BASE_FREQUENCY */
#define IFXSCU_PLL_FREERUNNING_FREQUENCY (100000000.0)

/******************************************************************************/
/** \brief Macros to configure Pll steps,
 * Macros to configure the Pll steps for different profiles of Crystal frequency and
 * target frequencies. This configuration is important for the current jump controll
 * during clock throttling.
 * \ref IfxScu_PllStepsConfig
 */

/******************** Pll step for 16MHz crystal Configurations ********************************/
#ifndef IFXSCU_CFG_PLL_STEPS_FDCO_640MHZ_TO_TARGET_80MHZ
/** \brief Macro for Pll step for profile with fDCO= 600MHz*/
#define IFXSCU_CFG_PLL_STEPS_FDCO_640MHZ_TO_TARGET_80MHZ              \
    {                   /*Step 0 Config: 150MHz*/                     \
        (8 - 1),        /*uint8 k2Step;*/                             \
        0.000100,       /*float32 waitTime;*/                         \
    }
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_FDCO_640MHZ_TO_TARGET_80MHZ */

#ifndef IFXSCU_CFG_PLL_STEPS_FDCO_800MHZ_TO_TARGET_133MHZ
/** \brief Macro for Pll step for profile with fDCO= 800MHz*/
#define IFXSCU_CFG_PLL_STEPS_FDCO_800MHZ_TO_TARGET_133MHZ             \
    {                   /*Step 0 Config: 133MHz*/                     \
        (6 - 1),        /*uint8 k2Step;*/                             \
        0.000100,       /*float32 waitTime;*/                         \
    }
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_FDCO_800MHZ_TO_TARGET_133MHZ */

#ifndef IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_200MHZ
/** \brief Macro for Pll step for profile with fDCO= 600MHz*/
#define IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_200MHZ             \
    {                   /*Step 0 Config: 150MHz*/                     \
        (4 - 1),        /*uint8 k2Step;*/                             \
        0.000100,       /*float32 waitTime;*/                         \
    },                                                                \
    {                   /*Step 1 Config: 200MHz*/                     \
        (3 - 1),        /*uint8 k2Step;*/                             \
        0.000100,       /*float32 waitTime;*/                         \
    }
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_200MHZ */

#ifndef IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_300MHZ
/** \brief Macro for Pll step for profile with fDCO= 600MHz*/
#define IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_300MHZ             \
    {                   /*Step 0 Config: 150MHz*/                     \
        (4 - 1),        /*uint8 k2Step;*/                             \
        0.000100,       /*float32 waitTime;*/                         \
    },                                                                \
    {                   /*Step 1 Config: 200MHz*/                     \
        (3 - 1),        /*uint8 k2Step;*/                             \
        0.000100,       /*float32 waitTime;*/                         \
    },                                                                \
    {                   /*Step 2 Config: 300MHz*/                     \
        (2 - 1),        /*uint8 k2Step;*/                             \
        0.000100,       /*float32 waitTime;*/                         \
    }
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_300MHZ */

/******************** Pll step 16MHz crystal Configurations ********************************/
#ifndef IFXSCU_CFG_PLL_STEPS_16MHZ_80MHZ
/** \brief Macro for Pll step for profile with 16MHz Crystal and 300MHz target (fDCO= 640MHz)*/
#define IFXSCU_CFG_PLL_STEPS_16MHZ_80MHZ  IFXSCU_CFG_PLL_STEPS_FDCO_640MHZ_TO_TARGET_80MHZ
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_16MHZ_240MHZ */

#ifndef IFXSCU_CFG_PLL_STEPS_16MHZ_300MHZ
/** \brief Macro for Pll step for profile with 16MHz Crystal and 300MHz target (fDCO= 600MHz)*/
#define IFXSCU_CFG_PLL_STEPS_16MHZ_300MHZ  IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_300MHZ
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_16MHZ_240MHZ */

/******************** Pll step 20MHz crystal Configurations ********************************/
#ifndef IFXSCU_CFG_PLL_STEPS_20MHZ_300MHZ
/** \brief Macro for Pll step for profile with 20MHz Crystal and 300MHz target (fDCO= 600MHz)*/
#define IFXSCU_CFG_PLL_STEPS_20MHZ_300MHZ  IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_300MHZ
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_20MHZ_300MHZ */

/******************** Pll step 20MHz crystal Configurations ********************************/
#ifndef IFXSCU_CFG_PLL_STEPS_25MHZ_300MHZ
/** \brief Macro for Pll step for profile with 20MHz Crystal and 300MHz target (fDCO= 600MHz)*/
#define IFXSCU_CFG_PLL_STEPS_25MHZ_300MHZ  IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_300MHZ
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_20MHZ_300MHZ */

/******************** Pll step for 40MHz crystal Configurations ********************************/
#ifndef IFXSCU_CFG_PLL_STEPS_40MHZ_300MHZ
/** \brief Macro for Pll step for profile with 40MHz Crystal and 300MHz target (fDCO= 600MHz)*/
#define IFXSCU_CFG_PLL_STEPS_40MHZ_300MHZ  IFXSCU_CFG_PLL_STEPS_FDCO_600MHZ_TO_TARGET_300MHZ
#endif /*#ifndef IFXSCU_CFG_PLL_STEPS_40MHZ_300MHZ */

/** \brief Macros to configure Initial Pll step.
 *  Macros to configure the Pll initial step, where the configuration of PDIV, NDIV and K2DIV are
 *  done for the internal Oscillator frequency.
 *  \ref IfxScu_InitialStepConfig
 */

/****************** Sys Pll initial step configuration for 16MHz crystal Configurations ******************************/

#ifndef IFXSCU_CFG_SYS_PLL_16MHZ_80MHZ
/** \brief Macro for Initial Pll step, for profile with 16MHz Crystal and 300MHz target (fDCO= 640)*/
#define IFXSCU_CFG_SYS_PLL_16MHZ_80MHZ                            \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial	}*/\
    {(1 - 1), (40 - 1), (6 - 1)}
#endif /*#ifndef IFXSCU_CFG_SYS_PLL_16MHZ_80MHZ */

#ifndef IFXSCU_CFG_SYS_PLL_16MHZ_133MHZ
/** \brief Macro for Initial Pll step, for profile with 16MHz Crystal and 300MHz target (fDCO= 800)*/
#define IFXSCU_CFG_SYS_PLL_16MHZ_133MHZ                            \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial	}*/\
    {(1 - 1), (50 - 1), (8 - 1)}
#endif /*#ifndef IFXSCU_CFG_SYS_PLL_16MHZ_80MHZ */

#ifndef IFXSCU_CFG_SYS_PLL_16MHZ_300MHZ
/** \brief Macro for Initial Pll step, for profile with 16MHz Crystal and 300MHz target (fDCO= 600)*/
#define IFXSCU_CFG_SYS_PLL_16MHZ_300MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial	}*/\
    {(2 - 1), (75 - 1), (6 - 1)}
#endif /*#ifndef IFXSCU_CFG_SYS_PLL_16MHZ_300MHZ */

#ifndef IFXSCU_CFG_WAIT_INITIAL_STEP_16MHZ_300MHZ
#define IFXSCU_CFG_WAIT_INITIAL_STEP_16MHZ_300MHZ 0.000200F
#endif /*#ifndef IFXSCU_CFG_WAIT_INITIAL_STEP_16MHZ_300MHZ */

/****************** Sys Pll configuration for 20MHz crystal Configurations ******************************/

#ifndef IFXSCU_CFG_SYS_PLL_20MHZ_300MHZ
/** \brief Macro for Initial Pll step, for profile with 20MHz Crystal and 300MHz target (fDCO= 600)*/
#define IFXSCU_CFG_SYS_PLL_20MHZ_300MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, float32 waitTime	}*/\
    {(2 - 1), (60 - 1), (6 - 1)}
#endif /*#ifndef IFXSCU_CFG_SYS_PLL_20MHZ_300MHZ */

#ifndef IFXSCU_CFG_WAIT_INITIAL_STEP_20MHZ_300MHZ
#define IFXSCU_CFG_WAIT_INITIAL_STEP_20MHZ_300MHZ 0.000200F
#endif /*#ifndef IFXSCU_CFG_WAIT_INITIAL_STEP_20MHZ_300MHZ */

/****************** Sys Pll configuration for 25MHz crystal Configurations ******************************/

#ifndef IFXSCU_CFG_SYS_PLL_25MHZ_300MHZ
/** \brief Macro for Initial Pll step, for profile with 20MHz Crystal and 300MHz target (fDCO= 600)*/
#define IFXSCU_CFG_SYS_PLL_25MHZ_300MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, float32 waitTime	}*/\
    {(2 - 1), (48 - 1), (6 - 1)}
#endif /*#ifndef IFXSCU_CFG_SYS_PLL_20MHZ_300MHZ */

#ifndef IFXSCU_CFG_WAIT_INITIAL_STEP_25MHZ_300MHZ
#define IFXSCU_CFG_WAIT_INITIAL_STEP_25MHZ_300MHZ 0.000200F
#endif /*#ifndef IFXSCU_CFG_WAIT_INITIAL_STEP_20MHZ_300MHZ */

/****************** Sys Pll configuration for 40MHz crystal Configurations ******************************/

#ifndef IFXSCU_CFG_SYS_PLL_40MHZ_300MHZ
/** \brief Macro for Initial Pll step, for profile with 40MHz Crystal and 80MHz target (fDCO= 600)*/
#define IFXSCU_CFG_SYS_PLL_40MHZ_300MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, float32 waitTime	}*/\
    {(2 - 1), (30 - 1), (6 - 1)}
#endif /*#ifndef IFXSCU_CFG_SYS_PLL_40MHZ_300MHZ */

#ifndef IFXSCU_CFG_WAIT_INITIAL_STEP_40MHZ_300MHZ
#define IFXSCU_CFG_WAIT_INITIAL_STEP_40MHZ_300MHZ 0.000200F
#endif /*#ifndef IFXSCU_CFG_WAIT_INITIAL_STEP_40MHZ_300MHZ */

/****************** Per Pll configuration for 16MHz crystal Configurations ******************************/

#ifndef IFXSCU_CFG_PER_PLL_16MHZ_320MHZ_200MHZ
/** \brief Macro for Initial Pll step, for profile with 16MHz Crystal and 320/200MHz target (fDCO= 640)*/
#define IFXSCU_CFG_PER_PLL_16MHZ_320MHZ_200MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, uint8 k2Initial, uint8 k3DividerBypass	}*/\
    {(2 - 1), (79 - 1), (2 - 1), (2 - 1), 0}
#endif /*#ifndef IFXSCU_CFG_PER_PLL_16MHZ_320MHZ_200MHZ */

#ifndef IFXSCU_CFG_PER_PLL_16MHZ_160MHZ_200MHZ
/** \brief Macro for Initial Pll step, for profile with 16MHz Crystal and 160/200MHz target (fDCO= 640)*/
#define IFXSCU_CFG_PER_PLL_16MHZ_160MHZ_200MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, uint8 k2Initial, uint8 k3DividerBypass	}*/\
    {(2 - 1), (79 - 1), (4 - 1), (2 - 1), 0}
#endif /*#ifndef IFXSCU_CFG_PER_PLL_16MHZ_320MHZ_200MHZ */

/****************** Per Pll configuration for 20MHz crystal Configurations ******************************/

#ifndef IFXSCU_CFG_PER_PLL_20MHZ_320MHZ_200MHZ
/** \brief Macro for Initial Pll step, for profile with 20MHz Crystal and 320/200MHz target (fDCO= 640)*/
#define IFXSCU_CFG_PER_PLL_20MHZ_320MHZ_200MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, uint8 k2Initial, uint8 k3DividerBypass	}*/\
    {(2 - 1), (64 - 1), (2 - 1), (2 - 1), 0}
#endif /*#ifndef IFXSCU_CFG_PER_PLL_20MHZ_320MHZ_200MHZ */

#ifndef IFXSCU_CFG_PER_PLL_20MHZ_160MHZ_200MHZ
/** \brief Macro for Initial Pll step, for profile with 20MHz Crystal and 160/200MHz target (fDCO= 640)*/
#define IFXSCU_CFG_PER_PLL_20MHZ_160MHZ_200MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, uint8 k2Initial, uint8 k3DividerBypass	}*/\
    {(2 - 1), (64 - 1), (4 - 1), (2 - 1), 0}
#endif /*#ifndef IFXSCU_CFG_PER_PLL_20MHZ_320MHZ_200MHZ */

/****************** Per Pll configuration for 25MHz crystal Configurations ******************************/

#ifndef IFXSCU_CFG_PER_PLL_25MHZ_160MHZ_200MHZ
/** \brief Macro for Initial Pll step, for profile with 20MHz Crystal and 160/200MHz target (fDCO= 800)*/
#define IFXSCU_CFG_PER_PLL_25MHZ_160MHZ_200MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, uint8 k2Initial, uint8 k3DividerBypass	}*/\
    {(2 - 1), (64 - 1), (5 - 1), (4 - 1), 1}
#endif /*#ifndef IFXSCU_CFG_PER_PLL_20MHZ_320MHZ_200MHZ */

/****************** Per Pll configuration for 40MHz crystal Configurations ******************************/

#ifndef IFXSCU_CFG_PER_PLL_40MHZ_320MHZ_200MHZ
/** \brief Macro for Initial Pll step, for profile with 40MHz Crystal and 320/200MHz target (fDCO= 640)*/
#define IFXSCU_CFG_PER_PLL_40MHZ_320MHZ_200MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, uint8 k2Initial, uint8 k3DividerBypass	}*/\
    {(2 - 1), (32 - 1), (2 - 1), (2 - 1), 0}
#endif /*#ifndef IFXSCU_CFG_PER_PLL_40MHZ_320MHZ_200MHZ */

#ifndef IFXSCU_CFG_PER_PLL_40MHZ_160MHZ_200MHZ
/** \brief Macro for Initial Pll step, for profile with 40MHz Crystal and 160/200MHz target (fDCO= 640)*/
#define IFXSCU_CFG_PER_PLL_40MHZ_160MHZ_200MHZ                           \
/*{	uint8 pDivider, uint8 nDivider, uint8 k2Initial, uint8 k2Initial, uint8 k3DividerBypass	}*/\
    {(2 - 1), (32 - 1), (4 - 1), (1 - 1), 0}
#endif /*#ifndef IFXSCU_CFG_PER_PLL_40MHZ_320MHZ_200MHZ */

/** \brief Macros to configure the Pll initial step, where the configuration of PDIV, NDIV and K2DIV are
 *  done for the internal Oscillator frequency.
 *  \ref IfxScu_InitialStepConfig
 */

/*macro for pll steps configuration */
#define IFXSCU_CFG_PLL_STEPS_BASIC_(xtalFreq, pll0Freq)        IFXSCU_CFG_PLL_STEPS_##xtalFreq##_##pll0Freq
#define IFXSCU_CFG_PLL_STEPS_BASIC(xtalFreq, pll0Freq)         IFXSCU_CFG_PLL_STEPS_BASIC_(xtalFreq, pll0Freq)
#define IFXSCU_CFG_PLL_STEPS        IFXSCU_CFG_PLL_STEPS_BASIC(IFXSCU_CFG_XTAL_FREQ, IFXSCU_CFG_PLL_FREQ)

/****************** initial step configuration definitions ******************************/
/*macro for sys pll initial step configuration */
#define IFXSCU_CFG_SYS_PLL_INITIAL_STEP_BASIC_(xtalFreq, pll0Freq) IFXSCU_CFG_SYS_PLL_##xtalFreq##_##pll0Freq
#define IFXSCU_CFG_SYS_PLL_INITIAL_STEP_BASIC(xtalFreq, pll0Freq)  IFXSCU_CFG_SYS_PLL_INITIAL_STEP_BASIC_(xtalFreq, pll0Freq)
#define IFXSCU_CFG_SYS_PLL_INITIAL_STEP IFXSCU_CFG_SYS_PLL_INITIAL_STEP_BASIC(IFXSCU_CFG_XTAL_FREQ, IFXSCU_CFG_PLL_FREQ)

/*macro for per pll initial step configuration */
#define IFXSCU_CFG_PER_PLL_INITIAL_STEP_BASIC_(xtalFreq, pll1Freq, pll2Freq) IFXSCU_CFG_PER_PLL_##xtalFreq##_##pll1Freq##_##pll2Freq
#define IFXSCU_CFG_PER_PLL_INITIAL_STEP_BASIC(xtalFreq, pll1Freq, pll2Freq)  IFXSCU_CFG_PER_PLL_INITIAL_STEP_BASIC_(xtalFreq, pll1Freq, pll2Freq)
#define IFXSCU_CFG_PER_PLL_INITIAL_STEP IFXSCU_CFG_PER_PLL_INITIAL_STEP_BASIC(IFXSCU_CFG_XTAL_FREQ, IFXSCU_CFG_PLL1_FREQ, IFXSCU_CFG_PLL2_FREQ)

/*macro for wait at initial step configuration */
#define IFXSCU_CFG_WAIT_INITIAL_STEP_BASIC_(xtalFreq, pll0Freq) IFXSCU_CFG_WAIT_INITIAL_STEP_##xtalFreq##_##pll0Freq
#define IFXSCU_CFG_WAIT_INITIAL_STEP_BASIC(xtalFreq, pll0Freq) IFXSCU_CFG_WAIT_INITIAL_STEP_BASIC_(xtalFreq, pll0Freq)
#define IFXSCU_CFG_WAIT_INITIAL_STEP IFXSCU_CFG_WAIT_INITIAL_STEP_BASIC(IFXSCU_CFG_XTAL_FREQ, IFXSCU_CFG_PLL_FREQ)

/*macro for sys pll initial step configuration */
#define IFXSCU_CFG_PLL_INITIAL_STEP \
{\
	{\
		IFX_CFG_SCU_XTAL_FREQUENCY,\
		IfxScuCcu_PllInputClockSelection_fOsc0,\
		IFXSCU_CFG_SYS_PLL_INITIAL_STEP, \
		IFXSCU_CFG_PER_PLL_INITIAL_STEP, \
	},\
	IFXSCU_CFG_WAIT_INITIAL_STEP \
}

/** \brief Macros to configure CCUCON registers */

#ifndef IFXSCU_CFG_SRIDIV_80MHZ
/** \brief Macro to configure SRIDIV at 80MHz target frequency */
#define IFXSCU_CFG_SRIDIV_80MHZ             (1)
#endif /*#ifndef IFXSCU_CFG_SRIDIV_80MHZ */

#ifndef IFXSCU_CFG_SRIDIV_133MHZ
/** \brief Macro to configure SRIDIV at 133MHz target frequency */
#define IFXSCU_CFG_SRIDIV_133MHZ            (1)
#endif /*#ifndef IFXSCU_CFG_SRIDIV_133MHZ */

#ifndef IFXSCU_CFG_SRIDIV_160MHZ
/** \brief Macro to configure SRIDIV at 160MHz target frequency */
#define IFXSCU_CFG_SRIDIV_160MHZ            (1)
#endif /*#ifndef IFXSCU_CFG_SRIDIV_160MHZ */

#ifndef IFXSCU_CFG_SRIDIV_200MHZ
/** \brief Macro to configure SRIDIV at 200MHz target frequency */
#define IFXSCU_CFG_SRIDIV_200MHZ            (1)
#endif /*#ifndef IFXSCU_CFG_SRIDIV_200MHZ */

#ifndef IFXSCU_CFG_SRIDIV_240MHZ
/** \brief Macro to configure SRIDIV at 240MHz target frequency */
#define IFXSCU_CFG_SRIDIV_240MHZ            (1)
#endif /*#ifndef IFXSCU_CFG_SRIDIV_240MHZ */

#ifndef IFXSCU_CFG_SRIDIV_300MHZ
/** \brief Macro to configure SRIDIV at 300MHz target frequency */
#define IFXSCU_CFG_SRIDIV_300MHZ            (1)
#endif /*#ifndef IFXSCU_CFG_SRIDIV_300MHZ */

#ifndef IFXSCU_CFG_SPBDIV_80MHZ
/** \brief Macro to configure SPBDIV at 80MHz target frequency */
#define IFXSCU_CFG_SPBDIV_80MHZ             (IFXSCU_CFG_SRIDIV_80MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_SPBDIV_80MHZ */

#ifndef IFXSCU_CFG_SPBDIV_133MHZ
/** \brief Macro to configure SPBDIV at 133MHz target frequency */
#define IFXSCU_CFG_SPBDIV_133MHZ            (IFXSCU_CFG_SRIDIV_133MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_SPBDIV_133MHZ */

#ifndef IFXSCU_CFG_SPBDIV_160MHZ
/** \brief Macro to configure SPBDIV at 160MHz target frequency */
#define IFXSCU_CFG_SPBDIV_160MHZ            (IFXSCU_CFG_SRIDIV_160MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_SPBDIV_160MHZ */

#ifndef IFXSCU_CFG_SPBDIV_200MHZ
/** \brief Macro to configure SPBDIV at 200MHz target frequency */
#define IFXSCU_CFG_SPBDIV_200MHZ            (IFXSCU_CFG_SRIDIV_200MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_SPBDIV_200MHZ */

#ifndef IFXSCU_CFG_SPBDIV_240MHZ
/** \brief Macro to configure SPBDIV at 240MHz target frequency */
#define IFXSCU_CFG_SPBDIV_240MHZ            (IFXSCU_CFG_SRIDIV_240MHZ * 3) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_SPBDIV_240MHZ */

#ifndef IFXSCU_CFG_SPBDIV_300MHZ
/** \brief Macro to configure SPBDIV at 300MHz target frequency */
#define IFXSCU_CFG_SPBDIV_300MHZ            (IFXSCU_CFG_SRIDIV_300MHZ * 3) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_SPBDIV_300MHZ */

#ifndef IFXSCU_CFG_FSI2DIV_80MHZ
/** \brief Macro to configure FSI2DIV at 80MHz target frequency */
#define IFXSCU_CFG_FSI2DIV_80MHZ            (IFXSCU_CFG_SRIDIV_80MHZ) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_FSI2DIV_80MHZ */

#ifndef IFXSCU_CFG_FSI2DIV_133MHZ
/** \brief Macro to configure FSI2DIV at 133MHz target frequency */
#define IFXSCU_CFG_FSI2DIV_133MHZ           (IFXSCU_CFG_SRIDIV_133MHZ) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_FSI2DIV_133MHZ */

#ifndef IFXSCU_CFG_FSI2DIV_160MHZ
/** \brief Macro to configure FSI2DIV at 160MHz target frequency */
#define IFXSCU_CFG_FSI2DIV_160MHZ           (IFXSCU_CFG_SRIDIV_160MHZ) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_FSI2DIV_160MHZ */

#ifndef IFXSCU_CFG_FSI2DIV_200MHZ
/** \brief Macro to configure FSI2DIV at 200MHz target frequency */
#define IFXSCU_CFG_FSI2DIV_200MHZ           (IFXSCU_CFG_SRIDIV_200MHZ) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_FSI2DIV_200MHZ */

#ifndef IFXSCU_CFG_FSI2DIV_240MHZ
/** \brief Macro to configure FSI2DIV at 240MHz target frequency */
#define IFXSCU_CFG_FSI2DIV_240MHZ           (IFXSCU_CFG_SRIDIV_240MHZ) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_FSI2DIV_240MHZ */

#ifndef IFXSCU_CFG_FSI2DIV_300MHZ
/** \brief Macro to configure FSI2DIV at 300MHz target frequency */
#define IFXSCU_CFG_FSI2DIV_300MHZ           (IFXSCU_CFG_SRIDIV_300MHZ) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_FSI2DIV_300MHZ */

#ifndef IFXSCU_CFG_FSIDIV_80MHZ
/** \brief Macro to configure FSIDIV at 80MHz target frequency */
#define IFXSCU_CFG_FSIDIV_80MHZ             (IFXSCU_CFG_SRIDIV_80MHZ) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_FSIDIV_80MHZ */

#ifndef IFXSCU_CFG_FSIDIV_133MHZ
/** \brief Macro to configure FSIDIV at 133MHz target frequency */
#define IFXSCU_CFG_FSIDIV_133MHZ            (IFXSCU_CFG_SRIDIV_133MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_FSIDIV_133MHZ */

#ifndef IFXSCU_CFG_FSIDIV_160MHZ
/** \brief Macro to configure FSIDIV at 160MHz target frequency */
#define IFXSCU_CFG_FSIDIV_160MHZ            (IFXSCU_CFG_SRIDIV_160MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_FSIDIV_160MHZ */

#ifndef IFXSCU_CFG_FSIDIV_200MHZ
/** \brief Macro to configure FSIDIV at 200MHz target frequency */
#define IFXSCU_CFG_FSIDIV_200MHZ            (IFXSCU_CFG_SRIDIV_200MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_FSIDIV_200MHZ */

#ifndef IFXSCU_CFG_FSIDIV_240MHZ
/** \brief Macro to configure FSIDIV at 240MHz target frequency */
#define IFXSCU_CFG_FSIDIV_240MHZ            (IFXSCU_CFG_SRIDIV_240MHZ * 3) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_FSIDIV_240MHZ */

#ifndef IFXSCU_CFG_FSIDIV_300MHZ
/** \brief Macro to configure FSIDIV at 300MHz target frequency */
#define IFXSCU_CFG_FSIDIV_300MHZ            (IFXSCU_CFG_SRIDIV_300MHZ * 3) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_FSIDIV_300MHZ */

#ifndef IFXSCU_CFG_STMDIV_80MHZ
/** \brief Macro to configure STMDIV at 80MHz target frequency */
#define IFXSCU_CFG_STMDIV_80MHZ             (IFXSCU_CFG_SRIDIV_80MHZ) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_STMDIV_80MHZ */

#ifndef IFXSCU_CFG_STMDIV_133MHZ
/** \brief Macro to configure STMDIV at 133MHz target frequency */
#define IFXSCU_CFG_STMDIV_133MHZ            (IFXSCU_CFG_SRIDIV_133MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_STMDIV_133MHZ */

#ifndef IFXSCU_CFG_STMDIV_160MHZ
/** \brief Macro to configure STMDIV at 160MHz target frequency */
#define IFXSCU_CFG_STMDIV_160MHZ            (IFXSCU_CFG_SRIDIV_160MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_STMDIV_160MHZ */

#ifndef IFXSCU_CFG_STMDIV_200MHZ
/** \brief Macro to configure STMDIV at 200MHz target frequency */
#define IFXSCU_CFG_STMDIV_200MHZ            (IFXSCU_CFG_SRIDIV_200MHZ * 2) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_STMDIV_200MHZ */

#ifndef IFXSCU_CFG_STMDIV_240MHZ
/** \brief Macro to configure STMDIV at 240MHz target frequency */
#define IFXSCU_CFG_STMDIV_240MHZ            (IFXSCU_CFG_SRIDIV_240MHZ * 3) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_STMDIV_240MHZ */

#ifndef IFXSCU_CFG_STMDIV_300MHZ
/** \brief Macro to configure STMDIV at 300MHz target frequency */
#define IFXSCU_CFG_STMDIV_300MHZ            (IFXSCU_CFG_SRIDIV_300MHZ * 3) /*Max: 100MHz */
#endif /*#ifndef IFXSCU_CFG_STMDIV_300MHZ */

#ifndef IFXSCU_CFG_GTMDIV_80MHZ
/** \brief Macro to configure GTMDIV at 80MHz target frequency */
#define IFXSCU_CFG_GTMDIV_80MHZ             (1) /*Max: 200MHz */
#endif /*#ifndef IFXSCU_CFG_GTMDIV_80MHZ */

#ifndef IFXSCU_CFG_GTMDIV_133MHZ
/** \brief Macro to configure GTMDIV at 133MHz target frequency */
#define IFXSCU_CFG_GTMDIV_133MHZ            (1) /*Max: 200MHz */
#endif /*#ifndef IFXSCU_CFG_GTMDIV_133MHZ */

#ifndef IFXSCU_CFG_GTMDIV_160MHZ
/** \brief Macro to configure GTMDIV at 160MHz target frequency */
#define IFXSCU_CFG_GTMDIV_160MHZ            (1) /*Max: 200MHz */
#endif /*#ifndef IFXSCU_CFG_GTMDIV_160MHZ */

#ifndef IFXSCU_CFG_GTMDIV_200MHZ
/** \brief Macro to configure GTMDIV at 200MHz target frequency */
#define IFXSCU_CFG_GTMDIV_200MHZ            (1) /*Max: 200MHz */
#endif /*#ifndef IFXSCU_CFG_GTMDIV_200MHZ */

#ifndef IFXSCU_CFG_GTMDIV_240MHZ
/** \brief Macro to configure GTMDIV at 240MHz target frequency */
#define IFXSCU_CFG_GTMDIV_240MHZ            (1) /*Max: 200MHz */
#endif /*#ifndef IFXSCU_CFG_GTMDIV_240MHZ */

#ifndef IFXSCU_CFG_GTMDIV_300MHZ
/** \brief Macro to configure GTMDIV at 300MHz target frequency */
#define IFXSCU_CFG_GTMDIV_300MHZ            (1) /*Max: 200MHz */
#endif /*#ifndef IFXSCU_CFG_GTMDIV_300MHZ */

#ifndef IFXSCU_CFG_BBBDIV_80MHZ
/** \brief Macro to configure BBBDIV at 80MHz target frequency */
#define IFXSCU_CFG_BBBDIV_80MHZ             (IFXSCU_CFG_SRIDIV_80MHZ)
#endif /*#ifndef IFXSCU_CFG_BBBDIV_80MHZ */

#ifndef IFXSCU_CFG_BBBDIV_133MHZ
/** \brief Macro to configure BBBDIV at 133MHz target frequency */
#define IFXSCU_CFG_BBBDIV_133MHZ            (IFXSCU_CFG_SRIDIV_133MHZ)
#endif /*#ifndef IFXSCU_CFG_BBBDIV_133MHZ */

#ifndef IFXSCU_CFG_BBBDIV_160MHZ
/** \brief Macro to configure BBBDIV at 160MHz target frequency */
#define IFXSCU_CFG_BBBDIV_160MHZ            (IFXSCU_CFG_SRIDIV_160MHZ * 2)
#endif /*#ifndef IFXSCU_CFG_BBBDIV_160MHZ */

#ifndef IFXSCU_CFG_BBBDIV_200MHZ
/** \brief Macro to configure BBBDIV at 200MHz target frequency */
#define IFXSCU_CFG_BBBDIV_200MHZ            (IFXSCU_CFG_SRIDIV_200MHZ * 2)
#endif /*#ifndef IFXSCU_CFG_BBBDIV_200MHZ */

#ifndef IFXSCU_CFG_BBBDIV_240MHZ
/** \brief Macro to configure BBBDIV at 240MHz target frequency */
#define IFXSCU_CFG_BBBDIV_240MHZ            (IFXSCU_CFG_SRIDIV_240MHZ * 2)
#endif /*#ifndef IFXSCU_CFG_BBBDIV_240MHZ */

#ifndef IFXSCU_CFG_BBBDIV_300MHZ
/** \brief Macro to configure BBBDIV at 300MHz target frequency */
#define IFXSCU_CFG_BBBDIV_300MHZ            (IFXSCU_CFG_SRIDIV_300MHZ * 2)
#endif /*#ifndef IFXSCU_CFG_BBBDIV_300MHZ */

#ifndef IFXSCU_CFG_CPU0DIV_80MHZ
/** \brief Macro to configure CPU0DIV at 80MHz target frequency */
#define IFXSCU_CFG_CPU0DIV_80MHZ            (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU0DIV_80MHZ */

#ifndef IFXSCU_CFG_CPU0DIV_133MHZ
/** \brief Macro to configure CPU0DIV at 133MHz target frequency */
#define IFXSCU_CFG_CPU0DIV_133MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU0DIV_133MHZ */

#ifndef IFXSCU_CFG_CPU0DIV_160MHZ
/** \brief Macro to configure CPU0DIV at 160MHz target frequency */
#define IFXSCU_CFG_CPU0DIV_160MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU0DIV_160MHZ */

#ifndef IFXSCU_CFG_CPU0DIV_200MHZ
/** \brief Macro to configure CPU0DIV at 200MHz target frequency */
#define IFXSCU_CFG_CPU0DIV_200MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU0DIV_200MHZ */

#ifndef IFXSCU_CFG_CPU0DIV_240MHZ
/** \brief Macro to configure CPU0DIV at 240MHz target frequency */
#define IFXSCU_CFG_CPU0DIV_240MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU0DIV_240MHZ */

#ifndef IFXSCU_CFG_CPU0DIV_300MHZ
/** \brief Macro to configure CPU0DIV at 300MHz target frequency */
#define IFXSCU_CFG_CPU0DIV_300MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU0DIV_300MHZ */

#ifndef IFXSCU_CFG_CPU1DIV_80MHZ
/** \brief Macro to configure CPU1DIV at 80MHz target frequency */
#define IFXSCU_CFG_CPU1DIV_80MHZ            (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU1DIV_80MHZ */

#ifndef IFXSCU_CFG_CPU1DIV_133MHZ
/** \brief Macro to configure CPU1DIV at 133MHz target frequency */
#define IFXSCU_CFG_CPU1DIV_133MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU1DIV_133MHZ */

#ifndef IFXSCU_CFG_CPU1DIV_160MHZ
/** \brief Macro to configure CPU1DIV at 160MHz target frequency */
#define IFXSCU_CFG_CPU1DIV_160MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU1DIV_160MHZ */

#ifndef IFXSCU_CFG_CPU1DIV_200MHZ
/** \brief Macro to configure CPU1DIV at 200MHz target frequency */
#define IFXSCU_CFG_CPU1DIV_200MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU1DIV_200MHZ */

#ifndef IFXSCU_CFG_CPU1DIV_240MHZ
/** \brief Macro to configure CPU1DIV at 240MHz target frequency */
#define IFXSCU_CFG_CPU1DIV_240MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU1DIV_240MHZ */

#ifndef IFXSCU_CFG_CPU1DIV_300MHZ
/** \brief Macro to configure CPU1DIV at 300MHz target frequency */
#define IFXSCU_CFG_CPU1DIV_300MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU1DIV_300MHZ */

#ifndef IFXSCU_CFG_CPU2DIV_80MHZ
/** \brief Macro to configure CPU2DIV at 80MHz target frequency */
#define IFXSCU_CFG_CPU2DIV_80MHZ            (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU2DIV_80MHZ */

#ifndef IFXSCU_CFG_CPU2DIV_133MHZ
/** \brief Macro to configure CPU2DIV at 133MHz target frequency */
#define IFXSCU_CFG_CPU2DIV_133MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU2DIV_133MHZ */

#ifndef IFXSCU_CFG_CPU2DIV_160MHZ
/** \brief Macro to configure CPU2DIV at 160MHz target frequency */
#define IFXSCU_CFG_CPU2DIV_160MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU2DIV_160MHZ */

#ifndef IFXSCU_CFG_CPU2DIV_200MHZ
/** \brief Macro to configure CPU2DIV at 200MHz target frequency */
#define IFXSCU_CFG_CPU2DIV_200MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU2DIV_200MHZ */

#ifndef IFXSCU_CFG_CPU2DIV_240MHZ
/** \brief Macro to configure CPU2DIV at 240MHz target frequency */
#define IFXSCU_CFG_CPU2DIV_240MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU2DIV_240MHZ */

#ifndef IFXSCU_CFG_CPU2DIV_300MHZ
/** \brief Macro to configure CPU2DIV at 300MHz target frequency */
#define IFXSCU_CFG_CPU2DIV_300MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU2DIV_300MHZ */

#ifndef IFXSCU_CFG_CPU3DIV_80MHZ
/** \brief Macro to configure CPU3DIV at 80MHz target frequency */
#define IFXSCU_CFG_CPU3DIV_80MHZ            (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU3DIV_80MHZ */

#ifndef IFXSCU_CFG_CPU3DIV_133MHZ
/** \brief Macro to configure CPU3DIV at 133MHz target frequency */
#define IFXSCU_CFG_CPU3DIV_133MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU3DIV_133MHZ */

#ifndef IFXSCU_CFG_CPU3DIV_160MHZ
/** \brief Macro to configure CPU3DIV at 160MHz target frequency */
#define IFXSCU_CFG_CPU3DIV_160MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU3DIV_160MHZ */

#ifndef IFXSCU_CFG_CPU3DIV_200MHZ
/** \brief Macro to configure CPU3DIV at 200MHz target frequency */
#define IFXSCU_CFG_CPU3DIV_200MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU3DIV_200MHZ */

#ifndef IFXSCU_CFG_CPU3DIV_240MHZ
/** \brief Macro to configure CPU3DIV at 240MHz target frequency */
#define IFXSCU_CFG_CPU3DIV_240MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU3DIV_240MHZ */

#ifndef IFXSCU_CFG_CPU3DIV_300MHZ
/** \brief Macro to configure CPU3DIV at 300MHz target frequency */
#define IFXSCU_CFG_CPU3DIV_300MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU3DIV_300MHZ */

#ifndef IFXSCU_CFG_CPU4DIV_80MHZ
/** \brief Macro to configure CPU4DIV at 80MHz target frequency */
#define IFXSCU_CFG_CPU4DIV_80MHZ            (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU4DIV_80MHZ */

#ifndef IFXSCU_CFG_CPU4DIV_133MHZ
/** \brief Macro to configure CPU4DIV at 133MHz target frequency */
#define IFXSCU_CFG_CPU4DIV_133MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU4DIV_133MHZ */

#ifndef IFXSCU_CFG_CPU4DIV_160MHZ
/** \brief Macro to configure CPU4DIV at 160MHz target frequency */
#define IFXSCU_CFG_CPU4DIV_160MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU4DIV_160MHZ */

#ifndef IFXSCU_CFG_CPU4DIV_200MHZ
/** \brief Macro to configure CPU4DIV at 200MHz target frequency */
#define IFXSCU_CFG_CPU4DIV_200MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU4DIV_200MHZ */

#ifndef IFXSCU_CFG_CPU4DIV_240MHZ
/** \brief Macro to configure CPU4DIV at 240MHz target frequency */
#define IFXSCU_CFG_CPU4DIV_240MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU4DIV_240MHZ */

#ifndef IFXSCU_CFG_CPU4DIV_300MHZ
/** \brief Macro to configure CPU4DIV at 300MHz target frequency */
#define IFXSCU_CFG_CPU4DIV_300MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU4DIV_300MHZ */

#ifndef IFXSCU_CFG_CPU5DIV_80MHZ
/** \brief Macro to configure CPU5DIV at 80MHz target frequency */
#define IFXSCU_CFG_CPU5DIV_80MHZ            (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU5DIV_80MHZ */

#ifndef IFXSCU_CFG_CPU5DIV_133MHZ
/** \brief Macro to configure CPU5DIV at 133MHz target frequency */
#define IFXSCU_CFG_CPU5DIV_133MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU5DIV_133MHZ */

#ifndef IFXSCU_CFG_CPU5DIV_160MHZ
/** \brief Macro to configure CPU5DIV at 160MHz target frequency */
#define IFXSCU_CFG_CPU5DIV_160MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU5DIV_160MHZ */

#ifndef IFXSCU_CFG_CPU5DIV_200MHZ
/** \brief Macro to configure CPU5DIV at 200MHz target frequency */
#define IFXSCU_CFG_CPU5DIV_200MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU5DIV_200MHZ */

#ifndef IFXSCU_CFG_CPU5DIV_240MHZ
/** \brief Macro to configure CPU5DIV at 240MHz target frequency */
#define IFXSCU_CFG_CPU5DIV_240MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU5DIV_240MHZ */

#ifndef IFXSCU_CFG_CPU5DIV_300MHZ
/** \brief Macro to configure CPU5DIV at 300MHz target frequency */
#define IFXSCU_CFG_CPU5DIV_300MHZ           (0) /*Same as SRIDIV */
#endif /*#ifndef IFXSCU_CFG_CPU5DIV_300MHZ */

// ASCLINF => fsource2
#ifndef IFXSCU_CFG_ASCLINFDIV_320MHZ_200MHZ
/** \brief Macro to configure ASCLINFDIV at 200MHz target frequency */
#define IFXSCU_CFG_ASCLINFDIV_320MHZ_200MHZ (1)
#endif /*#ifndef IFXSCU_CFG_ASCLINFDIV_320MHZ_200MHZ */

#ifndef IFXSCU_CFG_ASCLINFDIV_160MHZ_200MHZ
/** \brief Macro to configure ASCLINFDIV at 200MHz target frequency */
#define IFXSCU_CFG_ASCLINFDIV_160MHZ_200MHZ (1)
#endif /*#ifndef IFXSCU_CFG_ASCLINFDIV_160MHZ_200MHZ */

// ASCLINS => fsource1
#ifndef IFXSCU_CFG_ASCLINSDIV_320MHZ_200MHZ
/** \brief Macro to configure ASCLINSDIV at 320MHz target frequency */
#define IFXSCU_CFG_ASCLINSDIV_320MHZ_200MHZ (4)         /*80MHz */
#endif /*#ifndef IFXSCU_CFG_ASCLINSDIV_320MHZ_200MHZ */

#ifndef IFXSCU_CFG_ASCLINSDIV_160MHZ_200MHZ
/** \brief Macro to configure ASCLINSDIV at 160MHz target frequency */
#define IFXSCU_CFG_ASCLINSDIV_160MHZ_200MHZ (2)         /*80MHz */
#endif /*#ifndef IFXSCU_CFG_ASCLINSDIV_160MHZ_200MHZ */

// MCAN=> fsource1
#ifndef IFXSCU_CFG_MCANDIV_320MHZ_200MHZ
/** \brief Macro to configure CANDIV at 320MHz target frequency */
#define IFXSCU_CFG_MCANDIV_320MHZ_200MHZ    (2)      /* 100MHz */
#endif /*#ifndef IFXSCU_CFG_MCANDIV_320MHZ_200MHZ */

#ifndef IFXSCU_CFG_MCANDIV_160MHZ_200MHZ
/** \brief Macro to configure CANDIV at 160MHz target frequency */
#define IFXSCU_CFG_MCANDIV_160MHZ_200MHZ    (2)      /*100MHz */
#endif /*#ifndef IFXSCU_CFG_MCANDIV_160MHZ_200MHZ */

// fsource1
#ifndef IFXSCU_CFG_MSCDIV_160MHZ_200MHZ
/** \brief Macro to configure CANDIV at 160MHz target frequency */
#define IFXSCU_CFG_MSCDIV_160MHZ_200MHZ     (1)     /*160Mhz*/
#endif /*#ifndef IFXSCU_CFG_MSCDIV_160MHZ_200MHZ */

#ifndef IFXSCU_CFG_MSCDIV_320MHZ_200MHZ
/** \brief Macro to configure CANDIV at 320MHz target frequency */
#define IFXSCU_CFG_MSCDIV_320MHZ_200MHZ     (2)     /*160Mhz */
#endif /*#ifndef IFXSCU_CFG_MSCDIV_320MHZ_200MHZ */

// fsource2
#ifndef IFXSCU_CFG_QSPIDIV_320MHZ_200MHZ
/** \brief Macro to configure QSPIDIV at 200MHz target frequency */
#define IFXSCU_CFG_QSPIDIV_320MHZ_200MHZ    (1)      /*Max: 200MHz */
#endif /*#ifndef IFXSCU_CFG_QSPIDIV_200MHZ */

#ifndef IFXSCU_CFG_QSPIDIV_160MHZ_200MHZ
/** \brief Macro to configure QSPIDIV at 200MHz target frequency */
#define IFXSCU_CFG_QSPIDIV_160MHZ_200MHZ    (1)      /*Max: 200MHz */
#endif /*#ifndef IFXSCU_CFG_QSPIDIV_200MHZ */

// fsource1
#ifndef IFXSCU_CFG_ERAYDIV_160MHZ_200MHZ
/** \brief Macro to configure ERAYDIV at 160MHz target frequency */
#define IFXSCU_CFG_ERAYDIV_160MHZ_200MHZ    (2)     /*Max: 80MHz */
#endif /*#ifndef IFXSCU_CFG_ERAYDIV_160MHZ */

#ifndef IFXSCU_CFG_ERAYDIV_320MHZ_200MHZ
/** \brief Macro to configure ERAYDIV at 320MHz target frequency */
#define IFXSCU_CFG_ERAYDIV_200MHZ_3200MHZ    (4)     /*Max: 80MHz */
#endif /*#ifndef IFXSCU_CFG_ERAYDIV_320MHZ */

#ifndef IFXSCU_CFG_CLKSELMCAN
/** \brief Macro to configure CLKSELMCAN at all target frequency */
#define IFXSCU_CFG_CLKSELMCAN               (1) /*fsource1 */
#endif /*#ifndef IFXSCU_CFG_CLKSELMCAN */

#ifndef IFXSCU_CFG_CLKSELMSC
/** \brief Macro to configure CLKSELMSC at all target frequency */
#define IFXSCU_CFG_CLKSELMSC                (1) /*fsource1 */
#endif /*#ifndef IFXSCU_CFG_CLKSELMSC */

#ifndef IFXSCU_CFG_CLKSELQSPI
/** \brief Macro to configure CLKSELQSPI at all target frequency */
#define IFXSCU_CFG_CLKSELQSPI               (2) /*fsource2 */
#endif /*#ifndef IFXSCU_CFG_CLKSELQSPI */

#ifndef IFXSCU_CFG_CLKSELASCLINS
/** \brief Macro to configure CLKASCLINS at all target frequency */
#define IFXSCU_CFG_CLKSELASCLINS            (1) /*fsource1 */
#endif /*#ifndef IFXSCU_CFG_CLKSELASCLINS */

/** \brief Macros to configure FLASH.FCON register for flash waitstate configuration.
 *  \ref IfxScu_InitialStepConfig
 */

// FIXME To do later
/** \brief Macros to configure FLASH.FCON registers */
#define IFXSCU_CFG_FLASH_WAITSTATE_MSK 0

#define IFXSCU_CFG_FLASH_WAITSTATE_VAL_BASIC_(pll0Freq) 0

#define IFXSCU_CFG_FLASH_WAITSTATE_VAL_BASIC(pll0Freq)  IFXSCU_CFG_FLASH_WAITSTATE_VAL_BASIC_(pll0Freq)

#define IFXSCU_CFG_FLASH_WAITSTATE_VAL IFXSCU_CFG_FLASH_WAITSTATE_VAL_BASIC(IFXSCU_CFG_PLL_FREQ)

/** \brief Macros to configure CCUCON0 Clock distribution */
#define IFXSCU_CFG_CCUCON0_MASK                                      \
    (                                                                \
        (IFX_SCU_CCUCON0_STMDIV_MSK << IFX_SCU_CCUCON0_STMDIV_OFF) | \
        (IFX_SCU_CCUCON0_GTMDIV_MSK << IFX_SCU_CCUCON0_GTMDIV_OFF) | \
        (IFX_SCU_CCUCON0_SRIDIV_MSK << IFX_SCU_CCUCON0_SRIDIV_OFF) | \
        (IFX_SCU_CCUCON0_SPBDIV_MSK << IFX_SCU_CCUCON0_SPBDIV_OFF) | \
        (IFX_SCU_CCUCON0_BBBDIV_MSK << IFX_SCU_CCUCON0_BBBDIV_OFF) | \
        (IFX_SCU_CCUCON0_FSIDIV_MSK << IFX_SCU_CCUCON0_FSIDIV_OFF) | \
        (IFX_SCU_CCUCON0_FSI2DIV_MSK << IFX_SCU_CCUCON0_FSI2DIV_OFF))

#define IFXSCU_CFG_CCUCON0_BASIC_(pll0Freq)                              \
    (uint32)(                                                            \
        (IFXSCU_CFG_STMDIV_##pll0Freq << IFX_SCU_CCUCON0_STMDIV_OFF) |   \
        (IFXSCU_CFG_GTMDIV_##pll0Freq << IFX_SCU_CCUCON0_GTMDIV_OFF) |   \
        (IFXSCU_CFG_SRIDIV_##pll0Freq << IFX_SCU_CCUCON0_SRIDIV_OFF) |   \
        (IFXSCU_CFG_SPBDIV_##pll0Freq << IFX_SCU_CCUCON0_SPBDIV_OFF) |   \
        (IFXSCU_CFG_BBBDIV_##pll0Freq << IFX_SCU_CCUCON0_BBBDIV_OFF) |   \
        (IFXSCU_CFG_FSI2DIV_##pll0Freq << IFX_SCU_CCUCON0_FSI2DIV_OFF) | \
        (IFXSCU_CFG_FSIDIV_##pll0Freq << IFX_SCU_CCUCON0_FSIDIV_OFF))

#define IFXSCU_CFG_CCUCON0_BASIC(pll0Freq) IFXSCU_CFG_CCUCON0_BASIC_(pll0Freq)

#define IFXSCU_CFG_CCUCON0 IFXSCU_CFG_CCUCON0_BASIC(IFXSCU_CFG_PLL_FREQ)

/** \brief Macros to configure CCUCON1 Clock distribution */
#define IFXSCU_CFG_CCUCON1_MASK                                              \
    (                                                                        \
        (IFX_SCU_CCUCON1_MCANDIV_MSK << IFX_SCU_CCUCON1_MCANDIV_OFF) |       \
        (IFX_SCU_CCUCON1_MSCDIV_MSK << IFX_SCU_CCUCON1_MSCDIV_OFF) |         \
        (IFX_SCU_CCUCON1_QSPIDIV_MSK << IFX_SCU_CCUCON1_QSPIDIV_OFF) |       \
        (IFX_SCU_CCUCON1_CLKSELMCAN_MSK << IFX_SCU_CCUCON1_CLKSELMCAN_OFF) | \
        (IFX_SCU_CCUCON1_CLKSELMSC_MSK << IFX_SCU_CCUCON1_CLKSELMSC_OFF) |   \
        (IFX_SCU_CCUCON1_CLKSELQSPI_MSK << IFX_SCU_CCUCON1_CLKSELQSPI_OFF))

#define IFXSCU_CFG_CCUCON1_BASIC_(pll1Freq, pll2Freq)                                 \
    (uint32)(                                                                         \
        (IFXSCU_CFG_MCANDIV_##pll1Freq##_##pll2Freq << IFX_SCU_CCUCON1_MCANDIV_OFF) | \
        (IFXSCU_CFG_MSCDIV_##pll1Freq##_##pll2Freq << IFX_SCU_CCUCON1_MSCDIV_OFF) |   \
        (IFXSCU_CFG_QSPIDIV_##pll1Freq##_##pll2Freq << IFX_SCU_CCUCON1_QSPIDIV_OFF) | \
        (IFXSCU_CFG_CLKSELMCAN << IFX_SCU_CCUCON1_CLKSELMCAN_OFF) |                   \
        (IFXSCU_CFG_CLKSELMSC << IFX_SCU_CCUCON1_CLKSELMSC_OFF) |                     \
        (IFXSCU_CFG_CLKSELQSPI << IFX_SCU_CCUCON1_CLKSELQSPI_OFF))

#define IFXSCU_CFG_CCUCON1_BASIC(pll1Freq, pll2Freq) IFXSCU_CFG_CCUCON1_BASIC_(pll1Freq, pll2Freq)

#define IFXSCU_CFG_CCUCON1 IFXSCU_CFG_CCUCON1_BASIC(IFXSCU_CFG_PLL1_FREQ, IFXSCU_CFG_PLL2_FREQ)

/** \brief Macros to configure CCUCON2 Clock distribution */
#define IFXSCU_CFG_CCUCON2_MASK                                                    \
    (                                                                              \
        (IFX_SCU_CCUCON2_ASCLINFDIV_MSK << IFX_SCU_CCUCON2_ASCLINFDIV_OFF) |       \
        (IFX_SCU_CCUCON2_CLKSELASCLINS_MSK << IFX_SCU_CCUCON2_CLKSELASCLINS_OFF) | \
        (IFX_SCU_CCUCON2_ASCLINSDIV_MSK << IFX_SCU_CCUCON2_ASCLINSDIV_OFF))

#define IFXSCU_CFG_CCUCON2_BASIC_(pll1Freq, pll2Freq)                                       \
    (uint32)(                                                                               \
        (IFXSCU_CFG_ASCLINFDIV_##pll1Freq##_##pll2Freq << IFX_SCU_CCUCON2_ASCLINFDIV_OFF) | \
        (IFXSCU_CFG_CLKSELASCLINS << IFX_SCU_CCUCON2_CLKSELASCLINS_OFF) |                   \
        (IFXSCU_CFG_ASCLINSDIV_##pll1Freq##_##pll2Freq << IFX_SCU_CCUCON2_ASCLINSDIV_OFF))

#define IFXSCU_CFG_CCUCON2_BASIC(pll1Freq, pll2Freq) IFXSCU_CFG_CCUCON2_BASIC_(pll1Freq, pll2Freq)

#define IFXSCU_CFG_CCUCON2 IFXSCU_CFG_CCUCON2_BASIC(IFXSCU_CFG_PLL1_FREQ, IFXSCU_CFG_PLL2_FREQ)

/** \brief Macros to configure CCUCON6 Clock distribution */
#define IFXSCU_CFG_CCUCON6_MASK \
    (                           \
        (IFX_SCU_CCUCON6_CPU0DIV_MSK << IFX_SCU_CCUCON6_CPU0DIV_OFF))

#define IFXSCU_CFG_CCUCON6_BASIC_(pll0Freq) \
    (uint32)(                               \
        (IFXSCU_CFG_CPU0DIV_##pll0Freq << IFX_SCU_CCUCON6_CPU0DIV_OFF))

#define IFXSCU_CFG_CCUCON6_BASIC(pll0Freq) IFXSCU_CFG_CCUCON6_BASIC_(pll0Freq)

#define IFXSCU_CFG_CCUCON6 IFXSCU_CFG_CCUCON6_BASIC(IFXSCU_CFG_PLL_FREQ)

/** \brief Macros to configure CCUCON7 Clock distribution */
#define IFXSCU_CFG_CCUCON7_MASK \
    (                           \
        (IFX_SCU_CCUCON7_CPU1DIV_MSK << IFX_SCU_CCUCON7_CPU1DIV_OFF))

#define IFXSCU_CFG_CCUCON7_BASIC_(pll0Freq) \
    (uint32)(                               \
        (IFXSCU_CFG_CPU1DIV_##pll0Freq << IFX_SCU_CCUCON7_CPU1DIV_OFF))

#define IFXSCU_CFG_CCUCON7_BASIC(pll0Freq) IFXSCU_CFG_CCUCON7_BASIC_(pll0Freq)

#define IFXSCU_CFG_CCUCON7 IFXSCU_CFG_CCUCON7_BASIC(IFXSCU_CFG_PLL_FREQ)

/** \brief Macros to configure CCUCON8 Clock distribution */
#define IFXSCU_CFG_CCUCON8_MASK \
    (                           \
        (IFX_SCU_CCUCON8_CPU2DIV_MSK << IFX_SCU_CCUCON8_CPU2DIV_OFF))

#define IFXSCU_CFG_CCUCON8_BASIC_(pll0Freq) \
    (uint32)(                               \
        (IFXSCU_CFG_CPU2DIV_##pll0Freq << IFX_SCU_CCUCON8_CPU2DIV_OFF))

#define IFXSCU_CFG_CCUCON8_BASIC(pll0Freq) IFXSCU_CFG_CCUCON8_BASIC_(pll0Freq)

#define IFXSCU_CFG_CCUCON8 IFXSCU_CFG_CCUCON8_BASIC(IFXSCU_CFG_PLL_FREQ)

/** \brief Macros to configure CCUCON9 Clock distribution */
#define IFXSCU_CFG_CCUCON9_MASK \
    (                           \
        (IFX_SCU_CCUCON9_CPU3DIV_MSK << IFX_SCU_CCUCON9_CPU3DIV_OFF))

#define IFXSCU_CFG_CCUCON9_BASIC_(pll0Freq) \
    (uint32)(                               \
        (IFXSCU_CFG_CPU3DIV_##pll0Freq << IFX_SCU_CCUCON9_CPU3DIV_OFF))

#define IFXSCU_CFG_CCUCON9_BASIC(pll0Freq) IFXSCU_CFG_CCUCON9_BASIC_(pll0Freq)

#define IFXSCU_CFG_CCUCON9 IFXSCU_CFG_CCUCON9_BASIC(IFXSCU_CFG_PLL_FREQ)

/** \brief Macros to configure CCUCON10 Clock distribution */
#define IFXSCU_CFG_CCUCON10_MASK \
    (                            \
        (IFX_SCU_CCUCON10_CPU4DIV_MSK << IFX_SCU_CCUCON10_CPU4DIV_OFF))

#define IFXSCU_CFG_CCUCON10_BASIC_(pll0Freq) \
    (uint32)(                                \
        (IFXSCU_CFG_CPU4DIV_##pll0Freq << IFX_SCU_CCUCON10_CPU4DIV_OFF))

#define IFXSCU_CFG_CCUCON10_BASIC(pll0Freq) IFXSCU_CFG_CCUCON10_BASIC_(pll0Freq)

#define IFXSCU_CFG_CCUCON10 IFXSCU_CFG_CCUCON10_BASIC(IFXSCU_CFG_PLL_FREQ)

/** \brief Macros to configure CCUCON11 Clock distribution */
#define IFXSCU_CFG_CCUCON11_MASK \
    (                            \
        (IFX_SCU_CCUCON11_CPU5DIV_MSK << IFX_SCU_CCUCON11_CPU5DIV_OFF))

#define IFXSCU_CFG_CCUCON11_BASIC_(pll0Freq) \
    (uint32)(                                \
        (IFXSCU_CFG_CPU5DIV_##pll0Freq << IFX_SCU_CCUCON11_CPU5DIV_OFF))

#define IFXSCU_CFG_CCUCON11_BASIC(pll0Freq) IFXSCU_CFG_CCUCON11_BASIC_(pll0Freq)

#define IFXSCU_CFG_CCUCON11 IFXSCU_CFG_CCUCON11_BASIC(IFXSCU_CFG_PLL_FREQ)

#define IFXSCU_CFG_CLK_DISTRIBUTION                                                              \
    {                                                                                            \
/*	    {	uint32 value,			 uint32 mask					}*/                          \
        {IFXSCU_CFG_CCUCON0, IFXSCU_CFG_CCUCON0_MASK},   /*IfxScuCcu_CcuconRegConfig ccucon0;*/  \
        {IFXSCU_CFG_CCUCON1, IFXSCU_CFG_CCUCON1_MASK},   /*IfxScuCcu_CcuconRegConfig ccucon1;*/  \
        {IFXSCU_CFG_CCUCON2, IFXSCU_CFG_CCUCON2_MASK},   /*IfxScuCcu_CcuconRegConfig ccucon2;*/  \
        {IFXSCU_CFG_CCUCON6, IFXSCU_CFG_CCUCON6_MASK},   /*IfxScuCcu_CcuconRegConfig ccucon6;*/  \
        {IFXSCU_CFG_CCUCON7, IFXSCU_CFG_CCUCON7_MASK},   /*IfxScuCcu_CcuconRegConfig ccucon7;*/  \
        {IFXSCU_CFG_CCUCON8, IFXSCU_CFG_CCUCON8_MASK},   /*IfxScuCcu_CcuconRegConfig ccucon8;*/  \
        {IFXSCU_CFG_CCUCON9, IFXSCU_CFG_CCUCON9_MASK},   /*IfxScuCcu_CcuconRegConfig ccucon9;*/  \
        {IFXSCU_CFG_CCUCON10, IFXSCU_CFG_CCUCON10_MASK}, /*IfxScuCcu_CcuconRegConfig ccucon10;*/ \
        {IFXSCU_CFG_CCUCON11, IFXSCU_CFG_CCUCON11_MASK}  /*IfxScuCcu_CcuconRegConfig ccucon11;*/ \
    }

/*Utility macros for the configuration structure */

#define IFXSCU_CFG_FLASH_WAITSTATE       \
/*	{	uint32 value,			uint32 mask					}*/\
    {IFXSCU_CFG_FLASH_WAITSTATE_VAL, IFXSCU_CFG_FLASH_WAITSTATE_MSK}

#if (IFX_CFG_SCU_XTAL_FREQUENCY == (20000000))
#define IFXSCU_CFG_XTAL_FREQ        20MHZ
#elif (IFX_CFG_SCU_XTAL_FREQUENCY == (40000000))
#define IFXSCU_CFG_XTAL_FREQ        40MHZ
#elif (IFX_CFG_SCU_XTAL_FREQUENCY == (16000000))
#define IFXSCU_CFG_XTAL_FREQ        16MHZ
#elif (IFX_CFG_SCU_XTAL_FREQUENCY == (8000000))
#define IFXSCU_CFG_XTAL_FREQ        8MHZ
#else
#error "Wrong XTAL frequency configuration! check IFX_CFG_SCU_XTAL_FREQUENCY configuration in Ifx_Cfg.h."
#error "AurixPlus Triboard supported crystal frequencies are 16MHz, 20MHz, 25MHz and 40MHz"
#endif

#if (IFX_CFG_SCU_PLL_FREQUENCY == (80000000))
#define IFXSCU_CFG_PLL_FREQ 80MHZ
#elif (IFX_CFG_SCU_PLL_FREQUENCY == (133000000)) && (IFX_CFG_SCU_XTAL_FREQUENCY != (8000000))
#define IFXSCU_CFG_PLL_FREQ 133MHZ
#elif (IFX_CFG_SCU_PLL_FREQUENCY == (160000000))
#define IFXSCU_CFG_PLL_FREQ 160MHZ
#elif (IFX_CFG_SCU_PLL_FREQUENCY == (200000000))
#define IFXSCU_CFG_PLL_FREQ 200MHZ
#elif (IFX_CFG_SCU_PLL_FREQUENCY == (240000000))
#define IFXSCU_CFG_PLL_FREQ 240MHZ
#elif (IFX_CFG_SCU_PLL_FREQUENCY == (300000000))
#define IFXSCU_CFG_PLL_FREQ 300MHZ
#else
#error "Wrong PLL frequency configuration!, check IFX_CFG_SCU_PLL_FREQUENCY configuration in Ifx_Cfg.h."
#error "Supported PLL1 frequencies are 80MHz, 133MHz, 160Mhz, 200MHz, 240Mhz, and 300MHz."
#endif

#if (IFX_CFG_SCU_PLL1_FREQUENCY == (320000000))
#define IFXSCU_CFG_PLL1_FREQ     320MHZ
#elif (IFX_CFG_SCU_PLL1_FREQUENCY == (160000000))
#define IFXSCU_CFG_PLL1_FREQ     160MHZ
#else
#error "Wrong PLL1 frequency configuration!, check IFX_CFG_SCU_PLL1_FREQUENCY configuration in Ifx_Cfg.h."
#error "Supported PLL1 frequencies are 160MHz and 320MHz."
#endif

#if (IFX_CFG_SCU_PLL2_FREQUENCY == (200000000))
#define IFXSCU_CFG_PLL2_FREQ 200MHZ
#else
#error "Wrong PLL2 frequency configuration!, check IFX_CFG_SCU_PLL2_FREQUENCY configuration in Ifx_Cfg.h."
#error "Supported PLL2 frequency is 200MHz."
#endif


/******************************************************************************/
/*---------------------------LBIST Config Macros------------------------------*/
/******************************************************************************/
#ifndef IFXSCULBIST_CFG_POWERTRAINSIGNATURE
#define IFXSCULBIST_CFG_POWERTRAINSIGNATURE (0x9EEA0A9FU)
#endif

#ifndef IFXSCULBIST_CFG_POWERTRAINPATTERN
#define IFXSCULBIST_CFG_POWERTRAINPATTERN   (0x40U)
#endif

#ifndef IFXSCULBIST_CFG_SEED
#define IFXSCULBIST_CFG_SEED                (7)
#endif

#ifndef IFXSCULBIST_CFG_ADASSIGNATURE
#define IFXSCULBIST_CFG_ADASSIGNATURE       (0xC2A1FAF9U)
#endif

#ifndef IFXSCULBIST_CFG_ADASPATTERN
#define IFXSCULBIST_CFG_ADASPATTERN         (0x280U)
#endif

/*                           Enum                                             */
/******************************************************************************/
/** Clock selection  */
typedef enum
{
    IfxScu_CCUCON0_CLKSEL_fBack = 0,
    IfxScu_CCUCON0_CLKSEL_fPll  = 1
} IfxScu_CCUCON0_CLKSEL;

/** Input frequency request control */
typedef enum
{
    IfxScu_WDTCON1_IR_divBy16384 = 0,
    IfxScu_WDTCON1_IR_divBy256   = 1,
    IfxScu_WDTCON1_IR_divBy64    = 2
} IfxScu_WDTCON1_IR;

typedef enum
{
    IfxScu_PMCSR_REQSLP_Run   = 0U, /* 00 Request CPU Run Mode */
    IfxScu_PMCSR_REQSLP_Idle  = 1U, /* 01 Request CPU Idle Mode */
    IfxScu_PMCSR_REQSLP_Sleep = 2U, /* 10 Request CPU System Sleep Mode */
    IfxScu_PMCSR_REQSLP_Stby  = 3U  /* 11 Request System Standby Mode */
} IfxScu_PMCSR_REQSLP;

/******************************************************************************/

#endif /* IFXSCU_CFG_H */
