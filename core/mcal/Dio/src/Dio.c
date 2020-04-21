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

/** @tagSettings DEFAULT_ARCHITECTURE=PPC|TMS570|MPC5607B|MPC5645S|MPC5748G|MPC5646B|MPC5744P|MPC5747C */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Dio.c
 *
 *  The Dio.c file will contain the generic implementation of all the API mentioned in Dio driver SWS document (ASR 4.3.0)
 *  The hardware specific implementations are done in Dio_Hw_* .c file (depends on the architecture).
 *  Each API will have the Det error check mentioned in Dio driver SWS document and will call the the hardware specific implementation function if the check passes.
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

/** @req SWS_Dio_00063 - The Dio module shall adapt its configuration and usage to the microcontroller and ECU */
/** @req SWS_Dio_00128 - A general-purpose digital IO pin represents a DIO channel */
/** @req SWS_Dio_00131 - Imported Type (Std_ReturnType and Std_VersionInfoType) */
/** @req SWS_Dio_00129 - At least one of the following variants has to be supported by implementation: VARIANT-PRE-COMPILE - VARIANT-LINK-TIME
 * PRE-COMPILE is supported */


/** @req SWS_Dio_00117 - The include file structure of the Dio Driver should be according to the Fig -1 in Dio driver SWS (ASR 4.3.0) */


#include "Dio.h"
/** @req SWS_Dio_00194 - Dio.c shall include Det.h if detection of development error (DET) is enabled.*/
#if defined(USE_DET)
#include "Det.h"
#endif
#include "Dio_MemMap.h"
#include "Dio_Internal.h"
#include "SchM_Dio.h"


/**
  * @name    Module ID and Version Number
  * @{
  */
#if defined(CFG_TMS570LS12X) || defined(CFG_PPC)
#define DIO_SW_MAJOR_VERSION_INT   6u /**< @brief Dio Module Software Major Version Number */
#define DIO_SW_MINOR_VERSION_INT   0u /**< @brief Dio Module Software Minor Version Number */
#define DIO_SW_PATCH_VERSION_INT   0u /**< @brief Dio Module Software Patch Version Number */


#define DIO_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Dio Module Autosar Major Version Number  */
#define DIO_AR_RELEASE_MINOR_VERSION_INT   3u /**< @brief Dio Module Autosar Minor Version Number  */
#define DIO_AR_RELEASE_PATCH_VERSION_INT   0u /**< @brief Dio Module Autosar Patch Version Number  */


#else
/** @cond DOXYGEN_EXCLUDE */

#define DIO_SW_MAJOR_VERSION_INT   5u /**< @brief Dio Module Software Major Version Number for other architectures */
#define DIO_SW_MINOR_VERSION_INT   0u /**< @brief Dio Module Software Minor Version Number for other architectures */
#define DIO_SW_PATCH_VERSION_INT   0u /**< @brief Dio Module Software Patch Version Number for other architectures */


#define DIO_AR_RELEASE_MAJOR_VERSION_INT   4u /**< @brief Dio Module Autosar Major Version Number  */
#define DIO_AR_RELEASE_MINOR_VERSION_INT   1u /**< @brief Dio Module Autosar Minor Version Number  */
#define DIO_AR_RELEASE_PATCH_VERSION_INT   2u /**< @brief Dio Module Autosar Patch Version Number  */
/** @endcond */
#endif


/** @} */

#if (DIO_SW_MAJOR_VERSION != DIO_SW_MAJOR_VERSION_INT) || (DIO_SW_MINOR_VERSION != DIO_SW_MINOR_VERSION_INT)
#error "SW Version mismatch between Dio.c and Dio.h"
#endif

#if (DIO_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION_INT) || (DIO_AR_RELEASE_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION_INT)
#error "AR Version mismatch between Dio.c and Dio.h"
#endif

/* ----------------------------[private variable]-------------------------------*/
/**
*   @brief   DioGlobal - used in Dio.c file. DioGlobal is initialized to FALSE. After Dio initialization it will be set to TRUE.
*   This initialization check will be done in all the API's
*
*   @details Dio_Init API is removed in ASR 4.3.0. So the Dio configurations are assigned to the Config pointer directly.
* InitRun in DioGlobal will be checked in all the API's even though it not mentioned in AUTOSAR specification. If not set, it will throw DIO_INIT_ID( Arccore defined Error Id).
*/

