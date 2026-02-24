#include "main.h"
#include <stdio.h>

/*  Write a function that prints the n times table, starting with 0.
 *  Learning c is fun
 */

void print_times_table(int n)
{

	int i;

	for (i = 0; i <= 10; i++)
{
	printf("%d * %d = %d\n", n, i, n * i);

}

}
