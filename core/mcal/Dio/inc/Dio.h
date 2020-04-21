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

/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */
/** @tagSettings DEFAULT_ARCHITECTURE=ZYNQ|STM32|PPC|TMS570|MPC5607B|MPC5645S|RH850F1H|JACINTO5|JACINTO6|MPC5748G|MPC5646B|MPC5744P|MPC5747C */

/** @file Dio.h
 *
 *  The Dio driver provides API for reading and writing to/from DIO Channels(Pins),DIO ports, DIO Channel Groups.
 *  This module works on pins and ports which are configured by the PORT driver for this purpose.
 *  This file will contain the Dio Type definitions and API definitions
 */

 /** @addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Dio
  *  This is the Mcal Dio Group
  *  @{
  */

#ifndef DIO_H_
#define DIO_H_

/*------------------------------------------ Not Applicable Requirements -------------------------------------------*/

/* req SWS_Dio_00001 - The Dio module shall not provide an interface for initialization of the hardware.
* Not applicable to this module. Requirement on Port driver **/

/* req SWS_Dio_00002 - The PORT driver shall provide the reconfiguration of the port pin direction during runtime.
* Not applicable to this module. Requirement on Port driver **/

/* req SWS_Dio_00127 - The Port module shall configure a DIO channel as input or output
 * Not applicable to this module. Requirement on Port driver **/

/* req SWS_Dio_00084 - If the microcontroller does not support the direct read-back of a pin value, the Dio module’s read functions shall provide the value of the output register, when they are used on a channel which is configured as an output channel.*/

/* req SWS_Dio_00061 - The Dio module shall not provide APIs for overall configuration and initialization of the port structure which is used in the Dio module. These actions are done by the PORT Driver Module.
 * Not applicable to this module.*/

/* req SWS_Dio_00102 - The Dio module’s user shall only use the Dio functions after the Port Driver has been initialized. Otherwise the Dio module will exhibit undefined behavior.
 * Not applicable to this module. Requirement on the user of Dio module*/

/* req SWS_Dio_00017 - For parameter values of type Dio_ChannelType, the Dio’s user shall use the symbolic names provided by the configuration description.
 * Not applicable to this module. Requirement on the user of Dio module*/

/* req SWS_Dio_00020 - For parameter values of type Dio_PortType, the user shall use the symbolic names provided by the configuration description.
 * Not applicable to this module. Requirement on the user of Dio module*/

/* req SWS_Dio_00022 - For parameter values of type Dio_ChannelGroupType, the user shall use the symbolic names provided by the configuration description.
 * Not applicable to this module. Requirement on the user of Dio module*/

/* req SWS_Dio_00195 - Not applicable requirements*/

/*------------------------------------------ Not Supported Requirements -------------------------------------------*/

/** !req SWS_Dio_00164 - Dio_ConfigType is the type for all post-build configurable parameters of the DIO driver. */

/** Flip Channel API Requirements */
/** !req SWS_Dio_00190 - Dio_FlipChannel */
/** !req SWS_Dio_00191 - If the specified channel is configured as an output channel, the Dio_FlipChannel function shall read level of the channel (requirements [SWS_Dio_00083] & [SWS_Dio_00084] are applicable) and invert it, then write the inverted level to the channel. The return value shall be the inverted level of the specified channel. */
/** !req SWS_Dio_00192 - If the specified channel is configured as an input channel, the Dio_FlipChannel function shall have no influence on the physical output.
   The return value shall be the level of the specified channel. */
/** !req SWS_Dio_00193 - If the specified channel is configured as an input channel, the Dio_FlipChannel function shall have no influence on the result of the next Read-Service. */


/** @req 4.3.0/SWS_Dio_00026 - The configuration process for Dio module shall provide symbolic names for each configured DIO channel, port and group
 * Implemented in generator.*/
/** @req 4.3.0/SWS_Dio_00113 - The Dio module shall publish the symbolic names which have been created during the configuration process in the file “Dio_Cfg.h”.
 * Implemented in generator.*/
