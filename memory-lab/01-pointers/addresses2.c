// Stores and prints an integer's address
// A pointer is a variable that holds a memory address.
// int *p means "p is a pointer to an int".

#include <stdio.h>

int main(void)
{
    int n = 50;

    // TODO: Declare a pointer p that stores the address of n
    int *p = &n;

    // TODO: Print the address stored in p using %p
    printf("%p\n", p);
}
