#include <stdio.h>

/* Print the alphabet in lowercase, followed by a nwe line
 * Learning c is fun
 */

int main(void)

{
	int x = 0;

	while (x <= 10) {
		putchar(x + '0');
		x++;
	}

	putchar('\n');

	return (0);

}
