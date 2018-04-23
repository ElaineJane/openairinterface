# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/ulsim.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ulsim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ulsim.dir/flags.make

CMakeFiles/messages_xml.h: CMakeFiles/messages.xml
CMakeFiles/messages_xml.h: CMakeFiles/Rel14/asn1_constants.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/messages_xml.h"
	sed -e 's/ *//' -e 's/"/\\"/g' -e 's/^/"/' -e 's/$$/\\n"/' /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/messages.xml > /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/messages_xml.h

CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_decoder.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_encoder.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_xer_print.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_compare.c
CMakeFiles/messages.xml: CMakeFiles/R10.5/s1ap_ies_defs.h
CMakeFiles/messages.xml: CMakeFiles/Rel14/asn1_constants.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/messages.xml"
	gccxml -DCMAKE_BUILD_TYPE="RelWithDebInfo" -DCMAKER -DFIRMWARE_VERSION="No\ svn\ information" -DPACKAGE_VERSION="Branch:\ master\ Abrev.\ Hash:\ 47b3844\ Date:\ Thu\ Apr\ 19\ 13:11:08\ 2018\ +0800" -DPACKAGE_BUGREPORT="openair4g-devel@lists.eurecom.fr" -DXFORMS -DPRINT_STATS -DENABLE_ITTI -DRel14=1 -DS1AP_VERSION=R10 -DX2AP_VERSION=R11 -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=2 -DNB_ANTENNAS_TXRX=2 -DNone=1 -DENABLE_SECURITY -DENABLE_USE_MME -DNO_RRM -DUSER_MODE -DRRC_DEFAULT_RAB_IS_AM -DOAISIM -DOAI_NW_DRIVER_USE_NETLINK -DPACKAGE_NAME="oaisim" -DENB_MODE -DENABLE_PGM_TRANSPORT -DOAI_EMU -DPHY_ABSTRACTION -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_VCD -DLINUX -DLOG_NO_THREAD -DOPENAIR_LTE -DDRIVER2013 -DENABLE_FXP -DENABLE_NEW_MULTICAST -DEXMIMO_IOT -DMAX_NUM_CCs=1 -DNEW_FFT -DOPENAIR1 -DPC_DSP -DPC_TARGET -DPHYSIM -DPUCCH -DENABLE_NAS_UE_LOGGING -DNAS_BUILT_IN_UE -DNAS_UE -DMAC_CONTEXT -DJUMBO_FRAME -DOPENAIR2 -DTRACE_RLC_MUTEX -DPDCP_USE_NETLINK -DLINK_ENB_PDCP_TO_GTPV1U -DRRC_DEFAULT_RAB_IS_AM -DNETTLE_VERSION_MAJOR=2 -DNETTLE_VERSION_MINOR=7 -DASN1_MINIMUM_VERSION=924 -I/home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/Rel14 -I/home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/R10.5 -I/home/momo/openairinterface5g/openair3/S1AP -I/home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/R11.2 -I/home/momo/openairinterface5g/openair2/X2AP -I/home/momo/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/momo/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/momo/openairinterface5g/targets/ARCH/USRP/USERSPACE/LIB -I/home/momo/openairinterface5g/targets/ARCH/BLADERF/USERSPACE/LIB -I/home/momo/openairinterface5g/targets/ARCH/LMSSDR/USERSPACE/LIB -I/home/momo/openairinterface5g/targets/ARCH/ETHERNET/USERSPACE/LIB -I/home/momo/openairinterface5g/targets/ARCH/mobipass -I/home/momo/openairinterface5g/targets/ARCH/COMMON -I/home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles -I/home/momo/openairinterface5g/openair2/COMMON -I/home/momo/openairinterface5g/openair2/UTIL -I/home/momo/openairinterface5g/openair2/UTIL/LOG -I/home/momo/openairinterface5g/openair3/COMMON -I/home/momo/openairinterface5g/openair3/UTILS -I/home/momo/openairinterface5g/openair1 -I/home/momo/openairinterface5g/openair2/NAS -I/home/momo/openairinterface5g/openair2 -I/home/momo/openairinterface5g/openair2/LAYER2/RLC -I/home/momo/openairinterface5g/openair2/LAYER2/RLC/AM_v9.3.0 -I/home/momo/openairinterface5g/openair2/LAYER2/RLC/UM_v9.3.0 -I/home/momo/openairinterface5g/openair2/LAYER2/RLC/TM_v9.3.0 -I/home/momo/openairinterface5g/openair2/LAYER2/PDCP_v10.1.0 -I/home/momo/openairinterface5g/openair2/RRC/LITE/MESSAGES -I/home/momo/openairinterface5g/openair2/RRC/LITE -I/home/momo/openairinterface5g/openair3/RAL-LTE/INTERFACE-802.21/INCLUDE -I/home/momo/openairinterface5g/openair3/RAL-LTE/LTE_RAL_ENB/INCLUDE -I/home/momo/openairinterface5g/openair3/RAL-LTE/LTE_RAL_UE/INCLUDE -I/home/momo/openairinterface5g/common/utils -I/home/momo/openairinterface5g/common/utils/itti -I/home/momo/openairinterface5g/openair3/NAS/COMMON -I/home/momo/openairinterface5g/openair3/NAS/COMMON/API/NETWORK -I/home/momo/openairinterface5g/openair3/NAS/COMMON/EMM/MSG -I/home/momo/openairinterface5g/openair3/NAS/COMMON/ESM/MSG -I/home/momo/openairinterface5g/openair3/NAS/COMMON/IES -I/home/momo/openairinterface5g/openair3/NAS/COMMON/UTIL -I/home/momo/openairinterface5g/openair3/SECU -I/home/momo/openairinterface5g/openair3/SCTP -I/home/momo/openairinterface5g/openair3/S1AP -I/home/momo/openairinterface5g/openair2/X2AP -I/home/momo/openairinterface5g/openair3/UDP -I/home/momo/openairinterface5g/openair3/GTPV1-U -I/home/momo/openairinterface5g/targets/COMMON -I/home/momo/openairinterface5g/targets/ARCH/COMMON -I/home/momo/openairinterface5g/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/momo/openairinterface5g/targets/ARCH/EXMIMO/DEFS -I/home/momo/openairinterface5g/openair2/ENB_APP -I/home/momo/openairinterface5g/openair2/ENB_APP/CONTROL_MODULES/MAC -I/home/momo/openairinterface5g/openair2/UTIL/OSA -I/home/momo/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/home/momo/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/inc -I/home/momo/openairinterface5g/openair2/UTIL/MEM -I/home/momo/openairinterface5g/openair2/UTIL/LISTS -I/home/momo/openairinterface5g/openair2/UTIL/FIFO -I/home/momo/openairinterface5g/openair2/UTIL/OCG -I/home/momo/openairinterface5g/openair2/UTIL/MATH -I/home/momo/openairinterface5g/openair2/UTIL/TIMER -I/home/momo/openairinterface5g/openair2/UTIL/OMG -I/home/momo/openairinterface5g/openair2/UTIL/OTG -I/home/momo/openairinterface5g/openair2/UTIL/CLI -I/home/momo/openairinterface5g/openair2/UTIL/OPT -I/home/momo/openairinterface5g/openair2/UTIL/OMV -I/home/momo/openairinterface5g/openair2/RRC/LITE/MESSAGES -I/home/momo/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/shared -I/home/momo/openairinterface5g/openair3/GTPV1-U/nw-gtpv1u/include -I/home/momo/openairinterface5g -I/home/momo/openairinterface5g/common/utils/hashtable -I/home/momo/openairinterface5g/common/utils/msc -I/home/momo/openairinterface5g/openair3/NAS/UE -I/home/momo/openairinterface5g/openair3/NAS/UE/API/USER -I/home/momo/openairinterface5g/openair3/NAS/UE/API/USIM -I/home/momo/openairinterface5g/openair3/NAS/UE/EMM -I/home/momo/openairinterface5g/openair3/NAS/UE/EMM/SAP -I/home/momo/openairinterface5g/openair3/NAS/UE/ESM -I/home/momo/openairinterface5g/openair3/NAS/UE/ESM/SAP -I/home/momo/openairinterface5g/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/home/momo/openairinterface5g/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/src -I/usr/include/libxml2 -I/usr/include/libxml2 -I/usr/include/pgm-5.1 -I/usr/lib/x86_64-linux-gnu/pgm-5.1/include -I/usr/include/atlas -I/usr/include/X11 -I/home/momo/openairinterface5g/common/utils/T -std=gnu89 -fxml=/home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/messages.xml /home/momo/openairinterface5g/common/utils/itti/intertask_interface_types.h

