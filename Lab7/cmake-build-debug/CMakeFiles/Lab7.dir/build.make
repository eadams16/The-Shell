# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /home/eadams16/Documents/CLion/CLion-2019.1/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/eadams16/Documents/CLion/CLion-2019.1/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eadams16/Desktop/CSCD340/Lab7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab7.dir/flags.make

CMakeFiles/Lab7.dir/pipes/pipes.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/pipes/pipes.c.o: ../pipes/pipes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab7.dir/pipes/pipes.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/pipes/pipes.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/pipes/pipes.c

CMakeFiles/Lab7.dir/pipes/pipes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/pipes/pipes.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/pipes/pipes.c > CMakeFiles/Lab7.dir/pipes/pipes.c.i

CMakeFiles/Lab7.dir/pipes/pipes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/pipes/pipes.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/pipes/pipes.c -o CMakeFiles/Lab7.dir/pipes/pipes.c.s

CMakeFiles/Lab7.dir/process/process.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/process/process.c.o: ../process/process.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Lab7.dir/process/process.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/process/process.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/process/process.c

CMakeFiles/Lab7.dir/process/process.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/process/process.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/process/process.c > CMakeFiles/Lab7.dir/process/process.c.i

CMakeFiles/Lab7.dir/process/process.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/process/process.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/process/process.c -o CMakeFiles/Lab7.dir/process/process.c.s

CMakeFiles/Lab7.dir/tokenize/makeArgs.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/tokenize/makeArgs.c.o: ../tokenize/makeArgs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Lab7.dir/tokenize/makeArgs.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/tokenize/makeArgs.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/tokenize/makeArgs.c

CMakeFiles/Lab7.dir/tokenize/makeArgs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/tokenize/makeArgs.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/tokenize/makeArgs.c > CMakeFiles/Lab7.dir/tokenize/makeArgs.c.i

CMakeFiles/Lab7.dir/tokenize/makeArgs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/tokenize/makeArgs.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/tokenize/makeArgs.c -o CMakeFiles/Lab7.dir/tokenize/makeArgs.c.s

CMakeFiles/Lab7.dir/utils/myUtils.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/utils/myUtils.c.o: ../utils/myUtils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Lab7.dir/utils/myUtils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/utils/myUtils.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/utils/myUtils.c

CMakeFiles/Lab7.dir/utils/myUtils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/utils/myUtils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/utils/myUtils.c > CMakeFiles/Lab7.dir/utils/myUtils.c.i

CMakeFiles/Lab7.dir/utils/myUtils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/utils/myUtils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/utils/myUtils.c -o CMakeFiles/Lab7.dir/utils/myUtils.c.s

CMakeFiles/Lab7.dir/cscd340Lab7.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/cscd340Lab7.c.o: ../cscd340Lab7.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Lab7.dir/cscd340Lab7.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/cscd340Lab7.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/cscd340Lab7.c

CMakeFiles/Lab7.dir/cscd340Lab7.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/cscd340Lab7.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/cscd340Lab7.c > CMakeFiles/Lab7.dir/cscd340Lab7.c.i

CMakeFiles/Lab7.dir/cscd340Lab7.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/cscd340Lab7.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/cscd340Lab7.c -o CMakeFiles/Lab7.dir/cscd340Lab7.c.s

CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.o: ../fileUtils/fileUtils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/fileUtils/fileUtils.c

CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/fileUtils/fileUtils.c > CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.i

CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/fileUtils/fileUtils.c -o CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.s

CMakeFiles/Lab7.dir/linkedlist/linkedList.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/linkedlist/linkedList.c.o: ../linkedlist/linkedList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/Lab7.dir/linkedlist/linkedList.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/linkedlist/linkedList.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/linkedlist/linkedList.c

CMakeFiles/Lab7.dir/linkedlist/linkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/linkedlist/linkedList.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/linkedlist/linkedList.c > CMakeFiles/Lab7.dir/linkedlist/linkedList.c.i

CMakeFiles/Lab7.dir/linkedlist/linkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/linkedlist/linkedList.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/linkedlist/linkedList.c -o CMakeFiles/Lab7.dir/linkedlist/linkedList.c.s

CMakeFiles/Lab7.dir/linkedlist/listUtils.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/linkedlist/listUtils.c.o: ../linkedlist/listUtils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/Lab7.dir/linkedlist/listUtils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/linkedlist/listUtils.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/linkedlist/listUtils.c

