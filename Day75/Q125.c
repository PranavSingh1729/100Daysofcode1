//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char newline[200];

    // Ask user for file name
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar();  // to consume leftover newline character from scanf

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Ask user for new line to append
    printf("Enter the text to append:\n");
    fgets(newline, sizeof(newline), stdin);

    // Write (append) the line at the end of the file
    fprintf(fp, "%s", newline);

    // Close the file
    fclose(fp);

    printf("Text successfully appended to %s\n", filename);
    return 0;
}
