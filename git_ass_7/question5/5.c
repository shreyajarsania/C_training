/*
 * Write a function to accept five names of students from the user (use array of character pointers). Write another function to print these names. Write a function to sort student names. Finally write a function to free memory allocated for student names.
*/
#include "5.h"
#include<string.h>

/* to accept names */
int array_accept(char *arr[5])
{
	int names, name_len, i= 0;
	for(names = 0; names < 5; names++)
	{
	 	printf("Enter %d name: ", names + 1);
		gets(arr[names]);
		
	}
	
}

/* to sort the strings */
int array_sort(char *arr[5])
{
	int loop, next_char;
	char rev[100];
	for(next_char = 0; next_char < 5; next_char++)
	{
		for(loop = next_char + 1; loop < 5; loop++)
	
		{
			if(strcmp(arr[next_char], arr[loop]) > 0)
			{
				strcpy(rev, arr[next_char]);
				strcpy(arr[next_char], arr[loop]);
				strcpy(arr[loop], rev);
			}
		}
	}
}

/* to print names */
int array_print(char *arr[5])
{
	int loop;
	for(loop = 0; loop < 5; loop++)
	{	
		printf("%s\n",arr[loop]);
	}
}

int main()
{
	char *arr[5];
	int row, m_free = 1;

	for(row = 0; row < 5; row++)
	{
		arr[row] = (char*)calloc(50,sizeof(char));
	}
	array_accept(arr);

	printf("the array entered is:\n");
	array_print(arr);

	array_sort(arr);

	printf("array after sorting: \n");
	array_print(arr);
	
	/* to free the allocated memory */
	for(row = 0; row < 5; row ++)
	{
		free(arr[row]);
	}
	
	/* check if memory is freed */
	if(**arr != 0)
	{
		m_free = 0;
	}
	if(m_free == 1)
	{
		printf("Memory is freed\n");
	}

		
	return 0;
}
