# Jack Kenney 2020

CXX       := g++
CXX_FLAGS := -std=c++17 -O0 -ggdb -Wall -Werror
CXX_FAST_FLAGS := -std=c++17 -O2

EXECUTABLE := main
BIN     := bin
SRC     := src
INCLUDE := include
LIB		:= lib

LIBRARIES   := \
	-I${VCPKG_ROOT}/eigen3_x64-linux/include/eigen3 \
	-I${CPP_LIB} \
	# add more absolute-pathed libraries as needed here
	# ${VCPKG_ROOT} refers to bash environment variable

all: $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -I$(LIB) $^ -o $(BIN)/$(EXECUTABLE) $(LIBRARIES)

fast: $(SRC)/*.cpp
	$(CXX) $(CXX_FAST_FLAGS) -I$(INCLUDE) -I$(LIB) $^ -o $(BIN)/$(EXECUTABLE)_fast $(LIBRARIES)

clean: 
	find bin/* -type f -not -name 'BIN.md' -delete
