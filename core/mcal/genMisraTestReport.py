#!/usr/bin/env python
# -*- coding: latin-1 -*-

###
### Copyright 2009-2017 ArcCore GmbH. All rights reserved.
###

"""ARCCORE MISRA Test Report Generator
"""

__author__ = "ARCCORE"
__date__ = "05 May 2017"

__version__ = "$Revision: 2017-05-24 $"
__credits__ = """Copyright 2009-2017 Arccore GmbH. All rights reserved.
"""

# Known bugs that can't be fixed here:
# N/A


import sys
import os
import subprocess

# Global definitions

MCAL_MODULES = ["Adc/", "Can/", "Dio/", "Gpt/", "Mcu/", "Port/", "Pwm/", "Spi/", "Wdg/"]

MISRADEVREPLOC   = "../scripts/misraDeviationReporter/"
MISRARULESLOC    = "../scripts/pclint/lnt/"
MISRAEXCEPTSLOC  = "test_config/"
MISRAREPORTLOC   = "Reports/"

# Global used command definitions

print "\n"
print "===================================="
print "Start to generate the reports       "
print "===================================="
print "\n"

#enables to execute the script by double click on the explorer
os.chdir(os.path.dirname(os.path.realpath(__file__)))

for module in MCAL_MODULES:

	cmd_misra_report            =                    "python "
	cmd_misra_report            = cmd_misra_report + MISRADEVREPLOC
	cmd_misra_report            = cmd_misra_report + "misraDeviationReporter.py"
	cmd_misra_report            = cmd_misra_report + " -r "
	cmd_misra_report            = cmd_misra_report + MISRARULESLOC
	cmd_misra_report            = cmd_misra_report + "au-misra3.lnt"
	cmd_misra_report            = cmd_misra_report + " -e "
	cmd_misra_report            = cmd_misra_report + MISRAEXCEPTSLOC
	cmd_misra_report            = cmd_misra_report + "mdr_exceptions.txt"
	cmd_misra_report            = cmd_misra_report + " -i "
	cmd_misra_report            = cmd_misra_report + module
	cmd_misra_report            = cmd_misra_report + " -o "
	cmd_misra_report            = cmd_misra_report + MISRAREPORTLOC + module
#	cmd_misra_report            = cmd_misra_report + " -d"
	cmd_misra_report            = cmd_misra_report + " -a"
	cmd_misra_report            = cmd_misra_report + " -c"
	cmd_misra_report            = cmd_misra_report + " --csv"

	try:
		print cmd_misra_report
		os.system(cmd_misra_report)
		print "INFO: MISRA Test Report Generator - reporting SUCCESSFULLY done"
	except:
		print "ERROR: MISRA Test Report Generator - reporting FAILURE"
        
print "\n"
print "===================================="
print "Finished to generate the reports    "
print "===================================="
print "\n"

if __name__ == '__main__':
    pass
