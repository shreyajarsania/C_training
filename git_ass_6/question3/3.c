/* 
 * Write a function to remove all occurrences of given character from the string.
 */
#include "3.h"
int main()
{
	char str[50];
	char result[50];
	char remove;

	printf("Enter the string");
	gets(str);

	printf("Enter the char to remove form the string ");
	scanf("%c", &remove);

	str_ch_rm(str, remove, result);
	puts(result);
}
