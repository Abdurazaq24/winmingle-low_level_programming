#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Printing last digit for c
 * learning c is fun
 */

int main(void)

{
	int p;
	int last_digit;

	p = rand() - RAND_MAX / 2;

	srand(time(0));

	last_digit = p % 10;

	printf("Number : %d\n", p);

	printf("Last digit  %d\n ", last_digit);

	if (last_digit > 5)
		printf("and is grater than 5\n");
	else if  (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
				
		return (0);
		
}
