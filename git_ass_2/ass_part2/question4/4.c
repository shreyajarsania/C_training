/*
 * Write a program to display day of week from given date (day, month and year).
 */

#include "4.h"
int main()
{
        int  month, year_100,year_400, count, final, dd, yy, mm;

        printf("Enter the date to be found in dd/mm/yyyy: ");
        scanf("%d/%d/%d", &dd, &mm, &yy);

        month = dd;//we will go on adding extra days of previous month to this date's day
        /* we use month -1 because total number of days will be affected by previous days */
        switch(mm - 1)
        {
                case 12: month += 31;
                case 11: month += 30;
                case 10: month += 31;
                case 9: month += 30;
                case 8: month += 31;
                case 7: month += 31;
                case 6: month += 30;
                case 5: month += 31;
                case 4: month += 30;
                case 3: month += 31;
                case 2: month += 28;
                case 1: month += 31;
                case 0: month = 0;
        }
        /* check if given year is leap year then add 1 day extra to it */
        if(yy % 4 == 0 && (yy % 100 != 0 || yy % 400 == 0) )
        {
               if(mm != 1 && mm!=2)
               {
                month = month + 1;
               }
        }

        /* finad extra days from the pervious years and the nadd months' days to it*/
        count = (yy - 1) / 4;
        year_100 = (yy - 1) / 100;
        year_400 = (yy -1)/ 400;
        final = (yy + month + count - year_100 + year_400) % 7;

        switch(final)
        {
                case 0: printf("Sunday\n");
                        break;
                case 1: printf("Monday\n");
                        break;
                case 2: printf("Tuesday\n");
                        break;
                case 3: printf("Wednesday\n");
                        break;
                case 4: printf("Thursday\n");
                        break;
                case 5: printf("Friday\n");
                        break;
                case 6: printf("Saturday\n");
                        break;
        }
	return 0;
}
