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

#ifndef SPI_HW_TMS570_H_
#define SPI_HW_TMS570_H_

#include "Std_Types.h"
#include "Os.h"

/** @enum 	Spi_DlcRegRdbkType
*   @brief	Data type for Register Readback.
*/
typedef enum
{
    SPI_GCR0_RB = 0U,
    SPI_GCR1_RB,
    SPI_DEF_RB,
    SPI_EN_RB
} Spi_DlcRegRdbkType;


/**
 * @struct Spi_TxField
 * @brief The transmit register space is addressed as structure pointer.
 */
typedef struct
{
    volatile uint16 TxCtrl;		/**< @brief Variable to hold Tx controll register address  */
    volatile uint16 TxData;		/**< @brief Variable to hold Tx data buffer address */
}Spi_TxField;

/**
 * @struct Spi_RxField
 * @brief The receive register space is addressed as structure pointer.
 */
typedef struct
{
    volatile uint16 RxStat;		/**< @brief Variable to hold Rx status register address  */
    volatile uint16 RxData;		/**< @brief Variable to hold received data buffer address */
}Spi_RxField;

/**
 * @name Spi hardware register offset
 * @{
 */
/**
 * @struct Spi_PinCtrlType
 * @brief  Defines the type holding the offset of the Spi pin control registers.
 */
typedef struct
{
    volatile uint32 Spi_FUN  ; /**< @brief Function control register (Offset: 0x14) */
    volatile uint32 Spi_DIR  ; /**< @brief Direction control register (Offset: 0x18) */
    volatile uint32 Spi_DIN  ; /**< @brief Input data pins status register (Offset: 0x1C) */
    volatile uint32 Spi_DOUT ; /**< @brief Output data pins control register  (Offset: 0x20) */
    volatile uint32 Spi_DSET ; /**< @brief Output data set register  (Offset: 0x24) */
    volatile uint32 Spi_DCLR ; /**< @brief Output data clear register (Offset: 0x28) */
    volatile uint32 Spi_PDR  ; /**< @brief Open drain control register (Offset: 0x2C) */
    volatile uint32 Spi_PDIS ; /**< @brief Pull feature on/off control register (Offset: 0x30) */
    volatile uint32 Spi_PSEL ; /**< @brief Pull feature type (up/down) control register(Offset: 0x34) */
} Spi_PinCtrlType;

/** @brief Defines the number of Spi data format registers */
#define DATA_FORMAT_TYPE_COUNT	(4U)

/**
 * @struct Spi_FMTRegType
 * @brief  Defines the type holding the offset of Spi format registers.
 */
typedef struct
{
    volatile uint32 Spi_FMT[DATA_FORMAT_TYPE_COUNT] ;	/**< @brief Spi format register array  */
} Spi_FMTRegType;

/** @brief Defines the number of Spi transfer group control registers */
#define SPI_TGCTRL_REG_COUNT		(16U)

/**
 * @struct Spi_TGCTRLRegType
 * @brief  Defines the type holding the offset of Spi transfer group control registers.
 */
typedef struct
{
	volatile uint32 Spi_TGITENST  ; /**< @brief Transfer Group Interrupt Enable Set Register (Offset: 0x74) */
	volatile uint32 Spi_TGITENCR  ; /**< @brief Transfer Group Interrupt Enable Clear Register (Offset: 0x78) */
	volatile uint32 Spi_TGITLVST  ; /**< @brief Transfer Group Interrupt Level Set Register (Offset: 0x7C) */
	volatile uint32 Spi_TGITLVCR  ; /**< @brief Transfer Group Interrupt Level Clear Register (Offset: 0x80) */
	volatile uint32 Spi_TGINTFLAG ; /**< @brief Transfer Group Interrupt Flag Register (Offset: 0x84) */
	volatile uint32 Spi_Reserved0 ; /**< @brief reserved register (Offset: 0x88) */
	volatile uint32 Spi_Reserved1 ; /**< @brief reserved register (Offset: 0x8C) */
	volatile uint32 Spi_TICKCNT   ; /**< @brief Tick Count control/status register (Offset: 0x90) */
	volatile uint32 Spi_LTGPEND   ; /**< @brief Last trigger end pointer status register (Offset: 0x94) */
	volatile uint32 Spi_TGCTRL[SPI_TGCTRL_REG_COUNT] ; /**< @brief Trigger control/status register array (Offset: 0x98 - 0xD4) */
} Spi_TGCTRLRegType;

/** @brief Defines the number of Spi Dma channels */
#define DMA_CHANNEL_COUNT			(8U)

/**
 * @struct Spi_DMACTRLRegType
 * @brief  Defines the type holding the offset of Spi Dma control registers.
 */
typedef struct
{
    volatile uint32 Spi_DMACTRL[DMA_CHANNEL_COUNT] ;  	/**< @brief Dma Channel Control Register array (Offset: 0xD8- 0xF8) */
    volatile uint32 Spi_DMACOUNT[DMA_CHANNEL_COUNT] ; 	/**< @brief DMAxCOUNT Register array (Offset: 0xFC - 0x114) */
    volatile uint32 Spi_DMACNTLEN ;   					/**< @brief Dma Large Count Register (Offset: 0x118) */
} Spi_DMACTRLRegType;

/**
 * @struct Spi_RegisterType
 * @brief  Defines the type holding the offset of Spi global registers.
 */
typedef struct
{
	volatile uint32 Spi_GCR0 ;         /**< @brief SPI Global Control Register 0 Offset: 0x00) */
	volatile uint32 Spi_GCR1 ;         /**< @brief SPI Global Control Register 1 (Offset: 0x04) */
	volatile uint32 Spi_INT0 ;         /**< @brief SPI Interrupt Register (Offset: 0x08) */
	volatile uint32 Spi_LVL  ;         /**< @brief SPI Interrupt Level Register (Offset: 0x0C) */
	volatile uint32 Spi_FLG  ;         /**< @brief SPI Flag Register (Offset: 0x10) */
	Spi_PinCtrlType Spi_PC ;           /**< @brief SPI Pin Control Register array (Offset: 0x14 - 0x34) */
	volatile Spi_TxField Spi_DAT0 ;    /**< @brief SPI Transmit Data Register 0 (Offset: 0x38) */
	volatile Spi_TxField Spi_DAT1 ;    /**< @brief SPI Transmit Data Register 1 (Offset: 0x3C) */
	volatile Spi_RxField Spi_BUF  ;    /**< @brief SPI Receive Buffer Register (Offset: 0x40) */
	volatile uint32 Spi_EMU  ;         /**< @brief SPI Emulation Register (Offset: 0x44) */
	volatile uint16 Spi_DELAY[2U] ;    /**< @brief SPI Delay Register (Offset: 0x48) */
	volatile uint32 Spi_DEF   ;        /**< @brief SPI Default Chip Select Register (Offset: 0x4C) */
	volatile uint32 Spi_FMT[4U] ;      /**< @brief SPI Data Format Registers (Offset: 0x50 - 0x5C) */
	volatile uint32 Spi_TGINTVECT[2U]; /**< @brief Transfer Group Interrupt Vectors (Offset: 0x60 - 0x64) */
	volatile uint32 Spi_SRSEL  ;       /**< @brief SPI slew control register (Offset: 0x68) */
	volatile uint32 Spi_PMCTRL ;       /**< @brief Parallel/Modulo Mode Control Register (Offset: 0x6C) */
	volatile uint32 Spi_EN  ;          /**< @brief Multi-buffer Mode Enable Register (Offset: 0x70) */
	Spi_TGCTRLRegType Spi_RegTGCTL ;   /**< @brief Spi transfer group control registers (Offset: 0x74 - 0xD4) */
	Spi_DMACTRLRegType Spi_RegDMACTRL; /**< @brief Spi Dma control registers (Offset: 0xD8 - 0x118) */
	volatile uint32 Spi_Reserved2 ;    /**< @brief Reserved (Offset: 0x11C) */
	volatile uint32 Spi_UERRCTRL ;     /**< @brief Multi-buffer RAM Uncorrectable Parity Error Control Register (Offset: 0x120) */
	volatile uint32 Spi_UERRSTAT ;     /**< @brief Multi-buffer RAM Uncorrectable Parity Error Status Register (Offset: 0x124) */
	volatile uint32 Spi_UERRADDR1 ;    /**< @brief RXRAM Uncorrectable Parity Error Address Register (Offset: 0x128) */
	volatile uint32 Spi_UERRADDR0 ;    /**< @brief TXRAM Uncorrectable Parity Error Address Register (Offset: 0x12C) */
	volatile uint32 Spi_RXOVRN_ADDR;   /**< @brief RXRAM Overrun Buffer Address Register (Offset: 0x130) */
	volatile uint32 Spi_IOLPBTSTCR ;   /**< @brief I/O-Loopback Test Control Register (Offset: 0x134) */
	volatile uint32 Spi_EXT_PRESCALE1; /**< @brief SPI Extended Prescale Register 1 (Offset: 0x138) */
}Spi_RegisterType;
/** @} */

/** @brief Defines the spi MIB TX size */
#define SPI_DLC_MIBTXSIZE    128U
/** @brief Defines the spi MIB RX size */
#define SPI_DLC_MIBRXSIZE    128U

/**
 * @struct Spi_RamBufferType
 * @brief  Defines the spi ram buffer bank.
 */
typedef struct
{
    volatile Spi_TxField Spi_TxBank[SPI_DLC_MIBTXSIZE] ; 	/**< @brief TxBank consists of 16bit control and 16bit txdata */
    volatile Spi_RxField Spi_RxBank[SPI_DLC_MIBRXSIZE] ; 	/**< @brief RxBank consists of 16bit status  and 16bit rxdata */
}Spi_RamBufferType ;

