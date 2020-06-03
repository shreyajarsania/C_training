/*
 * Write a function to implement four function calculator. Function would take operands and operator as arguments and returns result.
 */

#include "3.h"
double calculator(double num1, double num2, char op)
{
	double solve; // return solve to main
	switch(op)
	{
		case '+': solve = num1 + num2;
			  break;
		case '-': solve = num1 - num2;
			  break;
		case '*': solve =  num1 * num2;
			  break;
		case '/': solve =  num1 / num2;
			  break;
		default: printf("please enter correct operator option\n");
	}
	return solve;
}

int main()
{
	double value1, value2, answer;
	char operator;

	printf("Enter the equation to be solved: ");
	scanf("%lf %c %lf", &value1, &operator, &value2);

	answer = calculator(value1, value2, operator);
	printf("%lf %c %lf = %lf\n", value1, operator, value2, answer);

	return 0;
}
