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
 * hw_tms570.h
 *
 *  Created on: Jan 16, 2017
 *      Author: mahi
 */

#ifndef HW_TMS570_H_
#define HW_TMS570_H_

#define EXCEPTION_PREFETCH_ABORT     0x00uL
#define EXCEPTION_DATA_ABORT         0x01uL

#define     __I     volatile const            /*!< defines 'read only' permissions      */
#define     __O     volatile                  /*!< defines 'write only' permissions     */
#define     __IO    volatile                  /*!< defines 'read / write' permissions   */

#define FSM_WR_ENA_REG       (*(volatile uint32 *)0xFFF87288U)
#define EEPROM_CONFIG_REG    (*(volatile uint32 *)0xFFF872B8U)

#define RTIGCTRL_CANT1EN        2uL
#define RTIGCTRL_CANT0EN        1uL

typedef volatile struct vimBase
{
    uint32              : 24U;    /* 0x0000        */
    uint32      IRQINDEX :  8U;    /* 0x0000        */
    uint32              : 24U;    /* 0x0004        */
    uint32      FIQINDEX :  8U;    /* 0x0004        */
    uint32      : 32U;            /* 0x0008        */
    uint32      : 32U;            /* 0x000C        */
    uint32      FIRQPR0;          /* 0x0010        */
    uint32      FIRQPR1;          /* 0x0014        */
    uint32      FIRQPR2;          /* 0x0018        */
    uint32      FIRQPR3;          /* 0x001C        */
    uint32      INTREQ0;          /* 0x0020        */
    uint32      INTREQ1;          /* 0x0024        */
    uint32      INTREQ2;          /* 0x0028        */
    uint32      INTREQ3;          /* 0x002C        */
    uint32      REQENASET0;      /* 0x0030        */
    uint32      REQENASET1;      /* 0x0034        */
    uint32      REQENASET2;      /* 0x0038        */
    uint32      REQENASET3;      /* 0x003C        */
    uint32      REQENACLR0;      /* 0x0040        */
    uint32      REQENACLR1;      /* 0x0044        */
    uint32      REQENACLR2;      /* 0x0048        */
    uint32      REQENACLR3;      /* 0x004C        */
    uint32      WAKEMASKSET0;     /* 0x0050        */
    uint32      WAKEMASKSET1;     /* 0x0054        */
    uint32      WAKEMASKSET2;     /* 0x0058        */
    uint32      WAKEMASKSET3;     /* 0x005C        */
    uint32      WAKEMASKCLR0;     /* 0x0060        */
    uint32      WAKEMASKCLR1;     /* 0x0064        */
    uint32      WAKEMASKCLR2;     /* 0x0068        */
    uint32      WAKEMASKCLR3;     /* 0x006C        */
    uint32      IRQVECREG;        /* 0x0070        */
    uint32      FIQVECREQ;        /* 0x0074        */
    uint32                 :  9U; /* 0x0078        */
    uint32      CAPEVTSRC1 :  7U; /* 0x0078        */
    uint32                 :  9U; /* 0x0078        */
    uint32      CAPEVTSRC0 :  7U; /* 0x0078        */
    uint32      : 32U;            /* 0x007C        */
    uint8 CHANMAP[64U];     /* 0x0080-0x017C */
} vimBASE_t;

#define vimREG ((vimBASE_t *)0xFFFFFE00U)



