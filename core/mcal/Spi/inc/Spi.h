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
/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|PPC|TMS570|RH850F1H|MPC5607B|MPC5645S|STM32|JACINTO5|JACINTO6|MPC5748G */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

/** @file Spi.h
 *
 *  The SPI Handler/Driver provides services for reading from and writing to devices connected via SPI busses. 
 *  It provides access to SPI communication to several users (e.g. EEPROM, Watchdog, I/O ASICs). 
 *  It also provides the required mechanism to configure the onchip SPI peripheral.
 *  This file will contain the SPI Type definitions and API definitions
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
#ifndef SPI_H_
#define SPI_H_


/* Standard info */
/**
  * @name    Module ID and Version Number
  * @{
  */

#define SPI_VENDOR_ID             60u /**< @brief SPI Vendor Id  */
#define SPI_MODULE_ID             83u /**< @brief SPI Module Id  */

#if defined(CFG_TMS570LS12X)
#define SPI_SW_MAJOR_VERSION      3u /**< @brief SPI Module Software Major Version Number for TMS570 */
#define SPI_SW_MINOR_VERSION      0u /**< @brief SPI Module Software Minor Version Number for TMS570 */
#define SPI_SW_PATCH_VERSION      0u /**< @brief SPI Module Software Patch Version Number for TMS570 */

#define SPI_AR_RELEASE_MAJOR_VERSION      4u /**< @brief SPI Module Autosar Major Version Number for TMS570 */
#define SPI_AR_RELEASE_MINOR_VERSION      3u /**< @brief SPI Module Autosar Minor Version Number for TMS570 */
#define SPI_AR_RELEASE_PATCH_VERSION      0u /**< @brief SPI Module Autosar Patch Version Number for TMS570 */

#else
#define SPI_SW_MAJOR_VERSION      2u /**< @brief SPI Module Software Major Version Number for TMS570 */
#define SPI_SW_MINOR_VERSION      0u /**< @brief SPI Module Software Minor Version Number for TMS570 */
#define SPI_SW_PATCH_VERSION      0u /**< @brief SPI Module Software Patch Version Number for TMS570 */

#define SPI_AR_RELEASE_MAJOR_VERSION      4u /**< @brief SPI Module Autosar Major Version Number for TMS570 */
#define SPI_AR_RELEASE_MINOR_VERSION      1u /**< @brief SPI Module Autosar Minor Version Number for TMS570 */
#define SPI_AR_RELEASE_PATCH_VERSION      2u /**< @brief SPI Module Autosar Patch Version Number for TMS570 */

#endif

/** @} */

/** @req 4.3.0/SWS_Spi_00092 - The SPI module shall adhere to the following include file structure...*/
#include "Std_Types.h"

/**
  * @name    Service IDs
  * @{
  */
#define SPI_INIT_SERVICE_ID                         0x00u	/**< @brief Service Id for Spi_Init API */
#define SPI_DEINIT_SERVICE_ID                       0x01u	/**< @brief Service Id for Spi_DeInit API */
#define SPI_WRITEIB_SERVICE_ID                      0x02u	/**< @brief Service Id for Spi_WriteIB API */
#define SPI_ASYNCTRANSMIT_SERVICE_ID                0x03u	/**< @brief Service Id for Spi_Hw_AsyncTransmit API */
#define SPI_READIB_SERVICE_ID                       0x04u	/**< @brief Service Id for Spi_ReadIB API */
#define SPI_SETUPEB_SERVICE_ID                      0x05u	/**< @brief Service Id for Spi_SetupEB API */
#define SPI_GETSTATUS_SERVICE_ID                    0x06u	/**< @brief Service Id for Spi_GetStatus API */
#define SPI_GETJOBRESULT_SERVICE_ID                 0x07u	/**< @brief Service Id for Spi_GetJobResult API */
#define SPI_GETSEQUENCERESULT_SERVICE_ID            0x08u	/**< @brief Service Id for Spi_GetSequenceResult API */
#define SPI_GETVERSIONINFO_SERVICE_ID               0x09u	/**< @brief Service Id for Spi_GetVersionInfo API */
#define SPI_SYNCTRANSMIT_SERVICE_ID                 0x0Au	/**< @brief Service Id for Spi_SyncTransmit API */
#define SPI_GETHWUNITSTATUS_SERVICE_ID              0x0Bu	/**< @brief Service Id for Spi_GetHWUnitStatus API */
#define SPI_CANCEL_SERVICE_ID                       0x0Cu	/**< @brief Service Id for Spi_Cancel API */
#define SPI_SETASYNCMODE_SERVICE_ID                 0x0Du	/**< @brief Service Id for Spi_SetAsyncMode API */
#define SPI_MAINFUNCTION_HANDLING_SERVICE_ID        0x10u	/**< @brief Service Id for Spi_MainFunction_Handling API */
#define SPI_MAINFUNCTION_DRIVING_SERVICE_ID         0x11U	/**< @brief Service Id for Spi_MainFunction_Driving API */
/* ArcCore extra */
#define SPI_GENERAL_SERVICE_ID                      0x20u	/**< @brief ArcCore defined service Id for general Spi driver */
/** @} */

