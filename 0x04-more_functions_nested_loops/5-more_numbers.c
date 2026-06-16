#include <stdio.h>

/* Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
*  Learning c is fun
*/

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i ++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				putchar('1');
			}
			putchar((n % 10) + '0');
		}
		
		putchar('\n');
}
}		
