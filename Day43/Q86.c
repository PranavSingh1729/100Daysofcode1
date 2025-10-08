//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Optionally skip non-alphanumeric characters and make it case-insensitive
        while (!isalnum(str[start]) && start < end) start++;
        while (!isalnum(str[end]) && start < end) end--;

        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }

        start++;
        end--;
    }

    return 1; // It's a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
