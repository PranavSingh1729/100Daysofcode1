//Find the first repeating lowercase alphabet in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // For a–z letters
    int i, found = 0;

    printf("Enter a string: ");
    gets(str);  // (For safety, prefer fgets() in practice)

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Only check lowercase letters
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;  // Count occurrence

      if (freq[ch - 'a'] == 2) {  // Found repeating
      printf("First repeating lowercase alphabet: %c\n", ch);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
