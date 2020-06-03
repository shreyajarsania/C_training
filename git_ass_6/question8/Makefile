all: 8

8: 8.o libstringfun.a
	gcc  8.o -L../stringfun/ -lstringfun -o 8

8.o: 8.c 8.h

libstringfun.a: ../stringfun/libstringfun.a
	make -C ../stringfun

clean: distclean
distclean: 
	rm 8 *.o
	make clean -C ../stringfun                                 
