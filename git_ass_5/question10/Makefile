all: 10

10: 10.o libarray.a
	gcc  10.o -L../array/ -larray -o 10

10.o: 10.c 10.h

libarray.a: ../array/libarray.a
	make -C ../array

clean: distclean
distclean: 
	rm 10 *.o
	make clean -C ../array                            
