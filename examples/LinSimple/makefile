
# Project name, used for output files et.c.
PROJECTNAME = Lin_prj
# Default settings
include $(ROOTDIR)/scripts/project_defaults.mk

# Project files (adds all .c files in project root)
PROJECT_C_FILES=$(notdir $(wildcard ../*.c))
obj-y += $(PROJECT_C_FILES:%.c=%.o)

ifeq ($(COMPILER),gcc)
#CFLAGS_Tasks.o += -Werror
CFLAGS_init.o += -Werror
CFLAGS_Os_Cfg.o += -Werror
CFLAGS_EcuM.o += -Werror
CFLAGS_EcuM_Fixed.o += -Werror
CFLAGS_EcuM_Main.o += -Werror
CFLAGS_EcuM_PBcfg.o += -Werror
CFLAGS_EcuM_PBHeader.o += -Werror
CFLAGS_EcuM_Callout_Stubs.o += -Werror
CFLAGS_Mcu.o += -Werror
CFLAGS_Mcu_Cfg.o += -Werror
CFLAGS_mpc5xxx_handlers.o += -Werror
CFLAGS_mpc5xxx_callout_stubs.o += -Werror
CFLAGS_Mcu_Arc_Cfg.o += -Werror
CFLAGS_Cpu.o += -Werror
CFLAGS_mm.o += -Werror
CFLAGS_Port.o += -Werror
CFLAGS_Port_Cfg.o += -Werror
CFLAGS_event.o += -Werror
CFLAGS_os_init.o += -Werror
CFLAGS_arch.o += -Werror
CFLAGS_task.o += -Werror
CFLAGS_resource.o += -Werror
CFLAGS_alarm.o += -Werror
CFLAGS_sched_table.o += -Werror
CFLAGS_counter.o += -Werror
CFLAGS_sys_tick.o += -Werror
CFLAGS_isr.o += -Werror
CFLAGS_os_arctest.o += -Werror
CFLAGS_application.o += -Werror
CFLAGS_irq.o += -Werror
CFLAGS_Det.o += -Werror
CFLAGS_Det_Cfg.o += -Werror
CFLAGS_Lin_PBcfg.o += -Werror
CFLAGS_Lin_Lcfg.o += -Werror
CFLAGS_LinIf_Lcfg.o += -Werror
CFLAGS_LinIf_PBcfg.o += -Werror
CFLAGS_LinIf.o += -Werror
CFLAGS_LinSM_Lcfg.o += -Werror
CFLAGS_LinSM_Cfg.o += -Werror
CFLAGS_LinSM.o += -Werror
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
CFLAGS_ramlog.o += -Werror
CFLAGS_cirq_buffer.o += -Werror
CFLAGS_xtoa.o += -Werror
CFLAGS_msl_port.o += -Werror
CFLAGS_Mcu_Arc_mpc56xx.o += -Werror
CFLAGS_LinFlex.o += -Werror
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
