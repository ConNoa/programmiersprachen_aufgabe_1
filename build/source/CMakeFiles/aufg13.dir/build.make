# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.2_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.2_1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build

# Include any dependencies generated for this target.
include source/CMakeFiles/aufg13.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/aufg13.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/aufg13.dir/flags.make

source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o: source/CMakeFiles/aufg13.dir/flags.make
source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o: ../source/aufgabe_13.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o"
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/source && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aufg13.dir/aufgabe_13.cpp.o -c /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/source/aufgabe_13.cpp

source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufg13.dir/aufgabe_13.cpp.i"
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/source && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/source/aufgabe_13.cpp > CMakeFiles/aufg13.dir/aufgabe_13.cpp.i

source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufg13.dir/aufgabe_13.cpp.s"
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/source && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/source/aufgabe_13.cpp -o CMakeFiles/aufg13.dir/aufgabe_13.cpp.s

source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o.requires:

.PHONY : source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o.requires

source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o.provides: source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/aufg13.dir/build.make source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o.provides.build
.PHONY : source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o.provides

source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o.provides.build: source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o


# Object files for target aufg13
aufg13_OBJECTS = \
"CMakeFiles/aufg13.dir/aufgabe_13.cpp.o"

# External object files for target aufg13
aufg13_EXTERNAL_OBJECTS =

source/aufg13: source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o
source/aufg13: source/CMakeFiles/aufg13.dir/build.make
source/aufg13: source/CMakeFiles/aufg13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable aufg13"
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aufg13.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/aufg13.dir/build: source/aufg13

.PHONY : source/CMakeFiles/aufg13.dir/build

source/CMakeFiles/aufg13.dir/requires: source/CMakeFiles/aufg13.dir/aufgabe_13.cpp.o.requires

.PHONY : source/CMakeFiles/aufg13.dir/requires

source/CMakeFiles/aufg13.dir/clean:
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/source && $(CMAKE_COMMAND) -P CMakeFiles/aufg13.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/aufg13.dir/clean

source/CMakeFiles/aufg13.dir/depend:
	cd /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1 /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/source /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/source /Users/Blueshift/Desktop/Programmiersprachen/programmiersprachen_aufgabe_1/build/source/CMakeFiles/aufg13.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/aufg13.dir/depend

