vpath %.c src
vpath %.h include

#VPATH = src include
CC = gcc
CFLAGS = -Iinclude

SRC = node.c list.c
OBJ = $(patsubst %.c, %.o, $(SRC))
DEP = $(patsubst %.c, %.d, $(SRC))

libcoll.a: $(OBJ)

include $(DEP)

%.d: %.c
	$(CC) -M $(CFLAGS) $< > $@.$$$$;                      \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@;     \
	rm -f $@.$$$$

.PHONY: clean
clean:
	rm *.o
	rm *.d
