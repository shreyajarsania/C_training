/*
 * Write a function to print a given number in words.
 */
#include "8.h"
int main()
{
	char str[50] = "";
	int decimal;

	printf("Enter the number to convert to words ");
	scanf("%d", &decimal);

	dec_words(decimal, str);
	puts(str);
	return 0;
}