#if (AUTOSARVERSION(DIO_AR_RELEASE_MAJOR_VERSION,DIO_AR_RELEASE_MINOR_VERSION,DIO_AR_RELEASE_PATCH_VERSION) >= 430)

/* DioGlobal is assigned with the configuration data and InitRun is set to TRUE by dedault as there is no Dio_Init function in ASR 4.3.0*/
 /*lint -e843 LINT:OTHER:HARDWARE DEFINITION*/
 Dio_GlobalType DioGlobal = {.InitRun = TRUE, .Config = &DioConfigData};

#else
 Dio_GlobalType DioGlobal = {.InitRun = FALSE, .Config = NULL_PTR};

#endif
/* ----------------------------[private function]-------------------------------*/

/**
 * @brief  Validate function that will be used in API's that can be used to check the expression and report Det errors if DIO_DEV_ERROR_DETECT is STD_ON
 * @param[in] exp - Boolean expression to be verified
 * @param[in] apiid - AUTOSAR specified API Id for each module
 * @param[in] errid - AUTOSAR specified Error Id for each type of error specific to each API
 * @param[in] rv - Return value based on which the further execution of API is determined. RANGE : E_OK or E_NOT_OK.
 */
static inline Std_ReturnType validateDioParameter (boolean exp,uint8 apiid,uint8 errid){
    Std_ReturnType rv;
    rv = E_OK;
    if(exp == FALSE){
        rv = E_NOT_OK;

#if(DIO_DEV_ERROR_DETECT == STD_ON)
        (void)Det_ReportError(DIO_MODULE_ID, 0,apiid,errid);
#endif
    }
    return rv;
}

/**
 * @brief Internal function used to check whether the Channel ID provided is contained in the configuration
 * This function will be used  Dio_ReadChannel and Dio_WriteChannel API's.
 * @param[in]  channelId - Channel ID that is to be checked
 * @return int - This return parameter will be verified. If the function returns 0 then the API will throw DET error else it means that the Channel ID is contained in the configuration.
 */
static boolean Channel_Config_Contains(Dio_ChannelType channelId){

    boolean rv = FALSE;
/*lint -e525 Pc Lint:CONFIGURATION: Negative indentation from line 144*/
	if (DioGlobal.Config != NULL_PTR) {
        const Dio_ChannelType* ch_ptr = (DioGlobal.Config->ChannelConfig);

        while (DIO_END_OF_LIST != (*ch_ptr)){
			 if ((*ch_ptr) == channelId){
				 rv = TRUE;
				 break;
			 }
			 ch_ptr++;
		}
    }
    return rv;
}

#if !defined(DISABLE_DIO_PARALLELL_RW_API)

/**
 * @brief Internal function used to check whether the Port ID provided is contained in the configuration
 * This function will be used  Dio_ReadPort and Dio_WritePort API's.
 * @param[in] Dio_PortType portId - Port ID that is to be checked
 * @return boolean - This return parameter will be verified. If the function returns FALSE then the API will throw DET error else it means that the Port ID is contained in the configuration.
 */
static boolean Port_Config_Contains(Dio_PortType portId){

    boolean rv = FALSE;
    if (DioGlobal.Config != NULL_PTR) {
        const Dio_PortType* port_ptr= (DioGlobal.Config->PortConfig);
		while (DIO_END_OF_LIST!=*port_ptr){
			if (*port_ptr==portId){
				rv = TRUE;
				break;
			}
			port_ptr++;
		}
    }
    return rv;
}

/**
 * @brief Internal function used to check whether the Channel ID provided is contained in the configuration
 * This function will be used  Dio_ReadChannelGroup and Dio_WriteChannelGroup API's.
 * @param[in] Dio_ChannelGroupType* _channelGroupIdPtr - Channel Group ID to be checked
 * @return int - This return parameter will be verified. If the function returns 0 then the API will throw DET error else it means that the Channel Group ID is contained in the configuration.
 */
static boolean Channel_Group_Config_Contains(const Dio_ChannelGroupType* _channelGroupIdPtr){

	boolean rv = FALSE;
	if(DioGlobal.Config != NULL_PTR){
		const Dio_ChannelGroupType* chGrp_ptr= (DioGlobal.Config->GroupConfig);

		if (_channelGroupIdPtr != NULL_PTR) {
			while (DIO_END_OF_LIST!=chGrp_ptr->port){
				if((chGrp_ptr->port==_channelGroupIdPtr->port) && (chGrp_ptr->offset==_channelGroupIdPtr->offset) && (chGrp_ptr->mask==_channelGroupIdPtr->mask)){
					rv = TRUE;
					break;
				}
				chGrp_ptr++;
			}
		}
	}
    return rv;
}
#endif


