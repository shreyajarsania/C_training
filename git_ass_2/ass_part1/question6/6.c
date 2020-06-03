/*
 *Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
 *reversed number is same as entered number it is called palindrome)
*/

#include "6.h"
int main()
{
	long int num, digit1, digit2, digit3, digit4, digit5;

	printf("Enter a 5 digit number");
	scanf("%ld", &num);
	
	/* separate all the digits of the number */
	digit1 = num % 10;
	num /= 10;
	digit2 = num % 10;
	num /= 10;
	digit3 = num % 10;
	num /= 10;
	digit4 = num % 10;
	num /= 10;
	digit5 = num;
	

	/* compare 1st with 5th digit and 2nd with 4th digit to check palindrome*/
	if(digit1 == digit5 && digit2 == digit4)
	{
		printf("Entered number is palindrome\n");
	}
	else
	{
		printf("Entered number is not palindrome\n");
	}
	return 0;
		
}
