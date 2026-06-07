#include <stdio.h>

#define SIZE 3
#define BASE 1000000000

void print_big(unsigned long long n[SIZE])
{
    int i = SIZE - 1;

    while (i > 0 && n[i] == 0)
        i--;

    printf("%llu", n[i]);
    i--;

    for (; i >= 0; i--)
        printf("%09llu", n[i]);
}

void add(unsigned long long a[SIZE], unsigned long long b[SIZE], unsigned long long res[SIZE])
{
    unsigned long long carry = 0;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        res[i] = a[i] + b[i] + carry;
        if (res[i] >= BASE)
        {
            carry = res[i] / BASE;
            res[i] %= BASE;
        }
        else
        {
            carry = 0;
        }
    }
}

int main(void)
{
    int i;
    unsigned long long a[SIZE] = {1, 0, 0};
    unsigned long long b[SIZE] = {2, 0, 0};
    unsigned long long c[SIZE];

    for (i = 0; i < 98; i++)
    {
        print_big(a);

        if (i != 97)
            printf(", ");

        add(a, b, c);

        a[0] = b[0]; a[1] = b[1]; a[2] = b[2];
        b[0] = c[0]; b[1] = c[1]; b[2] = c[2];
    }

    printf("\n");
    return 0;
}
