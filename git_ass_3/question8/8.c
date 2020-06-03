/*
 * Write a program to accept a number and print its prime factors.
 * Input: 180
 * Output: 180 = 2 * 2 * 3 * 3 * 5
 */
#include "8.h"
int main()
{
	int num, num1, num2, prime;

	printf("Enter a value: ");
	scanf("%d", &num);

		while(num % 2 == 0)
		{
			printf(" %d", 2);
			 num = num / 2; 
		}
		num2 = 3;
		while(sqrt(num) >= num2)
		{
			while(num % num2 == 0)
			{
				printf(" %d", num2);
				num = num / num2;
			}
			num2 = num2 + 2;
		}
		if(num > 2)
		{
			printf(" %d", num);
		}
	printf("\n");
	return 0;

}
