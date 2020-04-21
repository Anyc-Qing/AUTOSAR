

#ifndef ETH_CFG_H_
#define ETH_CFG_H_

#if !(((ETH_SW_MAJOR_VERSION == 1) && (ETH_SW_MINOR_VERSION == 0)) )
#error Eth: Configuration file expected BSW module version to be 1.0.*
#endif

#if !(((ETH_AR_RELEASE_MAJOR_VERSION == 4) && (ETH_AR_RELEASE_MINOR_VERSION == 1)) )
#error Eth: Configuration file expected AUTOSAR version to be 4.1.*
#endif



/* API switches */
#define ETH_DEV_ERROR_DETECT	               STD_ON
#define ETH_VERSION_INFO_API	               STD_OFF
#define ETH_MII_API				               STD_ON
#define ETH_GLOBAL_TIME_SUPPORT                 STD_OFF

#define ETH_PHYS_ADRS_FILTER_API	           STD_ON

/* Used HW Controller Switches */
#define ETH_USE_HW_UNIT_0                      STD_ON
#define ETH_USE_HW_UNIT_1                      STD_OFF

/* Alignment bytes for the buffers, currently it is obtained from the generator since buffer size is generated aligned to this */
/* Change it carefully, needed to change in all the buffers */ 
#define ETH_ALIGNING_BYTES                      4u

/* Buffer size, aligned to ETH_ALIGNING_BYTES */
#define ETH_TOTAL_RX_BUFFER_SIZE	           7620UL
#define ETH_NUM_RX_BUFFERS 			           5UL

#define ETH_TOTAL_TX_BUFFER_SIZE	           3048UL
#define ETH_NUM_TX_BUFFERS 			           2UL

/* Maximum byte size of the RX or TX descriptors per an hardware unit */
#define ETH_MAX_DESCRIPTOR_SIZE 			   (128 * 8)

/* Buffer configurations for each controller referenced */
#define ETH_USE_CTRL_0                                 STD_ON
#define ETH_CTRL_0_NUM_TX_BUFFERS                      2U  
#define ETH_CTRL_0_NUM_RX_BUFFERS                      5U 
#define ETH_CTRL_0_NUM_TX_BUFFER_SIZE                  1524U
#define ETH_CTRL_0_NUM_RX_BUFFER_SIZE                  1524U                           

/* Total number of configured controllers */
#define ETH_NOF_CONFIG_CTRL                    1u


#define MBPS_10                                (uint8)0u
#define MBPS_100                               (uint8)1u
#define MII                                    (uint8)0u
#define RMII                                   (uint8)1u 
#define RGMII                                  (uint8)2u 
#define GEM_0                                  (uint8)0u
#define GEM_1                                  (uint8)1u
#define HWUNIT_0                               GEM_0
#define HWUNIT_1                               GEM_1

/* Symbolic names for controller */
#define EthConf_EthCtrlConfig_EthCtrlConfig                                           (uint8)0u


/* Configuration Set Handles */
#define                                        Eth (&EthConfig)
#define                                        Eth_Eth (&EthConfig)

/* Eth module configuration. */
extern const Eth_ConfigType EthConfig;
#if ETH_NOF_CONFIG_CTRL == 2u
#ifndef ETH_USE_CTRL_1
#error "Wrong Instance ID configuration, let Instance ID of the controller be unique" 
#elif ETH_USE_CTRL_1
#ifndef ETH_USE_CTRL_0
#error "Wrong Instance ID configuration, let Instance ID of the controller start from Zero"
#else
#if ETH_USE_HW_UNIT_0 == STD_OFF
#error "Wrong HW ID configuration, Each HW ID should have a separate CtrlIdx / Instance ID "
#elif ETH_USE_HW_UNIT_1 == STD_OFF
#error "Wrong HW ID configuration, Each HW ID should have a separate CtrlIdx / Instance ID"
#endif
#endif
#endif

#endif




#endif /*ETH_CFG_H_*/
