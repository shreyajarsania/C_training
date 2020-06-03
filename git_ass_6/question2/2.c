#include "2.h"

int main()
{
	char str[50];
	char cat[50];
	char cmp[50];
	char icmp[50];
	char cpy[50];
	char sub[50];
	char *catstr;
	char check;
        char *is_found;
	int length, compare;

	
	printf("Enter the string: ");
	gets(str);

	/*for strlen*/
	length = my_strlen(str);
	printf("Length is %d\n", length);

	/*for strcpy*/
	printf("copied string is ");
	my_strcpy(cpy, str);
	puts(cpy);

	/*for strcat*/
	printf("Enter string to add before given string: ");
	gets(cat);
	my_strcat(cat, str);
	puts(cat);

	/*for strcmp*/
	printf("Enter th estring to be comapred ");
	gets(cmp);
	compare = my_strcmp(cmp, str);
	
	if(compare == 0)
        {
                printf("same\n");
        }
        else
        {
                printf("not same and has difference of %d \n", compare);
        }

	/* for stricmp*/
	printf("Enter the string to be comapred  irrespective of case ");
        gets(icmp);
        compare = my_stricmp(cmp, str);

        if(compare == 0)
        {
                printf("same\n");
        }
        else
        {
                printf("not same and has difference of %d \n", compare);
        }

	/* for strrev */
	printf("string in reverse is: ");
	my_strrev(str);
	puts(str);

	/*for strstr*/
	/* first undo the reverse on the string */
        my_strrev(str);
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
	/* for strchr */
	printf("Enter the char to be checked: ");
        scanf("%c", &check);
        is_found = my_strchr(str, check);

        if(is_found != NULL)
        {
                printf("%c is present in the string. string after this is: %s\n", check, is_found);
        }
        else
        {
                printf("%c is not present\n", check);
        }
}
