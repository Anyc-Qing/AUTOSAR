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
 * File:             I2C_0.c
 * Owner:            PetrS
 * Version:          0.2
 * Date:             Apr-22-2016
 * Classification:   General Business Information
 * Brief:
 ********************************************************************************
 * Detailed Description:
 *
 * Low level driver for I2C communication
 * Master mode is only supported in this version
 *
 ********************************************************************************
 Revision History:
 Ver  Date         Author    Description of Changes
 0.1  Mar-24-2016  PetrS  	Initial version
 0.2	 Apr-22-2016  PetrS		Interrupt mode added, code rearrange
 0.3	 2018		  dabe		Modified by ArcCore
 *******************************************************************************/
#include <string.h>
#include "mpc55xx.h"
#include "I2c.h"
#include "isr.h"
#include "irq.h"
#include "Det.h"

/*******************************************************************************
 * External objects
 *******************************************************************************/

/*******************************************************************************
 * Global variables
 *******************************************************************************/
I2c_FlagType I2C_Res_flg[I2C_NO_OF_I2CS];
I2C_StageType I2C_stage[I2C_NO_OF_I2CS];
I2C_Modetype I2C_mode[I2C_NO_OF_I2CS];
I2c_FaultType I2C_fault[I2C_NO_OF_I2CS];
uint8_t I2C_Dev_Addr[I2C_NO_OF_I2CS];
uint8_t I2C_nBytes[I2C_NO_OF_I2CS];

uint8_t *pI2C_Data[I2C_NO_OF_I2CS];

tI2c_AddrType ADDR[I2C_NO_OF_I2CS];

static uint32_t nr_of_timeouts = 0;
/*******************************************************************************
 * Constants and macros
 *******************************************************************************/
#if ( I2C_DEV_ERROR_DETECT == STD_ON )
#if defined(USE_DET)
#include "Det.h"
#else
#error "I2C: DET must be used when dev error detect is enabled"
#endif
#define DET_REPORT_ERROR(_api,_err)      (void)Det_ReportError(I2C_MODULE_ID,0,(_api),(_err))
#else
#define DET_REPORT_ERROR(_api,_err)
#endif

#define VALIDATE_NO_RV(_exp,_api,_err ) \
  if( !(_exp) ) { \
      DET_REPORT_ERROR(_api, _err); \
      return; \
  }

#define VALIDATE_RV(_exp,_api,_err,_ret ) \
  if( !(_exp) ) { \
      DET_REPORT_ERROR(_api, _err); \
      return (_ret); \
  }

#define I2C_ADDR(X) ADDR[X].Addr_32
#define I2C_ADDR_H(X) ADDR[X].Addr_B.H
#define I2C_ADDR_M(X) ADDR[X].Addr_B.M
#define I2C_ADDR_L(X) ADDR[X].Addr_B.L

#define I2C_PRIO 3

// Approx. 8ms which is 100 times the time to send 1 byte on 100kbit/s
#define TIMEOUT_CYCLES 200000
/*******************************************************************************
 * Local types
 *******************************************************************************/

/*******************************************************************************
 * Local function prototypes
 *******************************************************************************/
/* NOTE! If any of these defines are defined interrupts will be used. If no
 * defines polling is used. */

#ifdef I2C_CHANNEL_0_USED
ISR(I2CInterrupt0) {I2C_Callback(I2C_I2C0);}
#endif

#ifdef I2C_CHANNEL_1_USED
ISR(I2CInterrupt1) {I2C_Callback(I2C_I2C1);}
#endif

#ifdef I2C_CHANNEL_2_USED
ISR(I2CInterrupt2) {I2C_Callback(I2C_I2C2);}
#endif

#ifdef I2C_CHANNEL_3_USED
ISR(I2CInterrupt3) {I2C_Callback(I2C_I2C3);}
#endif

/*******************************************************************************
 * Local variables
 *******************************************************************************/
static boolean I2cInitRun = FALSE;
/*******************************************************************************
 * Local functions
 *******************************************************************************/
static volatile struct I2C_tag * getI2c(I2c_Type I2Cx) {
    volatile struct I2C_tag * ret = NULL;
    switch (I2Cx) {
        case I2C_I2C0:
            ret = &I2C_0;
            break;
        case I2C_I2C1:
            ret = &I2C_1;
            break;
        case I2C_I2C2:
            ret = &I2C_2;
            break;
        case I2C_I2C3:
            ret = &I2C_3;
            break;
        default:
            break;
    }
    return ret;
}

