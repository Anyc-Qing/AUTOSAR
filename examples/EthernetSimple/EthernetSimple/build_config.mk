
# Version of build system
REQUIRED_BUILD_SYSTEM_VERSION=1.0.0

# Get configuration makefiles
-include ../config/Rte/Config/*.mk
-include ../config/$(BOARDDIR)/Rte/Config/*.mk
-include ../config/*.mk
-include ../config/$(BOARDDIR)/*.mk


# Project settings
SELECT_CONSOLE = RAMLOG

ifeq ($(COMPILER),$(filter $(COMPILER),ghs armcc))
SELECT_OPT = OPT_DEBUG 
else
SELECT_OPT = OPT_RELEASE
endif
 #LWIP Settings
 
CFG+=KERNEL_EXTRA TIMER ARC_SOAD_DISREGARD_SDU_LENGTH

ifeq ($(BOARDDIR),mpc5777m_mmb)
def-y += USE_NO_ETHIF
endif


 #ETH-PHY Settings
 
ifeq ($(BOARDDIR),rh850f1h)
CFG+=ETH_PHY_DP83848C
else ifeq ($(BOARDDIR),jacinto6)
CFG+=ETH_PHY_DP83865 
CFG+=ETH_ARC_STATISTICS 
def-y += ETH_CTRL_TX_FRAME_MIN_SIZE=60
#CFG+=ETH_PHY_TJA1100 

else ifeq ($(BOARDDIR),mpc5777c_mpc57xx_mb)
CFG+=ETH_PHY_DP83848C
CFG+=ETH_ARC_STATISTICS

else ifeq ($(BOARDDIR),zynq_zc702)
else ifeq ($(BOARDDIR),mpc5748g_mpc574xg_mb)
else ifeq ($(BOARDDIR),mpc5746c_mpc574xg_mb)
CFG+=ETH_PHY_DP83848C
endif


 #ETH SM settings
#CFG+=ETHSM_TCPIP_NO_SYNC //use this to detach TCPIP syncing