typedef volatile struct rtiBase
{
    uint32 GCTRL;          /**< 0x0000: Global Control Register   */
    uint32 TBCTRL;         /**< 0x0004: Timebase Control Register */
    uint32 CAPCTRL;        /**< 0x0008: Capture Control Register  */
    uint32 COMPCTRL;       /**< 0x000C: Compare Control Register  */
    struct
    {
        uint32 FRCx;       /**< 0x0010,0x0030: Free Running Counter x Register         */
        uint32 UCx;        /**< 0x0014,0x0034: Up Counter x Register                   */
        uint32 CPUCx;      /**< 0x0018,0x0038: Compare Up Counter x Register           */
        uint32 : 32;       /**< 0x001C,0x003C: Reserved                                */
        uint32 CAFRCx;     /**< 0x0020,0x0040: Capture Free Running Counter x Register */
        uint32 CAUCx;      /**< 0x0024,0x0044: Capture Up Counter x Register           */
        uint32 : 32;       /**< 0x0028,0x0048: Reserved                                */
        uint32 : 32;       /**< 0x002C,0x004C: Reserved                                */
    } CNT[2U];               /**< Counter x selection:
                                    - 0: Counter 0
                                    - 1: Counter 1                                       */
    struct
    {
        uint32 COMPx;      /**< 0x0050,0x0058,0x0060,0x0068: Compare x Register        */
        uint32 UDCPx;      /**< 0x0054,0x005C,0x0064,0x006C: Update Compare x Register */
    } CMP[4U];               /**< Compare x selection:
                                    - 0: Compare 0
                                    - 1: Compare 1
                                    - 2: Compare 2
                                    - 3: Compare 3                                       */
    uint32 TBLCOMP;        /**< 0x0070: External Clock Timebase Low Compare Register   */
    uint32 TBHCOMP;        /**< 0x0074: External Clock Timebase High Compare Register  */
    uint32 : 32;           /**< 0x0078: Reserved                                       */
    uint32 : 32;           /**< 0x007C: Reserved                                       */
    uint32 SETINT;         /**< 0x0080: Set/Status Interrupt Register                  */
    uint32 CLEARINT;       /**< 0x0084: Clear/Status Interrupt Register                */
    uint32 INTFLAG;        /**< 0x008C: Interrupt Flag Register                        */
} rtiBASE_t;

/** @def rtiREG1
*   @brief RTI1 Register Frame Pointer
*
*   This pointer is used by the RTI driver to access the RTI1 registers.
*/
#define rtiREG1 ((rtiBASE_t *)0xFFFFFC00uL)


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
    SYS_OSC             = 0x0U,  /**< Alias for oscillator clock Source                */
    SYS_PLL1            = 0x1U,  /**< Alias for Pll1 clock Source                      */
    SYS_EXTERNAL1       = 0x3U,  /**< Alias for external clock Source                  */
    SYS_LPO_LOW         = 0x4U,  /**< Alias for low power oscillator low clock Source  */
    SYS_LPO_HIGH        = 0x5U,  /**< Alias for low power oscillator high clock Source */
    SYS_PLL2            = 0x6U,  /**< Alias for Pll2 clock Source                      */
    SYS_EXTERNAL2       = 0x7U,  /**< Alias for external 2 clock Source                */
    SYS_VCLK            = 0x9U,  /**< Alias for synchronous VCLK1 clock Source         */
    SYS_PLL2_ODCLK_8    = 0xEU,  /**< Alias for PLL2_post_ODCLK/8                      */
    SYS_PLL2_ODCLK_16   = 0xFU   /**< Alias for PLL2_post_ODCLK/8                      */
} systemClockSource_t;

