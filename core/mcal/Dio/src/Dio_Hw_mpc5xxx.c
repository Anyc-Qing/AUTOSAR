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
/** @tagSettings DEFAULT_ARCHITECTURE=PPC|MPC5607B|MPC5645S|MPC5748G|MPC5747C|MPC5646B|MPC5744P|MPC5634M  */
/** @file Dio_Hw_mpc5744P.c
 *
 *  The Dio_Hw_mpc5744P.c file contains the hardware specific implementation of all the API mentioned in Dio driver SWS document (ASR 4.3.0)
 *  This file corresponds to MPC5744P architecture.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the Mcal
  *  @{
  */

 /** \addtogroup Dio
  *  This is the Mcal Dio Group
  *  @{
  */

/* @req SWS_Dio_00012 Read function should work on both in and out channels */
/* @req SWS_Dio_00083 The real value of the pin shall be returned */
/* @req SWS_Dio_00131 Imported types */
/* @req SWS_Dio_00129 Post build or pre compile shall be supported */



 /*-------------------------------- [Includes] -----------------------------*/
#include "Dio.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#include "Dio_MemMap.h"
#include "SchM_Dio.h"
#include "Dio_Internal.h"
#include "Std_Types.h"
#include "mpc55xx.h"


/* -------------------------------[Macro Definition]-------------------------*/
#if !defined(DISABLE_DIO_PARALLELL_RW_API)

#define IS_VALID_CHANNEL(_x) (0u != Channel_Config_Contains(_x))
#define IS_VALID_PORT(_x) (0u != Port_Config_Contains(_x))
#define IS_VALID_CHANNELGROUP(_x) (0u != Channel_Group_Config_Contains(_x))

#define VALIDATE(_exp,_api,_err ) \
        if( !(_exp) ) { \
          (void)Det_ReportError(DIO_MODULE_ID,0u,_api,_err); \
          return; \
        }

#define VALIDATE_RV(_exp,_api,_err, _rv ) \
        if( !(_exp) ) { \
          (void)Det_ReportError(DIO_MODULE_ID,0u,_api,_err); \
          return _rv; \
        }
#define REPORT_DET_ERROR(_api,_err) (void)Det_ReportError(DIO_MODULE_ID,0u,_api,_err)

#else
#define IS_VALID_CHANNEL(_x)
#define IS_VALID_PORT(_x)
#define IS_VALID_CHANNELGROUP(_x)
#define VALIDATE(_exp,_api,_err )
#define VALIDATE_RV(_exp,_api,_err,_rv )
#define REPORT_DET_ERROR(_api,_err)
#endif

/* -------------------------------[  Function   ]-----------------------------*/

Dio_LevelType Dio_Hw_ReadChannel(Dio_ChannelType channelId) {
    /* @req SWS_Dio_00027 */
    /* @req SWS_Dio_00089 */
    /* @req SWS_Dio_00011 The Dio_ReadChannel function shall read the level of a single DIO channel.*/
    /* @req SWS_Dio_00051 */

    Dio_LevelType level = STD_LOW;

    /*lint -e{923} MISRA:FALSE_POSITIVE:cast from unsigned long to pointer [MISRA 2012 Rule 11.6, required] */
    if (SIU.PCR[channelId].B.IBE != 0u) {
        // Read level from SIU.
        if (SIU.GPDI[channelId].R != 0u) {
            level = STD_HIGH;
        }
    }

    else {
        REPORT_DET_ERROR(DIO_READCHANNEL_ID, DIO_E_UNEXPECTED_EXECUTION);
    }

    /*lint -e{904} LINT: ARGUMENT_CHECK : Return statement before end of function 'Dio_Hw_ReadChannel(Dio_ChannelType)', [MISRA 2012 Rule 15.5, advisory]*/
    VALIDATE_RV((level == STD_ON) || (level == STD_OFF), DIO_READCHANNEL_ID,
            DIO_E_UNEXPECTED_EXECUTION, (Dio_LevelType)STD_OFF);
    return level;
}

// Disable R/W Channel Group and R/W Port APIs for incompatible MCU:s
#if !defined(DISABLE_DIO_PARALLELL_RW_API)

Dio_PortLevelType Dio_Hw_ReadPort(Dio_PortType portId) {

    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00053 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00031 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00013 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00051 */
    /* @req SWS_Dio_00104 - When reading a port which is smaller than the Dio_PortType using the Dio_ReadPort function (see [SWS_Dio_00103]), the function shall set the bits corresponding to undefined port pins to 0. */

    Dio_PortLevelType level;

    //The GPDI 0-3 is organized in 32bit chunks but we want to step them in 16bit port-widths
    /*lint -e{545, 923, 929, 740} LINT:FALSE_POSITIVE: cast from unsigned long to pointer [MISRA 2012 Rule 11.6, required]*/
#if defined(CFG_MPC5668) || defined(CFG_MPC5516)
    vuint16_t const *ptr = (vuint16_t const *)&SIU.PGPDI0; // The GPDI 0-3 is organized in 32bit chunks but we want to step them in 16bit port-widths
#else
    vuint16_t const *ptr = (vuint16_t const *) &SIU.PGPDI;
#endif
    level = (Dio_PortLevelType) ptr[portId]; // Read the bit pattern (16bits) to the port
    return level;
}

