all: 8

8: 8.o libarray.a
	gcc  8.o -L../array/ -larray -o 8

8.o: 8.c 8.h

libarray.a: ../array/libarray.a
	make -C ../array

clean: distclean
distclean: 
	rm 8 *.o
	make clean -C ../array
