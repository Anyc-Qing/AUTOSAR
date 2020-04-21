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

/** @file Port_Hw_tms570.c
 *
 *  The Port_Hw_tms570 file will contain the HW specific implementation of the API's .
 */
 /** \addtogroup Mcal
  * @brief This is the major Mcal folder
  *
  *  This group is for the TMS570 Mcal
  *  @{
  */

 /** \addtogroup Port
  *  This is the TMS 570 Mcal Port Group
  *  @{
  */
/** General Port module requirements */
/** @req:TMS570 SWS_Port_00077 - If default error detection is enabled the Port Driver module shall check
 *  the function parameters in the order in which they are passed and skip further parameter checking if one check fails.*/

#include "Port.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#include "SchM_Port.h"
#include "Port_MemMap.h"
#include "Port_Hw_tms570.h"
#include "Port_Internal.h"

#if defined(CFG_TMS570LC43X)
static Port_SpiControlRegisterType * const Gio_Spi_Port_Base[] = {
        PORT_SPI1_GIO_BASE,
        PORT_SPI2_GIO_BASE,
        PORT_SPI3_GIO_BASE,
        PORT_SPI4_GIO_BASE,
        PORT_SPI5_GIO_BASE
    };
static uint32 * const Gio_Spi_Port_CGR[] = {
        SPI1GCR,
        SPI2GCR,
        SPI3GCR,
        SPI4GCR,
        SPI5GCR
    };
