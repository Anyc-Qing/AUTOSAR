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

/** @file Port_Hw_tms570.h
 *  This files contains the hardware specific register definitions that are required by the port module.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Port
  *  This is the TMS 570 Mcal Port Group
  *  @{
  */

#ifndef PORT_HW_TMS570_H_
#define PORT_HW_TMS570_H_

/**
  * @name    Values used in Port_Hw_tms570.c
  * @{
  */
#define PORT_PIN_PORT_BASE_BIT	    1u
#define PORT_PIN_ADEVT_VALUE   	    1u /* Value to SET ADEVT register*/
#define PORT_PIN_PORT_SHIFT		    8u
#define PORT_PIN_PIN_SHIFT		    0x1Fu
#define PORT_PIN_DIO_SPIX_SHIFT		8u
#define PORT_PIN_DIO_SPIX_MASK		7u

/* PORT_PIN_MULTIPLEXBIT will be used in the MULTIPLEXBIT and REGOFFSET calculation*/
#define PORT_PIN_MULTIPLEXBIT		8u
#define PORT_PIN_BASE			    0xFFu
#define PORT_NOT_CONFIGURED 		0x00000000
/** @} */

/*===========================================================================*/
/* Module macros.                                                            */
/*===========================================================================*/
/**
  * @brief   Create MASK for the PIN
  * @details Only masked values should be while configuring the hardware registers
  * PORT_PIN_PIN_SHIFT - 0xFFu and  PORT_PIN_PORT_BASE_BIT - 1u
  * @param[in] _pin    Value of the pin that should be masked
  */
#define GET_PIN_MASK(_pin) ((uint32)PORT_PIN_PORT_BASE_BIT << (_pin & (uint32)PORT_PIN_PIN_SHIFT))
/**
  * @brief   Create PORT value for the PIN
  * @details Macro used for creating PORT value for the PIN
  * PORT_PIN_PIN_SHIFT - 0xFFu
  * @param[in] _pin    Value of the pin
  */
#define GET_PIN_PORT(_pin) (_pin >> PORT_PIN_PORT_SHIFT)
/**
  * @brief   Create PIN  value for the PIN
  * @details Macro used for checking whether the PIN provided is correct
  * PORT_PIN_PIN_SHIFT - 0xFFu
  * @param[in] _pin    Value of the pin
  */
#define GET_PIN_PIN(_pin)  (_pin & PORT_PIN_PIN_SHIFT)

/**
*    @brief GIO Register Frame Pointer
*   This pointer is used by the GIO driver to access the gio module registers.
*/
#define gioREG   ((GIO_Base_RegisterType *)0xFFF7BC00U)

/**
  * @name  Hardware Unit BASE
  * @{
  */

#define GIO_BASE					0xFFF7BC00u /**< @brief Base address of GIO module */
#define GIOA_OFFSET					0x34u       /**< @brief Offset value of GIOA module */
#define GIOB_OFFSET					0x54u       /**< @brief Offset value of GIOB module */

#define N2HET1_BASE					0xFFF7B800u /**< @brief Base address of N2HET1 module */
#define N2HET2_BASE					0xFFF7B900u /**< @brief Base address of N2HET2 module */
#define NHET_OFFSET					0x4Cu       /**< @brief Offset value of NHET module */

#define N2HET1_FULL_REGISTER ((Port_N2HETControlRegisterType *)N2HET1_BASE)
#define N2HET2_FULL_REGISTER ((Port_N2HETControlRegisterType *)N2HET2_BASE)

#define ADEVT_BASE					0xFFF7C000u /**< @brief Base address of ADEVT pin */
#define ADEVT_OFFSET				0x0FCu      /**< @brief Offset value of ADEVT pin */

