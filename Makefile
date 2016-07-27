all: string_ops

CC = gcc

INCLUDE = .

CFLAGS = -g -Wall -ansi

string_ops: string_ops.o
	$(CC) -o string_ops string_ops.o mystrlib.o

string_ops.o: string_ops.c
	$(CC) -I$(INCLUDE) $(CFLAGS) -c string_ops.c

mystrlib.o: mystrlib.c
	$(CC) -I$(INCLUDE) $(CFLAGS) -c mystrlib.c