#endif
#ifdef CFG_TMS570LC43X
/*lint -e843 LINT:OTHER:HARDWARE DEFINITION*/
static uint32 * const PINMMR_Port_Base[] = {
    PINMMR0_BASE_ADDR,
    PINMMR1_BASE_ADDR,
    PINMMR2_BASE_ADDR,
    PINMMR3_BASE_ADDR,
    PINMMR4_BASE_ADDR,
    PINMMR5_BASE_ADDR,
    PINMMR6_BASE_ADDR,
    PINMMR7_BASE_ADDR,
    PINMMR8_BASE_ADDR,
    PINMMR9_BASE_ADDR,
    PINMMR10_BASE_ADDR,
    PINMMR11_BASE_ADDR,
    PINMMR12_BASE_ADDR,
    PINMMR13_BASE_ADDR,
    PINMMR14_BASE_ADDR,
    PINMMR15_BASE_ADDR,
    PINMMR16_BASE_ADDR,
    PINMMR17_BASE_ADDR,
    PINMMR18_BASE_ADDR,
    PINMMR19_BASE_ADDR,
    PINMMR20_BASE_ADDR,
    PINMMR21_BASE_ADDR,
    PINMMR22_BASE_ADDR,
    PINMMR23_BASE_ADDR,
    PINMMR24_BASE_ADDR,
    PINMMR25_BASE_ADDR,
    PINMMR26_BASE_ADDR,
    PINMMR27_BASE_ADDR,
    PINMMR28_BASE_ADDR,
    PINMMR29_BASE_ADDR,
    PINMMR30_BASE_ADDR,
    PINMMR31_BASE_ADDR,
    PINMMR32_BASE_ADDR,
    PINMMR33_BASE_ADDR,
    PINMMR34_BASE_ADDR,
    PINMMR35_BASE_ADDR,
    PINMMR36_BASE_ADDR,
    PINMMR37_BASE_ADDR,
    PINMMR80_BASE_ADDR,
    PINMMR81_BASE_ADDR,
    PINMMR82_BASE_ADDR,
    PINMMR83_BASE_ADDR,
    PINMMR84_BASE_ADDR,
    PINMMR85_BASE_ADDR,
    PINMMR86_BASE_ADDR,
    PINMMR87_BASE_ADDR,
    PINMMR88_BASE_ADDR,
    PINMMR89_BASE_ADDR,
    PINMMR90_BASE_ADDR,
    PINMMR91_BASE_ADDR,
    PINMMR92_BASE_ADDR,
    PINMMR93_BASE_ADDR,
    PINMMR94_BASE_ADDR,
    PINMMR95_BASE_ADDR,
    PINMMR96_BASE_ADDR,
    PINMMR97_BASE_ADDR,
    PINMMR98_BASE_ADDR,
    PINMMR99_BASE_ADDR
};
#elif defined(CFG_TMS570LS12X)
static uint32 * const PINMMR_Port_Base[] = {
/*lint -e843 LINT:OTHER:HARDWARE DEFINITION*/
    PINMMR0_BASE_ADDR,
    PINMMR1_BASE_ADDR,
    PINMMR2_BASE_ADDR,
    PINMMR3_BASE_ADDR,
    PINMMR4_BASE_ADDR,
    PINMMR5_BASE_ADDR,
    PINMMR6_BASE_ADDR,
    PINMMR7_BASE_ADDR,
    PINMMR8_BASE_ADDR,
    PINMMR9_BASE_ADDR,
    PINMMR10_BASE_ADDR,
    PINMMR11_BASE_ADDR,
    PINMMR12_BASE_ADDR,
    PINMMR13_BASE_ADDR,
    PINMMR14_BASE_ADDR,
    PINMMR15_BASE_ADDR,
    PINMMR16_BASE_ADDR,
    PINMMR17_BASE_ADDR,
    PINMMR18_BASE_ADDR,
    PINMMR19_BASE_ADDR,
    PINMMR20_BASE_ADDR,
    PINMMR21_BASE_ADDR,
    PINMMR22_BASE_ADDR,
    PINMMR23_BASE_ADDR,
    PINMMR24_BASE_ADDR,
    PINMMR25_BASE_ADDR,
    PINMMR26_BASE_ADDR,
    PINMMR27_BASE_ADDR,
    PINMMR28_BASE_ADDR,
    PINMMR29_BASE_ADDR,
    PINMMR30_BASE_ADDR,
    PINMMR31_BASE_ADDR,
    PINMMR32_BASE_ADDR,
    PINMMR33_BASE_ADDR,
    PINMMR34_BASE_ADDR,
    PINMMR35_BASE_ADDR,
    PINMMR36_BASE_ADDR,
    PINMMR37_BASE_ADDR,
    PINMMR38_BASE_ADDR,
    PINMMR39_BASE_ADDR,
    PINMMR40_BASE_ADDR,
    PINMMR41_BASE_ADDR,
    PINMMR42_BASE_ADDR,
    PINMMR43_BASE_ADDR,
    PINMMR44_BASE_ADDR,
    PINMMR45_BASE_ADDR,
    PINMMR46_BASE_ADDR,
    PINMMR47_BASE_ADDR
};
#endif


/* ----------------------------[private function prototypes]-----------------*/

static void Internal_RefreshGioPin(const ArcPort_PadConfigType *pin);
static void Internal_RefreshSpiGioPin(const ArcPort_PadConfigType *pin);
static void Internal_RefreshPin(const ArcPort_PadConfigType *pin);

/* ----------------------------[static variables ]---------------------------*/
/**
 * @brief   configPtr - Pointer that holds the Port Configuration data
 * configPtr will be used in Hw_SetPinDirection, Hw_RefreshPortDirection and Hw_SetPinMode functions.
 */
static const  Port_ConfigType * configPtr;/* lint !e843 STANDARDIZED_API*/

/* ----------------------------[static functions]-----------------*/

/**
 * @brief   Internal function (only for GIO enables pins)used to access the particular pin that is configured
 * @param[in]  pin - contains the configuration of the pin
 */
