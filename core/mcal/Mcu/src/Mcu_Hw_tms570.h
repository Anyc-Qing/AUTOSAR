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

#ifndef MCU_HW_TMS570_H_
#define MCU_HW_TMS570_H_

#define FSM_WR_ENA_REG       (*(volatile uint32 *)0xFFF87288U)
#define EEPROM_CONFIG_REG    (*(volatile uint32 *)0xFFF872B8U)

/** @enum systemClockSource
*   @brief Alias names for clock sources
*
*   This enumeration is used to provide alias names for the clock sources:
*     - Oscillator
*     - Pll1
*     - External1
*     - Low Power Oscillator Low
*     - Low Power Oscillator High
*     - PLL2
*     - External2
*     - Synchronous VCLK1
*/
typedef enum systemClockSource
{
    SYS_OSC             = 0x0U,  /**< @brief Alias for oscillator clock Source                */
    SYS_PLL1            = 0x1U,  /**< @brief Alias for Pll1 clock Source                      */
    SYS_EXTERNAL1       = 0x3U,  /**< @brief Alias for external clock Source                  */
    SYS_LPO_LOW         = 0x4U,  /**< @brief Alias for low power oscillator low clock Source  */
    SYS_LPO_HIGH        = 0x5U,  /**< @brief Alias for low power oscillator high clock Source */
    SYS_PLL2            = 0x6U,  /**< @brief Alias for Pll2 clock Source                      */
    SYS_EXTERNAL2       = 0x7U,  /**< @brief Alias for external 2 clock Source                */
    SYS_VCLK            = 0x9U,  /**< @brief Alias for synchronous VCLK1 clock Source         */
    SYS_PLL2_ODCLK_8    = 0xEU,  /**< @brief Alias for PLL2_post_ODCLK/8                      */
    SYS_PLL2_ODCLK_16   = 0xFU   /**< @brief Alias for PLL2_post_ODCLK/8                      */
} systemClockSource_t;

