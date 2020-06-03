/*
 *Write a function to calculate n th term of the Fibonacci series using recursion. Write another function to print given number of terms of Fibonacci series.
 */

#include "4.h"
int fibo1(int num1, int num2, int num)
{
	/* fibonacci term for 1 term */
	if(num >= 1)
	{
		return fibo1(num2,(num1 + num2), num - 1 );
	}
	else
	{
		return num1;
	}
}

int fiboseries(int num1, int num2, int num)
{
	/* fibonacci terms for a range */
	if(num >= 1)
        {
		printf("%d ", num2);
                return fiboseries(num2, (num1 + num2), num - 1 );
        }
        else
        {
                return num1;
        }      
}
int main()
{
	int answer, num, num1 = 0, num2 = 1;
        printf("Enter the number to print nth num: ");
	scanf("%d", &num);

	answer = fibo1(num1, num2, num);
	printf("%d\n", answer);	

	printf("Enter the number to print series: ");
        scanf("%d", &num);

	fiboseries(num1, num2, num);
	printf("\n");
}
