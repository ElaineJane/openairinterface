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
CMAKE_SOURCE_DIR = /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/test_kdf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_kdf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_kdf.dir/flags.make

CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o: CMakeFiles/test_kdf.dir/flags.make
CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o: /home/momo/openairinterface5g/openair3/TEST/test_kdf.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o   -c /home/momo/openairinterface5g/openair3/TEST/test_kdf.c

CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/momo/openairinterface5g/openair3/TEST/test_kdf.c > CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.i

CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/momo/openairinterface5g/openair3/TEST/test_kdf.c -o CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.s

CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o.requires:
.PHONY : CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o.requires

CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o.provides: CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o.requires
	$(MAKE) -f CMakeFiles/test_kdf.dir/build.make CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o.provides.build
.PHONY : CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o.provides

CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o.provides.build: CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o

# Object files for target test_kdf
test_kdf_OBJECTS = \
"CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o"

# External object files for target test_kdf
test_kdf_EXTERNAL_OBJECTS =

test_kdf: CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o
test_kdf: CMakeFiles/test_kdf.dir/build.make
test_kdf: libSECU_CN.a
test_kdf: libUTIL.a
test_kdf: libLFDS.a
test_kdf: CMakeFiles/test_kdf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable test_kdf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_kdf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_kdf.dir/build: test_kdf
.PHONY : CMakeFiles/test_kdf.dir/build

CMakeFiles/test_kdf.dir/requires: CMakeFiles/test_kdf.dir/home/momo/openairinterface5g/openair3/TEST/test_kdf.c.o.requires
.PHONY : CMakeFiles/test_kdf.dir/requires

CMakeFiles/test_kdf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_kdf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_kdf.dir/clean

CMakeFiles/test_kdf.dir/depend:
	cd /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build /home/momo/openairinterface5g/cmake_targets/oaisim_noS1_build_oai/build/CMakeFiles/test_kdf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_kdf.dir/depend

