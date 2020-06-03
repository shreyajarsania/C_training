/*
 * Write a program to display number of days in the given year. Check condition for leap year. A
 * year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
 * years.
 * a. Without using logical operators
 * b. Using logical operators
 * c. Conditional operator
 */
#include "7.h"
int main()
{
	int year;

	printf("Enter the year to be checked without using logical operators: ");
	scanf("%d", &year);

	/* leap year is divisible by 4 and 400 but not by 100
	 * leap year without logical operators
	 */
	
	if(year % 4 == 0)
	{
		if(year % 100 != 0)
		{
			printf("%d is a leap year\n", year);
		}
		else if(year % 400 == 0)
		{
			printf("%d is a leap year\n", year);
		}
		
		else
               {
		       printf("%d is not a leap year\n", year);
	       }
	}
	else
       {
		printf("%d is not a leap year\n", year);
       }

	/*
	 * check leap year with logical operators
	 */
	printf("Enter the year to be checked using logical operators: ");
        scanf("%d", &year);

	if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) )
	{
		printf("%d is a leap year\n", year);
	}
	else
	{
		printf("%d is not a leap year\n", year);
	}
	
	/* 
	 * check leap year with conditional operator
	 */

	printf("Enter the year to be checked  using conditional operators: ");
        scanf("%d", &year);
	
	year % 4 == 0 ? ((year % 100 != 0 || year % 400 == 0) ? printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year)): printf("%d is not a leap year\n", year);

	return 0;
	
}
