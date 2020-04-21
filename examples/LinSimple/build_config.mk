
# Version of build system
REQUIRED_BUILD_SYSTEM_VERSION=1.0.0

# Get configuration makefiles
-include ../config/$(BOARDDIR)/Rte/Config/Rte.mk
-include ../config/Rte/Config/Rte.mk

-include ../config/$(BOARDDIR)/*.mk
-include ../config/*.mk


# Project settings

SELECT_CONSOLE = RAMLOG

SELECT_OPT = OPT_DEBUG 

