all: 3

3: 3.o libarray.a
	gcc  3.o -L../array/ -larray -o 3

3.o: 3.c 3.h

libarray.a: ../array/libarray.a
	make -C ../array

clean:  distclean

distclean:
	rm 3 *.o
	make clean -C ../array