/**
*   @brief  System Base register structure
*/
typedef volatile struct systemBase1
{
    uint32 SYSPC1;                 /**< @brief 0x0000 */
    uint32 SYSPC2;                 /**< @brief 0x0004 */
    uint32 SYSPC3;                 /**< @brief 0x0008 */
    uint32 SYSPC4;                 /**< @brief 0x000C */
    uint32 SYSPC5;                 /**< @brief 0x0010 */
    uint32 SYSPC6;                 /**< @brief 0x0014 */
    uint32 SYSPC7;                 /**< @brief 0x0018 */
    uint32 SYSPC8;                 /**< @brief 0x001C */
    uint32 SYSPC9;                 /**< @brief 0x0020 */
    uint32 SSWPLL1;                /**< @brief 0x0024 */
    uint32 SSWPLL2;                /**< @brief 0x0028 */
    uint32 SSWPLL3;                /**< @brief 0x002C */
    uint32 CSDIS;                  /**< @brief 0x0030 */
    uint32 CSDISSET;               /**< @brief 0x0034 */
    uint32 CSDISCLR;               /**< @brief 0x0038 */
    uint32 CDDIS;                  /**< @brief 0x003C */
    uint32 CDDISSET;               /**< @brief 0x0040 */
    uint32 CDDISCLR;               /**< @brief 0x0044 */
    uint32 GHVSRC;                 /**< @brief 0x0048 */
    uint32 VCLKASRC;               /**< @brief 0x004C */
    uint32 RCLKSRC;                /**< @brief 0x0050 */
    uint32 CSVSTAT;                /**< @brief 0x0054 */
    uint32 MSTGCR;                 /**< @brief 0x0058 */
    uint32 MINITGCR;               /**< @brief 0x005C */
    uint32 MSINENA;                /**< @brief 0x0060 */
    uint32 MSTFAIL;                /**< @brief 0x0064 */
    uint32 MSTCGSTAT;              /**< @brief 0x0068 */
    uint32 MINISTAT;               /**< @brief 0x006C */
    uint32 PLLCTL1;                /**< @brief 0x0070 */
    uint32 PLLCTL2;                /**< @brief 0x0074 */
    uint32 UERFLAG;                /**< @brief 0x0078 */
    uint32 DIEIDL;                 /**< @brief 0x007C */
    uint32 DIEIDH;                 /**< @brief 0x0080 */
    uint32 VRCTL;                  /**< @brief 0x0084 */
    uint32 LPOMONCTL;              /**< @brief 0x0088 */
    uint32 CLKTEST;                /**< @brief 0x008C */
    uint32 DFTCTRLREG1;            /**< @brief 0x0090 */
    uint32 DFTCTRLREG2;            /**< @brief 0x0094 */
    uint32 : 32U;                  /**< @brief 0x0098 */
    uint32 : 32U;                  /**< @brief 0x009C */
    uint32 GPREG1;                 /**< @brief 0x00A0 */
    uint32 BTRMSEL;                /**< @brief 0x00A4 */
    uint32 IMPFASTS;               /**< @brief 0x00A8 */
    uint32 IMPFTADD;               /**< @brief 0x00AC */
    uint32 SSIR1;                  /**< @brief 0x00B0 */
    uint32 SSIR2;                  /**< @brief 0x00B4 */
    uint32 SSIR3;                  /**< @brief 0x00B8 */
    uint32 SSIR4;                  /**< @brief 0x00BC */
    uint32 RAMGCR;                 /**< @brief 0x00C0 */
    uint32 BMMCR1;                 /**< @brief 0x00C4 */
    uint32 BMMCR2;                 /**< @brief 0x00C8 */
    uint32 MMUGCR;                 /**< @brief  0x00CC */
#ifdef _little_endian__
    uint32        : 8U;            /**< @brief 0x00D0 */
    uint32 PENA   : 1U;            /**< @brief 0x00D0 */
    uint32        : 7U;            /**< @brief 0x00D0 */
    uint32 VCLKR  : 4U;            /**< @brief 0x00D0 */
    uint32        : 4U;            /**< @brief 0x00D0 */
    uint32 VCLK2R : 4U;            /**< @brief 0x00D0 */
    uint32        : 4U;            /**< @brief 0x00D0 */
#else
    uint32 CLKCNTL;                /**< @brief Clock Control*/
//    uint32        : 4U;            /**< @brief 0x00D0 */
//    uint32 VCLK2R : 4U;            /**< @brief 0x00D0 */
//    uint32        : 4U;            /**< @brief 0x00D0 */
//    uint32 VCLKR  : 4U;            /**< @brief 0x00D0 */
//    uint32        : 7U;            /**< @brief 0x00D0 */
//    uint32 PENA   : 1U;            /**< @brief 0x00D0 */
//    uint32        : 8U;            /**< @brief 0x00D0 */

#endif
    uint32 : 32U;                  /**< @brief 0x00D4 */
    uint32 DSPGCR;                 /**< @brief 0x00D8 */
    uint32 DEVCR1;                 /**< @brief 0x00DC */
    uint32 SYSECR;                 /**< @brief 0x00E0 */
    uint32 SYSESR;                 /**< @brief 0x00E4 */
    uint32 ITIFLAG;                /**< @brief 0x00E8 */
    uint32 GBLSTAT;                /**< @brief 0x00EC */
    uint32 DEV;                    /**< @brief 0x00F0 */
    uint32 SSIVEC;                 /**< @brief 0x00F4 */
    uint32 SSIF;                   /**< @brief 0x00F8 */
} systemBASE1_t;

