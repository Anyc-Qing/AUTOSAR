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

/** @tagSettings DEFAULT_ARCHITECTURE=TMS570| MPC5744p */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Port_Internal.h
 *  This files contains the hardware specific API definitions.
 */
/** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Port
  *  This is the Mcal Port Group
  *  @{
  */

#ifndef PORT_INTERNAL_H_
#define PORT_INTERNAL_H_

/* ----------------------------[Type Definitions]-----------------*/

/** @typedef Port_StateType
*   @brief   State of the Module
*   This enum is used to define the state of the Port. Can be either UNINITIALIZED or INITIALIZED.
*   This value will be used in Port_Init API to denote the state of the PORT
*/
typedef enum {
    PORT_UNINITIALIZED = 0, /**< @brief UNINITIALIZED state is assigned with value 0 and denotes that the Port module is not initialized*/
	PORT_INITIALIZED,       /**< @brief INITIALIZED state used to denote that the Port module is initialized with the configuration provided*/
} Port_StateType;

/* ----------------------------[Hardware Specific API's]-----------------*/

/**
 * @brief  Function that contains the hardware specific implementation of Init function
 * @param[in] _configPtr - Pointer that holds the configuration parameters of all the pins
 */
void Port_Hw_Init (const Port_ConfigType * _configPtr);

/**
 * @brief  Function that contains the hardware specific implementation of Set Pin Direction function
 *         This API is used to change the direction of the pin during run time.
 * @param[in] pinNr - Pin Number
 * @param[in] direction - Direction of the pin
 */
void Port_Hw_SetPinDirection(Port_PinType pin, Port_PinDirectionType direction);

/**
 * @brief  Function that contains the hardware specific implementation of Refresh Port Direction function
 *         This API will further call the internal function - Internal_RefreshPin.
 */
void Port_Hw_RefreshPortDirection(void);

/**
 * @brief  Function that contains the hardware specific implementation of Set Pin Mode function
 *         This API will change the mode of the pin during run time. For safety reason the mode of the pin should not be changed during run time.
 *         Hence this function is disabled for the user.
 * @param[in] Pin - Pin for which the mode should be changed
 * @param[in] Mode - Mode to be changed
 */
void Port_Hw_SetPinMode(Port_PinType Pin, Port_PinModeType Mode);

#endif /* PORT_INTERNAL_H_ */
/** @}*/
/** @}*/
