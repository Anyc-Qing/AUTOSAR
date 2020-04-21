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

/** @tagSettings DEFAULT_ARCHITECTURE=TMS570 */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0 */

/** @file Dio_Hw_tms570.c
 *
 *  The Dio_Hw_tms570.c file contains the hardware specific implementation of all the API mentioned in Dio driver SWS document (ASR 4.3.0)
 *  This file corresponds to TMS570 architecture.
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Dio
  *  This is the TMS 570 Mcal Dio Group
  *  @{
  */
/* Not Supported Requirements */
/** !req SWS_Dio_00005 - The Dio module’s read and write services shall ensure for all services, that the data is consistent (Interruptible read-modify-write sequences are not allowed).*/
/** !req SWS_Dio_00060 - All read and write functions of the Dio module shall be re-entrant.*/

/* Supported Requirements */
/** @req SWS_Dio_00051 - The Dio module shall not buffer data when providing read and write services.
 * Read and Write services are acting directly on HW registers */

/** @req SWS_Dio_00170 - The include file structure of the Dio Driver should be according to the Fig -1 in Dio driver SWS (ASR 4.3.0) */
#include "Dio.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#include "Dio_MemMap.h"
#include "Dio_Hw_tms570.h"
#include "Dio_Internal.h"
#include "SchM_Dio.h"


/* ----------------------------[private function prototypes]-----------------*/

/* ----------------------------[static variables ]---------------------------*/

/**
 * @brief   GPIO_ports1 - Pointer that holds address of GIO_PORTA, GIO_PORTB and GIO_PORTC
 * This is used in Hw_ReadPort, Hw_WritePort and Hw_WriteChannel
 *
 */
/*lint --e{923} MISRA :HARDWARE ACCESS::[MISRA 2012 Rule 11.6, required]*/
GIO_RegisterType *GPIO_ports1[] = { GIO_PORTA_BASE, GIO_PORTB_BASE, GIO_PORTC_BASE };

/*lint -e843 LINT:OTHER:HARDWARE DEFINITION */
Adc_GioRegisterType *Adc_Dio = ADEVT_GIO_BASE;

/**
 * @brief   spi5Collection - Pointer that holds address of registers of SPI module
 *
 */
const GIO_SpiRegisterCollectionType spi5Collection = {
    .dirReg = (uint32_t*)DIRECTION_REG,  /**< @brief Data Direction Register */
    .inReg  = (uint32_t*)DATA_IN_REG,    /**< @brief Data Input Register */
    .outReg = (uint32_t*)DATA_OUT_REG,   /**< @brief Data Output Register */
};


/**
 * @brief This function is to get the Port value from the channel
 * @param[in] channel - Channel from which the Port value should be calculated
 * @return uint8 - Port value from the channel
 * @retval 1.. Number of Ports in the channel
 */
static uint8 getPortFromChannel(uint8 channel){
	uint8 rv_port;

	if(channel == ADC_CHANNEL_NUMBER){
		rv_port = ADC_GIO_PORT_INDEX;
	}else if (channel >= SPI5_FIRST_CHANNEL){
		rv_port =  SPI5_GIO_PORT_INDEX;
	}else if (channel < GIO_CHANNEL) {
		rv_port = channel / CHANNEL_TO_PORT;
	}else{
		rv_port = NHET_GIO_PORT_INDEX;
	}
    return rv_port ;
}

/**
 * @brief This function is to get the Bit value from the channel
 * @param[in] channel - Channel from which the Bit value should be calculated
 * @return uint32 - Bit value from the channel
 * @retval 1.. Number of bits in the channel
 */
static uint32 getBitFromChannel (uint8 channel){
	uint32 rv_bit;
	if(channel == ADC_CHANNEL_NUMBER){
		rv_bit = ((uint32)1 << 0);
	}else if (channel >= SPI5_FIRST_CHANNEL){
		rv_bit = ((uint32)1 << ((channel - SPI5_FIRST_CHANNEL) % SPI_BIT));
	} else if (channel < GIO_CHANNEL) {
		rv_bit = ((uint32)1 << (channel % CHANNEL_TO_PORT));
	}else{
		rv_bit =  ((uint32)1 << ((channel - GIO_CHANNEL) % NHET_BIT));
	}
    return rv_bit;
}

