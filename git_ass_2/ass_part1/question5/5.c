/*
 * Write a program to find maximum of three numbers using
 * a. If – else
 * b. conditional operator.
*/
#include "5.h"
int main()
{
	int num1, num2, num3, max;

	printf("Enter 3 numbers to find max using if-else: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	/*
	 * finding maximum using if-else
	 */
	if(num1 > num2)
	{
		if(num1 > num3)
		{
			printf("%d is maximum\n", num1);
		}
		else
		{
			printf("%d is maximum\n", num3);
		}
	}
	else
	{
		if(num2 >num3)
		{
			printf("%d is maximum\n", num2);
		}
		else
		{
			printf("%d is maximum\n", num3);
		}
	}

	/*
	 * finding max using conditional operator
	 */
	 printf("Enter 3 numbers to find max using conditional operator: ");
        scanf("%d %d %d", &num1, &num2, &num3);

	max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
	printf("%d is maximum\n", max);
	return 0;
}
