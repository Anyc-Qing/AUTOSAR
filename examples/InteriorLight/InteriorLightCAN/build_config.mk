
# Version of build system
REQUIRED_BUILD_SYSTEM_VERSION=1.0.0

# Get configuration makefiles
-include ../config/$(BOARDDIR)/Rte/Config/*.mk
-include ../config/$(BOARDDIR)/*.mk

# Project settings
SELECT_CONSOLE = TTY_WINIDEA
SELECT_OPT = OPT_DEBUG 

