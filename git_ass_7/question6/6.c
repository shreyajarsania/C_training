/*
 * Write functions to allocate memory for 2 dimensional matrix. Write another function to free the memory allocated for 2 dimensional matrix.
*/
#include "6.h"

/* to allocate memeory to 2D matrix, get values and print them*/
int mem_alloc(int **arr, int row, int col)
{
	int rloop, cloop;
	arr = (int**)calloc(row, sizeof(int*));

        for(rloop = 0; rloop < row; rloop++)
        {
       		 arr[rloop] = (int*)calloc(col, sizeof(int));
        }

	printf("Enter values\n");
	for(rloop = 0; rloop < row; rloop++)
        {
                for(cloop = 0; cloop < col; cloop++)
                {
                        scanf("%d", &arr[rloop][cloop]);
                }
        }

        for(rloop = 0; rloop < row; rloop++)
        {
                for(cloop = 0; cloop < col; cloop++)
                {
                        printf("%d ", arr[rloop][cloop]);
                }
                printf("\n");
        }
	for(rloop = 0; rloop < row; rloop++)
        {
                free(arr[rloop]);
        }

	free(arr);
	
	if(arr[0][0] == 0)
	{
	 	return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	int **arr;
	int m_free, row, col;
	
	printf("Enter number of rows and cols: ");
	scanf("%d %d", &row, &col);

	m_free = mem_alloc(arr, row, col);
	if(m_free == 1)
	{
		printf("memory freed\n");
	}
	return 0;
}
