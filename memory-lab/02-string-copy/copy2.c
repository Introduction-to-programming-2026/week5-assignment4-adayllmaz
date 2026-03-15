// Capitalizes a copy of a string — the RIGHT way
//
// To make a true copy we must:
//   1. Allocate new memory with malloc
//   2. Copy the characters one by one into that new memory

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    char s[100];
    printf("s: ");
    scanf("%99s", s);

    // TODO: Allocate memory for t — same length as s, plus 1 for the '\0'
    char *t = malloc(strlen(s) + 1);

    for (int i = 0; i<= strlen(s); i++)
    { 
        t[i] = s[i];
    }
       
    t[0] = toupper(t[0]);

    // Print both — now only t should be capitalized
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
