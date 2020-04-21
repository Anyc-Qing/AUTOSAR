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

/** @file Spi_Irq.c
 *  This files contains implementations of interrupt service routines used for event triggered notifications.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Spi
  *  This is the Mcal Spi Group
  *  @{
  */

#include "Spi_Internal.h"
#include "Spi_MemMap.h"

#define SPI_HW_UNIT_0	(0)		/**< @brief Identifier of Spi hardware unit 0 */
#define SPI_HW_UNIT_1	(1)		/**< @brief Identifier of Spi hardware unit 1 */
#define SPI_HW_UNIT_2	(2)		/**< @brief Identifier of Spi hardware unit 2 */
#define SPI_HW_UNIT_3	(3)		/**< @brief Identifier of Spi hardware unit 3 */
#define SPI_HW_UNIT_4	(4)		/**< @brief Identifier of Spi hardware unit 4 */

#if (SPI_USE_HW_UNIT_0 == STD_ON) && (SPI_HW_UNIT_0_USE_DMA == STD_OFF)
/* @CODECOV:OTHER_TEST_EXIST: HW dependency on external chip. Emulation of RX/TX errors out of scope of unit test. Test should be done on integration level */
/*  @brief ISR to to handle Spi rx/tx errors for channel 0 */
void Spi_IrqUnit0TxRxERR( void ) {
    Spi_Hw_IrqTxRxERR(SPI_HW_UNIT_0);
}

/* @brief ISR to receive/transmit data for channel 0 */
void Spi_IrqUnit0TxRx( void ){
    Spi_Hw_IrqTxRx(SPI_HW_UNIT_0) ;
}
#endif

#if (SPI_USE_HW_UNIT_1 == STD_ON) && (SPI_HW_UNIT_1_USE_DMA == STD_OFF)
/*  @brief ISR to to handle Spi rx/tx errors for channel 1 */
void Spi_IrqUnit1TxRxERR( void){
    Spi_Hw_IrqTxRxERR(SPI_HW_UNIT_1) ;
}

/* @brief ISR to receive/transmit data for channel 1 */
void Spi_IrqUnit1TxRx( void )    {
    Spi_Hw_IrqTxRx(SPI_HW_UNIT_1) ;
}
#endif

#if (SPI_USE_HW_UNIT_2 == STD_ON) && (SPI_HW_UNIT_2_USE_DMA == STD_OFF)
/*  @brief ISR to to handle Spi rx/tx errors for channel 2 */
void Spi_IrqUnit2TxRxERR( void ){
    Spi_Hw_IrqTxRxERR(SPI_HW_UNIT_2) ;
}

/* @brief ISR to receive/transmit data for channel 2 */
void Spi_IrqUnit2TxRx( void ){
    Spi_Hw_IrqTxRx(SPI_HW_UNIT_2) ;
}
#endif

#if (SPI_USE_HW_UNIT_3 == STD_ON) && (SPI_HW_UNIT_3_USE_DMA == STD_OFF)
/*  @brief ISR to to handle Spi rx/tx errors for channel 3 */
void Spi_IrqUnit3TxRxERR( void ){
    Spi_Hw_IrqTxRxERR(SPI_HW_UNIT_3) ;
}

/* @brief ISR to receive/transmit data for channel 3 */
void Spi_IrqUnit3TxRx( void ){
    Spi_Hw_IrqTxRx(SPI_HW_UNIT_3) ;
}
#endif

#if (SPI_USE_HW_UNIT_4 == STD_ON) && (SPI_HW_UNIT_4_USE_DMA == STD_OFF)
/*  @brief ISR to to handle Spi rx/tx errors for channel 4 */
void Spi_IrqUnit4TxRxERR( void ){
    Spi_Hw_IrqTxRxERR(SPI_HW_UNIT_4);
}

/* @brief ISR to receive/transmit data for channel 4 */
void Spi_IrqUnit4TxRx( void ){
    Spi_Hw_IrqTxRx(SPI_HW_UNIT_4) ;
}
#endif

#if (SPI_HW_USE_DMA == STD_ON)
/* @brief ISR to handle DMA buffer fill */
void Spi_Irq_DmaIsrBTC( void ){
    /* Call the Notification. Only supported for TMS570LS12X */
    Spi_Hw_DlcBlockCbk();
}
#endif

/** @}*/
/** @}*/