/** For Dio_ReadPort and Dio_WritePort, it is important to note the structure
 * of the SPI5 GPIO, which is different. The bits are not consecutive in
 * memory, and it's also impossible to write with one operation (see in
 * Dio_WritePort).
 * The SPI5 GPIO is a logical port of 14 bits, which consists of the following
 * bits/pins:
 *
 *  <- More Significant                                              Less Significant ->
 * -------------------------------------------------------------------------------------
 * |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
 * | SO3 | SO2 | SO1 | SO0 | SI3 | SI2 | SI1 | SI0 | CLK | ENA | CS3 | CS2 | CS1 | CS0 |
 * |  13 |  12 |  11 |  10 |  9  |  8  |  7  |  6  |  5  |  4  |  3  |  2  |  1  |  0  |
 * -------------------------------------------------------------------------------------
 *
 * That order of bits within the port is not mandated by the hardware (it's a
 * logical port anyway), but was chosen as convenient based on the actual addresses,
 * the relation between the addresses is the same in the logical port and actual memory.
 * That is, SI3 is a more significant bit in the physical memory than SO3, which is more
 * significant than CLK, and so on.
 * For the actual memory layout, see register descriptions in TMS570LS1227 manual,
 * sections 28.9.9 - 28.9.11
 **/

/**
 * @brief This function is to read bit from the Spi module
 * @param[in] bit - Bit position from which value should be read
 * @return uint32 - Bit value from the SPI module
 * @retval 1.. Number of Ports in the channel
 */
static inline uint32 readSpiBit(uint8 bit) {
	uint32 rv = (*(GIO_SPI5PORT.dirReg) & ((uint32)1 << bit));
	if (rv != 0){
		rv = (*GIO_SPI5PORT.outReg >> bit) & (uint32)1;
	}else{
		rv = (*GIO_SPI5PORT.inReg >> bit) & (uint32)1;
	}
    return rv;
}

/**
 * @brief This function is to read value from the port of Spi module
 * @return Dio_PortLevelType - Level of the port
 * @retval STD_HIGH - High value which corresponds to 1
 * @retval STD_LOW  - Low value which corresponds to 0
 */
static Dio_PortLevelType readSpiPort(){
	Dio_PortLevelType level = 0;
    /*read SOMI[3:0] pins (27-24) to bits 13-10*/
    level |= readSpiBit(SPI_PIN_27) << SPI_BIT_13;
    level |= readSpiBit(SPI_PIN_26) << SPI_BIT_12;
    level |= readSpiBit(SPI_PIN_25) << SPI_BIT_11;
    level |= readSpiBit(SPI_PIN_24) << SPI_BIT_10;
    /*read SIMO[3:0] pins (19-16) to bits 9-6*/
    level |= readSpiBit(SPI_PIN_19) << SPI_BIT_9;
    level |= readSpiBit(SPI_PIN_18) << SPI_BIT_8;
    level |= readSpiBit(SPI_PIN_17) << SPI_BIT_7;
    level |= readSpiBit(SPI_PIN_16) << SPI_BIT_6;
    /*read CLK (pin 9) to bit 5*/
    level |= readSpiBit(SPI_PIN_9) << SPI_BIT_5;
    /*read ENA (pin 8) to bit 4*/
    level |= readSpiBit(SPI_PIN_8) << SPI_BIT_4;
    /*read CS[3:0] (pins 3-0) to bits 3-0*/
    level |= readSpiBit(SPI_PIN_3) << SPI_BIT_3;
    level |= readSpiBit(SPI_PIN_2) << SPI_BIT_2;
    level |= readSpiBit(SPI_PIN_1) << SPI_BIT_1;
    level |= readSpiBit(SPI_PIN_0) << SPI_BIT_0;

    return level;
}

/**
 * @brief This function allows to read the level of all pins in port regardless of each pin's direction
 * @param port - Port to check of type GIO_RegisterType
 * @return Levels of each pin in port
 */
static Dio_PortLevelType readPortGio(GIO_RegisterType const *port) {
	/** @req SWS_Dio_00084 - If the microcontroller does not support the direct read-back of a pin value, the Dio module’s read functions shall provide the value of the output register, when they are used on a channel which is configured as an output channel. */
	uint32 pinDirections 			  			 = port->DIR;
	// read levels of pins that are only output
	Dio_PortLevelType outputRegisterLevels 	     = port->DOUT;
	Dio_PortLevelType maskedOutputRegisterLevels = (outputRegisterLevels & pinDirections);
	// read levels of pins that are only input
	Dio_PortLevelType inputRegisterLevels		 = port->DIN;
	Dio_PortLevelType maskedInputRegisterLevels  = (inputRegisterLevels  & ~pinDirections);
	// finally, combine read levels of both input and output pins
	Dio_PortLevelType portLevels 				 = (maskedOutputRegisterLevels | maskedInputRegisterLevels);

	return portLevels;
}

