#include <stdio.h>
#include <string.h>

struct employee
{
        int empid;
        char name[20];
        int sal;
        int year;
};

struct employee getdata(struct employee e);
void printdata(struct employee e);
int printsum(struct employee e[3]);
int minsalary(struct employee e[3]);
int maxsalary(struct employee e[3]);
int minservice(struct employee e[3]);
int maxservice(struct employee e[3]);
