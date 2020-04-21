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

#ifndef SPI_INTERNAL_H_
#define SPI_INTERNAL_H_

#include "Spi.h"

/** Spi_Internal.h
 *  This files contains the hardware specific API definitions.
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

/**
 * @brief   DLC callback function
 * @details Used for DMA transfer to switch to another DMA buffer
 ******************************************************************************/
void Spi_Hw_DlcBlockCbk(void);

/**
 * @brief Hardware dependant implementation of Spi_MainFunction_Handling().
 */
void Spi_Hw_MainFunction_Handling(void);

/** @brief Hardware dependent function to set the asynchronous mechanism mode for SPI busses handled asynchronously.
 *         				Synchronous
 *  @note  				Non Reentrant
 *  @param[in] Mode 	New mode required.
 *  @return				Whether the command has been accepted or not.
 *  @retval E_OK       	Setting command has been done
 *  @retval E_NOT_OK   	Setting command has not been accepted
 */
Std_ReturnType Spi_Hw_SetAsyncMode( Spi_AsyncModeType Mode );

/** @brief Hardware dependent function returns the SPI Handler/Driver software module status.
 *         Synchronous
 *  @note  Reentrant
 *  @return		        Spi status
 *  @retval SPI_UNINIT  The SPI Handler/Driver is not initialized or not usable.
 *  @retval SPI_IDLE    The SPI Handler/Driver is not currently transmitting any Job.
 *  @retval SPI_BUSY    The SPI Handler/Driver is performing a SPI Job( transmit )
 */
Spi_StatusType Spi_Hw_GetStatus(void);

/** @brief Hardware dependent function which returns the last transmission result of the specified Job.
 *         Synchronous
 *  @note  Reentrant
 *  @note  If SPI Handler/Driver has not been initialized before the function Spi_GetJobResult is called, the return value is undefined.
 *  @note  Every new transmit job that has been accepted by the SPI Handler/Driver overwrites the previous job result with SPI_JOB_QUEUED or SPI_JOB_PENDING.
 *  @param[in] Job              Job ID. An invalid job ID will return an undefined result.
 *  @return		                Spi job result
 *  @retval SPI_JOB_OK          Spi job is finished successfully
 *  @retval SPI_JOB_PENDING     Spi job is pending
 *  @retval SPI_JOB_FAILED      Spi job has failed
 *  @retval SPI_JOB_QUEUED      Spi job is queued
 *  @retval SPI_JOB_ACTIVE      Spi Job is currently being transmited
 */
Spi_JobResultType Spi_Hw_GetJobResult( Spi_JobType Job );

/** @brief Hardware dependent function which returns the last transmission result of the specified Sequence.
 *         Synchronous
 *  @note  Reentrant
 *  @note  Every new transmit sequence that has been accepted by the SPI Handler/Driver overwrites the previous sequence result with SPI_SEQ_PENDING.
 *  @note  If the SPI Handler/Driver has not been initialized before the function Spi_GetSequenceResult is called, the return value is undefined.
 *  @param[in] Seq 				Sequence ID. An invalid sequence ID will return an undefined result.
 *  @retval Spi_SeqResultType  	Spi_SeqResultType
 */
Spi_SeqResultType Spi_Hw_GetSequenceResult( Spi_SequenceType Seq );

/** @brief Hardware dependent function which returns the status of the specified SPI Hardware microcontroller peripheral.
 *         Synchronous
 *  @note  Reentrant
 *  @note  If SPI Handler/Driver has not been initialized before the function Spi_GetHWUnitStatus is called, the return value is undefined.
 *  @param[in] HWUnit 		SPI Hardware microcontroller peripheral (unit) ID.
 *  @return Spi status
 *  @retval SPI_UNINIT 		Not initialized or not usable.
 *  @retval SPI_IDLE 		Not currently transmitting any Job.
 *  @retval SPI_BUSY      	Performing a SPI Job( transmit )
 */
Spi_StatusType Spi_Hw_GetHWUnitStatus( Spi_HWUnitType HWUnit );

/** @brief Hardware dependent function for SPI initialization.
 *         Synchronous
 *  @note  Non Reentrant
 *  @note  A re-initialization of a SPI Handler/Driver by executing the Spi_Init() function requires a de-initialization before by executing a Spi_DeInit().
 *  @param[in] ConfigPtr - Pointer to configuration set.
 */
void Spi_Hw_Init(const Spi_ConfigType* ConfigPtr );

/** @brief Hardware dependent function for SPI de-initialization.
 *         Synchronous
 *  @note  Non Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_DeInit is called, otherwise see [SWS_Spi_00046].
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      De-initialisation command has been accepted
 *  @retval E_NOT_OK  De-initialisation command has not been accepted
 */
Std_ReturnType Spi_Hw_DeInit(void);