static void Internal_RefreshGioPin(const ArcPort_PadConfigType *pin) {
	Port_GioRegisterType *portReg;
	uint32 mask;
	uint8 multiplexOffset;
	uint32 multiplexBit;

#if defined(CFG_TMS570LS12X)
    portReg = Gio_Port_Base[pin->regOffset];
    mask = GET_PIN_MASK(pin->regBit);

    /* On the 144-pin package, some of GIO-enabled pins may have another
     * function by default. E.g. N2HET1 pins 23 and 25. So these need to
     * be multiplexed. Does not apply to GIOA and GIOB ports.
     */

    if (pin->regOffset > 1) { /* Functional port being used for GIO */
        multiplexOffset = pin->extraOffset;
        multiplexBit = pin->extraBit;
        if (multiplexOffset != PORT_FUNC_INVALID) {
            /* This is one of the pins that need to be multiplexed */
        	*(PINMMR_Port_Base[multiplexOffset]) &= ~((uint32)PORT_PIN_BASE << ((multiplexBit / PORT_PIN_MULTIPLEXBIT) * PORT_PIN_MULTIPLEXBIT));
            *(PINMMR_Port_Base[multiplexOffset]) |= ((uint32)PORT_PIN_PORT_BASE_BIT << multiplexBit);
        }
    }

#elif defined(CFG_TMS570LC43X)
    if(pin->config & PORT_PIN_N2HET2){
        portReg = PORT_GIO_3_BASE; // Register for N2HET2
    }else{
        portReg = Gio_Port_Base[pin->regOffset];
    }
    mask = GET_PIN_MASK(pin->regBit);

    /* Setting the PINMMR for all pins on lc43x even though it is the default that has been chosen. */
    multiplexOffset = pin->extraOffset;
    multiplexBit = pin->extraBit;

    if ((multiplexOffset > PINMMR_MIN_OFFSET) && (multiplexOffset != PORT_FUNC_INVALID) && (multiplexOffset != PORT_FUNC_USE_DEFAULT_SETTINGS))
    {
        /* There is a gap between 37 and 80 in the PINMMR registers. */
        multiplexOffset = PINMMR_MULTIPLEX_OFFSET + multiplexOffset - PINMMR_MAX_OFFSET;
    }

    ASSERT(multiplexOffset < sizeof(PINMMR_Port_Base));
    if ((multiplexOffset != PORT_FUNC_INVALID) && (multiplexOffset != PORT_FUNC_USE_DEFAULT_SETTINGS))
    {
    	/*lint --e{662} --e{661} LINT: ASSERT checks possible array out of bound */
        *(PINMMR_Port_Base[multiplexOffset]) &= ~(PORT_PIN_BASE << ((multiplexBit / PORT_PIN_MULTIPLEXBIT) * PORT_PIN_MULTIPLEXBIT));
        *(PINMMR_Port_Base[multiplexOffset]) |= (PORT_PIN_PORT_BASE_BIT << multiplexBit);
    }
#else
#error MCU not defined.
#endif
    /** @req SWS_Port_00055 - Pull up/down should be set before direction */
    /* Set pull up or down or nothing.*/
    if ((pin->config & PORT_PULL_NONE)== PORT_PULL_NONE) {
        portReg->PULDIS |= mask;

    } else {
        portReg->PULDIS &= ~mask;
        if ((pin->config & PORT_PULL_UP) == PORT_PULL_UP) {
            portReg->PSL |= mask;

        } else {
            portReg->PSL &= ~mask;
        }
    }

    /* Set open drain */
    if ((pin->config & PORT_ODE_ENABLE) == PORT_ODE_ENABLE) {
        portReg->PDR |= mask;
    } else {
        portReg->PDR &= ~mask;
    }

    /* Set the direction of the pin */
    if ((pin->config & PORT_DIR_OUT) == PORT_DIR_OUT) {
        portReg->DIR |= mask;

        /* Set Pin High/Low */
        if((pin->config & PORT_PIN_LEVEL_HIGH) == PORT_PIN_LEVEL_HIGH){
            portReg->DOUT |= mask;
        }else{
            portReg->DOUT &= ~mask;
        }

    }else{
        portReg->DIR &= ~mask;
    }
}
/**
 * @brief  Internal function (only for SPI5 pins when configured as GIO)used to access the particular pin that is configured
 * @param[in]  pin - contains the configuration of the pin
 */
