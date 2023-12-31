CPP = gcc
FLAGS = -Wall -std=c99 -pedantic -g

EXEC = art
OBJS = func.o art.o

default:${EXEC}

clean:
	rm -f ${EXEC}
	rm -f *.o

run: ${EXEC}
	./${EXEC}

${EXEC}:${OBJS}
	${CPP} ${FLAGS} -o ${EXEC} ${OBJS}

.c.o:
	${CPP} ${FLAGS} -c $<

func.o: func.c func.h
art.o: art.c func.h