/** @req 4.3.0/SWS_Spi_00062 - The type Spi_JobResultType defines a range of specific Jobs status for SPI Handler/Driver. (SRS_BSW_00335)*/
/** @req 4.3.0/SWS_Spi_00261 - The type Spi_JobResultType it informs about a SPI Handler/Driver Job status and can be obtained calling the API service Spi_GetJobResult with the Job ID.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00376 - Spi_DataBufferType*/
/** @req 4.1.2|4.3.0/SWS_Spi_00355 - Spi_DataBufferType defines the type of application data buffer elements. Type is uint8. Access to the data is selected dynamically as ...*/
/** @req 4.1.2|4.3.0/SWS_Spi_00164 - The type Spi_DataBufferType refers to application data buffer elements. */
/** @brief		Definition of Autosar specified Spi_DataBufferType.
 *	@details	The type Spi_JobResultType defines a range of specific Jobs status for SPI Handler/Driver.
 */
typedef uint8 Spi_DataBufferType;

typedef Spi_DataBufferType Spi_DataType;	/**< @brief Definition of Spi_DataType. */

/** @req 4.1.2|4.3.0/SWS_Spi_00377 - Spi_NumberOfDataType */
/** @req 4.1.2|4.3.0/SWS_Spi_00165 - The type Spi_NumberOfDataType is used for defining the number of data elements to send or receive. */
/** @brief		Definition of Autosar specified Spi_NumberOfDataType.
 *	@details	The type Spi_NumberOfDataType is used for defining the number of data elements to send or receive.
 */
typedef uint16 Spi_NumberOfDataType;

/** @req 4.1.2|4.3.0/SWS_Spi_00378 - Spi_ChannelType*/
/** @req 4.1.2|4.3.0/SWS_Spi_00166 - The type Spi_ChannelType is used for specifying the identification (ID) for a Channel. */
/** @req 4.1.2|4.3.0/SWS_Spi_00356 - The type Spi_ChannelType specifies the identification (ID) for a Channel. */
/** @brief		Definition of Autosar specified Spi_ChannelType.
 *	@details	The type Spi_ChannelType is used for specifying the identification (ID) for a Channel.
 */
typedef uint8 Spi_ChannelType ;

/** @req 4.1.2|4.3.0/SWS_Spi_00379 - Spi_JobType */
/** @req 4.1.2|4.3.0/SWS_Spi_00167 - The type Spi_JobType is used for specifying the identification (ID) for a Job. */
/** @req 4.1.2|4.3.0/SWS_Spi_00357 - The type Spi_JobType specifies the identification (ID) for a Job. */
/** @brief		Definition of Autosar specified Spi_JobType.
 *	@details	 The type Spi_JobType is used for specifying the identification (ID) for a Job.
 */
typedef uint16 Spi_JobType;

/** @req 4.1.2|4.3.0/SWS_Spi_00380 - Spi_SequenceType */
/** @req 4.1.2|4.3.0/SWS_Spi_00168 - The type Spi_SequenceType is used for specifying the identification (ID) for a sequence of jobs. */
/** @req 4.1.2|4.3.0/SWS_Spi_00358 - The type Spi_SequenceType specifies the identification (ID) for a sequence of jobs. */
/** @brief		Definition of Autosar specified Spi_SequenceType.
 *	@details	The type Spi_SequenceType is used for specifying the identification (ID) for a sequence of jobs.
 */