#define PORT_GIO_0_BASE				((Port_GioRegisterType *) (GIO_BASE + GIOA_OFFSET))
#define PORT_GIO_1_BASE 			((Port_GioRegisterType *) (GIO_BASE + GIOB_OFFSET))
#define PORT_GIO_2_BASE 			((Port_GioRegisterType *) (N2HET1_BASE + NHET_OFFSET))
#define PORT_GIO_3_BASE 			((Port_GioRegisterType *) (N2HET2_BASE + NHET_OFFSET))
#define PORT_GIO_4_BASE 			((Port_GioRegisterType *) PORT_NOT_CONFIGURED)
#define PORT_GIO_5_BASE				((Port_GioRegisterType *) PORT_NOT_CONFIGURED)
#define PORT_GIO_6_BASE 			((Port_GioRegisterType *) PORT_NOT_CONFIGURED)
#define PORT_GIO_7_BASE 			((Port_GioRegisterType *) PORT_NOT_CONFIGURED)
#define PORT_GIO_8_BASE 			((Port_GioRegisterType *) PORT_NOT_CONFIGURED)
#define PORT_GIO_9_BASE 			((Port_GioRegisterType *) PORT_NOT_CONFIGURED)
#define PORT_GIO_10_BASE 			((Port_GioRegisterType *) PORT_NOT_CONFIGURED)
#define PORT_NUMBER_OF_PORTS 		11u

#define MIBSPI1_BASE				0xFFF7F400u /**< @brief Base address of SPI1 module */
#define MIBSPI2_BASE				0xFFF7F600u /**< @brief Base address of SPI2 module */
#define MIBSPI3_BASE				0xFFF7F800u /**< @brief Base address of SPI3 module */
#define MIBSPI4_BASE				0xFFF7FA00u /**< @brief Base address of SPI4 module */
#define MIBSPI5_BASE				0xFFF7FC00u /**< @brief Base address of SPI5 module */
#define SPIPC0_OFFSET				0x14u       /**< @brief Offset value of SPI module */

#define PORT_SPI1_GIO_BASE			((Port_SpiControlRegisterType*) (MIBSPI1_BASE + SPIPC0_OFFSET))
#define PORT_SPI2_GIO_BASE			((Port_SpiControlRegisterType*) (MIBSPI2_BASE + SPIPC0_OFFSET))
#define PORT_SPI3_GIO_BASE			((Port_SpiControlRegisterType*) (MIBSPI3_BASE + SPIPC0_OFFSET))
#define PORT_SPI4_GIO_BASE			((Port_SpiControlRegisterType*) (MIBSPI4_BASE + SPIPC0_OFFSET))
#define PORT_SPI5_GIO_BASE			((Port_SpiControlRegisterType*) (MIBSPI5_BASE + SPIPC0_OFFSET))

#define SPI1GCR						((uint32_t*) MIBSPI1_BASE)
#define SPI2GCR						((uint32_t*) MIBSPI2_BASE)
#define SPI3GCR						((uint32_t*) MIBSPI3_BASE)
#define SPI4GCR						((uint32_t*) MIBSPI4_BASE)
#define SPI5GCR						((uint32_t*) MIBSPI5_BASE)

#define ADEVT_GIO_BASE              ((Adc_GioRegisterType*)(ADEVT_BASE + ADEVT_OFFSET))

#define IOMM_BASE_ADDR  0xFFFF1C00u /**< @brief Base address of IOMM*/


#define GIO_PORTA_BASE ((GIO_RegisterType *)0xFFF7BC34u) /**< @brief Base address of GIOA*/
#define GIO_PORTB_BASE ((GIO_RegisterType *)0xFFF7BC54u) /**< @brief Base address of GIOB*/
#define GIO_PORTC_BASE ((GIO_RegisterType *)0xFFF7B84Cu) /**< @brief Base address of GIOC - N2HET as GIO*/

/** @} */

/**
  * @name  Multiplexing Control Registers
  * @{
  */
