#include "arrayfun.h"
int array_scan_float(float arr[], int num)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

	int loop;
	for(loop = 0; loop < num; loop++)
	{
		scanf("%f", &arr[loop]);
	}
	return NO_ERROR;
}
int array_scan_int(int arr[], int num)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

	int loop;
	for(loop = 0; loop < num; loop++)
	{
		scanf("%d", &arr[loop]);
	}
	return NO_ERROR;
}


