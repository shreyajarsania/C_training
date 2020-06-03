/*
 * Write a function to search the given number into the array using linear search and return the index of the element. If element is not found it should return -1.
*/
#include "8.h"
int main()
{
	int num, elements, answer, is_found, check_error;
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