#ifdef CFG_TMS570LC43X
#define PINMMR_MIN_OFFSET 37u
#define PINMMR_MULTIPLEX_OFFSET 38u
#define PINMMR_MAX_OFFSET 80u
/* Output Pin Multiplexing Control Registers */
#define PINMMR0_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x110u))
#define PINMMR1_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x114u))
#define PINMMR2_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x118u))
#define PINMMR3_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x11Cu))
#define PINMMR4_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x120u))
#define PINMMR5_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x124u))
#define PINMMR6_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x128u))
#define PINMMR7_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x12Cu))
#define PINMMR8_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x130u))
#define PINMMR9_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x134u))
#define PINMMR10_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x138u))
#define PINMMR11_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x13Cu))
#define PINMMR12_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x140u))
#define PINMMR13_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x144u))
#define PINMMR14_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x148u))
#define PINMMR15_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x14Cu))
#define PINMMR16_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x150u))
#define PINMMR17_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x154u))
#define PINMMR18_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x158u))
#define PINMMR19_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x15Cu))
#define PINMMR20_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x160u))
#define PINMMR21_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x164u))
#define PINMMR22_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x168u))
#define PINMMR23_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x16Cu))
#define PINMMR24_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x170u))
#define PINMMR25_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x174u))
#define PINMMR26_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x178u))
#define PINMMR27_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x17Cu))
#define PINMMR28_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x180u))
#define PINMMR29_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x184u))
#define PINMMR30_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x188u))
#define PINMMR31_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x18Cu))
#define PINMMR32_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x190u))
#define PINMMR33_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x194u))
#define PINMMR34_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x198u))
#define PINMMR35_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x19Cu))
#define PINMMR36_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x1A0u))
#define PINMMR37_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x1A4u))

/* Input Pin Multiplexing Control Registers */
#define PINMMR80_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x250u))
#define PINMMR81_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x254u))
#define PINMMR82_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x258u))
#define PINMMR83_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x25cu))
#define PINMMR84_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x260u))
#define PINMMR85_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x264u))
#define PINMMR86_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x268u))
#define PINMMR87_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x26cu))
#define PINMMR88_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x270u))
#define PINMMR89_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x274u))
#define PINMMR90_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x278u))
#define PINMMR91_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x27cu))
#define PINMMR92_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x280u))
#define PINMMR93_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x284u))
#define PINMMR94_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x288u))
#define PINMMR95_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x28cu))
#define PINMMR96_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x290u))
#define PINMMR97_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x294u))
#define PINMMR98_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x298u))
#define PINMMR99_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x29cu))

/* Special Functionality Multiplexing Control Registers */
#define PINMMR160_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x390u))
#define PINMMR161_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x394u))
#define PINMMR162_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x398u))
#define PINMMR163_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x39cu))
#define PINMMR164_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3a0u))
#define PINMMR165_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3a4u))
#define PINMMR166_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3a8u))
#define PINMMR167_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3acu))
#define PINMMR168_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3b0u))
#define PINMMR169_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3b4u))
#define PINMMR170_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3b8u))
#define PINMMR171_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3bcu))
#define PINMMR172_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3c0u))
#define PINMMR173_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3c4u))
#define PINMMR174_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3c8u))
#define PINMMR175_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3ccu))
#define PINMMR176_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3d0u))
#define PINMMR177_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3d4u))
#define PINMMR178_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3d8u))
#define PINMMR179_BASE_ADDR ((uint32 *)(IOMM_BASE_ADDR + 0x3dcu))

