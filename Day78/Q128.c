//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>   // for isalpha(), tolower()

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Ask user for file name
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'!\n", filename);
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        // Convert character to lowercase for uniform checking
        ch = tolower(ch);

        // Check if it's an alphabetic character
        if (isalpha(ch)) {
            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        // Ignore digits, spaces, and punctuation automatically
    }

    // Close the file
    fclose(fp);

    // Display results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

