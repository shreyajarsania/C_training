/*
 * Write a program that requests for a filename and an integer value which is set as an offset value. The program then reads the file starting from the location specified by the offset value and prints the contents on the screen.
 */

#include "6.h"
int main()
{
	FILE *fp, *cp;
	int offset, line = 0, tot_line = 0;
	char file_name[20];
	char check;
	
	printf("Enter the file name: ");
	scanf("%s", file_name);
	
	printf("Enter the offset value: ");
	scanf("%d", &offset);

	fp = fopen(file_name, "r");
	cp = fp;
	
	if(fp == NULL)
        {
                printf("\n UNABLE TO FIND FILE\n");
                return 0;
        }

	/* if offset is positive value  print lines after that given no. of lines*/
	if(offset > 0)
	{
        while(line != offset)
        {
                check = fgetc(fp);
                if(check == '\n')
                {
                        line++;
                }
	}
	
	while(1)
	{
		check = fgetc(fp);
		if(feof(fp))
		{
			break;
		}
		printf("%c", check);
	}
	}

	/* if offset value is negative deletes given no. of lines from below*/
	if(offset < 0)
	{	
		while(1)
		{
                	check = fgetc(fp);
			if(feof(fp))
                	{
                	        break;
                	}
        	        else if(check == '\n')
        	        {
        	                tot_line++;
        	        }
		}
		/* bring the fp to the begining */
		fseek(fp, 0, 0);
		tot_line -= ((-1) * offset);
		
		while(line != tot_line)
        	{
			check = fgetc(fp);
      		 	if(check == '\n')
     			{
                     		line++;
              		}
			printf("%c", check);
		}
	}
	return 0;
}
