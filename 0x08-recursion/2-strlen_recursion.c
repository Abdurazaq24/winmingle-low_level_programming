#include <stdio.h>

/*    Write a function that returns the length of a string.
learning c is fun
*/

 int _strlen_recursion(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	return lenght;

}

