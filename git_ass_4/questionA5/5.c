/* 
 * Write a program to accept a character and a number, and print the character number times
 */
#include "5.h"

void pattern(int repeat, char ch)
{
	int num;
	
	for(num = 1;num <= repeat; num++)
	{
		printf("%c", ch);
	}
	printf("\n");	
}

int main()
{
	int repeat;
        char c;

        printf("Character: ");
        scanf("%c", &c);
        printf("Number: ");
        scanf("%d", &repeat);
	
	pattern(repeat, c);
	return 0;
}
