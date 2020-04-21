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


/** @tagSettings DEFAULT_ARCHITECTURE=TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Dio_Internal.h
 *
 *  This file contains the hardware specific API declaration and Dio_GlobalType variable definition.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  @{
  */

 /** \addtogroup Dio
  *  This is the Mcal Dio Group
  *  @{
  */

#ifndef DIO_INTERNAL_H_
#define DIO_INTERNAL_H_

/* ----------------------------[Type Definitions]-----------------*/
/**
*   @brief   Dio Global type definition
*/
typedef struct {
	const Dio_ConfigType* Config; /**< @brief  Pointer that holds the configuration. This pointer will contain Dio_ChannelType, Dio_ChannelGroupType and Dio_PortType*/
    boolean InitRun; /**< @brief Status of the Dio module. It will be assigned TRUE when the Dio module is initialized. */
}Dio_GlobalType;


/* ----------------------------[Hardware Specific API's]-----------------*/

/**
 * @brief This API will have the hardware specific implementation of reading the port
 * @note Reentrant
 * @param[in] portId - ID of the port
 * @return Dio_PortLevelType - Each bit is a channel within the port
 * @retval STD_HIGH The physical level of the channels in the Port are STD_HIGH
 * @retval STD_LOW The physical level of the channel in the Port are STD_LOW
 */
Dio_PortLevelType Dio_Hw_ReadPort(Dio_PortType portId);

/**
 * @brief This API will have the hardware specific implementation of writing a particular level to the port
 * @note Reentrant
 * @param[in] portId - ID of the port
 * @param[in] level - Level that should be written to the port. Each bit is a channel within the port
 */
void Dio_Hw_WritePort(Dio_PortType portId, Dio_PortLevelType level);

/**
 * @brief  This API will have the hardware specific implementation of reading the value of a channel
 * @note Reentrant
 * @param[in] channelId - ID of the channel
 * @return Dio_LevelType - Level of channel
 * @retval STD_HIGH The physical level of the channel is STD_HIGH
 * @retval STD_LOW The physical level of the channel is STD_LOW
 */
Dio_LevelType Dio_Hw_ReadChannel(Dio_ChannelType channelId);

/**
 * @brief This API will have the hardware specific implementation of writing a particular value to a channel
 * @note Reentrant
 * @param[in] channelId - ID of the channel
 * @param[in] level - the level to be written
 */
void Dio_Hw_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level);

/**
 * @brief This API will have the hardware specific implementation of reading the value of a channel group
 * This API calls  Dio_Hw_ReadPort function.
 * @note Reentrant
 * @param[in] channelGroupIdPtr - Pointer to ChannelGroup
 * @return Dio_PortLevelType - Level of a subset of the adjoining bits of a port. Each bit is a channel within the group
 * @retval STD_HIGH The physical level of the channels in the group are STD_HIGH
 * @retval STD_LOW The physical level of the channels in the group are STD_LOW
 */
Dio_PortLevelType Dio_Hw_ReadChannelGroup(const Dio_ChannelGroupType *channelGroupIdPtr);

/**
 * @brief This API will have the hardware specific implementation of writing a particular value to a channel group
 * This API first reads the port and then masks the read value with the level passed to this function. The masked value is then written back to the port.
 * @note Reentrant
 * @param[in] channelGroupIdPtr - Pointer to ChannelGroup
 * @param[in] level - Value to be written
 */
void Dio_Hw_WriteChannelGroup(const Dio_ChannelGroupType *channelGroupIdPtr,Dio_PortLevelType level);


#endif /* DIO_INTERNAL_H_ */
/** @}*/
/** @}*/
