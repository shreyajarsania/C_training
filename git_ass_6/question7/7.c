/*
 * Write a function to convert a number to its roman equivalent. Also write a function to convert a roman number to decimal equivalent.
 */
#include "7.h"

int main()
{
	char roman[50];
	char result[50];
	int decimal;

	printf("Enter the roman value in CAPITAL LETTERS : ");
	gets(roman);

	decimal = my_roman_dec(roman);
	printf("this value in interger is %d\n", decimal);
	
	printf("Enter the decimal value ");
	scanf("%d", &decimal);

	my_dec_roman(decimal, result);
	printf("%s\n", result);
	return 0;
}
