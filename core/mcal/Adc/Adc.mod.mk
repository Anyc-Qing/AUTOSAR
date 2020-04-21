#ADC
obj-$(USE_ADC)-$(CFG_TMS570) += Adc.o
obj-$(USE_ADC)-$(CFG_TMS570) += Adc_Hw_tms570.o
obj-$(USE_ADC)-$(CFG_TMS570) += Adc_Irq.o
obj-$(USE_ADC)-$(CFG_RH850) += Adc.o
obj-$(USE_ADC)-$(CFG_RH850) += Adc_rh850.o
obj-$(USE_ADC)-$(CFG_MPC560X) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC560X) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5668) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5668) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5744P) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5744P) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5777M) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5777M) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5748G) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5748G) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5747C) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5747C) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5746C) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5746C) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5645S) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5645S) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5646B) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5646B) += Adc.o
obj-$(USE_ADC)-$(CFG_MPC5643L) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_MPC5643L) += Adc.o
obj-$(USE_ADC)-$(CFG_SPC56XL70) += Adc_Hw_mpc5xxx.o
obj-$(USE_ADC)-$(CFG_SPC56XL70) += Adc.o
obj-$(USE_ADC)-$(CFG_STM32F1X) += Adc_stm32.o
obj-$(USE_ADC)-$(CFG_MPC5516) += Adc_eQADC.o
obj-$(USE_ADC)-$(CFG_MPC5567) += Adc_eQADC.o
obj-$(USE_ADC)-$(CFG_MPC563XM) += Adc_eQADC.o
obj-$(USE_ADC)-$(CFG_MPC5644A) += Adc_eQADC.o
obj-$(USE_ADC)-$(CFG_MPC5777C) += Adc_eQADC.o
obj-$(USE_ADC)-$(CFG_ZYNQ) += Adc_zynq.o
obj-$(USE_ADC)-$(CFG_JACINTO) += Adc.o
obj-$(USE_ADC)-$(CFG_JAC5) += Adc_jacinto.o
obj-$(USE_ADC)-$(CFG_JAC5E) += Adc_jacinto.o
obj-$(USE_ADC)-$(CFG_JAC6) += AdcOnSpi.o
obj-$(USE_ADC) += Adc_Cfg.o

# Different helper functions for different arch's
ifeq ($(CFG_TMS570)$(CFG_RH850)$(CFG_JACINTO)$(CFG_MPC5744P),y)
obj-$(USE_ADC) += Adc_Hw_Common.o 
else
obj-$(USE_ADC) += Adc_Hw_Helpers.o
endif

vpath-$(USE_ADC) += $(ROOTDIR)/mcal/Adc/src
inc-$(USE_ADC) += $(ROOTDIR)/mcal/Adc/inc
inc-$(USE_ADC) += $(ROOTDIR)/mcal/Adc/src

# New style ADC driver
vpath-$(CFG_TMS570) += $(ROOTDIR)/mcal/Adc/src
inc-$(CFG_TMS570) += $(ROOTDIR)/mcal/Adc/inc
inc-$(CFG_TMS570) += $(ROOTDIR)/mcal/Adc/src

vpath-$(CFG_RH850) += $(ROOTDIR)/mcal/Adc/src
inc-$(CFG_RH850) += $(ROOTDIR)/mcal/Adc/inc

vpath-$(CFG_JACINTO5) += $(ROOTDIR)/mcal/Adc/src
inc-$(CFG_JACINTO5) += $(ROOTDIR)/mcal/Adc/inc