/** @req:TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P SWS_Dio_00140 - Det_ReportError (Service to report development errors.) */

/** @req SWS_Dio_00170 - Dio.h shall include Std_Types.h */
#include "Std_Types.h"

/**
  * @name    Module ID and Version Number
  * @{
  */
#define DIO_MODULE_ID                       120u
#define DIO_VENDOR_ID                       60u

#if defined(CFG_TMS570LS12X) || defined(CFG_PPC)
#define DIO_SW_MAJOR_VERSION   6u /**< @brief Dio Module Software Major Version Number */
#define DIO_SW_MINOR_VERSION   0u /**< @brief Dio Module Software Minor Version Number */
#define DIO_SW_PATCH_VERSION   0u /**< @brief Dio Module Software Patch Version Number */

#define DIO_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Dio Module Autosar Major Version Number */
#define DIO_AR_RELEASE_MINOR_VERSION   3u /**< @brief Dio Module Autosar Minor Version Number */
#define DIO_AR_RELEASE_PATCH_VERSION   0u /**< @brief Dio Module Autosar Patch Version Number */

#else
/** @cond DOXYGEN_EXCLUDE */

#define DIO_SW_MAJOR_VERSION   5u /**< @brief Dio Module Software Major Version Number for other architecture */
#define DIO_SW_MINOR_VERSION   0u /**< @brief Dio Module Software Minor Version Number for other architecture */
#define DIO_SW_PATCH_VERSION   0u /**< @brief Dio Module Software Patch Version Number for other architecture */

#define DIO_AR_RELEASE_MAJOR_VERSION   4u /**< @brief Dio Module Autosar Major Version Number for other architecture */
#define DIO_AR_RELEASE_MINOR_VERSION   1u /**< @brief Dio Module Autosar Minor Version Number for other architecture */
#define DIO_AR_RELEASE_PATCH_VERSION   2u /**< @brief Dio Module Software Patch Version Number for other architecture */

/** @endcond */
#endif

/** @} */

/*===========================================================================*/
/* Module macros.                                                            */
/*===========================================================================*/
/**
  * @brief   Check the AUTOSAR version
  * @details Macro used to check the AUTOSAR Version. Converts the AUTOSAR Version into a number that can be used for some verification.
  * @param[in] AUTOSAR_MAJOR_VERSION   Autosar Major Version Number
  * @param[in] AUTOSAR_MINOR_VERSION   Autosar Minor Version Number
  * @param[in] AUTOSAR_PATCH_VERSION   Autosar Patch Version Number
  */
#define AUTOSARVERSION(AUTOSAR_MAJOR_VERSION,AUTOSAR_MINOR_VERSION,AUTOSAR_PATCH_VERSION)  ((AUTOSAR_MAJOR_VERSION*100)+(AUTOSAR_MINOR_VERSION*10)+AUTOSAR_PATCH_VERSION)

/* ----------------------------[Service / API Id]-----------------*/

/**
  * @name    Service Id
  * @{
  */
#define DIO_READCHANNEL_ID                  0x00u
#define DIO_WRITECHANNEL_ID                 0x01u
#define DIO_READPORT_ID                     0x02u
#define DIO_WRITEPORT_ID                    0x03u
#define DIO_READCHANNELGROUP_ID             0x04u
#define DIO_WRITECHANNELGROUP_ID            0x05u
#define DIO_INIT_ID                         0x10u
#define DIO_GETVERSIONINFO_ID               0x12u
#define DIO_GLOBAL_ID                       0xFFu
/** @} */

/* ----------------------------[Error Code and Id]-----------------*/

/**
  * @name    Error Code - AUTOSAR
  * @{
  */
