/*
 * Write a program to demonstrate use of string library functions.
a. strlen()  e. stricmp() i. strncpy()
b. strcpy()  f. strrev()  j. strncat()
c. strcat()  g. strchr()  k. strncmp()
d. strcmp()  h. strstr()  l. strtok()
*/
#include "1.h"

int main()
{
	char str[50];
	char cpy[50];
	char concate[50];
	char cmp[50];
	char sub[50];
	char ncpy[50];
	char ncat[50];
	char ncmp[50];
	char check; 
	char *is_found;
	int length, compare;

	printf("Enter the string to demonstrate functions: ");
	gets(str);

	/*strlen*/
	length = strlen(str);
	printf("Length of string is : %d \n", length);
	printf("\n");

	/*strcpy*/
	strcpy(cpy, str);
	printf("the copied string is : ");
	puts(cpy);
 	printf("\n");
	
	/*strcat*/
	printf("Enter another string to add before the previous one: ");
	gets(concate);
	strcat(concate, str);
	puts(concate);
	printf("\n");

	/*strcmp*/
	printf("Enter the string to compare with original string(first as case sensitive and the irrespective of case): ");
	gets(cmp);
	compare = strcmp(cmp, str);
	if(compare == 0)
	{
		printf("same\n");
	}
	else
	{
		printf("not same and has difference of %d \n", compare);
	}	
	 printf("\n");

	/*stricpm  here stricmp does not work so we use strcasecmp*/
	
	compare = strcasecmp(cmp, str);
        if(compare == 0)
        {
                printf("same\n");
        }
        else
        {
                printf("not same and has difference of %d \n", compare);
        }
	printf("\n");
	/*strrev does not work in this compiler */

	 /*strstr*/
	printf("Enter the sub string to check: ");
	gets(sub);
	is_found = strstr(str, sub);
	if(is_found)
	{
		printf("%s\n", is_found);
	}
	else
	{
		printf("String not found\n");
	}
	 printf("\n");

	/*strncpy*/
	printf("Enter a string to get copy in another for 5 characters ");
	gets(ncpy);
	strncpy(ncpy, str, 5);
	puts(ncpy);
	printf("\n");

	/*strncat*/
	printf("Enter a string to get added upto 5 charchters of original string ");
	gets(ncat);
	strncat(ncat, str, 5);
	puts(ncat);
	printf("\n");

	/*strncmp*/
	printf("Enter the string to compare upto 5 characters with original string ");
	gets(ncmp);
	compare = strncmp(ncmp, str, 5);
	if(compare == 0)
	{
		printf("first 5 char are same");
	}
	else
	{
		printf("strings are different by %d", compare);
	}
	 printf("\n");

	/*strtok*/
	printf("cut the string  when - comes\n");	
	strtok(cpy,"-");
	puts(cpy);
	printf("\n");

	/*strchr()*/
	printf("Enter the char to be checked: ");
	scanf("%c", &check);
	is_found = strchr(str, check);
	
	if(is_found != NULL)
	{
		printf("%c is present in the string. string after this is: %s\n", check, is_found);
	}
	else
	{
		printf("%c is not present\n", check);
	}

}
