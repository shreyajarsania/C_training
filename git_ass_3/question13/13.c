/*
 * Write a program to display n terms of Fibonacci series
 * Input: 6
 * Output: 1, 1, 2, 3, 5, 8
 */ 

#include "13.h"
int main()
{
	int init, fibonacci, num1, num2, num;

	printf("Enter a number: ");
	scanf("%d", &num);

	/* get the factors for the number */
	num1 = 0; 
	num2 = 1;
	for(init = 1; init <= num; init++)
	{
		fibonacci = num1 + num2; 
		
		if(init == num)
		{
			printf("%d ", num2);
		}
		else
		{
			printf("%d, ", num2);
		}
		num1 = num2;
		num2 = fibonacci;
	}
	printf("\n");
	return 0;
}
