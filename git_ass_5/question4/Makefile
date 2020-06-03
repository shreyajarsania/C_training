all: 4

4: 4.o libarray.a
	gcc  4.o -L../array/ -larray -o 4

4.o: 4.c 4.h

libarray.a: ../array/libarray.a
	make -C ../array

clean: distclean
distclean:
	rm 4 *.o
	make clean -C ../array