#if !(AUTOSARVERSION(DIO_AR_RELEASE_MAJOR_VERSION,DIO_AR_RELEASE_MINOR_VERSION,DIO_AR_RELEASE_PATCH_VERSION) >= 430)
/**
 * @brief Initialize the DIO module. In ASR 4.3.0 Dio_Init is removed. Initialization of Dio module is done by Port module.
 * @param[in] ConfigPtr - Pointer that holds the configuration of the pins that should be configured.
 * @note Dio_Init removed in ASR 4.3.0. Dio Initialization is done in Port.
 * @note Non-Reentrant
 */
void Dio_Init(const Dio_ConfigType* ConfigPtr){
	Std_ReturnType validate_rv;

	validate_rv = validateDioParameter((boolean)(ConfigPtr != NULL_PTR), DIO_INIT_ID, DIO_E_PARAM_CONFIG);
    if (validate_rv == E_OK){
        DioGlobal.Config = ConfigPtr;
        DioGlobal.InitRun = TRUE;
    }
}
#endif

#if !defined(DISABLE_DIO_PARALLELL_RW_API)
/** @req:PPC|TMS570|MPC5607B|MPC5748G|MPC5744P|MPC5747C SWS_Dio_00135 */
/**
 * @brief API that is used to READ a port
 * @note Reentrant
 * @param[in] portId - ID of the port
 * @return Dio_PortLevelType - Each bit is a channel within the port
 * @retval STD_HIGH The physical level of the channels in the Port are STD_HIGH
 * @retval STD_LOW The physical level of the channels in the Port are STD_LOW
 */
Dio_PortLevelType Dio_ReadPort(Dio_PortType portId){
    Dio_PortLevelType level = STD_LOW;
    Std_ReturnType validate_rv;


    validate_rv = validateDioParameter(DioGlobal.InitRun, DIO_READPORT_ID, DIO_E_UNINIT);

    if (E_OK == validate_rv) {
        /** @req SWS_Dio_00118 - If development errors are enabled and an error ocurred the Dio module’s read functions shall return with the value '0'.*/
        /** @req:PPC|TMS570|MPC5607B|MPC5748G|MPC5744P|MPC5747C SWS_Dio_00075 -  Dio_ReadPort and Dio_WritePort shall check the validity of "Port" parameter. If not valid the function shall report the error code DIO_E_PARAM_INVALID_PORT_ID to the DET. */
        validate_rv = validateDioParameter(Port_Config_Contains(portId), DIO_READPORT_ID, DIO_E_PARAM_INVALID_PORT_ID);

        if (validate_rv == E_OK){
            level = Dio_Hw_ReadPort(portId);
        }
    }

    return level;
}

/** @req:PPC|TMS570|MPC5607B|MPC5748G|MPC5744P|MPC5747C SWS_Dio_00136 - Dio_WritePort*/

/**
 * @brief API that is used to write a particular level to a port
 * @note Reentrant
 * @param[in] portId - ID of the port
 * @param[in] level - Level that should be written to the port. Each bit is a channel within the port
 */
void Dio_WritePort(Dio_PortType portId, Dio_PortLevelType level) {
    Std_ReturnType validate_rv;

    validate_rv = validateDioParameter(DioGlobal.InitRun, DIO_WRITEPORT_ID,
            DIO_E_UNINIT);

    if (E_OK == validate_rv) {
        /** @req SWS_Dio_00119 - If an error occured when dev error is enabled, Dio module write function shall NOT process the function**/
        /** @req:PPC|TMS570|MPC5607B|MPC5748G|MPC5744P SWS_Dio_00075 -  Dio_ReadPort and Dio_WritePort shall check the validity of "Port" parameter. If not valid the function shall report the error code DIO_E_PARAM_INVALID_PORT_ID to the DET. */
        validate_rv = validateDioParameter(Port_Config_Contains(portId),
                DIO_WRITEPORT_ID, DIO_E_PARAM_INVALID_PORT_ID);

        if (validate_rv == E_OK) {
            Dio_Hw_WritePort(portId, level);
        }
    }
}
#endif

