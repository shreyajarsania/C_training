/*
 * Write a program to make your own command like "ls" which will take two arguments and print subtraction of them.
 * Sample:
 * 
 * sub 3 4
 * result: -1
 * sub 3
 * sub command requires exactly two arguments.
 * sub @ #
 * sub command requires integer arguments.
 */
#include "1.h"
int main(int argc, char *argv[])
{

	int num1, num2, is_error = 0;

	if(argc <= 2)
	{
		is_error = 1;
		printf("sub command requires exactly 2 arguments.\n");
		return 0;
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if(num1 == 0 || num2 == 0)
	{
		is_error = 1;
		printf("sub command requires integer argumnets. \n");       
	}

	if(is_error == 0)
	{
		printf("result: %d\n", num1 - num2);
	}
	
}

