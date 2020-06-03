/*
 * Analyse the following code
 * union A
* 	{
* 	int x;
*	float y;
* 	double z;
* 	int arr[2];
* 	}a1;
* 	a1.y=6.25f;
* 	printf(“x=%x\n”,a1.x);
* 	a1.z=0.15625;;
* 	printf(“%x%x\n”,a1.arr[1],a1.arr[0]);
* 	union B
*	{
*	int x;
*	short int y;
*	char ch;
*	char carr[4];
*	}b1;
*	b1.x=0x41424344;
*/
#include "9.h"
int main()
{
	int loop;
	union A
       	{
       		int x;
       		float y;
       		double z;
       		int arr[2];
       	}a1;
	
	a1.y=6.25f;
        printf("x=%x\n",a1.x);
       	
	a1.z=0.15625;
       	printf("%x %x\n",a1.arr[1],a1.arr[0]);

	union B
	{
		int x;
		short int y;
		char ch;
		char carr[4];
	}b1;
	b1.x=0x41424344;
	printf("value of b1.x: %x \nvalue of b1.y: %hd \nvalue of b1.ch: %c \n", b1.x, b1.y, b1.ch);
	for(loop = 0; loop < 4; loop++)
	{
		printf("value of carr[%d] is %d\n", loop + 1, b1.carr[loop]);
	}

	/* modify value of b1.y  and check b1.x*/
	b1.y += 10;

	printf("After modifing b1.y");
	printf("value of b1.x: %x \nvalue of b1.y: %hd \nvalue of b1.ch: %c \n", b1.x, b1.y, b1.ch);
        for(loop = 0; loop < 4; loop++)
        {
                printf("value of carr[%d] is %d\n", loop + 1, b1.carr[loop]);
        }

	/* we found that b1.x value also increased by 10 */
	return 0;
}
