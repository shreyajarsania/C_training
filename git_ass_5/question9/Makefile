all: 9

9: 9.o libarray.a
	gcc  9.o -L../array/ -larray -o 9

9.o: 9.c 9.h

libarray.a: ../array/libarray.a
	make -C ../array
clean: distclean
distclean: 
	rm 9 *.o
	make clean -C ../array
