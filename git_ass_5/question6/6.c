/*
 * Write a function to remove duplicate elements from the array. After processing the array should store only the unique elements consecutively. Also function should return the number of unique elements into the array.
 */

#include "6.h"
int main()
{
	int num, unique, check_error;
	float arr[100], result[100];
	printf("Enter total number of elements: ");
	scanf("%d", &num);

	check_error = array_scan_float(arr, num);

	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		check_error = array_duplicate_float(arr, num, result, &unique);

	}
	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
	printf("\nthere are %d unique elements\n", unique);
	array_print_float(result, unique);
	}
	printf("\n");

	return 0;
}
