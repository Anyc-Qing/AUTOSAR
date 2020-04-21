
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

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#if !(((PORT_SW_MAJOR_VERSION == 5) && (PORT_SW_MINOR_VERSION == 0)) )
#error Port: Configuration file expected BSW module version to be 5.0.*
#endif

#if !(((PORT_AR_RELEASE_MAJOR_VERSION == 4) && (PORT_AR_RELEASE_MINOR_VERSION == 1)) )
#error Port: Configuration file expected AUTOSAR version to be 4.1.*
#endif

#define	PORT_VERSION_INFO_API			STD_ON
#define	PORT_DEV_ERROR_DETECT			STD_ON
#define PORT_SET_PIN_MODE_API			STD_ON
#define PORT_SET_PIN_DIRECTION_API		STD_ON

#define PORT_MODE		.flags.BITF.PMC=0, .flags.BITF.PIPC=0 

#define PORT_FUNC0		.flags.BITF.PMC=1, .flags.BITF.PM=1, .flags.BITF.PFCAE=0, .flags.BITF.PFCE=0, .flags.BITF.PFC=0, .flags.BITF.PIBC=1 
#define PORT_FUNC1		.flags.BITF.PMC=1, .flags.BITF.PM=0, .flags.BITF.PFCAE=0, .flags.BITF.PFCE=0, .flags.BITF.PFC=0, .flags.BITF.PIBC=0

#define PORT_FUNC2		.flags.BITF.PMC=1, .flags.BITF.PM=1, .flags.BITF.PFCAE=0, .flags.BITF.PFCE=0, .flags.BITF.PFC=1, .flags.BITF.PIBC=1
#define PORT_FUNC3		.flags.BITF.PMC=1, .flags.BITF.PM=0, .flags.BITF.PFCAE=0, .flags.BITF.PFCE=0, .flags.BITF.PFC=1, .flags.BITF.PIBC=0
#define PORT_FUNC4		.flags.BITF.PMC=1, .flags.BITF.PM=1, .flags.BITF.PFCAE=0, .flags.BITF.PFCE=1, .flags.BITF.PFC=0, .flags.BITF.PIBC=1
#define PORT_FUNC5		.flags.BITF.PMC=1, .flags.BITF.PM=0, .flags.BITF.PFCAE=0, .flags.BITF.PFCE=1, .flags.BITF.PFC=0, .flags.BITF.PIBC=0
#define PORT_FUNC6		.flags.BITF.PMC=1, .flags.BITF.PM=1, .flags.BITF.PFCAE=0, .flags.BITF.PFCE=1, .flags.BITF.PFC=1, .flags.BITF.PIBC=1
#define PORT_FUNC7		.flags.BITF.PMC=1, .flags.BITF.PM=0, .flags.BITF.PFCAE=0, .flags.BITF.PFCE=1, .flags.BITF.PFC=1, .flags.BITF.PIBC=0

#define PORT_FUNC8		.flags.BITF.PMC=1, .flags.BITF.PM=1, .flags.BITF.PFCAE=1, .flags.BITF.PFCE=0, .flags.BITF.PFC=0, .flags.BITF.PIBC=1
#define PORT_FUNC9		.flags.BITF.PMC=1, .flags.BITF.PM=0, .flags.BITF.PFCAE=1, .flags.BITF.PFCE=0, .flags.BITF.PFC=0, .flags.BITF.PIBC=0
#define PORT_FUNC10		.flags.BITF.PMC=1, .flags.BITF.PM=1, .flags.BITF.PFCAE=1, .flags.BITF.PFCE=0, .flags.BITF.PFC=1, .flags.BITF.PIBC=1
#define PORT_FUNC11		.flags.BITF.PMC=1, .flags.BITF.PM=0, .flags.BITF.PFCAE=1, .flags.BITF.PFCE=0, .flags.BITF.PFC=1, .flags.BITF.PIBC=0
#define PORT_FUNC12		.flags.BITF.PMC=1, .flags.BITF.PM=1, .flags.BITF.PFCAE=1, .flags.BITF.PFCE=1, .flags.BITF.PFC=0, .flags.BITF.PIBC=1
#define PORT_FUNC13		.flags.BITF.PMC=1, .flags.BITF.PM=0, .flags.BITF.PFCAE=1, .flags.BITF.PFCE=1, .flags.BITF.PFC=0, .flags.BITF.PIBC=0

