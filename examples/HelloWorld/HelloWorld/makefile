
# Project name, used for output files et.c.
PROJECTNAME = HelloWorld



# Default settings
include $(ROOTDIR)/scripts/project_defaults.mk
LINT_EXCLUDE_PATHS += $(PROJECT_DIR)/config/stm32_stm3210c/Rte
LINT_EXCLUDE_PATHS += $(PROJECT_DIR)/config/stm32_stm3210c/Rte/Contract
LINT_EXCLUDE_PATHS += $(PROJECT_DIR)/config/stm32_stm3210c/Rte/Config
LINT_EXCLUDE_PATHS += $(PROJECT_DIR)/config/stm32_stm3210c/Rte/MemMap
LINT_EXCLUDE_PATHS += core/arch/arm/armv7_m/drivers_stm32/STM32_ETH_Driver
LINT_EXCLUDE_PATHS += core/arch/arm/armv7_m/drivers_stm32/STM32F10x_StdPeriph_Driver

#include $(ROOTDIR)/scripts/rules.mk
VPATH += ../includes
inc-y += ../includes

VPATH += ../config/$(board_name)
inc-y += ../config/$(board_name)
def-y+=USE_LDEBUG_PRINTF
def-y+=DLT_UNIT_TEST=STD_OFF
def-y+=DEM_UNIT_TEST=STD_OFF

