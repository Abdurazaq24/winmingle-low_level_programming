#include "main.h"

/* Write a function that swaps the values of two integers.
*  Learning C is fun
*/

void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
