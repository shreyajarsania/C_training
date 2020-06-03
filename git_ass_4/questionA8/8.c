/*
 * Write a function to return next term of Fibonacci series with each call to the function.
 */

#include "8.h"

/* using pointer arguments to swap the value */
int next_fibonacci(int *num1, int *num2)
{
	int fibo = 0;
	fibo = *num1 + *num2;
	 *num1 = *num2;
         *num2 = fibo;
	return *num1;
}

int main()
{
	int answer;
	int init, fibonacci, num;
	int num1, num2;
	num1 = 0;
	num2 = 1;
	printf("Enter a number: ");
	scanf("%d", &num);


	/* get the fibonacci for the next number */
	for(init = 1; init <= num; init++)
	{
		answer = next_fibonacci(&num1, &num2);
		printf("%d ", answer);
	}
	printf("\n");
	
}