static void Internal_RefreshSpiGioPin(const ArcPort_PadConfigType * pin) {
	Port_SpiControlRegisterType *portReg;
	uint32 bit;

#if defined(CFG_TMS570LS12X) || defined (CFG_TMS570LS1114)

	/* lint -e923 MISRA:HARDWARE ACCESS ::[MISRA 2012 Rule 11.4, required] */
    *(SPI5GCR) = 0x1u; /* bring SPI module out of reset */
    portReg = PORT_SPI5_GIO_BASE;

    bit = pin->regBit;

#elif defined(CFG_TMS570LC43X)
    /* Setting the PINMMR for all pins on lc43x even though it is the default that has been chosen. */
    uint8  multiplexOffset = pin->extraOffset;
    uint32 multiplexBit = pin->extraBit;

    if ((multiplexOffset > PINMMR_MIN_OFFSET) && (multiplexOffset != PORT_FUNC_INVALID) &&
            (multiplexOffset != PORT_FUNC_USE_DEFAULT_SETTINGS)){
    	/* There is a gap between 37 and 80 in the PINMMR registers. */
        multiplexOffset = PINMMR_MULTIPLEX_OFFSET + multiplexOffset - PINMMR_MAX_OFFSET;
    }

    ASSERT(multiplexOffset < sizeof(PINMMR_Port_Base));
    if ((multiplexOffset != PORT_FUNC_INVALID) && (multiplexOffset != PORT_FUNC_USE_DEFAULT_SETTINGS))
    {
    	/*lint --e{662} --e{661} LINT: ASSERT checks possible array out of bound */
        *(PINMMR_Port_Base[multiplexOffset]) &= ~(PORT_PIN_BASE << ((multiplexBit / PORT_PIN_MULTIPLEXBIT) * PORT_PIN_MULTIPLEXBIT));
        *(PINMMR_Port_Base[multiplexOffset]) |= (1u << multiplexBit);
    }

    uint32 Spi_port_mask = (((pin->config) >> PORT_PIN_DIO_SPIX_SHIFT) & PORT_PIN_DIO_SPIX_MASK);
    uint32_t *portCGR = Gio_Spi_Port_CGR[Spi_port_mask];
    *(portCGR) = 0x1u; /* bring SPI module out of reset */
    portReg = Gio_Spi_Port_Base[Spi_port_mask];

    bit = pin->regBit;
    /* 0 => GIO pin
     * 1 => SPI pin
     */
    portReg->PC0 &= ~(PORT_PIN_PORT_BASE_BIT << bit);
#endif

    /** @req SWS_Port_00055 - Pull up/down should be set before direction */

    /* Set pull up or down or nothing. */
    if ((pin->config & PORT_PULL_NONE) == PORT_PULL_NONE) {
    	portReg->PC7 |= ((uint32)PORT_PIN_PORT_BASE_BIT << bit); /*PORT_PIN_PORT_BASE_BIT - 1u*/

    } else {
    	portReg->PC7 &= ~((uint32)PORT_PIN_PORT_BASE_BIT  << bit); /*PORT_PIN_PORT_BASE_BIT - 1u*/
        if ((pin->config & PORT_PULL_UP) == PORT_PULL_UP ) {
            portReg->PC8 |= ((uint32)PORT_PIN_PORT_BASE_BIT  << bit);/*PORT_PIN_PORT_BASE_BIT - 1u*/
        } else {
            portReg->PC8 &= ~((uint32)PORT_PIN_PORT_BASE_BIT  << bit);/*PORT_PIN_PORT_BASE_BIT - 1u*/
        }
    }

    /* Set pin direction */
    if ((pin->config & PORT_DIR_OUT) == PORT_DIR_OUT) {
        portReg->PC1 |= ((uint32)PORT_PIN_PORT_BASE_BIT  << bit);/*PORT_PIN_PORT_BASE_BIT - 1u*/

        /* Set open drain */
        if ((pin->config & PORT_ODE_ENABLE)== PORT_ODE_ENABLE) {
            portReg->PC6 |= ((uint32)PORT_PIN_PORT_BASE_BIT  << bit);/*PORT_PIN_PORT_BASE_BIT - 1u*/
        } else {
            portReg->PC6 &= ~((uint32)PORT_PIN_PORT_BASE_BIT  << bit);/*PORT_PIN_PORT_BASE_BIT - 1u*/
        }

        /* Set Pin High/Low */
        if((pin->config & PORT_PIN_LEVEL_HIGH) == PORT_PIN_LEVEL_HIGH){
            portReg->PC3 |= ((uint32)PORT_PIN_PORT_BASE_BIT  << bit);/*PORT_PIN_PORT_BASE_BIT - 1u*/
        }else{
            portReg->PC3 &= ~((uint32)PORT_PIN_PORT_BASE_BIT  << bit);/*PORT_PIN_PORT_BASE_BIT - 1u*/
        }

    } else {
        portReg->PC1 &= ~((uint32)PORT_PIN_PORT_BASE_BIT  << bit);/*PORT_PIN_PORT_BASE_BIT - 1u*/
    }
}

