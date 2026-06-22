#include <stdio.h>
#include "main.h"

/* Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
*  Learning C is fun
*/

int check_prime(int n, int i)
{
	if (i == n)
		return 1;

	if ( n % i == 0)
		return 0;

	return (check_prime(n, i + 1));
}


/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
