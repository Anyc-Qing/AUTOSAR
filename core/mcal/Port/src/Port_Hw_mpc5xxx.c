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

/** @tagSettings DEFAULT_ARCHITECTURE= MPC5607B|MPC5645S|MPC5646B|MPC5748G|MPC5747C|MPC5744P|MPC5777C */
/** @reqSettings DEFAULT_SPECIFICATION_REVISION=4.3.0  */

/** @file Port_Hw_MPC5xxx.c
 *
 *  The Port_Hw_MPC5xxx file will contain the HW specific implementation of the API's .
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

/* General Port module requirements */
/* @req SWS_Port_00004 Port shall be able to configure each port and pin */
/* @req SWS_Port_00006 Symbolic names - implemented in the generator/tool */
/* @req SWS_Port_00077 - If default error detection is enabled the Port Driver module shall check the function parameters in the order in which they are passed and skip further parameter checking if one check fails.*/

#include "Port.h"
#include "mpc55xx.h"
#include "SchM_Port.h"
#if defined(USE_DET)
#include "Det.h"
#endif
#include "Port_Internal.h"
#include "arc_assert.h"

/* ------------------------------[static variables ]----------------------------*/
/**
 * @brief   configPtr - Pointer that holds the Port Configuration data
 * configPtr will be used in Hw_SetPinDirection, Hw_RefreshPortDirection and Hw_SetPinMode functions.
 */
static const Port_ConfigType * Port_configPtr;

/* ------------------------------[static function  ]----------------------------*/
/* ------------------------------[private variables]----------------------------*/
#if defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
#define ADDRESS_OFFSET_IMCR_TO_MSCR     512u /* Address range MSCR[264] + Reserved_32bit[248] + IMCR[512]. MSCR[512] corresponds to IMCR[0] */
#endif

#define PCR_RESET_VALUE 0uL

/* ------------------------------[private function ]----------------------------*/
/* ------------------------------[Public functions ]----------------------------*/

#if defined (CFG_MPC5777C)
/**
 * @brief Set the IMUX register for input multiplexor
 * @param imuxReg Register number
 * @param val Multiplexor selection
 */
void setImuxRegister(uint16 imuxReg, uint32 val);
#endif


/*lint -e{923} LINT:HARDWARE_ACCESS : cast from unsigned long to pointer , [MISRA 2012 Rule 11.6, required]*/
void Port_Hw_Init(const Port_ConfigType *configType) {

    /* @req SWS_Port_00043 - The function Port_Init shall avoid glitches and spikes on the affected port pins.*/
    /* @req SWS_Port_00214 - All I/O registers are initialized by port */
    /* @req SWS_Port_00215 - If the register can affect several hardware modules and if it is not an I/O register, it shall be initialised by the MCU driver.*/
    /* @req SWS_Port_00217 - Only I/O registers are initialized by port */
    /* @req SWS_Port_00218 - Only I/O registers are initialized by port */
    /* @req SWS_Port_00042 - The function Port_Init shall initialize all configured resources.*/
    /* @req SWS_Port_00041 - The function Port_Init shall initialize ALL ports and port pins with the configuration set pointed to by the parameter ConfigPtr. */

    /* Copy config to register areas */
    /* @req SWS_Port_00055 - Pull up/down should be set before direction */
    for (uint32 i = 0u; configType->outConfig[i].reg != PORT_INVALID_REG; i++) {

        SIU.GPDO[configType->outConfig[i].reg].R =
                configType->outConfig[i].config;
    }

#if defined(CFG_MPC5744P) || defined(CFG_MPC560X) || defined(CFG_MPC5645S) || defined(CFG_MPC5643L) || defined(CFG_SPC56XL70) || defined(CFG_MPC5777M) || defined(CFG_MPC5777C) || defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)
    for(uint32 i = 0u; configType->inputSelectConfig[i].reg != PORT_INVALID_REG; i++) {

        /* IMCR register must be written as a 32bit integer, see reference manual for e.g. mpc5744P */
#if defined(CFG_MPC5777M)
        uint32 offset = sizeof(SIU.PCR)/sizeof(SIU.PCR[0u]);
        SIU.PSMI[configType->inputSelectConfig[i].reg - offset].R = (uint32)configType->inputSelectConfig[i].config;
#elif defined (CFG_MPC5777C)
        setImuxRegister(configType->inputSelectConfig[i].reg, configType->inputSelectConfig[i].config);
#elif defined(CFG_MPC5748G) || defined(CFG_MPC5747C) || defined(CFG_MPC5746C)

        uint32 offset = ADDRESS_OFFSET_IMCR_TO_MSCR;
        SIU.PSMI[configType->inputSelectConfig[i].reg - offset].R = (uint32)configType->inputSelectConfig[i].config;
#else
        SIU.PSMI[configType->inputSelectConfig[i].reg].R = (uint32)configType->inputSelectConfig[i].config;
#endif
    }
#endif


    /** Reset all the PCR (or sometimes called as MSCR) registers to zero.
     * This is because few port pins have reset value other than zero ex. weak pull up enabled by default
     */
    for (uint32 i = 0u; configType->padConfig[i].reg != PORT_INVALID_REG; i++) {

        SIU.PCR[configType->padConfig[i].reg].R = PCR_RESET_VALUE;
    }

    for (uint32 i = 0u; configType->padConfig[i].reg != PORT_INVALID_REG; i++) {
        /* MSCR register must be written as a 32bit integer, see reference manual for e.g. mpc5744P */
        /* Some port pins which are bi-directional  ex. Ethernet MDIO pins need to be
         * configured twice once as output and other time as input. This configuration helps configuring
         * both PCR (or sometimes called as MSCR) for output multiplexor selection and IMCR for input multiplexor selection.
         */
        SIU.PCR[configType->padConfig[i].reg].R |= configType->padConfig[i].config;

    }

    Port_configPtr = configType;
}

