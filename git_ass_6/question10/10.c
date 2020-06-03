/*
 * Write a function to find and replace a string without using library functions.
 */
#include "10.h"

int main()
{
	char str[50]; 
	char find[50];
        char rep[50];
        char result[50] = " ";

	int loop, is_found, find_len, next_char=0, rep_len;
    	
	printf("Enter the source string: ");
        gets(str);
        printf("Enter the string to find: ");
        gets(find);
        printf("enter the string to replace: ");
        gets(rep);

	for (int loop = 0; str[loop] != '\0'; loop++) 
    	{
		is_found = 1;
		find_len = 0;
       		while(find[find_len] != '\0')
		{
			
			if(find[find_len] != str[loop + find_len])
			{
				is_found = 0;
				break;
			}
			find_len++;
		}	
/* add the replacing string in result string if the loop is found */
        if (is_found == 1) 
        { 
		rep_len = 0;
		while(rep[rep_len] != '\0')
		{
			result[next_char] = rep[rep_len];
			rep_len++;
			next_char++;
		}
		loop += (rep_len - 1);
		result[next_char++] =  str[loop];
         }
	else
	{
		result[next_char] = str[loop];
		next_char++;
	}
	}
	loop = 0;
     
	printf("%s\n", result);
   	return 0; 
} 

