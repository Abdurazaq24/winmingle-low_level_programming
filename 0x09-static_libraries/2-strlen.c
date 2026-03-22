#include <stdio.h>
#include "main.h"

int _strlen(char *s)
{
	       
       	int p = 0;
       	while (s[p])
       	{
	       	p++;
       	}
       
	return p;
}