/**
 * @brief This function allows to read the level of ADEVT (ADC GIO) pins in port regardless of each pin's direction
 * @param port - Port to check of type Adc_GioRegisterType
 * @return Levels of each pin in port
 */
static Dio_PortLevelType readPortAdcGio(Adc_GioRegisterType const *port) {
	/** @req SWS_Dio_00084 - If the microcontroller does not support the direct read-back of a pin value, the Dio module’s read functions shall provide the value of the output register, when they are used on a channel which is configured as an output channel. */
	uint32 pinDirections 			  			 = port->DIR;
	// read levels of pins that are only output
	Dio_PortLevelType outputRegisterLevels 	     = port->DOUT;
	Dio_PortLevelType maskedOutputRegisterLevels = (outputRegisterLevels & pinDirections);
	// read levels of pins that are only input
	Dio_PortLevelType inputRegisterLevels		 = port->DIN;
	Dio_PortLevelType maskedInputRegisterLevels  = (inputRegisterLevels  & ~pinDirections);
	// finally, combine read levels of both input and output pins
	Dio_PortLevelType portLevels 				 = (maskedOutputRegisterLevels | maskedInputRegisterLevels);

	return portLevels;
}

/** @req SWS_Dio_00135 - Dio_ReadPort*/
/** @req SWS_Dio_00053 - In the DIO Driver, it shall be possible to group several DIO channels by hardware (typically controlled by one hardware register) to represent a DIO port.*/
/** @req SWS_Dio_00013 - The Dio_ReadPort function shall read the levels of all channels of one port. A bit value '0' indicates that the corresponding channel is physical STD_LOW, a bit value '1' indicates that the corresponding channel is physical STD_HIGH. */

/**
 * @brief This API will have the hardware specific implementation of reading the port
 * @note Reentrant
 * @param[in] portId - ID of the port
 * @return Dio_PortLevelType - Each bit is a channel within the port
 * @retval STD_HIGH The physical level of the channels in the Port are STD_HIGH
 * @retval STD_LOW The physical level of the channel in the Port are STD_LOW
 */
Dio_PortLevelType Dio_Hw_ReadPort(Dio_PortType portId){
    Dio_PortLevelType level = STD_LOW;
    /** @req SWS_Dio_00031 - The Dio_ReadPort function shall return the level of all channels of that port.*/
    if (portId == SPI5_GIO_PORT_INDEX){
        level = readSpiPort();
    } else if (portId == ADC_GIO_PORT_INDEX){
    	/* read the level of ADEVT (ADC GIO) pins */
    	level = (readPortAdcGio(Adc_Dio) & 1UL);
    } else if (portId < NHET_GIO_PORT_INDEX){
        /** @req SWS_Dio_00104 - When reading a port which is smaller than the Dio_PortType using the Dio_ReadPort function (see [SWS_Dio_00103]), the function shall set the bits corresponding to undefined port pins to 0. */
        /* The port size actually being 8 bits, set all undefined bits to 0 */
        level = readPortGio(GPIO_ports1[portId]);
        level &= GPIO_LEVEL_MAX;
    } else {
		level = readPortGio(GPIO_ports1[portId]);
	}

    return level;
}

/** !req SWS_Dio_00064 - The Dio module’s write functions shall work on input and output channels.
 * No check if channels of port is set as input. */

/** !req SWS_Dio_00070 - If a Dio write function is used on an input channel, it shall have no effect on the physical output level
 * No check if channels of port is set as input. */

/** !req SWS_Dio_00109 - If supported by hardware, the Dio module shall set/clear the output data latch of an input channel so that the required level is output from the pin when the port driver configures the pin as a DIO output pin. */

/** !req SWS_Dio_00004 - The Dio_WritePort function shall ensure that the functionality of the input channels of that port is not affected.
 * No check if channels of port is set as input. */

/** !req SWS_Dio_00035 - When the Dio_WritePort function is called, DIO Channels that are configured as input shall remain unchanged.
 * No check if channels of port is set as input. */