#elif defined(CFG_TMS570LS12X)
#define PINMMR0_BASE_ADDR ((uint32 *)0xFFFFEB10u)
#define PINMMR1_BASE_ADDR ((uint32 *)0xFFFFEB14u)
#define PINMMR2_BASE_ADDR ((uint32 *)0xFFFFEB18u)
#define PINMMR3_BASE_ADDR ((uint32 *)0xFFFFEB1Cu)
#define PINMMR4_BASE_ADDR ((uint32 *)0xFFFFEB20u)
#define PINMMR5_BASE_ADDR ((uint32 *)0xFFFFEB24u)
#define PINMMR6_BASE_ADDR ((uint32 *)0xFFFFEB28u)
#define PINMMR7_BASE_ADDR ((uint32 *)0xFFFFEB2Cu)
#define PINMMR8_BASE_ADDR ((uint32 *)0xFFFFEB30u)
#define PINMMR9_BASE_ADDR ((uint32 *)0xFFFFEB34u)
#define PINMMR10_BASE_ADDR ((uint32 *)0xFFFFEB38u)
#define PINMMR11_BASE_ADDR ((uint32 *)0xFFFFEB3Cu)
#define PINMMR12_BASE_ADDR ((uint32 *)0xFFFFEB40u)
#define PINMMR13_BASE_ADDR ((uint32 *)0xFFFFEB44u)
#define PINMMR14_BASE_ADDR ((uint32 *)0xFFFFEB48u)
#define PINMMR15_BASE_ADDR ((uint32 *)0xFFFFEB4Cu)
#define PINMMR16_BASE_ADDR ((uint32 *)0xFFFFEB50u)
#define PINMMR17_BASE_ADDR ((uint32 *)0xFFFFEB54u)
#define PINMMR18_BASE_ADDR ((uint32 *)0xFFFFEB58u)
#define PINMMR19_BASE_ADDR ((uint32 *)0xFFFFEB5Cu)
#define PINMMR20_BASE_ADDR ((uint32 *)0xFFFFEB60u)
#define PINMMR21_BASE_ADDR ((uint32 *)0xFFFFEB64u)
#define PINMMR22_BASE_ADDR ((uint32 *)0xFFFFEB68u)
#define PINMMR23_BASE_ADDR ((uint32 *)0xFFFFEB6Cu)
#define PINMMR24_BASE_ADDR ((uint32 *)0xFFFFEB70u)
#define PINMMR25_BASE_ADDR ((uint32 *)0xFFFFEB74u)
#define PINMMR26_BASE_ADDR ((uint32 *)0xFFFFEB78u)
#define PINMMR27_BASE_ADDR ((uint32 *)0xFFFFEB7Cu)
#define PINMMR28_BASE_ADDR ((uint32 *)0xFFFFEB80u)
#define PINMMR29_BASE_ADDR ((uint32 *)0xFFFFEB84u)
#define PINMMR30_BASE_ADDR ((uint32 *)0xFFFFEB88u)
#define PINMMR31_BASE_ADDR ((uint32 *)0xFFFFEB8Cu)
#define PINMMR32_BASE_ADDR ((uint32 *)0xFFFFEB90u)
#define PINMMR33_BASE_ADDR ((uint32 *)0xFFFFEB94u)
#define PINMMR34_BASE_ADDR ((uint32 *)0xFFFFEB98u)
#define PINMMR35_BASE_ADDR ((uint32 *)0xFFFFEB9Cu)
#define PINMMR36_BASE_ADDR ((uint32 *)0xFFFFEBA0u)
#define PINMMR37_BASE_ADDR ((uint32 *)0xFFFFEBA4u)
#define PINMMR38_BASE_ADDR ((uint32 *)0xFFFFEBA8u)
#define PINMMR39_BASE_ADDR ((uint32 *)0xFFFFEBACu)
#define PINMMR40_BASE_ADDR ((uint32 *)0xFFFFEBB0u)
#define PINMMR41_BASE_ADDR ((uint32 *)0xFFFFEBB4u)
#define PINMMR42_BASE_ADDR ((uint32 *)0xFFFFEBB8u)
#define PINMMR43_BASE_ADDR ((uint32 *)0xFFFFEBBCu)
#define PINMMR44_BASE_ADDR ((uint32 *)0xFFFFEBC0u)
#define PINMMR45_BASE_ADDR ((uint32 *)0xFFFFEBC4u)
#define PINMMR46_BASE_ADDR ((uint32 *)0xFFFFEBC8u)
#define PINMMR47_BASE_ADDR ((uint32 *)0xFFFFEBCCu)
#endif
/** @} */

/**
  * @name  MAGIC value - to set the GIO register
  * @{
  */
#ifdef CFG_TMS570LC43X
#define PORT_IOMM_KICK0 (IOMM_BASE_ADDR + 0x38u)
#define PORT_IOMM_KICK1 (IOMM_BASE_ADDR + 0x3Cu)
#elif defined(CFG_TMS570LS12X)
#define PORT_IOMM_KICK0 0xFFFFEA38u
#define PORT_IOMM_KICK1 0xFFFFEA3Cu
#endif

