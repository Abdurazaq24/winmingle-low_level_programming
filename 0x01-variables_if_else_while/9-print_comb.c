#include <stdio.h>

/* Print all possible combinations of single-digit numbers separated by commas and spaces.
 * Learning c is fun
 */

int main(void) {

	int p;

	for (p = 0; p < 10; p++) {

		putchar(p + '0');

		if (p != 9) {

			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return 0;
}

