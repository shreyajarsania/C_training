/*
 *Write a function to implement four function calculator. The return value indicates the error (due to zero denominator in case of division). The result is returned via out-parameter.
 */

#include "9.h"

double calculator(double *num1, double *num2, char *op, double *out, double *error)
{
        switch(*op)
        {
                case '+': *out = *num1 + *num2;
                          break;
                case '-': *out = *num1 - *num2;
                          break;
                case '*': *out =  *num1 * *num2;
                          break;
                case '/': if(*num2 == 0)
			  {
			  	*error = 1;
				break;
			  }
			  else
			  {
			  	*out =  *num1 / *num2;
			  }
			  break;
                default: printf("please enter correct operator option\n");
        }
}

int main()
{
        double value1, value2, out, error_flag;
        char operator;

        printf("Enter the equation to be solved: ");
        scanf("%lf %c %lf", &value1, &operator, &value2);

	error_flag = 0;
	calculator(&value1, &value2, &operator, &out, &error_flag);

	if(error_flag == 1)
	{
		printf("denomiator cannot be 0\n");
	}
	else
	{
		printf("%lf %c %lf = %lf\n", value1, operator, value2, out);
	}
	return 0;
}
