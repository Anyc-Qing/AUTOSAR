
# Version of build system
REQUIRED_BUILD_SYSTEM_VERSION=1.0.0

# Get configuration makefiles
-include ../config/Rte/Config/*.mk
-include ../config/$(BOARDDIR)/Rte/Config/*.mk
-include ../config/*.mk
-include ../config/$(BOARDDIR)/*.mk


# Project settings
ifneq ($(BOARDDIR),stm32_stm3210c)
SELECT_CONSOLE = RAMLOG
endif
ifeq ($(COMPILER),$(filter $(COMPILER),ghs armcc))
SELECT_OPT = OPT_DEBUG 
else
SELECT_OPT = OPT_RELEASE
endif

 #LWIP Settings
 
CFG+=KERNEL_EXTRA TIMER ARC_SOAD_DISREGARD_SDU_LENGTH

ifeq ($(BOARDDIR),stm32_stm3210c)
def-y += HEAPSIZE=6000
def-y += USE_NO_ETHIF
endif
ifeq ($(BOARDDIR),mpc5777m_mmb)
def-y += USE_NO_ETHIF
endif


 #ETH-PHY Settings
 
ifeq ($(BOARDDIR),rh850f1h)
CFG+=ETH_PHY_DP83848C
else ifeq ($(BOARDDIR),jacinto6)
CFG+=ETH_PHY_DP83865  
def-y += ETH_CTRL_TX_FRAME_MIN_SIZE=60
#CFG+=ETH_PHY_TJA1100 
else ifeq ($(BOARDDIR),zynq_zc702)
endif


 #ETH SM settings
#CFG+=ETHSM_TCPIP_NO_SYNC //use this to detach TCPIP syncing
