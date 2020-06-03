SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
all: libarray.a

libarray.a: $(OBJ)
	ar -rcs $@ $^

clean:
	rm $(OBJ)