static Std_ReturnType I2c_SetBitRate(volatile struct I2C_tag *pI2Cx,
        uint16_t uBitRate) {
    Std_ReturnType ret = E_OK;
    switch (uBitRate) {
        /* divider = F40 / bit rate = 40MHz / 100kHz = 400 */
        /* select  divider = 416, IBFD.B.IBC = 0x96        */
        case I2C_BIT_RATE_100K:
            pI2Cx->IBFD.B.IBC = 0x96;
            break;
            /* divider = F40 / bit rate = 40MHz / 250kHz = 160 */
            /* select  divider = 160, IBFD.B.IBC = 0x20        */
        case I2C_BIT_RATE_160K:
            pI2Cx->IBFD.B.IBC = 0x20;
            break;
            /* divider = F40 / bit rate = 40MHz / 200kHz = 200 */
            /* select  divider = 192, IBFD.B.IBC = 0x1E        */
        case I2C_BIT_RATE_200K:
            pI2Cx->IBFD.B.IBC = 0x1E;
            break;
            /* divider = F40 / bit rate = 40MHz / 400kHz = 100 */
            /* select  divider = 104, IBFD.B.IBC = 0x16        */
        case I2C_BIT_RATE_400K:
            pI2Cx->IBFD.B.IBC = 0x16;
            break;

        default:
            ret = E_NOT_OK;
            break;
    }
    return ret;
}

static void timeoutError(void) {
    nr_of_timeouts++;   // Only used for debugging

    // Zero all global data to reset the state of the driver
    memset(&I2C_Res_flg, 0, I2C_NO_OF_I2CS * sizeof(I2c_FlagType));
    memset(&I2C_stage, 0, I2C_NO_OF_I2CS * sizeof(I2C_StageType));
    memset(&I2C_mode, 0, I2C_NO_OF_I2CS * sizeof(I2C_Modetype));
    memset(&I2C_fault, 0, I2C_NO_OF_I2CS * sizeof(I2c_FaultType));

    memset(&I2C_Dev_Addr, 0, I2C_NO_OF_I2CS * sizeof(uint8_t));
    memset(&I2C_nBytes, 0, I2C_NO_OF_I2CS * sizeof(uint8_t));

    memset(&pI2C_Data, 0, I2C_NO_OF_I2CS * sizeof(uint8_t *));
    memset(&ADDR, 0, I2C_NO_OF_I2CS * sizeof(tI2c_AddrType));

}

/*******************************************************************************
 * Global functions
 *******************************************************************************/

/**
 * Initializes I2C hw and sets the bit rate.
 *
 * @param I2Cx      select which I2c hw module.
 * @param BitRate   communication speed
 * @return          E_OK if initialized ok
 */
Std_ReturnType I2c_Init(I2c_Type I2Cx, I2c_BitrateType BitRate) {

    volatile struct I2C_tag* I2C = getI2c(I2Cx);

    VALIDATE_RV((I2C != NULL), I2C_SERVICE_ID_INIT, I2C_E_PARAM, E_NOT_OK);
    VALIDATE_RV((I2c_SetBitRate(I2C, BitRate) != E_NOT_OK), I2C_SERVICE_ID_INIT,
            I2C_E_PARAM, E_NOT_OK);

#ifdef I2C_CHANNEL_0_USED
    ISR_INSTALL_ISR2("I2CIsr0", I2CInterrupt0, (int16_t)(I2C_0_0),I2C_PRIO, 0);
#endif
#ifdef I2C_CHANNEL_1_USED
    ISR_INSTALL_ISR2("I2CIsr1", I2CInterrupt1, (int16_t)(I2C_1_0),I2C_PRIO, 0);
#endif
#ifdef I2C_CHANNEL_2_USED
    ISR_INSTALL_ISR2("I2CIsr2", I2CInterrupt2, (int16_t)(I2C_2_0),I2C_PRIO, 0);
#endif
#ifdef I2C_CHANNEL_3_USED
    ISR_INSTALL_ISR2("I2CIsr3", I2CInterrupt3, (int16_t)(I2C_3_0),I2C_PRIO, 0);
#endif

    I2C->IBAD.R = 0x00; 		// Set module's I2C address to 0x00

    I2C->IBSR.R = 0x12; 		// Clear the IBAL, IBIF flags;

#if defined(I2C_CHANNEL_0_USED) || defined(I2C_CHANNEL_1_USED) || defined(I2C_CHANNEL_2_USED) \
		|| defined(I2C_CHANNEL_3_USED)

    I2C->IBCR.B.IBIE =1;		// I-Bus Interrupt Enable
#endif

    I2C->IBCR.B.MDIS = 0; 		// Enable I2C operations

    I2cInitRun = true;

    return E_OK;
}

