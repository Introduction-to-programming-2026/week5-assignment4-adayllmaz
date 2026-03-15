// Swaps two integers using pointers
//
// Instead of passing values, we pass the ADDRESSES of x and y.
// The function can then follow those addresses and modify the real variables.

#include <stdio.h>

// TODO: Update the signature — parameters should be int* (pointers to int)
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);

    // TODO: Pass the addresses of x and y using &
    swap(&x, &y);

    printf("x is %i, y is %i\n", x, y);
}

// TODO: Update the signature and body to use pointers
void swap(int *a, int *b)
{
    // TODO: Use *a and *b to swap the actual values in memory
    int tmp = *a;
    *a= *b;
    *b = tmp;
}
