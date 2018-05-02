

INC =  -I $(OPENAIR2_DIR)/COMMON -I $(ITTI_DIR)
TESTDIR=$(OPENAIR_TARGETS)/TEST
RRC_TEST_NBDIR=$(TESTDIR)/RRC_NB_IoT
RRC_TEST_BUILD=$(RRC_TEST_NBDIR)/build



TOP_DIR      = $(OPENAIR1_DIR)
OPENAIR1_TOP = $(OPENAIR1_DIR)
OPENAIR2_TOP = $(OPENAIR2_DIR)
OPENAIR3_TOP = $(OPENAIR3_DIR)
OPENAIR3     = $(OPENAIR3_DIR)
COMMON = $(OPENAIR_DIR)/common
UTILS_DIR= $(COMMON)/utils
ITTI_DIR = $(UTILS_DIR)/itti
LOG_DIR=$(OPENAIR2_TOP)/UTIL/LOG
L2_COMMON = $(OPENAIR2_DIR)/COMMON


COMMON_DIR = $(OPENAIR2_TOP)/COMMON


LOG_OBJS =  $(LOG_DIR)/log.o 
LOG_OBJS +=  $(LOG_DIR)/vcd_signal_dumper.o
OPT_OBJS =  $(OPT_DIR)/probe.o


OBJ = $(RRC_TEST_BUILD)/oaisim.o 
SYSOBJ = $(RRC_TEST_BUILD)/system.o
LOG_OBJS =  $(LOG_DIR)/log.o 
LOG_OBJS +=  $(LOG_DIR)/vcd_signal_dumper.o

L2_OBJS=$(LOG_OBJS) 
ITTI_OBJS = $(RRC_TEST_BUILD)/intertask_interface.o $(RRC_TEST_BUILD)/intertask_interface_dump.o  $(RRC_TEST_BUILD)/signals.o $(RRC_TEST_BUILD)/timer.o
ITTI_FILES =  $(ITTI_DIR)/intertask_interface.c  $(ITTI_DIR)/intertask_interface.h  $(ITTI_DIR)/assertions.h $(ITTI_DIR)/intertask_interface_dump.h  $(ITTI_DIR)/intertask_interface_init.h $(ITTI_DIR)/signals.h $(ITTI_DIR)/timer.h
ITTI_FILES += $(ITTI_DIR)/intertask_interface_dump.c $(ITTI_DIR)/signals.c $(ITTI_DIR)/timer.c
LIBS = libITTI.a

all:	rrcsim

rrcsim: $(OBJ) $(SYSOBJ) $(ITTI_OBJS)
	cc -o rrcsim $(OBJ) $(SYSOBJ) $(ITTI_OBJS) $LIBS

$(OBJ): 
	cc -o $(OBJ) -c oaisim.c

$(SYSOBJ): $(UTILS_DIR)/system.c $(UTILS_DIR)/system.h
	cc -o $(SYSOBJ) -c $(UTILS_DIR)/system.c

#$(RRC_TEST_BUILD)/intertask_interface.o: intertask_interface.h assertions.h intertask_interface_dump.h  intertask_interface_init.h signals.h timer.h \
#		$(L2_COMMON)/intertask_interface_conf.h
#	cc  -I /home/momo/openairinterface5g/openair2/COMMON -I /home/momo/openairinterface5g/common/utils/itti -o $@ -c $<
#$(RRC_TEST_BUILD)/intertask_interface_dump.o:  intertask_interface.h assertions.h intertask_interface_dump.h itti_types.h intertask_interface_conf.h
#	cc  -I $(OPENAIR2_DIR/COMMON) -I $(ITTI_DIR) -o $@ -c $<
#$(RRC_TEST_BUILD)/signals.o: intertask_interface.h assertions.h signals.h timer.h backtrace.h  log.h intertask_interface_conf.h
#	cc  -I $(OPENAIR2_DIR/COMMON) -I $(ITTI_DIR) -o $@ -c $<
#$(RRC_TEST_BUILD)/timer.o: intertask_interface.h assertions.h log.h queue.h intertask_interface_conf.h
#	cc  -I $(OPENAIR2_DIR/COMMON) -I $(ITTI_DIR) -o $@ -c $<

clean:
	rm -f rrcsim
	rm -f $(OBJ)
	rm -f $(SYSOBJ)
	rm -f $(L2_OBJS)
	rm -f $(ITTI_OBJS)
	rm -f *.exe*