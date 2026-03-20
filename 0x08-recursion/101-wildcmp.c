#include <stdio.h>
#include "main.h"

/*  Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
 *  Learning c is fun
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return 0;
		i++;
	}
	
	return 1;
}

