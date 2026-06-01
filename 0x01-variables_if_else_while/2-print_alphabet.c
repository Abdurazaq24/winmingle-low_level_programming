 #include <stdio.h>

/* Print the alphabet in lowercase, followed by a new line.
* learning c is fun
*/

int main(void) {

	char s;

	for (s = 'a'; s <= 'z'; s++){
		putchar(s);
	}

	putchar('\n');

	return 0;

}
