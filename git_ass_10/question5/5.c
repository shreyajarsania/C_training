/*
 * Create database of students which will store student name, roll_no & standard details. Store that details in files using fprintf() and get it using fscanf(). Data should be accessible between multiple execution of the program.
*/
#include "5.h"
void whole_data(FILE *fp)
{
	char name[20];
        int roll;
        int std, loop = 0;

	fp = fopen("question5.txt", "a");
	
	if(fp == NULL)
	{
		printf("FILE NOT FOUND\n");
		return 0;
	}	
	/* get data from user */	
	printf("Enter name of the student: ");
	getchar();
	gets(name);
	printf("Enter roll no. ");
       	scanf("%d", &roll);
	printf("Enter standard: ");
        scanf( "%d", &std);

	while(1)
        {
               	if(name[loop] == '\0')
               	{
               	        break;
               	}
		fprintf(fp, "%c", name[loop++]);

	}
	/* now fp will be pointing to end of the data. hence we can add new data */
	fprintf(fp, "\t\t");
	fprintf(fp, "%d", roll);
	fprintf(fp,"\t");
	
	fprintf(fp, "%d", std);
	fprintf(fp, "\n");
	fclose(fp);
}
void get_data(FILE *fp)
{
	char ch;
	fp = fopen("question5.txt", "r");
	if(fp == NULL)
        {
                printf("\n FILE NOT FOUND");
		return;
        }

	 while(1)
        {
                fscanf(fp, " %c", &ch);
                if(feof(fp))
                {
                        break;
                }
                        printf("%c", ch);
        }
	 printf("\n");
	 fclose(fp);
}
int main()
{
	FILE *fp;
	int students, option;

	printf("Menu: \n1. Enter whole data \n2. Get data \n");
	scanf("%d", &option);
	printf("Enter no. of students: ");
	scanf("%d", &students);

	/* get no. of students and add data accorrdingly */
	switch(option)
	{
		case 1: for(int loop = 0; loop < students; loop++)
			{
				whole_data(fp);
			}
			break;
		case 3: for(int loop = 0; loop < students; loop++)
			{
				get_data(fp);
			}
			break;
	}
	return 0;
}
