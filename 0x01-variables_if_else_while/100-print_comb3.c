#include <stdio.h>

/* Print all possible different combinations of two digits.
 * Learning c is fun
 */

int main(void) {

	int a, b;

	for(a = 0; a <=8; a++) {

		for (b = a + 1; b <=9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (!(a == 8 && b == 9))
			{
				putchar(',');
				putchar(' ');

			}

		}

	}

	putchar('\n');

	return 0;

}
