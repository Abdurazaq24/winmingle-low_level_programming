#include <stdio.h>

/* function prototype */
char *_strcpy(char *dest, char *src);

int main(void)
{
    char src[] = "First, solve the problem. Then, write the code";
    char dest[50];

    _strcpy(dest, src);

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    return 0;
}
