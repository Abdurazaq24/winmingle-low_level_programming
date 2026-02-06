#include <stdio.h>

/* How to print the size of character
 * How to print the size of integer
 * how to print the size of long int
 * how to print the size of long long
 * And how to print the size of float
 */

int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of a int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return(0);
}
