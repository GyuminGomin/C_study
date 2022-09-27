# Makefile
CC = gcc
CFLAGS = -c -g
LDFLAGS =  
OBJECTS = main.o exchange.o

run: all
	program

all: program

program : $(OBJECTS)
	$(CC)  $(LDFLAGS) -o program $(OBJECTS)

main.o : main.c
	$(CC) $(CFLAGS) main.c 

exchange.o : exchange.c
	$(CC) $(CFLAGS) exchange.c

clean:
	rm -f *.o\

.PHONY: all bonus clean fclean re