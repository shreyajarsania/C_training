/*
 *Write a program to display ASCII values for character constants ‘\n’, ‘\r’, ‘\t’, ‘\a’, ‘\b’.
 */
#include "5.h"
int main()
{
	/*
	 * %d will give the ASCII value of those charachter
	 */
	printf("ASCII for \\n is\t%d\n", '\n');
	printf("ASCII for \\r is\t%d\n", '\r');
	printf("ASCII for \\t is\t%d\n", '\t');
	printf("ASCII for \\a is\t%d\n", '\a');
	printf("ASCII for \\b is\t%d\n", '\b');
	return 0;
}
