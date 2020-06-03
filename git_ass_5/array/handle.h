#include<stdio.h>

int array_print_float(float *ptr,int  num);
int array_print_int(int *ptr,int  num);


int array_sum_int(int *ptr, int num, int *answer);
int array_sum_float(float *ptr, int num, float *answer);

int array_avg_int(int *ptr, int num, int *answer);
int array_avg_float(float *ptr, int num, float *answer);


int array_reverse_float(float arr[], int num);
int array_reverse_int(int arr[], int num);

int array_minimum_float(float arr[], int num, float *answer);
int array_minimum_int(int arr[], int num, float *answer);


int array_maximum_float(float arr[], int num, float *answer);
int array_maximum_int(int arr[], int num, int *answer);


int array_minmax_float(float arr[], int num, float *min , float *max);
int array_minmax_int(int arr[], int num, int *min , int *max);


int array_duplicate_float(float arr[], int num, float result[], int *answer);
int array_duplicate_int(int arr[], int num, int result[], int *answer);


int array_bubble(int arr[],int elements);


int array_selection(int arr[], int elements);


int array_linear(int arr[], int elements, int num, int *index);


int array_binary(int arr[], int elements, int num, int *index);


int array_linear_null(int arr[], int elements, int num, int *index);
