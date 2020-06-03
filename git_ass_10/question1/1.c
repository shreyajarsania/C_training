/*
 * Count number of characters Lines, Spaces and Tabs in a given text file.
 */
#include "1.h"
int main()
{
	int line = 0, space = 0, tab = 0;
	char check;
	char path[30];
	FILE *fp;
	
	printf("Enter the file path: ");
	gets(path);

	fp = fopen(path, "r");

	if(fp == NULL)
	{
		printf("\n UNABLE TO FIND FILE\n");
                return 0;
	}
	
	while(1)
	{
		check = fgetc(fp);
		if(feof(fp))
		{
			break;
		}
		else if(check == '\n')
		{
			line++;
		}
		else if(check == ' ')
		{
			space++;
		}
		else if(check == '\t')
		{
			tab++;
		}
	}
	
	fclose(fp);
	printf("total lines are %d \ntotal spaces are %d \ntotal tabs are %d \n", line, space, tab);
	return 0;
}