typedef volatile Spi_RegisterType*  Spi_RegisterPtrType ;	/**< @brief Type defining a pointer to Spi_RegisterType */
typedef volatile Spi_RamBufferType* Spi_RamBufferPtrType;	/**< @brief Type defining a pointer to Spi_RamBufferType */

/**
 * @struct Spi_HWUnitPropertyType
 * @brief  Defines the type of hardware unit property.
 */
typedef struct
{
    uint8 Spi_RamUsed;		/**< @brief Flag to be set if RAM is used */
    uint8 Spi_DmaUsed;		/**< @brief Flag to be set if Dma is used */
    uint8 Spi_UnitID;		/**< @brief Variable to hold hardware unit ID */
}Spi_HWUnitPropertyType;

typedef const Spi_HWUnitPropertyType* Spi_HWUnitPropertyPtrType;	/**< @brief Type defining a pointer to Spi_HWUnitPropertyType */

/**
 * @struct Spi_HWUnitMapType
 * @brief  Defines the hw unit pointers.
 */
typedef struct
{
    Spi_RegisterPtrType Reg_pt;        /**< @brief pointer to unit registers */
    Spi_RamBufferPtrType Ram_pt;       /**< @brief pointer to unit ram (NULL_PTR) if unit has no ram */
    Spi_HWUnitPropertyPtrType Prop_pt; /**< @brief pointer to unit properties */
}Spi_HWUnitMapType;

typedef Spi_HWUnitMapType* Spi_HWUnitMapPtrType;

 /** @name Hardware REGISTER BASE
  * @{
  */
#define SPI_REGISTER_BASE_0 (Spi_RegisterPtrType) (0xFFF7F400U) /**< @brief register base address of spi hw channel 0 */
#define SPI_REGISTER_BASE_1 (Spi_RegisterPtrType) (0xFFF7F600U) /**< @brief register base address of spi hw channel 1 */
#define SPI_REGISTER_BASE_2 (Spi_RegisterPtrType) (0xFFF7F800U) /**< @brief register base address of spi hw channel 2 */
#define SPI_REGISTER_BASE_3 (Spi_RegisterPtrType) (0xFFF7FA00U) /**< @brief register base address of spi hw channel 3 */
#define SPI_REGISTER_BASE_4 (Spi_RegisterPtrType) (0xFFF7FC00U) /**< @brief register base address of spi hw channel 4 */
/** @} */

 /** @name Hardware RAM BASE
  * @{
  */
#if defined(CFG_TMS570LS12X)                   /**< @brief ram base address of spi hw channel 0 */
#define SPI_RAM_BASE_0      (Spi_RamBufferPtrType) (0xFF0E0000U)            /**< @brief ram base address of spi hw channel 1 */
#define SPI_RAM_BASE_1      (Spi_RamBufferPtrType) (0x00000000U) /*Null*/   /**< @brief ram base address of spi hw channel 2 */
#define SPI_RAM_BASE_2      (Spi_RamBufferPtrType) (0xFF0C0000U)            /**< @brief ram base address of spi hw channel 3 */
#define SPI_RAM_BASE_3      (Spi_RamBufferPtrType) (0x00000000U) /*Null*/   /**< @brief ram base address of spi hw channel 4 */
#define SPI_RAM_BASE_4      (Spi_RamBufferPtrType) (0xFF0A0000U)
#elif defined(CFG_TMS570LC43X)
#define SPI_RAM_BASE_0      (Spi_RamBufferPtrType) (0xFF0E0000U)            /**< @brief ram base address of spi hw channel 0 */
#define SPI_RAM_BASE_1      (Spi_RamBufferPtrType) (0xFF080000U)            /**< @brief ram base address of spi hw channel 1 */
#define SPI_RAM_BASE_2      (Spi_RamBufferPtrType) (0xFF0C0000U)            /**< @brief ram base address of spi hw channel 2 */
#define SPI_RAM_BASE_3      (Spi_RamBufferPtrType) (0xFF060000U)            /**< @brief ram base address of spi hw channel 3 */
#define SPI_RAM_BASE_4      (Spi_RamBufferPtrType) (0xFF0A0000U)            /**< @brief ram base address of spi hw channel 4 */
#else
#error This SPI driver does not support this MCU.
#endif
/** @} */

/**
 * @name Hardware register bit masks
 * @{
 */
/*---------------------------------------------------*/
/* Register bit mask definitions for MIB registers   */
/*---------------------------------------------------*/
/* naming of the macros is: [REGISTERNAME]_[REGISTERFLAG] */
/* val is the value to be set, bit if available is the bit to set */
/* i.e. TICKCNT_TICKVALUE_SET: set a the TICKCNT register with the TICKVALUE */
/** @brief Write the REG_NAME register with the REG_VALUE */
#define SPI_WRITEVAL(reg, val)  	((reg) = (val))
/** @brief Write the REG_NAME register with the REG_VALUE */
#define SPI_WRITEVAL_PR(reg, val)   WritePeripheral32( 0u, (uint32 *)&(reg), (val) )

/** @brief Read from REG_NAME register the REG_VALUE */
#define SPI_READVAL(var, reg)   	((var) = (reg))
/** @brief Set the REG_NAME register with the REG_VALUE */
#define SPI_SETVAL16(reg, val)    	((reg) |= (uint16)(val))
/** @brief Get from REG_NAME register the REG_VALUE */
#define SPI_GETVAL16(reg, mask)   	((reg) &  (uint16)(mask))
/** @brief Clear the REG_NAME register with the REG_VALUE */
#define SPI_CLRVAL16(reg, val)    	((reg) &= (~(uint16)(val)))

/** @brief Set the REG_NAME 32-bit register with the 32-bit REG_VALUE */
#define SPI_SETVAL32(reg, val)    	((reg) |= (uint32)(val))
/** @brief Set the REG_NAME 32-bit register with the 32-bit REG_VALUE, Privileged Mode */
#define SPI_SETVAL32_PR(reg, val)   ModifyPeripheral32(0, (uint32*)&(reg),0xffffffffU,val)
/** @brief Get from REG_NAME 32-bit register the 32-bit REG_VALUE */
#define SPI_GETVAL32(reg, mask)   	((reg) &  (uint32)(mask))
/** @brief Clear the REG_NAME 32-bit register with the 32-bit REG_VALUE */
#define SPI_CLRVAL32(reg, val)    	((reg) &= (~(uint32)(val)))

/* define for SPIFLG */
/** @brief Defines the location of the SPIFLG bits in the BUFINIT register */
#define SPI_BUFINIT          ((uint32)1u << 24)

/*---------------------------------------------------*/
/* Spi_RegTGCTL.Spi_TICKCNT register masks, RW */
/*---------------------------------------------------*/
/* set: set a value to the specified register bit */
/** @brief Defines the offset of the TICK bits in the TICKCNT register */
#define TICKCNT_TICKVALUE(val)    ((uint32)(val) << 0U)       /* bit 0:15  */
/** @brief Defines the offset of the CLKCTRL bits in the TICKCNT register */
#define TICKCNT_CLKCTRL(val)      ((uint32)(val) << 28U)      /* bit 28:29 */
/** @brief Defines the offset of the RELOAD bits in the TICKCNT register */
#define TICKCNT_RELOAD(val)       ((uint32)(val) << 30U)      /* bit 30    */
/** @brief Defines the offset of the TICKENA bits in the TICKCNT register */
#define TICKCNT_TICKENA(val)      ((uint32)(val) << 31U)      /* bit 31    */

/*---------------------------------------------------*/
/* Spi_RegTGCTL.Spi_LTGPEND register masks, RW       */
/*---------------------------------------------------*/
/** @brief Defines the offset of the LPEND bits in the LTGPEND register */
#define LTGPEND_LPEND(val)        ((uint32)(val) << 8U)       /* bit 8:14   */
/** @brief Defines the offset of the TGINSERVICE bits in the LTGPEND register */
#define LTGPEND_TGINSERVICE(val)  ((uint32)(val) << 24U)      /* bit 24:28  */

/*---------------------------------------------------*/
/* Spi_TGINTVECT[x] register masks, read only        */
/*---------------------------------------------------*/
/** @brief Defines the offset of the SUSPEND bits in the TGINTVECT register */
#define TGINTVECT_SUSPEND(val)    ((uint32)(val) << 0U)       /* bit 0     */
/** @brief Defines the offset of the INTVEC bits in the TGINTVECT register */
#define TGINTVECT_INTVEC(val)     ((uint32)(val) << 1U)       /* bit 1:5   */

/*---------------------------------------------------*/
/* Spi_EN register masks, RW                         */
/*---------------------------------------------------*/
/** @brief Defines the offset of the EN bits in the MIBSPIE register */
#define MIBSPIE_EN(val)           ((uint32)(val) << 0U)       /* bit 0     */

/*---------------------------------------------------*/
/* Spi_GCR1 register masks, RW                       */
/*---------------------------------------------------*/
/** @brief Defines the offset of the MASTER bits in the MIBSPIEGCR1 register */
#define MIBSPIEGCR1_MASTER(val)   ((uint32)(val)<< 0U)       /* bit 0     */
/** @brief Defines the offset of the CLKMOD bits in the MIBSPIEGCR1 register */
#define MIBSPIEGCR1_CLKMOD(val)   ((uint32)(val)<< 1U)       /* bit 1     */
/** @brief Defines the offset of the SPIEN bits in the MIBSPIEGCR1 register */
#define MIBSPIEGCR1_SPIEN(val)    ((uint32)(val)<< 24U)      /* bit 24    */

/*---------------------------------------------------*/
/* Spi_RegTGCTL.Spi_TGITENST register masks, RW      */
/*---------------------------------------------------*/
/** @brief Defines the offset of the SETINTENRDY bits in the TGITENST register */
#define TGITENST_SETINTENRDY(val,bit)    ((uint32)(val) << (bit))      /* bit y from 0:31 */

