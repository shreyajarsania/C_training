all: 1
1: 1.c 1.h
	gcc -o 1 1.c
clean:
	rm 1
valgrind:
	valgrind --log-file="val1.txt" ./1
