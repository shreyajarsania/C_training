all: 5

5: 5.o libarray.a
	gcc  5.o -L../array/ -larray -o 5

5.o: 5.c 5.h

libarray.a: ../array/libarray.a
	make -C ../array

clean: distclean
distclean: 
	rm 5 *.o
	make clean -C ../array
