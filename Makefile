# Jack Kenney 2020

CXX       := g++
CXX_FLAGS := -std=c++17 -ggdb -Wall -Werror
CXX_FAST_FLAGS := -std=c++17 -O2

EXECUTABLE := main
BIN     := bin
SRC     := src
INCLUDE := include

LIBRARIES   := \
	-I${VCPKG_ROOT}/eigen3_x64-linux/include/eigen3 \
	-Ilib \
	# add more absolute-pathed libraries as needed here
	# ${VCPKG_ROOT} refers to bash environment variable

all: $(BIN)/$(EXECUTABLE)

run: ./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

fast: $(SRC)/*.cpp
	$(CXX) $(CXX_FAST_FLAGS) -I$(INCLUDE) $^ -o $(BIN)/$(EXECUTABLE)_fast $(LIBRARIES)

clean:
	rm -f $(find bin/* -type f -not -name 'BIN.md')
)
