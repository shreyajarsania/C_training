/*
 * Write a program to print table of given number.
 */
#include "2.h"
int main()
{
	int mul, num, init;
		
	printf("Enter the number: ");
	scanf("%d", &num);

/* %-wd is used for left alignment */ 
	init = 1;
	while(init <= 10)
	{
		mul = num * init;
		printf("%d x %-2d = %-3d\n", num, init, mul);
		init++;
	}
	return 0;
}
