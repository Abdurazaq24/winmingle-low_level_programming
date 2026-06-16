#include "main.h"
#include <stdio.h>

/* Write a function that draws a diagonal line on the terminal.
Prototype: void print_diagonal(int n);
You can only use _putchar function to print
Where n is the number of times the character \ should be printed
The diagonal should end with a \n
If n is 0 or less, the function should only print a \n
*  Learning C is fun
*/

void print_diagonal(int n) 
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}

		putchar('\\');
		putchar('\n');
}
}
