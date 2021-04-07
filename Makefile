CC     = gcc
CFLAGS = -std=c99 -pedantic -Wall

test: main.c
	$(CC) $(CFLAGS) $^ -o $@
