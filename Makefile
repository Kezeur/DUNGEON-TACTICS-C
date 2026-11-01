CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS =
EXEC = game
SRC = game.c
OBJ = $(SRC:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC) $(EXEC).exe

.PHONY: all clean mrproper