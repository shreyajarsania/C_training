/*Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
 *conversion is
 *c = (5\9)*(f-32)
 *f = c*(9/5)+32
*/
#include "9.h"
int main()
{
	double temp_in_c, temp_in_f, celsius, fahrenheit;// declare variables for c f and answers
	
	printf("Give value in celsius to be converted in fahrenheit: ");
	scanf("%lf", &celsius);
	printf("Give value in fahrenheit to be converted in celsius: ");
        scanf("%lf", &fahrenheit);
	
	/* logic
	 *c = (5\9)*(f-32)
	 *f = c*(9/5)+32
	 */
	temp_in_c = (double)5/9 * (fahrenheit-32);
	temp_in_f = celsius * ((double)9/5) + 32;
	
	/*print fahrenheit and celsius*/
	printf("%g\tcelsius in fahrenheit is %g\n", celsius,temp_in_f);
	printf("%g\tfahrenheit in celsius is %g\n", fahrenheit,temp_in_c);
	return 0;

}
