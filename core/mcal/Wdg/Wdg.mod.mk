#Wdg
obj-$(USE_WDG) += Wdg_Lcfg.o
obj-$(USE_WDG)-$(CFG_MPC5748G) += Wdg_PBcfg.o
obj-$(USE_WDG)-$(CFG_MPC5746C) += Wdg_PBcfg.o
obj-$(USE_WDG)-$(CFG_ZYNQ) += Wdg_PBcfg.o
obj-$(USE_WDG)-$(CFG_RH850) += Wdg_PBcfg.o
obj-$(USE_WDG)-$(CFG_RH850) += $(ROOTDIR)/mcal/Wdg/src/Wdg_rh850f1h.o
obj-$(USE_WDG)-$(CFG_PPC) += Wdg_Hw_mpc5xxx.o
obj-$(USE_WDG)-$(CFG_PPC) += Wdg.o
obj-$(USE_WDG)-$(CFG_MPC5777C) += Wdg_PBcfg.o
obj-$(USE_WDG)-$(CFG_STM32) += Wdg_stm32.o
obj-$(USE_WDG)-$(CFG_ZYNQ) += Wdg_zynq.o
obj-$(USE_WDG)-$(CFG_TMS570) += Wdg_PBcfg.o
obj-$(USE_WDG)-$(CFG_TMS570) += Wdg_Hw_tms570.o
obj-$(USE_WDG)-$(CFG_TMS570) += Wdg_Irq.o
obj-$(USE_WDG)-$(CFG_TMS570) += Wdg.o
obj-$(USE_WDG)-$(CFG_RH850) += $(ROOTDIR)/drivers/Wdg/Wdg.o


inc-y += $(ROOTDIR)/mcal/Wdg/inc
inc-y += $(ROOTDIR)/mcal/Wdg/src
vpath-$(USE_WDG)-$(CFG_RH850) += $(ROOTDIR)/drivers/Wdg
vpath-$(USE_WDG)-$(CFG_TMS570) += $(ROOTDIR)/mcal/Wdg/src
vpath-$(USE_WDG)-$(CFG_MPC5748G) += $(ROOTDIR)/mcal/Wdg/src
vpath-$(USE_WDG)-$(CFG_MPC5746C) += $(ROOTDIR)/mcal/Wdg/src
vpath-$(USE_WDG)-$(CFG_ZYNQ) += $(ROOTDIR)/mcal/Wdg/src
vpath-$(USE_WDG)-$(CFG_PPC) += $(ROOTDIR)/mcal/Wdg/src
vpath-$(USE_WDG)-$(CFG_STM32) += $(ROOTDIR)/mcal/Wdg/src

