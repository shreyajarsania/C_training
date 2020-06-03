#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct student
{
        int rollno;
        char name[20];
        int std;
} STU;

struct student getdata(struct student);
void printdata(struct student s);
void printptr(struct student *ptr);
void printsize(struct student s);
