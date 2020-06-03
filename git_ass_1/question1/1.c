/*
 * Write a program to Accept two numbers and
 * a. find its sum.
 * b. find its difference.
 * c. find its product.
 * Test the program using different integral data type signed/unsigned char/int/long.
 * First test the result using small values. Then test the same program using large values.
 * Observe the results.
 */
#include "1.h" 
int main() 
{
	//for signed int
 	signed int sint1, sint2;
        printf("Enter 2 signed int:");
	scanf("%d %d", &sint1, &sint2);

	/* print sum difference and product*/
        printf("sum of 2 digits is: %d\n", sint1 + sint2);
        printf("difference of 2 digits is: %d\n", sint1 - sint2);
        printf("product of 2 digits is: %d\n", sint1 * sint2);

	//for unsigned int
	unsigned int uint1, uint2;
        printf("Enter 2 unsigned int:");
        scanf("%u %u", &uint1, &uint2);
	
	/* print sum difference and product*/
        printf("sum of 2 digits is: %u\n", uint1 + uint2);
        printf("difference of 2 digits is: %u\n", uint1 - uint2);
        printf("product of 2 digits is: %u\n", uint1 * uint2);

	//for signed long int
	long int slong1, slong2;
	printf("Enter 2 signed long ints:");
   	scanf("%ld %ld", &slong1, &slong2); 
	
	/* print sum difference and product*/
  	printf("sum of 2 digits is: %ld\n", slong1 + slong2); 
      	printf("difference of 2 digits is: %ld\n", slong1 - slong2);
	printf("product of 2 digits is: %ld\n", slong1 * slong2);

	//for unsigned long int
        unsigned long int ulong1, ulong2;
        printf("Enter 2 unsigned long ints:");
        scanf("%lu %lu", &ulong1, &ulong2);
	
	/* print sum difference and product*/
        printf("sum of 2 unsigned digits is: %lu\n", ulong1 + ulong2);
        printf("difference of 2 digits is: %lu\n", ulong1 - ulong2);
        printf("product of 2 digits is: %lu\n", ulong1 * ulong2);

   	//for signed char
        char schar1, schar2;
        printf("Enter 2 signed char:");
        scanf(" %c %c", &schar1, &schar2);
	
	/* print sum difference and product*/
        printf("sum of 2 digits is: %c\n", schar1 + schar2);
        printf("difference of 2 digits is: %c\n", schar1 - schar2);
        printf("product of 2 digits is: %c\n", schar1 * schar2);

        //for unsigned char
        unsigned char uchar1, uchar2;
        printf("Enter 2 unsigned char:");
        scanf(" %c %c", &uchar1, &uchar2);
	
	/* print sum difference and product*/
        printf("sum of 2 digits is: %c\n", uchar1 + uchar2);
	printf("difference of 2 digits is: %c\n", uchar1 - uchar2);
        printf("product of 2 digits is: %c\n", uchar1 * uchar2);

	return 0; 
}
