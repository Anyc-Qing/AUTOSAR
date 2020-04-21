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

/* Generator version: 1.1.0
 * AUTOSAR version:   4.2.2
 */
#ifndef ETHIF_PBCFG_H_
#define ETHIF_PBCFG_H_

#if (ETHIF_MAX_FRAME_OWNER_CFG < 2)
#error "The number of configured EthIfFrameOwnerConfigs containers must be less than ArcEthIfMaxFrameOwnerConfig"
#endif

/* EthIf controller IDs */
#define EthIfConf_EthIfController_EthIfController  0u

/* EthIf Switch IDs */


/* Rx indication handles */
#define ETHIF_RXHANDLE_ETHIFRXINDICATIONCONFIG1		0U
#define ETHIF_RXHANDLE_ETHIFRXINDICATIONCONFIG2		1U



/* @req 4.2.2/SWS_EthIf_00105 */ /* @req 4.2.2/SWS_EthIf_00104 */
/** Rx Confirmation call back function for UL**/
extern void TcpIp_RxIndication ( uint8 CtrlIdx, Eth_FrameType FrameType, boolean IsBroadcast, const uint8* PhysAddrPtr, uint8* DataPtr, uint16 LenByte );
extern void TcpIp_RxIndication ( uint8 CtrlIdx, Eth_FrameType FrameType, boolean IsBroadcast, const uint8* PhysAddrPtr, uint8* DataPtr, uint16 LenByte );



#endif /* ETHIF_PBCFG_H_ */
