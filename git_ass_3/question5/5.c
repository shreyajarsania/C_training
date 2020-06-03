/*
 * Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120
*/
#include "5.h"
int main()
{
	int fact, num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	fact = 1;
	while(num > 0)
	{
		fact = num * fact;

		if(num == 0)
		{
			printf("%d ", num);
		}
		else
		{
	                printf("%d * ", num);
                }
		num--;
	}
	printf("= %d\n", fact);
	return 0;
}
