#include <stdio.h>
#include "main.h"

/* Write a function that prints a triangle, followed by a new line. Prototype: void print_triangle(int size); You can only use _putchar function to print Where size is the size of the triangle If size is 0 or less, the function should print only a new line Use the character # to print the triangle
*  Learning C is fun
*/

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= size - row; space++)
	{
		putchar(' ');
	}

	for (hash = 1; hash <= row; hash++)
	{
		putchar('#');
	}
	putchar('\n');
}
}
