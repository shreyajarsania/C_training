/*
 *Write a program to accept integer values of base and index and calculate power of base to index.
Input: base: 2 index: 5
Output: 32
 */
#include "12.h"
int main()
{
	int base, power, index, init;

	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter index number: ");
        scanf("%d", &index);

	power = 1;
	/* get the factors for the number */
	for(init = 0; init <= index; init++)
	{
		power = base * power;
	}
	printf("Power of %d with index %d is %d\n", base, index, power);
	return 0;
}
