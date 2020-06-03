/*
 * Write a function to print Pascal triangle of given number of rows.
 */

#include "6.h"

void pascal(int value)
{
	int num1, num2, num3, fact1, fact2, fact3, space, row, col, final;

	/* find factorial of row, col and row - col, and put in folrmula = row!/(col! - (row - col)!)*/

 	 for(row = 0; row <= value; row++)
	{
		for(space = 1; space <= (value - row); space++)
		{
			printf(" ");
		}
		for(col = 0; col <= row; col++)
		{
			fact1 = 1;
			for(num1 = 1; num1 <= col; num1++)
			{
				fact1 = num1 * fact1;
			}
			fact2 = 1;
                        for(num2 = 1; num2 <= row; num2++)
                        {
                                fact2 = num2 * fact2;
                        }
			fact3 = 1;
			if(row - col == 0)
                        {
                                for(num3 = 1; num3 <= 1; num3++)
                                {
                                        fact3 = num3 * fact3;
                                }
                        }

			else if(row - col != 0)
			{
                        	for(num3 = 1; num3 <= (row - col); num3++)
                        	{
                               		fact3 = num3 * fact3;
                        	}
			}

			final = fact2 / (fact1 * fact3);
			printf("%d ", final);
		}
		printf("\n");
	}
}

int main()
{
	int value;
	
	 printf("Enter the n:");
        scanf("%d", &value);
	
	pascal(value);
	return 0;
}
