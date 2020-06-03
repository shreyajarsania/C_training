/*
 *Write a program to accept a number and print the number in character, decimal, octal and hex
 *formats.
 */
#include "2.h"// has pre-defined functions of printf and scanf
int main()
{
	int num;//declare variable num

	printf("enter a number: ");
	scanf("%d", &num);
	printf("num in char is:\t\t%c \n", num);
	printf("num in decimal is:\t%d \n", num);
	printf("num in octal is:\t%o \n", num);
	printf("num in hex is:\t\t%x \n", num);
	/*char converts int value to its ASCII value and gives char accordingly
	 decimal uses that int value and gives the output as int value itself
	 octal value converts int value to octal value and gives output
	 hex value converts int value to its hex value and gives output as hex*/
	return 0;
}
