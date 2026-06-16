#include "main.h"
#include <stdio.h>

/* Write a function that prints an integer. Prototype: void print_number(int n); You can only use _putchar function to print You are not allowed to use long You are not allowed to use arrays or pointers You are not allowed to hard-code special values
*  Learning C is fun
*/

void print_number(int n)
{
	unsigned int num;

	if(n < 0)
	{
		putchar('-');
		num = -n;
	}
	else 
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	putchar((num % 10) + '0');
}
