#include <stdio.h>

/* Print the alphabet in lowercase, followed by a nwe line
 * Learning c is fun
 */

int main(void)

{
	char x = 'a';

	while(x <= 'z') {
	
	if (x != 'q' &&  x != 'e') 

		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);

}
