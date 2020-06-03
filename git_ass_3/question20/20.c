/*
 * Write a program to display
 * a. Prime numbers between 1 to 100
 * b. Armstrong Numbers between 1 to 500
*/
#include "20.h"
int main()
{
	int row, col, prime;
	int mod, value, digit, num, power, armstrong;

	/* check the prime number */
	for(row = 2; row <= 100; row++)
	{
		prime = 1;
		for(col = 2; col < row; col++)
		{
			if(row % col == 0)
			{
				prime = 0;
			}
		}
		if(prime == 1 || row == 2)
		{
			printf("%d ", row);
		}
	}
	printf("\n");

	/* check for amstrong number */
	for(value = 1; value <= 500; value++)
	{
		armstrong = 0;

		for(num = value; num != 0;)
		{
			mod = num % 10;
			armstrong += mod*mod*mod;
			num = num / 10;
		}
		if(armstrong == value)
		{
			printf("%d ", value);
		}
	}
	printf("\n");
	return 0;
}	
