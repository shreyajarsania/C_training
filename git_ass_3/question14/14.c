/*
 * Write a program to accept a number and check whether it is Prime no.
*/
#include "14.h"
int main()
{
	int num1, num, prime;

	printf("Enter a number: ");
	scanf("%d", &num);
	
	/* get the factors for the number */
	prime = 1;
	for(num1 = 3; num1 < num; num1++)
	{
		if(num % num1 == 0)
		{
			prime = 0;
		}
	}
	if(prime == 1 || num == 2)
	{
		printf("%d is prime number\n", num);
	}
	else
	{
		printf("%d is not a prime number\n", num);
	}
	return 0;
}
