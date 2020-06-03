/* 
 * Write a program to display number of days in the given month and year using switch case statement.
 */
#include "1.h"
int main()
{
	int month, year, check_leap;

	printf("Enter the month and year as mm/yyyy format: ");
	scanf("%d/%d", &month, &year);
	/*check if leap year or not*/
	
	if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		check_leap = 1;
	}
	else
	{
		check_leap = 0;
	}
	/* 366 for leap year and 365 for not a leap year*/
	switch(check_leap)
	{
		case 0: printf("%d is not a leap year and has 365 days\n", year);
			break;
		case 1: printf("%d is leap year and has 366 days\n", year);
			break;
		default: printf("please enter a valid year");
	}
	/* for february leap year has 29 days and normal year has 28 days */
	switch(month)
	{
		case 1: printf("%dst month has 31 days\n", month);
			break;
		case 2: if(check_leap == 1)
				printf("%dnd month has 29 days\n", month);
			else
				printf("%dnd month has 28 days\n", month);
                        break;
		case 3: printf("%drd month has 31 days\n", month);
                        break;
		case 4: printf("%dth month has 30 days\n", month);
                        break;
		case 5: printf("%dth month has 31 days\n", month);
                        break;
		case 6: printf("%dth month has 30 days\n", month);
                        break;
		case 7: printf("%dth month has 31 days\n", month);
                        break;
		case 8: printf("%dth month has 31 days\n", month);
                        break;
		case 9: printf("%dth month has 30 days\n", month);
                        break;
		case 10: printf("%dth month has 31 days\n", month);
                        break;
		case 11: printf("%dth month has 30 days\n", month);
                        break;
		case 12: printf("%dth month has 31 days\n", month);
                        break;
		default: printf("please enter a valid month");
	}
	return 0;

}
