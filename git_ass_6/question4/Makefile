all: 4

4: 4.o libstringfun.a
	gcc  4.o -L../stringfun/ -lstringfun -o 4

4.o: 4.c 4.h

libstringfun.a: ../stringfun/libstringfun.a
	make -C ../stringfun

clean: distclean
distclean: 
	rm 4 *.o
	make clean -C ../stringfun                                 
