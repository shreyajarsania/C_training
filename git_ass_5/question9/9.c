/*
 * Write a function to search the given number into the array using binary search and return the index of the element. If element is not found it should return -1.
*/

#include "9.h"
int main()
{
	int num, elements, answer, is_found, error_check;
	int arr[100];
	printf("Enter total number of elements: ");
	scanf("%d", &elements);
	
	printf("Enter the array elements: ");
	error_check = array_scan_int(arr, elements);
	
	printf("Enter the number to be searched: ");
	scanf("%d", &num);

	
	if(error_check != NO_ERROR)
        {
                debug_print("Error occured \n", error_check);
        }
        else
        {

	is_found = array_binary(arr, elements, num, &answer);
	}
	if(is_found == FAIL)
        {
        	debug_print("value not found\n", is_found);
        }
        else
        {
		printf("Entered number is %d in given array\n", answer);
	}
	return 0;
}
