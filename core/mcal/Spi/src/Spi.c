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
/** @tagSettings DEFAULT_ARCHITECTURE=PPC|MPC5607B|MPC5645S|MPC5777M|MPC5777C|MPC5748G|JACINTO5|JACINTO6|TMS570|ZYNQ */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.1.2 */

/** @file Spi.c
 * 	The Spi.c file contains the generic implementation of all the API mentioned in Spi driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Spi_Hw_* .c file (depends on the architecture).
 *  Each API has the Det error check mentioned in section 7.5 (Spi driver SWS document) and calls the the
 *  hardware specific implementation function if the check passes.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Spi
  *  This is the Mcal Pwm Group
  *  @{
  */

/* General behaviour */
/** @req 4.1.2|4.3.0/SWS_Spi_00002 - Jobs have priorities assigned. Jobs linked in a Sequence shall have same or de-creasing priorities.
 * That means the first Job shall have the equal priority or the highest priority of all Jobs within the Sequence. */
/** @req 4.3.0/SWS_Spi_00003 - A Sequence shall contain at least one Job.*/
/** @req 4.3.0/SWS_Spi_00236 - If it contains more than one, all Jobs contained have the same Sequence properties during transmission and shall be linked together statically */
/** @req 4.3.0/SWS_Spi_00262 - If a Job contains more than one Channel, all Channels contained have the same Job properties during transmission
 * and shall be linked together statically. */
/** @req 4.3.0/SWS_Spi_00289 - If data width (SpiDataWidth) are exactly same (8 or 16 or 32 bits), the SPI Handler/Driver can send and receive
 * data without any bit changes straightforward. */
/** @req 4.3.0/SWS_Spi_00290 - If data access casting type is superior to data width (for example SpiDataWidth = 12bits, data access is 16 bits), the data
 * transmitted through the SPI Handler/Driver shall send the lower part, ignore the upper part. Receive the lower part, extend with zero. */
/** @req 4.3.0/SWS_Spi_00368 - Each Channel shall have an associated index which is used for specifying the order of the Channel within the Job. */
/** @req 4.3.0/SWS_Spi_00370 - It shall be possible to define if the Chip Select handling is managed autonomously by the HW peripheral,
 * without explicit chip select control by the driver, or the SPI driver shall drive the chip select lines explicitly as DIO. */
/** @req 4.3.0/SWS_Spi_00437 - The SPI Handler/Driver shall take care of the differences between the frame width of channel
 * (SpiDataWidth) and data access data type (given by SWS_Spi_00437). */
/** @req 4.1.2|4.3.0/SWS_Spi_00438 - The Handler/Driver shall provide separate buffer for receive and transmit to ensure that transmitted data are not overwritten by the receive data. */
/** @req 4.3.0/SWS_Spi_00092 - The SPI module shall adhere to the specified include file structure */

/** @req 4.1.2|4.3.0/SWS_Spi_00004 - The SPI driver shall be able to detect the error SPI_E_PARAM_CHANNEL when API service called with wrong parameter*/
/** @req 4.1.2|4.3.0/SWS_Spi_00034 - The SPI Handler/Driver shall support one or more Channels, Jobs and Sequences to drive all kind of SPI compatible HW devices.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00037 - The SPI Handler/Drivers environment shall call the Spi_SetupEB function once for each Channel with EB declared
 * before the SPI Handler/Drivers environment calls a Transmit method on them.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00040 - The SPI Handler/Driver handles only the Master mode.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00041 The SPI Handler/Driver interface configuration shall be based on Channels, Jobs and Sequences as defined in this document */
/** @req 4.1.2|4.3.0/SWS_Spi_00046 - If DET is enabled and the SPI Handler/Driver’s environment calls any API function before initialization,
 * an error should be reported to the DET with the error value SPI_E_UNINIT according to the configuration. */
/** @req 4.1.2|4.3.0/SWS_Spi_00050 - The SPI Handler/Driver only supports full-duplex mode. */
/** @req 4.1.2|4.3.0/SWS_Spi_00059 - The SPI Handler/Driver scheduling method shall schedule Jobs in order to send the highest priority Job first. */
/** @req 4.1.2|4.3.0/SWS_Spi_00065 - A Job shall contain at least one Channel.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00066 - The Chip Select (CS) is attached to the Job definition.*/
/** @req 4.1.2/SWS_Spi_00076 - Only parameters with Pre-compile time and Link time are allowed in this variant. */
/** @req 4.1.2|4.3.0/SWS_Spi_00093 - Priority order of jobs shall be from 0 to 3 where 3 is the highest priority. */
/** @req 4.1.2|4.3.0/SWS_Spi_00109 - The SPI Handler/Driver’s level of scalable functionality shall always be statically configurable, i.e. configured at pre-compile time to allow the best source code optimisation.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00112 - The size of the Channel buffer is either fixed or variable. A maximum size for the Channel buffer shall be defined by the configuration.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00130 - The so called synchronous Sequences shall only be composed of Jobs that are associated to the pre-arranged SPI bus. These Sequences shall be used with synchronous services3 only.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00156 - Both the polling mechanism and interrupt mechanism modes for SPI busses shall be selectable during execution time (see [SWS_Spi_00188]).*/
/** @req 4.1.2|4.3.0/SWS_Spi_00244 - The SPI Handler/Driver module does not take care of setting the registers which configure the clock, prescaler(s) and PLL in its init function. This has to be done by the MCU module [9].*/
/** @req 4.1.2|4.3.0/SWS_Spi_00254 - If the Sequence and Job related service is not done the return value shall be E_NOT_OK or a failed result. */
/** @req 4.1.2|4.3.0/SWS_Spi_00255 - Data transmissions shall be done according to Channels, Jobs and Sequences configuration parameters.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00256 - The SPI Handler/Driver shall not process the invoked function but, depending on the invoked function, shall either return the value E_NOT_OK or a failed result (SPI_JOB_FAILED or SPI_SEQ_FAILED).*/
/** @req 4.1.2|4.3.0/SWS_Spi_00257 - The driver is not able to prevent the overwriting of transmit buffers by users during transmissions. */
/** @req 4.1.2|4.3.0/SWS_Spi_00265 - For implement the call back function other modules are required to provide the routines in the expected manner. */
/** @req 4.1.2|4.3.0/SWS_Spi_00294 - This monolithic SPI Handler/Driver is able to handle one to n SPI buses according to the microcontroller used. */
/** @req 4.1.2|4.3.0/SWS_Spi_00342 - Depending on microcontrollers, the SPI peripheral could share registers with other peripherals. In this typical case, the SPI Handler/Driver
 * has a relationship with MCU module [9] for initialising and de-initialising those registers.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00343 - If Chip Selects are done using microcontroller pins the SPI Handler/Driver has a relationship with PORT module [10]. In this case, this specification assumes that these microcontroller pins are directly accessed by the SPI Handler/Driver module without using APIs of DIO module.
Anyhow, the SPI depends on ECU hardware design and for that reason it may depend on other modules. */
/** @req 4.1.2|4.3.0/SWS_Spi_00048 - The callback notifications Spi_JobEndNotification and Spi_SeqEndNotification shall have no parameters and no return value. */
/** @req 4.3.0/SWS_Spi_00052 - For the IB Channels, the Handler/Driver shall provide the buffering but it is not able to take care of the consistency
 * of the data in the buffer during transmission. The size of the Channel buffer is fixed. */
