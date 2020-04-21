#SPI
obj-$(USE_SPI) += Spi_Lcfg.o
obj-$(USE_SPI)-$(CFG_MPC55XX) += Spi.o
obj-$(USE_SPI)-$(CFG_MPC55XX) += Spi_dspi.o
obj-$(USE_SPI)-$(CFG_MPC55XX) += Spi_Helpers.o
obj-$(USE_SPI)-$(CFG_MPC56XX) += Spi.o
obj-$(USE_SPI)-$(CFG_ZYNQ) += Spi.o
obj-$(USE_SPI)-$(CFG_ZYNQ) += Spi_zynq.o
obj-$(USE_SPI)-$(CFG_ZYNQ) += Spi_Helpers.o
obj-$(USE_SPI)-$(CFG_TMS570) += Spi.o
obj-$(USE_SPI)-$(CFG_TMS570) += Spi_Hw_tms570.o
obj-$(USE_SPI)-$(CFG_TMS570) += Spi_Irq.o
obj-$(USE_SPI)-$(CFG_MPC56XX) += Spi_dspi.o
obj-$(USE_SPI)-$(CFG_JACINTO) += Spi.o
obj-$(USE_SPI)-$(CFG_JACINTO) += Spi_jacinto.o
obj-$(USE_SPI)-$(CFG_JACINTO) += Spi_Helpers.o
obj-$(USE_SPI)-$(CFG_RH850) += Spi.o
obj-$(USE_SPI)-$(CFG_RH850) += Spi_csih.o
obj-$(USE_SPI)-$(CFG_RH850) += Spi_Helpers.o

vpath-$(USE_SPI) += $(ROOTDIR)/mcal/Spi/src
inc-$(USE_SPI)+= $(ROOTDIR)/mcal/Spi/inc
inc-$(USE_SPI)+= $(ROOTDIR)/mcal/Spi/src