/**
*   @brief  System Base 2 register structure
*/
typedef volatile struct systemBase2 {
    uint32 PLLCTL3;                   /**< @brief 0x0000 */
    uint32 : 32U;                     /**< @brief 0x0004 */
    uint32 STCCLKDIV;                 /**< @brief 0x0008 */
    uint32 : 32U;                     /**< @brief 0x000C */
    uint32 : 32U;                     /**< @brief 0x0010 */
    uint32 : 32U;                     /**< @brief 0x0014 */
    uint32 : 32U;                     /**< @brief 0x0018 */
    uint32 : 32U;                     /**< @brief 0x001C */
    uint32 : 32U;                     /**< @brief 0x0020 */
    uint32 ECPCNTL;                   /**< @brief 0x0024 */
    uint32 : 32U;                     /**< @brief 0x0028 */
    uint32 : 32U;                     /**< @brief 0x002C */
    uint32 : 32U;                     /**< @brief 0x0030 */
    uint32 : 32U;                     /**< @brief 0x0034 */
    uint32 : 32U;                     /**< @brief 0x0038 */
    uint32 CLK2CNTRL;                 /**< @brief 0x003C */
    uint32 VCLKACON1;                 /**< @brief 0x0040 */
    uint32 : 32U;                     /**< @brief 0x0044 */
    uint32 : 32U;                     /**< @brief 0x0048 */
    uint32 : 32U;                     /**< @brief 0x004C */
    uint32 : 32U;                     /**< @brief 0x0050 */
    uint32 HCLKCNTL;                  /**< @brief 0x0054 */

} systemBASE2_t;


/** @def systemREG1
*   @brief System Register Frame 1 Pointer
*
*   This pointer is used by the system driver to access the system frame 1 registers.
*/
#define systemREG1 ((systemBASE1_t *)0xFFFFFF00U)

/** @def PRE1
*   @brief Alias name for RTI1CLK PRE clock source
*
*   This is an alias name for the RTI1CLK pre clock source.
*   This can be either:
*     - Oscillator
*     - Pll
*     - 32 kHz Oscillator
*     - External
*     - Low Power Oscillator Low
*     - Low Power Oscillator High
*     - Flexray Pll
*/
#define PRE1 SYS_PLL

/** @def PRE2
*   @brief Alias name for RTI2CLK pre clock source
*
*   This is an alias name for the RTI2CLK pre clock source.
*   This can be either:
*     - Oscillator
*     - Pll
*     - 32 kHz Oscillator
*     - External
*     - Low Power Oscillator Low
*     - Low Power Oscillator High
*     - Flexray Pll
*/
#define PRE2 SYS_PLL

/** @def systemREG2
*   @brief System Register Frame 2 Pointer
*
*   This pointer is used by the system driver to access the system frame 2 registers.
*/
#define systemREG2 ((systemBASE2_t *)0xFFFFE100U)

