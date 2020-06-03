/*
 * Write a function to calculate factorial of a given number using recursion.
 */

#include "1.h"

int fact(int num)
{
	if(num <= 1)
		return 1;
	else 
		return num * fact( num - 1 );
}
int main()
{
	int factorial, answer;

	printf("Enter the number: ");
	scanf("%d", &factorial);

	answer = fact(factorial);

	printf("%d\n", answer);
}
