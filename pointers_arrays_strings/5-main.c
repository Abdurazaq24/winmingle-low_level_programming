#include <stdio.h>

void rev_string(char *s);

int main(void)
{
    char str[] = "My School";

    rev_string(str);
    printf("%s\n", str);

    return (0);
}
