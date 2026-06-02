#include <stdio.h>

/* Print the lowercase alphabet in reverse order.
*  Learning c is fun
*/

int main(void) {

	char i;

	for (i = 'z'; i >= 'a'; i--) {
		putchar(i);

	}

	putchar('\n');

	return 0;

}