/** @req 4.3.0/SWS_DIO_00175 - Invalid channel name requested */
#define DIO_E_PARAM_INVALID_CHANNEL_ID      10u    /**< @brief Error Id if Invalid channel name was requested, Value : 0x0A */
/** @req 4.3.0/SWS_DIO_00176 - API service called with “NULL pointer” parameter */
#define DIO_E_PARAM_CONFIG                  0x10u  /**< @brief Error Id if API service called with “NULL pointer” parameter, Value : 0x10 */
/** @req 4.3.0/SWS_DIO_00177 - Invalid port name requested*/
#define DIO_E_PARAM_INVALID_PORT_ID         20u    /**< @brief Error Id if Invalid port name requested, Value : 0x14 */
/** @req 4.3.0/SWS_DIO_00178 - Invalid ChannelGroup passed*/
#define DIO_E_PARAM_INVALID_GROUP_ID        31u    /**< @brief Error Id if Invalid ChannelGroup was passed, Value : 0x1F */

/** @req 4.3.0/SWS_DIO_00188 - API service called with a NULL pointer. In case of this error,the API service shall return immediately without any further action, beside reporting this development error.*/
#define DIO_E_PARAM_POINTER                 0x20u  /**< @brief Error Id if API service called with a NULL pointer, Value : 0x20 */
/** @} */

/**
  * @name    Error Code - Arccore
  * @{
  */
/* ArcCore extra error ids */
#define DIO_E_UNINIT                        0x30u
#define DIO_E_UNEXPECTED_EXECUTION          0x31u
#define DIO_E_PARAM_LEVEL                   0x32u
/** @} */

/* ----------------------------[Type Definitions]-----------------*/

/* Dio_ChannelType */
/** @req 4.1.2|4.3.0/SWS_Dio_00182 - Dio_ChannelType*/
/** @req:TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P 4.3.0/SWS_Dio_00015 - Parameters of type Dio_ChannelType contain the numeric ID of a DIO channel. */
/** @req 4.1.2|4.3.0/SWS_Dio_00180 - The mapping of the ID is implementation specific but not configurable.*/


/* Dio_PortType */
/** @req 4.1.2|4.3.0/SWS_Dio_00183 - Dio_PortType*/
/** @req:TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P 4.3.0/SWS_Dio_00018 - Parameters of type Dio_PortType contain the numeric ID of a DIO port. */
/** @req 4.1.2|4.3.0/SWS_Dio_00181 - The mapping of ID is implementation specific but not configurable.*/

/* Dio_ChannelGroupType */
/** @req 4.1.2|4.3.0/SWS_Dio_00184 - Dio_ChannelGroupType*/
/** @req:TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P 4.3.0/SWS_Dio_00021 - Dio_ChannelGroupType is the type for the definition of a channel group, which consists of several adjoining channels within a port */

/* Dio_LevelType */
/** @req 4.1.2|4.3.0/SWS_Dio_00185 - Dio_LevelType*/
/** @req:TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P 4.3.0/SWS_Dio_00023 - Dio_LevelType is the type for the possible levels that a DIO channel can have (input or output). */

/* Dio_PortLevelType */
/** @req 4.1.2|4.3.0/SWS_Dio_00186 - Dio_PortLevelType */
/** @req:TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P 4.3.0/SWS_Dio_00103 - The port width within the types defined for the DIO Driver shall be the size of the largest port on the MCU which may be accessed by the DIO Drive.
 * Same as SWS_Dio_00186 */
/** @req:TMS570|PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P 4.3.0/SWS_Dio_00024 - Dio_PortLevelType is the type for the value of a DIO port.
 * Same as SWS_Dio_00186 */

#if defined(CFG_HC1X) || defined(CFG_TMS570)

/**
*   @brief Numeric ID of a DIO channel.
*/
typedef uint8 Dio_ChannelType;

/**
*   @brief Numeric ID of a DIO port.
*/
typedef uint8 Dio_PortType;

/**
*   @brief Type for the definition of a channel group, which consists of several adjoining channels within a port.
*   This structure contains Dio_PortType,offset and mask
*/
typedef struct{
	Dio_PortType port;/**< @brief This shall be the port on which the Channel group is defined.*/
    uint8 offset;     /**< @brief This element shall be the position of the Channel Group on the port, counted from the LSB. */
    uint8 mask;       /**< @brief  This element mask which defines the positions of the channel group. */
}Dio_ChannelGroupType;

