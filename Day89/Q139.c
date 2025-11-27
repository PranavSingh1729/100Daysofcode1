//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Color { RED = 10, GREEN, BLUE = 25, YELLOW };

int main() {
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);     // assigned 11
    printf("BLUE = %d\n", BLUE);
    printf("YELLOW = %d\n", YELLOW);   // assigned automatically  26

    return 0;
}