/** !req SWS_Dio_00108 - The Dio_WritePort function shall have no effect on channels within this port which are configured as input channels.
 * No check if channels of port is set as input. */


/** @req SWS_Dio_00136 - Dio_WritePort*/
/** @req SWS_Dio_00053 - In the DIO Driver, it shall be possible to group several DIO channels by hardware (typically controlled by one hardware register) to represent a DIO port.*/
/** @req SWS_Dio_00007 - The Dio_WritePort function shall simultaneously set the levels of all output channels. A bit value '0' sets the corresponding channel to physical STD_LOW, a bit value '1' sets the corresponding channel to physical STD_HIGH. */

/**
 * @brief This API will have the hardware specific implementation of writing a particular level to the port
 * @note Reentrant
 * @param[in] portId - ID of the port
 * @param[in] level - Level that should be written to the port. Each bit is a channel within the port
 */
void Dio_Hw_WritePort(Dio_PortType portId, Dio_PortLevelType level){

	Dio_PortLevelType new_level;

	/** @req SWS_Dio_00034 - The Dio_WritePort function shall set the specified value for the specified port. */

    /** @req SWS_Dio_00105 - When writing a port which is smaller than the Dio_PortType using the Dio_WritePort function (see [SWS_Dio_00103]), the function shall ignore the MSB. */
    if (portId == SPI5_GIO_PORT_INDEX){
        /* This logical port is again very special. In addition to its layout
        * (see before Dio_ReadPort), there isn't a register corresponding to
        * DOUT on the normal ports where you can just write the values.
        * Instead, there's a SET register where you can write 1 to bits, and
        * a CLR register where you can write 0.
        *
        * First we trim the level value to ignore all but the 14 bits, then we
        * calculate what bits need to be set and cleared in the registers.
        */
        uint32 regMask = 0;
        uint32 tmp;
        new_level = level & SPI_LEVEL_MAX;
        /* Read bits 13-10, corresponding to SOMI[3:0] */
        tmp = (new_level >> SPI_BIT_10) & SPI_BIT_LEVEL;
        regMask |= (tmp << SPI_SOMI_SHIFT);
        /* Read bits 9-6, corresponding to SIMO[3:0] */
        tmp = (new_level >> SPI_BIT_6) & SPI_BIT_LEVEL;
        regMask |= (tmp << SPI_SIMO_SHIFT);
        /* Read bit 5, corresponding to CLK */
        tmp = (new_level >> SPI_BIT_5) & 1u;
        regMask |= (tmp  << SPI_CLK_SHIFT);
        /* Read bit 4, corresponding to ENA */
        tmp = (new_level >> SPI_BIT_4) & 1u;
        regMask |= (tmp << SPI_ENA_SHIFT);
        /* Finally the 4 least-significant bits are CS */
        tmp = new_level & SPI_BIT_LEVEL;
        regMask |= (tmp << SPI_CS_SHIFT);

        /* Special consideration since performing a 32-bit write: bit 10 has
        * to be set to bit 16, and bit 11 to bit 24. Because if bit 16 is 1
        * but bit 10 is 0, then bit 16 would get ignored.
        */
        regMask |= ((regMask >> SPI_PIN_16) & 1u) << SPI_BIT_10;
        regMask |= ((regMask >> SPI_PIN_24) & 1u) << SPI_BIT_11;
        /* Now first clear the relevant bits to 0, then write 1 bits */
        *(GIO_SPI5PORT.outReg) = regMask;
    }else if (portId == ADC_GIO_PORT_INDEX){
    	if((Adc_Dio->DIR  & (uint32)1) == 1){
    		Adc_Dio->DOUT = level;
    	}
    }else if (portId < NHET_GIO_PORT_INDEX){
    	GPIO_ports1[portId]->DOUT = ((Dio_PortLevelType)level) & GPIO_WRITE_LEVEL;
    }else{
        GPIO_ports1[portId]->DOUT = level;
    }
}

/** @req SWS_Dio_00011 - The Dio_ReadChannel function shall read the level of a single DIO channel.*/

/** @req SWS_Dio_00133 - Dio_ReadChannel */
/** @req SWS_Dio_00012 - The Dio module’s read functions shall work on input and output channels. */
/** @req SWS_Dio_00089 - Values used by the DIO Driver for the software level of Channels are either STD_HIGH or STD_LOW.*/


