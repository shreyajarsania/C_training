all: 10
10: 10.c 10.h
	gcc -o 10 10.c
clean:
	rm 10
valgrind:
	valgrind --log-file="val10.txt" ./10
