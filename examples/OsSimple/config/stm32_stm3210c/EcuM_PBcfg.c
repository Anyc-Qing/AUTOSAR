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

/* Generator version: 3.1.0
 * AUTOSAR version:   4.3.0
 */

/* @req SWS_BSW_00015  Post-build file */
/* @req SWS_BSW_00063 */
#include "EcuM.h" 
#include "EcuM_Generated_Types.h" 

#if defined(USE_BSWM) || defined(USE_PDUR) || defined(USE_COM) || defined(USE_CANIF) || defined(USE_CANTP) || defined(USE_CANNM) ||\
    defined(USE_COMM) || defined(USE_CANTRCV) || defined(USE_CAN)
extern const PostbuildConfigType Postbuild_Config;
#endif

#if defined(USE_UDPNM) 
extern const UdpNm_ConfigType UdpNm_Config;
#endif
    
const EcuM_SleepModeType EcuM_SleepModeConfig[] = {
	{  // EcuMSleepMode
	   .EcuMSleepModeId = ECUM_SLEEP_MODE_ECUMSLEEPMODE,       
	   .EcuMWakeupSourceMask = EcuMConf_EcuMWakeupSource_EcuMWakeupSource,
  	   .EcuMSleepModeMcuMode = McuConf_McuModeSettingConf_RUN,   /* @req SWS_EcuM_02958 */
    }

};


const EcuM_WakeupSourceConfigType EcuM_WakeupSourceConfig[] = {
   {  // EcuMWakeupSource
      .EcuMWakeupSourceId = EcuMConf_EcuMWakeupSource_EcuMWakeupSource,        
      .EcuMValidationTimeout = ECUM_VALIDATION_TIMEOUT_ILL,

/* @req SWS_EcuMf_00018 */      
#if defined(USE_COMM)
      .EcuMComMChannel = ECUM_COMM_CHANNEL_ILL
#endif
   }
};