typedef volatile struct systemBase1
{
    uint32 SYSPC1;                 /* 0x0000 */
    uint32 SYSPC2;                 /* 0x0004 */
    uint32 SYSPC3;                 /* 0x0008 */
    uint32 SYSPC4;                 /* 0x000C */
    uint32 SYSPC5;                 /* 0x0010 */
    uint32 SYSPC6;                 /* 0x0014 */
    uint32 SYSPC7;                 /* 0x0018 */
    uint32 SYSPC8;                 /* 0x001C */
    uint32 SYSPC9;                 /* 0x0020 */
    uint32 SSWPLL1;                /* 0x0024 */
    uint32 SSWPLL2;                /* 0x0028 */
    uint32 SSWPLL3;                /* 0x002C */
    uint32 CSDIS;                  /* 0x0030 */
    uint32 CSDISSET;               /* 0x0034 */
    uint32 CSDISCLR;               /* 0x0038 */
    uint32 CDDIS;                  /* 0x003C */
    uint32 CDDISSET;              /* 0x0040 */
    uint32 CDDISCLR;              /* 0x0044 */
    uint32 GHVSRC;                 /* 0x0048 */
    uint32 VCLKASRC;               /* 0x004C */
    uint32 RCLKSRC;                /* 0x0050 */
    uint32 CSVSTAT;                /* 0x0054 */
    uint32 MSTGCR;                 /* 0x0058 */
    uint32 MINITGCR;               /* 0x005C */
    uint32 MSINENA;                /* 0x0060 */
    uint32 MSTFAIL;                /* 0x0064 */
    uint32 MSTCGSTAT;              /* 0x0068 */
    uint32 MINISTAT;               /* 0x006C */
    uint32 PLLCTL1;                /* 0x0070 */
    uint32 PLLCTL2;                /* 0x0074 */
    uint32 UERFLAG;                /* 0x0078 */
    uint32 DIEIDL;                 /* 0x007C */
    uint32 DIEIDH;                 /* 0x0080 */
    uint32 VRCTL;                  /* 0x0084 */
    uint32 LPOMONCTL;              /* 0x0088 */
    uint32 CLKTEST;                /* 0x008C */
    uint32 DFTCTRLREG1;            /* 0x0090 */
    uint32 DFTCTRLREG2;            /* 0x0094 */
    uint32 : 32U;                  /* 0x0098 */
    uint32 : 32U;                  /* 0x009C */
    uint32 GPREG1;                 /* 0x00A0 */
    uint32 BTRMSEL;                /* 0x00A4 */
    uint32 IMPFASTS;               /* 0x00A8 */
    uint32 IMPFTADD;               /* 0x00AC */
    uint32 SSIR1;                 /* 0x00B0 */
    uint32 SSIR2;                 /* 0x00B4 */
    uint32 SSIR3;                 /* 0x00B8 */
    uint32 SSIR4;                 /* 0x00BC */
    uint32 RAMGCR;                 /* 0x00C0 */
    uint32 BMMCR1;                 /* 0x00C4 */
    uint32 BMMCR2;                 /* 0x00C8 */
    uint32 MMUGCR;                 /* 0x00CC */
#ifdef _little_endian__
    uint32        : 8U;            /* 0x00D0 */
    uint32 PENA   : 1U;            /* 0x00D0 */
    uint32        : 7U;            /* 0x00D0 */
    uint32 VCLKR  : 4U;            /* 0x00D0 */
    uint32        : 4U;            /* 0x00D0 */
    uint32 VCLK2R : 4U;            /* 0x00D0 */
    uint32        : 4U;            /* 0x00D0 */
#else
    uint32 CLKCNTL;
//    uint32        : 4U;            /* 0x00D0 */
//    uint32 VCLK2R : 4U;            /* 0x00D0 */
//    uint32        : 4U;            /* 0x00D0 */
//    uint32 VCLKR  : 4U;            /* 0x00D0 */
//    uint32        : 7U;            /* 0x00D0 */
//    uint32 PENA   : 1U;            /* 0x00D0 */
//    uint32        : 8U;            /* 0x00D0 */

#endif
    uint32 : 32U;                  /* 0x00D4 */
    uint32 DSPGCR;                 /* 0x00D8 */
    uint32 DEVCR1;                 /* 0x00DC */
    uint32 SYSECR;                 /* 0x00E0 */
    uint32 SYSESR;                 /* 0x00E4 */
    uint32 ITIFLAG;                /* 0x00E8 */
    uint32 GBLSTAT;                /* 0x00EC */
    uint32 DEV;                    /* 0x00F0 */
    uint32 SSIVEC;                 /* 0x00F4 */
    uint32 SSIF;                   /* 0x00F8 */
} systemBASE1_t;

