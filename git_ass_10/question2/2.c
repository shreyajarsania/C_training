/*
 * Write a program to copy the contents of one file to another file. (Create command like cp you can name it my_cp).
 */
#include "2.h"
int main(int argc,char *argv[])
{
	FILE *fp1, *fp2;
	char copy;
	
	/* open 1st file in read mode and second in write to copy data of one into another */	
	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "w");
	
	if(fp1 == NULL || fp2 == NULL)
	{
		printf("FILE NOT FOUND\n");
		return 0;
	}
	while(1)
	{
		copy = fgetc(fp1);
                if(feof(fp1))
                {
                        break;
                }	

		fprintf(fp2, "%c", copy);
	}
	
	fclose(fp1);
	fclose(fp2);
	return 0;
}
