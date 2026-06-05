#include <stdio.h>

/*  Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *  Learning c is fun
 */

void print_alphabet_x10(void) {

	int i;
	char s;

	for (i = 0; i < 10; i++) 
	{
		for (s = 'a'; s <= 'z'; s++) 
		{
			putchar(s);
		}

		putchar('\n');

	}

}
