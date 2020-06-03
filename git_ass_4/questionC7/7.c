/*
 * Write a function to calculate sum and product into a single function.
 * a. Using global variables (for result)
 * b. Without using global variables
 */

#include "7.h"

int result_sum = 0;
int result_pro = 0;

/* using global variable */
void fun(int *num1, int *num2)
{
	result_sum = *num1 + *num2;
	result_pro = *num1 * *num2;
}

/* without using global variable, we change the value at the address at result_s and result_p using pointer */
void fun_1(int *num1,int *num2,int *result_s,int *result_p)
{
	*result_s = *num1 + *num2;
	*result_p = *num1 * *num2;
}
int main()
{
	int num1, num2, result_s, result_p;
	
	printf("Enter 2 values to check using global variable: ");
        scanf("%d %d", &num1, &num2);
        
        fun(&num1, &num2);
        printf("sum is %d\n", result_sum);
        printf("product is %d\n", result_pro);

	printf("Enter 2 values to check without global variable: ");
	scanf("%d %d", &num1, &num2);
	
	fun_1(&num1, &num2, &result_s, &result_p);
	printf("sum is %d\n", result_s);
	printf("product is %d\n", result_p);
	
	return 0;
}

