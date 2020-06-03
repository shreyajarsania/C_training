/*
 * Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/
#include "6.h"
int main()
{
	int fact, num;

	printf("Enter a number: ");
	scanf("%d", &num);

	/* factors which perfectly divides the number are the factors*/	
	fact = 1;
	while(num > fact)
	{
		if(num % fact == 0)
		{
			if(fact >= num/2)
			{
                                printf("%d ", fact);
			}
			else
			{
				printf("%d, ", fact);
			}
		}

		fact++;
	}
	printf("\n");
	return 0;
}
