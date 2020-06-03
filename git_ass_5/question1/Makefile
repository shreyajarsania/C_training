all: 1

1: 1.o libarray.a
	gcc  1.o -L../array/ -larray -o 1

1.o: 1.c 1.h

libarray.a: ../array/libarray.a
	make -C ../array
clean: distclean
distclean: 
	rm 1 *.o
	make clean -C ../array
