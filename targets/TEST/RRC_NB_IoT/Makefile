VPATH = build:$(OPENAIR2_DIR)/UTIL/LOG

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
LOG_DIR=$(OPENAIR2_TOP)/UTIL/LOG



COMMON_DIR = $(OPENAIR2_TOP)/COMMON


LOG_OBJS =  $(LOG_DIR)/log.o 
LOG_OBJS +=  $(LOG_DIR)/vcd_signal_dumper.o
OPT_OBJS =  $(OPT_DIR)/probe.o


OBJ = $(RRC_TEST_BUILD)/oaisim.o 
SYSOBJ = $(RRC_TEST_BUILD)/system.o
LOG_OBJS =  $(LOG_DIR)/log.o 
LOG_OBJS +=  $(LOG_DIR)/vcd_signal_dumper.o

L2_OBJS=$(LOG_OBJS) 



all:	rrcsim

rrcsim: $(OBJ) $(SYSOBJ) $(L2_OBJS) 
	cc  -o rrcsim $(OBJ) $(SYSOBJ) $(L2_OBJS) 

$(OBJ): 
	cc -o $(OBJ) -c oaisim.c

$(SYSOBJ): $(UTILS_DIR)/system.c $(UTILS_DIR)/system.h
	cc -o $(SYSOBJ) -c $(UTILS_DIR)/system.c



$(L2_OBJS) : %.o : %.c
	$(CC) -c  -o $@ $<

clean:
	rm -f rrcsim
	rm -f $(OBJ)
	rm -f $(SYSOBJ)
	rm -f $(L2_OBJS)
	rm -f *.exe*