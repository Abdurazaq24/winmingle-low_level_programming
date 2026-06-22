#include <stdio.h>
#include "main.h"

/* Write a function that print a string in reverse
*  Learning C is fun
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
