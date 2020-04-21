#port

obj-$(USE_PORT) += Port_Lcfg.o
obj-$(USE_PORT) += Port_PBcfg.o


ifeq ($(CFG_TMS570),y)
obj-$(USE_PORT) += Port.o
endif

obj-$(USE_PORT)-$(CFG_PPC) += Port.o
obj-$(USE_PORT)-$(CFG_PPC) += Port_Hw_mpc5xxx.o
obj-$(USE_PORT)-$(CFG_ZYNQ) += Port_zynq.o
obj-$(USE_PORT)-$(CFG_TMS570) += Port_Hw_tms570.o
obj-$(USE_PORT)-$(CFG_RH850) += Port_regfinder.o
obj-$(USE_PORT)-$(CFG_RH850) += Port_rh850_x.o
obj-$(USE_PORT)-$(CFG_JACINTO) += Port_jacinto.o
obj-$(USE_PORT)-$(CFG_STM32) += stm32f10x_gpio.o
obj-$(USE_PORT)-$(CFG_STM32) += Port_stm32.o
obj-$(USE_PORT)-$(CFG_STM32) += stm32f10x_usart.o
obj-$(USE_PORT)-$(CFG_STM32) += misc.o

inc-$(USE_PORT) += $(ROOTDIR)/mcal/Port/inc
inc-$(USE_PORT) += $(ROOTDIR)/mcal/Port/src
vpath-$(USE_PORT) += $(ROOTDIR)/mcal/Port/src

