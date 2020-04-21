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

/* Generator version: 4.0.1
 * AUTOSAR version:   4.0.3
 */

#ifndef BSWM_CFG_H
#define BSWM_CFG_H

#if !(((BSWM_SW_MAJOR_VERSION == 4) && (BSWM_SW_MINOR_VERSION == 0)) )
#error BswM: Configuration file expected BSW module version to be 4.0.*
#endif

#if !(((BSWM_AR_RELEASE_MAJOR_VERSION == 4) && (BSWM_AR_RELEASE_MINOR_VERSION == 0)) )
#error BswM: Configuration file expected AUTOSAR version to be 4.0.*
#endif

#define BSWM_CANSM_ENABLED              STD_OFF
#define BSWM_COMM_ENABLED               STD_ON
#define BSWM_DCM_ENABLED                STD_OFF
#define BSWM_DEV_ERROR_DETECT           STD_ON
#define BSWM_ECUM_ENABLED               STD_ON
#define BSWM_ETHSM_ENABLED              STD_ON
#define BSWM_FRSM_ENABLED               STD_OFF
#define BSWM_GENERIC_REQUEST_ENABLED    STD_OFF
#define BSWM_LINSM_ENABLED              STD_OFF
#define BSWM_LINTP_ENABLED              STD_OFF
#define BSWM_NVM_ENABLED                STD_OFF
#define BSWM_SCHM_ENABLED               STD_OFF
#define BSWM_VERSION_INFO_API           STD_ON
#define BSWM_WDGM_ENABLED               STD_OFF
#define BSWM_LINTP_ENABLED				STD_OFF

#define BSWM_PDUGROUPSWITCH_ACTIONS     (1u)
#define BSWM_DEADLINEMONITORING_ACTIONS (0u)
#define BSWM_PDUROUTERCONTROL_ACTIONS   (0u)

#define BSWM_IPDUSTART_ACTION_IDX (0u)
#define BSWM_REQUESTFULLCOM_ACTION_IDX (1u)
#define BSWM_NUMBER_OF_ATOMIC_ACTIONS (2u)

#define BSWM_COMMFULLCOMMUNCATIONLEXPRESSION_EXP_IDX (0u)
#define BSWM_STARTCOMMUNICATIONEXPRESSION_EXP_IDX (1u)
#define BSWM_NUMBER_OF_LOGICAL_EXPRESSIONS (2u)


#define BSWM_IMMEDIATE_REQUEST_NEED_RESET_MIRROR_IDX_MAX (0u)

#define BSWM_NUMBER_OF_IMMEDIATE_REQUESTS (0u)

#define BSWM_BSWCOMMINDICATION_REQ_IDX (0u)
#define BSWM_SWCSTARTCOMMUNICATION_REQ_IDX (1u)
#define BSWM_NUMBER_OF_REQUESTS (2u)

#define BSWM_NUMBER_OF_RULES_MAX (2u)

void BswM_Internal_UpdateNotificationMirrors( void );



#endif /*BSWM_CFG_H*/
