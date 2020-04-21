# Can
obj-$(USE_CAN)-$(CFG_TMS570) += Can_Hw_tms570.o
obj-$(USE_CAN)-$(CFG_TMS570) += Can.o
obj-$(USE_CAN)-$(CFG_TMS570) += Can_Irq.o

obj-$(USE_CAN_DCAN) += Can_dcan.o
obj-$(USE_CAN_DCAN) += Can_dcan_Hw_tms570.o
obj-$(USE_CAN_DCAN) += Can_dcan_irq.o

vpath-$(USE_CAN_DCAN) += $(ROOTDIR)/mcal/Can_dcan/src
inc-$(USE_CAN_DCAN) += $(ROOTDIR)/mcal/Can_dcan/src
inc-$(USE_CAN_DCAN) += $(ROOTDIR)/mcal/Can_dcan/inc
pb-obj-$(USE_CAN_DCAN) += Can_dcan_PBcfg.o
pb-pc-file-$(USE_CAN_DCAN) += Can_dcan_Cfg.h 


obj-$(USE_CAN)-$(CFG_JACINTO) += Can_Hw_jacinto.o
obj-$(USE_CAN)-$(CFG_JACINTO) += Can_jacinto.o

ifdef CFG_MPC5777M
obj-$(USE_CAN)-$(CFG_MPC5777M) += Can_mcan.o
else
obj-$(USE_CAN)-$(CFG_PPC) += Can_mpc5xxx.o
endif
obj-$(USE_CAN)-$(CFG_STM32) += Can_stm32.o
obj-$(USE_CAN)-$(CFG_ZYNQ) += CanZynq.o
obj-$(USE_CAN)-$(CFG_RH850) += CanZynq.o
obj-$(USE_CAN)-$(CFG_RH850) += Can_rscan.o

pb-obj-$(USE_CAN) += Can_PBcfg.o
pb-pc-file-$(USE_CAN) += Can_Cfg.h 
obj-$(USE_CAN)-$(CFG_ZYNQ) += Can_zynq.o
vpath-$(USE_CAN)-$(if $(CFG_ARMV7_AR)$(CFG_RH850),y) += $(ROOTDIR)/mcal/Can/src
inc-$(USE_CAN)-$(if $(CFG_ARMV7_AR)$(CFG_RH850),y) += $(ROOTDIR)/mcal/Can/src

vpath-$(USE_CAN)-$(if $(CFG_JACINTO)$(CFG_TMS570),y) += $(ROOTDIR)/mcal/Can/src

vpath-$(USE_CAN)+= $(ROOTDIR)/mcal/Can/src

inc-$(USE_CAN)-$(CFG_ZYNQ) += $(ROOTDIR)/drivers/Can

inc-$(USE_CAN) += $(ROOTDIR)/mcal/Can/inc
inc-$(USE_CAN) += $(ROOTDIR)/mcal/Can/src
inc-$(USE_CAN) += $(ROOTDIR)/system/EcuM/inc
inc-$(USE_CAN) += $(ROOTDIR)/system/Os/rtos/inc
inc-$(USE_CAN) += $(ROOTDIR)/integration