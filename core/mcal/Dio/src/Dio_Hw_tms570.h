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

/** @file Dio_Hw_tms570.h
 *	This file contains the hardware specific register declations.
 *	The General purpose Input/Output registers are categorized to GIOA,GIOB and GIOC
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Dio
  *  This is the TMS 570 Mcal Dio Group
  *  @{
  */
#ifndef DIO_HW_TMS_570_H_
#define DIO_HW_TMS_570_H_

/* @req SWS_Dio_00170 - Dio.h shall include Std_Types.h. */
#include "Std_Types.h"

/* Important note: the board has two dedicated GIO ports, but port GIO_PORTC is
 * actually one of the NHET units being used as general I/O. GIOA and GIOB ports
 * have 8 pins/channels each, but the NHET has 32, so some functions that deal
 * with offsets act differently for GIO_PORTC
 */
/**
  * @name  GIO Port Register Address
  * @{
  */
#define GIO_PORTA_BASE ((GIO_RegisterType *)0xFFF7BC34u) /**< @brief Base address of GIOA*/
#define GIO_PORTB_BASE ((GIO_RegisterType *)0xFFF7BC54u) /**< @brief Base address of GIOB*/
#define GIO_PORTC_BASE ((GIO_RegisterType *)0xFFF7B84Cu) /**< @brief Base address of GIOC - N2HET as GIO*/

/** @} */

/**
*   @brief GIO Port Register Definition
*   This type is used to access the GIO Port Registers.
*/
typedef volatile struct gioPort
{
    uint32 DIR;    /**< @brief 0x0000: Data Direction Register         */
    uint32 DIN;    /**< @brief 0x0004: Data Input Register             */
    uint32 DOUT;   /**< @brief 0x0008: Data Output Register            */
    uint32 DSET;   /**< @brief 0x000C: Data Output Set Register   	   */
    uint32 DCLR;   /**< @brief 0x0010: Data Output Clear Register	   */
    uint32 PDR;    /**< @brief 0x0014: Open Drain Register             */
    uint32 PULDIS; /**< @brief 0x0018: Pull Up Disable Register        */
    uint32 PSL;    /**< @brief 0x001C: Pull Up/Down Selection Register */
} GIO_RegisterType;

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
*   @brief  SPI module Register type (configured as GIO - SPI5)
*   This type is used to access the SPI Registers that are configured as GIO (SPI5)
*/

typedef volatile struct spiJoinedPort
{
    uint32_t* dirReg; /**< @brief Data Direction Register */
    uint32_t* inReg;  /**< @brief Data Input Register     */
    uint32_t* outReg; /**< @brief Data Output Register    */
} GIO_SpiRegisterCollectionType;

/**
  * @name  Spi Register Address
  * @{
  */
#define DIRECTION_REG 0xFFF7FC18u /**< @brief Address of the Data Direction Register */
#define DATA_IN_REG   0xFFF7FC1Cu /**< @brief Address of the Data Input Register */
#define DATA_OUT_REG  0xFFF7FC20u /**< @brief Address of the Data Output Register */

/** @} */

/**
  * @name  Adc Register Address
  * @{
  */
#define ADEVT_BASE					0xFFF7C000u /**< @brief Base address of ADEVT pin */
#define ADEVT_OFFSET				0x0FCu      /**< @brief Offset value of ADEVT pin */

#define ADEVT_GIO_BASE              ((Adc_GioRegisterType*)(ADEVT_BASE + ADEVT_OFFSET))
/** @} */


/**
  * @name  Dio module (NHET,SPI and GIO) Index
  * @{
  */

#define NHET_GIO_PORT_INDEX 2   /**< @brief Index for NHET module that can be configured as GIO*/
#define SPI5_GIO_PORT_INDEX 3   /**< @brief Index for SPI module that can be configured as GIO */
#define ADC_GIO_PORT_INDEX  4   /**< @brief Index for ADEVT that can be configured as GIO */
#define ADC_CHANNEL_NUMBER 62u  /**< @brief Channel Number of ADC Unit (ADCEVT pin) */
#define SPI5_FIRST_CHANNEL 48u /**< @brief Number of channels in SPI5 module */
#define SPI_SOMI_SHIFT (24)     /**< @brief SPI module SOMI SHIFT value */
#define SPI_SIMO_SHIFT (16)     /**< @brief SPI module SIMO SHIFT value */
#define SPI_CLK_SHIFT  (9)      /**< @brief SPI module Clock SHIFT value */
#define SPI_ENA_SHIFT  (8)      /**< @brief SPI module ENABLE SHIFT value */
#define SPI_CS_SHIFT   (0)      /**< @brief SPI module Chip Select SHIFT value */
/** @} */

/**
  * @name  Channel, Port and Bit values
  * @{
  */

#define GIO_CHANNEL     16u
#define CHANNEL_TO_PORT  8u
#define SPI_BIT         14u
#define NHET_BIT        32u
/** @} */

/**
  * @name  SPI Bit and Ports
  * @{
  */
#define SPI_PIN_27    27
#define SPI_PIN_26    26
#define SPI_PIN_25    25
#define SPI_PIN_24    24
#define SPI_PIN_19    19
#define SPI_PIN_18    18
#define SPI_PIN_17    17
#define SPI_PIN_16    16
#define SPI_PIN_9     9
#define SPI_PIN_8     8
#define SPI_PIN_3     3
#define SPI_PIN_2     2
#define SPI_PIN_1     1
#define SPI_PIN_0     0

#define SPI_BIT_13    13
#define SPI_BIT_12    12
#define SPI_BIT_11    11
#define SPI_BIT_10    10
#define SPI_BIT_9     9
#define SPI_BIT_8     8
#define SPI_BIT_7     7
#define SPI_BIT_6     6
#define SPI_BIT_5     5
#define SPI_BIT_4     4
#define SPI_BIT_3     3
#define SPI_BIT_2     2
#define SPI_BIT_1     1
#define SPI_BIT_0     0
/** @} */


/**
  * @name  GIO,SPI Levels
  * @{
  */
#define GPIO_LEVEL_MAX     0xFFu
#define SPI_LEVEL_MAX      0x3FFFu
#define SPI_BIT_LEVEL 	   0xFu
#define GPIO_WRITE_LEVEL   0x00FFFFFFu

/** @} */
/*===========================================================================*/
/* Module macros.                                                            */
/*===========================================================================*/
/**
  * @brief   Port value from the channel ID
  * @details Call the getPortFromChannel internal function
  * @param[in] _channelId  Id of the channel
  */
#define DIO_GET_PORT_FROM_CHANNEL_ID(_channelId) getPortFromChannel(_channelId)

/**
  * @brief   Bit value from the channel ID
  * @details Call the getBitFromChannel internal function
  * @param[in] _channelId  Id of the channel
  */
#define DIO_GET_BIT_FROM_CHANNEL_ID(_channelId) getBitFromChannel(_channelId)

/**
  * @brief   Address of the Direction, Input and Output registers for the SPI5 module
  */
#define GIO_SPI5PORT   ((GIO_SpiRegisterCollectionType)spi5Collection)


#endif /* DIO_HW_TMS_570_H_ */
/** @}*/
/** @}*/
