//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];

    // Step 1: Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Step 2: Try to open file in read mode
    fp = fopen(filename, "r");

    // Step 3: Check if file exists (fp == NULL means error)
    if (fp == NULL) {
        printf("Error: The file '%s' does not exist or cannot be opened!\n", filename);
        return 1;
    }

    // Step 4: If opened successfully, read and print contents
    printf("\nContents of '%s':\n", filename);
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Step 5: Close the file
    fclose(fp);

    return 0;
}
