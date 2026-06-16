#include "main.h"
#include <stdio.h>

/* Write a function that draws a straight line in the terminal.
*  Learning is fun
*/

void print_line(int n) {

	int i;

	for (i = 0; i < n; i++){
		putchar('_');
		}

	putchar('\n');
}

