#include <stdio.h>

/* Write a program that prints the minimum number of coins needed to make change for an amount of money.
 * Learning c is fun
 */

int main(void)
{
	int cents;
	int coins = 0;

	printf("Enter amount in cent: ");
	scanf("%d", &cents);

	if (cents < 0)
	{
		printf("0\n");
		return 0;

	}

	coins += cents / 25;
	cents %= 10;

	coins += cents /5;
	cents %= 5;

	coins += cents / 1;

	printf("Minimun coins: %d\n", coins);

	return 0;
}




