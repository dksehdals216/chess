.SUFFIXES = .cpp .cu .o

PROGRAM		= chess

MAINSRC		= main.cpp
MAINOBJ		= ${MAINSRC:.cpp=.o}

SRCS		=	\
	Board.cpp 	\
	Piece.cpp	\
	Player.cpp	\
	Move.cpp	\
	GenMoves.cpp	\
	Game.cpp	\

INCLUDDES = \
	Board.h	\
 	Move.h	\
	Piece.h	\
	Player.h	\
	GenMoves.h	\
	Game.h	\

OBJS		= ${SRCS:.cpp=.o}
CFLAGS		= -Wall -std=c++17 
DFLAGS		= -g 

#sfml dependancies
LIBS		= -lsfml-graphics -lsfml-window -lsfml-system

#-D__cplusplus
CC		= g++

all: $(PROGRAM)

$(MAINOBJ): $(MAINSRC) 

$(PROGRAM): $(OBJS) $(MAINOBJ)
	$(CC) $(CFLAGS) $(DFLAGS) $(OBJS) $(MAINOBJ) $(LIBS) -o $@


.cpp.o:
	$(CC) $(CFLAGS) $(DFLAGS) $(INCLUDE_PATH) -c $<

.cc.o:
	$(CC) $(CFLAGS) $(DFLAGS) $(INCLUDE_PATH) -c $<

.cu.o:
	$(NVCC) $(DFLAGS) $(INCLUDE_PATH) -c $<

depend:
	makedepend $(INCLUDE_PATH) *.cpp

clean:
	rm -f *.o *.*~ $(PROGRAM)  $(LIB)
clearall:
	rm -f *.o *.*~ $(PROGRAM)  $(LIB)

