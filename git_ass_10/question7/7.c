/*
 *Write a program which will delete specified character from the file.
 */
#include "7.h"
int main()
{
        FILE *fp;
        char path[50];
	char result[30];
        char chcheck, chdel;
	int is_found = 0, loop = 0;

        printf("Enter a file path: ");
        scanf("%s", path);

        fp = fopen(path, "rt");
        if(fp == NULL)
        {
                printf("file not found");
                return 0;
        }
        printf("Enter char to delete: ");
        scanf(" %c", &chdel);

	loop = 0;

	/* check if the char is found, if found skip that char and store otherwise into result string */
        while(1)
        {
		is_found = 0;
		chcheck = fgetc(fp);
		if(chcheck == EOF)
                {
                        break;
                }
		if(chcheck == chdel)
                {
			is_found = 1;
                }
		
		if(is_found == 0)
		{	
			result[loop++] = chcheck;
		}
        }
	result[loop] = '\0';
	
	/* reopen the file in write mode and add the result string into it */
	fclose(fp);
	fp = fopen(path, "w");
	
	fprintf(fp, "%s", result);
        
	fclose(fp);
        return 0;

}
