SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
all: libstringfun.a

libstringfun.a: $(OBJ)
	ar -rcs $@ $^

clean:
	rm $(OBJ)
