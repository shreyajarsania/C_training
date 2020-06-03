#include "arrayfun.h"

/*to print*/
int array_print_float(float *ptr,int  num)
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
                printf("%g ", *ptr);
                ptr++;
        }
	return NO_ERROR;
}
int array_print_int(int *ptr,int  num)
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
                printf("%d ", *ptr);
                ptr++;
        }
	return NO_ERROR;
}


/*sum and avg */
int array_sum_int(int *ptr, int num, int *answer)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

	int loop, sum;
	for(loop = 0; loop < num; loop++)
	{
		sum += *ptr;
		ptr++;	
	}
	*answer = sum;
	return NO_ERROR;
}
int array_sum_float(float *ptr, int num, float *answer)
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
	float sum;
        for(loop = 0; loop < num; loop++)
        {
                sum += *ptr;
                ptr++;
        }
	*answer = sum;
	return NO_ERROR;
}
int array_avg_int(int *ptr, int num, int *answer)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

        int loop, sum, avg;
        for(loop = 0; loop < num; loop++)
        {
                sum += *ptr;
                ptr++;
        }
	avg = sum / num;
        *answer = avg;
	return NO_ERROR;
}
int array_avg_float(float *ptr, int num, float *answer)
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
	float sum, avg;
        for(loop = 0; loop < num; loop++)
        {
                sum += *ptr;
                ptr++;
        }
	avg = sum / num;
        *answer = avg;
	return NO_ERROR;
}




/* reverse */
int array_reverse_float(float arr[], int num)
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
	float rev;
	for(loop = 0; loop < num / 2; loop++)
	{
		rev = arr[loop];
		arr[loop] = arr[num - (loop + 1)];
		arr[num - (loop +1)] = rev;
	}
	return NO_ERROR;
}
int array_reverse_int(int arr[], int num)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

	int loop, rev;
	for(loop = 0; loop < num / 2; loop++)
	{
		rev = arr[loop];
		arr[loop] = arr[num - (loop + 1)];
		arr[num - (loop +1)] = rev;
	}
	return NO_ERROR;
}




/*minimum */
int array_minimum_float(float arr[], int num, float *answer)
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
        float min;
        min = arr[0];
        for(loop = 0; loop < num-1; loop++)
        {
                if(min > arr[loop + 1])
                {
                        min = arr[loop + 1];
                }
        }
	*answer = min;
        return NO_ERROR;
}


int array_minimum_int(int arr[], int num, int *answer)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

        int loop, min;
        min = arr[0];
        for(loop = 0; loop < num-1; loop++)
        {
                if(min < arr[loop + 1])
                {
                        min = arr[loop + 1];
                }
        }
	*answer = min;
        return NO_ERROR;
}


/*maximum */

int array_maximum_float(float arr[], int num, float *answer)
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
	float max;
	max = arr[0];
	for(loop = 0; loop < num-1; loop++)
	{
		if(max < arr[loop + 1])
		{
			max = arr[loop + 1];
		}
	}
	*answer = max;
	return NO_ERROR;
}
int array_maximum_int(int arr[], int num, int *answer)
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
        int max;
        max = arr[0];
        for(loop = 0; loop < num-1; loop++)
        {
                if(max < arr[loop + 1])
                {
                        max = arr[loop + 1];
                }
        }
	*answer = max;
        return NO_ERROR;
}




/*minmax */
int array_minmax_float(float arr[], int num, float *min , float *max)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

	float ans_min, ans_max;

	array_minimum_float(arr, num, &ans_min);
	array_maximum_float(arr, num, &ans_max);
	
	*min = ans_min;
	*max = ans_max;
	
	return NO_ERROR;
}

int array_minmax_int(int arr[], int num, int *min , int *max)
{
        if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

        float ans_min, ans_max;

        array_minimum_float(arr, num, &ans_min);
        array_maximum_float(arr, num, &ans_max);

        *min = ans_min;
        *max = ans_max;

        return NO_ERROR;
}




/*duplicate */
int array_duplicate_float(float arr[], int num, float result[], int *answer)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

	int unique, is_dup, next_num, check_num;
	float dup;
	unique = 0;

	for(next_num = 0; next_num <= num - 1; next_num++)
	{
		is_dup = 0;
		dup = arr[next_num];
		for(check_num = next_num; check_num <= num - 1; check_num++)
		{
			if(dup == arr[check_num + 1])
			{
				is_dup = 1;

				arr[check_num + 1] = 0;
			}
		}
		if(is_dup == 0 && dup != 0)
		{
			result[unique] = dup;
			unique = unique + 1;
		}
	}
	*answer = unique;
	return NO_ERROR;
}

