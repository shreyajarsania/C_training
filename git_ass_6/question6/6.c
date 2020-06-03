/*
 * Write a function to which accepts a number, base and character pointer and converts number to a string i.e. simulate itoa().
 *char* itoa(int value, char *string, int base);
*/
#include "6.h"
int main()
{
	char str[50];
	int base, value;

	printf("Enter value and its base ");
	scanf("%d %d", &value, &base);

	my_itoa( value, str, base);
	
	printf("the string conversion of this integer is ");
	puts(str);
	return 0;
}
