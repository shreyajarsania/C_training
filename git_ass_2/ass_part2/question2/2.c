/*
 * Write a program to crate four function calculator. Four functions are +, - , /
 */
#include "2.h"
int main()
{
	double num1, num2;
	char operator;
	
	printf("Enter the equation to be solved: ");
	scanf("%lf %c %lf", &num1, &operator, &num2);
/* character value is converted to ascii value, hence int value is given to the switch indirectly*/
	switch(operator)
	{
		case '+': printf("sum is %g\n", num1 + num2);
			break;
		case '-': printf("difference is %g\n", num1 - num2);
			break;
		case '*': printf("multiplication is %g\n", num1 * num2);
			break;
		case '/': printf("division is %g\n", num1 / num2);
			break;
		default: printf("please enter correct operator option\n");
	}
	return 0;
}
