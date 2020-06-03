all: 5

5: 5.o libstringfun.a
	gcc  5.o -L../stringfun/ -lstringfun -o 5

5.o: 5.c 5.h

libstringfun.a: ../stringfun/libstringfun.a
	make -C ../stringfun

clean: distclean
distclean: 
	rm 5 *.o
	make clean -C ../stringfun                                 
