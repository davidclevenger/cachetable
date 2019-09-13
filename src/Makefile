CC = gcc
CFLAGS =

default: cachetable.o

cachetable.o: cachetable.c cachetable.h
	$(CC) $(CFLAGS) -c cachetable.c


.PHONY:
clean:
	rm -f *.o *.gch