/** @req 4.1.2|4.3.0/SWS_Spi_00088 - For asynchronous levels, LEVEL 1 and LEVEL 2, the SPI Handler/Driver can call end notification functions at the end of a Job. */
/** @req 4.1.2|4.3.0/SWS_Spi_00073 - If the SpiSeqEndNotification is configured (i.e. not a null pointer),
 * the SPI Handler/Driver shall call the configured callback notification at the end of a Sequence transmission. */

/* Behavior of Mixed Sequences */
/** @req 4.3.0/SWS_Spi_00080 -  When using Interruptible Sequences, the caller must be aware that if the multiple Sequences access the same Channels,
 * the data for these Channels may be overwritten by the highest priority Job accessing each Channel. */
/** @req 4.3.0/SWS_Spi_00127 - In case of a Sequence configured as Non-Interruptible Sequence and according to requirement [SWS_Spi_00125],
 * the SPI Handler/Driver is not allowed to suspend this already started Sequence transmission in favour of another Sequence. */
/** @req 4.3.0/SWS_Spi_00125 - Interruptible Sequences are allowed within levels 1 and 2 of SPI Handler/Driver when the SpiInterruptibleSeqAllowed
 * parameter is switched on (i.e. configured with value "ON"). */
/** @req 4.3.0/SWS_Spi_00126 - When the SPI Handler/Driver is configured allowing interruptible Sequences, all Sequences declared shall have their
 * dedicated parameter SpiInterruptibleSequence (see SWS_Spi_00064 & SPI106) to identify whether the Sequence can be suspended during transmission. */

/* Asynchronous configurable feature: Interruptible Sequences */
/** @req 4.3.0/SWS_Spi_00121 - The SPI Handler/Driver’s environment shall configure the SpiInterruptibleSeqAllowed parameter (ON / OFF)
 * in order to select which kind of Sequences the SPI Handler/Driver manages */

/* Behavior of Non-Interruptible Sequences */
/** @req 4.3.0/SWS_Spi_00282 - When the SPI Handler/Driver is configured not allowing interruptible Sequences their dedicated parameter
 * SpiInterruptibleSequence can be omitted or the FALSE value should be used as default. */
/** @req 4.3.0/SWS_Spi_00122 - Interruptible Sequences are not allowed within levels 1 and 2 of the SPI/Handler/Driver when the
 * SpiInterruptibleSeqAllowed parameter is switched off (i.e. configured with value "OFF"). */
/** @req 4.3.0/SWS_Spi_00123 - When the SPI Handler/Driver is configured not allowing interruptible Sequences, all Sequences declared are considered
 * as Non-Interruptible Sequences */
/** @req 4.3.0/SWS_Spi_00124 -  According to [SWS_Spi_00116] and [SWS_Spi_00122] requirements, the SPI Handler/Driver is not allowed to suspend
 * a Sequence transmission already started in favour of another Sequence.  */

/* Scheduling Advices */
/** @req 4.3.0/SWS_Spi_00270 - In case call end notification function and rescheduling are fully done by software, the order between these shall be
 * first scheduling and then the call of end notification function executed. */
/** @req 4.3.0/SWS_Spi_00271 - In case call end notification function and rescheduling are fully done by hardware, the order could not be configured
 * as required; the order shall be completely documented. */

/* Common configurable feature: Allowed Channel Buffers */
/** @req 4.3.0/SWS_Spi_00279 - The SpiChannelBuffersAllowed parameter shall be configured to select which Channel Buffers the SPI Handler/Driver manages. */

 /* Configurable interfaces */
/** @req 4.3.0/SWS_Spi_00054 - If a callback notification is configured as null pointer, no callback shall be executed. */
/** @req 4.3.0/SWS_Spi_00085 - It is allowed to use the following API calls within the SPI callback notifications: Spi_ReadIB, Spi_WriteIB,
 * Spi_SetupEB, Spi_GetJobResult, Spi_GetSequenceResult, Spi_GetHWUnitStatus, Spi_Cancel. All other API calls are not allowed. */

 /* API parameter checking */
/** @req 4.3.0/SWS_Spi_00060 - The API parameter Length of data shall have a value within the specified buffer maximum value. Related error value: SPI_E_PARAM_LENGTH. */
/** @req 4.3.0/SWS_Spi_00258 - If the API parameter Length related service is not done and the return value shall be E_NOT_OK. */
/** @req 4.3.0/SWS_Spi_00288 - If HWUnit related service is not done and the return value shall be SPI_UNINIT. */
/** @req 4.3.0/SWS_Spi_00143 - The API parameter HWUnit shall have a value within the specified range of values. Related error value: SPI_E_PARAM_UNIT. */


#include "Platform_Types.h"
#include "Spi_Internal.h"
#include "Spi.h"
#include "Spi_MemMap.h"

#if defined(USE_DET)
#include "Det.h"
#endif
#if defined(USE_DEM)
#include "Dem.h"
#endif

/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X)
#define SPI_SW_MAJOR_VERSION_INT   3u /**< @brief Spi Module Software Major Version Number for TMS570 */
#define SPI_SW_MINOR_VERSION_INT   0u /**< @brief Spi Module Software Minor Version Number for TMS570 */
#define SPI_SW_PATCH_VERSION_INT   0u /**< @brief Spi Module Software Patch Version Number for TMS570 */

#define SPI_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Spi Module Autosar Major Version Number  */
#define SPI_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Spi Module Autosar Minor Version Number  */
#define SPI_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Spi Module Autosar Patch Version Number  */

#else
#define SPI_SW_MAJOR_VERSION_INT   2u
#define SPI_SW_MINOR_VERSION_INT   0u
#define SPI_SW_PATCH_VERSION_INT   0u

#define SPI_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Spi Module Autosar Major Version Number  */
#define SPI_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Spi Module Autosar Minor Version Number  */
#define SPI_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Spi Module Autosar Patch Version Number  */
#endif
/** @} */

#if (SPI_SW_MAJOR_VERSION != SPI_SW_MAJOR_VERSION_INT) || (SPI_SW_MINOR_VERSION != SPI_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Spi.c and Spi.h"
#endif

#if (SPI_AR_RELEASE_MAJOR_VERSION != SPI_AR_RELEASE_MAJOR_VERSION_INT) || (SPI_AR_RELEASE_MINOR_VERSION != SPI_AR_RELEASE_MINOR_VERSION_INT)
#error "AR Version mismatch between Spi.c and Spi.h"
#endif

/* ----------------------------[private define]------------------------------*/

/** @brief 	Global variable used to check if the Spi driver module is initialized
 * 	@details Initially FALSE set to TRUE if Spi_Init() have been called
 * */
boolean Spi_initialized = FALSE;


/***************************************************************************//**
 * @brief   Function used to validate custom expressions.
 * @details If the validation fails, an error is reported to default error tracer
 *          if SPI_DEV_ERROR_DETECT is STD_ON.
 * @param[in]           exp - boolean expression to be validated
 * @param[in]           apiid - AUTOSAR specified API Id for each module
 * @param[in]           errid - AUTOSAR specified Error Id for each type of error
 *                      specific to each API
 * @param[in/out]       rv - pointer to validation status to be updated according
 * 						to validation result
 ******************************************************************************/
static inline void Spi_validate(boolean exp, uint8 apiid, uint8 errid, Std_ReturnType* rv) {
    if ((*rv == E_OK) && (exp == FALSE)) {
#if SPI_DEV_ERROR_DETECT==STD_ON
        (void)Det_ReportError( SPI_MODULE_ID, 0, apiid, errid);
#endif
        *rv = E_NOT_OK;
    }
}

