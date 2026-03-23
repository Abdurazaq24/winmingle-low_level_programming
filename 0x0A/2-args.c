#include <stdio.h>

/* Print every argument, including argv[0]
 *Learing c is fun
 * Print one argument per line
 */

int main(int argc, char *argv[])
	{
		int i ;

		for(i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}

		return 0;

	}