/*******************************************************************************
 Function Name : I2C_0_WriteBlock
 Engineer      : PetrS
 Date          : Mar-24-2016
 Parameters    : I2Cx = select which I2c hw module.
 dev_addr = address selecting particular I2C device
 reg_addr = address selecting register address or memory address
 reg_addr_nBytes = address mode 1=8bit, 2=16bit, 3=24bit rest is
 invalid
 *pData = pointer to first data item
 nBytes = data length in bytes
 Modifies      :
 Returns       : 0=OK, 1=FRAME NO ENDED, 2=NO ACK, 3=BUS BUSY, 4=ARBITRATION LOST
 Notes         :
 Issues        :
 *******************************************************************************/
I2c_FaultType I2C_WriteBlock(I2c_Type I2Cx, uint8_t dev_addr, uint32_t reg_addr,
        uint8_t reg_addr_nBytes, uint8_t *pData, uint8_t nBytes) {
    I2c_FaultType retVal = I2C_NO_FAULT;
    volatile struct I2C_tag* I2C = getI2c(I2Cx);

    VALIDATE_RV((I2cInitRun == true), I2C_SERVICE_ID_WRITEBLOCK, I2C_E_UNINIT,
            I2C_UNINIT);
    VALIDATE_RV(
            (I2C != NULL) && (reg_addr_nBytes <= 3) && (reg_addr_nBytes > 0),
            I2C_SERVICE_ID_WRITEBLOCK, I2C_E_PARAM, I2C_WRONG_PARAM);
    VALIDATE_RV((pData != NULL), I2C_SERVICE_ID_WRITEBLOCK, I2C_E_PARAM_POINTER,
            I2C_WRONG_PARAM);

    if (I2C_Res_flg[I2Cx] == I2C_FLAG_NONE) {

        I2C_Dev_Addr[I2Cx] = dev_addr;	// address to select a slave
        I2C_ADDR(I2Cx)= reg_addr;  // slave register/memory address to be written
        pI2C_Data[I2Cx] = pData;		// pointer to data to be written
        I2C_nBytes[I2Cx] = nBytes;		// number of bytes to be written

        if (I2C->IBSR.B.IBB == 1) // check if bus is busy
                {
            I2C_fault[I2Cx] = I2C_BUS_BUSY;
            return (I2C_fault[I2Cx]);
        }

        if (reg_addr_nBytes == 3) I2C_stage[I2Cx] =
                I2C_STAGE_WRITE_REG_ADDRESS_HIGH;
        if (reg_addr_nBytes == 2) I2C_stage[I2Cx] =
                I2C_STAGE_WRITE_REG_ADDRESS_MIDDLE;
        if (reg_addr_nBytes == 1) I2C_stage[I2Cx] =
                I2C_STAGE_WRITE_REG_ADDRESS_LOW;

        I2C_mode[I2Cx] = I2C_MODE_WRITE;

        I2C_Res_flg[I2Cx] = I2C_FLAG_TRANSMISSION_PROGRESS;
        I2C_fault[I2Cx] = I2C_FRAME_NO_ENDED;

        I2C->IBCR.B.TXRX = 1;         // And generate start condition
        I2C->IBCR.B.MSSL = 1;         // Set transmit and master mode
        I2C->IBSR.B.IBIF = 1;		  // Clear IBIF
        {
            volatile uint32_t timeout = 0;
            while ((I2C->IBSR.B.IBB == 0) && (timeout++ < TIMEOUT_CYCLES)) {
                asm("e_nop");
            }; // Wait for bus idle or timeout
            if (timeout >= TIMEOUT_CYCLES) {
                timeoutError();
                return I2C_BUS_BUSY;
            }
        }
        I2C->IBDR.R = I2C_Dev_Addr[I2Cx];   // Send device address

        if (I2C->IBCR.B.IBIE == 0)	 // if interrupt is not used
                {
            while (I2C_Res_flg[I2Cx] == I2C_FLAG_TRANSMISSION_PROGRESS) {
                {
                    volatile uint32_t timeout = 0;
                    while ((I2C->IBSR.B.IBIF == 0)
                            && (timeout++ < TIMEOUT_CYCLES)) {
                        asm("e_nop");
                    }; // Wait until IBIF or timeout
                    if (timeout >= TIMEOUT_CYCLES) {
                        timeoutError();
                        return I2C_BUS_BUSY;
                    }
                }
                I2C_Callback(I2Cx);
            }
        }
    }

    if (I2C_Res_flg[I2Cx] == I2C_FLAG_TRANSMISSION_COMPLETE) {
        I2C_Res_flg[I2Cx] = I2C_FLAG_NONE;
        I2C_fault[I2Cx] = I2C_NO_FAULT;

        if (I2C_stage[I2Cx] == I2C_STAGE_NAK) I2C_fault[I2Cx] = I2C_NO_ACK;
        if (I2C_stage[I2Cx] == I2C_STAGE_ARBITRATION_LOST) I2C_fault[I2Cx] =
                I2C_ARBITRATION_LOST;
    }
    retVal = I2C_fault[I2Cx];
    return retVal;

}