/* ----------------------------[public functions]----------------------------*/

/** @req 4.3.0/SWS_Spi_00177 - Spi_WriteIB */
/** @req 4.3.0/SWS_Spi_00304 - The operation Spi_WriteIB is Re-entrant.*/
/** @req 4.3.0/SWS_Spi_00305 - When the API Spi_WriteIB command has been accepted the function returns the value E_OK.*/
/** @req 4.3.0/SWS_Spi_00306 - When the API Spi_WriteIB command has not been accepted the function returns the value E_NOT_OK.*/
/** @req 4.3.0/SWS_Spi_00307 - The function Spi_WriteIB provides the service for writing one or more data to an IB SPI Handler/Driver Channel by the respective parameter.*/
/** @req 4.3.0/SWS_Spi_00137 - The function Spi_WriteIB shall be pre-compile time configurable by the parameter SpiChannelBuffersAllowed. This function is only relevant for Channels with IB.*/

/* @brief Service for writing one or more data to an IB SPI Handler/Driver Channel specified by parameter.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_WriteIB is called.
 *  @param[in]        Channel - Channel ID.
 *  @param[in]        DataBufferPtr - Pointer to source data buffer. If this pointer is null, it is assumed that the data to be transmitted is not relevant and the default transmit value of this channel will be used instead.
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Write command has been accepted
 *  @retval E_NOT_OK  Write command has not been accepted
 */
Std_ReturnType Spi_WriteIB(Spi_ChannelType Channel, const Spi_DataBufferType *DataBufferPtr) {

    Std_ReturnType write_ib_return = E_OK;

    Spi_validate((boolean)( Channel<SPI_MAX_CHANNEL ), SPI_WRITEIB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &write_ib_return);
    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_WRITEIB_SERVICE_ID, SPI_E_UNINIT, &write_ib_return);

    if(write_ib_return == E_OK){
    	write_ib_return =  Spi_Hw_WriteIB(Channel, DataBufferPtr);
    }

    return write_ib_return;
}

/** @req 4.1.2|4.3.0/SWS_Spi_00175 - Spi_Init*/
/** @req 4.1.2|4.3.0/SWS_Spi_00298 - The operation Spi_Init is Non Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00299 - The function Spi_Init provides the service for SPI initialization.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00013 - The function Spi_Init shall initialize all SPI relevant registers with the values of the structure referenced by the parameter ConfigPtr.
 * (SRS_BSW_00405, SRS_BSW_00101, SRS_SPAL_12057, SRS_SPAL_12125)*/
/** @req 4.3.0/SWS_Spi_00082 - The function Spi_Init shall define default values for required parameters of the structure referenced by the ConfigPtr.
 * For example: all buffer pointers shall be initialized as a null value pointer.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00015 - After the module initialization using the function Spi_Init, the SPI Handler/Driver shall set its state to SPI_IDLE,
 * the Sequences result to SPI_SEQ_OK and the jobs result to SPI_JOB_OK. (SRS_BSW_00406, SRS_BSW_00101, SRS_SPAL_12057)*/
/** @req 4.3.0/SWS_Spi_00151 - For LEVEL 2 (see chapter 7.2.5 and SPI103), the function Spi_Init shall set the SPI Handler/Driver asynchronous mechanism mode to SPI_POLLING_MODE by default.
 * Interrupts related to SPI busses shall be disabled.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00008 - The type Spi_ConfigType is an external data structure
 * and shall contain the initialization data for the SPI Handler/Driver. It shall contain:
 *   MCU dependent properties for SPI HW units
 *   Definition of Channels
 *   Definition of Jobs
 *   Definition of Sequences.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00009 - For the type Spi_ConfigType, the definition for each Job shall contain:
 *   Assigned SPI HW Unit
 *   Assigned Chip Select pin (it is possible to assign no pin)
 *   Chip select functionality on/off
 *   Chip select pin polarity high or low
 *   Baud rate
 *   Timing between clock and chip select
 *   Shift clock idle low or idle high
 *   Data shift with leading or trailing edge
 *   Priority (4 levels are available from 0, the lower to 3, the higher)
 *   Job finish end notification function
 *   MCU dependent properties for the Job (only if needed)
 *   Fixed link of Channels (at least one) */
/** @req 4.1.2|4.3.0/SWS_Spi_00010 - For the type Spi_ConfigType,
 * the configuration will map the Jobs to the different SPI hardware units and the devices.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00017 - After reset, the type Spi_SeqResultType shall have the de-fault value SPI_SEQ_OK with the numeric value 0.*/

/*  @brief Service for SPI initialization.
 *         Synchronous
 *  @note      Non Reentrant
 *  @note      A re-initialization of a SPI Handler/Driver by executing the Spi_Init() function requires a de-initialization before by executing a Spi_DeInit().
 *  @param[in] ConfigPtr - Pointer to configuration set.
 */
void Spi_Init(const Spi_ConfigType *ConfigPtr) {
    /** @req 4.1.2|4.3.0/SWS_Spi_00235 If not applicable, the SPI Handler/Driver module’s environment shall pass a NULL pointer to the function Spi_Init() */
	Std_ReturnType validation = E_OK;

	Spi_validate((boolean)( NULL_PTR != ConfigPtr ), SPI_INIT_SERVICE_ID, SPI_E_PARAM_POINTER, &validation);
	/** @req 4.1.2|4.3.0/SWS_Spi_00233 - ...calling of the routine SPI_Init() while the SPI driver is already initialized will cause a development error SPI_E_ALREADY_INITIALIZED... */
	/** @req 4.1.2|4.3.0/SWS_Spi_00246 - ...error SPI_E_ALREADY_INITIALIZED when API SPI_Init service is called while the SPI driver has already been initialized. */
	Spi_validate((boolean)( TRUE != Spi_initialized ), SPI_INIT_SERVICE_ID, SPI_E_ALREADY_INITIALIZED, &validation);

    if(validation == E_OK) {
    	 Spi_Hw_Init(ConfigPtr);
    }

    Spi_initialized = TRUE;
}

/** @req 4.1.2|4.3.0/SWS_Spi_00176 - Spi_DeInit */
/** @req 4.1.2|4.3.0/SWS_Spi_00300 - The operation Std_ReturnType Spi_DeInit( ) is Non Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00301 - When the API Spi_DeInit has been accepted the return value of this function shall be E_OK.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00302 - When the API Spi_DeInit has not been accepted the return value of this function shall be E_NOT_OK.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00303 - The function Spi_DeInit provides the service for SPI de-initialization.*/
/** @req 4.3.0/SWS_Spi_00021 - The function Spi_DeInit shall de-initialize SPI Handler/Driver. (SRS_BSW_00336, SRS_SPAL_12163, SRS_SPAL_12064)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00252 - In case of the SPI Handler/Driver state is not SPI_BUSY, the deInitialization function shall put all already initialized microcontroller SPI peripherals into the same state such as Power On Reset.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00253 - The function call Spi_DeInit shall be rejected if the status of SPI Handler/Driver is SPI_BUSY.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00022 - After the module de-initialization using the function Spi_DeInit, the SPI Handler/Driver shall set its state to SPI_UNINIT.
 * (SRS_BSW_00336, SRS_SPAL_12163)*/

