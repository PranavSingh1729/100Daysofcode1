 /* Write a program to print the following pattern:
*****
 ****
  ***
   **
    *    */
#include <stdio.h>

int main() {
    int i, j;

    // 5 rows
    for (i = 1; i <= 5; i++) {
    // Print space
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = i; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