#define PORT_IOMM_KICK0_MAGIC (0x83e70b13u) /**< @brief MAGIC value that should be written in KICK0 */
#define PORT_IOMM_KICK1_MAGIC (0x95a4f1e0u) /**< @brief MAGIC value that should be written in KICK1 */
#define PORT_IOMM_KICK0_LOCK  (0x00000000u) /**< @brief Value to be written to LOCK the GIO register */
/** @} */

/**
*   @brief  GIO Module Registers (Hardware specific defintions)
*/
typedef volatile struct gioBase{
	uint32 GCR0;      /**< @brief 0x0000: Global Control Register */
    uint32 PWDN;      /**< @brief 0x0004: Power Down Register */
    uint32 INTDET;    /**< @brief 0x0008: Interrupt Detect Regsiter*/
    uint32 POL;       /**< @brief 0x000C: Interrupt Polarity Register */
    uint32 INTENASET; /**< @brief 0x0010: Interrupt Enable Set Register */
    uint32 INTENACLR; /**< @brief 0x0014: Interrupt Enable Clear Register */
    uint32 LVLSET;    /**< @brief 0x0018: Interrupt Priority Set Register */
    uint32 LVLCLR;    /**< @brief 0x001C: Interrupt Priority Clear Register */
    uint32 FLG;       /**< @brief 0x0020: Interrupt Flag Register */
    uint32 OFFSET0;   /**< @brief 0x0024: Interrupt Offset A Register */
    uint32 OFFSET1;   /**< @brief 0x0028: Interrupt Offset B Register */
} GIO_Base_RegisterType;

/**
*   @brief  SPI module Register type (configured as GIO - SPI5)
*   This type is used to access the SPI Registers that are configured as GIO (SPI5)
*/
typedef volatile struct spiJoinedPort
{
    uint32_t* dirReg; /**< @brief Data Direction Register */
    uint32_t* inReg;  /**< @brief Data Input Register */
    uint32_t* outReg; /**< @brief Data Output Register */
} GIO_SpiRegisterCollectionType;


/**
*   @brief GIO Port Register Definition
*   This type is used to access the GIO Port Registers.
*/
typedef volatile struct gioPort
{
	uint32 DIR;    /**< @brief 0x0000: Data Direction Register */
	uint32 DIN;    /**< @brief 0x0004: Data Input Register */
	uint32 DOUT;   /**< @brief 0x0008: Data Output Register */
	uint32 DSET;   /**< @brief 0x000C: Data Output Set Register */
	uint32 DCLR;   /**< @brief 0x0010: Data Output Clear Register */
	uint32 PDR;    /**< @brief 0x0014: Open Drain Regsiter */
	uint32 PULDIS; /**< @brief 0x0018: Pullup Disable Register */
	uint32 PSL;    /**< @brief 0x001C: Pull Up/Down Selection Register */
} GIO_RegisterType;

/**
*   @brief  Port Register Type definition for GIO
*/
typedef volatile struct {
    uint32 DIR;    /**< @brief DIR    */
    uint32 DIN;    /**< @brief DIN    */
    uint32 DOUT;   /**< @brief DOUT   */
    uint32 DSET;   /**< @brief DSET   */
    uint32 DCLR;   /**< @brief DCLR   */
    uint32 PDR;    /**< @brief PDR    */
    uint32 PULDIS; /**< @brief PULDIS */
    uint32 PSL;    /**< @brief PSL    */
} Port_GioRegisterType;