/**
 * @brief  Internal function used to access the particular pin that is configured (only for ADEVT1 pin no.86 when configured as GIO)
 * @param[in]  pin - contains the configuration of the pin
 */
static void  Internal_RefreshAdcGioPin(const ArcPort_PadConfigType *pin){
	Adc_GioRegisterType *AdcportReg;
	AdcportReg = ADEVT_GIO_BASE;


	/* To set PULL_UP or PULL_DOWN on this pin :
	 * 1. This pin should be configured as INPUT
	 * 2. PDIS register should be '0'
	 * */

	/** @req SWS_Port_00055 - Pull up/down should be set before direction */

	/* Set pull up or down or nothing.*/
	if ((pin->config & PORT_PULL_NONE)== PORT_PULL_NONE) {
		/* Pull control Disable - enables or disables the pull control on the ADEVT pin if it is configured to be an input pin. */
		AdcportReg->PULDIS |= (uint32)PORT_PIN_ADEVT_VALUE;
	} else {
		if ((pin->config & PORT_PULL_UP) == PORT_PULL_UP) {
			/* Pull control Select - selects a pull-down or pullup on the ADEVT pin if it is configured to be an input pin.
			 * If the Pin is configured as OUT , there will be no effect on this register even PULL_UP value set in the configuration
			 * Refer table 22-5 in the technical reference manual (Literature Number: SPNU515B)*/
			AdcportReg->PSL |= (uint32)PORT_PIN_ADEVT_VALUE;
		}
	}

	/* Check if the Direction of the pin OUT */
	if ((pin->config & PORT_DIR_OUT) == PORT_DIR_OUT){

		/* Set open drain */
		if ((pin->config & PORT_ODE_ENABLE) == PORT_ODE_ENABLE) {
			AdcportReg->PDR |= (uint32)PORT_PIN_ADEVT_VALUE;
		}else{
			AdcportReg->PDR &= ~(uint32)PORT_PIN_ADEVT_VALUE;
		}

		/* Set the direction of the pin to OUT */
		AdcportReg->DIR |= (uint32)PORT_PIN_ADEVT_VALUE;

		/* Set Pin High/Low */
		if((pin->config & PORT_PIN_LEVEL_HIGH) == PORT_PIN_LEVEL_HIGH){
			AdcportReg->DOUT |= (uint32)PORT_PIN_ADEVT_VALUE;
		}
	}
}

/**
 * @brief   Internal function that calls either Internal_RefreshGioPin or Internal_RefreshSpiGioPin based on whether it is a GIO or SPI5 pin.
 * @param[in]  pin - contains the configuration of the pin
 * @details If the Mode of the pin is not DIO or SPI5 then the offset values are directly written to the multiplexer register.
 */
