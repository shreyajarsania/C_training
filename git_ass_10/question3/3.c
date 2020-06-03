/*
 * Write a program that compares two files and return 0 if they are equal and 1 if they are not.
 */
#include "3.h"
int main()
{
	FILE *fp1, *fp2;
	char path1[50];
	char path2[50];
	char check1, check2;
	int is_equal = 1, len1, len2;

	printf("Enter the path of 1 file: ");
	scanf("%s", path1);
	
	printf("Enter the path of 2 file: ");
	scanf("%s", path2);

	/* open both the files in write mode */
	fp1 = fopen(path1, "r");
	fp2 = fopen(path2, "r");
	
	if(fp1 == NULL || fp2 == NULL)
	{
		printf("FILE NOT FOUND\n");
		return 0;
	}

	/* fild the length of those files */
	len1 = ftell(fp1);
	len2 = ftell(fp2);
	
	/* compare lengths */
	if(len1 != len2)
	{
		printf("Not equal\n");
		return 1;
	}

	/* compare data */
	while(1)
	{
		check1 = fgetc(fp1);
		check2 = fgetc(fp2);

                if(feof(fp1))
                {
                        break;
                }
		if(check1 != check2)
		{
			is_equal = 0;
			break;	
		}
	}
	fclose(fp2);
	fclose(fp1);

	if(is_equal == 1)
	{
		printf("equal\n");
		return 0;
	}
	else
	{
		printf("not equal\n");
		return 1;
	}
	return 0;
}
