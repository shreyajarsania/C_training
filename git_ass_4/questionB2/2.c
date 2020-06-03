/*
 * Write a function to calculate power using recursion.
 */
#include "2.h"

int power(int base, int index)
{
        if(index <= 0)
                return 1;
        else
                return base * power( base, index - 1);
}
int main()
{
        int base, index, answer;

        printf("Enter the base: ");
        scanf("%d", &base);
        printf("Enter the index: ");
        scanf("%d", &index);
        answer = power(base, index);

        printf("%d\n", answer);
}

