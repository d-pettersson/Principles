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
CMAKE_SOURCE_DIR = /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Exercices.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exercices.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exercices.dir/flags.make

CMakeFiles/Exercices.dir/3.4.cpp.o: CMakeFiles/Exercices.dir/flags.make
CMakeFiles/Exercices.dir/3.4.cpp.o: ../3.4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exercices.dir/3.4.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Exercices.dir/3.4.cpp.o -c /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/3.4.cpp

CMakeFiles/Exercices.dir/3.4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exercices.dir/3.4.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/3.4.cpp > CMakeFiles/Exercices.dir/3.4.cpp.i

CMakeFiles/Exercices.dir/3.4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exercices.dir/3.4.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/3.4.cpp -o CMakeFiles/Exercices.dir/3.4.cpp.s

# Object files for target Exercices
Exercices_OBJECTS = \
"CMakeFiles/Exercices.dir/3.4.cpp.o"

# External object files for target Exercices
Exercices_EXTERNAL_OBJECTS =

Exercices: CMakeFiles/Exercices.dir/3.4.cpp.o
Exercices: CMakeFiles/Exercices.dir/build.make
Exercices: CMakeFiles/Exercices.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exercices"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exercices.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exercices.dir/build: Exercices

.PHONY : CMakeFiles/Exercices.dir/build

CMakeFiles/Exercices.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exercices.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exercices.dir/clean

CMakeFiles/Exercices.dir/depend:
	cd /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4 /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4 /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/cmake-build-debug /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/cmake-build-debug /Users/davidp/Desktop/Principles/Chapter_3/Exercices/3.4/cmake-build-debug/CMakeFiles/Exercices.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exercices.dir/depend

