/*
 *Write a function to calculate the sum of elements in the given row. Write another function to calculate the sum of elements in the given column.
*/

#include "3.h"

/* to scan */
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

/* to add row */
int array_add_row(float arr[100][100], int row, int col, float *answer)
{
	int col_loop;
	for(col_loop = 0; col_loop < col; col_loop++)
	{
		*answer += arr[row][col_loop];
	}
	printf("%g", *answer);

}

/* to add coloumn */
int array_add_col(float arr[100][100], int row, int col, float *answer)
{
        int row_loop;
        for(row_loop = 0; row_loop < row; row_loop++)
        {
                *answer += arr[row_loop][col];
        }
	printf("%g", *answer);
}

int main()
{
	int row, col;
        float col_sum, row_sum;
	int row_ent, col_ent;
	
	float arr[100][100] = {0};

	printf("Enter number of rows and coloumns of 2 array: ");
	scanf("%d %d", &row, &col);

	printf("Enter the values of 2D array: ");
	array_accept(arr, row, col);
	
	
	printf("choose the row to be summed up: ");
	scanf("%d", &row_ent);
	array_add_row(arr, row_ent, col, &row_sum);
	printf("Sum of %d row is %g\n", row_ent, row_sum);

        
	printf("choose the col to be summed up: ");
        scanf("%d", &col_ent);
        array_add_col( arr, row, col_ent, &col_sum);
        printf("Sum of %d col is %g\n", col_ent, col_sum);
	
	return 0;
}
