#include <stdio.h>

void print_array(int *a, int n);

int main(void)
{
    int arr[5] = {98, 402, 1024, 0, -42};

    print_array(arr, 5);

    return (0);
}
