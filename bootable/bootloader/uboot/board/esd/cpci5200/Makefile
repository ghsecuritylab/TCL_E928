include $(TOPDIR)/config.mk
# ifneq ($(OBJTREE),$(SRCTREE))
# $(shell mkdir -p $(obj)../common/xilinx_jtag)
# endif

LIB	= $(obj)lib$(BOARD).a

# Objects for Xilinx JTAG programming (CPLD)
# CPLD  = ../common/xilinx_jtag/lenval.o \
#	  ../common/xilinx_jtag/micro.o \
#	  ../common/xilinx_jtag/ports.o

# COBJS	= $(BOARD).o flash.o $(CPLD)
COBJS	= $(BOARD).o strataflash.o

SRCS	:= $(SOBJS:.o=.S) $(COBJS:.o=.c)
OBJS	:= $(addprefix $(obj),$(COBJS))
SOBJS	:= $(addprefix $(obj),$(SOBJS))

$(LIB):	$(obj).depend $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

clean:
	rm -f $(SOBJS) $(OBJS)

distclean:	clean
	rm -f $(LIB) core *.bak $(obj).depend

#########################################################################

# defines $(obj).depend target
include $(SRCTREE)/rules.mk

sinclude $(obj).depend

#########################################################################
