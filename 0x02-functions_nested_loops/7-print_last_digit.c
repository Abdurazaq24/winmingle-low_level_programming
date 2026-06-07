#include <stdio.h>

/* Write a function that prints the last digit of a number.
 * Learning c is fun
 */

int print_last_digit(int n) {

	int last;

	last = n % 10;

	if (n < last)

		last = -last;
	putchar(last + '0');

	return last;

}
