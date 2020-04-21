#Dio

obj-$(USE_DIO) += Dio_Lcfg.o

obj-$(USE_DIO)-$(CFG_PPC) += Dio_Hw_mpc5xxx.o
obj-$(USE_DIO)-$(CFG_JACINTO) += Dio_jacinto.o
obj-$(USE_DIO)-$(CFG_RH850) += Dio_rh850_x.o
obj-$(USE_DIO)-$(CFG_STM32) += Dio_stm32.o
obj-$(USE_DIO)-$(CFG_ZYNQ) += Dio_zynq.o
obj-$(USE_DIO)-$(CFG_TMS570) += Dio.o
obj-$(USE_DIO)-$(CFG_PPC) += Dio.o
obj-$(USE_DIO)-$(CFG_TMS570) += Dio_Hw_tms570.o


inc-$(USE_DIO) += $(ROOTDIR)/mcal/Dio/inc
inc-$(USE_DIO) += $(ROOTDIR)/mcal/Dio/src
vpath-$(USE_DIO) += $(ROOTDIR)/mcal/Dio/src
