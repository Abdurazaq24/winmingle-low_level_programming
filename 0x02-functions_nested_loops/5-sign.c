#include "main.h"
#include <stdio.h>

/* PRINTTING SIGN OF ANY NUMBER WITH C
 * C IS FUN
 */

int print_sign(int n)
{
	if (n > 0) {
	
		putchar('+');
	        putchar('\n');
		return (1);	
	}

	else if (n < 0) {
		putchar('-');
	        putchar('\n');
		return(-1);	
	}

	else
       	{
		putchar('0');
		putchar('\n');
		return(0);
	}
}
