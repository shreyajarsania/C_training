/*
 * Write a program to print table of given number.
*/
#include "10.h"
int main()
{
	int num, mul, init;

	printf("Enter the number: ");
	scanf("%d", &num);

	for(init = 1; init <= 10; init++)
	{
		mul = num * init;
		printf("%d  *  %-2d  =  %-4d\n", num, init, mul);
	}
	return 0;

}
