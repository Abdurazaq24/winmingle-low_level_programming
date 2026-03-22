#include <stdio.h>

int _atoi(char *s);

int main(void)
{
	          
       	printf("%d\n", _atoi("1234"));
       	printf("%d\n", _atoi("-98"));
       	printf("%d\n", _atoi("abc45"));
       	printf("%d\n", _atoi("--56"));
       
	return 0;


}
