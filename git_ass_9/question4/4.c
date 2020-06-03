/*
 * Create an employee structure with the following members empid, employee name, salary, year of joining etc. Accept the data for certain no. of employees and find their total, average, max, min salary. Also find out the employees with maximum, minimum service,use a function to find service for each employee element in the array.
*/
#include "4.h"
int main()
{
        int loop, total, avg, minsal, maxsal, minyr, maxyr;
        struct employee e[3];

        for(loop = 0; loop < 3; loop++)
        {
                e[loop] = getdata(e[loop]);
        }
        for(loop = 0; loop < 3; loop++)
        {
               printdata(e[loop]);
        }
        total = printsum(e);
	avg = total / 3;
	
	printf("total salary of all employee is %d\n", total);
	printf("average salary of all employee is %d\n", avg);

	minsal= minsalary(e);
	printf("%s has minimum salary of %d\n", e[minsal].name, e[minsal].sal);

	maxsal = maxsalary(e);
	printf("%s has maximum salary of %d\n", e[maxsal].name, e[maxsal].sal);

	minyr= minservice(e);
        printf("%s has minimum serivce of %d years\n", e[minyr].name, e[minyr].year);

        maxyr = maxservice(e);
        printf("%s has maximum service of %d years\n", e[maxyr].name, e[maxyr].year);

}
/* to get the employee data */
struct employee getdata(struct employee e)
{
        printf("*input from user*\n");
        printf("Enter id ");
        scanf("%d", &e.empid);

        printf("Enter Name: ");
        getchar();
        gets(e.name);

        printf("Enter salary: ");
        scanf("%d", &e.sal);
       
       	printf("Enter year of joining: ");
        scanf("%d", &e.year);
        return e;
}

/* to print employee details */
void printdata(struct employee e)
{
        printf("employee id: \t%d \nemployee Name: \t\t%s \nemployee salary: \t%d \nyear of joining: \t%d \n", e.empid, e.name, e.sal, e.year);
}

/* to get sum of all salaries */
int printsum(struct employee e[3])
{
        int empno, total = 0;
        for(empno = 0; empno < 3; empno++)
        {
                total += e[empno].sal;
        }
        return total;
}

/* to get minimum salary employee */
int minsalary(struct employee e[3])
{
	int loop, empno;
	empno = 0;
	for(loop = 0; loop < 2; loop++)
	{
		if(e[loop].sal > e[loop + 1].sal)
		{
			empno = loop + 1;
		}
	}
	return empno;
}

/* to get maximum salary employee */
int maxsalary(struct employee e[3])
{
        int loop, empno;
        empno = 0;
        for(loop = 0; loop < 2; loop++)
        {
                if(e[loop].sal < e[loop + 1].sal)
                {
                        empno = loop + 1;
                }
        }
        return empno;
}


/* to get minimum service employee */
int minservice(struct employee e[3])
{
        int loop, empno;
        empno = 0;
        for(loop = 0; loop < 2; loop++)
        {
                if(e[loop].year < e[loop + 1].year)
                {
                        empno = loop + 1;
                }
        }
        return empno;
}

/* to get maximum service employee */
int maxservice(struct employee e[3])
{
        int loop, empno;
        empno = 0;
        for(loop = 0; loop < 2; loop++)
        {
                if(e[loop].year > e[loop + 1].year)
                {
                        empno = loop + 1;
                }
        }
        return empno;
}
