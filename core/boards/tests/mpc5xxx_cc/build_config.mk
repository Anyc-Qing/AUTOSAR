
# ARCH defines
ARCH=mpc5xxx
ARCH_FAM=ppc
#ARCH_MCU=mpc5516

# CFG (y/n) macros
#CFG=PPC BOOKE E200Z1 MPC55XX MPC5516 BRD_MPC5XXX_CC TIMER_TB
#CFG=PPC BOOKE E200Z1 MPC55XX MPC5516 BRD_MPC5XXX_CC TIMER_TB SIMULATOR
CFG=PPC BOOKE E200Z1 MPC55XX MPC5516 BRD_MPC5XXX_CC TIMER_TB
#CFG+=MCU_ARC_CONFIG
CFG+=ARC_CLIB
CFG+=TIMER MCU_ARC_CONFIG


ifneq ($(filter cw ghs,$(COMPILER)),)
CFG+=VLE
endif

# What buildable modules does this board have, 
# default or private

# Memory + Peripherals
MOD_AVAIL+=ADC DIO DMA CAN GPT LIN MCU PORT PWM WDG NVM MEMIF FEE FLS SPI EEP 
# System + Communication + Diagnostic
MOD_AVAIL+=XCP CANIF CANTP LINIF COM DCM DEM DET ECUM_FIXED IOHWAB KERNEL PDUR WDGM WDGIF RTE J1939TP SCHM ECUM_FLEXIBLE ECUM_FIXED E2E BSWM IPDUM UDPNM
# Network management
MOD_AVAIL+=COMM NM CANNM CANSM EA LINSM
# Additional
MOD_AVAIL+= RAMLOG FLS_SST25XX
# CRC
MOD_AVAIL+=CRC
# Required modules
MOD_USE += MCU

# Default cross compiler
DEFAULT_CROSS_COMPILE = /opt/powerpc-eabispe/bin/powerpc-eabispe-
DEFAULT_DIAB_COMPILE = /c/devtools/WindRiver/diab/5.9.0.0/WIN32
DEFAULT_GHS_COMPILE = /d/devtools/ghs/comp_201254

vle=$(if $(filter $(CFG),VLE),y)
novle=$(if $(vle),n,y)

diab-$(vle)=-tPPCE200Z1VFN:simple
diab-$(novle)=-tPPCE200Z1NFS:simple

DIAB_TARGET?=$(diab-y)

vpath %.ldf $(ROOTDIR)/arch/$(ARCH_FAM)/$(ARCH)/scripts
vpath %.ldf $(BOARDPATH)/$(BOARDDIR)
ldcmdfile-y = linkscript_$(COMPILER).lcf

# Defines
def-y += SRAM_SIZE=0x14000
