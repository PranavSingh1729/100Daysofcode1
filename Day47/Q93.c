//Check if two strings are anagrams of each other
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};  // To count letters a–z
    int i;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Step 1: Check if lengths match
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams (different lengths)\n");
        return 0;
    }

    // Step 2: Count frequency of each letter in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            char ch = tolower(str1[i]);
            freq[ch - 'a']++;
     }
    }
    // Step 3: Subtract frequency for letters in str2
    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            char ch = tolower(str2[i]);
            freq[ch - 'a']--;
     }
    }
    // Step 4: Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
     }
    }

    printf("Strings are anagrams\n");
    return 0;
}
