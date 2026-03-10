#include <stdio.h>

char *_strcpy(char *dest, char *src);

int main(void)
{
	    char src[] = "Hello World";
	    char dest[20];

	    _strcpy(dest, src);

	    printf("%s\n", dest);

	    return 0;
}
