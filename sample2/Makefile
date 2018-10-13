CC = gcc
CFLAGS = -Iinclude

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))

vpath %.h include
vpath %.c src
vpath %.o obj

calc: $(OBJ) -lm
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ): obj/%.o: %.c %.h
	@mkdir -p obj
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm obj/*.o
	rm calc
