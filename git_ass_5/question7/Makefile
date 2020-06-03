all: 7

7: 7.o libarray.a
	gcc  7.o -L../array/ -larray -o 7

7.o: 7.c 7.h

libarray.a: ../array/libarray.a
	make -C ../array

clean: distclean
distclean:
	rm 7 *.o
	make clean -C ../array 
