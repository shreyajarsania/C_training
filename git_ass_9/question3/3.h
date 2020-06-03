#include <stdio.h>
#include <string.h>

struct student
{
	int rollno;
	char name[20];
	char sub[5][20];
	int marks[5];
};

struct student getdata(struct student s);
void printdata(struct student s);
int printsum(struct student s[3], int *sum);