/**
*   @brief  PCR Register Base Structure
*/
typedef volatile struct pcrBase
{
    uint32 PMPROTSET0;    /**< @brief 0x0000 */
    uint32 PMPROTSET1;    /**< @brief 0x0004 */
    uint32 : 32U;         /**< @brief 0x0008 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x000C , RESERVED*/
    uint32 PMPROTCLR0;    /**< @brief 0x0010 */
    uint32 PMPROTCLR1;    /**< @brief 0x0014 */
    uint32 : 32U;         /**< @brief 0x0018 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x001C , RESERVED*/
    uint32 PPROTSET0;     /**< @brief 0x0020 */
    uint32 PPROTSET1;     /**< @brief 0x0024 */
    uint32 PPROTSET2;     /**< @brief 0x0028 */
    uint32 PPROTSET3;     /**< @brief 0x002C */
    uint32 : 32U;         /**< @brief 0x0030 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x0034 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x0038 , RESERVED*/
    uint32 CLK2CNTRL;     /**< @brief 0x003C */
    uint32 PPROTCLR0;     /**< @brief 0x0040 */
    uint32 PPROTCLR1;     /**< @brief 0x0044 */
    uint32 PPROTCLR2;     /**< @brief 0x0048 */
    uint32 PPROTCLR3;     /**< @brief 0x004C */
    uint32 : 32U;         /**< @brief 0x0050 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x0054 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x0058 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x005C , RESERVED*/
    uint32 PCSPWRDWNSET0; /**< @brief 0x0060 */
    uint32 PCSPWRDWNSET1; /**< @brief 0x0064 */
    uint32 : 32U;         /**< @brief 0x0068 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x006C , RESERVED*/
    uint32 PCSPWRDWNCLR0; /**< @brief 0x0070 */
    uint32 PCSPWRDWNCLR1; /**< @brief 0x0074 */
    uint32 : 32U;         /**< @brief 0x0078 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x007C , RESERVED*/
    uint32 PSPWRDWNSET0;  /**< @brief 0x0080 */
    uint32 PSPWRDWNSET1;  /**< @brief 0x0084 */
    uint32 PSPWRDWNSET2;  /**< @brief 0x0088 */
    uint32 PSPWRDWNSET3;  /**< @brief 0x008C */
    uint32 : 32U;         /**< @brief 0x0090 , RESERVED */
    uint32 : 32U;         /**< @brief 0x0094 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x0098 , RESERVED*/
    uint32 : 32U;         /**< @brief 0x009C , RESERVED*/
    uint32 PSPWRDWNCLR0;  /**< @brief 0x00A0 */
    uint32 PSPWRDWNCLR1;  /**< @brief 0x00A4 */
    uint32 PSPWRDWNCLR2;  /**< @brief 0x00A8 */
    uint32 PSPWRDWNCLR3;  /**< @brief 0x00AC */
} pcrBASE_t;


#if defined(CFG_TMS570LS12X)
/** @def pcrREG
*   @brief Pcr Register Frame Pointer
*
*   This pointer is used by the system driver to access the Pcr registers.
*/
#define pcrREG ((pcrBASE_t *)0xFFFFE000U)

#elif defined(CFG_TMS570LC43X)

/** @def pcrREG1
*   @brief Pcr1 Register Frame Pointer
*
*   This pointer is used by the system driver to access the Pcr1 registers.
*/
#define pcrREG1 ((pcrBASE_t *)0xFFFF1000U)

/** @def pcrREG2
*   @brief Pcr2 Register Frame Pointer
*
*   This pointer is used by the system driver to access the Pcr2 registers.
*/
#define pcrREG2 ((pcrBASE_t *)0xFCFF1000U)

/** @def pcrREG3
*   @brief Pcr3 Register Frame Pointer
*
*   This pointer is used by the system driver to access the Pcr3 registers.
*/
#define pcrREG3 ((pcrBASE_t *)0xFFF78000U)
#else
#error MCU not defined
#endif

/** @def IOMM_BASE_ADDR
*   @brief Base address of the I/O Multiplexing Module
*/
#define IOMM_BASE_ADDR  0xFFFF1C00u

/**
*   @brief  Flash Register Structure
*/

typedef volatile struct flashControl {
    uint32 FRDCNTL;           /**< @brief 0x000 */
    uint32 :32;               /**< @brief 0x004 */
    uint32 :32;               /**< @brief 0x008 */
    uint32 :32;               /**< @brief 0x00c */
    uint32 :32;               /**< @brief 0x010 */
    uint32 FEDAC_PASTATUS;    /**< @brief 0x014 */
    uint32 FEDAC_PBSTATUS;    /**< @brief 0x018 */
    uint32 FEDAC_GBLSTATUS;   /**< @brief 0x01c */
    uint32 :32;               /**< @brief 0x020 */
    uint32 FEDACSDIS;         /**< @brief 0x024 */
    /* ... */
    uint32 res[(0x400-0x28)/4]; /**< @brief Reserved*/
    /* ... */
    uint32 FCFG_BANK;         /**< @brief 0x400 */
} Flash_RegisterType;

/**
*   @brief Flash Register Base Address
*/
#define flashREG ((Flash_RegisterType *)0xFFF87000uL)

