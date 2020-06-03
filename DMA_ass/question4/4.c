/* calloc Q1- scan and print 1D array*/
#include "4.h"
int main()
{
        int *arr, num, loop;

        printf("Enter total numbers to add: ");
        scanf("%d", &num);

        arr = (int*)calloc(num, sizeof(int));

        for(loop = 0; loop < num; loop++)
        {
                printf("enter the value ");
                scanf("%d", &arr[loop]);
        }
        printf("\n entered numbers are : ");
        for(loop = 0; loop < num; loop++)
        {
                printf("%d ", arr[loop]);
        }
	printf("\n");
        free(arr);
}

