#include <stdio.h>
#include "main.h"

/* Locate character in string; return pointer to first occurrence or NULL.
 * Learning c is fun
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;

	}

	if (c == '\0')
		return (&s[i]);
	return (NULL);

	}
