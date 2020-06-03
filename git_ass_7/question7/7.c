/*
 * Write a program to accept list of names as command line arguments and display the names.
 */
#include "7.h"

int main(int argc, char** argv)
{
	/* we start from 1 because 1st argumnet variable will be ./8 which we have to add for execution*/
	int next_char;
	for(next_char = 1; next_char < argc; next_char++)
	{
		printf("%s", argv[next_char]);
		printf("\n");
	}
	return 0;
}
