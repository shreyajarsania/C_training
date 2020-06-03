/*
 * Write a program to accept three integer numbers and find its average.
 */
#include "8.h"
int main()
{
	float num1, num2, num3, avg;// declare 3 integer values
	
	printf("Enter 3 numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	
	/*logic
	 *average = sum/total values
	 */
	avg=(num1+num2+num3)/3;
	
	/*print average value*/
	printf("Average of %g, %g and %g is: %g\n", num1, num2, num3, avg);
	return 0;
}
