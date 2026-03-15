// Saves names and numbers to a CSV file, checking for NULL
//
// This is the safe version — always check that fopen succeeded
// before writing to the file.

#include <stdio.h>
#include <string.h>

int main(void)
{
    // TODO: Open "phonebook.csv" in append mode "a"
    FILE *file = fopen("phonebook.csv", "a");

    // TODO: Check if fopen returned NULL and return 1 if so
    if (file==NULL)
    {
        return 1;
    }

    // Get name and number from the user
    char name[100];
    char number[100];

    printf("Name: ");
    scanf("%99s",name);

    printf("Number: ");
    scanf("%99s", number);

    // TODO: Write name and number to the file as "name,number\n"
    fprintf(file, "%s,%s\n", name, number);

    // TODO: Close the file
    fclose(file);

    return 0;
}