/*---------------------------------------------------*/
/* Spi_RegTGCTL.Spi_TGITENCR register masks, RW      */
/*---------------------------------------------------*/
/** @brief Defines the offset of the CLRINTENRDY bits in the TGITENCR register */
#define TGITENCR_CLRINTENRDY(val,bit)    ((uint32)(val) << (bit))      /* bit y from 0:31 */

/*---------------------------------------------------*/
/* Spi_RegTGCTL.Spi_TGITLVST register masks, RW      */
/*---------------------------------------------------*/
/** @brief Defines the offset of the SETINTLEVEL bits in the TGITLVST register */
#define TGITLVST_SETINTLEVEL(val,bit)    ((uint32)(val) << (bit))     /* bit y from 0:31 */

/*---------------------------------------------------*/
/* Spi_RegTGCTL.Spi_TGITLVCR register masks, RW      */
/*---------------------------------------------------*/
/** @brief Defines the offset of the SETINTLEVEL bits in the TGITLVCR register */
#define TGITLVCR_SETINTLEVEL(val,bit)    ((uint32)(val) << (bit))      /* bit y from 0:31 */

/*---------------------------------------------------*/
/* Spi_RegTGCTL.TGCTRL register masks, RW      */
/*---------------------------------------------------*/
/** @brief Defines the offset of the PCURRENT bits in the TGCTRL register */
#define TGCTRL_PCURRENT(val)    ((uint32)(val) << 0U)     /* bit 0:6   */
/** @brief Defines the offset of the PSTART bits in the TGCTRL register */
#define TGCTRL_PSTART(val)      ((uint32)(val) << 8U)     /* bit 8:14  */
/** @brief Defines the offset of the TRIGSRC bits in the TGCTRL register */
#define TGCTRL_TRIGSRC(val)     ((uint32)(val) << 16U)    /* bit 16:19 */
/** @brief Defines the offset of the TRIGEVT bits in the TGCTRL register */
#define TGCTRL_TRIGEVT(val)     ((uint32)(val) << 20U)    /* bit 20:23 */
/** @brief Defines the offset of the TGTD bits in the TGCTRL register */
#define TGCTRL_TGTD(val)        ((uint32)(val) << 28U)    /* bit 28    */
/** @brief Defines the offset of the PRST bits in the TGCTRL register */
#define TGCTRL_PRST(val)        ((uint32)(val) << 29U)    /* bit 29    */
/** @brief Defines the offset of the TGONESHOT bits in the TGCTRL register */
#define TGCTRL_TGONESHOT(val)   ((uint32)(val) << 30U)    /* bit 30    */
/** @brief Defines the offset of the TGENA bits in the TGCTRL register */
#define TGCTRL_TGENA(val)       ((uint32)(val) << 31U)    /* bit 31    */

/*---------------------------------------------------*/
/* Spi_RegFMT register masks, RW      */
/*---------------------------------------------------*/
/** @brief Defines the offset of the CHARLEN bits in the SPIFMT register */
#define SPIFMT_CHARLEN(val)    ((uint32)(val) << 0U)     /* bit 0:4   */
/** @brief Defines the offset of the PRESCALE bits in the SPIFMT register */
#define SPIFMT_PRESCALE(val)   ((uint32)(val) << 8U)     /* bit 8:15  */
/** @brief Defines the offset of the PHASE bits in the SPIFMT register */
#define SPIFMT_PHASE(val)      ((uint32)(val) << 16U)    /* bit 16    */
/** @brief Defines the offset of the POLARITY bits in the SPIFMT register */
#define SPIFMT_POLARITY(val)   ((uint32)(val) << 17U)    /* bit 17    */
/** @brief Defines the offset of the DISCSTIMER bits in the SPIFMT register */
#define SPIFMT_DISCSTIMER(val) ((uint32)(val) << 18U)    /* bit 18    */
/** @brief Defines the offset of the SHIFTDIR bits in the SPIFMT register */
#define SPIFMT_SHIFTDIR(val)   ((uint32)(val) << 20U)    /* bit 20    */
/** @brief Defines the offset of the WAITENA bits in the SPIFMT register */
#define SPIFMT_WAITENA(val)    ((uint32)(val) << 21U)    /* bit 21    */
/** @brief Defines the offset of the PARITYENA bits in the SPIFMT register */
#define SPIFMT_PARITYENA(val)  ((uint32)(val) << 22U)    /* bit 22    */
/** @brief Defines the offset of the PARPOL( bits in the SPIFMT register */
#define SPIFMT_PARPOL(val)     ((uint32)(val) << 23U)    /* bit 23    */
/** @brief Defines the offset of the WDELAY bits in the SPIFMT register */
#define SPIFMT_WDELAY(val)     ((uint32)(val) << 24U)    /* bit 24:29 */

#define SPIFMT_CHARLEN_MASK    (0x1FU)
/*---------------------------------------------------*/
/* MIBRAM Registers */
/*---------------------------------------------------*/
/* Spi_TXRAM register masks, RW                      */
/*---------------------------------------------------*/
/** @brief Defines the offset of the DATA bits in the TXRAMCTRL register */
#define TXRAMCTRL_DATA        (0x0000U)  /* bit 0-7  */    /* bit 0:15  */
/** @brief Defines the offset of the CSNR bits in the TXRAMCTRL register */
#define TXRAMCTRL_CSNR        (0x0100U)  /* bit 8    */     /* bit 16:23 */
/** @brief Defines the offset of the DFSEL bits in the TXRAMCTRL register */
#define TXRAMCTRL_DFSEL       (0x0200U)  /* bit 9    */     /* bit 24:25 */
/** @brief Defines the offset of the WDEL bits in the TXRAMCTRL register */
#define TXRAMCTRL_WDEL        (0x0400U)  /* bit 10   */    /* bit 26    */
/** @brief Defines the offset of the LOCK bits in the TXRAMCTRL register */
#define TXRAMCTRL_LOCK        (0x0800U)  /* bit 11   */    /* bit 27    */
/** @brief Defines the offset of the CSHOLD bits in the TXRAMCTRL register */
#define TXRAMCTRL_CSHOLD      (0x1000U)  /* bit 12   */    /* bit 28    */
/** @brief Defines the offset of the BUFMODE bits in the TXRAMCTRL register */
#define TXRAMCTRL_BUFMODE     (0x2000U)  /* bit 13   */    /* bit 29:31 */
/*
 * Spi_RXRAM register masks, R with auto clear
 */
/** @brief Defines the offset of the LCSNR bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_LCSNR         (0x0000U)  /* bit 0-7  */
/** @brief Defines the offset of the DLENERR bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_DLENERR       (0x0100U)  /* bit 8    */
/** @brief Defines the offset of the TIMEOUT bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_TIMEOUT       (0x0200U)  /* bit 9    */
/** @brief Defines the offset of the PARITYERR bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_PARITYERR     (0x0400U)  /* bit 10   */
/** @brief Defines the offset of the DESYNC bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_DESYNC        (0x0800U)  /* bit 11   */
/** @brief Defines the offset of the BITERR bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_BITERR        (0x1000U)  /* bit 12   */
/** @brief Defines the offset of the TXFULL bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_TXFULL        (0x2000U)  /* bit 13   */
/** @brief Defines the offset of the RXOVR bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_RXOVR         (0x4000U)  /* bit 14   */
/** @brief Defines the offset of the RXEMPTY bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_RXEMPTY       (0x8000U)  /* bit 15   */
/* special case , if (value & error mask) = 0, everything is fine */
/** @brief Defines the offset of the ERRORMASK bits in the RXRAMCTRL register */ 
#define RXRAMCTRL_ERRORMASK     0x5F000000U

/*---------------------------------------------------*/
/* get, set: low/high word of a uint32               */
/*---------------------------------------------------*/
/** @brief Set the REG_NAME register with the LOWWORD_VALUE */
#define SPI_DLC_LOWWORD_SET(val)     (((uint32)(val) & 0x0000FFFFU) << 0U)   /* bit 0:15   */
/** @brief Set the REG_NAME register with the HIGHWORD_VALUE */
#define SPI_DLC_HIGHWORD_SET(val)    (((uint32)(val) & 0x0000FFFFU) << 16U)  /* bit 16:31  */

/** @brief Get from REG_NAME register the LOWWORD_VALUE */
#define SPI_DLC_LOWWORD_GET(val)     (uint16)(((uint32)(val) & 0x0000FFFFU))   /* bit 0:15   */
/** @brief Get from REG_NAME register the HIGHWORD_VALUE */
#define SPI_DLC_HIGHWORD_GET(val)    (uint16)(((uint32)(val) & 0xFFFF0000U) >> 16U)  /* bit 16:31  */

/*---------------------------------------------------*/
/* for tx control field                              */
/*---------------------------------------------------*/
/** @brief Defines the offset of the BUFMOD bits in the SPI_DLC_TXCTRL register */
#define SPI_DLC_TXCTRL_BUFMOD(val)    (uint16) ((val) << 13U)
/** @brief Defines the offset of the CSHOLD bits in the SPI_DLC_TXCTRL register */
#define SPI_DLC_TXCTRL_CSHOLD(val)    (uint16) ((val) << 12U)
/** @brief Defines the offset of the DFSEL bits in the SPI_DLC_TXCTRL register */
#define SPI_DLC_TXCTRL_DFSEL(val)     (uint16) ((val) << 8U)

