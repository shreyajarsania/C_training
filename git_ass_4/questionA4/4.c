/*
 *Write a function to implement four function calculator. Function would take operands and operator as arguments and returns result.
 * In above program, division may fail if denominator is zero. Use global variable as an error flag to avoid this problem.
 */

#include "4.h"

int error_flag = 0;

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
                case '/': if(num2 == 0)
			  {
			  	error_flag = 1;
				break;
			  }
			  else
			  {
			  	solve =  num1 / num2;
			  }
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
        
	/* store the retruned value from function to main in answer */
	answer = calculator(value1, value2, operator);

	if(error_flag == 1)
	{
		printf("denomiator cannot be 0\n");
	}
	else
	{
		printf("%lf %c %lf = %lf\n", value1, operator, value2, answer);
	}
	return 0;
}