/** @req SWS_Dio_00133 - Dio_ReadChannel*/

/**
 * @brief Reads the value of a channel, if input buffer enables the actual value will be read
 * otherwise the register value
 * @note Reentrant
 * @param[in] channelId - ID of the channel
 * @return Dio_LevelType - Level of channel
 * @retval STD_HIGH The physical level of the corresponding Pin is STD_HIGH
 * @retval STD_LOW The physical level of the corresponding Pin is STD_LOW
 */
Dio_LevelType Dio_ReadChannel(Dio_ChannelType channelId){
    Dio_LevelType level = STD_LOW;
    Std_ReturnType validate_rv;


    validate_rv = validateDioParameter(DioGlobal.InitRun, DIO_READCHANNEL_ID, DIO_E_UNINIT);

    if (E_OK == validate_rv) {
        /** @req SWS_Dio_00118 - If an error occured when dev error is enabled, Dio module read function shall NOT process the function and return the value '0'*/
        /** @req SWS_Dio_00074 -  Dio_ReadChannel and Dio_WriteChannel shall check the validity of "Channel" parameter. If not valid the function shall report the error code DIO_E_PARAM_INVALID_CHANNEL_ID to the DET. */

        validate_rv = validateDioParameter(Channel_Config_Contains(channelId), DIO_READCHANNEL_ID, DIO_E_PARAM_INVALID_CHANNEL_ID);

        if (validate_rv == E_OK){
            level = Dio_Hw_ReadChannel(channelId);
        }
    }

    /** @req SWS_Dio_00118- If an error occured when dev error is enabled, Dio module read function will return '0' **/
    return (level);
}

/** @req SWS_Dio_00134 - Dio_WriteChannel*/
/** @req SWS_Dio_00029 -If the specified channel is configured as an input channel, the Dio_WriteChannel function shall have no influence on the physical output.
 * This requirement is supported by hardware. No separate check in the driver. */

/** @req SWS_Dio_00079 -If the specified channel is configured as an input channel, the Dio_WriteChannel function shall have no influence on the result of the next Read-Service.
 * This requirement is supported by hardware. No separate check in the driver. */

/**
 * @brief API that is used to write a level to a channel
 * @note Reentrant
 * @param[in] channelId - ID of the channel
 * @param[in] level - the level to be written
 */

void Dio_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level){
	Std_ReturnType validate_rv;

	validate_rv = validateDioParameter(DioGlobal.InitRun, DIO_WRITECHANNEL_ID, DIO_E_UNINIT);

    if (E_OK == validate_rv) {
        /** @req SWS_Dio_00119 - If an error occured when dev error is enabled, Dio module write function shall NOT process the function */
        /** @req SWS_Dio_00074 -  Dio_ReadChannel and Dio_WriteChannel shall check the validity of "Channel" parameter. If not valid the function shall report the error code DIO_E_PARAM_INVALID_CHANNEL_ID to the DET. */
        validate_rv = validateDioParameter(Channel_Config_Contains(channelId),DIO_WRITECHANNEL_ID, DIO_E_PARAM_INVALID_CHANNEL_ID);

        if (validate_rv == E_OK){
            Dio_Hw_WriteChannel(channelId,level);
        }

    }

}

#if !defined(DISABLE_DIO_PARALLELL_RW_API)
/** @req:PPC|TMS570|MPC5607B|MPC5748G|MPC5744P|MPC5747C SWS_Dio_00137 - Dio_ReadChannelGroup*/

/**
 * @brief API that is used to read a subset of the adjoining bits of a port.
 * @note Reentrant
 * @param[in] channelGroupIdPtr - Pointer to ChannelGroup
 * @return Dio_PortLevelType - Level of a subset of the adjoining bits of a port. Each bit is a channel within the group
 * @retval STD_HIGH The physical level of the channels in the group are STD_HIGH
 * @retval STD_LOW The physical level of the channels in the group are STD_LOW
 */
Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *channelGroupIdPtr){

	Dio_PortLevelType level = STD_LOW;
    Std_ReturnType validate_rv;

    validate_rv = validateDioParameter(DioGlobal.InitRun, DIO_READCHANNELGROUP_ID, DIO_E_UNINIT);

    if (E_OK == validate_rv) {
        /** @req SWS_Dio_00118 - If an error occured when dev error is enabled, Dio module read function shall NOT process the function and return the value '0'*/
        /** @req:PPC|TMS570|MPC5607B|MPC5748G|MPC5744P|MPC5747C SWS_Dio_00114 -  Dio_ReadChannelGroup and Dio_WriteChannelGroup shall check the validity of "ChannelGroupIdPtr" parameter.
         *  If not valid the function shall report the error code DIO_E_PARAM_INVALID_GROUP to the DET. */
        validate_rv = validateDioParameter(Channel_Group_Config_Contains(channelGroupIdPtr),DIO_READCHANNELGROUP_ID, DIO_E_PARAM_INVALID_GROUP_ID);

        if (validate_rv == E_OK){

          level = Dio_Hw_ReadChannelGroup(channelGroupIdPtr);
        }
    }

    return level;
}

