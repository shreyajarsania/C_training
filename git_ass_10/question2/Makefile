all: my_cp
my_cp: 2.c 2.h
	gcc -o my_cp 2.c
clean:
	rm my_cp
valgrind:
	valgrind --log-file="val2.txt" ./my_cp
