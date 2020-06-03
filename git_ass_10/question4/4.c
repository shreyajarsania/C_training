/*
 *Write menu driven program which will store user provided string to buffer and store it into binary file. When program get started it will get buffer value from the binary file.
 *Menu:
 *1. set buffer
 *2. print buffer
 *3. exit
 */
#include "4.h"
int main()
{
	FILE *fp;
	char str[50];
	char copy;
	int option = 0;

	/* create a menu- set- to write the data into the file, print - to get the data from the file and exit to get out of the menu */
	while(option != 3)
	{
		printf("Menu: \n1. set buffer \n2. print buffer \n3. exit\n");
		scanf("%d", &option);
		switch(option)
		{
				/* get data from user in string from and print that string into the file */
			case 1: str[50] = "";
				int loop = 0;
				printf("Enter the string to add in the file: ");
				getchar();
				gets(str);	
				fp = fopen("question2.bin", "w");
				
				if(fp == NULL)
				{
					printf("FILE NOT FOUND\n");
					return 0;
				}
				while(1)
				{
					if(str[loop] == '\0')
					{
						break;
					}	
					fprintf(fp, "%c", str[loop++]);		
				}
				fclose(fp);
				break;
				
				/* get data from file and print it */
			case 2: printf("Getting the data from the file: \n");
				fp = fopen("question2.bin", "r");
				
				if(fp == NULL)
				{
					printf("FILE NOT FOUND\n");
					return 0;
				}
				while(1)
                                {
                                        copy = fgetc(fp);
                                        if(feof(fp))
                                        {
                                                break;
                                        }
                                        printf("%c", copy);
                                }
				printf("\n");
				fclose(fp);
				break;

			case 3: break;
		}
	}
}
