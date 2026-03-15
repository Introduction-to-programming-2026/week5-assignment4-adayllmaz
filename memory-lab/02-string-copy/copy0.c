// Capitalizes a string — the WRONG way
//
// Run this. Enter a lowercase word.
// Notice that BOTH s and t get capitalized, even though we only changed t.
//
// TODO: Write a comment below explaining WHY this happens:
// ANSWER: Because t = s does not create a new string .
// It only copies the memory address, so both s and t point to the same memory.
//When we change t[0], we also change s[0].

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    char s[100];
    printf("s: ");
    scanf("%99s", s);

    // This does NOT copy the string!
    // It only copies the address — s and t now point to the same memory.
    char *t = s;

    // Capitalize first letter of t
    t[0] = toupper(t[0]);

    // Print both — are they different?
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
