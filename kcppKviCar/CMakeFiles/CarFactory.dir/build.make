# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar

# Include any dependencies generated for this target.
include CMakeFiles/CarFactory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CarFactory.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CarFactory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CarFactory.dir/flags.make

CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o: CMakeFiles/CarFactory.dir/flags.make
CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o: kviCarCMake/src/CarFactory.cxx
CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o: CMakeFiles/CarFactory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o -MF CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o.d -o CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o -c /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/CarFactory.cxx

CMakeFiles/CarFactory.dir/src/CarFactory.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CarFactory.dir/src/CarFactory.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/CarFactory.cxx > CMakeFiles/CarFactory.dir/src/CarFactory.cxx.i

CMakeFiles/CarFactory.dir/src/CarFactory.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CarFactory.dir/src/CarFactory.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/CarFactory.cxx -o CMakeFiles/CarFactory.dir/src/CarFactory.cxx.s

CMakeFiles/CarFactory.dir/src/KviCar.cxx.o: CMakeFiles/CarFactory.dir/flags.make
CMakeFiles/CarFactory.dir/src/KviCar.cxx.o: kviCarCMake/src/KviCar.cxx
CMakeFiles/CarFactory.dir/src/KviCar.cxx.o: CMakeFiles/CarFactory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CarFactory.dir/src/KviCar.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CarFactory.dir/src/KviCar.cxx.o -MF CMakeFiles/CarFactory.dir/src/KviCar.cxx.o.d -o CMakeFiles/CarFactory.dir/src/KviCar.cxx.o -c /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/KviCar.cxx

CMakeFiles/CarFactory.dir/src/KviCar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CarFactory.dir/src/KviCar.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/KviCar.cxx > CMakeFiles/CarFactory.dir/src/KviCar.cxx.i

CMakeFiles/CarFactory.dir/src/KviCar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CarFactory.dir/src/KviCar.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/KviCar.cxx -o CMakeFiles/CarFactory.dir/src/KviCar.cxx.s

CMakeFiles/CarFactory.dir/src/KviVan.cxx.o: CMakeFiles/CarFactory.dir/flags.make
CMakeFiles/CarFactory.dir/src/KviVan.cxx.o: kviCarCMake/src/KviVan.cxx
CMakeFiles/CarFactory.dir/src/KviVan.cxx.o: CMakeFiles/CarFactory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CarFactory.dir/src/KviVan.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CarFactory.dir/src/KviVan.cxx.o -MF CMakeFiles/CarFactory.dir/src/KviVan.cxx.o.d -o CMakeFiles/CarFactory.dir/src/KviVan.cxx.o -c /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/KviVan.cxx

CMakeFiles/CarFactory.dir/src/KviVan.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CarFactory.dir/src/KviVan.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/KviVan.cxx > CMakeFiles/CarFactory.dir/src/KviVan.cxx.i

CMakeFiles/CarFactory.dir/src/KviVan.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CarFactory.dir/src/KviVan.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake/src/KviVan.cxx -o CMakeFiles/CarFactory.dir/src/KviVan.cxx.s

# Object files for target CarFactory
CarFactory_OBJECTS = \
"CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o" \
"CMakeFiles/CarFactory.dir/src/KviCar.cxx.o" \
"CMakeFiles/CarFactory.dir/src/KviVan.cxx.o"

# External object files for target CarFactory
CarFactory_EXTERNAL_OBJECTS =

CarFactory: CMakeFiles/CarFactory.dir/src/CarFactory.cxx.o
CarFactory: CMakeFiles/CarFactory.dir/src/KviCar.cxx.o
CarFactory: CMakeFiles/CarFactory.dir/src/KviVan.cxx.o
CarFactory: CMakeFiles/CarFactory.dir/build.make
CarFactory: CMakeFiles/CarFactory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CarFactory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CarFactory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CarFactory.dir/build: CarFactory
.PHONY : CMakeFiles/CarFactory.dir/build

CMakeFiles/CarFactory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CarFactory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CarFactory.dir/clean

CMakeFiles/CarFactory.dir/depend:
	cd /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/kviCarCMake /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar /home/student/Dokumenty/MJkpp/kcpp/kcppKviCar/CMakeFiles/CarFactory.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CarFactory.dir/depend

