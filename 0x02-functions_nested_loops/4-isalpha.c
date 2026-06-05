
#include "main.h"

/* Write a function that checks for alphabetic characters.
 * Learning c is fun
 */

int _isalpha(int c) {

	if( ( c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z')) 
	{
		return 1;
	}

	return 0;

}
