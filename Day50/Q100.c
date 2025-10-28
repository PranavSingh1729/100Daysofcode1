//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    gets(str);  // (Use fgets() for safety in practice)

    len = strlen(str);

    printf("All substrings are:\n");

    // Outer loop for start index
    for (i = 0; i < len; i++) {
        // Inner loop for end index
        for (j = i; j < len; j++) {
            // Print substring from i to j
         for (k = i; k <= j; k++)
     printf("%c", str[k]);
    printf("\n");
        }
    }
    return 0;
}
