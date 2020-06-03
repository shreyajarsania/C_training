/*Write a program to find factorial of given number.
 */

#include "11.h"
int main()
{
	int init, fact, num;

	printf("Enter a number: ");
	scanf("%d", &num);

	/* get the factors for the number */
	fact = 1;
	for(init = 1; init <= num; init++)
	{	
		fact = init * fact;
	}
	printf("factorial is %d\n", fact);
	return 0;
}
