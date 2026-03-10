#include <stdio.h>

/* Write a function that prints every other character of a string, starting with the first.
 * Learning c is fun
 */

void puts2(char *str)
{
	int u = 0;

	while(str[u])
	{
		if(u % 2 == 0)
			putchar(str[u]);
		u++;
	}

	putchar('\n');

}