typedef uint8 Spi_SequenceType;

/** @req 4.1.2|4.3.0/SWS_Spi_00381 - Spi_HWUnitType */
/** @req 4.1.2|4.3.0/SWS_Spi_00169 - Spi_HWUnitType is used for specifying the identification (ID) for a SPI Hardware microcontroller peripheral (unit). */
/** @req 4.1.2|4.3.0/SWS_Spi_00359 - Spi_HWUnitType specifies the identification (ID) for a SPI Hardware microcontroller peripheral (unit). */
/** @brief		Definition of Autosar specified Spi_HWUnitType.
 *	@details	Spi_HWUnitType is used for specifying the identification (ID) for a SPI Hardware microcontroller peripheral (unit).
 */
typedef uint8 Spi_HWUnitType;

/** @req 4.1.2|4.3.0/SWS_Spi_00375 - Spi_SeqResultType */
/** @req 4.1.2|4.3.0/SWS_Spi_00019 - The type Spi_SeqResultType defines the range of specific Sequences status for SPI Handler/Driver.*/
/** @enum 	Spi_SeqResultType
*   @brief	The type Spi_SeqResultType defines the range of specific Sequences status for SPI Handler/Driver.
*/
typedef enum {
    SPI_SEQ_OK,			/**< @brief Result of a successfully finished sequence is assigned value 0 */
    SPI_SEQ_PENDING,	/**< @brief Result of a pending sequence is assigned value 1 */
    SPI_SEQ_FAILED,		/**< @brief Result of an unsuccessfully finished sequence is assigned value 2 */
	SPI_SEQ_CANCELLED	/**< @brief Result of a canceled sequence is assigned value 3 */
} Spi_SeqResultType;

/** @req 4.1.2|4.3.0/SWS_Spi_00374 - Spi_JobResultType */
/** @req 4.1.2|4.3.0/SWS_Spi_00012 - After reset, the type Spi_JobResultType shall have the default value SPI_JOB_OK with the numeric value 0*/
/** @enum 	Spi_JobResultType
*   @brief	This type defines a range of specific Jobs status for SPI Handler/Driver.
*/
typedef enum {
    SPI_JOB_OK=0,		/**< @brief Status of a successfully finished job is assigned value 0 */
    SPI_JOB_PENDING,	/**< @brief Status of a pending job is assigned value 1 */
    SPI_JOB_FAILED,		/**< @brief Status of a failed job is assigned value 2 */
    SPI_JOB_QUEUED,		/**< @brief Status of a queued job is assigned value 3 */
    SPI_JOB_ACTIVE		/**< @brief Status of an active job is assigned value 4 */
} Spi_JobResultType;


#include "Spi_Cfg.h"

/* Error classification */
/** @req 4.3.0/SWS_Spi_00240 - Detect the error SPI_E_PARAM_LENGTH(0x0D) when API service called with wrong parameter.*/
/** @req 4.3.0/SWS_Spi_00242 - Detect the error SPI_E_UNINIT(0x1A) when API service used without module initialization. */
/** @req 4.3.0/SWS_Spi_00243 - Detect the error SPI_E_SEQ_PENDING(0x2A) when services called in a wrong sequence. */
/** @req 4.3.0/SWS_Spi_00245 - Detect the error SPI_E_SEQ_IN_PROCESS(0x3A) when synchronous transmission service called at wrong time. */
/** @req 4.3.0/SWS_Spi_00246 - Detect the error SPI_E_ALREADY_INITIALIZED(0x4A) when API SPI_Init service called while the SPI driver has already been initialized. */
/** @req 4.3.0/SWS_Spi_00383 - This Extended Production Error shall be issued
 * when any error bit inside the SPI hardware transmit status register is raised.*/
/** @req 4.3.0/SWS_Spi_00385 - When any error bit inside the SPI transmit status register is set,
 * the SPI transmit status register information shall be reported to DEM
 * as Dem_SetEventStatus (SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_FAILED)*/
