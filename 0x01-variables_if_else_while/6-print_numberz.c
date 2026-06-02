#include <stdio.h>

/* Print all single-digit numbers of base 10 starting from 0.
* Learning c is fun 
*/

int main(void) {

	int i;

	for(i = 0; i <=9; i++) {

		putchar(i + '0');
	}

	putchar('\n');

	return 0;

}
