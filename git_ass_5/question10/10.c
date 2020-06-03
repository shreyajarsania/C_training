/*
 * Write a function to search the given number into the array using linear search and return the address of the element. If element is not found it should return NULL.
*/

#include "10.h"
int main()
{
	int num, elements, answer, is_null, check_error;
	int arr[100];
	printf("Enter total number of elements: ");
	scanf("%d", &elements);
	
	printf("Enter the array elements");
	check_error = array_scan_int(arr, elements);
	
	printf("Enter the number to be serched: ");
	scanf("%d", &num);
	
	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
	else
	{
		is_null = array_linear_null(arr, elements, num, &answer);
	}


	if(is_null == FAIL)
	{
		debug_print("value not found\n", is_null);
	}
	else
	{	
		printf("Enter value is at %d address in array\n", answer);	
	}
	return 0;
}
