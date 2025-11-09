//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt .
#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *input, *output;
    char ch;

    // Open input file for reading
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: Could not open input.txt for reading!\n");
        return 1;
    }

    // Open output file for writing
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Could not open output.txt for writing!\n");
        fclose(input);
        return 1;
    }

    // Read characters from input.txt and write to output.txt
    while ((ch = fgetc(input)) != EOF) {
        // Convert lowercase to uppercase
        ch = toupper(ch);
        fputc(ch, output);
    }

    // Close both files
    fclose(input);
    fclose(output);

    printf("Conversion successful! Output written to output.txt\n");
    return 0;
}
