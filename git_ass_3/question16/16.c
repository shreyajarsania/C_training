/* 
 * Write a program to develop a very simple version of the "guess the magic number" game. The
program generates a random magic number between 1 and 1000. Ask user to guess the
number. If guess is correct then print message “congrats! You won.” if the guess is less than
magic number print the message ** left ** otherwise print the message ** right **. Repeat the
procedure till player give accurate guess. Give maximum 10 chances to user.
Note: generates the magic number using the standard random number generator rand( ), which
returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
is 32,767 or larger). The rand( ) function requires the header <stdlib.h>.
*/

#include "16.h"
int main()
{
	int num, value, lower, upper, count;
	
	printf("Guess the magic number between 1 to 1000\n");

	num = 1 + rand() / (RAND_MAX / (1000 - 1 + 1) + 1);	
	count = 1;
	
	/* count keeps a track for 10 chances, once won no further chances */
	do
	{
		printf("Enter a number: ");
		scanf("%d", &value);

		if(value == num)
		{
			printf("congtrats you have WON!!\n");
			break;
		}
		else if(value <= num)
		{
			printf("**left**\n");
		}	
		else if(value >= num)
		{
			printf("**right**\n");
		}
		count++;
	}
	while(count <= 10);
	return 0;
}
