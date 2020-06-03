/*
 * Write a program to accept an integer value and print its table.
 */
#include "6.h"
int main()
{
	int num;// declare int num

	printf("Enter the number for the table: ");
	scanf("%d", &num);

	/* print table for entered number*/
	printf("%d x 1\t = %d \n", num, num * 1);
	printf("%d x 2\t = %d \n", num, num * 2);
	printf("%d x 3\t = %d \n", num, num * 3);
	printf("%d x 4\t = %d \n", num, num * 4);
	printf("%d x 5\t = %d \n", num, num * 5);
	printf("%d x 6\t = %d \n", num ,num * 6);
	printf("%d x 7\t = %d \n", num ,num * 7);
	printf("%d x 8\t = %d \n", num ,num * 8);
	printf("%d x 9\t = %d \n", num ,num * 9);
	printf("%d x 10\t = %d\n", num, num * 10);
	return 0;
}
