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

# Utility rule file for generate_T.

# Include the progress variables for this target.
include CMakeFiles/generate_T.dir/progress.make

CMakeFiles/generate_T: /home/momo/openairinterface5g/common/utils/T/T_IDs.h

/home/momo/openairinterface5g/common/utils/T/T_IDs.h: /home/momo/openairinterface5g/common/utils/T/T_messages.txt
	$(CMAKE_COMMAND) -E cmake_progress_report /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating /home/momo/openairinterface5g/common/utils/T/T_IDs.h"
	cd /home/momo/openairinterface5g/common/utils/T && make

generate_T: CMakeFiles/generate_T
generate_T: /home/momo/openairinterface5g/common/utils/T/T_IDs.h
generate_T: CMakeFiles/generate_T.dir/build.make
.PHONY : generate_T

# Rule to build all files generated by this target.
CMakeFiles/generate_T.dir/build: generate_T
.PHONY : CMakeFiles/generate_T.dir/build

CMakeFiles/generate_T.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/generate_T.dir/cmake_clean.cmake
.PHONY : CMakeFiles/generate_T.dir/clean

CMakeFiles/generate_T.dir/depend:
	cd /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build /home/momo/openairinterface5g/cmake_targets/oaisim_build_oai/build/CMakeFiles/generate_T.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/generate_T.dir/depend