CMakeFiles/Rel14/asn1_constants.h: /home/momo/openairinterface5g/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/RRC-e10.asn
	$(CMAKE_COMMAND) -E cmake_progress_report /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/Rel14/asn1_constants.h"
	/home/momo/openairinterface5g/cmake_targets/tools/generate_asn1 /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/Rel14 /home/momo/openairinterface5g/openair2/RRC/LITE/MESSAGES/asn1c/ASN1_files/RRC-e10.asn
	/home/momo/openairinterface5g/cmake_targets/tools/fix_asn1 /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/Rel14 RRC Rel14

CMakeFiles/R10.5/s1ap_decoder.c: /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-Constants.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn
CMakeFiles/R10.5/s1ap_decoder.c: /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn
	$(CMAKE_COMMAND) -E cmake_progress_report /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating CMakeFiles/R10.5/s1ap_decoder.c, CMakeFiles/R10.5/s1ap_encoder.c, CMakeFiles/R10.5/s1ap_xer_print.c, CMakeFiles/R10.5/s1ap_compare.c, CMakeFiles/R10.5/s1ap_ies_defs.h"
	/home/momo/openairinterface5g/cmake_targets/tools/generate_asn1 /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/R10.5 /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-CommonDataTypes.asn /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-Constants.asn /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU.asn
	python /home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/asn1tostruct.py -f/home/momo/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-PDU-Contents.asn -o/home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/R10.5
	/home/momo/openairinterface5g/cmake_targets/tools/fix_asn1 /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/R10.5 S1AP R10

