#include <stdio.h>
#include "main.h"

/* C implementation of the function that checks for a lowercase character:
 * Learning c is fun
 */

int _isalpha(int c) 
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;

	return 0;

}
