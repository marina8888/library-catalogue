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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/marina/Developer/GitHub/library-catalogue-system

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/marina/Developer/GitHub/library-catalogue-system/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cw2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cw2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cw2.dir/flags.make

CMakeFiles/cw2.dir/main.cpp.o: CMakeFiles/cw2.dir/flags.make
CMakeFiles/cw2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marina/Developer/GitHub/library-catalogue-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cw2.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cw2.dir/main.cpp.o -c /Users/marina/Developer/GitHub/library-catalogue-system/main.cpp

CMakeFiles/cw2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cw2.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marina/Developer/GitHub/library-catalogue-system/main.cpp > CMakeFiles/cw2.dir/main.cpp.i

CMakeFiles/cw2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cw2.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marina/Developer/GitHub/library-catalogue-system/main.cpp -o CMakeFiles/cw2.dir/main.cpp.s

CMakeFiles/cw2.dir/function.cpp.o: CMakeFiles/cw2.dir/flags.make
CMakeFiles/cw2.dir/function.cpp.o: ../function.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/marina/Developer/GitHub/library-catalogue-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cw2.dir/function.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cw2.dir/function.cpp.o -c /Users/marina/Developer/GitHub/library-catalogue-system/function.cpp

CMakeFiles/cw2.dir/function.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cw2.dir/function.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/marina/Developer/GitHub/library-catalogue-system/function.cpp > CMakeFiles/cw2.dir/function.cpp.i

CMakeFiles/cw2.dir/function.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cw2.dir/function.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/marina/Developer/GitHub/library-catalogue-system/function.cpp -o CMakeFiles/cw2.dir/function.cpp.s

# Object files for target cw2
cw2_OBJECTS = \
"CMakeFiles/cw2.dir/main.cpp.o" \
"CMakeFiles/cw2.dir/function.cpp.o"

# External object files for target cw2
cw2_EXTERNAL_OBJECTS =

cw2: CMakeFiles/cw2.dir/main.cpp.o
cw2: CMakeFiles/cw2.dir/function.cpp.o
cw2: CMakeFiles/cw2.dir/build.make
cw2: CMakeFiles/cw2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/marina/Developer/GitHub/library-catalogue-system/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cw2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cw2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cw2.dir/build: cw2

.PHONY : CMakeFiles/cw2.dir/build

CMakeFiles/cw2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cw2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cw2.dir/clean

CMakeFiles/cw2.dir/depend:
	cd /Users/marina/Developer/GitHub/library-catalogue-system/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/marina/Developer/GitHub/library-catalogue-system /Users/marina/Developer/GitHub/library-catalogue-system /Users/marina/Developer/GitHub/library-catalogue-system/cmake-build-debug /Users/marina/Developer/GitHub/library-catalogue-system/cmake-build-debug /Users/marina/Developer/GitHub/library-catalogue-system/cmake-build-debug/CMakeFiles/cw2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cw2.dir/depend

