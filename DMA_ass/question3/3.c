/* malloc Q3- accpet a string and print it and reversing it using malloc*/

#include "3.h"

int main()
{
	char *str;
	char rev;
	int loop, len;

	str = (char*)malloc(sizeof(char) * 50);

	printf("Enter a string: ");
	gets(str);

	puts(str);
	len = strlen(str);

	printf("\n");
/* find reverse of string */	
	for(loop = 0; loop <= (len/2); loop++)
	{
		rev = str[loop];
		str[loop] = str[(len - 1) - loop];
		str[(len - 1) - loop] = rev;
	}	
	printf("string in reverse order is: ");
	puts(str);
	
	free(str);
	return 0;
}
