all: 7

7: 7.o libstringfun.a
	gcc  7.o -L../stringfun/ -lstringfun -o 7

7.o: 7.c 7.h

libstringfun.a: ../stringfun/libstringfun.a
	make -C ../stringfun

clean: distclean
distclean: 
	rm 7 *.o
	make clean -C ../stringfun                                 
