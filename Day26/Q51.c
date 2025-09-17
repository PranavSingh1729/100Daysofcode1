/* Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */
#include <stdio.h>

int main() {
    int i, j;

    // 5 rows
    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // Print numbers from (6 - i) to 5
        for (j = 6 - i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }
    return 0;
}