/** @req 4.3.0/SWS_Spi_00386 - When no error bit inside the SPI transmit status register is set,
 * the SPI transmit status register information shall be reported to DEM
 * as Dem_SetEventStatus (SPI_E_HARDWARE_ERROR, DEM_EVENT_STATUS_PASSED)*/

/**
  * @name    Error Code - AUTOSAR
  * @{
  */
#define SPI_E_PARAM_CHANNEL               0x0Au /**< @brief API service called with wrong parameter */
#define SPI_E_PARAM_JOB                   0x0Bu /**< @brief API service called with wrong parameter */
#define SPI_E_PARAM_SEQ                   0x0Cu /**< @brief API service called with wrong parameter */
#define SPI_E_PARAM_LENGTH                0x0Du /**< @brief API service called with wrong parameter */
#define SPI_E_PARAM_UNIT                  0x0Eu /**< @brief API service called with wrong parameter */
#define SPI_E_PARAM_POINTER               0x10u /**< @brief APIs called with a Null Pointer */
#define SPI_E_UNINIT                      0x1Au /**< @brief API service used without module initiali-zation */
#define SPI_E_SEQ_PENDING                 0x2Au /**< @brief Services called in a wrong sequence */
#define SPI_E_SEQ_IN_PROCESS              0x3Au /**< @brief Synchronous transmission service called at wrong time */
#define SPI_E_ALREADY_INITIALIZED         0x4Au /**< @brief API SPI_Init service called while the SPI driver has already been initialized */
#define SPI_E_HARDWARE_ERROR              0x5Au /**< @brief A hardware error occurred during asynchronous or synchronous SPI transmit */
/** @brief  ArcCore extra define DET error for invalid configuration */
#define SPI_E_CONFIG_INVALID              0x50u
/** @brief  ArcCore extra define DET error for invalid sequence */
#define SPI_E_SEQUENCE_NOT_OK             0x60u
/** @} */

/**
  * @name    The possible levels of SPI_LEVEL_DELIVERED
  * @{
  */

/** @req 4.3.0/SWS_Spi_00084 -  If different Jobs (and consequently also Sequences) have common Channels, the SPI Handler/Driver’s environment
 * shall ensure that read and/or write functions are not called during transmission. */
/** @req 4.3.0/SWS_Spi_00115 - The LEVEL 0 SPI Handler/Driver behaviour shall include the common feature: Allowed Channel Buffers, which is selected. */
/** @req 4.1.2|4.3.0/SWS_Spi_00114 - The LEVEL 0 SPI Handler/Driver shall accept concurrent Spi_SyncTransmit(), if the sequences to be transmitted
 * use different bus and parameter SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT is enabled. This feature shall be disabled per default. That means during a
 * Sequence ongoing transmission, all requests to transmit another Sequence shall be rejected.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00161 - An SPI Driver operating in LEVEL 0 should be in SPI_IDLE when there is no ongoing seq transmission. */
#define SPI_LEVEL_0		(0u)	/**< @brief SPI_LEVEL_0 is assigned value 0 and it delivers basic synchronous functions */

/** @req 4.3.0/SWS_Spi_00281 - If Sequences are configured with a specific end notification function, the SPI Handler/Driver shall call
 * this notification function at the end of the Sequence transmission. */
/** @req 4.3.0/SWS_Spi_00116 - The LEVEL 1 SPI Handler/Driver may allow transmitting more than one Sequence at the same time. All requests to transmit
 * another Sequence shall be evaluated in order to accept to start a new sequence or to reject it accordingly to the lead Job. */
/** @req 4.3.0/SWS_Spi_00117 - The LEVEL 1 SPI Handler/Driver behaviour shall include the common feature: Allowed Channel Buffers,
 * which is selected, and the configured asynchronous feature:  */
/** @req 4.1.2|4.3.0/SWS_Spi_00163 - An SPI Driver operating in LEVEL 1 should be in SPI_IDLE when there is no ongoing seq transmission. */
#define SPI_LEVEL_1		(1u)	/**< @brief SPI_LEVEL_1 is assigned value 1 and it delivers basic asynchronous functions */

/* Synchronous and Asynchronous functions */
/** @req 4.3.0/SWS_Spi_00131 - Jobs associated with the prearranged SPI bus shall not belong to Sequences containing Jobs associated with
 * another SPI bus. In other words, mixed Sequences (synchronous with asynchronous Jobs) shall not be allowed. */
