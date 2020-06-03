/*
 * Write a program to accept list of names as command line arguments and display the names.
 * Modify above program to display names in sorted order.
*/
#include "8.h"

int main(int argc, char** argv)
{
	int loop, next_char;
	char rev[100];
	/* sort the array names  we start from 1 because 1st argumnet variable will be ./8 which we have to add for execution*/
	for(next_char = 1; next_char < argc; next_char++)
	{
		for(loop = next_char + 1; loop < argc; loop++)
	
		{
			if(strcmp(argv[next_char], argv[loop]) > 0)
			{
				strcpy(rev, argv[next_char]);
				strcpy(argv[next_char], argv[loop]);
				strcpy(argv[loop], rev);
			}
		}
	}

	/* print sorted names */
	printf("names after sorting are: \n");
	for(int next_char = 1; next_char < argc; next_char++)
	{
		printf("%s", argv[next_char]);
		printf("\n");
	}
	return 0;
}
