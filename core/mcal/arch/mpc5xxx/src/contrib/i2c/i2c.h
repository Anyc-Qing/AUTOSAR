/*******************************************************************************
 * NXP Semiconductors
 * (c) Copyright 2016 NXP Semiconductors
 * ALL RIGHTS RESERVED.
 ********************************************************************************
 Services performed by NXP in this matter are performed AS IS and without any
 warranty. CUSTOMER retains the final decision relative to the total design
 and functionality of the end product. NXP neither guarantees nor will be held
 liable by CUSTOMER for the success of this project.
 NXP DISCLAIMS ALL WARRANTIES, EXPRESSED, IMPLIED OR STATUTORY INCLUDING,
 BUT NOT LIMITED TO, IMPLIED WARRANTY OF MERCHANTABILITY OR FITNESS FOR
 A PARTICULAR PURPOSE ON ANY HARDWARE, SOFTWARE ORE ADVISE SUPPLIED
 TO THE PROJECT BY NXP, AND OR NAY PRODUCT RESULTING FROM NXP SERVICES.
 IN NO EVENT SHALL NXP BE LIABLE FOR INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING
 OUT OF THIS AGREEMENT.
 CUSTOMER agrees to hold NXP harmless against any and all claims demands
 or actions by anyone on account of any damage, or injury, whether commercial,
 contractual, or tortuous, rising directly or indirectly as a result
 of the advise or assistance supplied CUSTOMER in connection with product,
 services or goods supplied under this Agreement.
 ********************************************************************************
 * File:             I2C_0.h
 * Owner:            PetrS
 * Version:          0.2
 * Date:             Mar-25-2016
 * Classification:   General Business Information
 * Brief:            Function prototypes of the simple I2C driver
 ********************************************************************************
 ********************************************************************************
 * Detailed Description:
 ********************************************************************************
 Revision History:
 Ver  Date         Author    Description of Changes
 0.1  Mar-25-2016  PetrS		Initial version
 0.2	 Apr-22-2016  PetrS		Interrupt mode added, code rearrange
 0.3	 2018		  dabe		Modified by ArcCore
 *******************************************************************************/
#ifndef _I2C_H_
#define _I2C_H_

/*******************************************************************************
 * Includes
 *******************************************************************************/
#include "typedefs.h"
#include "Std_Types.h"

/*******************************************************************************
 * Constants
 *******************************************************************************/

/*******************************************************************************
 * Macros
 *******************************************************************************/
#define I2C_MODULE_ID                 81u
#define I2C_DEV_ERROR_DETECT          STD_ON   /* Should be in I2c_Cfg.h  */
/*******************************************************************************
 * Types
 *******************************************************************************/
/* Service IDs */
enum {
    I2C_SERVICE_ID_INIT = 1,
    I2C_SERVICE_ID_GETVERSION,
    I2C_SERVICE_ID_WRITEBLOCK,
    I2C_SERVICE_ID_READBLOCK_DEFINED_ADDR,
    I2C_SERVICE_ID_READBLOCK_PRESET_ADDR,
    I2C_SERVICE_ID_CALLBACK
};

/* Development Errors */
enum {
    I2C_E_NO = 0, /* no error detected */
    I2C_E_UNINIT, /* An API function was called while the module was uninitialized */
    I2C_E_PARAM, /* A parameter given to the API function was invalid.*/
    I2C_E_PARAM_POINTER /* NULL pointer has been passed as an argument. */
};

typedef enum {
    I2C_I2C0 = 0, I2C_I2C1, I2C_I2C2, I2C_I2C3, I2C_NO_OF_I2CS,
} I2c_Type;

typedef enum {
    I2C_BIT_RATE_100K = 0,
    I2C_BIT_RATE_160K,
    I2C_BIT_RATE_200K,
    I2C_BIT_RATE_400K,

} I2c_BitrateType;

typedef enum {
    I2C_STAGE_NONE = 0,
    I2C_STAGE_WRITE_DATA,
    I2C_STAGE_WRITE_REG_ADDRESS_HIGH,
    I2C_STAGE_WRITE_REG_ADDRESS_MIDDLE,
    I2C_STAGE_WRITE_REG_ADDRESS_LOW,
    I2C_STAGE_REPEATED_START,
    I2C_STAGE_READ_DUMMY_DATA,
    I2C_STAGE_READ_DATA,
    I2C_STAGE_NAK,
    I2C_STAGE_ARBITRATION_LOST
} I2C_StageType;   // transmission stages

typedef enum {
    I2C_MODE_WRITE = 0, I2C_MODE_READ
} I2C_Modetype;

typedef enum {
    I2C_NO_FAULT = 0,
    I2C_FRAME_NO_ENDED,
    I2C_NO_ACK,
    I2C_BUS_BUSY,
    I2C_ARBITRATION_LOST,
    I2C_UNINIT,
    I2C_WRONG_PARAM
} I2c_FaultType;

typedef enum {
    I2C_FLAG_NONE = 0,
    I2C_FLAG_TRANSMISSION_PROGRESS,
    I2C_FLAG_TRANSMISSION_COMPLETE
} I2c_FlagType;

typedef union {
    uint32_t Addr_32;
    struct {
        uint8_t dummy;
        uint8_t H;
        uint8_t M;
        uint8_t L;
    } Addr_B;
} tI2c_AddrType;

/*******************************************************************************
 * Global variables
 *******************************************************************************/

/*******************************************************************************
 * Global functions
 *******************************************************************************/
Std_ReturnType I2c_Init(I2c_Type I2Cx, I2c_BitrateType BitRate);
I2c_FaultType I2C_WriteBlock(I2c_Type I2Cx, uint8_t dev_addr, uint32_t reg_addr,
        uint8_t reg_addr_nBytes, uint8_t *pData, uint8_t nBytes);
I2c_FaultType I2C_ReadBlock_defined_addr(I2c_Type I2Cx, uint8_t dev_addr,
        uint32_t reg_addr, uint8_t reg_addr_nBytes, uint8_t *pData,
        uint8_t nBytes);
I2c_FaultType I2C_ReadBlock_preset_addr(I2c_Type I2Cx, uint8_t dev_addr,
        uint8_t *pData, uint8_t nBytes);

void I2C_Callback(I2c_Type I2Cx);

#endif
