/*
 *Write a function to converts a string of digits into its numeric equivalent i.e. simulate atoi().
 *int atoi(const char* string);
 */
#include "5.h"

int main()
{
	char str[50];
	int result;

	printf("Enter the numerical string to convert to integer value: ");
	gets(str);

	result = my_atoi(str);
        printf("numerical value of this string is: %d\n", result);
	return 0;       
}
