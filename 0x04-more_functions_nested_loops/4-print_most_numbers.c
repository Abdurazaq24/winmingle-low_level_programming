#include <stdio.h>
#include "main.h"

/* Write a function that prints the numbers, from 0 to 9, followed by a new line.
Prototype: void print_most_numbers(void);
Do not print 2 and 4
You can only use _putchar twice in your code
*/

void print_most_numbers(void)
{	
	int p;

	for (p = 0; p <= 9; p++) 
	{
	
		if (p != 2 && p != 4)
		{
			putchar(p + '0');
		}
	
	}
	
	putchar('\n');
}

