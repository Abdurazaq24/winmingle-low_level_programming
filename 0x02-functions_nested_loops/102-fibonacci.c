#include <stdio.h>

/* Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Learning c is fun
 */

int main(void) 
{
	int i;
	unsigned long a = 1, b = 2, next;

	for (i = 1; i <= 50; i++)
	{
		printf("%lu", a);

		if (i != 50)
			printf(", ");

		next = a + b;
		a = b;
		 b = next;
	}

	printf("\n");
	return 0;
}
