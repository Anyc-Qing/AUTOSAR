
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
#ifdef INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_12
	INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_12, /* PCR	12	: PORT_PIN_MODE_SPI */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_17
	INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_17, /* PCR	17	: PORT_PIN_MODE_CAN */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_43
	INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_43, /* PCR	43	: PORT_PIN_MODE_CAN */
#endif
#ifdef INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_112
	INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_112, /* PCR	112	: PORT_PIN_MODE_SPI */
#endif
	{PORT_INVALID_REG, 0u} /* end marker */
};

/*lint -save -e835 -e9027 -e845 FALSE POSITIVE Zero given as right argument to | is okay (Generated code and depending on the defines this is true for some defines) */ 
static const ArcPort_PadConfigType PortPadConfigData[] = {
	{12, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(12, PORT_PIN_MODE_SPI, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	12	: PORT_PIN_MODE_SPI */
	{13, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(13, PORT_PIN_MODE_SPI, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	13	: PORT_PIN_MODE_SPI */
	{14, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(14, PORT_PIN_MODE_OTHER, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	14	: PORT_PIN_MODE_OTHER */
	{16, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(16, PORT_PIN_MODE_CAN, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	16	: PORT_PIN_MODE_CAN */
	{17, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(17, PORT_PIN_MODE_CAN, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	17	: PORT_PIN_MODE_CAN */
	{24, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(24, PORT_PIN_MODE_ADC, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MIN | PORT_PULL_NONE  )}, /* PCR	24	: PORT_PIN_MODE_ADC */
	{28, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(28, PORT_PIN_MODE_SPI, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	28	: PORT_PIN_MODE_SPI */
	{42, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(42, PORT_PIN_MODE_CAN, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	42	: PORT_PIN_MODE_CAN */
	{43, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(43, PORT_PIN_MODE_CAN, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	43	: PORT_PIN_MODE_CAN */
	{64, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(64, PORT_PIN_MODE_DIO, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	64	: PORT_PIN_MODE_DIO */
	{65, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(65, PORT_PIN_MODE_DIO, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_NONE  )}, /* PCR	65	: PORT_PIN_MODE_DIO */
	{68, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(68, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	68	: PORT_PIN_MODE_DIO */
	{69, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(69, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	69	: PORT_PIN_MODE_DIO */
	{70, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(70, PORT_PIN_MODE_OTHER, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	70	: PORT_PIN_MODE_OTHER */
	{112, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(112, PORT_PIN_MODE_SPI, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  )}, /* PCR	112	: PORT_PIN_MODE_SPI */
	{113, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(113, PORT_PIN_MODE_SPI, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	113	: PORT_PIN_MODE_SPI */
	{114, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(114, PORT_PIN_MODE_OTHER0, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	114	: PORT_PIN_MODE_OTHER0 */
	{115, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(115, PORT_PIN_MODE_SPI, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MAX | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	115	: PORT_PIN_MODE_SPI */
	{PORT_INVALID_REG, STD_OFF, STD_OFF, 0u} /* end marker */
};
/*lint -restore */


static const ArcPort_OutConfigType PortOutConfigData[] = {
	{68u, PORT_GPDO_HIGH}, /* GPDO	68 */
	{69u, PORT_GPDO_HIGH}, /* GPDO	69 */
	{PORT_INVALID_REG, 0u} /* end marker */
};



const Port_ConfigType PortConfigData =
{
  .padConfig = PortPadConfigData,
  .outConfig = PortOutConfigData,
  .inputSelectConfig = PortInputSelectConfigData
};


