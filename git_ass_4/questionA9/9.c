/*
 * Write a function to indicate whether given number is prime or not. Write another function to print prime numbers in the given range.
 */

#include "9.h"

/* to check prime or not */
int pri_check(int num)
{
	int init, prime = 1;

	/* get the factors for the number */
	for(init = 2; init < num; init++)
	{
		if(num % init == 0 && num != 2)
		{
			prime = 0;
			break;
		}

	}
	return prime;
}

/* to print prime in the given range */
void pri_print(int num1, int num2)
{
	int init1, init2, prime;
	for(init1 = num1; init1 <= num2; init1++)
	{
		prime = 1;
		for(init2 = 2; init2 < init1; init2++)
		{
			if(init1 % init2 == 0)
			{
				prime = 0;
				break;
			}
		}
		if(prime == 1 || init1 == 2)
		{
			printf("%d ", init1);
		}
	}
	printf("\n");
}


int main()
{
	int num, num1, num2, prime;
	
	printf("Enter a number to check if prime or not: ");
	scanf("%d", &num);

	prime = pri_check(num);

	if(prime == 0)
	{
		printf("%d is not prime\n", num);
	}	
	else
	{
		printf("%d is prime\n", num );
	}

	printf("Enter the start and end of the range: ");
	scanf("%d %d", &num1, &num2);
	pri_print(num1, num2);

	return 0;
}
