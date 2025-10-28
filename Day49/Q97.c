//Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name);  // (Use fgets() in safer programs)

    printf("Initials: ");

    // Step 1: Print the first letter (if not a space)
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Step 2: Loop through and print first letter after every space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c", name[i + 1]);
    }

    printf("\n");
    return 0;
}