/*---------------------------------------------------*/
/* get, set: low/high byte of a uint16               */
/*---------------------------------------------------*/
/** @brief Defines the offset of the LPEND bits in the LTGPEND register */
/** @brief Set the REG_NAME register with the LOWBYTE_VALUE */
#define SPI_DLC_LOWBYTE_SET(val)     (uint16)(((uint32)(val) & 0x00FFU) << 0U)    /* bit 0:7   */
/** @brief Set the REG_NAME register with the HIGHBYTE_VALUE */
#define SPI_DLC_HIGHBYTE_SET(val)    (uint16)(((uint32)(val) & 0x00FFU) << 8U)    /* bit 8:15  */

/** @brief Get from REG_NAME register the LOWBYTE_VALUE */
#define SPI_DLC_LOWBYTE_GET(val)     ((uint8)(((uint32)(val) & 0x00FFU)))          /* bit 0:8   */
/** @brief Get from REG_NAME register the HIGHBYTE_VALUE */
#define SPI_DLC_HIGHBYTE_GET(val)    ((uint8)(((uint32)(val) & 0xFF00U) >> 8U))    /* bit 8:15  */

/* define bit masks */
/** @brief Defines the BITCLR value in the SPI_DLC register */
#define SPI_DLC_BITCLR    				0x00000000U
/** @brief Defines the offset of the BIT08 bits in the SPI_DLC_CHECK register */
#define SPI_DLC_CHECK_BIT08(val,bit)  (((uint8) (val) & (1U << (bit))) == (1U << (bit)))
/** @brief Defines the offset of the BIT16 bits in the SPI_DLC_CHECK register */
#define SPI_DLC_CHECK_BIT16(val,bit)  (((uint16)(val) & (1U << (bit))) == (1U << (bit)))
/** @brief Defines the offset of the BIT32 bits in the SPI_DLC_CHECK register */
#define SPI_DLC_CHECK_BIT32(val,bit)  (((uint32)(val) & (1UL << (bit))) == (1UL << (bit)))
/** @brief Defines the offset of the HEX08 bits in the SPI_DLC_CHECK register */
#define SPI_DLC_CHECK_HEX08(val,bval) (((uint8) (val) & (bval)) == (bval))
/** @brief Defines the offset of the HEX16 bits in the SPI_DLC_CHECK register */
#define SPI_DLC_CHECK_HEX16(val,bval) (((uint16)(val) & (bval)) == (bval))
/** @brief Defines the offset of the HEX32 bits in the SPI_DLC_CHECK register */
#define SPI_DLC_CHECK_HEX32(val,bval) (((uint32)(val) & (bval)) == (bval))
/** @} */

/** @brief Defines the maximum number of bytes for one transfer group */
#define SPI_DLC_TX_RAM_SHIFT    (7U)
/* number of available transfer groups*/
/** @brief Defines the number of available transfer groups */
#define SPI_DLC_TG_NUM          (1U)

/** @brief Defines the lenght of transfer groups */
#define SPI_DLC_TG_LEN          (1u << SPI_DLC_TX_RAM_SHIFT)
/* oneshot mode = 0, time triggered mode = 1 */
/** @brief Defines the transfer groups mode*/
#define SPI_DLC_MODE            (STD_OFF)
/* max priority of a job (ASR conform) */
/** @brief Defines the max priority of a job (ASR conform) */
#define SPI_MAX_JOB_PRIO        (3U)
/** @brief Defines the max of hw unit */
#define SPI_DLC_MAXHWUNIT       (5U)

/** @brief Array holding the hardware unit addresses */
extern const Spi_RegisterPtrType Spi_HWUnit_at[];
/** @brief Array holding the buffer RAM addresses */
extern const Spi_RamBufferPtrType Spi_RamUnit_at[];
/** @brief Array holding the settings of each hardware: RAM, Dma and unit Id */
extern const Spi_HWUnitPropertyType Spi_UnitProperty_at[];

/** @brief Defines the state for guard operations */
enum
{
    SPI_DLC_G_IDLE = 0U,		/**< @brief DLC operation idle state is assigned value 0 */
    SPI_DLC_G_PENDING = 1U,		/**< @brief DLC operation pending state is assigned value 1 */
    SPI_DLC_G_ACTIVE = 2U,		/**< @brief DLC operation active state is assigned value 2 */
    SPI_DLC_G_FINISHED = 3U		/**< @brief DLC operation finished state is assigned value 3 */
};

/**
 * @enum 	Spi_DlcTxRxDefType
 * @brief	The type for guard operations.
 */
typedef enum
{
    SPI_DLC_TX = 0U,	/**< @brief DLC transmit operation is assigned value 0 */
    SPI_DLC_RX = 1U		/**< @brief DLC receive operation is assigned value 1 */
}Spi_DlcTxRxDefType;

/**
 * @enum 	Spi_DlcTxRxDefType
 * @brief	The frame type for guard operations.
 */
typedef enum
{
    SPI_DLC_FRAME08 = 0U,	/**< @brief 8 bit DLC frame is assigned value 0 */
    SPI_DLC_FRAME16 = 1U	/**< @brief 16 bit DLC frame is assigned value 1 */
}Spi_DlcFrameDefType;

/**
 * @enum 	Spi_DlcOptionDefType
 * @brief	The option type for guard operations.
 */
typedef enum
{
    SPI_DLC_STDUNIT = 0U,	/**< @brief Standard unit is assigned value 0 */
    SPI_DLC_MIBUNIT = 1U	/**< @brief Multi buffered unit is assigned value 1 */
}Spi_DlcOptionDefType;

/**
 * @enum 	Spi_DlcEventDefType
 * @brief	Event definitions of the Spi job state machine.
 */
typedef enum
{
    SPI_DLC_EV_SYNCTX = 0U,		/**< @brief A synchronous event is assigned value 0 */
    SPI_DLC_EV_ASYNCTX = 1U,	/**< @brief An asynchronous event is assigned value 1 */
    SPI_DLC_EV_CONSUMED = 2U	/**< @brief A consumed event is assigned value 2 */
} Spi_DlcEventDefType;

/**
 * @enum 	Spi_DlcChannelStateType
 * @brief	Event definitions of the Spi channel state.
 */
typedef enum
{
    SPI_DLC_ST_OK = 0U,			/**< @brief Value 0 is assigned to a channel which is idle */
    SPI_DLC_ST_PENDING = 1U,	/**< @brief Value 1 is assigned to a channel waiting to transmit */
    SPI_DLC_ST_FAILED = 2U,		/**< @brief Value 2 is assigned to a channel whose transmit has failed */
    SPI_DLC_ST_FINISHED = 3U,	/**< @brief Value 3 is assigned to a channel which finished transmitting */
    SPI_DLC_ST_CANCELED = 4U	/**< @brief Value 4 is assigned to a channel with canceled transmit */
}Spi_DlcChannelStateType;

/**
 * @struct Spi_DlcFunctionType
 * @brief  Structure defining various DLC function types
 */
typedef struct
{
    void   (*Init)      (uint32 HwUnit_u32);	/**< @brief Type of function for initialization of DLC transfer */
    void   (*Close)     (uint32 HwUnit_u32);	/**< @brief Type of function for finishing DLC transfer */
    void   (*FillData)  (uint32 HwUnit_u32);	/**< @brief Type of function for data fill */
    void   (*DrainData) (uint32 HwUnit_u32);	/**< @brief Type of function for data drain */
    void   (*Trigger)   (uint32 HwUnit_u32);	/**< @brief Type of function for triggering the transfer */
    uint16 (*Transmit)  (uint32 HwUnit_u32);	/**< @brief Type of function for transmitting */
    void   (*Error)     (uint32 HwUnit_u32);	/**< @brief Type of function for handling errors */
}Spi_DlcFunctionType;

/**
 * @struct Spi_DlcEventType
 * @brief  Event object definitions of an Spi event.
 */
typedef struct
{
    /* the first three entries are part of the Interface and shall not be changed */
    volatile uint8 Event_u8;	/**< @brief Variable holding the event of the Spi job state machine */
    volatile uint8 Guard_u8 ;  	/**< @brief Event of the Spi channel state used for fill status of buffer */
    uint8  JobID_u8 ;      		/**< @brief ID of the job */
    uint8  Res_u8   ;      		/**< @brief Dummy variable to help better data aligning in RAM */

    uint16 Pos_u16[2U] ;   		/**< @brief Position of current data in a channel, Pos_u16[0] for Tx, Pos_u16[1] for Rx. */
    uint8  ID_u8[2U]  ;    		/**< @brief ID of the Channel, ID_u8[0] for Tx, ID_u8[1] for Rx */
    uint8  Num_u8[2U] ;    		/**< @brief Number of Channels Num_u8[0] is number of Tx channels, Num_u8[1] is number of Rx channels */

    uint16 TxCtrl_u16 ;    		/**< @brief Variable used for transmit control register values */
    uint16 RxStat_u16 ;    		/**< @brief Variable used for receive status   */
    uint16 Default_u16[2U]; 	/**< @brief Variable used for default data */
    uint16 Data_u16;       		/**< @brief Variable used for valid data */
    uint8  DFSel_u8[2U] ;   	/**< @brief Variable used for data format word [0=CS_ID ,1=ExtDev] */
} Spi_DlcEventType;

typedef Spi_DlcEventType* Spi_DlcEventPtrType;	/**< @brief Definition of a pointer to Spi_DlcEventType */

/** @brief Define for the driver which uses no chip select */
#define SPI_NO_CHIP_SELECT    255U


typedef uint16* Spi_DlcFrame16PtrType; /**< @brief Defines the pointer types for 16 bit frame transfer */

/**
 * @struct Spi_RegisterReadbackType
 * @brief  Defines the spi readback register.
 */
typedef struct
{
    uint32 Spi_GCR0 ;         /**< @brief SPI Global Control Register 0 */
    uint32 Spi_GCR1 ;         /**< @brief SPI Global Control Register 1 */
    uint32 Spi_DEF  ;         /**< @brief SPI Default Chip Select Register */
    uint32 Spi_EN   ;         /**< @brief Multi-buffer Mode Enable Register */
}Spi_RegisterReadbackType;

