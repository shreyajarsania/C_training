/*
 * Write a program to display number of days in the given month and year using
 * a. Using If else ladder.
 * b. Using logical operators.
*/

#include "9.h"
int main()
{
	int month, year, check_leap = 0;

	printf("Enter month and year in mm/yyyy format to find days using if-else: ");
	scanf("%d/%d", &month, &year);
	if(year % 4 == 0)
        {
                if(year % 100 != 0)
                {
			check_leap = 1;
                        printf("%d is a leap year and has 366 days\n", year);
                }
                else if(year % 400 == 0)
                {
			check_leap = 1;
                        printf("%d is a leap year and has 366 days\n", year);
                }

                else
               {
		       check_leap = 0;
                       printf("%d is not a leap year and has 365 days\n", year);
               }
        }
       else
       {
	       check_leap = 0;
               printf("%d is not a leap year and has 365 days\n", year);
       }


       if(month == 1)
       {
		printf("total days in this month is 31\n");
       }
	if(month == 2)
       {
	       if(check_leap == 0)
	       {
                	printf("total days in this month is 28\n");
	       }
	       else
	       {
	       		printf("total days in this month is 29\n");
	       }
       }

	if(month == 3)
       {
                printf("total days in this month is 31\n");
       }

	if(month == 4)
       {
                printf("total days in this month is 30\n");
       }

	if(month == 5)
       {
                printf("total days in this month is 31\n");
       }

	if(month == 6)
       {
                printf("total days in this month is 30\n");
       }

	if(month == 7)
       {
                printf("total days in this month is 31\n");
       }

	if(month == 8)
       {
                printf("total days in this month is 31\n");
       }

	if(month == 9)
       {
                printf("total days in this month is 30\n");
       }

	if(month == 10)
       {
                printf("total days in this month is 31\n");
       }

	if(month == 11)
       {
                printf("total days in this month is 30\n");
       }

	if(month == 12)
       {
                printf("total days in this month is 31\n");
       }

	/* program using logical operators*/

	printf("Enter month and year in mm/yyyy format to find days using logical operators: ");
        scanf("%d/%d", &month, &year);

	if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) )
        {
		check_leap = 1;
                printf("%d is a leap year and has 366 days\n", year);
        }
        else
        {
		check_leap = 0;
                printf("%d is not a leap year and has 365 days\n", year);
        }
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		printf("total days in this month is 31\n");
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf("total days in this month is 30\n");
	}
	else if(month == 2 && (check_leap == 0))
	{
		printf("total days in this month is 28\n");
	}
	else if(month == 2 && (check_leap == 1))
	{
		printf("total days in this month is 29");
	}
	return 0;

}
