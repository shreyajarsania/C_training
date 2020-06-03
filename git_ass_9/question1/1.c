/*
 * Create a structure for student/employee information with suitable members and do the following
 * - Creating variables, input, output operations
 * - initialization(complete or partial) of variables
 * - create a pointer of struct type, and assign address of variable
 * - access members from the pointer using arrow operator
 * - calculate size of variable, offset of each member
 * - create alias for the structure type, pointer type using typedef
 */
#include "1.h"
#define offsetof(uni, mem) (size_t)&(((uni *)0)->mem)

int main()
{
	struct student s = {1, "shreya", 4}; //complete intitiation
	
	STU s1 = {2,"shreya"}; // partial intitation
	
	STU s2; // take input from user using the getdata function
	s2 = getdata(s2);
	
	STU s4 = {4, "shreya", 7};
	STU *ptr1 = &s4 ;// assigning the structure variable to the structure pointer 
	
	STU *ptr2;
	ptr2 = (STU *) malloc(sizeof(STU));
	ptr2->rollno = 5;
	strcpy(ptr2->name, "shreya");
	ptr2->std = 3;
	
	printf("\nfrom complete initiation\n");
	printdata(s);
	
	printf("from partial intitaltion\n");
	printdata(s1);
	
	printf("from user's input\n");
	printdata(s2);
	
	printf("from structure pointer assigning address of a variable\n");
	printptr(ptr1);
	
	printf("from intitating and printing data direct from structure pointer\n");
	printptr(ptr2);

	printf("size of variable, and members's offset addresses\n");
	printsize(s2);
	return 0;
}

/* get data */
struct student getdata(struct student s)
{
	printf("*input from user*\n");
	printf("Enter the roll no. ");
	scanf("%d", &s.rollno);
	
	printf("Enter Name: ");
	getchar();
	gets(s.name);

	printf("Enter standard: ");
	scanf("%d", &s.std);
	return s;
}

/* to print */
void printdata(struct student s)
{
        printf("rollno: \t%d \nName: \t\t%s \nStandard: \t%d\n", s.rollno, s.name, s.std);
}
void printptr(struct student *ptr)
{
        printf("rollno: \t%d \nName: \t\t%s \nStandard: \t%d\n", ptr->rollno, ptr->name, ptr->std);
}

/* to print offset and size */
void printsize(STU s)
{
	printf("\n");
	printf("size of variable is %d\n", sizeof(s));
	printf("offset of rollno is %d\n", offsetof(struct student, rollno));
	printf("offset of name %d\n", offsetof(struct student, name));
	printf("offset of std %d\n", offsetof(struct student, std));
	printf("\n");
}

