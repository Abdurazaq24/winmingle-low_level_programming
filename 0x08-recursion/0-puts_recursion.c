#include "main.h"
#include <stdio.h>

/*  Write a function that prints a string, followed by a new line.
*  Learning c is fun
*/


void _puts_recursion(char *s) 
{ 

	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);

}