/* @brief Service for SPI de-initialization.
 *         Synchronous
 *  @note  Non Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_DeInit is called, otherwise see [SWS_Spi_00046].
 *  @return		      Whether the command has been accepted or not. 
 *  @retval E_OK      De-initialisation command has been accepted.
 *  @retval E_NOT_OK  De-initialisation command has not been accepted.
 */
Std_ReturnType Spi_DeInit(void) {
    Std_ReturnType deinit_return = E_OK;

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_DEINIT_SERVICE_ID, SPI_E_UNINIT, &deinit_return);

    if(deinit_return == E_OK){
    	deinit_return = Spi_Hw_DeInit();
    }

    Spi_initialized = FALSE;

    return(deinit_return);
}


/**
 * Blocking write
 *
 * @param Sequence The sequence
 * @return E_OK When the command has been accepted.
 */
#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_0) || (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/** @req 4.1.2|4.3.0/SWS_Spi_00185 - Spi_SyncTransmit */
/** @req 4.1.2|4.3.0/SWS_Spi_00327 - The operation Spi_SyncTransmit is Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00328 - Return value of the function Spi_SyncTransmit is E_OK: when Transmission command has been accepted.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00329 - Return value of the function Spi_SyncTransmit is E_NOT_OK: When Transmission command has not been accepted.*/
/** @req 4.3.0/SWS_Spi_00330 - The function Spi_SyncTransmit provides the service to transmit data on the SPI bus.*/
/** @req 4.3.0/SWS_Spi_00134 - When the function Spi_SyncTransmit is called, shall take over the given parameter
 * and set the SPI Handler/Driver status to SPI_BUSY can be obtained calling the API service SPI_GetStatus. (SRS_Spi_12152, SRS_Spi_12153, SRS_Spi_12154)*/
/** @req 4.3.0/SWS_Spi_00285 - When the function Spi_SyncTransmit is called, shall take over the given parameter
 * and set the Sequence status to SPI_SEQ_PENDING can be obtained calling the API service Spi_GetSequenceResult.*/
/** @req 4.3.0/SWS_Spi_00286 - When the function Spi_SyncTransmit is called, shall take over the given parameter
 * and set the Job status to SPI_JOB_PENDING can be obtained calling the API service Spi_GetJobResult.*/
/** @req 4.3.0/SWS_Spi_00135 - When the function Spi_SyncTransmit is called while a sequence is on transmission
 * and SPI_SUPPORT_CONCURRENT_SYNC_TRANSMIT is disabled or another sequence is on transmition on same bus,
 * the SPI Handler/Driver shall not take into account this new transmission request and the function shall return the value E_NOT_OK (see [SWS_Spi_00114]).
 * In this case and according to [SWS_Spi_00100], the SPI Handler/Driver shall report the SPI_E_SEQ_IN_PROCESS error.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00136 - The function Spi_SyncTransmit is pre-compile time selectable by the configuration parameter SpiLevelDelivered.
 * This function is only relevant for LEVEL 0 and LEVEL 2.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00160 - The LEVEL 0 SPI Handler/Driver shall offer a synchronous transfer service for SPI busses.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00128 - The LEVEL 2 SPI Handler/Driver shall offer a synchronous transfer service for all SPI HW units configured as synchronous
 * and it shall also offer an asynchronous transfer service for all other SPI buses.*/

/*  @brief Service to transmit data on the SPI bus
 *         Asynchronous
 *  @note  Reentrant
 *  @param[in]        Sequence - Sequence ID.
 *  @return 		  Whether the command has been accepted or not.
 *  @retval E_OK      Transmission command has been accepted
 *  @retval E_NOT_OK  Transmission command has not been accepted
 */
Std_ReturnType Spi_SyncTransmit(Spi_SequenceType Sequence) {

    /** @req 4.1.2|4.3.0/SWS_Spi_00032 - The API parameters Sequence and Job shall have values within the specified range of values. Related errors values:
     * SPI_E_PARAM_SEQ or SPI_E_PARAM_JOB.(SRS_BSW_00323) */
    Std_ReturnType sync_transmit_return = E_OK;

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_SYNCTRANSMIT_SERVICE_ID, SPI_E_UNINIT, &sync_transmit_return);
    Spi_validate((boolean)( SPI_MAX_SEQUENCE>Sequence ), SPI_SYNCTRANSMIT_SERVICE_ID, SPI_E_PARAM_SEQ, &sync_transmit_return);

    if(sync_transmit_return == E_OK){
    	sync_transmit_return = Spi_Hw_SyncTransmit(Sequence);
    }
    /** @req 4.1.2|4.3.0/SWS_Spi_00309 - When the API Spi_AsyncTransmit command has been ac-cepted the function shall return the value E_OK. */
    return sync_transmit_return ;
}
#endif

/** @req 4.1.2|4.3.0/SWS_Spi_00178 - Spi_AsyncTransmit*/
/** @req 4.1.2|4.3.0/SWS_Spi_00308 - The operation Std_ReturnType Spi_AsyncTransmit( Spi_SequenceType Sequence ) is Re-entrant.*/
/** @req 4.3.0/SWS_Spi_00309 - When the API Spi_AsyncTransmit command has been accepted the function shall return the value E_OK.*/
/** @req 4.3.0/SWS_Spi_00310 - When the API Spi_AsyncTransmit command has not been accepted the function shall return the value E_NOT_OK.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00311 - The function Spi_AsyncTransmit provides service to transmit data on the SPI bus.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00020 - The function Spi_AsyncTransmit shall take over the given parameter, initiate a transmission, set the SPI Handler/Driver status to SPI_BUSY,
 * set the sequence result to SPI_SEQ_PENDING and return. (SRS_Spi_12099, SRS_Spi_12101, SRS_Spi_12103).*/
/** @req 4.3.0/SWS_Spi_00194 - When the function Spi_AsyncTransmit is called, shall take over the given parameter and set the Job status to SPI_JOB_QUEUED, which can be ob-tained by calling the API service Spi_GetJobResult.*/
/** @req 4.3.0/SWS_Spi_00157 - When the function Spi_AsyncTransmit is called, the SPI Han-dler/Driver shall handle the Job results. Result shall be SPI_JOB_PENDING when the transmission of Jobs is started.*/
/** @req 4.3.0/SWS_Spi_00292 - When the function Spi_AsyncTransmit is called, the SPI Han-dler/Driver shall handle the Job results. Result shall be SPI_JOB_OK when the transmission of Jobs is success.*/
/** @req 4.3.0/SWS_Spi_00293 - When the function Spi_AsyncTransmit is called, the SPI Han-dler/Driver shall handle the Job results. Result shall be SPI_JOB_FAILED when the transmission of Jobs is failed.*/
/** @req 4.3.0/SWS_Spi_00081 - When the function Spi_AsyncTransmit is called and the re-quested Sequence is already in state SPI_SEQ_PENDING, the SPI Handler/Driver shall not take in account this new request
 * and this function shall return with value E_NOT_OK, in this case.*/
/** @req 4.3.0/SWS_Spi_00266 - When the function Spi_AsyncTransmit is called and the re-quested Sequence is already in state SPI_SEQ_PENDING the SPI Handler/Driver shall report the SPI_E_SEQ_PENDING error
 * according to [SWS_BSW_00042] and [SWS_BSW_00045].*/
