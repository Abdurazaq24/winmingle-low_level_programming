#include <stdio.h> 
#include <stdlib.h>
/* Duplicate a string into heap memory
 * return a heap-allocated copy of a string.
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 0;

	if (str == NULL)
		return NULL;

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return NULL;

	for(i = 0; i <= len; i++)
		dup[i] = str[i];

	return dup;

}
