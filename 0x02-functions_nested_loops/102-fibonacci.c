#include <stdio.h>

/* Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Learning c is fun
 */

int main(void)
{
	int count; 
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next;

	printf ("%lu, %lu," a, b);

	for (count = 3; count <= 50; count++)
	{
		next = a + b;
		print(", %lu", next);

		a = b;
		b = next;

	}
	printf("\n")'

	return 0;
}
