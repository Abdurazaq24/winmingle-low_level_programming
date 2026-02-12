#include <stdio.h>

/* Print the alphabet in lowercase, followed by a nwe line
 * Learning c is fun
 */

int main(void)

{
	char x = 'z';

	while (x >= 'a') {
		putchar( x);
		x--;
	}

	putchar('\n');

	return (0);

}
