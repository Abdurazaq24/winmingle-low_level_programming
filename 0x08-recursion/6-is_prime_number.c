#include <stdio.h>
#include "main.h"

/* Write a function that returns 1 if the input integer is a prime number, otherwise return 0
 * Learning c is fun

*/

int _prime_helper(int n, int divisor);

 int is_prime_number(int n)
{
	 if (n <= 1)
		 return 0;

	     return _prime_helper(n, 2);
}

int _prime_helper(int n, int divisor)
{
	    if (divisor * divisor > n)
		 return 1;

	    if (n % divisor == 0)
		return 0;

	    return _prime_helper(n, divisor + 1);
}


