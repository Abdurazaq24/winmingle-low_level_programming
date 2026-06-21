#include "main.h"
#include <stdio.h>

/* Write a function that prints a string, followed by a new line, to stdout.
*  Learning C is fun
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
