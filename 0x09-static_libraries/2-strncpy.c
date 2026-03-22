#include <stdio.h>
#include "main.h"

/* Write a function that copies a string
 *  * Learning c is fun
 *   */

char *_strncpy(char *dest, char *src, int n)
{
	       
       	int i = 0;
       
	while (dest[i] != '\0')
       	{
	       	dest[i] = src[i];
	       	i++;
       	}
       
	dest[i] = '\0';
       
	return dest;

}
