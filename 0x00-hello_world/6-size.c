#include <stdio.h>

/* Pritting sizes of different types in c
 * Learning c is fun
 */

int main(void) {

	printf("Size of a char: %lu byte\n", sizeof(char));
	printf("Size of an int: %lu byte\n", sizeof(int));
	printf("Size of an long int: %lu byte\n", sizeof(long int));
	printf("Size of an long long int: %lu byte\n", sizeof(long long int));
	printf("Size of an float: %lu byte\n", sizeof(float));

	return 0;

}