/**
 * @brief  This API will have the hardware specific implementation of reading the value of a channel
 * @note Reentrant
 * @param[in] channelId - ID of the channel
 * @return Dio_LevelType - Level of channel
 * @retval STD_HIGH The physical level of the channel is STD_HIGH
 * @retval STD_LOW The physical level of the channel is STD_LOW
 */
Dio_LevelType Dio_Hw_ReadChannel(Dio_ChannelType channelId){
    Dio_LevelType level = STD_LOW;

    Dio_PortType port = DIO_GET_PORT_FROM_CHANNEL_ID(channelId);
    Dio_PortLevelType bit = DIO_GET_BIT_FROM_CHANNEL_ID(channelId);

    Dio_PortLevelType portVal = Dio_Hw_ReadPort(port);

    /** @req SWS_Dio_00027 - The Dio_ReadChannel function shall return the value of the specified DIO channel.*/
    if ((portVal & bit) != STD_LOW) {
        level = STD_HIGH;
    } else {
        level = STD_LOW;
    }
    return (level);
}

/** !req SWS_Dio_00064 - The Dio module’s write functions shall work on input and output channels.
 * No check if channels of port is set as input. */

/** !req SWS_Dio_00070 - If a Dio write function is used on an input channel, it shall have no effect on the physical output level
 * No check if channels of port is set as input. */

/** !req SWS_Dio_00109 - If supported by hardware, the Dio module shall set/clear the output data latch of an input channel so that the required level is output from the pin when the port driver configures the pin as a DIO output pin. */

/** @req SWS_Dio_00134 - Dio_WriteChannel*/
/** @req SWS_Dio_00089 - Values used by the DIO Driver for the software level of Channels are either STD_HIGH or STD_LOW.*/
/** @req SWS_Dio_00006 - The Dio_WriteChannel function shall set the level of a single DIO channel to STD_HIGH or STD_LOW.*/

/**
 * @brief This API will have the hardware specific implementation of writing a particular value to a channel
 * @note Reentrant
 * @param[in] channelId - ID of the channel
 * @param[in] level - the level to be written
 */
void Dio_Hw_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level){

	/**
	 * @brief Correspondence map of the 14 logical bits in the SPI5 port
	 * to actual locations of where the set/clear mask will need to
	 * be written
	 */
	static const uint8 spiBitMap[14] =
	{
	    /* Bits 0-3 correspond to CS, match logical/physical */
	    0, 1, 2, 3,
	    /* Bit 4 - ENA*/
	    8,
	    /* Bit 5 - CLK */
	    9,
	    /* Bits 6-9 are SIMO */
	    16, 17, 18, 19,
	    /* Bits 10-13 are SOMI */
	    24, 25, 26, 27
	};
    Dio_PortType port = DIO_GET_PORT_FROM_CHANNEL_ID(channelId);
    Dio_PortLevelType bit = DIO_GET_BIT_FROM_CHANNEL_ID(channelId);
    Dio_PortLevelType portVal;

    if (port == SPI5_GIO_PORT_INDEX){
        /* This port is again special. Need to look up which physical bit to write */
        uint8 physBit = spiBitMap[channelId - SPI5_FIRST_CHANNEL];
        if ((*(GIO_SPI5PORT.dirReg) & ((uint32)1 << physBit)) != 0){
        	portVal = *(GIO_SPI5PORT.outReg);
        	if (level == STD_HIGH){
        		portVal |= ((uint32)1 << physBit);
        	}else{
        	    portVal &= ~((uint32)1 << physBit);
        	}
        	*(GIO_SPI5PORT.outReg) = portVal;
        }
    }else if (port == ADC_GIO_PORT_INDEX){
    	portVal = Adc_Dio->DOUT;

    	if(level == STD_HIGH){
    		portVal |= bit;
    	} else{
        	portVal &= ~bit;
    	}

    	Adc_Dio->DOUT = portVal;
    }else{
    	if((GPIO_ports1[port]->DIR & bit) != 0){
            if (port < NHET_GIO_PORT_INDEX) {
            	portVal = GPIO_ports1[port]->DOUT;
            }else{
            	portVal = (uint32)GPIO_ports1[port]->DOUT;
            }

            if(level == STD_HIGH){
            	portVal |= bit;
            }else{
            	portVal &= ~bit;
            }
            /** @req SWS_Dio_00028 - If the specified channel is configured as an output channel, the Dio_WriteChannel function shall set the specified Level for the specified channel.*/
            GPIO_ports1[port]->DOUT = portVal;
    	}
    }
}

