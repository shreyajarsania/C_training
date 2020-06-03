/*
 *Write a program which will search and replace the word in the file.
 *###########Content of sample.txt#######################################
 *This is the sample file to be replaced.
 *####################################################################
 *./find_and_replace sample.txt file program
 *Output:
 *###########Content of sample.txt after command execution###################
 *This is the sample program to be replaced.
 *####################################################################
*/
#include "8.h"
int main(int argc,char* argv[])
{
        FILE *fp;
        char str[200];
	char *src = NULL;
	char copy;

        char find[50];
	strcpy(find, argv[2]);
        
	char rep[50];
	strcpy(rep, argv[3]);
        
	char result[200] = " ";

        int loop, len_find, next_char = 0, len_rep;

	/* open thefile read plus write mode */
        fp = fopen(argv[1], "r+");
	loop = 0;
        if(fp == NULL)
        {
                printf("FILE NOT FOUND\n");
        }
	/* copy all the data of the file to str string */
        while(1)
        {
                copy = fgetc(fp);
                if(feof(fp))
                        break;
                str[loop] = copy;
                loop++;
        }
    
	str[loop] = '\0';

	len_find = strlen(find);
	len_rep = strlen(rep);

	src = str;

 	next_char = 0; 
	/* check untill src is null */    
	while (*src) 
    	{ 
        	if (strstr(src, find) == src) 
        	{	 
            		strcpy ( &result[next_char], rep); 
			next_char += len_rep; 
            		src += len_find; 
        	}
        	else
		{
            		result[next_char] = *src;
       			src++;
			next_char++;
		}	
    	}		 
        
	/* take the pointer back to 0th position */
	rewind(fp);
        loop = 0;

        /* printf the result string back to the original file */
	fprintf(fp, "%s", result);

	fclose(fp);
	return 0;
}
