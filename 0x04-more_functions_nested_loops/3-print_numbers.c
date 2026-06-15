#include <stdio.h>
#include "main.h"

/* Write a function that prints the numbers, from 0 to 9, followed by a new line.
Learning c is fun
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++) 
	{
		putchar(i + '0');
	}
	putchar('\n');
}

