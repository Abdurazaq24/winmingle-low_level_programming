#include  <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int next;
	int sum = 2;

	while (1)
	{
		next = a + b;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		a = b;
		b = next;

	}

	printf("%d\n", sum);

	return 0;

}
