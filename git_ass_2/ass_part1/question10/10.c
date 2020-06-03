/*
 * Write a program to accept a character c and display category of the input character.
 * ALPHABET  : c is a letter (65 to 90 or 97 to 122)
 * UPPERCASE : c is an uppercase letter (65 to 90)
 * LOWERCASE : c is a lowercase letter (97 to 122)
 * DIGIT     : c is a digit (48 to 57)
 * SPACE 	  : c is a space(32), tab(9), carriage return(13), new line(10)
 * OTHER 	  : Not listed above
*/
#include "10.h"
int main()
{
	char character;

	printf("Enter the character: ");
	scanf("%c", &character);
	
	/*specify the category range for each case*/

	if((65 <= character) && (character <= 90))
	{
		printf("ALPHABET \t : %c is a letter\n", character);
                printf("UPPERCASE \t : %c is a uppercase letter\n", character);
	}
	else if((97 <= character) && (character <= 122))
	{
		printf("ALPHABET \t : %c is a letter\n", character);
		printf("LOWERCASE \t : %c is a lowercase letter\n", character);
	}
	else if((48 <= character) && (character <= 57))
	{
		printf("DIGIT \t : %c is a digit\n", character);
	}
	else if((character == 32) || (character == 9) || (character == 13) || (character == 10))
	{
		printf("SPACE \t : %c is a space, tab, carriage return or new line\n", character);
	} 
	else
	{
		printf("OTHER \t :  Not listed\n");
	}

	return 0;
}
