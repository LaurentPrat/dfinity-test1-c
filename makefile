CC=gcc
CFLAGS=-I.

simpledfnity: test1.o
	$(CC) -o simpledfnity test1.c