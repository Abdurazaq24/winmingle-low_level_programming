#include <stdio.h>
#include "main.h"

/* Write a function that prints half of a string.
*  Learning C is fun
*/

void puts_half(char *str)
{
    int len = 0;
    int i;

    while (str[len] != '\0')
    {
        len++;
    }

    if (len % 2 == 0)
        i = len / 2;
    else
        i = (len + 1) / 2;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }

    putchar('\n');
}
