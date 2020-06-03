/*
 * Write a program to accept a number and print unique pairs of numbers such that multiplication of the pair is given number
 * Input: 24
 * Output:
 * 1 * 24 = 24
 * 2 * 12 = 24
 * 3 * 8 = 24
 * 4 * 6 = 24
*/
#include "7.h"
int main()
{
	int fact, num, div;

	printf("Enter a number: ");
	scanf("%d", &num);

	/* get the factors for the number */
	fact = 1;
	while(num > fact && div > fact)
	{
		div = num / fact;
		if(num % fact == 0)
		{
			printf("%d * %-4d = %-4d\n", fact, div, num);
		}
		fact++;
	}
	return 0;
}
