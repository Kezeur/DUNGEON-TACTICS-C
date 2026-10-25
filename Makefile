CC = gcc
CFLAGS = -w -wall -ansi -pedantic
LDFLAGS =
EXEC = game
SRC = game.h game.c
OBJ = $(SRC:.c=.o)


all: $(EXEC)


clean :
    rm -rf *.o

mrproper: clean
    rm  -rf $(EXEC)