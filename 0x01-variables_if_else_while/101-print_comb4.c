#include <stdio.h>

/* Print the alphabet in lowercase, followed by a nwe line
 * Learning c is fun
 */

int main(void)

{
	int p, q, r;
	
	for (p = 0; p <= 7; p++)
	{
		for (q = p + 1; q <= 8; q++)
		{
			for (r = q + 1; r <= 9; r++)
			

			{
				putchar(p + '0');
				putchar(q + '0');
				putchar(r + '0');

				if (!(p == 7 && q ==8 && r == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
