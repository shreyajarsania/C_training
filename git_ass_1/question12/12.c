/*
 * Write a program to determine the ranges of char, short, int, and long variables, both signed and
 *unsigned, by printing appropriate values from standard headers.
 *Extend above program to print ranges for float, double, and long double. Use <float.h>.
 *“float” numbers can be printed using %f, %g, %e, %E.
*/
#include "12.h"
int main()
{
	/*print lines*/
	printf("___________________________________________________________________________________________\nData Type\t\tSize\tFormatSpecifier\tRange\n___________________________________________________________________________________________\n");
	
	/*print details of size and range of all data types*/
	printf("char\t\t\t%d\t%%c\t\t%d to %d\n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
        printf("unsigned char\t\t%d\t%%c\t\t%d to %d\n", sizeof(unsigned char), 0, UCHAR_MAX);
 	printf("short int\t\t%d\t%%hd\t\t%hd to %hd\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
        printf("unsigned short int\t%d\t%%hu\t\t%hu to %hu\n", sizeof(unsigned short int), 0, USHRT_MAX);
        printf("int\t\t\t%d\t%%d\t\t%d to %d\n", sizeof(int), INT_MIN, INT_MAX);
        printf("unsigned int\t\t%d\t%%u\t\t%u to %u\n", sizeof(unsigned int), 0, UINT_MAX);
        printf("long int\t\t%d\t%%ld\t\t%ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
        printf("unsigned long int\t%d\t%%lu\t\t%lu to %lu\n", sizeof(unsigned long int), 0, ULONG_MAX);
        printf("float\t\t\t%d\t%%f\t\t%g to %g\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("double\t\t\t%d\t%%lf\t\t%e to %e\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("long double\t\t%d\t%%llf\t\t%LE to %LE\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
	
	/*print line*/
	printf("___________________________________________________________________________________________\n");
	return 0;
}
