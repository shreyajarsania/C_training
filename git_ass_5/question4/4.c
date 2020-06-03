/*
 * Write a function to calculate maximum of the array elements. Write another function to calculate maximum of the array elements.
*/
#include "4.h"
int main()
{
	int num, check_error;
	float max, min;
	float arr[5];

	printf("by using different functions for max and min\n");
	printf("Enter total number of elements: ");
	scanf("%d", &num);

	check_error = array_scan_float(arr, num);

	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		array_maximum_float(arr, num, &max);
		printf("Maximun is: %g\n", max);

		array_minimum_float(arr, num, &min);
		printf("Minimum is : %g\n", min);
	}
	return 0;
}