/** @req 4.3.0/SWS_Spi_00086 - When the function Spi_AsyncTransmit is called and the re-quested Sequence shares Jobs with another sequence that is in the state SPI_SEQ_PENDING,
 * the SPI Handler/Driver shall not take into account this new re-quest and this function shall return the value E_NOT_OK. In this case and according to [SWS_BSW_00042] and [SWS_BSW_00045],
 * the SPI Handler/Driver shall report the SPI_E_SEQ_PENDING error.*/
/** @req 4.3.0/SWS_Spi_00036 - When the function Spi_AsyncTransmit is used with EB and the destination data pointer has been provided as NULL using the Spi_SetupEB method,
 * the SPI Handler/Driver shall ignore receiving data (See also [SWS_Spi_00030])*/
/** @req 4.1.2|4.3.0/SWS_Spi_00055 - When the function Spi_AsyncTransmit is used for a sequence with linked Jobs, the function shall transmit from the first Job up to the last Job in the sequence. (SRS_Spi_12181)*/
/** @req 4.3.0/SWS_Spi_00057 -  At the end of a sequence transmission initiated by the function Spi_AsyncTransmit and if configured, the SPI Handler/Driver shall invoke the sequence notification call-back function
 * after the last Job end notification if this one is also configured. (SRS_SPAL_00157, SRS_Spi_12108)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00133 - The function Spi_AsyncTransmit is pre-compile time se-lectable by the configuration parameter SpiLevelDelivered. This function is only relevant for LEVEL 1 and LEVEL 2.*/
/** @req 4.3.0/SWS_Spi_00173 - The SPI Handler/Driver�s environment shall call the function Spi_AsyncTransmit after a function call of Spi_SetupEB for EB Channels
 * or a function call of Spi_WriteIB for IB Channels but before the function call Spi_ReadIB.*/

/** @req 4.1.2|4.3.0/SWS_Spi_00162 - The LEVEL 1 SPI Handler/Driver shall offer an asynchronous transfer service for SPI buses.
 * An asynchronous transmission means that the user calling the transmission service is not blocked when the transmission is on going. (SRS_Spi_12099, SRS_Spi_12101, SRS_Spi_12103)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00295 - The LEVEL 1 SPI Handler/Driver shall offer an asynchronous transfer service for SPI buses.
 * Furthermore, the user can be notified at the end of transmission.*/

/*  @brief Service to transmit data on the SPI bus.
 *         Asynchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_AsyncTransmit is called.
 *  @param[in] Sequence - Sequence ID.
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Transmission command has been accepted
 *  @retval E_NOT_OK  Transmission command has not been accepted
 */
#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_1) || (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
Std_ReturnType Spi_AsyncTransmit(Spi_SequenceType Sequence) {

    Std_ReturnType async_transmit_return = E_OK;

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_ASYNCTRANSMIT_SERVICE_ID, SPI_E_UNINIT, &async_transmit_return);
    Spi_validate((boolean)( SPI_MAX_SEQUENCE > Sequence ), SPI_ASYNCTRANSMIT_SERVICE_ID, SPI_E_PARAM_SEQ, &async_transmit_return);

    if(async_transmit_return == E_OK){
    	async_transmit_return = Spi_Hw_AsyncTransmit(Sequence);
    }

    /** @req 4.1.2|4.3.0/SWS_Spi_00020 - The function Spi_AsyncTransmit shall take over the given parameter, initiate a transmission, set the SPI Handler/Driver status to SPI_BUSY,
     * set the sequence result to SPI_SEQ_PENDING and return. (SRS_Spi_12099, SRS_Spi_12101, SRS_Spi_12103).*/
    /** @req 4.3.0/SWS_Spi_00309 - When the API Spi_AsyncTransmit command has been accepted the function shall return the value E_OK.*/
    /** @req 4.3.0/SWS_Spi_00310 - When the API Spi_AsyncTransmit command has not been accepted the function shall return the value E_NOT_OK.*/
    return async_transmit_return;
}
#endif

/** @req 4.3.0/SWS_Spi_00027 - The SPI Handler/Driver's environment shall call the function Spi_ReadIB after a Transmit method call to have relevant data within IB Channel.*/
/** @req 4.3.0/SWS_Spi_00138 - The function Spi_ReadIB is pre-compile time configurable by the parameter SpiChannelBuffersAllowed. This function is only relevant for Channels with IB.*/
/** @req 4.3.0/SWS_Spi_00179 - Spi_ReadIB*/
/** @req 4.3.0/SWS_Spi_00312 - The operation Spi_ReadIB is Re-entrant.*/
/** @req 4.3.0/SWS_Spi_00313 - The function Spi_ReadIB return values E_OK: read command has been accepted.*/
/** @req 4.3.0/SWS_Spi_00314 - The function Spi_ReadIB return values E_NOT_OK: read command has not been accepted.*/
/** @req 4.3.0/SWS_Spi_00315 - The function Spi_ReadIB provides the service for reading synchronously one or more data from an IB SPI Handler/Driver Channel specified by parameter.*/
/** @req 4.3.0/SWS_Spi_00016 - The function Spi_ReadIB shall read synchronously one or more data from an IB SPI Handler/Driver Channel specified by the respective parameter. (SRS_Spi_12099, SRS_Spi_12152)*/

/*  @brief Service for reading synchronously one or more data from an IB SPI Handler/Driver Channel specified by parameter.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_ReadIB is called
 *  @param[in]        Channel - Channel ID.
 *  @param[in]        DataBufferPointer - Pointer to destination data buffer in RAM
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Read command has been accepted
 *  @retval E_NOT_OK  Read command has not been accepted
 */
Std_ReturnType Spi_ReadIB(Spi_ChannelType Channel, Spi_DataBufferType* DataBufferPtr) {

    Std_ReturnType read_ib_return = E_OK;

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_READIB_SERVICE_ID, SPI_E_UNINIT, &read_ib_return);
    Spi_validate((boolean)( DataBufferPtr != NULL_PTR ),  SPI_READIB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &read_ib_return);
    Spi_validate((boolean)( Channel<SPI_MAX_CHANNEL), SPI_READIB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &read_ib_return);

    if(read_ib_return == E_OK){
    	read_ib_return = Spi_Hw_ReadIB(Channel, DataBufferPtr);
    }
    return read_ib_return;
}

/** @req 4.1.2|4.3.0/SWS_Spi_00180 - Spi_SetupEB*/
/** @req 4.1.2|4.3.0/SWS_Spi_00316 - The operation Spi_SetupEB is Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00317 - Return values of the function Spi_SetupEB are E_OK: Setup command has been accepted and E_NOT_OK: Setup command has not been accepted.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00318 - The function Spi_SetupEB provides the service to setup the buffers and the length of data for the EB SPI Handler/Driver Channel specified.*/
/** @req 4.3.0/SWS_Spi_00058 - The function Spi_SetupEB shall set up the buffers and the length of data for the specific EB SPI Handler/Driver Channel. (SRS_Spi_12103)*/
/** @req 4.3.0/SWS_Spi_00067 - The function Spi_SetupEB shall update the buffer pointers and length attributes of the specified Channel with the provided values. (SRS_Spi_12103)*/
/** @req 4.3.0/SWS_Spi_00028 - When the SPI Handler/Driver�s environment is calling the function Spi_SetupEB with the parameter SrcDataBufferPtr being a Null pointer,
 * the function shall transmit the default transmit value configured for the channel after a Transmit method is requested. (See also [SWS_Spi_00035])*/
