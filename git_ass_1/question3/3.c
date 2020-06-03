/*
 * Print the ASCII value of user entered character in decimal, hex, octal format and also print the
 * character for user entered ASCII value.
 */
#include "3.h"// has pre-define printf and scanf
int main()
{
	char ch;//declare char variable character

	printf("give the character ");
	scanf("%c", &ch);//get the value from user

	printf("decimal value of character is:\t%d \n", ch);
	printf("hex value of character is:\t%x \n", ch);
	printf("octal value of character is\t%o \n",ch);
	printf("value of character in char:\t%c \n", ch);
	/*char value is converted to ASCII  value and given to decimal, ASCII value converted to hex value and give output to hex, ASCII value converted to octal value and give output to octal, char ASCII is again converted to char and output in char*/
	int ascii;

	printf("give the ASCII  value:");
	scanf("%d", &ascii);

	printf("decimal value of character is:\t%d \n", ascii);
	printf("hex value of character is:\t%x \n", ascii);
	printf("octal value of character is\t%o \n", ascii);
	printf("value of character in char:\t%c \n", ascii);
	 /*ASCII value is given as decimal value and given to decimal, ASCII value converted to hex value and give output to hex, ASCII value converted to octal value and give output to octal, char ASCII is converted to char for output in char*/
	return 0;

}
