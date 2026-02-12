#include <stdio.h>

/* Print the alphabet in lowercase, followed by a nwe line
 * Learning c is fun
 */

int main(void)

{
	char x = 0;

	while (x <= 9) {
		putchar(x + '0');
		x++;
		if (x != 10) 
		{
			putchar(',');
			putchar(' ');
		}	
	}

	putchar('\n');
		

	return (0);

}
