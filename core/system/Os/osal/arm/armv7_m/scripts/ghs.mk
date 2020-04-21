

CC = $(GHS_BIN)/ccarm
LD = $(GHS_BIN)/ccarm.exe
AS = $(GHS_BIN)/asarm.exe

ifeq ($(CFG_ARM_CM4), y)
GHS_TARGET=cortexm4
endif
ifeq ($(CFG_ARM_CM3), y)
GHS_TARGET=cortexm3
endif

cflags-y += --gnu_asm
cflags-y += -thumb 
cflags-y += -e Reset_Handler

ASFLAGS += -cpu=$(GHS_TARGET)
ASFLAGS += -dwarf2