static void Internal_RefreshPin(const ArcPort_PadConfigType *pin){
    /** @req SWS_Port_00214 - If the register can affect several hardware modules and if it is an I/O register it shall be initialised by this PORT driver*/
    if (pin->mode == PORT_PIN_MODE_DIO) {
        Internal_RefreshGioPin(pin);
    } else if (pin->mode == PORT_PIN_MODE_DIO_SPI) {
        Internal_RefreshSpiGioPin(pin);
    }else if (pin->mode == PORT_PIN_MODE_DIO_ADC) {
    	Internal_RefreshAdcGioPin(pin);
    }
    else {

#if defined(CFG_TMS570LC43X)
        if (pin->regOffset != PORT_FUNC_USE_DEFAULT_SETTINGS)
        {
#if defined(PORT_PIN_MODE_SPI)
            if(pin->mode == PORT_PIN_MODE_SPI){
                /* For SPI the PINMMR mux is stored in the extra variables. */
                *(PINMMR_Port_Base[pin->extraOffset]) &= ~(PORT_PIN_BASE << ((pin->extraBit / PORT_PIN_MULTIPLEXBIT) * PORT_PIN_MULTIPLEXBIT));
                *(PINMMR_Port_Base[pin->extraOffset]) |= (PORT_PIN_PORT_BASE_BIT << pin->extraBit);
            }else
#endif
            {
                *(PINMMR_Port_Base[pin->regOffset]) &= ~(PORT_PIN_BASE << ((pin->regBit / PORT_PIN_MULTIPLEXBIT) * PORT_PIN_MULTIPLEXBIT));
                *(PINMMR_Port_Base[pin->regOffset]) |= (PORT_PIN_PORT_BASE_BIT << pin->regBit);
            }

        }

        /* The SPI pins will not be set up as SPI pins here, the SPI driver
         * will do it. It is not allowed to use SPI pins as DIOs if the unit
         * is used as SPI as well (meaning that even pins that are not used by the SPI
         * unit, for example an unused chip select, cannot be used as DIO). */

#elif defined(CFG_TMS570LS12X)
        *(PINMMR_Port_Base[pin->regOffset]) &= ~((uint32)PORT_PIN_BASE << ((pin->regBit / PORT_PIN_MULTIPLEXBIT) * PORT_PIN_MULTIPLEXBIT)); /* PORT_PIN_BASE - 0xFFu,PORT_PIN_MULTIPLEXBIT - 8u */
        *(PINMMR_Port_Base[pin->regOffset]) |= ((uint32)PORT_PIN_PORT_BASE_BIT << pin->regBit); /*PORT_PIN_PORT_BASE_BIT - 1u*/

#else
#error MCU not defined.
#endif
    }
}
/**
 * @brief  Function that contains the hardware specific implementation of Init function (TMS570)
 * @param[in] _configPtr - Pointer that holds the configuration parameters of all the pins
 */
void Port_Hw_Init (const Port_ConfigType * _configPtr){

	/*lint -e975 MISRA:FALSE POSITIVE:Pragma for Bullseyecoverage:[MISRA 2004 Rule 3.4, required] */
	/* @CODECOV:REDUNDANT_PARAMETER_VALIDATION: Already validated by Port_Init() */
	if (_configPtr != NULL_PTR){

		configPtr = _configPtr;

		/* GIO control register is SET - required to write the multiplexer registers */
		gioREG->GCR0 = 1;

		/* Magic value written to register to enable writing the multiplexer registers */

		/* lint -e923 MISRA:HARDWARE ACCESS ::[MISRA 2012 Rule 11.4, required] */
		 *((uint32*)PORT_IOMM_KICK0) = PORT_IOMM_KICK0_MAGIC;

		 /* lint -e923 MISRA:HARDWARE ACCESS ::[MISRA 2012 Rule 11.4, required] */
		  *((uint32*)PORT_IOMM_KICK1) = PORT_IOMM_KICK1_MAGIC;


		 /** @req SWS_Port_00041 - The function Port_Init shall initialize ALL ports and port pins with the configuration set pointed to by the parameter ConfigPtr. */
		 for (uint16 i = 0; i < PORT_NR_PINS; i++){
			 const ArcPort_PadConfigType * pin = &_configPtr->padConfig[i];
		     Internal_RefreshPin(pin);
		 }

		 /* lint -e923 MISRA:HARDWARE ACCESS ::[MISRA 2012 Rule 11.4, required] */
		 *((uint32*)PORT_IOMM_KICK0) = PORT_IOMM_KICK0_LOCK;
	}else{

#if PORT_DEV_ERROR_DETECT == STD_ON
			(void)Det_ReportError(PORT_MODULE_ID, 0,PORT_INIT_ID,PORT_E_INIT_FAILED);
#endif
	}
}