# Project files (adds all .c files in src directory)
VPATH += ../src
inc-y += ../src
PROJECT_C_FILES=$(notdir $(wildcard ../src/*.c))
obj-y += $(PROJECT_C_FILES:%.c=%.o)
def-y += USE_LDEBUG_PRINTF
inc-y += ..


ifneq ($(BOARDDIR),mpc5777m_mmb)

ifeq ($(COMPILER),gcc)
CFLAGS_Rte.o += -Werror
CFLAGS_Rte_Main.o += -Werror
CFLAGS_Rte_Calprms.o += -Werror
CFLAGS_Rte_Internal.o += -Werror
CFLAGS_Rte_Callbacks.o += -Werror
CFLAGS_Rte_Fifo.o += -Werror
CFLAGS_Rte_BswM.o += -Werror
CFLAGS_Rte_ComM.o += -Werror
CFLAGS_Rte_Dcm.o += -Werror
CFLAGS_Rte_Dem.o += -Werror
CFLAGS_Rte_Det.o += -Werror
CFLAGS_Rte_Dlt.o += -Werror
CFLAGS_Rte_EcuM.o += -Werror
CFLAGS_Rte_IoHwAb.o += -Werror
CFLAGS_Rte_SwcReaderType.o += -Werror
CFLAGS_Rte_SwcWriterType.o += -Werror
CFLAGS_Rte_WdgM.o += -Werror
CFLAGS_DcmCallbacks.o += -Werror
CFLAGS_Dem_Callbacks.o += -Werror
CFLAGS_IoHwAb.o += -Werror
CFLAGS_PlatformTasks.o += -Werror
CFLAGS_SbcCdd.o += -Werror
CFLAGS_SpiCallbacks.o += -Werror
CFLAGS_SwcReader.o += -Werror
CFLAGS_SwcWriter.o += -Werror
CFLAGS_os_hooks.o += -Werror
CFLAGS_Os_Cfg.o += -Werror
CFLAGS_EcuM.o += -Werror
CFLAGS_EcuM_Fixed.o += -Werror
CFLAGS_EcuM_Main.o += -Werror
CFLAGS_EcuM_PBcfg.o += -Werror
CFLAGS_EcuM_PBHeader.o += -Werror
CFLAGS_EcuM_GeneratedCallouts.o += -Werror
CFLAGS_EcuM_Callout_Stubs.o += -Werror
CFLAGS_Crc.o += -Werror
CFLAGS_Crc_8.o += -Werror
CFLAGS_Crc_16.o += -Werror
CFLAGS_Crc_32.o += -Werror
#CFLAGS_BswM.o += -Werror
CFLAGS_Mcu.o += -Werror
CFLAGS_Mcu_LCfg.o += -Werror
CFLAGS_Mcu_PBcfg.o += -Werror
CFLAGS_Port.o += -Werror
CFLAGS_Port_Lcfg.o += -Werror
CFLAGS_Port_PBcfg.o += -Werror
CFLAGS_Fls.o += -Werror
CFLAGS_Fls_Cfg.o += -Werror
CFLAGS_Can.o += -Werror
CFLAGS_Can_PBcfg.o += -Werror
CFLAGS_CanIf.o += -Werror
CFLAGS_CanIf_Cfg.o += -Werror
CFLAGS_CanIf_PBCfg.o += -Werror
CFLAGS_CanTp.o += -Werror
CFLAGS_CanTp_PBCfg.o += -Werror
CFLAGS_Dio.o += -Werror
CFLAGS_Dio_Lcfg.o += -Werror
CFLAGS_Adc_Cfg.o += -Werror
CFLAGS_Adc_Internal.o += -Werror
CFLAGS_arch_krn.o += -Werror
CFLAGS_os_event.o += -Werror
CFLAGS_os_init.o += -Werror
CFLAGS_arch.o += -Werror
CFLAGS_os_task.o += -Werror
CFLAGS_os_resource.o += -Werror
CFLAGS_os_alarm.o += -Werror
CFLAGS_os_sched_table.o += -Werror
CFLAGS_os_counter.o += -Werror
CFLAGS_sys_tick.o += -Werror
CFLAGS_os_isr.o += -Werror
CFLAGS_os_arctest.o += -Werror
CFLAGS_os_application.o += -Werror
CFLAGS_irq.o += -Werror
CFLAGS_NvM.o += -Werror
CFLAGS_NvM_Cfg.o += -Werror
CFLAGS_MemIf.o += -Werror
CFLAGS_Fee.o += -Werror
CFLAGS_Fee_Cfg.o += -Werror
CFLAGS_Wdg.o += -Werror
CFLAGS_Wdg_Lcfg.o += -Werror
CFLAGS_ComM_Cfg.o += -Werror
CFLAGS_CanSM.o += -Werror
CFLAGS_CanSM_Internal.o += -Werror
CFLAGS_CanSM_LCfg.o += -Werror
CFLAGS_Com_Cfg.o += -Werror
CFLAGS_Com_PbCfg.o += -Werror
CFLAGS_Com_Com.o += -Werror
CFLAGS_Com_Sched.o += -Werror
CFLAGS_Com.o += -Werror
CFLAGS_Com_misc.o += -Werror
CFLAGS_PduR_CanNm.o += -Werror
CFLAGS_PduR_Com.o += -Werror
CFLAGS_PduR_Logic.o += -Werror
CFLAGS_PduR_LinIf.o += -Werror
CFLAGS_PduR_CDD_LinSlvIf.o += -Werror
CFLAGS_PduR_CddPduR.o += -Werror
CFLAGS_PduR_PbCfg.o += -Werror
CFLAGS_PduR_Cfg.o += -Werror
CFLAGS_PduR_CanIf.o += -Werror
CFLAGS_PduR_CanTp.o += -Werror
CFLAGS_PduR_J1939Tp.o += -Werror
CFLAGS_PduR_IpduM.o += -Werror
CFLAGS_PduR_Dcm.o += -Werror
CFLAGS_PduR_SoAd.o += -Werror
CFLAGS_PduR_Routing.o += -Werror
CFLAGS_PduR.o += -Werror
CFLAGS_PduR_FrIf.o += -Werror
CFLAGS_PduR_FrNm.o += -Werror
CFLAGS_PduR_FrTp.o += -Werror
CFLAGS_PduR_UdpNm.o += -Werror
CFLAGS_PduR_LdCom.o += -Werror
CFLAGS_IoHwAb_Digital.o += -Werror
CFLAGS_IoHwAb_Analog.o += -Werror
CFLAGS_IoHwAb_Pwm.o += -Werror
CFLAGS_Dem.o += -Werror
CFLAGS_Dem_LCfg.o += -Werror
CFLAGS_Dcm.o += -Werror
CFLAGS_Dcm_Dsp.o += -Werror
CFLAGS_Dcm_Dsd.o += -Werror
CFLAGS_Dcm_Dsl.o += -Werror
CFLAGS_Dcm_ROE.o += -Werror
CFLAGS_Dcm_Internal.o += -Werror
CFLAGS_Dcm_LCfg.o += -Werror
CFLAGS_Dcm_Callout_Stubs.o += -Werror
CFLAGS_Xcp.o += -Werror
CFLAGS_XcpOnCan.o += -Werror
CFLAGS_XcpOnEth.o += -Werror
CFLAGS_Xcp_Program.o += -Werror
CFLAGS_Xcp_Memory.o += -Werror
CFLAGS_Xcp_MemoryHelper.o += -Werror
CFLAGS_Xcp_Cfg.o += -Werror
CFLAGS_Xcp_Callout_Stubs.o += -Werror
CFLAGS_cirq_buffer.o += -Werror
CFLAGS_version.o += -Werror
CFLAGS_serial_dbg_winidea.o += -Werror
CFLAGS_clib_port.o += -Werror
CFLAGS_clib.o += -Werror
CFLAGS_printf.o += -Werror
CFLAGS_xtoa.o += -Werror
CFLAGS_Adc.o += -Werror
CFLAGS_Pwm.o += -Werror
CFLAGS_timer_dwt.o += -Werror

ifeq ($(BOARDDIR),tmdx570ls12hdk)
CFLAGS_epwm.o += -Werror
CFLAGS_Adc_tms570.o += -Werror
CFLAGS_Wdg_PBcfg.o += -Werror
CFLAGS_Mcu_armv7ar_handlers.o += -Werror
CFLAGS_Mcu_tms570.o += -Werror
endif

ifeq ($(BOARDDIR),stm32_stm3210c)
CFLAGS_stm32f10x_can.o += -Werror
CFLAGS_stm32f10x_gpio.o += -Werror
CFLAGS_stm32f10x_adc.o += -Werror
CFLAGS_stm32f10x_dma.o += -Werror
CFLAGS_stm32f10x_flash.o += -Werror
CFLAGS_stm32f10x_tim.o += -Werror
CFLAGS_arm_cortex_mx_handlers.o += -Werror
CFLAGS_arm_cortex_mx_callout_stubs.o += -Werror
#CFLAGS_SwcMem.o += -Werror
CFLAGS_startup_stm32fx.o += -Werror
CFLAGS_stm32f10x_rcc.o += -Werror
CFLAGS_Mcu_Arc_Jacinto.o += -Werror
endif
#
ifeq ($(BOARDDIR),zynq_zc702)
CFLAGS_QspiIf.o += -Werror
CFLAGS_xqspips_g.o += -Werror
CFLAGS_xqspips_hw.o += -Werror
CFLAGS_xqspips_options.o += -Werror
CFLAGS_xqspips_selftest.o += -Werror
CFLAGS_xqspips_sinit.o += -Werror
CFLAGS_xqspips.o += -Werror
CFLAGS_Can_zynq.o += -Werror
CFLAGS_Spi_zynq.o += -Werror
endif
endif

endif

ifeq ($(CFG_GENERATE_T1),y)
T1_GEN_PATH ?= .\..
T1_PATH ?= $(PROJECT_DIR)

all-mod += $(T1_PATH)/T1/src/T1_config.h

$(T1_PATH)/T1/src/T1_config.h:
	@echo Generating $@
	cmd /c "$(T1_GEN_PATH)\T1\make\T1_ArcOs\T1_projGen.bat"
endif

#################### Arctic Core make system ######################
# Following is an explanation of the most usable features 
# of the Arctic Core make system.
#
# obj-y : list of object files to build.
# VPATH : list of directories in which to
#         look for source files.
# inc-y : list of directories in which to
#         look for header files.
# libitem-y : list of libraries to include. 
# build-exe-y : the name of build the output file.
# ldcmdfile-y: path to linkscript, used when building "build-exe-y"
#
# For more information see:
# http://arccore.com/wiki/Makesystem
###################################################################
