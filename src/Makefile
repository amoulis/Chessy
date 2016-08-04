.PHONY: clean run

CXX = g++
EXE = prog
SOURCES = main.cpp Printer.cpp
OBJS = main.o Printer.o
DEPS = Printer.hpp
#LIB = .a
#LIB_OBJS = .o

all: $(LIB) $(EXE)

$(EXE): $(LIB) $(OBJS)
	$(CXX) -o $@ $^

$(LIB): $(LIB_OBJS)
	$(AR) rsc $@ $^

%.o: %.cpp $(DEPS)
	$(CXX) -g -c -o $@ $<

run:  $(EXE)
	$(EXE)

clean:
	rm *.o
	rm prog