/** @req 4.3.0/SWS_Spi_00140 - If SpiHwUnitSynchronous is set to "Synchronous" for a job, the associated bus defined by SpiHwUnit behave same as
 * prearranged bus. It means that all requirements valid for prearranged bus will be valid also for the bus assigned to this job. */
/** @req 4.3.0/SWS_Spi_00195 - Detect the error SPI_E_HARDWARE_ERROR when an hardware error occur during asynchronous or synchronous transmit. */
/** @req 4.1.2|4.3.0/SWS_Spi_00108 - The LEVEL 2 SPI Handler/Driver is specified for microcontrollers that have to provide, at least, two SPI busses using separated hardware units. Otherwise,
 * using this level of functionality does not make sense.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00155 - The SPI Handler/Driver LEVEL 2 shall implement one polling mechanism mode and one interrupt mechanism mode for SPI busses handled asynchronously.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00283 - In LEVEL 2 if there is no on going Sequence transmission, the SPI Handler/Driver shall be in idle state (SPI_IDLE).*/
#define SPI_LEVEL_2		(2u)	/**< @brief SPI_LEVEL_2 is assigned value 2 and it delivers basic synchronous and asynchronous functions */

/** @} */

/**
  * @name    Symbolic name to identify the HW SPI Hardware microcontroller peripheral allocated to a Job.
  * @{
  */
#define CSIB0	0u		/**< @brief Peripheral named CSIB0 is assigned value 0. */
#define CSIB1   1u		/**< @brief Peripheral named CSIB1 is assigned value 1. */
#define CSIB2   2u		/**< @brief Peripheral named CSIB2 is assigned value 2. */
#define CSIB3   3u		/**< @brief Peripheral named CSIB3 is assigned value 3. */
#define CSIB4   4u		/**< @brief Peripheral named CSIB4 is assigned value 4. */
#define CSIB5   5u		/**< @brief Peripheral named CSIB5 is assigned value 5. */
/** @} */

#define CH_NOT_VALID 	(0xffu)		/**< @brief Define for a channel with invalid number (non-tms). */
#define JOB_NOT_VALID	(0xffffu)	/**< @brief Define for an invalid job (non-tms). */
#define SEQ_NOT_VALID	(0xffu)		/**< @brief Define for an invalid sequence (non-tms). */

#define SPI_SIMPLE    	(0u)   		/**< @brief Define marking a simple Spi implementation (non-tms used, Not implemented, NOT TESTED). */
#define SPI_FIFO        (1u)		/**< @brief Define marking a FIFO type Spi implementation (non-tms used). */
#define SPI_DMA         (2u)		/**< @brief Define marking a DMA type Spi implementation (non-tms used). */

#define SPI_EB_MAX_LENGTH (64u)		/**< @brief Defines the maximum size of an external buffer */

/** @req 4.1.2|4.3.0/SWS_Spi_00373 - Spi_StatusType */
/** @req 4.3.0/SWS_Spi_00061 - The type Spi_StatusType defines a range of specific status for SPI Handler/Driver.
 * It informs about the SPI Handler/Driver status or specified SPI Hardware microcontroller peripheral.*/
/** @req 4.3.0/SWS_Spi_00011 -After reset, the type Spi_StatusType shall have the default value SPI_UNINIT with the numeric value 0.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00373 - Spi_StatusType*/

/** @typedef Spi_StatusType
*   @brief   AUTOSAR Specified SPI Status Type Definition.
*   This type defines a range of specific status for SPI Handler/Driver.
*/
typedef enum {
    SPI_UNINIT=0,	/**< @brief Status of tThe SPI Handler/Driver which is not initialized or not usable is assigned value 0. */
    SPI_IDLE,     	/**< @brief Status of tThe SPI Handler/Driver which is not currently transmitting any Job is assigned value 1. */
    SPI_BUSY      	/**< @brief Status of tThe SPI Handler/Driver which is is performing a SPI Job( transmit ) is assigned value 2. */
} Spi_StatusType;

