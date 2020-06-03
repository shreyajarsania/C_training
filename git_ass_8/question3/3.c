/*
 * Write a function using variable arguments which can take any number of integer values and provide average of them.
 */
#include "3.h"
float average(int num, ...)
{
	va_list avg;

    	float sum = 0;
    	int loop;

    	va_start(avg, num);

    	for (loop = 0; loop < num; loop++)
        	sum += va_arg(avg, int);

    	va_end(avg);

    	return (sum / num);
}

int main()
{
	printf("Average of {3, 2, 5, 8} = %g\n", average(3, 2, 5, 8));
    	printf("Average of {6, 2, 4, 7, 5, 9, 1} = %g\n", average(6, 2, 4, 7, 5, 9, 1));
    	return 0;
}
