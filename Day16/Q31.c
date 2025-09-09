//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    unsigned int mask = 1 << (sizeof(int) * 8 - 1);
    int started = 0;
    printf("Binary: ");
    for (; mask; mask >>= 1) {
        if (n & mask) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}