all: 2

2: 2.o libarray.a
	gcc  2.o -L../array/ -larray -o 2

2.o: 2.c 2.h

libarray.a: ../array/libarray.a
	make -C ../array

clean: distclean
distclean: 
	rm 2 *.o
	make clean -C ../array                                 
