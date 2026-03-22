#include <stdio.h>
#include "main.h"

/* C implementation of the function that checks for a lowercase character:
 *  * Learning c is fun
 *   */

int _islower(int c)
{

	        if (c >= 'a' && c <= 'z')
			 return 1;

		return 0;

}
