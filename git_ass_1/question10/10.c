/*
 * Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
 * triangle. Use sqrt() function from math.h to calculate square root.
 * Perimeter = a + b + c    
 * Area = √(s(s−a)(s−b)(s−c))         
 * Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.
*/
#include "10.h"
int main()
{
	double side1, side2, side3, perimeter, semi_per,area; // declare sides, perimeter, semi permeter and area for variables

	printf("Enter side1: ");
	scanf("%lf", &side1);
	printf("Enter side2: ");
        scanf("%lf", &side2);
	printf("Enter side3: ");
        scanf("%lf", &side3);
	/*
	 * perimeter = sum of all sides
	 *  semi permeter = perimeter/2
	 *  area by heron's formula
	 */
	perimeter = side1 + side2 + side3;
	semi_per = perimeter / 2;
	area=sqrt(semi_per * (semi_per-side1) * (semi_per-side2) * (semi_per-side3));

	/*
	 * print perimeter and area
	 */
	printf("perimeter =\t%g \n", perimeter);
	printf("area =\t\t%g\n", area);
	return 0;
}