/** @req 4.3.0/SWS_Spi_00170 - The type Spi_AsyncModeType is used for specifying the asynchronous mechanism mode
 * for SPI busses handled asynchronously in LEVEL 2.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00382 - Spi_AsyncModeType*/

/** @typedef Spi_AsyncModeType
*   @brief   AUTOSAR Specified SPI Asynchronous Mode Type Definition
*   Specifies the asynchronous mechanism mode for SPI busses handled asynchronously in LEVEL 2.
*/
typedef enum {

	/**	@brief The asynchronous mechanism is ensured by polling,
	 * so interrupts related to SPI busses handled asynchronously are disabled.
	 */
    SPI_POLLING_MODE,

	/**	@brief The asynchronous mechanism is ensured by interrupt,
	 * so interrupts related to SPI busses handled asynchronously are enabled.
	 */
    SPI_INTERRUPT_MODE
} Spi_AsyncModeType;


/** @req 4.1.2|4.3.0/SWS_Spi_00372 - Spi_ConfigType */
/** @req 4.1.2|4.3.0/SWS_Spi_00044 - Spi_JobEndNotification and Spi_SeqEndNotification should be function pointers defined within Spi_ConfigType. */
/** @req 4.1.2|4.3.0/SWS_Spi_00063 -  For the type Spi_ConfigType, the definition for each Channel shall contain: Buffer usage... */
/** @req 4.1.2|4.3.0/SWS_Spi_00064 -  For the type Spi_ConfigType, the definition for each Sequence shall contain: Collection of Jobs,...*/
/** @req 4.1.2|4.3.0/SWS_Spi_00344 - The description of the type Spi_ConfigType is implementation specific and it shall be provided for external use.*/

/** @typedef Spi_ConfigType
*   @brief   The contents of the initialization data structure are SPI specific.
*   This type of the external data structure shall contain the initialization data for the SPI Handler/Driver.
*/
typedef Spi_CfgType Spi_ConfigType;
extern const Spi_ConfigType     SpiConfigData;	/**< @brief Instance of the Spi configuration used for the drivers operations. */


/** @brief Service for SPI initialization.
 *         Synchronous
 *  @note  Non Reentrant
 *  @note  A re-initialization of a SPI Handler/Driver by executing the Spi_Init() function requires a de-initialization before by executing a Spi_DeInit().
 *  @param[in] ConfigPtr - Pointer to configuration set.
 */
void Spi_Init( const Spi_ConfigType *ConfigPtr );

/** @brief Service for SPI de-initialization.
 *         Synchronous
 *  @note  Non Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_DeInit is called, otherwise see [SWS_Spi_00046].
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      De-initialisation command has been accepted
 *  @retval E_NOT_OK  De-initialisation command has not been accepted
 */
Std_ReturnType Spi_DeInit( void );

/** @brief Service for writing one or more data to an IB SPI Handler/Driver Channel specified by parameter.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_WriteIB is called.
 *  @param[in] Channel - Channel ID.
 *  @param[in] DataBufferPtr - Pointer to source data buffer. If this pointer is null, it is assumed that the data to be transmitted is not relevant and the default transmit value of this channel will be used instead.
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Write command has been accepted
 *  @retval E_NOT_OK  Write command has not been accepted
 */
Std_ReturnType Spi_WriteIB( Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr );

/** @brief Service to transmit data on the SPI bus.
 *         Asynchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_AsyncTransmit is called.
 *  @param[in] Sequence - Sequence ID.
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Transmission command has been accepted
 *  @retval E_NOT_OK  Transmission command has not been accepted
 */
Std_ReturnType Spi_AsyncTransmit( Spi_SequenceType Sequence );

/** @brief Service for reading synchronously one or more data from an IB SPI Handler/Driver Channel specified by parameter.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_ReadIB is called
 *  @param[in] Channel				Channel ID.
 *  @param[in] DataBufferPtr 		Pointer to destination data buffer in RAM
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Read command has been accepted
 *  @retval E_NOT_OK  Read command has not been accepted
 */
Std_ReturnType Spi_ReadIB( Spi_ChannelType Channel, Spi_DataBufferType * DataBufferPtr ) ;

