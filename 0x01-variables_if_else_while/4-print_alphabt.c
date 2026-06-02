#include <stdio.h>

/* Print the alphabet in lowercase except letters q and e, followed by a new line.
* Learning c is fun
*/

int main(void) {

	char i;

	for (i = 'a'; i <='z'; i++) {

		if (i != 'q' && i != 'e')
			putchar(i);
	}

	putchar('\n');

	return 0;

}
