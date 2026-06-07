#include "main.h"
#include <stdio.h>

/* Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Learning c is fun
 */

 void jack_bauer(void) 
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for ( min = 0; min < 60; min++) 
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');

			putchar('\n');

		}
	}
}
