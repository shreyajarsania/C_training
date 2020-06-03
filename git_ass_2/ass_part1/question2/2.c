/*
 * Input a number and display whether number is Even or Odd.
 */
#include "2.h"
int main()
{
	int num;

	printf("enter a number: ");
	scanf("%d", &num);
	
	/*
	 *if number leaves no remainder while dividing by 2, it is even number orelse odd
	 */
	if(num % 2 == 0)
	{
		printf("entered number is even\n");
	}
	else
	{
		printf("entered number is odd\n");
	}
	return 0;

}
