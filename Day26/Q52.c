/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*  */
#include <stdio.h>

int main() {
    int i;

    // Group 1 _ 1 star
    printf("*\n\n");

    // Group 2 _ 2 stars
    for (i = 1; i <= 2; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 3 _ 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 4 _ 4 stars
    for (i = 1; i <= 4; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 5 _ 5 stars
    for (i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 6 _ 3 stars
    for (i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Group 7 _ 1 star
    printf("*\n");

    return 0;
}
