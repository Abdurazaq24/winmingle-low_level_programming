#include <stdio.h>
#include "main.h"
#include <stddef.h>

/*Return length of prefix substring matching bytes from accept.
 *  * Leaning c is fun
 *   */

unsigned int _strspn(char *s, char *accept)
{
	       
       	unsigned int i, j, count = 0;     
       	int found;
	
	for(i = 0; s[i] != '\0'; i++)
       	{
	       	found = 0;
		for (j = 0; accept[j] != '\0'; j++)
	       	{
		       	if (s[i] == accept[j])
		       	{
			       	found = 1;
			       	break;
			}

		}
		
		if (found)
			count++;
		else
			break;
	}
	
	return count;

}
