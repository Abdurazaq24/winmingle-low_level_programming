#include <stdio.h>
#include "main.h"

/*      Write a function that returns the natural square root of a number.
 *      Learning c is fun
 */

#include "main.h"

/* declare helper */
int _sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
	    if (n < 0)
		            return -1;
	        return _sqrt_helper(n, 0);
}

int _sqrt_helper(int n, int guess)
{
	    if (guess * guess == n)
		            return guess;
	        if (guess * guess > n)
			        return -1;
		    return _sqrt_helper(n, guess + 1);
}
