# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pkosmala/workdings/PROI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pkosmala/workdings/PROI

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pkosmala/workdings/PROI/CMakeFiles /home/pkosmala/workdings/PROI/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pkosmala/workdings/PROI/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named vinylshop

# Build rule for target.
vinylshop: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 vinylshop
.PHONY : vinylshop

# fast build rule for target.
vinylshop/fast:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/build
.PHONY : vinylshop/fast

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/main.cpp.s
.PHONY : main.cpp.s

source/client.o: source/client.cpp.o

.PHONY : source/client.o

# target to build an object file
source/client.cpp.o:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/client.cpp.o
.PHONY : source/client.cpp.o

source/client.i: source/client.cpp.i

.PHONY : source/client.i

# target to preprocess a source file
source/client.cpp.i:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/client.cpp.i
.PHONY : source/client.cpp.i

source/client.s: source/client.cpp.s

.PHONY : source/client.s

# target to generate assembly for a file
source/client.cpp.s:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/client.cpp.s
.PHONY : source/client.cpp.s

source/section.o: source/section.cpp.o

.PHONY : source/section.o

# target to build an object file
source/section.cpp.o:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/section.cpp.o
.PHONY : source/section.cpp.o

source/section.i: source/section.cpp.i

.PHONY : source/section.i

# target to preprocess a source file
source/section.cpp.i:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/section.cpp.i
.PHONY : source/section.cpp.i

source/section.s: source/section.cpp.s

.PHONY : source/section.s

# target to generate assembly for a file
source/section.cpp.s:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/section.cpp.s
.PHONY : source/section.cpp.s

source/seller.o: source/seller.cpp.o

.PHONY : source/seller.o

# target to build an object file
source/seller.cpp.o:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/seller.cpp.o
.PHONY : source/seller.cpp.o

source/seller.i: source/seller.cpp.i

.PHONY : source/seller.i

# target to preprocess a source file
source/seller.cpp.i:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/seller.cpp.i
.PHONY : source/seller.cpp.i

source/seller.s: source/seller.cpp.s

.PHONY : source/seller.s

# target to generate assembly for a file
source/seller.cpp.s:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/seller.cpp.s
.PHONY : source/seller.cpp.s

source/shop.o: source/shop.cpp.o

.PHONY : source/shop.o

# target to build an object file
source/shop.cpp.o:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/shop.cpp.o
.PHONY : source/shop.cpp.o

source/shop.i: source/shop.cpp.i

.PHONY : source/shop.i

# target to preprocess a source file
source/shop.cpp.i:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/shop.cpp.i
.PHONY : source/shop.cpp.i

source/shop.s: source/shop.cpp.s

.PHONY : source/shop.s

# target to generate assembly for a file
source/shop.cpp.s:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/shop.cpp.s
.PHONY : source/shop.cpp.s

source/vinyl.o: source/vinyl.cpp.o

.PHONY : source/vinyl.o

# target to build an object file
source/vinyl.cpp.o:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/vinyl.cpp.o
.PHONY : source/vinyl.cpp.o

source/vinyl.i: source/vinyl.cpp.i

.PHONY : source/vinyl.i

# target to preprocess a source file
source/vinyl.cpp.i:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/vinyl.cpp.i
.PHONY : source/vinyl.cpp.i

source/vinyl.s: source/vinyl.cpp.s

.PHONY : source/vinyl.s

# target to generate assembly for a file
source/vinyl.cpp.s:
	$(MAKE) -f CMakeFiles/vinylshop.dir/build.make CMakeFiles/vinylshop.dir/source/vinyl.cpp.s
.PHONY : source/vinyl.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... vinylshop"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... source/client.o"
	@echo "... source/client.i"
	@echo "... source/client.s"
	@echo "... source/section.o"
	@echo "... source/section.i"
	@echo "... source/section.s"
	@echo "... source/seller.o"
	@echo "... source/seller.i"
	@echo "... source/seller.s"
	@echo "... source/shop.o"
	@echo "... source/shop.i"
	@echo "... source/shop.s"
	@echo "... source/vinyl.o"
	@echo "... source/vinyl.i"
	@echo "... source/vinyl.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

