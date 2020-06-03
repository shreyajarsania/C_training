/*
 * Write a function to remove all occurrences of any character in string1 from the string2.
 */
#include "4.h"

int main()
{
	char str1[50];
	char str2[50];
	char result[30];

	printf("Enter 1st string to remove it's char from 2nd one: ");
	gets(str1);
	printf("Entr 2nd string to be remove form: ");
	gets(str2);

	str_allch_rm(str1, str2, result);
	printf("resultant answer is : ");
	puts(result);
}