/** @brief Defines the interrupt request mask set register 1 */
#define VIM_REQMASKSET1 ((uint32*) 0xFFFFFE34U)
/* Interrupt request mask clear register 1 */
/** @brief Defines the interrupt request mask clear register 1 */
#define VIM_REQMASKCLR1 ((uint32*) 0xFFFFFE44U)

typedef uint8 Dma_HWChannelType;            /**< @brief Defines the numeric ID of a hardware channel */
typedef uint8 Dma_ChannelType;              /**< @brief Defines the numeric ID of a Channel */
typedef uint8 Dma_TriggerType;              /**< @brief Defines the numeric ID of a hardware trigger source */

/**
 * @enum 	Dma_StatusType
 * @brief	Defines the current status of the Dma Module.
 */
typedef enum
{
    DMA_UNINIT = 0U,	/**< @brief Value 0 signifies an uninitialized Dma module */
    DMA_IDLE,			/**< @brief Value 1 signifies an idle Dma module */
    DMA_BUSY			/**< @brief Value 2 signifies a busy Dma module */
} Dma_StatusType;

/**
 * @enum 	Dma_GroupStatusType
 * @brief	Defines the current status of a Dma Group.
 */
typedef enum
{
    DMA_GROUP_IDLE = 0U,		/**< @brief Idle Dma group is assigned value 0. */
    DMA_GROUP_BUSY,				/**< @brief Busy Dma group is assigned value 1. */
    DMA_GROUP_FRAME_COMPLETE,	/**< @brief Dma group with a complete frame is assigned value 2. */
    DMA_GROUP_BLOCK_COMPLETE	/**< @brief Dma group with a complete block is assigned value 3. */
} Dma_GroupStatusType;

/**
 * @enum 	Dma_AddrModeType
 * @brief	Defines the addressing mode of the Dma Module.
 */
typedef enum
{
    SPI_DLCDMA_ADDR_CONST    = 0U,
    DMA_ADDR_POSTINC  = 1U,
    DMA_ADDR_RESERVED = 2U,
    DMA_ADDR_INDEXED  = 3U
} Dma_AddrModeType;

/**
 * @enum 	Dma_ElementSizeType
 * @brief	Defines the element size of the Dma Module.
 */
typedef enum
{
    DMA_ESIZE_8BIT  = 0U,	/**< @brief 8 bit Dma element is assigned value 0. */
    DMA_ESIZE_16BIT = 1U,	/**< @brief 16 bit Dma element is assigned value 1. */
    DMA_ESIZE_32BIT = 2U,	/**< @brief 32 bit Dma element is assigned value 2. */
    DMA_ESIZE_64BIT = 3U	/**< @brief 64 bit Dma element is assigned value 3. */
} Dma_ElementSizeType;

/** @brief Defines the transfer type of the Dma Module */
enum
{
    DMA_TTYPE_FRAME  = 0U,
    DMA_TTYPE_BLOCK  = 1U
};

/**
 * @enum 	Dma_ChannelUsedType
 * @brief	Defines the channel used type of the Dma Module.
 */
typedef enum
{
    DMA0_TXCTRL = 0U,	/**< @brief Dma channel used for transmit control is assigned value 0. */
    DMA0_TXDATA = 1U,	/**< @brief Dma channel used for transmit data is assigned value 1. */
    DMA1_RXSTAT = 2U,	/**< @brief Dma channel used for receive control is assigned value 2. */
    DMA1_RXDATA = 3U	/**< @brief Dma channel used for receive data is assigned value 3. */
} Dma_ChannelUsedType;

/**
 * @enum 	Dma_ChannelDir
 * @brief	Defines the direction of Dma Channel.
 */
typedef enum
{
    DMA_TX = 0U,	/**< @brief direction of Dma channel used for transmission is assigned value 0. */
    DMA_RX			/**< @brief direction of Dma channel used for reception is assigned value 1. */
} Dma_ChannelDir;

/**
 * @struct Dma_ChannelSetupType
 * @brief  Defines the channel setup of the Dma Module.
 */
typedef struct
{
    uint32 SrcAddr;		/**< @brief Variable holding the data source address */
    uint32 DstAddr;		/**< @brief Variable holding the data destination */
    uint16 FCount;		/**< @brief Variable holding the maximum number of frames */
    uint16 ECount;		/**< @brief Variable holding the maximum number of events */
    uint16 EISrcInc;	/**< @brief Variable holding the source address element offset */
    uint16 EIDstInc;	/**< @brief Variable holding the destination address element offset */
    uint16 FISrcInc;	/**< @brief Variable holding the destination address element offset */
    uint16 FIDstInc;	/**< @brief Variable holding the Source Address Frame Offset */
    uint16 NextChTrg; 	/**< @brief Variable holding the next channel trigger, usually zero */
    uint16 ChCtrl;		/**< @brief Variable used to specify received data size */
    uint16 Unit;      	/**< @brief Variable holding the hardware unit number */
    Dma_ChannelType Channel;	/**< @brief Variable holding the channel id */
    Dma_ChannelDir Direction;	/**< @brief Variable holding the channel direction */
} Dma_ChannelSetupType;

/** @brief Defines the REQ element number of the Dma Module */
#define DMA_REQ_ELEMENT_COUNT		(2U)

/**
 * @struct Dma_RequestType
 * @brief  Defines the type of Dma request.
 */
typedef struct
{
    uint8  DmaReq[DMA_REQ_ELEMENT_COUNT];	/**< @brief Array of Dma requests. */
}Dma_RequestType;

/** @brief Defines the number of buffers of the Dma channel (total of 2: Rx and Tx buffer) */
#define DMA_CHANNEL_BUFFER_COUNT	(2U)

/**
 * @struct Dma_ChannelSelectType
 * @brief  Defines the type of Dma selector.
 */
typedef struct
{
    uint8  Dmachannel[DMA_CHANNEL_BUFFER_COUNT];	/**< @brief Variable holding the Dma channel numbers for Rx and Tx channel */
}Dma_ChannelSelectType;

/** @brief Defines the offset of the RES bits in the Dma register */
#define DMA_RES(x)    ((uint16)((x) << 14U))
/** @brief Defines the offset of the WES bits in the Dma register */
#define DMA_WES(x)    ((uint16)((x) << 12U))
/** @brief Defines the offset of the TTP bits in the Dma register */
#define DMA_TTP(x)    ((uint16)((x) << 8U))
/** @brief Defines the offset of the AMR bits in the Dma register */
#define DMA_AMR(x)    ((uint16)((x) << 3U))
/** @brief Defines the offset of the AWR bits in the Dma register */
#define DMA_AWR(x)    ((uint16)((x) << 1U))
/** @brief Defines the offset of the AIM bits in the Dma register */
#define DMA_AIM        (uint16)       (1U)

/** @name Definitions of Rx and Tx SPI_DLC data and controll channels
 * @{
 */
#define SPI_DLC_RXUNIT0    (0U)   /**< @brief Defines: MIBSPI1_RX, DREQ[0] */
#define SPI_DLC_TXUNIT0    (1U)   /**< @brief Defines: MIBSPI1_RX, DREQ[1] */

#define SPI_DLC_RXUNIT1    (2U)   /**< @brief Defines: SPI2_RX   , DREQ[2] */
#define SPI_DLC_TXUNIT1    (3U)   /**< @brief Defines: SPI2_RX   , DREQ[3] */

#define SPI_DLC_RXUNIT2    (14U)  /**< @brief Defines: MIBSPI3_RX, DREQ[14] */
#define SPI_DLC_TXUNIT2    (15U)  /**< @brief Defines: MIBSPI3_RX, DREQ[15] */

#define SPI_DLC_RXUNIT3    (24U)  /**< @brief Defines: SPI4_RX   , DREQ[24] */
#define SPI_DLC_TXUNIT3    (25U)  /**< @brief Defines: SPI4_RX 1 , DREQ[25] */

#define SPI_DLC_RXUNIT4    (30U)  /**< @brief Defines: MIBSPI5_RX, DREQ[30] */
#define SPI_DLC_TXUNIT4    (31U)  /**< @brief Defines: MIBSPI5_RX, DREQ[31] */

#define SPI_DLC_RXUNIT0_Channel    (0xFFU)  /**< @brief Defines: MIBSPI1_RX, Channel / Control packet [Not used] */
#define SPI_DLC_TXUNIT0_Channel    (0xFFU)  /**< @brief Defines: MIBSPI1_RX, Channel / Control packet [Not used] */

#define SPI_DLC_RXUNIT1_Channel    (0U)     /**< @brief Defines: SPI2_RX   , Channel / Control packet [0] */
#define SPI_DLC_TXUNIT1_Channel    (1U)     /**< @brief Defines: SPI2_RX   , Channel / Control packet [1] */

#define SPI_DLC_RXUNIT2_Channel    (0xFFU)  /**< @brief Defines: MIBSPI3_RX, Channel / Control packet [Not used] */
#define SPI_DLC_TXUNIT2_Channel    (0xFFU)  /**< @brief Defines: MIBSPI3_RX, Channel / Control packet [Not used] */

#define SPI_DLC_RXUNIT3_Channel    (2U)     /**< @brief Defines: SPI4_RX   , Channel / Control packet [2] */
#define SPI_DLC_TXUNIT3_Channel    (3U)     /**< @brief Defines: SPI4_RX 1 , Channel / Control packet [3] */

#define SPI_DLC_RXUNIT4_Channel    (0xFFU)  /**< @brief Defines: MIBSPI5_RX, Channel / Control packet [Not used] */
#define SPI_DLC_TXUNIT4_Channel    (0xFFU)  /**< @brief Defines: MIBSPI5_RX, Channel / Control packet [Not used] */
/** @} */

