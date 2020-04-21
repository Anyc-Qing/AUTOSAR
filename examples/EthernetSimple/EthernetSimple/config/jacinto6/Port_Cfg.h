

#if !(((PORT_SW_MAJOR_VERSION == 5) && (PORT_SW_MINOR_VERSION == 0)) )
#error Port: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((PORT_AR_RELEASE_MAJOR_VERSION == 4) && (PORT_AR_RELEASE_MINOR_VERSION == 1)) )
#error Port: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#ifndef PORT_CFG_H_
#define PORT_CFG_H_


#define	PORT_VERSION_INFO_API			STD_ON
#define	PORT_DEV_ERROR_DETECT			STD_ON
#define PORT_SET_PIN_MODE_API			STD_OFF /* Not supported */
#define PORT_SET_PIN_DIRECTION_API		STD_OFF /* Not supported */
#define PORT_GPIO_SOFT_RESET			STD_ON

#define PORT_PULL_NONE		(1UL<<16UL)
#define PORT_PULL_ENABLE 	0UL
#define PORT_PULL_UP		((1UL<<17UL) | PORT_PULL_ENABLE)
#define PORT_PULL_DOWN		PORT_PULL_ENABLE

#if defined(CFG_JAC6)
#define PORT_INPUT			(1UL<<18)
#define PORT_OUTPUT			0UL
#define PORT_SLEW_FAST 		0UL
#define PORT_SLEW_SLOW 		(1UL<<19UL)
#endif

#define PORT_PIN_LEVEL_HIGH 1u
#define PORT_PIN_LEVEL_LOW 0u

#include "PortDefs.h"

typedef struct {
	uint32 pcrVal;
	uint32 pcrRegAddr;
} ArcPort_PadConfigType;

typedef struct {
	uint8 gpio;
	uint8 gpioPin;
	uint8 initLevel;
	boolean isOutput;
} ArcPort_DioConfigType;

typedef struct {
	uint32 nofPins;
	const ArcPort_PadConfigType *padConfig;
	const ArcPort_DioConfigType *dioConfig;
	uint16 nofDioPins;
} Port_ConfigType;


#define PortConf_PortPin_eth_mdio_u4 ((Port_PinType)0)
#define PortConf_PortPin_eth_rgmii0_rxc_u5 ((Port_PinType)1)
#define PortConf_PortPin_eth_rgmii0_txd0_u6 ((Port_PinType)2)
#define PortConf_PortPin_eth_rgmii0_txd2_u7 ((Port_PinType)3)
#define PortConf_PortPin_eth_mdc_v1 ((Port_PinType)4)
#define PortConf_PortPin_eth_rgmii0_rxd2_v3 ((Port_PinType)5)
#define PortConf_PortPin_eth_rgmii0_rxd3_v4 ((Port_PinType)6)
#define PortConf_PortPin_eth_rgmii0_rxctl_v5 ((Port_PinType)7)
#define PortConf_PortPin_eth_rgmii0_txd1_v6 ((Port_PinType)8)
#define PortConf_PortPin_eth_rgmii0_txd3_v7 ((Port_PinType)9)
#define PortConf_PortPin_eth_rgmii0_txctl_v9 ((Port_PinType)10)
#define PortConf_PortPin_eth_rgmii0_rxd0_w2 ((Port_PinType)11)
#define PortConf_PortPin_eth_rgmii0_txc_w9 ((Port_PinType)12)
#define PortConf_PortPin_eth_rgmii0_rxd1_y2 ((Port_PinType)13)

#define PORT_NR_PINS 14 

extern const Port_ConfigType PortConfigData;

/* Configuration Set Handles */
#define PortConfigSet (PortConfigData)
#define Port_PortConfigSet (PortConfigData)


#endif /* PORT_CFG_H_ */
