.PHONY: clean run

CXX = g++
EXE = prog
SOURCES = main.cpp Printer.cpp Board.cpp Piece.hpp Game.hpp
OBJS = main.o Printer.o Board.o Piece.o Game.o
DEPS = Printer.hpp Board.cpp Piece.cpp Game.cpp
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
