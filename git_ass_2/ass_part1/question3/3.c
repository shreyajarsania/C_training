/*
 * Write a program to accept number and check whether the number is +ve, -ve and zero.
 */

#include "3.h"
int main()
{
	signed long int num;

	printf("Enter a number: ");
	scanf("%ld", &num);
	
	/*
	 * make range for positive and negative numbers separately
	 */
	if(0 < num)
	{
		printf("Entered number %ld is postive\n", num);
	}
	else if (0 > num)
        {
                printf("Entered number %ld is negative\n", num);
        }
	else
	{
		printf("Entered number %ld is 0\n", num);
	}
	return 0;
		
}
