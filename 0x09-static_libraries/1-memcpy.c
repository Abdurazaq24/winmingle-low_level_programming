#include <stdio.h>
#include "main.h"

/* Write a function that copies memory area.
 *  * Learning c is fun
 *   */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	       
       	unsigned int i;
	
	for(i = 0; i <n; i++)
	{
	       	dest[i] = src[i];
       	}
	
	return dest;
}
