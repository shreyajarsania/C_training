/*
 * Write a program to accept a 4 digit number and
 * a. Display face value of each decimal digit
 * b. Display place value of each decimal digit
 * c. Display no in reverse order by changing decimal place values
 * If user enters a 4 digit number 9361 output should be
 * a. 9	3 6 1
 * b. 9361 = 9 000 + 300 + 60 + 9
 * c. 1639
 */
#include "7.h"
int main()
{
	int num, reverse, digit1, digit2, digit3, digit4;//declare variable

	printf("Enter a 4 digit number: ");
	scanf("%d", &num);

	digit1 = num % 10;
	num = num / 10;
	digit2 = num % 10;
	num = num / 10;
	digit3 = num % 10;
	num = num / 10;
	digit4 = num % 10;

	printf("%d\t%d\t%d\t%d\n", digit4, digit3, digit2, digit1);
	printf("%d%d%d%d = %d + %d + %d + %d\n", digit4, digit3, digit2, digit1, digit4*1000, digit3*100, digit2*10, digit1);

	reverse = (digit1 * 1000) + (digit2 * 100) + (digit3 * 10) + (digit4 * 1);

	printf("%d\n", reverse);
	return 0;
}
