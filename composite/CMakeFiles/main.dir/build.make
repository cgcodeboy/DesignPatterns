# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.2

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files (x86)\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\my_program\DesignPatterns_code\composite

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\my_program\DesignPatterns_code\composite

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/employee.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/employee.cpp.obj: employee.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report D:\my_program\DesignPatterns_code\composite\CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/employee.cpp.obj"
	D:\Qt\Qt5.5.1\Tools\mingw492_32\bin\g++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles\main.dir\employee.cpp.obj -c D:\my_program\DesignPatterns_code\composite\employee.cpp

CMakeFiles/main.dir/employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/employee.cpp.i"
	D:\Qt\Qt5.5.1\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E D:\my_program\DesignPatterns_code\composite\employee.cpp > CMakeFiles\main.dir\employee.cpp.i

CMakeFiles/main.dir/employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/employee.cpp.s"
	D:\Qt\Qt5.5.1\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S D:\my_program\DesignPatterns_code\composite\employee.cpp -o CMakeFiles\main.dir\employee.cpp.s

CMakeFiles/main.dir/employee.cpp.obj.requires:
.PHONY : CMakeFiles/main.dir/employee.cpp.obj.requires

CMakeFiles/main.dir/employee.cpp.obj.provides: CMakeFiles/main.dir/employee.cpp.obj.requires
	$(MAKE) -f CMakeFiles\main.dir\build.make CMakeFiles/main.dir/employee.cpp.obj.provides.build
.PHONY : CMakeFiles/main.dir/employee.cpp.obj.provides

CMakeFiles/main.dir/employee.cpp.obj.provides.build: CMakeFiles/main.dir/employee.cpp.obj

CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.obj: main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report D:\my_program\DesignPatterns_code\composite\CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/main.cpp.obj"
	D:\Qt\Qt5.5.1\Tools\mingw492_32\bin\g++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles\main.dir\main.cpp.obj -c D:\my_program\DesignPatterns_code\composite\main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	D:\Qt\Qt5.5.1\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E D:\my_program\DesignPatterns_code\composite\main.cpp > CMakeFiles\main.dir\main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	D:\Qt\Qt5.5.1\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S D:\my_program\DesignPatterns_code\composite\main.cpp -o CMakeFiles\main.dir\main.cpp.s

CMakeFiles/main.dir/main.cpp.obj.requires:
.PHONY : CMakeFiles/main.dir/main.cpp.obj.requires

CMakeFiles/main.dir/main.cpp.obj.provides: CMakeFiles/main.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\main.dir\build.make CMakeFiles/main.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/main.dir/main.cpp.obj.provides

CMakeFiles/main.dir/main.cpp.obj.provides.build: CMakeFiles/main.dir/main.cpp.obj

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/employee.cpp.obj" \
"CMakeFiles/main.dir/main.cpp.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

main.exe: CMakeFiles/main.dir/employee.cpp.obj
main.exe: CMakeFiles/main.dir/main.cpp.obj
main.exe: CMakeFiles/main.dir/build.make
main.exe: CMakeFiles/main.dir/linklibs.rsp
main.exe: CMakeFiles/main.dir/objects1.rsp
main.exe: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main.exe
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/requires: CMakeFiles/main.dir/employee.cpp.obj.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/main.cpp.obj.requires
.PHONY : CMakeFiles/main.dir/requires

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\my_program\DesignPatterns_code\composite D:\my_program\DesignPatterns_code\composite D:\my_program\DesignPatterns_code\composite D:\my_program\DesignPatterns_code\composite D:\my_program\DesignPatterns_code\composite\CMakeFiles\main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

