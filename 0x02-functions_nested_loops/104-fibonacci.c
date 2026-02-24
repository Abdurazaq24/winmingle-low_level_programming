#include <stdio.h>

/* Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Learning c is fun
 */

int main(void) 
{
	unsigned long int a1 = 0, a2 = 1,  b1 = 0, b2 = 2;
	unsigned long int sum1, sum2;
	int i;

	printf("1, 2");

	for (i = 3; i <= 98; i++) 
	{
		sum1 = a1 + b1;
		sum2 = a2 + b2;

		if (sum2 >= 100000000)
		{
			sum1 += sum2 / 100000000;
			sum2 %= 100000000;

		}

		printf(", ");
		if (sum1 != 0)
			printf("%lu%09lu", sum1, sum2);
		else
			printf("%lu", sum2);

		a1 = b1;
		a2 = b2;
		b1 = sum1;
		b2 = sum2;
	}

	printf("\n");
	return 0;

}
