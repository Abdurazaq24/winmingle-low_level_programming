#include <stdio.h>
#include "main.h"

void _puts(char *str)
{
	       
       	int i = 0;
       	while(str[i])
       	{
	       	putchar(str[i]);
			i++;
	}

        putchar('\n');

}
