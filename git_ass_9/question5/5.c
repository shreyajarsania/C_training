/*
 * Whats wrong in the following code, suggest a fix for this.
 *	struct A
 *	{
 *		int x;
 *		char *str; // (or) char str[20];
 *	};
 *	struct A a1 = { 101, “abc” } , a2;
 *	a1.x=10;
 *	a1.str=”hello”; //works?
 *	scanf(“%d%s”,&a1.x,a1.str); //works?
 *	a2 = a1; //shallow copy or deep copy?
 *	What if str is declared as an array instead of pointer, i.e. charstr[20]
 */
#include "5.h"
int main()
{
	struct A
	{
		int x;
		char str[20];
	        /* char *str; does not gives a constant pointer value and by using this we can give input to the string as a1.str  but it will not work in scanf*/
		/* char[20] gives a constant pointer hence it can accpet the string, we need to use it as strcpy(A.str, "hello"); */	
	};
	struct A a1 = { 101, "abc" } , a2;
	a1.x=10;
	strcpy(a1.str, "hello");
	//a1.str = "hello"; //works only if we use char *str
	printf("Enter int and string: ");
	scanf("%d %s",&a1.x,a1.str); //works only if we use char str[20]
	a2 = a1; //deep copy
}
