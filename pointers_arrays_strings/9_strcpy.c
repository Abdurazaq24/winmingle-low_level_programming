#include <stdio.h>

/* Write a function that copies a string from src to dest
 * Learning c is fun
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{

		dest[i] = src[i];
		i++;
	}	

	dest[i] = '\0';

	return dest;

}