/**
*   @brief These are the possible levels a DIO channel can have (input or output)
*   RANGE : STD_LOW (0V) or STD_HIGH (5V or 3.3V)
*/
typedef uint8 Dio_LevelType;

/**
*   @brief Numeric ID of a DIO port.
*   RANGE : 0 to number of ports
*/
typedef uint32 Dio_PortLevelType;

#elif defined (CFG_ZYNQ)

/**
*   @brief Numeric ID of a DIO channel.
*/
typedef uint32 Dio_ChannelType;

/**
*   @brief Numeric ID of a DIO port.
*/
typedef uint32 Dio_PortType;

/**
*   @brief Type for the definition of a channel group, which consists of several adjoining channels within a port.
*   This structure contains Dio_PortType,offset and mask
*/
typedef struct{
  Dio_PortType port;
  uint8 offset;
  uint32 mask;
} Dio_ChannelGroupType;

/**
*   @brief These are the possible levels a DIO channel can have (input or output)
*   RANGE : STD_LOW (0V) or STD_HIGH (5V or 3.3V)
*/
typedef uint8 Dio_LevelType;

/**
*   @brief These are the possible levels a DIO channel can have (input or output)
*   RANGE : STD_LOW (0V) or STD_HIGH (5V or 3.3V)
*/
typedef uint32_t Dio_PortLevelType;

#else	// CFG_PPC, CFG_STM32_STAMP and others

/**
*   @brief Numeric ID of a DIO channel.
*/
typedef uint32 Dio_ChannelType;

/**
*   @brief Numeric ID of a DIO port.
*/
typedef uint32 Dio_PortType;

/**
*   @brief Type for the definition of a channel group, which consists of several adjoining channels within a port.
*   This structure contains Dio_PortType,offset and mask
*/
typedef struct{
  Dio_PortType port; /**< @brief This shall be the port on which the Channel group is defined.*/
  uint8 offset;      /**< @brief This element shall be the position of the Channel Group on the port, counted from the LSB. */
  uint16 mask;       /**< @brief This element mask which defines the positions of the channel group. */
}Dio_ChannelGroupType;

/**
*   @brief These are the possible levels a DIO channel can have (input or output)
*   RANGE : STD_LOW (0V) or STD_HIGH (5V or 3.3V)
*/
typedef uint8 Dio_LevelType;

/**
*   @brief Numeric ID of a DIO port.
*   RANGE : 0 to number of ports
*/
typedef uint16 Dio_PortLevelType;
#endif

/**
*   @brief  This structure contains all post-build configurable parameters of the DIO driver.
*   A pointer to this structure is passed to the DIO driver initialization function for configuration.
*   This structure contains Dio_ChannelType,Dio_ChannelGroupType and Dio_PortType
*/
/** @req 4.1.2|4.3.0/SWS_Dio_00187 - Dio_ConfigType */
typedef struct {
    const Dio_ChannelType* ChannelConfig;    /**< @brief Pointer that holds the information about different channels*/
    const Dio_ChannelGroupType* GroupConfig; /**< @brief Pointer that contains port, offset and mask*/
    const Dio_PortType *PortConfig;          /**< @brief Pointer that holds the information about the different ports used*/
}Dio_ConfigType;

/* Dio Configuration file uses Dio type definition and also the release version informations.
 * So Dio_Cfg.h should be included after all the type definitions */
#include "Dio_Cfg.h"

/**
 * @brief  DioConfigData Holds the configuration for the Dio module. type - DioConfigType
 */
extern const Dio_ConfigType DioConfigData;

/* ----------------------------[Public API's]-----------------*/

/** @req SWS_Dio_00139 - Dio_GetVersionInfo */
#if (DIO_VERSION_INFO_API == STD_ON)

/**
 * @brief API that returns the version information of this module.
 * @param[in] versioninfo - Pointer that holds the version info.
 * @note Reentrant
 */
void Dio_GetVersionInfo(Std_VersionInfoType* versioninfo);
#endif