CMakeFiles/Lab7.dir/linkedlist/listUtils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/linkedlist/listUtils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/linkedlist/listUtils.c > CMakeFiles/Lab7.dir/linkedlist/listUtils.c.i

CMakeFiles/Lab7.dir/linkedlist/listUtils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/linkedlist/listUtils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/linkedlist/listUtils.c -o CMakeFiles/Lab7.dir/linkedlist/listUtils.c.s

CMakeFiles/Lab7.dir/myCommand/myCommand.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/myCommand/myCommand.c.o: ../myCommand/myCommand.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/Lab7.dir/myCommand/myCommand.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/myCommand/myCommand.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/myCommand/myCommand.c

CMakeFiles/Lab7.dir/myCommand/myCommand.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/myCommand/myCommand.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/myCommand/myCommand.c > CMakeFiles/Lab7.dir/myCommand/myCommand.c.i

CMakeFiles/Lab7.dir/myCommand/myCommand.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/myCommand/myCommand.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/myCommand/myCommand.c -o CMakeFiles/Lab7.dir/myCommand/myCommand.c.s

CMakeFiles/Lab7.dir/myAlias/myAlias.c.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/myAlias/myAlias.c.o: ../myAlias/myAlias.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/Lab7.dir/myAlias/myAlias.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab7.dir/myAlias/myAlias.c.o   -c /home/eadams16/Desktop/CSCD340/Lab7/myAlias/myAlias.c

CMakeFiles/Lab7.dir/myAlias/myAlias.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab7.dir/myAlias/myAlias.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/eadams16/Desktop/CSCD340/Lab7/myAlias/myAlias.c > CMakeFiles/Lab7.dir/myAlias/myAlias.c.i

CMakeFiles/Lab7.dir/myAlias/myAlias.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab7.dir/myAlias/myAlias.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/eadams16/Desktop/CSCD340/Lab7/myAlias/myAlias.c -o CMakeFiles/Lab7.dir/myAlias/myAlias.c.s

# Object files for target Lab7
Lab7_OBJECTS = \
"CMakeFiles/Lab7.dir/pipes/pipes.c.o" \
"CMakeFiles/Lab7.dir/process/process.c.o" \
"CMakeFiles/Lab7.dir/tokenize/makeArgs.c.o" \
"CMakeFiles/Lab7.dir/utils/myUtils.c.o" \
"CMakeFiles/Lab7.dir/cscd340Lab7.c.o" \
"CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.o" \
"CMakeFiles/Lab7.dir/linkedlist/linkedList.c.o" \
"CMakeFiles/Lab7.dir/linkedlist/listUtils.c.o" \
"CMakeFiles/Lab7.dir/myCommand/myCommand.c.o" \
"CMakeFiles/Lab7.dir/myAlias/myAlias.c.o"

# External object files for target Lab7
Lab7_EXTERNAL_OBJECTS =

Lab7: CMakeFiles/Lab7.dir/pipes/pipes.c.o
Lab7: CMakeFiles/Lab7.dir/process/process.c.o
Lab7: CMakeFiles/Lab7.dir/tokenize/makeArgs.c.o
Lab7: CMakeFiles/Lab7.dir/utils/myUtils.c.o
Lab7: CMakeFiles/Lab7.dir/cscd340Lab7.c.o
Lab7: CMakeFiles/Lab7.dir/fileUtils/fileUtils.c.o
Lab7: CMakeFiles/Lab7.dir/linkedlist/linkedList.c.o
Lab7: CMakeFiles/Lab7.dir/linkedlist/listUtils.c.o
Lab7: CMakeFiles/Lab7.dir/myCommand/myCommand.c.o
Lab7: CMakeFiles/Lab7.dir/myAlias/myAlias.c.o
Lab7: CMakeFiles/Lab7.dir/build.make
Lab7: CMakeFiles/Lab7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking C executable Lab7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab7.dir/build: Lab7

.PHONY : CMakeFiles/Lab7.dir/build

CMakeFiles/Lab7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab7.dir/clean

CMakeFiles/Lab7.dir/depend:
	cd /home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eadams16/Desktop/CSCD340/Lab7 /home/eadams16/Desktop/CSCD340/Lab7 /home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug /home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug /home/eadams16/Desktop/CSCD340/Lab7/cmake-build-debug/CMakeFiles/Lab7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab7.dir/depend