/** @req SWS_Dio_00137 - Dio_ReadChannelGroup*/
/** @req SWS_Dio_00056 - A channel group is a formal logical combination of several adjoining DIO channels within a DIO port.*/
/** @req SWS_Dio_00014 - The Dio_ReadChannelGroup function shall read the levels of a DIO channel group. A bit value '0' indicates that the corresponding channel is physical STD_LOW, a bit value '1' indicates that the corresponding channel is physical STD_HIGH. */

/**
 * @brief This API will have the hardware specific implementation of reading the value of a channel group
 * This API calls  Dio_Hw_ReadPort function.
 * @note Reentrant
 * @param[in] channelGroupIdPtr - Pointer to ChannelGroup
 * @return Dio_PortLevelType - Level of a subset of the adjoining bits of a port. Each bit is a channel within the group
 * @retval STD_HIGH The physical level of the channels in the group are STD_HIGH
 * @retval STD_LOW The physical level of the channels in the group are STD_LOW
 */
Dio_PortLevelType Dio_Hw_ReadChannelGroup(const Dio_ChannelGroupType *channelGroupIdPtr){

	Dio_PortLevelType level;
    /** @req SWS_Dio_00037 - The Dio_ReadChannelGroup function shall read a subset of the adjoining bits of a port (channel group).*/
    /** @req SWS_Dio_00092 - The Dio_ReadChannelGroup function shall do the masking of the channel group.*/
    // Get masked values
    level = Dio_Hw_ReadPort(channelGroupIdPtr->port) & channelGroupIdPtr->mask;

    /** @req SWS_Dio_00093 - The Dio_ReadChannelGroup function shall do the shifting so that the values read by the function are aligned to the LSB.*/
    // Shift down
    level = level >> channelGroupIdPtr->offset;

    return level;
}

/** !req SWS_Dio_00064 - The Dio module’s write functions shall work on input and output channels.
 * No check if channels of port is set as input. */

/** !req SWS_Dio_00070 - If a Dio write function is used on an input channel, it shall have no effect on the physical output level
 * No check if channels of port is set as input. */

/** !req SWS_Dio_00109 - If supported by hardware, the Dio module shall set/clear the output data latch of an input channel so that the required level is output from the pin when the port driver configures the pin as a DIO output pin. */

/** !req SWS_Dio_00040 - The Dio_WriteChannelGroup shall not change the remaining channels of the port and channels which are configured as input.
 * No check if channels of port is set as input. */

/** @req SWS_Dio_00138 - Dio_WriteChannelGroup*/
/** @req SWS_Dio_00008 - The Dio_WriteChannelGroup function shall simultaneously set an adjoining subset of DIO channels (channel group). A bit value '0' sets the corresponding channel to physical STD_LOW, a bit value '1' sets the corresponding channel to physical STD_HIGH.*/
/** @req SWS_Dio_00056 - A channel group is a formal logical combination of several adjoining DIO channels within a DIO port.*/

/**
 * @brief This API will have the hardware specific implementation of writing a particular value to a channel group
 * This API first reads the port and then masks the read value with the level passed to this function. The masked value is then written back to the port.
 * @note Reentrant
 * @param[in] channelGroupIdPtr - Pointer to ChannelGroup
 * @param[in] level - Value to be written
 */
void Dio_Hw_WriteChannelGroup(const Dio_ChannelGroupType *channelGroupIdPtr,Dio_PortLevelType level){

	Dio_PortLevelType new_level;
	// Shift up and apply mask so that no unwanted bits are affected
	new_level = (level << channelGroupIdPtr->offset) & channelGroupIdPtr->mask;

    /** @req SWS_Dio_00090 - The Dio_WriteChannelGroup function shall do the masking of the channel group.*/
    // Read port and clear out masked bits
    Dio_PortLevelType portVal = Dio_Hw_ReadPort(channelGroupIdPtr->port) & (~channelGroupIdPtr->mask);

    /** @req SWS_Dio_00091 - The function Dio_WriteChannelGroup shall do the shifting so that the values written by the function are aligned to the LSB. */
    // Or in the upshifted masked level
    portVal |= new_level;

    /** @req SWS_Dio_00039 - The Dio_WriteChannelGroup function shall set a subset of the adjoining bits of a port (channel group) to a specified level.*/
    Dio_Hw_WritePort(channelGroupIdPtr->port, portVal);

}
/** @}*/
/** @}*/
