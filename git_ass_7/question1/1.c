/*
 * Write a function to accept a 2-D array from the user. Write another function to print the 2-D array. Re-use these functions in rest of the assignments wherever required.
 */
#include "1.h"

/* to accept values */
int array_accept(float arr[100][100], int row, int col)
{
	int row_loop, col_loop;
	for(row_loop = 0; row_loop < row; row_loop++)
	{
		for(col_loop = 0; col_loop < col; col_loop++)
		{
			scanf("%f", &arr[row_loop][col_loop]);
		}
	}
}

/* to print */
int array_print(float arr[100][100], int row, int col)
{
        int row_loop, col_loop;
        for(row_loop = 0; row_loop < row; row_loop++)
        {
                for(col_loop = 0; col_loop < col; col_loop++)
                {
                        printf("%g", arr[row_loop][col_loop]);
                }
		printf("\n");
        }
}
int main()
{
	int row, col;
	float arr[100][100];

	printf("Enter number of rows and coloumns of 2 array: ");
	scanf("%d %d", &row, &col);

	printf("Enter the values of 2D array: ");
	array_accept(arr, row, col);

	printf("the array entered is:\n");
	array_print(arr, row, col);
	
	return 0;
}
