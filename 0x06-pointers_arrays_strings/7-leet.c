#include <stdio.h>

/* Encode a string into 1337 (leet speak)
 * Learning c is fun
 */

char *leet(char *s)
{
	int i, j;

	char letters[] = "aAeEoOTi";
        char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; j < 10; j++)

		{

			if (s[i] == letters[j])

			{

				s[i] = numbers[j];


			}

		}

	}

	return s;

}
