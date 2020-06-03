/*
 * Write a program to print the tables of the numbers from 1 to 10.
 *
 * Modify above program to accept a range i.e. two numbers and print tables of numbers within the range.
 * 
Input: 3 6
Output:
3  4  5 6
6  8 10 12
9 16 15 18
12 16 20 24
...
*/
#include "19.h"
int main()
{
	int num1, num2, row, col, mul;

	printf("Enter 2 values: ");
	scanf("%d %d", &num1, &num2);
/* using -2d will give left alignment with fixed size */	
	for(row = 1; row <= 10; row++)
	{
		for(col = num1; col <= num2; col++)
		{
			mul = col * row;
			printf("%-2d ", mul);			
		}
		printf("\n");
	}
	return 0;
}