typedef volatile struct systemBase2 {
    uint32 PLLCTL3;                   /* 0x0000 */
    uint32 : 32U;                     /* 0x0004 */
    uint32 STCCLKDIV;                 /* 0x0008 */
    uint32 : 32U;                     /* 0x000C */
    uint32 : 32U;                     /* 0x0010 */
    uint32 : 32U;                     /* 0x0014 */
    uint32 : 32U;                     /* 0x0018 */
    uint32 : 32U;                     /* 0x001C */
    uint32 : 32U;                     /* 0x0020 */
    uint32 ECPCNTL;                   /* 0x0024 */
    uint32 : 32U;                     /* 0x0028 */
    uint32 : 32U;                     /* 0x002C */
    uint32 : 32U;                     /* 0x0030 */
    uint32 : 32U;                     /* 0x0034 */
    uint32 : 32U;                     /* 0x0038 */
    uint32 CLK2CNTRL;                 /* 0x003C */
    uint32 VCLKACON1;                 /* 0x0040 */
    uint32 : 32U;                     /* 0x0044 */
    uint32 : 32U;                     /* 0x0048 */
    uint32 : 32U;                     /* 0x004C */
    uint32 : 32U;                     /* 0x0050 */
    uint32 HCLKCNTL;                  /* 0x0054 */

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

typedef volatile struct pcrBase
{
    uint32 PMPROTSET0;    /* 0x0000 */
    uint32 PMPROTSET1;    /* 0x0004 */
    uint32 : 32U;         /* 0x0008 */
    uint32 : 32U;         /* 0x000C */
    uint32 PMPROTCLR0;    /* 0x0010 */
    uint32 PMPROTCLR1;    /* 0x0014 */
    uint32 : 32U;         /* 0x0018 */
    uint32 : 32U;         /* 0x001C */
    uint32 PPROTSET0;     /* 0x0020 */
    uint32 PPROTSET1;     /* 0x0024 */
    uint32 PPROTSET2;     /* 0x0028 */
    uint32 PPROTSET3;     /* 0x002C */
    uint32 : 32U;         /* 0x0030 */
    uint32 : 32U;         /* 0x0034 */
    uint32 : 32U;         /* 0x0038 */
    uint32 CLK2CNTRL;     /* 0x003C */
    uint32 PPROTCLR0;     /* 0x0040 */
    uint32 PPROTCLR1;     /* 0x0044 */
    uint32 PPROTCLR2;     /* 0x0048 */
    uint32 PPROTCLR3;     /* 0x004C */
    uint32 : 32U;         /* 0x0050 */
    uint32 : 32U;         /* 0x0054 */
    uint32 : 32U;         /* 0x0058 */
    uint32 : 32U;         /* 0x005C */
    uint32 PCSPWRDWNSET0; /* 0x0060 */
    uint32 PCSPWRDWNSET1; /* 0x0064 */
    uint32 : 32U;         /* 0x0068 */
    uint32 : 32U;         /* 0x006C */
    uint32 PCSPWRDWNCLR0; /* 0x0070 */
    uint32 PCSPWRDWNCLR1; /* 0x0074 */
    uint32 : 32U;         /* 0x0078 */
    uint32 : 32U;         /* 0x007C */
    uint32 PSPWRDWNSET0;  /* 0x0080 */
    uint32 PSPWRDWNSET1;  /* 0x0084 */
    uint32 PSPWRDWNSET2;  /* 0x0088 */
    uint32 PSPWRDWNSET3;  /* 0x008C */
    uint32 : 32U;         /* 0x0090 */
    uint32 : 32U;         /* 0x0094 */
    uint32 : 32U;         /* 0x0098 */
    uint32 : 32U;         /* 0x009C */
    uint32 PSPWRDWNCLR0;  /* 0x00A0 */
    uint32 PSPWRDWNCLR1;  /* 0x00A4 */
    uint32 PSPWRDWNCLR2;  /* 0x00A8 */
    uint32 PSPWRDWNCLR3;  /* 0x00AC */
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



/*----------------------------------------------------------------------------*/
/* CAN register definition                                                    */

#define CAN_REG_BTR_BRP_MASK                0x3Fu
#define CAN_REG_BTR_BRPE_MASK               0x3C0u
#define CAN_REG_BTR_BRPE_RSHIFT             6u

#define CAN_REG_BTR_BRPE_OFFSET             16u
#define CAN_REG_BTR_SJW_OFFSET              6u
#define CAN_REG_BTR_TSEG1_OFFSET            8u
#define CAN_REG_BTR_TSEG2_OFFSET            12u

#define CAN_REG_IR_INT0ID_MASK              0x0000FFFFuL
#define CAN_REG_IR_BUSEVENT                 0x8000uL
#define CAN_REG_IR_INT0ID_MSG_MASK          0x000000FFuL


#define DCAN_CMD_BUSY       (1UL<<15u)

typedef volatile struct
{
    uint32   CTL;           /* 0x000 */
    uint32   SR;            /* 0x004 */
    uint32     : 16;      /* 0x008 */
    uint32 REC :  8;
    uint32 TEC :  8;
    uint32   BTR;           /* 0x00c */
    uint32   INT;           /* 0x010 */
    uint32   TR;            /* 0x014 */
    uint32 : 32;          /* 0x018 */
    uint32   PEC;           /* 0x01c */
    uint32 : 32;          /* 0x020 */
    uint32 : 32;          /* 0x024 */
    uint32 : 32;          /* 0x028 */
    uint32 : 32;          /* 0x02c */
    uint32 : 32;          /* 0x030 */
    uint32 : 32;          /* 0x034 */
    uint32 : 32;          /* 0x038 */
    uint32 : 32;          /* 0x03c */
    uint32 : 32;          /* 0x040 */
    uint32 : 32;          /* 0x044 */
    uint32 : 32;          /* 0x048 */
    uint32 : 32;          /* 0x04c */
    uint32 : 32;          /* 0x050 */
    uint32 : 32;          /* 0x054 */
    uint32 : 32;          /* 0x058 */
    uint32 : 32;          /* 0x05c */
    uint32 : 32;          /* 0x060 */
    uint32 : 32;          /* 0x064 */
    uint32 : 32;          /* 0x068 */
    uint32 : 32;          /* 0x06c */
    uint32 : 32;          /* 0x070 */
    uint32 : 32;          /* 0x074 */
    uint32 : 32;          /* 0x078 */
    uint32 : 32;          /* 0x07c */
    uint32   ABOT;          /* 0x080 */
    uint32   TXRQX;         /* 0x084 */
    uint32   TRx[4];        /* 0x088 -- 0x094 */
    uint32   NWDATX;        /* 0x098 */
    uint32   NWDATXx[4];    /* 0x09c -- 0x0a8 */
    uint32   INTPNDX;       /* 0x0ac */
    uint32   INTPNDXx[4];
    uint32   MSGVALX;
    uint32   MSGVALXx[4];
    uint32 : 32;
    uint32   IPMx[4];
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    struct
    {
        uint32   CMD;
        uint32   MASK;
        uint32   ARB;
        uint32   MCTL;
        uint8    DATx[8];
        uint32 : 32;
        uint32 : 32;
    } IFx[3];
    uint32   IF3UEy[4];
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32 : 32;
    uint32   IOTX;
    uint32   IORX;
} Can_RegisterType;


#define DCAN1_Base ((Can_RegisterType *)0xFFF7DC00uL)
#define DCAN2_Base ((Can_RegisterType *)0xFFF7DE00uL)
#define DCAN3_Base ((Can_RegisterType *)0xFFF7E000uL)




/** @def IOMM_BASE_ADDR
*   @brief Base address of the I/O Multiplexing Module
*/
#define IOMM_BASE_ADDR  0xFFFF1C00u



typedef volatile struct flashControl {
    uint32 FRDCNTL;           /* 0x000 */
    uint32 :32;               /* 0x004 */
    uint32 :32;               /* 0x008 */
    uint32 :32;               /* 0x00c */
    uint32 :32;               /* 0x010 */
    uint32 FEDAC_PASTATUS;    /* 0x014 */
    uint32 FEDAC_PBSTATUS;    /* 0x018 */
    uint32 FEDAC_GBLSTATUS;   /* 0x01c */
    uint32 :32;               /* 0x020 */
    uint32 FEDACSDIS;         /* 0x024 */
    /* ... */
    uint32 res[(0x400-0x28)/4];
    /* ... */
    uint32 FCFG_BANK;         /* 0x400 */
} Flash_RegisterType;

#define flashREG ((Flash_RegisterType *)0xFFF87000uL)

typedef volatile struct pomRegion {
    uint32 PROMPROGSTART;
    uint32 POMOVLSTART;
    uint32 POMREGSIZE;
    uint32 :32;
} POM_RegionT;


typedef volatile struct pomControl {
    uint32 POMGLBCTRL;     /* 0x000 */
    uint32 POM_REVID;      /* 0x004 */
    uint32 :32;
    uint32 POMFLG;         /* 0x00c */
    uint32 res[(0x200-0x10)/4];
    POM_RegionT region[32];
} POM_RegisterType;

#define pomREG ((POM_RegisterType *)0xFFA04000uL)

typedef volatile struct PMMRegs {
    uint32 LOGICPDPWRCTRL0;   /* 0x0, Logic Power Domain Control Register 0 */
    uint32 :32;
    uint32 :32;
    uint32 :32;
    uint32 MEMPDPWRCTRL0;     /* 0x10, */
    uint32 :32;
    uint32 :32;
    uint32 :32;
    uint32 PDCLKDIS;          /* 0x20, Power Domain Clock Disable Register */
    uint32 PDCLKDISSET;       /* 0x24, Power Domain Clock Disable Set Register */
    uint32 PDCLKDISCLR;       /* 0x28, Power Domain Clock Disable Clear Register */
    uint32 :32;
    uint32 :32;
    uint32 :32;
    uint32 :32;
    uint32 :32;
    uint32 LOGICPDPWRSTAT0;   /* 0x40, Logic Power Domain PD2 Power Status Register */
    uint32 LOGICPDPWRSTAT1;   /* 0x44, Logic Power Domain PD3 Power Status Register */
    uint32 LOGICPDPWRSTAT2;   /* 0x48, Logic Power Domain PD4 Power Status Register */
    uint32 LOGICPDPWRSTAT3;   /* 0x4c, Logic Power Domain PD5 Power Status Register */
    /* .. */
} PMM_RegisterType;

#define pmmREG  ((PMM_RegisterType *)0xFFFF0000UL)



typedef struct
{
  __IO uint32 CTRL;                         /*!< SysTick Control and Status Register */
  __IO uint32 LOAD;                         /*!< SysTick Reload Value Register       */
  __IO uint32 VAL;                          /*!< SysTick Current Value Register      */
  __I  uint32 CALIB;                        /*!< SysTick Calibration Register        */
} SysTick_Type;



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
    uint32 FRDCNTL;         /* 0x0000 */
    uint32 rsvd1;           /* 0x0004 */
    uint32 EE_FEDACCTRL1;   /* 0x0008 */
    uint32 rsvd2;           /* 0x000C */
    uint32 rsvd3;           /* 0x0010 */
    uint32 FEDAC_PASTATUS;  /* 0x0014 */
    uint32 FEDAC_PBSTATUS;  /* 0x0018 */
    uint32 FEDAC_GBLSTATUS; /* 0x001C */
    uint32 rsvd4;           /* 0x0020 */
    uint32 FEDACSDIS;       /* 0x0024 */
    uint32 FPRIM_ADD_TAG;   /* 0x0028 */
    uint32 FDUP_ADD_TAG;    /* 0x002C */
    uint32 FBPROT;          /* 0x0030 */
    uint32 FBSE;            /* 0x0034 */
    uint32 FBBUSY;          /* 0x0038 */
    uint32 FBAC;            /* 0x003C */
    uint32 FBPWRMODE;       /* 0x0040 */
    uint32 FBPRDY;          /* 0x0044 */
    uint32 FPAC1;           /* 0x0048 */
    uint32 rsvd5;           /* 0x004C */
    uint32 FMAC;            /* 0x0050 */
    uint32 FMSTAT;          /* 0x0054 */
    uint32 FEMU_DMSW;       /* 0x0058 */
    uint32 FEMU_DLSW;       /* 0x005C */
    uint32 FEMU_ECC;        /* 0x0060 */
    uint32 FLOCK;           /* 0x0064 */
    uint32 rsvd6;           /* 0x0068 */
    uint32 FDIAGCTRL;       /* 0x006C */
    uint32 rsvd7;           /* 0x0070 */
    uint32 FRAW_ADDR;       /* 0x0074 */
    uint32 rsvd8;           /* 0x0078 */
    uint32 FPAR_OVR;        /* 0x007C */
    uint32 rsvd9[13U];      /* 0x0080 - 0x00B0 */
    uint32 RCR_VALID;       /* 0x00B4 */
    uint32 ACC_THRESHOLD;   /* 0x00B8 */
    uint32 rsvd10;          /* 0x00BC */
    uint32 FEDACSDIS2;      /* 0x00C0 */
    uint32 rsvd11;          /* 0x00C4 */
    uint32 rsvd12;          /* 0x00C8 */
    uint32 rsvd13;          /* 0x00CC */
    uint32 RCR_VALUE0;      /* 0x00D0 */
    uint32 RCR_VALUE1;      /* 0x00D4 */
    uint32 rsvd14[108U];    /* 0x00D8 - 0x00284 */
    uint32 FSM_WR_ENA;      /* 0x0288 */
    uint32 rsvd15[11U];     /* 0x028C - 0x002B4 */
    uint32 EEPROM_CONFIG;   /* 0x02B8 */
    uint32 rsvd16;          /* 0x02BC */
    uint32 FSM_SECTOR1;     /* 0x02C0 */
    uint32 FSM_SECTOR2;     /* 0x02C4 */
    uint32 rsvd17[78U];     /* 0x02C8 - 0x03FC*/
    uint32 FCFG_BANK;       /* 0x0400 */
} flashWBASE_t;

/** @def flashWREG
*   @brief Flash Wrapper Register Frame Pointer
*
*   This pointer is used by the system driver to access the flash wrapper registers.
*/
#define flashWREG ((flashWBASE_t *)(0xFFF87000U))

#define FSM_WR_ENA_HL       (*(volatile uint32 *)0xFFF87288U)
#define EEPROM_CONFIG_HL    (*(volatile uint32 *)0xFFF872B8U)
#define FSM_SECTOR1         (*(volatile uint32 *)0xFFF872C0U)

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
    SYS_SLEEP   = 0U, /**< Alias for flash bank power mode sleep   */
    SYS_STANDBY = 1U, /**< Alias for flash bank power mode standby */
    SYS_ACTIVE  = 3U  /**< Alias for flash bank power mode active  */
};




#endif /* ARCH_ARM_ARMV7_R_TMS570_HW_TMS570_H_ */
