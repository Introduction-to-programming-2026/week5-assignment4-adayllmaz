// Homework – Memory Logger
// Name: _______________
// Date: _______________
//
// Read the README.md in this folder before starting
// Homework – Memory Logger
// Name: _______________
// Date: _______________
//
// Read the README.md in this folder before starting!

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_WORDS 5

int main(void)
{
    char *words[NUM_WORDS];

    // -------------------------------------------------------
    // STEP 1 & 2: Read words and store copies in memory
    // -------------------------------------------------------
    for (int i = 0; i < NUM_WORDS; i++)
    {
        char input[100];

        printf("Enter word %i: ", i + 1);
        scanf("%99s", input);

        words[i] = malloc(strlen(input) + 1);

        if (words[i] == NULL)
        {
            printf("Memory error!\n");
            return 1;
        }

        strcpy(words[i], input);

        if (strlen(words[i]) > 0)
        {
            words[i][0] = toupper(words[i][0]);
        }
    }

    // -------------------------------------------------------
    // STEP 3: Save all words to log.txt
    // -------------------------------------------------------

    FILE *file = fopen("log.txt", "w");

    if (file == NULL)
    {
        printf("Could not open file!\n");
        return 1;
    }

    for (int i = 0; i < NUM_WORDS; i++)
    {
        fprintf(file, "%s\n", words[i]);
    }

    fclose(file);

    printf("\nWords saved to log.txt!\n");

    // -------------------------------------------------------
    // STEP 4: Free all allocated memory
    // -------------------------------------------------------

    for (int i = 0; i < NUM_WORDS; i++)
    {
        free(words[i]);
    }

    return 0;
}