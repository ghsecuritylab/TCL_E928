include $(TOPDIR)/config.mk
ifneq ($(OBJTREE),$(SRCTREE))
endif

INCS		:=
CFLAGS		+= $(INCS)
HOSTCFLAGS	+= $(INCS)

LIB	= $(obj)lib$(BOARD).a

COBJS	+= ../../xilinx/ppc440-generic/xilinx_ppc440_generic.o

SOBJS	+= ../../xilinx/ppc440-generic/init.o

SRCS	:= $(SOBJS:.o=.S) $(COBJS:.o=.c)
OBJS	:= $(addprefix $(obj),$(COBJS))
SOBJS	:= $(addprefix $(obj),$(SOBJS))

$(LIB):	$(OBJS) $(SOBJS)
	$(AR) $(ARFLAGS) $@ $^

clean:
	rm -f $(SOBJS) $(OBJS)

distclean:	clean
	rm -f $(LIB) core *.bak .depend

#########################################################################

# defines $(obj).depend target
include $(SRCTREE)/rules.mk

sinclude $(obj).depend

#########################################################################
