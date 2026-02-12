#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Writting variable codes with c
 * learning c is fun
 */

int main(void) 

{
	int a;
	
	srand(time(NULL));

	a = rand() % 100 - 50;

	if (a > 0) 
		printf("%d is positive\n", a);
	else if (a < 0)
		printf("% is nagative\n", a);
	else
		printf("%d is zero\n", a);

	return (0);

}


