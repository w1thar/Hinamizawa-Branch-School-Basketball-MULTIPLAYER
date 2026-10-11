# Convenience wrapper around CMake.
#   make            configure (first time) and build -> build/hbasket.exe
#   make clean      delete the build directory
#
# Needs CMake 3.16+ and a C++17 compiler. On Windows with MinGW use `mingw32-make`.
# Visual Studio users can skip this file entirely (see README.md).

BUILD ?= build
CMAKE ?= cmake

ifeq ($(OS),Windows_NT)
  GENERATOR ?= MinGW Makefiles
else
  GENERATOR ?= Unix Makefiles
endif

.PHONY: all clean

all: $(BUILD)/CMakeCache.txt
	$(CMAKE) --build $(BUILD) --config Release --parallel

$(BUILD)/CMakeCache.txt:
	$(CMAKE) -S . -B $(BUILD) -G "$(GENERATOR)" -DCMAKE_BUILD_TYPE=Release

clean:
	$(CMAKE) -E rm -rf $(BUILD)
