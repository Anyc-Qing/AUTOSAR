/**
 * RTE Header File
 *
 * @req SWS_Rte_01157
 */

#ifndef RTE_H_
#define RTE_H_

/** --- Includes ----------------------------------------------------------------------------------
 *  @req SWS_Rte_01164
 */
#include <Std_Types.h>

#include <Rte_Cfg.h>

#include "Rte_Utils.h"

/** --- Versions ----------------------------------------------------------------------------------
 */
#define RTE_AR_RELEASE_MAJOR_VERSION    4
#define RTE_AR_RELEASE_MINOR_VERSION    0

/** === VENDOR GENERATION MODE ====================================================================
 */
#define RTE_VENDOR_OPT_EXCL_AREAS        STD_OFF 
#define RTE_VENDOR_OPT_CLEAR_EVENT_CALLS STD_OFF
#define RTE_VENDOR_OPT_CALPRMS           STD_OFF
#define RTE_VENDOR_OPT_AVOID_ENTER_EXIT  STD_OFF
#define RTE_VENDOR_OPT_SENDER_RECEIVER   STD_OFF

/** === ERROR CODES ===============================================================================
 */

/** --- Std_ReturnType bits -----------------------------------------------------------------------
 *
 *  LSB           MSB
 *   0 1 2 3 4 5 6 7
 *  |    A    |B|C|D|
 *
 *   A : 6 bits available for error codes
 *   B : Overlayed Error Flag
 *   C : Error Flag
 *   D : Immediate Infrastructure
 */

/** @req SWS_Rte_07404 */
#define Rte_IsInfrastructureError(status) ((status & 128U) !=0)

/** @req SWS_Rte_07405 */
#define Rte_HasOverlayedError(status) ((status & 64U) != 0)

/** @req SWS_Rte_07406 */
#define Rte_ApplicationError(status) (status & 63U)

/** --- Error values ------------------------------------------------------------------------------
 *  @req SWS_Rte_01269
 */

/** No error occurred.
 *  @req SWS_Rte_01058 */
#define RTE_E_OK                          0

/** Error occured
 *   Without error specification
 */
#define RTE_E_NOK                         1

/** --- Standard Application Error Values: */

/** Generic application error indicated by signal invalidation in sender receiver
 *  communication with data semantics on the receiver side.
 *  @req SWS_Rte_02594
 *
 *  NOTE: Value '1' also used as:
 *    Symbolic name: To be defined by the corresponding AUTOSAR Service
 *    Comments:      Returned by AUTOSAR Services to indicate a generic application error.
 */
#define RTE_E_INVALID                     1u

/** An IPDU group was disabled while the application was waiting for the transmission acknowledgment.
 *  No value is available. This is not considered a fault, since the IPDU group is switched off on purpose.
 *  This semantics are as follows:
 *  - The OUT buffers of a client or of explicit read APIs are not modified
 *  - no runnable with startOnEvent on a DataReceivedEvent for this VariableDataPrototype is triggered.
 *  - the buffers for implicit read access will keep the previous value.
 *  @req SWS_Rte_01060 */
#define RTE_E_COM_STOPPED              128u

/** A blocking API call returned due to expiry of a local timeout rather than the intended result.
 *  OUT buffers are not modified. The interpretation of this being an error depends on the application.
 *  @req SWS_Rte_01064 */
#define RTE_E_TIMEOUT                  129u

/** A internal RTE limit has been exceeded. Request could not be handled.
 *  OUT buffers are not modified.
 *  @req SWS_Rte_01317 */
#define RTE_E_LIMIT 130

/** An explicit read API call returned no data. (This is no error.)
 *  @req SWS_Rte_01061 */
#define RTE_E_NO_DATA                  131u

/** Transmission acknowledgement received.
 *  @req SWS_Rte_01065 */
#define RTE_E_TRANSMIT_ACK             132u

/** No data received for the corresponding unqueued data element since system start or partition restart.
 *  @req SWS_Rte_07384 */
#define RTE_E_NEVER_RECEIVED           133u

/** The port used for communication is not connected.
 *  @req SWS_Rte_07655 */
#define RTE_E_UNCONNECTED              134u

/** The error is returned by a blocking API and indicates that the runnable could not enter a wait state,
 *  because one ExecutableEntity of the current task's call stack has entered or is running in an ExclusiveArea.
 *  @req SWS_Rte_02739 */
#define RTE_E_IN_EXCLUSIVE_AREA        135u

/** The error can be returned by an RTE API, if the parameters contain a direct or indirect
 *  reference to memory that is not accessible from the callers partition.
 *  @req SWS_Rte_02757 */
#define RTE_E_SEG_FAULT                136u

/** The received data is out of range.
 *  @req SWS_Rte_08065 */
#define RTE_E_OUT_OF_RANGE             137u

/** An error during serialization or deserialization occured.
 *  @req SWS_Rte_08725 */
#define RTE_E_SERIALIZATION_ERROR      138u

/** Buffer for serialization operation could not be created.
 *  @req SWS_Rte_08726 */
#define RTE_E_SERIALIZATION_LIMIT      139u

/** An error during transformation occured.
 *  @req SWS_Rte_08725 */
#define RTE_E_HARD_TRANSFORMER_ERROR    138u

/** An error during transformation occured which shall be notified to the SWC but still produces
 *  valid data as output (comparable to a warning).
 *  @req SWS_Rte_08551 */
#define RTE_E_SOFT_TRANSFORMER_ERROR    140u

/** Transformer of a unspecified transformer class.
 *  @req SWS_Rte_08544 */
#define RTE_TRANSFORMER_UNSPECIFIED    0

/** Transformer of a serializer class.
 *  @req SWS_Rte_08544 */
#define RTE_TRANSFORMER_SERIALIZER    1

/** Transformer of a safety class.
 *  @req SWS_Rte_08544 */
#define RTE_TRANSFORMER_SAFETY    2

/** Transformer of a security class.
 *  @req SWS_Rte_08544 */
#define RTE_TRANSFORMER_SECURITY    3

/** Transformer of a custom class not standardizedby AUTOSAR.
 *  @req SWS_Rte_08544 */
#define RTE_TRANSFORMER_CUSTOM    255

/** Buffer for transformation operation could not be created.
 *  @req SWS_Rte_08726 */
#define RTE_E_TRANSFORMER_LIMIT         139u

/** The transmission/reception could not be performed due to another transmission/reception 
 *  currently ongoing for the same signal.
 *  @req SWS_Rte_01389 */
#define RTE_E_COM_BUSY                  141u

/** --- Overlayed Errors
 *  These errors do not refer to the data returned with the API. They can be overlayed
 *  with other Application- or Immediate Infrastructure Errors. */

/** An API call for reading received data with event semantics indicates that some incoming data
 *  has been lost due to an overflow of the receive queue or due to an error of the underlying
 *  communication stack.
 *  @req SWS_Rte_02571 */
#define RTE_E_LOST_DATA                 64u

/** An API call for reading received data withdata semantics indicates that the available data
 *  has exceeded the aliveTimeout limit. A COM signal outdated callback will result in this error.
 *  @req SWS_Rte_02702 */
#define RTE_E_MAX_AGE_EXCEEDED          64u

/**
 * Service IDs
 */

#define RTE_TRIGGEREDBY_OIE            0x55

/**
 * Instance IDs
 */

#define RTE_ASIL_PARTITION             0x01
#define RTE_QM_PARTITION               0x00

#endif /* RTE_H_ */
