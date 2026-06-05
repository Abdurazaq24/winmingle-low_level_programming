#include "main.h"
#include <stdio.h>

/* Write a function that prints the sign of a number.
 * Learning c is fun
 */

int print_sign(int n) {

	if (n > 0)
	{
		putchar('+');
		return 1;
	} else if (n == 0) {

		putchar('0');
		return 0;
	} else {
		putchar('-');
		return -1;
	}

}
