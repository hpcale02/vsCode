CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC_FILES := $(wildcard *.cpp)
BIN = main
all: $(SRC_FILES)
		$(CXX) $(CXXFLAGS) -o $(BIN) $^

clean: $(BIN)
		rm $^
.DEFAULT_GOAL := all