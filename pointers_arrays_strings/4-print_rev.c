#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;

	while (len >= 0)
	{

		putchar(s[len]);
		len--;
	}

	putchar('\n');
}