/* definitions for channel control (MIB unit and STD unit) */
/*  RES WES 11:9 TTYPE 7:5  ADDMR ADDMW AIM (Autoinitiation mode)
 *  xx  xx  000   x    000   xx     xx   x
 * ->  x x x x 0 0 0 x 0 0 0 x x x x x
 */
/*  for MIB we use TXCTRL : SRC const
 *                        : DST inc by 2 (indexed)
 *                 TXDATA : SRC inc by 1 (8bit) or 2 (16bit)
 *                        : DST inc by 2 (indexed)
 *                 RXSTAT : SRC inc by 2 (indexed)
 *                        : DST const
 *                 RXDATA : SRC inc by 2 (indexed)
 *                        : DST inc by 1 (8bit) or 2 (16bit)
 */
/** @name Definitions for channel control (MIB unit and STD unit)
* @{
*/
#define DMA_MIBTXCTRL      (uint16)0x5106U  /**< @brief Defines: RES:01, WES:01, TType:1, ADDMR:00, ADDMW:11, AIM:0 see Dma manual */
#define DMA_MIBRXSTAT      (uint16)0x5106U  /**< @brief Defines: RES:01, WES:01, TType:1, ADDMR:00, ADDMW:11, AIM:0 */

#define DMA_MIBTX08_CONST  (uint16)0x0106U  /**< @brief Defines: RES:00, WES:00, TType:1, ADDMR:00, ADDMW:11, AIM:0 */
#define DMA_MIBTX08_INC    (uint16)0x010EU  /**< @brief Defines: RES:00, WES:00, TType:1, ADDMR:01, ADDMW:11, AIM:0 */
#define DMA_MIBTX16_CONST  (uint16)0x5106U  /**< @brief Defines: add RES:01, WES:01 */
#define DMA_MIBTX16_INC    (uint16)0x510EU  /**< @brief Defines: add RES:01, WES:01 */

#define DMA_MIBRX08_CONST  (uint16)0x0118U  /**< @brief Defines: RES:00, WES:00, TType:1, ADDMR:11, ADDMW:00, AIM:0 */
#define DMA_MIBRX08_INC    (uint16)0x011AU  /**< @brief Defines: RES:00, WES:00, TType:1, ADDMR:11, ADDMW:01, AIM:0 */
#define DMA_MIBRX16_CONST  (uint16)0x5118U  /**< @brief Defines: add RES:01, WES:01 */
#define DMA_MIBRX16_INC    (uint16)0x511AU  /** @brief Defines: add RES:01, WES:01 */

/*  for STD we use TXDATA : SRC inc by 1 (8bit) or 2 (16bit) post increment mode
 *                        : DST const
 *                 RXDATA : SRC const
 *                        : DST inc by 1 (8bit) or 2 (16bit) post increment mode
 */
#define DMA_STDTX08_CONST  (uint16)0x0000U  /**< @brief Defines: RES:00, WES:00, TType:0, ADDMR:00, ADDMW:00, AIM:0 */
#define DMA_STDTX08_INC    (uint16)0x0008U  /**< @brief Defines: RES:00, WES:00, TType:0, ADDMR:01, ADDMW:00, AIM:0 */
#define DMA_STDTX16_CONST  (uint16)0x5000U  /**< @brief Defines: add RES:01, WES:01 */
#define DMA_STDTX16_INC    (uint16)0x5008U  /**< @brief Defines: add RES:01, WES:01 */

#define DMA_STDRX08_CONST  (uint16)0x0000U  /**< @brief Defines: RES:00, WES:00, TType:0, ADDMR:00, ADDMW:00, AIM:0 */
#define DMA_STDRX08_INC    (uint16)0x0002U  /**< @brief Defines: RES:00, WES:00, TType:0, ADDMR:00, ADDMW:01, AIM:0 */
#define DMA_STDRX16_CONST  (uint16)0x5000U  /**< @brief Defines: add RES:01, WES:01 */
#define DMA_STDRX16_INC    (uint16)0x5002U  /**< @brief Defines: add RES:01, WES:01 */
/** @} */

#define SPI_DMA_CHANNEL0_TXDATA    (0U)
#define SPI_DMA_CHANNEL1_RXDATA    (1U)

/** @brief Maximum number of Dma channels used ( SPI2 and SPI4) */
#define DMA_MAX_HW_CHN      (4U)

 /**
  * @struct Dma_ChannelControlPacketType
  * @brief This struct type is intended to be an easier way of accessing the Primary Control Packet of each Dma channel
  * @details Use a pointer to this type which points to the base address of Primary Control Packet 0.
  * The Primary Control Packets 1 - 31 can be accessed by using the pointer like an array where
  * the index identifies the number of the Primary Control Packet. Values can be changed by hardware and by software.
  */
typedef struct
{
    volatile uint32 ISADDR;            /**< @brief Control Packet base address + Channel offset;  INITIAL SOURCE ADDRESS */
    volatile uint32 IDADDR;            /**< @brief Offset: 0x004;   INITIAL DESTINATION ADDRESS */
    volatile uint16 IFTCOUNT;          /**< @brief Offset: 0x008;   INITIAL FRAME COUNT */
    volatile uint16 IETCOUNT;          /**< @brief Offset: 0x00A;   INITIAL ELEMENT COUNT */
    volatile uint32 Reserved_0x00C;    /**< @brief Offset: 0x00C;   Reserved */
    volatile uint16 CHCTRL_CHAIN;      /**< @brief Offset: 0x010;   CHANNEL CONTROL: Next Channel to be triggered (0x000000 = no channel) */
    volatile uint16 CHCTRL;            /**< @brief Offset: 0x012;   CHANNEL CONTROL: Trigger Type, Read and Write Element Size, Address modes */
    volatile uint16 EIDXD;             /**< @brief Offset: 0x014;   Destination Address Element Offset */
    volatile uint16 EIDXS;             /**< @brief Offset: 0x016;   Source Address Element Offset */
    volatile uint16 FIDXD;             /**< @brief Offset: 0x018;   Destination Address Frame Offset */
    volatile uint16 FIDXS;             /**< @brief Offset: 0x01A;   Source Address Frame Offset */
    volatile uint32 Reserved_0x01C;    /**< @brief Offset: 0x01C;   Reserved */
} Dma_ChannelControlPacketType;

/** @brief Maximum number of Dma packages */
#define DMA_MAX_PACKAGE_COUNT		(32U)

/**
 * @struct Dma_ChanCtrlType
 * @brief Defines the type of Dma channel control package.
 * */
typedef struct
{
    Dma_ChannelControlPacketType DMA_CHCTRL[DMA_MAX_PACKAGE_COUNT];	/**< @brief DMA channel control package array */
}Dma_ChanCtrlType;

/**
 * @struct Dma_GlobalRegisterType
 * @brief This struct type is intended to be an easier way of accessing the global registers of Dma.
 * @details Values can be changed by hardware and by software.
 * */
