/*
 * Write functions to calculate addition, subtraction, multiply two matrices of nxn.
 */

#include "2.h"
int row;
int col;

/*To scan the array values */
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
/* to add */
int array_add(float arr1[100][100], float arr2[100][100], float result[100][100], int row, int col)
{
        int row_loop, col_loop;
        for(row_loop = 0; row_loop < row; row_loop++)
        {
                for(col_loop = 0; col_loop < col; col_loop++)
                {
                        result[row_loop][col_loop] = arr1[row_loop][col_loop] + arr2[row_loop][col_loop];
                }
        }
}

/* to subtract */
int array_sub(float arr1[100][100], float arr2[100][100], float result[100][100], int row, int col)
{
        int row_loop, col_loop;
        for(row_loop = 0; row_loop < row; row_loop++)
        {
                for(col_loop = 0; col_loop < col; col_loop++)
                {
                        result[row_loop][col_loop] = arr1[row_loop][col_loop] - arr2[row_loop][col_loop];
                }
        }
}

/* to multiply */
int array_mul(float arr1[100][100], float arr2[100][100], float result[100][100], int row, int col)
{
	int row_loop, col_loop, next_num;
	for(next_num = 0; next_num < row; next_num++)
	{
		for(row_loop = 0; row_loop < col; row_loop++)
		{
		for(col_loop = 0; col_loop < col; col_loop++)
		{
			result[next_num][row_loop] = result[next_num][row_loop] + (arr1[next_num][col_loop] * arr2[col_loop][row_loop]);
		}
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
	int row1, col1, row2, col2, row, col;
	float arr1[100][100] = {0};
	float arr2[100][100] = {0};
	float result[100][100] = {0};

	printf("Enter number of rows and coloumns of 1st array: ");
	scanf("%d %d", &row1, &col1);

	printf("Enter the values of 2D array: ");
	array_accept(arr1, row1, col1);

	printf("Enter number of rows and coloumns of 2nd array: ");
        scanf("%d %d", &row2, &col2);

        printf("Enter the values of 2D array: ");
        array_accept(arr2, row2, col2);

	row = row1 > row2 ? row1 : row2;
	col = col1 > col2 ? col1 : col2;

	array_add(arr1, arr2, result, row, col);
	printf("the sum of array entered is:\n");
	array_print(result, row, col);

        array_sub(arr1, arr2, result, row, col);
        printf("the subtraction of array entered is:\n");
	array_print(result, row, col);

       	array_mul(arr1, arr2, result, row1, col2);
	printf("the multiplication of array entered is:\n");
	array_print(result, row1, col2);
	
	return 0;
}
