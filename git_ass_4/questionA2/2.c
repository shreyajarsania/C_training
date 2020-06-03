/*
 * Write a function to calculate power.
 */

#include "2.h"
int power(int base, int index)
{
	int power, init;

	power = 1;
	/* get the factors for the number */
	for(init = 1; init <= index; init++)
	{
		power = base * power;
	}
	return power;
}

int main()
{
	int base, index, answer;
	
	printf("Enter the value of base: ");
	scanf("%d", &base);
	
        printf("Enter the value of index: ");
        scanf("%d", &index);
	
	/* pass base and index as actual arguments */
	answer = power(base, index);
	printf("Factorial is %d\n", answer);
	return 0;
}
