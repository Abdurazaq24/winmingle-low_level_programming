#include <stdio.h>
/*  Write a function that prints a string in reverse.
 *  Learning c is fun
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	/* Find lenght of string */

	while (s[i] != '\0')
	{
		i++;
	}

	/* Print in reverse */

	for (i = i - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');

}