/*@req SWS_EcuM_00793*/ /*@req SWS_EcuMf_00046*/
const EcuM_ConfigType EcuMConfig = {
    .EcuMPostBuildVariant = 1,
    .EcuMConfigConsistencyHashLow = PRE_COMPILED_DATA_HASH_LOW, 
    .EcuMConfigConsistencyHashHigh = PRE_COMPILED_DATA_HASH_HIGH,  /* @req SWS_EcuM_02795 */
    .EcuMDefaultShutdownTarget = ECUM_STATE_OFF,
    .EcuMDefaultSleepMode = ECUM_SLEEP_MODE_FIRST,
    .EcuMDefaultAppMode = OSDEFAULTAPPMODE,
    .EcuMNvramReadAllTimeout = ECUM_NVRAM_READALL_TIMEOUT,
    .EcuMNvramWriteAllTimeout = ECUM_NVRAM_WRITEALL_TIMEOUT,
    .EcuMRunMinimumDuration = ECUM_NVRAM_MIN_RUN_DURATION,
    .EcuMNormalMcuMode = McuConf_McuModeSettingConf_NORMAL,
    .EcuMSleepModeConfig = EcuM_SleepModeConfig,
    .EcuMWakeupSourceConfig = EcuM_WakeupSourceConfig,
/*@req SWS_EcuM_00809*/
#if defined(USE_DEM)
	.EcuMDemInconsistencyEventId	= DEM_EVENT_ID_NULL,
	.EcuMDemRamCheckFailedEventId	= DEM_EVENT_ID_NULL,
	.EcuMDemAllRunRequestsKilledEventId	= DEM_EVENT_ID_NULL,
#endif
#if defined(USE_COMM)
    .EcuMComMConfig = NULL,
#endif
#if defined(USE_MCU)
    .McuConfigPtr = McuConfigData,
#endif
#if defined(USE_PORT)
    .PortConfigPtr = &PortConfigData,
#endif
#if defined(USE_DIO)
    .DioConfigPtr = &DioConfigData,
#endif
#if defined(USE_CANSM)
    .CanSMConfigPtr = &CanSM_Config,
#endif
#if defined(USE_LIN)
    .LinConfigPtr = &Lin_Config,
#endif
#if defined(USE_FR)
    .FrConfigPtr = &FrConfigData,
#endif
#if defined(USE_LINIF)
    .LinIfConfigPtr = &LinIf_Config,
#endif
#if defined(USE_LINTP)
    .LinTpConfigPtr = &LinTp_Config,
#endif
#if defined(USE_LINSM)
    .LinSMConfigPtr = &LinSM_Config,
#endif
#if defined(USE_UDPNM)
    .UdpNmConfigPtr = &UdpNm_Config,
#endif
#if defined(USE_SECOC)
    .SecOCConfigPtr = &SecOC_Config,
#endif
#if defined(USE_NM)
    .NmConfigPtr = &Nm_Config,
#endif
#if defined(USE_TCPIP)
    .TcpIpConfigPtr = &TcpIp_Config,
#endif
#if defined(USE_J1939TP)
    .J1939TpConfigPtr = &J1939Tp_Config,
#endif
#if defined(USE_SD)
    .SdConfigPtr = &SdConfig,
#endif
#if defined(USE_SOAD)
    .SoAdConfigPtr = &SoAd_Config,
#endif
#if defined(USE_DOIP)
    .DoIPConfigPtr = &DoIP_Config,
#endif
#if defined(USE_LDCOM)
    .LdComConfigPtr = &LdCom_Config,
#endif
#if defined(USE_DMA)
    .DmaConfigPtr = DmaConfig,
#endif
#if defined(USE_ADC)
#if defined(CFG_ZYNQ)
    .AdcConfigPtr = NULL,
#else
    .AdcConfigPtr = AdcConfig,
#endif
#endif
#if defined(USE_PWM)
    .PwmConfigPtr = &PwmConfig,
#endif
#if defined(USE_OCU)
    .OcuConfigPtr = &OcuConfig,
#endif
#if defined(USE_ICU)
    .IcuConfigPtr = &IcuConfig,
#endif
#if defined(USE_WDG)
    .WdgConfigPtr = &WdgConfig,
#endif
#if defined(USE_WDGM)
    .WdgMConfigPtr = &WdgMConfig,
#endif
#if defined(USE_WDGIF)
    .WdgIfConfigPtr = &WdgIfConfig,
#endif
#if defined(USE_GPT)
    .GptConfigPtr = GptConfigData,
#endif
#if defined(USE_FLS)
    .FlsConfigPtr = FlsConfigSet, 
#endif
#if defined(USE_EEP)
    .EepConfigPtr = EepConfigData,
#endif
#if defined(USE_SPI)
    .SpiConfigPtr = &SpiConfigData,
#endif
#if defined(USE_DCM)
    .DcmConfigPtr = &DCM_Config,
#endif
#if defined(USE_DEM)
    .DemConfigPtr = &DEM_Config,
#endif
#if defined(USE_XCP)
    .XcpConfigPtr = &XcpConfig,
#endif
#if defined(USE_STBM)
    .StbMConfigPtr = &StbMConfigData,
#endif
#if defined(USE_ETHTSYN)
    .EthTSynConfigPtr = &EthTSynConfigData,
#endif
#if defined(USE_ETHSM)
    .EthSMConfigPtr = &EthSMConfig,
#endif
#if defined(USE_ETHTRCV)
    .EthTrcvConfigPtr = &EthTrcv_Config,
#endif
#if defined(USE_ETHIF)
    .EthIfConfigPtr = &EthIfConfigData,
#endif
#if defined(USE_ETH)
    .EthConfigPtr = &EthConfig,
#endif
#if defined(USE_IPDUM)
    .IpduMConfigPtr = &IpduMConfigData,
#endif
#if defined(USE_DLT)
    .DltConfigPtr = &Dlt_Config,
#endif
#if defined(USE_BSWM) || defined(USE_PDUR) || defined(USE_COM) || defined(USE_CANIF) ||\
    defined(USE_CANTP) || defined(USE_CANNM) || defined(USE_COMM) || defined (USE_CANTRCV) || defined (USE_CAN) || (defined(USE_FIM) && (FIM_POSTBUILD_MODE == STD_ON))
    .PostBuildConfig = &Postbuild_Config,
#endif
#if defined(USE_FR)
    .FrConfigPtr = &FrConfigData,
#endif
#if defined (USE_FRIF)
	.FrIfConfigPtr = &FrIf_Config,
#endif
#if defined (USE_FRNM)
	.FrNmConfigPtr = &FrNmConfigData,
#endif
#if defined (USE_FRSM)
	.FrSMConfigPtr = &FrSMConfigData,
#endif
#if defined (USE_FRTP)
	.FrTpConfigPtr = &FrTpConfig,
#endif
#if defined (USE_OSEKNM)
	.OsekNmConfigPtr = &OsekNmConfig,
#endif
#if defined(USE_FIM) && (FIM_POSTBUILD_MODE == STD_OFF)
    .FiMConfigPtr = &FiM_Config,
#endif

};


