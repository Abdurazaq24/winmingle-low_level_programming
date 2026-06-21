#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 84
#define TARGET_SUM 2772

/**
 * main - generates random valid password
 *
 * Return: 0
 */
int main(void)
{
    char password[PASSWORD_LEN + 1];
    int i, sum = 0;

    srand(time(NULL));

    /* generate random printable characters */
    for (i = 0; i < PASSWORD_LEN - 1; i++)
    {
        password[i] = 33 + rand() % 94; /* printable ASCII (33–126) */
        sum += password[i];
    }

    /* adjust last character to reach target sum */
    password[PASSWORD_LEN - 1] = TARGET_SUM - sum;
    password[PASSWORD_LEN] = '\0';

    printf("%s", password);

    return 0;
}
