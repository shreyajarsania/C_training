/*Write a program to print the tables of the numbers from 1 to 10.
 */

#include "18.h"
int main()
{
	int mul, row, col;

	for(row = 1; row <= 10; row ++)
	{
		for(col = 1; col<= 10; col++)
		{
			mul = col * row;
			printf("%-2d x %-3d = %-3d\t", col, row, mul);
		}
		printf("\n");
	}
	return 0;
}
