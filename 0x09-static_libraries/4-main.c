#include "main.h"
#include <ctype.h>
/**
 * Is alpha
 * learning c is fun
 */

int main(void)
{
	int r;
	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');

	return 0;

}
