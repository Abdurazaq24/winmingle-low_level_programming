#include <stdio.h>
#include <stdlib.h>

/* Concatenate two strings into a new buffer
 * Learning c is fun
 */

  char *str_concat(char *s1, char *s2)
{
	    int len1 = 0, len2 = 0, i = 0, j = 0;
	        char *new;  

		    /* handle NULL */
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";

		    /* find len1 */
		while (s1[len1] != '\0')
			len1++;

		    /* find len2 */
		while (s2[len2] != '\0')
			len2++;

		    /* alloc ate memory */
		new = malloc(sizeof(char) * (len1 + len2 + 1));
		if (new == NULL)
			return NULL;

		    /* copy s1 */
		while (i < len1)
		{
			new[i] = s1[i];
			i++; }
		

		    /* copy s2 */
		while (j <len2)
		{
			new[i + j] = s2[j];
			j++;
		}

		new[i + j] = '\0';
		

		    /* add '\0' */

		    return new;
}