/** @req 4.3.0/SWS_Spi_00030 - When the function Spi_SetupEB is called with the parameter DesDataBufferPtr being a Null pointer, the SPI Handler/Driver
 *  shall ignore the received data after a Transmit method is requested.(See also [SWS_Spi_00036])*/
/** @req 4.3.0/SWS_Spi_00139 - The function Spi_SetupEB is pre-compile time configurable by the parameter SpiChannelBuffersAllowed.
 * This function is only relevant for Channels with EB.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00053 - For EB Channels the application shall provide the buffering and shall take care of the consistency of the data in the buffer during transmission.
(SRS_SPAL_12075, SRS_Spi_12025, SRS_Spi_12198, SRS_Spi_12200, SRS_Spi_12261, SRS_Spi_12262, SRS_Spi_12202, SRS_Spi_12103)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00280 - The buffer provided by the application for the SPI Handler Driver may have a different size. */
/** @req 4.1.2|4.3.0/SWS_Spi_00077 - To transmit a variable number of data, it is mandatory to call the Spi_SetupEB function to store new parameters within driver before each Spi_AsyncTransmit function call. */
/** @req 4.1.2|4.3.0/SWS_Spi_00078 - To transmit a constant number of data, it is only mandatory to call the Spi_SetupEB before the first Spi_AsyncTransmit function call. */


/*  @brief Service to setup the buffers and the length of data for the EB SPI Handler/Driver Channel specified.
 *         Synchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver shall have been initialized before the function Spi_SetupEB is called
 *  @param[in]        Channel - Channel ID.
 *  @param[in]        SrcDataBufferPtr - Pointer to source data buffer.
 *  @param[in]        DesDataBufferPtr - Pointer to destination data buffer in RAM.
 *  @param[in]        Length - Length (number of data elements) of the data to be transmitted from SrcDataBufferPtr and/or received from DesDataBufferPtr Min.: 1 Max.: Max of data specified at configuration for this channel
 *  @return		      Whether the command has been accepted or not.
 *  @retval E_OK      Setup command has been accepted
 *  @retval E_NOT_OK  Setup command has not been accepted
 */
Std_ReturnType Spi_SetupEB(Spi_ChannelType Channel, const Spi_DataBufferType* SrcDataBufferPtr,
        Spi_DataBufferType* DesDataBufferPtr, Spi_NumberOfDataType Length) {

    Std_ReturnType setup_eb_result_return = E_OK;
    /** @req 4.1.2|4.3.0/SWS_Spi_00031 When the API Spi_DeInit has been accepted the return value of this function shall be E_OK. */

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_SETUPEB_SERVICE_ID, SPI_E_UNINIT, &setup_eb_result_return);
    Spi_validate((boolean)( Channel<SPI_MAX_CHANNEL),   SPI_SETUPEB_SERVICE_ID, SPI_E_PARAM_CHANNEL, &setup_eb_result_return);
	/* NOTE: do not validate DesDataBufferPtr != NULL_PTR and SrcDataBufferPtr != NULL_PTR. 
	 * This function should call the hardware depandant function eaven with these parameters being NULL_PTR
	 * and support requirement SWS_Spi_00028
	 */
    if(setup_eb_result_return == E_OK){
    	setup_eb_result_return = Spi_Hw_SetupEB(Channel, SrcDataBufferPtr, DesDataBufferPtr, Length);
    }

    return setup_eb_result_return;
}

/** @req 4.1.2|4.3.0/SWS_Spi_00181 - Spi_GetStatus */
/** @req 4.1.2|4.3.0/SWS_Spi_00319 - The operation Spi_GetStatus is Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00320 - The function Spi_GetStatus returns the SPI Handler/Driver software module status.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00025 - The function Spi_GetStatus shall return the SPI Handler/Driver software module status. (SRS_SPAL_12064, SRS_Spi_12104)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00259 - The type Spi_StatusType can be obtained calling the API service Spi_GetStatus.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00345 - API service Spi_GetStatus shall return SPI_UNINIT when the SPI Handler/Driver is not initialized or not usable.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00346 - API service Spi_GetStatus shall return SPI_IDLE when The SPI Handler/Driver is not currently transmitting any Job.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00347 - API service Spi_GetStatus shall return SPI_BUSY when The SPI Handler/Driver is performing a SPI Job transmit.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00061 - The type Spi_StatusType defines a range of specific status for SPI Handler/Driver.
 * It informs about the SPI Handler/Driver status or specified SPI Hardware microcontroller peripheral.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00011 -After reset, the type Spi_StatusType shall have the default value SPI_UNINIT with the numeric value 0.*/

/*  @brief Service returns the SPI Handler/Driver software module status.
 *         Synchronous
 *  @note  Reentrant
 *  @return		        Spi status
 *  @retval SPI_UNINIT  The SPI Handler/Driver is not initialized or not usable.
 *  @retval SPI_IDLE    The SPI Handler/Driver is not currently transmitting any Job.
 *  @retval SPI_BUSY    The SPI Handler/Driver is performing a SPI Job( transmit )
 */
Spi_StatusType Spi_GetStatus(void) {
    Spi_StatusType status= SPI_UNINIT;
    Std_ReturnType rv = E_OK;

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_GETSTATUS_SERVICE_ID, SPI_E_UNINIT, &rv);

    if(rv == E_OK){
    	status =  Spi_Hw_GetStatus();
    }

    return status;
}

/** @req 4.1.2|4.3.0/SWS_Spi_00182 - Spi_GetJobResult*/
/** @req 4.1.2|4.3.0/SWS_Spi_00321 - The operation Spi_GetJobResult is Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00322 - The function Spi_GetJobResult service returns the last transmission result of the specified Job.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00026 - The function Spi_GetJobResult shall return the last transmission result of the specified Job. (SRS_SPAL_00157, SRS_Spi_12104)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00038 - The SPI Handler/Driver�s environment shall call the function Spi_GetJobResult to inquire
 * whether the Job transmission has succeeded (SPI_JOB_OK) or failed (SPI_JOB_FAILED). (SRS_SPAL_00157)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00062 - The type Spi_JobResultType defines a range of specific Jobs status for SPI Handler/Driver. (SRS_BSW_00335)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00261 - The type Spi_JobResultType it informs about a SPI Handler/Driver Job status and can be obtained calling the API service Spi_GetJobResult with the Job ID.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00350 - The function Spi_GetJobResult shall return SPI_JOB_OK when the last transmission of the Job has been finished successfully.*/

/* @brief This service returns the last transmission result of the specified Job.
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
Spi_JobResultType Spi_GetJobResult(Spi_JobType Job) {

    Spi_JobResultType get_job_result_return = SPI_JOB_FAILED;
    Std_ReturnType validation = E_OK;
    /** @req 4.1.2|4.3.0/SWS_Spi_00237 - SPI Handler/driver shall be able to detect the error SPI_E_PARAM_JOB(0x0B) when API service called with wrong parameter. */

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_GETJOBRESULT_SERVICE_ID, SPI_E_UNINIT, &validation);
    Spi_validate((boolean)( SPI_MAX_JOB > Job), SPI_GETJOBRESULT_SERVICE_ID, SPI_E_PARAM_JOB, &validation);

    if(validation == E_OK ){
    	get_job_result_return = Spi_Hw_GetJobResult(Job);
    }

    /** @req 4.1.2|4.3.0/SWS_Spi_00322 - The function Spi_GetJobResult service returns the last transmission result of the specified Job.*/
    /** @req 4.1.2|4.3.0/SWS_Spi_00026 - The function Spi_GetJobResult shall return the last transmission result of the specified Job. (SRS_SPAL_00157, SRS_Spi_12104)*/
    return(get_job_result_return);
}