/** @brief Hardware dependent function for writing one or more data to an IB SPI Handler/Driver Channel specified by parameter.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_WriteIB is called.
 *  @param[in] Channel - Channel ID.
 *  @param[in] DataBufferPtr - Pointer to source data buffer. If this pointer is null, it is assumed that the data to be transmitted is not relevant and the default transmit value of this channel will be used instead.
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Write command has been accepted
 *  @retval E_NOT_OK  Write command has not been accepted
 */
Std_ReturnType Spi_Hw_WriteIB( Spi_ChannelType Channel, const Spi_DataType* DataBufferPtr );

/** @brief Hardware dependent functuin for reading synchronously one or more data from an IB SPI Handler/Driver Channel specified by parameter.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_ReadIB is called
 *  @param[in]        Channel - Channel ID.
 *  @param[in]        DataBufferPtr - Pointer to destination data buffer in RAM
 *  @return			  Whether the command has been accepted or not.
 *  @retval E_OK      Read command has been accepted
 *  @retval E_NOT_OK  Read command has not been accepted
 */
Std_ReturnType Spi_Hw_ReadIB(Spi_ChannelType Channel, Spi_DataBufferType* DataBufferPtr );

/** @brief Hardware dependent function to setup the buffers and the length of data for the EB SPI Handler/Driver Channel specified.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_SetupEB is called
 *  @param[in] Channel - Channel ID.
 *  @param[in] SrcDataBufferPtr - Pointer to source data buffer.
 *  @param[in] DesDataBufferPtr - Pointer to destination data buffer in RAM.
 *  @param[in] Length - Length (number of data elements) of the data to be transmitted from SrcDataBufferPtr and/or received from DesDataBufferPtr Min.: 1 Max.: Max of data specified at configuration for this channel
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Setup command has been accepted
 *  @retval E_NOT_OK  Setup command has not been accepted
 */
Std_ReturnType Spi_Hw_SetupEB(Spi_ChannelType Channel, const Spi_DataBufferType* SrcDataBufferPtr,
        Spi_DataBufferType* DesDataBufferPtr, Spi_NumberOfDataType Length);

/** @brief Hardware dependent function to transmit data on the SPI bus.
 *         Asynchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_AsyncTransmit is called.
 *  @param[in] Sequence - Sequence ID.
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Transmission command has been accepted
 *  @retval E_NOT_OK  Transmission command has not been accepted
 */
Std_ReturnType Spi_Hw_AsyncTransmit( Spi_SequenceType Sequence );

/** @brief Hardware dependent function to transmit data on the SPI bus
 *         Asynchronous
 *  @note  Reentrant
 *  @param[in] Sequence 	Sequence ID.
 *  @return 		  		Whether the command has been accepted or not.
 *  @retval E_OK      		Transmission command has been accepted
 *  @retval E_NOT_OK  		Transmission command has not been accepted
 */
Std_ReturnType Spi_Hw_SyncTransmit( Spi_SequenceType Sequence );

/** @brief Hardware dependent function which cancels the specified on-going sequence transmission.
 *         Asynchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver is not responsible on external devices damages or undefined state due to cancelling a sequence transmission. It is up to the SPI Handler/Drivers environment to be aware to what it is doing!
 *  @param[in] Sequence - Sequence ID.
 */
void Spi_Hw_Cancel( Spi_SequenceType Sequence );

/** @brief Hardware dependent interrupt service routine to handle Spi rx/tx errors
 *  @param[in] HwUnit_u32 	Hardware unit id.
 */
void Spi_Hw_IrqTxRxERR(uint32 HwUnit_u32);

/** @brief Hardware dependent interrupt service routine to receive/transmit data
 *  @param[in] HwUnit_u32 	Hardware unit id.
 */
void Spi_Hw_IrqTxRx(uint32 HwUnit_u32);

/** @brief ISR to to handle Spi rx/tx errors for channel 0 */
void Spi_IrqUnit0TxRxERR( void );

/** @brief ISR to receive/transmit data for channel 0 */
void Spi_IrqUnit0TxRx( void );

/** @brief ISR to to handle Spi rx/tx errors for channel 1 */
void Spi_IrqUnit1TxRxERR( void );

/** @brief ISR to receive/transmit data for channel 1 */
void Spi_IrqUnit1TxRx( void );

/** @brief ISR to to handle Spi rx/tx errors for channel 2 */
void Spi_IrqUnit2TxRxERR( void );

/** @brief ISR to receive/transmit data for channel 2 */
void Spi_IrqUnit2TxRx( void );

/** @brief ISR to to handle Spi rx/tx errors for channel 3 */
void Spi_IrqUnit3TxRxERR( void );

/** @brief ISR to receive/transmit data for channel 3 */
void Spi_IrqUnit3TxRx( void );

/** @brief ISR to to handle Spi rx/tx errors for channel 4 */
void Spi_IrqUnit4TxRxERR( void );

/** @brief ISR to receive/transmit data for channel 4 */
void Spi_IrqUnit4TxRx( void );

/** @brief ISR to handle DMA buffer fill */
void Spi_Irq_DmaIsrBTC( void );


#endif /* SPI_INTERNAL_H_ */
/** @}*/
/** @}*/
