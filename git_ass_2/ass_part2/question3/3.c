#include "3.h"
int main()
{
	int employee_id, dept_no;
	char dsgn_code;
	
	printf("Employee Id \t\t: ");
	scanf("%d", &employee_id);
	printf("Dept No \t\t: ");
	scanf("%d", &dept_no);
	printf("Designation Code \t: ");
	scanf(" %c", &dsgn_code);
	
	printf("Employee with id %d ", employee_id);
	
	switch(dept_no)
	{
			case 10: printf("is working in ""Marketing"" department ");
				break;
			case 20: printf("is working in ""Management"" department ");
                                break;
			case 30: printf("is working in ""Sales"" department ");
                                break;
			case 40: printf("is working in ""Designing"" department ");
                                break;
			default: printf("Please enter correct department number ");
	}
	switch(dsgn_code)
	{
		case 'M': printf("as ""Manager""\n");
			  break;
		case 'S': printf("as ""Spervisor""\n");
		 	  break;
		case 's': printf("as ""Security Officer""\n");
			  break;
		case 'C': printf("as ""Clerk""\n");
			  break;
		default: printf("please enter correct code\n");
	}
}
