/*
 *Write a function to print a given number in hexadecimal format.
 */

#include "6.h"

int hex(int num)
{
	int hexa;
	if(num > 0)
	{
		hexa = num % 16;
		hex(num/16);
	}
	else
	{
		return;
	}
	/* if mod is in the range of 0 to 9 then print num or else character*/
	if( hexa <= 9)
	{
		printf("%d", hexa);	
	}
	else
	{
		printf("%c", 'A' + (hexa - 10));
	}
}
int main()
{
	int num, answer;
	
	printf("Enter the number: ");
	scanf("%d", &num);

	hex(num);
	return 0;
}


