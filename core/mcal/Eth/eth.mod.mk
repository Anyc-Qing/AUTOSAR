#Ethernet
obj-$(USE_ETH) += Eth.o
obj-$(USE_ETH) += Eth_PBcfg.o
obj-$(USE_ETH)-$(CFG_JAC6) += Eth_jacinto.o
obj-$(USE_ETH)-$(CFG_RH850F1H) += Eth_rh850f1h.o
obj-$(USE_ETH)-$(CFG_ZYNQ)     += Eth_zc702.o
obj-$(USE_ETH)-$(CFG_MPC5777C) += Eth_Fec_mpc5xxx.o
obj-$(USE_ETH)-$(if $(CFG_MPC5748G)$(CFG_MPC5747C)$(CFG_MPC5746C),y) += Eth_mpc5xxx.o

vpath-$(USE_ETH) += $(ROOTDIR)/mcal/Eth/src
inc-$(USE_ETH) += $(ROOTDIR)/mcal/Eth/inc
inc-$(USE_ETH) += $(ROOTDIR)/mcal/Eth/src
