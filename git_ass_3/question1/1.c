/*
 * Write a program to accept a character and a number, and print the character number times
 * Input:
Character: *
Number: 6
Output:
       ******
*/
#include "1.h"
int main()
{
	int repeat, num;
	char ch;
	
	printf("Character: ");
	scanf("%c", &ch);
	printf("Number: ");
	scanf("%d", &num);
	
	repeat = 1;
	while(repeat <= num)
	{
		printf("%c", ch);
		repeat++;
	}
	printf("\n");
	return 0;
}

