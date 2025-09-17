/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *      */
  #include <stdio.h>

int main() {
    int n = 4; // height of top half
    int i, j;

    // Top half
    for (i = 1; i <= n; i++) {
        // Spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half (n-1 to 1)
    for (i = n - 1; i >= 1; i--) {
        // Spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