/**
 * @brief  Function that contains the hardware specific implementation of Set Pin Direction function (TMS570)
 *         This API is used to change the direction of the pin during run time.
 * @param[in]  pinNr - Pin Number
 * @param[in]  direction - Direction of the pin
 */
void Port_Hw_SetPinDirection(Port_PinType pinNr, Port_PinDirectionType direction){
    const ArcPort_PadConfigType * pin= &configPtr->padConfig[pinNr];

    /* AdcportReg is pointer that will point to the ADEVT1 registers.
	 * ADEVT_GIO_BASE - 0xFFF7C0FCu*/
    Adc_GioRegisterType *AdcportReg = ADEVT_GIO_BASE;

    Port_GioRegisterType *portReg = Gio_Port_Base[pin->regOffset];

    /* Get the mask value using the regbit of the pin */
    uint32 mask = GET_PIN_MASK(pin->regBit);

    /** @req SWS_Port_00063 - The function Port_SetPinDirection shall set the port pin direction during runtime.*/
    /** @req SWS_Port_00138 - The level of the pin is not changed while changing the direction of the pin
     * Only the DIR register in portReg structure is modified*/
    if (pin->mode == PORT_PIN_MODE_DIO_ADC) {

    	if (direction == PORT_PIN_IN){
    		/* DIR - Direction register; 32 bit register.
    		 * 31 - 1 => Reserved register. Writing to this register doesnot have any impact
    		 * 0      => Determined the direction of the ADEVT1 pin */
    		AdcportReg->DIR &= ~((uint32)PORT_PIN_ADEVT_VALUE);
  	    }else{
  	    	AdcportReg->DIR |= (uint32)PORT_PIN_ADEVT_VALUE;
  	    }
    }else{
    	if (direction == PORT_PIN_IN){
    		portReg->DIR &= ~mask;
    	}else{
    		portReg->DIR |= mask;
    	}
    }
}
/**
 * @brief  Function that contains the hardware specific implementation of Refresh Port Direction function (TMS570)
 *         This API will further call the internal function - Internal_RefreshPin.
 */
