#include <stdio.h>

void set_string(char **s, char *to);

int main(void)
{
	    char *s;
	       
	    char *to = "Hello";

            set_string(&s, to);

	    printf("%s\n", s);

	    return (0);
}