/** @brief Service to setup the buffers and the length of data for the EB SPI Handler/Driver Channel specified.
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
Std_ReturnType Spi_SetupEB( Spi_ChannelType Channel, const Spi_DataBufferType*  SrcDataBufferPtr,
                            Spi_DataBufferType* DesDataBufferPtr, Spi_NumberOfDataType Length );

/** @brief Service returns the SPI Handler/Driver software module status.
 *         Synchronous
 *  @note  Reentrant
 *  @return		        Spi status
 *  @retval SPI_UNINIT  The SPI Handler/Driver is not initialized or not usable.
 *  @retval SPI_IDLE    The SPI Handler/Driver is not currently transmitting any Job.
 *  @retval SPI_BUSY    The SPI Handler/Driver is performing a SPI Job( transmit )
 */
Spi_StatusType Spi_GetStatus( void );

/** @brief This service returns the last transmission result of the specified Job.
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
Spi_JobResultType Spi_GetJobResult ( Spi_JobType Job );

/** @brief This service returns the last transmission result of the specified Sequence.
 *         Synchronous
 *  @note  Reentrant
 *  @note  Every new transmit sequence that has been accepted by the SPI Handler/Driver overwrites the previous sequence result with SPI_SEQ_PENDING.
 *  @note  If the SPI Handler/Driver has not been initialized before the function Spi_GetSequenceResult is called, the return value is undefined.
 *  @param[in] Sequence - Sequence ID. An invalid sequence ID will return an undefined result.
 *  @retval Spi_SeqResultType  Spi_SeqResultType
 */
Spi_SeqResultType Spi_GetSequenceResult(Spi_SequenceType Sequence );

#if ( SPI_VERSION_INFO_API == STD_ON  )

/** @brief This service returns the version information of this module.
 *         Synchronous
 *  @note  Reentrant
 *  @param[out] versioninfo - Pointer to where to store the version information of this module.
 */
void Spi_GetVersionInfo(Std_VersionInfoType* versioninfo);
#endif

/** @brief Service to transmit data on the SPI bus
 *         Asynchronous
 *  @note  Reentrant
 *  @param[in] Sequence - Sequence ID.
 *  @return 		  Whether the command has been accepted or not.
 *  @retval E_OK      Transmission command has been accepted
 *  @retval E_NOT_OK  Transmission command has not been accepted
 */
Std_ReturnType Spi_SyncTransmit( Spi_SequenceType Sequence );

#if (SPI_HW_STATUS_API == STD_ON)

/** @brief This service returns the status of the specified SPI Hardware microcontroller peripheral.
 *         Synchronous
 *  @note  Reentrant
 *  @note  If SPI Handler/Driver has not been initialized before the function Spi_GetHWUnitStatus is called, the return value is undefined.
 *  @param[in] HWUnit 		SPI Hardware microcontroller peripheral (unit) ID.
 *  @return Spi status
 *  @retval SPI_UNINIT 		Not initialized or not usable.
 *  @retval SPI_IDLE 		Not currently transmitting any Job.
 *  @retval SPI_BUSY      	Performing a SPI Job( transmit )
 */
Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit);
#endif

#if (SPI_CANCEL_API == STD_ON )
/** @brief Service cancels the specified on-going sequence transmission.
 *         Asynchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver is not responsible on external devices damages or undefined state due to cancelling a sequence transmission. It is up to the SPI Handler/Drivers environment to be aware to what it is doing!
 *  @param[in] Sequence - Sequence ID.
 */
void Spi_Cancel( Spi_SequenceType Sequence );
#endif

/** @brief Service to set the asynchronous mechanism mode for SPI busses handled asynchronously.
 *         				Synchronous
 *  @note  				Non Reentrant
 *  @param[in] Mode 	New mode required.
 *  @return				Whether the command has been accepted or not.
 *  @retval E_OK       	Setting command has been done
 *  @retval E_NOT_OK   	Setting command has not been accepted
 */
Std_ReturnType Spi_SetAsyncMode( Spi_AsyncModeType Mode );

/**
 * @brief This function polls the SPI interrupts linked to HW Units allocated to the
 * transmission of SPI sequences to enable the evolution of transmission state machine.
 */
void Spi_MainFunction_Handling( void );

#endif /*SPI_H_*/

/** @}*/
/** @}*/