CMakeFiles/R10.5/s1ap_encoder.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_xer_print.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_compare.c: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/R10.5/s1ap_ies_defs.h: CMakeFiles/R10.5/s1ap_decoder.c

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o: CMakeFiles/ulsim.dir/flags.make
CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o: /home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o   -c /home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c > CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.i

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c -o CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.s

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o.requires:
.PHONY : CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o.requires

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o.provides: CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o.requires
	$(MAKE) -f CMakeFiles/ulsim.dir/build.make CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o.provides.build
.PHONY : CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o.provides

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o.provides.build: CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o: CMakeFiles/ulsim.dir/flags.make
CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o: /home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o   -c /home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c > CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.i

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c -o CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.s

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires:
.PHONY : CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides: CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires
	$(MAKE) -f CMakeFiles/ulsim.dir/build.make CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides.build
.PHONY : CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides

CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.provides.build: CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o

# Object files for target ulsim
ulsim_OBJECTS = \
"CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o" \
"CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o"

# External object files for target ulsim
ulsim_EXTERNAL_OBJECTS =

ulsim: CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o
ulsim: CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o
ulsim: CMakeFiles/ulsim.dir/build.make
ulsim: libSIMU.a
ulsim: libUTIL.a
ulsim: libSCHED_LIB.a
ulsim: libPHY.a
ulsim: libLFDS.a
ulsim: libITTI.a
ulsim: libLFDS7.a
ulsim: CMakeFiles/ulsim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable ulsim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ulsim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ulsim.dir/build: ulsim
.PHONY : CMakeFiles/ulsim.dir/build

CMakeFiles/ulsim.dir/requires: CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/SIMULATION/LTE_PHY/ulsim.c.o.requires
CMakeFiles/ulsim.dir/requires: CMakeFiles/ulsim.dir/home/momo/openairinterface5g/openair1/PHY/TOOLS/lte_phy_scope.c.o.requires
.PHONY : CMakeFiles/ulsim.dir/requires

CMakeFiles/ulsim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ulsim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ulsim.dir/clean

CMakeFiles/ulsim.dir/depend: CMakeFiles/messages_xml.h
CMakeFiles/ulsim.dir/depend: CMakeFiles/messages.xml
CMakeFiles/ulsim.dir/depend: CMakeFiles/Rel14/asn1_constants.h
CMakeFiles/ulsim.dir/depend: CMakeFiles/R10.5/s1ap_decoder.c
CMakeFiles/ulsim.dir/depend: CMakeFiles/R10.5/s1ap_encoder.c
CMakeFiles/ulsim.dir/depend: CMakeFiles/R10.5/s1ap_xer_print.c
CMakeFiles/ulsim.dir/depend: CMakeFiles/R10.5/s1ap_compare.c
CMakeFiles/ulsim.dir/depend: CMakeFiles/R10.5/s1ap_ies_defs.h
	cd /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/ulsim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ulsim.dir/depend

