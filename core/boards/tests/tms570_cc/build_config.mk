
# ARCH defines
ARCH=arm_cr4
ARCH_FAM=arm
ARCH_MCU=arm_cr4

#
# CFG (y/n) macros
# 

CFG=ARM ARM_CR4 ARMV7_AR
# Add our board  

CFG+=TMS570 BRD_TMS570_CC
CFG+=TMS570
CFG+=HW_FLOAT
CFG+=THUMB
CFG+=BIG_ENDIAN

CFG+=TIMER
CFG+=TIMER_RTI

# 
# ST have devided devices into ( See chapter 6 in Ref manual )
# LD - Low Density.    STM32F101xx,F102xx,F103xx). Flash 16->32Kbytes
# MD - Medium Density. Same as above.              Flash 64->128Kbytes
# HD - High Denstiry.  STM32F101xx,F103xx.         Flash 256->512Kbytes
# CL - Connectivity Line. STM32F105xx,F107xx     
#  
# [ STM32_MD | CFG_STM32_LD | CFG_STM32_HD | CFG_STM32_CL ]  
#CFG+=STM32_CL

# What buildable modules does this board have, 
# default or private

# MCAL
MOD_AVAIL+=ADC CAN DIO MCU FLS PORT PWM GPT   
# System + Communication + Diagnostic
MOD_AVAIL+=CANIF CANTP J1939TP COM DCM DEM DET ECUM_FIXED IOHWAB KERNEL PDUR IPDUM WDGM RTE
# Network management
MOD_AVAIL+=COMM NM CANNM CANSM
# Additional
MOD_AVAIL+=RAMLOG TCF LWIP SLEEP RTE RAMTST
# CRC
MOD_AVAIL+=CRC
# Required modules
MOD_USE += MCU

#
# Extra defines 
#

# We need startup from kernel
VPATH += $(ROOTDIR)/arch/$(ARCH_FAM)/$(ARCH)/kernel
 

# Select the right device in ST header files.
# [ STM32F10X_LD | STM32F10X_MD |  STM32F10X_HD |STM32F10X_CL ]
#def-y += STM32F10X_CL

vpath %.ldf $(ROOTDIR)/arch/$(ARCH_FAM)/$(ARCH)/scripts
vpath %.ldf $(BOARDPATH)/$(BOARDDIR)
ldcmdfile-y = linkscript_$(COMPILER).lcf

obj-y += dummy.o


# Default cross compiler
DEFAULT_CROSS_COMPILE = /opt/arm-none-eabi/bin/arm-none-eabi-
