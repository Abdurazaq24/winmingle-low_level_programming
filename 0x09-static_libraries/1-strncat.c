#include <stdio.h>
#include "main.h"

/* Write a function that concantenates two strings, using at most n bytes from src
 *  * Learning c is fun
 *   */

char *_strncat(char *dest, char *src, int n)
{
	       
       	int i = 0;
       	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
       	}
       
	while (src[j] != '\0' && j < n)
       	{
	       	dest[i] = src[i];

		i++;
		j++;
	}

	 dest[i] = '\0';

	 return dest;

}
