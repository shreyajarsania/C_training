/*
 * Try out nesting of structures, unions
 * (a) Union inside a structure
 * (b) Structure/Structures inside an union
 * (c) Union inside another union etc.
*/
#include "10.h"

/* for union inside structure,for the elements of union, only one csan initialised at a time. hence we needto store th eariler value into another variable */ 
struct
{
	int rollno;
	char name[20];
	union
	{
		int std;
		int marks;
	}u1;
}s1;

/* for struct in union, elements of  one struct can be initialised togather at a time. hence we need to store 1 struct elemtns before initializing other one */
union
{
	struct
	{
		int rollno;
		char name[20];
	}su1;
	struct
	{
		int std;
		int marks;
	}su2;
}u2;

/* union inside union works almost same as union, only one element  can be intilaized at a time */
union
{
	union
	{
		int rollno;
		char name[20];
		int std;
		int marks;
	}uu1;
}u3;
int main()
{
	printf("\n");
	/* union inside structure */
	int std;
	printf("union inside structure\n");
	printf("Enter rollno: ");
	scanf("%d", &s1.rollno);
	
	printf("Enter name: ");
	getchar();
	gets(s1.name);
	
	printf("Enter std: ");
	scanf("%d", &s1.u1.std);
	std = s1.u1.std;

	printf("Enter marks: ");
        scanf("%d", &s1.u1.marks);
	printf("rollno: \t%d \nname: \t\t%s \nstd: \t\t%d \nmarks: \t\t%d \n", s1.rollno, s1.name, std, s1.u1.marks);
	printf("\n");

	/*structures in union */
	int roll;
	char union_name[20];
	printf("structures inside union\n");
        printf("Enter rollno: ");
        scanf("%d", &u2.su1.rollno);
        roll = u2.su1.rollno;

        printf("Enter name: ");
        getchar();
        gets(u2.su1.name);
	strcpy(union_name, u2.su1.name);
        
        printf("Enter std: ");
        scanf("%d", &u2.su2.std);

        printf("Enter marks: ");
        scanf("%d", &u2.su2.marks);
        printf("rollno: \t%d \nname: \t\t%s \nstd: \t\t%d \nmarks: \t\t%d \n", roll, union_name, u2.su2.std, u2.su2.marks);
	printf("\n");

	/*union in union */
        int u_u_roll;
        char u_u_name[20];
	int u_u_std;
        printf("structures inside union\n");
        printf("Enter rollno: ");
        scanf("%d", &u3.uu1.rollno);
        u_u_roll = u3.uu1.rollno;

        printf("Enter name: ");
        getchar();
        gets(u3.uu1.name);
        strcpy(u_u_name, u3.uu1.name);

        printf("Enter std: ");
        scanf("%d", &u3.uu1.std);
	u_u_std = u3.uu1.std;

        printf("Enter marks: ");
        scanf("%d", &u3.uu1.marks);
        printf("rollno: \t%d \nname: \t\t%s \nstd: \t\t%d \nmarks: \t\t%d \n", u_u_roll, u_u_name, u_u_std, u3.uu1.marks);
	printf("\n");

	return 0;
}
