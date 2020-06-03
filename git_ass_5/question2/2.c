/*
 * Write a function to accept array elements from the user. Write another function to print array elements. Re-use these functions in rest of the assignments wherever required.
*/
#include "2.h"
int main()
{
	int num, check_error;
	float arr[100];
	
	printf("Enter the elements of array: ");
	scanf("%d", &num);
	
	printf("Enter the elements: ");
	check_error = array_scan_float(arr, num);
	
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