typedef struct
{
    volatile uint32 DMA_GCTRL;             /**< @brief Register base address;   GLOBAL CONTROL */
    volatile uint32 DMA_PEND;              /**< @brief Offset: 0x004;       CHANNEL PENDING */
    volatile uint32 DMA_FBREG;             /**< @brief Offset: 0x008;       FALL BACK */
    volatile uint32 DMA_DMASTAT;           /**< @brief Offset: 0x00C;       Dma STATUS */
    volatile uint32 DMA_Reserved_0x010;    /**< @brief Offset: 0x010;       Reserved */
    volatile uint32 DMA_HWCHENAS;          /**< @brief Offset: 0x014;       HW CHANNEL ENABLE SET */
    volatile uint32 DMA_Reserved_0x018;    /**< @brief Offset: 0x018;       Reserved */
    volatile uint32 DMA_HWCHENAR;          /**< @brief Offset: 0x01C;       HW CHANNEL ENABLE RESET */
    volatile uint32 DMA_Reserved_0x020;    /**< @brief Offset: 0x020;       Reserved */
    volatile uint32 DMA_SWCHENAS;          /**< @brief Offset: 0x024;       SW CHANNEL ENABLE SET */
    volatile uint32 DMA_Reserved_0x028;    /**< @brief Offset: 0x028;       Reserved */
    volatile uint32 DMA_SWCHENAR;          /**< @brief Offset: 0x02C;       SW CHANNEL ENABLE RESET */
    volatile uint32 DMA_Reserved_0x030;    /**< @brief Offset: 0x030;       Reserved */
    volatile uint32 DMA_CHPRIOS;           /**< @brief Offset: 0x034;       CHANNEL PRIORITY SET */
    volatile uint32 DMA_Reserved_0x038;    /**< @brief Offset: 0x038;       Reserved */
    volatile uint32 DMA_CHPRIOR;           /**< @brief Offset: 0x03C;       CHANNEL PRIORITY RESET */
    volatile uint32 DMA_Reserved_0x040;    /**< @brief Offset: 0x040;       Reserved */
    volatile uint32 DMA_GCHIENAS;          /**< @brief Offset: 0x044;       GLOBAL CHANNEL INTERRUPT ENABLE SET */
    volatile uint32 DMA_Reserved_0x048;    /**< @brief Offset: 0x048;       Reserved */
    volatile uint32 DMA_GCHIENAR;          /**< @brief Offset: 0x04C;       GLOBAL CHANNEL INTERRUPT ENABLE RESET */
    volatile uint32 DMA_Reserved_0x050;    /**< @brief Offset: 0x050;       Reserved */
    volatile uint8  DMA_DREQASI[32U];      /**< @brief Offset: 0x054-0x70;  Dma request assignment [32] for channel */
    volatile uint32 DMA_Reserved_0x074;    /**< @brief Offset: 0x074;       Reserved */
    volatile uint32 DMA_Reserved_0x078;    /**< @brief Offset: 0x078;       Reserved */
    volatile uint32 DMA_Reserved_0x07C;    /**< @brief Offset: 0x07C;       Reserved */
    volatile uint32 DMA_Reserved_0x080;    /**< @brief Offset: 0x080;       Reserved */
    volatile uint32 DMA_Reserved_0x084;    /**< @brief Offset: 0x084;       Reserved */
    volatile uint32 DMA_Reserved_0x088;    /**< @brief Offset: 0x088;       Reserved */
    volatile uint32 DMA_Reserved_0x08C;    /**< @brief Offset: 0x08C;       Reserved */
    volatile uint32 DMA_Reserved_0x090;    /**< @brief Offset: 0x090;       Reserved */
    volatile uint32 DMA_PAR[4];            /**< @brief Offset: 0x094-0xA0;  PORT ASSIGNMENT Register 0-3 */
    volatile uint32 DMA_Reserved_0x0A4;    /**< @brief Offset: 0x0A4;       Reserved */
    volatile uint32 DMA_Reserved_0x0A8;    /**< @brief Offset: 0x0A8;       Reserved */
    volatile uint32 DMA_Reserved_0x0AC;    /**< @brief Offset: 0x0AC;       Reserved */
    volatile uint32 DMA_Reserved_0x0B0;    /**< @brief Offset: 0x0B0;       Reserved */
    volatile uint32 DMA_FTCMAP;            /**< @brief Offset: 0x0B4;       FTC INTERRUPT MAPPING */
    volatile uint32 DMA_Reserved_0x0B8;    /**< @brief Offset: 0x0B8;       Reserved */
    volatile uint32 DMA_LFSMAP;            /**< @brief Offset: 0x0BC;       LFS INTERRUPT MAPPING */
    volatile uint32 DMA_Reserved_0x0C0;    /**< @brief Offset: 0x0C0;       Reserved */
    volatile uint32 DMA_HBCMAP;            /**< @brief Offset: 0x0C4;       HBC INTERRUPT MAPPING */
    volatile uint32 DMA_Reserved_0x0C8;    /**< @brief Offset: 0x0C8;       Reserved */
    volatile uint32 DMA_BTCMAP;            /**< @brief Offset: 0x0CC;       BTC INTERRUPT MAPPING */
    volatile uint32 DMA_Reserved_0x0D0;    /**< @brief Offset: 0x0D0;       Reserved */
    volatile uint32 DMA_BERMAP;            /**< @brief Offset: 0x0D4;       BER INTERRUPT MAPPING */
    volatile uint32 DMA_Reserved_0x0D8;    /**< @brief Offset: 0x0D8;       Reserved */
    volatile uint32 DMA_FTCINTENAS;        /**< @brief Offset: 0x0DC;       FTC INTERRUPT ENABLE SET */
    volatile uint32 DMA_Reserved_0x0E0;    /**< @brief Offset: 0x0E0;       Reserved */
    volatile uint32 DMA_FTCINTENAR;        /**< @brief Offset: 0x0E4;       FTC INTERRUPT ENABLE RESET */
    volatile uint32 DMA_Reserved_0x0E8;    /**< @brief Offset: 0x0E8;       Reserved */
    volatile uint32 DMA_LFSINTENAS;        /**< @brief Offset: 0x0EC;       LFS INTERRUPT ENABLE SET */
    volatile uint32 DMA_Reserved_0x0F0;    /**< @brief Offset: 0x0F0;       Reserved */
    volatile uint32 DMA_LFSINTENAR;        /**< @brief Offset: 0x0F4;       LFS INTERRUPT ENABLE RESET */
    volatile uint32 DMA_Reserved_0x0F8;    /**< @brief Offset: 0x0F8;       Reserved */
    volatile uint32 DMA_HBCINTENAS;        /**< @brief Offset: 0x0FC;       HBC INTERRUPT ENABLE SET */
    volatile uint32 DMA_Reserved_0x100;    /**< @brief Offset: 0x100;       Reserved */
    volatile uint32 DMA_HBCINTENAR;        /**< @brief Offset: 0x104;       HBC INTERRUPT ENABLE RESET */
    volatile uint32 DMA_Reserved_0x108;    /**< @brief Offset: 0x108;       Reserved */
    volatile uint32 DMA_BTCINTENAS;        /**< @brief Offset: 0x10C;       BTC INTERRUPT ENABLE SET */
    volatile uint32 DMA_Reserved_0x110;    /**< @brief Offset: 0x110;       Reserved */
    volatile uint32 DMA_BTCINTENAR;        /**< @brief Offset: 0x114;       BTC INTERRUPT ENABLE RESET */
    volatile uint32 DMA_Reserved_0x118;    /**< @brief Offset: 0x118;       Reserved */
    volatile uint32 DMA_GINTFLAG;          /**< @brief Offset: 0x11C;       GLOBAL INTERRUPT FLAG */
    volatile uint32 DMA_Reserved_0x120;    /**< @brief Offset: 0x120;       Reserved */
    volatile uint32 DMA_FTCFLAG;           /**< @brief Offset: 0x124;       FTC INTERRUPT FLAG */
    volatile uint32 DMA_Reserved_0x128;    /**< @brief Offset: 0x128;       Reserved */
    volatile uint32 DMA_LFSFLAG;           /**< @brief Offset: 0x12C;       LFS INTERRUPT FLAG */
    volatile uint32 DMA_Reserved_0x130;    /**< @brief Offset: 0x130;       Reserved */
    volatile uint32 DMA_HBCFLAG;           /**< @brief Offset: 0x134;       HBC INTERRUPT FLAG */
    volatile uint32 DMA_Reserved_0x138;    /**< @brief Offset: 0x138;       Reserved */
    volatile uint32 DMA_BTCFLAG;           /**< @brief Offset: 0x13C;       BTC INTERRUPT FLAG */
    volatile uint32 DMA_Reserved_0x140;    /**< @brief Offset: 0x140;       Reserved */
    volatile uint32 DMA_BERFLAG;           /**< @brief Offset: 0x144;       BER INTERRUPT FLAG */
    volatile uint32 DMA_Reserved_0x148;    /**< @brief Offset: 0x148;       Reserved */
    volatile uint32 DMA_FTCAOFFSET;        /**< @brief Offset: 0x14C;       FTCA INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_LFSAOFFSET;        /**< @brief Offset: 0x150;       LFSA INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_HBCAOFFSET;        /**< @brief Offset: 0x154;       HBCA INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_BTCAOFFSET;        /**< @brief Offset: 0x158;       BTCA INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_BERAOFFSET;        /**< @brief Offset: 0x15C;       BERA INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_FTCBOFFSET;        /**< @brief Offset: 0x160;       FTCB INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_LFSBOFFSET;        /**< @brief Offset: 0x164;       LFSB INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_HBCBOFFSET;        /**< @brief Offset: 0x168;       HBCB INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_BTCBOFFSET;        /**< @brief Offset: 0x16C;       BTCB INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_BERBOFFSET;        /**< @brief Offset: 0x170;       BERB INTERRUPT CHANNEL OFFSET */
    volatile uint32 DMA_Reserved_0x174;    /**< @brief Offset: 0x174;       Reserved */
    volatile uint8  DMA_PTCRL_PENDB;       /**< @brief Offset: 0x178;       PORT CONTROL Transactions Pending for Port B */
    volatile uint8  DMA_PTCRL_BYB_PRIO;    /**< @brief Offset: 0x179;       PORT CONTROL Bypassing of FIFO and Priority Scheme for Port B */
    volatile uint8  DMA_PTCRL_PENDA;       /**< @brief Offset: 0x17A;       PORT CONTROL Transactions Pending for Port A */
    volatile uint8  DMA_PTCRL_BYA_PRIO;    /**< @brief Offset: 0x17B;       PORT CONTROL Bypassing of FIFO and Priority Scheme for Port A */
    volatile uint32 DMA_RTCTRL;            /**< @brief Offset: 0x17C;       RAM TEST CONTROL */
    volatile uint32 DMA_DCTRL;             /**< @brief Offset: 0x180;       DEBUG CONTROL */
    volatile uint32 DMA_WPR;               /**< @brief Offset: 0x184;       WATCH POINT */
    volatile uint32 DMA_WMR;               /**< @brief Offset: 0x188;       WATCH MASK */
    volatile uint32 DMA_PAACSADDR;         /**< @brief Offset: 0x18C;       PORT A ACTIVE CHANNEL SOURCE ADDRESS */
    volatile uint32 DMA_PAACDADDR;         /**< @brief Offset: 0x190;       PORT A ACTIVE CHANNEL DESTINATION ADDRESS */
    volatile uint32 DMA_PAACTC;            /**< @brief Offset: 0x194;       PORT A ACTIVE CHANNEL TRANSFER COUNT */
    volatile uint32 DMA_PBACSADDR;         /**< @brief Offset: 0x198;       PORT B ACTIVE CHANNEL SOURCE ADDRESS */
    volatile uint32 DMA_PBACDADDR;         /**< @brief Offset: 0x19C;       PORT B ACTIVE CHANNEL DESTINATION ADDRESS */
    volatile uint32 DMA_PBACTC;            /**< @brief Offset: 0x1A0;       PORT B ACTIVE CHANNEL TRANSFER COUNT */
    volatile uint32 DMA_Reserved_0x1A4;    /**< @brief Offset: 0x1A4;       Reserved */
    volatile uint32 DMA_DMAPCR;            /**< @brief Offset: 0x1A8;       PARITY CONTROL */
    volatile uint32 DMA_DMAPAR;            /**< @brief Offset: 0x1AC;       PARITY ERROR ADDRESS */
    volatile uint32 DMA_DMAMPCTRL;         /**< @brief Offset: 0x1B0;       MEMORY PROTECTION CONTROL */
    volatile uint32 DMA_DMAMPST;           /**< @brief Offset: 0x1B4;       MEMORY PROTECTION STATUS */
    volatile uint32 DMA_DMAMPR0S;          /**< @brief Offset: 0x1B8;       MEMORY PROTECTION REGION 0 START ADDRESS */
    volatile uint32 DMA_DMAMPR0E;          /**< @brief Offset: 0x1BC;       MEMORY PROTECTION REGION 0 END ADDRESS */
    volatile uint32 DMA_DMAMPR1S;          /**< @brief Offset: 0x1C0;       MEMORY PROTECTION REGION 1 START ADDRESS */
    volatile uint32 DMA_DMAMPR1E;          /**< @brief Offset: 0x1C4;       MEMORY PROTECTION REGION 1 END ADDRESS */
    volatile uint32 DMA_DMAMPR2S;          /**< @brief Offset: 0x1C8;       MEMORY PROTECTION REGION 2 START ADDRESS */
    volatile uint32 DMA_DMAMPR2E;          /**< @brief Offset: 0x1CC;       MEMORY PROTECTION REGION 2 END ADDRESS */
    volatile uint32 DMA_DMAMPR3S;          /**< @brief Offset: 0x1D0;       MEMORY PROTECTION REGION 3 START ADDRESS */
    volatile uint32 DMA_DMAMPR3E;          /**< @brief Offset: 0x1D4;       MEMORY PROTECTION REGION 3 END ADDRESS */
} Dma_GlobalRegisterType;

