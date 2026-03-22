#include <stdio.h>
#include "main.h"

/*Find first occurrence in s of any bytes in accept.
 *  * Learning c is fun
 *   */

char *_strstr(char *haystack, char *needle)
{
	       
       	int i, j;
       
	if (needle[0] == '\0')
	       	return (haystack);
       
	for(i = 0; haystack[i] != '\0';  i++)
       	{
	       	j = 0;

		while (needle[j] != '\0'  && haystack[i +j] == needle[j])
		{
			j++;
		}
	       	if (needle[j] == '\0')
			return (&haystack[i]);
	}
	
	return 0;

}
