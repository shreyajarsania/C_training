/*
 *Write a function to print a given number in binary format.
 */

#include "5.h"
 
int binary(int num)
{
	/* mod value is shifted internally at the end when the final return value is given */
	if(num > 0 )
	{
		return (num % 2) + 10 * binary(num / 2);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num, answer;

	printf("Enter the number: ");
	scanf("%d", &num);

	answer = binary(num);
	printf("%d in binary is %d\n", num, answer);
	
	return 0;
}

