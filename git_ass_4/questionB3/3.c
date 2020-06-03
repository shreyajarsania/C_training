/*
 * Write a function to calculate GCD of given numbers using recursion.
 */

#include "3.h"

int GCD(int num1, int num2)
{
	int mod;
	mod = num1 % num2;

	if(mod != 0)
	{
		num1 = num2;
		num2 = mod;
		return GCD(num1, num2);
	}
	else
	{
		return num2;
	}
}
int main()
{
	int num1, num2, answer;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	answer = GCD(num1, num2);
	printf("GCD is %d \n", answer);
}

