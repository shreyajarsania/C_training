all: 6

6: 6.o libstringfun.a
	gcc  6.o -L../stringfun/ -lstringfun -o 6

6.o: 6.c 6.h

libstringfun.a: ../stringfun/libstringfun.a
	make -C ../stringfun

clean: distclean
distclean: 
	rm 6 *.o
	make clean -C ../stringfun                                 
