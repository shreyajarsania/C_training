/* calloc Q2- scan and print 2Darray */
#include "5.h"
int main()
{
        int **arr;
        int row, col, rloop,cloop;

        printf("Enter the row size: ");
        scanf("%d", &row);

        arr = (int**)calloc(row, sizeof(int*));
        printf("Enter the number of columns: ");
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
