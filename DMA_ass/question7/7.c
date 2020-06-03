/* relloc Q1- scan and print two 1D arrays using realloc*/
#include "7.h"
int main()
{
        int *arr, num, loop;

        printf("Enter total numbers to add in 1st array: ");
        scanf("%d", &num);

        arr = (int*)calloc(num, sizeof(int));

        for(loop = 0; loop < num; loop++)
        {
                printf("enter the value ");
                scanf("%d", &arr[loop]);
        }
        printf("\n entered numbers in 1st array are : ");
        for(loop = 0; loop < num; loop++)
        {
                printf("%d ", arr[loop]);
        }
        printf("\n");

	printf("Enter total numbers to add in 2nd array: ");
        scanf("%d", &num);

	/* reallocating the momery */
        arr = (int*)realloc(arr, sizeof(int) * num);

        for(loop = 0; loop < num; loop++)
        {
                printf("enter the value ");
                scanf("%d", &arr[loop]);
        }
        printf("\n entered numbers in 2nd array are : ");
        for(loop = 0; loop < num; loop++)
        {
                printf("%d ", arr[loop]);
        }
        printf("\n");

        free(arr);
}

