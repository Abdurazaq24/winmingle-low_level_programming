#include <stdio.h>
#include "main.h"
#include <string.h>
/*  Write a function that returns 1 if a string is a palindrome and 0 if not.
 *  Learning c is fun
 */

int is_palindrome(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		if (s[i] != s[j])
			return 0;

		i++;
		j--;
	}

	return 1;
}
