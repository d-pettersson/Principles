# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/whilefortest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/whilefortest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/whilefortest.dir/flags.make

CMakeFiles/whilefortest.dir/main.cpp.o: CMakeFiles/whilefortest.dir/flags.make
CMakeFiles/whilefortest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/whilefortest.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/whilefortest.dir/main.cpp.o -c /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/main.cpp

CMakeFiles/whilefortest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/whilefortest.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/main.cpp > CMakeFiles/whilefortest.dir/main.cpp.i

CMakeFiles/whilefortest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/whilefortest.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/main.cpp -o CMakeFiles/whilefortest.dir/main.cpp.s

# Object files for target whilefortest
whilefortest_OBJECTS = \
"CMakeFiles/whilefortest.dir/main.cpp.o"

# External object files for target whilefortest
whilefortest_EXTERNAL_OBJECTS =

whilefortest: CMakeFiles/whilefortest.dir/main.cpp.o
whilefortest: CMakeFiles/whilefortest.dir/build.make
whilefortest: CMakeFiles/whilefortest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable whilefortest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/whilefortest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/whilefortest.dir/build: whilefortest

.PHONY : CMakeFiles/whilefortest.dir/build

CMakeFiles/whilefortest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/whilefortest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/whilefortest.dir/clean

CMakeFiles/whilefortest.dir/depend:
	cd /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/cmake-build-debug /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/cmake-build-debug /Users/davidp/Desktop/Principles/Chapter_5/Exercises/whilefortest/cmake-build-debug/CMakeFiles/whilefortest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/whilefortest.dir/depend

