#include <stdio.h>
#include "main.h"

/* Write a function that prints n elements of an array of integers.
*  Learning C is fun
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	if(i != n - 1)
	{
		printf(", ");
	}
}

	printf("\n");
}
