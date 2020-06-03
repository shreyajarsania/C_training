/*
 * Write a function to find and replace a string using library functions [strstr(), strncpy(), strlen(), strcat(), strcpy(), etc.].
 */
#include "9.h"
#include "../stringfun/stringfun.h"

int main()
{
	char str[50];
	char find[50];
	char rep[50];
	char result[50];
	char *src = NULL;
	int len_find, len_rep;
	int next_char;

	printf("Enter the source string: ");
	gets(str);
	printf("Enter the string to find: ");
	gets(find);
	printf("enter the string to replace: ");
	gets(rep);
	
	len_find = strlen(find);
	len_rep = strlen(rep);

	src =str;

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
  
	puts(result);

	return 0;
}
