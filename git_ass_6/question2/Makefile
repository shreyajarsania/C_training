all: 2

2: 2.o libstringfun.a
	gcc  2.o -L../stringfun/ -lstringfun -o 2

2.o: 2.c 2.h

libstringfun.a: ../stringfun/libstringfun.a
	make -C ../stringfun

clean: distclean
distclean: 
	rm 2 *.o
	make clean -C ../stringfun                                                                    
