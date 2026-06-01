#include <stdio.h>
#include <stdlib.h>
#include "time.h"

/* Write a program that prints the last digit of a random number n.
* Learning c is fun
*/

int main(void) {

	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is %d\n", n, lastDigit);

	return 0;

}