/** @req 4.1.2|4.3.0/SWS_Spi_00183 - Spi_GetSequenceResult*/
/** @req 4.1.2|4.3.0/SWS_Spi_00323 - The operation Spi_GetSequenceResult is Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00324 - The function Spi_GetSequenceResult shall return the last transmission result of the specified Sequence.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00039 - The function Spi_GetSequenceResult shall return the last transmission result of the specified Sequence. (SRS_SPAL_00157, SRS_Spi_12104)*/
/** @req 4.1.2|4.3.0/SWS_Spi_00042 - The SPI Handler/Driver�s environment shall call the function Spi_GetSequenceResult to inquire
 * whether the full Sequence transmission has succeeded (SPI_SEQ_OK) or failed (SPI_SEQ_FAILED). (SRS_SPAL_00157, SRS_Spi_12170)*/

/** @req 4.1.2|4.3.0/SWS_Spi_00351 - The type Spi_SeqResultType defines a range of specific Sequences status for SPI Handler/Driver
 * and can be obtained calling the API service Spi_GetSequenceResult, it shall be provided for external use.*/
/** @req 4.3.0/SWS_Spi_00251 - The type Spi_SeqResultType defines about SPI Handler/Driver Sequence status
 * and can be obtained calling the API service Spi_GetSequenceResult with the Sequence ID.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00352 - Spi_GetSequenceResult function shall return SPI_SEQ_OK
 * when the last transmission of the Sequence has been finished successfully.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00353 - Spi_GetSequenceResult function shall return SPI_SEQ_PENDING
 * when the SPI Handler/Driver is performing a SPI Sequence.
 * The meaning of this status is equal to SPI_BUSY.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00354 - Spi_GetSequenceResult function shall return SPI_SEQ_FAILED
 * when the last transmission of the Sequence has failed.*/

/*  @brief This service returns the last transmission result of the specified Sequence.
 *         Synchronous
 *  @note  Reentrant
 *  @note  Every new transmit sequence that has been accepted by the SPI Handler/Driver overwrites the previous sequence result with SPI_SEQ_PENDING.
 *  @note  If the SPI Handler/Driver has not been initialized before the function Spi_GetSequenceResult is called, the return value is undefined.
 *  @param[in] Sequence - Sequence ID. An invalid sequence ID will return an undefined result.
 *  @retval Spi_SeqResultType  Spi_SeqResultType
 */
Spi_SeqResultType Spi_GetSequenceResult(Spi_SequenceType Sequence) {

    Spi_SeqResultType get_sequence_result_return = SPI_SEQ_FAILED;
    Std_ReturnType validation = E_OK;
    /** @req 4.1.2|4.3.0/SWS_Spi_00238 - SPI Handler/driver shall be able to detect the error SPI_E_PARAM_SEQ(0x0C) when API service called with wrong parameter. */

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_GETSEQUENCERESULT_SERVICE_ID, SPI_E_UNINIT, &validation);
    Spi_validate((boolean)( SPI_MAX_SEQUENCE>Sequence), SPI_GETSEQUENCERESULT_SERVICE_ID, SPI_E_PARAM_SEQ, &validation);

    if(validation == E_OK){
    	get_sequence_result_return = Spi_Hw_GetSequenceResult(Sequence);
    }

    return(get_sequence_result_return);
}


#if (SPI_HW_STATUS_API == STD_ON)

/** @req 4.1.2|4.3.0/SWS_Spi_00186 - Spi_GetHWUnitStatus*/
/** @req 4.1.2|4.3.0/SWS_Spi_00331 - The operation Spi_GetHWUnitStatus is Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00332 - The function Spi_GetHWUnitStatus service returns the status of the specified SPI Hardware microcontroller peripheral.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00141 - The function Spi_GetHWUnitStatus shall return the status of the specified SPI Hardware microcontroller peripheral.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00287 - The SPI Handler/Driver�s environment shall call this function to inquire
 * whether the specified SPI Hardware microcontroller peripheral is SPI_IDLE or SPI_BUSY.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00142 - The function Spi_GetHWUnitStatus is pre-compile time configurable On / Off by the configuration parameter SpiHwStatusApi.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00260 - The type Spi_StatusType can be obtained calling the API service Spi_GetHWUnitStatus.*/
/** @req 4.3.0/SWS_Spi_00348 - Spi_GetHWUnitStatus function shall return SPI_IDLE when The SPI Hardware microcontroller peripheral is not currently transmitting any Job.*/
/** @req 4.3.0/SWS_Spi_00349 - Spi_GetHWUnitStatus function shall return SPI_BUSYwhen The SPI Hardware microcontroller peripheral is performing a SPI Job transmit.*/

/*  @brief This service returns the status of the specified SPI Hardware microcontroller peripheral.
 *         Synchronous
 *  @note  Reentrant
 *  @note  If SPI Handler/Driver has not been initialized before the function Spi_GetHWUnitStatus is called, the return value is undefined.
 *  @param[in] HWUnit 		SPI Hardware microcontroller peripheral (unit) ID.
 *  @return Spi status
 *  @retval SPI_UNINIT 		Not initialized or not usable.
 *  @retval SPI_IDLE 		Not currently transmitting any Job.
 *  @retval SPI_BUSY      	Performing a SPI Job( transmit )
 */
Spi_StatusType Spi_GetHWUnitStatus(Spi_HWUnitType HWUnit) {

    Spi_StatusType get_hw_unit_status_return = SPI_UNINIT;
    Std_ReturnType validation = E_OK;
    /** @req 4.1.2|SWS_Spi_00143 - The API parameter HWUnit shall have a value within the specified range of values. Related error value: SPI_E_PARAM_UNIT. */
    /** @req 4.1.2|SWS_Spi_00288 - If HWUnit related service is not done and the return value shall be SPI_UNINIT. */
    /** @req 4.1.2|4.3.0/SWS_Spi_00241 - SPI Handler/driver shall be able to detect the error SPI_E_PARAM_UNIT(0x0E) when API service called with wrong parameter. */
    Spi_validate((boolean)( SPI_CONTROLLER_CNT > HWUnit), SPI_GETHWUNITSTATUS_SERVICE_ID, SPI_E_PARAM_UNIT, &validation);
    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_GETHWUNITSTATUS_SERVICE_ID, SPI_E_UNINIT, &validation);

    if(validation == E_OK){
    	get_hw_unit_status_return = Spi_Hw_GetHWUnitStatus(HWUnit);
    }

    /** @req 4.1.2|4.3.0/SWS_Spi_00332 - The function Spi_GetHWUnitStatus service returns the status of the specified SPI Hardware microcontroller peripheral.*/
    /** @req 4.1.2|4.3.0/SWS_Spi_00141 - The function Spi_GetHWUnitStatus shall return the status of the specified SPI Hardware microcontroller peripheral.*/
    return(get_hw_unit_status_return);
}
#endif

