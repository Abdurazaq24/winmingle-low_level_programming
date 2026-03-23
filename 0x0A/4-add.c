#include <stdio.h>
#include <stdlib.h>

/* Write a program that adds positive numbers.
 * Learning c is fun
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for(i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return 1;

		}

		sum += sum;

	}

	printf("%d\n", sum);

	return 0;
}
