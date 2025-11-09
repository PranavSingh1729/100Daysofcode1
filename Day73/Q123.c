//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>   // for isspace()

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // flag to track if we’re inside a word

    // Ask user for filename
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Read file character by character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        characters++;  // count all characters

        // Count lines
        if (ch == '\n')
            lines++;

        // Count words
        if (isspace(ch)) {
            inWord = 0;   // we’re between words
        } else if (inWord == 0) {
            inWord = 1;   // new word starts
            words++;
        }
    }

    // Close the file
    fclose(fp);

    printf("\nFile Statistics:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
