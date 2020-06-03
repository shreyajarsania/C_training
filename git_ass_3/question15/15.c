/*
 * Modify the menu driven program for four function calculator. Add a menu item to choose option exit. The program continues till user chooses option exit.
 */
#include "15.h"
int main()
{
	int num1, num2, operator;
	do
	{
		printf("Enter 2 numbers: ");
		scanf("%d %d", &num1 ,&num2);
			
		printf("1: sum, 2: difference, 3: multiplicaiton, 4: divide, 5 exit :");
                scanf("%d", &operator);

		switch(operator)
		{
			case 1: printf("summation is %d\n", num1 + num2);
				break;
			case 2: printf("difference is %d\n", num1 - num2);
                                break;
			case 3: printf("multiplication is %d\n", num1 * num2);
                                break;
			case 4: printf("division is %d\n", num1 / num2);
                                break;
		}
	}
	while(operator != 5);
	return 0;
}