/**
 * Writes levels to a port, writing only masked bits using HW masked write register.
 * @param portId
 * @param levels Each bit in levels corresponds to a channel that shall be
 *               written only if the corresponding bit in the mask is set to 1.
 * @param mask   Each binary 1 in the mask corresponds to a channel that shall be written.
 */
static void writePortMasked(Dio_PortType portId, Dio_PortLevelType levels,
        Dio_PortLevelType mask) {
    /*lint -e{923} LINT:FALSE_POSITIVE: cast from unsigned long to pointer [MISRA 2012 Rule 11.6, required]*/
#if defined(CFG_MPC5516)
    vuint32_t *ptr = (vuint32_t *)&SIU.MPGPDO0;
#elif defined(CFG_MPC5668)
    vuint32_t *ptr = (vuint32_t *)&SIU.MPGPDO1;
#else
    vuint32_t *ptr = &SIU.MPGPDO[0u].R;
#endif
    uint32 levelsAndMask = 0u;
    levelsAndMask |= (uint32) levels;
    levelsAndMask |= ((uint32) mask << 16u);

    ptr[portId] = levelsAndMask; // Write the bit pattern and mask to the port
}

void Dio_Hw_WritePort(Dio_PortType portId, Dio_PortLevelType level) {
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00034 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00053 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00007 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00051 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00105 Note: No check for endianess */

    // find address of first port
    /*lint -e{545, 923, 929, 740} LINT:FALSE_POSITIVE: cast from unsigned long to pointer [MISRA 2012 Rule 11.6, required]*/
#if defined(CFG_MPC5668) || defined(CFG_MPC5516)
    // The GPDO 0-3 is organized in 32bit chunks but we want to step them in 16bit port-widths
    vuint16_t *ptr = (vuint16_t *)&SIU.PGPDO0;
#else
    //The GPDI 0-3 is organized in 32bit chunks but we want to step them in 16bit port-widths
    vuint16_t *ptr = (vuint16_t *) &SIU.PGPDO;

#endif
    ptr[portId] = level; // Write the bit pattern (16bits) to the port
    return;
}

Dio_PortLevelType Dio_Hw_ReadChannelGroup(
        const Dio_ChannelGroupType *channelGroupIdPtr) {
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00056 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00014 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00037 Depends on the generator */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00092 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00093 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00051 */

    Dio_PortLevelType level;

    // Get masked values
    level = Dio_Hw_ReadPort(channelGroupIdPtr->port) & channelGroupIdPtr->mask;

    // Shift down
    level = level >> channelGroupIdPtr->offset;

    return level;
}

void Dio_Hw_WriteChannelGroup(const Dio_ChannelGroupType *channelGroupIdPtr,
        Dio_PortLevelType level) {

    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00056 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00008 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00039 Depends on the generator */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C SWS_Dio_00040 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00090 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00091 */
    /* @req:PPC|MPC5607B|MPC5748G|MPC5747C|MPC5744P SWS_Dio_00051 */

    Dio_PortLevelType tmpLevel; /* Function parameters may not  modified in Misra 2012 */

    // Shift up and apply mask
    /*lint -e{701} LINT:FALSE_POSITIVE:  Shift left of signed quantity (int): it is not signed */
    tmpLevel = (level << channelGroupIdPtr->offset) & channelGroupIdPtr->mask;

    // Write to masked write register
    writePortMasked(channelGroupIdPtr->port, tmpLevel, channelGroupIdPtr->mask);
}
#endif

void Dio_Hw_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level) {

    /* @req SWS_Dio_00089 */
    /* @req SWS_Dio_00006 */
    /* @req SWS_Dio_00028 */
    /* @req SWS_Dio_00029 */
    /* @req SWS_Dio_00079 -If the specified channel is configured as an input channel, the Dio_WriteChannel function shall have no influence on the result of the next Read-Service.
     * This requirement is supported by hardware. No separate check in the driver. */
    /*lint -e{904} LINT: ARGUMENT_CHECK : Return statement before end of function 'Dio_Hw_WriteChannel(Dio_ChannelType)', [MISRA 2012 Rule 15.5, advisory]*/
    VALIDATE(((level == STD_ON) || (level == STD_OFF)), DIO_WRITECHANNEL_ID,
            DIO_E_PARAM_LEVEL);

    // Write level to SIU.
    /*lint -e{923} MISRA:FALSE_POSITIVE:cast from unsigned long to pointer [MISRA 2012 Rule 11.6, required] */
    SIU.GPDO[channelId].R = level;

}

#if defined(HOST_TEST)
/**
 * Deinitialize the module. Only used for testing purposes
 */
void Dio_Arc_SetConfigToNULL(void)
{
    //static Dio_GlobalType DioGlobal = {.InitRun = FALSE, .Config = NULL_PTR};
    /*lint -e9003 MISRA:FALSE_POSITIVE: could define variable 'DioGlobal' at block scope [MISRA 2012 Rule 8.9, advisory]*/
#if defined(CFG_PPC)
    extern Dio_GlobalType DioGlobal;
#endif

    static const Dio_ChannelGroupType testChannelGroup[] = {
        {
            .port = (Dio_PortType)0u,
            .mask = 0u,
            .offset = 0u
        },
        {
            .port = DIO_END_OF_LIST,
            .mask = 0u,
            .offset = 0u
        }
    };

    static const Dio_ConfigType testConfig = {.ChannelConfig = NULL_PTR, .PortConfig = NULL_PTR, .GroupConfig = testChannelGroup};
    DioGlobal.Config = &testConfig;
}
#endif