int array_duplicate_int(int arr[], int num, int result[], int *answer)
{
	if(num == 0)
        {
                return NULL_SIZE;
        }
        else if(num < 0)
        {
                return ERR_SIZE;
        }

        int unique, is_dup, next_num, check_num;
        int dup;
        unique = 0;

        for(next_num = 0; next_num <= num - 1; next_num++)
        {
                is_dup = 0;
                dup = arr[next_num];
                for(check_num = next_num; check_num <= num - 1; check_num++)
                {
                        if(dup == arr[check_num + 1])
                        {
                                is_dup = 1;

                                arr[check_num + 1] = 0;
                        }
                }
                if(is_dup == 0 && dup != 0)
                {
                        result[unique] = dup;
                        unique = unique + 1;
                }
        }
        *answer = unique;
	return NO_ERROR;
}



/* bubble sort */
int array_bubble(int arr[],int elements)
{
	if(elements == 0)
        {
                return NULL_SIZE;
        }
        else if(elements < 0)
        {
                return ERR_SIZE;
        }

	int forward_shift, next_num, check_num;
	for(next_num = 1; next_num < elements; next_num++)
	{
		for(check_num = 0; check_num < elements - 1; check_num++)
		{
			if(arr[check_num] > arr[check_num + 1] )
			{
				forward_shift = arr[check_num];
				arr[check_num] = arr[check_num + 1];
				arr [check_num + 1] = forward_shift;
			}
		}
	}
	return NO_ERROR;
}



/* selection sort */
int array_selection(int arr[], int elements)
{
	if(elements == 0)
        {
                return NULL_SIZE;
        }
        else if(elements < 0)
        {
                return ERR_SIZE;
        }

	int next_num, check_num, min, swap;

	for(next_num = 0; next_num < elements; next_num++)
	{
		for(check_num = next_num; check_num < elements; check_num++)
		{
			if(arr[next_num] > arr[check_num])
			{
				swap = arr[next_num];
				arr[next_num] = arr[check_num];
				arr[check_num] = swap;
			}
		}
	}
	return NO_ERROR;

}



/*linear search */
int array_linear(int arr[], int elements, int num, int *index)
{
	if(elements == 0)
        {
                return NULL_SIZE;
        }
        else if(elements < 0)
        {
                return ERR_SIZE;
        }

	int check_num, is_found = 0;
	for(check_num = 0; check_num < elements; check_num++)
	{
		if(arr[check_num] == num)
		{
			is_found = 1;
			*index = check_num + 1;
			break;
		}
	}
	if(is_found == 0)
	{
		return FAIL;
	}
	else
	{
		return NO_ERROR;
	}
}



/*binary search */
int array_binary(int arr[], int elements, int num, int *index)
{
	if(elements == 0)
        {
                return NULL_SIZE;
        }
        else if(elements < 0)
        {
                return ERR_SIZE;
        }

	int check_num, is_found= 0;
	if(num <= arr[elements / 2])
	{
		for(int check_num = 0; check_num <= elements/2; check_num++)
		{
			if(arr[check_num] == num)
			{
				is_found = 1;
				*index = check_num + 1;
				break;
			}
		}
	}
	else
	{
                for(int check_num = elements / 2; check_num <= elements; check_num++)
                {
                        if(arr[check_num] == num)
                        {
	                        is_found = 1;
                                *index = check_num + 1;
                                break;
                        }
                }
        }
	if(is_found == 0)
        {
                return FAIL;
        }
        else
        {
                return NO_ERROR;
        }

}




/* linear search for null return */
int array_linear_null(int arr[], int elements, int num, int *index)
{
        if(elements == 0)
        {
                return NULL_SIZE;
        }
        else if(elements < 0)
        {
                return ERR_SIZE;
        }

        int check_num, is_found = 0;

        *index = NULL;
	for(check_num = 0; check_num < elements; check_num++)
        {
                if(arr[check_num] == num)
                {
                        is_found = 1;
                        *index = &arr[check_num];
                        break;
                }
        }
        if(is_found == 0)
        {
                return 	FAIL;
        }
        else
        {
                return NO_ERROR;
        }
}
