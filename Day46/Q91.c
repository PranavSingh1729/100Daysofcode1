// Remove all vowels from a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);  // Note: Use fgets() in safer code

    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is NOT a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' && str[i] != 'A' &&
            str[i] != 'E' && str[i] != 'I' && str[i] != 'O' &&
            str[i] != 'U') {
            result[j++] = str[i];  // Keep non-vowel
        }
    }

    result[j] = '\0';  // End the string

    printf("String without vowels: %s\n", result);

    return 0;
}
