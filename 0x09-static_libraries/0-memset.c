#include <stdio.h>
#include "main.h"

/* Write a function that fills memory with a constant byte.
 *  * Learning c is fun
 *   */

char *_memset(char *s, char b, unsigned int n)
{
	       
       	unsigned int i;
	
	for (i = 0; i <n; i++)
       	{
		s[i] = b;
       	}
       
	return s;

}
