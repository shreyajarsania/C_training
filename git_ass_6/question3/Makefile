all: 3

3: 3.o libstringfun.a
	gcc  3.o -L../stringfun/ -lstringfun -o 3

3.o: 3.c 3.h

libstringfun.a: ../stringfun/libstringfun.a
	make -C ../stringfun

clean: distclean
distclean: 
	rm 3 *.o
	make clean -C ../stringfun                                 
