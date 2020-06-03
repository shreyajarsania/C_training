/* malloc Q1- scan and print 1D array*/
#include "1.h"
int main()
{
	int *arr, num, loop;
	
	printf("Enter total numbers to add: ");
	scanf("%d", &num);
	
	arr = (int*)malloc(sizeof(int)*num);
	
	for(loop = 0; loop < num; loop++)
	{
		printf("enter the value ");
		scanf("%d", &arr[loop]);
	}
	printf("\n entered numbers are : ");
	for(loop = 0; loop < num; loop++)
	{
		printf("%d ", arr[loop]);
	}
	printf("\n");
	free(arr);
}
