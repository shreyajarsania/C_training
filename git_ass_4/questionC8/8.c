/*
 * Write a function to swap two numbers.
 */

#include "8.h"

/* using pointer changes the actual vslue of the variable address */
void swap(int *num1,int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main()
{
	int num1, num2;

	printf("Enter two values: ");
	scanf("%d %d", &num1, &num2);

	swap(&num1, &num2);
	printf("Data swaped with num1 = %d and num2 = %d\n", num1, num2);
	return 0;
}
