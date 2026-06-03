#include <stdio.h>

/* Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Learning c is fun
 */

void print_alphabet(void) {

	char p;

	for (p = 'a'; p <= 'z'; p++) {

		putchar(p);

	}

	putchar('\n');

}