/** @req:PPC|TMS570|MPC5607B|MPC5748G|MPC5744P|MPC5747C SWS_Dio_00138 - Dio_WriteChannelGroup*/

/**
 * @brief API that is used to set a subset of the adjoining bits of a port to a specified level.
 * @note Reentrant
 * @param[in] channelGroupIdPtr - Pointer to ChannelGroup
 * @param[in] level - Value to be written
 */
void Dio_WriteChannelGroup(const Dio_ChannelGroupType *channelGroupIdPtr,Dio_PortLevelType level){

	Std_ReturnType validate_rv;

	validate_rv = validateDioParameter(DioGlobal.InitRun, DIO_WRITECHANNELGROUP_ID, DIO_E_UNINIT);

    if (E_OK == validate_rv) {
        /** @req SWS_Dio_00119 - - If an error occured when dev error is enabled, Dio module write function shall NOT process the function **/
        /** @req:PPC|TMS570|MPC5607B|MPC5748G|MPC5744P SWS_Dio_00114 -  Dio_ReadChannelGroup and Dio_WriteChannelGroup shall check the validity of "ChannelGroupIdPtr" parameter. If not valid the function shall report the error code DIO_E_PARAM_INVALID_GROUP to the DET. */
        validate_rv = validateDioParameter(Channel_Group_Config_Contains(channelGroupIdPtr),DIO_WRITECHANNELGROUP_ID, DIO_E_PARAM_INVALID_GROUP_ID);


        if (validate_rv == E_OK){
            Dio_Hw_WriteChannelGroup(channelGroupIdPtr,level);
        }
    }
}
#endif

#if (DIO_VERSION_INFO_API == STD_ON)
/** @req SWS_Dio_00139 - Dio_GetVersionInfo */

/**
 * @brief API that returns the version information of this module.
 * @param[in] versioninfo - Pointer that holds the version info.
 * @note Reentrant
 */
void Dio_GetVersionInfo(Std_VersionInfoType* versioninfo){
	Std_ReturnType validate_rv;

	validate_rv = validateDioParameter(DioGlobal.InitRun, DIO_GETVERSIONINFO_ID, DIO_E_UNINIT);

	/** @req SWS_Dio_00189 - If DET is enabled for the DIO Driver module, the function Dio_GetVersionInfo shall raise DIO_E_PARAM_POINTER, if the argument is NULL pointer and return without any action.*/
    if (validate_rv == E_OK){
        validate_rv = validateDioParameter((boolean)(versioninfo != NULL_PTR), DIO_GETVERSIONINFO_ID,DIO_E_PARAM_POINTER);
        if (validate_rv == E_OK){
            versioninfo->vendorID = DIO_VENDOR_ID;
            versioninfo->moduleID = DIO_MODULE_ID;
            versioninfo->sw_major_version = DIO_SW_MAJOR_VERSION;
            versioninfo->sw_minor_version = DIO_SW_MINOR_VERSION;
            versioninfo->sw_patch_version = DIO_SW_PATCH_VERSION;
        }
    }
}
#endif

#if defined(HOST_TEST) && ((DIO_AR_RELEASE_MAJOR_VERSION != 4) || (DIO_AR_RELEASE_MINOR_VERSION != 3))
/**
 * @brief Arccore Internal Function. Deinitialize the module. Only used for testing purposes
 * Used in Port_Test.c and Dio_Test.c files.
 */
void Dio_Arc_Deinit(void)
{
    DioGlobal.Config = NULL;
    DioGlobal.InitRun = FALSE;
}


#endif
/** @}*/
/** @}*/
