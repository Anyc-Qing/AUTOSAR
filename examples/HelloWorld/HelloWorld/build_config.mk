# Version of build system
REQUIRED_BUILD_SYSTEM_VERSION=1.0.0

# Get configuration makefiles
-include ../config/$(BOARDDIR)/Rte/Config/Rte.mk
-include ../config/Rte/Config/Rte.mk

-include ../config/$(BOARDDIR)/*.mk
-include ../config/*.mk

LINT_EXCLUDE_PATHS += /Rte/Config

# Project settings
SELECT_CONSOLE = TTY_WINIDEA
ALLOW_LINT_WARNINGS=y
CFG+=TIMER TIMER_GLOBAL

ifeq ($(COMPILER),$(filter $(COMPILER),ghs armcc))
SELECT_OPT = OPT_DEBUG
else
SELECT_OPT = OPT_DEBUG
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),mpc5604b_xpc560b zynq_zc702))
MOD_USE += FLS EEP
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),mpc5746c_mpc574xg_mb))
MOD_USE += FLS EEP
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),mpc5748g_mpc574xg_mb))
MOD_USE += FLS EEP
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),mpc5777c_mpc57xx_mb))
MOD_USE += FLS EEP
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),stm32_stm3210c))
MOD_USE += FLS
MOD_AVAIL += WDG
ALLOW_LINT_WARNINGS=n
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),mpc5777m_mmb))
#The mpc5777m does not have a PWM. A dummy PWM is added to be able to use
#the same configuration as for the others.
MOD_AVAIL += PWM 
MOD_USE += FLS
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),rh850f1l))
MOD_USE += EEP
RH850_PARTNUM = RF7010243
endif

ifneq ($(BOARDDIR),$(filter $(BOARDDIR),jacinto5e))
ifneq ($(BOARDDIR),$(filter $(BOARDDIR),jacinto6))
MOD_USE += WDG
endif
endif
ifeq ($(BOARDDIR),$(filter $(BOARDDIR),stm32_stm3210c jacinto5e jacinto6))
#CFG += T1_ENABLE #Turns on T1
#CFG += T1_DISABLE_FLEX #Turns of T1 flex support. Must be disabled in order to use a debugger.
#CFG+=GENERATE_T1 #turn on/off running T1 perl script. Not supported by msys so must be running in msys2 at the moment
endif