/*******************************************************************************
 Function Name : I2C_0_ReadBlock_defined_addr
 Engineer      : PetrS
 Date          : Mar-24-2016
 Parameters    : I2Cx = select which I2c hw module.
 dev_addr = address selecting particular I2C device
 reg_addr = address selecting register address or memory address
 reg_addr_nBytes = address mode 1=8bit, 2=16bit, 3=24bit rest is
 invalid
 *pData = pointer to first data item
 nBytes = data length in bytes
 Modifies      :
 Returns       : 0=OK, 1=FRAME NO ENDED, 2=NO ACK, 3=BUS BUSY, 4=ARBITRATION LOST
 Notes         :
 Issues        :
 *******************************************************************************/
I2c_FaultType I2C_ReadBlock_defined_addr(I2c_Type I2Cx, uint8_t dev_addr,
        uint32_t reg_addr, uint8_t reg_addr_nBytes, uint8_t *pData,
        uint8_t nBytes) {
    I2c_FaultType retVal = I2C_NO_FAULT;
    volatile struct I2C_tag* I2C = getI2c(I2Cx);

    VALIDATE_RV((I2cInitRun == true), I2C_SERVICE_ID_READBLOCK_DEFINED_ADDR,
            I2C_E_UNINIT, I2C_UNINIT);
    VALIDATE_RV(
            (I2C != NULL) && (reg_addr_nBytes <= 3) && (reg_addr_nBytes > 0),
            I2C_SERVICE_ID_READBLOCK_DEFINED_ADDR, I2C_E_PARAM, I2C_WRONG_PARAM);
    VALIDATE_RV((pData != NULL), I2C_SERVICE_ID_READBLOCK_DEFINED_ADDR,
            I2C_E_PARAM_POINTER, I2C_WRONG_PARAM);

    if (I2C_Res_flg[I2Cx] == I2C_FLAG_NONE) {
        I2C_Dev_Addr[I2Cx] = dev_addr;	// address to select a slave
        I2C_ADDR(I2Cx)= reg_addr;     // slave register/memory address to be read
        pI2C_Data[I2Cx] = pData;		// pointer to data buffer to be filled
        I2C_nBytes[I2Cx] = nBytes;		// number of bytes to be read

        if (I2C->IBSR.B.IBB == 1) // check if bus is busy
                {
            I2C_fault[I2Cx] = I2C_BUS_BUSY;
            return (I2C_fault[I2Cx]);
        }

        if (reg_addr_nBytes == 3) I2C_stage[I2Cx] =
                I2C_STAGE_WRITE_REG_ADDRESS_HIGH;
        if (reg_addr_nBytes == 2) I2C_stage[I2Cx] =
                I2C_STAGE_WRITE_REG_ADDRESS_MIDDLE;
        if (reg_addr_nBytes == 1) I2C_stage[I2Cx] =
                I2C_STAGE_WRITE_REG_ADDRESS_LOW;

        I2C_mode[I2Cx] = I2C_MODE_READ;

        I2C_Res_flg[I2Cx] = I2C_FLAG_TRANSMISSION_PROGRESS;
        I2C_fault[I2Cx] = I2C_FRAME_NO_ENDED;

        I2C->IBCR.B.TXRX = 1;         // And generate start condition
        I2C->IBCR.B.MSSL = 1;         // Set transmit and master mode
        I2C->IBSR.B.IBIF = 1;		  // Clear IBIF
        {
            volatile uint32_t timeout = 0;
            while ((I2C->IBSR.B.IBB == 0) && (timeout++ < TIMEOUT_CYCLES)) {
                asm("e_nop");
            }; // Wait for bus idle or timeout
            if (timeout >= TIMEOUT_CYCLES) {
                timeoutError();
                return I2C_BUS_BUSY;
            }
        }
        I2C->IBDR.R = I2C_Dev_Addr[I2Cx];   // Send device address

        if (I2C->IBCR.B.IBIE == 0)	 // if interrupt is not used
                {
            while (I2C_Res_flg[I2Cx] == I2C_FLAG_TRANSMISSION_PROGRESS) {
                {
                    volatile uint32_t timeout = 0;
                    while ((I2C->IBSR.B.IBIF == 0)
                            && (timeout++ < TIMEOUT_CYCLES)) {
                        asm("e_nop");
                    }; // Wait until IBIF or timeout
                    if (timeout >= TIMEOUT_CYCLES) {
                        timeoutError();
                        return I2C_BUS_BUSY;
                    }
                }
                I2C_Callback(I2Cx);
            }
        }
    }

    if (I2C_Res_flg[I2Cx] == I2C_FLAG_TRANSMISSION_COMPLETE) {
        I2C_Res_flg[I2Cx] = I2C_FLAG_NONE;
        I2C_fault[I2Cx] = I2C_NO_FAULT;

        if (I2C_stage[I2Cx] == I2C_STAGE_NAK) I2C_fault[I2Cx] = I2C_NO_ACK;
        if (I2C_stage[I2Cx] == I2C_STAGE_ARBITRATION_LOST) I2C_fault[I2Cx] =
                I2C_ARBITRATION_LOST;
    }
    retVal = I2C_fault[I2Cx];
    return retVal;
}

