#include "1.h"
int fact(int num)
{
	int init, fact;

	/* get the factors for the number */
	fact = 1;
	for(init = 1; init <= num; init++)
	{
		fact = init * fact;
	}
	return fact;
}

int main()
{
	int value, answer;
	
	printf("Enter the value: ");
	scanf("%d", &value);

	answer = fact(value);
	printf("Factorial is %d\n", answer);
	return 0;
}
