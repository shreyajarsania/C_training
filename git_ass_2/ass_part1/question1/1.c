/*
 *Write a program to accept two numbers and display division of the two numbers. Check for
 *divide by zero error. If divider is zero then display appropriate error message.
*/

#include "1.h"
int main()
{
	double dividend, divisor, quotient;

	printf("Enter the value of dividend: ");
	scanf("%lf", &dividend);
	printf("enter the value of divisor: ");
	scanf("%lf", &divisor);

	/*
	 * check if divisor is not 0
	 */
	if(divisor != 0)
	{
		quotient = dividend / divisor;
                printf("answer is: %lf\n", quotient);
	}
	else
	{
		printf("Error""number cannot be divided by 0\n");
	}
	return 0;
}
