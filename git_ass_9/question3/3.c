/*
 * In the student structure created above modify marks member as an array(array of 5 subjects), create an array of struct variables and do some input,output operations.(Marks of ith student in jth subject etc).Find the student wise totals, subject wise totals.
*/
#include "3.h"
int main()
{
	int loop, total;
	int sum[3];
	struct student s[3];
	
	for(loop = 0; loop < 3; loop++)
	{
		s[loop] = getdata(s[loop]);
	}
	for(loop = 0; loop < 3; loop++)
        {
               printdata(s[loop]);
        }
	total = printsum(s, sum);
	for(loop = 0; loop < 3; loop++)
        {
		printf("total marks of %s is %d\n", s[loop].name, sum[loop]);
        }
	printf("total marks of all student is %d", total);
}

struct student getdata(struct student s)
{
	int loop;
        printf("*input from user*\n");
        printf("Enter the roll no. ");
        scanf("%d", &s.rollno);

        printf("Enter Name: ");
        getchar();
        gets(s.name);

	for(loop = 0; loop < 5; loop++)
	{
        	printf("Enter Subject Name: ");
        	getchar();
        	gets(s.sub[loop]);
		printf("Enter marks ");
        	scanf("%d", &s.marks[loop]);
	}
	return s;
}

void printdata(struct student s)
{
	int loop;
        printf("rollno: \t%d \nName: \t\t%s \n", s.rollno, s.name);
	for(loop = 0; loop < 5; loop++)
        {
                printf("Subject Name: \t%s \nMarks: \t%d\n",s.sub[loop], s.marks[loop]);
        }

}
int printsum(struct student s[3], int *sum)
{
	int stuno, sub, total = 0;
	for(stuno = 0; stuno < 3; stuno++)
       	{
		sum[stuno] = 0;
		for(sub = 0; sub < 5; sub++)
		{
			sum[stuno] += s[stuno].marks[sub]; 
		}
		total += sum[stuno];
	}
	return total;
}
