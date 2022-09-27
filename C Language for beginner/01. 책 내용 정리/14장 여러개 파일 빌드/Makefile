# Makefile
CC = gcc
CFLAGS = -c -g
LDFLAGS =  
OBJECTS = main.o func1.o func2.o

run: all
	program

all: program

program : $(OBJECTS)
	$(CC)  $(LDFLAGS) -o program $(OBJECTS)

main.o : main.c
	$(CC) $(CFLAGS) main.c 

func1.o : func1.c
	$(CC) $(CFLAGS) func1.c

func2.o : func2.c
	$(CC) $(CFLAGS) func2.c

clean:
	rm -f *.o\

.PHONY: all bonus clean fclean re