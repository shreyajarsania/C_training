/*
 * Write a program to accept marks of five subjects, calculate its total and average.
 */

#include "1.h"
int main()
{
	int loop, check_error;
	float sum, average;
	float sub[5];
	printf("Enter the marks of 5 subjects: ");
	
	check_error = array_scan_float(sub, 5);
	
	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		/*for total start summing all in loop */
		array_sum_float(sub, 5, &sum);
		printf("Total of all subjects is:\t %g\n", sum);
	
		/* average = total / total subjects */
		array_avg_float(sub, 5, &average);
		printf("Average of all subjects is:\t %g\n", average);
	}
	return 0;
}
