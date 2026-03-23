#include <stdio.h>

/* Print the program name followed by a new line
 *Learning c is fun
 *
 * If the executable name changes, the output should show the new name
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%d\n", *argv[0]);
	return 0;
}