/**
 * @brief Reads the value of a channel, if input buffer enables the actual value will be read
 * otherwise the register value
 * @note Reentrant
 * @param[in] channelId - ID of the channel
 * @return Dio_LevelType - Level of channel
 * @retval STD_HIGH The physical level of the corresponding channel is STD_HIGH
 * @retval STD_LOW The physical level of the corresponding channel is STD_LOW
 */
/** @req SWS_Dio_00133 - Dio_ReadChannel*/
Dio_LevelType Dio_ReadChannel(Dio_ChannelType channelId);

/**
 * @brief API that is used to write a level to a channel
 * @note Reentrant
 * @param[in] channelId - ID of the channel
 * @param[in] level - the level to be written
 */
/** @req SWS_Dio_00134 */
void Dio_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level);


// Disable R/W Channel Group and R/W Port APIs for incompatible MCU:s:
#if !defined(DISABLE_DIO_PARALLELL_RW_API)

/**
 * @brief API that is used to READ a port
 * @note Reentrant
 * @param[in] portId - ID of the port
 * @return Dio_PortLevelType - Each bit is a channel within the port
 * @retval STD_HIGH The physical level of the channels in the Port are STD_HIGH
 * @retval STD_LOW The physical level of the channels in the Port are STD_LOW
 */
/** @req:ZYNQ|PPC|TMS570|MPC5607B|RH850F1H|STM32|MPC5748G|MPC5744P SWS_Dio_00135 */
Dio_PortLevelType Dio_ReadPort(Dio_PortType portId);

/**
 * @brief API that is used to write a particular level to a port
 * @note Reentrant
 * @param[in] portId - ID of the port
 * @param[in] level - Level that should be written to the port. Each bit is a channel within the port
 */
/** @req:ZYNQ|PPC|TMS570|MPC5607B|RH850F1H|STM32|MPC5748G|MPC5744P SWS_Dio_00136 */
void Dio_WritePort(Dio_PortType portId, Dio_PortLevelType level);

/**
 * @brief API that is used to read a subset of the adjoining bits of a port.
 * @note Reentrant
 * @param[in] channelGroupIdPtr - Pointer to ChannelGroup
 * @return Dio_PortLevelType - Level of a subset of the adjoining bits of a port. Each bit is a channel within the group
 * @retval STD_HIGH The physical level of the channels in the group are STD_HIGH
 * @retval STD_LOW The physical level of the channels in the group are STD_LOW
 */
/** @req:ZYNQ|PPC|TMS570|MPC5607B|RH850F1H|STM32|MPC5748G|MPC5744P SWS_Dio_00137 */
Dio_PortLevelType Dio_ReadChannelGroup( const Dio_ChannelGroupType *channelGroupIdPtr );

/**
 * @brief API that is used to set a subset of the adjoining bits of a port to a specified level.
 * @note Reentrant
 * @param[in] channelGroupIdPtr - Pointer to ChannelGroup
 * @param[in] level - Value to be written
 */
/** @req:ZYNQ|PPC|TMS570|MPC5607B|RH850F1H|STM32|MPC5748G|MPC5744P SWS_Dio_00138 */
void Dio_WriteChannelGroup(const Dio_ChannelGroupType *channelGroupIdPtr, Dio_PortLevelType level);

#endif

#if(DIO_AR_RELEASE_MAJOR_VERSION != 4) || (DIO_AR_RELEASE_MINOR_VERSION != 3)
/**
 * @brief Initialize the DIO module. In ASR 4.3.0 Dio_Init is removed. Initialization of Dio module is done by Port module.
 * @param[in] ConfigPtr - Pointer that holds the configuration of the pins that should be configured.
 * @note Dio_Init removed in ASR 4.3.0. Dio Initialization is done in Port.
 */

void Dio_Init(const Dio_ConfigType* ConfigPtr);
#endif

#if defined(HOST_TEST)
void Dio_Arc_Deinit(void);
void Dio_Arc_SetConfigToNULL(void);
#endif

#endif /*DIO_H_*/
/** @}*/
/** @}*/
