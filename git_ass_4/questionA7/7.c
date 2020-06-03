/*
 * Write a function to return next term of Fibonacci series with each call to the function.
 */
#include "7.h"

void fibonacci(int num)
{
	int init, fibo, num1, num2;

	/* get the next fibonacci of number */
	num1 = 0;
	num2 = 1;
	for(init = 1; init <= num; init++)
	{
		fibo = num1 + num2;

		if(init == num)
		{
			printf("%d ", num2);
		}
		else
		{
			printf("%d, ", num2);
		}
		num1 = num2;
		num2 = fibo;
	}
	printf("\n");
}

int main()
{
	int value, answer;
	
	printf("Enter the value: ");
	scanf("%d", &value);

	fibonacci(value);
	return 0;
}
