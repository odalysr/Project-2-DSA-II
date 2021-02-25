CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

SRCS = $(wildcard *.hpp)
OBJECTS = $(SRCS: .hpp=.o)

all: testHeap testFifo

clean:
	rm -rf *dSYM
	$(RM) *.o *.gc* test/*.o core main

testHeap: $(OBJECTS) testHeap.cpp minHeap.hpp minHeap.cpp customer.hpp customer.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
testFifo: $(OBJECTS) testFifo.cpp fifo.hpp fifo.cpp customer.hpp customer.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