#if ( PORT_SET_PIN_DIRECTION_API == STD_ON )
void Port_Hw_SetPinDirection(Port_PinType pin, Port_PinDirectionType direction) {

    /* @req SWS_Port_00138 - The level of the pin is not changed while changing the direction of the pin
     * Only the DIR register in portReg structure is modified*/

    SchM_Enter_Port_EA_0(); /* Disable interrupts */
    /* @req SWS_Port_00063  - The function Port_SetPinDirection shall set the port pin direction during runtime.*/
    /*lint -e{923} LINT:HARDWARE_ACCESS : cast from unsigned long to pointer , [MISRA 2012 Rule 11.6, required]*/
    if (direction == PORT_PIN_IN) {
        SIU.PCR[Port_configPtr->padConfig[pin].reg].B.IBE = 1u;
#if defined(CFG_MPC5777M)
        SIU.PCR[Port_configPtr->padConfig[pin].reg].B.ODC = 0u; /* Output disabled */
#else
        SIU.PCR[Port_configPtr->padConfig[pin].reg].B.OBE = 0u;
#endif
    }
    else {
        SIU.PCR[Port_configPtr->padConfig[pin].reg].B.IBE = 1u; /* Always readback */
#if defined(CFG_MPC5777M)
        if( Port_configPtr->padConfig[pin].config & ODC_MASK ) {
            /* Configured as output */
            SIU.PCR[Port_configPtr->padConfig[pin].reg].B.ODC = ((Port_configPtr->padConfig[pin].config & ODC_MASK)>>ODC_OFFSET);
        }
        else {
            SIU.PCR[Port_configPtr->padConfig[pin].reg].B.ODC = PORT_OUTPUT_PUSHPULL;
        }
#else
        SIU.PCR[Port_configPtr->padConfig[pin].reg].B.OBE = 1u;
#endif
    }

    SchM_Exit_Port_EA_0(); // Enable interrupts
}
#endif

void Port_Hw_RefreshPortDirection(void) {

    uint32 bitMask = PORT_DIRECTION_CFG_MASK;
    SchM_Enter_Port_EA_0();    // Disable interrupts

    /* @req SWS_Port_00061 - The function Port_RefreshPortDirection shall exclude those port pins from refreshing that are configured as ‘pin direction changeable during runtime */
    /* @req SWS_Port_00066 */
    for (uint32 i = 0u; Port_configPtr->padConfig[i].reg != PORT_INVALID_REG; i++) {
        if (FALSE == Port_configPtr->padConfig[i].pinDirectionChangeable) {
            /*lint -e{923} LINT:HARDWARE_ACCESS : cast from unsigned long to pointer , [MISRA 2012 Rule 11.6, required]*/
            SIU.PCR[Port_configPtr->padConfig[i].reg].R =
                    (SIU.PCR[Port_configPtr->padConfig[i].reg].R & ~bitMask) | // Clear direction bits
                            (Port_configPtr->padConfig[i].config & bitMask); // Set the direction bit from config
        }
    }

    SchM_Exit_Port_EA_0(); // Enable interrupts
}

#if (PORT_SET_PIN_MODE_API == STD_ON)
void Port_Hw_SetPinMode(Port_PinType Pin, Port_PinModeType Mode) {
    /* @req SWS_Port_00128 - The function Port_SetPinMode shall be re-entrant if accessing different pins, independent of a port.*/
    /* @req SWS_Port_00125  - The function Port_SetPinMode shall set the port pin mode of the referenced pin during runtime.*/

    SchM_Enter_Port_EA_0(); // Disable interrupts

    /**The pad configuration registers (SIU_PCR) in the SIU allow software control of the static electrical
     * characteristics of external pins. The PCRs can select the multiplexed function of a pin, selection of pullup
     * or pulldown devices, the slew rate of I/O signals, open drain mode for output pins, and hysteresis.
     */
    /*lint -e{923} LINT:HARDWARE_ACCESS : cast from unsigned long to pointer , [MISRA 2012 Rule 11.6, required]*/
    SIU.PCR[Port_configPtr->padConfig[Pin].reg].R = Mode; // Put the selected mode to the PCR register
    SchM_Exit_Port_EA_0();        // Enable interrupts
}
#endif
#if defined (CFG_MPC5777C)
/**
 * @brief Set the IMUX register for input multiplexor
 * @param imuxReg Register number
 * @param val Multiplexor selection
 */
void setImuxRegister(uint16 imuxReg, uint32 val) {

    /*lint -e923 MISRA:HARDWARE:Cast from unsigned int to pointer:[MISRA 2012 Rule 11.6, required] */
    switch (imuxReg) {
        case 0u:
        SIU_IMUX0 |= val;
        break;
        case 1u:
        SIU_IMUX1 |= val;
        break;
        case 2u:
        SIU_IMUX2 |= val;
        break;
        case 3u:
        SIU_IMUX3 |= val;
        break;
        case 4u:
        SIU_IMUX4 |= val;
        break;
        case 5u:
        SIU_IMUX5 |= val;
        break;
        case 7u:
        SIU_IMUX7 |= val;
        break;
        case 10u:
        SIU_IMUX10 |= val;
        break;
        case 12u:
        SIU_IMUX12 |= val;
        break;
        default:
        ASSERT(0u);
        break;
    }

}

#endif