/**
*   @brief  POM Region Register Structure
*/
typedef volatile struct pomRegion {
    uint32 PROMPROGSTART; /**< @brief PROM Program Start */
    uint32 POMOVLSTART;   /**< @brief POM VL Start */
    uint32 POMREGSIZE;    /**< @brief POM Register Size */
    uint32 :32;           /**< @brief Reserved*/
} POM_RegionT;

/**
*   @brief  POM Control Register Structure
*/
typedef volatile struct pomControl {
    uint32 POMGLBCTRL;          /**< @brief 0x000 */
    uint32 POM_REVID;           /**< @brief 0x004 */
    uint32 :32;                 /**< @brief Reserved*/
    uint32 POMFLG;              /**< @brief 0x00c */
    uint32 res[(0x200-0x10)/4]; /**< @brief Reserved*/
    POM_RegionT region[32];     /**< @brief POM Region */
} POM_RegisterType;

/**
*   @brief Pom Register Base Address
*/
#define pomREG ((POM_RegisterType *)0xFFA04000uL)

/**
*   @brief  PMM Control Register Structure
*/
typedef volatile struct PMMRegs {
    uint32 LOGICPDPWRCTRL0;   /**< @brief 0x0, Logic Power Domain Control Register 0 */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 :32; 			  /**< @brief Reserved Register */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 MEMPDPWRCTRL0;     /**< @brief 0x10, */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 PDCLKDIS;          /**< @brief 0x20, Power Domain Clock Disable Register */
    uint32 PDCLKDISSET;       /**< @brief 0x24, Power Domain Clock Disable Set Register */
    uint32 PDCLKDISCLR;       /**< @brief 0x28, Power Domain Clock Disable Clear Register */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 :32;				  /**< @brief Reserved Register */
    uint32 LOGICPDPWRSTAT0;   /**< @brief 0x40, Logic Power Domain PD2 Power Status Register */
    uint32 LOGICPDPWRSTAT1;   /**< @brief 0x44, Logic Power Domain PD3 Power Status Register */
    uint32 LOGICPDPWRSTAT2;   /**< @brief 0x48, Logic Power Domain PD4 Power Status Register */
    uint32 LOGICPDPWRSTAT3;   /**< @brief 0x4c, Logic Power Domain PD5 Power Status Register */
    /* .. */
} PMM_RegisterType;

/**
*   @brief PMM Register Base Address
*/
#define pmmREG  ((PMM_RegisterType *)0xFFFF0000UL)

