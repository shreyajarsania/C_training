/* calloc Q2- scan and print two 2Darrays using realloc */
#include "8.h"
int main()
{
        int **arr;
        int row, col, rloop,cloop;

        printf("Enter the row size for 1st array: ");
        scanf("%d", &row);

        arr = (int**)calloc(row, sizeof(int*));
        printf("Enter the number of columns for 1st array: ");
        scanf("%d", &col);

        for(rloop = 0; rloop < row; rloop++)
        {
        arr[rloop] = (int*)calloc(col, sizeof(int));
        }

        /* scan for each value */
        printf("Enter values\n");
        for(rloop = 0; rloop < row; rloop++)
        {
                for(cloop = 0; cloop < col; cloop++)
                {
                        scanf("%d", &arr[rloop][cloop]);
                }
        }

        /*print those values */
        for(rloop = 0; rloop < row; rloop++)
        {
                for(cloop = 0; cloop < col; cloop++)
                {
                        printf("%-3d ", arr[rloop][cloop]);
                }
                printf("\n");
        }

        /* we are freeing the pointes to which the double pointer points to orelse that memory will be leaked while double pointer will get reallocated */
        for(rloop = 0; rloop < row; rloop++)
        {
                free(arr[rloop]);
        }
	
	/* for 2nd array */
	printf("Enter the row size for 2nd array: ");
        scanf("%d", &row);

        arr = (int**)realloc(arr, sizeof(int*) * row);
        printf("Enter the number of columns for 2nd array: ");
        scanf("%d", &col);

        for(rloop = 0; rloop < row; rloop++)
        {
        arr[rloop] = (int*)calloc(col, sizeof(int));
        }
	
        /* scan for each value */
        printf("Enter values\n");
        for(rloop = 0; rloop < row; rloop++)
        {
                for(cloop = 0; cloop < col; cloop++)
                {
                        scanf("%d", &arr[rloop][cloop]);
                }
        }

        /*print those values */
        for(rloop = 0; rloop < row; rloop++)
        {
                for(cloop = 0; cloop < col; cloop++)
                {
                        printf("%-3d ", arr[rloop][cloop]);
                }
                printf("\n");
        }

        /* free the momoery, first of pointer the and of double pointer */
        for(rloop = 0; rloop < row; rloop++)
        {
                free(arr[rloop]);
        }
        free(arr);
}
