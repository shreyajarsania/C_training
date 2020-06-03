/*
 *Write function to check whether given year is leap or not. Write another function to print number of days in given month.
 */

#include "10.h"
int leap(int yy)
{
	int leap;
	if(yy % 4 == 0 && (yy % 100 != 0 || yy % 400 == 0) )
        {
		 leap = 1;
        }
	else
	{
		leap = 0;
	}
	return leap;
}

void days(int month, int year)
{
	int leap_check = leap(year);
	/* check leap first and mention days accordingly */
	switch(month)
        {
		case 1: case 3: case 5: case 7: case 8:case 10: case 12: printf("%dst month has 31 days\n", month);
                                                                        break;
               
	       	case 2: if(leap_check == 1)
                                printf("%dnd month has 29 days\n", month);
                        else
                                printf("%dnd month has 28 days\n", month);
                        break;
               
	       	case 4: case 6:case 9: case 11: printf("%dth month has 30 days\n", month);
                                                break;
               
	       	default: printf("please enter a valid month");
        }
}

int main()
{
	int year, leap_check, month;
	
	printf("Enter a leap year: ");
	scanf("%d", &year);

	leap_check = leap(year);
	if(leap_check == 1)
	{
		printf("%d is a leap year\n", year);
	}
	else
	{
                printf("%d is a not leap year\n", year);
        }
	printf("Enter the month: ");
	scanf("%d", &month);
	
	days(month, year);

	return 0;
}
