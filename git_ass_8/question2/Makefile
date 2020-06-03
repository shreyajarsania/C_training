all: server
server: 2.c 2.h
	gcc -o server 2.c
clean:
	rm server
valgrid:
	valgrind --log-file="val2.txt" ./server
