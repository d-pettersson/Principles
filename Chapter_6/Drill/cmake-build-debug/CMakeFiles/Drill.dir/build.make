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
CMAKE_SOURCE_DIR = /Users/davidp/Desktop/Principles/Chapter_6/Drill

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/davidp/Desktop/Principles/Chapter_6/Drill/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Drill.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Drill.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Drill.dir/flags.make

CMakeFiles/Drill.dir/main.cpp.o: CMakeFiles/Drill.dir/flags.make
CMakeFiles/Drill.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/davidp/Desktop/Principles/Chapter_6/Drill/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Drill.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Drill.dir/main.cpp.o -c /Users/davidp/Desktop/Principles/Chapter_6/Drill/main.cpp

CMakeFiles/Drill.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drill.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidp/Desktop/Principles/Chapter_6/Drill/main.cpp > CMakeFiles/Drill.dir/main.cpp.i

CMakeFiles/Drill.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drill.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidp/Desktop/Principles/Chapter_6/Drill/main.cpp -o CMakeFiles/Drill.dir/main.cpp.s

# Object files for target Drill
Drill_OBJECTS = \
"CMakeFiles/Drill.dir/main.cpp.o"

# External object files for target Drill
Drill_EXTERNAL_OBJECTS =

Drill: CMakeFiles/Drill.dir/main.cpp.o
Drill: CMakeFiles/Drill.dir/build.make
Drill: CMakeFiles/Drill.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/davidp/Desktop/Principles/Chapter_6/Drill/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Drill"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drill.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Drill.dir/build: Drill

.PHONY : CMakeFiles/Drill.dir/build

CMakeFiles/Drill.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Drill.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Drill.dir/clean

CMakeFiles/Drill.dir/depend:
	cd /Users/davidp/Desktop/Principles/Chapter_6/Drill/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/davidp/Desktop/Principles/Chapter_6/Drill /Users/davidp/Desktop/Principles/Chapter_6/Drill /Users/davidp/Desktop/Principles/Chapter_6/Drill/cmake-build-debug /Users/davidp/Desktop/Principles/Chapter_6/Drill/cmake-build-debug /Users/davidp/Desktop/Principles/Chapter_6/Drill/cmake-build-debug/CMakeFiles/Drill.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Drill.dir/depend