void Port_Hw_RefreshPortDirection(void){
	const ArcPort_PadConfigType * pin;
	Port_SpiControlRegisterType *portReg_spi;
	Adc_GioRegisterType *AdcportReg;
	uint32 mask;
	uint32 bit;
    for (uint16 i = 0; i < PORT_NR_PINS; i++){
    	pin= &configPtr->padConfig[i];
    	/** @req SWS_Port_00061 - The function Port_RefreshPortDirection shall exclude those port pins from refreshing that are configured as ‘pin direction changeable during runtime */
    	if (STD_OFF == pin -> pinDirectionChangeable){
    		Port_GioRegisterType *portReg = Gio_Port_Base[pin->regOffset];
        	mask = GET_PIN_MASK(pin->regBit);
        	if (pin->mode == PORT_PIN_MODE_DIO_SPI){
        		*(SPI5GCR) = 0x1u; /* bring SPI module out of reset */
        		portReg_spi = PORT_SPI5_GIO_BASE;

        		bit = pin->regBit;
        		if ((pin->config & PORT_DIR_OUT) == PORT_DIR_OUT){
        			portReg_spi->PC1 |= ((uint32)PORT_PIN_PORT_BASE_BIT << bit);
        		}else{
        		    portReg_spi->PC1 &= ~((uint32)PORT_PIN_PORT_BASE_BIT << bit);
        		}
        	 }else if (pin->mode == PORT_PIN_MODE_DIO_ADC){
        		 /* AdcportReg is pointer that will point to the ADEVT1 registers.
        		 * ADEVT_GIO_BASE - 0xFFF7C0FCu*/

        		 AdcportReg = ADEVT_GIO_BASE;

        		if ((pin->config & PORT_DIR_OUT) == PORT_DIR_OUT){
            		/* DIR - Direction register; 32 bit register.
            		 * 31 - 1 => Reserved register. Writing to this register doesnot have any impact
            		 * 0      => Determined the direction of the ADEVT1 pin */
        			AdcportReg->DIR |= (uint32)PORT_PIN_ADEVT_VALUE;
        		}else{
        			AdcportReg->DIR &= ~((uint32)PORT_PIN_ADEVT_VALUE);
    			}
        	 }else if (pin->mode == PORT_PIN_MODE_DIO){
            	 if ((pin->config & PORT_DIR_OUT) == PORT_DIR_OUT){
            		 portReg->DIR |= mask;
        		 }else{
        			 portReg->DIR &= ~mask;
        		 }
        	 }else{
        		*(PINMMR_Port_Base[pin->regOffset]) &= ~((uint32)PORT_PIN_BASE << ((pin->regBit / PORT_PIN_MULTIPLEXBIT) * PORT_PIN_MULTIPLEXBIT)); /*PORT_PIN_BASE - 0xFFu, PORT_PIN_MULTIPLEXBIT - 8u*/
        		*(PINMMR_Port_Base[pin->regOffset]) |= ((uint32)PORT_PIN_PORT_BASE_BIT << pin->regBit);/*PORT_PIN_PORT_BASE_BIT - 1u*/
        	 }
    	}
    }
}
/* !!!! Port_Hw_SetPinMode - For safety reason the mode of the pin should not be changed during run time.Hence this function is disabled for the user.(TMS570) !!!*/
#if (PORT_SET_PIN_MODE_API == STD_ON)
/**
 * @brief  Function that contains the hardware specific implementation of Set Pin Mode function (TMS570)
 *         This API will change the mode of the pin during run time. For safety reason the mode of the pin should not be changed during run time.
 *         Hence this function is disabled for the user.
 * @param[in] Pin - Pin for which the mode should be changed
 * @param[in] Mode - Mode to be changed
 */
void Port_Hw_SetPinMode(Port_PinType Pin, Port_PinModeType Mode){
    /* GIO control register is SET - required to write the multiplexer registers */
    gioREG->GCR0 = 1;

    /* @req SWS_Port_00128 - The function Port_SetPinMode shall be re-entrant if accessing different pins, independent of a port.*/
    /* @req SWS_Port_00125  - The function Port_SetPinMode shall set the port pin mode of the referenced pin during runtime.*/
    /* Magic value written to register to enable writing the multiplexer registers */
    SchM_Enter_Port_EA_0(); // Disable interrupts

    /* lint -e923 MISRA:HARDWARE ACCESS ::[MISRA 2012 Rule 11.4, required] */
    *((uint32*)PORT_IOMM_KICK0) = PORT_IOMM_KICK0_MAGIC;
    *((uint32*)PORT_IOMM_KICK1) = PORT_IOMM_KICK1_MAGIC;

    const ArcPort_PadConfigType * pin = &configPtr->padConfig[Pin];
    *(PINMMR_Port_Base[pin->regOffset]) = Mode;

    *((uint32*)PORT_IOMM_KICK0) = PORT_IOMM_KICK0_LOCK;
    SchM_Exit_Port_EA_0();        // Enable interrupts
}
#endif
/** @}*/
/** @}*/
