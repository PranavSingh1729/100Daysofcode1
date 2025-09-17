/* Write a program to print the following pattern:
1
12
123
1234
12345 */
#include <stdio.h>

int main() {
    int i, j;

    // Loop for 5 rows
    for (i = 1; i <= 5; i++) {
        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
