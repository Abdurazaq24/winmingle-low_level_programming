#include <stdio.h>

int main(void) 
{
	long number = 612852475143;
	long factor = 2;
	long largest = 0;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			largest = factor;
			number = number / factor;
		}
		else
		{
			factor++;
		}
}

printf("%ld\n", largest);

return (0);

}
