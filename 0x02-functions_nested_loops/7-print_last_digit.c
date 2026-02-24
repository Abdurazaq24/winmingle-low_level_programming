#include "main.h"
#include <stdio.h>

/* A program that print last_digit to the screen
 * Learning c is fun
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0 )

		last_digit = -last_digit;

			printf("%d\n", last_digit);

			return (last_digit);
	
}
