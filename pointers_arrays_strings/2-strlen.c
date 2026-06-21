#include "main.h"

/* Write a function that returns the length of a string.
*  Learning C is fun
*/

int _strlen(char *s)
{

	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);

}
