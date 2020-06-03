/*
 * Create a nested structure, access members of inner structure from outer one.
 */
#include "7.h"
struct school
{
        char schname[20];
};
struct emp
{
	int id;
	char name[20];
	
	struct faculty
	{
		char sub [20];
		char phone [10];
		struct school name;
	}f;
}e;

int main()
{
	
	printf("Enter employee id: ");
	scanf("%d", &e.id);

	printf("Enter employee name: ");
	getchar();
	gets(e.name);

	printf("Enter employee's subject: ");
	getchar();
	gets(e.f.sub);
	
	printf("Enter employee's phone number: ");
	getchar();
	gets(e.f.phone);

        printf("Enter employee's school name: ");
        getchar();
        gets(e.f.name.schname);

	printf("\n ID %d Name: %s sub: %s phone: %s school: %s\n", e.id, e.name, e.f.sub, e.f.phone, e.f.name.schname);
	return 0;
}
