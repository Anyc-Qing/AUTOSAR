
# Version of build system
REQUIRED_BUILD_SYSTEM_VERSION=1.0.0

# Get configuration makefiles
-include ../config/Rte/Config/*.mk
-include ../config/$(BOARDDIR)/Rte/Config/*.mk
-include ../config/*.mk
-include ../config/$(BOARDDIR)/*.mk


# Project settings

SELECT_CONSOLE = RAMLOG

SELECT_OPT = OPT_DEBUG 

#Transceiver
ifeq ($(BOARDDIR),mpc5748g_mpc574xg_mb)
CFG+=ETH_PHY_DP83848C
endif

#LWIP Settings
 
CFG+=KERNEL_EXTRA TIMER ARC_SOAD_DISREGARD_SDU_LENGTH

# Build DoIP Simple as an application for the asr-bootloader
#CFG+=CREATE_VBF CREATE_SREC BOOTLOADER_APPL