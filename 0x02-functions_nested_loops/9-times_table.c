#include <stdio.h>
#include "main.h"

/* Write a function that prints the 9 times table, starting with 0.
 * Learning c is fun
 */

void times_table(void) 
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++){

			result = row * col;

			if (col == 0)
			{
				putchar('0');
			}
			else
			{
				putchar(',');
				putchar(' ');

				if (result < 10)
				{
					putchar(' ');
					putchar(result + '0');
				}
				else 
				{
					putchar((result / 10) + '0');
					putchar((result % 10) + '0');
				}
			}
		}
	putchar('\n');
	}
}	

