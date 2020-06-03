/*
 * Write a function to calculate maximum and minimum of the array elements.
 */

#include "5.h"
int main()
{
	int num, check_error;
	float max, min;
	float arr[5];

	printf("by using single function for min and max\n");
	printf("Enter total number of elements: ");
	scanf("%d", &num);

	check_error = array_scan_float(arr, num);

	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		array_minmax_float(arr, num, &min , &max);
		printf("Maximun is : %g\n", max);

		printf("Minimum is : %g\n", min);
	}
	return 0;
}
