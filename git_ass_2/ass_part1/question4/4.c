/*
 *Write a program to find maximum of two numbers using
 *a. If – else
 *b. conditional operator.
 */
#include "4.h"
int main()
{
	int num1, num2, max;
	
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	
	/*
	 * finding max by if-else
	 */
	if(num1 > num2)
	{
		printf("%d is maximum\n", num1);
	}
	else
	{
		printf("%d is maximum\n", num2);
	}

	/*
	 * finding max by conditional operator
	 */

	printf("Enter 2 numbers: ");
        scanf("%d %d", &num1, &num2);
	
	max = num1 > num2 ? num1 : num2;

	printf("max value is %d\n", max);
	return 0;		
}
