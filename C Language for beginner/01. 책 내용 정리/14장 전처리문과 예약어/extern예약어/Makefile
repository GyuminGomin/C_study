# Makefile
CC = gcc
CFLAGS = -c -g
LDFLAGS =  
OBJECTS = main.o func.o

run: all
	program

all: program

program : $(OBJECTS)
	$(CC)  $(LDFLAGS) -o program $(OBJECTS)

main.o : main.c
	$(CC) $(CFLAGS) main.c 

func.o : func.c
	$(CC) $(CFLAGS) func.c

clean:
	rm -f *.o\

.PHONY: all bonus clean fclean re