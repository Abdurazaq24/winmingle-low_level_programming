#include <stdio.h>
#include <stdlib.h>
#include "time.h"

/* Write a program that assigns a random number to the variable n each time it runs and prints whether the number is positive, negative, or zero.
* Learning c is fun
*/

int main(void) {

	int n;

	srand(time(0));
	n = rand() - RAND_MAX % 10;

	if (n > 0) {
	printf("%d is positive\n", n);
	} else if (n < 0) {
	printf("%d is negative\n", n);
	} else
	{
	printf("%d is zero\n", n);
	}

	return 0;

	}