/**
*   @brief  Register Type definition for Adc that is configured as Dio (ADEVT1 pin)
*/
typedef volatile struct {
    uint32 DIR;    /**< @brief DIR    - Direction register  */
    uint32 DOUT;   /**< @brief DOUT   - Output Value register */
    uint32 DIN;    /**< @brief DIN    - Input  Value register    */
    uint32 DSET;   /**< @brief DSET   - Pin Set register  */
    uint32 DCLR;   /**< @brief DCLR   - Pin Clear register   */
    uint32 PDR;    /**< @brief PDR    - Open drain enable register  */
    uint32 PULDIS; /**< @brief PULDIS - Pull control disable register */
    uint32 PSL;    /**< @brief PSL    - Pull control select register */
} Adc_GioRegisterType;


/**
*   @brief  Port Register Type definition for SPI5 module
*/
typedef volatile struct {
    uint32 PC0; /**< @brief Sets Spi to GIO or SPI function */
    uint32 PC1; /**< @brief DIR    */
    uint32 PC2; /**< @brief DIN    */
    uint32 PC3; /**< @brief DOUT   */
    uint32 PC4; /**< @brief DSET   */
    uint32 PC5; /**< @brief DCLR   */
    uint32 PC6; /**< @brief PDR    */
    uint32 PC7; /**< @brief PULDIS */
    uint32 PC8; /**< @brief PSL    */
} Port_SpiControlRegisterType;

/**
*   @brief  Port Register Type definition for N2HET module
*/
typedef volatile struct {
    uint32 HETGCR;      /**< @brief 0x00 */
    uint32 HETPFR;      /**< @brief 0x04 */
    uint32 HETADDR;     /**< 0x08 */
    uint32 HETOFF1;     /**< 0x0C */
    uint32 HETOFF2;     /**< 0x10 */
    uint32 HETINTENAS;  /**< 0x14 */
    uint32 HETINTENAC;  /**< 0x18 */
    uint32 HETEXC1;     /**< 0x1C */
    uint32 HETEXC2;     /**< 0x20 */
    uint32 HETPRY;      /**< 0x24 */
    uint32 HETFLG;      /**< 0x28 */
    uint32 HETAND;      /**< 0x2C */
    uint32 reserved1;   /**< 0x30 */
    uint32 HETHRSH;     /**< 0x34 */
    uint32 HETXOR;      /**< 0x38 */
    uint32 HETREQENS;   /**< 0x3C */
    uint32 HETREQENC;   /**< 0x40 */
    uint32 HETREQDS;    /**< 0x44 */
    uint32 reserved2;   /**< 0x48 */
    uint32 HETDIR;      /**< 0x4C */
    uint32 HETDIN;      /**< 0x50 */
    uint32 HETDOUT;     /**< 0x54 */
    uint32 HETDSET;     /**< 0x58 */
    uint32 HETDCLR;     /**< 0x5C */
    uint32 HETPDR;      /**< 0x60 */
    uint32 HETPULDIS;   /**< 0x64 */
    uint32 HETPSL;      /**< 0x68 */
    uint32 reserved3[2];    /**< 0x6C - 0x70 */
    uint32 HETPCR;      /**< 0x74 */
    uint32 HETPAR;      /**< 0x78 */
    uint32 HETPPR;      /**< 0x7C */
    uint32 HETSFPRLD;   /**< 0x80 */
    uint32 HETSFENA;    /**< 0x84 */
    uint32 reserved4;   /**< 0x88 */
    uint32 HETLBPSEL;   /**< 0x8C */
    uint32 HETLBPDIR;   /**< 0x90 */
    uint32 HETPINDIS;   /**< 0x94 */
} Port_N2HETControlRegisterType;


/*lint -e923 MISRA:HARDWARE ACCESS:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
static Port_GioRegisterType * const Gio_Port_Base[] = {
    PORT_GIO_0_BASE,
    PORT_GIO_1_BASE,
    PORT_GIO_2_BASE,
    PORT_GIO_3_BASE,
    PORT_GIO_4_BASE,
    PORT_GIO_5_BASE,
    PORT_GIO_6_BASE,
    PORT_GIO_7_BASE,
    PORT_GIO_8_BASE,
    PORT_GIO_9_BASE,
    PORT_GIO_10_BASE
};

#endif /* PORT_HW_TMS570_H_ */
/** @}*/
/** @}*/
