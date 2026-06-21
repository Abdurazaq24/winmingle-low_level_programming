#include "main.h"
#include <stdio.h>

/* Write a function that prints every other character of a string, starting with the first.
*  Learning C is fun
*/


void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
	i += 2;
	}

	putchar('\n');
}
