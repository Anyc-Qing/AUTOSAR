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
/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** Pwm_Hw_tms570.h
 *  This files contains the hardware specific register definitions that are required by the Pwm module.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Pwm
  *  This is the TMS 570 Mcal Pwm Group
  *  @{
  */
#ifndef PWM_HW_TMS570_H_
#define PWM_HW_TMS570_H_

/* Include Platform_Types.h For endianness */
#include "Platform_Types.h"
#include "Std_Types.h"

 /** @name Hardware Unit BASE
  * @{
  */
#define PWM_ePWM1_BASE_ADDR          (0xFCF78C00u)	/**< @brief Base address of ePWM hw channel 1 */
#define PWM_ePWM2_BASE_ADDR          (0xFCF78D00u)	/**< @brief Base address of ePWM hw channel 2 */
#define PWM_ePWM3_BASE_ADDR          (0xFCF78E00u)	/**< @brief Base address of ePWM hw channel 3 */
#define PWM_ePWM4_BASE_ADDR          (0xFCF78F00u)	/**< @brief Base address of ePWM hw channel 4 */
#define PWM_ePWM5_BASE_ADDR          (0xFCF79000u)	/**< @brief Base address of ePWM hw channel 5 */
#define PWM_ePWM6_BASE_ADDR          (0xFCF79100u)	/**< @brief Base address of ePWM hw channel 6 */
#define PWM_ePWM7_BASE_ADDR          (0xFCF79200u)	/**< @brief Base address of ePWM hw channel 7 */
/** @} */

 /**
  * @name Hardware register bit masks
  * @{
  */
/** @brief Defines the location of the ZRO bits in the AQCTL register */
#define PWM_AQCTL_ZRO_BITS              (3uL << 0u)

/** @brief Defines the offset of the PRD bits in the AQCTL register */
#define PWM_AQCTL_PRD_OFFSET            (2u)

/** @brief Defines the location of the PRD bits in the AQCTL register */
#define PWM_AQCTL_PRD_BITS              (3uL << 2u)

/** @brief Defines the offset of the CAU bits in the AQCTL register */
#define PWM_AQCTL_CAU_OFFSET            (4u)

/** @brief Defines the location of the CAU bits in the AQCTL register */
#define PWM_AQCTL_CAU_BITS              (3uL << 4u)

/** @brief Defines the offset of the CAD bits in the AQCTL register */
#define PWM_AQCTL_CAD_OFFSET       		(6u)

/** @brief Defines the location of the CAD bits in the AQCTL register */
#define PWM_AQCTL_CAD_BITS              (3uL << 6u)

/** @brief Defines the offset of the CBU bits in the AQCTL register */
#define PWM_AQCTL_CBU_OFFSET            (8u)

/** @brief Defines the location of the CBU bits in the AQCTL register */
#define PWM_AQCTL_CBU_BITS              (3u << 8u)

/** @brief Defines the offset of the CBD bits in the AQCTL register */
#define PWM_AQCTL_CBD_OFFSET            (10u)

/** @brief Defines the location of the CBD bits in the AQCTL register */
#define PWM_AQCTL_CBD_BITS              (3u << 10u)

/** @brief Defines the location of the CSFA bits in the AQCSFRC register */
#define PWM_AQCSFRC_CSFA_BITS           (3uL << 0u)

/** @brief Defines the offset of the CSFB bits in the AQCSFRC register */
#define PWM_AQCSFRC_CSFB_OFFSET         (2u)

/** @brief Defines the location of the CSFB bits in the AQCSFRC register */
#define PWM_AQCSFRC_CSFB_BITS           (3u << 2u)

/** @brief Defines the location of the LOADAMODE bits in the CMPCTL register */
#define PWM_CMPCTL_LOADAMODE_BITS       (3uL << 0u)

/** @brief Defines the offset of the LOADBMODE bits in the CMPCTL register */
#define PWM_CMPCTL_LOADBMODE_OFFSET     (2u)

/** @brief Defines the location of the LOADBMODE bits in the CMPCTL register */
#define PWM_CMPCTL_LOADBMODE_BITS       (3u << 2u)

/** @brief Defines the offset of the SHDWAMODE bits in the CMPCTL register */
#define PWM_CMPCTL_SHDWAMODE_OFFSET     (4u)

/** @brief Defines the location of the SHDWAMODE bits in the CMPCTL register */
#define PWM_CMPCTL_SHDWAMODE_BITS       (1uL << 4u)

/** @brief Defines the offset of the SHDWBMODE bits in the CMPCTL register */
#define PWM_CMPCTL_SHDWBMODE_OFFSET     (6u)

/** @brief Defines the location of the SHDWBMODE bits in the CMPCTL register */
#define PWM_CMPCTL_SHDWBMODE_BITS       (1u << 6u)

/** @brief Defines the location of the SHDWAFULL bits in the CMPCTL register */
#define PWM_CMPCTL_SHDWAFULL_BITS       (1u << 8u)

/** @brief Defines the location of the SHDWBFULL bits in the CMPCTL register  */
#define PWM_CMPCTL_SHDWBFULL_BITS       (1u << 9u)

/** @brief Defines the location of the OUTMODE bits in the DBCTL register */
#define PWM_DBCTL_OUTMODE_BITS          (3u << 0u)

/** @brief Defines the location of the POLSEL bits in the DBCTL register */
#define PWM_DBCTL_POLSEL_BITS           (3u << 2u)

/** @brief Defines the location of the INMODE bits in the DBCTL register */
#define PWM_DBCTL_INMODE_BITS           (3u << 4u)

/** @brief Defines the location of the HALFCYCLE bits in the DBCTL register */
#define PWM_DBCTL_HALFCYCLE_BITS        (1u << 15u)

/** @brief Defines the location of the ETCR bits in the ETCLR register */
#define PWM_ETCLR_INT_BITS              (1u << 0u)

/** @brief Defines the location of the event flag bit for Pwm interrupt in the ETFLG register */
#define PWM_ETFLG_BIT              		(1uL << 0u)

/** @brief Defines the location of the SOCA bits in the ETCLR register */
#define PWM_ETCLR_SOCA_BITS             (1u << 2u)

/** @brief Defines the location of the SOCB bits in the ETCLR register */
#define PWM_ETCLR_SOCB_BITS             (1u << 3u)

/** @brief Defines the location of the INTPRD bits in the ETPS register */
#define PWM_ETPS_INTPRD_BITS            (3uL << 0u)

/** @brief Defines the location of the INTCNT bits in the ETPS register */
#define PWM_ETPS_INTCNT_BITS            (3u << 2u)

/** @brief Defines the offset of the SOCAPRD bits in the ETPS register */
#define PWM_ETPS_SOCAPRD_OFFSET         (8u)

/** @brief Defines the location of the SOCAPRD bits in the ETPS register */
#define PWM_ETPS_SOCAPRD_BITS           (3u << 8u)

/** @brief Defines the location of the SOCACNT bits in the ETPS register */
#define PWM_ETPS_SOCACNT_BITS           (3u << 10u)

/** @brief Defines the offset of the SOCBPRD bits in the ETPS register */
#define PWM_ETPS_SOCBPRD_OFFSET         (12u)

/** @brief Defines the location of the SOCBPRD bits in the ETPS register */
#define PWM_ETPS_SOCBPRD_BITS           (3u << 12u)

/** @brief Defines the location of the SOCBCNT bits in the ETPS register */
#define PWM_ETPS_SOCBCNT_BITS           (3u << 14u)

/** @brief Defines the location of the INTSEL bits in the ETSEL register */
#define PWM_ETSEL_INTSEL_BITS           (7uL << 0u)

/** @brief Defines the location of the INTEN bits in the ETSEL register */
#define PWM_ETSEL_INTEN_BITS            (1uL << 3u)

/** @brief Defines the offset of the SOCASEL bits in the ETSEL register */
#define PWM_ETSEL_SOCASEL_OFFSET        (8u)

/** @brief Defines the location of the SOCASEL bits in the ETSEL register */
#define PWM_ETSEL_SOCASEL_BITS          (7u << 8u)

/** @brief Defines the location of the SOCAEN bits in the ETSEL register */
#define PWM_ETSEL_SOCAEN_BITS           (1u << 11u)

/** @brief Defines the offset of the SOCBSEL bits in the ETSEL register */
#define PWM_ETSEL_SOCBSEL_OFFSET        (12u)

/** @brief Defines the location of the SOCBSEL bits in the ETSEL register */
#define PWM_ETSEL_SOCBSEL_BITS          (7u << 12u)

/** @brief Defines the location of the SOCBEN bits in the ETSEL register */
#define PWM_ETSEL_SOCBEN_BITS           (1u << 15u)

/** @brief Defines the location of the CHPEN bits in the PCCTL register */
#define PWM_PCCTL_CHPEN_BITS            (1u << 0u)

/** @brief Defines the location of the OSHTWTH bits in the PCCTL register */
#define PWM_PCCTL_OSHTWTH_BITS          (15u << 1u)

/** @brief Defines the location of the CHPFREQ bits in the PCCTL register */
#define PWM_PCCTL_CHPFREQ_BITS          (7u << 5u)

/** @brief Defines the location of the CHPDUTY bits in the PCCTL register */
#define PWM_PCCTL_CHPDUTY_BITS          (7u << 8u)

/** @brief Defines the location of the CTRMODE bits in the TBCTL register */
#define PWM_TBCTL_CTRMODE_BITS          (3uL << 0u)

/** @brief Defines the location of the PHSEN bits in the TBCTL register */
#define PWM_TBCTL_PHSEN_BITS            (1u << 2u)

/** @brief Defines the location of the PRDLD bits in the TBCTL register  */
#define PWM_TBCTL_PRDLD_BITS            (1u << 3u)

/** @brief Defines the location of the SYNCOSEL bits in the TBCTL register */
#define PWM_TBCTL_SYNCOSEL_BITS         (3u << 4u)

/** @brief Defines the offset of the SWFSYNC bits in the TBCTL register */
#define PWM_TBCTL_SWFSYNC_OFFSET        (6u)

/** @brief Defines the location of the SWFSYNC bits in the TBCTL register */
#define PWM_TBCTL_SWFSYNC_BITS          (1u << 6u)

/** @brief Defines the location of the HSPCLKDIV bits in the TBCTL register */
#define PWM_TBCTL_HSPCLKDIV_BITS        (7u << 7u)

/** @brief Defines the location of the CLKDIV bits in the TBCTL register */
#define PWM_TBCTL_CLKDIV_BITS           (7u << 10u)

/** @brief Defines the location of the PHSDIR bits in the TBCTL register */
#define PWM_TBCTL_PHSDIR_BITS           (1u << 13u)

/** @brief Defines the location of the FREESOFT bits in the TBCTL register */
#define PWM_TBCTL_FREESOFT_BITS         (3u << 14u)

/** @brief Defines the location of the INT bits in the TXCLR register */
#define PWM_TZCLR_INT_BITS              (1u << 0u)

/** @brief Defines the location of the CBC bits in the TXCLR register */
#define PWM_TZCLR_CBC_BITS              (1u << 1u)

/** @brief Defines the location of the OST bits in the TXCLR register */
#define PWM_TZCLR_OST_BITS              (1u << 2u)

/** @brief Defines the location of the DCAEVT1 bits in the TXCLR register */
#define PWM_TZCLR_DCAEVT1_BITS          (1u << 3u)

/** @brief Defines the location of the DCAEVT2 bits in the TXCLR register */
#define PWM_TZCLR_DCAEVT2_BITS          (1u << 4u)

/** @brief Defines the location of the DCBEVT1 bits in the TXCLR register */
#define PWM_TZCLR_DCBEVT1_BITS          (1u << 5u)

/** @brief Defines the location of the DCBEVT2 bits in the TXCLR register */
#define PWM_TZCLR_DCBEVT2_BITS          (1u << 6u)

/** @brief Defines the offset of the TZA bits in the TZCTL register */
#define PWM_TZCTL_TZA_OFFSET              (0u)

/** @brief Defines the location of the TZA bits in the TZCTL register */
#define PWM_TZCTL_TZA_BITS              (3u << 0u)

/** @brief Defines the offset of the  TZB bits in the TZCTL register */
#define PWM_TZCTL_TZB_OFFSET            (2u)

/** @brief Defines the location of the  TZB bits in the TZCTL register */
#define PWM_TZCTL_TZB_BITS              (3u << 2u)

/** @brief Defines the offset of the DCAEVT1 bits in the TZCTL register */
#define PWM_TZCTL_DCAEVT1_OFFSET        (4u)

/** @brief Defines the location of the DCAEVT1 bits in the TZCTL register */
#define PWM_TZCTL_DCAEVT1_BITS          (3u << 4u)

/** @brief Defines the offset of the DCAEVT2 bits in the TZCTL register */
#define PWM_TZCTL_DCAEVT2_OFFSET        (6u)

/** @brief Defines the location of the DCAEVT2 bits in the TZCTL register */
#define PWM_TZCTL_DCAEVT2_BITS          (3u << 6u)

/** @brief Defines the offset of the DCBEVT1 bits in the TZCTL register */
#define PWM_TZCTL_DCBEVT1_OFFSET        (8u)

/** @brief Defines the location of the DCBEVT1 bits in the TZCTL register */
#define PWM_TZCTL_DCBEVT1_BITS          (3u << 8u)

/** @brief Defines the offset of the DCBEVT2 bits in the TZCTL register */
#define PWM_TZCTL_DCBEVT2_OFFSET        (10u)

/** @brief Defines the location of the DCBEVT2 bits in the TZCTL register */
#define PWM_TZCTL_DCBEVT2_BITS          (3u << 10u)

/** @brief Defines the location of the CBC bits in the TZFRC register */
#define PWM_TZFRC_CBC_BITS              (1u << 1u)

/** @brief Defines the location of the OST bits in the TZFRC register */
#define PWM_TZFRC_OST_BITS              (1u << 2u)

/** @brief Defines the location of the DCAEVT1 bits in the TZFRC register */
#define PWM_TZFRC_DCAEVT1_BITS          (1u << 3u)

/** @brief Defines the location of the DCAEVT2 bits in the TZFRC register */
#define PWM_TZFRC_DCAEVT2_BITS          (1u << 4u)

/** @brief Defines the location of the DCBEVT1 bits in the TZFRC register */
#define PWM_TZFRC_DCBEVT1_BITS          (1u << 5u)

/** @brief Defines the location of the DCBEVT2 bits in the TZFRC register */
#define PWM_TZFRC_DCBEVT2_BITS          (1u << 6u)

/** @brief Defines the location of the bit in the PINMMR37 register to enable ePWM1 clock */
#define PWM_PINMMR37_EPWM1CLK_BIT		(1uL << 8u)

/** @brief Defines the location of the bit in the PINMMR37 register to enable ePWM2 clock */
#define PWM_PINMMR37_EPWM2CLK_BIT		(1uL << 16u)

/** @brief Defines the location of the bit in the PINMMR37 register to enable ePWM3 clock */
#define PWM_PINMMR37_EPWM3CLK_BIT		(1uL << 24u)

/** @brief Defines the location of the bit in the PINMMR38 register to enable ePWM4 clock */
#define PWM_PINMMR38_EPWM4CLK_BIT		(1uL << 0u)

/** @brief Defines the location of the bit in the PINMMR38 register to enable ePWM5 clock */
#define PWM_PINMMR38_EPWM5CLK_BIT		(1uL << 8u)

/** @brief Defines the location of the bit in the PINMMR38 register to enable ePWM6 clock */
#define PWM_PINMMR38_EPWM6CLK_BIT		(1uL << 16u)

/** @brief Defines the location of the bit in the PINMMR38 register to enable ePWM7 clock */
#define PWM_PINMMR38_EPWM7CLK_BIT		(1uL << 24u)
/** @} */




#if defined(CFG_TMS570LC43X)
typedef volatile struct pcrBase
{
    uint32_t PMPROTSET0;    /* 0x0000 */
    uint32_t PMPROTSET1;    /* 0x0004 */
    uint32_t : 32U;         /* 0x0008 */
    uint32_t : 32U;         /* 0x000C */
    uint32_t PMPROTCLR0;    /* 0x0010 */
    uint32_t PMPROTCLR1;    /* 0x0014 */
    uint32_t : 32U;         /* 0x0018 */
    uint32_t : 32U;         /* 0x001C */
    uint32_t PPROTSET0;     /* 0x0020 */
    uint32_t PPROTSET1;     /* 0x0024 */
    uint32_t PPROTSET2;     /* 0x0028 */
    uint32_t PPROTSET3;     /* 0x002C */
    uint32_t : 32U;         /* 0x0030 */
    uint32_t : 32U;         /* 0x0034 */
    uint32_t : 32U;         /* 0x0038 */
    uint32_t CLK2CNTRL;     /* 0x003C */
    uint32_t PPROTCLR0;     /* 0x0040 */
    uint32_t PPROTCLR1;     /* 0x0044 */
    uint32_t PPROTCLR2;     /* 0x0048 */
    uint32_t PPROTCLR3;     /* 0x004C */
    uint32_t : 32U;         /* 0x0050 */
    uint32_t : 32U;         /* 0x0054 */
    uint32_t : 32U;         /* 0x0058 */
    uint32_t : 32U;         /* 0x005C */
    uint32_t PCSPWRDWNSET0; /* 0x0060 */
    uint32_t PCSPWRDWNSET1; /* 0x0064 */
    uint32_t : 32U;         /* 0x0068 */
    uint32_t : 32U;         /* 0x006C */
    uint32_t PCSPWRDWNCLR0; /* 0x0070 */
    uint32_t PCSPWRDWNCLR1; /* 0x0074 */
    uint32_t : 32U;         /* 0x0078 */
    uint32_t : 32U;         /* 0x007C */
    uint32_t PSPWRDWNSET0;  /* 0x0080 */
    uint32_t PSPWRDWNSET1;  /* 0x0084 */
    uint32_t PSPWRDWNSET2;  /* 0x0088 */
    uint32_t PSPWRDWNSET3;  /* 0x008C */
    uint32_t : 32U;         /* 0x0090 */
    uint32_t : 32U;         /* 0x0094 */
    uint32_t : 32U;         /* 0x0098 */
    uint32_t : 32U;         /* 0x009C */
    uint32_t PSPWRDWNCLR0;  /* 0x00A0 */
    uint32_t PSPWRDWNCLR1;  /* 0x00A4 */
    uint32_t PSPWRDWNCLR2;  /* 0x00A8 */
    uint32_t PSPWRDWNCLR3;  /* 0x00AC */
} pcrBASE_t;


/** @def pcrREG2
*   @brief Pcr2 Register Frame Pointer. Used for TMS570LC43X Pwm HW configuration
*/
#define pcrREG2 ((pcrBASE_t *)0xFCFF1000U)

#endif

/** @def IOMM_BASE_ADDR
*   @brief Base address of the I/O Multiplexing Module
*/
#define IOMM_BASE_ADDR  0xFFFF1C00u

/**
  * @name  MAGIC value - to set the IOMM registers
  * @{
  */
#if defined(CFG_TMS570LS12X)
#define PWM_IOMM_KICK0 0xFFFFEA38u
#define PWM_IOMM_KICK1 0xFFFFEA3Cu
#elif defined(CFG_TMS570LC43X)
#define PWM_IOMM_KICK0 (IOMM_BASE_ADDR + 0x38u)
#define PWM_IOMM_KICK1 (IOMM_BASE_ADDR + 0x3Cu)
#endif

#define PWM_IOMM_KICK0_MAGIC	(0x83e70b13u)	/**< @brief MAGIC value that should be written in KICK0 */
#define PWM_IOMM_KICK1_MAGIC	(0x95a4f1e0u)	/**< @brief MAGIC value that should be written in KICK1 */
#define PWM_IOMM_KICK0_LOCK  	(0x00000000u) 	/**< @brief Value to be written to LOCK the IOMM registers */
/** @} */


#ifdef CFG_TMS570LC43X
#define PINMMR166_IOMM_BASE_ADDR_OFFSET	0x3A8u
#define PINMMR166_ADDR					((uint32 *)(IOMM_BASE_ADDR + PINMMR166_IOMM_BASE_ADDR_OFFSET))

/* TMS570LC43 ref manual, 6.1.1, ePWM CLocking and Reset.
 * The offset is the same in the SET and the CLR registers.
 * Write a 1 to the SET register to power down and a 1 to the
 * CLR register to power up. */
#define EPWM1_PSPWRDWN3_OFFSET			16u
#define EPWM2_PSPWRDWN3_OFFSET			17u
#define EPWM3_PSPWRDWN3_OFFSET			18u
#define EPWM4_PSPWRDWN3_OFFSET			19u
#define EPWM5_PSPWRDWN3_OFFSET			12u
#define EPWM6_PSPWRDWN3_OFFSET			13u
#define EPWM7_PSPWRDWN3_OFFSET			14u
#define EPWMX_PSPWRDWN3_POWER			1u
#define PINMMR166_0_EPWM_MAGIC_BIT		1u

#elif defined(CFG_TMS570LS12X)

#endif

#define PWM_PINMMR37_BASE_ADDR			0xFFFFEBA4u		/**< Enables the clock to the ePWM1, ePWM2 and ePWM3. */
#define PWM_PINMMR38_BASE_ADDR			0xFFFFEBA8u		/**< Enables the clock to the ePWM4, ePWM5, ePWM6 and ePWM7. */

#define EPWM_TBCLKSYNC_OFFSET			(uint32)1u	/**< Offset of TBCLKSYNC bit of PINMMR37 register */
#define EPWM_TBCLKSYNC_ON				(uint32)1u	/**< On value of TBCLKSYNC bit of PINMMR37 register */

/**
  * @name  Multiplexing Control Registers
  * @{
  */
#if (CPU_BYTE_ORDER == LOW_BYTE_FIRST)
/** @brief The pulse width modulation (PWM) object in big endian byte alignment */
typedef struct _PWM_Obj_
{
  uint16_t   TBCTL;       /**< Time-Base Control Register  */
  uint16_t   TBSTS;       /**< Time-Base Status Register */
  uint16_t   TBPHSHR;     /**< Extension for the HRPWM Phase Register */
  uint16_t   TBPHS;       /**< Time-Base Phase Register */
  uint16_t   TBCTR;       /**< Time-Base Counter */
  uint16_t   TBPRD;       /**< Time-Base Period register set */
  uint16_t   TBPRDHR;     /**< Time-Base Period High Resolution Register */
  uint16_t   CMPCTL;      /**< Counter-Compare Control Register */
  uint16_t   CMPAHR;      /**< Extension of HRPWM Counter-Compare A Register */
  uint16_t   CMPA;        /**< Counter-Compare A Register */
  uint16_t   CMPB;        /**< Counter-Compare B Register */
  uint16_t   AQCTLA;      /**< Action-Qualifier Control Register for Output A (EPWMxA) */
  uint16_t   AQCTLB;      /**< Action-Qualifier Control Register for Output B (EPWMxB) */
  uint16_t   AQSFRC;      /**< Action qual SW force */
  uint16_t   AQCSFRC;     /**< Action qualifier continuous SW force */
  uint16_t   DBCTL;       /**< Dead-band control */
  uint16_t   DBRED;       /**< Dead-band rising edge delay */
  uint16_t   DBFED;       /**< Dead-band falling edge delay */
  uint16_t   TZSEL;       /**< Trip zone select */
  uint16_t   TZDCSEL;     /**< Trip zone digital comparator select */
  uint16_t   TZCTL;       /**< Trip zone control */
  uint16_t   TZEINT;      /**< Trip zone interrupt enable */
  uint16_t   TZFLG;       /**< Trip zone interrupt flags */
  uint16_t   TZCLR;       /**< Trip zone clear */
  uint16_t   TZFRC;       /**< Trip zone force interrupt */
  uint16_t   ETSEL;       /**< Event trigger selection */
  uint16_t   ETPS;        /**< Event trigger pre-scaler */
  uint16_t   ETFLG;       /**< Event trigger flags */
  uint16_t   ETCLR;       /**< Event trigger clear */
  uint16_t   ETFRC;       /**< Event trigger force */
  uint16_t   PCCTL;       /**< PWM chopper control */
  uint16_t   rsvd_1;      /**< Reserved */
  uint16_t	 HRCTL;
  uint16_t	 HRCALM;
  uint16_t	 HRCAL;
  uint16_t	 HRPRD;
  uint16_t	 HRCOUNT0;
  uint16_t	 HRCOUNT1;
  uint16_t   HRMSTEP;     /**< HRPWM MEP Step Register */
  uint16_t   rsvd_2;      /**< Reserved */
  uint16_t	 TRCTL;
  uint16_t	 TRREM;
  uint16_t	 TBPRDHRM;
  uint16_t   TBPRDM;
  uint16_t	 CMPAHRM;
  uint16_t   CMPAM;
  uint16_t	 rsvd_3;
  uint16_t   DCTRIPSEL;   /**< Digital Compare Trip Select */
  uint16_t   DCACTL;      /**< Digital Compare A Control */
  uint16_t   DCBCTL;      /**< Digital Compare B Control */
  uint16_t   DCFCTL;      /**< Digital Compare Filter Control */
  uint16_t   DCCAPCTL;    /**< Digital Compare Capture Control */
  uint16_t   DCFOFFSET;   /**< Digital Compare Filter Offset */
  uint16_t   DCFOFFSETCNT;/**< Digital Compare Filter Offset Counter */
  uint16_t   DCFWINDOW;   /**< Digital Compare Filter Window */
  uint16_t   DCFWINDOWCNT;/**< Digital Compare Filter Window Counter */
  uint16_t   DCCAP;       /**< Digital Compare Filter Counter Capture */
  uint16_t   rsvd_4;      /**< Reserved */
  uint16_t   rsvd_5;      /**< Reserved */
  uint16_t   ETEST;       /**< TEST */
  uint16_t   EPWMREV;     /**< EPWM REV */
  uint16_t   HRPWMREV;    /**< HR PWM REV */
} PWM_Obj;

#else
/** @brief The pulse width modulation (PWM) object in little endian byte alignment */
typedef struct _PWM_Obj_
{
  uint16_t   TBSTS;       /**< Time-Base Status Register */
  uint16_t   TBCTL;       /**< Time-Base Control Register */
  uint16_t   TBPHS;       /**< Time-Base Phase Register */
  uint16_t   TBPHSHR;     /**< Extension for the HRPWM Phase Register */
  uint16_t   TBPRD;       /**< Time-Base Period register set */
  uint16_t   TBCTR;       /**< Time-Base Counter */
  uint16_t   CMPCTL;      /**< Counter-Compare Control Register */
  uint16_t   TBPRDHR;     /**< Time-Base Period High Resolution Register */
  uint16_t   CMPA;        /**< Counter-Compare A Register */
  uint16_t   CMPAHR;      /**< Extension of HRPWM Counter-Compare A Register */
  uint16_t   AQCTLA;      /**< Action-Qualifier Control Register for Output A (EPWMxA) */
  uint16_t   CMPB;        /**< Counter-Compare B Register */
  uint16_t   AQSFRC;      /**< Action qual SW force */
  uint16_t   AQCTLB;      /**< Action-Qualifier Control Register for Output B (EPWMxB) */
  uint16_t   DBCTL;       /**< Dead-band control */
  uint16_t   AQCSFRC;     /**< Action qualifier continuous SW force */
  uint16_t   DBFED;       /**< Dead-band falling edge delay */
  uint16_t   DBRED;       /**< Dead-band rising edge delay */
  uint16_t   TZDCSEL;     /**< Trip zone digital comparator select */
  uint16_t   TZSEL;       /**< Trip zone select */
  uint16_t   TZEINT;      /**< Trip zone interrupt enable */
  uint16_t   TZCTL;       /**< Trip zone control */
  uint16_t   TZCLR;       /**< Trip zone clear */
  uint16_t   TZFLG;       /**< Trip zone interrupt flags */
  uint16_t   ETSEL;       /**< Event trigger selection */
  uint16_t   TZFRC;       /**< Trip zone force interrupt */
  uint16_t   ETFLG;       /**< Event trigger flags */
  uint16_t   ETPS;        /**< Event trigger pre-scaler */
  uint16_t   ETFRC;       /**< Event trigger force */
  uint16_t   ETCLR;       /**< Event trigger clear */
  uint16_t   rsvd_1;      /**< Reserved */
  uint16_t   PCCTL;       /**< PWM chopper control */
  uint16_t	 HRCALM;
  uint16_t	 HRCTL;
  uint16_t	 HRPRD;
  uint16_t	 HRCAL;
  uint16_t	 HRCOUNT1;
  uint16_t	 HRCOUNT0;
  uint16_t   rsvd_2;      /**< Reserved */
  uint16_t   HRMSTEP;     /**< HRPWM MEP Step Register */
  uint16_t	 TRREM;
  uint16_t	 TRCTL;
  uint16_t   TBPRDM;
  uint16_t	 TBPRDHRM;
  uint16_t   CMPAM;
  uint16_t	 CMPAHRM;
  uint16_t	 rsvd_3;
  uint16_t   DCACTL;      /**< Digital Compare A Control */
  uint16_t   DCTRIPSEL;   /**< Digital Compare Trip Select */
  uint16_t   DCFCTL;      /**< Digital Compare Filter Control */
  uint16_t   DCBCTL;      /**< Digital Compare B Control */
  uint16_t   DCFOFFSET;   /**< Digital Compare Filter Offset */
  uint16_t   DCCAPCTL;    /**< Digital Compare Capture Control */
  uint16_t   DCFWINDOW;   /**< Digital Compare Filter Window */
  uint16_t   DCFOFFSETCNT;/**< Digital Compare Filter Offset Counter */
  uint16_t   DCCAP;       /**< Digital Compare Filter Counter Capture */
  uint16_t   DCFWINDOWCNT;/**< Digital Compare Filter Window Counter */
  uint16_t   rsvd_4;      /**< Reserved */
  uint16_t   ETEST;       /**< TEST */
  uint16_t   rsvd_5;      /**< Reserved */
  uint16_t   HRPWMREV;    /**< HR PWM REV */
  uint16_t   EPWMREV;     /**< EPWM REV */
} PWM_Obj;
#endif
/** @} */

/** @brief Defines the pulse width modulation (PWM) handle */
typedef struct PWM_Obj *PWM_Handle;

#define PWM_MAX_NUMBER_OF_CH		(7)			/**< @brief Maximum number of channels*/

/** @brief   Array of PWM channels base addresses.  */
/*lint -save -e923 MISRA:HARDWARE ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
/*lint -esym(9003, PwmBaseAddresses) MISRA:OTHER:Readability:[MISRA 2012 Rule 8.9, advisory] */
static void* const PwmBaseAddresses[PWM_MAX_NUMBER_OF_CH] = {
    (void*)PWM_ePWM1_BASE_ADDR,
    (void*)PWM_ePWM2_BASE_ADDR,
    (void*)PWM_ePWM3_BASE_ADDR,
    (void*)PWM_ePWM4_BASE_ADDR,
    (void*)PWM_ePWM5_BASE_ADDR,
    (void*)PWM_ePWM6_BASE_ADDR,
    (void*)PWM_ePWM7_BASE_ADDR

};
/*lint -restore -e923 */

#endif /* PWM_HW_TMS570_H_ */

/** @}*/
/** @}*/
