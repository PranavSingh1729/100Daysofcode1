// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);  // (Use fgets() for safer input)

    len = strlen(name);

    // Step 1: Find the position of the last space (before surname)
    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted name: ");

    // Step 2: Print initials (all before last space)
    if (name[0] != ' ')
        printf("%c.", name[0]);  // first initial

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);  // next initials
    }

    // Step 3: Print surname in full (after last space)
    if (lastSpace != -1) {
        printf("%s\n", &name[lastSpace + 1]);
    } else {
        // if there is only one name
        printf("%s\n", name);
    }

    return 0;
}
