/* Write a program to print the following pattern:
*
**
***
****
***** */
#include <stdio.h>

int main() {
    int i, j;

    // Loop for 5 rows
    for (i = 1; i <= 5; i++) {
        // Print stars equal to row number
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}
