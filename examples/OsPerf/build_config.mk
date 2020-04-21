
# Version of build system
REQUIRED_BUILD_SYSTEM_VERSION=1.0.0

# Get configuration makefiles
-include ../config/*.mk
-include ../config/$(board_name)/*.mk

MOD_USE += SCHM DET
CFG += TIMER
CFG += TIMER_SCTM
CFG += OS_PERF
CFG +=PERF_FUNC
CFG += SHELL

# Project settings

ifneq ($(filter $(board_name),mpc5744p_mmb mpc5645s_demo_v2),)
CFG+=SHELL
SELECT_CONSOLE=TTY_SCI
endif

SELECT_CONSOLE ?= RAMLOG
SELECT_OPT ?= OPT_DEBUG


