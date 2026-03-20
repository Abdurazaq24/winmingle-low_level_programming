#include <stdio.h>
#include "main.h"

 void _puts_recursion(char *s)
{
	if (s == NULL )
		return;

	while (*s)
	{
		putchar(*s);
		s++;
	}

	putchar('\n');

}