/*******************************************************************************
 Function Name : I2C_0_ReadBlock_preset_addr
 Engineer      : PetrS
 Date          : Mar-24-2016
 Parameters    : I2Cx = select which I2c hw module.
 dev_addr = address selecting particular I2C device
 *pData = pointer to first data item
 nBytes = data length in bytes
 Modifies      :
 Returns       : 0=OK, 1=FRAME NO ENDED, 2=NO ACK, 3=BUS BUSY, 4=ARBITRATION LOST
 Notes         :
 Issues        :
 *******************************************************************************/
I2c_FaultType I2C_ReadBlock_preset_addr(I2c_Type I2Cx, uint8_t dev_addr,
        uint8_t *pData, uint8_t nBytes) {
    I2c_FaultType retVal = I2C_NO_FAULT;
    volatile struct I2C_tag* I2C = getI2c(I2Cx);

    VALIDATE_RV((I2cInitRun == true), I2C_SERVICE_ID_READBLOCK_PRESET_ADDR,
            I2C_E_UNINIT, I2C_UNINIT);
    VALIDATE_RV((I2C != NULL), I2C_SERVICE_ID_READBLOCK_PRESET_ADDR,
            I2C_E_PARAM, I2C_WRONG_PARAM);
    VALIDATE_RV((pData != NULL), I2C_SERVICE_ID_READBLOCK_PRESET_ADDR,
            I2C_E_PARAM_POINTER, I2C_WRONG_PARAM);

    if (I2C_Res_flg[I2Cx] == I2C_FLAG_NONE) {
        I2C_Dev_Addr[I2Cx] = dev_addr | 1;	// address to select a slave
        pI2C_Data[I2Cx] = pData;		// pointer to data buffer to be filled
        I2C_nBytes[I2Cx] = nBytes;		// number of bytes to be read

        if (I2C->IBSR.B.IBB == 1) // check if bus is busy
                {
            I2C_fault[I2Cx] = I2C_BUS_BUSY;
            return (I2C_fault[I2Cx]);
        }

        I2C_stage[I2Cx] = I2C_STAGE_READ_DUMMY_DATA;

        I2C_Res_flg[I2Cx] = I2C_FLAG_TRANSMISSION_PROGRESS;
        I2C_fault[I2Cx] = I2C_FRAME_NO_ENDED;

        I2C->IBCR.B.TXRX = 1;         // And generate start condition
        I2C->IBCR.B.MSSL = 1;         // Set transmit and master mode
        I2C->IBSR.B.IBIF = 1;		  // Clear IBIF
        {
            volatile uint32_t timeout = 0;
            while ((I2C->IBSR.B.IBB == 0) && (timeout++ < TIMEOUT_CYCLES)) {
                asm("e_nop");
            }; // Wait for bus idle or timeout
            if (timeout >= TIMEOUT_CYCLES) {
                timeoutError();
                return I2C_BUS_BUSY;
            }
        }
        I2C->IBDR.R = I2C_Dev_Addr[I2Cx];   // Send device address

        if (I2C->IBCR.B.IBIE == 0)	 // if interrupt is not used
                {
            while (I2C_Res_flg[I2Cx] == I2C_FLAG_TRANSMISSION_PROGRESS) {
                {
                    volatile uint32_t timeout = 0;
                    while ((I2C->IBSR.B.IBIF == 0)
                            && (timeout++ < TIMEOUT_CYCLES)) {
                        asm("e_nop");
                    }; // Wait until IBIF or timeout
                    if (timeout >= TIMEOUT_CYCLES) {
                        timeoutError();
                        return I2C_BUS_BUSY;
                    }
                }
                I2C_Callback(I2Cx);
            }
        }
    }

    if (I2C_Res_flg[I2Cx] == I2C_FLAG_TRANSMISSION_COMPLETE) {
        I2C_Res_flg[I2Cx] = I2C_FLAG_NONE;
        I2C_fault[I2Cx] = I2C_NO_FAULT;

        if (I2C_stage[I2Cx] == I2C_STAGE_NAK) I2C_fault[I2Cx] = I2C_NO_ACK;
        if (I2C_stage[I2Cx] == I2C_STAGE_ARBITRATION_LOST) I2C_fault[I2Cx] =
                I2C_ARBITRATION_LOST;
    }
    retVal = I2C_fault[I2Cx];
    return retVal;
}

