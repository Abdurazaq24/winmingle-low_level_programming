#include <stdio.h>
#include "main.h"

/* Write a function that checks for lowercase character.
 * Learning c is fun
 */

int _islower(int c) {

	if (c >= 'a' && c <= 'z') 
	{
		return 1;

	}

	return 0;
}
