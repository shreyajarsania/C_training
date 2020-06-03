all: find_and_replace
find_and_replace: 8.c 8.h
	gcc -o find_and_replace 8.c
clean:
	rm find_and_replace
valgrind:
	valgrind --log-file="val8.txt" ./find_and_replace question8.bin file program
