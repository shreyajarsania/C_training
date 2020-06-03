/*
 * print followimg pattern
 */
#include "22.h"
int main()
{
	int row, blank, col, space, max;
	char ch, chr;

	/*
	 * 
	 * *
	 * * *
	 * * * *
	 * * * * *
	  */
	 
	for(row = 1; row <= 5; row ++)
	{
		for(col = 1; col<= row; col++)
		{
			printf("*");
		}
		printf("\n");
	}
	 printf("\n");


	/*
	 * * * * *
	 * * * *
	 * * *
	 * *
	 *
	 */
	
	for(row = 5; row >= 1; row --)
        {
                for(col = 1; col<= row; col++)
                {
                        printf("*");
                }
                printf("\n");
        }
	printf("\n");
	
       	/*
	 1
	 1 2
	 1 2 3
	 1 2 3 4
	 1 2 3 4 5
	 */

	for(row = 1; row <= 5; row ++)
        {
                for(col = 1; col<= row; col++)
                {
                        printf("%d", col);
                }
                printf("\n");
        }
         printf("\n");
	
	 /*
	  5
	  5 4 
	  5 4 3
	  5 4 3 2
	  5 4 3 2 1
	  */
	for(row = 5; row >= 1; row --)
        {
                for(col = 5; col>= row; col--)
                {
                        printf("%d", col);
                }
                printf("\n");
        }
         printf("\n");

	 /*

                 G  
 	     E F G F E 
         C D E F G F E D C
     A B C D E F G F E D C B A 
       B C D E F G F E D C
             E F G F E
	         G 

		*/

	 /* for upper half, first print spaces, the 1st upper left part and then upper right part */

	for(row = 1; row <= 4; row++)
        {
                for(space = 1; space <= (8 - (2 * row)); space++)
                {
                        printf("  ");
                }
                ch = 'A';
                for(col = 1; col <= (2 * row - 1); col ++)
                {
                        chr = ch + (8 - (2 * row));
                        printf("%c ", chr);
                        ch++;
                }
                max = 5;
                ch = 'A';
                for(col = 1; col <=(6 - (8 -(2*row))); col++)
                {
                         chr = ch + max;
                          printf("%c ", chr);
                          max--;
                }
                printf("\n");
        }

	/* now for lower part first print spaces, then lower left part and then lower right part*/

        for(row = 1; row <= 3; row++)
        {
                for(space = 1; space <= (2*row); space++)
                {
                        printf("  ");
                }
                ch = 'A';
                for(col = 7 - (2 * row); col >= 1; col--)
                {
                        chr = ch + (2 * row);
                        printf("%c ", chr);
                        ch++;
                }
                max = 5;
                ch = 'A';
                for(col = 6 -(2 * row); col >= 1; col--)
                {
                        chr = ch + max;
                        printf("%c ", chr);
                        max--;
                }
                printf("\n");
        }


	/*
	 * A
	   B C
	   D E F
	   G H I J
	   */
	ch = 'A';
	for(row = 1; row <= 4; row++)
	{
		for(col = 1; col <= row; col++)
		{
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}
	printf("\n");
	/*
	 * A B C D
	   B C D
	   C D
	   D
	   */

	ch = 'A';
	for(row = 1; row <= 4; row++)
	{
		for(col = 4; col >= row; col--)
		{
			chr = ch + (3 - col) + row;
			printf("%c", chr);
		}
		printf("\n");
	}
	printf("\n");
	 return 0;
}
