
# Project name, used for output files et.c.
PROJECTNAME = LedBlinker

# Default settings
include $(ROOTDIR)/scripts/project_defaults.mk

VPATH += ../src
inc-y += ../src

# Project files (adds all .c files in project root)
PROJECT_C_FILES=$(notdir $(wildcard ../src/*.c))
obj-y += $(PROJECT_C_FILES:%.c=%.o)
def-y+=USE_LDEBUG_PRINTF

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

ifeq ($(COMPILER),gcc)
CFLAGS_xqspips_selftest.o += -Werror
CFLAGS_Rte.o += -Werror
CFLAGS_Rte_Main.o += -Werror
CFLAGS_Rte_Calprms.o += -Werror
CFLAGS_Rte_Internal.o += -Werror
CFLAGS_Rte_Buffers.o += -Werror
CFLAGS_Rte_Internal_IoHwAb.o += -Werror
CFLAGS_Rte_Internal_LedBlinkerSWC.o += -Werror
CFLAGS_Rte_Cbk.o += -Werror
CFLAGS_Rte_Fifo.o += -Werror
CFLAGS_Rte_IoHwAb.o += -Werror
CFLAGS_Rte_LedBlinkerSWC.o += -Werror
CFLAGS_IoHwAb.o += -Werror
CFLAGS_LedBlinkerSWC.o += -Werror
CFLAGS_OsIdleTask.o += -Werror
CFLAGS_startup_stm32fx.o += -Werror
CFLAGS_stm32f10x_rcc.o += -Werror
CFLAGS_Os_Cfg.o += -Werror
CFLAGS_arc_assert.o += -Werror
CFLAGS_EcuM_PBHeader.o += -Werror
CFLAGS_EcuM_GeneratedCallouts.o += -Werror
CFLAGS_Mcu.o += -Werror
CFLAGS_Mcu_LCfg.o += -Werror
CFLAGS_Mcu_PBcfg.o += -Werror
CFLAGS_Port.o += -Werror
CFLAGS_Port_Lcfg.o += -Werror
CFLAGS_Port_PBcfg.o += -Werror
CFLAGS_arm_cortex_mx_handlers.o += -Werror
CFLAGS_arm_cortex_mx_callout_stubs.o += -Werror
CFLAGS_Dio.o += -Werror
CFLAGS_Dio_Lcfg.o += -Werror
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
CFLAGS_Det.o += -Werror
CFLAGS_Det_Cfg.o += -Werror
CFLAGS_Com_Cfg.o += -Werror
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
CFLAGS_PduR_SecOC.o += -Werror
CFLAGS_IoHwAb_Analog.o += -Werror
CFLAGS_IoHwAb_Pwm.o += -Werror
CFLAGS_ramlog.o += -Werror
CFLAGS_cirq_buffer.o += -Werror
CFLAGS_version.o += -Werror
CFLAGS_clib_port.o += -Werror
CFLAGS_printf.o += -Werror
CFLAGS_xtoa.o += -Werror
CFLAGS_stm32f10x_gpio.o += -Werror
CFLAGS_Mcu_Arc_Common.o += -Werror
CFLAGS_Com_PbCfg.o += -Werror
CFLAGS_PduR_PbCfg.o += -Werror
endif