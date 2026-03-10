#include <stdio.h>
#include "main.h"

void puts_half(char *str) {
	int p = 0;
	int len = 0;
	int start;  

	while (str[len])
	{
		len++;
	}

	if (len % 2 == 0)
		start = len / 2;
	else 
		start = (len + 1) / 2;

	for (p = start; str[p]; p++)
	{
		putchar(str[p]);
	}

	putchar('\n');

}
