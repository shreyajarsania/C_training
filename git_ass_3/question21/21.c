/*
 * Write a program to display First 5 prime numbers after a given number.
 *Input: 7
 *Output: 11 13 17 19 23
 */
#include "21.h"
int main()
{
	int num, prime, row, display, col;
	
	printf("Enter a number: ");
	scanf("%d", &num);

/* if display is 0 then number is not prime, display works as flag */	
	display = 1;
		for(row = num; display <= 5; row++)
		{
		prime = 1;
		for(col = 2; col < row; col++)
		{
			if(row % col == 0)
			{
				prime = 0;
			}
		}

		/* we need to consider 2 as a special case as 2 is a=only even prime number */
		if((prime == 1 || row == 2) && row != num)
		{	
			display++;
			printf("%d ", row);
		}
		}
	printf("\n");

	return 0;
}
