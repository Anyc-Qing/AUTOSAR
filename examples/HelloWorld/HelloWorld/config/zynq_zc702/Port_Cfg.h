
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

/* Generator version: 5.0.1
 * AUTOSAR version:   4.1.2
 */

#include "PortDefs.h"

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
#define PORT_SET_PIN_MODE_API			STD_OFF
#define PORT_SET_PIN_DIRECTION_API		STD_ON
#define NO_OF_PORTS					14

#define L3_SEL0 0u
#define L3_SEL1 (1u << 5u)
#define L3_SEL2 (2u << 5u)
#define L3_SEL3 (3u << 5u)
#define L3_SEL4 (4u << 5u)
#define L3_SEL5 (5u << 5u)
#define L3_SEL6 (6u << 5u)
#define L3_SEL7 (7u << 5u)

#define L2_SEL0 0u
#define L2_SEL1 (1u << 3u)
#define L2_SEL2 (2u << 3u)
#define L2_SEL3 (3u << 3u)

#define L1_SEL0 0u
#define L1_SEL1 (1u << 2u)

#define L0_SEL0 0u
#define L0_SEL1 (1u << 1u)

#define PIN_CONTROL_REG(nr, mode) PIN_CONTROL_REG_ ## nr ## _## mode

typedef uint32 Port_PinModeType;

typedef enum {
    ENABLE_INPUT_BUFFER=0,
    DISABLE_INPUT_BUFFER = (1 << 13),
} ArcPort_DisableBufferConfigType;

typedef enum  {
    DISABLE_PULLUP=0,
    ENABLE_PULLUP = (1 << 12),
} ArcPort_EnablePullupConfigType;

typedef enum {
    LVCMOS18 = (1 << 9),
    LVCMOS25 = (2 << 9),
    LVCMOS33 = (3 << 9),
    HSTL = (4 << 9)
} ArcPort_BufferConfigType;

typedef enum {
    SLOW_CMOS_EDGE=0,
    FAST_CMOS_EDGE = (1 << 8)
} ArcPort_SlewRateConfigType;

typedef struct {
    uint16  reg;
    Port_PinModeType config;
}   ArcPort_SLCR_MIOConfigType;

typedef struct {
    uint32_t  mask_data_lsw;
    uint32_t  mask_data_msw;
    uint32_t  dirm;
    uint32_t  oen;
} ArcPort_OutConfigType;

typedef struct
{
    const ArcPort_SLCR_MIOConfigType *PortConfig;
    const ArcPort_OutConfigType *OutConfig;
} Port_ConfigType;

#define PortConf_PortPin_CAN0_RXD ((Port_PinType)46)
#define PortConf_PortPin_CAN0_TXD ((Port_PinType)47)
#define PortConf_PortPin_Can0_TcvrEn ((Port_PinType)9)
#define PortConf_PortPin_EMIO0_CH0 ((Port_PinType)54)
#define PortConf_PortPin_EMIO0_CH1 ((Port_PinType)55)
#define PortConf_PortPin_MIO0_CH11 ((Port_PinType)11)
#define PortConf_PortPin_MIO0_CH14 ((Port_PinType)14)
#define PortConf_PortPin_MIO0_CH8 ((Port_PinType)8)
#define PortConf_PortPin_QSPI0_CS ((Port_PinType)1)
#define PortConf_PortPin_QSPI0_IO0 ((Port_PinType)2)
#define PortConf_PortPin_QSPI0_IO1 ((Port_PinType)3)
#define PortConf_PortPin_QSPI0_IO2 ((Port_PinType)4)
#define PortConf_PortPin_QSPI0_IO3 ((Port_PinType)5)
#define PortConf_PortPin_QSPI0_SCLK ((Port_PinType)6)

extern const Port_ConfigType PortConfigData;

/* Configuration Set Handles */
#define PortConfigSet (PortConfigData)
#define Port_PortConfigSet (PortConfigData)


#endif /* PORT_CFG_H_ */
