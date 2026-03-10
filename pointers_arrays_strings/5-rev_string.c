#include <stdio.h>

/*Write a function that reverses a string.
 * Learning c is fun
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len])
	{
	
		len++;
	}
	for (i = len -1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');

}


