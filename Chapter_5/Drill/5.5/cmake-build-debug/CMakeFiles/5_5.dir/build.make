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
CMAKE_SOURCE_DIR = /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/5_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/5_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/5_5.dir/flags.make

CMakeFiles/5_5.dir/main.cpp.o: CMakeFiles/5_5.dir/flags.make
CMakeFiles/5_5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/5_5.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/5_5.dir/main.cpp.o -c /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/main.cpp

CMakeFiles/5_5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/5_5.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/main.cpp > CMakeFiles/5_5.dir/main.cpp.i

CMakeFiles/5_5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/5_5.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/main.cpp -o CMakeFiles/5_5.dir/main.cpp.s

# Object files for target 5_5
5_5_OBJECTS = \
"CMakeFiles/5_5.dir/main.cpp.o"

# External object files for target 5_5
5_5_EXTERNAL_OBJECTS =

5_5: CMakeFiles/5_5.dir/main.cpp.o
5_5: CMakeFiles/5_5.dir/build.make
5_5: CMakeFiles/5_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 5_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/5_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/5_5.dir/build: 5_5

.PHONY : CMakeFiles/5_5.dir/build

CMakeFiles/5_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/5_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/5_5.dir/clean

CMakeFiles/5_5.dir/depend:
	cd /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5 /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5 /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/cmake-build-debug /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/cmake-build-debug /Users/davidp/Desktop/Principles/Chapter_5/Drill/5.5/cmake-build-debug/CMakeFiles/5_5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/5_5.dir/depend

