#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int sum = 0;
	int c;

	srand(time(NULL));

	while (sum < 2772)
	{
		c = rand() % 94 + 33;

		if (sum + c > 2772)
			continue;

		putchar(c);
		sum += c;

	}

	return 0;

}
