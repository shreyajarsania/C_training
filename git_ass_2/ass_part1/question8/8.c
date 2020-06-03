/*
 * Write a program that will calculate the price for a quantity entered from the keyboard, given
 * that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
 * percent discount for quantities over 50.
*/
#include "8.h"
int main()
{
	int quant, extra;
	double cost;

	printf("Enter the quantity: ");
	scanf("%d", &quant);

	/*Cost per unit is 5rs. 10% discount on quantity above 30 but below 50, and 15% discount on quantity above 50 */

	if(quant > 50)
	{
		extra = quant - 50;
		cost = (extra * 5 * 0.15) + (20 * 5 * 0.1) + (30 * 5);// 10% = 10/100 = 0.1 and 15% = 15/100 = 0.15
		printf("total cost is Rs%g\n", cost);
	}
	else if(30 < quant <= 50)
	{
		extra = quant - 30;
		cost = (extra * 5 * 0.1) + (30 * 5);
		printf("total cost is Rs%g\n", cost);
	}
	else
	{
		cost = quant * 5;
		printf("total cost is Rs%g\n", cost);
	}
	return 0;
}
