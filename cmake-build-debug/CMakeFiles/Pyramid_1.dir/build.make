# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /snap/clion/12/bin/cmake/bin/cmake

# The command to remove a file.
RM = /snap/clion/12/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shahriyer/Desktop/CPP2018

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shahriyer/Desktop/CPP2018/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pyramid_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pyramid_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pyramid_1.dir/flags.make

CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o: CMakeFiles/Pyramid_1.dir/flags.make
CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o: ../Pyramid_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shahriyer/Desktop/CPP2018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o -c /home/shahriyer/Desktop/CPP2018/Pyramid_1.cpp

CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shahriyer/Desktop/CPP2018/Pyramid_1.cpp > CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.i

CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shahriyer/Desktop/CPP2018/Pyramid_1.cpp -o CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.s

CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o.requires:

.PHONY : CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o.requires

CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o.provides: CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o.requires
	$(MAKE) -f CMakeFiles/Pyramid_1.dir/build.make CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o.provides.build
.PHONY : CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o.provides

CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o.provides.build: CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o


# Object files for target Pyramid_1
Pyramid_1_OBJECTS = \
"CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o"

# External object files for target Pyramid_1
Pyramid_1_EXTERNAL_OBJECTS =

Pyramid_1: CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o
Pyramid_1: CMakeFiles/Pyramid_1.dir/build.make
Pyramid_1: CMakeFiles/Pyramid_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shahriyer/Desktop/CPP2018/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Pyramid_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pyramid_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pyramid_1.dir/build: Pyramid_1

.PHONY : CMakeFiles/Pyramid_1.dir/build

CMakeFiles/Pyramid_1.dir/requires: CMakeFiles/Pyramid_1.dir/Pyramid_1.cpp.o.requires

.PHONY : CMakeFiles/Pyramid_1.dir/requires

CMakeFiles/Pyramid_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pyramid_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pyramid_1.dir/clean

CMakeFiles/Pyramid_1.dir/depend:
	cd /home/shahriyer/Desktop/CPP2018/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shahriyer/Desktop/CPP2018 /home/shahriyer/Desktop/CPP2018 /home/shahriyer/Desktop/CPP2018/cmake-build-debug /home/shahriyer/Desktop/CPP2018/cmake-build-debug /home/shahriyer/Desktop/CPP2018/cmake-build-debug/CMakeFiles/Pyramid_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pyramid_1.dir/depend