/** @req 4.3.0/SWS_Spi_00146 - The function Spi_Cancel is pre-compile time configurable On / Off by the configuration parameter SpiCancelApi.*/
#if (SPI_CANCEL_API == STD_ON )
/** @req 4.3.0/SWS_Spi_00187 - Spi_Cancel*/
/** @req 4.3.0/SWS_Spi_00333 - The operation Spi_Cancel is Re-entrant.*/
/** @req 4.3.0/SWS_Spi_00334 - The function Spi_Cancel service cancels the specified on-going sequence transmission.*/
/** @req 4.3.0/SWS_Spi_00144 - The function Spi_Cancel shall cancel the specified on-going sequence transmission without cancelling
 * any Job transmission and set the sequence result to SPI_SEQ_CANCELLED.*/
/** @req 4.3.0/SWS_Spi_00145 - When the sequence is cancelled by the function Spi_Cancel and if configured,
 * the SPI Handler/Driver shall call the sequence notification call-back function instead of starting a potential next job belonging to it.*/

/* @brief Service cancels the specified on-going sequence transmission.
 *         Asynchronous
 *  @note  Reentrant
 *  @note  The SPI Handler/Driver is not responsible on external devices damages or undefined state due to cancelling a sequence transmission. It is up to the SPI Handler/Driver�s environment to be aware to what it is doing!
 *  @param[in] Sequence - Sequence ID.
 */
void Spi_Cancel(Spi_SequenceType Sequence) {
	Std_ReturnType validation = E_OK;

	Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_CANCEL_SERVICE_ID, SPI_E_UNINIT, &validation);
    Spi_validate((boolean)( SPI_MAX_SEQUENCE > Sequence ), SPI_CANCEL_SERVICE_ID, SPI_E_PARAM_SEQ, &validation);

    if(validation == E_OK){
		/* NOT SUPPORTED for same platforms*/
    	Spi_Hw_Cancel(Sequence);
    }
}
#endif


#if (SPI_LEVEL_DELIVERED == SPI_LEVEL_2)
/** @req 4.1.2|4.3.0/SWS_Spi_00188 - Spi_SetAsyncMode*/
/** @req 4.1.2|4.3.0/SWS_Spi_00360 - The type Spi_AsyncModeType specifies the asynchronous mechanism mode
 * for SPI buses handled asynchronously in LEVEL 2 and obtained by the API Spi_SetAsyncMode.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00361 - If API Spi_SetAsyncMode function is called by the parameter value SPI_POLLING_MODE
 * then asynchronous mechanism is ensured by polling. So interrupts related to SPI buses handled asynchronously are disabled.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00362 - If API Spi_SetAsyncMode function is called by the parameter value SPI_INTERRUPT_MODE
 * asynchronous mechanism is ensured by interrupt, so interrupts related to SPI buses handled asynchronously are enabled.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00335 - The operation Spi_SetAsyncMode is Non Re-entrant.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00336 - Return value of the function Spi_SetAsyncMode is E_OK: Setting command has been done.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00337 - Return value of the function Spi_SetAsyncMode is E_NOT_OK: setting command has not been accepted.*/
/** @req 4.3.0/SWS_Spi_00338 - The function Spi_SetAsyncMode service to set the asynchronous mechanism mode for SPI buses handled asynchronously.*/
/** @req 4.1.2|4.3.0/SWS_Spi_00152 - The function Spi_SetAsyncMode according to the given parameter shall set the asynchronous mechanism mode for SPI channels configured to behave asynchronously.*/
/** @req 4.3.0/SWS_Spi_00171 - If the function Spi_SetAsyncMode is called while the SPI Handler/Driver status is SPI_BUSY and an asynchronous transmition is in progress,
 * the SPI Handler/Driver shall not change the AsyncModeType and keep the mode type as it is. The function shall return the value E_NOT_OK.*/
/** @req 4.3.0/SWS_Spi_00172 - If Spi_SetAsyncMode is called while a synchronous trans-mission is in progress, the SPI Handler/Driver shall set
 * the AsyncModeType according to parameter 'Mode', even if the SPI Handler/Driver status is SPI_BUSY. The function shall return the value E_OK.*/
/** @req 4.3.0/SWS_Spi_00154 - The function Spi_SetAsyncMode is pre-compile time se-lectable by the configuration parameter SpiLevelDelivered.
 * This function is only relevant for LEVEL 2.*/

/** @req 4.1.2|4.3.0/SWS_Spi_00170 - The type Spi_AsyncModeType is used for specifying the asynchronous mechanism mode
 * for SPI busses handled asynchronously in LEVEL 2.*/


/*  @brief Service to set the asynchronous mechanism mode for SPI busses handled asynchronously.
 *         				Synchronous
 *  @note  				Non Reentrant
 *  @param[in] Mode 	New mode required.
 *  @return				Whether the command has been accepted or not.
 *  @retval E_OK       	Setting command has been done
 *  @retval E_NOT_OK   	Setting command has not been accepted
 */
Std_ReturnType Spi_SetAsyncMode(Spi_AsyncModeType Mode) {
    Std_ReturnType set_async_mode_return = E_OK;

    Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_SETASYNCMODE_SERVICE_ID, SPI_E_UNINIT, &set_async_mode_return);
    /** @req 4.1.2|4.3.0/SWS_Spi_00337 - Return value of the function Spi_SetAsyncMode is E_NOT_OK: setting command has not been accepted.*/

    if(set_async_mode_return == E_OK){
    	set_async_mode_return = Spi_Hw_SetAsyncMode(Mode);
    }
    /** @req 4.1.2|4.3.0/SWS_Spi_00336 - Return value of the function Spi_SetAsyncMode is E_OK: Setting command has been done.*/
    return(set_async_mode_return);
}
#endif

/* @CODECOV:CONFIG_LIMITATION:Only used in polling mode, which is not supported by TMS570 */
/** @req 4.1.2|4.3.0/SWS_Spi_00189 - Spi_MainFunction_Handling*/
/* @brief This function polls the SPI interrupts linked to HW Units allocated to the
 * transmission of SPI sequences to enable the evolution of transmission state machine.
 */
void Spi_MainFunction_Handling(void) {
    Spi_Hw_MainFunction_Handling();
}

#if (SPI_VERSION_INFO_API == STD_ON)
/** @req 4.1.2/SWS_Spi_00325 */
/** @req 4.1.2|4.3.0/SWS_Spi_00184 - Spi_GetVersionInfo*/
 
/*  @brief This service returns the version information of this module.
 *         Synchronous
 *  @note  Reentrant
 *  @param[out] versioninfo - Pointer to where to store the version information of this module.
 */
void Spi_GetVersionInfo(Std_VersionInfoType* versioninfo) {
	Std_ReturnType validation = E_OK;

	Spi_validate((boolean)( TRUE == Spi_initialized ), SPI_GETVERSIONINFO_SERVICE_ID, SPI_E_UNINIT, &validation);
    /** @req 4.1.2|4.3.0/SWS_Spi_00371 - If Det is enabled, the parameter versioninfo shall be checked for being NULL.*/
    Spi_validate((boolean)( versioninfo != NULL_PTR ), SPI_GETVERSIONINFO_SERVICE_ID, SPI_E_PARAM_POINTER, &validation);

    if(validation == E_OK){
    	versioninfo->vendorID = SPI_VENDOR_ID;
		versioninfo->moduleID = SPI_MODULE_ID;
		versioninfo->sw_major_version = SPI_SW_MAJOR_VERSION;
		versioninfo->sw_minor_version = SPI_SW_MINOR_VERSION;
		versioninfo->sw_patch_version = SPI_SW_PATCH_VERSION;
    }

}
#endif

/** @}*/
/** @}*/
