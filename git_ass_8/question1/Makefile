all: sub
sub: 1.c 1.h
	gcc -o sub 1.c
clean:
	rm sub
valgrid:
	valgrind --log-file="val1.txt" ./sub
