/* Write a program to accept a number and
 * a. Calculate sum of digits of integer
 * b. Reverse the number
 * c. Check whether given number is numeric palindrome or not
 * d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
*/
#include "3.h"
int main()
{
	int loop, power, amstrong, original_digit, palindrome, mod, mod1, mod2, sum, value, original, digit, reverse;
	
	printf("enter a number: ");
	scanf("%d", &value);
	original = value;

	/* find the remainder of each division and add them */
	sum = 0;
	digit = 0;
	while(value != 0)
	{
		mod = value % 10;
		sum = mod + sum;
		value = value / 10;
		digit++;// digit is for further section to find total number of digits
	}
	printf("sum of digits is: %d\n", sum);

	/* reverse the string */
	value = original;
	reverse = 0;
	original_digit = digit;
	while(digit != 0)
	{
		mod = value % 10;
		reverse = reverse * 10 + mod;
		value = value /10;
		digit--;
	}
	printf("reverse : %d \n", reverse);
	
	/*  check palindrome*/
	value = original;
	palindrome = 1;
	digit = original_digit;
	while(digit != 0)
	{
		mod1 = value % 10;
		mod2 = reverse % 10;
		if(mod1 != mod2)
		{
			palindrome = 0; 
			break;
		}
		value = value / 10;
		reverse = reverse / 10;
		digit--;
	}
	if (palindrome == 1)
	{
		printf("%d is palindrome\n", original);
	}
	else
	{
		printf("%d is not palindrome\n", original);
	}

	/* check amstrong*/
	digit = original_digit;
	value = original;
	amstrong = 0;
	while(digit != 0)
	{
		power = 1;
		loop = original_digit;
		mod = value % 10;
		while(loop != 0)
		{
			power = mod * power;
			loop--;	
		}
		amstrong = power + amstrong;
		value = value / 10;
		digit--;
	}
	if(amstrong == original)
	{
		printf("%d is amstrong\n", original);
	}
	else
	{
		 printf("%d is not amstrong\n", original);

	}
	return 0;
		
}
