# Version of build system
REQUIRED_BUILD_SYSTEM_VERSION=1.0.0

# Get configuration makefiles
-include ../config/$(BOARDDIR)/Rte/Config/Rte.mk
-include ../config/Rte/Config/Rte.mk

-include ../config/$(BOARDDIR)/*.mk
-include ../config/*.mk

# Project settings
SELECT_CONSOLE = TTY_WINIDEA
CFG+=TIMER TIMER_GLOBAL

ifeq ($(COMPILER),$(filter $(COMPILER),ghs armcc))
SELECT_OPT = OPT_DEBUG
else
SELECT_OPT = OPT_RELEASE
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),mpc5604b_xpc560b zynq_zc702))
MOD_USE += FLS EEP
endif

ifeq ($(BOARDDIR),$(filter $(BOARDDIR),stm32_stm3210c))
MOD_AVAIL += WDG
endif


ifneq ($(BOARDDIR),$(filter $(BOARDDIR),jacinto5e))
MOD_USE += WDG
endif

