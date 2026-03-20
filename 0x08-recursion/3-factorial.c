#include <stdio.h>

/* Write a function that returns the factorial of a given number.
 * Learning c is fun
 */

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n-1);

}

