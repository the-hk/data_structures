CC = g++
CFLAG = -Wall -g
TARGET = queue
RESULT = output

all: main.o $(TARGET).o
	$(CC) $(CFLAG) -o ${RESULT} *.o
	
main.o:
	$(CC) $(CFLAG) -c main.cpp

$(TARGET).o:
	$(CC) $(CFLAG) -c $(TARGET).cpp

purge:
	rm *.o ${RESULT}

run:
	./${RESULT}

open_gdb:
	gdb ./${RESULT}

open_valgrind:
	valgrind --leak-check=full --track-origins=yes -v ./${RESULT}

remake: purge all run