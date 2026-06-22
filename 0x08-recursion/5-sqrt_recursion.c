#include "main.h"

int find_sqrt(int n, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to evaluate
 *
 * Return: natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - finds the square root recursively
 * @n: number to evaluate
 * @root: possible square root
 *
 * Return: square root if found, otherwise -1
 */
int find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (find_sqrt(n, root + 1));
}