/*******************************************************************************
 Function Name : I2C_0_Callback
 Engineer      : PetrS
 Date          : Mar-24-2016
 Parameters    : I2Cx = select which I2c hw module.
 Modifies      :
 Returns       :
 Notes         : Follows RM's Flow-Chart of Typical I2C Interrupt Routine
 Issues        :
 *******************************************************************************/
void I2C_Callback(I2c_Type I2Cx) {
    uint8_t dummy; /* Used to initiates next byte data receiving */

    volatile struct I2C_tag* I2C = getI2c(I2Cx);

    VALIDATE_NO_RV((I2cInitRun == true), I2C_SERVICE_ID_CALLBACK, I2C_E_UNINIT);
    VALIDATE_NO_RV((I2C != NULL), I2C_SERVICE_ID_CALLBACK, I2C_E_PARAM);

    I2C->IBSR.B.IBIF = 1;

    if (I2C->IBCR.B.MSSL)	// if master mode
    {
        if (I2C->IBCR.B.TXRX)  // if TX
        {
            if (I2C->IBSR.B.RXAK == 0)	// if ACK received, RXAK == 0
                    {
                switch (I2C_stage[I2Cx]) {
                    case I2C_STAGE_WRITE_REG_ADDRESS_HIGH:
                    {
                        I2C->IBDR.R = I2C_ADDR_H(I2Cx); // Send highest byte of 3 byte address;
                        I2C_stage[I2Cx] = I2C_STAGE_WRITE_REG_ADDRESS_MIDDLE;
                    }
                        break;
                    case I2C_STAGE_WRITE_REG_ADDRESS_MIDDLE:
                    {
                        I2C->IBDR.R = I2C_ADDR_M(I2Cx); // Send middle byte of 3 byte address or highest of 2 byte address;
                        I2C_stage[I2Cx] = I2C_STAGE_WRITE_REG_ADDRESS_LOW;
                    }
                        break;
                    case I2C_STAGE_WRITE_REG_ADDRESS_LOW:
                    {
                        I2C->IBDR.R = I2C_ADDR_L(I2Cx); // Send lower byte of address;

                        if (I2C_mode[I2Cx] == 0) I2C_stage[I2Cx] =
                                I2C_STAGE_WRITE_DATA;
                        else I2C_stage[I2Cx] = I2C_STAGE_REPEATED_START;
                    }
                        break;

                    case I2C_STAGE_REPEATED_START:
                    {
                        I2C->IBCR.B.RSTA = 1; 	// generate repeated START
                        I2C->IBDR.R = I2C_Dev_Addr[I2Cx] | 1; // Send byte Control
                        I2C_stage[I2Cx] = I2C_STAGE_READ_DUMMY_DATA;
                    }
                        break;
                    case I2C_STAGE_READ_DUMMY_DATA:
                    {
                        I2C->IBCR.B.TXRX = 0;	// set for receive
                        if (I2C_nBytes[I2Cx] == 1) I2C->IBCR.B.NOACK = 1; // if just 1 byte is going to be read
                        // NOACK next received byte
                        dummy = I2C->IBDR.R;// initiates next byte data receiving
                        (void) dummy;
                    }
                        break;
                    case I2C_STAGE_WRITE_DATA:
                    {
                        if (I2C_nBytes[I2Cx])	// if not last byte TXed
                        {
                            I2C->IBDR.R = *pI2C_Data[I2Cx]++;
                            I2C_nBytes[I2Cx]--;
                        }
                        else			// last byte TXed
                        {
                            I2C->IBCR.B.MSSL = 0;	// Generate stop signal;
                            {
                                volatile uint32_t timeout = 0;
                                while ((I2C->IBSR.B.IBB == 1)
                                        && (timeout++ < TIMEOUT_CYCLES)) {
                                    asm("e_nop");
                                }; // Wait bus idle or timeout
                                if (timeout >= TIMEOUT_CYCLES) {
                                    I2C_stage[I2Cx] =
                                            I2C_STAGE_ARBITRATION_LOST;
                                    I2C_Res_flg[I2Cx] =
                                            I2C_FLAG_TRANSMISSION_COMPLETE;	// end of I2C transfer
                                    nr_of_timeouts++;
                                    return;
                                }
                            }
                            I2C_stage[I2Cx] = I2C_STAGE_NONE;
                            I2C_Res_flg[I2Cx] = I2C_FLAG_TRANSMISSION_COMPLETE;	// end of I2C transfer
                        }
                    }
                        break;
                    default:
                        break;
                }
            }
            else {
                // byte not ACKed
                I2C->IBCR.B.MSSL = 0;	// Generate stop signal;
                I2C_stage[I2Cx] = I2C_STAGE_NAK;
                I2C_Res_flg[I2Cx] = I2C_FLAG_TRANSMISSION_COMPLETE;
            }

        }
        else	// if RX
        {
            if ((I2C_nBytes[I2Cx] - 2) == 0) {
                I2C->IBCR.B.NOACK = 1; // NOACK next received byte
            }
            if ((I2C_nBytes[I2Cx] - 1) == 0) {
                I2C->IBCR.B.MSSL = 0;	  // Set IBCR, Generate stop signal;
                I2C->IBCR.B.NOACK = 0;  // Reset the NOACK to default value
                {
                    volatile uint32_t timeout = 0;
                    while ((I2C->IBSR.B.IBB == 1)
                            && (timeout++ < TIMEOUT_CYCLES)) {
                        asm("e_nop");
                    }; // Wait bus idle or timeout
                    if (timeout >= TIMEOUT_CYCLES) {
                        I2C_stage[I2Cx] = I2C_STAGE_ARBITRATION_LOST;
                        I2C_Res_flg[I2Cx] = I2C_FLAG_TRANSMISSION_COMPLETE;	// end of I2C transfer
                        nr_of_timeouts++;
                        return;
                    }
                }
                I2C_stage[I2Cx] = I2C_STAGE_NONE;
                I2C_Res_flg[I2Cx] = I2C_FLAG_TRANSMISSION_COMPLETE;	// end of I2C transfer
            }

            *(pI2C_Data[I2Cx]++) = I2C->IBDR.R; // Read the received byte from slave

            I2C_nBytes[I2Cx]--;
        }
    }
    else	// if slave mode
    {
        if (I2C->IBSR.B.IBAL)		// if IBAL bit is set
        {
            I2C_stage[I2Cx] = I2C_STAGE_ARBITRATION_LOST;
            I2C_Res_flg[I2Cx] = I2C_FLAG_TRANSMISSION_COMPLETE;	// end of I2C transfer
            I2C->IBSR.R = 0x10; 	// clear IBAL flag
        }
    }
}
