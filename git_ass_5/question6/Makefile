all: 6

6: 6.o libarray.a
	gcc  6.o -L../array/ -larray -o 6

6.o: 6.c 6.h

libarray.a: ../array/libarray.a
	make -C ../array

clean: distclean
distclean: 
	rm 6 *.o
	make clean -C ../array

