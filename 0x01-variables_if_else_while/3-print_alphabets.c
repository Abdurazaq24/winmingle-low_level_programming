#include <stdio.h>

/* Print the alphabet in lowercase, then uppercase, followed by a new line.
*  Learning c is fun
*/

int main(void) {

	char p;
	char q;

	for (p = 'a'; p <= 'z'; p++) 
		putchar(p);

	for (q = 'A'; q <= 'Z'; q++)
		putchar(q);
	

	putchar('\n');

	return 0;

}