typedef Dma_GlobalRegisterType* Dma_GlobalRegisterPtrType;	/**< @brief Defines a pointer to Dma_GlobalRegisterType */
typedef Dma_ChanCtrlType*       Dma_ChanCtrlPtrType;		/**< @brief Defines a pointer to Dma_ChanCtrlType */

/** @brief Macro used to set a single bit at specified position */
#define DMA_BIT(BitPos)      (((uint32)0x1U) << (BitPos))

/** @name Definitions for hardware trigger sources for LS1xxxx, LS2xxxx triggers Dma in compatibility mode
* @{
*/
#define DMA_REQ_SPI2_RX         ((Dma_TriggerType)2U)
#define DMA_REQ_SPI2_TX         ((Dma_TriggerType)3U)
#define DMA_REQ_SPI4_RX         ((Dma_TriggerType)24U)
#define DMA_REQ_SPI4_TX         ((Dma_TriggerType)25U)

#define DMA_REQ_SPI1_RX         ((Dma_TriggerType)0U)
#define DMA_REQ_SPI1_TX         ((Dma_TriggerType)1U)
#define DMA_REQ_SPI3_RX         ((Dma_TriggerType)14U)
#define DMA_REQ_SPI3_TX         ((Dma_TriggerType)15U)
#define DMA_REQ_SPI5_RX         ((Dma_TriggerType)30U)
#define DMA_REQ_SPI5_TX         ((Dma_TriggerType)31U)
/** @} */

/** @brief Defines the Base address where the Global Registers of the Dma hardware channels begin */
#define DMA_GLOBAL_REGISTER_BASE_ADDRESS          ((Dma_GlobalRegisterPtrType) 0xFFFFF000U)

/** @brief Defines the Base address where the Primary Control Packets of the Dma hardware channels begin */
#define DMA_PRIMARY_CONTROL_PACKET_BASE_ADDRESS   ((Dma_ChanCtrlPtrType) 0xFFF80000U)

#define DMA_HW_UNIT_1 	(1U)	/**< @brief Defines an id of the Dma hardware unit 1. It is assigned value 1 */
#define DMA_HW_UNIT_2 	(2U)	/**< @brief Defines an id of the Dma hardware unit 2. It is assigned value 2 */
#define DMA_HW_UNIT_3 	(3U)	/**< @brief Defines an id of the Dma hardware unit 3. It is assigned value 3 */
#define DMA_HW_UNIT_4 	(4U)	/**< @brief Defines an id of the Dma hardware unit 4. It is assigned value 4 */

/**
 * @struct Dma_NotificationType
 * @brief Defines the notification type of Dma.
 * */
typedef struct
{
    void (*NotificationFrame)(void);	/**< @brief pointer to a callback function for frame end notification */
    void (*NotificationBlock)(void);	/**< @brief pointer to a callback function for Block end notification */
    uint32 HWUnit;						/**< @brief Hardware unit Id */
}Dma_NotificationType;

#if defined(CFG_TMS570LS12X)
/** @brief Hardware unit Id */
/*lint -e923 MISRA:HARDWARE_ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
/*lint -e844 MISRA:HARDWARE_ACCESS:could be declared as pointing to const:[MISRA 2012 Rule 8.13, advisory] */
static const Dma_GlobalRegisterPtrType Dma_GlobalRegister = DMA_GLOBAL_REGISTER_BASE_ADDRESS; /**< @brief Pointer to Dma global register */

#endif

/**
 * @enum 	Spi_TransferType
 * @brief	Defines the spi transfer type (MSB/LSB).
 */
typedef enum
{
    SPI_MSB = 0U,	/**< @brief Spi transfer starting with MSB is assigned value 0. */
    SPI_LSB = 1U	/**< @brief Spi transfer starting with LSB is assigned value 1. */
} Spi_TransferType;

/** @name Definitions for hardware trigger sources for LS1xxxx, LS2xxxx triggers Dma in compatibility mode
* @{
*/
/**
 * @enum 	Spi_LevelType
 * @brief	Defines the type for SpiLevel.
 */
typedef enum
{
    SPI_LOW = STD_LOW,	/**< @brief Spi low level is assigned value 0. */
    SPI_HIGH			/**< @brief Spi high level is assigned value 1. */
} Spi_LevelType;

/**
 * @enum 	Spi_ScsType
 * @brief	Defines the type for SpiScs.
 */
typedef enum
{
    SPI_SCS0 = 0U,
    SPI_SCS1,
    SPI_SCS2,
    SPI_SCS3
} Spi_ScsType;

/**
 * @enum 	Spi_ScsType
 * @brief	Defines the type for Spi_CsMode.
 */
typedef enum
{
    SPI_SINGLE = 0U,
    SPI_CONTINUOUS = 1U
} Spi_CsModeType;

/**
 * @enum 	Spi_LoopbackModeType
 * @brief	Defines the type for LoopbackMode.
 */
typedef enum
{
    SPI_DIGITAL_LPBK = 0U,
    SPI_ANALOG_LPBK = 1U
} Spi_LoopbackModeType;
/** @} */

/**
 * @enum 	Spi_HwEventDefType
 * @brief	Event definitions of the spi job state machine.
 */
typedef enum
{
    SPI_HW_EV_INIT = 0U,			/**< @brief Initialization event is assigned value 0. */
    SPI_HW_EV_SEQ_START = 1U,		/**< @brief Sequence start event is assigned value 1. */
    SPI_HW_EV_JOB_START = 2U,		/**< @brief Job start event is assigned value 2. */
    SPI_HW_EV_JOB_FINISHED = 3U,	/**< @brief Job finished event is assigned value 3. */
    SPI_HW_EV_CANCEL = 4U,			/**< @brief Cancel event is assigned value 4. */
    SPI_HW_EV_FAILED = 5U,			/**< @brief Communication fail event is assigned value 5. */
    SPI_HW_EV_CONSUMED = 6U			/**< @brief Finished event is assigned value 6. */
} Spi_HwEventDefType;

/**
 * @enum 	Spi_HwModeType
 * @brief	Defines the type for Spi hardware mode.
 */
typedef enum
{
    SPI_HW_UNDEF = 0U,	/**< @brief Undefined hardware mode is assigned value 0. */
    SPI_HW_SYNC  = 1U,	/**< @brief Synchronous hardware mode is assigned value 1. */
    SPI_HW_ASYNC = 2U	/**< @brief Asynchronous hardware mode is assigned value 2. */
} Spi_HwModeType;

/** @name Definitions for Spi_HwEventType_fd and Spi_JobSortedType_fd types
* @{
*/

typedef struct Spi_JobSortedType_fd Spi_JobSortedType;	/**< @brief Forward declaration of Spi_JobSortedType */
typedef struct Spi_HwEventType_fd   Spi_HwEventType;	/**< @brief Forward declaration of Spi_HwEventType */

/**
 * @struct Spi_HwEventType_fd
 * @brief Event object definitions of the spi hw event.
 * */
struct Spi_HwEventType_fd
{
    Spi_HwEventType* SeqPrev_pt;	/**< @brief Pointer to previous event */
    Spi_HwEventType* SeqNext_pt;	/**< @brief Pointer to next event */
    volatile uint8 Event_u8;		/**< @brief Variable holding the event number */
    uint8  Guard_u8 ;				/**< @brief Variable used as an event guard to ensure proper sequence */
    uint8  TaskID_u8  ;   			/**< @brief Variable describing the kind of job, sequence to execute. Can be used for both */
    uint8  NrOfJobs_u8;   			/**< @brief Variable holding the number of jobs, sequences within this event */
};

/**
 * @struct Spi_JobSortedType_fd
 * @brief Event object definitions of the spi job state machine.
 * */
struct Spi_JobSortedType_fd
{
    Spi_JobSortedType* JobNext_pt;	/**< @brief pointer to next job of a sequence */
    uint8  JobID_u8   ;   			/**< @brief Variable holding the job id. Used to access job structure */
    uint8  SeqID_u8   ;   			/**< @brief Variable holding the sequence id. marks the job assigned to this sequence */
    uint8  JobStatus_u8 ; 			/**< @brief Variable holding the job internal status in the sorted priority queue */
};

/** @} */
#endif  /* SPI_HW_TMS570_H */
