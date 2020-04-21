# Gpt
obj-$(USE_GPT) += Gpt_Cfg.o

obj-$(USE_GPT)-$(CFG_TMS570) += Gpt.o
obj-$(USE_GPT)-$(CFG_TMS570) += Gpt_Hw_tms570.o

obj-$(USE_GPT)-$(CFG_JACINTO) += Gpt.o
obj-$(USE_GPT)-$(CFG_JACINTO) += Gpt_jacinto.o

obj-$(USE_GPT)-$(CFG_RH850) += Gpt.o
obj-$(USE_GPT)-$(CFG_RH850) += Gpt_tauj.o

obj-$(USE_GPT)-$(CFG_PPC) += Gpt_mpc5xxx.o

obj-$(USE_GPT)-$(CFG_STM32) += Gpt_stm32.o

obj-$(USE_GPT)-$(CFG_ZYNQ) += Gpt_zynq.o

inc-$(USE_GPT) += $(ROOTDIR)/mcal/Gpt/inc
inc-$(USE_GPT) += $(ROOTDIR)/mcal/Gpt/src
vpath-$(USE_GPT) += $(ROOTDIR)/mcal/Gpt/src



