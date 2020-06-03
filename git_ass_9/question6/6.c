/*
 * Create an anonymous structure, create some variables from this
(with & without typedef)
*/
#include "6.h"

struct 
{
	int value;
	char alphabet;
} a;

typedef struct
{
	int value;
        char alphabet;
}ANO;
int main()
{
	a.value = 1;
	a.alphabet = 'A';
	printf("without typedef \nvalue = %d \t alphabet = %c\n", a.value, a.alphabet);
	
	ANO b;	
	b.value = 2;
	b.alphabet = 'B';
	printf("with typedef \nvalue = %d \t alphabet = %c\n", b.value, b.alphabet);
	return 0;
}