#define SPECIAL_FUNC	.flags.BITF.PMC=0, .flags.BITF.PM=1

#define SET_PIPC		, .flags.BITF.PIPC=1
#define CLEAR_PIPC		, .flags.BITF.PIPC=0

#include "PortDefs.h"

#define PortConf_PortPin_CAN0RX_INTP0 ((Port_PinType)118)
#define PortConf_PortPin_CAN0TX ((Port_PinType)119)
#define PortConf_PortPin_CSIH0CSS2 ((Port_PinType)102)
#define PortConf_PortPin_CSIH0SC ((Port_PinType)42)
#define PortConf_PortPin_CSIH0SI ((Port_PinType)41)
#define PortConf_PortPin_CSIH0SO ((Port_PinType)43)
#define PortConf_PortPin_P8_0 ((Port_PinType)98)
#define PortConf_PortPin_P8_1 ((Port_PinType)99)
#define PortConf_PortPin_P8_2 ((Port_PinType)100)
#define PortConf_PortPin_P8_3 ((Port_PinType)101)
#define PortConf_PortPin_TAUD0O5 ((Port_PinType)120)

#define PORT_INVALID_REG    ((uint16)0xFFFFu)

typedef struct {
    uint16 PMC  : 1;	/* Port Mode Control Register 0=Port, 1=Alter */
    uint16 PIPC : 1;	/* Port IP Control Register 0=Software I/O Control, 1=direct I/O control */    
    uint16 PM   : 1;	/* Port Mode Register 0=Output mode, 1=Input mode */    
    uint16 PIBC : 1;	/* Port Input Buffer Control register 0=Input Buffer Disabled, 1=Input Buffer Enabled */
    uint16 PFC  : 1;	/* Port Function Control Register. See Table 2.10 in ref man */
    uint16 PFCE : 1;	/* Port Function Control Expansion Register. See Table 2.10 in ref man */
    uint16 PFCAE: 1;	/* Port Function Control Additional Expansion Register. See Table 2.10 in ref man */
    uint16 PBDC : 1;    /* Port Bidirection Control Register 0=Disabled, 1=Enabled */ 
    uint16 P    : 1;	/* Port Register 0=Outputs low level, 1=Outputs high level */
    uint16 PU   : 1;	/* Pull-Up Option Register 0=No internal pull up connected, 1=Internal pull up connected */
    uint16 PD   : 1;	/* Pull-Down Option Register 0=No internal pull down connected, 1=Internal pull down connected */
    uint16 PDSC : 1;	/* Port Drive Strength Control Register 0=Lower drive strength, 1=High drive strength */ 
    uint16 PODC : 1;	/* Port Open Drain Control Register 0=Push-pull, 1=Open-drain */
    uint16 PIS  : 1;	/* Port Input Buffer Selection Register 0=Type 1 (SHMT1), 1=Type 2 (SHMT4) */
    uint16 PADD : 2;	/* Struct Padding */
} ArcPort_RegisterFlags;

typedef struct {
    uint16 PortPinId;
    union{
        uint16               UINT16;
        ArcPort_RegisterFlags BITF;
    } flags;
} ArcPort_PinConfig;

typedef struct
{
    const ArcPort_PinConfig *pinConfig;
} Port_ConfigType;

extern const Port_ConfigType PortConfigData;

/* Configuration Set Handles */
#define PortConfigSet (PortConfigData)
#define Port_PortConfigSet (PortConfigData)

#endif /* PORT_CFG_H_ */
