/*
 * Try the following code
 *	union A
 *	{
 *	int x;
 *	int y;
 *	char ch;
 *	};
 *	union A a1;
 *	a1.x=0x10;
 *	a1.y=0x1121; print a1.x, a1.ch
 * Calculate size of union , offset of each member
 */

#include "8.h"

#define offsetof(uni, mem) (size_t)&(((uni *)0)->mem)
int main()
{
	int offset;
	union A
        {
       		int x;
        	int y;
    	        char ch;
        };
	printf("Size of union is %d\n", sizeof(union A));
	offset = offsetof(union A, x);
	printf("offset of x is %ld\n", offset);
	
	offset = offsetof(union A, y);
        printf("offset of y is %ld\n", offset);

	offset = offsetof(union A, ch);
        printf("offset of ch is %ld\n", offset);

        union A a1;
        
	a1.x=0x10;
        a1.y=0x1121; 
	printf("%x %x\n", a1.x, a1.y);
}
