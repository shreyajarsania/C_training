all: 3
3: 3.c 3.h
	gcc -o 3 3.c
clean:
	rm 3
valgrid:
	valgrind --log-file="val3.txt" ./3