/* Flash Register Frame Definition */
/** @struct flashWBase
*   @brief Flash Wrapper Register Frame Definition
*
*   This type is used to access the Flash Wrapper Registers.
*/
/** @typedef flashWBASE_t
*   @brief Flash Wrapper Register Frame Type Definition
*
*   This type is used to access the Flash Wrapper Registers.
*/
typedef volatile struct flashWBase
{
    uint32 FRDCNTL;         /**< @brief 0x0000 */
    uint32 rsvd1;           /**< @brief 0x0004 */
    uint32 EE_FEDACCTRL1;   /**< @brief 0x0008 */
    uint32 rsvd2;           /**< @brief 0x000C */
    uint32 rsvd3;           /**< @brief 0x0010 */
    uint32 FEDAC_PASTATUS;  /**< @brief 0x0014 */
    uint32 FEDAC_PBSTATUS;  /**< @brief 0x0018 */
    uint32 FEDAC_GBLSTATUS; /**< @brief 0x001C */
    uint32 rsvd4;           /**< @brief 0x0020 */
    uint32 FEDACSDIS;       /**< @brief 0x0024 */
    uint32 FPRIM_ADD_TAG;   /**< @brief 0x0028 */
    uint32 FDUP_ADD_TAG;    /**< @brief 0x002C */
    uint32 FBPROT;          /**< @brief 0x0030 */
    uint32 FBSE;            /**< @brief 0x0034 */
    uint32 FBBUSY;          /**< @brief 0x0038 */
    uint32 FBAC;            /**< @brief 0x003C */
    uint32 FBPWRMODE;       /**< @brief 0x0040 */
    uint32 FBPRDY;          /**< @brief 0x0044 */
    uint32 FPAC1;           /**< @brief 0x0048 */
    uint32 rsvd5;           /**< @brief 0x004C */
    uint32 FMAC;            /**< @brief 0x0050 */
    uint32 FMSTAT;          /**< @brief 0x0054 */
    uint32 FEMU_DMSW;       /**< @brief 0x0058 */
    uint32 FEMU_DLSW;       /**< @brief 0x005C */
    uint32 FEMU_ECC;        /**< @brief 0x0060 */
    uint32 FLOCK;           /**< @brief 0x0064 */
    uint32 rsvd6;           /**< @brief 0x0068 */
    uint32 FDIAGCTRL;       /**< @brief 0x006C */
    uint32 rsvd7;           /**< @brief 0x0070 */
    uint32 FRAW_ADDR;       /**< @brief 0x0074 */
    uint32 rsvd8;           /**< @brief 0x0078 */
    uint32 FPAR_OVR;        /**< @brief 0x007C */
    uint32 rsvd9[13U];      /**< @brief 0x0080 - 0x00B0 */
    uint32 RCR_VALID;       /**< @brief 0x00B4 */
    uint32 ACC_THRESHOLD;   /**< @brief 0x00B8 */
    uint32 rsvd10;          /**< @brief 0x00BC */
    uint32 FEDACSDIS2;      /**< @brief 0x00C0 */
    uint32 rsvd11;          /**< @brief 0x00C4 */
    uint32 rsvd12;          /**< @brief 0x00C8 */
    uint32 rsvd13;          /**< @brief 0x00CC */
    uint32 RCR_VALUE0;      /**< @brief 0x00D0 */
    uint32 RCR_VALUE1;      /**< @brief 0x00D4 */
    uint32 rsvd14[108U];    /**< @brief 0x00D8 - 0x00284 */
    uint32 FSM_WR_ENA;      /**< @brief 0x0288 */
    uint32 rsvd15[11U];     /**< @brief 0x028C - 0x002B4 */
    uint32 EEPROM_CONFIG;   /**< @brief 0x02B8 */
    uint32 rsvd16;          /**< @brief 0x02BC */
    uint32 FSM_SECTOR1;     /**< @brief 0x02C0 */
    uint32 FSM_SECTOR2;     /**< @brief 0x02C4 */
    uint32 rsvd17[78U];     /**< @brief 0x02C8 - 0x03FC*/
    uint32 FCFG_BANK;       /**< @brief 0x0400 */
} flashWBASE_t;

/** @def flashWREG
*   @brief Flash Wrapper Register Frame Pointer
*
*   This pointer is used by the system driver to access the flash wrapper registers.
*/
#define flashWREG ((flashWBASE_t *)(0xFFF87000U))

#define FSM_WR_ENA_HL       (*(volatile uint32 *)0xFFF87288U) /**< @brief FSM Write Enable Base Address */
#define EEPROM_CONFIG_HL    (*(volatile uint32 *)0xFFF872B8U) /**< @brief EEPROM Configuration Base Address */
#define FSM_SECTOR1         (*(volatile uint32 *)0xFFF872C0U) /**< @brief FSM Sector 1 Base Address */

/** @enum flashWPowerModes
*   @brief Alias names for flash bank power modes
*
*   This enumeration is used to provide alias names for the flash bank power modes:
*     - sleep
*     - standby
*     - active
*/
enum flashWPowerModes
{
    SYS_SLEEP   = 0U, /**< @brief Alias for flash bank power mode sleep   */
    SYS_STANDBY = 1U, /**< @brief Alias for flash bank power mode standby */
    SYS_ACTIVE  = 3U  /**< @brief Alias for flash bank power mode active  */
};

#endif /* MCU_HW_TMS570_H_ */
