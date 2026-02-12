#include <stdio.h>

/* Print the alphabet in lowercase, followed by a nwe line
 * Also print alphabet in uppercase, followeed by a new line
 * Learning c is fun
 */

int main(void)

{
	char x = 'a';

	while (x <= 'z') {
		putchar( x);
		x++;
	}

	putchar('\n');

	char p = 'A';

	while (p <= 'Z') {
		putchar(p);
		p++;
	}

	return (0);

}
