
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

/* Generator version: 7.0.0
 * AUTOSAR version:   4.3.0
 */

#include "Port.h"




static const ArcPort_InputSelectConfigType PortInputSelectConfigData[] = {
#ifdef INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_19
	INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_19, /* PCR	19	: PORT_PIN_MODE_LIN */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_22
	INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_22, /* PCR	22	: PORT_PIN_MODE_SPI */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_28
	INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_28, /* PCR	28	: PORT_PIN_MODE_LIN */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_ICU_PAD_143
	INPUT_SELECT_PORT_PIN_MODE_ICU_PAD_143, /* PCR	143	: PORT_PIN_MODE_ICU */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_ICU_PAD_144
	INPUT_SELECT_PORT_PIN_MODE_ICU_PAD_144, /* PCR	144	: PORT_PIN_MODE_ICU */
#endif
	{PORT_INVALID_REG, 0u} /* end marker */
};

/*lint -save -e835 -e9027 -e845 FALSE POSITIVE Zero given as right argument to | is okay (Generated code and depending on the defines this is true for some defines) */ 
static const ArcPort_PadConfigType PortPadConfigData[] = {
	{18, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(18, PORT_PIN_MODE_LIN, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	18	: PORT_PIN_MODE_LIN */
	{19, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(19, PORT_PIN_MODE_LIN, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	19	: PORT_PIN_MODE_LIN */
	{20, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(20, PORT_PIN_MODE_SPI, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	20	: PORT_PIN_MODE_SPI */
	{21, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(21, PORT_PIN_MODE_SPI, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	21	: PORT_PIN_MODE_SPI */
	{22, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(22, PORT_PIN_MODE_SPI, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	22	: PORT_PIN_MODE_SPI */
	{28, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(28, PORT_PIN_MODE_LIN, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	28	: PORT_PIN_MODE_LIN */
	{29, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(29, PORT_PIN_MODE_LIN, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	29	: PORT_PIN_MODE_LIN */
	{38, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(38, PORT_PIN_MODE_ADC, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_UP  )}, /* PCR	38	: PORT_PIN_MODE_ADC */
	{39, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(39, PORT_PIN_MODE_ADC, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_UP  )}, /* PCR	39	: PORT_PIN_MODE_ADC */
	{43, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(43, PORT_PIN_MODE_SPI, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	43	: PORT_PIN_MODE_SPI */
	{62, STD_ON, STD_ON, (PIN_FUNCTION_REG(62, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MIN | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	62	: PORT_PIN_MODE_DIO */
	{63, STD_ON, STD_ON, (PIN_FUNCTION_REG(63, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MIN | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	63	: PORT_PIN_MODE_DIO */
	{70, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(70, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	70	: PORT_PIN_MODE_DIO */
	{121, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(121, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	121	: PORT_PIN_MODE_DIO */
	{143, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(143, PORT_PIN_MODE_ICU, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	143	: PORT_PIN_MODE_ICU */
	{144, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(144, PORT_PIN_MODE_ICU, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	144	: PORT_PIN_MODE_ICU */
	{150, STD_ON, STD_ON, (PIN_FUNCTION_REG(150, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MIN | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	150	: PORT_PIN_MODE_DIO */
	{PORT_INVALID_REG, STD_OFF, STD_OFF, 0u} /* end marker */
};
/*lint -restore */


static const ArcPort_OutConfigType PortOutConfigData[] = {
	{62u, PORT_GPDO_RESET}, /* GPDO	62 */
	{63u, PORT_GPDO_RESET}, /* GPDO	63 */
	{70u, PORT_GPDO_RESET}, /* GPDO	70 */
	{121u, PORT_GPDO_RESET}, /* GPDO	121 */
	{150u, PORT_GPDO_HIGH}, /* GPDO	150 */
	{PORT_INVALID_REG, 0u} /* end marker */
};



const Port_ConfigType PortConfigData =
{
  .padConfig = PortPadConfigData,
  .outConfig = PortOutConfigData,
  .inputSelectConfig = PortInputSelectConfigData
};


