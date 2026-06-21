#include <stdio.h>

/* function prototype */
int _atoi(char *s);

int main(void)
{
    char s1[] = "98";
    char s2[] = "-12345";
    char s3[] = "   +42 is the answer";
    char s4[] = "words 123";

    printf("%d\n", _atoi(s1));
    printf("%d\n", _atoi(s2));
    printf("%d\n", _atoi(s3));
    printf("%d\n", _atoi(s4));

    return 0;
}
