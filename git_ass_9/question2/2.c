/*
 * Given the address of a member variable in a structure find the base
 *address of it.
 *For eg:-
 *	 struct A {
 *	int x;
 *	double y;
 *	float z;
 *	char ch;
 *	}a1;
*given address of any member x,y,z or ch , find address(base) of a1.
*/
#include "2.h"
#define base( ptr, struc, mem ) (((size_t ) ptr) - ((size_t) &( ((struc *)0) -> mem ) ))
int main()
{
	struct A 
	{
 	      	int x;
       		double y;
       		float z;
       		char ch;
       	}a1;
	printf("address (base) of a1 = %lu\n", base( &a1.z, struct  A , z  ) );
}
