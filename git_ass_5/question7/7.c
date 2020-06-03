/*
 * Write a function to sort the array using selection or bubble sort.
 */

#include "7.h"
int main()
{
	int arr[100];
	int elements,check_error;

	/*by bubble sort */	
	printf("Soritng by bubble sort\n");
	printf("Enter total number of elements: ");
	scanf("%d", &elements);
	
	printf("Enter the array elements: ");
	check_error = array_scan_int(arr, elements);

	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		check_error = array_bubble(arr, elements);
	}
	printf("Sorted data is: ");
	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		printf("Sorted data is: ");
		array_print_int(arr, elements);
	}	
	printf("\n");

	/*by selection sort*/
	printf("Sorting by selection sort\n");
	printf("Enter total number of elements: ");
        scanf("%d", &elements);

        printf("Enter the array elements: ");
        check_error = array_scan_int(arr, elements);

	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
        	check_error = array_selection(arr, elements);
	}
        
	if(check_error != NO_ERROR)
        {
                debug_print("Error occured \n", check_error);
        }
        else
        {
		printf("Sorted data is: ");
       		array_print_int(arr, elements);
	}	
	printf("\n");
}

