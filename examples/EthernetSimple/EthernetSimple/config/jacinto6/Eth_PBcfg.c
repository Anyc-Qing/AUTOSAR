
#include "Eth.h"

static const Eth_ControllerConfigType EthControllerList[] = {
	{
	    .EthCtrlIdx =                   0,	    
		.EthCtrlRxBufLenByte =          1518,
		.EthCtrlTxBufLenByte =          1518,
		.EthRxBufTotal =                5,
		.EthTxBufTotal =                2,
		.EthCtrlEnableMii =             TRUE,
		.EthCtrlEnableRxInterrupt =     TRUE,
		.EthCtrlEnableTxInterrupt =     TRUE,
		.EthCtrlPhyAddress =            {0x00, 0x00, 0x00, 0x00, 0x00, 0x02},
		.EthHwUnit =                    HWUNIT_0,
		.EthMIIMode =                   RGMII,
		.EthHwSpeed =                   MBPS_100,
		.EthHwEnableTxChecksumOffload = TRUE,
		.EthHwTxDmaCh =                 0,
		.EthHwRxDmaCh =                 0,
		.EthHwTxQueue =                 1,
		.EthHwRxQueue =                 1,
		.EthHwFifoPrio =                NORMAL_PRIO,
		.EthHwEnableCircDesc =          false,
#if defined(USE_DEM) || defined(CFG_ETH_USE_DEM)
		.ETH_E_ACCESS =             DEM_EVENT_ID_NULL,
		.ETH_E_RX_FRAMES_LOST =     DEM_EVENT_ID_NULL,
#endif
	},
};

static const Eth_ConfigSetType EthConfigSet = {
	.NofControllers =              1,
	.Controllers =                 EthControllerList,
};

const Eth_ConfigType EthConfig = {
	.ConfigSet =                   &EthConfigSet,
};

