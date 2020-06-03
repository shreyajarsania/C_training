/*
 * Write a function to reverse the array elements.
 */

#include "3.h"
int main()
{
	int num, check_error;
	float sum, average;
	float arr[100];
	printf("Enter total number of elements: ");
	scanf("%d", &num);

	printf("Enter the array elements:");
	check_error = array_scan_float(arr, num);
	
	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		printf("reverse array is: ");
		check_error = array_reverse_float(arr, num);
	}
	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		array_print_float(arr, num);
	}
	return 0;
}
