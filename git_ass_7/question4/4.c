/*
* Write a function to accept five names of students from the user (use 2D array). Write another function to print these names. Finally write a function to sort student names.
*/
#include "4.h"
#include<string.h>

/* to accept names */
int array_accept(char arr[5][100])
{
	int loop;
	for(loop = 0; loop < 5; loop++)
	{
		printf("Enter %d name: ", loop + 1);
		scanf("%s", &arr[loop]);
	}
}

/* to sort the strings */
int array_sort(char arr[5][100])
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
int array_print(char arr[5][100])
{
	int loop;
	for(loop = 0; loop < 5; loop++)
	{	
		printf("%s\n",arr[loop]);
	}
}

int main()
{
	char arr[5][100];

	array_accept(arr);

	printf("the array entered is:\n");
	array_print(arr);

	array_sort(arr);

	printf("array after sorting: \n");
	array_print(arr);
	
	return 0;
}
