.SUFFIXES = .cpp .cu .o

PROGRAM		= hw6

MAINSRC		= main.cpp
MAINOBJ		= ${MAINSRC:.cpp=.o}

SRCS		=	\
	minesweepercell.cpp	\
	minesweeper.cpp 	\


INCLUDDES = \
	minesweeper.h	\
	minesweepercell.h	\



OBJS		= ${SRCS:.cpp=.o}
CUDA_OBJS	= ${CUDA_SRCS:.cu=.o}
LIBS		= 
CFLAGS		= -Wall -std=c++17 
#DFLAGS		= -g -D_DEBUG
DFLAGS		= -g 

#-D__cplusplus
CC		= g++
#NVCC	= nvcc

all: $(PROGRAM)
#all: $(PROGRAM_CUDA)

#lib:	$(LIB)
#$(OBJS):	$(SRCS) $(INCLUDES)
$(MAINOBJ): $(MAINSRC)

$(PROGRAM): $(OBJS) $(MAINOBJ)
	$(CC) $(CFLAGS) $(DFLAGS) $(OBJS) $(MAINOBJ) $(LIBS) -o $@

#$(PROGRAM_CUDA): $(OBJS) $(CUDA_OBJS) $(MAINOBJ)
#	$(NVCC) $(DFLAGS) $(OBJS) $(CUDA_OBJS) $(MAINOBJ) $(LIBS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $(DFLAGS) $(INCLUDE_PATH) -c $<

.cc.o:
	$(CC) $(CFLAGS) $(DFLAGS) $(INCLUDE_PATH) -c $<

.cu.o:
	$(NVCC) $(DFLAGS) $(INCLUDE_PATH) -c $<

depend:
	makedepend $(INCLUDE_PATH) *.cpp

clean:
	rm -f *.o *.*~ $(PROGRAM) $(PROGRAM_CUDA) $(LIB)
clearall:
	rm -f *.o *.*~ $(PROGRAM) $(PROGRAM_CUDA) $(LIB)

