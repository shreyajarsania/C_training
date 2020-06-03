/*
 * Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in which the point lies. Also check for special cases point lies on , ,    .
*/
#include "11.h"
int main()
{
	double x_axis, y_axis;

	printf("Enter 2 co-ordinates: ");
	scanf("%lf,%lf", &x_axis, & y_axis);

	/* range quadrants as positivity and negativity of x-coordinate, y-coordinate or both */
	if((x_axis > 0) && (y_axis > 0))
	{
		printf("%g,%g lies in 1st quadrant\n", x_axis, y_axis);
	}
	else if((x_axis < 0) && (y_axis > 0))
	{
		printf("%g,%g lies in 2nd quadrant\n", x_axis, y_axis);
	}
	else if((x_axis < 0) && (y_axis < 0))
        {
                printf("%g,%g lies in 3rd quadrant\n", x_axis, y_axis);
        }
	else if((x_axis > 0) && (y_axis < 0))
        {
                printf("%g,%g lies in 4th quadrant\n", x_axis, y_axis);
        }
	else
	{
		printf("%g,%g lies at origin\n", x_axis, y_axis);
	}
	return 0;

}
